// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FAtmosphereConfig @ 1450af760

FAtmosphereConfig * __thiscall
FAtmosphereConfig::FAtmosphereConfig
          (FAtmosphereConfig *this,FAtmosphereUniformShaderParameters *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  FAtmosphereConfig *pFVar10;
  
  fVar4 = param_1->BottomRadiusKm;
  fVar5 = param_1->TopRadiusKm;
  fVar6 = param_1->RayleighDensityExpScale;
  (this->AtmoParameters).MultiScatteringFactor = param_1->MultiScatteringFactor;
  (this->AtmoParameters).BottomRadiusKm = fVar4;
  (this->AtmoParameters).TopRadiusKm = fVar5;
  (this->AtmoParameters).RayleighDensityExpScale = fVar6;
  uVar2 = *(undefined8 *)((longlong)&(param_1->RayleighScattering).field0_0x0 + 8);
  *(undefined8 *)&(this->AtmoParameters).RayleighScattering.field0_0x0 =
       *(undefined8 *)&(param_1->RayleighScattering).field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmoParameters).RayleighScattering.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MieScattering).field0_0x0 + 8);
  *(undefined8 *)&(this->AtmoParameters).MieScattering.field0_0x0 =
       *(undefined8 *)&(param_1->MieScattering).field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmoParameters).MieScattering.field0_0x0 + 8) = uVar2;
  uVar7 = *(undefined4 *)&param_1->field_0x34;
  lVar3 = param_1->_padding_;
  (this->AtmoParameters).MieDensityExpScale = param_1->MieDensityExpScale;
  *(undefined4 *)&(this->AtmoParameters).field_0x34 = uVar7;
  (this->AtmoParameters)._padding_ = lVar3;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MieExtinction).field0_0x0 + 8);
  *(undefined8 *)&(this->AtmoParameters).MieExtinction.field0_0x0 =
       *(undefined8 *)&(param_1->MieExtinction).field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmoParameters).MieExtinction.field0_0x0 + 8) = uVar2;
  uVar7 = *(undefined4 *)&param_1->field_0x54;
  lVar3 = param_1->_padding_;
  (this->AtmoParameters).MiePhaseG = param_1->MiePhaseG;
  *(undefined4 *)&(this->AtmoParameters).field_0x54 = uVar7;
  (this->AtmoParameters)._padding_ = lVar3;
  uVar2 = *(undefined8 *)((longlong)&(param_1->MieAbsorption).field0_0x0 + 8);
  *(undefined8 *)&(this->AtmoParameters).MieAbsorption.field0_0x0 =
       *(undefined8 *)&(param_1->MieAbsorption).field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmoParameters).MieAbsorption.field0_0x0 + 8) = uVar2;
  fVar4 = param_1->AbsorptionDensity0ConstantTerm;
  fVar5 = param_1->AbsorptionDensity0LinearTerm;
  fVar6 = param_1->AbsorptionDensity1ConstantTerm;
  (this->AtmoParameters).AbsorptionDensity0LayerWidth = param_1->AbsorptionDensity0LayerWidth;
  (this->AtmoParameters).AbsorptionDensity0ConstantTerm = fVar4;
  (this->AtmoParameters).AbsorptionDensity0LinearTerm = fVar5;
  (this->AtmoParameters).AbsorptionDensity1ConstantTerm = fVar6;
  uVar7 = *(undefined4 *)&param_1->field_0x84;
  lVar3 = param_1->_padding_;
  (this->AtmoParameters).AbsorptionDensity1LinearTerm = param_1->AbsorptionDensity1LinearTerm;
  *(undefined4 *)&(this->AtmoParameters).field_0x84 = uVar7;
  (this->AtmoParameters)._padding_ = lVar3;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AbsorptionExtinction).field0_0x0 + 8);
  *(undefined8 *)&(this->AtmoParameters).AbsorptionExtinction.field0_0x0 =
       *(undefined8 *)&(param_1->AbsorptionExtinction).field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmoParameters).AbsorptionExtinction.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->GroundAlbedo).field0_0x0 + 8);
  *(undefined8 *)&(this->AtmoParameters).GroundAlbedo.field0_0x0 =
       *(undefined8 *)&(param_1->GroundAlbedo).field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmoParameters).GroundAlbedo.field0_0x0 + 8) = uVar2;
  pTVar8 = CVarPathTracingAtmosphereOpticalDepthLutNumSamples.Ref;
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FAtmosphereConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  this->NumSamples = pTVar8->ShadowedValue[1];
  pTVar8 = CVarPathTracingAtmosphereOpticalDepthLutResolution.Ref;
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FAtmosphereConfig *)(*pcVar1)();
      return pFVar10;
    }
  }
  this->Resolution = pTVar8->ShadowedValue[1];
  return this;
}

// IsDifferent @ 1450df690

bool __thiscall FAtmosphereConfig::IsDifferent(FAtmosphereConfig *this,FAtmosphereConfig *param_1)

