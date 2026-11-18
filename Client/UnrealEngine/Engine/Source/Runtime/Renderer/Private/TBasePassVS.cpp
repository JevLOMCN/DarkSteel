// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 80

// ConstructCompiledInstance @ 144744be0

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
TBasePassVS<TUniformLightMapPolicy<1>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 6) = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 6),
               param_1->ParameterMap,L"ReflectionCapture",SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144744cd0

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
TBasePassVS<TUniformLightMapPolicy<2>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 6) = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 6),
               param_1->ParameterMap,L"ReflectionCapture",SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144744dc0

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
TBasePassVS<TUniformLightMapPolicy<3>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 6) = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 6),
               param_1->ParameterMap,L"ReflectionCapture",SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144744eb0

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
TBasePassVS<TUniformLightMapPolicy<4>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 6) = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 6),
               param_1->ParameterMap,L"ReflectionCapture",SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144744fa0

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
TBasePassVS<TUniformLightMapPolicy<5>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 6) = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 6),
               param_1->ParameterMap,L"ReflectionCapture",SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144745090

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
TBasePassVS<TUniformLightMapPolicy<6>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 6) = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 6),
               param_1->ParameterMap,L"ReflectionCapture",SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144745180

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
TBasePassVS<TUniformLightMapPolicy<0>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderUniformBufferParameter *this;
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this_00,(CompiledShaderInitializerType *)param_1);
    this = (FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 2);
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0xffff;
    this->BaseIndex = 0xffff;
    *(ushort *)&this_00[1]._padding_ = 0xffff;
    *(undefined2 *)((longlong)&this_00[1]._padding_ + 6) = 0xffff;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this_00 + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind(this,pFVar1,L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this_00[1]._padding_ + 6),
               param_1->ParameterMap,L"ReflectionCapture",SPF_Optional);
    return (FShader *)this_00;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144745270

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
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FMeshMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(ushort *)&this[1]._padding_ = 0xffff;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),param_1->ParameterMap,
               L"ReflectionCapture",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1447452e0

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
TBasePassVS<FSelfShadowedTranslucencyPolicy>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FMeshMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(ushort *)&this[1]._padding_ = 0xffff;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),param_1->ParameterMap,
               L"ReflectionCapture",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144745350

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
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FMeshMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(ushort *)&this[1]._padding_ = 0xffff;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),param_1->ParameterMap,
               L"ReflectionCapture",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1447494f0

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

FShader * __cdecl TBasePassVS<TUniformLightMapPolicy<1>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = -1;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144749550

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

FShader * __cdecl TBasePassVS<TUniformLightMapPolicy<2>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = -1;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1447495b0

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

FShader * __cdecl TBasePassVS<TUniformLightMapPolicy<3>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = -1;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144749610

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

FShader * __cdecl TBasePassVS<TUniformLightMapPolicy<4>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = -1;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144749670

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

FShader * __cdecl TBasePassVS<TUniformLightMapPolicy<5>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = -1;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1447496d0

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

FShader * __cdecl TBasePassVS<TUniformLightMapPolicy<6>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = -1;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144749730

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

FShader * __cdecl TBasePassVS<TUniformLightMapPolicy<0>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    this[1]._padding_ = -1;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144749790

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
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1447497f0

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

FShader * __cdecl TBasePassVS<FSelfShadowedTranslucencyPolicy>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144749850

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
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x110);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 14476f870

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

FMeshMaterialShaderType * __cdecl TBasePassVS<TUniformLightMapPolicy<1>_>::GetStaticType(void)

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
                 L"TBasePassVSFPrecomputedVolumetricLightmapLightingPolicy",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<TUniformLightMapPolicy<1>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 14476fa70

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

FMeshMaterialShaderType * __cdecl TBasePassVS<TUniformLightMapPolicy<2>_>::GetStaticType(void)

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
                 L"TBasePassVSFCachedVolumeIndirectLightingPolicy",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<TUniformLightMapPolicy<2>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 14476fc70

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

