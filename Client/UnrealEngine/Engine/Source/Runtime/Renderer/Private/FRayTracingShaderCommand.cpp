// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// SetRayTracingShaderBindings @ 1453a8210

void __thiscall
FRayTracingShaderCommand::SetRayTracingShaderBindings
          (FRayTracingShaderCommand *this,FRayTracingLocalShaderBindingWriter *param_1,
          TUniformBufferRef<FViewUniformShaderParameters> *param_2,FRHIUniformBuffer *param_3,
          FRHIUniformBuffer *param_4,uint param_5,uint param_6)

{
  TUniformBufferRef<FViewUniformShaderParameters> TVar1;
  FRHIUniformBuffer **ppFVar2;
  code *pcVar3;
  bool bVar4;
  FRayTracingLocalShaderBindings *pFVar5;
  
  pFVar5 = FMeshDrawShaderBindings::SetRayTracingShaderBindings
                     (&this->ShaderBindings,param_1,param_5,param_6,0,Transient);
  if ((this->ViewUniformBufferParameter).BaseIndex != 0xffff) {
    if (*param_2 == (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewUniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                         ,0x78,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TVar1 = *param_2;
    ppFVar2 = pFVar5->UniformBuffers;
    if ((this->ViewUniformBufferParameter).BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(TUniformBufferRef<FViewUniformShaderParameters> *)
     (ppFVar2 + (this->ViewUniformBufferParameter).BaseIndex) = TVar1;
  }
  if ((this->SceneUniformBufferParameter).BaseIndex != 0xffff) {
    if (param_3 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneUniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                         ,0x7e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2 = pFVar5->UniformBuffers;
    if ((this->SceneUniformBufferParameter).BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2[(this->SceneUniformBufferParameter).BaseIndex] = param_3;
  }
  if ((this->NaniteUniformBufferParameter).BaseIndex != 0xffff) {
    if (param_4 == (FRHIUniformBuffer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NaniteUniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                         ,0x84,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2 = pFVar5->UniformBuffers;
    if ((this->NaniteUniformBufferParameter).BaseIndex == 0xffff) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ppFVar2[(this->NaniteUniformBufferParameter).BaseIndex] = param_4;
  }
  return;
}

// SetShader @ 1453a8800

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
FRayTracingShaderCommand::SetShader
          (FRayTracingShaderCommand *this,TShaderRefBase<FShader,FShaderMapPointerTable> *param_1)

{
  int iVar1;
  uint uVar2;
  FShaderMapResource *pFVar3;
  FShader *pFVar4;
  code *pcVar5;
  bool bVar6;
  atomic<FRHIShader_*> aVar7;
  FShaderParametersMetadata *pFVar8;
  FHashedName FVar9;
  FShaderUniformBufferParameter *pFVar10;
  uint uVar11;
  FHashedName local_res8;
  FHashedName local_res10;
  FHashedName local_res18;
  FHashedName local_res20;
  FHashedName local_48;
  FHashedName local_40 [2];
  
  if (((*(byte *)&(param_1->ShaderContent->Target).field0_0x0 & 0xf) - 7 & 0xfd) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShader->GetFrequency() == SF_RayCallable || InShader->GetFrequency() == SF_RayMiss"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMeshDrawCommands.cpp"
                       ,0x8b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  aVar7 = (atomic<FRHIShader_*>)0x0;
  if (param_1->ShaderContent != (FShader *)0x0) {
    pFVar3 = (param_1->ShaderMap->Resource).Reference;
    if (pFVar3 == (FShaderMapResource *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar1 = param_1->ShaderContent->ResourceIndex;
    aVar7 = (pFVar3->RHIShaders).Ptr[iVar1];
    if (aVar7 == (atomic<FRHIShader_*>)0x0) {
      aVar7 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(pFVar3,iVar1,true);
    }
  }
  this->Shader = (FRHIRayTracingShader *)aVar7;
  pFVar3 = (param_1->ShaderMap->Resource).Reference;
  if (pFVar3 == (FShaderMapResource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x426,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar2 = param_1->ShaderContent->ResourceIndex;
  if ((pFVar3->RHIShaders).Ptr[(int)uVar2] == (atomic<FRHIShader_*>)0x0) {
    FShaderMapResource::CreateShaderOrCrash(pFVar3,uVar2,true);
  }
  uVar11 = 0;
  if ((int)uVar2 < (pFVar3->RayTracingLibraryIndices).ArrayNum) {
    uVar11 = ~uVar2 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->ShaderIndex =
       *(uint *)((pFVar3->RayTracingLibraryIndices).AllocatorInstance.Data +
                (longlong)(int)uVar2 * 4);
  pFVar4 = param_1->ShaderContent;
  pFVar8 = FViewUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar8->ShaderVariableHashedName);
  FVar9.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar10 = FShader::GetUniformBufferParameter(pFVar4,FVar9);
  (this->ViewUniformBufferParameter).BaseIndex = pFVar10->BaseIndex;
  pFVar4 = param_1->ShaderContent;
  pFVar8 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  FHashedName::FHashedName(&local_res10,&pFVar8->ShaderVariableHashedName);
  FVar9.Hash = (ulong64)FHashedName::FHashedName(&local_48,&local_res10);
  pFVar10 = FShader::GetUniformBufferParameter(pFVar4,FVar9);
  (this->SceneUniformBufferParameter).BaseIndex = pFVar10->BaseIndex;
  pFVar4 = param_1->ShaderContent;
  pFVar8 = FNaniteRayTracingUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_res18,&pFVar8->ShaderVariableHashedName);
  FVar9.Hash = (ulong64)FHashedName::FHashedName(local_40,&local_res18);
  pFVar10 = FShader::GetUniformBufferParameter(pFVar4,FVar9);
  (this->NaniteUniformBufferParameter).BaseIndex = pFVar10->BaseIndex;
  FMeshDrawShaderBindings::Initialize(&this->ShaderBindings,param_1);
  return;
}

