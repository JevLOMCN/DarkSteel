// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 332

// GeometryCacheRendererPropertiesToDeferredInit'' @ 1413af5d0

void __cdecl
`dynamic_initializer_for_'UNiagaraGeometryCacheRendererProperties::
GeometryCacheRendererPropertiesToDeferredInit__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::
         GeometryCacheRendererPropertiesToDeferredInit__);
  return;
}

// Particles_Age'' @ 1413af5f0

void __cdecl
`dynamic_initializer_for_'UNiagaraGeometryCacheRendererProperties::Particles_Age__(void)

{
  UNiagaraGeometryCacheRendererProperties::Particles_Age._padding_._0_4_ =
       FNiagaraTypeDefinitionHandle::Register
                 ((FNiagaraTypeDefinitionHandle *)
                  &UNiagaraGeometryCacheRendererProperties::Particles_Age._padding_,
                  &FNiagaraTypeDefinition::Vec4Def);
  UNiagaraGeometryCacheRendererProperties::Particles_Age.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  UNiagaraGeometryCacheRendererProperties::Particles_Age.VarData.ArrayNum = 0;
  UNiagaraGeometryCacheRendererProperties::Particles_Age.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::Particles_Age__);
  return;
}

// Particles_ArrayIndex'' @ 1413af640

void __cdecl
`dynamic_initializer_for_'UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex__(void)

{
  UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex._padding_._0_4_ =
       FNiagaraTypeDefinitionHandle::Register
                 ((FNiagaraTypeDefinitionHandle *)
                  &UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex._padding_,
                  &FNiagaraTypeDefinition::Vec4Def);
  UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex.VarData.ArrayNum = 0;
  UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::
         Particles_ArrayIndex__);
  return;
}

// Particles_GeoCacheIsEnabled'' @ 1413af690

void __cdecl
`dynamic_initializer_for_'UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled__
          (void)

{
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled._padding_._0_4_ =
       FNiagaraTypeDefinitionHandle::Register
                 ((FNiagaraTypeDefinitionHandle *)
                  &UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled._padding_,
                  &FNiagaraTypeDefinition::Vec4Def);
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled.VarData.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled.VarData.ArrayNum = 0;
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::
         Particles_GeoCacheIsEnabled__);
  return;
}

// Particles_GeoCacheRotation'' @ 1413af6e0

void __cdecl
`dynamic_initializer_for_'UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation__
          (void)

{
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation._padding_._0_4_ =
       FNiagaraTypeDefinitionHandle::Register
                 ((FNiagaraTypeDefinitionHandle *)
                  &UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation._padding_,
                  &FNiagaraTypeDefinition::Vec4Def);
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation.VarData.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation.VarData.ArrayNum = 0;
  UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation.VarData.ArrayMax = 0;
  atexit(`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::
         Particles_GeoCacheRotation__);
  return;
}

// `dynamic_initializer_for_'CVarCodecDebug'' @ 1413af730

void __cdecl _dynamic_initializer_for__CVarCodecDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCodecDebug,L"GeometryCache.Codec.Debug",local_res8,
             L"Enables debug logging for the codec.",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarCodecDebug__);
  return;
}

// `dynamic_initializer_for_'CVarGeometryCacheSceneProxyUseIspc'' @ 1413af780

void __cdecl _dynamic_initializer_for__CVarGeometryCacheSceneProxyUseIspc__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeometryCacheSceneProxyUseIspc,L"r.GeometryCacheSceneProxy.ISPC",
             &GGeometryCacheSceneProxyUseIspc,
             L"When enabled GeometryCacheSceneProxy will use ISPC if appropriate.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGeometryCacheSceneProxyUseIspc__);
  return;
}

// `dynamic_initializer_for_'CVarInterpolateFrames'' @ 1413af7d0

void __cdecl _dynamic_initializer_for__CVarInterpolateFrames__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarInterpolateFrames,L"GeometryCache.InterpolateFrames",local_res8,
             L"Interpolate between geometry cache frames (if topology allows this).",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarInterpolateFrames__);
  return;
}

// `dynamic_initializer_for_'CVarLookaheadSeconds'' @ 1413af820

void __cdecl _dynamic_initializer_for__CVarLookaheadSeconds__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 5.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarLookaheadSeconds,L"GeometryCache.LookaheadSeconds",local_res8,
             L"The amount of data (expressed in seconds of animation) to try and keep resident in advance for geometry caches. Note this works regardless of the playback direction."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarLookaheadSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraComponentRenderPoolInactiveTimeLimit'' @ 1413af870

void __cdecl _dynamic_initializer_for__CVarNiagaraComponentRenderPoolInactiveTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraComponentRenderPoolInactiveTimeLimit,
             L"fx.Niagara.GeometryComponentRenderPoolInactiveTimeLimit",
             &GNiagaraGeometryComponentRenderPoolInactiveTimeLimit,
             L"The time in seconds an inactive component can linger in the pool before being destroyed."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraComponentRenderPoolInactiveTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarOffloadUpdate'' @ 1413af8c0

void __cdecl _dynamic_initializer_for__CVarOffloadUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarOffloadUpdate,L"GeometryCache.OffloadUpdate",local_res8,
             L"Offloat some updates from the render thread to the workers & RHI threads.",0x60);
  atexit(_dynamic_atexit_destructor_for__CVarOffloadUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarPrefetchSeconds'' @ 1413af910

void __cdecl _dynamic_initializer_for__CVarPrefetchSeconds__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarPrefetchSeconds,L"GeometryCache.PrefetchSeconds",local_res8,
             L"The amount of data (expressed in seconds of animation) to preload of geometry caches. This is the data blockingly loaded at component spawn time."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarPrefetchSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarRayTracingGeometryCache'' @ 1413af960

void __cdecl _dynamic_initializer_for__CVarRayTracingGeometryCache__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRayTracingGeometryCache,L"r.RayTracing.Geometry.GeometryCache",local_res8,
             L"Include geometry cache primitives in ray tracing effects (default = 1 (geometry cache enabled in ray tracing))"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRayTracingGeometryCache__);
  return;
}

// `dynamic_initializer_for_'CVarTrailingSeconds'' @ 1413af9b0

void __cdecl _dynamic_initializer_for__CVarTrailingSeconds__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 2.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarTrailingSeconds,L"GeometryCache.TrailingSeconds",local_res8,
             L"The amount of data (expressed in seconds of animation) to try and keep resident inverse to the playback direction for geometry caches."
             ,0x60);
  atexit(_dynamic_atexit_destructor_for__CVarTrailingSeconds__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_GeometryCache'' @ 1413afa00

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_GeometryCache__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_GeometryCache,L"GeometryCache",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogBlankProgram'' @ 1413afa50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBlankProgram__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogBlankProgram,L"LogBlankProgram",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBlankProgram__);
  return;
}

// `dynamic_initializer_for_'LogGeoCaStreaming'' @ 1413afa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGeoCaStreaming__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGeoCaStreaming,L"LogGeoCaStreaming",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogGeoCaStreaming__);
  return;
}

// `dynamic_initializer_for_'LogGeoCaStreamingCodecV1'' @ 1413afad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGeoCaStreamingCodecV1__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGeoCaStreamingCodecV1,L"LogGeoCaStreamingCodecV1",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogGeoCaStreamingCodecV1__);
  return;
}

// `dynamic_initializer_for_'LogGeoCaStreamingNormalCompression'' @ 1413afb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGeoCaStreamingNormalCompression__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGeoCaStreamingNormalCompression,
             L"LogGeoCaStreamingNormalCompression",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogGeoCaStreamingNormalCompression__);
  return;
}

// `dynamic_initializer_for_'LogGeometryCache'' @ 1413afb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGeometryCache__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGeometryCache,L"LogGeometryCache",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGeometryCache__);
  return;
}

// `dynamic_initializer_for_'LogGeometryCacheWriter'' @ 1413afb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGeometryCacheWriter__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGeometryCacheWriter,L"LogGeometryCacheWriter",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGeometryCacheWriter__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGeometryCache'' @ 1413afbd0

