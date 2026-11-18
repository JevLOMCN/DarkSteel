// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FNaniteVertexFactory @ 1483e1e60

FNaniteVertexFactory * __thiscall
FNaniteVertexFactory::FNaniteVertexFactory(FNaniteVertexFactory *this,Type param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this,param_1);
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xac = 8;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined4 *)&this->field_0xd8 = 0;
  *(undefined4 *)&this->field_0xdc = 2;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x118 = 0;
  *(undefined4 *)&this->field_0x11c = 3;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined4 *)&this->field_0x138 = 0xffffff;
  *(undefined ***)this = &___7FNaniteVertexFactory__6B_;
  return this;
}

// ~FNaniteVertexFactory @ 1483e8aa0

void __thiscall FNaniteVertexFactory::~FNaniteVertexFactory(FNaniteVertexFactory *this)

{
  *(undefined ***)this = &___7FNaniteVertexFactory__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexFactory::~FVertexFactory((FVertexFactory *)this);
  return;
}

// GetType @ 14840b4c0

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

FVertexFactoryType * __thiscall FNaniteVertexFactory::GetType(FNaniteVertexFactory *this)

{
  return &StaticType;
}

// InitRHI @ 14840d450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNaniteVertexFactory::InitRHI(FNaniteVertexFactory *this,FRHICommandListBase *param_1)

{
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_18 [3];
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// ModifyCompilationEnvironment @ 148412cb0

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
FNaniteVertexFactory::ModifyCompilationEnvironment
          (FVertexFactoryShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (char)param_1->ShaderType->Frequency;
  FShaderCompilerEnvironment::SetDefine(param_2,L"IS_NANITE_SHADING_PASS",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"IS_NANITE_PASS",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_ANALYTIC_DERIVATIVES",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"VF_SUPPORTS_PRIMITIVE_SCENE_DATA",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"NANITE_USE_RASTER_UNIFORM_BUFFER",cVar1 != '\b');
  FShaderCompilerEnvironment::SetDefine(param_2,L"NANITE_USE_SHADING_UNIFORM_BUFFER",cVar1 != '\b');
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NANITE_USE_RAYTRACING_UNIFORM_BUFFER",cVar1 == '\b');
  FShaderCompilerEnvironment::SetDefine(param_2,L"NANITE_USE_VIEW_UNIFORM_BUFFER",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"NANITE_COMPUTE_SHADE",1);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"ALWAYS_EVALUATE_WORLD_POSITION_OFFSET",
             (uint)((ulonglong)(param_1->MaterialParameters)._padding_ >> 0x3d) & 1);
  bVar2 = NaniteSplineMeshesSupported();
  if ((bVar2) && (((param_1->MaterialParameters)._padding_ & 0x200000001U) != 0)) {
    FShaderCompilerEnvironment::SetDefine(param_2,L"USE_SPLINEDEFORM",1);
    bVar2 = UseSplineMeshSceneResources((FStaticShaderPlatform)param_1->Platform);
    FShaderCompilerEnvironment::SetDefine(param_2,L"USE_SPLINE_MESH_SCENE_RESOURCES",bVar2);
  }
  bVar2 = NaniteSkinnedMeshesSupported();
  if ((bVar2) && (((param_1->MaterialParameters)._padding_ & 0x400000001U) != 0)) {
    FShaderCompilerEnvironment::SetDefine(param_2,L"USE_SKINNING",1);
  }
  (param_2->CompilerFlags).Data = (param_2->CompilerFlags).Data | 0x216011100000;
  return;
}

// ShouldCompilePermutation @ 148427560

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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl
FNaniteVertexFactory::ShouldCompilePermutation(FVertexFactoryShaderPermutationParameters *param_1)

{
  char cVar1;
  EShaderPlatform EVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  cVar1 = (char)param_1->ShaderType->Frequency;
  if ((cVar1 != '\x05') && (cVar1 != '\b')) {
    if (cVar1 != '\v') {
      return false;
    }
    bVar4 = NaniteWorkGraphMaterialsSupported();
    if (!bVar4) {
      return false;
    }
    EVar2 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x359,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bSupportsWorkGraphs == 0) {
      return false;
    }
  }
  if ((((((param_1->MaterialParameters)._padding_ & 0x10000000000002U) != 0) &&
       ((int)(param_1->MaterialParameters)._padding_ == 0)) &&
      (bVar4 = IsOpaqueOrMaskedBlendMode((EBlendMode)(param_1->MaterialParameters)._padding_), bVar4
      )) && (bVar4 = DoesPlatformSupportNanite(param_1->Platform,true), bVar4)) {
    return true;
  }
  return false;
}

