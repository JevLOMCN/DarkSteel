// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 6

// TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS> @ 14e9d7e80

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

TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS> * __thiscall
TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS>::
TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS>
          (TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS> *this
          ,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::FDimWeightedMultiplicationType,NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::FDimAddConstantFeatureDim,NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::FDimOptimizeTargetMatrixMultiplication,NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::FDimNumFeature,NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::FDimUseSamplingStep,NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::FDimensionWeightLayout>
          *param_2)

{
  EWeightedMultiplicationType EVar1;
  bool bVar2;
  ENonLocalMeanWeightLayout EVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS> *pTVar8;
  FShaderType *pFVar9;
  FName this_00;
  int iVar10;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  EVar1 = param_2->DimensionValue;
  if ((Generalized < EVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS> *)
             (*pcVar4)();
    return pTVar8;
  }
  bVar5 = (param_2->Tail).DimensionValue;
  iVar10 = (param_2->Tail).Tail.Tail.DimensionValue + -6;
  bVar2 = (param_2->Tail).Tail.DimensionValue;
  if (((2 < iVar10) || (iVar10 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS> *)
             (*pcVar4)();
    return pTVar8;
  }
  bVar6 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  EVar3 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  if (((3 < (int)EVar3) || ((int)EVar3 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS> *)
             (*pcVar4)();
    return pTVar8;
  }
  pFVar9 = (FShaderType *)
           NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_48,pFVar9,
             (-(uint)(bVar5 != false) & 2) +
             (-(uint)(bVar2 != false) & 4) + (uint)EVar1 +
             iVar10 * 8 + ((uint)(bVar6 != false) + EVar3 * 2) * 0x18);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TShaderMapRef<NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  NFORDenoise::RegressionKernel::FInPlaceBatchedMatrixMultiplicationCS::GetStaticType();
  *(FShader **)this = local_48.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_48.ShaderMap;
  return this;
}

// TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS> @ 14e9d8060

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

TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS> * __thiscall
TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS>::
TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS>
          (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS>
           *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS::FDimInputMatrixType>
          *param_2)

{
  EInputMatrixType EVar1;
  code *pcVar2;
  bool bVar3;
  TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS> *pTVar4;
  FShaderType *pFVar5;
  FName this_00;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  FString local_18;
  
  EVar1 = param_2->DimensionValue;
  if (((1 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS>
              *)(*pcVar2)();
    return pTVar4;
  }
  pFVar5 = (FShaderType *)
           NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS::GetStaticType();
  FGlobalShaderMap::GetShader(param_1,&local_28,pFVar5,EVar1);
  if (local_28.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_18);
    NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  NFORDenoise::RegressionKernel::FLinearSolverBuildIndirectDispatchArgsCS::GetStaticType();
  *(FShader **)this = local_28.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_28.ShaderMap;
  return this;
}

// TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> @ 14e9d8180

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

TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> * __thiscall
TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS>::
TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS>
          (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> *this,
          FGlobalShaderMap *param_1,
          TShaderPermutationDomain<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS::FDimNumFeature,NFORDenoise::RegressionKernel::FLinearSolverIndirectCS::FDimSolverType,NFORDenoise::RegressionKernel::FLinearSolverIndirectCS::FDimInputMatrixType,NFORDenoise::RegressionKernel::FLinearSolverIndirectCS::FDimOutputIndices>
          *param_2)

{
  ESolverType EVar1;
  EInputMatrixType EVar2;
  code *pcVar3;
  bool bVar4;
  TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> *pTVar5;
  FShaderType *pFVar6;
  FName this_00;
  int iVar7;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  iVar7 = param_2->DimensionValue + -6;
  if (((2 < iVar7) || (iVar7 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> *)(*pcVar3)();
    return pTVar5;
  }
  EVar1 = (param_2->Tail).DimensionValue;
  if (((2 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> *)(*pcVar3)();
    return pTVar5;
  }
  EVar2 = (param_2->Tail).Tail.DimensionValue;
  if (((1 < (int)EVar2) || ((int)EVar2 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> *)(*pcVar3)();
    return pTVar5;
  }
  bVar4 = (param_2->Tail).Tail.Tail.DimensionValue;
  pFVar6 = (FShaderType *)NFORDenoise::RegressionKernel::FLinearSolverIndirectCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_38,pFVar6,
             iVar7 + (EVar1 + ((-(uint)(bVar4 != false) & 2) + EVar2) * 3) * 3);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    NFORDenoise::RegressionKernel::FLinearSolverIndirectCS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TShaderMapRef<NFORDenoise::RegressionKernel::FLinearSolverIndirectCS> *)(*pcVar3)();
      return pTVar5;
    }
  }
  NFORDenoise::RegressionKernel::FLinearSolverIndirectCS::GetStaticType();
  *(FShader **)this = local_38.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_38.ShaderMap;
  return this;
}

// TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> @ 14e9d8340

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

TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> * __thiscall
TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS>::
TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS>
          (TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<NFORDenoise::FNonLocalMeanFilteringCS::FDimensionVarianceType,NFORDenoise::FNonLocalMeanFilteringCS::FDimensionUseGuide,NFORDenoise::FNonLocalMeanFilteringCS::FDimensionImageChannelCount,NFORDenoise::FNonLocalMeanFilteringCS::FDimPreAlbedoDivide,NFORDenoise::FNonLocalMeanFilteringCS::FDimWeightLayout>
          *param_2)

{
  EVarianceType EVar1;
  EAlbedoDivideRecoverPhase EVar2;
  ENonLocalMeanWeightLayout EVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> *pTVar7;
  FShaderType *pFVar8;
  FName this_00;
  int iVar9;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  EVar1 = param_2->DimensionValue;
  if (((2 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> *)(*pcVar4)();
    return pTVar7;
  }
  bVar5 = (param_2->Tail).DimensionValue;
  iVar9 = (param_2->Tail).Tail.DimensionValue + -1;
  if (((3 < iVar9) || (iVar9 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> *)(*pcVar4)();
    return pTVar7;
  }
  EVar2 = (param_2->Tail).Tail.Tail.DimensionValue;
  if (((2 < (int)EVar2) || ((int)EVar2 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> *)(*pcVar4)();
    return pTVar7;
  }
  EVar3 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  if (((3 < (int)EVar3) || ((int)EVar3 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar8 = (FShaderType *)NFORDenoise::FNonLocalMeanFilteringCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_48,pFVar8,
             (-(uint)(bVar5 != false) & 3) + EVar1 + (iVar9 + (EVar3 + EVar2 + EVar3 * 2) * 4) * 6);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    NFORDenoise::FNonLocalMeanFilteringCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TShaderMapRef<NFORDenoise::FNonLocalMeanFilteringCS> *)(*pcVar4)();
      return pTVar7;
    }
  }
  NFORDenoise::FNonLocalMeanFilteringCS::GetStaticType();
  *(FShader **)this = local_48.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_48.ShaderMap;
  return this;
}

// TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> @ 14e9d8540

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

TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> * __thiscall
TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS>::
TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS>
          (TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> *this,FGlobalShaderMap *param_1,
          TShaderPermutationDomain<NFORDenoise::FNonLocalMeanWeightsCS::FDimensionVarianceType,NFORDenoise::FNonLocalMeanWeightsCS::FDimensionUseGuide,NFORDenoise::FNonLocalMeanWeightsCS::FDimensionImageChannelCount,NFORDenoise::FNonLocalMeanWeightsCS::FDimensionSeparateSourceTarget,NFORDenoise::FNonLocalMeanWeightsCS::FDimPreAlbedoDivide,NFORDenoise::FNonLocalMeanWeightsCS::FDimTargetWeightLayout>
          *param_2)

{
  EVarianceType EVar1;
  EAlbedoDivideRecoverPhase EVar2;
  ENonLocalMeanWeightLayout EVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> *pTVar8;
  FShaderType *pFVar9;
  FName this_00;
  int iVar10;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  FString local_38;
  
  EVar1 = param_2->DimensionValue;
  if (((2 < (int)EVar1) || ((int)EVar1 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> *)(*pcVar4)();
    return pTVar8;
  }
  bVar5 = (param_2->Tail).DimensionValue;
  iVar10 = (param_2->Tail).Tail.DimensionValue + -1;
  if (((3 < iVar10) || (iVar10 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> *)(*pcVar4)();
    return pTVar8;
  }
  EVar2 = (param_2->Tail).Tail.Tail.Tail.DimensionValue;
  bVar6 = (param_2->Tail).Tail.Tail.DimensionValue;
  if (((2 < (int)EVar2) || ((int)EVar2 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> *)(*pcVar4)();
    return pTVar8;
  }
  EVar3 = (param_2->Tail).Tail.Tail.Tail.Tail.DimensionValue;
  if (((3 < (int)EVar3) || ((int)EVar3 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar9 = (FShaderType *)NFORDenoise::FNonLocalMeanWeightsCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_48,pFVar9,
             (-(uint)(bVar5 != false) & 3) + EVar1 +
             ((-(uint)(bVar6 != false) & 4) + iVar10 + (EVar3 + EVar2 + EVar3 * 2) * 8) * 6);
  if (local_48.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_38);
    NFORDenoise::FNonLocalMeanWeightsCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TShaderMapRef<NFORDenoise::FNonLocalMeanWeightsCS> *)(*pcVar4)();
      return pTVar8;
    }
  }
  NFORDenoise::FNonLocalMeanWeightsCS::GetStaticType();
  *(FShader **)this = local_48.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_48.ShaderMap;
  return this;
}

// TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> @ 14e9d8750

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

TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> * __thiscall
TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage>::
TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage>
          (TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> *this,
          FGlobalShaderMap *param_1,
          TShaderPermutationDomain<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage::FDimReconstructionType,NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage::FDimPreAlbedoDivide,NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage::FDimNumFeature,NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage::FDimensionWeightLayout>
          *param_2)

{
  EReconstructionType EVar1;
  EAlbedoDivideRecoverPhase EVar2;
  ENonLocalMeanWeightLayout EVar3;
  code *pcVar4;
  bool bVar5;
  TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> *pTVar6;
  FShaderType *pFVar7;
  FName this_00;
  int iVar8;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  FString local_28;
  
  EVar1 = param_2->DimensionValue;
  if ((Gather < EVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> *)
             (*pcVar4)();
    return pTVar6;
  }
  EVar2 = (param_2->Tail).DimensionValue;
  if (((2 < (int)EVar2) || ((int)EVar2 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> *)
             (*pcVar4)();
    return pTVar6;
  }
  iVar8 = (param_2->Tail).Tail.DimensionValue + -6;
  if (((2 < iVar8) || (iVar8 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> *)
             (*pcVar4)();
    return pTVar6;
  }
  EVar3 = (param_2->Tail).Tail.Tail.DimensionValue;
  if (((3 < (int)EVar3) || ((int)EVar3 < 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> *)
             (*pcVar4)();
    return pTVar6;
  }
  pFVar7 = (FShaderType *)
           NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage::GetStaticType();
  FGlobalShaderMap::GetShader
            (param_1,&local_38,pFVar7,(uint)EVar1 + EVar2 * 2 + (iVar8 + EVar3 * 3) * 6);
  if (local_38.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_00,&local_28);
    NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TShaderMapRef<NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  NFORDenoise::RegressionKernel::FReconstructSpatialTemporalImage::GetStaticType();
  *(FShader **)this = local_38.ShaderContent;
  *(FShaderMapBase **)&this->field_0x8 = local_38.ShaderMap;
  return this;
}

