// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetLightExposureScale @ 1478d52d0

float __thiscall
FLightRenderParameters::GetLightExposureScale(FLightRenderParameters *this,float param_1)

{
  float fVar1;
  
  if (param_1 <= 0.0) {
    return __real_3f800000;
  }
  fVar1 = logf(param_1);
  fVar1 = expf((float)((uint)(fVar1 * this->InverseExposureBlend) ^
                      __xmm_80000000800000008000000080000000));
  return fVar1;
}

// GetLightExposureScale @ 1478d5320

float __cdecl FLightRenderParameters::GetLightExposureScale(float param_1,float param_2)

{
  float fVar1;
  
  if (param_1 <= 0.0) {
    return __real_3f800000;
  }
  fVar1 = logf(param_1);
  fVar1 = expf((float)((uint)(fVar1 * param_2) ^ __xmm_80000000800000008000000080000000));
  return fVar1;
}

// MakeShaderParameters @ 1478e29d0

void __thiscall
FLightRenderParameters::MakeShaderParameters
          (FLightRenderParameters *this,FViewMatrices *param_1,float param_2,
          FLightShaderParameters *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  dVar3 = (param_1->PreViewTranslation).field0_0x0._s_0.Y;
  dVar4 = (this->WorldPosition).field0_0x0._s_0.Y;
  dVar5 = (param_1->PreViewTranslation).field0_0x0._s_0.Z;
  dVar6 = (this->WorldPosition).field0_0x0._s_0.Z;
  (param_3->TranslatedWorldPosition).field0_0x0._s_0.X =
       (float)((this->WorldPosition).field0_0x0._s_0.X +
              (param_1->PreViewTranslation).field0_0x0._s_0.X);
  (param_3->TranslatedWorldPosition).field0_0x0._s_0.Y = (float)(dVar3 + dVar4);
  (param_3->TranslatedWorldPosition).field0_0x0._s_0.Z = (float)(dVar5 + dVar6);
  fVar7 = __real_3f800000;
  param_3->InvRadius = this->InvRadius;
  fVar9 = (this->Color).field0_0x0._s_0.R;
  fVar1 = (this->Color).field0_0x0._s_0.G;
  fVar2 = (this->Color).field0_0x0._s_0.B;
  fVar8 = fVar7;
  if (0.0 < param_2) {
    fVar8 = logf(param_2);
    fVar8 = expf((float)((uint)(fVar8 * this->InverseExposureBlend) ^
                        __xmm_80000000800000008000000080000000));
  }
  (param_3->Color).field0_0x0._s_0.X = fVar9 * fVar8;
  (param_3->Color).field0_0x0._s_0.Y = fVar1 * fVar8;
  (param_3->Color).field0_0x0._s_0.Z = fVar2 * fVar8;
  param_3->FalloffExponent = this->FalloffExponent;
  *(undefined8 *)&(param_3->Direction).field0_0x0 = *(undefined8 *)&(this->Direction).field0_0x0;
  (param_3->Direction).field0_0x0._s_0.Z = (this->Direction).field0_0x0._s_0.Z;
  fVar9 = this->SpecularScale;
  if (fVar7 <= this->SpecularScale) {
    fVar9 = fVar7;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_3->SpecularScale = fVar9;
  fVar9 = this->DiffuseScale;
  if (fVar7 <= this->DiffuseScale) {
    fVar9 = fVar7;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_3->DiffuseScale = fVar9;
  *(undefined8 *)&(param_3->Tangent).field0_0x0 = *(undefined8 *)&(this->Tangent).field0_0x0;
  (param_3->Tangent).field0_0x0._s_0.Z = (this->Tangent).field0_0x0._s_0.Z;
  param_3->SourceRadius = this->SourceRadius;
  (param_3->SpotAngles).field0_0x0 = (this->SpotAngles).field0_0x0;
  param_3->SoftSourceRadius = this->SoftSourceRadius;
  param_3->SourceLength = this->SourceLength;
  param_3->RectLightBarnCosAngle = this->RectLightBarnCosAngle;
  param_3->RectLightBarnLength = this->RectLightBarnLength;
  (param_3->RectLightAtlasUVOffset).field0_0x0 = (this->RectLightAtlasUVOffset).field0_0x0;
  (param_3->RectLightAtlasUVScale).field0_0x0 = (this->RectLightAtlasUVScale).field0_0x0;
  param_3->RectLightAtlasMaxLevel = this->RectLightAtlasMaxLevel;
  param_3->IESAtlasIndex = this->IESAtlasIndex;
  param_3->LightFunctionAtlasLightIndex = this->LightFunctionAtlasLightIndex;
  param_3->bAffectsTranslucentLighting = this->bAffectsTranslucentLighting;
  return;
}

