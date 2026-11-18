// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FMaterialCHS @ 145362b30

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

FMaterialCHS * __thiscall
FMaterialCHS::FMaterialCHS(FMaterialCHS *this,CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x108 = 0xffffffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  pFVar2 = FSceneTextureUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar1 = (FShaderParameterMap *)param_1->_padding_;
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x108,pFVar1,L"PrecomputedLightingBuffer"
             ,SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10a,pFVar1,L"IndirectLightingCache",
             SPF_Optional);
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10c,pFVar1,L"LightmapResourceCluster",
             SPF_Optional);
  return this;
}

// InternalDestroy @ 14539c270

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
FMaterialCHS::InternalDestroy
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