void __cdecl _dynamic_initializer_for__ModuleRegistrantGeometryCache__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GeometryCache";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GeometryCache",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGeometryCacheModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AddMeshSample'' @ 1413afc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AddMeshSample__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AddMeshSample == (FThreadSafeStaticStat<FStat_STAT_AddMeshSample>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AddMeshSample");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddMeshSample,*pFVar1,L"Encode Mesh Frame"
               ,"STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BlockTillAllRequestsFinished'' @ 1413afcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BlockTillAllRequestsFinished__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BlockTillAllRequestsFinished ==
      (FThreadSafeStaticStat<FStat_STAT_BlockTillAllRequestsFinished>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BlockTillAllRequestsFinished");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlockTillAllRequestsFinished,*pFVar1,
               L"Wait Untill Requests Finished","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BufferUpdateTask'' @ 1413afd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BufferUpdateTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BufferUpdateTask == (FThreadSafeStaticStat<FStat_STAT_BufferUpdateTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BufferUpdateTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BufferUpdateTask,*pFVar1,
               L"Buffer Update Task","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChunkDataResident'' @ 1413afdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChunkDataResident__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChunkDataResident == (FThreadSafeStaticStat<FStat_STAT_ChunkDataResident>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChunkDataResident");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChunkDataResident,*pFVar1,
               L"Resident Chunks","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ChunkDataStreamed'' @ 1413afe60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ChunkDataStreamed__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ChunkDataStreamed == (FThreadSafeStaticStat<FStat_STAT_ChunkDataStreamed>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ChunkDataStreamed");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChunkDataStreamed,*pFVar1,
               L"Streamed Chunks","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CodecV1Decoder'' @ 1413afef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CodecV1Decoder__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CodecV1Decoder == (FThreadSafeStaticStat<FStat_STAT_CodecV1Decoder>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CodecV1Decoder");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CodecV1Decoder,*pFVar1,L"FCodecV1Decoder",
               "STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true
               ,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodeColorStream'' @ 1413aff80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodeColorStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodeColorStream == (FThreadSafeStaticStat<FStat_STAT_DecodeColorStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodeColorStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeColorStream,*pFVar1,
               L"DecodeColorStream","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodeImportedVertexNumbersStream'' @ 1413b0010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodeImportedVertexNumbersStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodeImportedVertexNumbersStream ==
      (FThreadSafeStaticStat<FStat_STAT_DecodeImportedVertexNumbersStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodeImportedVertexNumbersStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeImportedVertexNumbersStream,*pFVar1,
               L"DecodeImportedVertexNumbersStream","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodeIndexStream'' @ 1413b00a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodeIndexStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodeIndexStream == (FThreadSafeStaticStat<FStat_STAT_DecodeIndexStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodeIndexStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeIndexStream,*pFVar1,
               L"DecodeIndexStream","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodeMotionVectorStream'' @ 1413b0130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodeMotionVectorStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodeMotionVectorStream ==
      (FThreadSafeStaticStat<FStat_STAT_DecodeMotionVectorStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodeMotionVectorStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeMotionVectorStream,*pFVar1,
               L"DecodeMotionVectorStream","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodePositionStream'' @ 1413b01c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodePositionStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodePositionStream ==
      (FThreadSafeStaticStat<FStat_STAT_DecodePositionStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodePositionStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodePositionStream,*pFVar1,
               L"DecodePositionStream","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodeTangentXStream'' @ 1413b0250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodeTangentXStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodeTangentXStream ==
      (FThreadSafeStaticStat<FStat_STAT_DecodeTangentXStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodeTangentXStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeTangentXStream,*pFVar1,
               L"DecodeTangentXStream","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodeTangentZStream'' @ 1413b02e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodeTangentZStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodeTangentZStream ==
      (FThreadSafeStaticStat<FStat_STAT_DecodeTangentZStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodeTangentZStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeTangentZStream,*pFVar1,
               L"DecodeTangentZStream","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DecodeUVStream'' @ 1413b0370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DecodeUVStream__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DecodeUVStream == (FThreadSafeStaticStat<FStat_STAT_DecodeUVStream>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DecodeUVStream");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DecodeUVStream,*pFVar1,L"DecodeUVStream",
               "STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true
               ,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeserializeIndices'' @ 1413b0400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DeserializeIndices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeserializeIndices == (FThreadSafeStaticStat<FStat_STAT_DeserializeIndices>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_DeserializeIndices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeIndices,*pFVar1,
               L"Deserialize Indices","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeserializeMesh'' @ 1413b0490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DeserializeMesh__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeserializeMesh == (FThreadSafeStaticStat<FStat_STAT_DeserializeMesh>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DeserializeMesh");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeMesh,*pFVar1,
               L"Deserialize Mesh","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeserializeMeshV1'' @ 1413b0520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DeserializeMeshV1__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeserializeMeshV1 == (FThreadSafeStaticStat<FStat_STAT_DeserializeMeshV1>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DeserializeMeshV1");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeMeshV1,*pFVar1,
               L"Deserialize Mesh","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeserializeMetadata'' @ 1413b05b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DeserializeMetadata__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeserializeMetadata == (FThreadSafeStaticStat<FStat_STAT_DeserializeMetadata>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_DeserializeMetadata");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeMetadata,*pFVar1,
               L"Deserialize Metadata","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DeserializeVertices'' @ 1413b0640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DeserializeVertices__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DeserializeVertices == (FThreadSafeStaticStat<FStat_STAT_DeserializeVertices>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_DeserializeVertices");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeVertices,*pFVar1,
               L"Deserialize Vertices","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GeometryCacheComponent_TickComponent'' @ 1413b06d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GeometryCacheComponent_TickComponent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GeometryCacheComponent_TickComponent ==
      (FThreadSafeStaticStat<FStat_STAT_GeometryCacheComponent_TickComponent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GeometryCacheComponent_TickComponent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GeometryCacheComponent_TickComponent,
               *pFVar1,L"Component Tick","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GeometryCacheSceneProxy_GetMeshElements'' @ 1413b0760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GeometryCacheSceneProxy_GetMeshElements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GeometryCacheSceneProxy_GetMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_GetMeshElements>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GeometryCacheSceneProxy_GetMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GeometryCacheSceneProxy_GetMeshElements,
               *pFVar1,L"Gather Mesh Elements","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GeometryCacheSceneProxy_MeshBatchCount'' @ 1413b07f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GeometryCacheSceneProxy_MeshBatchCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GeometryCacheSceneProxy_MeshBatchCount ==
      (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_MeshBatchCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GeometryCacheSceneProxy_MeshBatchCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GeometryCacheSceneProxy_MeshBatchCount,
               *pFVar1,L"Batch Count","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_GeometryCacheSceneProxy_TriangleCount'' @ 1413b0880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_GeometryCacheSceneProxy_TriangleCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_GeometryCacheSceneProxy_TriangleCount ==
      (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_TriangleCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_GeometryCacheSceneProxy_TriangleCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GeometryCacheSceneProxy_TriangleCount,
               *pFVar1,L"Triangle Count","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IOBandwidth'' @ 1413b0910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IOBandwidth__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IOBandwidth == (FThreadSafeStaticStat<FStat_STAT_IOBandwidth>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IOBandwidth");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IOBandwidth,*pFVar1,L"IO Bandwidth",
               "STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true,false,ST_int64,
               false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_IndexBufferUpdate'' @ 1413b09a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_IndexBufferUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_IndexBufferUpdate == (FThreadSafeStaticStat<FStat_STAT_IndexBufferUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_IndexBufferUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IndexBufferUpdate,*pFVar1,
               L"Index Buffer Update","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InterpolateFrames'' @ 1413b0a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InterpolateFrames__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InterpolateFrames == (FThreadSafeStaticStat<FStat_STAT_InterpolateFrames>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InterpolateFrames");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFrames,*pFVar1,
               L"InterpolateFrames","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InterpolateFramesSIMDColors'' @ 1413b0ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InterpolateFramesSIMDColors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InterpolateFramesSIMDColors ==
      (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDColors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InterpolateFramesSIMDColors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFramesSIMDColors,*pFVar1,
               L"InterpolateFramesSIMDColors","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InterpolateFramesSIMDMotionVectors'' @ 1413b0b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InterpolateFramesSIMDMotionVectors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InterpolateFramesSIMDMotionVectors ==
      (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InterpolateFramesSIMDMotionVectors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFramesSIMDMotionVectors,*pFVar1
               ,L"InterpolateFramesSIMDMotionVectors","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InterpolateFramesSIMDPositions'' @ 1413b0be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InterpolateFramesSIMDPositions__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InterpolateFramesSIMDPositions ==
      (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InterpolateFramesSIMDPositions");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFramesSIMDPositions,*pFVar1,
               L"InterpolateFramesSIMDPositions","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InterpolateFramesSIMDTangents'' @ 1413b0c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InterpolateFramesSIMDTangents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InterpolateFramesSIMDTangents ==
      (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDTangents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InterpolateFramesSIMDTangents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFramesSIMDTangents,*pFVar1,
               L"InterpolateFramesSIMDTangents","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_InterpolateFramesSIMDUVs'' @ 1413b0d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_InterpolateFramesSIMDUVs__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_InterpolateFramesSIMDUVs ==
      (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDUVs>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_InterpolateFramesSIMDUVs");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFramesSIMDUVs,*pFVar1,
               L"InterpolateFramesSIMDUVs","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_OutstandingRequests'' @ 1413b0d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_OutstandingRequests__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_OutstandingRequests == (FThreadSafeStaticStat<FStat_STAT_OutstandingRequests>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_OutstandingRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OutstandingRequests,*pFVar1,
               L"Outstanding Requests","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache"
               ,true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PrefetchData'' @ 1413b0e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PrefetchData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PrefetchData == (FThreadSafeStaticStat<FStat_STAT_PrefetchData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PrefetchData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PrefetchData,*pFVar1,L"Prefetch Data",
               "STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true
               ,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SetupAndReadTables'' @ 1413b0eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SetupAndReadTables__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SetupAndReadTables == (FThreadSafeStaticStat<FStat_STAT_SetupAndReadTables>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_SetupAndReadTables");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetupAndReadTables,*pFVar1,
               L"SetupAndReadTables","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateMeshData'' @ 1413b0f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateMeshData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateMeshData == (FThreadSafeStaticStat<FStat_STAT_UpdateMeshData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateMeshData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateMeshData,*pFVar1,
               L"Decode Mesh Frame","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateResourceStreaming'' @ 1413b0fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateResourceStreaming__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateResourceStreaming ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateResourceStreaming>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateResourceStreaming");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateResourceStreaming,*pFVar1,
               L"Update Resource Streaming","STATGROUP_GeometryCache","STATCAT_Advanced",
               L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_VertexBufferUpdate'' @ 1413b1060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_VertexBufferUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_VertexBufferUpdate == (FThreadSafeStaticStat<FStat_STAT_VertexBufferUpdate>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_VertexBufferUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VertexBufferUpdate,*pFVar1,
               L"Vertex Buffer Update","STATGROUP_GeometryCache","STATCAT_Advanced",L"GeometryCache"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Velocity'' @ 1413b10f0

void __cdecl MeshAttribute::VertexInstance::_dynamic_initializer_for__Velocity__(void)

{
  ::FName::FName(&Velocity,"Velocity");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h__Script_GeometryCache_1568983703'' @ 1413b1110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h__Script_GeometryCache_1568983703__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheActor_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecBase_h__Script_GeometryCache_4216647402'' @ 1413b1150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecBase_h__Script_GeometryCache_4216647402__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecBase_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h__Script_GeometryCache_2491029196'' @ 1413b1190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h__Script_GeometryCache_2491029196__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecRaw_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h__Script_GeometryCache_2272310514'' @ 1413b11d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h__Script_GeometryCache_2272310514__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheCodecV1_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h__Script_GeometryCache_2081976460'' @ 1413b1210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h__Script_GeometryCache_2081976460__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h__Script_GeometryCache_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h__Script_GeometryCache_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h__Script_GeometryCache_1530119675'' @ 1413b1260

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h__Script_GeometryCache_1530119675__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h__Script_GeometryCache_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackFlipbookAnimation_h__Script_GeometryCache_1810292782'' @ 1413b12a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackFlipbookAnimation_h__Script_GeometryCache_1810292782__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackFlipbookAnimation_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h__Script_GeometryCache_1202219451'' @ 1413b12e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h__Script_GeometryCache_1202219451__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackStreamable_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h__Script_GeometryCache_3504353849'' @ 1413b1320

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h__Script_GeometryCache_3504353849__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformAnimation_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h__Script_GeometryCache_262195309'' @ 1413b1360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h__Script_GeometryCache_262195309__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrackTransformGroupAnimation_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h__Script_GeometryCache_1006230700'' @ 1413b13a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h__Script_GeometryCache_1006230700__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheTrack_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h__Script_GeometryCache_1755423573'' @ 1413b13e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h__Script_GeometryCache_1755423573__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCache_h__Script_GeometryCache_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h__Script_GeometryCache_112792446'' @ 1413b1420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h__Script_GeometryCache_112792446__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GeometryCache",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h__Script_GeometryCache_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h__Script_GeometryCache_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GeometryCache'' @ 1413b1470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GeometryCache__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xaa659e95;
  local_res8[0].DeclarationsHash = 0xde17f53e;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GeometryCache,L"/Script/GeometryCache",
             &Z_Registration_Info_UPackage__Script_GeometryCache,local_res8);
  return;
}

// Z_Construct_UClass_UGeometryCacheComponent @ 14c9fe380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryCacheComponent(void)

{
  if (Z_Registration_Info_UClass_UGeometryCacheComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryCacheComponent.OuterSingleton,
               &Z_Construct_UClass_UGeometryCacheComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryCacheComponent.OuterSingleton;
}

// NewStructOps @ 14c9fe3c0

void * __cdecl Z_Construct_UScriptStruct_FTrackRenderData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrackRenderData,&UE::CoreUObject::Private::Construct<FTrackRenderData>,&UE::CoreUObject::Private::ConstructForTests<FTrackRenderData>,&UE::CoreUObject::Private::Destruct<FTrackRenderData>,&UE::CoreUObject::Private::Copy<FTrackRenderData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime @ 14c9fe400

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetDuration @ 14c9fe440

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetDuration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetElapsedTime @ 14c9fe480

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetElapsedTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetElapsedTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale @ 14c9fe4c0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames @ 14c9fe500

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfTracks @ 14c9fe540

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfTracks(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfTracks_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c9fe580

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor @ 14c9fe590

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection @ 14c9fe5d0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed @ 14c9fe610

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset @ 14c9fe710

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor @ 14c9fe750

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c9fe790

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames @ 14c9fe7a0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c9fe7e0

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_IsLooping @ 14c9fe7f0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_IsLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryCacheComponent_NoRegister @ 14c9fe830

UClass * __cdecl Z_Construct_UClass_UGeometryCacheComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheComponent",
               &Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton,
               UGeometryCacheComponent::StaticRegisterNativesUGeometryCacheComponent,0x620,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCacheComponent>,
               InternalVTableHelperCtorCaller<UGeometryCacheComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheComponent.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14c9fe930

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying @ 14c9fe940

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c9fe980

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed @ 14c9fe990

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_Pause @ 14c9fe9d0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_Pause(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_Play @ 14c9fead0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_Play(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart @ 14c9feb10

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed @ 14c9feb50

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd @ 14c9feb90

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewExtrapolating_SetBit @ 14c9febd0

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::
NewProp_bNewExtrapolating_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UPackage__Script_GeometryCache @ 14c9febe0

UPackage * __cdecl Z_Construct_UPackage__Script_GeometryCache(void)

{
  if (Z_Registration_Info_UPackage__Script_GeometryCache.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GeometryCache.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GeometryCache.OuterSingleton;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames @ 14c9fec20

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14c9fec60

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache @ 14c9fec70

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewLooping_SetBit @ 14c9fecb0

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetLooping @ 14c9fecc0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetLooping(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale @ 14c9fed00

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverride_SetBit @ 14c9fed40

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::
NewProp_bOverride_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor @ 14c9fed50

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed @ 14c9fed90

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset @ 14c9fedd0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor @ 14c9fee10

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UGeometryCacheComponent_Stop @ 14c9fee50

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_Stop(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bInIsRunning_SetBit @ 14c9fee90

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bInBackwards_SetBit @ 14c9feea0

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewProp_bInIsLooping_SetBit @ 14c9feeb0

void __cdecl
Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime @ 14c9feec0

UFunction * __cdecl Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bRunning_SetBit @ 14c9fef00

void __cdecl
Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x598) = 1;
  return;
}

// NewProp_bLooping_SetBit @ 14c9fef10

void __cdecl
Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x599) = 1;
  return;
}

// NewProp_bExtrapolateFrames_SetBit @ 14c9fef20

void __cdecl
Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x59a) = 1;
  return;
}

// NewProp_bManualTick_SetBit @ 14c9fef30

void __cdecl
Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x600) = 1;
  return;
}

// NewProp_bOverrideWireframeColor_SetBit @ 14c9fef40

void __cdecl
Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x601) = 1;
  return;
}

// Z_Construct_UClass_AGeometryCacheActor @ 14c9fef50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AGeometryCacheActor(void)

{
  if (Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton,
               &Z_Construct_UClass_AGeometryCacheActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AGeometryCacheActor.OuterSingleton;
}

// Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent @ 14c9fefc0

UFunction * __cdecl Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UGeometryCache_NoRegister @ 14c9ff150

UClass * __cdecl Z_Construct_UClass_UGeometryCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCache",
               &Z_Registration_Info_UClass_UGeometryCache.InnerSingleton,
               UGeometryCache::StaticRegisterNativesUGeometryCache,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCache>,
               InternalVTableHelperCtorCaller<UGeometryCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCache.InnerSingleton;
}

// Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister @ 14c9ff2b0

UClass * __cdecl Z_Construct_UClass_UGeometryCacheCodecBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecBase",
               &Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton,
               UGeometryCacheCodecBase::StaticRegisterNativesUGeometryCacheCodecBase,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheCodecBase>
               ,InternalVTableHelperCtorCaller<UGeometryCacheCodecBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecBase.InnerSingleton;
}

// Z_Construct_UClass_UGeometryCacheCodecBase @ 14c9ff3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryCacheCodecBase(void)

{
  if (Z_Registration_Info_UClass_UGeometryCacheCodecBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryCacheCodecBase.OuterSingleton,
               &Z_Construct_UClass_UGeometryCacheCodecBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecBase.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties @ 14c9ff5d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride @ 14c9ff610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheMICOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheMICOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheMICOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheMICOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference @ 14c9ff690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheReference.InnerSingleton;
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

// NewStructOps @ 14c9ff750

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraGeometryCacheMICOverride,&UE::CoreUObject::Private::Construct<FNiagaraGeometryCacheMICOverride>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraGeometryCacheMICOverride>,&UE::CoreUObject::Private::Destruct<FNiagaraGeometryCacheMICOverride>,&UE::CoreUObject::Private::Copy<FNiagaraGeometryCacheMICOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14c9ff950

void * __cdecl Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraGeometryCacheReference,&UE::CoreUObject::Private::Construct<FNiagaraGeometryCacheReference>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraGeometryCacheReference>,&UE::CoreUObject::Private::Destruct<FNiagaraGeometryCacheReference>,&UE::CoreUObject::Private::Copy<FNiagaraGeometryCacheReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsLooping_SetBit @ 14c9ff990

void __cdecl
Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// NewProp_bAssignComponentsOnParticleID_SetBit @ 14c9ff9a0

void __cdecl
Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::
NewProp_bAssignComponentsOnParticleID_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19c) = 1;
  return;
}

// Z_Construct_UClass_UGeometryCacheCodecRaw @ 14c9ff9b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryCacheCodecRaw(void)

{
  if (Z_Registration_Info_UClass_UGeometryCacheCodecRaw.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryCacheCodecRaw.OuterSingleton,
               &Z_Construct_UClass_UGeometryCacheCodecRaw_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecRaw.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14c9ffae0

void * __thiscall
FGeometryCacheModule::_scalar_deleting_destructor_(FGeometryCacheModule *this,uint param_1)

{
  *this = (FGeometryCacheModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UGeometryCacheCodecV1 @ 14c9ffbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryCacheCodecV1(void)

{
  if (Z_Registration_Info_UClass_UGeometryCacheCodecV1.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryCacheCodecV1.OuterSingleton,
               &Z_Construct_UClass_UGeometryCacheCodecV1_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecV1.OuterSingleton;
}

// Z_Construct_UClass_UGeometryCacheTrackStreamable @ 14c9ffc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryCacheTrackStreamable(void)

{
  if (Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton,
               &Z_Construct_UClass_UGeometryCacheTrackStreamable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.OuterSingleton;
}

// Z_Construct_UClass_UGeometryCache @ 14ca00040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryCache(void)

{
  if (Z_Registration_Info_UClass_UGeometryCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryCache.OuterSingleton,
               &Z_Construct_UClass_UGeometryCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryCache.OuterSingleton;
}

// Z_Construct_UClass_UGeometryCacheTrack_NoRegister @ 14ca00080

UClass * __cdecl Z_Construct_UClass_UGeometryCacheTrack_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack",
               &Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton,
               UGeometryCacheTrack::StaticRegisterNativesUGeometryCacheTrack,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheTrack>,
               InternalVTableHelperCtorCaller<UGeometryCacheTrack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrack.InnerSingleton;
}

// Z_Construct_UClass_UGeometryCacheTrack @ 14ca00270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGeometryCacheTrack(void)

{
  if (Z_Registration_Info_UClass_UGeometryCacheTrack.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGeometryCacheTrack.OuterSingleton,
               &Z_Construct_UClass_UGeometryCacheTrack_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrack.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGeometryCacheMeshData @ 14ca002d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryCacheMeshData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheMeshData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryCacheMeshData.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheMeshData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryCacheMeshData.InnerSingleton;
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

// NewStructOps @ 14ca00410

void * __cdecl Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryCacheMeshBatchInfo,&UE::CoreUObject::Private::Construct<FGeometryCacheMeshBatchInfo>,&UE::CoreUObject::Private::ConstructForTests<FGeometryCacheMeshBatchInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation @ 14ca00510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation.OuterSingleton
  ;
}

// NewStructOps @ 14ca00550

void * __cdecl Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 9;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryCacheVertexInfo,&UE::CoreUObject::Private::Construct<FGeometryCacheVertexInfo>,&UE::CoreUObject::Private::ConstructForTests<FGeometryCacheVertexInfo>,&UE::CoreUObject::Private::Destruct<FGeometryCacheVertexInfo>,&UE::CoreUObject::Private::Copy<FGeometryCacheVertexInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformAnimation_SetMesh @ 14ca00590

UFunction * __cdecl
Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformAnimation_SetMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformAnimation_SetMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation @ 14ca005d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.OuterSingleton;
}

// Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample @ 14ca00610

UFunction * __cdecl
Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14ca00650

void * __cdecl Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGeometryCacheMeshData,&UE::CoreUObject::Private::Construct<FGeometryCacheMeshData>,&UE::CoreUObject::Private::ConstructForTests<FGeometryCacheMeshData>,&UE::CoreUObject::Private::Destruct<FGeometryCacheMeshData>,&UE::CoreUObject::Private::Copy<FGeometryCacheMeshData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation @ 14ca00930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
      OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
                OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
         OuterSingleton;
}

// Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh @ 14ca00970

UFunction * __cdecl
Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// operator<<<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 14ca00a80

FArchive * __cdecl
operator<<<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  ForElementType<unsigned_int> FVar7;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
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
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)param_2;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar3;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar7,(longlong)param_2->ArrayNum << 2);
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar4)();
        return pFVar6;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TMatrix<double>,TSizedDefaultAllocator<32>_> @ 14ca00a90

FArchive * __cdecl
operator<<<UE::Math::TMatrix<double>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar9 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar7 = 0;
            if ((int)uVar11 < (int)uVar9) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) break;
            UE::Math::operator<<
                      (param_1,(TMatrix<double> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x80));
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1080,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          UE::Math::operator<<(param_1,(TMatrix<double> *)(pFVar3 + (longlong)iVar6 * 0x80));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// operator<<<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_> @ 14ca00aa0

FArchive * __cdecl
operator<<<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
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
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
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
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            (**(code **)(*(longlong *)param_1 + 0x150))
                      (param_1,(param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8);
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TObjectPtr<UGeometryCacheTrack>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = 0;
          (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
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

// operator<<<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> @ 14ca00ab0

FArchive * __cdecl
operator<<<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *param_2)

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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
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
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            operator<<(param_1,(FGeometryCacheMeshBatchInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          operator<<(param_1,(FGeometryCacheMeshBatchInfo *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc));
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

// operator<<<FGeometryCacheTrackStreamableSampleInfo,TSizedDefaultAllocator<32>_> @ 14ca00ac0

FArchive * __cdecl
operator<<<FGeometryCacheTrackStreamableSampleInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGeometryCacheTrackStreamableSampleInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FGeometryCacheTrackStreamableSampleInfo *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
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
                (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x38e39)) {
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
              operator<<(param_1,(FGeometryCacheTrackStreamableSampleInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48))
              ;
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FGeometryCacheTrackStreamableSampleInfo,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x848,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FGeometryCacheTrackStreamableSampleInfo *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48);
              DefaultConstructItems<FGeometryCacheTrackStreamableSampleInfo,int>(pFVar2,1);
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

// operator<<<FVisibilitySample,TSizedDefaultAllocator<32>_> @ 14ca00ad0

FArchive * __cdecl
operator<<<FVisibilitySample,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FVisibilitySample,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TRangeBound<float> *pTVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x14);
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
                (0x14,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xccccd)) {
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
              pTVar2 = (TRangeBound<float> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14);
              pFVar8 = operator<<(param_1,pTVar2);
              operator<<(pFVar8,pTVar2 + 1);
              operator<<(param_1,(bool *)(pTVar2 + 2));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FVisibilitySample,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x414,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pTVar2 = (TRangeBound<float> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x14);
              DefaultConstructItems<FVisibilitySample,int>(pTVar2,1);
              pFVar8 = operator<<(param_1,pTVar2);
              operator<<(pFVar8,pTVar2 + 1);
              operator<<(param_1,(bool *)(pTVar2 + 2));
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

// CastChecked<UNiagaraGeometryCacheRendererProperties_const_,UNiagaraRendererProperties_const_> @ 14ca00be0

UNiagaraGeometryCacheRendererProperties * __cdecl
CastChecked<UNiagaraGeometryCacheRendererProperties_const_,UNiagaraRendererProperties_const_>
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
    pFVar3 = GetTypeName<UNiagaraGeometryCacheRendererProperties_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraGeometryCacheRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraGeometryCacheRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraGeometryCacheRendererProperties_const_>(&local_28);
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

// CastChecked<UNiagaraGeometryCacheRendererProperties,UNiagaraRendererProperties_const_> @ 14ca00ca0

UNiagaraGeometryCacheRendererProperties * __cdecl
CastChecked<UNiagaraGeometryCacheRendererProperties,UNiagaraRendererProperties_const_>
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
    pFVar3 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraGeometryCacheRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UNiagaraGeometryCacheRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_28);
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

// CastChecked<UNiagaraGeometryCacheRendererProperties,UObject> @ 14ca00d60

UNiagaraGeometryCacheRendererProperties * __cdecl
CastChecked<UNiagaraGeometryCacheRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraGeometryCacheRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraGeometryCacheRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_28);
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

// ConstructItems<FNiagaraGeometryCacheMICOverride,FNiagaraGeometryCacheMICOverride,int> @ 14ca010d0

void __cdecl
ConstructItems<FNiagaraGeometryCacheMICOverride,FNiagaraGeometryCacheMICOverride,int>
          (void *param_1,FNiagaraGeometryCacheMICOverride *param_2,int param_3)

{
  UMaterialInterface *pUVar1;
  UMaterialInstanceConstant *pUVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->OriginalMaterial).field0_0x0.DebugPtr;
      *(UMaterialInterface **)(lVar3 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pUVar2 = (param_2->ReplacementMaterial).field0_0x0.DebugPtr;
      *(UMaterialInstanceConstant **)(lVar3 + 8 + (longlong)param_2) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UMaterialInstanceConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateDefaultBinding<int> @ 14ca01150

FNiagaraVariableAttributeBinding * __cdecl
CreateDefaultBinding<int>
          (FNiagaraVariableAttributeBinding *__return_storage_ptr__,FNiagaraVariable *param_1,
          int *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this;
  FNiagaraVariableAttributeBinding *pFVar5;
  
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar4 != 4) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraVariableAttributeBinding *)(*pcVar2)();
      return pFVar5;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,param_2,(longlong)(param_1->VarData).ArrayNum);
  (__return_storage_ptr__->RootName).ComparisonIndex = 0;
  (__return_storage_ptr__->RootName).Number = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.Number = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    (&(__return_storage_ptr__->ParamMapVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (__return_storage_ptr__->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar4;
  __return_storage_ptr__->bBindingExistsOnSource = '\0';
  __return_storage_ptr__->bIsCachedParticleValue = '\x01';
  (__return_storage_ptr__->DataSetName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataSetName).Number = 0;
  (__return_storage_ptr__->BindingSourceMode).Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (__return_storage_ptr__,(FNiagaraVariableBase *)param_1,param_1,Particles);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// CreateDefaultBinding<float> @ 14ca01230

FNiagaraVariableAttributeBinding * __cdecl
CreateDefaultBinding<float>
          (FNiagaraVariableAttributeBinding *__return_storage_ptr__,FNiagaraVariable *param_1,
          float *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this;
  FNiagaraVariableAttributeBinding *pFVar5;
  
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar4 != 4) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraVariableAttributeBinding *)(*pcVar2)();
      return pFVar5;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,param_2,(longlong)(param_1->VarData).ArrayNum);
  (__return_storage_ptr__->RootName).ComparisonIndex = 0;
  (__return_storage_ptr__->RootName).Number = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.Number = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    (&(__return_storage_ptr__->ParamMapVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (__return_storage_ptr__->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar4;
  __return_storage_ptr__->bBindingExistsOnSource = '\0';
  __return_storage_ptr__->bIsCachedParticleValue = '\x01';
  (__return_storage_ptr__->DataSetName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataSetName).Number = 0;
  (__return_storage_ptr__->BindingSourceMode).Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (__return_storage_ptr__,(FNiagaraVariableBase *)param_1,param_1,Particles);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// CreateDefaultBinding<UE::Math::TVector<float>_> @ 14ca01310

FNiagaraVariableAttributeBinding * __cdecl
CreateDefaultBinding<UE::Math::TVector<float>_>
          (FNiagaraVariableAttributeBinding *__return_storage_ptr__,FNiagaraVariable *param_1,
          TVector<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *this;
  FNiagaraVariableAttributeBinding *pFVar5;
  
  this = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  iVar4 = FNiagaraTypeDefinition::GetSize(this);
  if (iVar4 != 0xc) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == TypeDefHandle->GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5db,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraVariableAttributeBinding *)(*pcVar2)();
      return pFVar5;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  memcpy((param_1->VarData).AllocatorInstance.Data,param_2,(longlong)(param_1->VarData).ArrayNum);
  (__return_storage_ptr__->RootName).ComparisonIndex = 0;
  (__return_storage_ptr__->RootName).Number = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.Number = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    (&(__return_storage_ptr__->ParamMapVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (__return_storage_ptr__->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar4;
  __return_storage_ptr__->bBindingExistsOnSource = '\0';
  __return_storage_ptr__->bIsCachedParticleValue = '\x01';
  (__return_storage_ptr__->DataSetName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataSetName).Number = 0;
  (__return_storage_ptr__->BindingSourceMode).Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (__return_storage_ptr__,(FNiagaraVariableBase *)param_1,param_1,Particles);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// CreateDefaultBinding<bool> @ 14ca013f0

FNiagaraVariableAttributeBinding * __cdecl
CreateDefaultBinding<bool>
          (FNiagaraVariableAttributeBinding *__return_storage_ptr__,FNiagaraVariable *param_1,
          bool *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *pFVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
  if (((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr !=
       FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) ||
     (pFVar5->UnderlyingType != FNiagaraTypeDefinition::BoolDef.UnderlyingType)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("TypeDefHandle.IsSameBase(FNiagaraTypeDefinition::GetBoolDef())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x67a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FNiagaraVariableAttributeBinding *)(*pcVar2)();
      return pFVar6;
    }
  }
  FNiagaraVariable::AllocateData(param_1);
  *(uint *)(param_1->VarData).AllocatorInstance.Data = -(uint)(*param_2 != false);
  (__return_storage_ptr__->RootName).ComparisonIndex = 0;
  (__return_storage_ptr__->RootName).Number = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ParamMapVariable).Name.Number = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    (&(__return_storage_ptr__->ParamMapVariable).TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (__return_storage_ptr__->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar4;
  __return_storage_ptr__->bBindingExistsOnSource = '\0';
  __return_storage_ptr__->bIsCachedParticleValue = '\x01';
  (__return_storage_ptr__->DataSetName).ComparisonIndex = 0;
  (__return_storage_ptr__->DataSetName).Number = 0;
  (__return_storage_ptr__->BindingSourceMode).Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (__return_storage_ptr__,(FNiagaraVariableBase *)param_1,param_1,Particles);
  pFVar1 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// DefaultConstructItems<FNiagaraRendererGeometryCache::FComponentPoolEntry,int> @ 14ca014e0

void __cdecl
DefaultConstructItems<FNiagaraRendererGeometryCache::FComponentPoolEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGeometryCacheMeshBatchInfo,int> @ 14ca01510

void __cdecl DefaultConstructItems<FGeometryCacheMeshBatchInfo,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<FGeometryCacheTrackStreamableSampleInfo,int> @ 14ca01520

void __cdecl
DefaultConstructItems<FGeometryCacheTrackStreamableSampleInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x29) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x2d) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x2f) = 0;
      puVar1[6] = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraGeometryCacheReference,int> @ 14ca01570

void __cdecl DefaultConstructItems<FNiagaraGeometryCacheReference,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      puVar1[-5] = 0;
      local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable(local_28.DebugPtr);
      }
      local_20 = 1;
      local_1e = 0;
      local_1c = 0xffffffffffffffff;
      local_14 = 0xffffffff;
      FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
      FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
                ((FNiagaraUserParameterBinding *)(puVar1 + -4),
                 (FNiagaraTypeDefinition *)&local_28.ObjectPtr);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FStreamedGeometryCacheChunk,int> @ 14ca01630

void __cdecl DefaultConstructItems<FStreamedGeometryCacheChunk,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x15) = 0xffffffff;
      *(undefined1 *)((longlong)puVar1 + 0x19) = 0xff;
      *(undefined8 *)(puVar1 + 8) = FIoChunkId::InvalidChunkId.Id._0_8_;
      puVar1[10] = FIoChunkId::InvalidChunkId.Id._8_4_;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FTrackRenderData,int> @ 14ca01690

void __cdecl DefaultConstructItems<FTrackRenderData,int>(void *param_1,int param_2)

{
  double dVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x88);
    do {
      dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
      puVar2[-0x11] = UE::Math::TMatrix<double>::Identity.M[0][0];
      puVar2[-0x10] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
      puVar2[-0xf] = UE::Math::TMatrix<double>::Identity.M[0][2];
      puVar2[-0xe] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
      puVar2[-0xd] = UE::Math::TMatrix<double>::Identity.M[1][0];
      puVar2[-0xc] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
      puVar2[-0xb] = UE::Math::TMatrix<double>::Identity.M[1][2];
      puVar2[-10] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
      puVar2[-9] = UE::Math::TMatrix<double>::Identity.M[2][0];
      puVar2[-8] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
      puVar2[-7] = UE::Math::TMatrix<double>::Identity.M[2][2];
      puVar2[-6] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
      puVar2[-5] = UE::Math::TMatrix<double>::Identity.M[3][0];
      puVar2[-4] = dVar1;
      dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
      puVar2[-3] = UE::Math::TMatrix<double>::Identity.M[3][2];
      puVar2[-2] = dVar1;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x29) = 0;
      *(undefined2 *)((longlong)puVar2 + 0x2d) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x2f) = 0;
      puVar2[6] = 0xffffffffffffffff;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 0x18;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FVisibilitySample,int> @ 14ca01790

void __cdecl DefaultConstructItems<FVisibilitySample,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      puVar1[-8] = 2;
      *(undefined4 *)(puVar1 + -4) = 0;
      *puVar1 = 2;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGeometryCacheMeshData,int> @ 14ca017c0

void __cdecl DestructItems<FGeometryCacheMeshData,int>(FGeometryCacheMeshData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Indices;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar2 + 2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-5].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FColor,TSizedDefaultAllocator<32>_> *)(pTVar2 + -6))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)(pTVar2 + -7))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *)(pTVar2 + -8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -9))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FGeometryCacheMeshData *)(pTVar2 + -10))->Positions).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 0xd) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraGeometryCacheReference,int> @ 14ca018a0

