// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 25

// TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> @ 14472cae0

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

TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> * __thiscall
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *this,
          CompiledShaderInitializerType *param_1)

{
  FShaderParameterMap *pFVar1;
  
  FMeshMaterialShader::FMeshMaterialShader((FMeshMaterialShader *)this,param_1);
  *(undefined2 *)&this->field_0x10c = 0xffff;
  *(undefined2 *)&this->field_0x10a = 0xffff;
  *(undefined2 *)&this->field_0x108 = 0xffff;
  (this->ReflectionCaptureBuffer).BaseIndex = 0xffff;
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
  FShaderUniformBufferParameter::Bind
            (&this->ReflectionCaptureBuffer,(FShaderParameterMap *)param_1->_padding_,
             L"ReflectionCapture",SPF_Optional);
  return this;
}

// TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> @ 14472cbb0

TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> * __thiscall
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  FMaterialShader::FMaterialShader((FMaterialShader *)this);
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined2 *)&this->field_0x100 = 0xffff;
  *(undefined8 *)&this->field_0x108 = 0xffffffffffffffff;
  return this;
}

// ~TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> @ 14472ec70

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

void __thiscall
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::
~TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>
          (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0xe0);
  FShader::~FShader((FShader *)this);
  return;
}

// GetElementShaderBindings @ 14475dca0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
GetElementShaderBindings
          (TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
           *this,FShaderMapPointerTable *param_1,FScene *param_2,FSceneView *param_3,
          FVertexFactory *param_4,EVertexInputStreamType param_5,Type param_6,
          FPrimitiveSceneProxy *param_7,FMeshBatch *param_8,FMeshBatchElement *param_9,
          TBasePassShaderElementData<FSelfShadowedCachedPointIndirectLightingPolicy> *param_10,
          FMeshDrawSingleShaderBindings *param_11,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_12)

{
  FMeshMaterialShader::GetElementShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FGenericStaticFeatureLevel)param_6,param_7,param_8,param_9,
             (FMeshMaterialShaderElementData *)param_10,param_11,param_12);
  return;
}

// GetElementShaderBindings @ 14475dd30

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

void __thiscall
TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::GetElementShaderBindings
          (TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *this,
          FShaderMapPointerTable *param_1,FScene *param_2,FSceneView *param_3,
          FVertexFactory *param_4,EVertexInputStreamType param_5,Type param_6,
          FPrimitiveSceneProxy *param_7,FMeshBatch *param_8,FMeshBatchElement *param_9,
          TBasePassShaderElementData<FSelfShadowedTranslucencyPolicy> *param_10,
          FMeshDrawSingleShaderBindings *param_11,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_12)

{
  FMeshMaterialShader::GetElementShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FGenericStaticFeatureLevel)param_6,param_7,param_8,param_9,
             (FMeshMaterialShaderElementData *)param_10,param_11,param_12);
  return;
}

// GetElementShaderBindings @ 14475ddc0

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

void __thiscall
TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::
GetElementShaderBindings
          (TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *this,
          FShaderMapPointerTable *param_1,FScene *param_2,FSceneView *param_3,
          FVertexFactory *param_4,EVertexInputStreamType param_5,Type param_6,
          FPrimitiveSceneProxy *param_7,FMeshBatch *param_8,FMeshBatchElement *param_9,
          TBasePassShaderElementData<FSelfShadowedVolumetricLightmapPolicy> *param_10,
          FMeshDrawSingleShaderBindings *param_11,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_12)

{
  FMeshMaterialShader::GetElementShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FGenericStaticFeatureLevel)param_6,param_7,param_8,param_9,
             (FMeshMaterialShaderElementData *)param_10,param_11,param_12);
  return;
}

// GetElementShaderBindings @ 14475de50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::GetElementShaderBindings
          (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *this,
          FShaderMapPointerTable *param_1,FScene *param_2,FSceneView *param_3,
          FVertexFactory *param_4,EVertexInputStreamType param_5,Type param_6,
          FPrimitiveSceneProxy *param_7,FMeshBatch *param_8,FMeshBatchElement *param_9,
          TBasePassShaderElementData<FUniformLightMapPolicy> *param_10,
          FMeshDrawSingleShaderBindings *param_11,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_12)

{
  FMeshMaterialShader::GetElementShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FGenericStaticFeatureLevel)param_6,param_7,param_8,param_9,
             (FMeshMaterialShaderElementData *)param_10,param_11,param_12);
  return;
}

// GetShaderBindings @ 14475ff00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
GetShaderBindings(TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>
                  *this,FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,
                 FMaterialRenderProxy *param_4,FMaterial *param_5,
                 TBasePassShaderElementData<FSelfShadowedCachedPointIndirectLightingPolicy> *param_6
                 ,FMeshDrawSingleShaderBindings *param_7)

