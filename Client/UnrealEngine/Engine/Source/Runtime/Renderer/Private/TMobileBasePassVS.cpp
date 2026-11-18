// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 64

// ConstructCompiledInstance @ 144f888f0

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<4>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144f889e0

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<7>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144f88ad0

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<8>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144f88bc0

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<9>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144f88cb0

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<10>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144f88da0

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<0>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144f88e90

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<11>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144f88f80

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

FShader * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<12>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  FShaderParametersMetadata *pFVar2;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    pFVar2 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              (&this_00->PassUniformBuffer,param_1->ParameterMap,pFVar2->ShaderVariableName,
               SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8be60

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<4>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8bec0

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<7>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8bf20

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<8>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8bf80

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<9>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8bfe0

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<10>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8c040

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<0>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8c0a0

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<11>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144f8c100

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

FShader * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<12>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144fb73f0

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

FMeshMaterialShaderType * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<4>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSTLightMapPolicyLQ",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<4>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144fb75f0

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

FMeshMaterialShaderType * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<7>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSFMobileDistanceFieldShadowsAndLQLightMapPolicy",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<7>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144fb77f0

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

FMeshMaterialShaderType * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<8>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<8>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144fb79f0

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

FMeshMaterialShaderType * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<9>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSFMobileDirectionalLightCSMAndLightMapPolicy",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<9>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144fb7bf0

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

FMeshMaterialShaderType * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<10>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSFMobileDirectionalLightAndSHIndirectPolicy",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<10>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144fb7df0

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

FMeshMaterialShaderType * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<0>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSFNoLightMapPolicy",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<0>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144fb7ff0

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

FMeshMaterialShaderType * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<11>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSFMobileDirectionalLightCSMAndSHIndirectPolicy",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<11>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144fb81f0

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

FMeshMaterialShaderType * __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<12>_>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FMeshMaterialShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,
                 L"TMobileBasePassVSFMobileDirectionalLightAndCSMPolicy",
                 L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/MobileBasePassVertexShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshMaterialShaderType.h"
                           ,0x2e,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMeshMaterialShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TMobileBasePassVS<TUniformLightMapPolicy<12>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144fc50a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<4>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<4>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<4>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f75d7 & 2) == 0) {
      DAT_1550f75d7 = DAT_1550f75d7 | 2;
      _DAT_1550f7590 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7578 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7588 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>::InternalDestroy;
      _DAT_1550f75b8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>,0>::Do;
      _DAT_1550f7598 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f75a0 = Freeze::DefaultAppendHash;
      _DAT_1550f75a8 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f75b0 = Freeze::DefaultToString;
      _DAT_1550f75c8 = 0x110;
      _DAT_1550f75d0 = 8;
      DAT_1550f75d4 = '\0';
      _DAT_1550f75cc = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7f57 & 2) == 0) {
        DAT_1550f7f57 = DAT_1550f7f57 | 2;
        _DAT_1550f7f10 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7ef8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7f08 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>::InternalDestroy;
        _DAT_1550f7f38 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>,0>
             ::Do;
        _DAT_1550f7f18 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7f20 = Freeze::DefaultAppendHash;
        _DAT_1550f7f28 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7f30 = Freeze::DefaultToString;
        _DAT_1550f7f48 = 0x110;
        _DAT_1550f7f50 = 8;
        DAT_1550f7f54 = '\0';
        _DAT_1550f7f4c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7f55 = DAT_1550f7f55 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7f00;
        DAT_1550f7f00 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7f56 = DAT_1550f7f56 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7f55 = DAT_1550f7f55 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7f00;
        DAT_1550f7f00 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7f56 = DAT_1550f7f56 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f75d5 = DAT_1550f75d5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7580;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7580 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7f54 != '\0') {
        DAT_1550f75d6 = DAT_1550f75d6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f75d4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144fc50b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<7>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<7>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<7>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7507 & 2) == 0) {
      DAT_1550f7507 = DAT_1550f7507 | 2;
      _DAT_1550f74c0 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f74a8 = L"TMobileBasePassVSBaseType";
      _DAT_1550f74b8 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>::InternalDestroy;
      _DAT_1550f74e8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>,0>::Do;
      _DAT_1550f74c8 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f74d0 = Freeze::DefaultAppendHash;
      _DAT_1550f74d8 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f74e0 = Freeze::DefaultToString;
      _DAT_1550f74f8 = 0x110;
      _DAT_1550f7500 = 8;
      DAT_1550f7504 = '\0';
      _DAT_1550f74fc = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7e87 & 2) == 0) {
        DAT_1550f7e87 = DAT_1550f7e87 | 2;
        _DAT_1550f7e40 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7e28 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7e38 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>::InternalDestroy;
        _DAT_1550f7e68 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>,0>
             ::Do;
        _DAT_1550f7e48 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7e50 = Freeze::DefaultAppendHash;
        _DAT_1550f7e58 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7e60 = Freeze::DefaultToString;
        _DAT_1550f7e78 = 0x110;
        _DAT_1550f7e80 = 8;
        DAT_1550f7e84 = '\0';
        _DAT_1550f7e7c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7e85 = DAT_1550f7e85 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7e30;
        DAT_1550f7e30 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7e86 = DAT_1550f7e86 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7e85 = DAT_1550f7e85 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7e30;
        DAT_1550f7e30 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7e86 = DAT_1550f7e86 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7505 = DAT_1550f7505 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f74b0;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f74b0 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7e84 != '\0') {
        DAT_1550f7506 = DAT_1550f7506 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7504 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144fc50c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<8>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<8>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<8>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7437 & 2) == 0) {
      DAT_1550f7437 = DAT_1550f7437 | 2;
      _DAT_1550f73f0 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f73d8 = L"TMobileBasePassVSBaseType";
      _DAT_1550f73e8 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>::InternalDestroy;
      _DAT_1550f7418 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>,0>::Do;
      _DAT_1550f73f8 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7400 = Freeze::DefaultAppendHash;
      _DAT_1550f7408 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7410 = Freeze::DefaultToString;
      _DAT_1550f7428 = 0x110;
      _DAT_1550f7430 = 8;
      DAT_1550f7434 = '\0';
      _DAT_1550f742c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7db7 & 2) == 0) {
        DAT_1550f7db7 = DAT_1550f7db7 | 2;
        _DAT_1550f7d70 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7d58 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7d68 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>::InternalDestroy;
        _DAT_1550f7d98 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>,0>
             ::Do;
        _DAT_1550f7d78 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7d80 = Freeze::DefaultAppendHash;
        _DAT_1550f7d88 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7d90 = Freeze::DefaultToString;
        _DAT_1550f7da8 = 0x110;
        _DAT_1550f7db0 = 8;
        DAT_1550f7db4 = '\0';
        _DAT_1550f7dac = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7db5 = DAT_1550f7db5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7d60;
        DAT_1550f7d60 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7db6 = DAT_1550f7db6 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7db5 = DAT_1550f7db5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7d60;
        DAT_1550f7d60 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7db6 = DAT_1550f7db6 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7435 = DAT_1550f7435 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f73e0;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f73e0 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7db4 != '\0') {
        DAT_1550f7436 = DAT_1550f7436 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7434 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144fc50d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<9>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<9>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<9>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7367 & 2) == 0) {
      DAT_1550f7367 = DAT_1550f7367 | 2;
      _DAT_1550f7320 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7308 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7318 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>::InternalDestroy;
      _DAT_1550f7348 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>,0>::Do;
      _DAT_1550f7328 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7330 = Freeze::DefaultAppendHash;
      _DAT_1550f7338 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7340 = Freeze::DefaultToString;
      _DAT_1550f7358 = 0x110;
      _DAT_1550f7360 = 8;
      DAT_1550f7364 = '\0';
      _DAT_1550f735c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7ce7 & 2) == 0) {
        DAT_1550f7ce7 = DAT_1550f7ce7 | 2;
        _DAT_1550f7ca0 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7c88 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7c98 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>::InternalDestroy;
        _DAT_1550f7cc8 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>,0>
             ::Do;
        _DAT_1550f7ca8 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7cb0 = Freeze::DefaultAppendHash;
        _DAT_1550f7cb8 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7cc0 = Freeze::DefaultToString;
        _DAT_1550f7cd8 = 0x110;
        _DAT_1550f7ce0 = 8;
        DAT_1550f7ce4 = '\0';
        _DAT_1550f7cdc = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7ce5 = DAT_1550f7ce5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7c90;
        DAT_1550f7c90 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7ce6 = DAT_1550f7ce6 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7ce5 = DAT_1550f7ce5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7c90;
        DAT_1550f7c90 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7ce6 = DAT_1550f7ce6 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7365 = DAT_1550f7365 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7310;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7310 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7ce4 != '\0') {
        DAT_1550f7366 = DAT_1550f7366 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7364 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144fc50e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<10>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<10>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<10>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7297 & 2) == 0) {
      DAT_1550f7297 = DAT_1550f7297 | 2;
      _DAT_1550f7250 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7238 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7248 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>::InternalDestroy;
      _DAT_1550f7278 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>,0>::Do;
      _DAT_1550f7258 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7260 = Freeze::DefaultAppendHash;
      _DAT_1550f7268 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7270 = Freeze::DefaultToString;
      _DAT_1550f7288 = 0x110;
      _DAT_1550f7290 = 8;
      DAT_1550f7294 = '\0';
      _DAT_1550f728c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7c17 & 2) == 0) {
        DAT_1550f7c17 = DAT_1550f7c17 | 2;
        _DAT_1550f7bd0 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7bb8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7bc8 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>::InternalDestroy;
        _DAT_1550f7bf8 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>,0>
             ::Do;
        _DAT_1550f7bd8 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7be0 = Freeze::DefaultAppendHash;
        _DAT_1550f7be8 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7bf0 = Freeze::DefaultToString;
        _DAT_1550f7c08 = 0x110;
        _DAT_1550f7c10 = 8;
        DAT_1550f7c14 = '\0';
        _DAT_1550f7c0c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7c15 = DAT_1550f7c15 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7bc0;
        DAT_1550f7bc0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7c16 = DAT_1550f7c16 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7c15 = DAT_1550f7c15 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7bc0;
        DAT_1550f7bc0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7c16 = DAT_1550f7c16 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7295 = DAT_1550f7295 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7240;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7240 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7c14 != '\0') {
        DAT_1550f7296 = DAT_1550f7296 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7294 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144fc50f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<0>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<0>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<0>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f76a7 & 2) == 0) {
      DAT_1550f76a7 = DAT_1550f76a7 | 2;
      _DAT_1550f7660 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7648 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7658 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>::InternalDestroy;
      _DAT_1550f7688 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>,0>::Do;
      _DAT_1550f7668 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7670 = Freeze::DefaultAppendHash;
      _DAT_1550f7678 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7680 = Freeze::DefaultToString;
      _DAT_1550f7698 = 0x110;
      _DAT_1550f76a0 = 8;
      DAT_1550f76a4 = '\0';
      _DAT_1550f769c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f8027 & 2) == 0) {
        DAT_1550f8027 = DAT_1550f8027 | 2;
        _DAT_1550f7fe0 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7fc8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7fd8 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>::InternalDestroy;
        _DAT_1550f8008 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>,0>
             ::Do;
        _DAT_1550f7fe8 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7ff0 = Freeze::DefaultAppendHash;
        _DAT_1550f7ff8 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f8000 = Freeze::DefaultToString;
        _DAT_1550f8018 = 0x110;
        _DAT_1550f8020 = 8;
        DAT_1550f8024 = '\0';
        _DAT_1550f801c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f8025 = DAT_1550f8025 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7fd0;
        DAT_1550f7fd0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f8026 = DAT_1550f8026 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f8025 = DAT_1550f8025 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7fd0;
        DAT_1550f7fd0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f8026 = DAT_1550f8026 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f76a5 = DAT_1550f76a5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7650;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7650 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f8024 != '\0') {
        DAT_1550f76a6 = DAT_1550f76a6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f76a4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144fc5100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<11>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<11>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<11>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f71c7 & 2) == 0) {
      DAT_1550f71c7 = DAT_1550f71c7 | 2;
      _DAT_1550f7180 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7168 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7178 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>::InternalDestroy;
      _DAT_1550f71a8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>,0>::Do;
      _DAT_1550f7188 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7190 = Freeze::DefaultAppendHash;
      _DAT_1550f7198 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f71a0 = Freeze::DefaultToString;
      _DAT_1550f71b8 = 0x110;
      _DAT_1550f71c0 = 8;
      DAT_1550f71c4 = '\0';
      _DAT_1550f71bc = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7b47 & 2) == 0) {
        DAT_1550f7b47 = DAT_1550f7b47 | 2;
        _DAT_1550f7b00 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7ae8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7af8 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>::InternalDestroy;
        _DAT_1550f7b28 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>,0>
             ::Do;
        _DAT_1550f7b08 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7b10 = Freeze::DefaultAppendHash;
        _DAT_1550f7b18 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7b20 = Freeze::DefaultToString;
        _DAT_1550f7b38 = 0x110;
        _DAT_1550f7b40 = 8;
        DAT_1550f7b44 = '\0';
        _DAT_1550f7b3c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7b45 = DAT_1550f7b45 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7af0;
        DAT_1550f7af0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7b46 = DAT_1550f7b46 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7b45 = DAT_1550f7b45 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7af0;
        DAT_1550f7af0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7b46 = DAT_1550f7b46 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f71c5 = DAT_1550f71c5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7170;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7170 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7b44 != '\0') {
        DAT_1550f71c6 = DAT_1550f71c6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f71c4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144fc5110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TMobileBasePassVS<TUniformLightMapPolicy<12>_>::GetTypeLayout
          (TMobileBasePassVS<TUniformLightMapPolicy<12>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<12>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f70f7 & 2) == 0) {
      DAT_1550f70f7 = DAT_1550f70f7 | 2;
      _DAT_1550f70b0 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7098 = L"TMobileBasePassVSBaseType";
      _DAT_1550f70a8 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>::InternalDestroy;
      _DAT_1550f70d8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>,0>::Do;
      _DAT_1550f70b8 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f70c0 = Freeze::DefaultAppendHash;
      _DAT_1550f70c8 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f70d0 = Freeze::DefaultToString;
      _DAT_1550f70e8 = 0x110;
      _DAT_1550f70f0 = 8;
      DAT_1550f70f4 = '\0';
      _DAT_1550f70ec = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7a77 & 2) == 0) {
        DAT_1550f7a77 = DAT_1550f7a77 | 2;
        _DAT_1550f7a30 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7a18 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7a28 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>::InternalDestroy;
        _DAT_1550f7a58 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>,0>
             ::Do;
        _DAT_1550f7a38 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7a40 = Freeze::DefaultAppendHash;
        _DAT_1550f7a48 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7a50 = Freeze::DefaultToString;
        _DAT_1550f7a68 = 0x110;
        _DAT_1550f7a70 = 8;
        DAT_1550f7a74 = '\0';
        _DAT_1550f7a6c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7a75 = DAT_1550f7a75 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7a20;
        DAT_1550f7a20 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7a76 = DAT_1550f7a76 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7a75 = DAT_1550f7a75 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7a20;
        DAT_1550f7a20 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7a76 = DAT_1550f7a76 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f70f5 = DAT_1550f70f5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f70a0;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f70a0 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7a74 != '\0') {
        DAT_1550f70f6 = DAT_1550f70f6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f70f4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144fca0e0

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
TMobileBasePassVS<TUniformLightMapPolicy<4>_>::InternalDestroy
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

// InternalDestroy @ 144fca120

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
TMobileBasePassVS<TUniformLightMapPolicy<7>_>::InternalDestroy
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

// InternalDestroy @ 144fca160

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
TMobileBasePassVS<TUniformLightMapPolicy<8>_>::InternalDestroy
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

// InternalDestroy @ 144fca1a0

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
TMobileBasePassVS<TUniformLightMapPolicy<9>_>::InternalDestroy
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

// InternalDestroy @ 144fca1e0

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
TMobileBasePassVS<TUniformLightMapPolicy<10>_>::InternalDestroy
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

// InternalDestroy @ 144fca220

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
TMobileBasePassVS<TUniformLightMapPolicy<0>_>::InternalDestroy
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

// InternalDestroy @ 144fca260

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
TMobileBasePassVS<TUniformLightMapPolicy<11>_>::InternalDestroy
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

// InternalDestroy @ 144fca2a0

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
TMobileBasePassVS<TUniformLightMapPolicy<12>_>::InternalDestroy
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

// ShouldCompilePermutationImpl @ 144fe9260

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_LQ_LIGHTMAP,(FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe92f0

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<7>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_MOBILE_DISTANCE_FIELD_SHADOWS_AND_LQ_LIGHTMAP,
                       (FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe9380

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<8>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_MOBILE_DISTANCE_FIELD_SHADOWS_LIGHTMAP_AND_CSM,
                       (FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe9410

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<9>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_LIGHTMAP,
                       (FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe94a0

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<10>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_MOBILE_DIRECTIONAL_LIGHT_AND_SH_INDIRECT,
                       (FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe9530

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_NO_LIGHTMAP,(FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe95c0

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<11>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_SH_INDIRECT,
                       (FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144fe9650

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

bool __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<12>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
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
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1) {
    bVar3 = FUniformLightMapPolicy::ShouldCompilePermutation
                      (LMP_MOBILE_DIRECTIONAL_LIGHT_CSM,
                       (FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144feab50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<4>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144feab60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<7>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144feab70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<8>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144feab80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<9>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144feab90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<10>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144feaba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<0>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144feabb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<11>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144feabc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TMobileBasePassVS<TUniformLightMapPolicy<12>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144fef0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<4>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f75d7 & 2) == 0) {
      DAT_1550f75d7 = DAT_1550f75d7 | 2;
      _DAT_1550f7590 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7578 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7588 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>::InternalDestroy;
      _DAT_1550f75b8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>,0>::Do;
      _DAT_1550f7598 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f75a0 = Freeze::DefaultAppendHash;
      _DAT_1550f75a8 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f75b0 = Freeze::DefaultToString;
      _DAT_1550f75c8 = 0x110;
      _DAT_1550f75d0 = 8;
      DAT_1550f75d4 = '\0';
      _DAT_1550f75cc = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7f57 & 2) == 0) {
        DAT_1550f7f57 = DAT_1550f7f57 | 2;
        _DAT_1550f7f10 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7ef8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7f08 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>::InternalDestroy;
        _DAT_1550f7f38 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>,0>
             ::Do;
        _DAT_1550f7f18 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7f20 = Freeze::DefaultAppendHash;
        _DAT_1550f7f28 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7f30 = Freeze::DefaultToString;
        _DAT_1550f7f48 = 0x110;
        _DAT_1550f7f50 = 8;
        DAT_1550f7f54 = '\0';
        _DAT_1550f7f4c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7f55 = DAT_1550f7f55 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7f00;
        DAT_1550f7f00 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7f56 = DAT_1550f7f56 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7f55 = DAT_1550f7f55 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7f00;
        DAT_1550f7f00 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7f56 = DAT_1550f7f56 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f75d5 = DAT_1550f75d5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7580;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7580 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7f54 != '\0') {
        DAT_1550f75d6 = DAT_1550f75d6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f75d4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144fef4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<7>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7507 & 2) == 0) {
      DAT_1550f7507 = DAT_1550f7507 | 2;
      _DAT_1550f74c0 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f74a8 = L"TMobileBasePassVSBaseType";
      _DAT_1550f74b8 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>::InternalDestroy;
      _DAT_1550f74e8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>,0>::Do;
      _DAT_1550f74c8 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f74d0 = Freeze::DefaultAppendHash;
      _DAT_1550f74d8 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f74e0 = Freeze::DefaultToString;
      _DAT_1550f74f8 = 0x110;
      _DAT_1550f7500 = 8;
      DAT_1550f7504 = '\0';
      _DAT_1550f74fc = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7e87 & 2) == 0) {
        DAT_1550f7e87 = DAT_1550f7e87 | 2;
        _DAT_1550f7e40 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7e28 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7e38 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>::InternalDestroy;
        _DAT_1550f7e68 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>,0>
             ::Do;
        _DAT_1550f7e48 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7e50 = Freeze::DefaultAppendHash;
        _DAT_1550f7e58 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7e60 = Freeze::DefaultToString;
        _DAT_1550f7e78 = 0x110;
        _DAT_1550f7e80 = 8;
        DAT_1550f7e84 = '\0';
        _DAT_1550f7e7c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7e85 = DAT_1550f7e85 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7e30;
        DAT_1550f7e30 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7e86 = DAT_1550f7e86 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7e85 = DAT_1550f7e85 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7e30;
        DAT_1550f7e30 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7e86 = DAT_1550f7e86 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7505 = DAT_1550f7505 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f74b0;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f74b0 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7e84 != '\0') {
        DAT_1550f7506 = DAT_1550f7506 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<7>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7504 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144fef880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<8>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7437 & 2) == 0) {
      DAT_1550f7437 = DAT_1550f7437 | 2;
      _DAT_1550f73f0 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f73d8 = L"TMobileBasePassVSBaseType";
      _DAT_1550f73e8 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>::InternalDestroy;
      _DAT_1550f7418 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>,0>::Do;
      _DAT_1550f73f8 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7400 = Freeze::DefaultAppendHash;
      _DAT_1550f7408 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7410 = Freeze::DefaultToString;
      _DAT_1550f7428 = 0x110;
      _DAT_1550f7430 = 8;
      DAT_1550f7434 = '\0';
      _DAT_1550f742c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7db7 & 2) == 0) {
        DAT_1550f7db7 = DAT_1550f7db7 | 2;
        _DAT_1550f7d70 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7d58 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7d68 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>::InternalDestroy;
        _DAT_1550f7d98 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>,0>
             ::Do;
        _DAT_1550f7d78 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7d80 = Freeze::DefaultAppendHash;
        _DAT_1550f7d88 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7d90 = Freeze::DefaultToString;
        _DAT_1550f7da8 = 0x110;
        _DAT_1550f7db0 = 8;
        DAT_1550f7db4 = '\0';
        _DAT_1550f7dac = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7db5 = DAT_1550f7db5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7d60;
        DAT_1550f7d60 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7db6 = DAT_1550f7db6 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7db5 = DAT_1550f7db5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7d60;
        DAT_1550f7d60 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7db6 = DAT_1550f7db6 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7435 = DAT_1550f7435 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f73e0;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f73e0 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7db4 != '\0') {
        DAT_1550f7436 = DAT_1550f7436 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<8>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7434 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144fefc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<9>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7367 & 2) == 0) {
      DAT_1550f7367 = DAT_1550f7367 | 2;
      _DAT_1550f7320 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7308 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7318 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>::InternalDestroy;
      _DAT_1550f7348 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>,0>::Do;
      _DAT_1550f7328 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7330 = Freeze::DefaultAppendHash;
      _DAT_1550f7338 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7340 = Freeze::DefaultToString;
      _DAT_1550f7358 = 0x110;
      _DAT_1550f7360 = 8;
      DAT_1550f7364 = '\0';
      _DAT_1550f735c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7ce7 & 2) == 0) {
        DAT_1550f7ce7 = DAT_1550f7ce7 | 2;
        _DAT_1550f7ca0 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7c88 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7c98 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>::InternalDestroy;
        _DAT_1550f7cc8 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>,0>
             ::Do;
        _DAT_1550f7ca8 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7cb0 = Freeze::DefaultAppendHash;
        _DAT_1550f7cb8 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7cc0 = Freeze::DefaultToString;
        _DAT_1550f7cd8 = 0x110;
        _DAT_1550f7ce0 = 8;
        DAT_1550f7ce4 = '\0';
        _DAT_1550f7cdc = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7ce5 = DAT_1550f7ce5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7c90;
        DAT_1550f7c90 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7ce6 = DAT_1550f7ce6 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7ce5 = DAT_1550f7ce5 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7c90;
        DAT_1550f7c90 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7ce6 = DAT_1550f7ce6 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7365 = DAT_1550f7365 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7310;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7310 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7ce4 != '\0') {
        DAT_1550f7366 = DAT_1550f7366 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<9>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7364 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144ff0020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<10>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f7297 & 2) == 0) {
      DAT_1550f7297 = DAT_1550f7297 | 2;
      _DAT_1550f7250 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7238 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7248 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>::InternalDestroy;
      _DAT_1550f7278 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>,0>::Do;
      _DAT_1550f7258 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7260 = Freeze::DefaultAppendHash;
      _DAT_1550f7268 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7270 = Freeze::DefaultToString;
      _DAT_1550f7288 = 0x110;
      _DAT_1550f7290 = 8;
      DAT_1550f7294 = '\0';
      _DAT_1550f728c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7c17 & 2) == 0) {
        DAT_1550f7c17 = DAT_1550f7c17 | 2;
        _DAT_1550f7bd0 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7bb8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7bc8 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>::InternalDestroy;
        _DAT_1550f7bf8 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>,0>
             ::Do;
        _DAT_1550f7bd8 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7be0 = Freeze::DefaultAppendHash;
        _DAT_1550f7be8 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7bf0 = Freeze::DefaultToString;
        _DAT_1550f7c08 = 0x110;
        _DAT_1550f7c10 = 8;
        DAT_1550f7c14 = '\0';
        _DAT_1550f7c0c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7c15 = DAT_1550f7c15 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7bc0;
        DAT_1550f7bc0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7c16 = DAT_1550f7c16 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7c15 = DAT_1550f7c15 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7bc0;
        DAT_1550f7bc0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7c16 = DAT_1550f7c16 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f7295 = DAT_1550f7295 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7240;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7240 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7c14 != '\0') {
        DAT_1550f7296 = DAT_1550f7296 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<10>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f7294 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144ff03f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<0>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f76a7 & 2) == 0) {
      DAT_1550f76a7 = DAT_1550f76a7 | 2;
      _DAT_1550f7660 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7648 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7658 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>::InternalDestroy;
      _DAT_1550f7688 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>,0>::Do;
      _DAT_1550f7668 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7670 = Freeze::DefaultAppendHash;
      _DAT_1550f7678 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f7680 = Freeze::DefaultToString;
      _DAT_1550f7698 = 0x110;
      _DAT_1550f76a0 = 8;
      DAT_1550f76a4 = '\0';
      _DAT_1550f769c = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f8027 & 2) == 0) {
        DAT_1550f8027 = DAT_1550f8027 | 2;
        _DAT_1550f7fe0 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7fc8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7fd8 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>::InternalDestroy;
        _DAT_1550f8008 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>,0>
             ::Do;
        _DAT_1550f7fe8 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7ff0 = Freeze::DefaultAppendHash;
        _DAT_1550f7ff8 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f8000 = Freeze::DefaultToString;
        _DAT_1550f8018 = 0x110;
        _DAT_1550f8020 = 8;
        DAT_1550f8024 = '\0';
        _DAT_1550f801c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f8025 = DAT_1550f8025 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7fd0;
        DAT_1550f7fd0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f8026 = DAT_1550f8026 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f8025 = DAT_1550f8025 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7fd0;
        DAT_1550f7fd0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f8026 = DAT_1550f8026 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f76a5 = DAT_1550f76a5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7650;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7650 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f8024 != '\0') {
        DAT_1550f76a6 = DAT_1550f76a6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f76a4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144ff07c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<11>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f71c7 & 2) == 0) {
      DAT_1550f71c7 = DAT_1550f71c7 | 2;
      _DAT_1550f7180 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7168 = L"TMobileBasePassVSBaseType";
      _DAT_1550f7178 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>::InternalDestroy;
      _DAT_1550f71a8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>,0>::Do;
      _DAT_1550f7188 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f7190 = Freeze::DefaultAppendHash;
      _DAT_1550f7198 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f71a0 = Freeze::DefaultToString;
      _DAT_1550f71b8 = 0x110;
      _DAT_1550f71c0 = 8;
      DAT_1550f71c4 = '\0';
      _DAT_1550f71bc = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7b47 & 2) == 0) {
        DAT_1550f7b47 = DAT_1550f7b47 | 2;
        _DAT_1550f7b00 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7ae8 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7af8 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>::InternalDestroy;
        _DAT_1550f7b28 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>,0>
             ::Do;
        _DAT_1550f7b08 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7b10 = Freeze::DefaultAppendHash;
        _DAT_1550f7b18 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7b20 = Freeze::DefaultToString;
        _DAT_1550f7b38 = 0x110;
        _DAT_1550f7b40 = 8;
        DAT_1550f7b44 = '\0';
        _DAT_1550f7b3c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7b45 = DAT_1550f7b45 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7af0;
        DAT_1550f7af0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7b46 = DAT_1550f7b46 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7b45 = DAT_1550f7b45 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7af0;
        DAT_1550f7af0 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7b46 = DAT_1550f7b46 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f71c5 = DAT_1550f71c5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f7170;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f7170 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7b44 != '\0') {
        DAT_1550f71c6 = DAT_1550f71c6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<11>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f71c4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144ff0b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TMobileBasePassVS<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer._8_8_ = ::u_TMobileBasePass;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TMobileBasePassVS<TUniformLightMapPolicy<12>_>,0>::Do;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    if ((DAT_1550f70f7 & 2) == 0) {
      DAT_1550f70f7 = DAT_1550f70f7 | 2;
      _DAT_1550f70b0 = Freeze::DefaultWriteMemoryImage;
      _DAT_1550f7098 = L"TMobileBasePassVSBaseType";
      _DAT_1550f70a8 = TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>::InternalDestroy;
      _DAT_1550f70d8 =
           TGetDefaultObjectHelper<TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>,0>::Do;
      _DAT_1550f70b8 = Freeze::DefaultUnfrozenCopy;
      _DAT_1550f70c0 = Freeze::DefaultAppendHash;
      _DAT_1550f70c8 = Freeze::DefaultGetTargetAlignment;
      _DAT_1550f70d0 = Freeze::DefaultToString;
      _DAT_1550f70e8 = 0x110;
      _DAT_1550f70f0 = 8;
      DAT_1550f70f4 = '\0';
      _DAT_1550f70ec = 0xffffffff;
      ::FieldBuffer._0_8_ = u_BASE;
      ::FieldBuffer[0x2a] = '\x04';
      if ((DAT_1550f7a77 & 2) == 0) {
        DAT_1550f7a77 = DAT_1550f7a77 | 2;
        _DAT_1550f7a30 = Freeze::DefaultWriteMemoryImage;
        _DAT_1550f7a18 = L"TMobileBasePassVSPolicyParamType";
        _DAT_1550f7a28 =
             TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>::InternalDestroy;
        _DAT_1550f7a58 =
             TGetDefaultObjectHelper<TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>,0>
             ::Do;
        _DAT_1550f7a38 = Freeze::DefaultUnfrozenCopy;
        _DAT_1550f7a40 = Freeze::DefaultAppendHash;
        _DAT_1550f7a48 = Freeze::DefaultGetTargetAlignment;
        _DAT_1550f7a50 = Freeze::DefaultToString;
        _DAT_1550f7a68 = 0x110;
        _DAT_1550f7a70 = 8;
        DAT_1550f7a74 = '\0';
        _DAT_1550f7a6c = 0xffffffff;
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
        DAT_1550f7a75 = DAT_1550f7a75 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7a20;
        DAT_1550f7a20 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\b';
        ::FieldBuffer[0x21] = '\x01';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7a76 = DAT_1550f7a76 + '\x01';
        }
        ::FieldBuffer._0_8_ = u_BASE;
        ::FieldBuffer[0x2a] = '\x04';
        ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
        DAT_1550f7a75 = DAT_1550f7a75 + '\x01';
        ::FieldBuffer._16_8_ = DAT_1550f7a20;
        DAT_1550f7a20 = ::FieldBuffer;
        ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
        ::FieldBuffer[0x20] = '\0';
        ::FieldBuffer[0x21] = '\0';
        ::FieldBuffer[0x22] = '\0';
        ::FieldBuffer[0x23] = '\0';
        ::FieldBuffer[0x24] = '\x01';
        ::FieldBuffer[0x25] = '\0';
        ::FieldBuffer[0x26] = '\0';
        ::FieldBuffer[0x27] = '\0';
        if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
          DAT_1550f7a76 = DAT_1550f7a76 + '\x01';
        }
        FTypeLayoutDesc::Initialize
                  ((FTypeLayoutDesc *)
                   &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
                    ::__l2::TypeBuffer);
      }
      DAT_1550f70f5 = DAT_1550f70f5 + '\x01';
      ::FieldBuffer._16_8_ = DAT_1550f70a0;
      ::FieldBuffer._8_8_ =
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSPolicyParamType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
      DAT_1550f70a0 = ::FieldBuffer;
      ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
      ::FieldBuffer[0x20] = '\0';
      ::FieldBuffer[0x21] = '\0';
      ::FieldBuffer[0x22] = '\0';
      ::FieldBuffer[0x23] = '\0';
      ::FieldBuffer[0x24] = '\x01';
      ::FieldBuffer[0x25] = '\0';
      ::FieldBuffer[0x26] = '\0';
      ::FieldBuffer[0x27] = '\0';
      if (DAT_1550f7a74 != '\0') {
        DAT_1550f70f6 = DAT_1550f70f6 + '\x01';
      }
      FTypeLayoutDesc::Initialize
                ((FTypeLayoutDesc *)
                 &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
                  ::__l2::TypeBuffer);
    }
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._8_8_ =
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TMobileBasePassVSBaseType<TUniformLightMapPolicy<12>_>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (DAT_1550f70f4 != '\0') {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

