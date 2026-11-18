// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// GetShaderBindings @ 144f135a0

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
TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>::GetShaderBindings
          (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *this,FScene *param_1,
          FGenericStaticFeatureLevel param_2,FPrimitiveSceneProxy *param_3,
          FMaterialRenderProxy *param_4,FMaterial *param_5,
          TMobileBasePassShaderElementData<FUniformLightMapPolicy> *param_6,
          FMeshDrawSingleShaderBindings *param_7)

{
  byte bVar1;
  FReflectionCaptureProxy *pFVar2;
  FTexture *pFVar3;
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> TVar4;
  int iVar5;
  code *pcVar6;
  FMeshDrawSingleShaderBindings *pFVar7;
  FMeshDrawSingleShaderBindings *this_00;
  bool bVar8;
  int iVar9;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> TVar10;
  FUniformLightMapPolicyShaderParametersType *pFVar11;
  undefined4 local_res8;
  ushort local_resc;
  
  this_00 = param_7;
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)this,param_1,param_2.FeatureLevel,param_3,param_4,param_5,
             (FMeshMaterialShaderElementData *)param_6,param_7);
  pFVar11 = (FUniformLightMapPolicyShaderParametersType *)&this->field_0x108;
  if (this == (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
    pFVar11 = (FUniformLightMapPolicyShaderParametersType *)0x0;
  }
  FUniformLightMapPolicy::GetPixelShaderBindings
            (param_3,&param_6->LightMapPolicyElementData,pFVar11,this_00);
  pFVar7 = param_7;
  if ((this->ReflectionParameter).BaseIndex == 0xffff) goto LAB_144f137a1;
  if (param_1 == (FScene *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6374231719284833583>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MobileBasePass.cpp"
                       ,0x2d1,"!ReflectionParameter.IsBound()");
    pFVar7 = param_7;
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    goto LAB_144f137a1;
  }
  if (GDefaultMobileReflectionCaptureUniformBuffer._40_8_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GDefaultMobileReflectionCaptureUniformBuffer._40_8_ == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferRHI.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                         ,0x66,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  TVar10 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)
           GDefaultMobileReflectionCaptureUniformBuffer._40_8_;
  if (((param_3 == (FPrimitiveSceneProxy *)0x0) ||
      (param_3->PrimitiveSceneInfo == (FPrimitiveSceneInfo *)0x0)) ||
     (pFVar2 = param_3->PrimitiveSceneInfo->CachedReflectionCaptureProxy,
     pFVar2 == (FReflectionCaptureProxy *)0x0)) {
    if (param_1->SkyLight != (FSkyLightSceneProxy *)0x0) {
      pFVar3 = param_1->SkyLight->ProcessedTexture;
      if ((pFVar3 == (FTexture *)0x0) || ((pFVar3->TextureRHI).Reference == (FRHITexture *)0x0)) {
        bVar8 = FScene::CanSampleSkyLightRealTimeCaptureData(param_1);
        if (!bVar8) goto LAB_144f136ef;
      }
      TVar10 = (param_1->UniformBuffers).MobileSkyReflectionUniformBuffer;
    }
  }
  else {
    TVar10 = pFVar2->MobileUniformBuffer;
  }
LAB_144f136ef:
  pFVar7 = param_7;
  if ((this->ReflectionParameter).BaseIndex != 0xffff) {
    if (TVar10 == (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((this->ReflectionParameter).BaseIndex == 0xffff) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,(FRHIUniformBuffer *)TVar10,(uint)(this->ReflectionParameter).BaseIndex);
    pFVar7 = param_7;
  }
LAB_144f137a1:
  param_7._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  if (((this->MobileDirectionLightBufferParam).BaseIndex != 0xffff) && (param_1 != (FScene *)0x0)) {
    if (param_3 == (FPrimitiveSceneProxy *)0x0) {
      iVar9 = 0;
    }
    else {
      bVar1 = param_3->LightingChannelMask;
      if (bVar1 == 0) {
        iVar9 = 0;
      }
      else {
        iVar5 = 0;
        if (bVar1 != 0) {
          for (; (bVar1 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        iVar9 = 0x20;
        if (bVar1 != 0) {
          iVar9 = iVar5;
        }
        iVar9 = iVar9 + 1;
      }
    }
    TVar4 = (param_1->UniformBuffers).MobileDirectionalLightUniformBuffers[iVar9];
    param_7 = pFVar7;
    if (TVar4 == (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((this->MobileDirectionLightBufferParam).BaseIndex == 0xffff) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (this_00,(FRHIUniformBuffer *)TVar4,
               (uint)(this->MobileDirectionLightBufferParam).BaseIndex);
  }
  if ((this->UseCSMParameter).NumBytes != 0) {
    local_res8._0_2_ = (this->UseCSMParameter).BufferIndex;
    local_res8._2_2_ = (this->UseCSMParameter).BaseIndex;
    local_resc = (this->UseCSMParameter).NumBytes;
    param_7._0_4_ = (uint)(param_6->bCanReceiveCSM != false);
    FMeshDrawSingleShaderBindings::Add<int>(this_00,SUB86(&local_res8,0),(int *)&param_7);
  }
  return;
}

// InternalDestroy @ 144fc9ee0

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<4>_>::InternalDestroy
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

// InternalDestroy @ 144fc9f20

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<7>_>::InternalDestroy
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

// InternalDestroy @ 144fc9f60

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<8>_>::InternalDestroy
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

// InternalDestroy @ 144fc9fa0

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<9>_>::InternalDestroy
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

// InternalDestroy @ 144fc9fe0

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<10>_>::InternalDestroy
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

// InternalDestroy @ 144fca020

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<0>_>::InternalDestroy
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

// InternalDestroy @ 144fca060

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<11>_>::InternalDestroy
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

// InternalDestroy @ 144fca0a0

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
TMobileBasePassPSPolicyParamType<TUniformLightMapPolicy<12>_>::InternalDestroy
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

