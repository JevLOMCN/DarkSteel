// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// InternalDestroy @ 144780240

void __cdecl
FSelfShadowedVolumetricLightmapPolicy::ComputeParametersType::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// InternalDestroy @ 144780850

void __cdecl
FSelfShadowedVolumetricLightmapPolicy::PixelParametersType::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  return;
}

// FSelfShadowedVolumetricLightmapPolicy @ 144b98280

FSelfShadowedVolumetricLightmapPolicy * __thiscall
FSelfShadowedVolumetricLightmapPolicy::FSelfShadowedVolumetricLightmapPolicy
          (FSelfShadowedVolumetricLightmapPolicy *this)

{
  return this;
}

// GetComputeShaderBindings @ 144bc44c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FSelfShadowedVolumetricLightmapPolicy::GetComputeShaderBindings
          (FPrimitiveSceneProxy *param_1,FSelfShadowLightCacheElementData *param_2,
          ComputeParametersType *param_3,FMeshDrawSingleShaderBindings *param_4)

{
  FLightCacheInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar4;
  FRHIUniformBuffer *pFVar5;
  FRHIUniformBuffer *pFVar6;
  
  pFVar5 = (FRHIUniformBuffer *)0x0;
  pFVar1 = param_2->LCI;
  if (pFVar1 != (FLightCacheInterface *)0x0) {
    pFVar6 = (pFVar1->PrecomputedLightingUniformBuffer).Reference;
    if (pFVar1->ResourceCluster != (FLightmapResourceCluster *)0x0) {
      if (((pFVar1->ResourceCluster->UniformBuffer).Reference == (FRHIUniformBuffer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LCI->GetResourceCluster()->UniformBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightMapRendering.cpp"
                             ,0x11a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = (pFVar1->ResourceCluster->UniformBuffer).Reference;
    }
    if (pFVar6 != (FRHIUniformBuffer *)0x0) goto LAB_144bc459f;
  }
  pFVar6 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
  if (GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
    if ((GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar6 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_144bc459f:
  if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
     (pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_,
     GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_;
    if ((GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((((param_1 == (FPrimitiveSceneProxy *)0x0) ||
       (param_1->PrimitiveSceneInfo == (FPrimitiveSceneInfo *)0x0)) ||
      (TVar4 = param_1->PrimitiveSceneInfo->IndirectLightingCacheUniformBuffer,
      TVar4 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0)) &&
     (TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
              GEmptyIndirectLightingCacheUniformBuffer._40_8_,
     GEmptyIndirectLightingCacheUniformBuffer._40_8_ == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
            GEmptyIndirectLightingCacheUniformBuffer._40_8_;
    if ((GEmptyIndirectLightingCacheUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
               GEmptyIndirectLightingCacheUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(short *)param_3 != -1) {
    if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(short *)param_3 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar6,(uint)*(ushort *)param_3);
  }
  if (*(short *)&param_3->field_0x2 != -1) {
    if ((TVar4 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(short *)&param_3->field_0x2 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,(FRHIUniformBuffer *)TVar4,(uint)*(ushort *)&param_3->field_0x2);
  }
  if (*(short *)&param_3->field_0x4 != -1) {
    if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(short *)&param_3->field_0x4 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar5,(uint)*(ushort *)&param_3->field_0x4);
  }
  FSelfShadowedTranslucencyPolicy::GetComputeShaderBindings
            (param_1,&param_2->SelfShadowTranslucencyUniformBuffer,
             (ComputeParametersType *)&param_3->field_0x6,param_4);
  return;
}

// GetPixelShaderBindings @ 144bc8110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FSelfShadowedVolumetricLightmapPolicy::GetPixelShaderBindings
          (FPrimitiveSceneProxy *param_1,FSelfShadowLightCacheElementData *param_2,
          PixelParametersType *param_3,FMeshDrawSingleShaderBindings *param_4)

{
  FLightCacheInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar4;
  FRHIUniformBuffer *pFVar5;
  FRHIUniformBuffer *pFVar6;
  
  pFVar5 = (FRHIUniformBuffer *)0x0;
  pFVar1 = param_2->LCI;
  if (pFVar1 != (FLightCacheInterface *)0x0) {
    pFVar6 = (pFVar1->PrecomputedLightingUniformBuffer).Reference;
    if (pFVar1->ResourceCluster != (FLightmapResourceCluster *)0x0) {
      if (((pFVar1->ResourceCluster->UniformBuffer).Reference == (FRHIUniformBuffer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LCI->GetResourceCluster()->UniformBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightMapRendering.cpp"
                             ,0x11a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = (pFVar1->ResourceCluster->UniformBuffer).Reference;
    }
    if (pFVar6 != (FRHIUniformBuffer *)0x0) goto LAB_144bc81ef;
  }
  pFVar6 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
  if (GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
    if ((GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar6 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_144bc81ef:
  if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
     (pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_,
     GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_;
    if ((GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((((param_1 == (FPrimitiveSceneProxy *)0x0) ||
       (param_1->PrimitiveSceneInfo == (FPrimitiveSceneInfo *)0x0)) ||
      (TVar4 = param_1->PrimitiveSceneInfo->IndirectLightingCacheUniformBuffer,
      TVar4 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0)) &&
     (TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
              GEmptyIndirectLightingCacheUniformBuffer._40_8_,
     GEmptyIndirectLightingCacheUniformBuffer._40_8_ == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
            GEmptyIndirectLightingCacheUniformBuffer._40_8_;
    if ((GEmptyIndirectLightingCacheUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
               GEmptyIndirectLightingCacheUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(short *)param_3 != -1) {
    if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(short *)param_3 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar6,(uint)*(ushort *)param_3);
  }
  if (*(short *)&param_3->field_0x2 != -1) {
    if ((TVar4 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(short *)&param_3->field_0x2 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,(FRHIUniformBuffer *)TVar4,(uint)*(ushort *)&param_3->field_0x2);
  }
  if (*(short *)&param_3->field_0x4 != -1) {
    if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(short *)&param_3->field_0x4 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar5,(uint)*(ushort *)&param_3->field_0x4);
  }
  FSelfShadowedTranslucencyPolicy::GetPixelShaderBindings
            (param_1,&param_2->SelfShadowTranslucencyUniformBuffer,
             (PixelParametersType *)&param_3->field_0x6,param_4);
  return;
}

// ModifyCompilationEnvironment @ 144bd5240

void __cdecl
FSelfShadowedVolumetricLightmapPolicy::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",L"1");
  FShaderCompilerEnvironment::SetDefine(param_2,L"TRANSLUCENT_SELF_SHADOWING",L"1");
  return;
}

// ShouldCompilePermutation @ 144be3ca0

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
FSelfShadowedVolumetricLightmapPolicy::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if ((param_1->_padding_ & 0x100000000) == 0) {
    bVar1 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_1->_padding_);
    if (((bVar1) && (FReadOnlyCVARCache::bAllowStaticLighting != false)) &&
       ((param_1->_padding_ & 0x100000000) == 0)) {
      bVar1 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_1->_padding_);
      if (bVar1) {
        bVar1 = IsFeatureLevelSupported
                          ((FStaticShaderPlatform)(EShaderPlatform)param_1->_padding_,SM5);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

