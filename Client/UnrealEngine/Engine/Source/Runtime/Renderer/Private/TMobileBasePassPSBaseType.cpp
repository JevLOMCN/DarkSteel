// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 24

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<4>_> @ 144f661b0

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<4>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<4>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<4>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<4>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<7>_> @ 144f662f0

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<7>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<7>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<7>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<7>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<8>_> @ 144f66430

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<8>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<8>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<8>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<8>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<9>_> @ 144f66570

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<9>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<9>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<9>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<9>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<10>_> @ 144f666b0

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<10>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<10>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<10>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<10>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<0>_> @ 144f667f0

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<0>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<0>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<0>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<0>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<11>_> @ 144f66930

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<11>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<11>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<11>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<11>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// TMobileBasePassPSBaseType<TUniformLightMapPolicy<12>_> @ 144f66a70

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

TMobileBasePassPSBaseType<TUniformLightMapPolicy<12>_> * __thiscall
TMobileBasePassPSBaseType<TUniformLightMapPolicy<12>_>::
TMobileBasePassPSBaseType<TUniformLightMapPolicy<12>_>
          (TMobileBasePassPSBaseType<TUniformLightMapPolicy<12>_> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FShaderParametersMetadata *pFVar2;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined4 *)&this->field_0x10e = 0xffffffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  *(undefined4 *)&this->field_0x112 = 0;
  *(undefined2 *)&this->field_0x116 = 0;
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
  pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x100,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x10e,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  pFVar2 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            ((FShaderUniformBufferParameter *)&this->field_0x110,
             (FShaderParameterMap *)param_1->_padding_,pFVar2->ShaderVariableName,SPF_Optional);
  FShaderParameter::Bind
            ((FShaderParameter *)&this->field_0x112,(FShaderParameterMap *)param_1->_padding_,
             L"UseCSM",SPF_Optional);
  return this;
}

// InternalDestroy @ 144fc9ce0

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<4>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 144fc9d20

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<7>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 144fc9d60

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<8>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 144fc9da0

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<9>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 144fc9de0

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<10>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 144fc9e20

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<0>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 144fc9e60

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<11>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// InternalDestroy @ 144fc9ea0

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
TMobileBasePassPSBaseType<TUniformLightMapPolicy<12>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x118);
  return;
}

// ShouldCompilePermutation @ 144fe59a0

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation(LMP_LQ_LIGHTMAP,param_1);
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 144fe5a20

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<7>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_MOBILE_DISTANCE_FIELD_SHADOWS_AND_LQ_LIGHTMAP,param_1);
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 144fe5aa0

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<8>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_MOBILE_DISTANCE_FIELD_SHADOWS_LIGHTMAP_AND_CSM,param_1);
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 144fe5b20

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<9>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_LIGHTMAP,param_1);
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 144fe5ba0

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<10>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_MOBILE_DIRECTIONAL_LIGHT_AND_SH_INDIRECT,param_1);
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 144fe5c20

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation(LMP_NO_LIGHTMAP,param_1);
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 144fe5ca0

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<11>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_SH_INDIRECT,param_1);
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutation @ 144fe5d20

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

bool __cdecl
TMobileBasePassPSBaseType<TUniformLightMapPolicy<12>_>::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation(LMP_MOBILE_DIRECTIONAL_LIGHT_CSM,param_1)
  ;
  if (bVar3) {
    uVar1 = (ushort)param_1->_padding_;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) {
      return true;
    }
  }
  return false;
}