void __cdecl
DestructItems<FNiagaraGeometryCacheReference,int>
          (FNiagaraGeometryCacheReference *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->OverrideMaterials;
    do {
      pFVar1 = (((TArray<FNiagaraGeometryCacheMICOverride,TSizedDefaultAllocator<32>_> *)
                (pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStreamedGeometryCacheChunk,int> @ 14ca01900

void __cdecl
DestructItems<FStreamedGeometryCacheChunk,int>(FStreamedGeometryCacheChunk *param_1,int param_2)

{
  FBulkData *this;
  
  if (param_2 != 0) {
    this = (FBulkData *)&param_1->BulkData;
    do {
      FBulkData::~FBulkData(this);
      this = (FBulkData *)(this[1].BulkMeta.Data + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::TSTR_FGeometryCacheInitRayTracingGeometry187>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ca01fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l18::TSTR_FGeometryCacheInitRayTracingGeometry187>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::TSTR_FGeometryCacheInitRayTracingGeometry187>
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
      if (bVar8) goto LAB_14ca020f1;
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
    goto LAB_14ca022e5;
  }
LAB_14ca020f1:
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
LAB_14ca021cf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca021cf;
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
LAB_14ca022e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::TSTR_FGeometryCacheInitResources154>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ca02320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l14::TSTR_FGeometryCacheInitResources154>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::TSTR_FGeometryCacheInitResources154>
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
      if (bVar8) goto LAB_14ca02471;
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
    goto LAB_14ca02665;
  }
LAB_14ca02471:
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
LAB_14ca0254f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0254f;
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
LAB_14ca02665:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::TSTR_FGeometryCacheUpdateAnimation107>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ca026a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UGeometryCacheComponent::JumpAnimationToTime_::__l10::TSTR_FGeometryCacheUpdateAnimation107>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::TSTR_FGeometryCacheUpdateAnimation107>
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
      if (bVar8) goto LAB_14ca027f1;
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
    goto LAB_14ca029e5;
  }
LAB_14ca027f1:
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
LAB_14ca028cf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca028cf;
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
LAB_14ca029e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::TSTR_FGeometryCacheUpdateAnimation176>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ca02a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l2::TSTR_FGeometryCacheUpdateAnimation176>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::TSTR_FGeometryCacheUpdateAnimation176>
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
      if (bVar8) goto LAB_14ca02b71;
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
    goto LAB_14ca02d65;
  }
LAB_14ca02b71:
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
LAB_14ca02c4f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca02c4f;
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
LAB_14ca02d65:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UGeometryCacheComponent::TickComponent'::__l27::TSTR_FGeometryCacheUpdateAnimation211>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14ca02da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UGeometryCacheComponent::TickComponent_::__l27::TSTR_FGeometryCacheUpdateAnimation211>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UGeometryCacheComponent::TickComponent'::__l27::TSTR_FGeometryCacheUpdateAnimation211>
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
      if (bVar8) goto LAB_14ca02ef1;
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
    goto LAB_14ca030e5;
  }
LAB_14ca02ef1:
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
LAB_14ca02fcf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca02fcf;
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
LAB_14ca030e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTypeName<UNiagaraGeometryCacheRendererProperties_const_> @ 14ca031d0

FString * __cdecl
GetTypeName<UNiagaraGeometryCacheRendererProperties_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraGeometryCacheRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraGeometryCacheRendererProperties> @ 14ca03210

FString * __cdecl
GetTypeName<UNiagaraGeometryCacheRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraGeometryCacheRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<`GenerateLengthLimitedHuffmanLengths'::__l2::SortEntry,int,FIdentityFunctor,TDereferenceWrapper<`GenerateLengthLimitedHuffmanLengths'::__l2::SortEntry,`GenerateLengthLimitedHuffmanLengths'::__l2::<lambda_1>_>_> @ 14ca03250

void __cdecl
AlgoImpl::
HeapSortInternal<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,int,FIdentityFunctor,TDereferenceWrapper<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,_GenerateLengthLimitedHuffmanLengths_::__l2::<lambda_1>_>_>
          (SortEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_void___cdecl_GenerateLengthLimitedHuffmanLengths(unsigned_char_*,unsigned_int_*,int,int)_::_2_::SortEntry,_void___cdecl_GenerateLengthLimitedHuffmanLengths(unsigned_char_*,unsigned_int_*,int,int)_::_2_::<lambda_1>_>
          param_4)

{
  SortEntry *pSVar1;
  SortEntry *pSVar2;
  SortEntry SVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
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
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14ca03332:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            SVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = SVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].Freq < param_1[iVar6].Freq) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pSVar1 = param_1 + iVar6;
                pSVar2 = param_1 + iVar9;
                if (pSVar1->Freq <= pSVar2->Freq) break;
                SVar3 = *pSVar2;
                *pSVar2 = *pSVar1;
                *pSVar1 = SVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].Freq < param_1[iVar8].Freq) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pSVar1 = param_1 + iVar8;
    pSVar2 = param_1 + iVar6;
    if (pSVar1->Freq <= pSVar2->Freq) goto LAB_14ca03332;
    SVar3 = *pSVar2;
    *pSVar2 = *pSVar1;
    iVar7 = iVar8 * 2 + 1;
    *pSVar1 = SVar3;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<AGeometryCacheActor> @ 14ca03470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AGeometryCacheActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AGeometryCacheActor__6B_;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"GeometryCacheComponent");
    FVar1 = *pFVar2;
    pUVar3 = UGeometryCacheComponent::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
  }
  return;
}

// InternalConstructor<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation> @ 14ca03530

void __cdecl
InternalConstructor<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)(this + 1) = 0;
    *(undefined ***)this = &___7UDEPRECATED_GeometryCacheTrack_FlipbookAnimation__6B_;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformAnimation> @ 14ca03590

void __cdecl
InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformAnimation>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_GeometryCacheTrack_TransformAnimation__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)(this + 1) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined1 *)(this + 6) = 0;
    *(undefined2 *)&this[6].field_0x1 = 0;
    this[6].field_0x3 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation> @ 14ca036a0

void __cdecl
InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>
          (FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)(this + 1) = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined1 *)(this + 6) = 0;
    *(undefined2 *)&this[6].field_0x1 = 0;
    this[6].field_0x3 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UGeometryCache> @ 14ca037b0

void __cdecl InternalConstructor<UGeometryCache>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UGeometryCache::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) = &UGeometryCache::_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&this[3].field_0x10);
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UGeometryCacheCodecBase> @ 14ca03840

void __cdecl InternalConstructor<UGeometryCacheCodecBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UGeometryCacheCodecBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UGeometryCacheCodecRaw> @ 14ca03880

void __cdecl InternalConstructor<UGeometryCacheCodecRaw>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UGeometryCacheCodecRaw__6B_;
  }
  return;
}

// InternalConstructor<UGeometryCacheCodecV1> @ 14ca038c0

void __cdecl InternalConstructor<UGeometryCacheCodecV1>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 *puVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)(this + 1) = 0;
    *(undefined ***)this = &___7UGeometryCacheCodecV1__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    puVar1 = operator_new(0x8010);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7FCodecV1Decoder__6B_;
      *(undefined8 **)&this[1].field_0x10 = puVar1;
      return;
    }
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UGeometryCacheComponent> @ 14ca03930

void __cdecl InternalConstructor<UGeometryCacheComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UMeshComponent *this;
  
  this = (UMeshComponent *)param_1->Obj;
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x101;
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGeometryCacheComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UGeometryCacheComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__IPhysicsComponent__;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    this[1]._padding_ = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    ((FLinearColor_u_0 *)((longlong)&this[1]._padding_ + 4))->_s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  }
  return;
}

// InternalConstructor<UGeometryCacheTrack> @ 14ca03a10

void __cdecl InternalConstructor<UGeometryCacheTrack>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UGeometryCacheTrack__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UGeometryCacheTrackStreamable> @ 14ca03a60

