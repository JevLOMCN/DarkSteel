// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FShadowDepthBasePS @ 145576690

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

FShadowDepthBasePS * __thiscall
FShadowDepthBasePS::FShadowDepthBasePS
          (FShadowDepthBasePS *this,CompiledShaderInitializerType *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShadowDepthBasePS *pFVar3;
  FShaderParametersMetadata *pFVar4;
  uint uVar5;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  uVar5 = (uint)param_1->_padding_ >> 4 & 0xffff;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FShadowDepthBasePS *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((int)FGenericDataDrivenShaderPlatformInfo::Infos[uVar5].MaxFeatureLevel < 3) {
    pFVar4 = FMobileShadowDepthPassUniformParameters::GetStructMetadata();
  }
  else {
    pFVar4 = FShadowDepthPassUniformParameters::GetStructMetadata();
  }
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar4->ShaderVariableName,SPF_Optional);
  return this;
}

// InternalDestroy @ 1455b7600

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
FShadowDepthBasePS::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x108);
  return;
}

