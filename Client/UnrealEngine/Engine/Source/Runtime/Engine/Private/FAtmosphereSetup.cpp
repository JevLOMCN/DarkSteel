// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// InternalInit<FSkyAtmosphereDynamicState> @ 148ae7920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAtmosphereSetup::InternalInit<FSkyAtmosphereDynamicState>
          (FAtmosphereSetup *this,FSkyAtmosphereDynamicState *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  FLinearColor *pFVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_58;
  FLinearColor local_48 [4];
  
  this->BottomRadiusKm = param_1->BottomRadius;
  fVar14 = param_1->AtmosphereHeight;
  if (param_1->AtmosphereHeight <= __real_3dcccccd) {
    fVar14 = __real_3dcccccd;
  }
  fVar15 = 0.0;
  this->TopRadiusKm = fVar14 + param_1->BottomRadius;
  fVar14 = FLinearColor::sRGBToLinearTable[(param_1->GroundAlbedo).field0_0x0._s_0.G];
  fVar1 = FLinearColor::sRGBToLinearTable[(param_1->GroundAlbedo).field0_0x0._s_0.B];
  fVar6 = (float)(param_1->GroundAlbedo).field0_0x0._s_0.A * __real_3b808081;
  (this->GroundAlbedo).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[(param_1->GroundAlbedo).field0_0x0._s_0.R];
  (this->GroundAlbedo).field0_0x0._s_0.G = fVar14;
  (this->GroundAlbedo).field0_0x0._s_0.B = fVar1;
  (this->GroundAlbedo).field0_0x0._s_0.A = fVar6;
  auVar9 = ___xmm_7e9676997e9676997e9676997e967699;
  fVar14 = param_1->MultiScatteringFactor;
  if (__real_42c80000 <= param_1->MultiScatteringFactor) {
    fVar14 = __real_42c80000;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  this->MultiScatteringFactor = fVar14;
  fVar14 = param_1->RayleighScatteringScale;
  auVar7._0_4_ = (param_1->RayleighScattering).field0_0x0._s_0.R * fVar14;
  auVar7._4_4_ = (param_1->RayleighScattering).field0_0x0._s_0.G * fVar14;
  auVar7._8_4_ = (param_1->RayleighScattering).field0_0x0._s_0.B * fVar14;
  auVar7._12_4_ = (param_1->RayleighScattering).field0_0x0._s_0.A * fVar14;
  auVar7 = minps(auVar7,auVar9);
  local_58 = (FLinearColor_u_0)maxps(auVar7,ZEXT816(0));
  (this->RayleighScattering).field0_0x0 = local_58;
  pFVar5 = `FAtmosphereSetup::InternalInit<FSkyAtmosphereDynamicState>'::__l2::<lambda_2>::
           operator()(local_res8,local_48,(FLinearColor *)&local_58._s_0);
  fVar4 = __real_bf800000;
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->RayleighScattering).field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&(this->RayleighScattering).field0_0x0 + 8) = uVar3;
  this->RayleighDensityExpScale = fVar4 / param_1->RayleighExponentialDistribution;
  fVar14 = param_1->MieScatteringScale;
  auVar11._0_4_ = (param_1->MieScattering).field0_0x0._s_0.R * fVar14;
  auVar11._4_4_ = (param_1->MieScattering).field0_0x0._s_0.G * fVar14;
  auVar11._8_4_ = (param_1->MieScattering).field0_0x0._s_0.B * fVar14;
  auVar11._12_4_ = (param_1->MieScattering).field0_0x0._s_0.A * fVar14;
  auVar7 = minps(auVar11,auVar9);
  local_58 = (FLinearColor_u_0)maxps(auVar7,ZEXT816(0));
  (this->MieScattering).field0_0x0 = local_58;
  pFVar5 = `FAtmosphereSetup::InternalInit<FSkyAtmosphereDynamicState>'::__l2::<lambda_2>::
           operator()(local_res8,local_48,(FLinearColor *)&local_58._s_0);
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->MieScattering).field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&(this->MieScattering).field0_0x0 + 8) = uVar3;
  fVar14 = param_1->MieAbsorptionScale;
  auVar12._0_4_ = (param_1->MieAbsorption).field0_0x0._s_0.R * fVar14;
  auVar12._4_4_ = (param_1->MieAbsorption).field0_0x0._s_0.G * fVar14;
  auVar12._8_4_ = (param_1->MieAbsorption).field0_0x0._s_0.B * fVar14;
  auVar12._12_4_ = (param_1->MieAbsorption).field0_0x0._s_0.A * fVar14;
  auVar7 = minps(auVar12,auVar9);
  local_58 = (FLinearColor_u_0)maxps(auVar7,ZEXT816(0));
  (this->MieAbsorption).field0_0x0 = local_58;
  pFVar5 = `FAtmosphereSetup::InternalInit<FSkyAtmosphereDynamicState>'::__l2::<lambda_2>::
           operator()(local_res8,local_48,(FLinearColor *)&local_58._s_0);
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->MieAbsorption).field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&(this->MieAbsorption).field0_0x0 + 8) = uVar3;
  fVar14 = (this->MieAbsorption).field0_0x0._s_0.G;
  fVar1 = (this->MieScattering).field0_0x0._s_0.G;
  fVar6 = (this->MieAbsorption).field0_0x0._s_0.B;
  fVar10 = (this->MieScattering).field0_0x0._s_0.B;
  fVar13 = (this->MieAbsorption).field0_0x0._s_0.A;
  fVar2 = (this->MieScattering).field0_0x0._s_0.A;
  (this->MieExtinction).field0_0x0._s_0.R =
       (this->MieAbsorption).field0_0x0._s_0.R + (this->MieScattering).field0_0x0._s_0.R;
  (this->MieExtinction).field0_0x0._s_0.G = fVar14 + fVar1;
  (this->MieExtinction).field0_0x0._s_0.B = fVar6 + fVar10;
  (this->MieExtinction).field0_0x0._s_0.A = fVar13 + fVar2;
  this->MiePhaseG = param_1->MieAnisotropy;
  this->MieDensityExpScale = fVar4 / param_1->MieExponentialDistribution;
  fVar14 = param_1->OtherAbsorptionScale;
  auVar8._0_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.R * fVar14;
  auVar8._4_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.G * fVar14;
  auVar8._8_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.B * fVar14;
  auVar8._12_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.A * fVar14;
  auVar9 = minps(auVar8,auVar9);
  local_58 = (FLinearColor_u_0)maxps(auVar9,ZEXT816(0));
  (this->AbsorptionExtinction).field0_0x0 = local_58;
  pFVar5 = `FAtmosphereSetup::InternalInit<FSkyAtmosphereDynamicState>'::__l2::<lambda_2>::
           operator()(local_res8,local_48,(FLinearColor *)&local_58._s_0);
  uVar3 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->AbsorptionExtinction).field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&(this->AbsorptionExtinction).field0_0x0 + 8) = uVar3;
  fVar14 = param_1->OtherTentDistributionTipAltitude;
  fVar1 = param_1->OtherTentDistributionTipValue;
  if ((param_1->OtherTentDistributionWidth <= 0.0) || (fVar1 <= 0.0)) {
    fVar6 = 0.0;
    fVar13 = 0.0;
    fVar10 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar10 = fVar1 / param_1->OtherTentDistributionWidth;
    fVar13 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
    fVar6 = fVar1 - fVar10 * fVar14;
    fVar15 = fVar1 - fVar13 * fVar14;
  }
  this->AbsorptionDensity0LayerWidth = fVar14;
  this->AbsorptionDensity0LinearTerm = fVar10;
  this->AbsorptionDensity1LinearTerm = fVar13;
  this->AbsorptionDensity0ConstantTerm = fVar6;
  this->AbsorptionDensity1ConstantTerm = fVar15;
  this->TransmittanceMinLightElevationAngle = param_1->TransmittanceMinLightElevationAngle;
  UpdateTransform(this,&param_1->ComponentTransform,param_1->TransformMode);
  ComputeAtmosphereVersion(this);
  return;
}