void __cdecl InternalConstructor<UGeometryCacheTrackStreamable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UGeometryCacheTrackStreamable__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)(this + 1) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    FRenderResource::FRenderResource((FRenderResource *)&this[3].field_0x20);
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined ***)&this[3].field_0x20 = &___7FGeometryCacheTrackStreamableRenderResource__6B_;
    *(undefined8 *)&this[4].field_0x20 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(this + 5));
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraGeometryCacheRendererProperties> @ 14ca03b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
InternalConstructor<UNiagaraGeometryCacheRendererProperties>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *pUVar1;
  UNiagaraMergeable *this;
  longlong *plVar2;
  int iVar3;
  undefined1 *puVar4;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this == (UNiagaraMergeable *)0x0) {
    return;
  }
  UNiagaraMergeable::UNiagaraMergeable(this);
  *(undefined ***)this = &___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)(this + 1));
  *(undefined2 *)&this[2].field_0xd = 0x101;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[2].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[2].field_0x20 = iVar3;
  this[3].field_0x5 = this[3].field_0x5 & 0xfe;
  this[3].field_0x5 = this[3].field_0x5 | 2;
  *(undefined8 *)&this[2].field_0x24 = 0;
  this[3].field_0x4 = 0;
  *(undefined ***)this = &___7UNiagaraGeometryCacheRendererProperties__6B_;
  pUVar1 = this + 4;
  *(FScriptContainerElement **)pUVar1 = (FScriptContainerElement *)0x0;
  *(undefined4 *)&this[4].field_0x8 = 0;
  puVar4 = &this[4].field_0xc;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined4 *)puVar4 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined2 *)&this[4].field_0x10 = 0x100;
  *(undefined4 *)&this[4].field_0x14 = 0xf;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 5),&FNiagaraTypeDefinition::Vec4Def);
  *(int *)(this + 5) = iVar3;
  this[5].field_0xd = this[5].field_0xd & 0xfe;
  this[5].field_0xd = this[5].field_0xd | 2;
  *(undefined8 *)&this[5].field_0x4 = 0;
  this[5].field_0xc = 0;
  *(undefined8 *)&this[5].field_0x10 = 0;
  *(undefined8 *)&this[5].field_0x18 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[5].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[5].field_0x20 = iVar3;
  this[6].field_0x5 = this[6].field_0x5 & 0xfe;
  this[6].field_0x5 = this[6].field_0x5 | 2;
  *(undefined8 *)&this[5].field_0x24 = 0;
  this[6].field_0x4 = 0;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[6].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[6].field_0x18 = iVar3;
  this[6].field_0x25 = this[6].field_0x25 & 0xfe;
  this[6].field_0x25 = this[6].field_0x25 | 2;
  *(undefined8 *)&this[6].field_0x1c = 0;
  this[6].field_0x24 = 0;
  *(undefined8 *)(this + 7) = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[7].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[7].field_0x10 = iVar3;
  this[7].field_0x1d = this[7].field_0x1d & 0xfe;
  this[7].field_0x1d = this[7].field_0x1d | 2;
  *(undefined8 *)&this[7].field_0x14 = 0;
  this[7].field_0x1c = 0;
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(undefined8 *)(this + 8) = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[8].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[8].field_0x8 = iVar3;
  this[8].field_0x15 = this[8].field_0x15 & 0xfe;
  this[8].field_0x15 = this[8].field_0x15 | 2;
  *(undefined8 *)&this[8].field_0xc = 0;
  this[8].field_0x14 = 0;
  *(undefined8 *)&this[8].field_0x18 = 0;
  *(undefined8 *)&this[8].field_0x20 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 9),&FNiagaraTypeDefinition::Vec4Def);
  *(int *)(this + 9) = iVar3;
  this[9].field_0xd = this[9].field_0xd & 0xfe;
  this[9].field_0xd = this[9].field_0xd | 2;
  *(undefined8 *)&this[9].field_0x4 = 0;
  this[9].field_0xc = 0;
  *(undefined8 *)&this[9].field_0x10 = 0;
  *(undefined8 *)&this[9].field_0x18 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[9].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[9].field_0x20 = iVar3;
  this[10].field_0x5 = this[10].field_0x5 & 0xfe;
  this[10].field_0x5 = this[10].field_0x5 | 2;
  *(undefined8 *)&this[9].field_0x24 = 0;
  this[10].field_0x4 = 0;
  this[10].field_0xc = 1;
  *(undefined8 *)&this[10].field_0x10 = 0;
  *(undefined8 *)&this[10].field_0x18 = 0;
  *(undefined8 *)&this[10].field_0x20 = 0;
  *(undefined8 *)(this + 0xb) = 0;
  *(undefined8 *)&this[0xb].field_0x8 = 0;
  *(undefined8 *)&this[0xb].field_0x10 = 0;
  *(undefined8 *)&this[0xb].field_0x18 = 0;
  *(undefined8 *)&this[0xb].field_0x20 = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)&this[0xc].field_0x8 = 0;
  this[0xc].field_0x10 = 1;
  *(undefined4 *)&this[0xc].field_0x14 = 0xffffffff;
  this[0xc].field_0x18 = 1;
  *(undefined4 *)&this[0xc].field_0x1c = 0xffffffff;
  this[0xc].field_0x20 = 1;
  *(undefined4 *)&this[0xc].field_0x24 = 0xffffffff;
  *(undefined1 *)(this + 0xd) = 1;
  *(undefined8 *)&this[0xd].field_0x4 = 0xffffffffffffffff;
  *(undefined8 *)&this[0xd].field_0xc = 0xffffffffffffffff;
  *(undefined4 *)&this[0xd].field_0x14 = 0xffffffff;
  *(undefined4 *)&this[3].field_0x20 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,7,*(int *)&this[3].field_0x24,(ForAnyElementType *)&this[3].field_0x18,7,
             (int *)&this[3].field_0x24);
  plVar2 = *(longlong **)&this[3].field_0x18;
  *plVar2 = (longlong)&this[4].field_0x18;
  plVar2[1] = (longlong)&this[5].field_0x10;
  plVar2[2] = (longlong)&this[6].field_0x8;
  plVar2[3] = (longlong)(this + 7);
  plVar2[4] = (longlong)&this[7].field_0x20;
  plVar2[5] = (longlong)&this[9].field_0x10;
  plVar2[6] = (longlong)&this[8].field_0x18;
  if (*(int *)&this[4].field_0x8 == 0) {
    if (*(int *)puVar4 == 0) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)pUVar1,(int *)puVar4);
    }
    else {
      iVar3 = 0;
    }
    *(int *)&this[4].field_0x8 = iVar3 + 1;
    DefaultConstructItems<FNiagaraGeometryCacheReference,int>
              (*(FScriptContainerElement **)pUVar1 + (longlong)iVar3 * 0x48,1);
  }
  iVar3 = *(int *)&this[4].field_0x8;
  if (*(int *)puVar4 != iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar3,(ForAnyElementType *)pUVar1,iVar3,(int *)puVar4);
  }
  return;
}

// InternalVTableHelperCtorCaller<AGeometryCacheActor> @ 14ca03b50

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

UObject * __cdecl InternalVTableHelperCtorCaller<AGeometryCacheActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AGeometryCacheActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AGeometryCacheActor__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation> @ 14ca03c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UDEPRECATED_GeometryCacheTrack_FlipbookAnimation__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformAnimation> @ 14ca03ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformAnimation>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_GeometryCacheTrack_TransformAnimation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UDEPRECATED_GeometryCacheTrack_TransformAnimation__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 6) = 0;
    *(undefined2 *)&pUVar1[6].field_0x1 = 0;
    pUVar1[6].field_0x3 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation> @ 14ca03cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 6) = 0;
    *(undefined2 *)&pUVar1[6].field_0x1 = 0;
    pUVar1[6].field_0x3 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryCache> @ 14ca03d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeometryCache>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryCache::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UGeometryCache::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)(pUVar1 + 1) = &UGeometryCache::_vftable__for__IInterface_AssetUserData__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&pUVar1[3].field_0x10);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryCacheCodecBase> @ 14ca03df0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeometryCacheCodecBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryCacheCodecBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryCacheCodecBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryCacheCodecRaw> @ 14ca03eb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeometryCacheCodecRaw>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryCacheCodecRaw::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UGeometryCacheCodecRaw__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryCacheCodecV1> @ 14ca03f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeometryCacheCodecV1>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryCacheCodecV1::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UGeometryCacheCodecV1__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryCacheComponent> @ 14ca04030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeometryCacheComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryCacheComponent::GetPrivateStaticClass();
  this = (UMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshComponent *)0x0) {
    UMeshComponent::UMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UGeometryCacheComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UGeometryCacheComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UGeometryCacheComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryCacheTrack> @ 14ca04140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGeometryCacheTrack>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryCacheTrack::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGeometryCacheTrack__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGeometryCacheTrackStreamable> @ 14ca04200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGeometryCacheTrackStreamable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &___7UGeometryCacheTrackStreamable__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    FRenderResource::FRenderResource((FRenderResource *)&pUVar1[3].field_0x20);
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined ***)&pUVar1[3].field_0x20 = &___7FGeometryCacheTrackStreamableRenderResource__6B_;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)(pUVar1 + 5));
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// InternalVTableHelperCtorCaller<UNiagaraGeometryCacheRendererProperties> @ 14ca04310

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraGeometryCacheRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraGeometryCacheRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraGeometryCacheRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraGeometryCacheRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraGeometryCacheRendererProperties *)0x0) {
    pUVar3 = UNiagaraGeometryCacheRendererProperties::UNiagaraGeometryCacheRendererProperties
                       (pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<`GenerateLengthLimitedHuffmanLengths'::__l2::SortEntry,int,FIdentityFunctor,TDereferenceWrapper<`GenerateLengthLimitedHuffmanLengths'::__l2::SortEntry,`GenerateLengthLimitedHuffmanLengths'::__l2::<lambda_1>_>_> @ 14ca043b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,int,FIdentityFunctor,TDereferenceWrapper<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,_GenerateLengthLimitedHuffmanLengths_::__l2::<lambda_1>_>_>
          (SortEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_void___cdecl_GenerateLengthLimitedHuffmanLengths(unsigned_char_*,unsigned_int_*,int,int)_::_2_::SortEntry,_void___cdecl_GenerateLengthLimitedHuffmanLengths(unsigned_char_*,unsigned_int_*,int,int)_::_2_::<lambda_1>_>
          param_4)

{
  SortEntry *pSVar1;
  SortEntry SVar2;
  int iVar3;
  SortEntry *pSVar4;
  SortEntry **ppSVar5;
  SortEntry *pSVar6;
  SortEntry *pSVar7;
  SortEntry *pSVar8;
  SortEntry *pSVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  SortEntry *local_338;
  SortEntry *local_328;
  SortEntry *local_320;
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
    ppSVar5 = &local_328;
    do {
      pSVar8 = ppSVar5[1];
      pSVar4 = *ppSVar5;
      pSVar1 = ppSVar5[2];
      iVar3 = (int)((longlong)pSVar8 - (longlong)pSVar4 >> 3) + 1;
      local_338._0_4_ = (int)pSVar1;
      pSVar9 = pSVar4;
      if ((int)local_338 != 0) {
LAB_14ca04460:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pSVar6 = pSVar8 + 1;
          SVar2 = pSVar9[iVar3 >> 1];
          pSVar9[iVar3 >> 1] = *pSVar9;
          *pSVar9 = SVar2;
          pSVar4 = pSVar9;
LAB_14ca04490:
          pSVar4 = pSVar4 + 1;
          if (pSVar4 <= pSVar8) goto code_r0x00014ca04499;
          goto LAB_14ca044a0;
        }
        for (; pSVar4 = pSVar9, pSVar1 = pSVar9, pSVar9 < pSVar8; pSVar8 = pSVar8 + -1) {
          while (pSVar1 = pSVar1 + 1, pSVar1 <= pSVar8) {
            if (pSVar4->Freq < pSVar1->Freq) {
              pSVar4 = pSVar1;
            }
          }
          SVar2 = *pSVar4;
          *pSVar4 = *pSVar8;
          *pSVar8 = SVar2;
        }
        goto LAB_14ca0455a;
      }
LAB_14ca04549:
      local_338 = pSVar1;
      HeapSortInternal<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,int,FIdentityFunctor,TDereferenceWrapper<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,_GenerateLengthLimitedHuffmanLengths_::__l2::<lambda_1>_>_>
                (pSVar4,iVar3,param_3,param_4);
LAB_14ca0455a:
      ppSVar5 = ppSVar5 + -3;
    } while (&local_328 <= ppSVar5);
  }
  return;
code_r0x00014ca04499:
  if (pSVar4->Freq <= pSVar9->Freq) goto LAB_14ca04490;
LAB_14ca044a0:
  do {
    pSVar7 = pSVar6;
    pSVar6 = pSVar7 + -1;
    if (pSVar6 <= pSVar9) break;
  } while (pSVar9->Freq <= pSVar6->Freq);
  if (pSVar4 <= pSVar6) {
    SVar2 = *pSVar4;
    *pSVar4 = *pSVar6;
    *pSVar6 = SVar2;
    goto LAB_14ca04490;
  }
  SVar2 = *pSVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pSVar9 = *pSVar6;
  *pSVar6 = SVar2;
  if ((longlong)((longlong)pSVar6 + (-8 - (longlong)pSVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pSVar8 - (longlong)pSVar4 & 0xfffffffffffffff8U)) {
    if (pSVar4 < pSVar8) {
      *ppSVar5 = pSVar4;
      ppSVar5[1] = pSVar8;
      *(int *)(ppSVar5 + 2) = (int)local_338;
      ppSVar5 = ppSVar5 + 3;
    }
    if (pSVar6 <= pSVar9 + 1) goto LAB_14ca0455a;
    pSVar8 = pSVar7 + -2;
    pSVar4 = pSVar9;
  }
  else {
    if (pSVar9 + 1 < pSVar6) {
      *ppSVar5 = pSVar9;
      ppSVar5[1] = pSVar7 + -2;
      *(int *)(ppSVar5 + 2) = (int)local_338;
      ppSVar5 = ppSVar5 + 3;
    }
    if (pSVar8 <= pSVar4) goto LAB_14ca0455a;
  }
  iVar3 = (int)((longlong)pSVar8 - (longlong)pSVar4 >> 3) + 1;
  pSVar9 = pSVar4;
  if ((int)local_338 == 0) goto LAB_14ca04549;
  goto LAB_14ca04460;
}

// IsObjectPtrEqual<UGeometryCache,UGeometryCache_*,0> @ 14ca045f0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UGeometryCache,UGeometryCache_*,0>
          (TObjectPtr<UGeometryCache> *param_1,UGeometryCache **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UGeometryCache *)0x0) {
    return *param_2 == (UGeometryCache *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UGeometryCacheComponent> @ 14ca04610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGeometryCacheComponent * __cdecl NewObject<UGeometryCacheComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UGeometryCacheComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGeometryCacheComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGeometryCacheComponent *)
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

// ~TFunction_OwnedObject<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::__l2::<lambda_1>,1,1> @ 14ca08670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent_::__l2::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::`2'::<lambda_1>,1,1>
        ::_vftable_;
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

// ~TFunction_OwnedObject<`FGeometryCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,1,0> @ 14ca08690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FGeometryCacheStreamingManager::PrefetchData_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheStreamingManager::PrefetchData'::`7'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::<lambda_1>,1,1> @ 14ca086b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UGeometryCacheComponent::JumpAnimationToTime_::__l10::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGeometryCacheComponent::JumpAnimationToTime'::`10'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UGeometryCacheComponent::TickComponent'::__l27::<lambda_1>,1,1> @ 14ca086d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGeometryCacheComponent::TickComponent'::__l27::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UGeometryCacheComponent::TickComponent_::__l27::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGeometryCacheComponent::TickComponent'::`27'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::<lambda_1>,1,0> @ 14ca086f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l14::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`14'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FStreamingGeometryCacheData::UpdateStreamingStatus'::__l15::<lambda_1>,0,0> @ 14ca08710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamingGeometryCacheData::UpdateStreamingStatus'::__l15::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FStreamingGeometryCacheData::UpdateStreamingStatus_::__l15::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamingGeometryCacheData::UpdateStreamingStatus'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l1::<lambda_24_>,0,0> @ 14ca08730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l1::<lambda_24_>,0,0>
::
~TFunction_OwnedObject<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l1::<lambda_24_>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`1'::<lambda_24_>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::<lambda_2>,1,0> @ 14ca08750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::<lambda_3>,1,0> @ 14ca08770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::<lambda_3>,1,0>::
~TFunction_OwnedObject<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l18::<lambda_3>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`18'::<lambda_3>,1,0>
        ::_vftable_;
  return;
}

// operator<< @ 14ca09c50

FArchive * __cdecl operator<<(FArchive *param_1,FGeometryCacheMeshBatchInfo *param_2)

{
  uint *puVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->StartIndex);
    }
  }
  else {
    param_2->StartIndex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumTriangles,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->NumTriangles);
    }
  }
  else {
    param_2->NumTriangles = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->MaterialIndex;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (param_2->NumTriangles == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Mesh.NumTriangles > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheMeshData.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
  }
  return param_1;
}

// operator<< @ 14ca09d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FGeometryCacheMeshData *param_2)

