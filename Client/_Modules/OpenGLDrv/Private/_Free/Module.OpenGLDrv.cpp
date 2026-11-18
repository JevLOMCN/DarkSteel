// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 348

// ActiveSyncs'' @ 141057970

void __cdecl `dynamic_initializer_for_'FOpenGLGPUFence::ActiveSyncs__(void)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x18);
  FOpenGLGPUFence::ActiveSyncs.Head = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    (pTVar1->Item).GLSync = (__GLsync *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Event.Reference = (FBaseGraphTask *)0x0;
    FOpenGLGPUFence::ActiveSyncs.Head = pTVar1;
  }
  FOpenGLGPUFence::ActiveSyncs.Tail = FOpenGLGPUFence::ActiveSyncs.Head;
  atexit(`dynamic_atexit_destructor_for_'FOpenGLGPUFence::ActiveSyncs__);
  return;
}

// CVarPBCEnable'' @ 1410579c0

void __cdecl `dynamic_initializer_for_'FOpenGLProgramBinaryCache::CVarPBCEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&FOpenGLProgramBinaryCache::CVarPBCEnable,L"r.ProgramBinaryCache.Enable",local_res8,
             L"If true, enables binary program cache. Enabled by default only on Android",0x24);
  atexit(`dynamic_atexit_destructor_for_'FOpenGLProgramBinaryCache::CVarPBCEnable__);
  return;
}

// CVarRestartAndroidAfterPrecompile'' @ 141057a10

void __cdecl
`dynamic_initializer_for_'FOpenGLProgramBinaryCache::CVarRestartAndroidAfterPrecompile__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&FOpenGLProgramBinaryCache::CVarRestartAndroidAfterPrecompile,
             L"r.ProgramBinaryCache.RestartAndroidAfterPrecompile",local_res8,
             L"If true, Android apps will restart after precompiling the binary program cache.",0x24
            );
  atexit(`dynamic_atexit_destructor_for_'FOpenGLProgramBinaryCache::
         CVarRestartAndroidAfterPrecompile__);
  return;
}

// PooledQueries'' @ 141057a60

void __cdecl `dynamic_initializer_for_'FOpenGLRenderQuery::PooledQueries__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FOpenGLRenderQuery::PooledQueries__);
  return;
}

// `dynamic_initializer_for_'AllocationList'' @ 141057a80

void __cdecl _dynamic_initializer_for__AllocationList__(void)

{
  atexit(_dynamic_atexit_destructor_for__AllocationList__);
  return;
}

// `dynamic_initializer_for_'AllocationMap'' @ 141057aa0

void __cdecl _dynamic_initializer_for__AllocationMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__AllocationMap__);
  return;
}

// `dynamic_initializer_for_'CVarAllowPSOPrecaching'' @ 141057ac0

void __cdecl _dynamic_initializer_for__CVarAllowPSOPrecaching__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAllowPSOPrecaching,L"r.OpenGL.AllowPSOPrecaching",local_res8,
             L"true: if r.PSOPrecaching=1 GL RHI will use precaching. (default)\nfalse: GL RHI will disable precaching (even if r.PSOPrecaching=1). "
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAllowPSOPrecaching__);
  return;
}

// `dynamic_initializer_for_'CVarAllowRGLHIThread'' @ 141057b10

void __cdecl _dynamic_initializer_for__CVarAllowRGLHIThread__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowRGLHIThread,L"r.OpenGL.AllowRHIThread",local_res8,
             L"Toggle OpenGL RHI thread support.\n0: GL scene rendering operations are performed on the render thread.\n1: GL scene rendering operations are queued onto the RHI thread gaining some parallelism with the render thread. (default, mobile feature levels only)"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAllowRGLHIThread__);
  return;
}

// `dynamic_initializer_for_'CVarBinaryCacheMMapAfterEveryMB'' @ 141057b60

void __cdecl _dynamic_initializer_for__CVarBinaryCacheMMapAfterEveryMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBinaryCacheMMapAfterEveryMB,L"r.OpenGL.BinaryCacheMMapAfterEveryMB",
             &GBinaryCacheMMapAfterEveryMB,
             L"When r.PSOPrecaching is active this value\nspecifies the size program binary cache can grow before it is memory mapped, the mmapped programs replace the allocated programs and potentially frees up memory for unused precached programs."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarBinaryCacheMMapAfterEveryMB__);
  return;
}

// `dynamic_initializer_for_'CVarBinaryCacheMaxPermittedSizeMB'' @ 141057bb0

void __cdecl _dynamic_initializer_for__CVarBinaryCacheMaxPermittedSizeMB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBinaryCacheMaxPermittedSizeMB,L"r.OpenGL.BinaryCacheMaxPermittedSize",
             &GBinaryCacheMaxPermittedSizeMB,
             L"When r.PSOPrecaching is active and the binary cache\'s size is greater\nthan this value the cache will be deleted at startup. The precaching cache is rebuilt from empty."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarBinaryCacheMaxPermittedSizeMB__);
  return;
}

// `dynamic_initializer_for_'CVarBinaryCachePeriodicFlushProgramCount'' @ 141057c00

void __cdecl _dynamic_initializer_for__CVarBinaryCachePeriodicFlushProgramCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBinaryCachePeriodicFlushProgramCount,
             L"r.OpenGL.BinaryCachePeriodicFlushProgramCount",&GBinaryCachePeriodicFlushProgramCount
             ,
             L"When r.PSOPrecaching is active this value\nis the number of appended programs to accumulate before the cache is flushed to storage."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarBinaryCachePeriodicFlushProgramCount__);
  return;
}

// `dynamic_initializer_for_'CVarDeferTextureCreation'' @ 141057c50

void __cdecl _dynamic_initializer_for__CVarDeferTextureCreation__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDeferTextureCreation,L"r.OpenGL.DeferTextureCreation",local_res8,
             L"0: OpenGL textures are sent to the driver to be created immediately. (default)\n1: Where possible OpenGL textures are stored in system memory and created only when required for rendering.\n   This can avoid memory overhead seen in some GL drivers."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDeferTextureCreation__);
  return;
}

// `dynamic_initializer_for_'CVarDeferTextureCreationExcludeMask'' @ 141057ca0

void __cdecl _dynamic_initializer_for__CVarDeferTextureCreationExcludeMask__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -0x10100019;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDeferTextureCreationExcludeMask,L"r.OpenGL.DeferTextureCreationExcludeFlags",
             local_res8,
             L"Deferred texture creation exclusion mask, any texture requested with flags in this mask will be excluded from deferred creation."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDeferTextureCreationExcludeMask__);
  return;
}

// `dynamic_initializer_for_'CVarDeferTextureCreationKeepLowerMipCount'' @ 141057cf0

void __cdecl _dynamic_initializer_for__CVarDeferTextureCreationKeepLowerMipCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDeferTextureCreationKeepLowerMipCount,
             L"r.OpenGL.DeferTextureCreationKeepLowerMipCount",
             &GOGLDeferTextureCreationKeepLowerMipCount,
             L"Maximum number of texture mips to retain in CPU memory after a deferred texture has been sent to the driver for GPU memory creation.\n-1: to match the number of mips kept resident by the texture streamer (default).\n 0: to disable texture eviction and discard CPU mips after sending them to the driver.\n 16: keep all mips around.\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarDeferTextureCreationKeepLowerMipCount__);
  return;
}

// `dynamic_initializer_for_'CVarEnableLRU'' @ 141057d40

void __cdecl _dynamic_initializer_for__CVarEnableLRU__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableLRU,L"r.OpenGL.EnableProgramLRUCache",local_res8,
             L"OpenGL program LRU cache.\nFor use only when driver only supports a limited number of active GL programs.\n0: disable LRU. (default)\n1: When the LRU cache limits are reached, the least recently used GL program(s) will be deleted to make space for new/more recent programs. Expect hitching if requested shader is not in LRU cache."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarEnableLRU__);
  return;
}

// `dynamic_initializer_for_'CVarEnablePSOFileCacheWhenPrecachingActive'' @ 141057d90

void __cdecl _dynamic_initializer_for__CVarEnablePSOFileCacheWhenPrecachingActive__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnablePSOFileCacheWhenPrecachingActive,
             L"r.OpenGL.EnablePSOFileCacheWhenPrecachingActive",local_res8,
             L"false: If precaching is active (r.PSOPrecaching=1) then disable the PSO filecache. (default)\ntrue: GL RHI Allows both PSO file cache and precaching."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarEnablePSOFileCacheWhenPrecachingActive__);
  return;
}

// `dynamic_initializer_for_'CVarEvictUntouchedProgramSeconds'' @ 141057de0

void __cdecl _dynamic_initializer_for__CVarEvictUntouchedProgramSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEvictUntouchedProgramSeconds,L"r.OpenGL.ProgramLRUEvictTimeSeconds",
             &GUntouchedProgramEvictTimeSeconds,
             L"OpenGL Program LRU, unused program eviction time.\nTime in seconds before an unused program is eligible for eviction from the GL driver.\n0 to disable unused program eviction. (default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarEvictUntouchedProgramSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarGCacheAllProgramBinaries'' @ 141057e30

void __cdecl _dynamic_initializer_for__CVarGCacheAllProgramBinaries__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGCacheAllProgramBinaries,L"r.OpenGL.CacheAllProgramBinaries",
             &GCacheAllProgramBinaries,
             L"Place all encountered program in the binary cache.\nrequires r.PSOPrecaching.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarGCacheAllProgramBinaries__);
  return;
}

// `dynamic_initializer_for_'CVarGLDepth24Bit'' @ 141057e80

void __cdecl _dynamic_initializer_for__CVarGLDepth24Bit__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGLDepth24Bit,L"r.OpenGL.Depth24Bit",local_res8,
             L"0: Use 32-bit float depth buffer \n1: Use 24-bit fixed point depth buffer (default)\n"
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarGLDepth24Bit__);
  return;
}

// `dynamic_initializer_for_'CVarGLExtraDeletionLatency'' @ 141057ed0

void __cdecl _dynamic_initializer_for__CVarGLExtraDeletionLatency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarGLExtraDeletionLatency,L"r.OpenGL.ExtraDeletionLatency",local_res8,
             L"Toggle the engine\'s deferred deletion queue for RHI resources. (default:1)",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarGLExtraDeletionLatency__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreLinkFailure'' @ 141057f20

void __cdecl _dynamic_initializer_for__CVarIgnoreLinkFailure__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIgnoreLinkFailure,L"r.OpenGL.IgnoreLinkFailure",local_res8,
             L"Ignore OpenGL program link failures.\n0: Program link failure generates a fatal error when encountered. (default)\n1: Ignore link failures. this may allow a program to continue but could lead to undefined rendering behaviour."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreLinkFailure__);
  return;
}

// `dynamic_initializer_for_'CVarIgnoreShaderCompileFailure'' @ 141057f70

void __cdecl _dynamic_initializer_for__CVarIgnoreShaderCompileFailure__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarIgnoreShaderCompileFailure,L"r.OpenGL.IgnoreShaderCompileFailure",local_res8,
             L"Ignore OpenGL shader compile failures.\n0: Shader compile failure return an error when encountered. (default)\n1: Ignore Shader compile failures."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarIgnoreShaderCompileFailure__);
  return;
}

// `dynamic_initializer_for_'CVarLRUKeepProgramBinaryResident'' @ 141057fc0

void __cdecl _dynamic_initializer_for__CVarLRUKeepProgramBinaryResident__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLRUKeepProgramBinaryResident,L"r.OpenGL.ProgramLRUKeepBinaryResident",local_res8,
             L"OpenGL LRU should keep program binary in memory.\nDo not discard the program binary after creation of the GL program.\n0: Program binary is discarded after GL program creation and recreated on program eviction. (default)\n1: Program binary is retained, this improves eviction and re-creation performance but uses more memory."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarLRUKeepProgramBinaryResident__);
  return;
}

// `dynamic_initializer_for_'CVarLRUMaxProgramBinarySize'' @ 141058010

void __cdecl _dynamic_initializer_for__CVarLRUMaxProgramBinarySize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x2300000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLRUMaxProgramBinarySize,L"r.OpenGL.ProgramLRUBinarySize",local_res8,
             L"OpenGL LRU maximum binary shader size.\nLimit the maximum number of active shader programs at any one time.\n0: disable LRU. (default)\nNon-Zero: Maximum number of bytes active shader programs may use. If reached, least recently used shader programs will deleted."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLRUMaxProgramBinarySize__);
  return;
}

// `dynamic_initializer_for_'CVarLRUMaxProgramCount'' @ 141058060

void __cdecl _dynamic_initializer_for__CVarLRUMaxProgramCount__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 700;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLRUMaxProgramCount,L"r.OpenGL.ProgramLRUCount",local_res8,
             L"OpenGL LRU maximum occupancy.\nLimit the maximum number of active shader programs at any one time.\n0: disable LRU.\nNon-Zero: Maximum number of active shader programs, if reached least, recently used shader programs will deleted. "
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarLRUMaxProgramCount__);
  return;
}

// `dynamic_initializer_for_'CVarMaxBinaryProgramLoadTime'' @ 1410580b0

void __cdecl _dynamic_initializer_for__CVarMaxBinaryProgramLoadTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxBinaryProgramLoadTime,L"r.OpenGL.MaxBinaryProgramLoadTime",
             &GMaxBinaryProgramLoadTimeMS,
             L"The maximum time per frame to transfer programs from the binary program cache to the GL RHI. in milliseconds.\ndefault 3ms. Note: Driver compile time for programs may exceed this limit if you\'re not using the LRU."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarMaxBinaryProgramLoadTime__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSubDataSize'' @ 141058100

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarMaxSubDataSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSubDataSize,L"OpenGL.MaxSubDataSize",&MaxSubDataSize,
             L"Maximum amount of data to send to glBufferSubData in one call",4);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSubDataSize__);
  return;
}

// `dynamic_initializer_for_'CVarMemoryMapGLProgramCache'' @ 141058150

void __cdecl _dynamic_initializer_for__CVarMemoryMapGLProgramCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMemoryMapGLProgramCache,L"r.OpenGL.MemoryMapGLProgramCache",
             &GMemoryMapGLProgramCache,
             L"If true enabled memory mapping of the GL program binary cache. (default)\nIf false then upon opening the binary cache all programs are loaded into memory.\nWhen enabled this can reduce RSS pressure when combined with program LRU. (see r.OpenGL.EnableProgramLRUCache)."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarMemoryMapGLProgramCache__);
  return;
}

// `dynamic_initializer_for_'CVarOpenGLAddExtensions'' @ 1410581a0

void __cdecl _dynamic_initializer_for__CVarOpenGLAddExtensions__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarOpenGLAddExtensions,L"r.OpenGL.AddExtensions",&local_18,
             L"List of comma separated OpenGL extensions to add to a driver reported extensions string"
             ,4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarOpenGLAddExtensions__);
  return;
}

// `dynamic_initializer_for_'CVarOpenGLFenceKickPerDrawCount'' @ 141058210

void __cdecl
OpenGLConsoleVariables::_dynamic_initializer_for__CVarOpenGLFenceKickPerDrawCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOpenGLFenceKickPerDrawCount,L"r.OpenGL.FenceKickPerDrawCount",
             &GOpenGLFenceKickPerDrawCount,
             L"Insert a GL fence after the specified number of draws has been issued.\nThis hint can encourage some drivers to begin processing geometry as soon as a sufficient workload has built up.\n0: disabled (default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarOpenGLFenceKickPerDrawCount__);
  return;
}

// `dynamic_initializer_for_'CVarOpenGLForceBilinearSampling'' @ 141058260

void __cdecl
OpenGLConsoleVariables::_dynamic_initializer_for__CVarOpenGLForceBilinearSampling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOpenGLForceBilinearSampling,L"r.OpenGL.ForceBilinear",&GOpenGLForceBilinear,
             L"Force GL to override all trilinear or aniso texture filtering states to bilinear.\n0: disabled. (default)\n1: enabled."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarOpenGLForceBilinearSampling__);
  return;
}

// `dynamic_initializer_for_'CVarOpenGLStripExtensions'' @ 1410582b0

void __cdecl _dynamic_initializer_for__CVarOpenGLStripExtensions__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarOpenGLStripExtensions,L"r.OpenGL.StripExtensions",&local_18,
             L"List of comma separated OpenGL extensions to strip from a driver reported extensions string"
             ,4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarOpenGLStripExtensions__);
  return;
}

// `dynamic_initializer_for_'CVarPerFrameGLErrorCheck'' @ 141058320

void __cdecl _dynamic_initializer_for__CVarPerFrameGLErrorCheck__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerFrameGLErrorCheck,L"r.OpenGL.PerFrameErrorCheck",&GOpenGLPerFrameErrorCheck,
             L"When no other GL debugging is in use, check for GL errors once per frame.\nNot active in shipping builds.\n0: GL errors not be checked.\n1: any GL errors will be logged as errors. (default)\n2: any GL errors will be fatal.\n"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarPerFrameGLErrorCheck__);
  return;
}

// `dynamic_initializer_for_'CVarProgramLRUResidentCountBeforeEviction'' @ 141058370

void __cdecl _dynamic_initializer_for__CVarProgramLRUResidentCountBeforeEviction__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarProgramLRUResidentCountBeforeEviction,
             L"r.OpenGL.ProgramLRUResidentCountBeforeEviction",
             &GProgramLRUResidentCountBeforeEviction,
             L"The number of permanently resident programs allowed before the LRU begins evicting unused programs.\nCan help reduce hitching after a static scene is presented for an extended period of time.\n0 to remove all eligible programs as soon as possible. (max memory savings with higher hitching potential.)\n300: (default) ensures the last 300 programs are retained as GL objects."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarProgramLRUResidentCountBeforeEviction__);
  return;
}

// `dynamic_initializer_for_'CVarRebindTextureBuffers'' @ 1410583c0

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarRebindTextureBuffers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRebindTextureBuffers,L"OpenGL.RebindTextureBuffers",&bRebindTextureBuffers,
             L"If true, rebind GL_TEXTURE_BUFFER\'s to their GL_TEXTURE name whenever the buffer is modified."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRebindTextureBuffers__);
  return;
}

// `dynamic_initializer_for_'CVarSkipCompute'' @ 141058410

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarSkipCompute__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipCompute,L"OpenGL.SkipCompute",&bSkipCompute,
             L"If true, don\'t issue dispatch work.",0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipCompute__);
  return;
}

// `dynamic_initializer_for_'CVarStoreCompressedBinaries'' @ 141058460

void __cdecl UE::OpenGL::_dynamic_initializer_for__CVarStoreCompressedBinaries__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStoreCompressedBinaries,L"r.OpenGL.StoreCompressedProgramBinaries",local_res8,L"",
             0x24);
  atexit(_dynamic_atexit_destructor_for__CVarStoreCompressedBinaries__);
  return;
}

// `dynamic_initializer_for_'CVarTextureEvictionFrameCount'' @ 1410584b0

void __cdecl _dynamic_initializer_for__CVarTextureEvictionFrameCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTextureEvictionFrameCount,L"r.OpenGL.TextureEvictionFrameCount",
             &GOGLTextureEvictFramesToLive,
             L"The number of frames since a texture was last referenced before it will considered for eviction.\nTextures can only be evicted after creation if all their mips are resident, ie its mip count <= r.OpenGL.DeferTextureCreationKeepLowerMipCount."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTextureEvictionFrameCount__);
  return;
}

// `dynamic_initializer_for_'CVarTextureEvictionLogging'' @ 141058500

void __cdecl _dynamic_initializer_for__CVarTextureEvictionLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTextureEvictionLogging,L"r.OpenGL.TextureEvictionLogging",&GOGLTextureEvictLogging
             ,L"Enables debug logging for texture eviction.",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTextureEvictionLogging__);
  return;
}

// `dynamic_initializer_for_'CVarTextureEvictionMinLRUCapacity'' @ 141058550

void __cdecl _dynamic_initializer_for__CVarTextureEvictionMinLRUCapacity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTextureEvictionMinLRUCapacity,L"r.OpenGL.TextureEvictionMinLRUCapacity",
             &GOGLTextureMinLRUCapacity,
             L"Keep a minimum number of textures resident in GL When using the texture LRU\nThis can reduce LRU restore times when resuming from static scenes.\n0: (default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTextureEvictionMinLRUCapacity__);
  return;
}

// `dynamic_initializer_for_'CVarTexturesToEvictPerFrame'' @ 1410585a0

void __cdecl _dynamic_initializer_for__CVarTexturesToEvictPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTexturesToEvictPerFrame,L"r.OpenGL.TextureEvictsPerFrame",
             &GOGLTexturesToEvictPerFrame,
             L"The maximum number of evictable textures to evict per frame, limited to avoid potential driver CPU spikes.\nTextures can only be evicted after creation if all their mips are resident, ie its mip count <= r.OpenGL.DeferTextureCreationKeepLowerMipCount."
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarTexturesToEvictPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarUBODirectWrite'' @ 1410585f0

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarUBODirectWrite__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUBODirectWrite,L"OpenGL.UBODirectWrite",&bUBODirectWrite,
             L"Enables direct writes to the UBO via Buffer Storage",4);
  atexit(_dynamic_atexit_destructor_for__CVarUBODirectWrite__);
  return;
}

// `dynamic_initializer_for_'CVarUBOPoolSize'' @ 141058640

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarUBOPoolSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUBOPoolSize,L"OpenGL.UBOPoolSize",&RequestedUBOPoolSize,
             L"Size of the UBO pool, 0 disables UBO Pool",4);
  atexit(_dynamic_atexit_destructor_for__CVarUBOPoolSize__);
  return;
}

// `dynamic_initializer_for_'CVarUseBufferDiscard'' @ 141058690

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseBufferDiscard__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseBufferDiscard,L"OpenGL.UseBufferDiscard",&bUseBufferDiscard,
             L"If true, use dynamic buffer orphaning hint.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseBufferDiscard__);
  return;
}

// `dynamic_initializer_for_'CVarUseGlClipControlIfAvailable'' @ 1410586e0

void __cdecl
OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseGlClipControlIfAvailable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseGlClipControlIfAvailable,L"OpenGL.UseGlClipControlIfAvailable",
             &bUseGlClipControlIfAvailable,
             L"If true, the engine trys to use glClipControl if the driver supports it.",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarUseGlClipControlIfAvailable__);
  return;
}

// `dynamic_initializer_for_'CVarUseMapBuffer'' @ 141058730

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseMapBuffer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseMapBuffer,L"OpenGL.UseMapBuffer",&bUseMapBuffer,
             L"If true, use glMapBuffer otherwise use glBufferSubdata.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseMapBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarUsePersistentMappingStagingBuffer'' @ 141058780

void __cdecl
OpenGLConsoleVariables::_dynamic_initializer_for__CVarUsePersistentMappingStagingBuffer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUsePersistentMappingStagingBuffer,L"OpenGL.UsePersistentMappingStagingBuffer",
             &bUsePersistentMappingStagingBuffer,
             L"If true, it will use persistent mapping for the Staging Buffer.",4);
  atexit(_dynamic_atexit_destructor_for__CVarUsePersistentMappingStagingBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarUseStagingBuffer'' @ 1410587d0

void __cdecl OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseStagingBuffer__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseStagingBuffer,L"OpenGL.UseStagingBuffer",&bUseStagingBuffer,
             L"Enables maps of dynamic vertex buffers to go to a staging buffer",4);
  atexit(_dynamic_atexit_destructor_for__CVarUseStagingBuffer__);
  return;
}

// `dynamic_initializer_for_'CVarUseUnsynchronizedBufferMapping'' @ 141058820

void __cdecl
OpenGLConsoleVariables::_dynamic_initializer_for__CVarUseUnsynchronizedBufferMapping__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseUnsynchronizedBufferMapping,L"OpenGL.UseUnsynchronizedBufferMapping",
             &bUseUnsynchronizedBufferMapping,
             L"If true, use GL_MAP_UNSYNCHRONIZED_BIT when mapping write only buffers.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseUnsynchronizedBufferMapping__);
  return;
}

// `dynamic_initializer_for_'ConsoleCommandPrintProgramStats'' @ 141058870

void __cdecl _dynamic_initializer_for__ConsoleCommandPrintProgramStats__(void)

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
    puVar1[3] = PrintProgramStats;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ConsoleCommandPrintProgramStats,L"r.OpenGL.PrintProgramStats",
             L"Print to log current program binary stats",
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
  atexit(_dynamic_atexit_destructor_for__ConsoleCommandPrintProgramStats__);
  return;
}

// `dynamic_initializer_for_'GCompiledShaderCacheCS'' @ 1410589b0

void __cdecl _dynamic_initializer_for__GCompiledShaderCacheCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GCompiledShaderCacheCS,4000);
  atexit(_dynamic_atexit_destructor_for__GCompiledShaderCacheCS__);
  return;
}

// `dynamic_initializer_for_'GGLEmulatedUniformBufferDataFactoryCS'' @ 1410589e0

void __cdecl _dynamic_initializer_for__GGLEmulatedUniformBufferDataFactoryCS__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS,4000);
  atexit(_dynamic_atexit_destructor_for__GGLEmulatedUniformBufferDataFactoryCS__);
  return;
}

// `dynamic_initializer_for_'GGLUniformBufferPoolCS'' @ 141058a10

void __cdecl _dynamic_initializer_for__GGLUniformBufferPoolCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS,4000);
  atexit(_dynamic_atexit_destructor_for__GGLUniformBufferPoolCS__);
  return;
}

// `dynamic_initializer_for_'GLEmulatedUniformBufferPool'' @ 141058a40

void __cdecl _dynamic_initializer_for__GLEmulatedUniformBufferPool__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLEmulatedUniformBufferPool__);
  return;
}

// `dynamic_initializer_for_'GLUniformBufferPool'' @ 141058a60

void __cdecl _dynamic_initializer_for__GLUniformBufferPool__(void)

{
  atexit(_dynamic_atexit_destructor_for__GLUniformBufferPool__);
  return;
}

// `dynamic_initializer_for_'GOpenGLVertexDeclarationCache'' @ 141058a80

void __cdecl _dynamic_initializer_for__GOpenGLVertexDeclarationCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GOpenGLVertexDeclarationCache__);
  return;
}

// `dynamic_initializer_for_'GPendingGLProgramCreateRequestsCS'' @ 141058aa0

void __cdecl _dynamic_initializer_for__GPendingGLProgramCreateRequestsCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS,4000)
  ;
  atexit(_dynamic_atexit_destructor_for__GPendingGLProgramCreateRequestsCS__);
  return;
}

// `dynamic_initializer_for_'GProgramBinaryFileCacheCS'' @ 141058ad0

void __cdecl _dynamic_initializer_for__GProgramBinaryFileCacheCS__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS,4000);
  atexit(_dynamic_atexit_destructor_for__GProgramBinaryFileCacheCS__);
  return;
}

// `dynamic_initializer_for_'GSamplerStateCache'' @ 141058b00

void __cdecl _dynamic_initializer_for__GSamplerStateCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSamplerStateCache__);
  return;
}

// `dynamic_initializer_for_'GShaderCachePrecompileContext'' @ 141058b20

void __cdecl _dynamic_initializer_for__GShaderCachePrecompileContext__(void)

{
  atexit(_dynamic_atexit_destructor_for__GShaderCachePrecompileContext__);
  return;
}

// `dynamic_initializer_for_'LogOpenGL'' @ 141058b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenGL__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogOpenGL,L"LogOpenGL",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenGL__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpenGLDrv'' @ 141058b80

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpenGLDrv__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpenGLDrv";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpenGLDrv",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOpenGLDynamicRHIModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'SafeGLEmulatedUniformBufferPools'' @ 141058bd0

void __cdecl _dynamic_initializer_for__SafeGLEmulatedUniformBufferPools__(void)

{
  atexit(_dynamic_atexit_destructor_for__SafeGLEmulatedUniformBufferPools__);
  return;
}

// `dynamic_initializer_for_'SafeGLUniformBufferPools'' @ 141058bf0

void __cdecl _dynamic_initializer_for__SafeGLUniformBufferPools__(void)

{
  atexit(_dynamic_atexit_destructor_for__SafeGLUniformBufferPools__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLConstantBufferUpdateTime'' @ 141058c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLConstantBufferUpdateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLConstantBufferUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLConstantBufferUpdateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLConstantBufferUpdateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLConstantBufferUpdateTime,*pFVar1,
               L"Constant buffer update time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLCopyMipToMipAsyncTime'' @ 141058ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLCopyMipToMipAsyncTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLCopyMipToMipAsyncTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCopyMipToMipAsyncTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLCopyMipToMipAsyncTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCopyMipToMipAsyncTime,*pFVar1,
               L"CopyMipToMipAsync time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLCopyTextureTime'' @ 141058d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLCopyTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLCopyTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCopyTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLCopyTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCopyTextureTime,*pFVar1,
               L"CopyTexture time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLCreateBoundShaderStateTime'' @ 141058dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLCreateBoundShaderStateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLCreateBoundShaderStateTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateBoundShaderStateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLCreateBoundShaderStateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCreateBoundShaderStateTime,*pFVar1,
               L"CreateBoundShaderState time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLCreateProgramFromBinaryTime'' @ 141058e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLCreateProgramFromBinaryTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLCreateProgramFromBinaryTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateProgramFromBinaryTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLCreateProgramFromBinaryTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCreateProgramFromBinaryTime,*pFVar1,
               L"Program create from binary time","STATGROUP_OpenGLRHI","STATCAT_Advanced",
               L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLCreateTextureTime'' @ 141058ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLCreateTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLCreateTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLCreateTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLCreateTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLCreateTextureTime,*pFVar1,
               L"CreateTexture time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLEmulatedUniformBufferTime'' @ 141058f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLEmulatedUniformBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLEmulatedUniformBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLEmulatedUniformBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLEmulatedUniformBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLEmulatedUniformBufferTime,*pFVar1,
               L"Emulated Uniform buffer time","STATGROUP_OpenGLRHI","STATCAT_Advanced",
               L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLFreeUniformBufferMemory'' @ 141059000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLFreeUniformBufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLFreeUniformBufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLFreeUniformBufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLFreeUniformBufferMemory,*pFVar1,
               L"Uniform buffer pool memory","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLLockTextureTime'' @ 141059090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLLockTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLLockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLLockTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLLockTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLLockTextureTime,*pFVar1,
               L"LockTexture time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLNumFreeUniformBuffers'' @ 141059120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLNumFreeUniformBuffers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLNumFreeUniformBuffers ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLNumFreeUniformBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLNumFreeUniformBuffers,*pFVar1,
               L"Uniform buffer pool num free","STATGROUP_OpenGLRHI","STATCAT_Advanced",
               L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLPresentTime'' @ 1410591b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLPresentTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLPresentTime == (FThreadSafeStaticStat<FStat_STAT_OpenGLPresentTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLPresentTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLPresentTime,*pFVar1,L"Present time",
               "STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLProgramBinaryMemory'' @ 141059240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLProgramBinaryMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLProgramBinaryMemory ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramBinaryMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLProgramBinaryMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLProgramBinaryMemory,*pFVar1,
               L"Active Program binary memory (estimate driver use)","STATGROUP_OpenGLRHI",
               "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLProgramCount'' @ 1410592d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLProgramCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLProgramCount == (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramCount>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLProgramCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLProgramCount,*pFVar1,
               L"GL Program count","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,false
               ,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderBindParameterTime'' @ 141059360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderBindParameterTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderBindParameterTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderBindParameterTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderBindParameterTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderBindParameterTime,*pFVar1,
               L"Shader bind param time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderCompileTime'' @ 1410593f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderCompileTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderCompileTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderCompileTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderCompileTime,*pFVar1,
               L"Shader compile time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderCompileVerifyTime'' @ 141059480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderCompileVerifyTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderCompileVerifyTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileVerifyTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderCompileVerifyTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderCompileVerifyTime,*pFVar1,
               L"Shader compile verify time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderFirstDrawTime'' @ 141059510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderFirstDrawTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderFirstDrawTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderFirstDrawTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderFirstDrawTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderFirstDrawTime,*pFVar1,
               L"Time for first draw of shader programs","STATGROUP_OpenGLRHI","STATCAT_Advanced",
               L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLRUEvictTime'' @ 1410595a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLRUEvictTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLRUEvictTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLRUEvictTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUEvictTime,*pFVar1,
               L"Program LRU cache eviction time","STATGROUP_OpenGLRHI","STATCAT_Advanced",
               L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount'' @ 141059630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUEvictedProgramCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLRUEvictedProgramCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUEvictedProgramCount,*pFVar1
               ,L"Program LRU evicted count","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLRUMissCount'' @ 1410596c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLRUMissCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLRUMissCount ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLRUMissCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUMissCount,*pFVar1,
               L"Program LRU miss count","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true
               ,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLRUMissTime'' @ 141059750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLRUMissTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLRUMissTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUMissTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLRUMissTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUMissTime,*pFVar1,
               L"Program LRU cache miss time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLRUProgramCount'' @ 1410597e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLRUProgramCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLRUProgramCount ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLRUProgramCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUProgramCount,*pFVar1,
               L"Program LRU count","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLRUProgramMemory'' @ 141059870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLRUProgramMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLRUProgramMemory ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLRUProgramMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUProgramMemory,*pFVar1,
               L"Program LRU memory (evicted, heap)","STATGROUP_OpenGLRHI","STATCAT_Advanced",
               L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped'' @ 141059900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLRUProgramMemoryMapped>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLRUProgramMemoryMapped");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLRUProgramMemoryMapped,*pFVar1
               ,L"Program LRU mem mapped (evicted, filemapped)","STATGROUP_OpenGLRHI",
               "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLinkTime'' @ 141059990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLinkTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLinkTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLinkTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLinkTime,*pFVar1,
               L"Shader link time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLShaderLinkVerifyTime'' @ 141059a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLShaderLinkVerifyTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLShaderLinkVerifyTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkVerifyTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLShaderLinkVerifyTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLinkVerifyTime,*pFVar1,
               L"Shader link verify time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLUniformBufferCleanupTime'' @ 141059ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLUniformBufferCleanupTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLUniformBufferCleanupTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUniformBufferCleanupTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLUniformBufferCleanupTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUniformBufferCleanupTime,*pFVar1,
               L"Uniform buffer pool cleanup time","STATGROUP_OpenGLRHI","STATCAT_Advanced",
               L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLUniformCommitTime'' @ 141059b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLUniformCommitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLUniformCommitTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUniformCommitTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLUniformCommitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUniformCommitTime,*pFVar1,
               L"Uniform commit time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLUnlockTextureTime'' @ 141059bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLUnlockTextureTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLUnlockTextureTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUnlockTextureTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLUnlockTextureTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUnlockTextureTime,*pFVar1,
               L"UnlockTexture time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLUploadTextureMipTime'' @ 141059c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLUploadTextureMipTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLUploadTextureMipTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUploadTextureMipTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLUploadTextureMipTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUploadTextureMipTime,*pFVar1,
               L"UploadTextureMip time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OpenGLUseCachedProgramTime'' @ 141059cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OpenGLUseCachedProgramTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OpenGLUseCachedProgramTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUseCachedProgramTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_OpenGLUseCachedProgramTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUseCachedProgramTime,*pFVar1,
               L"Program get from cache time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'UBOPool'' @ 141059d80

void __cdecl _dynamic_initializer_for__UBOPool__(void)

{
  atexit(_dynamic_atexit_destructor_for__UBOPool__);
  return;
}

// `dynamic_initializer_for_'UniformBufferDataFactory'' @ 141059da0

void __cdecl _dynamic_initializer_for__UniformBufferDataFactory__(void)

{
  atexit(_dynamic_atexit_destructor_for__UniformBufferDataFactory__);
  return;
}

// `dynamic_initializer_for_'UniformBufferSizeBuckets'' @ 141059dc0

void __cdecl _dynamic_initializer_for__UniformBufferSizeBuckets__(void)

{
  atexit(_dynamic_atexit_destructor_for__UniformBufferSizeBuckets__);
  return;
}

// `scalar_deleting_destructor' @ 145bd63d0

void * __thiscall
FOpenGLDynamicRHIModule::_scalar_deleting_destructor_(FOpenGLDynamicRHIModule *this,uint param_1)

{
  *this = (FOpenGLDynamicRHIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<<<char,TSizedDefaultAllocator<32>_> @ 145bd6410

FArchive * __cdecl
operator<<<char,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
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
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1000001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_> @ 145bd6420

FArchive * __cdecl
operator<<<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FOpenGLShaderVarying *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
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
      DestructItems<FOpenGLShaderVarying,int>
                ((FOpenGLShaderVarying *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
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
              operator<<(param_1,(FOpenGLShaderVarying *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FOpenGLShaderVarying *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
              DefaultConstructItems<FOpenGLShaderVarying,int>(pFVar2,1);
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

// FPackedArrayInfo,TSizedDefaultAllocator<32>_> @ 145bd6430

FArchive * __cdecl
operator<<<CrossCompiler::FPackedArrayInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *param_2)

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
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
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
               bVar4)) break;
            CrossCompiler::operator<<
                      (param_1,(FPackedArrayInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x204,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          CrossCompiler::operator<<
                    (param_1,(FPackedArrayInfo *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
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

// FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 145bd6440

FArchive * __cdecl
operator<<<TArray<CrossCompiler::
FPackedArrayInfo_TSizedDefaultAllocator<32>_>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
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
  TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
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
      DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
                ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            TArrayPrivateFriend::
            Serialize<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>
                                *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10)
                      );
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          TArrayPrivateFriend::
          Serialize<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// ApplyStaticUniformBuffers<`FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIComputeShader>'::__l5::<lambda_1>_> @ 145bd6cf0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIComputeShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  EShaderFrequency EVar2;
  FRHIUniformBuffer *pFVar3;
  FOpenGLDynamicRHI *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar1 = *(byte *)(uVar11 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar7 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar3,bVar1,*(uint *)(param_1->_padding_ + uVar11 * 4));
        if (pFVar3 != (FRHIUniformBuffer *)0x0) {
          EVar2 = param_3->ShaderFrequency;
          pFVar4 = param_3->__this;
          (pFVar4->PendingState).BoundUniformBuffers[EVar2][uVar10] = pFVar3;
          (pFVar4->PendingState).BoundUniformBuffersDynamicOffset[EVar2][uVar10] = 0;
          (pFVar4->PendingState).DirtyUniformBuffers[EVar2] =
               (pFVar4->PendingState).DirtyUniformBuffers[EVar2] | (ushort)(1 << (uVar9 & 0x1f));
          (pFVar4->PendingState).bAnyDirtyGraphicsUniformBuffers = true;
          if ((GUseEmulatedUniformBuffers == false) ||
             (*(char *)((longlong)&pFVar3[1]._padding_ + 5) == '\0')) {
            (pFVar4->PendingState).bAnyDirtyRealUniformBuffers[EVar2] = true;
          }
        }
      }
      iVar8 = (int)param_1->_padding_;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return;
}

// ApplyStaticUniformBuffers<`FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIGeometryShader>'::__l5::<lambda_1>_> @ 145bd6f30

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIGeometryShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  EShaderFrequency EVar2;
  FRHIUniformBuffer *pFVar3;
  FOpenGLDynamicRHI *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar1 = *(byte *)(uVar11 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar7 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar3,bVar1,*(uint *)(param_1->_padding_ + uVar11 * 4));
        if (pFVar3 != (FRHIUniformBuffer *)0x0) {
          EVar2 = param_3->ShaderFrequency;
          pFVar4 = param_3->__this;
          (pFVar4->PendingState).BoundUniformBuffers[EVar2][uVar10] = pFVar3;
          (pFVar4->PendingState).BoundUniformBuffersDynamicOffset[EVar2][uVar10] = 0;
          (pFVar4->PendingState).DirtyUniformBuffers[EVar2] =
               (pFVar4->PendingState).DirtyUniformBuffers[EVar2] | (ushort)(1 << (uVar9 & 0x1f));
          (pFVar4->PendingState).bAnyDirtyGraphicsUniformBuffers = true;
          if ((GUseEmulatedUniformBuffers == false) ||
             (*(char *)((longlong)&pFVar3[1]._padding_ + 5) == '\0')) {
            (pFVar4->PendingState).bAnyDirtyRealUniformBuffers[EVar2] = true;
          }
        }
      }
      iVar8 = (int)param_1->_padding_;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return;
}

// ApplyStaticUniformBuffers<`FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIPixelShader>'::__l5::<lambda_1>_> @ 145bd7170

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIPixelShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  EShaderFrequency EVar2;
  FRHIUniformBuffer *pFVar3;
  FOpenGLDynamicRHI *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar1 = *(byte *)(uVar11 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar7 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar3,bVar1,*(uint *)(param_1->_padding_ + uVar11 * 4));
        if (pFVar3 != (FRHIUniformBuffer *)0x0) {
          EVar2 = param_3->ShaderFrequency;
          pFVar4 = param_3->__this;
          (pFVar4->PendingState).BoundUniformBuffers[EVar2][uVar10] = pFVar3;
          (pFVar4->PendingState).BoundUniformBuffersDynamicOffset[EVar2][uVar10] = 0;
          (pFVar4->PendingState).DirtyUniformBuffers[EVar2] =
               (pFVar4->PendingState).DirtyUniformBuffers[EVar2] | (ushort)(1 << (uVar9 & 0x1f));
          (pFVar4->PendingState).bAnyDirtyGraphicsUniformBuffers = true;
          if ((GUseEmulatedUniformBuffers == false) ||
             (*(char *)((longlong)&pFVar3[1]._padding_ + 5) == '\0')) {
            (pFVar4->PendingState).bAnyDirtyRealUniformBuffers[EVar2] = true;
          }
        }
      }
      iVar8 = (int)param_1->_padding_;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return;
}

// ApplyStaticUniformBuffers<`FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIVertexShader>'::__l5::<lambda_1>_> @ 145bd73b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl
UE::RHICore::
ApplyStaticUniformBuffers<_FOpenGLDynamicRHI::ApplyStaticUniformBuffers<FRHIVertexShader>_::__l5::<lambda_1>_>
          (FRHIShader *param_1,TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> *param_3)

{
  byte bVar1;
  EShaderFrequency EVar2;
  FRHIUniformBuffer *pFVar3;
  FOpenGLDynamicRHI *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = 0;
  if (((int)param_1->_padding_ != (int)param_1->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LayoutHashes.Num() == Slots.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHICoreShader.h"
                         ,0x4b,L"Shader %s, LayoutHashes %d, Slots %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (int)param_1->_padding_;
  uVar11 = uVar10;
  if (0 < iVar8) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar1 = *(byte *)(uVar11 + param_1->_padding_);
      if (bVar1 != 0xff) {
        if ((param_2->ArrayNum <= (int)(uint)bVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FRHIUniformBuffer **)((param_2->AllocatorInstance).Data + (ulonglong)bVar1 * 8);
        uVar7 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ValidateStaticUniformBuffer(pFVar3,bVar1,*(uint *)(param_1->_padding_ + uVar11 * 4));
        if (pFVar3 != (FRHIUniformBuffer *)0x0) {
          EVar2 = param_3->ShaderFrequency;
          pFVar4 = param_3->__this;
          (pFVar4->PendingState).BoundUniformBuffers[EVar2][uVar10] = pFVar3;
          (pFVar4->PendingState).BoundUniformBuffersDynamicOffset[EVar2][uVar10] = 0;
          (pFVar4->PendingState).DirtyUniformBuffers[EVar2] =
               (pFVar4->PendingState).DirtyUniformBuffers[EVar2] | (ushort)(1 << (uVar9 & 0x1f));
          (pFVar4->PendingState).bAnyDirtyGraphicsUniformBuffers = true;
          if ((GUseEmulatedUniformBuffers == false) ||
             (*(char *)((longlong)&pFVar3[1]._padding_ + 5) == '\0')) {
            (pFVar4->PendingState).bAnyDirtyRealUniformBuffers[EVar2] = true;
          }
        }
      }
      iVar8 = (int)param_1->_padding_;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 1;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  return;
}

// ClearUAVShader_T<4,2,1,0> @ 145bd76f0

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

void __cdecl
ClearUAVShader_T<4,2,1,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,uint (*param_6) [1])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<4,TClearReplacementBase<2,1,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<4,TClearReplacementBase<2,1,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<4,TClearReplacementBase<2,1,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<4,TClearReplacementBase<2,1,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (4 < uVar2) {
    uVar11 = 4;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x40);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// ClearUAVShader_T<4,0,1,0> @ 145bd7a80

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

void __cdecl
ClearUAVShader_T<4,0,1,0>
          (FRHIComputeCommandList *param_1,FRHIUnorderedAccessView *param_2,uint param_3,
          uint param_4,uint param_5,float (*param_6) [1])

{
  int *piVar1;
  ushort uVar2;
  FShaderMapResource *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  atomic<FRHIShader_*> aVar9;
  FRHIBatchedShaderParameters *this_02;
  FRHIBatchedShaderUnbinds *pFVar10;
  uint uVar11;
  undefined1 local_88 [16];
  TIntVector3<int>_u_0 local_78;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar8 = (FShaderType *)TClearReplacementCS<4,TClearReplacementBase<0,1,0,1>_>::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_48,pFVar8,0);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_88);
    FName::ToString((FName *)this_01,&local_38);
    TClearReplacementCS<4,TClearReplacementBase<0,1,0,1>_>::GetStaticType();
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TClearReplacementCS<4,TClearReplacementBase<0,1,0,1>_>::GetStaticType();
  aVar9 = (atomic<FRHIShader_*>)0x0;
  if (local_48.ShaderContent != (FShader *)0x0) {
    this = ((local_48.ShaderMap)->Resource).Reference;
    if ((this == (FShaderMapResource *)0x0) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    aVar9 = (this->RHIShaders).Ptr[(local_48.ShaderContent)->ResourceIndex];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (this,(local_48.ShaderContent)->ResourceIndex,true),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if (((local_48.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FShader::GetType(local_48.ShaderContent,(local_48.ShaderMap)->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TClearReplacementCS<4,TClearReplacementBase<0,1,0,1>_>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar9 = (atomic<FRHIShader_*>)0x0;
    }
  }
  SetComputePipelineState(param_1,(FRHIComputeShader *)aVar9);
  this_02 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = *(ushort *)&local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x4;
  uVar11 = (uint)uVar2;
  if (4 < uVar2) {
    uVar11 = 4;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance,
               (uint)*(ushort *)
                      &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.field_0x2,
               uVar11,param_6);
  }
  uVar2 = *(ushort *)((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayNum + 2);
  uVar11 = (uint)uVar2;
  local_68 = 0;
  local_60 = 0;
  if (0x10 < uVar2) {
    uVar11 = 0x10;
  }
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)*(ushort *)
                              &local_48.ShaderContent[1].Bindings.Parameters.AllocatorInstance.
                               field_0x6,
               (uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayNum,uVar11,&local_68
              );
  }
  uVar11 = (uint)*(ushort *)&local_48.ShaderContent[1].Bindings.ResourceParameters.AllocatorInstance
  ;
  local_50 = param_5;
  if (0x10 < uVar11) {
    uVar11 = 0x10;
  }
  local_4c = 0;
  local_58 = param_3;
  local_54 = param_4;
  if (uVar11 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (this_02,(uint)(ushort)local_48.ShaderContent[1].Bindings.Parameters.ArrayMax,
               (uint)*(ushort *)
                      ((longlong)&local_48.ShaderContent[1].Bindings.Parameters.ArrayMax + 2),uVar11
               ,&local_58);
  }
  piVar1 = &local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum;
  SetUAVParameter(this_02,(FShaderResourceParameter *)piVar1,param_2);
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,(FRHIComputeShader *)aVar9,this_02);
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_78._s_0,param_3,0x40);
  FRHIComputeCommandList::DispatchComputeShader
            (param_1,local_78._s_0.X,local_78._s_0.Y,local_78._s_0.Z);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 2) !=
         '\0') &&
       (*(char *)((longlong)&local_48.ShaderContent[1].Bindings.ResourceParameters.ArrayNum + 3) !=
        '\x06')) {
      iVar5 = *piVar1;
      piVar1 = &(pFVar10->Unbinds).ArrayMax;
      iVar7 = (pFVar10->Unbinds).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)pFVar10,piVar1);
      }
      (pFVar10->Unbinds).ArrayNum = iVar7 + 1;
      pFVar3 = (pFVar10->Unbinds).AllocatorInstance.Data;
      *(short *)(pFVar3 + (longlong)iVar7 * 4) = (short)iVar5;
      pFVar3[(longlong)iVar7 * 4 + 2] = (FScriptContainerElement)0x1;
    }
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,(FRHIComputeShader *)aVar9,pFVar10);
  }
  return;
}

// CompareItems<FOpenGLVertexElement,int> @ 145bd7e10

bool __cdecl
CompareItems<FOpenGLVertexElement,int>
          (FOpenGLVertexElement *param_1,FOpenGLVertexElement *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_3 != 0) {
    puVar2 = &param_2->Offset;
    puVar1 = &param_1->Offset;
    do {
      if ((((((((FOpenGLVertexElement *)(puVar1 + -2))->Type !=
               *(uint *)((longlong)param_2 + (-8 - (longlong)param_1) + (longlong)puVar1)) ||
             (puVar1[-1] != puVar2[-1])) || (*puVar1 != *puVar2)) ||
           ((puVar1[1] != puVar2[1] || (puVar1[2] != puVar2[2])))) ||
          ((*(uchar *)(puVar1 + 4) != *(uchar *)(puVar2 + 4) ||
           ((*(uchar *)((longlong)puVar1 + 0x11) != *(uchar *)((longlong)puVar2 + 0x11) ||
            (*(uchar *)((longlong)puVar1 + 0x12) != *(uchar *)((longlong)puVar2 + 0x12))))))) ||
         (puVar1[3] != puVar2[3])) {
        return false;
      }
      puVar2 = puVar2 + 7;
      puVar1 = puVar1 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FOpenGLShaderVarying,FOpenGLShaderVarying,int> @ 145bd7e90

void __cdecl
ConstructItems<FOpenGLShaderVarying,FOpenGLShaderVarying,int>
          (void *param_1,FOpenGLShaderVarying *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int *piVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar2 = (int *)((longlong)param_1 + 0xc);
    piVar3 = &param_2->Location;
    do {
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      iVar1 = piVar3[-2];
      _Src = (((FOpenGLShaderVarying *)(piVar3 + -4))->Varying).AllocatorInstance.Data;
      piVar2[-1] = iVar1;
      if (iVar1 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar2 + -3),iVar1,piVar2);
        memcpy(((ForAnyElementType *)(piVar2 + -3))->Data,_Src,(longlong)iVar1);
      }
      iVar1 = *piVar3;
      piVar3 = piVar3 + 6;
      piVar2[1] = iVar1;
      piVar2 = piVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int> @ 145bd7f60

void __cdecl
ConstructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,
          TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FOpenGLShaderVarying,int> @ 145bd8010

void __cdecl DefaultConstructItems<FOpenGLShaderVarying,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<CrossCompiler::FPackedArrayInfo,int> @ 145bd8040

void __cdecl DefaultConstructItems<CrossCompiler::FPackedArrayInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FTextureStage,int> @ 145bd8050

void __cdecl DefaultConstructItems<FTextureStage,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FUAVStage,int> @ 145bd8090

void __cdecl DefaultConstructItems<FUAVStage,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0x88ba;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOpenGLShaderVarying,int> @ 145bd80f0

void __cdecl DestructItems<FOpenGLShaderVarying,int>(FOpenGLShaderVarying *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Varying).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int> @ 145bd8130

void __cdecl
DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
          (TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int> @ 145bd8170

void __cdecl
DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
          (TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<TOpenGLBuffer<FOpenGLBasePixelBuffer>_>,int> @ 145bd81b0

void __cdecl
DestructItems<TRefCountPtr<TOpenGLBuffer<FOpenGLBasePixelBuffer>_>,int>
          (TRefCountPtr<TOpenGLBuffer<FOpenGLBasePixelBuffer>_> *param_1,int param_2)

{
  longlong *plVar1;
  TOpenGLBuffer<FOpenGLBasePixelBuffer> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = param_1->Reference;
    if (pTVar2 != (TOpenGLBuffer<FOpenGLBasePixelBuffer> *)0x0) {
      plVar1 = &pTVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pTVar2->_padding_)(pTVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FOpenGLViewport::FOpenGLViewport'::__l2::TSTR_CreateFrameSyncEvent209>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145bdadc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FOpenGLViewport::FOpenGLViewport_::__l2::TSTR_CreateFrameSyncEvent209>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FOpenGLViewport::FOpenGLViewport'::__l2::TSTR_CreateFrameSyncEvent209>
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
      if (bVar8) goto LAB_145bdaf11;
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
    goto LAB_145bdb105;
  }
LAB_145bdaf11:
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
LAB_145bdafef:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bdafef;
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
LAB_145bdb105:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FOpenGLViewport::Resize'::__l2::TSTR_ResizeViewport263>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 145bdb140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FOpenGLViewport::Resize_::__l2::TSTR_ResizeViewport263>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FOpenGLViewport::Resize'::__l2::TSTR_ResizeViewport263>::Get();
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
      if (bVar8) goto LAB_145bdb291;
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
    goto LAB_145bdb485;
  }
LAB_145bdb291:
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
LAB_145bdb36f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bdb36f;
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
LAB_145bdb485:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EnumerateUniformBufferResources<FRHIShaderResourceView,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_2>_> @ 145bdb4c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHIShaderResourceView,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_2>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_2> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FTracker *this;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  ERHIAccess EVar10;
  ulonglong uVar11;
  undefined2 local_res1d;
  undefined1 local_res1f;
  undefined4 uStack_10c;
  undefined4 uStack_e4;
  FOperation local_a8;
  FViewIdentity local_60;
  
  pFVar4 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar11 = (ulonglong)param_2;
  uVar3 = param_3[uVar11];
  if (uVar3 != 0) {
    uVar8 = param_3[uVar3];
    puVar9 = param_3 + (ulonglong)uVar3 + 1;
    do {
      pFVar5 = *(FRHIShaderResourceView **)(pFVar4 + (ulonglong)(uVar8 >> 8 & 0xffff) * 8);
      if ((pFVar5 == (FRHIShaderResourceView *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar10 = SRVCompute;
        }
        else {
          EVar10 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar10 = SRVGraphicsPixel;
          }
        }
        RHIValidation::FViewIdentity::FViewIdentity
                  (&local_60,*(FRHIViewableResource **)&pFVar5->field_0x18,
                   (FRHIViewDesc *)&pFVar5->field_0x20);
        EVar2 = this->Pipeline;
        LOCK();
        ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter =
             ((FThreadSafeCounter *)(local_60._padding_ + 0xa8))->Counter + 1;
        UNLOCK();
        uStack_e4 = CONCAT13(local_res1f,CONCAT21(local_res1d,EVar2));
        local_a8._4_4_ = uStack_10c;
        local_a8.Type = Assert;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.MipIndex =
             (undefined4)local_60._padding_;
        local_a8.field1_0x8.Data_SetTrackedAccess.State.Pipelines = local_60._padding_._4_1_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumMips._1_3_ =
             local_60._padding_._5_3_;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace = (void *)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = (FResource *)local_60._padding_
        ;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (uint)local_60._padding_;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             local_60._padding_._4_4_;
        local_a8.field1_0x8._36_4_ = uStack_e4;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar10;
        RHIValidation::FTracker::AddOp(this,&local_a8);
        uVar11 = (ulonglong)(uint)param_2;
      }
      if (GRHIValidationEnabled != false) {
        RHIValidation::ValidateShaderResourceView(param_4->Shader,uVar8 & 0xff,pFVar5);
      }
      FOpenGLResourceBinder::SetSRV(param_4->Binder,pFVar5,(uchar)uVar8);
      uVar8 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar8 >> 0x18 == (uint)uVar11);
  }
  return;
}

// EnumerateUniformBufferResources<FRHITexture,`UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>'::__l4::<lambda_1>_> @ 145bdb730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::Private::
EnumerateUniformBufferResources<FRHITexture,_UE::RHI::Private::SetUniformBufferResourcesFromTables<FOpenGLResourceBinder,FRHIUniformBuffer_*_[14],unsigned_short,0>_::__l4::<lambda_1>_>
          (FRHIUniformBuffer *param_1,int param_2,uint *param_3,<lambda_1> *param_4)

{
  EShaderFrequency EVar1;
  ERHIPipeline EVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *pFVar4;
  FTracker *this;
  code *pcVar5;
  bool bVar6;
  FResourceIdentity *pFVar7;
  ERHIAccess EVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined4 uStack_114;
  undefined4 uStack_ec;
  FOperation local_a8;
  FResourceIdentity local_60;
  
  pFVar3 = (param_1->ResourceTable).AllocatorInstance.Data;
  uVar10 = param_3[param_2];
  if (uVar10 != 0) {
    puVar9 = param_3 + (ulonglong)uVar10 + 1;
    uVar10 = param_3[uVar10];
    do {
      pFVar4 = *(FRHITexture **)(pFVar3 + (ulonglong)(uVar10 >> 8 & 0xffff) * 8);
      if ((pFVar4 == (FRHITexture *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Internal\\RHIUniformBufferUtilities.h"
                             ,0x2d,L"Null %s (resource %d bind %d) on UB Layout %s"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = *param_4->Tracker;
      if (this != (FTracker *)0x0) {
        EVar1 = param_4->Shader->Frequency;
        if ((((EVar1 == SF_Compute) || (EVar1 == SF_NumStandardFrequencies)) ||
            (EVar1 == SF_RayMiss)) || ((EVar1 == SF_RayHitGroup || (EVar1 == SF_RayCallable)))) {
          EVar8 = SRVCompute;
        }
        else {
          EVar8 = SRVGraphicsNonPixel;
          if (EVar1 == SF_Pixel) {
            EVar8 = SRVGraphicsPixel;
          }
        }
        pFVar7 = RHIValidation::FTextureResource::GetViewIdentity
                           ((FTextureResource *)&pFVar4->_padding_,&local_60,0,0,0,0,0,1);
        EVar2 = this->Pipeline;
        local_a8.field1_0x8.Data_BeginTransition.Identity.Resource = pFVar7->Resource;
        local_a8.field1_0x8.Data_SetTrackedAccess.State =
             (FState)*(undefined8 *)&pFVar7->SubresourceRange;
        local_a8.field1_0x8.Data_AliasingOverlap.CreateBacktrace =
             (void *)*(undefined8 *)&(pFVar7->SubresourceRange).ArraySlice;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.PlaneIndex =
             (pFVar7->SubresourceRange).PlaneIndex;
        local_a8.field1_0x8.Data_BeginTransition.Identity.SubresourceRange.NumPlanes =
             (pFVar7->SubresourceRange).NumPlanes;
        LOCK();
        ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter =
             ((local_a8.field1_0x8.Data_BeginTransition.Identity.Resource)->NumOpRefs).Counter + 1;
        UNLOCK();
        uStack_ec = CONCAT13(local_resf,CONCAT21(local_resd,EVar2));
        local_a8._4_4_ = uStack_114;
        local_a8.Type = Assert;
        local_a8.field1_0x8._36_4_ = uStack_ec;
        local_a8.field1_0x8.Data_BeginTransition.PreviousState.Access = EVar8;
        RHIValidation::FTracker::AddOp(this,&local_a8);
      }
      if ((double)*param_4->CurrentTimeForTextureTimes != (pFVar4->LastRenderTime).LastRenderTime) {
        (pFVar4->LastRenderTime).LastRenderTime = (double)*param_4->CurrentTimeForTextureTimes;
      }
      FOpenGLResourceBinder::SetTexture(param_4->Binder,pFVar4,(uchar)uVar10);
      uVar10 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar10 >> 0x18 == param_2);
  }
  return;
}

// HeapSortInternal<FScreenResolutionRHI,int,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,`FOpenGLDynamicRHI::RHIGetAvailableResolutions'::__l5::<lambda_1>_>_> @ 145bdc3a0

void __cdecl
AlgoImpl::
HeapSortInternal<FScreenResolutionRHI,int,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,_FOpenGLDynamicRHI::RHIGetAvailableResolutions_::__l5::<lambda_1>_>_>
          (FScreenResolutionRHI *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FScreenResolutionRHI,_public:_virtual_bool___cdecl_FOpenGLDynamicRHI::RHIGetAvailableResolutions(TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_>_&,bool)_::_5_::<lambda_1>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  FScreenResolutionRHI *pFVar3;
  FScreenResolutionRHI *pFVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FScreenResolutionRHI *pFVar14;
  int iVar15;
  longlong lVar16;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FScreenResolutionRHI,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FScreenResolutionRHI,_FOpenGLDynamicRHI::RHIGetAvailableResolutions_::__l5::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FScreenResolutionRHI,_public:_virtual_bool___cdecl_FOpenGLDynamicRHI::RHIGetAvailableResolutions(TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_>_&,bool)_::_5_::<lambda_1>_>
              *)&local_res20);
  iVar15 = param_2 + -1;
  lVar16 = (longlong)iVar15;
  if (0 < iVar15) {
    pFVar14 = param_1 + lVar16;
    do {
      uVar8 = pFVar14->Height;
      uVar9 = param_1->Width;
      uVar10 = param_1->Height;
      uVar5 = param_1->RefreshRate;
      param_1->Width = pFVar14->Width;
      param_1->Height = uVar8;
      param_1->RefreshRate = pFVar14->RefreshRate;
      pFVar14->Width = uVar9;
      pFVar14->Height = uVar10;
      pFVar14->RefreshRate = uVar5;
      iVar13 = 0;
      if (1 < iVar15) {
        do {
          iVar7 = iVar13 * 2;
          iVar12 = iVar7 + 1;
          if (iVar7 + 2 < iVar15) {
            lVar1 = (longlong)iVar7 + 2;
            lVar2 = (longlong)iVar7 + 1;
            bVar11 = param_1[lVar1].Width < param_1[lVar2].Width;
            if ((param_1[lVar1].Width == param_1[lVar2].Width) &&
               (bVar11 = param_1[lVar1].Height < param_1[lVar2].Height,
               param_1[lVar1].Height == param_1[lVar2].Height)) {
              bVar11 = param_1[lVar1].RefreshRate < param_1[lVar2].RefreshRate;
            }
            if (bVar11) {
              iVar12 = iVar7;
            }
            iVar12 = iVar12 + 1;
          }
          pFVar3 = param_1 + iVar13;
          pFVar4 = param_1 + iVar12;
          bVar11 = pFVar3->Width < param_1[iVar12].Width;
          if ((pFVar3->Width == param_1[iVar12].Width) &&
             (bVar11 = pFVar3->Height < pFVar4->Height, pFVar3->Height == pFVar4->Height)) {
            bVar11 = pFVar3->RefreshRate < pFVar4->RefreshRate;
          }
          if (!bVar11) break;
          uVar8 = pFVar4->Height;
          uVar9 = pFVar3->Width;
          uVar10 = pFVar3->Height;
          uVar5 = pFVar3->RefreshRate;
          pFVar3->Width = pFVar4->Width;
          pFVar3->Height = uVar8;
          pFVar3->RefreshRate = pFVar4->RefreshRate;
          pFVar4->Width = uVar9;
          pFVar4->Height = uVar10;
          pFVar4->RefreshRate = uVar5;
          iVar13 = iVar12;
        } while (iVar12 * 2 + 1 < iVar15);
      }
      iVar15 = iVar15 + -1;
      lVar16 = lVar16 + -1;
      pFVar14 = pFVar14 + -1;
    } while (0 < lVar16);
  }
  return;
}

// HeapifyInternal<FScreenResolutionRHI,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FScreenResolutionRHI,`FOpenGLDynamicRHI::RHIGetAvailableResolutions'::__l5::<lambda_1>_>_>_> @ 145bdc540

void __cdecl
AlgoImpl::
HeapifyInternal<FScreenResolutionRHI,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FScreenResolutionRHI,_FOpenGLDynamicRHI::RHIGetAvailableResolutions_::__l5::<lambda_1>_>_>_>
          (FScreenResolutionRHI *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FScreenResolutionRHI,_public:_virtual_bool___cdecl_FOpenGLDynamicRHI::RHIGetAvailableResolutions(TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_>_&,bool)_::_5_::<lambda_1>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  FScreenResolutionRHI *pFVar3;
  FScreenResolutionRHI *pFVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar7 = iVar13;
  iVar15 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_145bdc675:
      if (iVar15 == 0) {
        return;
      }
      iVar12 = iVar15 + -1;
      iVar13 = iVar7 + -2;
      iVar7 = iVar13;
      iVar15 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar14 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      lVar1 = (longlong)iVar13 + 2;
      lVar2 = (longlong)iVar13 + 1;
      bVar11 = param_1[lVar1].Width < param_1[lVar2].Width;
      if ((param_1[lVar1].Width == param_1[lVar2].Width) &&
         (bVar11 = param_1[lVar1].Height < param_1[lVar2].Height,
         param_1[lVar1].Height == param_1[lVar2].Height)) {
        bVar11 = param_1[lVar1].RefreshRate < param_1[lVar2].RefreshRate;
      }
      if (bVar11) {
        iVar14 = iVar13;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar3 = param_1 + iVar12;
    pFVar4 = param_1 + iVar14;
    bVar11 = pFVar3->Width < param_1[iVar14].Width;
    if ((pFVar3->Width == param_1[iVar14].Width) &&
       (bVar11 = pFVar3->Height < pFVar4->Height, pFVar3->Height == pFVar4->Height)) {
      bVar11 = pFVar3->RefreshRate < pFVar4->RefreshRate;
    }
    if (!bVar11) goto LAB_145bdc675;
    uVar8 = pFVar4->Height;
    uVar9 = pFVar3->Width;
    uVar10 = pFVar3->Height;
    uVar5 = pFVar3->RefreshRate;
    pFVar3->Width = pFVar4->Width;
    pFVar3->Height = uVar8;
    pFVar3->RefreshRate = pFVar4->RefreshRate;
    iVar13 = iVar14 * 2 + 1;
    pFVar4->Width = uVar9;
    pFVar4->Height = uVar10;
    pFVar4->RefreshRate = uVar5;
    iVar12 = iVar14;
  } while( true );
}

// IntroSortInternal<FScreenResolutionRHI,int,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,`FOpenGLDynamicRHI::RHIGetAvailableResolutions'::__l5::<lambda_1>_>_> @ 145bdc6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FScreenResolutionRHI,int,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,_FOpenGLDynamicRHI::RHIGetAvailableResolutions_::__l5::<lambda_1>_>_>
          (FScreenResolutionRHI *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FScreenResolutionRHI,_public:_virtual_bool___cdecl_FOpenGLDynamicRHI::RHIGetAvailableResolutions(TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_>_&,bool)_::_5_::<lambda_1>_>
          param_4)

{
  undefined4 uVar1;
  FScreenResolutionRHI *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  FScreenResolutionRHI *pFVar10;
  FScreenResolutionRHI *pFVar11;
  FScreenResolutionRHI *pFVar12;
  FScreenResolutionRHI *pFVar13;
  FScreenResolutionRHI *pFVar14;
  FScreenResolutionRHI *pFVar15;
  FScreenResolutionRHI **ppFVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FScreenResolutionRHI *local_348;
  FScreenResolutionRHI *local_338;
  FScreenResolutionRHI *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar16 = &local_338;
    do {
      pFVar10 = ppFVar16[1];
      pFVar13 = *ppFVar16;
      pFVar2 = ppFVar16[2];
      local_348._0_4_ = (int)pFVar2;
      iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar13) / 0xc) + 1;
      pFVar12 = pFVar13;
      if ((int)local_348 != 0) {
LAB_145bdc780:
        if (8 < iVar9) {
          uVar5 = pFVar12->Height;
          pFVar14 = pFVar10 + 1;
          iVar9 = iVar9 / 2;
          uVar6 = pFVar12[iVar9].Width;
          uVar7 = pFVar12[iVar9].Height;
          uVar4 = pFVar12[iVar9].RefreshRate;
          pFVar12[iVar9].Width = pFVar12->Width;
          pFVar12[iVar9].Height = uVar5;
          pFVar12[iVar9].RefreshRate = pFVar12->RefreshRate;
          pFVar12->Width = uVar6;
          pFVar12->Height = uVar7;
          pFVar12->RefreshRate = uVar4;
          pFVar13 = pFVar12;
LAB_145bdc7d0:
          pFVar11 = pFVar13;
          pFVar13 = pFVar11 + 1;
          if (pFVar13 <= pFVar10) goto code_r0x000145bdc7dc;
          goto LAB_145bdc800;
        }
        for (; pFVar13 = pFVar12, pFVar2 = pFVar12, pFVar12 < pFVar10; pFVar10 = pFVar10 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar10) {
            bVar17 = pFVar13->Width < pFVar2->Width;
            if ((pFVar13->Width == pFVar2->Width) &&
               (bVar17 = pFVar13->Height < pFVar2->Height, pFVar13->Height == pFVar2->Height)) {
              bVar17 = pFVar13->RefreshRate < pFVar2->RefreshRate;
            }
            if (bVar17) {
              pFVar13 = pFVar2;
            }
          }
          uVar6 = pFVar13->Width;
          uVar7 = pFVar13->Height;
          uVar4 = pFVar13->RefreshRate;
          uVar5 = pFVar10->Height;
          pFVar13->Width = pFVar10->Width;
          pFVar13->Height = uVar5;
          pFVar13->RefreshRate = pFVar10->RefreshRate;
          pFVar10->Width = uVar6;
          pFVar10->Height = uVar7;
          pFVar10->RefreshRate = uVar4;
        }
        goto LAB_145bdc931;
      }
LAB_145bdc922:
      local_348 = pFVar2;
      HeapSortInternal<FScreenResolutionRHI,int,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,_FOpenGLDynamicRHI::RHIGetAvailableResolutions_::__l5::<lambda_1>_>_>
                (pFVar13,iVar9,param_3,param_4);
LAB_145bdc931:
      ppFVar16 = ppFVar16 + -3;
    } while (&local_338 <= ppFVar16);
  }
  return;
code_r0x000145bdc7dc:
  bVar17 = pFVar12->Width < pFVar13->Width;
  if ((pFVar12->Width == pFVar13->Width) &&
     (bVar17 = pFVar12->Height < pFVar11[1].Height, pFVar12->Height == pFVar11[1].Height)) {
    bVar17 = pFVar12->RefreshRate < pFVar11[1].RefreshRate;
  }
  if (!bVar17) goto LAB_145bdc7d0;
LAB_145bdc800:
  do {
    pFVar15 = pFVar14;
    pFVar14 = pFVar15 + -1;
    if (pFVar14 <= pFVar12) break;
    bVar17 = pFVar14->Width < pFVar12->Width;
    if ((pFVar14->Width == pFVar12->Width) &&
       (bVar17 = pFVar15[-1].Height < pFVar12->Height, pFVar15[-1].Height == pFVar12->Height)) {
      bVar17 = pFVar15[-1].RefreshRate < pFVar12->RefreshRate;
    }
  } while (!bVar17);
  uVar1 = pFVar14->Width;
  uVar3 = pFVar14->Height;
  if (pFVar13 <= pFVar14) {
    uVar5 = pFVar13->Width;
    uVar6 = pFVar13->Height;
    uVar4 = pFVar11[1].RefreshRate;
    pFVar13->Width = uVar1;
    pFVar13->Height = uVar3;
    pFVar11[1].RefreshRate = pFVar15[-1].RefreshRate;
    pFVar14->Width = uVar5;
    pFVar14->Height = uVar6;
    pFVar15[-1].RefreshRate = uVar4;
    goto LAB_145bdc7d0;
  }
  uVar4 = pFVar12->RefreshRate;
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = pFVar12->Width;
  uVar6 = pFVar12->Height;
  pFVar12->Width = uVar1;
  pFVar12->Height = uVar3;
  pFVar12->RefreshRate = pFVar15[-1].RefreshRate;
  pFVar14->Width = uVar5;
  pFVar14->Height = uVar6;
  pFVar15[-1].RefreshRate = uVar4;
  lVar8 = (longlong)pFVar14 + (-0xc - (longlong)pFVar12);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  if ((lVar8 >> 1) - (lVar8 >> 0x3f) < ((longlong)pFVar10 - (longlong)pFVar13) / 0xc) {
    if (pFVar13 < pFVar10) {
      *ppFVar16 = pFVar13;
      ppFVar16[1] = pFVar10;
      *(int *)(ppFVar16 + 2) = (int)local_348;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar14 <= pFVar12 + 1) goto LAB_145bdc931;
    pFVar10 = pFVar15 + -2;
    pFVar13 = pFVar12;
  }
  else {
    if (pFVar12 + 1 < pFVar14) {
      *ppFVar16 = pFVar12;
      ppFVar16[1] = pFVar15 + -2;
      *(int *)(ppFVar16 + 2) = (int)local_348;
      ppFVar16 = ppFVar16 + 3;
    }
    if (pFVar10 <= pFVar13) goto LAB_145bdc931;
  }
  iVar9 = (int)(((longlong)pFVar10 - (longlong)pFVar13) / 0xc) + 1;
  pFVar12 = pFVar13;
  if ((int)local_348 == 0) goto LAB_145bdc922;
  goto LAB_145bdc780;
}

// LowerBoundInternal<FOpenGLVertexElement,int,FOpenGLVertexElement,FIdentityFunctor,`FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey'::__l2::FCompareFOpenGLVertexElement> @ 145bdca00

int __cdecl
AlgoImpl::
LowerBoundInternal<FOpenGLVertexElement,int,FOpenGLVertexElement,FIdentityFunctor,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::__l2::FCompareFOpenGLVertexElement>
          (FOpenGLVertexElement *param_1,int param_2,FOpenGLVertexElement *param_3,
          FIdentityFunctor param_4,FCompareFOpenGLVertexElement param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      if (param_1[iVar1].StreamIndex < param_3->StreamIndex) {
        bVar3 = true;
      }
      else if (param_3->StreamIndex < param_1[iVar1].StreamIndex) {
        bVar3 = false;
      }
      else if (param_1[iVar1].Offset < param_3->Offset) {
        bVar3 = true;
      }
      else if (param_3->Offset < param_1[iVar1].Offset) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (param_1[iVar1].AttributeIndex < param_3->AttributeIndex) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// Merge<FOpenGLVertexElement,FIdentityFunctor,`FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey'::__l2::FCompareFOpenGLVertexElement> @ 145bdcac0

void __cdecl
AlgoImpl::
Merge<FOpenGLVertexElement,FIdentityFunctor,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::__l2::FCompareFOpenGLVertexElement>
          (FOpenGLVertexElement *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          FCompareFOpenGLVertexElement param_5)

{
  bool bVar1;
  uint uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FOpenGLVertexElement *pFVar23;
  FOpenGLVertexElement *pFVar24;
  FOpenGLVertexElement *pFVar25;
  FOpenGLVertexElement *pFVar26;
  FOpenGLVertexElement *pFVar28;
  longlong lVar29;
  FOpenGLVertexElement *pFVar27;
  
  if (0 < param_2) {
    iVar20 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      lVar29 = (longlong)param_2;
      iVar19 = 0;
      if (0 < param_2 - iVar20) {
        uVar21 = param_2 - iVar20;
        iVar19 = 0;
        do {
          uVar22 = uVar21 >> 1;
          lVar17 = (longlong)(int)(uVar22 + iVar19) + (longlong)iVar20;
          if (param_1[lVar29].StreamIndex < param_1[lVar17].StreamIndex) {
            bVar1 = true;
          }
          else if (param_1[lVar17].StreamIndex < param_1[lVar29].StreamIndex) {
            bVar1 = false;
          }
          else if (param_1[lVar29].Offset < param_1[lVar17].Offset) {
            bVar1 = true;
          }
          else if (param_1[lVar17].Offset < param_1[lVar29].Offset) {
            bVar1 = false;
          }
          else {
            bVar1 = false;
            if (param_1[lVar29].AttributeIndex < param_1[lVar17].AttributeIndex) {
              bVar1 = true;
            }
          }
          if (!bVar1) {
            iVar19 = uVar22 + iVar19 + (uVar21 & 1);
          }
          uVar21 = uVar22;
        } while (uVar22 != 0);
      }
      iVar20 = iVar20 + iVar19;
      if (param_2 <= iVar20) {
        return;
      }
      iVar19 = 0;
      pFVar23 = param_1 + iVar20;
      if (0 < param_3 - param_2) {
        uVar21 = param_3 - param_2;
        iVar19 = 0;
        do {
          uVar22 = uVar21 >> 1;
          lVar17 = (int)(uVar22 + iVar19) + lVar29;
          if (param_1[lVar17].StreamIndex < pFVar23->StreamIndex) {
            bVar1 = true;
          }
          else if (pFVar23->StreamIndex < param_1[lVar17].StreamIndex) {
            bVar1 = false;
          }
          else if (param_1[lVar17].Offset < pFVar23->Offset) {
            bVar1 = true;
          }
          else if (pFVar23->Offset < param_1[lVar17].Offset) {
            bVar1 = false;
          }
          else {
            bVar1 = false;
            if (param_1[lVar17].AttributeIndex < pFVar23->AttributeIndex) {
              bVar1 = true;
            }
          }
          if (bVar1) {
            iVar19 = uVar22 + iVar19 + (uVar21 & 1);
          }
          uVar21 = uVar22;
        } while (uVar22 != 0);
      }
      iVar18 = (iVar19 - iVar20) + param_2;
      iVar16 = param_2 - iVar20;
      if ((iVar16 != 0) && (iVar16 < iVar18)) {
        pFVar24 = pFVar23;
        pFVar26 = pFVar23 + iVar16;
        pFVar27 = pFVar23 + iVar16;
        do {
          while( true ) {
            pFVar28 = pFVar26 + 1;
            pFVar25 = pFVar24 + 1;
            uVar10 = pFVar24->Divisor;
            uVar11 = pFVar24->HashStride;
            uVar12 = pFVar24->bNormalized;
            uVar13 = pFVar24->AttributeIndex;
            uVar14 = pFVar24->bShouldConvertToFloat;
            uVar15 = pFVar24->Padding;
            uVar21 = pFVar26->StreamIndex;
            uVar22 = pFVar26->Offset;
            uVar2 = pFVar26->Size;
            uVar6 = pFVar24->Type;
            uVar7 = pFVar24->StreamIndex;
            uVar8 = pFVar24->Offset;
            uVar9 = pFVar24->Size;
            pFVar24->Type = pFVar26->Type;
            pFVar24->StreamIndex = uVar21;
            pFVar24->Offset = uVar22;
            pFVar24->Size = uVar2;
            uVar21 = pFVar26->HashStride;
            pFVar24->Divisor = pFVar26->Divisor;
            pFVar24->HashStride = uVar21;
            uVar3 = pFVar26->AttributeIndex;
            uVar4 = pFVar26->bShouldConvertToFloat;
            uVar5 = pFVar26->Padding;
            pFVar24->bNormalized = pFVar26->bNormalized;
            pFVar24->AttributeIndex = uVar3;
            pFVar24->bShouldConvertToFloat = uVar4;
            pFVar24->Padding = uVar5;
            pFVar26->Type = uVar6;
            pFVar26->StreamIndex = uVar7;
            pFVar26->Offset = uVar8;
            pFVar26->Size = uVar9;
            pFVar26->Divisor = uVar10;
            pFVar26->HashStride = uVar11;
            pFVar26->bNormalized = uVar12;
            pFVar26->AttributeIndex = uVar13;
            pFVar26->bShouldConvertToFloat = uVar14;
            pFVar26->Padding = uVar15;
            pFVar24 = pFVar25;
            if (pFVar28 == pFVar23 + iVar18) break;
            pFVar26 = pFVar28;
            if (pFVar25 == pFVar27) {
              pFVar27 = pFVar28;
            }
          }
          pFVar26 = pFVar27;
        } while (pFVar25 != pFVar27);
      }
      param_2 = param_2 + iVar19;
      iVar20 = iVar20 + 1 + iVar19;
    } while (iVar20 < param_2);
  }
  return;
}

// RotateInternal<FOpenGLVertexElement> @ 145bdd600

int __cdecl
AlgoImpl::RotateInternal<FOpenGLVertexElement>
          (FOpenGLVertexElement *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  FOpenGLVertexElement *pFVar17;
  FOpenGLVertexElement *pFVar19;
  FOpenGLVertexElement *pFVar20;
  FOpenGLVertexElement *pFVar21;
  FOpenGLVertexElement *pFVar18;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar17 = param_1 + param_3;
    pFVar20 = param_1;
    pFVar18 = param_1 + param_3;
    do {
      while( true ) {
        pFVar19 = pFVar17 + 1;
        pFVar21 = pFVar20 + 1;
        uVar11 = pFVar20->Divisor;
        uVar12 = pFVar20->HashStride;
        uVar13 = pFVar20->bNormalized;
        uVar14 = pFVar20->AttributeIndex;
        uVar15 = pFVar20->bShouldConvertToFloat;
        uVar16 = pFVar20->Padding;
        uVar1 = pFVar17->StreamIndex;
        uVar2 = pFVar17->Offset;
        uVar3 = pFVar17->Size;
        uVar7 = pFVar20->Type;
        uVar8 = pFVar20->StreamIndex;
        uVar9 = pFVar20->Offset;
        uVar10 = pFVar20->Size;
        pFVar20->Type = pFVar17->Type;
        pFVar20->StreamIndex = uVar1;
        pFVar20->Offset = uVar2;
        pFVar20->Size = uVar3;
        uVar1 = pFVar17->HashStride;
        pFVar20->Divisor = pFVar17->Divisor;
        pFVar20->HashStride = uVar1;
        uVar4 = pFVar17->AttributeIndex;
        uVar5 = pFVar17->bShouldConvertToFloat;
        uVar6 = pFVar17->Padding;
        pFVar20->bNormalized = pFVar17->bNormalized;
        pFVar20->AttributeIndex = uVar4;
        pFVar20->bShouldConvertToFloat = uVar5;
        pFVar20->Padding = uVar6;
        pFVar17->Type = uVar7;
        pFVar17->StreamIndex = uVar8;
        pFVar17->Offset = uVar9;
        pFVar17->Size = uVar10;
        pFVar17->Divisor = uVar11;
        pFVar17->HashStride = uVar12;
        pFVar17->bNormalized = uVar13;
        pFVar17->AttributeIndex = uVar14;
        pFVar17->bShouldConvertToFloat = uVar15;
        pFVar17->Padding = uVar16;
        pFVar20 = pFVar21;
        if (pFVar19 == param_1 + param_2) break;
        pFVar17 = pFVar19;
        if (pFVar21 == pFVar18) {
          pFVar18 = pFVar19;
        }
      }
      pFVar17 = pFVar18;
    } while (pFVar21 != pFVar18);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// SetShaderValue<unsigned_int_[1]> @ 145bde240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderValue<unsigned_int_[1]>
          (FRHIBatchedShaderParameters *param_1,FShaderParameter *param_2,uint (*param_3) [1],
          uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2->NumBytes + param_4 * -0x10;
  if (4 < (int)uVar1) {
    uVar1 = 4;
  }
  if (0 < (int)uVar1) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)param_2->BufferIndex,(uint)param_2->BaseIndex + param_4 * 0x10,uVar1,
               param_3);
  }
  return;
}

// SetShaderValue<float_[1]> @ 145bde290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
SetShaderValue<float_[1]>
          (FRHIBatchedShaderParameters *param_1,FShaderParameter *param_2,float (*param_3) [1],
          uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2->NumBytes + param_4 * -0x10;
  if (4 < (int)uVar1) {
    uVar1 = 4;
  }
  if (0 < (int)uVar1) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)param_2->BufferIndex,(uint)param_2->BaseIndex + param_4 * 0x10,uVar1,
               param_3);
  }
  return;
}

// StableSortInternal<FOpenGLVertexElement,FIdentityFunctor,`FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey'::__l2::FCompareFOpenGLVertexElement> @ 145bdf820

void __cdecl
AlgoImpl::
StableSortInternal<FOpenGLVertexElement,FIdentityFunctor,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::__l2::FCompareFOpenGLVertexElement>
          (FOpenGLVertexElement *param_1,int param_2,FIdentityFunctor param_3,
          FCompareFOpenGLVertexElement param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  if (0 < param_2) {
    puVar8 = &param_1[1].StreamIndex;
    iVar11 = 1;
    lVar13 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if ((iVar11 < param_2) &&
         ((*puVar8 < puVar8[-7] ||
          ((*puVar8 == puVar8[-7] &&
           ((puVar8[1] < puVar8[-6] ||
            ((puVar8[1] == puVar8[-6] &&
             (*(uchar *)((longlong)puVar8 + 0x15) < *(byte *)((longlong)puVar8 + -7))))))))))) {
        uVar5 = ((FOpenGLVertexElement *)(puVar8 + -1))->StreamIndex;
        uVar2 = puVar8[-2];
        uVar6 = puVar8[-8];
        uVar7 = puVar8[-7];
        uVar4 = *(undefined8 *)(puVar8 + -6);
        uVar1 = *(undefined8 *)(puVar8 + -4);
        puVar8[-8] = ((FOpenGLVertexElement *)(puVar8 + -1))->Type;
        puVar8[-7] = uVar5;
        *(undefined8 *)(puVar8 + -6) = *(undefined8 *)(puVar8 + 1);
        *(undefined8 *)(puVar8 + -4) = *(undefined8 *)(puVar8 + 3);
        puVar8[-2] = puVar8[5];
        ((FOpenGLVertexElement *)(puVar8 + -1))->Type = uVar6;
        ((FOpenGLVertexElement *)(puVar8 + -1))->StreamIndex = uVar7;
        *(undefined8 *)(puVar8 + 1) = uVar4;
        *(undefined8 *)(puVar8 + 3) = uVar1;
        puVar8[5] = uVar2;
      }
      iVar11 = iVar11 + 2;
      puVar8 = puVar8 + 0xe;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  iVar11 = 2;
  if (2 < param_2) {
    do {
      iVar3 = iVar11 * 2;
      iVar10 = 0;
      iVar9 = param_2;
      do {
        iVar12 = iVar9;
        if (iVar3 <= iVar9) {
          iVar12 = iVar3;
        }
        Merge<FOpenGLVertexElement,FIdentityFunctor,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::__l2::FCompareFOpenGLVertexElement>
                  (param_1 + iVar10,iVar11,iVar12,param_3,param_4);
        iVar10 = iVar10 + iVar3;
        iVar9 = iVar9 + iVar11 * -2;
      } while (iVar10 < param_2);
      iVar11 = iVar3;
    } while (iVar3 < param_2);
  }
  return;
}

// UpperBoundInternal<FOpenGLVertexElement,int,FOpenGLVertexElement,FIdentityFunctor,`FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey'::__l2::FCompareFOpenGLVertexElement> @ 145bdfd00

int __cdecl
AlgoImpl::
UpperBoundInternal<FOpenGLVertexElement,int,FOpenGLVertexElement,FIdentityFunctor,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::__l2::FCompareFOpenGLVertexElement>
          (FOpenGLVertexElement *param_1,int param_2,FOpenGLVertexElement *param_3,
          FIdentityFunctor param_4,FCompareFOpenGLVertexElement param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      if (param_3->StreamIndex < param_1[iVar1].StreamIndex) {
        bVar3 = true;
      }
      else if (param_1[iVar1].StreamIndex < param_3->StreamIndex) {
        bVar3 = false;
      }
      else if (param_3->Offset < param_1[iVar1].Offset) {
        bVar3 = true;
      }
      else if (param_1[iVar1].Offset < param_3->Offset) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (param_3->AttributeIndex < param_1[iVar1].AttributeIndex) {
          bVar3 = true;
        }
      }
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// ~TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,1,0> @ 145be8520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FOpenGLViewport::FOpenGLViewport_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`CreateWritableTextureInitializer'::__l2::<lambda_1>,1,1> @ 145be8540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateWritableTextureInitializer'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_CreateWritableTextureInitializer_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateWritableTextureInitializer'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FOpenGLViewport::Resize'::__l2::<lambda_1>,1,1> @ 145be8580

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FOpenGLViewport::Resize'::__l2::<lambda_1>,1,1>
::~TFunction_OwnedObject<_FOpenGLViewport::Resize_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenGLViewport::Resize'::`2'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`TickProgramLRU'::__l8::<lambda_1>,1,0> @ 145be85a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`TickProgramLRU'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_TickProgramLRU_::__l8::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`TickProgramLRU'::`8'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0> @ 145be85c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FOpenGLDynamicRHI::RHICreateTextureInitializer_::__l11::<lambda_1>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  this_00 = *(FRHIResource **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,1,0> @ 145be85e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,1,0>
::
~TFunction_OwnedObject<_UE::RHICore::FLockBufferInitializer::FLockBufferInitializer_::__l1::<lambda_25_>,1,0>
          (void *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_25_>__0___0FLockBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  this_00 = *(FRHIResource **)((longlong)this + 8);
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

// operator<< @ 145bead50

FArchive * __cdecl operator<<(FArchive *param_1,FOpenGLShaderVarying *param_2)

{
  int *piVar1;
  
  TArrayPrivateFriend::Serialize<char,TSizedDefaultAllocator<32>_>(param_1,&param_2->Varying);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Location = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Location,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->Location);
  return param_1;
}

// operator<< @ 145beade0

FArchive * __cdecl CrossCompiler::operator<<(FArchive *param_1,FPackedArrayInfo *param_2)

{
  ushort *puVar1;
  uchar *puVar2;
  
  puVar1 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Size);
    }
  }
  else {
    param_2->Size = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->TypeName,1);
  }
  else {
    param_2->TypeName = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->TypeIndex = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->TypeIndex,1);
  return param_1;
}

// operator== @ 145beb040

bool __cdecl operator==(FOpenGLVertexDeclarationKey *param_1,FOpenGLVertexDeclarationKey *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_1->VertexElements).ArrayNum;
  if (iVar1 == (param_2->VertexElements).ArrayNum) {
    bVar2 = CompareItems<FOpenGLVertexElement,int>
                      ((FOpenGLVertexElement *)param_1,(FOpenGLVertexElement *)param_2,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// operator== @ 145beb080

bool __cdecl operator==(FOpenGLVertexElement *param_1,FOpenGLVertexElement *param_2)

{
  if ((((((param_1->Type == param_2->Type) && (param_1->StreamIndex == param_2->StreamIndex)) &&
        (param_1->Offset == param_2->Offset)) &&
       ((param_1->Size == param_2->Size && (param_1->Divisor == param_2->Divisor)))) &&
      ((param_1->bNormalized == param_2->bNormalized &&
       ((param_1->AttributeIndex == param_2->AttributeIndex &&
        (param_1->bShouldConvertToFloat == param_2->bShouldConvertToFloat)))))) &&
     (param_1->HashStride == param_2->HashStride)) {
    return true;
  }
  return false;
}

// operator() @ 145beb620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FOpenGLEventQuery *pFVar1;
  FOpenGLEventQuery *pFVar2;
  HGLRC pHVar3;
  TDefaultDelete<FOpenGLEventQuery> *this_00;
  TDefaultDelete<FOpenGLEventQuery> local_18 [16];
  
  pFVar2 = ::operator_new(8);
  if (pFVar2 == (FOpenGLEventQuery *)0x0) {
    pFVar2 = (FOpenGLEventQuery *)0x0;
  }
  else {
    pFVar2 = FOpenGLEventQuery::FOpenGLEventQuery(pFVar2);
  }
  this_00 = (TDefaultDelete<FOpenGLEventQuery> *)(*(longlong *)this + 0x40);
  if (this_00 != local_18) {
    pFVar1 = *(FOpenGLEventQuery **)this_00;
    *(FOpenGLEventQuery **)this_00 = pFVar2;
    TDefaultDelete<FOpenGLEventQuery>::operator()(this_00,pFVar1);
    return;
  }
  if (pFVar2 != (FOpenGLEventQuery *)0x0) {
    pHVar3 = wglGetCurrentContext();
    if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    (*glDeleteSync)(pFVar2->Sync);
    ::operator_delete(pFVar2,8);
  }
  return;
}

// operator() @ 145beb710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
``CreateWritableTextureInitializer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  ulong64 _Size;
  bool bVar2;
  FRHITextureDesc *pFVar3;
  ulong64 uVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  ulong64 local_res20;
  ulong64 local_48 [2];
  
  FOpenGLDynamicRHI::InitializeGLTexture
            (FOpenGLDynamicRHI::Singleton,*(FOpenGLTexture **)this,(void *)0x0,0);
  pFVar3 = (FRHITextureDesc *)(**(code **)(**(longlong **)this + 0x20))();
  uVar9 = 0;
  if ((pFVar3->Dimension == TextureCube) || (bVar2 = false, pFVar3->Dimension == TextureCubeArray))
  {
    bVar2 = true;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 6;
  }
  do {
    uVar7 = 0;
    uVar8 = uVar9;
    if (pFVar3->ArraySize != 0) {
      do {
        uVar6 = 0;
        if (pFVar3->NumMips != '\0') {
          do {
            local_48[0] = 0;
            local_res20 = 0;
            uVar4 = UE::RHITextureUtils::CalculateSubresourceOffset
                              (pFVar3,uVar9,uVar7,uVar6,local_48,&local_res20);
            _Size = local_res20;
            if ((*(ulonglong *)((longlong)this + 0x10) < uVar4 + local_res20) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Offset + SubresourceSize) <= WritableMemorySize",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLTexture.cpp"
                                   ,0x5b9,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_res8[0] = 0;
            _Dst = FOpenGLTexture::Lock
                             (*(FOpenGLTexture **)this,uVar6,uVar8,RLM_WriteOnly,local_res8);
            memcpy(_Dst,(void *)(*(longlong *)((longlong)this + 8) + uVar4),_Size);
            FOpenGLTexture::Unlock(*(FOpenGLTexture **)this,uVar6,uVar8);
            uVar6 = uVar6 + 1;
          } while (uVar6 < pFVar3->NumMips);
        }
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + uVar5;
      } while (uVar7 < pFVar3->ArraySize);
    }
    uVar9 = uVar9 + 1;
    if (uVar5 <= uVar9) {
      return;
    }
  } while( true );
}

// operator() @ 145beb8c0

void __thiscall
``FOpenGLViewport::Resize'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FOpenGLTexture *this_00;
  longlong lVar1;
  
  this_00 = *(FOpenGLTexture **)(*(longlong *)this + 0x38);
  FOpenGLTexture::TryRestoreGLResource(this_00);
  lVar1 = *(longlong *)this;
  PlatformResizeGLContext
            (*(FPlatformOpenGLDevice **)(*(longlong *)(lVar1 + 0x18) + 0x14958),
             *(FPlatformOpenGLContext **)(lVar1 + 0x20),*(uint *)((longlong)this + 8),
             *(uint *)((longlong)this + 0xc),*(bool *)((longlong)this + 0x10),
             *(bool *)((longlong)this + 0x11),*(uint *)(*(longlong *)(lVar1 + 0x38) + 0x144),
             this_00->Resource);
  return;
}

// operator() @ 145beb940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
`CreateWritableTextureInitializer'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  FRHICommandBase *pFVar2;
  FRHIResource *this_00;
  FRHICommandBase *pFVar3;
  FRHICommandListBase *in_R8;
  FRHIResource *local_38;
  FRHICommandBase *local_30;
  longlong local_28;
  
  this_00 = *(FRHIResource **)this;
  local_38 = this_00;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  pFVar3 = *(FRHICommandBase **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  local_30 = pFVar3;
  local_28 = lVar1;
  if (((GRHICommandList.bLatchedBypass == false) || ((in_R8->PersistentState).bImmediate == '\0'))
     && (in_R8->bExecuting == false)) {
    pFVar2 = FMemStackBase::Alloc(&in_R8->MemManager,0x30,8);
    in_R8->NumCommands = in_R8->NumCommands + 1;
    *in_R8->CommandLink = pFVar2;
    in_R8->CommandLink = &pFVar2->Next;
    pFVar2->Next = (FRHICommandBase *)0x0;
    pFVar2->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,``CreateWritableTextureInitializer'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar2[1]._padding_ = (longlong)this_00;
    this_00 = (FRHIResource *)0x0;
    pFVar2[1].Next = pFVar3;
    pFVar3 = (FRHICommandBase *)0x0;
    pFVar2[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar2[2]._padding_ = lVar1;
  }
  else {
    ``CreateWritableTextureInitializer'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
              (&local_38,in_R8);
  }
  if (pFVar3 != (FRHICommandBase *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  (param_1->MemManager).Top = *(uchar **)this;
  *(undefined8 *)this = 0;
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// operator() @ 145bedc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`CreateUniformBufferView'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  HGLRC pHVar7;
  longlong lVar8;
  
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar8 = *(longlong *)((longlong)this + 8);
  cVar2 = *(char *)(lVar8 + 0x20);
  if ((cVar2 != '\0') && (cVar2 != '\x01')) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewDesc.IsBuffer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xcbd,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x18);
  lVar3 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar8 + 0xf4) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UBO->Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                       ,0x28b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(uint *)(lVar8 + 0xd8) < 0x4000) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UBO->GetSize() >= (16u*1024u)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                       ,0x28c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)(*(longlong *)this + 0x50) = *(undefined4 *)(lVar8 + 0xf4);
  *(undefined4 *)(*(longlong *)this + 0x78) = *(undefined4 *)(lVar8 + 0xd8);
  *(undefined1 *)(*(longlong *)this + 0x7e) = 0;
  *(undefined4 *)(*(longlong *)this + 0x54) = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 *)(*(longlong *)this + 0x58) = 0x4000;
  *(undefined8 *)(*(longlong *)this + 0x60) = 0;
  lVar8 = *(longlong *)this;
  puVar4 = *(undefined8 **)(lVar8 + 0x70);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar8 + 0x70) = 0;
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
      *(undefined1 *)(*(longlong *)this + 0x7c) = 0;
      return;
    }
    lVar8 = *(longlong *)this;
  }
  *(undefined1 *)(lVar8 + 0x7c) = 0;
  return;
}

// operator() @ 145bedfe0

void __thiscall
`CreateUniformBuffer'::__l17::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  FLowLevelMemTracker *this_00;
  uint local_res8 [2];
  uint local_res18 [2];
  
  local_res8[0] = 0;
  local_res18[0] = 0;
  SuballocateUBO(*(uint *)((longlong)this + 8),local_res8,local_res18,
                 *(uchar ***)((longlong)this + 0x10));
  lVar4 = *(longlong *)this;
  uVar2 = *(undefined1 *)((longlong)this + 0x20);
  puVar5 = (undefined8 *)**(longlong **)((longlong)this + 0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  }
  uVar3 = *(uint *)((longlong)this + 8);
  uVar6 = **(undefined8 **)((longlong)this + 0x10);
  *(uint *)(lVar4 + 0x50) = local_res8[0];
  *(uint *)(lVar4 + 0x54) = local_res18[0];
  *(undefined8 *)(lVar4 + 0x60) = uVar6;
  puVar7 = *(undefined8 **)(lVar4 + 0x70);
  if (puVar7 != puVar5) {
    *(undefined8 **)(lVar4 + 0x70) = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    }
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  *(uint *)(lVar4 + 0x78) = uVar3;
  *(undefined1 *)(lVar4 + 0x7c) = uVar2;
  *(undefined1 *)(lVar4 + 0x7e) = 1;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (this_00,Default,(void *)(lVar4 + 1),(ulonglong)uVar3,Untagged,None,true);
  }
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return;
}

// operator() @ 145bee480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`CopyDataToUniformBuffer'::__l11::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bee50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glBufferSubData)(0x8a11,0,(long64)*(undefined4 *)this,*(void **)((longlong)this + 8));
  return;
}

// operator() @ 145bee520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`CreateUniformBuffer'::__l19::<lambda_2>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  HGLRC pHVar6;
  FLowLevelMemTracker *this_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_res8 [2];
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  iVar8 = 0x400 - FOpenGL3::NextBufferName;
  local_res8[0] = 0;
  if (iVar8 < 2) {
    memcpy(local_res8,FOpenGL3::BufferNamesCache + FOpenGL3::NextBufferName,(longlong)iVar8 * 4);
    (*glGenBuffers)(0x400,FOpenGL3::BufferNamesCache);
    iVar7 = 1 - iVar8;
    memcpy(local_res8 + iVar8,FOpenGL3::BufferNamesCache,(longlong)iVar7 << 2);
  }
  else {
    local_res8[0] = FOpenGL3::BufferNamesCache[FOpenGL3::NextBufferName];
    iVar7 = FOpenGL3::NextBufferName + 1;
  }
  FOpenGL3::NextBufferName = iVar7;
  FOpenGLDynamicRHI::CachedBindUniformBuffer(FOpenGLDynamicRHI::Singleton,local_res8[0]);
  uVar9 = 0x88e4;
  if (*(char *)((longlong)this + 0x20) != '\0') {
    uVar9 = 0x88e0;
  }
  (*glBufferData)(0x8a11,(long64)*(undefined4 *)((longlong)this + 8),(void *)0x0,uVar9);
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  lVar4 = *(longlong *)this;
  uVar2 = *(undefined1 *)((longlong)this + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  uVar9 = *(uint *)((longlong)this + 8);
  *(uint *)(lVar4 + 0x50) = local_res8[0];
  *(undefined4 *)(lVar4 + 0x54) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  puVar5 = *(undefined8 **)(lVar4 + 0x70);
  if (puVar5 != puVar3) {
    *(undefined8 **)(lVar4 + 0x70) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    }
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  *(uint *)(lVar4 + 0x78) = uVar9;
  *(undefined1 *)(lVar4 + 0x7c) = uVar2;
  *(undefined1 *)(lVar4 + 0x7e) = 1;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (this_00,Default,(void *)(lVar4 + 1),(ulonglong)uVar9,Untagged,None,true);
  }
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 145beeecc

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FOpenGLDynamicRHI::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FOpenGLDynamicRHI::_vector_deleting_destructor__adjustor_24__(FOpenGLDynamicRHI *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FOpenGLDynamicRHI *)&this[-1].KickHint.Syncs.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor' @ 145beeee0

void * __thiscall
FOpenGLShaderParameterCache::_vector_deleting_destructor_
          (FOpenGLShaderParameterCache *this,uint param_1)

{
  FOpenGLShaderParameterCache *pFVar1;
  FOpenGLShaderParameterCache *pFVar2;
  longlong lVar3;
  
  if ((param_1 & 2) != 0) {
    lVar3 = *(longlong *)&this[-1].GlobalUniformArraySize;
    pFVar2 = this + lVar3;
    while (lVar3 != 0) {
      lVar3 = lVar3 + -1;
      pFVar1 = pFVar2 + -1;
      if (0 < pFVar2[-1].GlobalUniformArraySize) {
        FMemory::Free(pFVar2[-1].PackedUniformsScratch[0]);
        FMemory::Free(pFVar1->PackedGlobalUniforms[0]);
      }
      pFVar2[-1].PackedUniformsScratch[0] = (uchar *)0x0;
      pFVar2[-1].PackedUniformsScratch[1] = (uchar *)0x0;
      pFVar2[-1].PackedUniformsScratch[2] = (uchar *)0x0;
      pFVar2[-1].PackedUniformsScratch[3] = (uchar *)0x0;
      pFVar2[-1].PackedUniformsScratch[4] = (uchar *)0x0;
      pFVar2[-1].PackedUniformsScratch[5] = (uchar *)0x0;
      pFVar2[-1].PackedUniformsScratch[6] = (uchar *)0x0;
      pFVar1->PackedGlobalUniforms[0] = (uchar *)0x0;
      pFVar2[-1].PackedGlobalUniforms[1] = (uchar *)0x0;
      pFVar2[-1].PackedGlobalUniforms[2] = (uchar *)0x0;
      pFVar2[-1].PackedGlobalUniforms[3] = (uchar *)0x0;
      pFVar2[-1].PackedGlobalUniforms[4] = (uchar *)0x0;
      pFVar2[-1].PackedGlobalUniforms[5] = (uchar *)0x0;
      pFVar2[-1].PackedGlobalUniforms[6] = (uchar *)0x0;
      pFVar2[-1].GlobalUniformArraySize = -1;
      pFVar2 = pFVar1;
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].GlobalUniformArraySize,
                        *(longlong *)&this[-1].GlobalUniformArraySize * 0xb0 + 8);
    }
    return &this[-1].GlobalUniformArraySize;
  }
  ~FOpenGLShaderParameterCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{40}' @ 145beefec

/* [thunk]:public: virtual void * __ptr64 __cdecl FOpenGLTexture::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
FOpenGLTexture::_vector_deleting_destructor__adjustor_40__(FOpenGLTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FOpenGLTexture *)&this[-1].bInStencilTextureMode,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145bef000

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef030

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOpenGLProgramBinaryCache,void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef0a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateWritableTextureInitializer'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`CreateWritableTextureInitializer'::`2'::<lambda_1>,1,1>::_vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef100

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FOpenGLViewport::Resize'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenGLViewport::Resize'::`2'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef140

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`TickProgramLRU'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`TickProgramLRU'::`8'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::`11'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_25_>__0___0FLockBufferInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHIBuffer___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if (*(FRHIResource **)((longlong)this + 8) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef220

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
TOpenGLBuffer<FOpenGLBaseBuffer>::_scalar_deleting_destructor_
          (TOpenGLBuffer<FOpenGLBaseBuffer> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7__TOpenGLBuffer_VFOpenGLBaseBuffer____6B_;
  ReleaseOwnership(this);
  if (this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,0x53,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall
TOpenGLBuffer<FOpenGLBasePixelBuffer>::_scalar_deleting_destructor_
          (TOpenGLBuffer<FOpenGLBasePixelBuffer> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  HGLRC pHVar3;
  void *pvVar4;
  byte bVar5;
  
  this->_padding_ = (longlong)&___7__TOpenGLBuffer_VFOpenGLBasePixelBuffer____6B_;
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::ReleaseOwnership(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) != 0) {
    if (this->LockBuffer != (void *)0x0) {
      if (this->bLockBufferWasAllocated == 0) {
        if (2 < (byte)LogRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_TOpenGLBuffer<FOpenGLBasePixelBuffer>::ReleaseOwnership(void)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
      }
      else {
        FMemory::Free(this->LockBuffer);
      }
    }
    FOpenGLDynamicRHI::OnBufferDeletion
              (FOpenGLDynamicRHI::Singleton,(uint)this->_padding_,
               *(uint *)((longlong)&this->_padding_ + 4));
    (*glDeleteBuffers)(1,(uint *)((longlong)&this->_padding_ + 4));
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    this->LockBuffer = (void *)0x0;
    UE::RHICore::UpdateGlobalBufferStats
              ((FRHIBufferDesc *)&this->_padding_,-(ulonglong)(uint)this->_padding_);
    if (this->CachedBuffer != (void *)0x0) {
      FMemory::Free(this->CachedBuffer);
      this->CachedBuffer = (void *)0x0;
      this->CachedBufferSize = 0;
    }
  }
  bVar5 = (byte)GNumExplicitGPUsForRendering;
  this->_padding_ = 0;
  *(int *)((longlong)&this->_padding_ + 4) = (1 << (bVar5 & 0x1f)) + -1;
  *(undefined4 *)&this->_padding_ = 0x100000;
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef440

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
FOpenGLBaseBuffer::_scalar_deleting_destructor_(FOpenGLBaseBuffer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (*(longlong *)&this->field_0xe8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,0x53,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  RHIValidation::FResource::~FResource((FResource *)&this->field_0x28);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef4c0

void * __thiscall
FOpenGLBasePixelBuffer::_scalar_deleting_destructor_(FOpenGLBasePixelBuffer *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef530

void * __thiscall
FOpenGLBlendState::_scalar_deleting_destructor_(FOpenGLBlendState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef570

void * __thiscall
FOpenGLBoundShaderState::_scalar_deleting_destructor_(FOpenGLBoundShaderState *this,uint param_1)

{
  ~FOpenGLBoundShaderState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef5b0

void * __thiscall
FOpenGLCommonState::_scalar_deleting_destructor_(FOpenGLCommonState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOpenGLCommonState__6B_;
  CleanupResources(this);
  pFVar1 = (this->UAVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SamplerStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef620

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FOpenGLComputeShader::_scalar_deleting_destructor_(FOpenGLComputeShader *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings((FOpenGLShaderBindings *)&this->_padding_);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef680

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void * __thiscall
FOpenGLContextState::_scalar_deleting_destructor_(FOpenGLContextState *this,uint param_1)

{
  ~FOpenGLContextState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef6c0

void * __thiscall
FOpenGLDepthStencilState::_scalar_deleting_destructor_(FOpenGLDepthStencilState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef700

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall
FOpenGLDynamicRHI::_scalar_deleting_destructor_(FOpenGLDynamicRHI *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> FVar2;
  FRHIResource *pFVar3;
  FFrame *this_00;
  void *pvVar4;
  
  this->_padding_ = (longlong)&_vftable__for__IOpenGLDynamicRHI__;
  this->_padding_ = (longlong)&_vftable__for__IRHICommandContextPSOFallback__;
  FOpenGLFenceKick::Reset(&this->KickHint);
  pFVar1 = (this->KickHint).Syncs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->GLLockTracker).OutstandingLocks.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar3 = (FRHIResource *)(this->CustomPresent).Reference;
  if (pFVar3 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CustomPresentSection);
  pFVar1 = (this->Profiler).QueryPool.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TQueue<TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_>,1>::
  ~TQueue<TUniquePtr<FOpenGLProfiler::FFrame,TDefaultDelete<FOpenGLProfiler::FFrame>_>,1>
            (&(this->Profiler).Pending);
  this_00 = (this->Profiler).Current.Ptr;
  if (this_00 != (FFrame *)0x0) {
    UE::RHI::GPUProfiler::FEventStream::~FEventStream(&this_00->EventStream);
    ::operator_delete(this_00,0x48);
  }
  *(undefined4 *)&(this->TextureMipLimits).field_0x48 = 0;
  pvVar4 = *(void **)&(this->TextureMipLimits).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureMipLimits);
  pFVar1 = (this->GlobalUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FOpenGLContextState::~FOpenGLContextState(&this->ContextState);
  *(undefined ***)&this->BoundShaderStateHistory =
       &___7__TGlobalResource_V__TBoundShaderStateHistory__0CHBA__00___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)&this->BoundShaderStateHistory);
  TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>
            ((TBoundShaderStateHistory<10000,1> *)&this->BoundShaderStateHistory);
  pFVar1 = (this->Viewports).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar3 = (FRHIResource *)(this->PointSamplerState).Reference;
  if (pFVar3 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar3);
  }
  FOpenGLRHIState::~FOpenGLRHIState(&this->PendingState);
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x14c80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef8b0

void * __thiscall
FOpenGLEUniformBufferData::_scalar_deleting_destructor_
          (FOpenGLEUniformBufferData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FOpenGLEUniformBufferData__6B_;
  OpenGLBufferStats::UpdateUniformBufferStats((longlong)(this->Data).ArrayMax << 2,false);
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NumRefs",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0xff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef950

void * __thiscall FOpenGLGPUFence::_scalar_deleting_destructor_(FOpenGLGPUFence *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  pFVar3 = (this->Event).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bef9b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FOpenGLGeometryShader::_scalar_deleting_destructor_(FOpenGLGeometryShader *this,uint param_1)

{
  if (*(void **)&this->field_0x170 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x170);
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings((FOpenGLShaderBindings *)&this->field_0x110);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befa10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FOpenGLPixelShader::_scalar_deleting_destructor_(FOpenGLPixelShader *this,uint param_1)

{
  if (*(void **)&this->field_0x170 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x170);
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings((FOpenGLShaderBindings *)&this->field_0x110);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befa70

void * __thiscall
FOpenGLProgramBinaryMapping::_scalar_deleting_destructor_
          (FOpenGLProgramBinaryMapping *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  IMappedFileHandle *pIVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  (this->Content).HashSize = 0;
  FVar1 = (this->Content).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FOpenGLProgramKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Content).Elements);
  DestructItems<TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_>,int>
            ((TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)
             (this->MappedRegions).AllocatorInstance.Data,(this->MappedRegions).ArrayNum);
  pFVar2 = (this->MappedRegions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->MappedCacheFile).Ptr;
  if (pIVar3 != (IMappedFileHandle *)0x0) {
    (**(code **)pIVar3->_padding_)(pIVar3,1);
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befb40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall FOpenGLRHIState::_scalar_deleting_destructor_(FOpenGLRHIState *this,uint param_1)

{
  ~FOpenGLRHIState(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x7f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befb80

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void * __thiscall
FOpenGLRasterizerState::_scalar_deleting_destructor_(FOpenGLRasterizerState *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befbc0

void * __thiscall
FOpenGLRenderQuery_RHI::_scalar_deleting_destructor_(FOpenGLRenderQuery_RHI *this,uint param_1)

{
  FOpenGLRenderQuery::~FOpenGLRenderQuery((FOpenGLRenderQuery *)&this->field_0x18);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befc10

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FOpenGLSamplerState::_scalar_deleting_destructor_(FOpenGLSamplerState *this,uint param_1)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&___7FOpenGLSamplerState__6B_;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (*glDeleteSamplers)(1,&this->Resource);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall
FOpenGLShaderResourceView::_scalar_deleting_destructor_
          (FOpenGLShaderResourceView *this,uint param_1)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIShaderResourceView__;
  this->_padding_ = (longlong)&_vftable__for__FOpenGLView__;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((this->Resource != 0) && (this->OwnsResource != false)) {
    FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,this->Resource)
    ;
    (*glDeleteTextures)(1,&this->Resource);
  }
  this->Resource = 0;
  this->OwnsResource = false;
  this->Target = 0x8c2a;
  this->LimitMip = -1;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145befe20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FOpenGLStagingBuffer::_scalar_deleting_destructor_(FOpenGLStagingBuffer *this,uint param_1)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&___7FOpenGLStagingBuffer__6B_;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  (*glDeleteBuffers)(1,&this->ShadowBuffer);
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145beff00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall FOpenGLTexture::_scalar_deleting_destructor_(FOpenGLTexture *this,uint param_1)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  HGLRC pHVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                  ::__l2::Lru,4000);
      atexit(`FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__);
      _Init_thread_footer(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FTextureEvictionLRU::Remove
            (&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
              ::__l2::Lru,this);
  if (this->bCanCreateAsEvicted == '\0') {
    ReleaseOpenGLFramebuffers((FRHITexture *)this);
  }
  DeleteGLResource(this);
  UpdateTextureStats(this,false);
  FVar1 = (this->bAllocatedStorage).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  DestructItems<TRefCountPtr<TOpenGLBuffer<FOpenGLBasePixelBuffer>_>,int>
            ((TRefCountPtr<TOpenGLBuffer<FOpenGLBasePixelBuffer>_> *)
             (this->PixelBuffers).AllocatorInstance.Data,(this->PixelBuffers).ArrayNum);
  pFVar2 = (this->PixelBuffers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDefaultDelete<FTextureEvictionParams>::operator()
            ((TDefaultDelete<FTextureEvictionParams> *)&this->EvictionParamsPtr,
             (this->EvictionParamsPtr).Ptr);
  if (this->_padding_ != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLResources.h"
                       ,0x53,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bf0100

void * __thiscall
FOpenGLUniformBuffer::_scalar_deleting_destructor_(FOpenGLUniformBuffer *this,uint param_1)

{
  ~FOpenGLUniformBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bf0140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall
FOpenGLUnorderedAccessView::_scalar_deleting_destructor_
          (FOpenGLUnorderedAccessView *this,uint param_1)

{
  HGLRC pHVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIUnorderedAccessView__;
  this->_padding_ = (longlong)&_vftable__for__FOpenGLView__;
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->_padding_ != 0) {
    *(longlong *)(this->_padding_ + 0x10) = this->_padding_;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    *(longlong *)this->_padding_ = this->_padding_;
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((this->Resource != 0) && (this->OwnsResource != false)) {
    FOpenGLDynamicRHI::InvalidateTextureResourceInCache(FOpenGLDynamicRHI::Singleton,this->Resource)
    ;
    (*glDeleteTextures)(1,&this->Resource);
  }
  this->Resource = 0;
  this->BufferResource = 0;
  this->Format = 0;
  this->UnrealFormat = '\0';
  this->Level = '\0';
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bf0280

void * __thiscall
FOpenGLVertexDeclaration::_scalar_deleting_destructor_(FOpenGLVertexDeclaration *this,uint param_1)

{
  FRHIResource::~FRHIResource((FRHIResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bf02c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void * __thiscall
FOpenGLVertexShader::_scalar_deleting_destructor_(FOpenGLVertexShader *this,uint param_1)

{
  if (*(void **)&this->field_0x170 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x170);
  }
  FOpenGLShaderBindings::~FOpenGLShaderBindings((FOpenGLShaderBindings *)&this->field_0x110);
  FRHIShader::~FRHIShader((FRHIShader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bf0320

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void * __thiscall FOpenGLViewport::_scalar_deleting_destructor_(FOpenGLViewport *this,uint param_1)

{
  ~FOpenGLViewport(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145bf0360

void * __thiscall
IOpenGLDynamicRHI::_scalar_deleting_destructor_(IOpenGLDynamicRHI *this,uint param_1)

{
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// AppendCString @ 145bf19f0

void __cdecl
`anonymous_namespace'::AppendCString
          (TArray<char,TSizedDefaultAllocator<32>_> *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  FScriptContainerElement *_Src;
  int iVar5;
  int iVar6;
  
  if (param_1->ArrayNum < 1) {
    sVar4 = strlen(param_2);
    iVar6 = (int)sVar4 + 1;
    if (((param_2 == (char *)0x0) && (iVar6 != 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar6,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    if (iVar6 != 0) {
      memcpy((param_1->AllocatorInstance).Data + iVar3,param_2,(longlong)iVar6);
      return;
    }
  }
  else {
    iVar6 = param_1->ArrayNum + -1;
    sVar4 = strlen(param_2);
    if ((param_2 == (char *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x793,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = (int)sVar4;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    _Src = (param_1->AllocatorInstance).Data + iVar6;
    memmove(_Src + iVar5,_Src,(longlong)(iVar3 - iVar6));
    if (iVar5 != 0) {
      memcpy((param_1->AllocatorInstance).Data + iVar6,param_2,(longlong)iVar5);
    }
  }
  return;
}

// ApplyExtensionsOverrides @ 145bf1b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ApplyExtensionsOverrides(FString *param_1)

{
  void *pvVar1;
  TConsoleVariableData<FString> *pTVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  pTVar2 = CVarOpenGLStripExtensions.Ref;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar6 = 0x10;
    if (!bVar4) goto LAB_145bf1bbc;
  }
  lVar6 = 0;
LAB_145bf1bbc:
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = *(int *)((longlong)&pTVar2->ShadowedValue[0].Data.ArrayNum + lVar6);
  lVar9 = (longlong)local_38.Data.ArrayNum;
  pvVar1 = *(void **)((longlong)&pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data + lVar6);
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pvVar1,lVar9 * 2);
  }
  FString::ParseIntoArray(&local_38,&local_48,L",",true);
  iVar3 = local_48.ArrayNum;
  pFVar11 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar10.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar10.Data == pFVar11) break;
    FString::TrimStartAndEndInline((FString *)FVar10.Data);
    if (*(int *)(FVar10.Data + 8) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)FVar10.Data;
    }
    iVar5 = FString::ReplaceInline(param_1,pwVar8,L"",IgnoreCase);
    if ((0 < iVar5) && (4 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    FVar10.Data = FVar10.Data + 0x10;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  pTVar2 = CVarOpenGLAddExtensions.Ref;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), lVar6 = 0x10, bVar4)) {
    lVar6 = 0;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = *(int *)((longlong)&pTVar2->ShadowedValue[0].Data.ArrayNum + lVar6);
  lVar9 = (longlong)local_38.Data.ArrayNum;
  pvVar1 = *(void **)((longlong)&pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data + lVar6);
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pvVar1,lVar9 * 2);
  }
  FString::ParseIntoArray(&local_38,&local_48,L",",true);
  iVar3 = local_48.ArrayNum;
  pFVar11 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar10.Data = local_48.AllocatorInstance.Data;
  do {
    if (local_48.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar10.Data == pFVar11) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      return;
    }
    FString::TrimStartAndEndInline((FString *)FVar10.Data);
    if (*(int *)(FVar10.Data + 8) == 0) {
      pwVar8 = L"";
LAB_145bf1db9:
      sVar7 = wcslen(pwVar8);
      iVar5 = FString::Find(param_1,pwVar8,(int)sVar7,IgnoreCase,FromStart,-1);
      if (iVar5 == -1) goto LAB_145bf1de7;
    }
    else {
      pwVar8 = *(wchar_t **)FVar10.Data;
      if (pwVar8 != (wchar_t *)0x0) goto LAB_145bf1db9;
LAB_145bf1de7:
      FString::AppendChars(param_1,L" ",1);
      iVar5 = *(int *)(FVar10.Data + 8) + -1;
      if (*(int *)(FVar10.Data + 8) == 0) {
        iVar5 = 0;
      }
      FString::AppendChars(param_1,*(wchar_t **)FVar10.Data,iVar5);
      if (4 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    FVar10.Data = FVar10.Data + 0x10;
  } while( true );
}

// BeginFrame_UniformBufferPoolCleanup @ 145bf2320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl BeginFrame_UniformBufferPoolCleanup(void)

{
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_OpenGLUniformBufferCleanupTime> FVar11;
  FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory> FVar15;
  HGLRC pHVar16;
  longlong lVar17;
  int iVar18;
  ForAnyElementType *pFVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  FNameEntryId FVar25;
  ForAnyElementType *pFVar26;
  uchar auVar27 [8];
  uchar auVar28 [8];
  FColor_u_0 local_res20 [2];
  longlong local_130;
  FName local_128;
  uint local_120 [2];
  FScriptContainerElement *local_118;
  longlong local_110;
  FName local_108;
  uint local_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  FName local_f0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
  iVar21 = 10;
  iVar23 = 10;
  FVar11 = StatPtr_STAT_OpenGLUniformBufferCleanupTime;
  if (StatPtr_STAT_OpenGLUniformBufferCleanupTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUniformBufferCleanupTime>)0x0) {
    pFVar10 = FName::FName(&local_78,"STAT_OpenGLUniformBufferCleanupTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_OpenGLUniformBufferCleanupTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUniformBufferCleanupTime,
                        *pFVar10,L"Uniform buffer pool cleanup time","STATGROUP_OpenGLRHI",
                        "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_128 = *(FName *)FVar11;
  bVar5 = false;
  bVar4 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((local_128.ComparisonIndex.Value.Value != 0) || (local_128.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = local_128.ComparisonIndex.Value.Value;
        local_108.Number = local_128.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                   ,0xf1);
        bVar5 = true;
        bVar4 = true;
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_128,CycleScopeStart);
      bVar6 = true;
      goto LAB_145bf24a1;
    }
  }
  bVar5 = bVar7;
  bVar4 = bVar6;
  bVar6 = false;
  local_128 = local_f0;
LAB_145bf24a1:
  local_130 = 0;
  do {
    iVar9 = 0;
    lVar17 = local_130;
    iVar18 = iVar23;
    if (0 < UniformBufferSizeBuckets.ArrayNum) {
      do {
        pFVar19 = (ForAnyElementType *)
                  ((longlong)&GLUniformBufferPool[0][0].AllocatorInstance.Data + lVar17);
        uVar22 = *(int *)((longlong)&GLUniformBufferPool[0][0].ArrayNum + lVar17) - 1;
        local_110 = lVar17;
        if (-1 < (int)uVar22) {
          lVar20 = (longlong)(int)uVar22 * 0x18;
          do {
            uVar8 = 0;
            if ((int)uVar22 < *(int *)&pFVar19[1].Data) {
              uVar8 = ~uVar22 >> 0x1f;
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
            pFVar24 = pFVar19->Data + lVar20;
            if ((*(int *)pFVar24 == 0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("PoolEntry.Buffer",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                                   ,0xfe,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (0x1e < GFrameNumberRenderThread - *(int *)(pFVar24 + 0xc)) {
              FVar12 = StatPtr_STAT_OpenGLNumFreeUniformBuffers;
              if (StatPtr_STAT_OpenGLNumFreeUniformBuffers ==
                  (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)0x0) {
                pFVar10 = FName::FName(&local_70,"STAT_OpenGLNumFreeUniformBuffers");
                FVar12 = (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_OpenGLNumFreeUniformBuffers,*pFVar10,
                                    L"Uniform buffer pool num free","STATGROUP_OpenGLRHI",
                                    "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false
                                    ,MCR_Invalid);
              }
              FVar2 = *(FName *)FVar12;
              FVar25 = FVar2.ComparisonIndex.Value;
              uVar8 = FVar2.Number;
              local_100 = FVar25.Value;
              uStack_fc = uVar8;
              if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar13 == (FThreadStats *)0x0) {
                  pFVar14 = FThreadStatsPool::Get();
                  pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
                }
                local_b8.NameAndInfo.Number = uVar8 & 0xffffbfff | 0xb000;
                local_b8.StatData.Pad[0] = '\x01';
                local_b8.StatData.Pad[1] = '\0';
                local_b8.StatData.Pad[2] = '\0';
                local_b8.StatData.Pad[3] = '\0';
                local_b8.StatData.Pad[4] = '\0';
                local_b8.StatData.Pad[5] = '\0';
                local_b8.StatData.Pad[6] = '\0';
                local_b8.StatData.Pad[7] = '\0';
                local_d8 = FVar2;
                local_b8.NameAndInfo.Index.Value = FVar25.Value;
                FThreadStats::AddStatMessage(pFVar13,&local_b8);
                FStatsTrace::Add(&local_d8,-1);
                if (pFVar13->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar13,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar13,false,false);
                }
              }
              auVar27[4] = '\0';
              auVar27[5] = '\0';
              auVar27[6] = '\0';
              auVar27[7] = '\0';
              auVar27._0_4_ = *(uint *)(pFVar24 + 4);
              if (auVar27 != (uchar  [8])0x0) {
                FVar15 = StatPtr_STAT_OpenGLFreeUniformBufferMemory;
                if (StatPtr_STAT_OpenGLFreeUniformBufferMemory ==
                    (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)0x0) {
                  pFVar10 = FName::FName(&local_68,"STAT_OpenGLFreeUniformBufferMemory");
                  FVar15 = (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_OpenGLFreeUniformBufferMemory,*pFVar10,
                                      L"Uniform buffer pool memory","STATGROUP_OpenGLRHI",
                                      "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,
                                      false,MCR_Physical);
                }
                FVar2 = *(FName *)FVar15;
                FVar25 = FVar2.ComparisonIndex.Value;
                uVar8 = FVar2.Number;
                local_f8 = FVar25.Value;
                uStack_f4 = uVar8;
                if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar13 == (FThreadStats *)0x0) {
                    pFVar14 = FThreadStatsPool::Get();
                    pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
                  }
                  local_a8.NameAndInfo.Number = uVar8 & 0xffffbfff | 0xb000;
                  local_d0 = FVar2;
                  local_a8.StatData.Pad = auVar27;
                  local_a8.NameAndInfo.Index.Value = FVar25.Value;
                  FThreadStats::AddStatMessage(pFVar13,&local_a8);
                  FStatsTrace::Add(&local_d0,-(longlong)auVar27);
                  if (pFVar13->ScopeCount == 0) {
                    FThreadStats::Flush(pFVar13,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar13,false,false);
                  }
                }
              }
              ReleaseUniformBuffer(false,*(uint *)pFVar24,*(uint *)(pFVar24 + 4));
              lVar17 = local_110;
              pFVar19 = (ForAnyElementType *)
                        ((longlong)&GLUniformBufferPool[0][0].AllocatorInstance.Data + local_110);
              uVar8 = 0;
              if ((int)uVar22 < *(int *)((longlong)&GLUniformBufferPool[0][0].ArrayNum + local_110))
              {
                uVar8 = ~uVar22 >> 0x1f;
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
              iVar21 = *(int *)((longlong)&GLUniformBufferPool[0][0].ArrayNum + lVar17);
              iVar18 = ~uVar22 + iVar21;
              if (1 < iVar18) {
                iVar18 = 1;
              }
              if (iVar18 != 0) {
                memmove(pFVar19->Data + (ulonglong)uVar22 * 0x18,
                        pFVar19->Data + (longlong)(iVar21 - iVar18) * 0x18,(longlong)iVar18 * 0x18);
              }
              iVar21 = *(int *)((longlong)&GLUniformBufferPool[0][0].ArrayNum + lVar17) + -1;
              *(int *)((longlong)&GLUniformBufferPool[0][0].ArrayNum + lVar17) = iVar21;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,pFVar19,iVar21,
                         (int *)((longlong)&GLUniformBufferPool[0][0].ArrayMax + lVar17));
              iVar21 = iVar23 + -1;
              iVar23 = iVar21;
              if (iVar21 == 0) break;
            }
            lVar20 = lVar20 + -0x18;
            uVar22 = uVar22 - 1;
          } while (-1 < (int)uVar22);
        }
        if (GUseEmulatedUniformBuffers != false) {
          if (iVar21 == 0) goto LAB_145bf2e7f;
          uVar22 = *(int *)((longlong)&GLEmulatedUniformBufferPool[0][0].ArrayNum + lVar17) - 1;
          if (-1 < (int)uVar22) {
            pFVar19 = (ForAnyElementType *)
                      ((longlong)&GLEmulatedUniformBufferPool[0][0].AllocatorInstance.Data + lVar17)
            ;
            lVar20 = (longlong)(int)uVar22 * 0x18;
            do {
              uVar8 = 0;
              if ((int)uVar22 < *(int *)&pFVar19[1].Data) {
                uVar8 = ~uVar22 >> 0x1f;
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
              pFVar24 = pFVar19->Data + lVar20;
              local_118 = pFVar24;
              if ((*(int *)pFVar24 == 0) &&
                 (bVar7 = FDebug::CheckVerifyFailedImpl2
                                    ("PoolEntry.Buffer",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                                     ,0x116,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (0x1e < GFrameNumberRenderThread - *(int *)(pFVar24 + 0xc)) {
                FVar12 = StatPtr_STAT_OpenGLNumFreeUniformBuffers;
                if (StatPtr_STAT_OpenGLNumFreeUniformBuffers ==
                    (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)0x0) {
                  pFVar10 = FName::FName(&local_60,"STAT_OpenGLNumFreeUniformBuffers");
                  FVar12 = (FThreadSafeStaticStat<FStat_STAT_OpenGLNumFreeUniformBuffers>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_OpenGLNumFreeUniformBuffers,*pFVar10,
                                      L"Uniform buffer pool num free","STATGROUP_OpenGLRHI",
                                      "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,
                                      false,MCR_Invalid);
                }
                FVar2 = *(FName *)FVar12;
                if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar13 == (FThreadStats *)0x0) {
                    pFVar14 = FThreadStatsPool::Get();
                    pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
                  }
                  local_98.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
                  local_98.StatData.Pad[0] = '\x01';
                  local_98.StatData.Pad[1] = '\0';
                  local_98.StatData.Pad[2] = '\0';
                  local_98.StatData.Pad[3] = '\0';
                  local_98.StatData.Pad[4] = '\0';
                  local_98.StatData.Pad[5] = '\0';
                  local_98.StatData.Pad[6] = '\0';
                  local_98.StatData.Pad[7] = '\0';
                  local_c8 = FVar2;
                  local_98.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                  FThreadStats::AddStatMessage(pFVar13,&local_98);
                  FStatsTrace::Add(&local_c8,-1);
                  if (pFVar13->ScopeCount == 0) {
                    FThreadStats::Flush(pFVar13,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar13,false,false);
                  }
                }
                auVar28[4] = '\0';
                auVar28[5] = '\0';
                auVar28[6] = '\0';
                auVar28[7] = '\0';
                auVar28._0_4_ = *(uint *)(pFVar24 + 4);
                if (auVar28 != (uchar  [8])0x0) {
                  FVar15 = StatPtr_STAT_OpenGLFreeUniformBufferMemory;
                  if (StatPtr_STAT_OpenGLFreeUniformBufferMemory ==
                      (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)0x0) {
                    pFVar10 = FName::FName(local_58,"STAT_OpenGLFreeUniformBufferMemory");
                    FVar15 = (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_OpenGLFreeUniformBufferMemory,*pFVar10,
                                        L"Uniform buffer pool memory","STATGROUP_OpenGLRHI",
                                        "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,
                                        false,MCR_Physical);
                  }
                  FVar2 = *(FName *)FVar15;
                  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                     (FThreadStats::TlsSlot != 0xffffffff)) {
                    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
                    if (pFVar13 == (FThreadStats *)0x0) {
                      pFVar14 = FThreadStatsPool::Get();
                      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
                    }
                    local_88.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
                    local_c0 = FVar2;
                    local_88.StatData.Pad = auVar28;
                    local_88.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                    FThreadStats::AddStatMessage(pFVar13,&local_88);
                    FStatsTrace::Add(&local_c0,-(longlong)auVar28);
                    if (pFVar13->ScopeCount == 0) {
                      FThreadStats::Flush(pFVar13,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar13,false,false);
                    }
                  }
                }
                uVar8 = *(uint *)(pFVar24 + 4);
                uVar1 = *(uint *)local_118;
                pHVar16 = wglGetCurrentContext();
                if (pHVar16 !=
                    (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
                  IsInRHIThread();
                  IsInRenderingThread();
                  IsInGameThread();
                  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
                }
                EnterCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
                local_120[0] = uVar1;
                if (UniformBufferDataFactory.Entries._8_4_ !=
                    UniformBufferDataFactory.Entries._52_4_) {
                  TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
                  ::RemoveImpl<unsigned_int>
                            ((TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
                              *)&UniformBufferDataFactory,uVar1,local_120);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
                OpenGLBufferStats::UpdateUniformBufferStats((ulonglong)uVar8,false);
                lVar17 = local_110;
                pFVar19 = (ForAnyElementType *)
                          ((longlong)&GLEmulatedUniformBufferPool[0][0].AllocatorInstance.Data +
                          local_110);
                uVar8 = 0;
                if ((int)uVar22 <
                    *(int *)((longlong)&GLEmulatedUniformBufferPool[0][0].ArrayNum + local_110)) {
                  uVar8 = ~uVar22 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar21 = *(int *)((longlong)&GLEmulatedUniformBufferPool[0][0].ArrayNum + lVar17);
                iVar18 = ~uVar22 + iVar21;
                if (1 < iVar18) {
                  iVar18 = 1;
                }
                if (iVar18 != 0) {
                  memmove(pFVar19->Data + (ulonglong)uVar22 * 0x18,
                          pFVar19->Data + (longlong)(iVar21 - iVar18) * 0x18,(longlong)iVar18 * 0x18
                         );
                }
                iVar21 = *(int *)((longlong)&GLEmulatedUniformBufferPool[0][0].ArrayNum + lVar17) +
                         -1;
                *(int *)((longlong)&GLEmulatedUniformBufferPool[0][0].ArrayNum + lVar17) = iVar21;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,pFVar19,iVar21,
                           (int *)((longlong)&GLEmulatedUniformBufferPool[0][0].ArrayMax + lVar17));
                iVar21 = iVar23 + -1;
                iVar23 = iVar21;
                if (iVar21 == 0) goto LAB_145bf2e7f;
              }
              lVar20 = lVar20 + -0x18;
              uVar22 = uVar22 - 1;
            } while (-1 < (int)uVar22);
          }
        }
        if (iVar21 == 0) goto LAB_145bf2e7f;
        iVar9 = iVar9 + 1;
        local_110 = lVar17 + 0x20;
        lVar17 = local_110;
        iVar18 = iVar21;
      } while (iVar9 < UniformBufferSizeBuckets.ArrayNum);
    }
    iVar23 = iVar18;
    local_130 = local_130 + 0x10;
  } while (local_130 < 0x20);
LAB_145bf2e7f:
  iVar23 = 0;
  lVar17 = (longlong)(int)(GFrameNumberRenderThread % 3);
  if (0 < UniformBufferSizeBuckets.ArrayNum) {
    lVar20 = lVar17 * 0x5a0;
    do {
      pFVar26 = (ForAnyElementType *)
                ((longlong)&SafeGLUniformBufferPools[0][0][0].AllocatorInstance.Data + lVar20);
      pFVar19 = (ForAnyElementType *)
                ((longlong)&GLUniformBufferPool[lVar17 * -0x2d][0].AllocatorInstance.Data + lVar20);
      if ((pFVar19 == pFVar26) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar21 = *(int *)((longlong)&SafeGLUniformBufferPools[0][0][0].ArrayNum + lVar20);
      if (iVar21 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,iVar21,pFVar19,(int *)(lVar17 * -0x5a0 + 0x1551706e8 + lVar20),
                           (int *)(lVar17 * -0x5a0 + 0x1551706ec + lVar20));
        memcpy(pFVar19->Data + (longlong)iVar9 * 0x18,pFVar26->Data,(longlong)iVar21 * 0x18);
      }
      iVar21 = *(int *)((longlong)&SafeGLUniformBufferPools[0][0][0].ArrayMax + lVar20);
      *(undefined4 *)((longlong)&SafeGLUniformBufferPools[0][0][0].ArrayNum + lVar20) = 0;
      if (iVar21 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,pFVar26,0,
                   (int *)((longlong)&SafeGLUniformBufferPools[0][0][0].ArrayMax + lVar20));
      }
      if (GUseEmulatedUniformBuffers != false) {
        pFVar19 = (ForAnyElementType *)
                  ((longlong)&SafeGLEmulatedUniformBufferPools[0][0][0].AllocatorInstance.Data +
                  lVar20);
        pFVar26 = (ForAnyElementType *)
                  ((longlong)&GLEmulatedUniformBufferPool[lVar17 * -0x2d][0].AllocatorInstance.Data
                  + lVar20);
        if ((pFVar26 == pFVar19) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar21 = *(int *)((longlong)&SafeGLEmulatedUniformBufferPools[0][0][0].ArrayNum + lVar20);
        if (iVar21 != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,iVar21,pFVar26,(int *)(lVar17 * -0x5a0 + 0x155170c88 + lVar20),
                             (int *)(lVar20 + lVar17 * -0x5a0 + 0x155170c8c));
          memcpy(pFVar26->Data + (longlong)iVar9 * 0x18,pFVar19->Data,(longlong)iVar21 * 0x18);
        }
        iVar21 = *(int *)((longlong)&SafeGLEmulatedUniformBufferPools[0][0][0].ArrayMax + lVar20);
        *(undefined4 *)((longlong)&SafeGLEmulatedUniformBufferPools[0][0][0].ArrayNum + lVar20) = 0;
        if (iVar21 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,pFVar19,0,
                     (int *)((longlong)&SafeGLEmulatedUniformBufferPools[0][0][0].ArrayMax + lVar20)
                    );
        }
      }
      iVar23 = iVar23 + 1;
      lVar20 = lVar20 + 0x20;
    } while (iVar23 < UniformBufferSizeBuckets.ArrayNum);
  }
  iVar23 = 0;
  if (0 < UniformBufferSizeBuckets.ArrayNum) {
    lVar20 = lVar17 * 0x5a0 + 8;
    do {
      pFVar26 = (ForAnyElementType *)
                ((longlong)&SafeGLUniformBufferPools[0][0][0].ArrayNum + lVar20);
      pFVar19 = (ForAnyElementType *)(lVar20 + lVar17 * -0x5a0 + 0x1551706e8);
      if ((pFVar19 == pFVar26) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar21 = *(int *)((longlong)&SafeGLUniformBufferPools[0][0][1].AllocatorInstance.Data + lVar20
                       );
      if (iVar21 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,iVar21,pFVar19,(int *)(lVar17 * -0x5a0 + 0x1551706f0 + lVar20),
                           (int *)(lVar17 * -0x5a0 + 0x1551706f4 + lVar20));
        memcpy(pFVar19->Data + (longlong)iVar9 * 0x18,
               *(void **)((longlong)&SafeGLUniformBufferPools[0][0][0].ArrayNum + lVar20),
               (longlong)iVar21 * 0x18);
      }
      iVar21 = *(int *)((longlong)&SafeGLUniformBufferPools[0][0][1].AllocatorInstance.Data +
                       lVar20 + 4);
      *(undefined4 *)((longlong)&SafeGLUniformBufferPools[0][0][1].AllocatorInstance.Data + lVar20)
           = 0;
      if (iVar21 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,pFVar26,0,
                   (int *)((longlong)&SafeGLUniformBufferPools[0][0][1].AllocatorInstance.Data +
                          lVar20 + 4));
      }
      if (GUseEmulatedUniformBuffers != false) {
        pFVar26 = (ForAnyElementType *)(lVar17 * -0x5a0 + 0x155170c88 + lVar20);
        pFVar19 = (ForAnyElementType *)
                  ((longlong)&SafeGLEmulatedUniformBufferPools[0][0][0].ArrayNum + lVar20);
        if ((pFVar26 == pFVar19) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar21 = *(int *)((longlong)
                          &SafeGLEmulatedUniformBufferPools[0][0][1].AllocatorInstance.Data + lVar20
                         );
        if (iVar21 != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,iVar21,pFVar26,(int *)(lVar17 * -0x5a0 + 0x155170c90 + lVar20),
                             (int *)(lVar20 + lVar17 * -0x5a0 + 0x155170c94));
          memcpy(pFVar26->Data + (longlong)iVar9 * 0x18,
                 *(void **)((longlong)&SafeGLEmulatedUniformBufferPools[0][0][0].ArrayNum + lVar20),
                 (longlong)iVar21 * 0x18);
        }
        iVar21 = *(int *)((longlong)
                          &SafeGLEmulatedUniformBufferPools[0][0][1].AllocatorInstance.Data +
                         lVar20 + 4);
        *(undefined4 *)
         ((longlong)&SafeGLEmulatedUniformBufferPools[0][0][1].AllocatorInstance.Data + lVar20) = 0;
        if (iVar21 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,pFVar19,0,
                     (int *)((longlong)
                             &SafeGLEmulatedUniformBufferPools[0][0][1].AllocatorInstance.Data +
                            lVar20 + 4));
        }
      }
      iVar23 = iVar23 + 1;
      lVar20 = lVar20 + 0x20;
    } while (iVar23 < UniformBufferSizeBuckets.ArrayNum);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(local_128,CycleScopeEnd);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
  return;
}

// BeginFrame_VertexBufferCleanup @ 145bf33f0

void __cdecl BeginFrame_VertexBufferCleanup(void)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if (2 < GFrameNumberRenderThread) {
    uVar5 = 0;
    iVar6 = GFrameNumberRenderThread - 3;
    if (0 < AllocationList.ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < AllocationList.ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)(AllocationList.AllocatorInstance.Data + lVar7);
        if ((*(int *)((longlong)pvVar1 + 0x10) < 0) || (iVar6 < *(int *)((longlong)pvVar1 + 0x10)))
        break;
        FreeSpace = FreeSpace +
                    (uint)*(byte *)((longlong)pvVar1 + 0xf) + *(int *)((longlong)pvVar1 + 8);
        operator_delete(pvVar1,0x18);
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar5 < AllocationList.ArrayNum);
    }
    uVar4 = 0;
    if ((int)uVar5 <= AllocationList.ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      if (AllocationList.ArrayNum - uVar5 != 0) {
        memmove(AllocationList.AllocatorInstance.Data,
                AllocationList.AllocatorInstance.Data + (longlong)(int)uVar5 * 8,
                (longlong)(int)(AllocationList.ArrayNum - uVar5) << 3);
      }
      AllocationList.ArrayNum = AllocationList.ArrayNum - uVar5;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&AllocationList.AllocatorInstance,AllocationList.ArrayNum,
                 &AllocationList.ArrayMax);
    }
    FrameBytes = 0;
  }
  return;
}

// ConditionallyAllocateRenderbufferStorage @ 145bf8ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ConditionallyAllocateRenderbufferStorage(FOpenGLTexture *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((bool)param_1->bMultisampleRenderbuffer) {
    bVar3 = FOpenGLTexture::GetAllocatedStorageForMip(param_1,0,0);
    if (!bVar3) {
      lVar4 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
      if (*(byte *)(lVar4 + 0x31) < 2) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("RenderTarget.IsMultisampled()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                           ,0x6e,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (param_1->Target != 0x8d41) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("RenderTarget.Target == 0x8D41",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                           ,0x6f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar1 = param_1->Resource;
      (**(code **)(param_1->_padding_ + 0x20))(param_1);
      (*glBindRenderbuffer)(0x8d41,uVar1);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FOpenGLBase::RenderbufferStorageMultisample",0x2b,Yes);
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_static_void___cdecl_FOpenGLBase::RenderbufferStorageMultisample(unsigned_int,int,int,int,int)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogOpenGL);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      (*glBindRenderbuffer)(0x8d41,0);
      FOpenGLTexture::SetAllocatedStorage(param_1,true);
    }
  }
  return;
}

// ContextMakeCurrent @ 145bf8eb0

void __cdecl ContextMakeCurrent(HDC__ *param_1,HGLRC__ *param_2)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  
  BVar3 = wglMakeCurrent((HDC)param_1,(HGLRC)param_2);
  if (BVar3 == 0) {
    BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar3 == 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x18,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// CopyDataToUniformBuffer @ 145bf8f00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
CopyDataToUniformBuffer
          (FRHICommandListImmediate *param_1,FOpenGLUniformBuffer *param_2,void *param_3,
          uint param_4)

{
  longlong *plVar1;
  FOpenGLEUniformBufferData *pFVar2;
  FScriptContainerElement *_Dst;
  void *_Dst_00;
  undefined8 *puVar3;
  char cVar4;
  ulonglong _Size;
  uint local_38;
  undefined4 uStack_34;
  void *pvStack_30;
  
  pFVar2 = (param_2->EmulatedBufferData).Reference;
  _Size = (ulonglong)param_4;
  if (pFVar2 == (FOpenGLEUniformBufferData *)0x0) {
    if (param_2->PersistentlyMappedBuffer != (uchar *)0x0) {
      memcpy(param_2->PersistentlyMappedBuffer,param_3,_Size);
      return;
    }
    cVar4 = GRHICommandList.bLatchedBypass;
    if ((((bool)cVar4 == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      _Dst_00 = FMemStackBase::Alloc((FMemStackBase *)param_1,_Size,0x10);
      memcpy(_Dst_00,param_3,_Size);
      cVar4 = GRHICommandList.bLatchedBypass;
      param_3 = _Dst_00;
    }
    local_38 = param_4;
    pvStack_30 = param_3;
    if (((cVar4 != '\0') && ((param_1->field_0x29b & 0x20) != 0)) || (param_1->field_0x64 != '\0'))
    {
      `CopyDataToUniformBuffer'::__l11::<lambda_1>::operator()(&local_38,param_1);
      return;
    }
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`CopyDataToUniformBuffer'::`11'::<lambda_1>_>
               ::_vftable_;
    puVar3[4] = L"TRHILambdaCommand";
    puVar3[2] = CONCAT44(uStack_34,local_38);
    puVar3[3] = pvStack_30;
  }
  else {
    _Dst = (pFVar2->Data).AllocatorInstance.Data;
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    memcpy(_Dst,param_3,_Size);
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bf8f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// CreateUniformBuffer @ 145bf9e60

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHIUniformBuffer> __cdecl
CreateUniformBuffer(void *param_1,FRHIUniformBufferLayout *param_2,EUniformBufferUsage param_3,
                   EUniformBufferValidation param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  TRefCountPtr<FRHIUniformBuffer> TVar7;
  FOpenGLUniformBuffer *this;
  FOpenGLUniformBuffer *this_00;
  FOpenGLUniformBuffer *pFVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 in_register_00000084;
  FRHIUniformBufferLayout *pFVar11;
  FOpenGLUniformBuffer *local_res18;
  uint local_res20 [2];
  EUniformBufferValidation in_stack_00000028;
  TPairInitializer<unsigned_int_const_&,TRefCountPtr<FOpenGLEUniformBufferData>_const_&> local_88;
  uint *local_70;
  TRefCountPtr<FOpenGLEUniformBufferData> **local_68;
  FOpenGLUniformBuffer *local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  pFVar11 = (FRHIUniformBufferLayout *)CONCAT44(in_register_00000084,param_3);
  if ((((pFVar11->Resources).ArrayNum < 1) && (pFVar11->ConstantBufferSize == 0)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Layout->Resources.Num() > 0 || Layout->ConstantBufferSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                         ,0x21c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar7.Reference = (FRHIUniformBuffer *)(*pcVar3)();
    return (TRefCountPtr<FRHIUniformBuffer>)TVar7.Reference;
  }
  this = operator_new(0x80);
  pFVar8 = (FOpenGLUniformBuffer *)0x0;
  this_00 = pFVar8;
  if (this != (FOpenGLUniformBuffer *)0x0) {
    this_00 = FOpenGLUniformBuffer::FOpenGLUniformBuffer(this,pFVar11);
  }
  uVar6 = GetPoolBucketIndex(pFVar11->ConstantBufferSize);
  uVar10 = 0;
  if ((int)uVar6 < UniformBufferSizeBuckets.ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar7.Reference = (FRHIUniformBuffer *)(*pcVar3)();
    return (TRefCountPtr<FRHIUniformBuffer>)TVar7.Reference;
  }
  uVar10 = *(uint *)(UniformBufferSizeBuckets.AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
  if (uVar10 == 0) {
    uVar10 = pFVar11->ConstantBufferSize;
  }
  if ((GUseEmulatedUniformBuffers == false) || ((pFVar11->Flags & NoEmulatedUniformBuffer) != None))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    TVar7.Reference = (FRHIUniformBuffer *)(*pcVar3)();
    return (TRefCountPtr<FRHIUniformBuffer>)TVar7.Reference;
  }
  bVar5 = param_4 < 2;
  if (bVar4) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
    `public:_class_TRefCountPtr<FOpenGLEUniformBufferData>___cdecl_FUniformBufferDataFactory::Create(unsigned_int,unsigned_int&___ptr64)___ptr64'
    ::__l2::TempCounter =
         `public:_class_TRefCountPtr<FOpenGLEUniformBufferData>___cdecl_FUniformBufferDataFactory::Create(unsigned_int,unsigned_int&___ptr64)___ptr64'
         ::__l2::TempCounter + 1;
    local_res20[0] =
         `public:_class_TRefCountPtr<FOpenGLEUniformBufferData>___cdecl_FUniformBufferDataFactory::Create(unsigned_int,unsigned_int&___ptr64)___ptr64'
         ::__l2::TempCounter;
    pFVar8 = operator_new(0x20);
    if (pFVar8 == (FOpenGLUniformBuffer *)0x0) {
      local_88.Value = (TRefCountPtr<FOpenGLEUniformBufferData> *)0x0;
    }
    else {
      *(undefined4 *)&pFVar8->_padding_ = 0;
      piVar1 = (int *)((longlong)&pFVar8->_padding_ + 4);
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)&___7FOpenGLEUniformBufferData__6B_;
      *piVar1 = 0;
      uVar6 = uVar10 + 3 >> 2;
      local_res18 = (FOpenGLUniformBuffer *)CONCAT44(local_res18._4_4_,uVar6);
      *(undefined4 *)&pFVar8->_padding_ = 0;
      if (uVar10 + 3 >> 2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar6,(ForAnyElementType *)&pFVar8->_padding_,0,piVar1);
        uVar6 = (uint)local_res18;
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,(ForAnyElementType *)&pFVar8->_padding_,(int *)&pFVar8->_padding_,
                 (int *)((longlong)&pFVar8->_padding_ + 4));
      OpenGLBufferStats::UpdateUniformBufferStats
                ((longlong)*(int *)((longlong)&pFVar8->_padding_ + 4) << 2,true);
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      local_88.Value = (TRefCountPtr<FOpenGLEUniformBufferData> *)pFVar8;
    }
    local_70 = local_res20;
    local_68 = &local_88.Value;
    TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned_int_const_&,TRefCountPtr<FOpenGLEUniformBufferData>_const_&>_>
              ((TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
                *)&UniformBufferDataFactory,&local_88,(bool *)&local_70);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
    pFVar8 = (FOpenGLUniformBuffer *)local_88.Value;
    local_88.Value = (TRefCountPtr<FOpenGLEUniformBufferData> *)0x0;
    local_res18 = pFVar8;
    if (pFVar8 != (FOpenGLUniformBuffer *)0x0) {
      *(int *)((longlong)pFVar8 + 8) = (int)*(longlong *)((longlong)pFVar8 + 8) + 1;
    }
    FOpenGLUniformBuffer::SetGLUniformBufferParams
              (this_00,local_res20[0],0,(uchar *)0x0,uVar10,
               (FOpenGLEUniformBufferData *)&local_res18,bVar5);
    OpenGLBufferStats::UpdateUniformBufferStats((ulonglong)uVar10,true);
    if (((pFVar8 == (FOpenGLUniformBuffer *)0x0) ||
        ((int)*(longlong *)((longlong)pFVar8 + 0x18) << 2 != uVar10)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("!bUseEmulatedUBs || (IsValidRef(EmulatedUniformDataRef) && (EmulatedUniformDataRef->Data.Num() * EmulatedUniformDataRef->Data.GetTypeSize() == AllocatedSize))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                           ,0x261,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar7.Reference = (FRHIUniformBuffer *)(*pcVar3)();
      return (TRefCountPtr<FRHIUniformBuffer>)TVar7.Reference;
    }
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = this_00;
    local_58 = uVar10;
    local_40 = bVar5;
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
       (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x40,8);
      GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
      *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar9;
      GRHICommandList.CommandListImmediate._48_8_ = puVar9 + 1;
      *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
      *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,`CreateUniformBuffer'::`19'::<lambda_2>_>
                 ::_vftable_;
      puVar9[4] = local_50;
      puVar9[5] = uStack_48;
      puVar9[7] = L"TRHILambdaCommand";
      puVar9[2] = this_00;
      *(uint *)(puVar9 + 3) = uVar10;
      *(bool *)(puVar9 + 6) = bVar5;
    }
    else {
      `CreateUniformBuffer'::__l19::<lambda_2>::operator()
                (&local_60,&GRHICommandList.CommandListImmediate);
    }
    OpenGLBufferStats::UpdateUniformBufferStats((ulonglong)uVar10,true);
  }
  if (param_2 != (FRHIUniformBufferLayout *)0x0) {
    CopyDataToUniformBuffer
              (&GRHICommandList.CommandListImmediate,this_00,param_2,pFVar11->ConstantBufferSize);
  }
  FOpenGLUniformBuffer::SetLayoutTable(this_00,param_2,in_stack_00000028);
  *(FOpenGLUniformBuffer **)param_1 = this_00;
  if (this_00 != (FOpenGLUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  if (pFVar8 != (FOpenGLUniformBuffer *)0x0) {
    plVar2 = &pFVar8->_padding_;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  return (TRefCountPtr<FRHIUniformBuffer>)param_1;
}

// CreateUniformBufferView @ 145bfa290

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLUniformBuffer * __cdecl
CreateUniformBufferView
          (FRHICommandListImmediate *param_1,FRHIUniformBufferLayout *param_2,void *param_3)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FOpenGLUniformBuffer *pFVar5;
  FRHIResource *pFVar6;
  undefined8 *puVar7;
  uint uVar8;
  FRHIResource *pFVar9;
  FRHIResource *pFVar10;
  FOpenGLUniformBuffer *local_48;
  FRHIResource *local_40;
  
  pFVar9 = (FRHIResource *)0x0;
  if ((param_2->Flags & UniformView) == None) {
    return (FOpenGLUniformBuffer *)0x0;
  }
  pFVar5 = operator_new(0x80);
  if (pFVar5 == (FOpenGLUniformBuffer *)0x0) {
    pFVar5 = (FOpenGLUniformBuffer *)0x0;
  }
  else {
    FRHIResource::FRHIResource((FRHIResource *)pFVar5,RRT_UniformBuffer);
    pFVar5->_padding_ = 0;
    *(undefined1 *)&pFVar5->_padding_ = 0;
    pFVar5->_padding_ = (longlong)&___7FRHIUniformBuffer__6B_;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = (longlong)param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
    *(uint *)&pFVar5->_padding_ = param_2->ConstantBufferSize;
    pFVar5->_padding_ = (longlong)&___7FOpenGLUniformBuffer__6B_;
    GUniqueUniformBufferID = GUniqueUniformBufferID + 1;
    pFVar5->RangeSize = 0;
    pFVar5->UniqueID = GUniqueUniformBufferID;
    pFVar5->Resource = 0;
    pFVar5->Offset = 0;
    pFVar5->PersistentlyMappedBuffer = (uchar *)0x0;
    (pFVar5->EmulatedBufferData).Reference = (FOpenGLEUniformBufferData *)0x0;
    pFVar5->AllocatedSize = 0;
    pFVar5->bStreamDraw = false;
    pFVar5->bOwnsResource = true;
    if ((GUseEmulatedUniformBuffers == false) ||
       ((param_2->Flags & (UniformView|NoEmulatedUniformBuffer)) != None)) {
      pFVar5->bIsEmulatedUniformBuffer = false;
      pFVar5->RangeSize = param_2->ConstantBufferSize;
    }
    else {
      pFVar5->bIsEmulatedUniformBuffer = true;
      pFVar5->RangeSize = param_2->ConstantBufferSize;
    }
  }
  FOpenGLUniformBuffer::SetLayoutTable(pFVar5,param_3,None);
  pFVar6 = pFVar9;
  pFVar10 = pFVar9;
  if (0 < (param_2->Resources).ArrayNum) {
    do {
      if (pFVar6 != (FRHIResource *)0x0) break;
      uVar8 = (uint)pFVar9;
      uVar4 = 0;
      if ((int)uVar8 < (param_2->Resources).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FOpenGLUniformBuffer *)(*pcVar2)();
        return pFVar5;
      }
      FVar1 = *(FScriptContainerElement *)
               ((longlong)&pFVar10->_padding_ +
               (longlong)((param_2->Resources).AllocatorInstance.Data + 2));
      if ((FVar1 == (FScriptContainerElement)0x6) || (FVar1 == (FScriptContainerElement)0x11)) {
        uVar4 = 0;
        if ((int)uVar8 < (param_2->Resources).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FOpenGLUniformBuffer *)(*pcVar2)();
          return pFVar5;
        }
        pFVar6 = GetShaderParameterResourceRHI
                           (param_3,*(ushort *)
                                     ((longlong)&pFVar10->_padding_ +
                                     (longlong)(param_2->Resources).AllocatorInstance.Data),
                            (EUniformBufferBaseType)FVar1);
      }
      pFVar9 = (FRHIResource *)(ulonglong)(uVar8 + 1);
      pFVar10 = (FRHIResource *)((longlong)&pFVar10->_padding_ + 4);
    } while ((int)(uVar8 + 1) < (param_2->Resources).ArrayNum);
    if (pFVar6 != (FRHIResource *)0x0) goto LAB_145bfa4cf;
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("UniformViewSRV",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                     ,0x282,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FOpenGLUniformBuffer *)(*pcVar2)();
    return pFVar5;
  }
LAB_145bfa4cf:
  local_48 = pFVar5;
  local_40 = pFVar6;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar7;
    *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &TRHILambdaCommand<FRHICommandListImmediate,`CreateUniformBufferView'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar7[2] = pFVar5;
    puVar7[3] = pFVar6;
    puVar7[4] = L"TRHILambdaCommand";
  }
  else {
    `CreateUniformBufferView'::__l5::<lambda_1>::operator()(&local_48,param_1);
  }
  return pFVar5;
}

// CreateWritableTextureInitializer @ 145bfa580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDefaultLayoutTextureInitializer * __cdecl
CreateWritableTextureInitializer
          (FDefaultLayoutTextureInitializer *__return_storage_ptr__,FRHICommandListBase *param_1,
          FOpenGLTexture *param_2,FRHITextureCreateDesc *param_3)

{
  char cVar1;
  bool bVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  code **ppcVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auStackY_d8 [32];
  code *local_98 [2];
  undefined **local_88;
  FOpenGLTexture *local_80;
  code *local_78;
  undefined ***local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar3 = UE::RHITextureUtils::CalculateTexturePlaneSize((FRHITextureDesc *)param_3);
  lVar7 = 1;
  cVar1 = *(char *)((longlong)&param_3->_padding_ + 2);
  if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    lVar7 = 6;
  }
  pcVar8 = (code *)(lVar7 * (ulonglong)*(ushort *)((longlong)&param_3->_padding_ + 6) *
                    (ulonglong)*(ushort *)((longlong)&param_3->_padding_ + 4) * uVar3);
  pcVar4 = FMemory::Malloc((ulong64)pcVar8,0x10);
  if (param_2 != (FOpenGLTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x20,8);
  local_40[1] = (code *)param_2;
  local_40[2] = pcVar4;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`CreateWritableTextureInitializer'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_40[3] = pcVar8;
  if (local_40 != (code **)&DAT_fffffffffffffff8) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`CreateWritableTextureInitializer'::__l2::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                  ::Call;
  }
  if (param_2 != (FOpenGLTexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  local_70 = (undefined ***)0x0;
  local_88 = &
             ___7__TFunction_OwnedObject_V<lambda_27_>__0___0FDefaultLayoutTextureInitializer_RHICore_UE__QEAA_AEAVFRHICommandListBase__PEAVFRHITexture__PEAX_K__QEAV__TUniqueFunction___A6A_AV__TRefCountPtr_VFRHITexture____AEAVFRHICommandListBase___Z___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
                ::Call;
  local_80 = param_2;
  local_78 = pcVar4;
  FRHITextureInitializer::FRHITextureInitializer
            ((FRHITextureInitializer *)__return_storage_ptr__,param_1,(FRHITexture *)param_2,pcVar4,
             (ulong64)pcVar8,
             (TUniqueFunction<TRefCountPtr<FRHITexture>___cdecl(FRHICommandListBase_&)> *)local_68,
             (TUniqueFunction<FRHITextureSubresourceInitializer___cdecl(FRHITextureInitializer::FSubresourceIndex)>
              *)local_98);
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_68[0] != (code *)0x0) {
    ppcVar6 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar6 = local_40;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  return __return_storage_ptr__;
}

// DestroyShadersAndPrograms @ 145bfb4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DestroyShadersAndPrograms(void)

{
  undefined1 *puVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  HGLRC pHVar5;
  FGLProgramCache *this;
  TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this = GetOpenGLProgramsCache();
  FGLProgramCache::Empty(this);
  StaticLastReleasedProgramsIndex = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&GCompiledShaderCacheCS);
  this_00 = (TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
             *)GetOpenGLCompiledShaderCache();
  TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_78,this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      (*glDeleteShader)(*(uint *)((longlong)(int)uVar6 * 0x40 + 0x18 + *local_48));
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar2 = 1 < this_00->HashSize;
  if (!bVar2) {
    TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this_00->Elements).field_0x8);
  puVar1 = &(this_00->Elements).field_0xc;
  *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
  iVar4 = *(int *)&(this_00->Elements).field_0x2c;
  *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10,0);
  }
  if (bVar2) {
    this_00->HashSize = 1;
    TSet<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000145bfb70a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GCompiledShaderCacheCS);
  return;
}

// EmptyGLSamplerStateCache @ 145bfc7a0

void __cdecl EmptyGLSamplerStateCache(void)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
              *)&GSamplerStateCache);
  local_18 = (TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
              *)&GSamplerStateCache;
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this = *(FRHIResource **)(*local_48 + 0x20 + (longlong)(int)uVar7 * 0x30);
      LOCK();
      pFVar1 = &this->AtomicFlags;
      aVar2 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar2 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = (uint)aVar2 & 0x3fffffff;
      if (uVar8 == 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (uVar8 == 1) {
        FRHIResource::MarkForDelete(this);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar6)) || (iVar6 < local_18->HashSize)) {
        local_18->HashSize = iVar6;
        TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  bVar5 = 1 < (int)GSamplerStateCache._72_4_;
  if (!bVar5) {
    TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
                      *)&GSamplerStateCache);
  }
  GSamplerStateCache._8_4_ = 0;
  if (GSamplerStateCache._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&GSamplerStateCache,0,
               (int *)&GSamplerStateCache.field_0xc);
  }
  GSamplerStateCache._48_4_ = 0xffffffff;
  GSamplerStateCache._52_4_ = 0;
  GSamplerStateCache._40_4_ = 0;
  if (0x80 < (uint)GSamplerStateCache._44_4_) {
    GSamplerStateCache._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GSamplerStateCache.field_0x10,0);
  }
  if (bVar5) {
    GSamplerStateCache._72_4_ = 1;
    TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
              *)&GSamplerStateCache);
  }
  return;
}

// GLSLToDeviceCompatibleGLSL @ 145c00470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
GLSLToDeviceCompatibleGLSL
          (TArray<char,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,uint param_3,
          FOpenGLShaderDeviceCapabilities *param_4,TArray<char,TSizedDefaultAllocator<32>_> *param_5
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  char *pcVar17;
  
  uVar8 = param_1->ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &param_5->ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar8,&param_5->AllocatorInstance,param_5->ArrayNum,piVar1);
  }
  pcVar10 = strstr((char *)(param_1->AllocatorInstance).Data,"gl_ViewID_OVR");
  pcVar11 = strstr((char *)(param_1->AllocatorInstance).Data,"samplerExternalOES");
  for (pcVar12 = strstr((char *)(param_1->AllocatorInstance).Data,"// end extensions");
      pcVar12 != (char *)0x0;
      pcVar12 = strstr((char *)(pFVar13 + (((int)pcVar12 - (int)pFVar13) + 0x11)),
                       "// end extensions")) {
    pFVar13 = (param_1->AllocatorInstance).Data;
  }
  piVar16 = &param_5->ArrayNum;
  if (param_4->TargetPlatform == OGLSTP_Android) {
    pcVar12 = strstr((char *)(param_1->AllocatorInstance).Data,"#version 320 es");
    pcVar17 = "#version 310 es";
    if (pcVar12 != (char *)0x0) {
      pcVar17 = "#version 320 es";
    }
    `anonymous_namespace'::AppendCString(param_5,pcVar17);
    iVar9 = *piVar16;
    if (iVar9 < 1) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,2,&param_5->AllocatorInstance,piVar16,piVar1);
      *(undefined2 *)((param_5->AllocatorInstance).Data + iVar9) = 10;
    }
    else {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,1,&param_5->AllocatorInstance,piVar16,piVar1);
      pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
      memmove(pFVar13,pFVar13 + -1,(longlong)((iVar7 - iVar9) + 1));
      (param_5->AllocatorInstance).Data[(longlong)iVar9 + -1] = (FScriptContainerElement)0xa;
    }
    `anonymous_namespace'::ReplaceCString(param_1,pcVar17,"");
    iVar9 = *piVar16;
    if (iVar9 < 1) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x28,&param_5->AllocatorInstance,piVar16,piVar1);
      uVar4 = s__define_fma_A__B__C____A_____B_._8_8_;
      lVar14 = (longlong)iVar9;
      pFVar13 = (param_5->AllocatorInstance).Data;
      *(undefined8 *)(pFVar13 + lVar14) = s__define_fma_A__B__C____A_____B_._0_8_;
      *(undefined8 *)(pFVar13 + lVar14 + 8) = uVar4;
      uVar4 = s__define_fma_A__B__C____A_____B_._24_8_;
      *(undefined8 *)(pFVar13 + lVar14 + 0x10) = s__define_fma_A__B__C____A_____B_._16_8_;
      *(undefined8 *)(pFVar13 + lVar14 + 0x10 + 8) = uVar4;
      *(ulonglong *)(pFVar13 + lVar14 + 0x20) =
           CONCAT17(s__define_fma_A__B__C____A_____B_[0x27],
                    CONCAT16(s__define_fma_A__B__C____A_____B_[0x26],
                             CONCAT24(s__define_fma_A__B__C____A_____B_._36_2_,
                                      s__define_fma_A__B__C____A_____B_._32_4_)));
    }
    else {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x27,&param_5->AllocatorInstance,piVar16,piVar1);
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
      memmove(pFVar13 + 0x27,pFVar13,(longlong)((iVar7 - iVar9) + 1));
      uVar4 = s__define_fma_A__B__C____A_____B_._8_8_;
      pFVar13 = (param_5->AllocatorInstance).Data;
      *(undefined8 *)(pFVar13 + (longlong)iVar9 + -1) = s__define_fma_A__B__C____A_____B_._0_8_;
      *(undefined8 *)(pFVar13 + (longlong)iVar9 + 7) = uVar4;
      uVar4 = s__define_fma_A__B__C____A_____B_._24_8_;
      *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0xf) = s__define_fma_A__B__C____A_____B_._16_8_;
      *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0x17) = uVar4;
      *(undefined4 *)(pFVar13 + (longlong)iVar9 + 0x1f) = s__define_fma_A__B__C____A_____B_._32_4_;
      *(undefined2 *)(pFVar13 + (longlong)iVar9 + 0x23) = s__define_fma_A__B__C____A_____B_._36_2_;
      pFVar13[(longlong)iVar9 + 0x25] =
           (FScriptContainerElement)s__define_fma_A__B__C____A_____B_[0x26];
    }
  }
  if (param_4->bRequiresPreciseQualifierWorkaround != false) {
    iVar9 = *piVar16;
    if (iVar9 < 1) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x11,&param_5->AllocatorInstance,piVar16,piVar1);
      uVar4 = s__define_precise_._8_8_;
      pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
      *(undefined8 *)pFVar13 = s__define_precise_._0_8_;
      *(undefined8 *)(pFVar13 + 8) = uVar4;
      pFVar13[0x10] = (FScriptContainerElement)s__define_precise_[0x10];
    }
    else {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x10,&param_5->AllocatorInstance,piVar16,piVar1);
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
      memmove(pFVar13 + 0x10,pFVar13,(longlong)((iVar7 - iVar9) + 1));
      uVar4 = s__define_precise_._8_8_;
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
      *(undefined8 *)pFVar13 = s__define_precise_._0_8_;
      *(undefined8 *)(pFVar13 + 8) = uVar4;
    }
  }
  if ((param_4->bRequiresReadOnlyBuffersWorkaround != false) &&
     (pcVar12 = strstr((char *)(param_1->AllocatorInstance).Data,"readonly buffer"),
     pcVar12 != (char *)0x0)) {
    do {
      uVar15 = (int)pcVar12 - *(int *)&(param_1->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)(uVar15 + 0xf) <= param_1->ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (param_1->AllocatorInstance).Data + (int)uVar15;
      iVar9 = (param_1->ArrayNum - uVar15) + -0xf;
      if (iVar9 != 0) {
        memmove(pFVar13,pFVar13 + 0xf,(longlong)iVar9);
      }
      param_1->ArrayNum = param_1->ArrayNum + -0xf;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,6,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
      pFVar13 = (param_1->AllocatorInstance).Data + (int)uVar15;
      memmove(pFVar13 + 6,pFVar13,(longlong)(int)(iVar9 - uVar15));
      pFVar13 = (param_1->AllocatorInstance).Data;
      *(undefined4 *)(pFVar13 + (int)uVar15) = s_buffer._0_4_;
      *(undefined2 *)(pFVar13 + (longlong)(int)uVar15 + 4) = s_buffer._4_2_;
      pcVar12 = strstr((char *)((param_1->AllocatorInstance).Data + (int)uVar15),"readonly buffer");
    } while (pcVar12 != (char *)0x0);
  }
  if (((param_3 == 0x8b30) && (param_4->bRequiresDisabledEarlyFragmentTests != false)) &&
     (pcVar12 = strstr((char *)(param_1->AllocatorInstance).Data,"layout(early_fragment_tests) in;")
     , pcVar12 != (char *)0x0)) {
    piVar1 = &param_1->ArrayNum;
    do {
      uVar15 = (int)pcVar12 - *(int *)&(param_1->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)(uVar15 + 0x20) <= *piVar1) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (param_1->AllocatorInstance).Data + (int)uVar15;
      iVar9 = (*piVar1 - uVar15) + -0x20;
      if (iVar9 != 0) {
        memmove(pFVar13,pFVar13 + 0x20,(longlong)iVar9);
      }
      *piVar1 = *piVar1 + -0x20;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      pFVar13 = (param_1->AllocatorInstance).Data + (int)uVar15;
      memmove(pFVar13,pFVar13,(longlong)(int)(iVar9 - uVar15));
      pcVar12 = strstr((char *)((param_1->AllocatorInstance).Data + (int)uVar15),
                       "layout(early_fragment_tests) in;");
    } while (pcVar12 != (char *)0x0);
  }
  if (pcVar11 != (char *)0x0) {
    pcVar12 = strstr((char *)(param_1->AllocatorInstance).Data,"// Uses samplerExternalOES");
    if (pcVar12 != (char *)0x0) {
      piVar1 = &param_1->ArrayNum;
      do {
        uVar15 = (int)pcVar12 - *(int *)&(param_1->AllocatorInstance).Data;
        uVar8 = 0;
        if ((int)(uVar15 + 0x1a) <= *piVar1) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (param_1->AllocatorInstance).Data + (int)uVar15;
        iVar9 = (*piVar1 - uVar15) + -0x1a;
        if (iVar9 != 0) {
          memmove(pFVar13,pFVar13 + 0x1a,(longlong)iVar9);
        }
        *piVar1 = *piVar1 + -0x1a;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
        pFVar13 = (param_1->AllocatorInstance).Data + (int)uVar15;
        memmove(pFVar13,pFVar13,(longlong)(int)(iVar9 - uVar15));
        pcVar12 = strstr((char *)((param_1->AllocatorInstance).Data + (int)uVar15),
                         "// Uses samplerExternalOES");
      } while (pcVar12 != (char *)0x0);
    }
    `anonymous_namespace'::MoveHashLines(param_5,param_1);
    piVar1 = &param_5->ArrayNum;
    iVar9 = *piVar1;
    piVar16 = &param_5->ArrayMax;
    if (GRHIGlobals.SupportsImageExternal == false) {
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x26,&param_5->AllocatorInstance,piVar1,piVar16);
        uVar4 = s__define_samplerExternalOES_samp._8_8_;
        pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
        *(undefined8 *)pFVar13 = s__define_samplerExternalOES_samp._0_8_;
        *(undefined8 *)(pFVar13 + 8) = uVar4;
        uVar4 = s__define_samplerExternalOES_samp._24_8_;
        *(undefined8 *)(pFVar13 + 0x10) = s__define_samplerExternalOES_samp._16_8_;
        *(undefined8 *)(pFVar13 + 0x18) = uVar4;
        *(undefined4 *)(pFVar13 + 0x20) = s__define_samplerExternalOES_samp._32_4_;
        *(undefined2 *)(pFVar13 + 0x24) = s__define_samplerExternalOES_samp._36_2_;
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x25,&param_5->AllocatorInstance,piVar1,piVar16);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 0x25,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        uVar4 = s__define_samplerExternalOES_samp._8_8_;
        pFVar13 = (param_5->AllocatorInstance).Data;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + -1) = s__define_samplerExternalOES_samp._0_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 7) = uVar4;
        uVar4 = s__define_samplerExternalOES_samp._24_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0xf) = s__define_samplerExternalOES_samp._16_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0x17) = uVar4;
        *(undefined4 *)(pFVar13 + (longlong)iVar9 + 0x1f) = s__define_samplerExternalOES_samp._32_4_
        ;
        pFVar13[(longlong)iVar9 + 0x23] = SUB21(s__define_samplerExternalOES_samp._36_2_,0);
      }
    }
    else {
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,3,&param_5->AllocatorInstance,piVar1,piVar16);
        pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
        *(undefined2 *)pFVar13 = _s___;
        pFVar13[2] = DAT_1510eb87e;
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,2,&param_5->AllocatorInstance,piVar1,piVar16);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 2,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        *(undefined2 *)((param_5->AllocatorInstance).Data + (longlong)iVar9 + -1) = 0xa0a;
      }
      iVar9 = *piVar1;
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x30,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        uVar4 = s__extension_GL_OES_EGL_image_ext._8_8_;
        lVar14 = (longlong)iVar9;
        pFVar13 = (param_5->AllocatorInstance).Data;
        *(undefined8 *)(pFVar13 + lVar14) = s__extension_GL_OES_EGL_image_ext._0_8_;
        *(undefined8 *)(pFVar13 + lVar14 + 8) = uVar4;
        uVar4 = s__extension_GL_OES_EGL_image_ext._24_8_;
        *(undefined8 *)(pFVar13 + lVar14 + 0x10) = s__extension_GL_OES_EGL_image_ext._16_8_;
        *(undefined8 *)(pFVar13 + lVar14 + 0x10 + 8) = uVar4;
        uVar4 = CONCAT17(s__extension_GL_OES_EGL_image_ext[0x2f],
                         CONCAT16(s__extension_GL_OES_EGL_image_ext[0x2e],
                                  CONCAT24(s__extension_GL_OES_EGL_image_ext._44_2_,
                                           s__extension_GL_OES_EGL_image_ext._40_4_)));
        *(undefined8 *)(pFVar13 + lVar14 + 0x20) = s__extension_GL_OES_EGL_image_ext._32_8_;
        *(undefined8 *)(pFVar13 + lVar14 + 0x20 + 8) = uVar4;
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x2f,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 0x2f,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        uVar4 = s__extension_GL_OES_EGL_image_ext._8_8_;
        pFVar13 = (param_5->AllocatorInstance).Data;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + -1) = s__extension_GL_OES_EGL_image_ext._0_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 7) = uVar4;
        uVar4 = s__extension_GL_OES_EGL_image_ext._24_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0xf) = s__extension_GL_OES_EGL_image_ext._16_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0x17) = uVar4;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0x1f) = s__extension_GL_OES_EGL_image_ext._32_8_
        ;
        *(undefined4 *)(pFVar13 + (longlong)iVar9 + 0x27) = s__extension_GL_OES_EGL_image_ext._40_4_
        ;
        *(undefined2 *)(pFVar13 + (longlong)iVar9 + 0x2b) = s__extension_GL_OES_EGL_image_ext._44_2_
        ;
        pFVar13[(longlong)iVar9 + 0x2d] =
             (FScriptContainerElement)s__extension_GL_OES_EGL_image_ext[0x2e];
      }
      iVar9 = *piVar1;
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,3,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
        *(undefined2 *)pFVar13 = _s___;
        pFVar13[2] = DAT_1510eb87e;
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,2,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 2,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        *(undefined2 *)((param_5->AllocatorInstance).Data + (longlong)iVar9 + -1) = 0xa0a;
      }
    }
  }
  `anonymous_namespace'::MoveHashLines(param_5,param_1);
  if (pcVar10 == (char *)0x0) {
LAB_145c0109d:
    if (param_3 == 0x91b9) goto LAB_145c011bd;
  }
  else {
    piVar1 = &param_5->ArrayNum;
    iVar9 = *piVar1;
    piVar16 = &param_5->ArrayMax;
    if (GRHIGlobals.SupportsMobileMultiView == false) {
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x19,&param_5->AllocatorInstance,piVar1,piVar16);
        uVar4 = s__define_gl_ViewID_OVR_0_._8_8_;
        pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
        *(undefined8 *)pFVar13 = s__define_gl_ViewID_OVR_0_._0_8_;
        *(undefined8 *)(pFVar13 + 8) = uVar4;
        *(undefined8 *)(pFVar13 + 0x10) = s__define_gl_ViewID_OVR_0_._16_8_;
        pFVar13[0x18] = (FScriptContainerElement)s__define_gl_ViewID_OVR_0_[0x18];
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x18,&param_5->AllocatorInstance,piVar1,piVar16);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 0x18,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        uVar4 = s__define_gl_ViewID_OVR_0_._8_8_;
        pFVar2 = (param_5->AllocatorInstance).Data;
        pFVar13 = pFVar2 + (longlong)iVar9 + -1;
        *(undefined8 *)pFVar13 = s__define_gl_ViewID_OVR_0_._0_8_;
        *(undefined8 *)(pFVar13 + 8) = uVar4;
        *(undefined8 *)(pFVar2 + (longlong)iVar9 + 0xf) = s__define_gl_ViewID_OVR_0_._16_8_;
      }
    }
    else {
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,3,&param_5->AllocatorInstance,piVar1,piVar16);
        pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
        *(undefined2 *)pFVar13 = _s___;
        pFVar13[2] = DAT_1510eb87e;
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,2,&param_5->AllocatorInstance,piVar1,piVar16);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 2,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        *(undefined2 *)((param_5->AllocatorInstance).Data + (longlong)iVar9 + -1) = 0xa0a;
      }
      iVar9 = *piVar1;
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x27,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        uVar4 = s__extension_GL_OVR_multiview2___._8_8_;
        pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
        *(undefined8 *)pFVar13 = s__extension_GL_OVR_multiview2___._0_8_;
        *(undefined8 *)(pFVar13 + 8) = uVar4;
        uVar4 = s__extension_GL_OVR_multiview2___._24_8_;
        *(undefined8 *)(pFVar13 + 0x10) = s__extension_GL_OVR_multiview2___._16_8_;
        *(undefined8 *)(pFVar13 + 0x18) = uVar4;
        *(undefined4 *)(pFVar13 + 0x20) = s__extension_GL_OVR_multiview2___._32_4_;
        *(undefined2 *)(pFVar13 + 0x24) = s__extension_GL_OVR_multiview2___._36_2_;
        pFVar13[0x26] = (FScriptContainerElement)s__extension_GL_OVR_multiview2___[0x26];
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,0x26,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 0x26,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        uVar4 = s__extension_GL_OVR_multiview2___._8_8_;
        pFVar13 = (param_5->AllocatorInstance).Data;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + -1) = s__extension_GL_OVR_multiview2___._0_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 7) = uVar4;
        uVar4 = s__extension_GL_OVR_multiview2___._24_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0xf) = s__extension_GL_OVR_multiview2___._16_8_;
        *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0x17) = uVar4;
        *(undefined4 *)(pFVar13 + (longlong)iVar9 + 0x1f) = s__extension_GL_OVR_multiview2___._32_4_
        ;
        *(undefined2 *)(pFVar13 + (longlong)iVar9 + 0x23) = s__extension_GL_OVR_multiview2___._36_2_
        ;
      }
      iVar9 = *piVar1;
      if (iVar9 < 1) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,3,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
        *(undefined2 *)pFVar13 = _s___;
        pFVar13[2] = DAT_1510eb87e;
      }
      else {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,2,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
        pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
        memmove(pFVar13 + 2,pFVar13,(longlong)((iVar7 - iVar9) + 1));
        *(undefined2 *)((param_5->AllocatorInstance).Data + (longlong)iVar9 + -1) = 0xa0a;
      }
    }
    `anonymous_namespace'::MoveHashLines(param_5,param_1);
    if ((GRHIGlobals.SupportsMobileMultiView == false) || (param_3 != 0x8b31)) goto LAB_145c0109d;
    `anonymous_namespace'::AppendCString(param_5,"\n\n");
    iVar9 = param_5->ArrayNum;
    piVar1 = &param_5->ArrayNum;
    if (iVar9 < 1) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x1b,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
      uVar4 = s_layout_num_views___2__in__._8_8_;
      pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
      *(undefined8 *)pFVar13 = s_layout_num_views___2__in__._0_8_;
      *(undefined8 *)(pFVar13 + 8) = uVar4;
      *(undefined8 *)(pFVar13 + 0x10) = s_layout_num_views___2__in__._16_8_;
      *(undefined2 *)(pFVar13 + 0x18) = s_layout_num_views___2__in__._24_2_;
      pFVar13[0x1a] = (FScriptContainerElement)s_layout_num_views___2__in__[0x1a];
    }
    else {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x1a,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
      memmove(pFVar13 + 0x1a,pFVar13,(longlong)((iVar7 - iVar9) + 1));
      uVar4 = s_layout_num_views___2__in__._8_8_;
      pFVar13 = (param_5->AllocatorInstance).Data;
      *(undefined8 *)(pFVar13 + (longlong)iVar9 + -1) = s_layout_num_views___2__in__._0_8_;
      *(undefined8 *)(pFVar13 + (longlong)iVar9 + -1 + 8) = uVar4;
      *(undefined8 *)(pFVar13 + (longlong)iVar9 + 0xf) = s_layout_num_views___2__in__._16_8_;
      *(undefined2 *)(pFVar13 + (longlong)iVar9 + 0x17) = s_layout_num_views___2__in__._24_2_;
    }
    iVar9 = *piVar1;
    if (iVar9 < 1) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,3,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
      pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
      *(undefined2 *)pFVar13 = _s___;
      pFVar13[2] = DAT_1510eb87e;
    }
    else {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,2,&param_5->AllocatorInstance,piVar1,&param_5->ArrayMax);
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
      memmove(pFVar13 + 2,pFVar13,(longlong)((iVar7 - iVar9) + 1));
      *(undefined2 *)((param_5->AllocatorInstance).Data + (longlong)iVar9 + -1) = 0xa0a;
    }
  }
  piVar1 = &param_5->ArrayMax;
  iVar9 = param_5->ArrayNum;
  piVar16 = &param_5->ArrayNum;
  if (FOpenGLBase::bSupportsClipControl == false) {
    if (0 < iVar9) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x20,&param_5->AllocatorInstance,piVar16,piVar1);
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
      memmove(pFVar13 + 0x20,pFVar13,(longlong)((iVar7 - iVar9) + 1));
      uVar4 = s__define_HLSLCC_DX11ClipSpace_1_._8_8_;
      pFVar2 = (param_5->AllocatorInstance).Data;
      pFVar13 = pFVar2 + (longlong)iVar9 + -1;
      *(undefined8 *)pFVar13 = s__define_HLSLCC_DX11ClipSpace_1_._0_8_;
      *(undefined8 *)(pFVar13 + 8) = uVar4;
      uVar4 = s__define_HLSLCC_DX11ClipSpace_1_._24_8_;
      pFVar2 = pFVar2 + (longlong)iVar9 + 0xf;
      *(undefined8 *)pFVar2 = s__define_HLSLCC_DX11ClipSpace_1_._16_8_;
      *(undefined8 *)(pFVar2 + 8) = uVar4;
      goto LAB_145c011bd;
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x21,&param_5->AllocatorInstance,piVar16,piVar1);
    uVar4 = s__define_HLSLCC_DX11ClipSpace_1_._8_8_;
    pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
    *(undefined8 *)pFVar13 = s__define_HLSLCC_DX11ClipSpace_1_._0_8_;
    *(undefined8 *)(pFVar13 + 8) = uVar4;
    uVar4 = s__define_HLSLCC_DX11ClipSpace_1_._24_8_;
    *(undefined8 *)(pFVar13 + 0x10) = s__define_HLSLCC_DX11ClipSpace_1_._16_8_;
    *(undefined8 *)(pFVar13 + 0x18) = uVar4;
    FVar6 = (FScriptContainerElement)s__define_HLSLCC_DX11ClipSpace_1_[0x20];
  }
  else {
    if (0 < iVar9) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x20,&param_5->AllocatorInstance,piVar16,piVar1);
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
      memmove(pFVar13 + 0x20,pFVar13,(longlong)((iVar7 - iVar9) + 1));
      uVar4 = s__define_HLSLCC_DX11ClipSpace_0_._8_8_;
      pFVar2 = (param_5->AllocatorInstance).Data;
      pFVar13 = pFVar2 + (longlong)iVar9 + -1;
      *(undefined8 *)pFVar13 = s__define_HLSLCC_DX11ClipSpace_0_._0_8_;
      *(undefined8 *)(pFVar13 + 8) = uVar4;
      uVar4 = s__define_HLSLCC_DX11ClipSpace_0_._24_8_;
      pFVar2 = pFVar2 + (longlong)iVar9 + 0xf;
      *(undefined8 *)pFVar2 = s__define_HLSLCC_DX11ClipSpace_0_._16_8_;
      *(undefined8 *)(pFVar2 + 8) = uVar4;
      goto LAB_145c011bd;
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x21,&param_5->AllocatorInstance,piVar16,piVar1);
    uVar4 = s__define_HLSLCC_DX11ClipSpace_0_._8_8_;
    pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
    *(undefined8 *)pFVar13 = s__define_HLSLCC_DX11ClipSpace_0_._0_8_;
    *(undefined8 *)(pFVar13 + 8) = uVar4;
    uVar4 = s__define_HLSLCC_DX11ClipSpace_0_._24_8_;
    *(undefined8 *)(pFVar13 + 0x10) = s__define_HLSLCC_DX11ClipSpace_0_._16_8_;
    *(undefined8 *)(pFVar13 + 0x18) = uVar4;
    FVar6 = (FScriptContainerElement)s__define_HLSLCC_DX11ClipSpace_0_[0x20];
  }
  pFVar13[0x20] = FVar6;
LAB_145c011bd:
  iVar9 = param_5->ArrayNum;
  if (iVar9 < 1) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,3,&param_5->AllocatorInstance,&param_5->ArrayNum,&param_5->ArrayMax);
    pFVar13 = (param_5->AllocatorInstance).Data + iVar9;
    *(undefined2 *)pFVar13 = _s___;
    pFVar13[2] = DAT_1510eb87e;
  }
  else {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,2,&param_5->AllocatorInstance,&param_5->ArrayNum,&param_5->ArrayMax);
    pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar9 + -1;
    memmove(pFVar13 + 2,pFVar13,(longlong)((iVar7 - iVar9) + 1));
    *(undefined2 *)((param_5->AllocatorInstance).Data + (longlong)iVar9 + -1) = 0xa0a;
  }
  `anonymous_namespace'::AppendCString(param_5,(char *)(param_1->AllocatorInstance).Data);
  return;
}

// GetAllocation @ 145c017d0

void * __cdecl GetAllocation(void *param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *local_res8;
  longlong *local_58;
  undefined8 *local_50;
  void **local_48;
  longlong **local_40;
  
  local_res8 = param_1;
  if ((0xff < param_4) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Alignment < MaxAlignment",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                         ,0x3b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  if ((0xffffff < param_3) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Offset < MaxOffset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                         ,0x3c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  uVar9 = param_4 - 1;
  if (((param_4 & uVar9) != 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(Alignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                         ,0x3d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  if ((glBufferStorage != (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) &&
     (OpenGLConsoleVariables::bUseStagingBuffer != 0)) {
    if (PoolVB == 0) {
      iVar7 = 0x400 - FOpenGL3::NextBufferName;
      if (iVar7 < 2) {
        memcpy(&PoolVB,FOpenGL3::BufferNamesCache + FOpenGL3::NextBufferName,(longlong)iVar7 * 4);
        (*glGenBuffers)(0x400,FOpenGL3::BufferNamesCache);
        iVar8 = 1 - iVar7;
        memcpy(&PoolVB + iVar7,FOpenGL3::BufferNamesCache,(longlong)iVar8 << 2);
      }
      else {
        PoolVB = FOpenGL3::BufferNamesCache[FOpenGL3::NextBufferName];
        iVar8 = FOpenGL3::NextBufferName + 1;
      }
      FOpenGL3::NextBufferName = iVar8;
      (*glBindBuffer)(0x8f36,PoolVB);
      (*glBufferStorage)(0x8f36,0x1000000,(void *)0x0,0xc2);
      PoolPointer = (*glMapBufferRange)(0x8f36,0,0x1000000,0xc2);
      FreeSpace = 0x1000000;
      if ((PoolPointer == (uchar *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("PoolPointer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                             ,0x4c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar3 = (void *)(*pcVar1)();
        return pvVar3;
      }
      if ((PoolVB == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("PoolVB",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                             ,0x4e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pvVar3 = (void *)(*pcVar1)();
        return pvVar3;
      }
    }
    iVar7 = ((int)PoolPointer + OffsetVB + uVar9 & ~uVar9) - ((int)PoolPointer + OffsetVB);
    uVar5 = iVar7 + param_2;
    if ((uVar5 <= 0x400000 - FrameBytes) && (uVar5 <= FreeSpace)) {
      uVar6 = 0x1000000 - OffsetVB;
      if (uVar6 < uVar5) {
        local_50 = operator_new(0x18);
        *local_50 = 0;
        *(uint *)((longlong)local_50 + 0xc) = *(uint *)((longlong)local_50 + 0xc) & 0xff000000;
        *(undefined1 *)((longlong)local_50 + 0xf) = 0;
        *(uint *)(local_50 + 1) = uVar6;
        *(uint *)(local_50 + 2) = GFrameNumberRenderThread;
        if (((AllocationList.AllocatorInstance.Data <= (FScriptContainerElement *)&local_50) &&
            ((FScriptContainerElement *)&local_50 <
             AllocationList.AllocatorInstance.Data + (longlong)AllocationList.ArrayMax * 8)) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pvVar3 = (void *)(*pcVar1)();
          return pvVar3;
        }
        if (AllocationList.ArrayNum == AllocationList.ArrayMax) {
          AllocationList.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&AllocationList.AllocatorInstance,&AllocationList.ArrayMax);
        }
        FreeSpace = FreeSpace - uVar6;
        lVar4 = (longlong)AllocationList.ArrayNum;
        OffsetVB = 0;
        AllocationList.ArrayNum = AllocationList.ArrayNum + 1;
        *(undefined8 **)(AllocationList.AllocatorInstance.Data + lVar4 * 8) = local_50;
        iVar7 = (uVar9 + (int)PoolPointer & ~uVar9) - (int)PoolPointer;
        uVar5 = iVar7 + param_2;
      }
      if (uVar5 <= FreeSpace) {
        local_58 = operator_new(0x18);
        *local_58 = (longlong)(PoolPointer + OffsetVB);
        *(uint *)((longlong)local_58 + 0xc) =
             *(uint *)((longlong)local_58 + 0xc) ^
             (*(uint *)((longlong)local_58 + 0xc) ^ param_3) & 0xffffff;
        *(char *)((longlong)local_58 + 0xf) = (char)iVar7;
        *(uint *)(local_58 + 1) = param_2;
        *(undefined4 *)(local_58 + 2) = 0xffffffff;
        if (((AllocationList.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             AllocationList.AllocatorInstance.Data + (longlong)AllocationList.ArrayMax * 8)) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pvVar3 = (void *)(*pcVar1)();
          return pvVar3;
        }
        if (AllocationList.ArrayNum == AllocationList.ArrayMax) {
          AllocationList.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&AllocationList.AllocatorInstance,&AllocationList.ArrayMax);
        }
        lVar4 = (longlong)AllocationList.ArrayNum;
        AllocationList.ArrayNum = AllocationList.ArrayNum + 1;
        *(longlong **)(AllocationList.AllocatorInstance.Data + lVar4 * 8) = local_58;
        local_48 = &local_res8;
        local_40 = &local_58;
        TSet<TTuple<void_*,PoolAllocation_*>,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<void_*_const_&,PoolAllocation_*_const_&>_>
                  ((TSet<TTuple<void_*,PoolAllocation_*>,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>,FDefaultSetAllocator>
                    *)&AllocationMap,
                   (TPairInitializer<void_*_const_&,PoolAllocation_*_const_&> *)&stack0x00000020,
                   (bool *)&local_48);
        OffsetVB = OffsetVB + uVar5;
        FreeSpace = FreeSpace - uVar5;
        FrameBytes = FrameBytes + uVar5;
        return (void *)((ulonglong)*(byte *)((longlong)local_58 + 0xf) + *local_58);
      }
    }
  }
  return (void *)0x0;
}

// GetCurrentOpenGLShaderDeviceCapabilities @ 145c01ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl GetCurrentOpenGLShaderDeviceCapabilities(FOpenGLShaderDeviceCapabilities *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  param_1->TargetPlatform = OGLSTP_Unknown;
  param_1->MaxRHIShaderPlatform = SP_PCD3D_SM5;
  param_1->bSupportsShaderFramebufferFetch = false;
  param_1->bRequiresARMShaderFramebufferFetchDepthStencilUndef = false;
  param_1->MaxVaryingVectors = 0;
  param_1->bRequiresDisabledEarlyFragmentTests = false;
  param_1->bRequiresReadOnlyBuffersWorkaround = false;
  param_1->bRequiresPreciseQualifierWorkaround = false;
  param_1->field_0xf = 0;
  param_1->TargetPlatform = OGLSTP_Desktop;
  if (FOpenGL3::bAndroidGLESCompatibilityMode == false) {
    param_1->MaxRHIShaderPlatform = GMaxRHIShaderPlatform;
    return;
  }
  param_1->TargetPlatform = OGLSTP_Android;
  param_1->bSupportsShaderFramebufferFetch = GRHIGlobals.SupportsShaderFramebufferFetch;
  param_1->bRequiresARMShaderFramebufferFetchDepthStencilUndef = false;
  param_1->bRequiresReadOnlyBuffersWorkaround = false;
  if (FOpenGLBase::MaxVaryingVectors == -1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("MaxVaryingVectors != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                       ,0x8f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->MaxVaryingVectors = FOpenGLBase::MaxVaryingVectors;
  param_1->bRequiresPreciseQualifierWorkaround = false;
  param_1->MaxRHIShaderPlatform = GMaxRHIShaderPlatform;
  return;
}

// GetExtensionsString @ 145c01f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl GetExtensionsString(FString *param_1)

{
  wchar_t *pwVar1;
  uchar *_Str;
  size_t sVar2;
  uint uVar3;
  undefined1 auStack_168 [32];
  int local_148 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  uVar3 = 0;
  local_148[0] = 0;
  FString::operator=(param_1,L"");
  (*glGetIntegerv)(0x821d,local_148);
  if (0 < local_148[0]) {
    do {
      _Str = (*glGetStringi)(0x1f03,uVar3);
      FString::AppendChars(param_1,L" ",1);
      local_138._padding_ = 0;
      if (_Str == (uchar *)0x0) {
        local_138.Ptr = (wchar_t *)0x0;
        local_138.StringLength = 0;
      }
      else {
        sVar2 = strlen((char *)_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,(char *)_Str,(int)sVar2,Yes);
      }
      pwVar1 = local_138.Ptr;
      sVar2 = wcslen(local_138.Ptr);
      FString::AppendChars(param_1,pwVar1,(int)sVar2);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < local_148[0]);
  }
  return;
}

// GetOGLDebugOutputLevel @ 145c02b10

int __cdecl GetOGLDebugOutputLevel(void)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  int local_res8 [8];
  
  iVar2 = GOGLDebugOutputLevel;
  if (GOGLDebugOutputLevel < 0) {
    bVar1 = FCommandLine::IsInitialized();
    if (bVar1) {
      local_res8[0] = 0;
      pwVar3 = FCommandLine::Get();
      bVar1 = FParse::Value(pwVar3,L"OpenGLDebugLevel=",local_res8);
      GOGLDebugOutputLevel = 0;
      if (bVar1) {
        GOGLDebugOutputLevel = local_res8[0];
      }
      pwVar3 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar3,L"openglDebug");
      if (bVar1) {
        GOGLDebugOutputLevel = 1;
        return 1;
      }
      return GOGLDebugOutputLevel;
    }
    iVar2 = 0;
  }
  return iVar2;
}

// GetOpenGLCompiledShaderCache @ 145c02bc0

TMap<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
* __cdecl GetOpenGLCompiledShaderCache(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetOpenGLCompiledShaderCache'::__l2::
             _dynamic_atexit_destructor_for__CompiledShaderCache__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &CompiledShaderCache;
}

// GetOpenGLCubeFace @ 145c02c30

uint __cdecl GetOpenGLCubeFace(ECubeFace param_1)

{
  switch(param_1) {
  default:
    return 0x8515;
  case CubeFace_NegX:
    return 0x8516;
  case CubeFace_PosY:
    return 0x8517;
  case CubeFace_NegY:
    return 0x8518;
  case CubeFace_PosZ:
    return 0x8519;
  case CubeFace_NegZ:
    return 0x851a;
  }
}

// GetOpenGLFramebufferCache @ 145c036d0

TMap<FOpenGLFramebufferKey,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>_>
* __cdecl GetOpenGLFramebufferCache(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetOpenGLFramebufferCache'::__l2::
             _dynamic_atexit_destructor_for__OpenGLFramebufferCache__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &OpenGLFramebufferCache;
}

// GetOpenGLProgramsCache @ 145c03740

FGLProgramCache * __cdecl GetOpenGLProgramsCache(void)

{
  code *pcVar1;
  bool bVar2;
  FGLProgramCache *pFVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = IsInRHIThread();
    if (!bVar2) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x77c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FGLProgramCache *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FGLProgramCacheLRU::FGLProgramCacheLRU(&ProgramsCache.ProgramCacheLRU);
      ProgramsCache.ProgramCache._44_4_ = 0x80;
      ProgramsCache.ProgramCache._0_8_ = 0;
      ProgramsCache.ProgramCache._8_8_ = 0;
      ProgramsCache.ProgramCache._32_8_ = 0;
      ProgramsCache.ProgramCache._40_4_ = 0;
      ProgramsCache.ProgramCache._52_4_ = 0;
      ProgramsCache.ProgramCache._64_8_ = 0;
      ProgramsCache.ProgramCache._72_4_ = 0;
      ProgramsCache.ProgramCache._48_4_ = 0xffffffff;
      atexit(`GetOpenGLProgramsCache'::__l2::_dynamic_atexit_destructor_for__ProgramsCache__);
      _Init_thread_footer(&_TSS0);
      return &ProgramsCache;
    }
  }
  return &ProgramsCache;
}

// GetPoolBucketIndex @ 145c03e60

uint __cdecl GetPoolBucketIndex(uint param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  bVar3 = false;
  if (UniformBufferSizeBuckets.ArrayNum == 0) {
    bVar3 = IsInRenderingThread();
    if ((!bVar3) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                           ,0x82,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
    puVar7 = RequestedUniformBufferSizeBuckets;
    do {
      if (((UniformBufferSizeBuckets.AllocatorInstance.Data <= puVar7) &&
          (puVar7 < UniformBufferSizeBuckets.AllocatorInstance.Data +
                    (longlong)UniformBufferSizeBuckets.ArrayMax * 4)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      if (UniformBufferSizeBuckets.ArrayNum == UniformBufferSizeBuckets.ArrayMax) {
        UniformBufferSizeBuckets.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&UniformBufferSizeBuckets.AllocatorInstance,
                        &UniformBufferSizeBuckets.ArrayMax);
      }
      lVar6 = (longlong)UniformBufferSizeBuckets.ArrayNum;
      uVar1 = *puVar7;
      puVar7 = (uint *)((longlong)puVar7 + 4);
      UniformBufferSizeBuckets.ArrayNum = UniformBufferSizeBuckets.ArrayNum + 1;
      *(undefined4 *)(UniformBufferSizeBuckets.AllocatorInstance.Data + lVar6 * 4) = uVar1;
    } while ((longlong)puVar7 < 0x1510dee24);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
    bVar3 = UniformBufferSizeBuckets.ArrayNum == 0;
  }
  if ((bVar3 || UniformBufferSizeBuckets.ArrayNum < 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferSizeBuckets.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                         ,0x87,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar8 = 0;
  uVar4 = UniformBufferSizeBuckets.ArrayNum;
  do {
    uVar9 = uVar4 + uVar8 >> 1;
    uVar5 = 0;
    if ((int)(uVar9 - 1) < UniformBufferSizeBuckets.ArrayNum) {
      uVar5 = ~(uVar9 - 1) >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (*(uint *)(UniformBufferSizeBuckets.AllocatorInstance.Data + (ulonglong)uVar9 * 4 + -4) <
        param_1) {
      uVar8 = uVar9;
      uVar9 = uVar4;
    }
    uVar4 = uVar9;
  } while (1 < uVar4 - uVar8);
  uVar4 = 0;
  if ((int)uVar8 < UniformBufferSizeBuckets.ArrayNum) {
    uVar4 = ~uVar8 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if ((*(uint *)(UniformBufferSizeBuckets.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) <
       param_1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("NumBytes <= UniformBufferSizeBuckets[lower]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                         ,0x9b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    uVar5 = 0;
    if ((int)uVar4 < UniformBufferSizeBuckets.ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if ((param_1 <=
         *(uint *)(UniformBufferSizeBuckets.AllocatorInstance.Data + (longlong)(int)uVar4 * 4)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(lower == 0 ) || ( NumBytes > UniformBufferSizeBuckets[lower-1] )",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                           ,0x9c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return uVar8;
}

// GetTypeHash @ 145c04830

uint __cdecl GetTypeHash(FOpenGLVertexDeclarationKey *param_1)

{
  return param_1->Hash;
}

// InitDebugContext @ 145c053f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InitDebugContext(void)

{
  bool bVar1;
  uint uVar2;
  HGLRC pHVar3;
  bool bVar4;
  
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar4 = false;
  bVar1 = IsOGLDebugOutputEnabled();
  if (!bVar1) {
    return;
  }
  if (glDebugMessageCallbackARB !=
      (_func___cdecl_void__func___cdecl_void_uint_uint_uint_uint_int_char_ptr_void_ptr_ptr_void_ptr
       *)0x0) {
    (*glEnable)(0x8242);
    (*glDebugMessageCallbackARB)(OpenGLDebugMessageCallbackARB,(void *)0x0);
    uVar2 = (*glGetError)();
    bVar4 = uVar2 == 0;
  }
  if (glDebugMessageCallbackAMD ==
      (_func___cdecl_void__func___cdecl_void_uint_uint_uint_int_char_ptr_void_ptr_ptr_void_ptr *)0x0
     ) {
LAB_145c054bf:
    if (!bVar4) {
      if (2 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      goto LAB_145c054fd;
    }
  }
  else if (!bVar4) {
    (*glDebugMessageCallbackAMD)(OpenGLDebugMessageCallbackAMD,(void *)0x0);
    uVar2 = (*glGetError)();
    bVar4 = uVar2 == 0;
    goto LAB_145c054bf;
  }
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
LAB_145c054fd:
  if ((glDebugMessageControlARB != (_func___cdecl_void_uint_uint_uint_int_uint_ptr_uchar *)0x0) &&
     (bVar4)) {
    (*glDebugMessageControlARB)(0x824a,0x8268,0x1100,0,(uint *)0x0,'\0');
    (*glDebugMessageControlARB)(0x824a,0x8269,0x1100,0,(uint *)0x0,'\0');
    (*glDebugMessageControlARB)(0x824a,0x826a,0x1100,0,(uint *)0x0,'\0');
    (*glDebugMessageControlARB)(0x8246,0x8251,0x826b,0,(uint *)0x0,'\0');
    if (5 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      return;
    }
  }
  return;
}

// InitDefaultGLContextState @ 145c055d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InitDefaultGLContextState(void)

{
  wchar_t *pwVar1;
  int iVar2;
  uchar *_Str;
  size_t sVar3;
  uint uVar4;
  undefined1 auStackY_188 [32];
  int local_158 [2];
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar4 = 0;
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Data.ArrayNum = 0;
  local_150.Data.ArrayMax = 0;
  local_158[0] = 0;
  FString::operator=(&local_150,L"");
  (*glGetIntegerv)(0x821d,local_158);
  if (0 < local_158[0]) {
    do {
      _Str = (*glGetStringi)(0x1f03,uVar4);
      FString::AppendChars(&local_150,L" ",1);
      local_138._padding_ = 0;
      if (_Str == (uchar *)0x0) {
        local_138.Ptr = (wchar_t *)0x0;
        local_138.StringLength = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,(char *)_Str,(int)sVar3,Yes);
      }
      pwVar1 = local_138.Ptr;
      sVar3 = wcslen(local_138.Ptr);
      FString::AppendChars(&local_150,pwVar1,(int)sVar3);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < local_158[0]);
  }
  (*glDisable)(0xbd0);
  (*glEnable)(0x8db9);
  iVar2 = FString::Find(&local_150,L"GL_ARB_seamless_cube_map",0x18,IgnoreCase,FromStart,-1);
  if (iVar2 != -1) {
    (*glEnable)(0x884f);
  }
  if (((OpenGLConsoleVariables::bUseGlClipControlIfAvailable != 0) &&
      (iVar2 = FString::Find(&local_150,L"GL_ARB_clip_control",0x13,IgnoreCase,FromStart,-1),
      iVar2 != -1)) && (FOpenGL3::bAndroidGLESCompatibilityMode == false)) {
    FOpenGLBase::bSupportsClipControl = true;
    (*glClipControl)(0x8ca2,0x935f);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return;
}

// InitRHICapabilitiesForGL @ 145c05c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InitRHICapabilitiesForGL(void)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<bool> *pTVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  uchar uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  HGLRC pHVar11;
  uchar *puVar12;
  size_t sVar13;
  PROC pPVar14;
  char *pcVar15;
  wchar_t *pwVar16;
  FName this;
  TConsoleVariableData<int> *pTVar17;
  longlong *plVar18;
  TConsoleVariableData<int> *pTVar19;
  int iVar20;
  uint uVar21;
  TConsoleVariableData<int> *pTVar22;
  TConsoleVariableData<int> *pTVar23;
  undefined1 auStackY_e68 [32];
  uchar local_e38 [4];
  int local_e34;
  int local_e30;
  int local_e2c;
  int local_e28;
  int local_e24;
  int local_e20;
  int local_e1c;
  int local_e18;
  int local_e14;
  int local_e10;
  int local_e0c;
  int local_e08;
  int local_e04;
  int local_e00 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_de0;
  FString local_dd0;
  FString local_dc0;
  FString local_db0;
  FOpenGLTextureFormat local_da0;
  FOpenGLTextureFormat local_d88;
  FOpenGLTextureFormat local_d70;
  FOpenGLTextureFormat local_d58;
  FOpenGLTextureFormat local_d40;
  FOpenGLTextureFormat local_d28;
  FOpenGLTextureFormat local_d10;
  FOpenGLTextureFormat local_cf8;
  FOpenGLTextureFormat local_ce0;
  FOpenGLTextureFormat local_cc8;
  FOpenGLTextureFormat local_cb0;
  FOpenGLTextureFormat local_c98;
  FOpenGLTextureFormat local_c80;
  FOpenGLTextureFormat local_c68;
  FOpenGLTextureFormat local_c50;
  FOpenGLTextureFormat local_c38;
  FOpenGLTextureFormat local_c20;
  FOpenGLTextureFormat local_c08;
  FOpenGLTextureFormat local_bf0;
  FOpenGLTextureFormat local_bd8;
  FOpenGLTextureFormat local_bc0;
  FOpenGLTextureFormat local_ba8;
  FOpenGLTextureFormat local_b90;
  FOpenGLTextureFormat local_b78;
  FOpenGLTextureFormat local_b60;
  FOpenGLTextureFormat local_b48;
  FOpenGLTextureFormat local_b30;
  FOpenGLTextureFormat local_b18;
  FOpenGLTextureFormat local_b00;
  FOpenGLTextureFormat local_ae8;
  FOpenGLTextureFormat local_ad0;
  FOpenGLTextureFormat local_ab8;
  FOpenGLTextureFormat local_aa0;
  FOpenGLTextureFormat local_a88;
  FOpenGLTextureFormat local_a70;
  FOpenGLTextureFormat local_a58;
  FOpenGLTextureFormat local_a40;
  FOpenGLTextureFormat local_a28;
  FOpenGLTextureFormat local_a10;
  FOpenGLTextureFormat local_9f8;
  FOpenGLTextureFormat local_9e0;
  FOpenGLTextureFormat local_9c8;
  FOpenGLTextureFormat local_9b0;
  FOpenGLTextureFormat local_998;
  FOpenGLTextureFormat local_980;
  FOpenGLTextureFormat local_968;
  FOpenGLTextureFormat local_950;
  FOpenGLTextureFormat local_938;
  FOpenGLTextureFormat local_920;
  FOpenGLTextureFormat local_908;
  FOpenGLTextureFormat local_8f0;
  FOpenGLTextureFormat local_8d8;
  FOpenGLTextureFormat local_8c0;
  FOpenGLTextureFormat local_8a8;
  FOpenGLTextureFormat local_890;
  FOpenGLTextureFormat local_878;
  FOpenGLTextureFormat local_860;
  FOpenGLTextureFormat local_848;
  FOpenGLTextureFormat local_830;
  FOpenGLTextureFormat local_818;
  FOpenGLTextureFormat local_800;
  FOpenGLTextureFormat local_7e8;
  FOpenGLTextureFormat local_7d0;
  FOpenGLTextureFormat local_7b8;
  FOpenGLTextureFormat local_7a0;
  FOpenGLTextureFormat local_788;
  FOpenGLTextureFormat local_770;
  FOpenGLTextureFormat local_758;
  FOpenGLTextureFormat local_740;
  FOpenGLTextureFormat local_728;
  int local_710;
  FName local_70c;
  FString local_700;
  undefined1 local_6f0 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e68;
  pHVar11 = wglGetCurrentContext();
  if (pHVar11 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pTVar23 = (TConsoleVariableData<int> *)0x0;
  GRHIGlobals.TexturePoolSize = 0;
  GRHIGlobals.PoolSizeVRAMPercentage = 0;
  FConfigCacheIni::GetInt
            (GConfig,L"TextureStreaming",L"PoolSizeVRAMPercentage",
             &GRHIGlobals.PoolSizeVRAMPercentage,&GEngineIni);
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (4 < (byte)LogRHI._0_1_) {
    puVar12 = (*glGetString)(0x1f00);
    local_6e8._padding_ = 0;
    if (puVar12 == (uchar *)0x0) {
      local_6e8.Ptr = (wchar_t *)0x0;
      local_6e8.StringLength = 0;
    }
    else {
      sVar13 = strlen((char *)puVar12);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_6e8,(char *)puVar12,(int)sVar13,Yes);
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    if ((void *)local_6e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_6e8._padding_);
    }
    if (4 < (byte)LogRHI._0_1_) {
      puVar12 = (*glGetString)(0x1f01);
      local_5c8._padding_ = 0;
      if (puVar12 == (uchar *)0x0) {
        local_5c8.Ptr = (wchar_t *)0x0;
        local_5c8.StringLength = 0;
      }
      else {
        sVar13 = strlen((char *)puVar12);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5c8,(char *)puVar12,(int)sVar13,Yes);
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      if ((void *)local_5c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5c8._padding_);
      }
      if (4 < (byte)LogRHI._0_1_) {
        puVar12 = (*glGetString)(0x1f02);
        local_4a8._padding_ = 0;
        if (puVar12 == (uchar *)0x0) {
          local_4a8.Ptr = (wchar_t *)0x0;
          local_4a8.StringLength = 0;
        }
        else {
          sVar13 = strlen((char *)puVar12);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_4a8,(char *)puVar12,(int)sVar13,Yes);
        }
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
        if ((void *)local_4a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4a8._padding_);
        }
        if (4 < (byte)LogRHI._0_1_) {
          puVar12 = (*glGetString)(0x8b8c);
          local_388._padding_ = 0;
          if (puVar12 == (uchar *)0x0) {
            local_388.Ptr = (wchar_t *)0x0;
            local_388.StringLength = 0;
          }
          else {
            sVar13 = strlen((char *)puVar12);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_388,(char *)puVar12,(int)sVar13,Yes);
          }
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
          if ((void *)local_388._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_388._padding_);
          }
        }
      }
    }
  }
  puVar12 = (*glGetString)(0x1f01);
  local_268._padding_ = 0;
  if (puVar12 == (uchar *)0x0) {
    local_268.StringLength = 0;
    local_268.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar13 = strlen((char *)puVar12);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,(char *)puVar12,(int)sVar13,Yes);
  }
  FString::FString(&local_dc0,local_268.Ptr);
  if ((void *)local_268._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_268._padding_);
  }
  if (GRHIGlobals.GpuInfo.AdapterName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(GRHIGlobals.GpuInfo.AdapterName.Data.AllocatorInstance.Data);
  }
  GRHIGlobals.GpuInfo.AdapterName.Data.AllocatorInstance.Data =
       local_dc0.Data.AllocatorInstance.Data;
  GRHIGlobals.GpuInfo.AdapterName.Data.ArrayNum = local_dc0.Data.ArrayNum;
  GRHIGlobals.GpuInfo.AdapterName.Data.ArrayMax = local_dc0.Data.ArrayMax;
  local_dc0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dc0.Data.ArrayNum = 0;
  local_dc0.Data.ArrayMax = 0;
  puVar12 = (*glGetString)(0x1f02);
  local_148._padding_ = 0;
  if (puVar12 == (uchar *)0x0) {
    local_148.StringLength = 0;
    local_148.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar13 = strlen((char *)puVar12);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,(char *)puVar12,(int)sVar13,Yes);
  }
  FString::operator=(&GRHIGlobals.GpuInfo.AdapterInternalDriverVersion,local_148.Ptr);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  GMaxRHIFeatureLevel = ES3_1;
  GMaxRHIShaderPlatform = SP_OPENGL_PCES3_1;
  GRHIGlobals.MaximumInFlightQueries = 4000;
  if (FOpenGL3::bAndroidGLESCompatibilityMode != false) {
    GMaxRHIShaderPlatform = SP_OPENGL_ES3_1_ANDROID;
  }
  local_dd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_dd0.Data.ArrayNum = 0;
  local_dd0.Data.ArrayMax = 0;
  GetExtensionsString(&local_dd0);
  iVar9 = FString::Find(&local_dd0,L"WGL_EXT_swap_control",0x14,IgnoreCase,FromStart,-1);
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar8 = true;
  local_de0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_de0.ArrayNum = 0;
  local_de0.ArrayMax = 0;
  FString::ParseIntoArray(&local_dd0,&local_de0,L" ",true);
  pTVar19 = pTVar23;
  iVar20 = local_de0.ArrayNum;
  if (0 < local_de0.ArrayNum) {
    do {
      uVar21 = (uint)pTVar19;
      if (4 < (byte)LogRHI._0_1_) {
        uVar10 = 0;
        if ((int)uVar21 < iVar20) {
          uVar10 = ~uVar21 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u____s_1510e7310,(FLogCategoryBase *)&LogRHI);
        iVar20 = local_de0.ArrayNum;
      }
      pTVar19 = (TConsoleVariableData<int> *)(ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < iVar20);
  }
  ApplyExtensionsOverrides(&local_dd0);
  FOpenGL4::ProcessExtensions(&local_dd0);
  DestructItems<FString,int>((FString *)local_de0.AllocatorInstance.Data,local_de0.ArrayNum);
  if (local_de0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_de0.AllocatorInstance.Data);
  }
  if (local_dd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_dd0.Data.AllocatorInstance.Data);
  }
  if (iVar9 == -1) {
    pPVar14 = wglGetProcAddress("wglGetExtensionsStringEXT");
    pcVar15 = (char *)(*pPVar14)();
    pcVar15 = strstr(pcVar15,"WGL_EXT_swap_control");
    if (pcVar15 != (char *)0x0) goto LAB_145c06255;
  }
  else {
LAB_145c06255:
    wglSwapIntervalEXT_ProcAddress =
         (_func___cdecl_int_int *)wglGetProcAddress("wglSwapIntervalEXT");
  }
  uVar7 = (*glIsEnabled)(0x92e0);
  if ((uVar7 != '\0') || (FOpenGL3::bDebugContext = false, GRunningUnderRenderDoc != false)) {
    FOpenGL3::bDebugContext = bVar8;
  }
  local_e18 = 0;
  (*glGetIntegerv)(0xd33,&local_e18);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e14 = 0;
  (*glGetIntegerv)(0x8c2b,&local_e14);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e10 = 0;
  (*glGetIntegerv)(0x851c,&local_e10);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e0c = 0;
  (*glGetIntegerv)(0x88ff,&local_e0c);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e00[1] = 0;
  (*glGetIntegerv)(0x8073,local_e00 + 1);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e00[0] = 0;
  (*glGetIntegerv)(0x84e8,local_e00);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e1c = 0;
  (*glGetIntegerv)(0x8872,&local_e1c);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e34 = 1;
  (*glGetIntegerv)(0x8824,&local_e34);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e20 = 1;
  GMaxOpenGLDrawBuffers = 8;
  if (local_e34 < 8) {
    GMaxOpenGLDrawBuffers = local_e34;
  }
  (*glGetIntegerv)(0x8cdf,&local_e20);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e00[2] = 1;
  (*glGetIntegerv)(0x8d57,local_e00 + 2);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e2c = 1;
  (*glGetIntegerv)(0x910e,&local_e2c);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e28 = 1;
  (*glGetIntegerv)(0x910f,&local_e28);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e24 = 1;
  (*glGetIntegerv)(0x9110,&local_e24);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e00[3] = 0;
  (*glGetIntegerv)(0x8b4d,local_e00 + 3);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e00[4] = 0;
  (*glGetIntegerv)(0x8869,local_e00 + 4);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e04 = 0;
  (*glGetIntegerv)(0x90eb,&local_e04);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_e08 = 0;
  (*glGetIntegerv)(0x8262,&local_e08);
  (*glGetError)();
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pwVar16 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar16,L"quad_buffer_stereo");
  if (bVar6) {
    local_e38[0] = '\0';
    (*glGetBooleanv)(0xc33,local_e38);
    (*glGetError)();
    GRHIGlobals.SupportsQuadBufferStereo = local_e38[0] == '\x01';
  }
  if (FOpenGLBase::bSupportsTextureFilterAnisotropic != false) {
    local_e30 = 0;
    (*glGetIntegerv)(0x84ff,&local_e30);
    (*glGetError)();
    if (4 < (byte)LogRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    GMaxOpenGLTextureFilterAnisotropic = local_e30;
  }
  GMaxOpenGLColorSamples = local_e2c;
  GMaxOpenGLDepthSamples = local_e28;
  GMaxOpenGLIntegerSamples = local_e24;
  if ((local_e20 < 8) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Value_GL_MAX_COLOR_ATTACHMENTS >= MaxSimultaneousRenderTargets",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                         ,0x35b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_e00[6] = 0;
  (*glGetIntegerv)(0x821b,local_e00 + 6);
  local_e00[5] = 0;
  (*glGetIntegerv)(0x821c,local_e00 + 5);
  pTVar19 = CVarAllowRGLHIThread.Ref;
  if ((int)GMaxRHIFeatureLevel < 2) {
    bVar6 = IsInParallelGameThread();
    if (bVar6) {
LAB_145c067c7:
      pTVar17 = pTVar23;
    }
    else {
      bVar6 = IsInGameThread();
      pTVar17 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar6) goto LAB_145c067c7;
    }
    if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar19->ShadowedValue) == 0)
    goto LAB_145c067d6;
  }
  else {
LAB_145c067d6:
    bVar8 = false;
  }
  GRHIGlobals.SupportsTextureViews = false;
  GRHIGlobals.SupportsMultithreadedResources = bVar8;
  GRHIGlobals.SupportsRHIThread = bVar8;
  GUseEmulatedUniformBuffers = IsUsingEmulatedUniformBuffers(GMaxRHIShaderPlatform);
  local_db0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_db0.Data.ArrayNum = 0;
  local_db0.Data.ArrayMax = 0;
  GetFeatureLevelName(GMaxRHIFeatureLevel,&local_db0);
  this = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6f0);
  FName::ToString((FName *)this,&local_700);
  if (4 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  GRHIGlobals.MaxTextureSamplers = local_e1c;
  iVar9 = 1;
  if (local_e18 != 0) {
    iVar9 = local_e18;
  }
  GRHIGlobals.MaxTextureDimensions.Value = local_e18;
  GRHIGlobals.MaxViewSizeBytesForNonTypedBuffer.Value = 0x8000000;
  GRHIGlobals.SupportsParallelRenderingTasksWithSeparateRHIThread = false;
  GRHIGlobals.RHIThreadNeedsKicking = true;
  GRHIGlobals.SupportsExactOcclusionQueries = true;
  uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
  GRHIGlobals.SupportsRenderDepthTargetableShaderResources = true;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  GRHIGlobals.MaxViewDimensionForTypedBuffer.Value = (ulong64)local_e14;
  GRHIGlobals.MaxCubeTextureDimensions.Value = local_e10;
  GRHIGlobals.MaxTextureArrayLayers = local_e0c;
  GRHIGlobals.MaxComputeSharedMemory.Value = (long64)local_e08;
  GRHIGlobals.MaxWorkGroupInvocations.Value = local_e04;
  GRHIGlobals.SupportsVolumeTextureRendering = FOpenGLBase::bSupportsVolumeTextureRendering;
  local_710 = (int)lVar2;
  GRHIGlobals.MaxTextureMipCount = local_710 + 1;
  GRHIGlobals.SupportsSeparateRenderTargetBlendState = FOpenGLBase::bSupportsDrawBuffersBlend;
  if (0xf < GRHIGlobals.MaxTextureMipCount) {
    GRHIGlobals.MaxTextureMipCount = 0xf;
  }
  GRHIGlobals.SupportsDepthBoundsTest = glDepthBoundsEXT != (_func___cdecl_void_double_double *)0x0;
  GRHIGlobals.ShaderPlatformForFeatureLevel[0] = SP_NumPlatforms;
  GRHIGlobals.MaxShadowDepthBufferSizeX.Value = 0x1000;
  if (local_e00[0] < 0x1000) {
    GRHIGlobals.MaxShadowDepthBufferSizeX.Value = local_e00[0];
  }
  GRHIGlobals.SupportsTimestampRenderQueries = 0 < FOpenGL3::TimestampQueryBits;
  GRHIGlobals.ShaderPlatformForFeatureLevel[1] = SP_OPENGL_PCES3_1;
  if (GMaxRHIFeatureLevel == ES3_1) {
    GRHIGlobals.ShaderPlatformForFeatureLevel[1] = GMaxRHIShaderPlatform;
  }
  GRHIGlobals.SupportsRenderTargetFormat_PF_G8.Value = true;
  GRHIGlobals.SupportsRenderTargetFormat_PF_FloatRGBA.Value = true;
  GRHIGlobals.SupportsShaderFramebufferFetch = false;
  GRHIGlobals.SupportsShaderMRTFramebufferFetch = false;
  GRHIGlobals.SupportsImageExternal = false;
  GRHIGlobals.SupportsWideMRT = true;
  GRHIGlobals.SupportsTexture3D = true;
  GRHIGlobals.SupportsMobileMultiView = false;
  GRHIGlobals.SupportsPixelLocalStorage = false;
  GRHIGlobals.SupportsShaderDepthStencilFetch = false;
  GRHIGlobals.SupportsShaderFramebufferFetchProgrammableBlending = false;
  GRHIGlobals.HardwareHiddenSurfaceRemoval = false;
  GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X = 0xffff;
  GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y = 0xffff;
  GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z = 0xffff;
  GRHIGlobals.SupportsBackBufferWithCustomDepthStencil = false;
  GRHIGlobals.SupportsLazyShaderCodeLoading = true;
  GRHIGlobals.ShaderPlatformForFeatureLevel[2] = SP_NumPlatforms;
  GRHIGlobals.ShaderPlatformForFeatureLevel[3] = SP_NumPlatforms;
  GRHIGlobals.SupportsDualSrcBlending = false;
  GRHIGlobals.SupportsTextureStreaming = true;
  GRHIGlobals.MaxShadowDepthBufferSizeY.Value = GRHIGlobals.MaxShadowDepthBufferSizeX.Value;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar8 = FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar8)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar18 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.OpenGL.DisableTextureStreamingSupport",1);
    pTVar19 = pTVar23;
    if (plVar18 != (longlong *)0x0) {
      pTVar19 = (TConsoleVariableData<int> *)(**(code **)(*plVar18 + 0x68))(plVar18);
    }
    CVarDisableOpenGLTextureStreamingSupport = pTVar19;
    _Init_thread_footer(&_TSS0);
  }
  pTVar19 = CVarDisableOpenGLTextureStreamingSupport;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_145c06a5c:
    pTVar17 = pTVar23;
  }
  else {
    bVar8 = IsInGameThread();
    pTVar17 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar8) goto LAB_145c06a5c;
  }
  pTVar22 = pTVar23;
  if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar19->ShadowedValue) != 0) {
    GRHIGlobals.SupportsTextureStreaming = false;
  }
  do {
    local_da0.bCompressed = false;
    local_da0.bBGRA = false;
    local_da0._18_2_ = 0;
    local_da0.InternalFormat[0] = 0;
    local_da0.InternalFormat[1] = 0;
    local_da0.Format = 0;
    local_da0.Type = 0;
    SetupTextureFormat((EPixelFormat)pTVar22,&local_da0);
    uVar21 = (int)pTVar22 + 1;
    pTVar22 = (TConsoleVariableData<int> *)(ulonglong)uVar21;
  } while ((int)uVar21 < 0x5e);
  local_d88.bCompressed = false;
  local_d88.bBGRA = false;
  local_d88._18_2_ = 0;
  local_d88.InternalFormat[0] = 0;
  local_d88.InternalFormat[1] = 0;
  local_d88.Format = 0;
  local_d88.Type = 0;
  SetupTextureFormat(PF_Unknown,&local_d88);
  local_ce0.InternalFormat[0] = 0x8814;
  local_ce0.InternalFormat[1] = 0x8814;
  local_ce0.Format = 0x1908;
  local_ce0.Type = 0x1406;
  local_ce0.bCompressed = false;
  local_ce0.bBGRA = false;
  SetupTextureFormat(PF_A32B32G32R32F,&local_ce0);
  local_d70.bCompressed = false;
  local_d70.bBGRA = false;
  local_d70._18_2_ = 0;
  local_d70.InternalFormat[0] = 0;
  local_d70.InternalFormat[1] = 0;
  local_d70.Format = 0;
  local_d70.Type = 0;
  SetupTextureFormat(PF_UYVY,&local_d70);
  pTVar19 = CVarGLDepth24Bit.Ref;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_145c06b1b:
    pTVar17 = pTVar23;
  }
  else {
    bVar8 = IsInGameThread();
    pTVar17 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar8) goto LAB_145c06b1b;
  }
  if (*(int *)((longlong)pTVar17->ShadowedValue + (longlong)pTVar19->ShadowedValue) == 0) {
    local_cb0.InternalFormat[0] = 0x8cad;
    local_cb0.InternalFormat[1] = 0;
    local_cb0.Format = 0x84f9;
    local_cb0.Type = 0x8dad;
    local_cb0.bCompressed = false;
    local_cb0.bBGRA = false;
    SetupTextureFormat(PF_DepthStencil,&local_cb0);
    INSERT(GPixelFormats[0xb]._40_1_,'\0',1,1);
    GPixelFormats[0xb].BlockBytes = 8;
  }
  else {
    local_cc8.InternalFormat[0] = 0x88f0;
    local_cc8.InternalFormat[1] = 0;
    local_cc8.Format = 0x84f9;
    local_cc8.Type = 0x84fa;
    local_cc8.bCompressed = false;
    local_cc8.bBGRA = false;
    SetupTextureFormat(PF_DepthStencil,&local_cc8);
    INSERT(GPixelFormats[0xb]._40_1_,'\x01',1,1);
    GPixelFormats[0xb].BlockBytes = 4;
  }
  INSERT(GPixelFormats[0x2c]._40_1_,'\x01',0,1);
  local_c98.InternalFormat[0] = 0x81a5;
  local_c98.InternalFormat[1] = 0x81a5;
  local_c98.Format = 0x1902;
  local_c98.Type = 0x1405;
  local_c98.bCompressed = false;
  local_c98.bBGRA = false;
  SetupTextureFormat(PF_ShadowDepth,&local_c98);
  local_c80.InternalFormat[0] = 0x81a5;
  local_c80.InternalFormat[1] = 0x81a5;
  local_c80.Format = 0x1902;
  local_c80.Type = 0x1405;
  local_c80.bCompressed = false;
  local_c80.bBGRA = false;
  SetupTextureFormat(PF_D24,&local_c80);
  local_c68.InternalFormat[0] = 0x881a;
  local_c68.InternalFormat[1] = 0x881a;
  local_c68.Format = 0x1908;
  local_c68.Type = 0x140b;
  local_c68.bCompressed = false;
  local_c68.bBGRA = false;
  SetupTextureFormat(PF_A16B16G16R16,&local_c68);
  local_d58.bCompressed = false;
  local_d58.bBGRA = false;
  local_d58._18_2_ = 0;
  local_d58.InternalFormat[0] = 0;
  local_d58.InternalFormat[1] = 0;
  local_d58.Format = 0;
  local_d58.Type = 0;
  SetupTextureFormat(PF_A1,&local_d58);
  local_c50.InternalFormat[0] = 0x8d76;
  local_c50.InternalFormat[1] = 0x8d76;
  local_c50.Format = 0x8d99;
  local_c50.Type = 0x1403;
  local_c50.bCompressed = false;
  local_c50.bBGRA = false;
  SetupTextureFormat(PF_R16G16B16A16_UINT,&local_c50);
  local_c38.InternalFormat[0] = 0x8d88;
  local_c38.InternalFormat[1] = 0x8d88;
  local_c38.Format = 0x8d99;
  local_c38.Type = 0x1402;
  local_c38.bCompressed = false;
  local_c38.bBGRA = false;
  SetupTextureFormat(PF_R16G16B16A16_SINT,&local_c38);
  local_c20.InternalFormat[0] = 0x8d70;
  local_c20.InternalFormat[1] = 0x8d70;
  local_c20.Format = 0x8d99;
  local_c20.Type = 0x1405;
  local_c20.bCompressed = false;
  local_c20.bBGRA = false;
  SetupTextureFormat(PF_R32G32B32A32_UINT,&local_c20);
  local_c08.InternalFormat[0] = 0x805b;
  local_c08.InternalFormat[1] = 0x805b;
  local_c08.Format = 0x1908;
  local_c08.Type = 0x1403;
  local_c08.bCompressed = false;
  local_c08.bBGRA = false;
  SetupTextureFormat(PF_R16G16B16A16_UNORM,&local_c08);
  local_bf0.InternalFormat[0] = 0x805b;
  local_bf0.InternalFormat[1] = 0x805b;
  local_bf0.Format = 0x1908;
  local_bf0.Type = 0x1402;
  local_bf0.bCompressed = false;
  local_bf0.bBGRA = false;
  SetupTextureFormat(PF_R16G16B16A16_SNORM,&local_bf0);
  local_bd8.InternalFormat[0] = 0x823a;
  local_bd8.InternalFormat[1] = 0x823a;
  local_bd8.Format = 0x8228;
  local_bd8.Type = 0x1403;
  local_bd8.bCompressed = false;
  local_bd8.bBGRA = false;
  SetupTextureFormat(PF_R16G16_UINT,&local_bd8);
  local_bc0.InternalFormat[0] = 0x8239;
  local_bc0.InternalFormat[1] = 0x8239;
  local_bc0.Format = 0x8228;
  local_bc0.Type = 0x1402;
  local_bc0.bCompressed = false;
  local_bc0.bBGRA = false;
  SetupTextureFormat(PF_R16G16_SINT,&local_bc0);
  local_ba8.InternalFormat[0] = 0x8229;
  local_ba8.InternalFormat[1] = 0x8229;
  local_ba8.Format = 0x1903;
  local_ba8.Type = 0x1401;
  local_ba8.bCompressed = false;
  local_ba8.bBGRA = false;
  SetupTextureFormat(PF_R8,&local_ba8);
  local_b90.InternalFormat[0] = 0x8d62;
  local_b90.InternalFormat[1] = 0x8d62;
  local_b90.Format = 0x1907;
  local_b90.Type = 0x8363;
  local_b90.bCompressed = false;
  local_b90.bBGRA = false;
  SetupTextureFormat(PF_R5G6B5_UNORM,&local_b90);
  local_b78.InternalFormat[0] = 0x8057;
  local_b78.InternalFormat[1] = 0x8057;
  local_b78.Format = 0x1908;
  local_b78.Type = 0x8366;
  local_b78.bCompressed = false;
  local_b78.bBGRA = true;
  SetupTextureFormat(PF_B5G5R5A1_UNORM,&local_b78);
  local_b60.InternalFormat[0] = 0x822a;
  local_b60.InternalFormat[1] = 0x822a;
  local_b60.Format = 0x1903;
  local_b60.Type = 0x1403;
  local_b60.bCompressed = false;
  local_b60.bBGRA = false;
  SetupTextureFormat(PF_G16,&local_b60);
  local_b48.InternalFormat[0] = 0x822e;
  local_b48.InternalFormat[1] = 0x822e;
  local_b48.Format = 0x1903;
  local_b48.Type = 0x1406;
  local_b48.bCompressed = false;
  local_b48.bBGRA = false;
  SetupTextureFormat(PF_R32_FLOAT,&local_b48);
  local_b30.InternalFormat[0] = 0x822f;
  local_b30.InternalFormat[1] = 0x822f;
  local_b30.Format = 0x8227;
  local_b30.Type = 0x140b;
  local_b30.bCompressed = false;
  local_b30.bBGRA = false;
  SetupTextureFormat(PF_G16R16F,&local_b30);
  local_b18.InternalFormat[0] = 0x822f;
  local_b18.InternalFormat[1] = 0x822f;
  local_b18.Format = 0x8227;
  local_b18.Type = 0x140b;
  local_b18.bCompressed = false;
  local_b18.bBGRA = false;
  SetupTextureFormat(PF_G16R16F_FILTER,&local_b18);
  local_b00.InternalFormat[0] = 0x8230;
  local_b00.InternalFormat[1] = 0x8230;
  local_b00.Format = 0x8227;
  local_b00.Type = 0x1406;
  local_b00.bCompressed = false;
  local_b00.bBGRA = false;
  SetupTextureFormat(PF_G32R32F,&local_b00);
  local_ae8.InternalFormat[0] = 0x8059;
  local_ae8.InternalFormat[1] = 0x8059;
  local_ae8.Format = 0x1908;
  local_ae8.Type = 0x8368;
  local_ae8.bCompressed = false;
  local_ae8.bBGRA = false;
  SetupTextureFormat(PF_A2B10G10R10,&local_ae8);
  local_ad0.InternalFormat[0] = 0x822d;
  local_ad0.InternalFormat[1] = 0x822d;
  local_ad0.Format = 0x1903;
  local_ad0.Type = 0x140b;
  local_ad0.bCompressed = false;
  local_ad0.bBGRA = false;
  SetupTextureFormat(PF_R16F,&local_ad0);
  local_ab8.InternalFormat[0] = 0x822d;
  local_ab8.InternalFormat[1] = 0x822d;
  local_ab8.Format = 0x1903;
  local_ab8.Type = 0x140b;
  local_ab8.bCompressed = false;
  local_ab8.bBGRA = false;
  SetupTextureFormat(PF_R16F_FILTER,&local_ab8);
  local_aa0.InternalFormat[0] = 0x8229;
  local_aa0.InternalFormat[1] = 0x8229;
  local_aa0.Format = 0x1903;
  local_aa0.Type = 0x1401;
  local_aa0.bCompressed = false;
  local_aa0.bBGRA = false;
  SetupTextureFormat(PF_A8,&local_aa0);
  local_a88.InternalFormat[0] = 0x8236;
  local_a88.InternalFormat[1] = 0x8236;
  local_a88.Format = 0x8d94;
  local_a88.Type = 0x1405;
  local_a88.bCompressed = false;
  local_a88.bBGRA = false;
  SetupTextureFormat(PF_R32_UINT,&local_a88);
  local_a70.InternalFormat[0] = 0x8235;
  local_a70.InternalFormat[1] = 0x8235;
  local_a70.Format = 0x8d94;
  local_a70.Type = 0x1404;
  local_a70.bCompressed = false;
  local_a70.bBGRA = false;
  SetupTextureFormat(PF_R32_SINT,&local_a70);
  local_a58.InternalFormat[0] = 0x8234;
  local_a58.InternalFormat[1] = 0x8234;
  local_a58.Format = 0x8d94;
  local_a58.Type = 0x1403;
  local_a58.bCompressed = false;
  local_a58.bBGRA = false;
  SetupTextureFormat(PF_R16_UINT,&local_a58);
  local_a40.InternalFormat[0] = 0x8233;
  local_a40.InternalFormat[1] = 0x8233;
  local_a40.Format = 0x8d94;
  local_a40.Type = 0x1402;
  local_a40.bCompressed = false;
  local_a40.bBGRA = false;
  SetupTextureFormat(PF_R16_SINT,&local_a40);
  local_a28.InternalFormat[0] = 0x8232;
  local_a28.InternalFormat[1] = 0x8232;
  local_a28.Format = 0x8d94;
  local_a28.Type = 0x1401;
  local_a28.bCompressed = false;
  local_a28.bBGRA = false;
  SetupTextureFormat(PF_R8_UINT,&local_a28);
  local_a10.InternalFormat[0] = 0x822b;
  local_a10.InternalFormat[1] = 0x822b;
  local_a10.Format = 0x8227;
  local_a10.Type = 0x1401;
  local_a10.bCompressed = false;
  local_a10.bBGRA = false;
  SetupTextureFormat(PF_R8G8,&local_a10);
  local_9f8.InternalFormat[0] = 0x823c;
  local_9f8.InternalFormat[1] = 0x823c;
  local_9f8.Format = 0x8228;
  local_9f8.Type = 0x1405;
  local_9f8.bCompressed = false;
  local_9f8.bBGRA = false;
  SetupTextureFormat(PF_R32G32_UINT,&local_9f8);
  local_9e0.InternalFormat[0] = 0x8058;
  local_9e0.InternalFormat[1] = 0x8058;
  local_9e0.Format = 0x1908;
  local_9e0.Type = 0x1401;
  local_9e0.bCompressed = false;
  local_9e0.bBGRA = false;
  SetupTextureFormat(PF_R8G8B8A8_SNORM,&local_9e0);
  local_9c8.InternalFormat[0] = 0x8c3a;
  local_9c8.InternalFormat[1] = 0x8c3a;
  local_9c8.Format = 0x1907;
  local_9c8.Type = 0x8c3b;
  local_9c8.bCompressed = false;
  local_9c8.bBGRA = false;
  SetupTextureFormat(PF_FloatRGB,&local_9c8);
  local_9b0.InternalFormat[0] = 0x8c3a;
  local_9b0.InternalFormat[1] = 0x8c3a;
  local_9b0.Format = 0x1907;
  local_9b0.Type = 0x8c3b;
  local_9b0.bCompressed = false;
  local_9b0.bBGRA = false;
  SetupTextureFormat(PF_FloatR11G11B10,&local_9b0);
  local_998.InternalFormat[0] = 0x881a;
  local_998.InternalFormat[1] = 0x881a;
  local_998.Format = 0x1908;
  local_998.Type = 0x140b;
  local_998.bCompressed = false;
  local_998.bBGRA = false;
  SetupTextureFormat(PF_FloatRGBA,&local_998);
  local_980.InternalFormat[0] = 0x8238;
  local_980.InternalFormat[1] = 0x8238;
  local_980.Format = 0x8228;
  local_980.Type = 0x1401;
  local_980.bCompressed = false;
  local_980.bBGRA = false;
  SetupTextureFormat(PF_R8G8_UINT,&local_980);
  local_968.InternalFormat[0] = 0x8d71;
  local_968.InternalFormat[1] = 0x8d71;
  local_968.Format = 0x8d98;
  local_968.Type = 0x1405;
  local_968.bCompressed = false;
  local_968.bBGRA = false;
  SetupTextureFormat(PF_R32G32B32_UINT,&local_968);
  local_950.InternalFormat[0] = 0x8d83;
  local_950.InternalFormat[1] = 0x8d83;
  local_950.Format = 0x8d98;
  local_950.Type = 0x1404;
  local_950.bCompressed = false;
  local_950.bBGRA = false;
  SetupTextureFormat(PF_R32G32B32_SINT,&local_950);
  local_938.InternalFormat[0] = 0x8815;
  local_938.InternalFormat[1] = 0x8815;
  local_938.Format = 0x1907;
  local_938.Type = 0x1406;
  local_938.bCompressed = false;
  local_938.bBGRA = false;
  SetupTextureFormat(PF_R32G32B32F,&local_938);
  local_920.InternalFormat[0] = 0x8231;
  local_920.InternalFormat[1] = 0x8231;
  local_920.Format = 0x8d94;
  local_920.Type = 0x1400;
  local_920.bCompressed = false;
  local_920.bBGRA = false;
  SetupTextureFormat(PF_R8_SINT,&local_920);
  local_908.InternalFormat[0] = 0x8058;
  local_908.InternalFormat[1] = 0x8c43;
  local_908.Format = 0x1908;
  local_908.Type = 0x1401;
  local_908.bCompressed = false;
  local_908.bBGRA = true;
  SetupTextureFormat(PF_B8G8R8A8,&local_908);
  local_8f0.InternalFormat[0] = 0x8058;
  local_8f0.InternalFormat[1] = 0x8c43;
  local_8f0.Format = 0x1908;
  local_8f0.Type = 0x1401;
  local_8f0.bCompressed = false;
  local_8f0.bBGRA = false;
  SetupTextureFormat(PF_R8G8B8A8,&local_8f0);
  local_8d8.InternalFormat[0] = 0x8d7c;
  local_8d8.InternalFormat[1] = 0x8d7c;
  local_8d8.Format = 0x8d99;
  local_8d8.Type = 0x1401;
  local_8d8.bCompressed = false;
  local_8d8.bBGRA = false;
  SetupTextureFormat(PF_R8G8B8A8_UINT,&local_8d8);
  local_8c0.InternalFormat[0] = 0x8229;
  local_8c0.InternalFormat[1] = 0x8229;
  local_8c0.Format = 0x1903;
  local_8c0.Type = 0x1401;
  local_8c0.bCompressed = false;
  local_8c0.bBGRA = false;
  SetupTextureFormat(PF_G8,&local_8c0);
  local_8a8.InternalFormat[0] = 0x8051;
  local_8a8.InternalFormat[1] = 0x8c41;
  local_8a8.Format = 0x1907;
  local_8a8.Type = 0x1401;
  local_8a8.bCompressed = false;
  local_8a8.bBGRA = false;
  SetupTextureFormat(PF_R8G8B8,&local_8a8);
  local_890.InternalFormat[0] = 0x8f95;
  local_890.InternalFormat[1] = 0;
  local_890.Format = 0x8227;
  local_890.Type = 0x1400;
  local_890.bCompressed = false;
  local_890.bBGRA = false;
  SetupTextureFormat(PF_V8U8,&local_890);
  local_878.InternalFormat[0] = 0x8dbd;
  local_878.InternalFormat[1] = 0x8dbd;
  local_878.Format = 0x8227;
  local_878.Type = 0x1401;
  local_878.bCompressed = true;
  local_878.bBGRA = false;
  SetupTextureFormat(PF_BC5,&local_878);
  local_860.InternalFormat[0] = 0x8dbb;
  local_860.InternalFormat[1] = 0x8dbb;
  local_860.Format = 0x1903;
  local_860.Type = 0x1401;
  local_860.bCompressed = true;
  local_860.bBGRA = false;
  SetupTextureFormat(PF_BC4,&local_860);
  local_848.InternalFormat[0] = 0x8e8c;
  local_848.InternalFormat[1] = 0x8e8d;
  local_848.Format = 0x1908;
  local_848.Type = 0x1401;
  local_848.bCompressed = true;
  local_848.bBGRA = false;
  SetupTextureFormat(PF_BC7,&local_848);
  local_830.InternalFormat[0] = 0x8e8f;
  local_830.InternalFormat[1] = 0x8e8f;
  local_830.Format = 0x1907;
  local_830.Type = 0x140b;
  local_830.bCompressed = true;
  local_830.bBGRA = false;
  SetupTextureFormat(PF_BC6H,&local_830);
  local_818.InternalFormat[0] = 0x822c;
  local_818.InternalFormat[1] = 0x822c;
  local_818.Format = 0x8227;
  local_818.Type = 0x1403;
  local_818.bCompressed = false;
  local_818.bBGRA = false;
  SetupTextureFormat(PF_G16R16,&local_818);
  local_800.InternalFormat[0] = 0x8f99;
  local_800.InternalFormat[1] = 0x8f99;
  local_800.Format = 0x8227;
  local_800.Type = 0x1402;
  local_800.bCompressed = false;
  local_800.bBGRA = false;
  SetupTextureFormat(PF_G16R16_SNORM,&local_800);
  local_7e8.InternalFormat[0] = 0x83f1;
  local_7e8.InternalFormat[1] = 0x8c4d;
  local_7e8.Format = 0x1908;
  local_7e8.Type = 0x1401;
  local_7e8.bCompressed = true;
  local_7e8.bBGRA = false;
  SetupTextureFormat(PF_DXT1,&local_7e8);
  local_7d0.InternalFormat[0] = 0x83f2;
  local_7d0.InternalFormat[1] = 0x8c4e;
  local_7d0.Format = 0x1908;
  local_7d0.Type = 0x1401;
  local_7d0.bCompressed = true;
  local_7d0.bBGRA = false;
  SetupTextureFormat(PF_DXT3,&local_7d0);
  local_7b8.InternalFormat[0] = 0x83f3;
  local_7b8.InternalFormat[1] = 0x8c4f;
  local_7b8.Format = 0x1908;
  local_7b8.Type = 0x1401;
  local_7b8.bCompressed = true;
  local_7b8.bBGRA = false;
  SetupTextureFormat(PF_DXT5,&local_7b8);
  if (FOpenGLBase::bSupportsASTC != false) {
    local_7a0.InternalFormat[0] = 0x93b0;
    local_7a0.InternalFormat[1] = 0x93d0;
    local_7a0.Format = 0x1908;
    local_7a0.Type = 0x1401;
    local_7a0.bCompressed = true;
    local_7a0.bBGRA = false;
    SetupTextureFormat(PF_ASTC_4x4,&local_7a0);
    local_788.InternalFormat[0] = 0x93b4;
    local_788.InternalFormat[1] = 0x93d4;
    local_788.Format = 0x1908;
    local_788.Type = 0x1401;
    local_788.bCompressed = true;
    local_788.bBGRA = false;
    SetupTextureFormat(PF_ASTC_6x6,&local_788);
    local_770.InternalFormat[0] = 0x93b7;
    local_770.InternalFormat[1] = 0x93d7;
    local_770.Format = 0x1908;
    local_770.Type = 0x1401;
    local_770.bCompressed = true;
    local_770.bBGRA = false;
    SetupTextureFormat(PF_ASTC_8x8,&local_770);
    local_758.InternalFormat[0] = 0x93bb;
    local_758.InternalFormat[1] = 0x93db;
    local_758.Format = 0x1908;
    local_758.Type = 0x1401;
    local_758.bCompressed = true;
    local_758.bBGRA = false;
    SetupTextureFormat(PF_ASTC_10x10,&local_758);
    local_740.InternalFormat[0] = 0x93bd;
    local_740.InternalFormat[1] = 0x93dd;
    local_740.Format = 0x1908;
    local_740.Type = 0x1401;
    local_740.bCompressed = true;
    local_740.bBGRA = false;
    SetupTextureFormat(PF_ASTC_12x12,&local_740);
  }
  if (FOpenGLBase::bSupportsASTCHDR != false) {
    local_728.InternalFormat[0] = 0x93b0;
    local_728.InternalFormat[1] = 0x93d0;
    local_728.Format = 0x1908;
    local_728.Type = 0x140b;
    local_728.bCompressed = true;
    local_728.bBGRA = false;
    SetupTextureFormat(PF_ASTC_4x4_HDR,&local_728);
    local_d40.InternalFormat[0] = 0x93b4;
    local_d40.InternalFormat[1] = 0x93d4;
    local_d40.Format = 0x1908;
    local_d40.Type = 0x140b;
    local_d40.bCompressed = true;
    local_d40.bBGRA = false;
    SetupTextureFormat(PF_ASTC_6x6_HDR,&local_d40);
    local_d28.InternalFormat[0] = 0x93b7;
    local_d28.InternalFormat[1] = 0x93d7;
    local_d28.Format = 0x1908;
    local_d28.Type = 0x140b;
    local_d28.bCompressed = true;
    local_d28.bBGRA = false;
    SetupTextureFormat(PF_ASTC_8x8_HDR,&local_d28);
    local_d10.InternalFormat[0] = 0x93bb;
    local_d10.InternalFormat[1] = 0x93db;
    local_d10.Format = 0x1908;
    local_d10.Type = 0x140b;
    local_d10.bCompressed = true;
    local_d10.bBGRA = false;
    SetupTextureFormat(PF_ASTC_10x10_HDR,&local_d10);
    local_cf8.InternalFormat[0] = 0x93bd;
    local_cf8.InternalFormat[1] = 0x93dd;
    local_cf8.Format = 0x1908;
    local_cf8.Type = 0x140b;
    local_cf8.bCompressed = true;
    local_cf8.bBGRA = false;
    SetupTextureFormat(PF_ASTC_12x12_HDR,&local_cf8);
  }
  pTVar5 = CVarAllowPSOPrecaching.Ref;
  GPixelFormats[9].BlockBytes = 4;
  GPixelFormats[10].BlockBytes = 8;
  GRHIGlobals.NeedsUnatlasedCSMDepthsWorkaround = true;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_145c07b04:
    pTVar19 = pTVar23;
  }
  else {
    bVar8 = IsInGameThread();
    pTVar19 = (TConsoleVariableData<int> *)&DAT_00000001;
    if (bVar8) goto LAB_145c07b04;
  }
  pTVar4 = CVarEnablePSOFileCacheWhenPrecachingActive.Ref;
  GRHIGlobals.SupportsPSOPrecaching =
       *(bool *)((longlong)pTVar19->ShadowedValue + (longlong)pTVar5->ShadowedValue);
  if (GRHIGlobals.SupportsPSOPrecaching != false) {
    bVar8 = IsInParallelGameThread();
    if ((bVar8) ||
       (bVar8 = IsInGameThread(), pTVar19 = (TConsoleVariableData<int> *)&DAT_00000001, bVar8)) {
      pTVar19 = pTVar23;
    }
    GRHIGlobals.SupportsPipelineFileCache = false;
    if (*(bool *)((longlong)pTVar19->ShadowedValue + (longlong)pTVar4->ShadowedValue) == false)
    goto LAB_145c07b45;
  }
  GRHIGlobals.SupportsPipelineFileCache = true;
LAB_145c07b45:
  GRHIGlobals.NeedsShaderUnbinds = true;
  FName::FName(&local_70c,L"GLSL");
  GRHIGlobals.PreferredPreviewShaderCodeFormat = local_70c;
  if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_700.Data.AllocatorInstance.Data);
  }
  if (local_db0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_db0.Data.AllocatorInstance.Data);
  }
  return;
}

// IsOGLDebugOutputEnabled @ 145c0ac60

bool __cdecl IsOGLDebugOutputEnabled(void)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int local_res8 [8];
  
  iVar1 = GOGLDebugOutputLevel;
  if (GOGLDebugOutputLevel < 0) {
    bVar2 = FCommandLine::IsInitialized();
    iVar1 = 0;
    if (bVar2) {
      local_res8[0] = 0;
      pwVar3 = FCommandLine::Get();
      bVar2 = FParse::Value(pwVar3,L"OpenGLDebugLevel=",local_res8);
      GOGLDebugOutputLevel = 0;
      if (bVar2) {
        GOGLDebugOutputLevel = local_res8[0];
      }
      pwVar3 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar3,L"openglDebug");
      iVar1 = GOGLDebugOutputLevel;
      if (bVar2) {
        GOGLDebugOutputLevel = 1;
        return true;
      }
    }
  }
  return iVar1 != 0;
}

// IsPoolingEnabled @ 145c0acf0

bool __cdecl IsPoolingEnabled(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pIVar4 = IConsoleManager::Get();
      plVar5 = (longlong *)
               (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.UniformBufferPooling",1);
      pTVar6 = (TConsoleVariableData<int> *)0x0;
      if (plVar5 != (longlong *)0x0) {
        pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
      }
      CVar = pTVar6;
      _Init_thread_footer(&_TSS0);
    }
  }
  bVar2 = IsInParallelRenderingThread();
  pTVar6 = CVar;
  if (bVar2) {
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return pTVar6->ShadowedValue[1] != 0;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  return pTVar6->ShadowedValue[0] != 0;
}

// IsPrecachingEnabled @ 145c0ae30

bool __cdecl IsPrecachingEnabled(void)

{
  int iVar1;
  IConsoleManager *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      CVarPSOPrecaching =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.PSOPrecaching",1);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (CVarPSOPrecaching != (IConsoleVariable *)0x0) {
    iVar1 = (**(code **)(*(longlong *)CVarPSOPrecaching + 200))();
    if (iVar1 != 0) {
      return true;
    }
  }
  return false;
}

// LogTextureEvictionDebugInfo @ 145c0cf60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogTextureEvictionDebugInfo(void)

{
  longlong lVar1;
  
  if ((GOGLTextureEvictLogging != 0) && (counter = counter + 1, counter == 100)) {
    if ((2 < (byte)LogRHI._0_1_) &&
       (((UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI),
         2 < (byte)LogRHI._0_1_ &&
         (UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI),
         2 < (byte)LogRHI._0_1_)) &&
        (UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI),
        2 < (byte)LogRHI._0_1_)))) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (2 < (byte)LogRHI._0_1_) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar1 + 0x9d4c) <
           `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                    ::__l2::Lru,4000);
        atexit(`FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__);
        _Init_thread_footer(&`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      if ((*(int *)(lVar1 + 0x9d4c) <
           `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        _TextureLRU = 0;
        DAT_155170050 = 0;
        DAT_155170058 = 0;
        _DAT_155170008 = 0;
        _DAT_155170020 = 0;
        _DAT_155170028 = 0;
        _DAT_15517002c = 0x80;
        _DAT_155170030 = 0xffffffff;
        DAT_155170034 = 0;
        DAT_155170040 = 0;
        DAT_155170048 = 0;
        DAT_155170060 = 10000;
        TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
                  ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
                   &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                    ::__l2::TextureLRU,10000);
        atexit(`FTextureEvictionLRU::GetLRUContainer'::__l2::
               _dynamic_atexit_destructor_for__TextureLRU__);
        _Init_thread_footer(&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    GAvgRestoreCount = 0;
    GMaxRestoreTime = 0.0;
    GAvgRestoreTime = 0.0;
    counter = 0;
  }
  return;
}

// MarkShaderParameterCachesDirty @ 145c0d340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl MarkShaderParameterCachesDirty(FOpenGLShaderParameterCache *param_1,bool param_2)

{
  HGLRC pHVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar4 = (ulonglong)(-(uint)param_2 & 5);
  if (uVar4 < param_2 + 5) {
    lVar5 = (param_2 + 5) - uVar4;
    puVar2 = &param_1[uVar4].PackedGlobalUniformDirty[0].NumVectors;
    do {
      ((FRange *)(puVar2 + -1))->StartVector = 0;
      uVar3 = puVar2[0x1b] >> 4;
      *puVar2 = uVar3;
      puVar2[1] = 0;
      puVar2[2] = uVar3;
      puVar2[3] = 0;
      puVar2[4] = uVar3;
      puVar2[5] = 0;
      puVar2[6] = uVar3;
      puVar2[7] = 0;
      puVar2[8] = uVar3;
      puVar2[9] = 0;
      puVar2[10] = uVar3;
      puVar2[0xb] = 0;
      puVar2[0xc] = uVar3;
      lVar5 = lVar5 + -1;
      puVar2 = puVar2 + 0x2c;
    } while (lVar5 != 0);
  }
  return;
}

// MoveHashLines @ 145c0d8f0

bool __cdecl
`anonymous_namespace'::MoveHashLines
          (TArray<char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  size_t sVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  
  pFVar14 = (param_2->AllocatorInstance).Data;
  do {
    pFVar10 = (FScriptContainerElement *)strchr((char *)pFVar14,10);
    if (pFVar10 == (FScriptContainerElement *)0x0) {
      sVar11 = strlen((char *)pFVar14);
      pFVar10 = pFVar14 + (int)sVar11;
    }
    FVar2 = *pFVar14;
    pFVar13 = pFVar14;
    if (FVar2 != (FScriptContainerElement)0x23) {
      while (3 < (int)(char)FVar2 - 10U) {
        iVar6 = isspace((uint)(byte)FVar2);
        if (iVar6 == 0) {
          pFVar10 = (param_2->AllocatorInstance).Data;
          if (pFVar14 <= pFVar10) {
            return false;
          }
          iVar6 = (int)pFVar14 - (int)pFVar10;
          piVar1 = &param_1->ArrayNum;
          if (param_1->ArrayNum < 1) {
            if (((pFVar10 == (FScriptContainerElement *)0x0) && (iVar6 != 0)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ptr != nullptr || Count == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x9c1,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,iVar6,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
            if (iVar6 != 0) {
              memcpy((param_1->AllocatorInstance).Data + iVar9,pFVar10,(longlong)iVar6);
            }
            iVar6 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,1,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
            (param_1->AllocatorInstance).Data[iVar6] = (FScriptContainerElement)0x0;
          }
          else {
            iVar9 = param_1->ArrayNum + -1;
            if ((pFVar10 == (FScriptContainerElement *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Ptr != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x793,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,iVar6,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
            pFVar13 = (param_1->AllocatorInstance).Data + iVar9;
            memmove(pFVar13 + iVar6,pFVar13,(longlong)(iVar7 - iVar9));
            if (iVar6 != 0) {
              memcpy((param_1->AllocatorInstance).Data + iVar9,pFVar10,(longlong)iVar6);
            }
          }
          uVar12 = *piVar1 - 2;
          uVar8 = 0;
          if ((int)uVar12 < *piVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          iVar6 = *piVar1;
          if ((param_1->AllocatorInstance).Data[(longlong)iVar6 + -2] !=
              (FScriptContainerElement)0xa) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,1,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
            pFVar10 = (param_1->AllocatorInstance).Data + iVar6;
            memmove(pFVar10,pFVar10 + -1,(longlong)((iVar9 - iVar6) + 1));
            (param_1->AllocatorInstance).Data[(longlong)iVar6 + -1] = (FScriptContainerElement)0xa;
          }
          lVar15 = (longlong)pFVar14 - (longlong)(param_2->AllocatorInstance).Data;
          uVar12 = (uint)lVar15;
          uVar8 = 0;
          if ((int)uVar12 <= param_2->ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (lVar15 != 0) {
            pFVar14 = (param_2->AllocatorInstance).Data;
            iVar6 = param_2->ArrayNum - uVar12;
            if (iVar6 != 0) {
              memmove(pFVar14,pFVar14 + (int)uVar12,(longlong)iVar6);
            }
            param_2->ArrayNum = param_2->ArrayNum - uVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
          }
          return true;
        }
        FVar2 = pFVar13[1];
        pFVar13 = pFVar13 + 1;
      }
    }
    pFVar14 = pFVar10;
    if (*pFVar10 == (FScriptContainerElement)0xa) {
      pFVar14 = pFVar10 + 1;
    }
  } while( true );
}

// OpenGLDebugMessageCallbackAMD @ 145c0f160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
OpenGLDebugMessageCallbackAMD
          (uint param_1,uint param_2,uint param_3,int param_4,char *param_5,void *param_6)

{
  size_t sVar1;
  Type TVar2;
  undefined1 auStackY_1a8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TVar2 = Fatal;
  if (param_3 != 0x9146) {
    TVar2 = Warning;
  }
  if (TVar2 <= (byte)LogRHI._0_1_) {
    local_158._padding_ = 0;
    if (param_5 == (char *)0x0) {
      local_158.Ptr = (wchar_t *)0x0;
      local_158.StringLength = 0;
    }
    else {
      sVar1 = strlen(param_5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,param_5,(int)sVar1,Yes);
    }
    FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                   ,0x166,(FName *)&LogRHI.field_0x4,TVar2,L"[%s][%s][%u] %s");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return;
}

// OpenGLDebugMessageCallbackARB @ 145c0f2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
OpenGLDebugMessageCallbackARB
          (uint param_1,uint param_2,uint param_3,uint param_4,int param_5,char *param_6,
          void *param_7)

{
  size_t sVar1;
  Type TVar2;
  undefined1 auStackY_1b8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (!GDisableOpenGLDebugOutput) {
    TVar2 = Warning;
    if ((param_2 == 0x824c) && (TVar2 = Warning, param_4 == 0x9146)) {
      TVar2 = Error;
    }
    if (TVar2 <= (byte)LogRHI._0_1_) {
      local_168._padding_ = 0;
      if (param_6 == (char *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar1 = strlen(param_6);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,param_6,(int)sVar1,Yes)
        ;
      }
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                     ,0x10b,(FName *)&LogRHI.field_0x4,TVar2,L"GL_DBG: [%s][%s][%s][%u] %s");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  return;
}

// PackedTypeNameToTypeIndex @ 145c0f480

uchar __cdecl CrossCompiler::PackedTypeNameToTypeIndex(uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  switch(param_1) {
  case '\0':
  case 'h':
    goto switchD_145c0f4a7_caseD_0;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\CrossCompilerCommon.h"
                       ,0x78,L"invalid value: PackedTypeNameToTypeIndex(ArrayName = %d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
switchD_145c0f4a7_caseD_0:
    return '\0';
  case 'g':
    return '\x06';
  case 'i':
    return '\x03';
  case 'l':
    return '\x02';
  case 'm':
    return '\x01';
  case 's':
    return '\x05';
  case 'u':
    return '\x04';
  }
}

// PlatformBlitToViewport @ 145c0f5a0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __cdecl
PlatformBlitToViewport
          (IRHICommandContext *param_1,FPlatformOpenGLDevice *param_2,FOpenGLViewport *param_3,
          uint param_4,uint param_5,bool param_6,bool param_7)

{
  FPlatformOpenGLContext *pFVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar2;
  HDC pHVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  BOOL BVar7;
  uint uVar8;
  HDC pHVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  HGLRC__ *pHVar13;
  uint local_res18 [2];
  uint local_res20;
  FScopeContext local_88;
  HWND__ *local_70;
  HDC pHStack_68;
  HGLRC local_60;
  undefined8 uStack_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  local_res20 = param_4;
  local_res18[0] = RHIGetSyncInterval();
  pFVar1 = param_3->OpenGLContext;
  if (((pFVar1 == (FPlatformOpenGLContext *)0x0) || (pFVar1->DeviceContext == (HDC__ *)0x0)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Context && Context->DeviceContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x1b6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (FOpenGL3::bAndroidGLESCompatibilityMode != false) {
    (*glDisable)(0x8db9);
    uVar12 = 0;
    if (param_7) {
      uVar12 = local_res18[0];
    }
    if ((wglSwapIntervalEXT_ProcAddress != (_func___cdecl_int_int *)0x0) &&
       (pFVar1->SyncInterval != uVar12)) {
      (*wglSwapIntervalEXT_ProcAddress)(uVar12);
      pFVar1->SyncInterval = uVar12;
    }
    SwapBuffers((HDC)pFVar1->DeviceContext);
    return true;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_2->ContextUsageGuard;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  local_70 = pFVar1->WindowHandle;
  pHVar3 = (HDC)pFVar1->DeviceContext;
  uVar12 = pFVar1->ViewportFramebuffer;
  uStack_4c = pFVar1->VertexArrayObject;
  uStack_48 = pFVar1->BackBufferResource;
  uStack_44 = pFVar1->BackBufferTarget;
  pHVar13 = pFVar1->OpenGLContext;
  uStack_58._0_1_ = pFVar1->bReleaseWindowOnDestroy;
  uStack_58._1_3_ = *(undefined3 *)&pFVar1->field_0x19;
  uStack_58._4_4_ = pFVar1->SyncInterval;
  if ((param_2->ViewportContexts).ArrayNum == 1) {
    pHVar13 = (param_2->RenderingContext).OpenGLContext;
    uVar12 = (param_2->RenderingContext).ViewportFramebuffer;
  }
  pHStack_68 = pHVar3;
  local_60 = (HGLRC)pHVar13;
  local_50 = uVar12;
  pHVar9 = wglGetCurrentDC();
  local_88.PrevDC = (HDC__ *)pHVar9;
  local_88.PrevContext = (HGLRC__ *)wglGetCurrentContext();
  local_88.bSameDC = pHVar9 == pHVar3;
  if ((local_88.PrevContext == pHVar13) && (pHVar9 == pHVar3)) {
    local_88.bSameDCAndContext = true;
  }
  else {
    local_88.bSameDCAndContext = false;
    BVar7 = wglMakeCurrent(pHVar3,(HGLRC)pHVar13);
    if ((BVar7 == 0) &&
       ((BVar7 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar7 == 0 &&
        (bVar4 = FDebug::CheckVerifyFailedImpl2
                           ("Result",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                            ,0x18,L""), bVar4)))) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  lVar10 = (**(code **)(param_3->_padding_ + 0x38))(param_3);
  if (lVar10 != 0) {
    param_2->TargetDirty = false;
    (*glDisable)(0x8db9);
    plVar11 = (longlong *)(**(code **)(param_3->_padding_ + 0x38))(param_3);
    cVar6 = (**(code **)(*plVar11 + 0x30))(plVar11,param_1,local_res18);
    (*glEnable)(0x8db9);
    bVar4 = false;
    if (cVar6 == '\0') goto LAB_145c0f8f3;
    param_2->TargetDirty = true;
  }
  if (((param_2->ViewportContexts).ArrayNum == 1) && (param_2->TargetDirty != false)) {
    (*glBindFramebuffer)(0x8d40,uVar12);
    (*glFramebufferTexture2D)(0x8d40,0x8ce0,pFVar1->BackBufferTarget,pFVar1->BackBufferResource,0);
    uVar8 = (*glCheckFramebufferStatus)(0x8d40);
    if (uVar8 != 0x8cd5) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_static_void___cdecl_FOpenGLBase::CheckFrameBuffer(void)'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogOpenGL);
    }
    param_2->TargetDirty = false;
  }
  (*glDisable)(0x8db9);
  (*glBindFramebuffer)(0x8ca9,0);
  (*glDrawBuffer)(0x405);
  (*glBindFramebuffer)(0x8ca8,uVar12);
  (*glReadBuffer)(0x8ce0);
  (*glBlitFramebuffer)(0,0,local_res20,param_5,0,param_5,local_res20,0,0x4000,0x2600);
  (*glEnable)(0x8db9);
  if (param_6) {
    uVar12 = 0;
    if (param_7) {
      uVar12 = local_res18[0];
    }
    if ((wglSwapIntervalEXT_ProcAddress != (_func___cdecl_int_int *)0x0) &&
       (pFVar1->SyncInterval != uVar12)) {
      (*wglSwapIntervalEXT_ProcAddress)(uVar12);
      pFVar1->SyncInterval = uVar12;
    }
    SwapBuffers((HDC)pFVar1->DeviceContext);
  }
  bVar4 = true;
LAB_145c0f8f3:
  FScopeContext::~FScopeContext(&local_88);
  LeaveCriticalSection(lpCriticalSection);
  return bVar4;
}

// PlatformCanEnableGPUCapture @ 145c0f930

bool __cdecl PlatformCanEnableGPUCapture(void)

{
  return GRunningUnderRenderDoc;
}

// PlatformCreateBuiltinBackBuffer @ 145c0f940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

FOpenGLTexture * __cdecl
PlatformCreateBuiltinBackBuffer(FOpenGLDynamicRHI *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  ERHIAccess EVar4;
  FRHITextureCreateDesc *pFVar5;
  FOpenGLTexture *this;
  FOpenGLTexture *pFVar6;
  undefined1 auStack_1f8 [32];
  FRHITextureDesc local_1b8;
  wchar_t *local_168;
  ERHIAccess local_160;
  ERHITextureInitAction local_15c;
  FResourceBulkDataInterface *local_158;
  FName local_150;
  FName local_148;
  undefined1 local_138 [80];
  wchar_t *local_e8;
  ERHIAccess local_e0;
  ERHITextureInitAction local_dc;
  FResourceBulkDataInterface *local_d8;
  FName local_d0;
  FName local_c8;
  FOpenGLTextureDesc local_c0;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar6 = (FOpenGLTexture *)0x0;
  if (FOpenGL3::bAndroidGLESCompatibilityMode) {
    pFVar5 = FRHITextureCreateDesc::Create2D
                       (&local_a8,L"PlatformCreateBuiltinBackBuffer",param_2,param_3,PF_B8G8R8A8);
    uVar2 = FClearValueBinding::Transparent.Value._4_8_;
    pFVar5->_padding_ = FClearValueBinding::Transparent._0_8_;
    pFVar5->_padding_ = uVar2;
    *(float *)&pFVar5->_padding_ = FClearValueBinding::Transparent.Value.Color[3];
    pFVar5->_padding_ = 0x40003;
    if (pFVar5->InitialState == None) {
      EVar4 = RHIGetDefaultResourceState
                        (Presentable|ResolveTargetable|RenderTargetable,
                         pFVar5->BulkData != (FResourceBulkDataInterface *)0x0);
      pFVar5->InitialState = EVar4;
    }
    FRHITextureDesc::FRHITextureDesc(&local_1b8,(FRHITextureDesc *)pFVar5);
    local_168 = pFVar5->DebugName;
    local_160 = pFVar5->InitialState;
    local_15c = pFVar5->InitAction;
    local_158 = pFVar5->BulkData;
    local_150 = pFVar5->ClassName;
    local_148 = pFVar5->OwnerName;
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    this = operator_new(0x198);
    if (this != (FOpenGLTexture *)0x0) {
      FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)local_138,&local_1b8);
      local_e8 = local_168;
      local_e0 = local_160;
      local_dc = local_15c;
      local_d0 = local_150;
      local_d8 = local_158;
      local_c8 = local_148;
      FOpenGLTextureDesc::FOpenGLTextureDesc(&local_c0,&local_1b8);
      pFVar6 = FOpenGLTexture::FOpenGLTexture(this,(FOpenGLTextureCreateDesc *)local_138);
      if ((ForElementType<EPixelFormat>)local_138._64_8_ != (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_138._64_8_);
      }
    }
    bVar3 = IsInRenderingThread();
    if ((!bVar3) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FOpenGLTexture *)(*pcVar1)();
      return pFVar6;
    }
    FOpenGLTexture::Initialize(pFVar6,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    if (local_1b8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_1b8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  else {
    pFVar6 = (FOpenGLTexture *)0x0;
  }
  return pFVar6;
}

// PlatformCreateDummyGLWindow @ 145c0fb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl PlatformCreateDummyGLWindow(FPlatformOpenGLContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  ATOM AVar3;
  wchar_t *pwVar4;
  HWND pHVar5;
  HDC pHVar6;
  int local_res8 [2];
  int local_res10 [2];
  WNDCLASSW local_58;
  
  if (!bInitializedWindowClass) {
    local_58.lpfnWndProc = PlatformDummyGLWndproc;
    local_58.hIcon = (HICON)0x0;
    local_58.hCursor = (HCURSOR)0x0;
    local_58.hbrBackground = ___xmm_00000000000000000000000000000007;
    local_58.lpszMenuName = _UNK_150f44c28;
    bInitializedWindowClass = true;
    local_58.style = 0x20;
    local_58._4_4_ = 0;
    local_58.cbClsExtra = 0;
    local_58.cbWndExtra = 0;
    local_58.hInstance = (HINSTANCE)0x0;
    local_58.lpszClassName = L"DummyGLWindow";
    AVar3 = RegisterClassW(&local_58);
    if (AVar3 == 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ClassAtom",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0xa6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res10[0] = 0;
  local_res8[0] = 0;
  pwVar4 = FCommandLine::Get();
  FParse::Value(pwVar4,L"WinX=",local_res10);
  pwVar4 = FCommandLine::Get();
  FParse::Value(pwVar4,L"WinY=",local_res8);
  pHVar5 = CreateWindowExW(0x100,L"DummyGLWindow",(LPCWSTR)0x0,0x80000000,local_res10[0],
                           local_res8[0],1,1,(HWND)0x0,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
  param_1->WindowHandle = (HWND__ *)pHVar5;
  if (pHVar5 == (HWND)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("OutContext->WindowHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0xb6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->bReleaseWindowOnDestroy = true;
  pHVar6 = GetDC((HWND)param_1->WindowHandle);
  param_1->DeviceContext = (HDC__ *)pHVar6;
  if (pHVar6 == (HDC)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("OutContext->DeviceContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0xbb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  PlatformInitPixelFormatForDevice(param_1->DeviceContext,true);
  return;
}

// PlatformCreateOpenGLContext @ 145c0fd00

FPlatformOpenGLContext * __cdecl
PlatformCreateOpenGLContext(FPlatformOpenGLDevice *param_1,void *param_2)

{
  int *piVar1;
  HGLRC pHVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  BOOL BVar6;
  int iVar7;
  FPlatformOpenGLContext *pFVar8;
  HDC pHVar9;
  HDC pHVar10;
  FPlatformOpenGLContext *local_28;
  FScopeContext local_20;
  
  if (param_2 == (void *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("InWindowHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x14c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPlatformOpenGLContext *)(*pcVar4)();
      return pFVar8;
    }
  }
  param_1->TargetDirty = true;
  local_28 = operator_new(0x30);
  local_28->WindowHandle = param_2;
  local_28->bReleaseWindowOnDestroy = false;
  pHVar9 = GetDC((HWND)local_28->WindowHandle);
  local_28->DeviceContext = (HDC__ *)pHVar9;
  if (local_28->DeviceContext == (HDC__ *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Context->DeviceContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x154,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPlatformOpenGLContext *)(*pcVar4)();
      return pFVar8;
    }
  }
  PlatformInitPixelFormatForDevice(local_28->DeviceContext,false);
  PlatformCreateOpenGLContextCore(local_28,4,3,(param_1->RenderingContext).OpenGLContext);
  if (local_28->OpenGLContext == (HGLRC__ *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Context->OpenGLContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x15c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPlatformOpenGLContext *)(*pcVar4)();
      return pFVar8;
    }
  }
  pFVar8 = local_28;
  if (local_28 == (FPlatformOpenGLContext *)0x0) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Context",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x34,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPlatformOpenGLContext *)(*pcVar4)();
      return pFVar8;
    }
  }
  pHVar10 = wglGetCurrentDC();
  local_20.PrevDC = (HDC__ *)pHVar10;
  local_20.PrevContext = (HGLRC__ *)wglGetCurrentContext();
  pHVar9 = (HDC)pFVar8->DeviceContext;
  pHVar2 = (HGLRC)pFVar8->OpenGLContext;
  local_20.bSameDC = pHVar10 == pHVar9;
  if ((local_20.PrevContext == (HGLRC__ *)pHVar2) && (pHVar10 == pHVar9)) {
    local_20.bSameDCAndContext = true;
  }
  else {
    local_20.bSameDCAndContext = false;
    BVar6 = wglMakeCurrent(pHVar9,pHVar2);
    if (BVar6 == 0) {
      BVar6 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar6 == 0) {
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FPlatformOpenGLContext *)(*pcVar4)();
          return pFVar8;
        }
      }
    }
  }
  InitDefaultGLContextState();
  (*glGenFramebuffers)(1,&local_28->ViewportFramebuffer);
  FScopeContext::~FScopeContext(&local_20);
  pFVar3 = (param_1->ViewportContexts).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(param_1->ViewportContexts).ArrayMax * 8)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FPlatformOpenGLContext *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (param_1->ViewportContexts).ArrayNum;
  piVar1 = &(param_1->ViewportContexts).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->ViewportContexts).AllocatorInstance,piVar1);
  }
  (param_1->ViewportContexts).ArrayNum = iVar7 + 1;
  *(FPlatformOpenGLContext **)
   ((param_1->ViewportContexts).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_28;
  return local_28;
}

// PlatformCreateOpenGLContextCore @ 145c0ff90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
PlatformCreateOpenGLContextCore
          (FPlatformOpenGLContext *param_1,int param_2,int param_3,HGLRC__ *param_4)

{
  code *pcVar1;
  bool bVar2;
  HGLRC__ *pHVar3;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined8 local_3c;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (wglCreateContextAttribsARB == (_func___cdecl_HGLRC___ptr_HDC___ptr_HGLRC___ptr_int_ptr *)0x0)
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("wglCreateContextAttribsARB",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0xd8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FPlatformOpenGLContext *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("OutContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0xd9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->DeviceContext == (HDC__ *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("OutContext->DeviceContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0xda,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->SyncInterval = -1;
  param_1->ViewportFramebuffer = 0;
  bVar2 = IsOGLDebugOutputEnabled();
  local_44 = bVar2 | 2;
  local_58 = 0x2091;
  local_50 = 0x2092;
  local_48 = 0x2094;
  local_40 = 0x9126;
  local_3c = 1;
  local_54 = param_2;
  local_4c = param_3;
  pHVar3 = (*wglCreateContextAttribsARB)(param_1->DeviceContext,param_4,&local_58);
  param_1->OpenGLContext = pHVar3;
  return;
}

// PlatformCreateOpenGLDevice @ 145c100c0

FPlatformOpenGLDevice * __cdecl PlatformCreateOpenGLDevice(void)

{
  FPlatformOpenGLDevice *pFVar1;
  
  pFVar1 = operator_new(0x50);
  if (pFVar1 != (FPlatformOpenGLDevice *)0x0) {
    pFVar1 = FPlatformOpenGLDevice::FPlatformOpenGLDevice(pFVar1);
    return pFVar1;
  }
  return (FPlatformOpenGLDevice *)0x0;
}

// PlatformDestroyOpenGLContext @ 145c100f0

void __cdecl
PlatformDestroyOpenGLContext(FPlatformOpenGLDevice *param_1,FPlatformOpenGLContext *param_2)

{
  PlatformReleaseOpenGLContext(param_1,param_2);
  operator_delete(param_2,0x30);
  return;
}

// PlatformDestroyOpenGLDevice @ 145c10120

void __cdecl PlatformDestroyOpenGLDevice(FPlatformOpenGLDevice *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  
  if (param_1 != (FPlatformOpenGLDevice *)0x0) {
    if ((param_1->ViewportContexts).ArrayNum != 0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ViewportContexts.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x12a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar4 == 0) {
      BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar4 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    PlatformReleaseOpenGLContext(param_1,&param_1->RenderingContext);
    lpCriticalSection = (LPCRITICAL_SECTION)param_1->ContextUsageGuard;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection(lpCriticalSection);
      operator_delete(lpCriticalSection,0x28);
    }
    if (FPlatformOpenGLDevice::Singleton != param_1) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x131,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FPlatformOpenGLDevice::Singleton = (FPlatformOpenGLDevice *)0x0;
    pFVar1 = (param_1->ViewportContexts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    operator_delete(param_1,0x50);
  }
  return;
}

// PlatformDummyGLWndproc @ 145c10240

LRESULT __stdcall PlatformDummyGLWndproc(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145c10240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcW(hWnd,Msg,wParam,lParam);
  return LVar1;
}

// PlatformFlushIfNeeded @ 145c10250

void __cdecl PlatformFlushIfNeeded(void)

{
                    /* WARNING: Could not recover jumptable at 0x000145c10250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*glFinish)();
  return;
}

// PlatformGetAvailableResolutions @ 145c10260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
PlatformGetAvailableResolutions
          (TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  DWORD iModeNum;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  DEVMODEW local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  memset(&local_108,0,0xdc);
  iVar5 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_108);
  iModeNum = 1;
  do {
    if (iVar5 == 0) {
      return true;
    }
    if ((local_108.dmPelsWidth < 0x28f1) && (local_108.dmPelsHeight < 0x28f1)) {
      if (param_2) {
        iVar5 = param_1->ArrayNum;
        uVar7 = 0;
        if (0 < iVar5) {
          lVar8 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar7 < iVar5) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if (uVar6 == 0) {
              local_110 = (longlong)iVar5;
              local_118 = (longlong)(int)uVar7;
              bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
            }
            pFVar1 = (param_1->AllocatorInstance).Data;
            if ((*(uint *)(pFVar1 + lVar8) == local_108.dmPelsWidth) &&
               (*(uint *)(pFVar1 + lVar8 + 4) == local_108.dmPelsHeight)) goto LAB_145c1042a;
            iVar5 = param_1->ArrayNum;
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 0xc;
          } while ((int)uVar7 < iVar5);
        }
      }
      else if (0x28f0 < local_108.dmDisplayFrequency) goto LAB_145c1042a;
      uVar7 = param_1->ArrayNum;
      if (uVar7 == param_1->ArrayMax) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = uVar7 + 1;
      lVar8 = (longlong)(int)uVar7 * 0xc;
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar1 + lVar8) = 0;
      *(undefined4 *)(pFVar1 + lVar8 + 8) = 0;
      uVar6 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_118 = (longlong)(int)uVar7, local_110 = (longlong)param_1->ArrayNum,
         bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      *(DWORD *)(pFVar1 + lVar8) = local_108.dmPelsWidth;
      *(DWORD *)(pFVar1 + lVar8 + 4) = local_108.dmPelsHeight;
      *(DWORD *)(pFVar1 + lVar8 + 8) = local_108.dmDisplayFrequency;
    }
LAB_145c1042a:
    iVar5 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_108);
    iModeNum = iModeNum + 1;
  } while( true );
}

// PlatformGetSupportedResolution @ 145c10480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl PlatformGetSupportedResolution(uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  DWORD iModeNum;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  DEVMODEW local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  bVar2 = false;
  uVar6 = 0;
  uVar5 = 0;
  memset(&local_118,0,0xdc);
  iModeNum = 1;
  BVar3 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_118);
  if (BVar3 != 0) {
    do {
      if (bVar2) {
        iVar7 = -(local_118.dmPelsWidth - *param_1);
        if (iVar7 < 0) {
          iVar7 = local_118.dmPelsWidth - *param_1;
        }
        iVar4 = -(uVar6 - *param_1);
        if (iVar4 < 0) {
          iVar4 = uVar6 - *param_1;
        }
        if (iVar7 <= iVar4) {
          iVar7 = -(local_118.dmPelsHeight - *param_2);
          if (iVar7 < 0) {
            iVar7 = local_118.dmPelsHeight - *param_2;
          }
          iVar4 = -(uVar5 - *param_2);
          if (iVar4 < 0) {
            iVar4 = uVar5 - *param_2;
          }
          if (iVar7 <= iVar4) goto LAB_145c10536;
        }
      }
      else {
LAB_145c10536:
        bVar2 = true;
        uVar6 = local_118.dmPelsWidth;
        uVar5 = local_118.dmPelsHeight;
      }
      BVar3 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_118);
      iModeNum = iModeNum + 1;
    } while (BVar3 != 0);
    if (bVar2) goto LAB_145c10580;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("InitializedMode",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                     ,0x27f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_145c10580:
  *param_1 = uVar6;
  *param_2 = uVar5;
  return;
}

// PlatformGetWindow @ 145c105c0

void * __cdecl PlatformGetWindow(FPlatformOpenGLContext *param_1,void **param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((param_1 == (FPlatformOpenGLContext *)0x0) || (param_1->WindowHandle == (HWND__ *)0x0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Context && Context->WindowHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x34b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  return param_1;
}

// PlatformGlGetError @ 145c10610

int __cdecl PlatformGlGetError(void)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145c10610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*glGetError)();
  return uVar1;
}

// PlatformInitOpenGL @ 145c10620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl PlatformInitOpenGL(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  BOOL BVar4;
  HGLRC__ *pHVar5;
  HMODULE hLibModule;
  FPlatformOpenGLContext local_38;
  
  if (bInitialized) {
    return bOpenGLSupported;
  }
  PlatformCreateDummyGLWindow(&local_38);
  pHVar5 = (HGLRC__ *)wglCreateContext((HDC)local_38.DeviceContext);
  local_38.OpenGLContext = pHVar5;
  if ((pHVar5 == (HGLRC__ *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("DummyContext.OpenGLContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x2e3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  BVar4 = wglMakeCurrent((HDC)local_38.DeviceContext,(HGLRC)pHVar5);
  if (((BVar4 == 0) && (BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar4 == 0)) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x18,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  wglCreateContextAttribsARB =
       (_func___cdecl_HGLRC___ptr_HDC___ptr_HGLRC___ptr_int_ptr *)
       wglGetProcAddress("wglCreateContextAttribsARB");
  if (wglCreateContextAttribsARB != (_func___cdecl_HGLRC___ptr_HDC___ptr_HGLRC___ptr_int_ptr *)0x0)
  {
    BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (((BVar4 == 0) && (BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar4 == 0)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    wglDeleteContext((HGLRC)pHVar5);
    PlatformCreateOpenGLContextCore(&local_38,4,3,(HGLRC__ *)0x0);
    pHVar5 = local_38.OpenGLContext;
    if (local_38.OpenGLContext == (HGLRC__ *)0x0) {
      if (1 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    else {
      bOpenGLSupported = true;
      ContextMakeCurrent(local_38.DeviceContext,local_38.OpenGLContext);
    }
  }
  if (bOpenGLSupported != false) {
    hLibModule = FWindowsPlatformProcess::GetDllHandle(L"opengl32.dll");
    if (hLibModule == (HMODULE)0x0) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    glBindTexture = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glBindTexture");
    glBlendFunc = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glBlendFunc");
    glColorMask = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glColorMask");
    glCopyTexImage1D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexImage1D");
    glCopyTexImage2D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexImage2D");
    glCopyTexSubImage1D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexSubImage1D");
    glCopyTexSubImage2D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexSubImage2D");
    glCullFace = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCullFace");
    glDeleteTextures = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDeleteTextures");
    glDepthFunc = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDepthFunc");
    glDepthMask = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDepthMask");
    glDepthRange = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDepthRange");
    glDisable = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDisable");
    glDrawArrays = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDrawArrays");
    glDrawBuffer = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDrawBuffer");
    glDrawElements = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDrawElements");
    glEnable = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glEnable");
    glFinish = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glFinish");
    glFlush = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glFlush");
    glFrontFace = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glFrontFace");
    glGenTextures = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGenTextures");
    glGetBooleanv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetBooleanv");
    glGetDoublev = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetDoublev");
    glGetError = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetError");
    glGetFloatv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetFloatv");
    glGetIntegerv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetIntegerv");
    glGetPointerv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetPointerv");
    glGetString = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetString");
    glGetTexImage = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexImage");
    glGetTexLevelParameterfv =
         FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexLevelParameterfv");
    glGetTexLevelParameteriv =
         FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexLevelParameteriv");
    glGetTexParameterfv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexParameterfv");
    glGetTexParameteriv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexParameteriv");
    glHint = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glHint");
    glIsEnabled = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glIsEnabled");
    glIsTexture = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glIsTexture");
    glLineWidth = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glLineWidth");
    glLogicOp = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glLogicOp");
    glPixelStoref = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPixelStoref");
    glPixelStorei = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPixelStorei");
    glPointSize = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPointSize");
    glPolygonMode = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPolygonMode");
    glPolygonOffset = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPolygonOffset");
    glReadBuffer = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glReadBuffer");
    glReadPixels = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glReadPixels");
    glScissor = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glScissor");
    glClearDepth = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClearDepth");
    glClearColor = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClearColor");
    glClearStencil = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClearStencil");
    glClear = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClear");
    glStencilFunc = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glStencilFunc");
    glStencilMask = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glStencilMask");
    glStencilOp = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glStencilOp");
    glTexImage1D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexImage1D");
    glTexImage2D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexImage2D");
    glTexParameterf = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameterf");
    glTexParameterfv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameterfv");
    glTexParameteri = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameteri");
    glTexParameteriv = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameteriv");
    glTexSubImage1D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexSubImage1D");
    glTexSubImage2D = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexSubImage2D");
    glViewport = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glViewport");
    FWindowsPlatformProcess::FreeDllHandle(hLibModule);
    glBindSampler = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBindSampler");
    glDeleteSamplers = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDeleteSamplers");
    glGenSamplers = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glGenSamplers");
    glSamplerParameteri =
         (_func___cdecl_void_uint_uint_int *)wglGetProcAddress("glSamplerParameteri");
    glClearBufferfv = (_func___cdecl_void_uint_int_float_ptr *)wglGetProcAddress("glClearBufferfv");
    glClearBufferiv = (_func___cdecl_void_uint_int_int_ptr *)wglGetProcAddress("glClearBufferiv");
    glClearBufferuiv = (_func___cdecl_void_uint_int_uint_ptr *)wglGetProcAddress("glClearBufferuiv")
    ;
    glClearBufferfi = (_func___cdecl_void_uint_int_float_int *)wglGetProcAddress("glClearBufferfi");
    glColorMaski = (_func___cdecl_void_uint_uchar_uchar_uchar_uchar *)
                   wglGetProcAddress("glColorMaski");
    glDisablei = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glDisablei");
    glEnablei = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glEnablei");
    glGetBooleani_v = (_func___cdecl_void_uint_uint_uchar_ptr *)wglGetProcAddress("glGetBooleani_v")
    ;
    glGetIntegeri_v = (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetIntegeri_v");
    glIsEnabledi = (_func___cdecl_uchar_uint_uint *)wglGetProcAddress("glIsEnabledi");
    glBlendColor = (_func___cdecl_void_float_float_float_float *)wglGetProcAddress("glBlendColor");
    glBlendEquation = (_func___cdecl_void_uint *)wglGetProcAddress("glBlendEquation");
    glDrawRangeElements =
         (_func___cdecl_void_uint_uint_uint_int_uint_void_ptr *)
         wglGetProcAddress("glDrawRangeElements");
    glTexImage3D = (_func___cdecl_void_uint_int_int_int_int_int_int_uint_uint_void_ptr *)
                   wglGetProcAddress("glTexImage3D");
    glTexSubImage3D =
         (_func___cdecl_void_uint_int_int_int_int_int_int_int_uint_uint_void_ptr *)
         wglGetProcAddress("glTexSubImage3D");
    glCopyTexSubImage3D =
         (_func___cdecl_void_uint_int_int_int_int_int_int_int_int *)
         wglGetProcAddress("glCopyTexSubImage3D");
    glActiveTexture = (_func___cdecl_void_uint *)wglGetProcAddress("glActiveTexture");
    glSampleCoverage = (_func___cdecl_void_float_uchar *)wglGetProcAddress("glSampleCoverage");
    glCompressedTexImage3D =
         (_func___cdecl_void_uint_int_uint_int_int_int_int_int_void_ptr *)
         wglGetProcAddress("glCompressedTexImage3D");
    glCompressedTexImage2D =
         (_func___cdecl_void_uint_int_uint_int_int_int_int_void_ptr *)
         wglGetProcAddress("glCompressedTexImage2D");
    glCompressedTexImage1D =
         (_func___cdecl_void_uint_int_uint_int_int_int_void_ptr *)
         wglGetProcAddress("glCompressedTexImage1D");
    glCompressedTexSubImage3D =
         (_func___cdecl_void_uint_int_int_int_int_int_int_int_uint_int_void_ptr *)
         wglGetProcAddress("glCompressedTexSubImage3D");
    glCompressedTexSubImage2D =
         (_func___cdecl_void_uint_int_int_int_int_int_uint_int_void_ptr *)
         wglGetProcAddress("glCompressedTexSubImage2D");
    glCompressedTexSubImage1D =
         (_func___cdecl_void_uint_int_int_int_uint_int_void_ptr *)
         wglGetProcAddress("glCompressedTexSubImage1D");
    glGetCompressedTexImage =
         (_func___cdecl_void_uint_int_void_ptr *)wglGetProcAddress("glGetCompressedTexImage");
    glBlendFuncSeparate =
         (_func___cdecl_void_uint_uint_uint_uint *)wglGetProcAddress("glBlendFuncSeparate");
    glMultiDrawArrays =
         (_func___cdecl_void_uint_int_ptr_int_ptr_int *)wglGetProcAddress("glMultiDrawArrays");
    glMultiDrawElements =
         (_func___cdecl_void_uint_int_ptr_uint_void_ptr_ptr_int *)
         wglGetProcAddress("glMultiDrawElements");
    glPointParameterf = (_func___cdecl_void_uint_float *)wglGetProcAddress("glPointParameterf");
    glPointParameterfv =
         (_func___cdecl_void_uint_float_ptr *)wglGetProcAddress("glPointParameterfv");
    glPointParameteri = (_func___cdecl_void_uint_int *)wglGetProcAddress("glPointParameteri");
    glPointParameteriv = (_func___cdecl_void_uint_int_ptr *)wglGetProcAddress("glPointParameteriv");
    glGenQueries = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glGenQueries");
    glDeleteQueries = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDeleteQueries");
    glIsQuery = (_func___cdecl_uchar_uint *)wglGetProcAddress("glIsQuery");
    glBeginQuery = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBeginQuery");
    glEndQuery = (_func___cdecl_void_uint *)wglGetProcAddress("glEndQuery");
    glGetQueryiv = (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetQueryiv");
    glGetQueryObjectiv =
         (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetQueryObjectiv");
    glGetQueryObjectuiv =
         (_func___cdecl_void_uint_uint_uint_ptr *)wglGetProcAddress("glGetQueryObjectuiv");
    glBindBuffer = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBindBuffer");
    glBindBufferBase = (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glBindBufferBase");
    glDeleteBuffers = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDeleteBuffers");
    glGenBuffers = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glGenBuffers");
    glIsBuffer = (_func___cdecl_uchar_uint *)wglGetProcAddress("glIsBuffer");
    glBufferData = (_func___cdecl_void_uint_long64_void_ptr_uint *)wglGetProcAddress("glBufferData")
    ;
    glBufferSubData =
         (_func___cdecl_void_uint_long64_long64_void_ptr *)wglGetProcAddress("glBufferSubData");
    glGetBufferSubData =
         (_func___cdecl_void_uint_long64_long64_void_ptr *)wglGetProcAddress("glGetBufferSubData");
    glMapBuffer = (_func___cdecl_void_ptr_uint_uint *)wglGetProcAddress("glMapBuffer");
    glUnmapBuffer = (_func___cdecl_uchar_uint *)wglGetProcAddress("glUnmapBuffer");
    glGetBufferParameteriv =
         (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetBufferParameteriv");
    glGetBufferPointerv =
         (_func___cdecl_void_uint_uint_void_ptr_ptr *)wglGetProcAddress("glGetBufferPointerv");
    glBlendEquationSeparate =
         (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBlendEquationSeparate");
    glDrawBuffers = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDrawBuffers");
    glStencilOpSeparate =
         (_func___cdecl_void_uint_uint_uint_uint *)wglGetProcAddress("glStencilOpSeparate");
    glStencilFuncSeparate =
         (_func___cdecl_void_uint_uint_int_uint *)wglGetProcAddress("glStencilFuncSeparate");
    glStencilMaskSeparate =
         (_func___cdecl_void_uint_uint *)wglGetProcAddress("glStencilMaskSeparate");
    glAttachShader = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glAttachShader");
    glBindAttribLocation =
         (_func___cdecl_void_uint_uint_char_ptr *)wglGetProcAddress("glBindAttribLocation");
    glBindFragDataLocation =
         (_func___cdecl_void_uint_uint_char_ptr *)wglGetProcAddress("glBindFragDataLocation");
    glCompileShader = (_func___cdecl_void_uint *)wglGetProcAddress("glCompileShader");
    glCreateProgram = (_func___cdecl_uint *)wglGetProcAddress("glCreateProgram");
    glCreateShader = (_func___cdecl_uint_uint *)wglGetProcAddress("glCreateShader");
    glDeleteProgram = (_func___cdecl_void_uint *)wglGetProcAddress("glDeleteProgram");
    glDeleteShader = (_func___cdecl_void_uint *)wglGetProcAddress("glDeleteShader");
    glDetachShader = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glDetachShader");
    glDisableVertexAttribArray =
         (_func___cdecl_void_uint *)wglGetProcAddress("glDisableVertexAttribArray");
    glEnableVertexAttribArray =
         (_func___cdecl_void_uint *)wglGetProcAddress("glEnableVertexAttribArray");
    glGetActiveAttrib =
         (_func___cdecl_void_uint_uint_int_int_ptr_int_ptr_uint_ptr_char_ptr *)
         wglGetProcAddress("glGetActiveAttrib");
    glGetActiveUniform =
         (_func___cdecl_void_uint_uint_int_int_ptr_int_ptr_uint_ptr_char_ptr *)
         wglGetProcAddress("glGetActiveUniform");
    glGetAttachedShaders =
         (_func___cdecl_void_uint_int_int_ptr_uint_ptr *)wglGetProcAddress("glGetAttachedShaders");
    glGetAttribLocation =
         (_func___cdecl_int_uint_char_ptr *)wglGetProcAddress("glGetAttribLocation");
    glGetProgramiv = (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetProgramiv");
    glGetProgramInfoLog =
         (_func___cdecl_void_uint_int_int_ptr_char_ptr *)wglGetProcAddress("glGetProgramInfoLog");
    glGetShaderiv = (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetShaderiv");
    glGetShaderInfoLog =
         (_func___cdecl_void_uint_int_int_ptr_char_ptr *)wglGetProcAddress("glGetShaderInfoLog");
    glGetShaderSource =
         (_func___cdecl_void_uint_int_int_ptr_char_ptr *)wglGetProcAddress("glGetShaderSource");
    glGetUniformLocation =
         (_func___cdecl_int_uint_char_ptr *)wglGetProcAddress("glGetUniformLocation");
    glGetUniformBlockIndex =
         (_func___cdecl_uint_uint_char_ptr *)wglGetProcAddress("glGetUniformBlockIndex");
    glGetUniformfv = (_func___cdecl_void_uint_int_float_ptr *)wglGetProcAddress("glGetUniformfv");
    glGetUniformiv = (_func___cdecl_void_uint_int_int_ptr *)wglGetProcAddress("glGetUniformiv");
    glGetVertexAttribdv =
         (_func___cdecl_void_uint_uint_double_ptr *)wglGetProcAddress("glGetVertexAttribdv");
    glGetVertexAttribfv =
         (_func___cdecl_void_uint_uint_float_ptr *)wglGetProcAddress("glGetVertexAttribfv");
    glGetVertexAttribiv =
         (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetVertexAttribiv");
    glGetVertexAttribPointerv =
         (_func___cdecl_void_uint_uint_void_ptr_ptr *)wglGetProcAddress("glGetVertexAttribPointerv")
    ;
    glIsProgram = (_func___cdecl_uchar_uint *)wglGetProcAddress("glIsProgram");
    glIsShader = (_func___cdecl_uchar_uint *)wglGetProcAddress("glIsShader");
    glLinkProgram = (_func___cdecl_void_uint *)wglGetProcAddress("glLinkProgram");
    glShaderSource =
         (_func___cdecl_void_uint_int_char_ptr_ptr_int_ptr *)wglGetProcAddress("glShaderSource");
    glUseProgram = (_func___cdecl_void_uint *)wglGetProcAddress("glUseProgram");
    glUniform1f = (_func___cdecl_void_int_float *)wglGetProcAddress("glUniform1f");
    glUniform2f = (_func___cdecl_void_int_float_float *)wglGetProcAddress("glUniform2f");
    glUniform3f = (_func___cdecl_void_int_float_float_float *)wglGetProcAddress("glUniform3f");
    glUniform4f = (_func___cdecl_void_int_float_float_float_float *)wglGetProcAddress("glUniform4f")
    ;
    glUniform1i = (_func___cdecl_void_int_int *)wglGetProcAddress("glUniform1i");
    glUniform2i = (_func___cdecl_void_int_int_int *)wglGetProcAddress("glUniform2i");
    glUniform3i = (_func___cdecl_void_int_int_int_int *)wglGetProcAddress("glUniform3i");
    glUniform4i = (_func___cdecl_void_int_int_int_int_int *)wglGetProcAddress("glUniform4i");
    glUniform1fv = (_func___cdecl_void_int_int_float_ptr *)wglGetProcAddress("glUniform1fv");
    glUniform2fv = (_func___cdecl_void_int_int_float_ptr *)wglGetProcAddress("glUniform2fv");
    glUniform3fv = (_func___cdecl_void_int_int_float_ptr *)wglGetProcAddress("glUniform3fv");
    glUniform4fv = (_func___cdecl_void_int_int_float_ptr *)wglGetProcAddress("glUniform4fv");
    glUniform1iv = (_func___cdecl_void_int_int_int_ptr *)wglGetProcAddress("glUniform1iv");
    glUniform2iv = (_func___cdecl_void_int_int_int_ptr *)wglGetProcAddress("glUniform2iv");
    glUniform3iv = (_func___cdecl_void_int_int_int_ptr *)wglGetProcAddress("glUniform3iv");
    glUniform4iv = (_func___cdecl_void_int_int_int_ptr *)wglGetProcAddress("glUniform4iv");
    glUniform1uiv = (_func___cdecl_void_int_int_uint_ptr *)wglGetProcAddress("glUniform1uiv");
    glUniform2uiv = (_func___cdecl_void_int_int_uint_ptr *)wglGetProcAddress("glUniform2uiv");
    glUniform3uiv = (_func___cdecl_void_int_int_uint_ptr *)wglGetProcAddress("glUniform3uiv");
    glUniform4uiv = (_func___cdecl_void_int_int_uint_ptr *)wglGetProcAddress("glUniform4uiv");
    glUniformBlockBinding =
         (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glUniformBlockBinding");
    glUniformMatrix2fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix2fv");
    glUniformMatrix3fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix3fv");
    glUniformMatrix4fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix4fv");
    glValidateProgram = (_func___cdecl_void_uint *)wglGetProcAddress("glValidateProgram");
    glVertexAttrib1d = (_func___cdecl_void_uint_double *)wglGetProcAddress("glVertexAttrib1d");
    glVertexAttrib1dv = (_func___cdecl_void_uint_double_ptr *)wglGetProcAddress("glVertexAttrib1dv")
    ;
    glVertexAttrib1f = (_func___cdecl_void_uint_float *)wglGetProcAddress("glVertexAttrib1f");
    glVertexAttrib1fv = (_func___cdecl_void_uint_float_ptr *)wglGetProcAddress("glVertexAttrib1fv");
    glVertexAttrib1s = (_func___cdecl_void_uint_short *)wglGetProcAddress("glVertexAttrib1s");
    glVertexAttrib1sv = (_func___cdecl_void_uint_short_ptr *)wglGetProcAddress("glVertexAttrib1sv");
    glVertexAttrib2d =
         (_func___cdecl_void_uint_double_double *)wglGetProcAddress("glVertexAttrib2d");
    glVertexAttrib2dv = (_func___cdecl_void_uint_double_ptr *)wglGetProcAddress("glVertexAttrib2dv")
    ;
    glVertexAttrib2f = (_func___cdecl_void_uint_float_float *)wglGetProcAddress("glVertexAttrib2f");
    glVertexAttrib2fv = (_func___cdecl_void_uint_float_ptr *)wglGetProcAddress("glVertexAttrib2fv");
    glVertexAttrib2s = (_func___cdecl_void_uint_short_short *)wglGetProcAddress("glVertexAttrib2s");
    glVertexAttrib2sv = (_func___cdecl_void_uint_short_ptr *)wglGetProcAddress("glVertexAttrib2sv");
    glVertexAttrib3d =
         (_func___cdecl_void_uint_double_double_double *)wglGetProcAddress("glVertexAttrib3d");
    glVertexAttrib3dv = (_func___cdecl_void_uint_double_ptr *)wglGetProcAddress("glVertexAttrib3dv")
    ;
    glVertexAttrib3f =
         (_func___cdecl_void_uint_float_float_float *)wglGetProcAddress("glVertexAttrib3f");
    glVertexAttrib3fv = (_func___cdecl_void_uint_float_ptr *)wglGetProcAddress("glVertexAttrib3fv");
    glVertexAttrib3s =
         (_func___cdecl_void_uint_short_short_short *)wglGetProcAddress("glVertexAttrib3s");
    glVertexAttrib3sv = (_func___cdecl_void_uint_short_ptr *)wglGetProcAddress("glVertexAttrib3sv");
    glVertexAttrib4Nbv =
         (_func___cdecl_void_uint_schar_ptr *)wglGetProcAddress("glVertexAttrib4Nbv");
    glVertexAttrib4Niv = (_func___cdecl_void_uint_int_ptr *)wglGetProcAddress("glVertexAttrib4Niv");
    glVertexAttrib4Nsv =
         (_func___cdecl_void_uint_short_ptr *)wglGetProcAddress("glVertexAttrib4Nsv");
    glVertexAttrib4Nub =
         (_func___cdecl_void_uint_uchar_uchar_uchar_uchar *)wglGetProcAddress("glVertexAttrib4Nub");
    glVertexAttrib4Nubv =
         (_func___cdecl_void_uint_uchar_ptr *)wglGetProcAddress("glVertexAttrib4Nubv");
    glVertexAttrib4Nuiv =
         (_func___cdecl_void_uint_uint_ptr *)wglGetProcAddress("glVertexAttrib4Nuiv");
    glVertexAttrib4Nusv =
         (_func___cdecl_void_uint_ushort_ptr *)wglGetProcAddress("glVertexAttrib4Nusv");
    glVertexAttrib4bv = (_func___cdecl_void_uint_schar_ptr *)wglGetProcAddress("glVertexAttrib4bv");
    glVertexAttrib4d =
         (_func___cdecl_void_uint_double_double_double_double *)
         wglGetProcAddress("glVertexAttrib4d");
    glVertexAttrib4dv = (_func___cdecl_void_uint_double_ptr *)wglGetProcAddress("glVertexAttrib4dv")
    ;
    glVertexAttrib4f =
         (_func___cdecl_void_uint_float_float_float_float *)wglGetProcAddress("glVertexAttrib4f");
    glVertexAttrib4fv = (_func___cdecl_void_uint_float_ptr *)wglGetProcAddress("glVertexAttrib4fv");
    glVertexAttrib4iv = (_func___cdecl_void_uint_int_ptr *)wglGetProcAddress("glVertexAttrib4iv");
    glVertexAttrib4s =
         (_func___cdecl_void_uint_short_short_short_short *)wglGetProcAddress("glVertexAttrib4s");
    glVertexAttrib4sv = (_func___cdecl_void_uint_short_ptr *)wglGetProcAddress("glVertexAttrib4sv");
    glVertexAttrib4ubv =
         (_func___cdecl_void_uint_uchar_ptr *)wglGetProcAddress("glVertexAttrib4ubv");
    glVertexAttrib4uiv = (_func___cdecl_void_uint_uint_ptr *)wglGetProcAddress("glVertexAttrib4uiv")
    ;
    glVertexAttrib4usv =
         (_func___cdecl_void_uint_ushort_ptr *)wglGetProcAddress("glVertexAttrib4usv");
    glVertexAttribI4iv = (_func___cdecl_void_uint_int_ptr *)wglGetProcAddress("glVertexAttribI4iv");
    glVertexAttribI4uiv =
         (_func___cdecl_void_uint_uint_ptr *)wglGetProcAddress("glVertexAttribI4uiv");
    glVertexAttribI4sv =
         (_func___cdecl_void_uint_short_ptr *)wglGetProcAddress("glVertexAttribI4sv");
    glVertexAttribI4usv =
         (_func___cdecl_void_uint_ushort_ptr *)wglGetProcAddress("glVertexAttribI4usv");
    glVertexAttribI4bv =
         (_func___cdecl_void_uint_schar_ptr *)wglGetProcAddress("glVertexAttribI4bv");
    glVertexAttribI4ubv =
         (_func___cdecl_void_uint_uchar_ptr *)wglGetProcAddress("glVertexAttribI4ubv");
    glVertexAttribPointer =
         (_func___cdecl_void_uint_int_uint_uchar_int_void_ptr *)
         wglGetProcAddress("glVertexAttribPointer");
    glVertexAttribIPointer =
         (_func___cdecl_void_uint_int_uint_int_void_ptr *)
         wglGetProcAddress("glVertexAttribIPointer");
    glUniformMatrix2x3fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix2x3fv");
    glUniformMatrix3x2fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix3x2fv");
    glUniformMatrix2x4fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix2x4fv");
    glUniformMatrix4x2fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix4x2fv");
    glUniformMatrix3x4fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix3x4fv");
    glUniformMatrix4x3fv =
         (_func___cdecl_void_int_int_uchar_float_ptr *)wglGetProcAddress("glUniformMatrix4x3fv");
    glIsRenderbuffer = (_func___cdecl_uchar_uint *)wglGetProcAddress("glIsRenderbuffer");
    glBindRenderbuffer = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBindRenderbuffer");
    glDeleteRenderbuffers =
         (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDeleteRenderbuffers");
    glGenRenderbuffers = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glGenRenderbuffers");
    glRenderbufferStorage =
         (_func___cdecl_void_uint_uint_int_int *)wglGetProcAddress("glRenderbufferStorage");
    glGetRenderbufferParameteriv =
         (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetRenderbufferParameteriv");
    glIsFramebuffer = (_func___cdecl_uchar_uint *)wglGetProcAddress("glIsFramebuffer");
    glBindFramebuffer = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBindFramebuffer");
    glDeleteFramebuffers =
         (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDeleteFramebuffers");
    glGenFramebuffers = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glGenFramebuffers");
    glCheckFramebufferStatus =
         (_func___cdecl_uint_uint *)wglGetProcAddress("glCheckFramebufferStatus");
    glFramebufferTexture1D =
         (_func___cdecl_void_uint_uint_uint_uint_int *)wglGetProcAddress("glFramebufferTexture1D");
    glFramebufferTexture2D =
         (_func___cdecl_void_uint_uint_uint_uint_int *)wglGetProcAddress("glFramebufferTexture2D");
    glFramebufferTexture3D =
         (_func___cdecl_void_uint_uint_uint_uint_int_int *)
         wglGetProcAddress("glFramebufferTexture3D");
    glFramebufferTexture =
         (_func___cdecl_void_uint_uint_uint_int *)wglGetProcAddress("glFramebufferTexture");
    glFramebufferRenderbuffer =
         (_func___cdecl_void_uint_uint_uint_uint *)wglGetProcAddress("glFramebufferRenderbuffer");
    glGetFramebufferAttachmentParameteriv =
         (_func___cdecl_void_uint_uint_uint_int_ptr *)
         wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
    glGenerateMipmap = (_func___cdecl_void_uint *)wglGetProcAddress("glGenerateMipmap");
    glBlitFramebuffer =
         (_func___cdecl_void_int_int_int_int_int_int_int_int_uint_uint *)
         wglGetProcAddress("glBlitFramebuffer");
    glRenderbufferStorageMultisample =
         (_func___cdecl_void_uint_int_uint_int_int *)
         wglGetProcAddress("glRenderbufferStorageMultisample");
    glFramebufferTextureLayer =
         (_func___cdecl_void_uint_uint_uint_int_int *)wglGetProcAddress("glFramebufferTextureLayer")
    ;
    glMapBufferRange =
         (_func___cdecl_void_ptr_uint_long64_long64_uint *)wglGetProcAddress("glMapBufferRange");
    glFlushMappedBufferRange =
         (_func___cdecl_void_uint_long64_long64 *)wglGetProcAddress("glFlushMappedBufferRange");
    glVertexAttribDivisor =
         (_func___cdecl_void_uint_uint *)wglGetProcAddress("glVertexAttribDivisor");
    glDrawArraysInstanced =
         (_func___cdecl_void_uint_int_int_int *)wglGetProcAddress("glDrawArraysInstanced");
    glDrawElementsInstanced =
         (_func___cdecl_void_uint_int_uint_void_ptr_int *)
         wglGetProcAddress("glDrawElementsInstanced");
    glGetStringi = (_func___cdecl_uchar_ptr_uint_uint *)wglGetProcAddress("glGetStringi");
    glGenVertexArrays = (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glGenVertexArrays");
    glDeleteVertexArrays =
         (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDeleteVertexArrays");
    glBindVertexArray = (_func___cdecl_void_uint *)wglGetProcAddress("glBindVertexArray");
    glCopyBufferSubData =
         (_func___cdecl_void_uint_uint_long64_long64_long64 *)
         wglGetProcAddress("glCopyBufferSubData");
    glTexBuffer = (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glTexBuffer");
    glTexBufferRange =
         (_func___cdecl_void_uint_uint_uint_long64_long64 *)wglGetProcAddress("glTexBufferRange");
    glTexImage2DMultisample =
         (_func___cdecl_void_uint_int_uint_int_int_uchar *)
         wglGetProcAddress("glTexImage2DMultisample");
    glQueryCounter = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glQueryCounter");
    glIsSync = (_func___cdecl_uchar___GLsync_ptr *)wglGetProcAddress("glIsSync");
    glDeleteSync = (_func___cdecl_void___GLsync_ptr *)wglGetProcAddress("glDeleteSync");
    glGetQueryObjectui64v =
         (_func___cdecl_void_uint_uint_ulong64_ptr *)wglGetProcAddress("glGetQueryObjectui64v");
    glFenceSync = (_func___cdecl___GLsync_ptr_uint_uint *)wglGetProcAddress("glFenceSync");
    glGetSynciv = (_func___cdecl_void___GLsync_ptr_uint_int_int_ptr_int_ptr *)
                  wglGetProcAddress("glGetSynciv");
    glClientWaitSync =
         (_func___cdecl_uint___GLsync_ptr_uint_ulong64 *)wglGetProcAddress("glClientWaitSync");
    glBindBufferRange =
         (_func___cdecl_void_uint_uint_uint_long64_long64 *)wglGetProcAddress("glBindBufferRange");
    glGetProgramResourceIndex =
         (_func___cdecl_uint_uint_uint_char_ptr *)wglGetProcAddress("glGetProgramResourceIndex");
    glClipControl = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glClipControl");
    glDebugMessageCallbackARB =
         (_func___cdecl_void__func___cdecl_void_uint_uint_uint_uint_int_char_ptr_void_ptr_ptr_void_ptr
          *)wglGetProcAddress("glDebugMessageCallbackARB");
    glDebugMessageControlARB =
         (_func___cdecl_void_uint_uint_uint_int_uint_ptr_uchar *)
         wglGetProcAddress("glDebugMessageControlARB");
    glDebugMessageCallbackAMD =
         (_func___cdecl_void__func___cdecl_void_uint_uint_uint_int_char_ptr_void_ptr_ptr_void_ptr *)
         wglGetProcAddress("glDebugMessageCallbackAMD");
    glDebugMessageEnableAMD =
         (_func___cdecl_void_uint_uint_int_uint_ptr_uchar *)
         wglGetProcAddress("glDebugMessageEnableAMD");
    glGetActiveUniformsiv =
         (_func___cdecl_void_uint_int_uint_ptr_uint_int_ptr *)
         wglGetProcAddress("glGetActiveUniformsiv");
    glGetVertexAttribIuiv =
         (_func___cdecl_void_uint_uint_uint_ptr *)wglGetProcAddress("glGetVertexAttribIuiv");
    glGetActiveUniformName =
         (_func___cdecl_void_uint_uint_int_int_ptr_char_ptr *)
         wglGetProcAddress("glGetActiveUniformName");
    glGetUniformuiv = (_func___cdecl_void_uint_int_uint_ptr *)wglGetProcAddress("glGetUniformuiv");
    glGetActiveUniformBlockiv =
         (_func___cdecl_void_uint_uint_uint_int_ptr *)wglGetProcAddress("glGetActiveUniformBlockiv")
    ;
    glGetBufferParameteri64v =
         (_func___cdecl_void_uint_uint_long64_ptr *)wglGetProcAddress("glGetBufferParameteri64v");
    glGetActiveUniformBlockName =
         (_func___cdecl_void_uint_uint_int_int_ptr_char_ptr *)
         wglGetProcAddress("glGetActiveUniformBlockName");
    glGetSamplerParameterfv =
         (_func___cdecl_void_uint_uint_float_ptr *)wglGetProcAddress("glGetSamplerParameterfv");
    glGetSamplerParameteriv =
         (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetSamplerParameteriv");
    glDispatchCompute = (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glDispatchCompute");
    glDispatchComputeIndirect =
         (_func___cdecl_void_long64 *)wglGetProcAddress("glDispatchComputeIndirect");
    glBindImageTexture =
         (_func___cdecl_void_uint_uint_int_uchar_int_uint_uint *)
         wglGetProcAddress("glBindImageTexture");
    glMemoryBarrier = (_func___cdecl_void_uint *)wglGetProcAddress("glMemoryBarrier");
    glBlendEquationi = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBlendEquationi");
    glBlendEquationSeparatei =
         (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glBlendEquationSeparatei");
    glBlendFunci = (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glBlendFunci");
    glBlendFuncSeparatei =
         (_func___cdecl_void_uint_uint_uint_uint_uint *)wglGetProcAddress("glBlendFuncSeparatei");
    glBlendEquationSeparateiARB =
         (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glBlendEquationSeparateiARB");
    glBlendEquationiARB = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBlendEquationiARB");
    glBlendFuncSeparateiARB =
         (_func___cdecl_void_uint_uint_uint_uint_uint *)wglGetProcAddress("glBlendFuncSeparateiARB")
    ;
    glBlendFunciARB = (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glBlendFunciARB");
    glClearBufferData =
         (_func___cdecl_void_uint_uint_uint_uint_void_ptr *)wglGetProcAddress("glClearBufferData");
    glClearBufferSubData =
         (_func___cdecl_void_uint_uint_long64_long64_uint_uint_void_ptr *)
         wglGetProcAddress("glClearBufferSubData");
    glPushDebugGroup =
         (_func___cdecl_void_uint_uint_int_char_ptr *)wglGetProcAddress("glPushDebugGroup");
    glPopDebugGroup = (_func___cdecl_void *)wglGetProcAddress("glPopDebugGroup");
    glObjectLabel = (_func___cdecl_void_uint_uint_int_char_ptr *)wglGetProcAddress("glObjectLabel");
    glObjectPtrLabel =
         (_func___cdecl_void_void_ptr_int_char_ptr *)wglGetProcAddress("glObjectPtrLabel");
    glPatchParameteri = (_func___cdecl_void_uint_int *)wglGetProcAddress("glPatchParameteri");
    glBindVertexBuffer =
         (_func___cdecl_void_uint_uint_long64_int *)wglGetProcAddress("glBindVertexBuffer");
    glVertexAttribFormat =
         (_func___cdecl_void_uint_int_uint_uchar_uint *)wglGetProcAddress("glVertexAttribFormat");
    glVertexAttribIFormat =
         (_func___cdecl_void_uint_int_uint_uint *)wglGetProcAddress("glVertexAttribIFormat");
    glVertexAttribBinding =
         (_func___cdecl_void_uint_uint *)wglGetProcAddress("glVertexAttribBinding");
    glVertexBindingDivisor =
         (_func___cdecl_void_uint_uint *)wglGetProcAddress("glVertexBindingDivisor");
    glCopyImageSubData =
         (_func___cdecl_void_uint_uint_int_int_int_int_uint_uint_int_int_int_int_int_int_int *)
         wglGetProcAddress("glCopyImageSubData");
    glTexStorage1D = (_func___cdecl_void_uint_int_uint_int *)wglGetProcAddress("glTexStorage1D");
    glTexStorage2D = (_func___cdecl_void_uint_int_uint_int_int *)wglGetProcAddress("glTexStorage2D")
    ;
    glTexStorage3D =
         (_func___cdecl_void_uint_int_uint_int_int_int *)wglGetProcAddress("glTexStorage3D");
    glBufferStorage =
         (_func___cdecl_void_uint_long64_void_ptr_uint *)wglGetProcAddress("glBufferStorage");
    glTextureView =
         (_func___cdecl_void_uint_uint_uint_uint_uint_uint_uint_uint *)
         wglGetProcAddress("glTextureView");
    glTexStorage2DMultisample =
         (_func___cdecl_void_uint_int_uint_int_int_uchar *)
         wglGetProcAddress("glTexStorage2DMultisample");
    glDrawElementsIndirect =
         (_func___cdecl_void_uint_uint_void_ptr *)wglGetProcAddress("glDrawElementsIndirect");
    glDrawArraysIndirect =
         (_func___cdecl_void_uint_void_ptr *)wglGetProcAddress("glDrawArraysIndirect");
    glDepthBoundsEXT = (_func___cdecl_void_double_double *)wglGetProcAddress("glDepthBoundsEXT");
    glGetTextureHandleARB = (_func___cdecl_ulong64_uint *)wglGetProcAddress("glGetTextureHandleARB")
    ;
    glGetTextureSamplerHandleARB =
         (_func___cdecl_ulong64_uint_uint *)wglGetProcAddress("glGetTextureSamplerHandleARB");
    glMakeTextureHandleResidentARB =
         (_func___cdecl_void_ulong64 *)wglGetProcAddress("glMakeTextureHandleResidentARB");
    glUniformHandleui64ARB =
         (_func___cdecl_void_int_ulong64 *)wglGetProcAddress("glUniformHandleui64ARB");
    glMakeTextureHandleNonResidentARB =
         (_func___cdecl_void_ulong64 *)wglGetProcAddress("glMakeTextureHandleNonResidentARB");
    glPushDebugGroupKHR =
         (_func___cdecl_void_uint_uint_int_char_ptr *)wglGetProcAddress("glPushDebugGroupKHR");
    glPopDebugGroupKHR = (_func___cdecl_void *)wglGetProcAddress("glPopDebugGroupKHR");
    glObjectLabelKHR =
         (_func___cdecl_void_uint_uint_int_char_ptr *)wglGetProcAddress("glObjectLabelKHR");
    glObjectPtrLabelKHR =
         (_func___cdecl_void_void_ptr_int_char_ptr *)wglGetProcAddress("glObjectPtrLabelKHR");
    glDebugMessageCallbackKHR =
         (_func___cdecl_void__func___cdecl_void_uint_uint_uint_uint_int_char_ptr_void_ptr_ptr_void_ptr
          *)wglGetProcAddress("glDebugMessageCallbackKHR");
    glDebugMessageControlKHR =
         (_func___cdecl_void_uint_uint_uint_int_uint_ptr_uchar *)
         wglGetProcAddress("glDebugMessageControlKHR");
    glPatchParameteriEXT = (_func___cdecl_void_uint_int *)wglGetProcAddress("glPatchParameteriEXT");
    glTextureViewEXT =
         (_func___cdecl_void_uint_uint_uint_uint_uint_uint_uint_uint *)
         wglGetProcAddress("glTextureViewEXT");
    glBlendEquationiEXT = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glBlendEquationiEXT");
    glBlendEquationSeparateiEXT =
         (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glBlendEquationSeparateiEXT");
    glBlendFunciEXT = (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glBlendFunciEXT");
    glBlendFuncSeparateiEXT =
         (_func___cdecl_void_uint_uint_uint_uint_uint *)wglGetProcAddress("glBlendFuncSeparateiEXT")
    ;
    glColorMaskiEXT =
         (_func___cdecl_void_uint_uchar_uchar_uchar_uchar *)wglGetProcAddress("glColorMaskiEXT");
    glDisableiEXT = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glDisableiEXT");
    glEnableiEXT = (_func___cdecl_void_uint_uint *)wglGetProcAddress("glEnableiEXT");
    glFramebufferTextureEXT =
         (_func___cdecl_void_uint_uint_uint_int *)wglGetProcAddress("glFramebufferTextureEXT");
    glTexBufferEXT = (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glTexBufferEXT");
    glTexBufferRangeEXT =
         (_func___cdecl_void_uint_uint_uint_long64_long64 *)wglGetProcAddress("glTexBufferRangeEXT")
    ;
    glDepthRangef = (_func___cdecl_void_float_float *)wglGetProcAddress("glDepthRangef");
    glClearDepthf = (_func___cdecl_void_float *)wglGetProcAddress("glClearDepthf");
    glGetShaderPrecisionFormat =
         (_func___cdecl_void_uint_uint_int_ptr_int_ptr *)
         wglGetProcAddress("glGetShaderPrecisionFormat");
    glProgramParameteri =
         (_func___cdecl_void_uint_uint_int *)wglGetProcAddress("glProgramParameteri");
    glUseProgramStages =
         (_func___cdecl_void_uint_uint_uint *)wglGetProcAddress("glUseProgramStages");
    glBindProgramPipeline = (_func___cdecl_void_uint *)wglGetProcAddress("glBindProgramPipeline");
    glDeleteProgramPipelines =
         (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glDeleteProgramPipelines");
    glGenProgramPipelines =
         (_func___cdecl_void_int_uint_ptr *)wglGetProcAddress("glGenProgramPipelines");
    glProgramUniform1i = (_func___cdecl_void_uint_int_int *)wglGetProcAddress("glProgramUniform1i");
    glProgramUniform4iv =
         (_func___cdecl_void_uint_int_int_int_ptr *)wglGetProcAddress("glProgramUniform4iv");
    glProgramUniform4fv =
         (_func___cdecl_void_uint_int_int_float_ptr *)wglGetProcAddress("glProgramUniform4fv");
    glProgramUniform4uiv =
         (_func___cdecl_void_uint_int_int_uint_ptr *)wglGetProcAddress("glProgramUniform4uiv");
    glGetProgramPipelineiv =
         (_func___cdecl_void_uint_uint_int_ptr *)wglGetProcAddress("glGetProgramPipelineiv");
    glValidateProgramPipeline =
         (_func___cdecl_void_uint *)wglGetProcAddress("glValidateProgramPipeline");
    glGetProgramPipelineInfoLog =
         (_func___cdecl_void_uint_int_int_ptr_char_ptr *)
         wglGetProcAddress("glGetProgramPipelineInfoLog");
    glIsProgramPipeline = (_func___cdecl_uchar_uint *)wglGetProcAddress("glIsProgramPipeline");
    glGetProgramBinary =
         (_func___cdecl_void_uint_int_int_ptr_uint_ptr_void_ptr *)
         wglGetProcAddress("glGetProgramBinary");
    glProgramBinary =
         (_func___cdecl_void_uint_uint_void_ptr_int *)wglGetProcAddress("glProgramBinary");
    glGetInteger64v = (_func___cdecl_void_uint_long64_ptr *)wglGetProcAddress("glGetInteger64v");
    bVar2 = true;
    if ((glBindTexture == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBlendFunc == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glColorMask == (_func___cdecl_void_uchar_uchar_uchar_uchar *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCopyTexImage1D == (_func___cdecl_void_uint_int_uint_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510efc78,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glCopyTexImage2D == (_func___cdecl_void_uint_int_uint_int_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCopyTexSubImage1D == (_func___cdecl_void_uint_int_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCopyTexSubImage2D == (_func___cdecl_void_uint_int_int_int_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCullFace == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteTextures == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDepthFunc == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDepthMask == (_func___cdecl_void_uchar *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDepthRange == (_func___cdecl_void_double_double *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDisable == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDrawArrays == (_func___cdecl_void_uint_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDrawBuffer == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDrawElements == (_func___cdecl_void_uint_int_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glEnable == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFinish == (_func___cdecl_void *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFlush == (_func___cdecl_void *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFrontFace == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGenTextures == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetBooleanv == (_func___cdecl_void_uint_uchar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetDoublev == (_func___cdecl_void_uint_double_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetError == (_func___cdecl_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetFloatv == (_func___cdecl_void_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetIntegerv == (_func___cdecl_void_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetPointerv == (_func___cdecl_void_uint_void_ptr_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetString == (_func___cdecl_uchar_ptr_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetTexImage == (_func___cdecl_void_uint_int_uint_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetTexLevelParameterfv == (_func___cdecl_void_uint_int_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetTexLevelParameteriv == (_func___cdecl_void_uint_int_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetTexParameterfv == (_func___cdecl_void_uint_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetTexParameteriv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glHint == (_func___cdecl_void_uint_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsEnabled == (_func___cdecl_uchar_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsTexture == (_func___cdecl_uchar_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glLineWidth == (_func___cdecl_void_float *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glLogicOp == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glPixelStoref == (_func___cdecl_void_uint_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glPixelStorei == (_func___cdecl_void_uint_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glPointSize == (_func___cdecl_void_float *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glPolygonMode == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glPolygonOffset == (_func___cdecl_void_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glReadBuffer == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glReadPixels == (_func___cdecl_void_int_int_int_int_uint_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glScissor == (_func___cdecl_void_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClearDepth == (_func___cdecl_void_double *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClearColor == (_func___cdecl_void_float_float_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClearStencil == (_func___cdecl_void_int *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)
       ) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClear == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glStencilFunc == (_func___cdecl_void_uint_int_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glStencilMask == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)
       ) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glStencilOp == (_func___cdecl_void_uint_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexImage1D == (_func___cdecl_void_uint_int_int_int_int_uint_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexImage2D == (_func___cdecl_void_uint_int_int_int_int_int_uint_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexParameterf == (_func___cdecl_void_uint_uint_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexParameterfv == (_func___cdecl_void_uint_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexParameteri == (_func___cdecl_void_uint_uint_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexParameteriv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexSubImage1D == (_func___cdecl_void_uint_int_int_int_uint_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexSubImage2D == (_func___cdecl_void_uint_int_int_int_int_int_uint_uint_void_ptr *)0x0)
       && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glViewport == (_func___cdecl_void_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBindSampler == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteSamplers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGenSamplers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glSamplerParameteri == (_func___cdecl_void_uint_uint_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClearBufferfv == (_func___cdecl_void_uint_int_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClearBufferiv == (_func___cdecl_void_uint_int_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClearBufferuiv == (_func___cdecl_void_uint_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClearBufferfi == (_func___cdecl_void_uint_int_float_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glColorMaski == (_func___cdecl_void_uint_uchar_uchar_uchar_uchar *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDisablei == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glEnablei == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetBooleani_v == (_func___cdecl_void_uint_uint_uchar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetIntegeri_v == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsEnabledi == (_func___cdecl_uchar_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBlendColor == (_func___cdecl_void_float_float_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBlendEquation == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDrawRangeElements == (_func___cdecl_void_uint_uint_uint_int_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexImage3D == (_func___cdecl_void_uint_int_int_int_int_int_int_uint_uint_void_ptr *)0x0)
       && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexSubImage3D ==
         (_func___cdecl_void_uint_int_int_int_int_int_int_int_uint_uint_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCopyTexSubImage3D == (_func___cdecl_void_uint_int_int_int_int_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glActiveTexture == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glSampleCoverage == (_func___cdecl_void_float_uchar *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCompressedTexImage3D ==
         (_func___cdecl_void_uint_int_uint_int_int_int_int_int_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCompressedTexImage2D == (_func___cdecl_void_uint_int_uint_int_int_int_int_void_ptr *)0x0)
       && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCompressedTexImage1D == (_func___cdecl_void_uint_int_uint_int_int_int_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCompressedTexSubImage3D ==
         (_func___cdecl_void_uint_int_int_int_int_int_int_int_uint_int_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCompressedTexSubImage2D ==
         (_func___cdecl_void_uint_int_int_int_int_int_uint_int_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCompressedTexSubImage1D == (_func___cdecl_void_uint_int_int_int_uint_int_void_ptr *)0x0)
       && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetCompressedTexImage == (_func___cdecl_void_uint_int_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBlendFuncSeparate == (_func___cdecl_void_uint_uint_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glMultiDrawArrays == (_func___cdecl_void_uint_int_ptr_int_ptr_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glMultiDrawElements == (_func___cdecl_void_uint_int_ptr_uint_void_ptr_ptr_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glPointParameterf == (_func___cdecl_void_uint_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glPointParameterfv == (_func___cdecl_void_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f07f8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glPointParameteri == (_func___cdecl_void_uint_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0818,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glPointParameteriv == (_func___cdecl_void_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0838,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glGenQueries == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0858,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteQueries == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0878,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glIsQuery == (_func___cdecl_uchar_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0898,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glBeginQuery == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f08b8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glEndQuery == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f08d8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glGetQueryiv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f08f8,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glGetQueryObjectiv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0918,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glGetQueryObjectuiv == (_func___cdecl_void_uint_uint_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0938,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glBindBuffer == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__1510f0958,
                 (FLogCategoryBase *)&LogRHI);
    }
    if ((glBindBufferBase == (_func___cdecl_void_uint_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteBuffers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGenBuffers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsBuffer == (_func___cdecl_uchar_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBufferData == (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBufferSubData == (_func___cdecl_void_uint_long64_long64_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetBufferSubData == (_func___cdecl_void_uint_long64_long64_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glMapBuffer == (_func___cdecl_void_ptr_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUnmapBuffer == (_func___cdecl_uchar_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetBufferParameteriv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetBufferPointerv == (_func___cdecl_void_uint_uint_void_ptr_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBlendEquationSeparate == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDrawBuffers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glStencilOpSeparate == (_func___cdecl_void_uint_uint_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glStencilFuncSeparate == (_func___cdecl_void_uint_uint_int_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glStencilMaskSeparate == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glAttachShader == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBindAttribLocation == (_func___cdecl_void_uint_uint_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBindFragDataLocation == (_func___cdecl_void_uint_uint_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCompileShader == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCreateProgram == (_func___cdecl_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCreateShader == (_func___cdecl_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteProgram == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteShader == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDetachShader == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDisableVertexAttribArray == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glEnableVertexAttribArray == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetActiveAttrib ==
         (_func___cdecl_void_uint_uint_int_int_ptr_int_ptr_uint_ptr_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetActiveUniform ==
         (_func___cdecl_void_uint_uint_int_int_ptr_int_ptr_uint_ptr_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetAttachedShaders == (_func___cdecl_void_uint_int_int_ptr_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetAttribLocation == (_func___cdecl_int_uint_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetProgramiv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetProgramInfoLog == (_func___cdecl_void_uint_int_int_ptr_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetShaderiv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetShaderInfoLog == (_func___cdecl_void_uint_int_int_ptr_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetShaderSource == (_func___cdecl_void_uint_int_int_ptr_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetUniformLocation == (_func___cdecl_int_uint_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetUniformBlockIndex == (_func___cdecl_uint_uint_char_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetUniformfv == (_func___cdecl_void_uint_int_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetUniformiv == (_func___cdecl_void_uint_int_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetVertexAttribdv == (_func___cdecl_void_uint_uint_double_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetVertexAttribfv == (_func___cdecl_void_uint_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetVertexAttribiv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetVertexAttribPointerv == (_func___cdecl_void_uint_uint_void_ptr_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsProgram == (_func___cdecl_uchar_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsShader == (_func___cdecl_uchar_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glLinkProgram == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_)
       ) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glShaderSource == (_func___cdecl_void_uint_int_char_ptr_ptr_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUseProgram == (_func___cdecl_void_uint *)0x0) && (bVar2 = false, 2 < (byte)LogRHI._0_1_))
    {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform1f == (_func___cdecl_void_int_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform2f == (_func___cdecl_void_int_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform3f == (_func___cdecl_void_int_float_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform4f == (_func___cdecl_void_int_float_float_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform1i == (_func___cdecl_void_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform2i == (_func___cdecl_void_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform3i == (_func___cdecl_void_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform4i == (_func___cdecl_void_int_int_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform1fv == (_func___cdecl_void_int_int_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform2fv == (_func___cdecl_void_int_int_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform3fv == (_func___cdecl_void_int_int_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform4fv == (_func___cdecl_void_int_int_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform1iv == (_func___cdecl_void_int_int_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform2iv == (_func___cdecl_void_int_int_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform3iv == (_func___cdecl_void_int_int_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform4iv == (_func___cdecl_void_int_int_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform1uiv == (_func___cdecl_void_int_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform2uiv == (_func___cdecl_void_int_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform3uiv == (_func___cdecl_void_int_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniform4uiv == (_func___cdecl_void_int_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformBlockBinding == (_func___cdecl_void_uint_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix2fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix3fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix4fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glValidateProgram == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib1d == (_func___cdecl_void_uint_double *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib1dv == (_func___cdecl_void_uint_double_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib1f == (_func___cdecl_void_uint_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib1fv == (_func___cdecl_void_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib1s == (_func___cdecl_void_uint_short *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib1sv == (_func___cdecl_void_uint_short_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib2d == (_func___cdecl_void_uint_double_double *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib2dv == (_func___cdecl_void_uint_double_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib2f == (_func___cdecl_void_uint_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib2fv == (_func___cdecl_void_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib2s == (_func___cdecl_void_uint_short_short *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib2sv == (_func___cdecl_void_uint_short_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib3d == (_func___cdecl_void_uint_double_double_double *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib3dv == (_func___cdecl_void_uint_double_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib3f == (_func___cdecl_void_uint_float_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib3fv == (_func___cdecl_void_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib3s == (_func___cdecl_void_uint_short_short_short *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib3sv == (_func___cdecl_void_uint_short_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4Nbv == (_func___cdecl_void_uint_schar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4Niv == (_func___cdecl_void_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4Nsv == (_func___cdecl_void_uint_short_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4Nub == (_func___cdecl_void_uint_uchar_uchar_uchar_uchar *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4Nubv == (_func___cdecl_void_uint_uchar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4Nuiv == (_func___cdecl_void_uint_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4Nusv == (_func___cdecl_void_uint_ushort_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4bv == (_func___cdecl_void_uint_schar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4d == (_func___cdecl_void_uint_double_double_double_double *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4dv == (_func___cdecl_void_uint_double_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4f == (_func___cdecl_void_uint_float_float_float_float *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4fv == (_func___cdecl_void_uint_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4iv == (_func___cdecl_void_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4s == (_func___cdecl_void_uint_short_short_short_short *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4sv == (_func___cdecl_void_uint_short_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4ubv == (_func___cdecl_void_uint_uchar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4uiv == (_func___cdecl_void_uint_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttrib4usv == (_func___cdecl_void_uint_ushort_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribI4iv == (_func___cdecl_void_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribI4uiv == (_func___cdecl_void_uint_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribI4sv == (_func___cdecl_void_uint_short_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribI4usv == (_func___cdecl_void_uint_ushort_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribI4bv == (_func___cdecl_void_uint_schar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribI4ubv == (_func___cdecl_void_uint_uchar_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribPointer == (_func___cdecl_void_uint_int_uint_uchar_int_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribIPointer == (_func___cdecl_void_uint_int_uint_int_void_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix2x3fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix3x2fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix2x4fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix4x2fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix3x4fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glUniformMatrix4x3fv == (_func___cdecl_void_int_int_uchar_float_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsRenderbuffer == (_func___cdecl_uchar_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBindRenderbuffer == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteRenderbuffers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGenRenderbuffers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glRenderbufferStorage == (_func___cdecl_void_uint_uint_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetRenderbufferParameteriv == (_func___cdecl_void_uint_uint_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsFramebuffer == (_func___cdecl_uchar_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBindFramebuffer == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteFramebuffers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGenFramebuffers == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCheckFramebufferStatus == (_func___cdecl_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFramebufferTexture1D == (_func___cdecl_void_uint_uint_uint_uint_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFramebufferTexture2D == (_func___cdecl_void_uint_uint_uint_uint_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFramebufferTexture3D == (_func___cdecl_void_uint_uint_uint_uint_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFramebufferTexture == (_func___cdecl_void_uint_uint_uint_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFramebufferRenderbuffer == (_func___cdecl_void_uint_uint_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetFramebufferAttachmentParameteriv == (_func___cdecl_void_uint_uint_uint_int_ptr *)0x0)
       && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGenerateMipmap == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBlitFramebuffer == (_func___cdecl_void_int_int_int_int_int_int_int_int_uint_uint *)0x0)
       && (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glRenderbufferStorageMultisample == (_func___cdecl_void_uint_int_uint_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFramebufferTextureLayer == (_func___cdecl_void_uint_uint_uint_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glMapBufferRange == (_func___cdecl_void_ptr_uint_long64_long64_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFlushMappedBufferRange == (_func___cdecl_void_uint_long64_long64 *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glVertexAttribDivisor == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDrawArraysInstanced == (_func___cdecl_void_uint_int_int_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDrawElementsInstanced == (_func___cdecl_void_uint_int_uint_void_ptr_int *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetStringi == (_func___cdecl_uchar_ptr_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGenVertexArrays == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteVertexArrays == (_func___cdecl_void_int_uint_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBindVertexArray == (_func___cdecl_void_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glCopyBufferSubData == (_func___cdecl_void_uint_uint_long64_long64_long64 *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexBuffer == (_func___cdecl_void_uint_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexBufferRange == (_func___cdecl_void_uint_uint_uint_long64_long64 *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glTexImage2DMultisample == (_func___cdecl_void_uint_int_uint_int_int_uchar *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glQueryCounter == (_func___cdecl_void_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glIsSync == (_func___cdecl_uchar___GLsync_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glDeleteSync == (_func___cdecl_void___GLsync_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetQueryObjectui64v == (_func___cdecl_void_uint_uint_ulong64_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glFenceSync == (_func___cdecl___GLsync_ptr_uint_uint *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glGetSynciv == (_func___cdecl_void___GLsync_ptr_uint_int_int_ptr_int_ptr *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glClientWaitSync == (_func___cdecl_uint___GLsync_ptr_uint_ulong64 *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if ((glBindBufferRange == (_func___cdecl_void_uint_uint_uint_long64_long64 *)0x0) &&
       (bVar2 = false, 2 < (byte)LogRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    if (glGetProgramResourceIndex == (_func___cdecl_uint_uint_uint_char_ptr *)0x0) {
      if (2 < (byte)LogRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
    }
    else if (bVar2) goto LAB_145c15747;
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("bFoundAllEntryPoints",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x31a,L"Failed to find all OpenGL entry points.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
LAB_145c15747:
  if (pHVar5 != (HGLRC__ *)0x0) {
    BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (((BVar4 == 0) && (BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar4 == 0)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    wglDeleteContext((HGLRC)pHVar5);
  }
  ReleaseDC((HWND)local_38.WindowHandle,(HDC)local_38.DeviceContext);
  if ((local_38.bReleaseWindowOnDestroy == false) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("DummyContext.bReleaseWindowOnDestroy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x324,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  DestroyWindow((HWND)local_38.WindowHandle);
  return bOpenGLSupported;
}

// PlatformInitPixelFormatForDevice @ 145c15810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PlatformInitPixelFormatForDevice(HDC__ *param_1,bool param_2)

{
  undefined4 uVar1;
  int format;
  BOOL BVar2;
  wchar_t *pwVar3;
  undefined1 auStack_58 [32];
  PIXELFORMATDESCRIPTOR local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.dwVisibleMask = 0;
  local_38.dwDamageMask = 0;
  local_38.cAlphaBits = '\0';
  local_38.cAlphaShift = '\0';
  local_38.cAccumBits = '\0';
  local_38.cAccumRedBits = '\0';
  local_38.cAccumGreenBits = '\0';
  local_38.cAccumBlueBits = '\0';
  local_38.cAccumAlphaBits = '\0';
  local_38.cAuxBuffers = '\0';
  local_38.bReserved = '\0';
  local_38.dwLayerMask = 0;
  local_38.cDepthBits = '\0';
  local_38.cStencilBits = '\0';
  local_38.iLayerType = '\0';
  local_38.nSize = 0x28;
  local_38.nVersion = 1;
  uVar1 = local_38._0_4_;
  local_38.nSize = 0x28;
  local_38.nVersion = 1;
  local_38.dwFlags = 0x25;
  local_38.iPixelType = '\0';
  local_38.cColorBits = ' ';
  local_38.cRedBits = '\0';
  local_38.cRedShift = '\0';
  local_38.cGreenBits = '\0';
  local_38.cGreenShift = '\0';
  local_38.cBlueBits = '\0';
  local_38.cBlueShift = '\0';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) &&
     (local_38._0_4_ = uVar1, _Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pwVar3 = FCommandLine::Get();
    bRequestedQuadBufferStereo = FParse::Param(pwVar3,L"quad_buffer_stereo");
    _Init_thread_footer(&_TSS0);
  }
  if (bRequestedQuadBufferStereo != false) {
    local_38.dwFlags = local_38.dwFlags | 2;
  }
  format = ChoosePixelFormat((HDC)param_1,&local_38);
  if ((format != 0) && (BVar2 = SetPixelFormat((HDC)param_1,format,&local_38), BVar2 != 0)) {
    return;
  }
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  return;
}

// PlatformNULLContextSetup @ 145c15920

void __cdecl PlatformNULLContextSetup(void)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  HDC pHVar4;
  
  pHVar4 = wglGetCurrentDC();
  if (pHVar4 != (HDC)0x0) {
    BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar3 == 0) {
      BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar3 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// PlatformOpenGLThreadHasRenderingContext @ 145c15980

bool __cdecl PlatformOpenGLThreadHasRenderingContext(void)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  return pHVar1 == (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext;
}

// PlatformReleaseOpenGLContext @ 145c159b0

void __cdecl
PlatformReleaseOpenGLContext(FPlatformOpenGLDevice *param_1,FPlatformOpenGLContext *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  HDC pHVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  BOOL BVar9;
  HDC pHVar10;
  HGLRC pHVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  HGLRC__ **ppHVar14;
  FScopeContext local_48;
  
  if (((param_2 == (FPlatformOpenGLContext *)0x0) || (param_2->OpenGLContext == (HGLRC__ *)0x0)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Context && Context->OpenGLContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                         ,0x16c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (param_1->ViewportContexts).AllocatorInstance.Data;
  iVar2 = (param_1->ViewportContexts).ArrayNum;
  pFVar13 = pFVar3;
  do {
    if (pFVar13 == pFVar3 + (longlong)iVar2 * 8) {
LAB_145c15a40:
      lpCriticalSection = (LPCRITICAL_SECTION)param_1->ContextUsageGuard;
      param_1->TargetDirty = true;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if ((param_2 == (FPlatformOpenGLContext *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Context",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                             ,0x34,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pHVar10 = wglGetCurrentDC();
      local_48.PrevDC = (HDC__ *)pHVar10;
      local_48.PrevContext = (HGLRC__ *)wglGetCurrentContext();
      pHVar4 = (HDC)param_2->DeviceContext;
      bVar7 = pHVar10 == pHVar4;
      local_48.bSameDC = bVar7;
      if ((local_48.PrevContext == param_2->OpenGLContext) && (pHVar10 == pHVar4)) {
        bVar6 = true;
        local_48.bSameDCAndContext = true;
      }
      else {
        bVar6 = false;
        local_48.bSameDCAndContext = false;
        BVar9 = wglMakeCurrent(pHVar4,(HGLRC)param_2->OpenGLContext);
        if ((BVar9 == 0) &&
           ((BVar9 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar9 == 0 &&
            (bVar8 = FDebug::CheckVerifyFailedImpl2
                               ("Result",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                                ,0x18,L""), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      ppHVar14 = &param_2->OpenGLContext;
      (*glBindVertexArray)(0);
      (*glDeleteVertexArrays)(1,&param_2->VertexArrayObject);
      if (param_2->ViewportFramebuffer == 0) {
        FScopeContext::~FScopeContext(&local_48);
        wglDeleteContext((HGLRC)*ppHVar14);
      }
      else {
        (*glDeleteFramebuffers)(1,&param_2->ViewportFramebuffer);
        param_2->ViewportFramebuffer = 0;
        FScopeContext::~FScopeContext(&local_48);
        wglDeleteContext((HGLRC)*ppHVar14);
      }
      *ppHVar14 = (HGLRC__ *)0x0;
      LeaveCriticalSection(lpCriticalSection);
      if ((param_2->DeviceContext == (HDC__ *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("Context->DeviceContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                             ,0x18a,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (bVar6) {
        wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      }
      ReleaseDC((HWND)param_2->WindowHandle,(HDC)param_2->DeviceContext);
      param_2->DeviceContext = (HDC__ *)0x0;
      pHVar11 = wglGetCurrentContext();
      if ((((pHVar11 == (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext)
           && (bVar7)) &&
          (BVar9 = wglMakeCurrent((HDC)(param_1->RenderingContext).DeviceContext,
                                  (HGLRC)(param_1->RenderingContext).OpenGLContext), BVar9 == 0)) &&
         ((BVar9 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0), BVar9 == 0 &&
          (bVar7 = FDebug::CheckVerifyFailedImpl2
                             ("Result",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                              ,0x18,L""), bVar7)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((param_2->WindowHandle == (HWND__ *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Context->WindowHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                             ,0x19a,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (param_2->bReleaseWindowOnDestroy != false) {
        DestroyWindow((HWND)param_2->WindowHandle);
      }
      param_2->WindowHandle = (HWND__ *)0x0;
      return;
    }
    if (*(FPlatformOpenGLContext **)pFVar13 == param_2) {
      iVar12 = (int)((longlong)pFVar13 - (longlong)pFVar3 >> 3);
      if (iVar12 != -1) {
        memmove(pFVar3 + (longlong)iVar12 * 8,pFVar3 + (longlong)iVar12 * 8 + 8,
                (longlong)((iVar2 - iVar12) + -1) << 3);
        piVar1 = &(param_1->ViewportContexts).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      goto LAB_145c15a40;
    }
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// PlatformRenderingContextSetup @ 145c15cd0

void __cdecl PlatformRenderingContextSetup(FPlatformOpenGLDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  HGLRC pHVar4;
  
  if (((param_1 == (FPlatformOpenGLDevice *)0x0) ||
      ((param_1->RenderingContext).DeviceContext == (HDC__ *)0x0)) ||
     ((param_1->RenderingContext).OpenGLContext == (HGLRC__ *)0x0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Device && Device->RenderingContext.DeviceContext && Device->RenderingContext.OpenGLContext"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                       ,0x20f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)0x0) {
    (*glFlush)();
  }
  pHVar4 = (HGLRC)(param_1->RenderingContext).OpenGLContext;
  if ((param_1->ViewportContexts).ArrayNum == 1) {
    BVar3 = wglMakeCurrent(*(HDC *)(*(longlong *)(param_1->ViewportContexts).AllocatorInstance.Data
                                   + 8),pHVar4);
    if (BVar3 == 0) {
      BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar3 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L"");
        if (!bVar2) {
          return;
        }
code_r0x000145c15dbb:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    BVar3 = wglMakeCurrent((HDC)(param_1->RenderingContext).DeviceContext,pHVar4);
    if (BVar3 == 0) {
      BVar3 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      if (BVar3 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                           ,0x18,L"");
        if (bVar2) goto code_r0x000145c15dbb;
      }
    }
  }
  return;
}

// PlatformResizeGLContext @ 145c15dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
PlatformResizeGLContext
          (FPlatformOpenGLDevice *param_1,FPlatformOpenGLContext *param_2,uint param_3,uint param_4,
          bool param_5,bool param_6,uint param_7,uint param_8)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HDC pHVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  uint uVar5;
  HMONITOR hMonitor;
  HDC pHVar6;
  undefined1 auStackY_1e8 [32];
  FScopeContext local_1b8;
  undefined1 local_198 [40];
  WCHAR aWStack_170 [2];
  undefined8 uStack_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 local_134;
  DEVMODEW local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  lpCriticalSection = (LPCRITICAL_SECTION)param_1->ContextUsageGuard;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (param_5) {
    hMonitor = MonitorFromWindow((HWND)param_2->WindowHandle,1);
    local_198._0_4_ = 0x68;
    local_134 = 0;
    local_198._4_4_ = 0;
    local_198._8_4_ = 0;
    local_198._12_4_ = 0;
    local_198._16_4_ = 0;
    local_198._20_4_ = 0;
    local_198._24_4_ = 0;
    local_198._28_4_ = 0;
    local_198._32_4_ = 0;
    stack0xfffffffffffffe8c = 0;
    uStack_16c = 0;
    local_164 = 0;
    uStack_15c = 0;
    local_154 = 0;
    uStack_14c = 0;
    local_144 = 0;
    uStack_13c = 0;
    GetMonitorInfoW(hMonitor,(LPMONITORINFO)local_198);
    local_128.dmBitsPerPel = 0x20;
    local_128.dmSize = 0xdc;
    local_128.dmFields = 0x1c0000;
    local_128.dmPelsWidth = param_3;
    local_128.dmPelsHeight = param_4;
    ChangeDisplaySettingsExW(aWStack_170,&local_128,(HWND)0x0,4,(LPVOID)0x0);
  }
  else if (param_6) {
    ChangeDisplaySettingsW((DEVMODEW *)0x0,0);
  }
  param_1->TargetDirty = true;
  param_2->BackBufferResource = param_8;
  param_2->BackBufferTarget = param_7;
  if (FOpenGL3::bAndroidGLESCompatibilityMode == false) {
    pHVar6 = wglGetCurrentDC();
    local_1b8.PrevDC = (HDC__ *)pHVar6;
    local_1b8.PrevContext = (HGLRC__ *)wglGetCurrentContext();
    pHVar1 = (HDC)param_2->DeviceContext;
    local_1b8.bSameDC = pHVar6 == pHVar1;
    if ((local_1b8.PrevContext == param_2->OpenGLContext) && (pHVar6 == pHVar1)) {
      local_1b8.bSameDCAndContext = true;
    }
    else {
      local_1b8.bSameDCAndContext = false;
      BVar4 = wglMakeCurrent(pHVar1,(HGLRC)param_2->OpenGLContext);
      if (BVar4 == 0) {
        BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
        if (BVar4 == 0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\Windows\\WindowsOpenGLPlatform.cpp"
                             ,0x18,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
    (*glBindFramebuffer)(0x8d40,param_2->ViewportFramebuffer);
    (*glFramebufferTexture2D)(0x8d40,0x8ce0,param_7,param_8,0);
    uVar5 = (*glCheckFramebufferStatus)(0x8d40);
    if (uVar5 != 0x8cd5) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_static_void___cdecl_FOpenGLBase::CheckFrameBuffer(void)'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogOpenGL);
    }
    (*glViewport)(0,0,param_3,param_4);
    (*glClearBufferfv)(0x1800,0,ZeroColor);
    FScopeContext::~FScopeContext(&local_1b8);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// PlatformRestoreDesktopDisplayMode @ 145c16060

void __cdecl PlatformRestoreDesktopDisplayMode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000145c16064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ChangeDisplaySettingsW((DEVMODEW *)0x0,0);
  return;
}

// PrintProgramStats @ 145c164c0

void __cdecl PrintProgramStats(void)

{
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L" --- Programs Num: %d, Size: %d \n");
  return;
}

// ReleaseOpenGLFramebuffers @ 145c28840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl ReleaseOpenGLFramebuffers(FRHITexture *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FOpenGLDynamicRHI *pFVar3;
  bool bVar4;
  uint uVar5;
  HGLRC pHVar6;
  longlong lVar7;
  TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
  *pTVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint local_res8 [2];
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
  *local_138;
  char local_130;
  char cStack_12f;
  undefined1 local_128 [32];
  longlong local_108;
  TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
  *pTStack_100;
  longlong local_f8 [4];
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  
  pHVar6 = wglGetCurrentContext();
  if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar7 = 0;
  if (param_1 != (FRHITexture *)0x0) {
    lVar7 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  }
  if (lVar7 != 0) {
    pTVar8 = (TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
              *)GetOpenGLFramebufferCache();
    TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_128,pTVar8);
    local_130 = '\0';
    cStack_12f = '\0';
    stack0xfffffffffffffea8 = local_128._16_16_;
    auStack_160._0_8_ = local_128._8_8_;
    local_148 = local_108;
    pTStack_140 = pTStack_100;
    uVar10 = local_128._24_8_ >> 0x20;
    uVar12 = local_128._28_4_;
    local_138 = pTVar8;
    if ((int)uVar12 < *(int *)(local_128._16_8_ + 0x18)) {
      do {
        uVar5 = 0;
        plVar9 = (longlong *)((longlong)(int)uVar10 * 0xe0 + *(longlong *)local_128._0_8_);
        local_f8[0] = *plVar9;
        local_f8[1] = plVar9[1];
        local_f8[2] = plVar9[2];
        local_f8[3] = plVar9[3];
        local_d8 = plVar9[4];
        lStack_d0 = plVar9[5];
        local_c8 = plVar9[6];
        lStack_c0 = plVar9[7];
        local_b8 = plVar9[8];
        lStack_b0 = plVar9[9];
        local_a8 = plVar9[10];
        lStack_a0 = plVar9[0xb];
        local_98 = plVar9[0xc];
        lStack_90 = plVar9[0xd];
        local_88 = plVar9[0xe];
        lStack_80 = plVar9[0xf];
        local_78 = plVar9[0x10];
        lStack_70 = plVar9[0x11];
        local_68 = plVar9[0x12];
        lStack_60 = plVar9[0x13];
        local_58 = plVar9[0x14];
        lStack_50 = plVar9[0x15];
        local_38 = plVar9[0x18];
        local_48 = plVar9[0x16];
        lStack_40 = plVar9[0x17];
        lStack_30 = plVar9[0x19];
        if (((local_38 == 0) || (*(int *)(local_38 + 0x144) != *(int *)(lVar7 + 0x144))) ||
           (*(int *)(local_38 + 0x140) != *(int *)(lVar7 + 0x140))) {
          do {
            lVar1 = local_f8[(longlong)(int)uVar5 * 3];
            if (((lVar1 != 0) && (*(int *)(lVar1 + 0x144) == *(int *)(lVar7 + 0x144))) &&
               (*(int *)(lVar1 + 0x140) == *(int *)(lVar7 + 0x140))) goto LAB_145c28a4d;
            uVar5 = uVar5 + 1;
          } while (uVar5 < 8);
        }
        else {
LAB_145c28a4d:
          local_res8[0] =
               *(int *)((longlong)(int)uVar12 * 0xe0 + 0xd0 + *(longlong *)local_128._0_8_) - 1;
          if ((local_res8[0] == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("FramebufferToDelete > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLRenderTarget.cpp"
                                 ,0x199,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar5 = local_res8[0];
          pFVar3 = FOpenGLDynamicRHI::Singleton;
          pHVar6 = wglGetCurrentContext();
          if (pHVar6 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
            IsInRHIThread();
            IsInRenderingThread();
            IsInGameThread();
            UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          if (uVar5 == (pFVar3->PendingState).Framebuffer) {
            (pFVar3->PendingState).Framebuffer = 0;
            (pFVar3->PendingState).RenderTargets[0] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargets[1] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargets[2] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargets[3] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargets[4] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargets[5] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargets[6] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargets[7] = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[0] = 0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[1] = 0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[2] = 0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[3] = 0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[4] = 0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[5] = 0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[6] = 0;
            (pFVar3->PendingState).RenderTargetMipmapLevels[7] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[0] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[1] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[2] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[3] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[4] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[5] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[6] = 0;
            (pFVar3->PendingState).RenderTargetArrayIndex[7] = 0;
            (pFVar3->PendingState).DepthStencil = (FOpenGLTexture *)0x0;
            (pFVar3->PendingState).bFramebufferSetupInvalid = true;
          }
          if (uVar5 == (pFVar3->ContextState).Framebuffer) {
            (pFVar3->ContextState).Framebuffer = 0xffffffff;
          }
          (*glDeleteFramebuffers)(1,local_res8);
          TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_140,uVar12);
          local_130 = '\x01';
        }
        iVar11 = 1;
        uStack_150 = uStack_150 & ~auStack_160._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
        uVar10 = (ulonglong)uStack_14c;
        uVar12 = uStack_14c;
      } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
      if ((local_130 != '\0') && (cStack_12f != '\0')) {
        uVar12 = *(int *)&(local_138->Elements).field_0x8 -
                 *(int *)&(local_138->Elements).field_0x34;
        if (3 < uVar12) {
          uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar11 = 1 << ((byte)lVar7 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_138->HashSize < iVar11)) || (iVar11 < local_138->HashSize))
        {
          local_138->HashSize = iVar11;
          TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
          ::Rehash(local_138);
        }
      }
    }
  }
  return;
}

// ReleaseUniformBuffer @ 145c28e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ReleaseUniformBuffer(bool param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  HGLRC pHVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar2 = local_res10[0];
  if (param_1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
    local_res8[0] = uVar2;
    if (UniformBufferDataFactory.Entries._8_4_ != UniformBufferDataFactory.Entries._52_4_) {
      TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
                  *)&UniformBufferDataFactory,uVar2,local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
    OpenGLBufferStats::UpdateUniformBufferStats((ulonglong)param_3,false);
    return;
  }
  if (local_res10[0] == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*glDeleteBuffers)(1,local_res10);
  if (local_res10[0] == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Resource != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                       ,0xe5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  OpenGLBufferStats::UpdateUniformBufferStats((ulonglong)param_3,false);
  return;
}

// ReplaceCString @ 145c29ed0

void __cdecl
`anonymous_namespace'::ReplaceCString
          (TArray<char,TSizedDefaultAllocator<32>_> *param_1,char *param_2,char *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  sVar6 = strlen(param_2);
  sVar7 = strlen(param_3);
  pcVar8 = strstr((char *)(param_1->AllocatorInstance).Data,param_2);
  if (pcVar8 != (char *)0x0) {
    piVar1 = &param_1->ArrayNum;
    iVar12 = (int)sVar7;
    do {
      uVar10 = (int)pcVar8 - *(int *)&(param_1->AllocatorInstance).Data;
      uVar11 = (uint)sVar6;
      uVar4 = 0;
      if ((int)(uVar10 + uVar11) <= *piVar1) {
        uVar4 = ~(uVar10 | uVar11) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar11 != 0) {
        pFVar9 = (param_1->AllocatorInstance).Data + (int)uVar10;
        iVar5 = (*piVar1 - uVar11) - uVar10;
        if (iVar5 != 0) {
          memmove(pFVar9,pFVar9 + (int)uVar11,(longlong)iVar5);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
      if ((param_3 == (char *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x793,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar12,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      pFVar9 = (param_1->AllocatorInstance).Data + (int)uVar10;
      memmove(pFVar9 + iVar12,pFVar9,(longlong)(int)(iVar5 - uVar10));
      if (iVar12 != 0) {
        memcpy((param_1->AllocatorInstance).Data + (int)uVar10,param_3,(longlong)iVar12);
      }
      pcVar8 = strstr((char *)((param_1->AllocatorInstance).Data + (int)uVar10),param_2);
    } while (pcVar8 != (char *)0x0);
  }
  return;
}

// RetireAllocation @ 145c2bd10

bool __cdecl RetireAllocation(TOpenGLBuffer<FOpenGLBaseBuffer> *param_1)

{
  uint uVar1;
  code *pcVar2;
  PoolAllocation *pPVar3;
  bool bVar4;
  undefined1 uVar5;
  PoolAllocation *local_res10 [3];
  
  if ((glBufferStorage != (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) &&
     (OpenGLConsoleVariables::bUseStagingBuffer != 0)) {
    local_res10[0] = (PoolAllocation *)0x0;
    bVar4 = TMap<void_*,PoolAllocation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,PoolAllocation_*,0>_>
            ::RemoveAndCopyValue(&AllocationMap,param_1,local_res10);
    pPVar3 = local_res10[0];
    if (bVar4) {
      if (local_res10[0] == (PoolAllocation *)0x0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Alloc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBuffer.cpp"
                           ,0x8f,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      FOpenGLBufferBase::Bind((FOpenGLBufferBase *)&param_1->_padding_);
      uVar1._0_3_ = pPVar3->Offset;
      uVar1._3_1_ = pPVar3->AlignmentPadding;
      (*glCopyBufferSubData)
                (0x8f36,0x8892,
                 (long64)(pPVar3->BasePointer + ((ulonglong)(uVar1 >> 0x18) - (longlong)PoolPointer)
                         ),(ulonglong)uVar1 & 0xffffff,(long64)pPVar3->SizeWithoutPadding);
      pPVar3->FrameRetired = GFrameNumberRenderThread;
      return true;
    }
  }
  return false;
}

// SetDeletedProgramStats @ 145c2d100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetDeletedProgramStats(uint param_1)

{
  FName FVar1;
  HGLRC pHVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_OpenGLProgramBinaryMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_OpenGLProgramCount> FVar7;
  uchar auVar8 [8];
  int local_res10 [2];
  FName local_res18 [2];
  FStatMessage local_38;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_res10[0] = 0;
  (*glGetProgramiv)(param_1,0x8741,local_res10);
  auVar8 = (uchar  [8])(longlong)local_res10[0];
  if (auVar8 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_OpenGLProgramBinaryMemory;
    if (StatPtr_STAT_OpenGLProgramBinaryMemory ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramBinaryMemory>)0x0) {
      pFVar3 = FName::FName(local_res18,"STAT_OpenGLProgramBinaryMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramBinaryMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLProgramBinaryMemory,
                         *pFVar3,L"Active Program binary memory (estimate driver use)",
                         "STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,
                         false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res18[0] = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(local_res18,-(longlong)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  FVar7 = StatPtr_STAT_OpenGLProgramCount;
  if (StatPtr_STAT_OpenGLProgramCount == (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramCount>)0x0)
  {
    pFVar3 = FName::FName(local_res18,"STAT_OpenGLProgramCount");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLProgramCount,*pFVar3,
                       L"GL Program count","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res18[0] = FVar1;
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res18[0] = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar5,&local_38);
    FStatsTrace::Add(local_res18,-1);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  GCurrentDriverProgramBinaryAllocation = GCurrentDriverProgramBinaryAllocation - local_res10[0];
  GNumPrograms = GNumPrograms - 1;
  return;
}

// SetNewProgramStats @ 145c2da50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetNewProgramStats(uint param_1)

{
  FName FVar1;
  HGLRC pHVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_OpenGLProgramBinaryMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_OpenGLProgramCount> FVar7;
  uchar auVar8 [8];
  int local_res10 [2];
  FName local_res18 [2];
  FStatMessage local_38;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_res10[0] = 0;
  (*glGetProgramiv)(param_1,0x8741,local_res10);
  auVar8 = (uchar  [8])(longlong)local_res10[0];
  if (auVar8 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_OpenGLProgramBinaryMemory;
    if (StatPtr_STAT_OpenGLProgramBinaryMemory ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramBinaryMemory>)0x0) {
      pFVar3 = FName::FName(local_res18,"STAT_OpenGLProgramBinaryMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramBinaryMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLProgramBinaryMemory,
                         *pFVar3,L"Active Program binary memory (estimate driver use)",
                         "STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,
                         false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res18[0] = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res18[0] = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(local_res18,(long64)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  FVar7 = StatPtr_STAT_OpenGLProgramCount;
  if (StatPtr_STAT_OpenGLProgramCount == (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramCount>)0x0)
  {
    pFVar3 = FName::FName(local_res18,"STAT_OpenGLProgramCount");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_OpenGLProgramCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLProgramCount,*pFVar3,
                       L"GL Program count","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar7;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res18[0] = FVar1;
    pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar5 == (FThreadStats *)0x0) {
      pFVar6 = FThreadStatsPool::Get();
      pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
    }
    local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res18[0] = FVar1;
    local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar5,&local_38);
    FStatsTrace::Add(local_res18,1);
    if (pFVar5->ScopeCount == 0) {
      FThreadStats::Flush(pFVar5,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar5,false,false);
    }
  }
  GNumPrograms = GNumPrograms + 1;
  GCurrentDriverProgramBinaryAllocation = GCurrentDriverProgramBinaryAllocation + local_res10[0];
  return;
}

// SetOpenGLResourceName @ 145c2def0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SetOpenGLResourceName(FOpenGLTexture *param_1,char *param_2)

{
  bool bVar1;
  HGLRC pHVar2;
  size_t sVar3;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar1 = FOpenGLTexture::IsEvicted(param_1);
  if (bVar1) {
    sVar3 = strlen(param_2);
    FAnsiString::AppendChars
              (&((param_1->EvictionParamsPtr).Ptr)->TextureDebugName,param_2,(int)sVar3 + 1);
    return;
  }
  FOpenGLTexture::TryRestoreGLResource(param_1);
  if ((glObjectLabel != (_func___cdecl_void_uint_uint_int_char_ptr *)0x0) &&
     (FOpenGL3::bDebugContext != false)) {
    (*glObjectLabel)(0x1702,param_1->Resource,-1,param_2);
  }
  return;
}

// SetOpenGLResourceName @ 145c2dff0

void __cdecl SetOpenGLResourceName(FOpenGLTexture *param_1,wchar_t *param_2)

{
  ForAnyElementType FVar1;
  FAnsiString local_18;
  
  FAnsiString::FAnsiString(&local_18,param_2);
  FVar1.Data = (FScriptContainerElement *)"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  SetOpenGLResourceName(param_1,(char *)FVar1.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetupTextureFormat @ 145c30350

void __cdecl SetupTextureFormat(EPixelFormat param_1,FOpenGLTextureFormat *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FOpenGLTextureFormat *pFVar4;
  uint uVar5;
  undefined2 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  
  uVar1 = param_2->Format;
  uVar5 = param_2->Type;
  *(undefined8 *)GOpenGLTextureFormats[param_1].InternalFormat =
       *(undefined8 *)param_2->InternalFormat;
  GOpenGLTextureFormats[param_1].Format = uVar1;
  GOpenGLTextureFormats[param_1].Type = uVar5;
  bVar7 = param_2->bBGRA;
  uVar6 = *(undefined2 *)&param_2->field_0x12;
  pFVar4 = GOpenGLTextureFormats + param_1;
  pFVar4->bCompressed = param_2->bCompressed;
  pFVar4->bBGRA = bVar7;
  *(undefined2 *)&pFVar4->field_0x12 = uVar6;
  if ((param_2->Format == 0) ||
     ((param_2->InternalFormat[0] == 0 && (param_2->InternalFormat[1] == 0)))) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  GPixelFormats[param_1].Supported = '\0';
  GPixelFormats[param_1].field_0x28 = GPixelFormats[param_1].field_0x28 | bVar10;
  GPixelFormats[param_1].PlatformFormat = param_2->InternalFormat[0];
  if (bVar10 == 0) {
    return;
  }
  uVar1 = param_2->InternalFormat[0];
  if (uVar1 < 0x881b) {
    if (uVar1 == 0x881a) {
LAB_145c30488:
      iVar9 = 8;
      bVar7 = true;
    }
    else {
      if (0x81a5 < uVar1) {
        if (uVar1 < 0x83f2) {
          if (uVar1 != 0x83f1) {
            switch(uVar1) {
            case 0x81a6:
              goto switchD_145c30450_caseD_81a6;
            default:
              goto switchD_145c30450_caseD_81a7;
            case 0x8229:
            case 0x822b:
            case 0x822d:
            case 0x822f:
              goto switchD_145c30450_caseD_8229;
            case 0x822a:
            case 0x8230:
            case 0x8231:
            case 0x8232:
            case 0x8233:
            case 0x8234:
            case 0x8237:
            case 0x8238:
            case 0x8239:
            case 0x823a:
            case 0x823b:
            case 0x823c:
              goto switchD_145c30450_caseD_822a;
            case 0x822c:
              break;
            case 0x822e:
            case 0x8235:
            case 0x8236:
              goto switchD_145c30450_caseD_822e;
            }
          }
        }
        else if ((uVar1 != 0x83f2) && (uVar1 != 0x83f3)) {
          if (uVar1 == 0x8814) {
switchD_145c30450_caseD_822e:
            iVar8 = 0;
            bVar3 = false;
            bVar7 = true;
            iVar9 = 8;
            goto LAB_145c305ca;
          }
          if (uVar1 == 0x8815) goto switchD_145c30517_caseD_8d71;
switchD_145c30450_caseD_81a7:
          bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLDevice.cpp"
                             ,0x18b,L"");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
LAB_145c305b1:
          iVar9 = 0;
          bVar3 = false;
          bVar7 = false;
          goto LAB_145c305e4;
        }
        goto switchD_145c30450_caseD_822c;
      }
      if (uVar1 == 0x81a5) goto switchD_145c30450_caseD_81a6;
      if (uVar1 < 0x8058) {
        if (uVar1 != 0x8057) {
          if (uVar1 == 0) goto LAB_145c305b1;
          if ((uVar1 != 0x8051) && (uVar1 != 0x8056)) goto switchD_145c30450_caseD_81a7;
        }
      }
      else {
        if (uVar1 == 0x8058) goto LAB_145c30488;
        if ((uVar1 != 0x8059) && (uVar1 != 0x805b)) goto switchD_145c30450_caseD_81a7;
      }
switchD_145c30450_caseD_8229:
      bVar7 = true;
LAB_145c305c0:
      iVar9 = 0;
    }
LAB_145c305c2:
    bVar3 = false;
LAB_145c305c5:
    iVar8 = 4;
  }
  else {
    if (uVar1 < 0x8cae) {
      if (uVar1 != 0x8cad) {
        if (uVar1 == 0x881b) goto switchD_145c30450_caseD_822c;
        if (uVar1 != 0x88f0) {
          if (uVar1 != 0x8c3a) {
            if (uVar1 == 0x8c3d) goto switchD_145c30450_caseD_822c;
            if (uVar1 != 0x8c43) goto switchD_145c30450_caseD_81a7;
          }
          goto switchD_145c30450_caseD_8229;
        }
      }
switchD_145c30450_caseD_81a6:
      bVar7 = true;
      iVar9 = 0;
      bVar3 = true;
      goto LAB_145c305c5;
    }
    if (0x8e8c < uVar1) {
      if (uVar1 < 0x9070) {
        if (uVar1 == 0x906f) {
switchD_145c30450_caseD_822a:
          iVar8 = 0;
          bVar7 = true;
          bVar3 = false;
          iVar9 = iVar8;
          goto LAB_145c305ca;
        }
        if (0x8f96 < uVar1) {
          iVar9 = uVar1 - 0x8f97;
          if (iVar9 != 0) goto LAB_145c30586;
          iVar9 = 8;
          bVar7 = false;
          goto LAB_145c305c2;
        }
        if (((uVar1 != 0x8f96) && (uVar1 != 0x8e8f)) && (uVar1 != 0x8f94)) {
          bVar7 = uVar1 == 0x8f95;
          goto LAB_145c30589;
        }
      }
      else if ((((uVar1 != 0x93b0) && (uVar1 != 0x93b4)) && (uVar1 != 0x93b7)) &&
              (iVar9 = uVar1 - 0x93bb, iVar9 != 0)) {
LAB_145c30586:
        bVar7 = iVar9 == 2;
LAB_145c30589:
        if (!bVar7) goto switchD_145c30450_caseD_81a7;
      }
switchD_145c30450_caseD_822c:
      bVar7 = false;
      goto LAB_145c305c0;
    }
    if (uVar1 == 0x8e8c) goto switchD_145c30450_caseD_822c;
    switch(uVar1) {
    case 0x8d62:
      goto switchD_145c30450_caseD_8229;
    default:
      goto switchD_145c30450_caseD_81a7;
    case 0x8d70:
    case 0x8d76:
    case 0x8d7c:
    case 0x8d82:
    case 0x8d88:
    case 0x8d8e:
      goto switchD_145c30450_caseD_822e;
    case 0x8d71:
    case 0x8d77:
    case 0x8d7d:
    case 0x8d83:
    case 0x8d89:
    case 0x8d8f:
switchD_145c30517_caseD_8d71:
      iVar8 = 0;
      bVar3 = false;
      bVar7 = false;
      iVar9 = 0;
      break;
    case 0x8dbb:
    case 0x8dbd:
      goto switchD_145c30450_caseD_822c;
    }
  }
LAB_145c305ca:
  GPixelFormats[param_1].Capabilities =
       GPixelFormats[param_1].Capabilities |
       (TextureGather|TextureSample|TextureLoad|TextureMipmaps|AnyTexture);
  if (iVar8 != 0) {
    GPixelFormats[param_1].Capabilities = GPixelFormats[param_1].Capabilities | TextureFilterable;
  }
LAB_145c305e4:
  if (bVar7) {
    GPixelFormats[param_1].Capabilities =
         GPixelFormats[param_1].Capabilities | (TextureBlendable|RenderTarget);
  }
  if (bVar3) {
    GPixelFormats[param_1].Capabilities = GPixelFormats[param_1].Capabilities | DepthStencil;
  }
  if (iVar9 != 0) {
    GPixelFormats[param_1].Capabilities =
         GPixelFormats[param_1].Capabilities |
         (AllUAVFlags|AllBufferFlags|TextureStore|TextureAtomics);
  }
  return;
}

// SuballocateUBO @ 145c31490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl SuballocateUBO(uint param_1,uint *param_2,uint *param_3,uchar **param_4)

{
  FName FVar1;
  code *pcVar2;
  _func___cdecl_void_uint_long64_void_ptr_uint *p_Var3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  HGLRC pHVar7;
  uchar *puVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory> FVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar15;
  uchar *puVar16;
  int iVar17;
  uchar auVar18 [8];
  FNameEntryId FVar19;
  int local_res8 [2];
  uint *local_res10;
  uint *local_res18;
  uint local_98 [4];
  uchar *local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint uStack_64;
  FName local_60;
  FStatMessage local_58;
  FName local_48 [2];
  uchar *puVar14;
  
  local_res10 = param_2;
  local_res18 = param_3;
  pHVar7 = wglGetCurrentContext();
  if (pHVar7 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (UBOPoolSize == 0xffffffff) {
    (*glGetIntegerv)(0x8a34,local_res8);
    UBOPoolSize = ((OpenGLConsoleVariables::RequestedUBOPoolSize + -1 + local_res8[0]) /
                  local_res8[0]) * local_res8[0];
  }
  if ((UBOPoolSize < param_1) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Size <= GetUBOPoolSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLUniformBuffer.cpp"
                         ,0x15f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar8 = (uchar *)0x0;
  puVar14 = puVar8;
  puVar16 = puVar8;
  iVar15 = UBOPool.ArrayNum;
  if (0 < UBOPool.ArrayNum) {
    do {
      uVar13 = (uint)puVar14;
      uVar6 = 0;
      if ((int)uVar13 < iVar15) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar15 = UBOPool.ArrayNum, bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = UBOPool.AllocatorInstance.Data + (longlong)puVar16;
      if (param_1 < (uint)(*(int *)(pFVar12 + 8) - *(int *)(pFVar12 + 4))) {
        *param_2 = *(uint *)pFVar12;
        uVar6 = *(uint *)(pFVar12 + 4);
        *param_3 = uVar6;
        if (*(longlong *)(pFVar12 + 0x10) != 0) {
          puVar8 = (uchar *)(*(longlong *)(pFVar12 + 0x10) + (ulonglong)uVar6);
        }
        *param_4 = puVar8;
        *(uint *)(pFVar12 + 4) = *(int *)(pFVar12 + 4) + param_1;
        return;
      }
      puVar14 = (uchar *)(ulonglong)(uVar13 + 1);
      puVar16 = puVar16 + 0x18;
    } while ((int)(uVar13 + 1) < iVar15);
  }
  iVar15 = 0x400 - FOpenGL3::NextBufferName;
  if (iVar15 < 2) {
    memcpy(local_98,FOpenGL3::BufferNamesCache + FOpenGL3::NextBufferName,(longlong)iVar15 * 4);
    (*glGenBuffers)(0x400,FOpenGL3::BufferNamesCache);
    iVar17 = 1 - iVar15;
    memcpy(local_98 + iVar15,FOpenGL3::BufferNamesCache,(longlong)iVar17 << 2);
  }
  else {
    local_98[0] = FOpenGL3::BufferNamesCache[FOpenGL3::NextBufferName];
    iVar17 = FOpenGL3::NextBufferName + 1;
  }
  FOpenGL3::NextBufferName = iVar17;
  FOpenGLDynamicRHI::CachedBindUniformBuffer(FOpenGLDynamicRHI::Singleton,local_98[0]);
  p_Var3 = glBufferData;
  if ((glBufferStorage == (_func___cdecl_void_uint_long64_void_ptr_uint *)0x0) ||
     (OpenGLConsoleVariables::bUBODirectWrite == 0)) {
    if (UBOPoolSize == 0xffffffff) {
      (*glGetIntegerv)(0x8a34,&local_78);
      UBOPoolSize = ((OpenGLConsoleVariables::RequestedUBOPoolSize + -1 + local_78) / local_78) *
                    local_78;
    }
    (*p_Var3)(0x8a11,(long64)UBOPoolSize,(void *)0x0,0x88e8);
  }
  else {
    if (UBOPoolSize == 0xffffffff) {
      (*glGetIntegerv)(0x8a34,&local_80);
      UBOPoolSize = ((OpenGLConsoleVariables::RequestedUBOPoolSize + -1 + local_80) / local_80) *
                    local_80;
    }
    (*glBufferStorage)(0x8a11,(long64)UBOPoolSize,(void *)0x0,0xc2);
    if (UBOPoolSize == 0xffffffff) {
      (*glGetIntegerv)(0x8a34,&local_7c);
      UBOPoolSize = ((OpenGLConsoleVariables::RequestedUBOPoolSize + -1 + local_7c) / local_7c) *
                    local_7c;
    }
    puVar8 = (*glMapBufferRange)(0x8a11,0,(long64)UBOPoolSize,0xc2);
  }
  bVar5 = UBOPoolSize == 0xffffffff;
  *param_4 = puVar8;
  local_88 = puVar8;
  if (bVar5) {
    (*glGetIntegerv)(0x8a34,&local_74);
    UBOPoolSize = ((OpenGLConsoleVariables::RequestedUBOPoolSize + -1 + local_74) / local_74) *
                  local_74;
  }
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18[0] = (undefined1)UBOPoolSize;
  auVar18[1] = UBOPoolSize._1_1_;
  auVar18[2] = UBOPoolSize._2_1_;
  auVar18[3] = UBOPoolSize._3_1_;
  if (auVar18 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_OpenGLFreeUniformBufferMemory;
    if (StatPtr_STAT_OpenGLFreeUniformBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)0x0) {
      pFVar9 = FName::FName(local_48,"STAT_OpenGLFreeUniformBufferMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLFreeUniformBufferMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLFreeUniformBufferMemory,
                          *pFVar9,L"Uniform buffer pool memory","STATGROUP_OpenGLRHI",
                          "STATCAT_Advanced",L"OpenGL RHI",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar10;
    FVar19 = FVar1.ComparisonIndex.Value;
    uVar6 = FVar1.Number;
    local_68 = FVar19.Value;
    uStack_64 = uVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_58.NameAndInfo.Number = uVar6 & 0xffffafff | 0xa000;
      local_60 = FVar1;
      local_58.StatData.Pad = auVar18;
      local_58.NameAndInfo.Index.Value = FVar19.Value;
      FThreadStats::AddStatMessage(this,&local_58);
      FStatsTrace::Add(&local_60,(long64)auVar18);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  local_98[1] = param_1;
  if (UBOPoolSize == 0xffffffff) {
    (*glGetIntegerv)(0x8a34,&local_70);
    UBOPoolSize = ((OpenGLConsoleVariables::RequestedUBOPoolSize + -1 + local_70) / local_70) *
                  local_70;
  }
  local_98[2] = UBOPoolSize;
  *local_res10 = local_98[0];
  *local_res18 = 0;
  if (((UBOPool.AllocatorInstance.Data <= (FScriptContainerElement *)local_98) &&
      ((FScriptContainerElement *)local_98 <
       UBOPool.AllocatorInstance.Data + (longlong)UBOPool.ArrayMax * 0x18)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (UBOPool.ArrayNum == UBOPool.ArrayMax) {
    UBOPool.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&UBOPool.AllocatorInstance,&UBOPool.ArrayMax);
  }
  FVar4.Data = UBOPool.AllocatorInstance.Data;
  lVar11 = (longlong)UBOPool.ArrayNum;
  pFVar12 = UBOPool.AllocatorInstance.Data + lVar11 * 0x18;
  UBOPool.ArrayNum = UBOPool.ArrayNum + 1;
  *(uint *)pFVar12 = local_98[0];
  *(uint *)(pFVar12 + 4) = local_98[1];
  *(uint *)(pFVar12 + 8) = local_98[2];
  *(uint *)(pFVar12 + 0xc) = local_98[3];
  *(uchar **)(FVar4.Data + lVar11 * 0x18 + 0x10) = local_88;
  if (4 < (byte)LogRHI._0_1_) {
    if (UBOPoolSize == 0xffffffff) {
      (*glGetIntegerv)(0x8a34,&local_6c);
      UBOPoolSize = ((OpenGLConsoleVariables::RequestedUBOPoolSize + -1 + local_6c) / local_6c) *
                    local_6c;
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

// TranslateBlendFactor @ 145c32900

/* WARNING: Enum "EBlendFactor": Some values do not have unique names */

uint __cdecl TranslateBlendFactor(EBlendFactor param_1)

{
  switch(param_1) {
  case BF_One:
    return 1;
  case BF_SourceColor:
    return 0x300;
  case BF_InverseSourceColor:
    return 0x301;
  case BF_SourceAlpha:
    return 0x302;
  case BF_InverseSourceAlpha:
    return 0x303;
  case BF_DestAlpha:
    return 0x304;
  case BF_InverseDestAlpha:
    return 0x305;
  case BF_DestColor:
    return 0x306;
  case BF_InverseDestColor:
    return 0x307;
  case BF_ConstantBlendFactor:
    return 0x8001;
  case BF_InverseConstantBlendFactor:
    return 0x8002;
  default:
    return 0;
  }
}

// TranslateCompareFunction @ 145c329a0

/* WARNING: Enum "ECompareFunction": Some values do not have unique names */

ECompareFunction __cdecl TranslateCompareFunction(uint param_1)

{
  switch(param_1) {
  case 0x200:
    return CF_Never;
  case 0x201:
    return CF_DepthFarther;
  case 0x202:
    return CF_Equal;
  case 0x203:
    return CF_DepthFartherOrEqual;
  case 0x204:
    return CF_DepthNear;
  case 0x205:
    return CF_NotEqual;
  case 0x206:
    return CF_DepthNearOrEqual;
  default:
    return CF_Always;
  }
}

// TranslateCompareFunction @ 145c32a10

/* WARNING: Enum "ECompareFunction": Some values do not have unique names */

uint __cdecl TranslateCompareFunction(ECompareFunction param_1)

{
  switch(param_1) {
  case CF_DepthFarther:
    return 0x201;
  case CF_DepthFartherOrEqual:
    return 0x203;
  case CF_DepthNear:
    return 0x204;
  case CF_DepthNearOrEqual:
    return 0x206;
  case CF_Equal:
    return 0x202;
  case CF_NotEqual:
    return 0x205;
  case CF_Never:
    return 0x200;
  default:
    return 0x207;
  }
}

// TranslateStencilOp @ 145c32a80

/* WARNING: Enum "EStencilOp": Some values do not have unique names */

EStencilOp __cdecl TranslateStencilOp(uint param_1)

{
  EStencilOp EVar1;
  
  if (0x1e02 < param_1) {
    if (param_1 == 0x1e03) {
      return SO_SaturatedDecrement;
    }
    if (param_1 != 0x8507) {
      if (param_1 != 0x8508) {
        return SO_Keep;
      }
      return SO_Decrement;
    }
    return SO_Increment;
  }
  if (param_1 == 0x1e02) {
    return EStencilOp_NumBits;
  }
  if (param_1 != 0) {
    if (param_1 != 0x150a) {
      EVar1 = SO_Keep;
      if (param_1 == 0x1e01) {
        EVar1 = SO_Replace;
      }
      return EVar1;
    }
    return SO_Invert;
  }
  return SO_Zero;
}

// TranslateStencilOp @ 145c32af0

/* WARNING: Enum "EStencilOp": Some values do not have unique names */

uint __cdecl TranslateStencilOp(EStencilOp param_1)

{
  switch(param_1) {
  case SO_Zero:
    return 0;
  case SO_Replace:
    return 0x1e01;
  case EStencilOp_NumBits:
    return 0x1e02;
  case SO_SaturatedDecrement:
    return 0x1e03;
  case SO_Invert:
    return 0x150a;
  case SO_Increment:
    return 0x8507;
  case SO_Decrement:
    return 0x8508;
  default:
    return 0x1e00;
  }
}

// UpdateBufferStats @ 145c35fc0

void __cdecl OpenGLBufferStats::UpdateBufferStats(FRHIBufferDesc *param_1,bool param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1->Size;
  if (!param_2) {
    uVar1 = -uVar1;
  }
  UE::RHICore::UpdateGlobalBufferStats(param_1,uVar1);
  return;
}

// UpdateUniformBufferContents @ 145c36dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl UpdateUniformBufferContents(FOpenGLUniformBuffer *param_1,void *param_2,uint param_3)

{
  longlong *plVar1;
  FOpenGLEUniformBufferData *pFVar2;
  FScriptContainerElement *_Dst;
  
  if (param_3 != 0) {
    pFVar2 = (param_1->EmulatedBufferData).Reference;
    if (pFVar2 == (FOpenGLEUniformBufferData *)0x0) {
      if (param_1->PersistentlyMappedBuffer != (uchar *)0x0) {
        UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
        return;
      }
      FOpenGLDynamicRHI::CachedBindUniformBuffer(FOpenGLDynamicRHI::Singleton,param_1->Resource);
      (*glBufferSubData)(0x8a11,0,(long64)param_3,param_2);
    }
    else {
      _Dst = (pFVar2->Data).AllocatorInstance.Data;
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      memcpy(_Dst,param_2,(ulonglong)param_3);
      plVar1 = &pFVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c36e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar2->_padding_)(pFVar2,1);
        return;
      }
    }
  }
  return;
}

// UpdateUniformBufferStats @ 145c36e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl OpenGLBufferStats::UpdateUniformBufferStats(long64 param_1,bool param_2)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory> FVar3;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res18;
  FStatMessage local_18;
  
  if (!param_2) {
    param_1 = -param_1;
  }
  if ((uchar  [8])param_1 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_UniformBufferMemory;
    if (StatPtr_STAT_UniformBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res18,"STAT_UniformBufferMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniformBufferMemory,*pFVar2,
                         L"Uniform Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
                         false,ST_int64,false,false,MCR_GPU);
    }
    FVar1 = *(FName *)FVar3;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res18 = FVar1;
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res18 = FVar1;
      local_18.StatData.Pad = (uchar  [8])param_1;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_18);
      FStatsTrace::Add(&local_res18,param_1);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  LOCK();
  GRHIGlobals.UniformBufferMemorySize = GRHIGlobals.UniformBufferMemorySize + param_1;
  UNLOCK();
  return;
}

// VerifyLinkedProgram @ 145c37c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl VerifyLinkedProgram(uint param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkVerifyTime> FVar14;
  HGLRC pHVar15;
  LARGE_INTEGER *_Str;
  size_t sVar16;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FNameEntryId FVar17;
  FName FVar18;
  longlong lVar19;
  undefined1 auStackY_1e8 [32];
  FColor_u_0 local_188;
  int local_184;
  FName local_180;
  FStatMessage local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  lVar19 = 0;
  FVar14 = StatPtr_STAT_OpenGLShaderLinkVerifyTime;
  if (StatPtr_STAT_OpenGLShaderLinkVerifyTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkVerifyTime>)0x0) {
    pFVar13 = FName::FName((FName *)&local_170,"STAT_OpenGLShaderLinkVerifyTime");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkVerifyTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLinkVerifyTime,
                        *pFVar13,L"Shader link verify time","STATGROUP_OpenGLRHI","STATCAT_Advanced"
                        ,L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar10 = local_38.s.HighPart._3_1_;
  uVar8 = local_38.s.HighPart._2_1_;
  uVar6 = local_38.s.HighPart._0_2_;
  FVar18 = *(FName *)FVar14;
  bVar2 = false;
  bVar4 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  if ((FVar17.Value != 0) || (FVar18.Number != 0)) {
    local_38.s.HighPart._2_1_ = FVar18.Number._2_1_;
    uVar9 = local_38.s.HighPart._2_1_;
    local_38.s.HighPart._3_1_ = FVar18.Number._3_1_;
    uVar11 = local_38.s.HighPart._3_1_;
    local_38.s.HighPart._0_2_ = FVar18.Number._0_2_;
    uVar7 = local_38.s.HighPart._0_2_;
    local_38.s.HighPart._0_2_ = uVar6;
    local_38.s.HighPart._2_1_ = uVar8;
    local_38.s.HighPart._3_1_ = uVar10;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_38.s.LowPart = FVar17.Value;
        local_38.s.HighPart._0_2_ = uVar7;
        local_38.s.HighPart._2_1_ = uVar9;
        local_38.s.HighPart._3_1_ = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_38.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x17a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_38.s.LowPart = FVar17.Value;
      local_38.s.HighPart._0_2_ = uVar7;
      local_38.s.HighPart._2_1_ = uVar9;
      local_38.s.HighPart._3_1_ = uVar11;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar3 = true;
      goto LAB_145c37df6;
    }
  }
  bVar3 = false;
  FVar18 = local_180;
LAB_145c37df6:
  pHVar15 = wglGetCurrentContext();
  if (pHVar15 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  local_184 = 0;
  (*glGetProgramiv)(param_1,0x8b82,&local_184);
  if (local_184 == 1) {
    bVar12 = true;
  }
  else {
    (*glGetError)();
    local_38.QuadPart._0_1_ = s_No_log[0];
    local_38.QuadPart._1_1_ = s_No_log[1];
    local_38.QuadPart._2_1_ = s_No_log[2];
    local_38.QuadPart._3_1_ = s_No_log[3];
    _Str = &local_38;
    local_38._4_1_ = s_No_log[4];
    local_38._5_1_ = s_No_log[5];
    local_38.s.HighPart._2_1_ = s_No_log[6];
    (*glGetProgramiv)(param_1,0x8b84,(int *)&local_188.Bits);
    if (1 < (int)local_188.Bits) {
      _Str = FMemory::Malloc((longlong)(int)local_188.Bits,0);
      (*glGetProgramInfoLog)(param_1,local_188.Bits,(int *)0x0,(char *)&_Str->QuadPart);
    }
    if (1 < (byte)LogRHI._0_1_) {
      local_158._padding_ = 0;
      if (_Str == (LARGE_INTEGER *)0x0) {
        local_158.StringLength = 0;
        local_158.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar16 = strlen((char *)&_Str->QuadPart);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,(char *)&_Str->QuadPart,(int)sVar16,Yes);
      }
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    if (1 < (int)local_188.Bits) {
      FMemory::Free(_Str);
    }
    pTVar5 = CVarIgnoreLinkFailure.Ref;
    bVar12 = IsInParallelGameThread();
    if (!bVar12) {
      bVar12 = IsInGameThread();
      if (!bVar12) {
        lVar19 = 4;
      }
    }
    bVar12 = *(int *)((longlong)pTVar5->ShadowedValue + lVar19) == 1;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_170.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_170.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_38);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_38.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_38.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_38.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_38.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_170);
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
  return bVar12;
}

// VerifyOpenGLResult @ 145c380e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
VerifyOpenGLResult(uint param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,uint param_5)

{
  if ((param_1 != 0) && (2 < (byte)LogRHI._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

// VerifyShaderCompilation @ 145c38150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl VerifyShaderCompilation(uint param_1,char *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  bool bVar12;
  HGLRC pHVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileVerifyTime> FVar15;
  LARGE_INTEGER *_Str;
  size_t sVar16;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FNameEntryId FVar17;
  FName FVar18;
  longlong lVar19;
  undefined1 auStackY_1e8 [32];
  FColor_u_0 local_188 [2];
  FStatMessage local_180;
  FName local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pHVar13 = wglGetCurrentContext();
  if (pHVar13 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  lVar19 = 0;
  FVar15 = StatPtr_STAT_OpenGLShaderCompileVerifyTime;
  if (StatPtr_STAT_OpenGLShaderCompileVerifyTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileVerifyTime>)0x0) {
    pFVar14 = FName::FName((FName *)&local_180,"STAT_OpenGLShaderCompileVerifyTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileVerifyTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderCompileVerifyTime,
                        *pFVar14,L"Shader compile verify time","STATGROUP_OpenGLRHI",
                        "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar10 = local_38.s.HighPart._3_1_;
  uVar8 = local_38.s.HighPart._2_1_;
  uVar6 = local_38.s.HighPart._0_2_;
  FVar18 = *(FName *)FVar15;
  bVar2 = false;
  bVar4 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  if ((FVar17.Value == 0) && (FVar18.Number == 0)) {
LAB_145c38302:
    bVar3 = false;
    FVar18 = local_170;
  }
  else {
    local_38.s.HighPart._2_1_ = FVar18.Number._2_1_;
    uVar9 = local_38.s.HighPart._2_1_;
    local_38.s.HighPart._3_1_ = FVar18.Number._3_1_;
    uVar11 = local_38.s.HighPart._3_1_;
    local_38.s.HighPart._0_2_ = FVar18.Number._0_2_;
    uVar7 = local_38.s.HighPart._0_2_;
    local_38.s.HighPart._0_2_ = uVar6;
    local_38.s.HighPart._2_1_ = uVar8;
    local_38.s.HighPart._3_1_ = uVar10;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_38.s.LowPart = FVar17.Value;
        local_38.s.HighPart._0_2_ = uVar7;
        local_38.s.HighPart._2_1_ = uVar9;
        local_38.s.HighPart._3_1_ = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_38.s,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x2a2);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145c38302;
    local_38.s.LowPart = FVar17.Value;
    local_38.s.HighPart._0_2_ = uVar7;
    local_38.s.HighPart._2_1_ = uVar9;
    local_38.s.HighPart._3_1_ = uVar11;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
  }
  (*glGetShaderiv)(param_1,0x8b81,(int *)&local_180);
  if (local_180.StatData.Pad._0_4_ == 1) {
    bVar12 = true;
    goto LAB_145c3849b;
  }
  local_38.QuadPart._0_1_ = s_No_log[0];
  local_38.QuadPart._1_1_ = s_No_log[1];
  local_38.QuadPart._2_1_ = s_No_log[2];
  local_38.QuadPart._3_1_ = s_No_log[3];
  _Str = &local_38;
  local_38._4_1_ = s_No_log[4];
  local_38._5_1_ = s_No_log[5];
  local_38.s.HighPart._2_1_ = s_No_log[6];
  (*glGetShaderiv)(param_1,0x8b84,(int *)&local_188[0].Bits);
  if (1 < (int)local_188[0].Bits) {
    _Str = FMemory::Malloc((longlong)(int)local_188[0].Bits,0);
    (*glGetShaderInfoLog)(param_1,local_188[0].Bits,(int *)0x0,(char *)&_Str->QuadPart);
  }
  if (param_2 == (char *)0x0) {
LAB_145c383f1:
    if (1 < (byte)LogRHI._0_1_) {
      local_158._padding_ = 0;
      if (_Str == (LARGE_INTEGER *)0x0) {
        local_158.Ptr = (wchar_t *)0x0;
        local_158.StringLength = 0;
      }
      else {
        sVar16 = strlen((char *)&_Str->QuadPart);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,(char *)&_Str->QuadPart,(int)sVar16,Yes);
      }
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else if (1 < (byte)LogRHI._0_1_) {
    local_158._padding_ = 0;
    sVar16 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,param_2,(int)sVar16,Yes);
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogRHI);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    goto LAB_145c383f1;
  }
  if (1 < (int)local_188[0].Bits) {
    FMemory::Free(_Str);
  }
  pTVar5 = CVarIgnoreShaderCompileFailure.Ref;
  bVar12 = IsInParallelGameThread();
  if (!bVar12) {
    bVar12 = IsInGameThread();
    if (!bVar12) {
      lVar19 = 4;
    }
  }
  bVar12 = *(int *)((longlong)pTVar5->ShadowedValue + lVar19) == 1;
LAB_145c3849b:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_180.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_180.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_38);
      local_180.StatData.Pad[4] = '\0';
      local_180.StatData.Pad[5] = '\0';
      local_180.StatData.Pad[6] = '\0';
      local_180.StatData.Pad[7] = '\0';
      local_180.StatData.Pad[0] = local_38.s.LowPart._0_1_;
      local_180.StatData.Pad[1] = local_38.s.LowPart._1_1_;
      local_180.StatData.Pad[2] = local_38.s.LowPart._2_1_;
      local_180.StatData.Pad[3] = local_38.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_180);
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
  return bVar12;
}

// IMPLEMENT_MODULE_OpenGLDrv @ 145c38c80

void __cdecl IMPLEMENT_MODULE_OpenGLDrv(void)

{
  return;
}

// PE_AppendCString @ 145c38c90

void __cdecl PE_AppendCString(TArray<char,TSizedDefaultAllocator<32>_> *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  FScriptContainerElement *_Src;
  int iVar5;
  int iVar6;
  
  if (param_1->ArrayNum < 1) {
    sVar4 = strlen(param_2);
    iVar6 = (int)sVar4 + 1;
    if (((param_2 == (char *)0x0) && (iVar6 != 0)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar6,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    if (iVar6 != 0) {
      memcpy((param_1->AllocatorInstance).Data + iVar3,param_2,(longlong)iVar6);
      return;
    }
  }
  else {
    iVar6 = param_1->ArrayNum + -1;
    sVar4 = strlen(param_2);
    if ((param_2 == (char *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x793,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = (int)sVar4;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    _Src = (param_1->AllocatorInstance).Data + iVar6;
    memmove(_Src + iVar5,_Src,(longlong)(iVar3 - iVar6));
    if (iVar5 != 0) {
      memcpy((param_1->AllocatorInstance).Data + iVar6,param_2,(longlong)iVar5);
    }
  }
  return;
}

// PE_ReplaceCString @ 145c38ca0

void __cdecl
PE_ReplaceCString(TArray<char,TSizedDefaultAllocator<32>_> *param_1,char *param_2,char *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  sVar6 = strlen(param_2);
  sVar7 = strlen(param_3);
  pcVar8 = strstr((char *)(param_1->AllocatorInstance).Data,param_2);
  if (pcVar8 != (char *)0x0) {
    piVar1 = &param_1->ArrayNum;
    iVar12 = (int)sVar7;
    do {
      uVar10 = (int)pcVar8 - *(int *)&(param_1->AllocatorInstance).Data;
      uVar11 = (uint)sVar6;
      uVar4 = 0;
      if ((int)(uVar10 + uVar11) <= *piVar1) {
        uVar4 = ~(uVar10 | uVar11) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar11 != 0) {
        pFVar9 = (param_1->AllocatorInstance).Data + (int)uVar10;
        iVar5 = (*piVar1 - uVar11) - uVar10;
        if (iVar5 != 0) {
          memmove(pFVar9,pFVar9 + (int)uVar11,(longlong)iVar5);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
      }
      if ((param_3 == (char *)0x0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x793,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar12,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      pFVar9 = (param_1->AllocatorInstance).Data + (int)uVar10;
      memmove(pFVar9 + iVar12,pFVar9,(longlong)(int)(iVar5 - uVar10));
      if (iVar12 != 0) {
        memcpy((param_1->AllocatorInstance).Data + (int)uVar10,param_3,(longlong)iVar12);
      }
      pcVar8 = strstr((char *)((param_1->AllocatorInstance).Data + (int)uVar10),param_2);
    } while (pcVar8 != (char *)0x0);
  }
  return;
}

// ActiveSyncs'' @ 1503caaf0

void __cdecl `dynamic_atexit_destructor_for_'FOpenGLGPUFence::ActiveSyncs__(void)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  TNode *pTVar4;
  
  while (pTVar4 = FOpenGLGPUFence::ActiveSyncs.Tail, pTVar4 != (TNode *)0x0) {
    FOpenGLGPUFence::ActiveSyncs.Tail = pTVar4->NextNode;
    if (pTVar4 != (TNode *)0x0) {
      pFVar3 = (pTVar4->Item).Event.Reference;
      if (pFVar3 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar3->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
        }
      }
      ::operator_delete(pTVar4,0x18);
    }
  }
  FOpenGLGPUFence::ActiveSyncs.Tail = pTVar4;
  return;
}

// CVarPBCEnable'' @ 1503cab70

void __cdecl `dynamic_atexit_destructor_for_'FOpenGLProgramBinaryCache::CVarPBCEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FOpenGLProgramBinaryCache::CVarPBCEnable);
  return;
}

// CVarRestartAndroidAfterPrecompile'' @ 1503cab90

void __cdecl
`dynamic_atexit_destructor_for_'FOpenGLProgramBinaryCache::CVarRestartAndroidAfterPrecompile__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&FOpenGLProgramBinaryCache::CVarRestartAndroidAfterPrecompile);
  return;
}

// PooledQueries'' @ 1503cabb0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __cdecl `dynamic_atexit_destructor_for_'FOpenGLRenderQuery::PooledQueries__(void)

{
  FOpenGLDynamicRHI **ppFVar1;
  longlong lVar2;
  FOpenGLDynamicRHI **ppFVar3;
  
  ppFVar3 = &FOpenGLDynamicRHI::Singleton;
  lVar2 = 3;
  do {
    ppFVar1 = ppFVar3 + -2;
    ppFVar3 = ppFVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*ppFVar1 != (FOpenGLDynamicRHI *)0x0) {
      FMemory::Free(*ppFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'AllocationList'' @ 1503cac00

void __cdecl _dynamic_atexit_destructor_for__AllocationList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AllocationList.AllocatorInstance.Data;
  if (AllocationList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AllocationList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AllocationMap'' @ 1503cac20

void __cdecl _dynamic_atexit_destructor_for__AllocationMap__(void)

{
  AllocationMap._72_4_ = 0;
  if (AllocationMap._64_8_ != 0) {
    FMemory::Free((void *)AllocationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,PoolAllocation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,PoolAllocation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,PoolAllocation_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&AllocationMap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowPSOPrecaching'' @ 1503cac60

void __cdecl _dynamic_atexit_destructor_for__CVarAllowPSOPrecaching__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowPSOPrecaching);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowRGLHIThread'' @ 1503cac80

void __cdecl _dynamic_atexit_destructor_for__CVarAllowRGLHIThread__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowRGLHIThread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBinaryCacheMMapAfterEveryMB'' @ 1503caca0

void __cdecl _dynamic_atexit_destructor_for__CVarBinaryCacheMMapAfterEveryMB__(void)

{
  CVarBinaryCacheMMapAfterEveryMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBinaryCacheMMapAfterEveryMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBinaryCacheMaxPermittedSizeMB'' @ 1503cacc0

void __cdecl _dynamic_atexit_destructor_for__CVarBinaryCacheMaxPermittedSizeMB__(void)

{
  CVarBinaryCacheMaxPermittedSizeMB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBinaryCacheMaxPermittedSizeMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBinaryCachePeriodicFlushProgramCount'' @ 1503cace0

void __cdecl _dynamic_atexit_destructor_for__CVarBinaryCachePeriodicFlushProgramCount__(void)

{
  CVarBinaryCachePeriodicFlushProgramCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarBinaryCachePeriodicFlushProgramCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeferTextureCreation'' @ 1503cad00

void __cdecl _dynamic_atexit_destructor_for__CVarDeferTextureCreation__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDeferTextureCreation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeferTextureCreationExcludeMask'' @ 1503cad20

void __cdecl _dynamic_atexit_destructor_for__CVarDeferTextureCreationExcludeMask__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDeferTextureCreationExcludeMask);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDeferTextureCreationKeepLowerMipCount'' @ 1503cad40

void __cdecl _dynamic_atexit_destructor_for__CVarDeferTextureCreationKeepLowerMipCount__(void)

{
  CVarDeferTextureCreationKeepLowerMipCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDeferTextureCreationKeepLowerMipCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableLRU'' @ 1503cad60

void __cdecl _dynamic_atexit_destructor_for__CVarEnableLRU__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableLRU);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnablePSOFileCacheWhenPrecachingActive'' @ 1503cad80

void __cdecl _dynamic_atexit_destructor_for__CVarEnablePSOFileCacheWhenPrecachingActive__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnablePSOFileCacheWhenPrecachingActive);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEvictUntouchedProgramSeconds'' @ 1503cada0

void __cdecl _dynamic_atexit_destructor_for__CVarEvictUntouchedProgramSeconds__(void)

{
  CVarEvictUntouchedProgramSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEvictUntouchedProgramSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGCacheAllProgramBinaries'' @ 1503cadc0

void __cdecl _dynamic_atexit_destructor_for__CVarGCacheAllProgramBinaries__(void)

{
  CVarGCacheAllProgramBinaries._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGCacheAllProgramBinaries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGLDepth24Bit'' @ 1503cade0

void __cdecl _dynamic_atexit_destructor_for__CVarGLDepth24Bit__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGLDepth24Bit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGLExtraDeletionLatency'' @ 1503cae00

void __cdecl _dynamic_atexit_destructor_for__CVarGLExtraDeletionLatency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGLExtraDeletionLatency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreLinkFailure'' @ 1503cae20

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreLinkFailure__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreLinkFailure);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIgnoreShaderCompileFailure'' @ 1503cae40

void __cdecl _dynamic_atexit_destructor_for__CVarIgnoreShaderCompileFailure__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIgnoreShaderCompileFailure);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLRUKeepProgramBinaryResident'' @ 1503cae60

void __cdecl _dynamic_atexit_destructor_for__CVarLRUKeepProgramBinaryResident__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLRUKeepProgramBinaryResident);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLRUMaxProgramBinarySize'' @ 1503cae80

void __cdecl _dynamic_atexit_destructor_for__CVarLRUMaxProgramBinarySize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLRUMaxProgramBinarySize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLRUMaxProgramCount'' @ 1503caea0

void __cdecl _dynamic_atexit_destructor_for__CVarLRUMaxProgramCount__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLRUMaxProgramCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxBinaryProgramLoadTime'' @ 1503caec0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxBinaryProgramLoadTime__(void)

{
  CVarMaxBinaryProgramLoadTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxBinaryProgramLoadTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSubDataSize'' @ 1503caee0

void __cdecl OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarMaxSubDataSize__(void)

{
  CVarMaxSubDataSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSubDataSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMemoryMapGLProgramCache'' @ 1503caf00

void __cdecl _dynamic_atexit_destructor_for__CVarMemoryMapGLProgramCache__(void)

{
  CVarMemoryMapGLProgramCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMemoryMapGLProgramCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOpenGLAddExtensions'' @ 1503caf20

void __cdecl _dynamic_atexit_destructor_for__CVarOpenGLAddExtensions__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOpenGLAddExtensions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOpenGLFenceKickPerDrawCount'' @ 1503caf40

void __cdecl
OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarOpenGLFenceKickPerDrawCount__(void)

{
  CVarOpenGLFenceKickPerDrawCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOpenGLFenceKickPerDrawCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOpenGLForceBilinearSampling'' @ 1503caf60

void __cdecl
OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarOpenGLForceBilinearSampling__(void)

{
  CVarOpenGLForceBilinearSampling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOpenGLForceBilinearSampling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOpenGLStripExtensions'' @ 1503caf80

void __cdecl _dynamic_atexit_destructor_for__CVarOpenGLStripExtensions__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOpenGLStripExtensions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerFrameGLErrorCheck'' @ 1503cafa0

void __cdecl _dynamic_atexit_destructor_for__CVarPerFrameGLErrorCheck__(void)

{
  CVarPerFrameGLErrorCheck._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPerFrameGLErrorCheck);
  return;
}

// `dynamic_atexit_destructor_for_'CVarProgramLRUResidentCountBeforeEviction'' @ 1503cafc0

void __cdecl _dynamic_atexit_destructor_for__CVarProgramLRUResidentCountBeforeEviction__(void)

{
  CVarProgramLRUResidentCountBeforeEviction._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarProgramLRUResidentCountBeforeEviction);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRebindTextureBuffers'' @ 1503cafe0

void __cdecl
OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarRebindTextureBuffers__(void)

{
  CVarRebindTextureBuffers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRebindTextureBuffers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipCompute'' @ 1503cb000

void __cdecl OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarSkipCompute__(void)

{
  CVarSkipCompute._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipCompute);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStoreCompressedBinaries'' @ 1503cb020

void __cdecl UE::OpenGL::_dynamic_atexit_destructor_for__CVarStoreCompressedBinaries__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStoreCompressedBinaries);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTextureEvictionFrameCount'' @ 1503cb040

void __cdecl _dynamic_atexit_destructor_for__CVarTextureEvictionFrameCount__(void)

{
  CVarTextureEvictionFrameCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTextureEvictionFrameCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTextureEvictionLogging'' @ 1503cb060

void __cdecl _dynamic_atexit_destructor_for__CVarTextureEvictionLogging__(void)

{
  CVarTextureEvictionLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTextureEvictionLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTextureEvictionMinLRUCapacity'' @ 1503cb080

void __cdecl _dynamic_atexit_destructor_for__CVarTextureEvictionMinLRUCapacity__(void)

{
  CVarTextureEvictionMinLRUCapacity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTextureEvictionMinLRUCapacity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTexturesToEvictPerFrame'' @ 1503cb0a0

void __cdecl _dynamic_atexit_destructor_for__CVarTexturesToEvictPerFrame__(void)

{
  CVarTexturesToEvictPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTexturesToEvictPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUBODirectWrite'' @ 1503cb0c0

void __cdecl OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUBODirectWrite__(void)

{
  CVarUBODirectWrite._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUBODirectWrite);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUBOPoolSize'' @ 1503cb0e0

void __cdecl OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUBOPoolSize__(void)

{
  CVarUBOPoolSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUBOPoolSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseBufferDiscard'' @ 1503cb100

void __cdecl OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUseBufferDiscard__(void)

{
  CVarUseBufferDiscard._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseBufferDiscard);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseGlClipControlIfAvailable'' @ 1503cb120

void __cdecl
OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUseGlClipControlIfAvailable__(void)

{
  CVarUseGlClipControlIfAvailable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseGlClipControlIfAvailable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseMapBuffer'' @ 1503cb140

void __cdecl OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUseMapBuffer__(void)

{
  CVarUseMapBuffer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseMapBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUsePersistentMappingStagingBuffer'' @ 1503cb160

void __cdecl
OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUsePersistentMappingStagingBuffer__
          (void)

{
  CVarUsePersistentMappingStagingBuffer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUsePersistentMappingStagingBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseStagingBuffer'' @ 1503cb180

void __cdecl OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUseStagingBuffer__(void)

{
  CVarUseStagingBuffer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseStagingBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseUnsynchronizedBufferMapping'' @ 1503cb1a0

void __cdecl
OpenGLConsoleVariables::_dynamic_atexit_destructor_for__CVarUseUnsynchronizedBufferMapping__(void)

{
  CVarUseUnsynchronizedBufferMapping._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseUnsynchronizedBufferMapping)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CacheStats'' @ 1503cb1c0

void __cdecl
`FOpenGLBinaryCacheStats::Get'::__l2::_dynamic_atexit_destructor_for__CacheStats__(void)

{
  `public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
  ::__l2::CacheStats.KeyToTimes._72_4_ = 0;
  if (`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
      ::__l2::CacheStats.KeyToTimes._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
                          ::__l2::CacheStats.KeyToTimes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
                 ::__l2::CacheStats.KeyToTimes);
                    /* WARNING: Could not recover jumptable at 0x0001503cb1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_static_class_FOpenGLBinaryCacheStats&___ptr64___cdecl_FOpenGLBinaryCacheStats::Get(void)'
              ::__l2::CacheStats);
  return;
}

// `dynamic_atexit_destructor_for_'CompiledShaderCache'' @ 1503cb210

void __cdecl
`GetOpenGLCompiledShaderCache'::__l2::_dynamic_atexit_destructor_for__CompiledShaderCache__(void)

{
  CompiledShaderCache._72_4_ = 0;
  if (CompiledShaderCache._64_8_ != 0) {
    FMemory::Free((void *)CompiledShaderCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&CompiledShaderCache);
  return;
}

// `dynamic_atexit_destructor_for_'ConsoleCommandPrintProgramStats'' @ 1503cb250

void __cdecl _dynamic_atexit_destructor_for__ConsoleCommandPrintProgramStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ConsoleCommandPrintProgramStats);
  return;
}

// `dynamic_atexit_destructor_for_'GCompiledShaderCacheCS'' @ 1503cb270

void __cdecl _dynamic_atexit_destructor_for__GCompiledShaderCacheCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cb277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GCompiledShaderCacheCS);
  return;
}

// `dynamic_atexit_destructor_for_'GGLEmulatedUniformBufferDataFactoryCS'' @ 1503cb290

void __cdecl _dynamic_atexit_destructor_for__GGLEmulatedUniformBufferDataFactoryCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cb297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GGLEmulatedUniformBufferDataFactoryCS);
  return;
}

// `dynamic_atexit_destructor_for_'GGLUniformBufferPoolCS'' @ 1503cb2b0

void __cdecl _dynamic_atexit_destructor_for__GGLUniformBufferPoolCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cb2b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GGLUniformBufferPoolCS);
  return;
}

// `dynamic_atexit_destructor_for_'GLEmulatedUniformBufferPool'' @ 1503cb2d0

void __cdecl _dynamic_atexit_destructor_for__GLEmulatedUniformBufferPool__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*paaTVar3) [45] [2];
  
  paaTVar3 = SafeGLUniformBufferPools;
  lVar2 = 0x5a;
  do {
    pFVar1 = (((TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> *)
              ((longlong)paaTVar3 + -0x10))->AllocatorInstance).Data;
    paaTVar3 = (TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*) [45] [2])
               ((longlong)paaTVar3 + -0x10);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GLUniformBufferPool'' @ 1503cb320

void __cdecl _dynamic_atexit_destructor_for__GLUniformBufferPool__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*paTVar3) [2];
  
  paTVar3 = GLEmulatedUniformBufferPool;
  lVar2 = 0x5a;
  do {
    pFVar1 = (((TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> *)
              ((longlong)paTVar3 + -0x10))->AllocatorInstance).Data;
    paTVar3 = (TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*) [2])
              ((longlong)paTVar3 + -0x10);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GOpenGLVertexDeclarationCache'' @ 1503cb370

void __cdecl _dynamic_atexit_destructor_for__GOpenGLVertexDeclarationCache__(void)

{
  GOpenGLVertexDeclarationCache._72_4_ = 0;
  if (GOpenGLVertexDeclarationCache._64_8_ != 0) {
    FMemory::Free((void *)GOpenGLVertexDeclarationCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenGLVertexDeclarationKey,TRefCountPtr<FRHIVertexDeclaration>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GOpenGLVertexDeclarationCache);
  return;
}

// `dynamic_atexit_destructor_for_'GPendingGLProgramCreateRequestsCS'' @ 1503cb3b0

void __cdecl _dynamic_atexit_destructor_for__GPendingGLProgramCreateRequestsCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cb3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GPendingGLProgramCreateRequestsCS);
  return;
}

// `dynamic_atexit_destructor_for_'GProgramBinaryFileCacheCS'' @ 1503cb3d0

void __cdecl _dynamic_atexit_destructor_for__GProgramBinaryFileCacheCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cb3d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GProgramBinaryFileCacheCS);
  return;
}

// `dynamic_atexit_destructor_for_'GSamplerStateCache'' @ 1503cb3f0

void __cdecl _dynamic_atexit_destructor_for__GSamplerStateCache__(void)

{
  GSamplerStateCache._72_4_ = 0;
  if (GSamplerStateCache._64_8_ != 0) {
    FMemory::Free((void *)GSamplerStateCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GSamplerStateCache);
  return;
}

// `dynamic_atexit_destructor_for_'GShaderCachePrecompileContext'' @ 1503cb430

void __cdecl _dynamic_atexit_destructor_for__GShaderCachePrecompileContext__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GShaderCachePrecompileContext.CacheName.Data.AllocatorInstance.Data;
  if (GShaderCachePrecompileContext.CacheName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GShaderCachePrecompileContext.CacheName.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'LogOpenGL'' @ 1503cb450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenGL__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenGL);
  return;
}

// `dynamic_atexit_destructor_for_'Lru'' @ 1503cb470

void __cdecl `FTextureEvictionLRU::Get'::__l2::_dynamic_atexit_destructor_for__Lru__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503cb477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_static_class_FTextureEvictionLRU&___ptr64___cdecl_FTextureEvictionLRU::Get(void)'
              ::__l2::Lru);
  return;
}

// `dynamic_atexit_destructor_for_'OpenGLFramebufferCache'' @ 1503cb490

void __cdecl
`GetOpenGLFramebufferCache'::__l2::_dynamic_atexit_destructor_for__OpenGLFramebufferCache__(void)

{
  OpenGLFramebufferCache._72_4_ = 0;
  if (OpenGLFramebufferCache._64_8_ != 0) {
    FMemory::Free((void *)OpenGLFramebufferCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLFramebufferKey,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenGLFramebufferKey,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenGLFramebufferKey,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&OpenGLFramebufferCache);
  return;
}

// `dynamic_atexit_destructor_for_'ProgramsCache'' @ 1503cb4d0

void __cdecl `GetOpenGLProgramsCache'::__l2::_dynamic_atexit_destructor_for__ProgramsCache__(void)

{
  ProgramsCache.ProgramCache._72_4_ = 0;
  if (ProgramsCache.ProgramCache._64_8_ != 0) {
    FMemory::Free((void *)ProgramsCache.ProgramCache._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOpenGLProgramKey,FOpenGLLinkedProgram_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&ProgramsCache.ProgramCache);
  FGLProgramCacheLRU::~FGLProgramCacheLRU(&ProgramsCache.ProgramCacheLRU);
  return;
}

// `dynamic_atexit_destructor_for_'SafeGLEmulatedUniformBufferPools'' @ 1503cb520

void __cdecl _dynamic_atexit_destructor_for__SafeGLEmulatedUniformBufferPools__(void)

{
  FStaticBasicLogDynamicData *pFVar1;
  longlong lVar2;
  FStaticBasicLogDynamicData *pFVar3;
  
  pFVar3 = &LOG_Dynamic;
  lVar2 = 0x10e;
  do {
    pFVar1 = pFVar3 + -0x10;
    pFVar3 = pFVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'SafeGLUniformBufferPools'' @ 1503cb570

void __cdecl _dynamic_atexit_destructor_for__SafeGLUniformBufferPools__(void)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*paaTVar3) [45] [2];
  
  paaTVar3 = SafeGLEmulatedUniformBufferPools;
  lVar2 = 0x10e;
  do {
    pFVar1 = (((TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> *)
              ((longlong)paaTVar3 + -0x10))->AllocatorInstance).Data;
    paaTVar3 = (TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> (*) [45] [2])
               ((longlong)paaTVar3 + -0x10);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'ShaderNames'' @ 1503cb5c0

void __cdecl `FOpenGL3::CreateShader'::__l2::_dynamic_atexit_destructor_for__ShaderNames__(void)

{
  `public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::ShaderNames.
  _72_4_ = 0;
  if (`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::ShaderNames.
      _64_8_ != 0) {
    FMemory::Free((void *)`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'
                          ::__l2::ShaderNames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::
                 ShaderNames);
  return;
}

// `dynamic_atexit_destructor_for_'TextureLRU'' @ 1503cb600

void __cdecl
`FTextureEvictionLRU::GetLRUContainer'::__l2::_dynamic_atexit_destructor_for__TextureLRU__(void)

{
  TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::Empty
            ((TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*> *)
             &`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
              ::__l2::TextureLRU,0);
  DAT_155170048 = 0;
  if (DAT_155170040 != (void *)0x0) {
    FMemory::Free(DAT_155170040);
  }
  TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TPsoLruCache<FOpenGLTexture_*,FOpenGLTexture_*>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`private:_static_class_TPsoLruCache<FOpenGLTexture*___ptr64,FOpenGLTexture*___ptr64>&___ptr64___cdecl_FTextureEvictionLRU::GetLRUContainer(void)'
                 ::__l2::TextureLRU);
  return;
}

// `dynamic_atexit_destructor_for_'UBOPool'' @ 1503cb650

void __cdecl _dynamic_atexit_destructor_for__UBOPool__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UBOPool.AllocatorInstance.Data;
  if (UBOPool.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UBOPool.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'UniformBufferDataFactory'' @ 1503cb670

void __cdecl _dynamic_atexit_destructor_for__UniformBufferDataFactory__(void)

{
  UniformBufferDataFactory.Entries._72_4_ = 0;
  if (UniformBufferDataFactory.Entries._64_8_ != 0) {
    FMemory::Free((void *)UniformBufferDataFactory.Entries._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UniformBufferDataFactory);
  return;
}

// `dynamic_atexit_destructor_for_'UniformBufferSizeBuckets'' @ 1503cb6b0

void __cdecl _dynamic_atexit_destructor_for__UniformBufferSizeBuckets__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UniformBufferSizeBuckets.AllocatorInstance.Data;
  if (UniformBufferSizeBuckets.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UniformBufferSizeBuckets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

