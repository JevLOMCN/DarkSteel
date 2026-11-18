// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Init @ 14532e7c0

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

void __thiscall
FRayTracingCullingParameters::Init(FRayTracingCullingParameters *this,FViewInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  int iVar9;
  ECullingMode EVar10;
  float fVar11;
  
  pTVar6 = CVarRayTracingCulling.Ref;
  if ((*(byte *)(param_1->_padding_ + 0x60) & 1) == 0) {
    bVar8 = IsInParallelRenderingThread();
    if (!bVar8) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = 3;
    if (pTVar6->ShadowedValue[1] < 3) {
      iVar9 = pTVar6->ShadowedValue[1];
    }
    EVar10 = Disabled;
    if (0 < iVar9) {
      EVar10 = (ECullingMode)iVar9;
    }
  }
  else {
    EVar10 = Disabled;
  }
  this->CullingMode = EVar10;
  pTVar7 = CVarRayTracingCullingRadius.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->CullingRadius = pTVar7->ShadowedValue[1];
  fVar11 = Lumen::GetFarFieldMaxTraceDistance();
  this->FarFieldCullingRadius = fVar11;
  pTVar7 = CVarRayTracingCullingAngle.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar11 = pTVar7->ShadowedValue[1];
  this->CullAngleThreshold = fVar11;
  if (__real_42b3fae1 <= fVar11) {
    fVar11 = __real_42b3fae1;
  }
  fVar11 = tanf(fVar11 * __real_3c8efa36);
  this->AngleThresholdRatio = fVar11;
  this->AngleThresholdRatioSq = fVar11 * fVar11;
  dVar1 = (double)param_1->_padding_;
  (this->ViewOrigin).field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->ViewOrigin).field0_0x0._s_0.Y = dVar1;
  (this->ViewOrigin).field0_0x0._s_0.Z = (double)param_1->_padding_;
  dVar1 = (double)param_1->_padding_;
  dVar2 = (this->ViewOrigin).field0_0x0._s_0.Y;
  dVar3 = (double)param_1->_padding_;
  dVar4 = (this->ViewOrigin).field0_0x0._s_0.Z;
  (this->TranslatedViewOrigin).field0_0x0._s_0.X =
       (float)((double)param_1->_padding_ + (this->ViewOrigin).field0_0x0._s_0.X);
  (this->TranslatedViewOrigin).field0_0x0._s_0.Y = (float)(dVar1 + dVar2);
  (this->TranslatedViewOrigin).field0_0x0._s_0.Z = (float)(dVar3 + dVar4);
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  (this->ViewDirection).field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->ViewDirection).field0_0x0._s_0.Y = dVar1;
  (this->ViewDirection).field0_0x0._s_0.Z = dVar2;
  EVar10 = this->CullingMode;
  if ((EVar10 == DistanceAndSolidAngle) || (EVar10 == DistanceOrSolidAngle)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  this->bCullAllObjects = bVar8;
  this->bCullByRadiusOrDistance = EVar10 == DistanceOrSolidAngle;
  bVar8 = Lumen::UseFarField((FSceneViewFamily *)param_1->_padding_);
  if (!bVar8) {
    bVar8 = MegaLights::UseFarField((FSceneViewFamily *)param_1->_padding_);
    if (!bVar8) goto LAB_14532e9a4;
  }
  bVar8 = true;
LAB_14532e9a4:
  this->bIsRayTracingFarField = bVar8;
  pTVar6 = CVarRayTracingCullingGroupIds.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->bCullUsingGroupIds = pTVar6->ShadowedValue[1] != 0;
  pTVar6 = CVarRayTracingCullingUseMinDrawDistance.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->bCullMinDrawDistance = pTVar6->ShadowedValue[1] != 0;
  pTVar6 = CVarRayTracingCullingPerInstance.Ref;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((pTVar6->ShadowedValue[1] == 0) || (this->bCullAllObjects == false)) {
    this->bUseInstanceCulling = false;
  }
  else {
    this->bUseInstanceCulling = true;
  }
  return;
}