FMeshMaterialShaderType * __cdecl TBasePassVS<TUniformLightMapPolicy<3>_>::GetStaticType(void)

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
                 L"TBasePassVSFCachedPointIndirectLightingPolicy",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<TUniformLightMapPolicy<3>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 14476fe70

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

FMeshMaterialShaderType * __cdecl TBasePassVS<TUniformLightMapPolicy<4>_>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"TBasePassVSTLightMapPolicyLQ",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<TUniformLightMapPolicy<4>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144770070

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

FMeshMaterialShaderType * __cdecl TBasePassVS<TUniformLightMapPolicy<5>_>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"TBasePassVSTLightMapPolicyHQ",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<TUniformLightMapPolicy<5>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144770270

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

FMeshMaterialShaderType * __cdecl TBasePassVS<TUniformLightMapPolicy<6>_>::GetStaticType(void)

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
                 L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<TUniformLightMapPolicy<6>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144770470

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

FMeshMaterialShaderType * __cdecl TBasePassVS<TUniformLightMapPolicy<0>_>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,MeshMaterial,pFVar4,L"TBasePassVSFNoLightMapPolicy",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<TUniformLightMapPolicy<0>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144770670

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
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::GetStaticType(void)

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
                 L"TBasePassVSFSelfShadowedCachedPointIndirectLightingPolicy",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144770870

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