// InternalInit<USkyAtmosphereComponent> @ 148ae7bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FAtmosphereSetup::InternalInit<USkyAtmosphereComponent>
          (FAtmosphereSetup *this,USkyAtmosphereComponent *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  FLinearColor *pFVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_58;
  FLinearColor local_48 [4];
  
  this->BottomRadiusKm = param_1->BottomRadius;
  fVar12 = param_1->AtmosphereHeight;
  if (param_1->AtmosphereHeight <= __real_3dcccccd) {
    fVar12 = __real_3dcccccd;
  }
  fVar15 = 0.0;
  this->TopRadiusKm = fVar12 + param_1->BottomRadius;
  fVar12 = FLinearColor::sRGBToLinearTable[(param_1->GroundAlbedo).field0_0x0._s_0.G];
  fVar8 = FLinearColor::sRGBToLinearTable[(param_1->GroundAlbedo).field0_0x0._s_0.B];
  fVar7 = (float)(param_1->GroundAlbedo).field0_0x0._s_0.A * __real_3b808081;
  (this->GroundAlbedo).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[(param_1->GroundAlbedo).field0_0x0._s_0.R];
  (this->GroundAlbedo).field0_0x0._s_0.G = fVar12;
  (this->GroundAlbedo).field0_0x0._s_0.B = fVar8;
  (this->GroundAlbedo).field0_0x0._s_0.A = fVar7;
  auVar11 = ___xmm_7e9676997e9676997e9676997e967699;
  fVar12 = param_1->MultiScatteringFactor;
  if (__real_42c80000 <= param_1->MultiScatteringFactor) {
    fVar12 = __real_42c80000;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  this->MultiScatteringFactor = fVar12;
  fVar12 = param_1->RayleighScatteringScale;
  auVar9._0_4_ = (param_1->RayleighScattering).field0_0x0._s_0.R * fVar12;
  auVar9._4_4_ = (param_1->RayleighScattering).field0_0x0._s_0.G * fVar12;
  auVar9._8_4_ = (param_1->RayleighScattering).field0_0x0._s_0.B * fVar12;
  auVar9._12_4_ = (param_1->RayleighScattering).field0_0x0._s_0.A * fVar12;
  auVar9 = minps(auVar9,auVar11);
  local_58 = (FLinearColor_u_0)maxps(auVar9,ZEXT816(0));
  (this->RayleighScattering).field0_0x0 = local_58;
  pFVar6 = `FAtmosphereSetup::InternalInit<USkyAtmosphereComponent>'::__l2::<lambda_2>::operator()
                     (local_res8,local_48,(FLinearColor *)&local_58._s_0);
  fVar5 = __real_bf800000;
  uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
  *(undefined8 *)&(this->RayleighScattering).field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
  *(undefined8 *)((longlong)&(this->RayleighScattering).field0_0x0 + 8) = uVar4;
  this->RayleighDensityExpScale = fVar5 / param_1->RayleighExponentialDistribution;
  fVar12 = param_1->MieScatteringScale;
  auVar13._0_4_ = (param_1->MieScattering).field0_0x0._s_0.R * fVar12;
  auVar13._4_4_ = (param_1->MieScattering).field0_0x0._s_0.G * fVar12;
  auVar13._8_4_ = (param_1->MieScattering).field0_0x0._s_0.B * fVar12;
  auVar13._12_4_ = (param_1->MieScattering).field0_0x0._s_0.A * fVar12;
  auVar9 = minps(auVar13,auVar11);
  local_58 = (FLinearColor_u_0)maxps(auVar9,ZEXT816(0));
  (this->MieScattering).field0_0x0 = local_58;
  pFVar6 = `FAtmosphereSetup::InternalInit<USkyAtmosphereComponent>'::__l2::<lambda_2>::operator()
                     (local_res8,local_48,(FLinearColor *)&local_58._s_0);
  uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
  *(undefined8 *)&(this->MieScattering).field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
  *(undefined8 *)((longlong)&(this->MieScattering).field0_0x0 + 8) = uVar4;
  fVar12 = param_1->MieAbsorptionScale;
  auVar14._0_4_ = (param_1->MieAbsorption).field0_0x0._s_0.R * fVar12;
  auVar14._4_4_ = (param_1->MieAbsorption).field0_0x0._s_0.G * fVar12;
  auVar14._8_4_ = (param_1->MieAbsorption).field0_0x0._s_0.B * fVar12;
  auVar14._12_4_ = (param_1->MieAbsorption).field0_0x0._s_0.A * fVar12;
  auVar9 = minps(auVar14,auVar11);
  local_58 = (FLinearColor_u_0)maxps(auVar9,ZEXT816(0));
  (this->MieAbsorption).field0_0x0 = local_58;
  pFVar6 = `FAtmosphereSetup::InternalInit<USkyAtmosphereComponent>'::__l2::<lambda_2>::operator()
                     (local_res8,local_48,(FLinearColor *)&local_58._s_0);
  uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
  *(undefined8 *)&(this->MieAbsorption).field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
  *(undefined8 *)((longlong)&(this->MieAbsorption).field0_0x0 + 8) = uVar4;
  fVar12 = (this->MieAbsorption).field0_0x0._s_0.G;
  fVar8 = (this->MieScattering).field0_0x0._s_0.G;
  fVar7 = (this->MieAbsorption).field0_0x0._s_0.B;
  fVar1 = (this->MieScattering).field0_0x0._s_0.B;
  fVar2 = (this->MieAbsorption).field0_0x0._s_0.A;
  fVar3 = (this->MieScattering).field0_0x0._s_0.A;
  (this->MieExtinction).field0_0x0._s_0.R =
       (this->MieAbsorption).field0_0x0._s_0.R + (this->MieScattering).field0_0x0._s_0.R;
  (this->MieExtinction).field0_0x0._s_0.G = fVar12 + fVar8;
  (this->MieExtinction).field0_0x0._s_0.B = fVar7 + fVar1;
  (this->MieExtinction).field0_0x0._s_0.A = fVar2 + fVar3;
  this->MiePhaseG = param_1->MieAnisotropy;
  this->MieDensityExpScale = fVar5 / param_1->MieExponentialDistribution;
  fVar12 = param_1->OtherAbsorptionScale;
  auVar10._0_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.R * fVar12;
  auVar10._4_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.G * fVar12;
  auVar10._8_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.B * fVar12;
  auVar10._12_4_ = (param_1->OtherAbsorption).field0_0x0._s_0.A * fVar12;
  auVar11 = minps(auVar10,auVar11);
  local_58 = (FLinearColor_u_0)maxps(auVar11,ZEXT816(0));
                    /* WARNING: Store size is inaccurate */
  *(FLinearColor_u_0 *)(this->AbsorptionExtinction).field0_0x0.RGBA = local_58;
  pFVar6 = `FAtmosphereSetup::InternalInit<USkyAtmosphereComponent>'::__l2::<lambda_2>::operator()
                     (local_res8,local_48,(FLinearColor *)&local_58._s_0);
  uVar4 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
  *(undefined8 *)&(this->AbsorptionExtinction).field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
  *(undefined8 *)((longlong)&(this->AbsorptionExtinction).field0_0x0 + 8) = uVar4;
  fVar12 = (param_1->OtherTentDistribution).Width;
  uVar4._0_4_ = (param_1->OtherTentDistribution).TipAltitude;
  uVar4._4_4_ = (param_1->OtherTentDistribution).TipValue;
  local_58._0_8_ = uVar4;
  if ((fVar12 <= 0.0) || ((float)uVar4._4_4_ <= 0.0)) {
    this->AbsorptionDensity0LayerWidth = 0.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)uVar4._4_4_ / fVar12;
    this->AbsorptionDensity0LayerWidth = (float)(undefined4)uVar4;
    fVar7 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
    fVar8 = (float)uVar4._4_4_ - (float)(undefined4)uVar4 * fVar12;
    fVar15 = (float)uVar4._4_4_ - (float)(undefined4)uVar4 * fVar7;
  }
  this->AbsorptionDensity0LinearTerm = fVar12;
  this->AbsorptionDensity1LinearTerm = fVar7;
  this->AbsorptionDensity0ConstantTerm = fVar8;
  this->AbsorptionDensity1ConstantTerm = fVar15;
  this->TransmittanceMinLightElevationAngle = param_1->TransmittanceMinLightElevationAngle;
  UpdateTransform(this,(TTransform<double> *)&param_1->_padding_,param_1->TransformMode);
  ComputeAtmosphereVersion(this);
  return;
}

