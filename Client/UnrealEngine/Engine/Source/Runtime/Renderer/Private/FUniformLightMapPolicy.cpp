// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// GetComputeShaderBindings @ 144bc4840

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
FUniformLightMapPolicy::GetComputeShaderBindings
          (FPrimitiveSceneProxy *param_1,FLightCacheInterface **param_2,
          FUniformLightMapPolicyShaderParametersType *param_3,FMeshDrawSingleShaderBindings *param_4
          )

{
  FLightCacheInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar4;
  FRHIUniformBuffer *pFVar5;
  FRHIUniformBuffer *pFVar6;
  
  pFVar6 = (FRHIUniformBuffer *)0x0;
  pFVar1 = *param_2;
  if (pFVar1 != (FLightCacheInterface *)0x0) {
    pFVar5 = (pFVar1->PrecomputedLightingUniformBuffer).Reference;
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
      pFVar6 = (pFVar1->ResourceCluster->UniformBuffer).Reference;
    }
    if (pFVar5 != (FRHIUniformBuffer *)0x0) goto LAB_144bc491e;
  }
  pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
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
    pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
    if ((GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_144bc491e:
  if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
     (pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_,
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
    pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_;
    if ((GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_, bVar3)) {
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
  if ((param_3->PrecomputedLightingBufferParameter).BaseIndex != 0xffff) {
    if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->PrecomputedLightingBufferParameter).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar5,(uint)(param_3->PrecomputedLightingBufferParameter).BaseIndex);
  }
  if ((param_3->IndirectLightingCacheParameter).BaseIndex != 0xffff) {
    if ((TVar4 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->IndirectLightingCacheParameter).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,(FRHIUniformBuffer *)TVar4,
               (uint)(param_3->IndirectLightingCacheParameter).BaseIndex);
  }
  if ((param_3->LightmapResourceCluster).BaseIndex != 0xffff) {
    if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->LightmapResourceCluster).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar6,(uint)(param_3->LightmapResourceCluster).BaseIndex);
  }
  return;
}

// GetPixelShaderBindings @ 144bc8490

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
FUniformLightMapPolicy::GetPixelShaderBindings
          (FPrimitiveSceneProxy *param_1,FLightCacheInterface **param_2,
          FUniformLightMapPolicyShaderParametersType *param_3,FMeshDrawSingleShaderBindings *param_4
          )

{
  FLightCacheInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar4;
  FRHIUniformBuffer *pFVar5;
  FRHIUniformBuffer *pFVar6;
  
  pFVar6 = (FRHIUniformBuffer *)0x0;
  pFVar1 = *param_2;
  if (pFVar1 != (FLightCacheInterface *)0x0) {
    pFVar5 = (pFVar1->PrecomputedLightingUniformBuffer).Reference;
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
      pFVar6 = (pFVar1->ResourceCluster->UniformBuffer).Reference;
    }
    if (pFVar5 != (FRHIUniformBuffer *)0x0) goto LAB_144bc856e;
  }
  pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
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
    pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
    if ((GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_144bc856e:
  if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
     (pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_,
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
    pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_;
    if ((GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_, bVar3)) {
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
  if ((param_3->PrecomputedLightingBufferParameter).BaseIndex != 0xffff) {
    if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->PrecomputedLightingBufferParameter).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar5,(uint)(param_3->PrecomputedLightingBufferParameter).BaseIndex);
  }
  if ((param_3->IndirectLightingCacheParameter).BaseIndex != 0xffff) {
    if ((TVar4 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->IndirectLightingCacheParameter).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,(FRHIUniformBuffer *)TVar4,
               (uint)(param_3->IndirectLightingCacheParameter).BaseIndex);
  }
  if ((param_3->LightmapResourceCluster).BaseIndex != 0xffff) {
    if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->LightmapResourceCluster).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar6,(uint)(param_3->LightmapResourceCluster).BaseIndex);
  }
  return;
}

// GetRayHitGroupShaderBindings @ 144bc8840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FUniformLightMapPolicy::GetRayHitGroupShaderBindings
          (FUniformLightMapPolicy *this,FPrimitiveSceneProxy *param_1,FLightCacheInterface *param_2,
          FUniformLightMapPolicyShaderParametersType *param_3,FMeshDrawSingleShaderBindings *param_4
          )