{
  FRHIUniformBuffer *pFVar1;
  code *pcVar2;
  TBasePassShaderElementData<FSelfShadowedCachedPointIndirectLightingPolicy> *pTVar3;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  FHashedName FStack_38;
  FHashedName FStack_30;
  FHashedName aFStack_28 [2];
  
  this_00 = param_7;
  FMaterialShader::GetShaderBindings
            ((FMaterialShader *)this,(FSceneInterface *)param_1,param_2,param_4,param_5,param_7);
  pTVar3 = param_6;
  pFVar1 = (FRHIUniformBuffer *)param_6->_padding_;
  pFVar5 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_6,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(&FStack_30,(FHashedName *)&param_6);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  if (pFVar7->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar7->BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(this_00,pFVar1,(uint)pFVar7->BaseIndex)
    ;
  }
  pFVar1 = (FRHIUniformBuffer *)pTVar3->_padding_;
  pFVar5 = FDitherUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&FStack_38,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(aFStack_28,&FStack_38);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  if (pFVar7->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar7->BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(this_00,pFVar1,(uint)pFVar7->BaseIndex)
    ;
  }
  return;
}

// GetShaderBindings @ 14475ff10

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
TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::GetShaderBindings
          (TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *this,
          FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,
          FMaterial *param_5,TBasePassShaderElementData<FSelfShadowedTranslucencyPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  VertexParametersType *pVVar1;
  
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  pVVar1 = (VertexParametersType *)&this->ReflectionCaptureBuffer;
  if (this == (TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy> *)0x0) {
    pVVar1 = (VertexParametersType *)0x0;
  }
  FSelfShadowedTranslucencyPolicy::GetVertexShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,pVVar1,param_7);
  return;
}

// GetShaderBindings @ 14475ffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::GetShaderBindings
          (TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy> *this,
          FScene *param_1,Type param_2,FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,
          FMaterial *param_5,
          TBasePassShaderElementData<FSelfShadowedVolumetricLightmapPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  FRHIUniformBuffer *pFVar1;
  code *pcVar2;
  TBasePassShaderElementData<FSelfShadowedVolumetricLightmapPolicy> *pTVar3;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FHashedName FVar6;
  FShaderUniformBufferParameter *pFVar7;
  FHashedName FStack_38;
  FHashedName FStack_30;
  FHashedName aFStack_28 [2];
  
  this_00 = param_7;
  FMaterialShader::GetShaderBindings
            ((FMaterialShader *)this,(FSceneInterface *)param_1,param_2,param_4,param_5,param_7);
  pTVar3 = param_6;
  pFVar1 = (FRHIUniformBuffer *)param_6->_padding_;
  pFVar5 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_6,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(&FStack_30,(FHashedName *)&param_6);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  if (pFVar7->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar7->BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(this_00,pFVar1,(uint)pFVar7->BaseIndex)
    ;
  }
  pFVar1 = (FRHIUniformBuffer *)pTVar3->_padding_;
  pFVar5 = FDitherUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&FStack_38,&pFVar5->ShaderVariableHashedName);
  FVar6.Hash = (ulong64)FHashedName::FHashedName(aFStack_28,&FStack_38);
  pFVar7 = FShader::GetUniformBufferParameter((FShader *)this,FVar6);
  if (pFVar7->BaseIndex != 0xffff) {
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar7->BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(this_00,pFVar1,(uint)pFVar7->BaseIndex)
    ;
  }
  return;
}

// GetShaderBindings @ 14475ffb0

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
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::GetShaderBindings
          (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *this,FScene *param_1,
          Type param_2,FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,
          FMaterial *param_5,TBasePassShaderElementData<FUniformLightMapPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  FUniformLightMapPolicyShaderParametersType *pFVar1;
  
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  pFVar1 = (FUniformLightMapPolicyShaderParametersType *)&this->field_0x108;
  if (this == (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0) {
    pFVar1 = (FUniformLightMapPolicyShaderParametersType *)0x0;
  }
  FUniformLightMapPolicy::GetVertexShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,pFVar1,param_7);
  return;
}

// GetTypeLayout @ 144778400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::GetTypeLayout
          (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *this)

