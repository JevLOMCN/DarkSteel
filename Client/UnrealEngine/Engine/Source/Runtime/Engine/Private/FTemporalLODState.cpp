// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateTemporalLODTransition @ 1484ff2e0

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
FTemporalLODState::UpdateTemporalLODTransition
          (FTemporalLODState *this,FSceneView *param_1,float param_2)

{
  float fVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  float fVar8;
  
  pTVar5 = CVarLODTemporalLag.Ref;
  if (param_1->bDisableDistanceBasedFadeTransitions == false) {
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar8 = pTVar5->ShadowedValue[1];
    fVar1 = this->TemporalLODTime[1];
    this->TemporalLODLag = fVar8;
    if (param_2 - fVar8 <= fVar1) {
      return;
    }
    fVar8 = this->TemporalLODTime[0];
    if (this->TemporalLODTime[0] < fVar1) {
      dVar4 = this->TemporalLODViewOrigin[1].field0_0x0._s_0.Y;
      dVar2 = this->TemporalLODViewOrigin[1].field0_0x0._s_0.Z;
      this->TemporalLODViewOrigin[0].field0_0x0._s_0.X =
           this->TemporalLODViewOrigin[1].field0_0x0._s_0.X;
      this->TemporalLODViewOrigin[0].field0_0x0._s_0.Y = dVar4;
      this->TemporalLODViewOrigin[0].field0_0x0._s_0.Z = dVar2;
      this->TemporalLODTime[0] = fVar1;
      fVar8 = fVar1;
    }
    dVar2 = (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
    this->TemporalLODViewOrigin[1].field0_0x0._s_0.X =
         (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
    this->TemporalLODViewOrigin[1].field0_0x0._s_0.Y = dVar2;
    this->TemporalLODViewOrigin[1].field0_0x0._s_0.Z =
         (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
    this->TemporalLODTime[1] = param_2;
    if (fVar8 < param_2) {
      return;
    }
  }
  pTVar7 = &(param_1->ViewMatrices).ViewOrigin;
  dVar2 = (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
  this->TemporalLODViewOrigin[0].field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  this->TemporalLODViewOrigin[0].field0_0x0._s_0.Y = dVar2;
  this->TemporalLODViewOrigin[0].field0_0x0._s_0.Z =
       (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
  dVar2 = (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
  this->TemporalLODViewOrigin[1].field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
  this->TemporalLODViewOrigin[1].field0_0x0._s_0.Y = dVar2;
  this->TemporalLODViewOrigin[1].field0_0x0._s_0.Z =
       (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
  this->TemporalLODLag = 0.0;
  this->TemporalLODTime[0] = param_2;
  this->TemporalLODTime[1] = param_2;
  return;
}