// FAtmosphereSetup @ 148ae9a40

FAtmosphereSetup * __thiscall
FAtmosphereSetup::FAtmosphereSetup(FAtmosphereSetup *this,FSkyAtmosphereDynamicState *param_1)

{
  InternalInit<FSkyAtmosphereDynamicState>(this,param_1);
  return this;
}

// FAtmosphereSetup @ 148ae9a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAtmosphereSetup * __thiscall
FAtmosphereSetup::FAtmosphereSetup(FAtmosphereSetup *this,USkyAtmosphereComponent *param_1)

{
  InternalInit<USkyAtmosphereComponent>(this,param_1);
  return this;
}

// operator() @ 148aeac50

FLinearColor * __thiscall
`FAtmosphereSetup::InternalInit<FSkyAtmosphereDynamicState>'::__l2::<lambda_2>::operator()
          (void *this,FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  FColorSpace *this_00;
  FColorSpaceTransform *this_01;
  FLinearColor *pFVar6;
  uint uVar7;
  uint uVar8;
  FLinearColor_u_0 local_48;
  FLinearColor local_38 [3];
  
  this_00 = UE::Color::FColorSpace::GetWorking();
  bVar5 = UE::Color::FColorSpace::IsSRGB(this_00);
  uVar7 = __xmm_80000000800000008000000080000000;
  if (bVar5) {
    uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
    return __return_storage_ptr__;
  }
  local_48._s_0.R =
       expf((float)((uint)(param_1->field0_0x0)._s_0.R ^ __xmm_80000000800000008000000080000000));
  local_48._s_0.G = expf((float)((uint)(param_1->field0_0x0)._s_0.G ^ uVar7));
  local_48._s_0.B = expf((float)((uint)(param_1->field0_0x0)._s_0.B ^ uVar7));
  local_48._s_0.A = 1.0;
  this_01 = UE::Color::FColorSpaceTransform::GetSRGBToWorkingColorSpace();
  pFVar6 = UE::Color::FColorSpaceTransform::Apply(this_01,local_38,(FLinearColor *)&local_48._s_0);
  fVar2 = (pFVar6->field0_0x0)._s_0.G;
  fVar3 = (pFVar6->field0_0x0)._s_0.B;
  dVar1 = (double)(pFVar6->field0_0x0)._s_0.R;
  if (dVar1 <= __real_3ee4f8b588e368f1) {
    dVar1 = __real_3ee4f8b588e368f1;
  }
  dVar1 = log(dVar1);
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar7);
  dVar1 = (double)fVar2;
  if (dVar1 <= __real_3ee4f8b588e368f1) {
    dVar1 = __real_3ee4f8b588e368f1;
  }
  dVar1 = log(dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar7);
  dVar1 = (double)fVar3;
  if (dVar1 <= __real_3ee4f8b588e368f1) {
    dVar1 = __real_3ee4f8b588e368f1;
  }
  dVar1 = log(dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar7);
  return __return_storage_ptr__;
}

// operator() @ 148aead90

FLinearColor * __thiscall
`FAtmosphereSetup::InternalInit<USkyAtmosphereComponent>'::__l2::<lambda_2>::operator()
          (void *this,FLinearColor *__return_storage_ptr__,FLinearColor *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  FColorSpace *this_00;
  FColorSpaceTransform *this_01;
  FLinearColor *pFVar6;
  uint uVar7;
  uint uVar8;
  FLinearColor_u_0 local_48;
  FLinearColor local_38 [3];
  
  this_00 = UE::Color::FColorSpace::GetWorking();
  bVar5 = UE::Color::FColorSpace::IsSRGB(this_00);
  uVar7 = __xmm_80000000800000008000000080000000;
  if (bVar5) {
    uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar4;
    return __return_storage_ptr__;
  }
  local_48._s_0.R =
       expf((float)((uint)(param_1->field0_0x0)._s_0.R ^ __xmm_80000000800000008000000080000000));
  local_48._s_0.G = expf((float)((uint)(param_1->field0_0x0)._s_0.G ^ uVar7));
  local_48._s_0.B = expf((float)((uint)(param_1->field0_0x0)._s_0.B ^ uVar7));
  local_48._s_0.A = 1.0;
  this_01 = UE::Color::FColorSpaceTransform::GetSRGBToWorkingColorSpace();
  pFVar6 = UE::Color::FColorSpaceTransform::Apply(this_01,local_38,(FLinearColor *)&local_48._s_0);
  fVar2 = (pFVar6->field0_0x0)._s_0.G;
  fVar3 = (pFVar6->field0_0x0)._s_0.B;
  dVar1 = (double)(pFVar6->field0_0x0)._s_0.R;
  if (dVar1 <= __real_3ee4f8b588e368f1) {
    dVar1 = __real_3ee4f8b588e368f1;
  }
  dVar1 = log(dVar1);
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar7);
  dVar1 = (double)fVar2;
  if (dVar1 <= __real_3ee4f8b588e368f1) {
    dVar1 = __real_3ee4f8b588e368f1;
  }
  dVar1 = log(dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar7);
  dVar1 = (double)fVar3;
  if (dVar1 <= __real_3ee4f8b588e368f1) {
    dVar1 = __real_3ee4f8b588e368f1;
  }
  dVar1 = log(dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar8,SUB84(dVar1,0) ^ uVar7);
  return __return_storage_ptr__;
}