{
  if ((DAT_1550914b7 & 2) == 0) {
    DAT_1550914b7 = DAT_1550914b7 | 2;
    _DAT_1550914a8 = 0x110;
    _DAT_155091458 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_155091470 = Freeze::DefaultWriteMemoryImage;
    _DAT_155091478 = Freeze::DefaultUnfrozenCopy;
    _DAT_155091480 = Freeze::DefaultAppendHash;
    _DAT_155091488 = Freeze::DefaultGetTargetAlignment;
    _DAT_155091490 = Freeze::DefaultToString;
    _DAT_155091468 = InternalDestroy;
    _DAT_155091498 =
         TGetDefaultObjectHelper<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,0>::Do
    ;
    _DAT_1550914b0 = 8;
    DAT_1550914b4 = 0;
    _DAT_1550914ac = 0xffffffff;
    `public:_static_void___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_1550927c2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_1550927a0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_1550927a8 = DAT_155091460;
    DAT_155091460 =
         &`public:_static_void___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550927b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550927b8 = 0x10e;
    _DAT_1550927bc = 1;
    _DAT_1550927c0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_1550914b5 = DAT_1550914b5 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155091460;
    DAT_155091460 = (uchar **)::FieldBuffer;
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
      DAT_1550914b6 = DAT_1550914b6 + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_1550914b5 = DAT_1550914b5 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155091460;
    DAT_155091460 = (uchar **)::FieldBuffer;
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
      DAT_1550914b6 = DAT_1550914b6 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

// InternalDestroy @ 14477ff50

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
TBasePassVertexShaderPolicyParamType<TUniformLightMapPolicy<1>_>::InternalDestroy
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

// InternalDestroy @ 14477ff90

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
TBasePassVertexShaderPolicyParamType<TUniformLightMapPolicy<2>_>::InternalDestroy
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

// InternalDestroy @ 14477ffd0

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
TBasePassVertexShaderPolicyParamType<TUniformLightMapPolicy<3>_>::InternalDestroy
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

// InternalDestroy @ 144780010

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
TBasePassVertexShaderPolicyParamType<TUniformLightMapPolicy<4>_>::InternalDestroy
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

// InternalDestroy @ 144780050

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
TBasePassVertexShaderPolicyParamType<TUniformLightMapPolicy<5>_>::InternalDestroy
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

// InternalDestroy @ 144780090

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
TBasePassVertexShaderPolicyParamType<TUniformLightMapPolicy<6>_>::InternalDestroy
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

// InternalDestroy @ 1447800d0

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
TBasePassVertexShaderPolicyParamType<TUniformLightMapPolicy<0>_>::InternalDestroy
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

// InternalDestroy @ 144780110

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
TBasePassVertexShaderPolicyParamType<FSelfShadowedCachedPointIndirectLightingPolicy>::
InternalDestroy(void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0xe0));
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x110);
  return;
}

// InternalDestroy @ 144780150

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
TBasePassVertexShaderPolicyParamType<FSelfShadowedTranslucencyPolicy>::InternalDestroy
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

// InternalDestroy @ 144780190

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
TBasePassVertexShaderPolicyParamType<FSelfShadowedVolumetricLightmapPolicy>::InternalDestroy
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

// InternalDestroy @ 1447801d0

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
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::InternalDestroy
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

// ModifyCompilationEnvironment @ 144781510

void __cdecl
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORWARD_LIGHT_DATA_STRIDE",6);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NUM_CULLED_LIGHTS_GRID_STRIDE",NumCulledLightsGridStride);
  FShaderCompilerEnvironment::SetDefine
            (param_2,L"NUM_CULLED_GRID_PRIMITIVE_TYPES",NumCulledGridPrimitiveTypes);
  return;
}

// StaticGetTypeLayout @ 1447b5e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl
TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)

{
  if ((DAT_1550914b7 & 2) == 0) {
    DAT_1550914b7 = DAT_1550914b7 | 2;
    _DAT_1550914a8 = 0x110;
    _DAT_155091458 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_155091470 = Freeze::DefaultWriteMemoryImage;
    _DAT_155091478 = Freeze::DefaultUnfrozenCopy;
    _DAT_155091480 = Freeze::DefaultAppendHash;
    _DAT_155091488 = Freeze::DefaultGetTargetAlignment;
    _DAT_155091490 = Freeze::DefaultToString;
    _DAT_155091468 = InternalDestroy;
    _DAT_155091498 =
         TGetDefaultObjectHelper<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,0>::Do
    ;
    _DAT_1550914b0 = 8;
    DAT_1550914b4 = 0;
    _DAT_1550914ac = 0xffffffff;
    `public:_static_void___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ReflectionCaptureBuffer";
    DAT_1550927c2 = Freeze::FindFieldNameLength(L"ReflectionCaptureBuffer");
    _DAT_1550927a0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    _DAT_1550927a8 = DAT_155091460;
    DAT_155091460 =
         &`public:_static_void___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1550927b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1550927b8 = 0x10e;
    _DAT_1550927bc = 1;
    _DAT_1550927c0 = 0;
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FUniformLightMapPolicyShaderParametersType::StaticGetTypeLayout();
    DAT_1550914b5 = DAT_1550914b5 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155091460;
    DAT_155091460 = (uchar **)::FieldBuffer;
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
      DAT_1550914b6 = DAT_1550914b6 + '\x01';
    }
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FMeshMaterialShader::StaticGetTypeLayout();
    DAT_1550914b5 = DAT_1550914b5 + '\x01';
    ::FieldBuffer._16_8_ = DAT_155091460;
    DAT_155091460 = (uchar **)::FieldBuffer;
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
      DAT_1550914b6 = DAT_1550914b6 + '\x01';
    }
    FTypeLayoutDesc::Initialize
              ((FTypeLayoutDesc *)
               &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
                ::__l2::TypeBuffer);
    return (FTypeLayoutDesc *)
           &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
            ::__l2::TypeBuffer;
  }
  return (FTypeLayoutDesc *)
         &`public:_static_struct_FTypeLayoutDesc&___ptr64___cdecl_TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>::StaticGetTypeLayout(void)'
          ::__l2::TypeBuffer;
}