{
  if (((((((param_1->AtmoParameters).BottomRadiusKm == (this->AtmoParameters).BottomRadiusKm) &&
         ((param_1->AtmoParameters).TopRadiusKm == (this->AtmoParameters).TopRadiusKm)) &&
        ((param_1->AtmoParameters).RayleighDensityExpScale ==
         (this->AtmoParameters).RayleighDensityExpScale)) &&
       ((((param_1->AtmoParameters).RayleighScattering.field0_0x0._s_0.R ==
          (this->AtmoParameters).RayleighScattering.field0_0x0._s_0.R &&
         ((param_1->AtmoParameters).RayleighScattering.field0_0x0._s_0.G ==
          (this->AtmoParameters).RayleighScattering.field0_0x0._s_0.G)) &&
        (((param_1->AtmoParameters).RayleighScattering.field0_0x0._s_0.B ==
          (this->AtmoParameters).RayleighScattering.field0_0x0._s_0.B &&
         (((param_1->AtmoParameters).RayleighScattering.field0_0x0._s_0.A ==
           (this->AtmoParameters).RayleighScattering.field0_0x0._s_0.A &&
          ((param_1->AtmoParameters).MieScattering.field0_0x0._s_0.R ==
           (this->AtmoParameters).MieScattering.field0_0x0._s_0.R)))))))) &&
      (((param_1->AtmoParameters).MieScattering.field0_0x0._s_0.G ==
        (this->AtmoParameters).MieScattering.field0_0x0._s_0.G &&
       ((((param_1->AtmoParameters).MieScattering.field0_0x0._s_0.B ==
          (this->AtmoParameters).MieScattering.field0_0x0._s_0.B &&
         ((param_1->AtmoParameters).MieScattering.field0_0x0._s_0.A ==
          (this->AtmoParameters).MieScattering.field0_0x0._s_0.A)) &&
        ((param_1->AtmoParameters).MieDensityExpScale == (this->AtmoParameters).MieDensityExpScale))
       )))) && ((((((param_1->AtmoParameters).MieExtinction.field0_0x0._s_0.R ==
                    (this->AtmoParameters).MieExtinction.field0_0x0._s_0.R &&
                   ((param_1->AtmoParameters).MieExtinction.field0_0x0._s_0.G ==
                    (this->AtmoParameters).MieExtinction.field0_0x0._s_0.G)) &&
                  (((param_1->AtmoParameters).MieExtinction.field0_0x0._s_0.B ==
                    (this->AtmoParameters).MieExtinction.field0_0x0._s_0.B &&
                   (((param_1->AtmoParameters).MieExtinction.field0_0x0._s_0.A ==
                     (this->AtmoParameters).MieExtinction.field0_0x0._s_0.A &&
                    ((param_1->AtmoParameters).MieAbsorption.field0_0x0._s_0.R ==
                     (this->AtmoParameters).MieAbsorption.field0_0x0._s_0.R)))))) &&
                 ((param_1->AtmoParameters).MieAbsorption.field0_0x0._s_0.G ==
                  (this->AtmoParameters).MieAbsorption.field0_0x0._s_0.G)) &&
                ((((((param_1->AtmoParameters).MieAbsorption.field0_0x0._s_0.B ==
                     (this->AtmoParameters).MieAbsorption.field0_0x0._s_0.B &&
                    ((param_1->AtmoParameters).MieAbsorption.field0_0x0._s_0.A ==
                     (this->AtmoParameters).MieAbsorption.field0_0x0._s_0.A)) &&
                   ((param_1->AtmoParameters).AbsorptionDensity0LayerWidth ==
                    (this->AtmoParameters).AbsorptionDensity0LayerWidth)) &&
                  (((param_1->AtmoParameters).AbsorptionDensity0ConstantTerm ==
                    (this->AtmoParameters).AbsorptionDensity0ConstantTerm &&
                   ((param_1->AtmoParameters).AbsorptionDensity0LinearTerm ==
                    (this->AtmoParameters).AbsorptionDensity0LinearTerm)))) &&
                 (((((param_1->AtmoParameters).AbsorptionDensity1ConstantTerm ==
                     (this->AtmoParameters).AbsorptionDensity1ConstantTerm &&
                    (((param_1->AtmoParameters).AbsorptionDensity1LinearTerm ==
                      (this->AtmoParameters).AbsorptionDensity1LinearTerm &&
                     ((param_1->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.R ==
                      (this->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.R)))) &&
                   ((param_1->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.G ==
                    (this->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.G)) &&
                  (((((param_1->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.B ==
                      (this->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.B &&
                     ((param_1->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.A ==
                      (this->AtmoParameters).AbsorptionExtinction.field0_0x0._s_0.A)) &&
                    (this->NumSamples == param_1->NumSamples)) &&
                   (this->Resolution == param_1->Resolution)))))))))) {
    return false;
  }
  return true;
}