{
  int *piVar1;
  FGeometryCacheVertexInfo *pFVar2;
  int *piVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FArchive *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_DeserializeMetadata> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_DeserializeVertices> FVar16;
  FThreadSafeStaticStat<FStat_STAT_DeserializeIndices> FVar17;
  uint uVar18;
  FColor_u_0 FVar19;
  FName FVar20;
  uint local_res8 [2];
  uint local_res10 [2];
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_e0 [2];
  FName local_d8;
  FName local_d0;
  FColor_u_0 local_c8;
  uint local_c4;
  FName local_c0;
  FName local_b0;
  FName local_a0;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FGeometryObjectVersion::GUID);
  bVar8 = false;
  bVar7 = false;
  local_res8[0] = 0;
  if (((((param_1->field_0x28 & 4) != 0) &&
       (local_res8[0] = (param_2->Positions).ArrayNum,
       (param_2->VertexInfo).bHasMotionVectors != false)) &&
      ((param_2->MotionVectors).ArrayNum != local_res8[0])) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("Mesh.VertexInfo.bHasMotionVectors == false || Mesh.MotionVectors.Num() == Mesh.Positions.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheMeshData.cpp"
                         ,0x18,
                         L"Mesh is flagged as having motion vectors but the number of motion vectors does not match the number of vertices"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FArchive *)(*pcVar5)();
    return pFVar11;
  }
  FVar13 = StatPtr_STAT_DeserializeMetadata;
  if (StatPtr_STAT_DeserializeMetadata == (FThreadSafeStaticStat<FStat_STAT_DeserializeMetadata>)0x0
     ) {
    pFVar12 = FName::FName(&local_60,"STAT_DeserializeMetadata");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_DeserializeMetadata>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeMetadata,*pFVar12,
                        L"Deserialize Metadata","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar9 = false;
  bVar10 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_14ca09f20:
    bVar6 = false;
    FVar20 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_d8.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheMeshData.cpp"
                   ,0x1d);
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca09f20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
  }
  UE::Math::operator<<(param_1,&param_2->BoundingBox);
  TArrayPrivateFriend::Serialize<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->BatchesInfo);
  pFVar2 = &param_2->VertexInfo;
  operator<<(param_1,&pFVar2->bHasTangentX);
  operator<<(param_1,&(param_2->VertexInfo).bHasTangentZ);
  operator<<(param_1,&(param_2->VertexInfo).bHasUV0);
  operator<<(param_1,&(param_2->VertexInfo).bHasColor0);
  operator<<(param_1,&(param_2->VertexInfo).bHasMotionVectors);
  operator<<(param_1,&(param_2->VertexInfo).bHasImportedVertexNumbers);
  operator<<(param_1,&(param_2->VertexInfo).bConstantUV0);
  operator<<(param_1,&(param_2->VertexInfo).bConstantColor0);
  operator<<(param_1,&(param_2->VertexInfo).bConstantIndices);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_80.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_80);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  FVar16 = StatPtr_STAT_DeserializeVertices;
  if (StatPtr_STAT_DeserializeVertices == (FThreadSafeStaticStat<FStat_STAT_DeserializeVertices>)0x0
     ) {
    pFVar12 = FName::FName(&local_58,"STAT_DeserializeVertices");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_DeserializeVertices>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeVertices,*pFVar12,
                        L"Deserialize Vertices","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_14ca0a197:
    bVar9 = false;
    FVar20 = local_b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_d0.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheMeshData.cpp"
                   ,0x24);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca0a197;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar9 = true;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&param_2->Positions,local_res8[0],Default);
    if ((param_2->VertexInfo).bHasUV0 != false) {
      TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->TextureCoordinates,local_res8[0],Default);
    }
    if (pFVar2->bHasTangentX != false) {
      TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->TangentsX,local_res8[0],Default);
    }
    if ((param_2->VertexInfo).bHasTangentZ != false) {
      TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->TangentsZ,local_res8[0],Default);
    }
    if ((param_2->VertexInfo).bHasColor0 != false) {
      TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->Colors,local_res8[0],Default);
    }
    if ((param_2->VertexInfo).bHasImportedVertexNumbers != false) {
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->ImportedVertexNumbers,local_res8[0],Default);
    }
    if ((param_2->VertexInfo).bHasMotionVectors != false) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&param_2->MotionVectors,local_res8[0],Default);
    }
  }
  if (0 < (param_2->Positions).ArrayNum) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(param_2->Positions).AllocatorInstance.Data)
    ;
    if ((param_2->VertexInfo).bHasUV0 != false) {
      pcVar5 = *(code **)(*(longlong *)param_1 + 0x188);
      if (((param_2->TextureCoordinates).ArrayNum < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar5)();
        return pFVar11;
      }
      (*pcVar5)(param_1,(param_2->TextureCoordinates).AllocatorInstance.Data);
    }
    if (pFVar2->bHasTangentX != false) {
      pcVar5 = *(code **)(*(longlong *)param_1 + 0x188);
      if (((param_2->TangentsX).ArrayNum < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar5)();
        return pFVar11;
      }
      (*pcVar5)(param_1,(param_2->TangentsX).AllocatorInstance.Data);
    }
    if ((param_2->VertexInfo).bHasTangentZ != false) {
      pcVar5 = *(code **)(*(longlong *)param_1 + 0x188);
      if (((param_2->TangentsZ).ArrayNum < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar5)();
        return pFVar11;
      }
      (*pcVar5)(param_1,(param_2->TangentsZ).AllocatorInstance.Data);
    }
    if ((param_2->VertexInfo).bHasColor0 != false) {
      pcVar5 = *(code **)(*(longlong *)param_1 + 0x188);
      if (((param_2->Colors).ArrayNum < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar5)();
        return pFVar11;
      }
      (*pcVar5)(param_1,(param_2->Colors).AllocatorInstance.Data);
    }
    if ((param_2->VertexInfo).bHasImportedVertexNumbers != false) {
      pcVar5 = *(code **)(*(longlong *)param_1 + 0x188);
      if (((param_2->ImportedVertexNumbers).ArrayNum < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar5)();
        return pFVar11;
      }
      (*pcVar5)(param_1,(param_2->ImportedVertexNumbers).AllocatorInstance.Data);
    }
    if ((param_2->VertexInfo).bHasMotionVectors != false) {
      pcVar5 = *(code **)(*(longlong *)param_1 + 0x188);
      if (((param_2->MotionVectors).ArrayNum < 1) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar5)();
        return pFVar11;
      }
      (*pcVar5)(param_1,(param_2->MotionVectors).AllocatorInstance.Data);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  FVar17 = StatPtr_STAT_DeserializeIndices;
  if (StatPtr_STAT_DeserializeIndices == (FThreadSafeStaticStat<FStat_STAT_DeserializeIndices>)0x0)
  {
    pFVar12 = FName::FName(local_50,"STAT_DeserializeIndices");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_DeserializeIndices>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeIndices,*pFVar12,
                        L"Deserialize Indices","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar17;
  bVar7 = false;
  bVar8 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar19.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Bits != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.Bits = FVar19.Bits;
        local_c4 = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8._s_0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheMeshData.cpp"
                   ,0x72);
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar19.Bits;
      uStackX_1c = uVar18;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar9 = true;
      goto LAB_14ca0a63b;
    }
  }
  bVar9 = false;
  FVar20 = local_a0;
LAB_14ca0a63b:
  plVar4 = *(longlong **)&param_1->field_0x8;
  piVar1 = &(param_2->Indices).ArrayNum;
  local_res10[0] = *piVar1;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    *piVar1 = 0;
    piVar3 = &(param_2->Indices).ArrayMax;
    if (*piVar3 != local_res10[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_res10[0],&(param_2->Indices).AllocatorInstance,0,piVar3);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_res10[0],&(param_2->Indices).AllocatorInstance,piVar1,piVar3);
  }
  if (0 < (param_2->Indices).ArrayNum) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(param_2->Indices).AllocatorInstance.Data);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_70.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_70);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return param_1;
}

// operator<< @ 14ca0a810

FArchive * __cdecl operator<<(FArchive *param_1,FGeometryCacheTrackStreamableSampleInfo *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  FArchive *pFVar3;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pFVar3 = UE::Math::operator<<(param_1,(TVector<double> *)&param_2->field_0x8);
  pFVar3 = UE::Math::operator<<(pFVar3,(TVector<double> *)&param_2->field_0x20);
  puVar2 = (undefined1 *)**(undefined8 **)&pFVar3->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&param_2->field_0x38,1);
  }
  else {
    param_2->field_0x38 = *puVar2;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
  }
  puVar2 = &param_2->field_0x40;
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar2);
    }
  }
  else {
    *(undefined4 *)puVar2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->field_0x44;
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar2);
    }
  }
  else {
    *(undefined4 *)puVar2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return param_1;
}

// operator<< @ 14ca0a980

FArchive * __cdecl operator<<(FArchive *param_1,FVisibilitySample *param_2)

{
  FArchive *pFVar1;
  
  pFVar1 = operator<<(param_1,(TRangeBound<float> *)param_2);
  operator<<(pFVar1,&(param_2->Range).UpperBound);
  operator<<(param_1,&param_2->bVisibilityState);
  return param_1;
}

// operator<< @ 14ca0a9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,TBox<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [12];
  TVector<float> TStack_2c;
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((param_1->field_0x28 & 4) == 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                       ,0xd6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FArchive *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_38._0_8_ = *(undefined8 *)&(param_2->Min).field0_0x0;
  unique0x1000009b = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 8);
  local_20[0]._0_1_ = param_2->IsValid;
  local_20[0]._1_1_ = param_2->Pad[0];
  local_20[0]._2_1_ = param_2->Pad[1];
  local_20[0]._3_1_ = param_2->Pad[2];
  TStack_2c.field0_0x0._4_8_ = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 4);
  pFVar3 = UE::Math::operator<<(param_1,(TVector<float> *)local_38);
  pFVar3 = UE::Math::operator<<(pFVar3,&TStack_2c);
  if ((ulonglong)(*(longlong **)&pFVar3->field_0x8)[1] < **(longlong **)&pFVar3->field_0x8 + 1U) {
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_20,1);
  }
  else {
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
  }
  return param_1;
}

