// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetShaderBindings @ 145772520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FTranslucencyShadowDepthPS::GetShaderBindings
          (FTranslucencyShadowDepthPS *this,FScene *param_1,Type param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,
          FTranslucencyDepthShaderElementData *param_6,FMeshDrawSingleShaderBindings *param_7)

{
  FTranslucencyDepthShaderElementData *pFVar1;
  FMeshDrawSingleShaderBindings *this_00;
  
  this_00 = param_7;
  pFVar1 = param_6;
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  param_6._0_2_ = (this->TranslucentShadowStartOffset).BufferIndex;
  param_6._2_2_ = (this->TranslucentShadowStartOffset).BaseIndex;
  param_6._4_2_ = (this->TranslucentShadowStartOffset).NumBytes;
  FMeshDrawSingleShaderBindings::Add<float>
            (this_00,SUB86(&param_6,0),&pFVar1->TranslucentShadowStartOffset);
  return;
}

// InternalDestroy @ 1457806a0

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
FTranslucencyShadowDepthPS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