{
  code *pcVar1;
  bool bVar2;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar3;
  FRHIUniformBuffer *pFVar4;
  FRHIUniformBuffer *pFVar5;
  
  pFVar5 = (FRHIUniformBuffer *)0x0;
  if (param_2 != (FLightCacheInterface *)0x0) {
    pFVar4 = (param_2->PrecomputedLightingUniformBuffer).Reference;
    if (param_2->ResourceCluster != (FLightmapResourceCluster *)0x0) {
      if (((param_2->ResourceCluster->UniformBuffer).Reference == (FRHIUniformBuffer *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("LCI->GetResourceCluster()->UniformBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightMapRendering.cpp"
                             ,0x11a,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (param_2->ResourceCluster->UniformBuffer).Reference;
    }
    if (pFVar4 != (FRHIUniformBuffer *)0x0) goto LAB_144bc891b;
  }
  pFVar4 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
  if (GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
    if ((GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar4 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_, bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_144bc891b:
  if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
     (pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_,
     GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_;
    if ((GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar5 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_, bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((((param_1 == (FPrimitiveSceneProxy *)0x0) ||
       (param_1->PrimitiveSceneInfo == (FPrimitiveSceneInfo *)0x0)) ||
      (TVar3 = param_1->PrimitiveSceneInfo->IndirectLightingCacheUniformBuffer,
      TVar3 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0)) &&
     (TVar3 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
              GEmptyIndirectLightingCacheUniformBuffer._40_8_,
     GEmptyIndirectLightingCacheUniformBuffer._40_8_ == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TVar3 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
            GEmptyIndirectLightingCacheUniformBuffer._40_8_;
    if ((GEmptyIndirectLightingCacheUniformBuffer._40_8_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       TVar3 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)
               GEmptyIndirectLightingCacheUniformBuffer._40_8_, bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_3->PrecomputedLightingBufferParameter).BaseIndex != 0xffff) {
    if ((pFVar4 == (FRHIUniformBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((param_3->PrecomputedLightingBufferParameter).BaseIndex == 0xffff) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar4,(uint)(param_3->PrecomputedLightingBufferParameter).BaseIndex);
  }
  if ((param_3->IndirectLightingCacheParameter).BaseIndex != 0xffff) {
    if ((TVar3 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((param_3->IndirectLightingCacheParameter).BaseIndex == 0xffff) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,(FRHIUniformBuffer *)TVar3,
               (uint)(param_3->IndirectLightingCacheParameter).BaseIndex);
  }
  if ((param_3->LightmapResourceCluster).BaseIndex != 0xffff) {
    if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((param_3->LightmapResourceCluster).BaseIndex == 0xffff) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar5,(uint)(param_3->LightmapResourceCluster).BaseIndex);
  }
  return;
}

// GetVertexShaderBindings @ 144bcfe80

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
FUniformLightMapPolicy::GetVertexShaderBindings
          (FPrimitiveSceneProxy *param_1,FLightCacheInterface **param_2,
          FUniformLightMapPolicyShaderParametersType *param_3,FMeshDrawSingleShaderBindings *param_4
          )

{
  FLightCacheInterface *pFVar1;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar4;
  FRHIUniformBuffer *pFVar5;
  FRHIUniformBuffer *pFVar6;
  
  pFVar6 = (FRHIUniformBuffer *)0x0;
  pFVar1 = *param_2;
  if (pFVar1 != (FLightCacheInterface *)0x0) {
    pFVar5 = (pFVar1->PrecomputedLightingUniformBuffer).Reference;
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
      pFVar6 = (pFVar1->ResourceCluster->UniformBuffer).Reference;
    }
    if (pFVar5 != (FRHIUniformBuffer *)0x0) goto LAB_144bcff5e;
  }
  pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
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
    pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_;
    if ((GEmptyPrecomputedLightingUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar5 = (FRHIUniformBuffer *)GEmptyPrecomputedLightingUniformBuffer._40_8_, bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_144bcff5e:
  if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
     (pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_,
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
    pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_;
    if ((GDefaultLightmapResourceClusterUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""),
       pFVar6 = (FRHIUniformBuffer *)GDefaultLightmapResourceClusterUniformBuffer._40_8_, bVar3)) {
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
  if ((param_3->PrecomputedLightingBufferParameter).BaseIndex != 0xffff) {
    if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->PrecomputedLightingBufferParameter).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar5,(uint)(param_3->PrecomputedLightingBufferParameter).BaseIndex);
  }
  if ((param_3->IndirectLightingCacheParameter).BaseIndex != 0xffff) {
    if ((TVar4 == (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->IndirectLightingCacheParameter).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,(FRHIUniformBuffer *)TVar4,
               (uint)(param_3->IndirectLightingCacheParameter).BaseIndex);
  }
  if ((param_3->LightmapResourceCluster).BaseIndex != 0xffff) {
    if ((pFVar6 == (FRHIUniformBuffer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_3->LightmapResourceCluster).BaseIndex == 0xffff) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar6,(uint)(param_3->LightmapResourceCluster).BaseIndex);
  }
  return;
}

// ModifyCompilationEnvironment @ 144bd5280

void __cdecl
FUniformLightMapPolicy::ModifyCompilationEnvironment
          (ELightMapPolicyType param_1,FMaterialShaderPermutationParameters *param_2,
          FShaderCompilerEnvironment *param_3)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  FShaderCompilerEnvironment::SetDefine(param_3,L"MAX_NUM_LIGHTMAP_COEF",2);
  switch(param_1) {
  case LMP_NO_LIGHTMAP:
    uVar1 = (ushort)param_2->_padding_;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1) &&
        (FReadOnlyCVARCache::bAllowStaticLighting == false)) &&
       (bVar3 = MobileUseCSMShaderBranch(), bVar3)) {
      FShaderCompilerEnvironment::SetDefine(param_3,L"DIRECTIONAL_LIGHT_CSM",L"1");
      FShaderCompilerEnvironment::SetDefine(param_3,L"MOBILE_USE_CSM_BRANCH",L"1");
      return;
    }
    break;
  case LMP_PRECOMPUTED_IRRADIANCE_VOLUME_INDIRECT_LIGHTING:
    FShaderCompilerEnvironment::SetDefine(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",L"1");
    return;
  case LMP_CACHED_VOLUME_INDIRECT_LIGHTING:
    FShaderCompilerEnvironment::SetDefine(param_3,L"CACHED_VOLUME_INDIRECT_LIGHTING",L"1");
    return;
  case LMP_DISTANCE_FIELD_SHADOWS_AND_HQ_LIGHTMAP:
    FShaderCompilerEnvironment::SetDefine(param_3,L"STATICLIGHTING_TEXTUREMASK",1);
    FShaderCompilerEnvironment::SetDefine(param_3,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  case LMP_HQ_LIGHTMAP:
  case LMP_DUMMY:
    LightMapPolicyImpl::ModifyCompilationEnvironment(HQ_LIGHTMAP,param_2,param_3);
    return;
  case LMP_MOBILE_DISTANCE_FIELD_SHADOWS_AND_LQ_LIGHTMAP:
    FMobileDistanceFieldShadowsAndLQLightMapPolicy::ModifyCompilationEnvironment(param_2,param_3);
    return;
  case LMP_MOBILE_DISTANCE_FIELD_SHADOWS_LIGHTMAP_AND_CSM:
    FShaderCompilerEnvironment::SetDefine(param_3,L"DIRECTIONAL_LIGHT_CSM",L"1");
    FShaderCompilerEnvironment::SetDefine(param_3,L"STATICLIGHTING_TEXTUREMASK",1);
    FShaderCompilerEnvironment::SetDefine(param_3,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  case LMP_LQ_LIGHTMAP:
    LightMapPolicyImpl::ModifyCompilationEnvironment(LQ_LIGHTMAP,param_2,param_3);
    return;
  case LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_LIGHTMAP:
    FShaderCompilerEnvironment::SetDefine(param_3,L"DIRECTIONAL_LIGHT_CSM",L"1");
    LightMapPolicyImpl::ModifyCompilationEnvironment(LQ_LIGHTMAP,param_2,param_3);
    return;
  case LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_SH_INDIRECT:
    FShaderCompilerEnvironment::SetDefine(param_3,L"DIRECTIONAL_LIGHT_CSM",L"1");
  case LMP_CACHED_POINT_INDIRECT_LIGHTING:
  case LMP_MOBILE_DIRECTIONAL_LIGHT_AND_SH_INDIRECT:
    FShaderCompilerEnvironment::SetDefine(param_3,L"CACHED_POINT_INDIRECT_LIGHTING",L"1");
    return;
  case LMP_MOBILE_DIRECTIONAL_LIGHT_CSM:
    FShaderCompilerEnvironment::SetDefine(param_3,L"DIRECTIONAL_LIGHT_CSM",L"1");
    return;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightMapRendering.cpp"
                       ,0x1f5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ShouldCompilePermutation @ 144be3d10

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
FUniformLightMapPolicy::ShouldCompilePermutation
          (ELightMapPolicyType param_1,FMeshMaterialShaderPermutationParameters *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_1) {
  case LMP_NO_LIGHTMAP:
    return true;
  case LMP_PRECOMPUTED_IRRADIANCE_VOLUME_INDIRECT_LIGHTING:
  case LMP_CACHED_POINT_INDIRECT_LIGHTING:
    if (((param_2->_padding_ & 0x100000000) == 0) && (FReadOnlyCVARCache::bAllowStaticLighting)) {
      return true;
    }
    break;
  case LMP_CACHED_VOLUME_INDIRECT_LIGHTING:
    if (((((param_2->_padding_ & 0x100000000) == 0) &&
         (bVar2 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_2->_padding_), !bVar2))
        && (FReadOnlyCVARCache::bAllowStaticLighting != false)) &&
       (bVar2 = IsFeatureLevelSupported
                          ((FStaticShaderPlatform)(EShaderPlatform)param_2->_padding_,SM5), bVar2))
    {
      return true;
    }
    break;
  case LMP_LQ_LIGHTMAP:
    bVar2 = LightMapPolicyImpl::ShouldCompilePermutation(LQ_LIGHTMAP,param_2);
    return bVar2;
  case LMP_HQ_LIGHTMAP:
  case LMP_DISTANCE_FIELD_SHADOWS_AND_HQ_LIGHTMAP:
    bVar2 = LightMapPolicyImpl::ShouldCompilePermutation(HQ_LIGHTMAP,param_2);
    return bVar2;
  case LMP_MOBILE_DISTANCE_FIELD_SHADOWS_AND_LQ_LIGHTMAP:
    bVar2 = FMobileDistanceFieldShadowsAndLQLightMapPolicy::ShouldCompilePermutation(param_2);
    return bVar2;
  case LMP_MOBILE_DISTANCE_FIELD_SHADOWS_LIGHTMAP_AND_CSM:
    if (((!FReadOnlyCVARCache::bMobileDeferredShadingValue) || (!FReadOnlyCVARCache::bMobileHDR)) &&
       ((FReadOnlyCVARCache::bMobileEnableStaticAndCSMShadowReceivers &&
        (bVar2 = FMobileDistanceFieldShadowsAndLQLightMapPolicy::ShouldCompilePermutation(param_2),
        bVar2)))) {
      return true;
    }
    break;
  case LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_LIGHTMAP:
    if (((FReadOnlyCVARCache::bMobileDeferredShadingValue) && (FReadOnlyCVARCache::bMobileHDR)) &&
       ((param_2->_padding_ & 0x2000000000000) == 0)) {
      return false;
    }
    bVar2 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_2->_padding_);
    if (((!bVar2) || ((param_2->_padding_ & 0x2000000000000) != 0)) &&
       (bVar2 = LightMapPolicyImpl::ShouldCompilePermutation(LQ_LIGHTMAP,param_2), bVar2)) {
      return true;
    }
    break;
  case LMP_MOBILE_DIRECTIONAL_LIGHT_CSM_AND_SH_INDIRECT:
    if (((FReadOnlyCVARCache::bMobileDeferredShadingValue) && (FReadOnlyCVARCache::bMobileHDR)) &&
       ((param_2->_padding_ & 0x40000000000) == 0)) {
      return false;
    }
    if (!FReadOnlyCVARCache::bMobileEnableStaticAndCSMShadowReceivers) {
      return false;
    }
    bVar2 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_2->_padding_);
    if ((bVar2) && ((param_2->_padding_ & 0x2000000000000) == 0)) {
      return false;
    }
  case LMP_MOBILE_DIRECTIONAL_LIGHT_AND_SH_INDIRECT:
    if ((FReadOnlyCVARCache::bAllowStaticLighting != false) &&
       ((param_2->_padding_ & 0x100000000) == 0)) {
      return true;
    }
    break;
  case LMP_MOBILE_DIRECTIONAL_LIGHT_CSM:
    if (((((!FReadOnlyCVARCache::bMobileDeferredShadingValue) || (!FReadOnlyCVARCache::bMobileHDR))
         || ((param_2->_padding_ & 0x40000000000) != 0)) ||
        ((param_2->_padding_ & 0x2000000000000) != 0)) &&
       (((FReadOnlyCVARCache::bAllowStaticLighting || (bVar2 = MobileUseCSMShaderBranch(), !bVar2))
        && (((param_2->_padding_ & 0x100000000) == 0 &&
            ((bVar2 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_2->_padding_),
             !bVar2 || ((param_2->_padding_ & 0x2000000000000) != 0)))))))) {
      if (FReadOnlyCVARCache::bAllowStaticLighting == false) {
        return true;
      }
      if (FReadOnlyCVARCache::bMobileEnableStaticAndCSMShadowReceivers != false) {
        return true;
      }
    }
    break;
  case LMP_DUMMY:
    if (((param_2->_padding_ & 0x100000000) == 0) &&
       ((param_2->VertexFactoryType->Flags & SupportsStaticLighting) != None)) {
      return true;
    }
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightMapRendering.cpp"
                       ,0x1b8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