// operator() @ 148aeb7d0

FLinearColor * __thiscall
`FAtmosphereSetup::GetTransmittanceAtGroundLevel'::__l2::<lambda_3>::operator()
          (void *this,FLinearColor *__return_storage_ptr__,TVector<float> *param_1,
          TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_b8;
  
  fVar14 = (param_2->field0_0x0)._s_0.Z;
  fVar19 = (param_1->field0_0x0)._s_0.Z;
  lVar10 = *(longlong *)((longlong)this + 8);
  fVar18 = (float)*(undefined8 *)&param_1->field0_0x0;
  fVar22 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  fVar20 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  local_b8 = (float)*(undefined8 *)&param_2->field0_0x0;
  fVar21 = fVar20 * fVar20 + local_b8 * local_b8 + fVar14 * fVar14;
  fVar20 = fVar20 * fVar22 + local_b8 * fVar18 + fVar14 * fVar19;
  fVar20 = fVar20 + fVar20;
  fVar14 = fVar20 * fVar20 -
           ((fVar22 * fVar22 + fVar18 * fVar18 + fVar19 * fVar19) -
           *(float *)(lVar10 + 0x1c) * *(float *)(lVar10 + 0x1c)) * fVar21 * __real_40800000;
  dVar13 = __real_bff0000000000000;
  dVar17 = __real_bff0000000000000;
  if (0.0 <= fVar14) {
    fVar14 = SQRT(fVar14);
    fVar21 = __real_3f000000 / fVar21;
    dVar13 = (double)(((float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000) - fVar14) *
                     fVar21);
    dVar17 = (double)((fVar14 - fVar20) * fVar21);
  }
  fVar14 = (float)dVar13;
  fVar19 = (float)dVar17;
  if (0.0 <= fVar14) {
    fVar20 = fVar14;
    if ((0.0 <= fVar19) && (fVar20 = fVar19, fVar14 <= fVar19)) {
      fVar20 = fVar14;
    }
  }
  else {
    fVar20 = fVar19;
    if (fVar19 < 0.0) {
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
      return __return_storage_ptr__;
    }
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  if (0.0 < fVar20) {
    fVar14 = 0.0;
    fVar22 = fVar20 * __real_3d888889;
    fVar23 = 0.0;
    fVar19 = 0.0;
    fVar21 = 0.0;
    fVar18 = 0.0;
    do {
      fVar16 = fVar20 * fVar23;
      fVar12 = fVar16 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
      fVar15 = fVar16 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      fVar16 = fVar16 * (param_2->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
      fVar15 = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar16 * fVar16) - *(float *)(lVar10 + 0x18)
      ;
      fVar12 = expf(fVar15 * *(float *)(lVar10 + 0x68));
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar16 = expf(fVar15 * *(float *)(lVar10 + 0x34));
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      if (*(float *)(lVar10 + 0x80) <= fVar15) {
        fVar15 = fVar15 * *(float *)(lVar10 + 0x90) + *(float *)(lVar10 + 0x8c);
      }
      else {
        fVar15 = fVar15 * *(float *)(lVar10 + 0x88) + *(float *)(lVar10 + 0x84);
      }
      if (__real_3f800000 <= fVar15) {
        fVar15 = __real_3f800000;
      }
      fVar1 = *(float *)(lVar10 + 0x28);
      fVar2 = *(float *)(lVar10 + 0x2c);
      fVar3 = *(float *)(lVar10 + 0x30);
      fVar23 = fVar23 + __real_3d888889;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      bVar11 = fVar23 < __real_3f800000;
      fVar4 = *(float *)(lVar10 + 0x4c);
      fVar5 = *(float *)(lVar10 + 0x74);
      fVar6 = *(float *)(lVar10 + 0x50);
      fVar7 = *(float *)(lVar10 + 0x78);
      fVar8 = *(float *)(lVar10 + 0x54);
      fVar14 = (*(float *)(lVar10 + 0x24) * fVar16 + *(float *)(lVar10 + 0x48) * fVar12 +
               *(float *)(lVar10 + 0x70) * fVar15) * fVar22 + fVar14;
      fVar9 = *(float *)(lVar10 + 0x7c);
      (__return_storage_ptr__->field0_0x0)._s_0.R = fVar14;
      fVar19 = (fVar1 * fVar16 + fVar4 * fVar12 + fVar5 * fVar15) * fVar22 + fVar19;
      (__return_storage_ptr__->field0_0x0)._s_0.G = fVar19;
      fVar21 = (fVar2 * fVar16 + fVar6 * fVar12 + fVar7 * fVar15) * fVar22 + fVar21;
      (__return_storage_ptr__->field0_0x0)._s_0.B = fVar21;
      fVar18 = (fVar3 * fVar16 + fVar8 * fVar12 + fVar9 * fVar15) * fVar22 + fVar18;
      (__return_storage_ptr__->field0_0x0)._s_0.A = fVar18;
    } while (bVar11);
  }
  return __return_storage_ptr__;
}

// ApplyWorldOffset @ 148aec5b0

void __thiscall FAtmosphereSetup::ApplyWorldOffset(FAtmosphereSetup *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (param_1->field0_0x0)._s_0.Z * __real_3ee4f8b580000000;
  dVar3 = (param_1->field0_0x0)._s_0.X * __real_3ee4f8b580000000;
  dVar1 = (this->PlanetCenterKm).field0_0x0._s_0.Z;
  dVar2 = (this->PlanetCenterKm).field0_0x0._s_0.X;
  (this->PlanetCenterKm).field0_0x0._s_0.Y =
       (param_1->field0_0x0)._s_0.Y * __real_3ee4f8b580000000 +
       (this->PlanetCenterKm).field0_0x0._s_0.Y;
  (this->PlanetCenterKm).field0_0x0._s_0.Z = dVar4 + dVar1;
  (this->PlanetCenterKm).field0_0x0._s_0.X = dVar3 + dVar2;
  return;
}

// ComputeAtmosphereVersion @ 148aecb70

void __thiscall FAtmosphereSetup::ComputeAtmosphereVersion(FAtmosphereSetup *this)

{
  uint uVar1;
  
  uVar1 = (*FCrc::MemCrc32Func)(&this->BottomRadiusKm,4,0);
  uVar1 = (*FCrc::MemCrc32Func)(&this->TopRadiusKm,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->MultiScatteringFactor,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->RayleighScattering,0x10,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->RayleighDensityExpScale,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->MieScattering,0x10,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->MieExtinction,0x10,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->MieAbsorption,0x10,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->MieDensityExpScale,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->MiePhaseG,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->AbsorptionExtinction,0x10,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->AbsorptionDensity0LayerWidth,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->AbsorptionDensity0ConstantTerm,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->AbsorptionDensity0LinearTerm,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->AbsorptionDensity1ConstantTerm,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->AbsorptionDensity1LinearTerm,4,uVar1);
  uVar1 = (*FCrc::MemCrc32Func)(&this->GroundAlbedo,0x10,uVar1);
  this->TransmittanceAndMultiScatteringLUTsVersion = uVar1;
  return;
}

// ComputeViewData @ 148aecd20

void __thiscall
FAtmosphereSetup::ComputeViewData
          (FAtmosphereSetup *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<float> *param_3,TVector<float> *param_4,TVector<float> *param_5,
          TVector4<float> *param_6,TMatrix<float> *param_7)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_f8;
  
  dVar16 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar22 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = (this->PlanetCenterKm).field0_0x0._s_0.Y * __real_40f86a0000000000 + dVar2;
  dVar2 = dVar2 + (param_1->field0_0x0)._s_0.Y;
  dVar4 = (this->PlanetCenterKm).field0_0x0._s_0.X * __real_40f86a0000000000 + dVar16;
  dVar6 = (this->PlanetCenterKm).field0_0x0._s_0.Z * __real_40f86a0000000000 + dVar22;
  dVar16 = dVar16 + (param_1->field0_0x0)._s_0.X;
  dVar22 = dVar22 + (param_1->field0_0x0)._s_0.Z;
  dVar17 = dVar2 - dVar5;
  dVar15 = dVar16 - dVar4;
  dVar21 = dVar22 - dVar6;
  auVar7._0_8_ = dVar15 * dVar15;
  auVar7._8_8_ = 0;
  fVar10 = this->BottomRadiusKm * __real_47c35000 + __real_43fa0000;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar17 * dVar17 + auVar7._0_8_ + dVar21 * dVar21;
  auVar8 = sqrtpd(auVar7,auVar8);
  if ((float)auVar8._0_8_ < fVar10) {
    dVar16 = __real_3ff0000000000000 / (double)(float)auVar8._0_8_;
    dVar11 = (double)fVar10;
    dVar2 = dVar17 * dVar16 * dVar11 + dVar5;
    dVar22 = dVar21 * dVar16 * dVar11 + dVar6;
    dVar16 = dVar15 * dVar16 * dVar11 + dVar4;
  }
  (param_5->field0_0x0)._s_0.X = (float)dVar16;
  (param_5->field0_0x0)._s_0.Y = (float)dVar2;
  dVar2 = (double)(float)dVar2 - dVar5;
  dVar17 = (double)(float)dVar16 - dVar4;
  (param_5->field0_0x0)._s_0.Z = (float)dVar22;
  dVar16 = __real_3ee4f8b580000000;
  dVar22 = (double)(float)dVar22 - dVar6;
  auVar9._0_8_ = dVar22 * dVar22;
  auVar9._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2 * dVar2 + dVar17 * dVar17 + auVar9._0_8_;
  auVar8 = sqrtpd(auVar9,auVar3);
  (param_6->field0_0x0)._s_0.X = (float)dVar4;
  (param_6->field0_0x0)._s_0.Y = (float)dVar5;
  (param_6->field0_0x0)._s_0.Z = (float)dVar6;
  (param_6->field0_0x0)._s_0.W = (float)auVar8._0_8_;
  fVar18 = __real_bf800000;
  fVar10 = __real_3f800000;
  fVar28 = (float)(((double)(param_5->field0_0x0)._s_0.X - dVar4) * dVar16);
  fVar30 = (float)(((double)(param_5->field0_0x0)._s_0.Y - dVar5) * dVar16);
  fVar29 = (float)(((double)(param_5->field0_0x0)._s_0.Z - dVar6) * dVar16);
  fVar12 = fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29;
  if (__real_322bcc77 < fVar12) {
    fVar12 = __real_3f800000 / SQRT(fVar12);
    fVar28 = fVar28 * fVar12;
    fVar30 = fVar30 * fVar12;
    fVar29 = fVar29 * fVar12;
  }
  fVar12 = (param_3->field0_0x0)._s_0.Z;
  fVar24 = (float)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  local_f8 = (float)*(undefined8 *)&param_3->field0_0x0;
  fVar23 = fVar24 * fVar29 - fVar12 * fVar30;
  fVar25 = fVar12 * fVar28 - local_f8 * fVar29;
  fVar26 = local_f8 * fVar30 - fVar24 * fVar28;
  fVar13 = fVar25 * fVar25 + fVar23 * fVar23 + fVar26 * fVar26;
  if (__real_322bcc77 < fVar13) {
    fVar13 = __real_3f800000 / SQRT(fVar13);
    fVar25 = fVar25 * fVar13;
    fVar26 = fVar26 * fVar13;
    fVar23 = fVar23 * fVar13;
  }
  if ((float)((uint)(fVar24 * fVar30 + local_f8 * fVar28 + fVar12 * fVar29) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3f7fbe77) {
    fVar18 = fVar26 * fVar30 - fVar25 * fVar29;
    fVar24 = fVar23 * fVar29 - fVar26 * fVar28;
    fVar12 = fVar25 * fVar28 - fVar23 * fVar30;
    fVar10 = fVar24 * fVar24 + fVar18 * fVar18 + fVar12 * fVar12;
    if (__real_322bcc77 < fVar10) {
      fVar10 = __real_3f800000 / SQRT(fVar10);
      fVar12 = fVar12 * fVar10;
      fVar24 = fVar24 * fVar10;
      fVar18 = fVar18 * fVar10;
    }
    param_7->M[0][0] = fVar18;
    param_7->M[0][1] = fVar23;
    param_7->M[0][2] = fVar28;
    param_7->M[1][0] = fVar24;
    param_7->M[2][0] = fVar12;
    param_7->M[1][1] = fVar25;
    param_7->M[2][1] = fVar26;
    param_7->M[1][2] = fVar30;
    param_7->M[2][2] = fVar29;
    fVar10 = param_7->M[0][3];
    fVar13 = param_7->M[1][3];
    fVar1 = param_7->M[2][3];
    fVar14 = param_7->M[3][0];
    fVar19 = param_7->M[3][1];
    fVar20 = param_7->M[3][2];
    fVar27 = param_7->M[3][3];
    param_7->M[0][0] = fVar18;
    param_7->M[0][1] = fVar24;
    param_7->M[0][2] = fVar12;
    param_7->M[0][3] = fVar14;
    param_7->M[1][0] = fVar23;
    param_7->M[1][1] = fVar25;
    param_7->M[1][2] = fVar26;
    param_7->M[1][3] = fVar19;
    param_7->M[2][0] = fVar28;
    param_7->M[2][1] = fVar30;
    param_7->M[2][2] = fVar29;
    param_7->M[2][3] = fVar20;
    param_7->M[3][0] = fVar10;
    param_7->M[3][1] = fVar13;
    param_7->M[3][2] = fVar1;
    param_7->M[3][3] = fVar27;
  }
  else {
    fVar12 = __real_bf800000;
    if (0.0 <= fVar29) {
      fVar12 = __real_3f800000;
    }
    param_7->M[0][2] = fVar28;
    param_7->M[1][2] = fVar30;
    fVar14 = (float)((uint)(fVar12 * fVar28) ^ __xmm_80000000800000008000000080000000);
    param_7->M[2][0] = fVar14;
    param_7->M[2][2] = fVar29;
    fVar18 = fVar18 / (fVar12 + fVar29);
    fVar27 = fVar30 * fVar28 * fVar18;
    param_7->M[0][1] = fVar27;
    fVar10 = fVar18 * fVar12 * fVar28 * fVar28 + fVar10;
    fVar20 = fVar30 * fVar30 * fVar18 + fVar12;
    fVar19 = (float)((uint)fVar30 ^ __xmm_80000000800000008000000080000000);
    param_7->M[0][0] = fVar10;
    param_7->M[1][0] = fVar27 * fVar12;
    param_7->M[1][1] = fVar20;
    param_7->M[2][1] = fVar19;
    fVar18 = param_7->M[0][3];
    fVar24 = param_7->M[1][3];
    fVar13 = param_7->M[2][3];
    fVar23 = param_7->M[3][0];
    fVar25 = param_7->M[3][1];
    fVar26 = param_7->M[3][2];
    fVar1 = param_7->M[3][3];
    param_7->M[0][0] = fVar10;
    param_7->M[0][1] = fVar27 * fVar12;
    param_7->M[0][2] = fVar14;
    param_7->M[0][3] = fVar23;
    param_7->M[1][0] = fVar27;
    param_7->M[1][1] = fVar20;
    param_7->M[1][2] = fVar19;
    param_7->M[1][3] = fVar25;
    param_7->M[2][0] = fVar28;
    param_7->M[2][1] = fVar30;
    param_7->M[2][2] = fVar29;
    param_7->M[2][3] = fVar26;
    param_7->M[3][0] = fVar18;
    param_7->M[3][1] = fVar24;
    param_7->M[3][2] = fVar13;
    param_7->M[3][3] = fVar1;
  }
  return;
}

// GetTransmittanceAtGroundLevel @ 148af1c20

FLinearColor * __thiscall
FAtmosphereSetup::GetTransmittanceAtGroundLevel
          (FAtmosphereSetup *this,FLinearColor *__return_storage_ptr__,TVector<double> *param_1)

{
  uint uVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58;
  FLinearColor_u_0 local_48;
  TVector2<double> local_38;
  undefined1 **local_28;
  FAtmosphereSetup *local_20;
  
  local_res10 = local_res8;
  local_res8[0] = 0;
  local_28 = &local_res10;
  fVar3 = this->BottomRadiusKm + __real_3f000000;
  local_20 = this;
  FMath::GetAzimuthAndElevation
            (&local_38,param_1,&UE::Math::TVector<double>::ForwardVector,
             &UE::Math::TVector<double>::LeftVector,&UE::Math::TVector<double>::UpVector);
  uVar2 = (undefined8)(this->TransmittanceMinLightElevationAngle * __real_3c8efa35);
  if ((double)uVar2 <= local_38.field0_0x0._s_0.Y) {
    uVar2 = local_38.field0_0x0._s_0.Y;
  }
  local_38.field0_0x0._s_0.Y = (double)uVar2;
  __libm_sse2_sincos_();
  local_68._s_0.X = (float)(double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  local_68._s_0.Y = 0.0;
  local_58._0_8_ = 0;
  local_68._s_0.Z = (float)(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  local_58._s_0.Z = fVar3;
  `FAtmosphereSetup::GetTransmittanceAtGroundLevel'::__l2::<lambda_3>::operator()
            (&local_28,(FLinearColor *)&local_48._s_0,(TVector<float> *)&local_58._s_0,
             (TVector<float> *)&local_68._s_0);
  uVar1 = __xmm_80000000800000008000000080000000;
  fVar3 = expf((float)((uint)local_48._s_0.R ^ __xmm_80000000800000008000000080000000));
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar3;
  fVar3 = expf((float)((uint)local_48._s_0.G ^ uVar1));
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar3;
  fVar3 = expf((float)((uint)local_48._s_0.B ^ uVar1));
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// UpdateTransform @ 148af9540

