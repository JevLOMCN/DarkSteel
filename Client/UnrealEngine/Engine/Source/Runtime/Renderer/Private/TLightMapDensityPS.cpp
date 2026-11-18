// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 32

// ConstructCompiledInstance @ 144bb3570

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
TLightMapDensityPS<TUniformLightMapPolicy<4>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(ushort *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 2),pFVar1,
               L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
               L"BuiltLightingAndSelectedFlags",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
               L"LightMapResolutionScale",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
               L"LightMapDensityDisplayOptions",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144bb36c0

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
TLightMapDensityPS<TUniformLightMapPolicy<5>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(ushort *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 2),pFVar1,
               L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
               L"BuiltLightingAndSelectedFlags",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
               L"LightMapResolutionScale",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
               L"LightMapDensityDisplayOptions",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144bb3810

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
TLightMapDensityPS<TUniformLightMapPolicy<0>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(ushort *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 2),pFVar1,
               L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
               L"BuiltLightingAndSelectedFlags",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
               L"LightMapResolutionScale",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
               L"LightMapDensityDisplayOptions",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 144bb3960

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
TLightMapDensityPS<TUniformLightMapPolicy<13>_>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  FMeshMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMeshMaterialShader *)0x0) {
    FMeshMaterialShader::FMeshMaterialShader(this,(CompiledShaderInitializerType *)param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 2) = 0xffff;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    *(ushort *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 6) = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0;
    pFVar1 = param_1->ParameterMap;
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)(this + 1),pFVar1,L"PrecomputedLightingBuffer",
               SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 2),pFVar1,
               L"IndirectLightingCache",SPF_Optional);
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 4),pFVar1,
               L"LightmapResourceCluster",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 6),param_1->ParameterMap,
               L"BuiltLightingAndSelectedFlags",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 4),param_1->ParameterMap,
               L"LightMapResolutionScale",SPF_Optional);
    FShaderParameter::Bind
              ((FShaderParameter *)((longlong)&this[1]._padding_ + 2),param_1->ParameterMap,
               L"LightMapDensityDisplayOptions",SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144bb4890

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

FShader * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<4>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144bb4900

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

FShader * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<5>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144bb4970

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

FShader * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<0>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 144bb49e0

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

FShader * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<13>_>::ConstructSerializedInstance(void)

{
  FMaterialShader *this;
  
  this = ::operator_new(0x120);
  if (this != (FMaterialShader *)0x0) {
    FMaterialShader::FMaterialShader(this);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined2 *)&this[1]._padding_ = 0xffff;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0xffff;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 144bc9580

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
TLightMapDensityPS<TUniformLightMapPolicy<4>_>::GetStaticType(void)

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
                 L"TLightMapDensityPSTLightMapPolicyLQ",L"/Engine/Private/LightMapDensityShader.usf"
                 ,L"MainPixelShader",3,1,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0x120,
                 (FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/LightMapDensityShader.usf");
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
      atexit(`TLightMapDensityPS<TUniformLightMapPolicy<4>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144bc9790

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
TLightMapDensityPS<TUniformLightMapPolicy<5>_>::GetStaticType(void)

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
                 L"TLightMapDensityPSTLightMapPolicyHQ",L"/Engine/Private/LightMapDensityShader.usf"
                 ,L"MainPixelShader",3,1,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0x120,
                 (FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/LightMapDensityShader.usf");
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
      atexit(`TLightMapDensityPS<TUniformLightMapPolicy<5>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144bc99a0

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
TLightMapDensityPS<TUniformLightMapPolicy<0>_>::GetStaticType(void)

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
                 L"TLightMapDensityPSFNoLightMapPolicy",L"/Engine/Private/LightMapDensityShader.usf"
                 ,L"MainPixelShader",3,1,ConstructSerializedInstance,ConstructCompiledInstance,
                 ShouldCompilePermutationImpl,ShouldPrecachePermutationImpl,
                 FShader::GetRayTracingPayloadType,FShader::GetShaderBindingLayout,0x120,
                 (FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/LightMapDensityShader.usf");
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
      atexit(`TLightMapDensityPS<TUniformLightMapPolicy<0>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 144bc9bb0

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
TLightMapDensityPS<TUniformLightMapPolicy<13>_>::GetStaticType(void)

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
                 L"TLightMapDensityPSFDummyLightMapPolicy",
                 L"/Engine/Private/LightMapDensityShader.usf",L"MainPixelShader",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x120,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = &___7FMeshMaterialShaderType__6B_;
      ::FString::FString(&local_28,L"/Engine/Private/LightMapDensityShader.usf");
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
      atexit(`TLightMapDensityPS<TUniformLightMapPolicy<13>_>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 144bcf810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TLightMapDensityPS<TUniformLightMapPolicy<4>_>::GetTypeLayout
          (TLightMapDensityPS<TUniformLightMapPolicy<4>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<4>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5eb2 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5e90 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5e98 = ::TypeBuffer[0x10];
    DAT_1550c5e98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5e98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5e98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5e98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5e98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5e98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5e98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5ea0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5ea8 = 0x11a;
    _DAT_1550c5eac = 1;
    _DAT_1550c5eb0 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c57ea = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c57c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c57d0 = ::TypeBuffer[0x10];
    DAT_1550c57d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c57d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c57d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c57d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c57d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c57d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c57d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c57d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c57e0 = 0x114;
    _DAT_1550c57e4 = 1;
    _DAT_1550c57e8 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c5682 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c5660 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5668 = ::TypeBuffer[0x10];
    DAT_1550c5668_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5668_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5668_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5668_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5668_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5668_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5668_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5670 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5678 = 0x10e;
    _DAT_1550c567c = 1;
    _DAT_1550c5680 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144bcf820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TLightMapDensityPS<TUniformLightMapPolicy<5>_>::GetTypeLayout
          (TLightMapDensityPS<TUniformLightMapPolicy<5>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<5>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5e82 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5e60 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5e68 = ::TypeBuffer[0x10];
    DAT_1550c5e68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5e68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5e68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5e68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5e68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5e68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5e68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5e70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5e78 = 0x11a;
    _DAT_1550c5e7c = 1;
    _DAT_1550c5e80 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c57ba = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c5798 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c57a0 = ::TypeBuffer[0x10];
    DAT_1550c57a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c57a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c57a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c57a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c57a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c57a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c57a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c57a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c57b0 = 0x114;
    _DAT_1550c57b4 = 1;
    _DAT_1550c57b8 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c5652 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c5630 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5638 = ::TypeBuffer[0x10];
    DAT_1550c5638_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5638_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5638_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5638_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5638_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5638_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5638_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5640 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5648 = 0x10e;
    _DAT_1550c564c = 1;
    _DAT_1550c5650 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144bcf830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TLightMapDensityPS<TUniformLightMapPolicy<0>_>::GetTypeLayout
          (TLightMapDensityPS<TUniformLightMapPolicy<0>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<0>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5f12 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5ef0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5ef8 = ::TypeBuffer[0x10];
    DAT_1550c5ef8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5ef8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5ef8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5ef8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5ef8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5ef8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5ef8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5f00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5f08 = 0x11a;
    _DAT_1550c5f0c = 1;
    _DAT_1550c5f10 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c584a = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c5828 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5830 = ::TypeBuffer[0x10];
    DAT_1550c5830_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5830_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5830_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5830_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5830_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5830_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5830_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5838 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5840 = 0x114;
    _DAT_1550c5844 = 1;
    _DAT_1550c5848 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c56e2 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c56c0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c56c8 = ::TypeBuffer[0x10];
    DAT_1550c56c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c56c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c56c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c56c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c56c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c56c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c56c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c56d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c56d8 = 0x10e;
    _DAT_1550c56dc = 1;
    _DAT_1550c56e0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 144bcf840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TLightMapDensityPS<TUniformLightMapPolicy<13>_>::GetTypeLayout
          (TLightMapDensityPS<TUniformLightMapPolicy<13>_> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<13>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5ee2 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5ec0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5ec8 = ::TypeBuffer[0x10];
    DAT_1550c5ec8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5ec8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5ec8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5ec8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5ec8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5ec8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5ec8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5ed0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5ed8 = 0x11a;
    _DAT_1550c5edc = 1;
    _DAT_1550c5ee0 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c581a = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c57f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5800 = ::TypeBuffer[0x10];
    DAT_1550c5800_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5800_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5800_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5800_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5800_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5800_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5800_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5808 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5810 = 0x114;
    _DAT_1550c5814 = 1;
    _DAT_1550c5818 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c56b2 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c5690 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5698 = ::TypeBuffer[0x10];
    DAT_1550c5698_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5698_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5698_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5698_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5698_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5698_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5698_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c56a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c56a8 = 0x10e;
    _DAT_1550c56ac = 1;
    _DAT_1550c56b0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 144bd05d0

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
TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// InternalDestroy @ 144bd0610

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
TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// InternalDestroy @ 144bd0650

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
TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// InternalDestroy @ 144bd0690

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
TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x120);
  return;
}

// ShouldCompilePermutationImpl @ 144be4190

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
TLightMapDensityPS<TUniformLightMapPolicy<4>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = AllowDebugViewmodes(param_1->Platform);
  if (((bVar1) && (FReadOnlyCVARCache::bAllowStaticLighting != false)) &&
     ((param_1[4].Flags & 0x1000006) != None)) {
    bVar1 = LightMapPolicyImpl::ShouldCompilePermutation
                      (LQ_LIGHTMAP,(FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar1) {
      bVar1 = IsFeatureLevelSupported((FStaticShaderPlatform)param_1->Platform,SM5);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144be41f0

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
TLightMapDensityPS<TUniformLightMapPolicy<5>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = AllowDebugViewmodes(param_1->Platform);
  if (((bVar1) && (FReadOnlyCVARCache::bAllowStaticLighting != false)) &&
     ((param_1[4].Flags & 0x1000006) != None)) {
    bVar1 = LightMapPolicyImpl::ShouldCompilePermutation
                      (HQ_LIGHTMAP,(FMeshMaterialShaderPermutationParameters *)param_1);
    if (bVar1) {
      bVar1 = IsFeatureLevelSupported((FStaticShaderPlatform)param_1->Platform,SM5);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144be4260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TLightMapDensityPS<TUniformLightMapPolicy<0>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = AllowDebugViewmodes(param_1->Platform);
  if (((bVar1) && (FReadOnlyCVARCache::bAllowStaticLighting != false)) &&
     ((param_1[4].Flags & 0x1000006) != None)) {
    bVar1 = IsFeatureLevelSupported((FStaticShaderPlatform)param_1->Platform,SM5);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ShouldCompilePermutationImpl @ 144be42b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TLightMapDensityPS<TUniformLightMapPolicy<13>_>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  bVar1 = AllowDebugViewmodes(param_1->Platform);
  if ((((bVar1) && (FReadOnlyCVARCache::bAllowStaticLighting != false)) &&
      ((param_1[4].Flags & 0x1000006) != None)) &&
     (((param_1[1].Flags & HasEditorOnlyData) == None &&
      ((*(byte *)(*(longlong *)&param_1[7].PermutationId + 0x38) & 4) != 0)))) {
    bVar1 = IsFeatureLevelSupported((FStaticShaderPlatform)param_1->Platform,SM5);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ShouldPrecachePermutationImpl @ 144be4c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TLightMapDensityPS<TUniformLightMapPolicy<4>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144be4c50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TLightMapDensityPS<TUniformLightMapPolicy<5>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144be4c60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TLightMapDensityPS<TUniformLightMapPolicy<0>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 144be4c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TLightMapDensityPS<TUniformLightMapPolicy<13>_>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 144be50f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<4>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<4>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5eb2 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5e90 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5e98 = ::TypeBuffer[0x10];
    DAT_1550c5e98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5e98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5e98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5e98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5e98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5e98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5e98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5ea0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5ea8 = 0x11a;
    _DAT_1550c5eac = 1;
    _DAT_1550c5eb0 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c57ea = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c57c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c57d0 = ::TypeBuffer[0x10];
    DAT_1550c57d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c57d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c57d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c57d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c57d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c57d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c57d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c57d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c57e0 = 0x114;
    _DAT_1550c57e4 = 1;
    _DAT_1550c57e8 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c5682 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c5660 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5668 = ::TypeBuffer[0x10];
    DAT_1550c5668_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5668_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5668_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5668_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5668_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5668_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5668_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<4>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5670 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5678 = 0x10e;
    _DAT_1550c567c = 1;
    _DAT_1550c5680 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144be53e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<5>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<5>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5e82 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5e60 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5e68 = ::TypeBuffer[0x10];
    DAT_1550c5e68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5e68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5e68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5e68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5e68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5e68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5e68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5e70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5e78 = 0x11a;
    _DAT_1550c5e7c = 1;
    _DAT_1550c5e80 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c57ba = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c5798 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c57a0 = ::TypeBuffer[0x10];
    DAT_1550c57a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c57a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c57a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c57a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c57a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c57a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c57a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c57a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c57b0 = 0x114;
    _DAT_1550c57b4 = 1;
    _DAT_1550c57b8 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c5652 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c5630 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5638 = ::TypeBuffer[0x10];
    DAT_1550c5638_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5638_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5638_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5638_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5638_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5638_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5638_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<5>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5640 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5648 = 0x10e;
    _DAT_1550c564c = 1;
    _DAT_1550c5650 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144be56d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<0>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<0>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5f12 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5ef0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5ef8 = ::TypeBuffer[0x10];
    DAT_1550c5ef8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5ef8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5ef8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5ef8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5ef8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5ef8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5ef8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5f00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5f08 = 0x11a;
    _DAT_1550c5f0c = 1;
    _DAT_1550c5f10 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c584a = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c5828 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5830 = ::TypeBuffer[0x10];
    DAT_1550c5830_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5830_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5830_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5830_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5830_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5830_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5830_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5838 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5840 = 0x114;
    _DAT_1550c5844 = 1;
    _DAT_1550c5848 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c56e2 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c56c0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c56c8 = ::TypeBuffer[0x10];
    DAT_1550c56c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c56c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c56c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c56c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c56c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c56c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c56c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<0>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c56d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c56d8 = 0x10e;
    _DAT_1550c56dc = 1;
    _DAT_1550c56e0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 144be59c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TLightMapDensityPS<TUniformLightMapPolicy<13>_>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_TLightMapDensit;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<TLightMapDensityPS<TUniformLightMapPolicy<13>_>,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapDensityDisplayOptions";
    DAT_1550c5ee2 = Freeze::FindFieldNameLength(L"LightMapDensityDisplayOptions");
    _DAT_1550c5ec0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5ec8 = ::TypeBuffer[0x10];
    DAT_1550c5ec8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5ec8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5ec8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5ec8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5ec8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5ec8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5ec8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5ed0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5ed8 = 0x11a;
    _DAT_1550c5edc = 1;
    _DAT_1550c5ee0 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightMapResolutionScale";
    DAT_1550c581a = Freeze::FindFieldNameLength(L"LightMapResolutionScale");
    _DAT_1550c57f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5800 = ::TypeBuffer[0x10];
    DAT_1550c5800_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5800_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5800_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5800_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5800_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5800_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5800_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c5808 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c5810 = 0x114;
    _DAT_1550c5814 = 1;
    _DAT_1550c5818 = 0;
    `public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "BuiltLightingAndSelectedFlags";
    DAT_1550c56b2 = Freeze::FindFieldNameLength(L"BuiltLightingAndSelectedFlags");
    _DAT_1550c5690 = FShaderParameter::StaticGetTypeLayout();
    DAT_1550c5698 = ::TypeBuffer[0x10];
    DAT_1550c5698_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1550c5698_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1550c5698_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1550c5698_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1550c5698_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1550c5698_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1550c5698_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TLightMapDensityPS<TUniformLightMapPolicy<13>_>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550c56a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550c56a8 = 0x10e;
    _DAT_1550c56ac = 1;
    _DAT_1550c56b0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
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
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
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
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

