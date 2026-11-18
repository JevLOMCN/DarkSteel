// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FFilterStaticMeshesForViewData @ 14551e260

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

FFilterStaticMeshesForViewData * __thiscall
FFilterStaticMeshesForViewData::FFilterStaticMeshesForViewData
          (FFilterStaticMeshesForViewData *this,FViewInfo *param_1)

{
  code *pcVar1;
  double dVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  FStaticShaderPlatform FVar5;
  int iVar6;
  FFilterStaticMeshesForViewData *pFVar7;
  
  dVar2 = (double)param_1->_padding_;
  (this->ViewOrigin).field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->ViewOrigin).field0_0x0._s_0.Y = dVar2;
  (this->ViewOrigin).field0_0x0._s_0.Z = (double)param_1->_padding_;
  if (*(int *)(param_1->_padding_ + 0x50) < 0) {
    iVar6 = GetCVarForceLOD();
  }
  else {
    iVar6 = 0;
  }
  this->ForcedLODLevel = iVar6;
  pTVar3 = CVarStaticMeshLODDistanceScale.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FFilterStaticMeshesForViewData *)(*pcVar1)();
      return pFVar7;
    }
  }
  this->LODScale = *(float *)&param_1->_padding_ * pTVar3->ShadowedValue[1];
  this->MinScreenRadiusForDepthPrepassSquared =
       GMinScreenRadiusForDepthPrepass * GMinScreenRadiusForDepthPrepass;
  FVar5.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_1);
  bVar4 = ShouldForceFullDepthPass(FVar5);
  this->bFullEarlyZPass = bVar4;
  return this;
}

