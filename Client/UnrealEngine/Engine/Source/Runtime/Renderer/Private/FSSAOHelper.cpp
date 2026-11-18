// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// ComputeAmbientOcclusionPassCount @ 144742550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __cdecl FSSAOHelper::ComputeAmbientOcclusionPassCount(FViewInfo *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FStaticShaderPlatform FVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  pTVar3 = CVarAmbientOcclusionLevels.Ref;
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  pTVar2 = CVarAmbientOcclusionCompute.Ref;
  uVar6 = pTVar3->ShadowedValue[1];
  if (2 < (int)param_1->_padding_) {
    bVar4 = IsInParallelGameThread();
    if (bVar4) {
LAB_1447425d0:
      lVar7 = 0;
    }
    else {
      bVar4 = IsInGameThread();
      lVar7 = 4;
      if (bVar4) goto LAB_1447425d0;
    }
    if (0 < *(int *)((longlong)pTVar2->ShadowedValue + lVar7)) goto LAB_144742634;
  }
  FVar5.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_1);
  bVar4 = IsForwardShadingEnabled(FVar5);
  if (!bVar4) {
    fVar9 = GetAmbientOcclusionQualityRT((FSceneView *)param_1);
    uVar8 = (__real_420c0000 < fVar9) + 1 + (uint)(__real_428c0000 < fVar9);
    if (-1 < (int)uVar6) {
      uVar8 = uVar6;
    }
    uVar6 = 3;
    if (uVar8 < 3) {
      uVar6 = uVar8;
    }
    return uVar6;
  }
LAB_144742634:
  if ((int)uVar6 < 0) {
    uVar6 = 1;
  }
  return (uint)(uVar6 != 0);
}

// GetAmbientOcclusionAsyncComputeBudget @ 14475b9b0

EAsyncComputeBudget __cdecl FSSAOHelper::GetAmbientOcclusionAsyncComputeBudget(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  EAsyncComputeBudget EVar4;
  EAsyncComputeBudget EVar5;
  
  pTVar2 = CVarAmbientOcclusionAsyncComputeBudget.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
  }
  EVar4 = EAll_4;
  if (pTVar2->ShadowedValue[1] < 4) {
    EVar4 = pTVar2->ShadowedValue[1];
  }
  EVar5 = ELeast_0;
  if (0 < (int)EVar4) {
    EVar5 = EVar4;
  }
  return EVar5;
}

// GetAmbientOcclusionQualityRT @ 14475ba20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __cdecl FSSAOHelper::GetAmbientOcclusionQualityRT(FSceneView *param_1)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  pTVar2 = CVarAmbientOcclusionMaxQuality.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = pTVar2->ShadowedValue[1];
  if (fVar4 < 0.0) {
    fVar5 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
    if (__real_42c80000 <= (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000)) {
      fVar5 = __real_42c80000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    return fVar5;
  }
  fVar5 = *(float *)&(param_1->FinalPostProcessSettings).field_0x624;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  return fVar5;
}

// GetAmbientOcclusionShaderLevel @ 14475bac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __cdecl FSSAOHelper::GetAmbientOcclusionShaderLevel(FSceneView *param_1)

{
  float fVar1;
  
  fVar1 = GetAmbientOcclusionQualityRT(param_1);
  return (uint)(__real_42960000 < fVar1) + (uint)(__real_425c0000 < fVar1) +
         (uint)(__real_41c80000 < fVar1) + (uint)(__real_40a00000 < fVar1);
}

// GetAmbientOcclusionStepMipLevelFactor @ 14475bb10

float __cdecl FSSAOHelper::GetAmbientOcclusionStepMipLevelFactor(void)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  float fVar4;
  
  pTVar2 = CVarAmbientOcclusionStepMipLevelFactor.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return pTVar2->ShadowedValue[1];
}

// GetGTAOPassType @ 14475e240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

EGTAOType __cdecl FSSAOHelper::GetGTAOPassType(FViewInfo *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  EGTAOType EVar7;
  
  pTVar4 = CVarAmbientOcclusionMethod.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      EVar7 = (*pcVar3)();
      return EVar7;
    }
  }
  pTVar5 = CVarGTAOUseNormals.Ref;
  iVar1 = pTVar4->ShadowedValue[1];
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      EVar7 = (*pcVar3)();
      return EVar7;
    }
  }
  iVar2 = pTVar5->ShadowedValue[1];
  if (iVar1 == 1) {
    bVar6 = IsAmbientOcclusionAsyncCompute(param_1,param_2);
    if (bVar6) {
      EVar7 = (iVar2 != 0) + EAsyncCombinedSpatial;
    }
    else {
      EVar7 = ENonAsync;
    }
  }
  else {
    EVar7 = EOff;
  }
  return EVar7;
}

// GetNumAmbientOcclusionLevels @ 14475eab0

int __cdecl FSSAOHelper::GetNumAmbientOcclusionLevels(void)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  
  pTVar2 = CVarAmbientOcclusionLevels.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return pTVar2->ShadowedValue[1];
}

// IsAmbientOcclusionAsyncCompute @ 1447808c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FSSAOHelper::IsAmbientOcclusionAsyncCompute(FViewInfo *param_1,uint param_2)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  pTVar2 = CVarAmbientOcclusionCompute.Ref;
  if ((int)param_1->_padding_ < 3) {
    return false;
  }
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 4;
  }
  pTVar3 = CVarAmbientOcclusionCompute.Ref;
  if ((0 < *(int *)((longlong)pTVar2->ShadowedValue + lVar6)) && (param_2 == 1)) {
    bVar4 = IsInParallelRenderingThread();
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (1 < pTVar3->ShadowedValue[1]) {
      uVar5 = GRHIGlobals.SupportsEfficientAsyncCompute;
      if (pTVar3->ShadowedValue[1] == 3) {
        uVar5 = 1;
      }
      return (bool)uVar5;
    }
  }
  return false;
}

// IsAmbientOcclusionCompute @ 144780980

bool __cdecl FSSAOHelper::IsAmbientOcclusionCompute(Type param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarAmbientOcclusionCompute.Ref;
  if ((int)param_1 < 3) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) < 1) {
    return false;
  }
  return true;
}

// IsBasePassAmbientOcclusionRequired @ 1447809d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __cdecl FSSAOHelper::IsBasePassAmbientOcclusionRequired(FViewInfo *param_1)

{
  float *pfVar1;
  bool bVar2;
  FStaticShaderPlatform FVar3;
  
  pfVar1 = (float *)((longlong)&param_1->_padding_ + 4);
  if (__real_3c23d70a < *pfVar1 || __real_3c23d70a == *pfVar1) {
    FVar3.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_1);
    bVar2 = IsUsingGBuffers(FVar3);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