FMeshMaterialShaderType * __cdecl TBasePassVS<FSelfShadowedTranslucencyPolicy>::GetStaticType(void)

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
                 L"TBasePassVSFSelfShadowedTranslucencyPolicy",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<FSelfShadowedTranslucencyPolicy>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144770a70

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
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::GetStaticType(void)

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
                 L"TBasePassVSFSelfShadowedVolumetricLightmapPolicy",
                 L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,ConstructSerializedInstance
                 ,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x110,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/BasePassVertexShader.usf");
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
      atexit(`TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144778360

FTypeLayoutDesc * __thiscall
TBasePassVS<TUniformLightMapPolicy<1>_>::GetTypeLayout
          (TBasePassVS<TUniformLightMapPolicy<1>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFPre;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<1>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<1>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<1>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144778370

FTypeLayoutDesc * __thiscall
TBasePassVS<TUniformLightMapPolicy<2>_>::GetTypeLayout
          (TBasePassVS<TUniformLightMapPolicy<2>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFCac;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<2>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<2>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<2>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144778380

FTypeLayoutDesc * __thiscall
TBasePassVS<TUniformLightMapPolicy<3>_>::GetTypeLayout
          (TBasePassVS<TUniformLightMapPolicy<3>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFCac;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<3>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<3>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<3>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144778390

FTypeLayoutDesc * __thiscall
TBasePassVS<TUniformLightMapPolicy<4>_>::GetTypeLayout
          (TBasePassVS<TUniformLightMapPolicy<4>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSTLig;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<4>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<4>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<4>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1447783a0

FTypeLayoutDesc * __thiscall
TBasePassVS<TUniformLightMapPolicy<5>_>::GetTypeLayout
          (TBasePassVS<TUniformLightMapPolicy<5>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSTLig;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<5>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<5>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<5>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1447783b0

FTypeLayoutDesc * __thiscall
TBasePassVS<TUniformLightMapPolicy<6>_>::GetTypeLayout
          (TBasePassVS<TUniformLightMapPolicy<6>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSTDis;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<6>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<6>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<6>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1447783c0

FTypeLayoutDesc * __thiscall
TBasePassVS<TUniformLightMapPolicy<0>_>::GetTypeLayout
          (TBasePassVS<TUniformLightMapPolicy<0>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFNoL;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<0>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<0>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<0>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1447783d0

FTypeLayoutDesc * __thiscall
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::GetTypeLayout
          (TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFSel;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassVertexShaderBaseType<FSelfShadowedCachedPointIndirectLightingPolicy>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1447783e0

FTypeLayoutDesc * __thiscall
TBasePassVS<FSelfShadowedTranslucencyPolicy>::GetTypeLayout
          (TBasePassVS<FSelfShadowedTranslucencyPolicy> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFSel;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TBasePassVS<FSelfShadowedTranslucencyPolicy>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<FSelfShadowedTranslucencyPolicy>,TBasePassVertexShaderBaseType<FSelfShadowedTranslucencyPolicy>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1447783f0

FTypeLayoutDesc * __thiscall
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::GetTypeLayout
          (TBasePassVS<FSelfShadowedVolumetricLightmapPolicy> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFSel;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>,TBasePassVertexShaderBaseType<FSelfShadowedVolumetricLightmapPolicy>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 14477fa50

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
TBasePassVS<TUniformLightMapPolicy<1>_>::InternalDestroy
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

// InternalDestroy @ 14477fa90

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
TBasePassVS<TUniformLightMapPolicy<2>_>::InternalDestroy
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

// InternalDestroy @ 14477fad0

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
TBasePassVS<TUniformLightMapPolicy<3>_>::InternalDestroy
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

// InternalDestroy @ 14477fb10

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
TBasePassVS<TUniformLightMapPolicy<4>_>::InternalDestroy
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

// InternalDestroy @ 14477fb50

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
TBasePassVS<TUniformLightMapPolicy<5>_>::InternalDestroy
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

// InternalDestroy @ 14477fb90

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
TBasePassVS<TUniformLightMapPolicy<6>_>::InternalDestroy
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

// InternalDestroy @ 14477fbd0

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
TBasePassVS<TUniformLightMapPolicy<0>_>::InternalDestroy
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

// InternalDestroy @ 14477fc10

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
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::InternalDestroy
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

// InternalDestroy @ 14477fc50

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
TBasePassVS<FSelfShadowedTranslucencyPolicy>::InternalDestroy
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

// InternalDestroy @ 14477fc90

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
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::InternalDestroy
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

// ShouldCompilePermutationImpl @ 1447a5ae0

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
TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a5b4a;
    }
  }
  bVar3 = false;
LAB_1447a5b4a:
  bVar4 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_PRECOMPUTED_IRRADIANCE_VOLUME_INDIRECT_LIGHTING,
                     (FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a5c40

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
TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a5caa;
    }
  }
  bVar3 = false;
LAB_1447a5caa:
  bVar4 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_CACHED_VOLUME_INDIRECT_LIGHTING,
                     (FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a5da0

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
TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a5e0a;
    }
  }
  bVar3 = false;
LAB_1447a5e0a:
  bVar4 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_CACHED_POINT_INDIRECT_LIGHTING,
                     (FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a5f00

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
TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a5f6a;
    }
  }
  bVar3 = false;
LAB_1447a5f6a:
  bVar4 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_LQ_LIGHTMAP,(FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a6060

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
TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a60ca;
    }
  }
  bVar3 = false;
LAB_1447a60ca:
  bVar4 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_HQ_LIGHTMAP,(FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a61c0

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
TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a622a;
    }
  }
  bVar3 = false;
LAB_1447a622a:
  bVar4 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_DISTANCE_FIELD_SHADOWS_AND_HQ_LIGHTMAP,
                     (FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a6320

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
TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a638a;
    }
  }
  bVar3 = false;
LAB_1447a638a:
  bVar4 = FUniformLightMapPolicy::ShouldCompilePermutation
                    (LMP_NO_LIGHTMAP,(FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a6470

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
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a64da;
    }
  }
  bVar3 = false;
LAB_1447a64da:
  bVar4 = FSelfShadowedCachedPointIndirectLightingPolicy::ShouldCompilePermutation
                    ((FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a65c0

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
TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a662a;
    }
  }
  bVar3 = false;
LAB_1447a662a:
  bVar4 = FSelfShadowedTranslucencyPolicy::ShouldCompilePermutation
                    ((FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 1447a6710

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
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  IConsoleManager *pIVar6;
  longlong *plVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar6 = IConsoleManager::Get();
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.SupportAllShaderPermutations",1);
    pTVar8 = pTVar9;
    if (plVar7 != (longlong *)0x0) {
      pTVar8 = (TConsoleVariableData<int> *)(**(code **)(*plVar7 + 0x68))(plVar7);
    }
    `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
    ::__l2::SupportAllShaderPermutations = pTVar8;
    _Init_thread_footer(&`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = `public:_static_bool___cdecl_TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
           ::__l2::SupportAllShaderPermutations;
  if (`public:_static_bool___cdecl_TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldCompilePermutation(FMeshMaterialShaderPermutationParameters_const&___ptr64)'
      ::__l2::SupportAllShaderPermutations != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
      pTVar9 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + (longlong)pTVar9->ShadowedValue) != 0) {
      bVar3 = true;
      goto LAB_1447a677a;
    }
  }
  bVar3 = false;
LAB_1447a677a:
  bVar4 = FSelfShadowedVolumetricLightmapPolicy::ShouldCompilePermutation
                    ((FMeshMaterialShaderPermutationParameters *)param_1);
  if ((bVar4) || (bVar3)) {
    EVar1 = param_1->Platform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 1447a7a00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<TUniformLightMapPolicy<1>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<TUniformLightMapPolicy<2>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<TUniformLightMapPolicy<3>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<TUniformLightMapPolicy<4>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<TUniformLightMapPolicy<5>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<TUniformLightMapPolicy<6>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<TUniformLightMapPolicy<0>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<FSelfShadowedTranslucencyPolicy>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1447a7a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1447b54a0

FTypeLayoutDesc * __cdecl TBasePassVS<TUniformLightMapPolicy<1>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFPre;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<1>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<1>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<1>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5590

FTypeLayoutDesc * __cdecl TBasePassVS<TUniformLightMapPolicy<2>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFCac;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<2>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<2>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<2>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5680

FTypeLayoutDesc * __cdecl TBasePassVS<TUniformLightMapPolicy<3>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFCac;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<3>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<3>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<3>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5770

FTypeLayoutDesc * __cdecl TBasePassVS<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSTLig;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<4>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<4>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<4>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5860

FTypeLayoutDesc * __cdecl TBasePassVS<TUniformLightMapPolicy<5>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSTLig;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<5>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<5>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<5>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5950

FTypeLayoutDesc * __cdecl TBasePassVS<TUniformLightMapPolicy<6>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSTDis;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<6>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<6>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<6>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5a40

FTypeLayoutDesc * __cdecl TBasePassVS<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFNoL;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TBasePassVS<TUniformLightMapPolicy<0>_>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<TUniformLightMapPolicy<0>_>,TBasePassVertexShaderBaseType<TUniformLightMapPolicy<0>_>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5b30

FTypeLayoutDesc * __cdecl
TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFSel;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<FSelfShadowedCachedPointIndirectLightingPolicy>,TBasePassVertexShaderBaseType<FSelfShadowedCachedPointIndirectLightingPolicy>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5c20

FTypeLayoutDesc * __cdecl TBasePassVS<FSelfShadowedTranslucencyPolicy>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFSel;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TBasePassVS<FSelfShadowedTranslucencyPolicy>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<FSelfShadowedTranslucencyPolicy>,TBasePassVertexShaderBaseType<FSelfShadowedTranslucencyPolicy>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1447b5d10

FTypeLayoutDesc * __cdecl
TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TBasePassVSFSel;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalInitializeBaseHelper<TBasePassVS<FSelfShadowedVolumetricLightmapPolicy>,TBasePassVertexShaderBaseType<FSelfShadowedVolumetricLightmapPolicy>_>
              ((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

