// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// InternalDestroy @ 144780230

void __cdecl
FSelfShadowedTranslucencyPolicy::ComputeParametersType::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined2 *)param_1 = 0xfefe;
  return;
}

// InternalDestroy @ 144780840

void __cdecl
FSelfShadowedTranslucencyPolicy::PixelParametersType::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined2 *)param_1 = 0xfefe;
  return;
}

// InternalDestroy @ 144780870

void __cdecl
FSelfShadowedTranslucencyPolicy::VertexParametersType::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined1 *)param_1 = 0xfe;
  return;
}

// FSelfShadowedTranslucencyPolicy @ 144b98270

FSelfShadowedTranslucencyPolicy * __thiscall
FSelfShadowedTranslucencyPolicy::FSelfShadowedTranslucencyPolicy
          (FSelfShadowedTranslucencyPolicy *this)

{
  return this;
}

// GetComputeShaderBindings @ 144bc4410

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
FSelfShadowedTranslucencyPolicy::GetComputeShaderBindings
          (FPrimitiveSceneProxy *param_1,FRHIUniformBuffer **param_2,ComputeParametersType *param_3,
          FMeshDrawSingleShaderBindings *param_4)

{
  FRHIUniformBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_3->TranslucentSelfShadowBufferParameter).BaseIndex != 0xffff) {
    pFVar1 = *param_2;
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_3->TranslucentSelfShadowBufferParameter).BaseIndex == 0xffff) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar1,(uint)(param_3->TranslucentSelfShadowBufferParameter).BaseIndex);
  }
  return;
}

// GetPixelShaderBindings @ 144bc8060

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
FSelfShadowedTranslucencyPolicy::GetPixelShaderBindings
          (FPrimitiveSceneProxy *param_1,FRHIUniformBuffer **param_2,PixelParametersType *param_3,
          FMeshDrawSingleShaderBindings *param_4)

{
  FRHIUniformBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_3->TranslucentSelfShadowBufferParameter).BaseIndex != 0xffff) {
    pFVar1 = *param_2;
    if (pFVar1 == (FRHIUniformBuffer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_3->TranslucentSelfShadowBufferParameter).BaseIndex == 0xffff) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_4,pFVar1,(uint)(param_3->TranslucentSelfShadowBufferParameter).BaseIndex);
  }
  return;
}

// GetVertexShaderBindings @ 144bcfe70

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
FSelfShadowedTranslucencyPolicy::GetVertexShaderBindings
          (FPrimitiveSceneProxy *param_1,FRHIUniformBuffer **param_2,VertexParametersType *param_3,
          FMeshDrawSingleShaderBindings *param_4)

{
  return;
}

// ModifyCompilationEnvironment @ 144bd5220

void __cdecl
FSelfShadowedTranslucencyPolicy::ModifyCompilationEnvironment
          (FMaterialShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  FShaderCompilerEnvironment::SetDefine(param_2,L"TRANSLUCENT_SELF_SHADOWING",L"1");
  return;
}

// ShouldCompilePermutation @ 144be3c50

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
FSelfShadowedTranslucencyPolicy::ShouldCompilePermutation
          (FMeshMaterialShaderPermutationParameters *param_1)

{
  bool bVar1;
  
  if ((param_1->_padding_ & 0x100000000) == 0) {
    bVar1 = IsTranslucentBlendMode((FMaterialShaderParameters *)&param_1->_padding_);
    if (bVar1) {
      bVar1 = IsFeatureLevelSupported
                        ((FStaticShaderPlatform)(EShaderPlatform)param_1->_padding_,SM5);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