void __thiscall
FAtmosphereSetup::UpdateTransform(FAtmosphereSetup *this,TTransform<double> *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  if (param_2 == '\0') {
    fVar3 = (float)((uint)this->BottomRadiusKm ^ __xmm_80000000800000008000000080000000);
    (this->PlanetCenterKm).field0_0x0._s_0.X = 0.0;
    (this->PlanetCenterKm).field0_0x0._s_0.Y = 0.0;
    (this->PlanetCenterKm).field0_0x0._s_0.Z = (double)fVar3;
  }
  else {
    if (param_2 == '\x01') {
      fVar3 = this->BottomRadiusKm;
      dVar5 = (param_1->Translation).ZW.m128d_f64[0] * __real_3ee4f8b580000000;
      dVar4 = (param_1->Translation).XY.m128d_f64[1] * __real_3ee4f8b580000000;
      (this->PlanetCenterKm).field0_0x0._s_0.X =
           (param_1->Translation).XY.m128d_f64[0] * __real_3ee4f8b580000000;
      (this->PlanetCenterKm).field0_0x0._s_0.Y = dVar4;
      (this->PlanetCenterKm).field0_0x0._s_0.Z = dVar5 - (double)fVar3;
      return;
    }
    if (param_2 == '\x02') {
      dVar4 = (param_1->Translation).XY.m128d_f64[1] * __real_3ee4f8b580000000;
      dVar5 = (param_1->Translation).ZW.m128d_f64[0] * __real_3ee4f8b580000000;
      (this->PlanetCenterKm).field0_0x0._s_0.X =
           (param_1->Translation).XY.m128d_f64[0] * __real_3ee4f8b580000000;
      (this->PlanetCenterKm).field0_0x0._s_0.Y = dVar4;
      (this->PlanetCenterKm).field0_0x0._s_0.Z = dVar5;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\SkyAtmosphereCommonData.cpp"
                       ,0xb2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