// operator<< @ 14ca0aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl
operator<<(FArchive *param_1,
          TArray<FGeometryCacheMeshBatchInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FArchive *pFVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  uint local_38 [2];
  undefined8 local_30;
  uint local_28 [2];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (((param_1->field_0x28 & 4) == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\CodecV1.cpp"
                         ,0xc6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FArchive *)(*pcVar3)();
    return pFVar6;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_38[0] = param_2->ArrayNum;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_38,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_38);
    }
  }
  else {
    local_38[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  uVar8 = 0;
  if (0 < (int)local_38[0]) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_48 = (longlong)(int)uVar8;
        local_40 = (longlong)param_2->ArrayNum;
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FArchive *)(*pcVar3)();
          return pFVar6;
        }
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_30 = *(undefined8 *)(pFVar2 + lVar7);
      local_28[0] = *(uint *)(pFVar2 + lVar7 + 8);
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_30,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_30);
        }
      }
      else {
        local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20);
        local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)*plVar1);
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(uint *)((longlong)&local_30 + 4),4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)((longlong)&local_30 + 4));
        }
      }
      else {
        local_30 = CONCAT44(*(undefined4 *)*plVar1,(uint)local_30);
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_28,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_28);
        }
      }
      else {
        local_28[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      if ((local_30._4_4_ == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Mesh.NumTriangles > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheMeshData.h"
                             ,0x1d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar3)();
        return pFVar6;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while ((int)uVar8 < (int)local_38[0]);
  }
  return param_1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ca0c7bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UGeometryCache::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGeometryCache::_vector_deleting_destructor__adjustor_40__(UGeometryCache *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGeometryCache *)&this[-1].OnPreSave.field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14ca0c7cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UGeometryCacheComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UGeometryCacheComponent::_vector_deleting_destructor__adjustor_592__
          (UGeometryCacheComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGeometryCacheComponent *)&this[-1].field_0x3d0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14ca0c7e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UGeometryCacheComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UGeometryCacheComponent::_vector_deleting_destructor__adjustor_600__
          (UGeometryCacheComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGeometryCacheComponent *)&this[-1].field_0x3c8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14ca0c7f4

/* [thunk]:public: virtual void * __ptr64 __cdecl UGeometryCacheComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UGeometryCacheComponent::_vector_deleting_destructor__adjustor_608__
          (UGeometryCacheComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGeometryCacheComponent *)&this[-1].field_0x3c0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ca0c808

/* [thunk]:public: virtual void * __ptr64 __cdecl UGeometryCacheComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGeometryCacheComponent::_vector_deleting_destructor__adjustor_40__
          (UGeometryCacheComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UGeometryCacheComponent *)&this[-1].PlayDirection,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ca0c820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraRendererGeometryCache::DestroyRenderState_Concurrent'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0c870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheStreamingManager::PrefetchData'::__l7::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheStreamingManager::PrefetchData'::`7'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0c8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGeometryCacheComponent::JumpAnimationToTime'::__l10::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGeometryCacheComponent::JumpAnimationToTime'::`10'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0c8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGeometryCacheComponent::TickComponent'::__l27::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UGeometryCacheComponent::TickComponent'::`27'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0c930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`14'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0c970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamingGeometryCacheData::UpdateStreamingStatus'::__l15::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FStreamingGeometryCacheData::UpdateStreamingStatus'::`15'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0c9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l1::<lambda_24_>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`1'::<lambda_24_>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0c9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`2'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0ca30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::<lambda_3>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`18'::<lambda_3>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0ca70

void * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGeometryCacheVertexFactoryUserDataWrapper>::_scalar_deleting_destructor_
          (TObject<FGeometryCacheVertexFactoryUserDataWrapper> *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGeometryCacheVertexFactoryUserDataWrapper_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FGeometryCacheVertexFactoryUserData::~FGeometryCacheVertexFactoryUserData
            ((FGeometryCacheVertexFactoryUserData *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cad0

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
AGeometryCacheActor::_scalar_deleting_destructor_(AGeometryCacheActor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AGeometryCacheActor__6B_;
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

// `scalar_deleting_destructor' @ 14ca0cb30

void * __thiscall FCodecV1Decoder::_scalar_deleting_destructor_(FCodecV1Decoder *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ICodecDecoder__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x8010);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cb70

void * __thiscall
FGeomCacheColorBuffer::_scalar_deleting_destructor_(FGeomCacheColorBuffer *this,uint param_1)

{
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cbc0

void * __thiscall
FGeomCacheIndexBuffer::_scalar_deleting_destructor_(FGeomCacheIndexBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->BufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cc10

void * __thiscall
FGeomCacheTangentBuffer::_scalar_deleting_destructor_(FGeomCacheTangentBuffer *this,uint param_1)

{
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cc60

void * __thiscall
FGeomCacheTrackProxy::_scalar_deleting_destructor_(FGeomCacheTrackProxy *this,uint param_1)

{
  FRHIShaderResourceView *pFVar1;
  FRHIResource *pFVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined ***)this = &___7FGeomCacheTrackProxy__6B_;
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&(this->VertexFactory).field_0x140);
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  pFVar1 = (this->IndexBuffer).BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  pFVar2 = *(FRHIResource **)&(this->ColorBuffer).field_0x30;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->ColorBuffer);
  pFVar1 = (this->TextureCoordinatesBuffer).BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TextureCoordinatesBuffer);
  pFVar2 = *(FRHIResource **)&(this->TangentZBuffer).field_0x30;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TangentZBuffer);
  pFVar2 = *(FRHIResource **)&(this->TangentXBuffer).field_0x30;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TangentXBuffer);
  pFVar1 = this->PositionBuffers[1].BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)(this->PositionBuffers + 1));
  pFVar1 = this->PositionBuffers[0].BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this->PositionBuffers);
  pFVar3 = (this->Materials).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x590);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cda0

void * __thiscall
FGeomCacheTrackProxyFixLayout::_scalar_deleting_destructor_
          (FGeomCacheTrackProxyFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cdd0

void * __thiscall
FGeomCacheVertexBuffer::_scalar_deleting_destructor_(FGeomCacheVertexBuffer *this,uint param_1)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->BufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0ce20

void * __thiscall
FGeomCacheVertexFactory::_scalar_deleting_destructor_(FGeomCacheVertexFactory *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->field_0x140);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0ce70

void * __thiscall
FGeometryCacheCodecRenderStateBase::_scalar_deleting_destructor_
          (FGeometryCacheCodecRenderStateBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FGeometryCacheCodecRenderStateBase__6B_;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  pFVar1 = (this->TopologyRanges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cef0

void * __thiscall
FGeometryCacheCodecRenderStateRaw::_scalar_deleting_destructor_
          (FGeometryCacheCodecRenderStateRaw *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FGeometryCacheCodecRenderStateBase__6B_;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cf70

void * __thiscall
FGeometryCacheCodecRenderStateV1::_scalar_deleting_destructor_
          (FGeometryCacheCodecRenderStateV1 *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  *(undefined ***)this = &___7FGeometryCacheCodecRenderStateBase__6B_;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0cff0

void * __thiscall
FGeometryCacheSceneProxy::_scalar_deleting_destructor_(FGeometryCacheSceneProxy *this,uint param_1)

{
  ~FGeometryCacheSceneProxy(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d030

void * __thiscall
FGeometryCacheStreamingManager::_scalar_deleting_destructor_
          (FGeometryCacheStreamingManager *this,uint param_1)

{
  ~FGeometryCacheStreamingManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d070

void * __thiscall
FGeometryCacheTrackStreamableRenderResource::_scalar_deleting_destructor_
          (FGeometryCacheTrackStreamableRenderResource *this,uint param_1)

{
  FRenderResource::~FRenderResource((FRenderResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d0b0

void * __thiscall
FGeometryCacheVertexFactoryUserDataWrapper::_scalar_deleting_destructor_
          (FGeometryCacheVertexFactoryUserDataWrapper *this,uint param_1)

{
  FGeometryCacheVertexFactoryUserData::~FGeometryCacheVertexFactoryUserData(&this->Data);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d100

void * __thiscall
FGeometryCacheVertexVertexFactory::_scalar_deleting_destructor_
          (FGeometryCacheVertexVertexFactory *this,uint param_1)

{
  FVertexBuffer::~FVertexBuffer(&this->VBAlias);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d150

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraRendererGeometryCache::_scalar_deleting_destructor_
          (FNiagaraRendererGeometryCache *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  iVar1 = (this->ComponentPool).ArrayNum;
  this->_padding_ = (longlong)&___7FNiagaraRendererGeometryCache__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentPool.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\NiagaraRendererGeometryCache.cpp"
                       ,0x26,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->MaterialRemapTable).AllocatorInstance.Data,(this->MaterialRemapTable).ArrayNum);
  pFVar2 = (this->MaterialRemapTable).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ComponentPool).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FNiagaraRenderer::~FNiagaraRenderer((FNiagaraRenderer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d200

void * __thiscall ICodecDecoder::_scalar_deleting_destructor_(ICodecDecoder *this,uint param_1)

{
  *this = (ICodecDecoder)&___7ICodecDecoder__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d240

void * __thiscall
IGeometryCacheStreamingManager::_scalar_deleting_destructor_
          (IGeometryCacheStreamingManager *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d280

void * __thiscall
UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::_scalar_deleting_destructor_
          (UDEPRECATED_GeometryCacheTrack_FlipbookAnimation *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_FlipbookAnimation__6B_;
  this->NumMeshSamples = 0;
  DestructItems<FGeometryCacheMeshData,int>
            ((FGeometryCacheMeshData *)(this->MeshSamples).AllocatorInstance.Data,
             (this->MeshSamples).ArrayNum);
  piVar1 = &(this->MeshSamples).ArrayMax;
  (this->MeshSamples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,&(this->MeshSamples).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->MeshSampleTimes).ArrayMax;
  (this->MeshSampleTimes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->MeshSampleTimes).AllocatorInstance,0,piVar1);
  }
  pFVar2 = (this->MeshSampleTimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGeometryCacheMeshData,int>
            ((FGeometryCacheMeshData *)(this->MeshSamples).AllocatorInstance.Data,
             (this->MeshSamples).ArrayNum);
  pFVar2 = (this->MeshSamples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UGeometryCacheTrack::~UGeometryCacheTrack((UGeometryCacheTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x80);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d390

void * __thiscall
UDEPRECATED_GeometryCacheTrack_TransformAnimation::_scalar_deleting_destructor_
          (UDEPRECATED_GeometryCacheTrack_TransformAnimation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_TransformAnimation__6B_;
  FGeometryCacheMeshData::~FGeometryCacheMeshData(&this->MeshData);
  UGeometryCacheTrack::~UGeometryCacheTrack((UGeometryCacheTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d400

void * __thiscall
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::_scalar_deleting_destructor_
          (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation__6B_;
  FGeometryCacheMeshData::~FGeometryCacheMeshData(&this->MeshData);
  UGeometryCacheTrack::~UGeometryCacheTrack((UGeometryCacheTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d470

void * __thiscall UGeometryCache::_scalar_deleting_destructor_(UGeometryCache *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPreSave);
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialSlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d540

void * __thiscall
UGeometryCacheCodecBase::_scalar_deleting_destructor_(UGeometryCacheCodecBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
  pFVar1 = (this->TopologyRanges).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14ca0d5b0

void * __thiscall
UGeometryCacheCodecRaw::_scalar_deleting_destructor_(UGeometryCacheCodecRaw *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
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

// `scalar_deleting_destructor' @ 14ca0d620

void * __thiscall
UGeometryCacheCodecV1::_scalar_deleting_destructor_(UGeometryCacheCodecV1 *this,uint param_1)

{
  ICodecDecoder *pIVar1;
  
  this->_padding_ = (longlong)&___7UGeometryCacheCodecV1__6B_;
  pIVar1 = this->Decoder;
  if (pIVar1 != (ICodecDecoder *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  this->Decoder = (ICodecDecoder *)0x0;
  this->_padding_ = (longlong)&___7UGeometryCacheCodecBase__6B_;
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

// `scalar_deleting_destructor' @ 14ca0d6c0

void * __thiscall
UGeometryCacheComponent::_scalar_deleting_destructor_(UGeometryCacheComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  pFVar1 = (this->TrackSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x620);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d780

void * __thiscall
UGeometryCacheTrack::_scalar_deleting_destructor_(UGeometryCacheTrack *this,uint param_1)

{
  ~UGeometryCacheTrack(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d7e0

void * __thiscall
UGeometryCacheTrackStreamable::_scalar_deleting_destructor_
          (UGeometryCacheTrackStreamable *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UGeometryCacheTrackStreamable__6B_;
  DestructItems<FStreamedGeometryCacheChunk,int>
            ((FStreamedGeometryCacheChunk *)(this->Chunks).AllocatorInstance.Data,
             (this->Chunks).ArrayNum);
  piVar1 = &(this->Chunks).ArrayMax;
  (this->Chunks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->Chunks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Samples).ArrayMax;
  (this->Samples).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  FRenderResource::~FRenderResource((FRenderResource *)&this->RenderResource);
  pFVar2 = (this->VisibilitySamples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Samples).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FStreamedGeometryCacheChunk,int>
            ((FStreamedGeometryCacheChunk *)(this->Chunks).AllocatorInstance.Data,
             (this->Chunks).ArrayNum);
  pFVar2 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UGeometryCacheTrack::~UGeometryCacheTrack((UGeometryCacheTrack *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0xe0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ca0d920

void * __thiscall
UNiagaraGeometryCacheRendererProperties::_scalar_deleting_destructor_
          (UNiagaraGeometryCacheRendererProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraGeometryCacheRendererProperties__6B_;
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
  DestructItems<FNiagaraGeometryCacheReference,int>
            ((FNiagaraGeometryCacheReference *)(this->GeometryCaches).AllocatorInstance.Data,
             (this->GeometryCaches).ArrayNum);
  pFVar1 = (this->GeometryCaches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x220);
  }
  return this;
}

// BitstreamTest @ 14ca0e520

void __cdecl BitstreamTest(void)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  ForAnyElementType local_88;
  int local_80 [2];
  ForAnyElementType local_78;
  int local_70 [2];
  ForAnyElementType local_68;
  int local_60 [2];
  ForAnyElementType local_58;
  int local_50 [2];
  ForAnyElementType local_48;
  int local_40 [2];
  FHuffmanBitStreamWriter local_38;
  
  local_38.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Bytes.ArrayNum = 0;
  local_38.Bytes.ArrayMax = 0;
  local_38.bFlushed = false;
  local_38.BitBuffer = 0;
  local_38.BitBufferBits = 0;
  local_38.NumBits = 0;
  FHuffmanBitStreamWriter::Write(&local_38,0xb,4);
  if (local_38.BitBufferBits != 0) {
    FHuffmanBitStreamWriter::Write(&local_38,0,8 - local_38.BitBufferBits);
    if ((local_38.BitBufferBits != 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("BitBufferBits == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                           ,0x43,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.bFlushed = true;
  local_88.Data = (FScriptContainerElement *)0x0;
  uVar1 = local_38.Bytes.ArrayNum + 0x10;
  local_80[0] = 0;
  local_80[1] = 0;
  if ((int)uVar1 < 1) {
    iVar5 = local_38.Bytes.ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
LAB_14ca0e613:
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&local_88,local_80,local_80 + 1);
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    iVar5 = local_38.Bytes.ArrayNum;
    if (local_80[0] < 1) goto LAB_14ca0e613;
  }
  memcpy(local_88.Data,FVar6.Data,(longlong)iVar5);
  if ((((byte)*(undefined4 *)local_88.Data & 0xf) != 0xb) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 11",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if ((local_38.bFlushed != true) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("bFlushed == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                         ,0x59,L"You can only get bytes on an stream that has been closed"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50[0] = 0;
  local_50[1] = 0;
  uVar1 = local_38.Bytes.ArrayNum + 0x10;
  if ((int)uVar1 < 1) {
    iVar5 = local_38.Bytes.ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
LAB_14ca0e719:
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&local_58,local_50,local_50 + 1);
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    iVar5 = local_38.Bytes.ArrayNum;
    if (local_50[0] < 1) goto LAB_14ca0e719;
  }
  memcpy(local_58.Data,FVar6.Data,(longlong)iVar5);
  uVar2 = *(ulonglong *)local_58.Data;
  if (((uVar2 & 1) == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0xe2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uVar2 >> 1 & 1) != 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0xe4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uVar2 >> 2 & 1) == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0xe6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((uVar2 >> 3 & 1) == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0xe8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if ((local_38.bFlushed != true) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("bFlushed == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                         ,0x59,L"You can only get bytes on an stream that has been closed"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  uVar1 = local_38.Bytes.ArrayNum + 0x10;
  if ((int)uVar1 < 1) {
    iVar5 = local_38.Bytes.ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
LAB_14ca0e8b1:
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&local_78,local_70,local_70 + 1);
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    iVar5 = local_38.Bytes.ArrayNum;
    if (local_70[0] < 1) goto LAB_14ca0e8b1;
  }
  memcpy(local_78.Data,FVar6.Data,(longlong)iVar5);
  if ((((uint)(*(ulonglong *)local_78.Data >> 3) & 1 | ((uint)*(ulonglong *)local_78.Data & 7) * 2)
       != 0xb) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 11",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0xf2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if ((local_38.bFlushed != true) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("bFlushed == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                         ,0x59,L"You can only get bytes on an stream that has been closed"), bVar4))
  {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  uVar1 = local_38.Bytes.ArrayNum + 0x10;
  if ((int)uVar1 < 1) {
    iVar5 = local_38.Bytes.ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
LAB_14ca0e9ca:
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&local_68,local_60,local_60 + 1);
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    iVar5 = local_38.Bytes.ArrayNum;
    if (local_60[0] < 1) goto LAB_14ca0e9ca;
  }
  memcpy(local_68.Data,FVar6.Data,(longlong)iVar5);
  if ((*local_68.Data != (FScriptContainerElement)0xb0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 0xB0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0xfa,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  iVar5 = local_38.Bytes.ArrayMax;
  local_38.Bytes._8_8_ = local_38.Bytes._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&local_38,0,&local_38.Bytes.ArrayMax);
  }
  local_38.bFlushed = false;
  local_38.BitBuffer = 0;
  local_38.BitBufferBits = 0;
  local_38.NumBits = 0;
  FHuffmanBitStreamWriter::Write(&local_38,0xb,4);
  FHuffmanBitStreamWriter::Write(&local_38,0x9e,0x11);
  FHuffmanBitStreamWriter::Write(&local_38,0xec,9);
  if (local_38.BitBufferBits != 0) {
    FHuffmanBitStreamWriter::Write(&local_38,0,8 - local_38.BitBufferBits);
    if ((local_38.BitBufferBits != 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("BitBufferBits == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                           ,0x43,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.bFlushed = true;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  uVar1 = local_38.Bytes.ArrayNum + 0x10;
  local_40[1] = 0;
  if ((int)uVar1 < 1) {
    iVar5 = local_38.Bytes.ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar1,&local_48,local_40,local_40 + 1);
    FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
    iVar5 = local_38.Bytes.ArrayNum;
    if (0 < local_40[0]) goto LAB_14ca0eb8d;
  }
  FVar6.Data = local_38.Bytes.AllocatorInstance.Data;
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ca0eb8d:
  memcpy(local_48.Data,FVar6.Data,(longlong)iVar5);
  uVar2 = *(ulonglong *)local_48.Data;
  if ((((byte)uVar2 & 0xf) != 0xb) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 11",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0x10b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((uint)(uVar2 >> 4) & 0x1ffff) != 0x9e) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 0x9E",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0x10d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((uint)(uVar2 >> 0x15) & 0x1ff) != 0xec) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Result == 0xEC",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                         ,0x10f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Bytes.AllocatorInstance.Data);
  }
  return;
}

// CreateGeomCacheIndexBuffer @ 14ca10860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
CreateGeomCacheIndexBuffer(FRHICommandListBase *param_1,int param_2)

{
  undefined4 in_register_00000014;
  
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)CONCAT44(in_register_00000014,param_2),
             (FRHIBufferCreateDesc *)param_1);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// Decode @ 14ca11a30

void __thiscall
FloatCoder<0>::Decode
          (FloatCoder<0> *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          float *param_2,int param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar8;
  ulonglong uVar14;
  
  uVar8 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  uVar10 = uVar8;
  uVar5 = uVar8;
  uVar14 = uVar8;
  if (0 < param_3) {
    do {
      if ((longlong)uVar10 < 1) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = param_2[uVar10 - 1];
      }
      if ((int)fVar9 < 0) {
        fVar9 = (float)~(uint)fVar9;
      }
      else {
        fVar9 = (float)((uint)fVar9 | 0x80000000);
      }
      uVar5 = *(longlong *)(pFVar2 + uVar8) << ((byte)uVar14 & 0x3f) | uVar5;
      uVar7 = (int)uVar8 + (0x3f - (uint)uVar14 >> 3);
      uVar8 = (ulonglong)uVar7;
      uVar12 = (uint)uVar14 | 0x38;
      uVar4 = (uint)uVar5 & 0x7ff;
      bVar3 = (this->BitlengthsDecodeTable).TableEntries[uVar4].Length;
      uVar6 = (uint)((FHuffmanDecodeTable *)(&this->BitlengthsEncodeTable + 1))->TableEntries[uVar4]
                    .Symbol;
      uVar4 = this->Zero;
      uVar13 = uVar12 - (int)(char)bVar3;
      uVar14 = (ulonglong)uVar13;
      uVar5 = uVar5 >> (bVar3 & 0x3f);
      if (uVar6 != uVar4) {
        uVar8 = (ulonglong)((((int)(char)bVar3 - uVar12) + 0x3f >> 3) + uVar7);
        uVar11 = *(longlong *)(pFVar2 + uVar7) << ((byte)uVar13 & 0x3f) | uVar5;
        if (uVar4 < uVar6) {
          iVar1 = (uVar6 - uVar4) + -1;
          bVar3 = (byte)iVar1;
          uVar14 = (ulonglong)((uVar13 | 0x38) - iVar1);
          uVar5 = uVar11 >> (bVar3 & 0x3f);
          fVar9 = (float)((int)fVar9 + ((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)uVar11) +
                         (1 << (bVar3 & 0x1f)));
        }
        else {
          iVar1 = (uVar4 - uVar6) + -1;
          bVar3 = (byte)iVar1;
          uVar14 = (ulonglong)((uVar13 | 0x38) - iVar1);
          uVar5 = uVar11 >> (bVar3 & 0x3f);
          fVar9 = (float)((int)fVar9 +
                         ((-1 << (bVar3 & 0x1f)) - ((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)uVar11)
                         ));
        }
      }
      if ((int)fVar9 < 0) {
        fVar9 = ABS(fVar9);
      }
      else {
        fVar9 = (float)~(uint)fVar9;
      }
      param_2[uVar10] = fVar9;
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)param_3);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCache @ 14ca14e90

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCache(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheActor @ 14ca14ea0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecBase @ 14ca14eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecRaw @ 14ca14ec0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecRaw(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecV1 @ 14ca14ed0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheCodecV1(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheComponent @ 14ca14ee0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheMeshData @ 14ca14ef0

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheMeshData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheTrack @ 14ca14f00

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheTrack(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackFlipbookAnimation @ 14ca14f10

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackFlipbookAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackStreamable @ 14ca14f20

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackStreamable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformAnimation @ 14ca14f30

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformGroupAnimation @ 14ca14f40

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformGroupAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGeometryCache_init @ 14ca14f50

void __cdecl EmptyLinkFunctionForGeneratedCodeGeometryCache_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraGeometryCacheRendererProperties @ 14ca14f60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraGeometryCacheRendererProperties(void)

{
  return;
}

// EncodePass @ 14ca155f0

void __thiscall FloatCoder<0>::EncodePass(FloatCoder<0> *this,float *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong64 *puVar3;
  FHuffmanBitStreamWriter *this_00;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  FScriptContainerElement local_58;
  FScriptContainerElement local_57 [31];
  
  this_00 = &this->Stream;
  iVar8 = (this->Stream).Bytes.ArrayMax;
  piVar1 = &(this->Stream).Bytes.ArrayMax;
  (this->Stream).Bytes.ArrayNum = 0;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  (this->Stream).bFlushed = false;
  (this->Stream).BitBuffer = 0;
  (this->Stream).BitBufferBits = 0;
  (this->Stream).NumBits = 0;
  if (0 < param_2) {
    lVar13 = 0;
    do {
      fVar4 = param_1[lVar13];
      if (lVar13 == 0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = param_1[lVar13 + -1];
      }
      if ((int)fVar4 < 0) {
        uVar10 = ~(uint)fVar4;
      }
      else {
        uVar10 = (uint)fVar4 | 0x80000000;
      }
      if ((int)fVar14 < 0) {
        uVar11 = ~(uint)fVar14;
      }
      else {
        uVar11 = (uint)fVar14 | 0x80000000;
      }
      if (uVar11 < uVar10) {
        uVar10 = uVar10 - uVar11;
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                               ,0x9a,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar12 = 0;
        if (uVar10 != 0) {
          iVar12 = iVar8;
        }
        FHuffmanEncodeTable::Encode(&this->BitlengthsEncodeTable,this_00,this->Zero + 1 + iVar12);
        uVar11 = 1 << ((byte)iVar12 & 0x1f);
        uVar10 = uVar10 - uVar11;
        if (((this->Stream).bFlushed != false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("bFlushed == false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                               ,0x2a,L"You cannot write to a stream that has already been closed"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((uVar11 <= uVar10) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Bits < (1u << InNumBits)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                               ,0x2b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = (this->Stream).BitBufferBits;
        puVar2 = &(this->Stream).NumBits;
        *puVar2 = *puVar2 + iVar12;
        uVar9 = (ulonglong)uVar10 << ((byte)uVar11 & 0x3f) | (this->Stream).BitBuffer;
        uVar11 = uVar11 + iVar12;
        (this->Stream).BitBuffer = uVar9;
        (this->Stream).BitBufferBits = uVar11;
        while (7 < uVar11) {
          pFVar5 = (this_00->Bytes).AllocatorInstance.Data;
          local_58 = SUB81(uVar9,0);
          if (((pFVar5 <= &local_58) && (&local_58 < pFVar5 + *piVar1)) &&
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
          iVar8 = (this->Stream).Bytes.ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,(ForAnyElementType *)this_00,piVar1);
          }
          (this->Stream).Bytes.ArrayNum = iVar8 + 1;
          (this_00->Bytes).AllocatorInstance.Data[iVar8] = local_58;
          puVar3 = &(this->Stream).BitBuffer;
          *puVar3 = *puVar3 >> 8;
          puVar2 = &(this->Stream).BitBufferBits;
          *puVar2 = *puVar2 - 8;
          uVar9 = (ulonglong)(byte)(this->Stream).BitBuffer;
          uVar11 = (this->Stream).BitBufferBits;
        }
      }
      else if (uVar10 < uVar11) {
        uVar11 = uVar11 - uVar10;
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                               ,0x9a,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar12 = 0;
        if (uVar11 != 0) {
          iVar12 = iVar8;
        }
        FHuffmanEncodeTable::Encode(&this->BitlengthsEncodeTable,this_00,(this->Zero - iVar12) + -1)
        ;
        uVar10 = 1 << ((byte)iVar12 & 0x1f);
        uVar11 = uVar11 - uVar10;
        if (((this->Stream).bFlushed != false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("bFlushed == false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                               ,0x2a,L"You cannot write to a stream that has already been closed"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((uVar10 <= uVar11) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Bits < (1u << InNumBits)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                               ,0x2b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar10 = (this->Stream).BitBufferBits;
        puVar2 = &(this->Stream).NumBits;
        *puVar2 = *puVar2 + iVar12;
        uVar9 = (ulonglong)uVar11 << ((byte)uVar10 & 0x3f) | (this->Stream).BitBuffer;
        uVar10 = uVar10 + iVar12;
        (this->Stream).BitBuffer = uVar9;
        (this->Stream).BitBufferBits = uVar10;
        while (7 < uVar10) {
          pFVar5 = (this_00->Bytes).AllocatorInstance.Data;
          local_57[0] = SUB81(uVar9,0);
          if (((pFVar5 <= local_57) && (local_57 < pFVar5 + *piVar1)) &&
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
          iVar8 = (this->Stream).Bytes.ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,(ForAnyElementType *)this_00,piVar1);
          }
          (this->Stream).Bytes.ArrayNum = iVar8 + 1;
          (this_00->Bytes).AllocatorInstance.Data[iVar8] = local_57[0];
          puVar3 = &(this->Stream).BitBuffer;
          *puVar3 = *puVar3 >> 8;
          puVar2 = &(this->Stream).BitBufferBits;
          *puVar2 = *puVar2 - 8;
          uVar9 = (ulonglong)(byte)(this->Stream).BitBuffer;
          uVar10 = (this->Stream).BitBufferBits;
        }
      }
      else {
        FHuffmanEncodeTable::Encode(&this->BitlengthsEncodeTable,this_00,this->Zero);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < param_2);
  }
  uVar10 = (this->Stream).BitBufferBits;
  if (uVar10 != 0) {
    FHuffmanBitStreamWriter::Write(this_00,0,8 - uVar10);
  }
  if (((this->Stream).BitBufferBits != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BitBufferBits == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                         ,0x43,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (this->Stream).bFlushed = true;
  return;
}

// FloatTest @ 14ca164b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FloatTest(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  size_t sVar7;
  float *pfVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStackY_1178 [32];
  ForAnyElementType local_1138;
  int local_1130;
  int local_112c;
  ForAnyElementType local_1128;
  int local_1120 [4];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1110;
  FloatCoder<0> local_10f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1178;
  pfVar4 = operator_new__(0x400000);
  pfVar5 = operator_new__(0x400000);
  iVar6 = 0;
  lVar10 = 0x100000;
  pfVar8 = pfVar4;
  do {
    __vdecl_sinf4();
    iVar6 = iVar6 + 4;
    *(undefined8 *)pfVar8 = extraout_XMM0_Qa;
    *(undefined8 *)(pfVar8 + 2) = extraout_XMM0_Qb;
    pfVar8 = pfVar8 + 4;
  } while (iVar6 < 0x100000);
  local_10f8.BitlengthsEncodeTable.SymbolFrequencies.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_10f8.BitlengthsEncodeTable.SymbolFrequencies.ArrayNum = 0;
  local_10f8.BitlengthsEncodeTable.SymbolFrequencies.ArrayMax = 0;
  local_10f8.BitlengthsEncodeTable.CodewordSymbols.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_10f8.BitlengthsEncodeTable.CodewordSymbols.ArrayNum = 0;
  local_10f8.BitlengthsEncodeTable.CodewordSymbols.ArrayMax = 0;
  local_10f8.BitlengthsEncodeTable.CodeWords.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_10f8.BitlengthsEncodeTable.CodeWords.ArrayNum = 0;
  local_10f8.BitlengthsEncodeTable.CodeWords.ArrayMax = 0;
  local_10f8.Stream.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10f8.Stream.Bytes.ArrayNum = 0;
  local_10f8.Stream.Bytes.ArrayMax = 0;
  local_10f8.Stream.bFlushed = false;
  local_10f8.Stream.BitBuffer = 0;
  local_10f8.Stream.BitBufferBits = 0;
  local_10f8.Stream.NumBits = 0;
  local_10f8.Zero = 0x21;
  FHuffmanEncodeTable::Initialize(&local_10f8.BitlengthsEncodeTable,0x100);
  if (local_10f8.BitlengthsEncodeTable.bIsPrepass == false) {
    local_1120[2] = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_10f8,
               (uint *)(local_1120 + 2),local_10f8.BitlengthsEncodeTable.NumSymbols);
    FHuffmanEncodeTable::ResetFrequencies(&local_10f8.BitlengthsEncodeTable);
  }
  local_10f8.BitlengthsEncodeTable.bIsPrepass = true;
  FloatCoder<0>::EncodePass(&local_10f8,pfVar4,0x100000);
  FHuffmanEncodeTable::SetPrepass(&local_10f8.BitlengthsEncodeTable,false);
  FloatCoder<0>::EncodePass(&local_10f8,pfVar4,0x100000);
  if ((local_10f8.Stream.bFlushed != true) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("bFlushed == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                         ,0x59,L"You can only get bytes on an stream that has been closed"), bVar2))
  {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar9.Data = local_10f8.Stream.Bytes.AllocatorInstance.Data;
  sVar7 = (size_t)local_10f8.Stream.Bytes.ArrayNum;
  local_1138.Data = (FScriptContainerElement *)0x0;
  local_1130 = local_10f8.Stream.Bytes.ArrayNum;
  if (local_10f8.Stream.Bytes.ArrayNum == 0) {
    local_112c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_10f8.Stream.Bytes.ArrayNum,0,&local_1138,local_10f8.Stream.Bytes.ArrayNum,
               &local_112c);
    memcpy(local_1138.Data,FVar9.Data,sVar7);
  }
  uVar3 = local_1130 + 0x10;
  local_1128.Data = (FScriptContainerElement *)0x0;
  local_1120[1] = 0;
  local_1120[0] = 0;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,&local_1128,local_1120,local_1120 + 1);
    FVar9.Data = local_1138.Data;
    iVar6 = local_1130;
    if (0 < local_1120[0]) goto LAB_14ca1672b;
  }
  iVar6 = local_1130;
  FVar9.Data = local_1138.Data;
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14ca1672b:
  memcpy(local_1128.Data,FVar9.Data,(longlong)iVar6);
  if (local_1138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1138.Data);
  }
  FVar9.Data = local_1128.Data;
  sVar7 = (size_t)local_1120[0];
  local_1110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1110.ArrayNum = local_1120[0];
  if (local_1120[0] == 0) {
    local_1110.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_1120[0],0,&local_1110.AllocatorInstance,local_1120[0],&local_1110.ArrayMax)
    ;
    memcpy(local_1110.AllocatorInstance.Data,FVar9.Data,sVar7);
  }
  FloatCoder<0>::Decode(&local_10f8,&local_1110,pfVar5,0x100000);
  pfVar8 = pfVar5;
  while ((*pfVar8 == *(float *)((longlong)pfVar8 + ((longlong)pfVar4 - (longlong)pfVar5)) ||
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Values[Index] == OutValues[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                             ,0x16a,L""), !bVar2))) {
    pfVar8 = pfVar8 + 1;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      operator_delete__(pfVar4);
      operator_delete__(pfVar5);
      if (local_1128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1128.Data);
      }
      if (local_10f8.Stream.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10f8.Stream.Bytes.AllocatorInstance.Data);
      }
      if (local_10f8.BitlengthsEncodeTable.CodeWords.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10f8.BitlengthsEncodeTable.CodeWords.AllocatorInstance.Data);
      }
      if (local_10f8.BitlengthsEncodeTable.CodewordSymbols.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10f8.BitlengthsEncodeTable.CodewordSymbols.AllocatorInstance.Data);
      }
      if (local_10f8.BitlengthsEncodeTable.SymbolFrequencies.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10f8.BitlengthsEncodeTable.SymbolFrequencies.AllocatorInstance.Data);
      }
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// GenerateHuffmanCodes @ 14ca19060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl GenerateHuffmanCodes(ushort *param_1,uchar *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_18b8 [32];
  longlong local_1898;
  short *local_1890;
  ushort *local_1888;
  int local_1880 [14];
  undefined2 local_1848 [256];
  short local_1648 [2816];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14ca19075;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_18b8;
  lVar14 = (longlong)param_4;
  local_1880[0] = 0;
  local_1880[1] = 0;
  local_1880[2] = 0;
  local_1880[3] = 0;
  local_1880[4] = 0;
  local_1880[5] = 0;
  local_1880[6] = 0;
  local_1880[7] = 0;
  local_1880[8] = 0;
  local_1880[9] = 0;
  local_1880[10] = 0;
  local_1880[0xb] = 0;
  local_1888 = param_1;
  memset(local_1848,0,0x1800);
  uVar7 = 0;
  iVar10 = 0;
  pbVar8 = param_2;
  if (0 < param_3) {
    do {
      bVar1 = *pbVar8;
      if ((0xb < bVar1) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("CodeLength <= 11",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                             ,0xa0,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = local_1880[bVar1];
      local_1848[(int)(iVar3 + (uint)bVar1 * 0x100)] = (short)iVar10;
      iVar10 = iVar10 + 1;
      local_1880[bVar1] = iVar3 + 1;
      pbVar8 = pbVar8 + 1;
    } while (iVar10 < param_3);
  }
  uVar11 = 1;
  if (0 < lVar14) {
    local_1890 = local_1648;
    lVar13 = 1;
    local_1898 = lVar14;
    do {
      lVar12 = (longlong)local_1880[lVar13];
      if (0 < lVar12) {
        psVar9 = local_1890;
        uVar6 = uVar7;
        do {
          sVar2 = *psVar9;
          if ((param_2[sVar2] != uVar11) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("CodeLengths[Symbol] == CodeLength",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                                 ,0xad,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          psVar9 = psVar9 + 1;
          uVar7 = uVar6 + 1;
          uVar6 = uVar6 >> 1 & 0x55555555 | (uVar6 & 0xd5555555) * 2;
          uVar6 = (uVar6 & 0xf3333333) << 2 | uVar6 >> 2 & 0x33333333;
          uVar6 = uVar6 >> 4 & 0xf0f0f0f | (uVar6 & 0xff0f0f0f) << 4;
          local_1888[sVar2] =
               (ushort)((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18) >> (0x20U - (char)uVar11 & 0x1f));
          lVar12 = lVar12 + -1;
          lVar14 = local_1898;
          uVar6 = uVar7;
        } while (lVar12 != 0);
      }
      local_1890 = local_1890 + 0x100;
      uVar7 = uVar7 * 2;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 1;
    } while (lVar13 <= lVar14);
  }
  return;
}

// GenerateLengthLimitedHuffmanLengths @ 14ca19260

void __cdecl
GenerateLengthLimitedHuffmanLengths(uchar *param_1,uint *param_2,int param_3,int param_4)

{
  size_t _Size;
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_b8;
  int local_b0 [4];
  ForAnyElementType local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  int local_84;
  uint local_80;
  longlong local_78;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  
  local_res20 = param_4;
  if ((1 << ((byte)param_4 & 0x1f) < param_3) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("NumSymbols <= (1 << MaxCodeLength)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                         ,0x22,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((0x100 < param_3) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("NumSymbols <= 256",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                         ,0x23,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((0xb < param_4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("MaxCodeLength <= 11",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                         ,0x24,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  memset(param_1,0,(longlong)param_3);
  iVar9 = 0;
  iVar5 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98._0_4_ = 0;
  local_98 = 0;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
  }
  if (0 < param_3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_3,&local_a0,0,(int *)((longlong)&local_98 + 4));
    iVar5 = iVar9;
    do {
      if (*param_2 != 0) {
        local_90 = CONCAT44(iVar9,*param_2);
        iVar5 = (int)local_98;
        if ((int)local_98 == local_98._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_a0,(int *)((longlong)&local_98 + 4));
        }
        local_98 = CONCAT44(local_98._4_4_,iVar5 + 1);
        *(longlong *)(local_a0.Data + (longlong)iVar5 * 8) = local_90;
        iVar5 = iVar9;
      }
      iVar9 = iVar9 + 1;
      param_2 = param_2 + 1;
    } while (iVar9 < param_3);
  }
  AlgoImpl::
  IntroSortInternal<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,int,FIdentityFunctor,TDereferenceWrapper<_GenerateLengthLimitedHuffmanLengths_::__l2::SortEntry,_GenerateLengthLimitedHuffmanLengths_::__l2::<lambda_1>_>_>
            ((SortEntry *)local_a0.Data,(int)local_98,local_res20._0_1_,(<lambda_1> *)local_res18);
  iVar9 = (int)local_98;
  lVar13 = (longlong)(int)local_98;
  if ((int)local_98 == 1) {
    param_1[iVar5] = '\x01';
    goto LAB_14ca199ee;
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  iVar5 = (int)local_98 * param_4 * 2;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar5,&local_b8,local_b0,local_b0 + 1);
  _Size = (longlong)iVar5 * 0x18;
  memmove(local_b8.Data + _Size,local_b8.Data,(longlong)iVar6 * 0x18);
  memset(local_b8.Data,0,_Size);
  uVar16 = 0;
  local_b0[2] = 0;
  uVar10 = 0;
  if (0 < param_4) {
    lVar11 = 0;
    local_50 = 0;
    local_80 = 0;
    local_48 = (ulonglong)(uint)param_4;
    local_40 = lVar13;
LAB_14ca19490:
    local_60 = (longlong)(int)local_80;
    local_84 = 0;
    local_70 = lVar11 * 0x18;
    lVar13 = local_60 * 0x18;
    uVar10 = local_80 + 1;
    local_78 = 0;
    local_88 = 0;
    local_90 = lVar13;
    local_80 = uVar16;
    local_58 = local_40;
    do {
      lVar3 = local_58;
      lVar2 = local_78;
      uVar7 = local_88;
      if (local_b0[2] < 2) {
        if (local_58 < 1) goto code_r0x00014ca194e3;
LAB_14ca196f0:
        lVar2 = local_70;
        lVar11 = local_78;
        uVar12 = 0;
        if ((int)uVar7 < (int)local_98) {
          uVar12 = ~uVar7 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar14 = local_a0.Data + lVar11;
        uVar12 = 0;
        if ((int)uVar16 < local_b0[0]) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_88 = uVar7 + 1;
        local_58 = lVar3 + -1;
        pFVar8 = local_b8.Data + lVar2;
        *(undefined4 *)(pFVar8 + 4) = *(undefined4 *)pFVar14;
        *(undefined4 *)pFVar8 = *(undefined4 *)(pFVar14 + 4);
        local_78 = local_78 + 8;
        *(undefined8 *)(pFVar8 + 8) = 0;
        *(undefined8 *)(pFVar8 + 0x10) = 0;
        local_70 = lVar2;
      }
      else {
        if (0 < local_58) {
          uVar12 = 0;
          if ((int)local_88 < (int)local_98) {
            uVar12 = ~local_88 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar14 = local_a0.Data + lVar2;
          uVar12 = 0;
          if ((int)(uVar10 - 1) < local_b0[0]) {
            uVar12 = ~(uVar10 - 1) >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar15.Data = local_b8.Data;
          uVar12 = 0;
          if ((int)uVar10 < local_b0[0]) {
            uVar12 = ~uVar10 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(uint *)pFVar14 <=
              (uint)(*(int *)(local_b8.Data + lVar13 + 0x1c) + *(int *)(FVar15.Data + lVar13 + 4)))
          goto LAB_14ca196f0;
        }
        lVar11 = local_70;
        uVar7 = 0;
        if ((int)uVar16 < local_b0[0]) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar14 = local_b8.Data + lVar11;
        uVar12 = ~(uVar10 - 1) >> 0x1f;
        uVar7 = 0;
        if ((int)(uVar10 - 1) < local_b0[0]) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar15.Data = local_b8.Data;
        uVar7 = 0;
        if ((int)uVar10 < local_b0[0]) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar11 = local_60;
        *(int *)(pFVar14 + 4) =
             *(int *)(local_b8.Data + local_90 + 0x1c) + *(int *)(FVar15.Data + lVar13 + 4);
        *(undefined4 *)pFVar14 = 0x80000000;
        uVar7 = 0;
        if ((int)(uVar10 - 1) < local_b0[0]) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar13 = local_90;
        *(FScriptContainerElement **)(pFVar14 + 8) = local_b8.Data + local_90;
        uVar7 = 0;
        if ((int)uVar10 < local_b0[0]) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_60 = lVar11 + 2;
        lVar11 = (longlong)(int)uVar10;
        uVar10 = uVar10 + 2;
        *(FScriptContainerElement **)(pFVar14 + 0x10) = local_b8.Data + lVar11 * 0x18;
        local_b0[2] = local_b0[2] + -2;
        lVar13 = lVar13 + 0x30;
        local_90 = lVar13;
      }
      uVar16 = uVar16 + 1;
      lVar11 = local_50 + 1;
      local_84 = local_84 + 1;
      local_70 = local_70 + 0x18;
      local_50 = lVar11;
    } while( true );
  }
LAB_14ca19501:
  if ((iVar9 * param_4 * 2 < (int)uVar16) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeIndex <= NumUsedSymbols * MaxCodeLength * 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanTable.cpp"
                         ,0x8a,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = iVar9 * 2 + -2;
  lVar13 = (longlong)iVar5;
  if (0 < iVar5) {
    lVar11 = (longlong)(int)uVar10 * 0x18;
    do {
      uVar16 = 0;
      if ((int)uVar10 < local_b0[0]) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(local_b8.Data + lVar11) == -0x80000000) {
        FVar15.Data = local_b8.Data;
        `GenerateLengthLimitedHuffmanLengths'::__l2::Node::GenerateLengthLimitedHuffmanLengthsInner
                  (*(Node **)(local_b8.Data + lVar11 + 8),param_1);
        `GenerateLengthLimitedHuffmanLengths'::__l2::Node::GenerateLengthLimitedHuffmanLengthsInner
                  (*(Node **)(FVar15.Data + lVar11 + 0x10),param_1);
      }
      else {
        param_1[*(int *)(local_b8.Data + lVar11)] =
             param_1[*(int *)(local_b8.Data + lVar11)] + '\x01';
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x18;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
LAB_14ca199ee:
  if ((SortEntry *)local_a0.Data != (SortEntry *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return;
code_r0x00014ca194e3:
  local_48 = local_48 - 1;
  local_b0[2] = local_84;
  if (local_48 == 0) goto code_r0x00014ca194f7;
  goto LAB_14ca19490;
code_r0x00014ca194f7:
  iVar9 = (int)local_40;
  local_48 = 0;
  uVar10 = local_80;
  param_4 = local_res20;
  goto LAB_14ca19501;
}

// GenerateLengthLimitedHuffmanLengthsInner @ 14ca19a30

void __cdecl
`GenerateLengthLimitedHuffmanLengths'::__l2::Node::GenerateLengthLimitedHuffmanLengthsInner
          (Node *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = param_1->Symbol;
  while (iVar1 == -0x80000000) {
    GenerateLengthLimitedHuffmanLengthsInner(param_1->Children[0],param_2);
    param_1 = param_1->Children[1];
    iVar1 = param_1->Symbol;
  }
  param_2[iVar1] = param_2[iVar1] + '\x01';
  return;
}

// GetGeometryCacheIndex @ 14ca1c3e0

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

int __cdecl
GetGeometryCacheIndex
          (TOptional<int> param_1,bool param_2,FNiagaraEmitterInstance *param_3,
          UNiagaraGeometryCacheRendererProperties *param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((!param_2) && (*(char *)((longlong)param_1 + 4) == '\0')) {
    return -1;
  }
  if ((*(char *)((longlong)param_1 + 4) == '\0') || (iVar4 = *(int *)param_1, *(int *)param_1 == -1)
     ) {
    iVar1 = (param_4->GeometryCaches).ArrayNum;
    if (param_3->bDeterministic == '\0') {
      if (0 < iVar1) {
        uVar2 = rand();
        iVar3 = (int)((float)(uVar2 & 0x7fff) * (float)iVar1 * __real_38000100);
        iVar4 = iVar1 + -1;
        if (iVar3 < iVar1 + -1) {
          iVar4 = iVar3;
        }
        goto LAB_14ca1c4b0;
      }
    }
    else if (0 < iVar1 + 1) {
      if (param_4->bAssignComponentsOnParticleID != false) {
        param_5 = param_6;
      }
      iVar4 = (int)(((float)(param_5 * 0x6755c127 + 0x3619636bU >> 9 | 0x3f800000) - __real_3f800000
                    ) * (float)(iVar1 + 1));
      goto LAB_14ca1c4b0;
    }
    iVar4 = 0;
  }
LAB_14ca1c4b0:
  return iVar4 % (param_4->GeometryCaches).ArrayNum;
}

// IntegerTest @ 14ca22fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl IntegerTest(void)

{
  byte bVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  bool bVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auStackY_11b8 [32];
  ForAnyElementType local_1188;
  undefined8 local_1180;
  ForAnyElementType local_1178;
  int local_1170 [4];
  FHuffmanBitStreamWriter local_1160;
  FHuffmanBitStreamWriter local_1138;
  FScriptContainerElement *local_1110;
  void *local_1108;
  FHuffmanBitStreamReader local_1100;
  FHuffmanEncodeTable local_10d8;
  FHuffmanDecodeTable local_1068;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_11b8;
  piVar8 = operator_new__(0x400000);
  local_1108 = operator_new__(0x400000);
  fVar5 = __real_44f9f000;
  fVar4 = __real_3a800000;
  fVar3 = __real_3f800000;
  uVar9 = 0;
  lVar11 = 0x100000;
  uVar15 = uVar9;
  piVar10 = piVar8;
  do {
    fVar20 = sinf((float)(int)uVar15 * fVar4);
    uVar12 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar12;
    *piVar10 = (int)(longlong)((fVar20 + fVar3) * fVar5);
    piVar10 = piVar10 + 1;
  } while ((int)uVar12 < 0x100000);
  local_10d8.SymbolFrequencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10d8.SymbolFrequencies.ArrayNum = 0;
  local_10d8.SymbolFrequencies.ArrayMax = 0;
  local_10d8.CodewordSymbols.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10d8.CodewordSymbols.ArrayNum = 0;
  local_10d8.CodewordSymbols.ArrayMax = 0;
  local_10d8.CodeWords.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_10d8.CodeWords.ArrayNum = 0;
  local_10d8.CodeWords.ArrayMax = 0;
  FHuffmanEncodeTable::Initialize(&local_10d8,4000);
  local_1160.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1160.Bytes.ArrayNum = 0;
  local_1160.Bytes.ArrayMax = 0;
  local_1160.bFlushed = false;
  local_1160.BitBuffer = 0;
  local_1160.BitBufferBits = 0;
  local_1160.NumBits = 0;
  if (local_10d8.bIsPrepass == false) {
    local_1170[2] = 0;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init
              (&local_10d8.SymbolFrequencies,(uint *)(local_1170 + 2),local_10d8.NumSymbols);
    uVar15 = uVar9;
    uVar17 = uVar9;
    if (0 < local_10d8.SymbolFrequencies.ArrayNum) {
      do {
        uVar13 = (uint)uVar15;
        uVar12 = 0;
        if ((int)uVar13 < local_10d8.SymbolFrequencies.ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(local_10d8.SymbolFrequencies.AllocatorInstance.Data + uVar17) = 0;
        uVar15 = (ulonglong)(uVar13 + 1);
        uVar17 = uVar17 + 4;
      } while ((int)(uVar13 + 1) < local_10d8.SymbolFrequencies.ArrayNum);
    }
  }
  local_10d8.bIsPrepass = true;
  uVar15 = uVar9;
  do {
    FHuffmanEncodeTable::Encode(&local_10d8,&local_1160,piVar8[uVar15]);
    uVar15 = uVar15 + 1;
  } while ((longlong)uVar15 < 0x100000);
  FHuffmanEncodeTable::SetPrepass(&local_10d8,false);
  uVar15 = uVar9;
  do {
    FHuffmanEncodeTable::Encode(&local_10d8,&local_1160,piVar8[uVar15]);
    uVar15 = uVar15 + 1;
  } while ((longlong)uVar15 < 0x100000);
  if (local_1160.BitBufferBits != 0) {
    FHuffmanBitStreamWriter::Write(&local_1160,0,8 - local_1160.BitBufferBits);
    if ((local_1160.BitBufferBits != 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("BitBufferBits == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                           ,0x43,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_1160.bFlushed = true;
  local_1178.Data = (FScriptContainerElement *)0x0;
  uVar12 = local_1160.Bytes.ArrayNum + 0x10;
  local_1170[0] = 0;
  local_1170[1] = 0;
  if ((int)uVar12 < 1) {
    iVar14 = local_1160.Bytes.ArrayNum;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
LAB_14ca23290:
    FVar18.Data = local_1160.Bytes.AllocatorInstance.Data;
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar12,&local_1178,local_1170,local_1170 + 1);
    FVar18.Data = local_1160.Bytes.AllocatorInstance.Data;
    iVar14 = local_1160.Bytes.ArrayNum;
    if (local_1170[0] < 1) goto LAB_14ca23290;
  }
  memcpy(local_1178.Data,FVar18.Data,(longlong)iVar14);
  local_1110 = local_1178.Data;
  local_1138.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1138.Bytes.ArrayNum = 0;
  local_1138.Bytes.ArrayMax = 0;
  local_1138.bFlushed = false;
  local_1138.BitBuffer = 0;
  local_1138.BitBufferBits = 0;
  local_1138.NumBits = 0;
  FHuffmanEncodeTable::Serialize(&local_10d8,&local_1138);
  if (local_1138.BitBufferBits != 0) {
    FHuffmanBitStreamWriter::Write(&local_1138,0,8 - local_1138.BitBufferBits);
    if ((local_1138.BitBufferBits != 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("BitBufferBits == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\HuffmanBitStream.h"
                           ,0x43,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_1138.bFlushed = true;
  local_1188.Data = (FScriptContainerElement *)0x0;
  local_1180 = 0;
  uVar12 = local_1138.Bytes.ArrayNum + 0x10;
  if ((int)uVar12 < 1) {
    iVar14 = local_1138.Bytes.ArrayNum;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar12,&local_1188,(int *)&local_1180,(int *)((longlong)&local_1180 + 4));
    FVar18.Data = local_1138.Bytes.AllocatorInstance.Data;
    iVar14 = local_1138.Bytes.ArrayNum;
    if (0 < (int)local_1180) goto LAB_14ca233df;
  }
  FVar18.Data = local_1138.Bytes.AllocatorInstance.Data;
  bVar7 = FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ca233df:
  memcpy(local_1188.Data,FVar18.Data,(longlong)iVar14);
  local_1100.Bytes = (uchar *)local_1188.Data;
  local_1100.NumBytes = local_1180 & 0xffffffff;
  local_1100.BitBuffer = 0;
  local_1100.BitBufferBits = 0;
  local_1100.BytePos = 0;
  FHuffmanDecodeTable::Initialize(&local_1068,&local_1100);
  pvVar6 = local_1108;
  uVar15 = uVar9;
  uVar17 = uVar9;
  uVar19 = uVar9;
  do {
    uVar9 = *(longlong *)(local_1110 + uVar19) << ((byte)uVar15 & 0x3f) | uVar9;
    uVar19 = (ulonglong)((int)uVar19 + (0x3f - (uint)uVar15 >> 3));
    uVar12 = (uint)uVar9 & 0x7ff;
    bVar1 = local_1068.TableEntries[uVar12].Length;
    uVar15 = (ulonglong)(((uint)uVar15 | 0x38) - (int)(char)bVar1);
    *(int *)((longlong)local_1108 + uVar17 * 4) = (int)local_1068.TableEntries[uVar12].Symbol;
    uVar17 = uVar17 + 1;
    uVar9 = uVar9 >> (bVar1 & 0x3f);
  } while ((longlong)uVar17 < 0x100000);
  lVar16 = (longlong)local_1108 - (longlong)piVar8;
  piVar10 = piVar8;
  while ((*(int *)(lVar16 + (longlong)piVar10) == *piVar10 ||
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("OutIntValues[Index] == IntValues[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\FloatCompression.cpp"
                             ,0x14a,L""), !bVar7))) {
    piVar10 = piVar10 + 1;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      operator_delete__(piVar8);
      operator_delete__(pvVar6);
      if (local_1188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1188.Data);
      }
      if (local_1138.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1138.Bytes.AllocatorInstance.Data);
      }
      if (local_1178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1178.Data);
      }
      if (local_1160.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1160.Bytes.AllocatorInstance.Data);
      }
      if (local_10d8.CodeWords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10d8.CodeWords.AllocatorInstance.Data);
      }
      if (local_10d8.CodewordSymbols.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10d8.CodewordSymbols.AllocatorInstance.Data);
      }
      if (local_10d8.SymbolFrequencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10d8.SymbolFrequencies.AllocatorInstance.Data);
      }
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Z_Construct_UClass_AGeometryCacheActor_NoRegister @ 14ca30a80

UClass * __cdecl Z_Construct_UClass_AGeometryCacheActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheActor",
               &Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton,
               AGeometryCacheActor::StaticRegisterNativesAGeometryCacheActor,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGeometryCacheActor>,
               InternalVTableHelperCtorCaller<AGeometryCacheActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCacheActor.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_NoRegister @ 14ca30b40

UClass * __cdecl
Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack_FlipbookAnimation",
               &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.
                InnerSingleton,
               UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::
               StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation,0x80,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>,
               InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>,
               local_res8,UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation.InnerSingleton;
}

// Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation_NoRegister @ 14ca30c00

UClass * __cdecl
Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack_TransformAnimation",
               &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation.
                InnerSingleton,
               UDEPRECATED_GeometryCacheTrack_TransformAnimation::
               StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformAnimation,0x130,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformAnimation>,
               InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformAnimation>,
               local_res8,UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformAnimation.InnerSingleton
  ;
}

// Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_NoRegister @ 14ca30cc0

UClass * __cdecl
Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack_TransformGroupAnimation",
               &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
                InnerSingleton,
               UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::
               StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation,0x130,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>,
               InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>
               ,local_res8,UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
         InnerSingleton;
}

// Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister @ 14ca30d80

UClass * __cdecl Z_Construct_UClass_UGeometryCacheCodecRaw_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecRaw",
               &Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton,
               UGeometryCacheCodecRaw::StaticRegisterNativesUGeometryCacheCodecRaw,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheCodecRaw>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecRaw>,local_res8,
               UGeometryCacheCodecBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecRaw.InnerSingleton;
}

// Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister @ 14ca30e40

UClass * __cdecl Z_Construct_UClass_UGeometryCacheCodecV1_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheCodecV1",
               &Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton,
               UGeometryCacheCodecV1::StaticRegisterNativesUGeometryCacheCodecV1,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UGeometryCacheCodecV1>,
               InternalVTableHelperCtorCaller<UGeometryCacheCodecV1>,local_res8,
               UGeometryCacheCodecBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheCodecV1.InnerSingleton;
}

// Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister @ 14ca30f00

UClass * __cdecl Z_Construct_UClass_UGeometryCacheTrackStreamable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrackStreamable",
               &Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton,
               UGeometryCacheTrackStreamable::StaticRegisterNativesUGeometryCacheTrackStreamable,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCacheTrackStreamable>,
               InternalVTableHelperCtorCaller<UGeometryCacheTrackStreamable>,local_res8,
               UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCacheTrackStreamable.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_NoRegister @ 14ca30fc0

UClass * __cdecl Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"NiagaraGeometryCacheRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton,
               UNiagaraGeometryCacheRendererProperties::
               StaticRegisterNativesUNiagaraGeometryCacheRendererProperties,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraGeometryCacheRendererProperties>
               ,InternalVTableHelperCtorCaller<UNiagaraGeometryCacheRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton;
}

// Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo @ 14ca31080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheMeshBatchInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryCacheMeshBatchInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheMeshBatchInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryCacheMeshBatchInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGeometryCacheVertexInfo @ 14ca31100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGeometryCacheVertexInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheVertexInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGeometryCacheVertexInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGeometryCacheVertexInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGeometryCacheVertexInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTrackRenderData @ 14ca31180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrackRenderData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrackRenderData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrackRenderData.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrackRenderData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrackRenderData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTrackRenderData.InnerSingleton;
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

// IMPLEMENT_MODULE_GeometryCache @ 14ca32690

void __cdecl IMPLEMENT_MODULE_GeometryCache(void)

{
  return;
}

// GeometryCacheRendererPropertiesToDeferredInit'' @ 150452bb0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::
GeometryCacheRendererPropertiesToDeferredInit__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraGeometryCacheRendererProperties::
               GeometryCacheRendererPropertiesToDeferredInit.AllocatorInstance.Data;
  if (UNiagaraGeometryCacheRendererProperties::GeometryCacheRendererPropertiesToDeferredInit.
      AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraGeometryCacheRendererProperties::GeometryCacheRendererPropertiesToDeferredInit.
      AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// Particles_Age'' @ 150452bd0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::Particles_Age__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraGeometryCacheRendererProperties::Particles_Age.VarData.AllocatorInstance.Data
  ;
  if (UNiagaraGeometryCacheRendererProperties::Particles_Age.VarData.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraGeometryCacheRendererProperties::Particles_Age.VarData.AllocatorInstance.Data !=
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

// Particles_ArrayIndex'' @ 150452bf0

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex.VarData.
               AllocatorInstance.Data;
  if (UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex.VarData.AllocatorInstance.Data
      == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraGeometryCacheRendererProperties::Particles_ArrayIndex.VarData.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
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

// Particles_GeoCacheIsEnabled'' @ 150452c10

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::
Particles_GeoCacheIsEnabled__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled.VarData.
               AllocatorInstance.Data;
  if (UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled.VarData.AllocatorInstance
      .Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheIsEnabled.VarData.AllocatorInstance
      .Data != (FScriptContainerElement *)0x0) {
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

// Particles_GeoCacheRotation'' @ 150452c30

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraGeometryCacheRendererProperties::
Particles_GeoCacheRotation__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation.VarData.
               AllocatorInstance.Data;
  if (UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation.VarData.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraGeometryCacheRendererProperties::Particles_GeoCacheRotation.VarData.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarCodecDebug'' @ 150452c50

void __cdecl _dynamic_atexit_destructor_for__CVarCodecDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCodecDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeometryCacheSceneProxyUseIspc'' @ 150452c70

void __cdecl _dynamic_atexit_destructor_for__CVarGeometryCacheSceneProxyUseIspc__(void)

{
  CVarGeometryCacheSceneProxyUseIspc._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGeometryCacheSceneProxyUseIspc)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarInterpolateFrames'' @ 150452c90

void __cdecl _dynamic_atexit_destructor_for__CVarInterpolateFrames__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarInterpolateFrames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLookaheadSeconds'' @ 150452cb0

void __cdecl _dynamic_atexit_destructor_for__CVarLookaheadSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLookaheadSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraComponentRenderPoolInactiveTimeLimit'' @ 150452cd0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraComponentRenderPoolInactiveTimeLimit__(void)

{
  CVarNiagaraComponentRenderPoolInactiveTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraComponentRenderPoolInactiveTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOffloadUpdate'' @ 150452cf0

void __cdecl _dynamic_atexit_destructor_for__CVarOffloadUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOffloadUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrefetchSeconds'' @ 150452d10

void __cdecl _dynamic_atexit_destructor_for__CVarPrefetchSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrefetchSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRayTracingGeometryCache'' @ 150452d30

void __cdecl _dynamic_atexit_destructor_for__CVarRayTracingGeometryCache__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRayTracingGeometryCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTrailingSeconds'' @ 150452d50

void __cdecl _dynamic_atexit_destructor_for__CVarTrailingSeconds__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTrailingSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150452d70

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

// `dynamic_atexit_destructor_for_'Instance'' @ 150452da0

void __cdecl
`IGeometryCacheStreamingManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  ::Instance._padding_ = (longlong)&___7FGeometryCacheStreamingManager__6B_;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&::Instance.StreamingGeometryCachesLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&::Instance.StreamingGeometryCachesLock);
  }
  if (::Instance.StreamingComponents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.StreamingComponents.AllocatorInstance.Data);
  }
  ::Instance.StreamingGeometryCaches._72_4_ = 0;
  if (::Instance.StreamingGeometryCaches._64_8_ != 0) {
    FMemory::Free((void *)::Instance.StreamingGeometryCaches._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance.StreamingGeometryCaches);
  ::Instance._padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogBlankProgram'' @ 150452e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBlankProgram__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBlankProgram);
  return;
}

// `dynamic_atexit_destructor_for_'LogGeoCaStreaming'' @ 150452e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGeoCaStreaming__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGeoCaStreaming);
  return;
}

// `dynamic_atexit_destructor_for_'LogGeoCaStreamingCodecV1'' @ 150452e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGeoCaStreamingCodecV1__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGeoCaStreamingCodecV1);
  return;
}

// `dynamic_atexit_destructor_for_'LogGeoCaStreamingNormalCompression'' @ 150452eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGeoCaStreamingNormalCompression__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGeoCaStreamingNormalCompression);
  return;
}

// `dynamic_atexit_destructor_for_'LogGeometryCache'' @ 150452ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGeometryCache__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGeometryCache);
  return;
}

// `dynamic_atexit_destructor_for_'LogGeometryCacheWriter'' @ 150452ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGeometryCacheWriter__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGeometryCacheWriter);
  return;
}

