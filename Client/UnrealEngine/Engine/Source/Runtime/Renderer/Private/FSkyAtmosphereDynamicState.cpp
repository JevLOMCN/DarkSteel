// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Apply @ 1456f4ba0

void __thiscall
FSkyAtmosphereDynamicState::Apply
          (FSkyAtmosphereDynamicState *this,FStateStreamCopyContext *param_1,
          FSkyAtmosphereDynamicState *param_2)

{
  FOverrideAtmosphericLight *_Buf2;
  float fVar1;
  double dVar2;
  ESkyAtmosphereTransformMode EVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 uVar11;
  undefined7 uVar12;
  int iVar13;
  
  if (((param_2->ModifiedFlags & 1) != 0) &&
     (EVar3 = param_2->TransformMode, this->TransformMode != EVar3)) {
    this->ModifiedFlags = this->ModifiedFlags | 1;
    this->TransformMode = EVar3;
  }
  if (((param_2->ModifiedFlags & 2) != 0) &&
     (fVar1 = param_2->BottomRadius, fVar1 != this->BottomRadius)) {
    this->ModifiedFlags = this->ModifiedFlags | 2;
    this->BottomRadius = fVar1;
  }
  if (((param_2->ModifiedFlags & 4) != 0) &&
     (uVar7 = (param_2->GroundAlbedo).field0_0x0.Bits, (this->GroundAlbedo).field0_0x0.Bits != uVar7
     )) {
    this->ModifiedFlags = this->ModifiedFlags | 4;
    (this->GroundAlbedo).field0_0x0.Bits = uVar7;
  }
  if (((param_2->ModifiedFlags & 8) != 0) &&
     (fVar1 = param_2->AtmosphereHeight, fVar1 != this->AtmosphereHeight)) {
    this->ModifiedFlags = this->ModifiedFlags | 8;
    this->AtmosphereHeight = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x10) != 0) &&
     (fVar1 = param_2->MultiScatteringFactor, fVar1 != this->MultiScatteringFactor)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x10;
    this->MultiScatteringFactor = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x20) != 0) &&
     (fVar1 = param_2->TraceSampleCountScale, fVar1 != this->TraceSampleCountScale)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x20;
    this->TraceSampleCountScale = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x40) != 0) &&
     (fVar1 = param_2->RayleighScatteringScale, fVar1 != this->RayleighScatteringScale)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x40;
    this->RayleighScatteringScale = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x80) != 0) &&
     (((((param_2->RayleighScattering).field0_0x0._s_0.R !=
         (this->RayleighScattering).field0_0x0._s_0.R ||
        ((param_2->RayleighScattering).field0_0x0._s_0.G !=
         (this->RayleighScattering).field0_0x0._s_0.G)) ||
       ((param_2->RayleighScattering).field0_0x0._s_0.B !=
        (this->RayleighScattering).field0_0x0._s_0.B)) ||
      ((param_2->RayleighScattering).field0_0x0._s_0.A !=
       (this->RayleighScattering).field0_0x0._s_0.A)))) {
    uVar8 = *(undefined8 *)&(param_2->RayleighScattering).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->RayleighScattering).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x80;
    *(undefined8 *)&(this->RayleighScattering).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->RayleighScattering).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x100) != 0) &&
     (fVar1 = param_2->RayleighExponentialDistribution,
     fVar1 != this->RayleighExponentialDistribution)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x100;
    this->RayleighExponentialDistribution = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x200) != 0) &&
     (fVar1 = param_2->MieScatteringScale, fVar1 != this->MieScatteringScale)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x200;
    this->MieScatteringScale = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x400) != 0) &&
     (((((param_2->MieScattering).field0_0x0._s_0.R != (this->MieScattering).field0_0x0._s_0.R ||
        ((param_2->MieScattering).field0_0x0._s_0.G != (this->MieScattering).field0_0x0._s_0.G)) ||
       ((param_2->MieScattering).field0_0x0._s_0.B != (this->MieScattering).field0_0x0._s_0.B)) ||
      ((param_2->MieScattering).field0_0x0._s_0.A != (this->MieScattering).field0_0x0._s_0.A)))) {
    uVar8 = *(undefined8 *)&(param_2->MieScattering).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->MieScattering).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x400;
    *(undefined8 *)&(this->MieScattering).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->MieScattering).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x800) != 0) &&
     (fVar1 = param_2->MieAbsorptionScale, fVar1 != this->MieAbsorptionScale)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x800;
    this->MieAbsorptionScale = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x1000) != 0) &&
     ((((param_2->MieAbsorption).field0_0x0._s_0.R != (this->MieAbsorption).field0_0x0._s_0.R ||
       ((param_2->MieAbsorption).field0_0x0._s_0.G != (this->MieAbsorption).field0_0x0._s_0.G)) ||
      (((param_2->MieAbsorption).field0_0x0._s_0.B != (this->MieAbsorption).field0_0x0._s_0.B ||
       ((param_2->MieAbsorption).field0_0x0._s_0.A != (this->MieAbsorption).field0_0x0._s_0.A))))))
  {
    uVar8 = *(undefined8 *)&(param_2->MieAbsorption).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->MieAbsorption).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x1000;
    *(undefined8 *)&(this->MieAbsorption).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->MieAbsorption).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x2000) != 0) &&
     (fVar1 = param_2->MieAnisotropy, fVar1 != this->MieAnisotropy)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x2000;
    this->MieAnisotropy = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x4000) != 0) &&
     (fVar1 = param_2->MieExponentialDistribution, fVar1 != this->MieExponentialDistribution)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x4000;
    this->MieExponentialDistribution = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x8000) != 0) &&
     (fVar1 = param_2->OtherAbsorptionScale, fVar1 != this->OtherAbsorptionScale)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x8000;
    this->OtherAbsorptionScale = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x10000) != 0) &&
     (((((param_2->OtherAbsorption).field0_0x0._s_0.R != (this->OtherAbsorption).field0_0x0._s_0.R
        || ((param_2->OtherAbsorption).field0_0x0._s_0.G !=
            (this->OtherAbsorption).field0_0x0._s_0.G)) ||
       ((param_2->OtherAbsorption).field0_0x0._s_0.B != (this->OtherAbsorption).field0_0x0._s_0.B))
      || ((param_2->OtherAbsorption).field0_0x0._s_0.A != (this->OtherAbsorption).field0_0x0._s_0.A)
      ))) {
    uVar8 = *(undefined8 *)&(param_2->OtherAbsorption).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->OtherAbsorption).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x10000;
    *(undefined8 *)&(this->OtherAbsorption).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->OtherAbsorption).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x20000) != 0) &&
     (fVar1 = param_2->OtherTentDistributionTipAltitude,
     fVar1 != this->OtherTentDistributionTipAltitude)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x20000;
    this->OtherTentDistributionTipAltitude = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x40000) != 0) &&
     (fVar1 = param_2->OtherTentDistributionTipValue, fVar1 != this->OtherTentDistributionTipValue))
  {
    this->ModifiedFlags = this->ModifiedFlags | 0x40000;
    this->OtherTentDistributionTipValue = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x80000) != 0) &&
     (fVar1 = param_2->OtherTentDistributionWidth, fVar1 != this->OtherTentDistributionWidth)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x80000;
    this->OtherTentDistributionWidth = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x100000) != 0) &&
     (((((param_2->SkyLuminanceFactor).field0_0x0._s_0.R !=
         (this->SkyLuminanceFactor).field0_0x0._s_0.R ||
        ((param_2->SkyLuminanceFactor).field0_0x0._s_0.G !=
         (this->SkyLuminanceFactor).field0_0x0._s_0.G)) ||
       ((param_2->SkyLuminanceFactor).field0_0x0._s_0.B !=
        (this->SkyLuminanceFactor).field0_0x0._s_0.B)) ||
      ((param_2->SkyLuminanceFactor).field0_0x0._s_0.A !=
       (this->SkyLuminanceFactor).field0_0x0._s_0.A)))) {
    uVar8 = *(undefined8 *)&(param_2->SkyLuminanceFactor).field0_0x0;
    uVar9 = *(undefined8 *)((longlong)&(param_2->SkyLuminanceFactor).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x100000;
    *(undefined8 *)&(this->SkyLuminanceFactor).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->SkyLuminanceFactor).field0_0x0 + 8) = uVar9;
  }
  if (((param_2->ModifiedFlags & 0x200000) != 0) &&
     ((((param_2->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.R !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.R ||
       ((param_2->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.G !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.G)) ||
      (((param_2->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.B !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.B ||
       ((param_2->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.A !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.A)))))) {
    uVar8 = *(undefined8 *)&(param_2->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0;
    uVar9 = *(undefined8 *)
             ((longlong)&(param_2->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8);
    this->ModifiedFlags = this->ModifiedFlags | 0x200000;
    *(undefined8 *)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 = uVar8;
    *(undefined8 *)((longlong)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8) =
         uVar9;
  }
  if (((param_2->ModifiedFlags & 0x400000) != 0) &&
     (fVar1 = param_2->AerialPespectiveViewDistanceScale,
     fVar1 != this->AerialPespectiveViewDistanceScale)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x400000;
    this->AerialPespectiveViewDistanceScale = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x800000) != 0) &&
     (fVar1 = param_2->HeightFogContribution, fVar1 != this->HeightFogContribution)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x800000;
    this->HeightFogContribution = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x1000000) != 0) &&
     (fVar1 = param_2->TransmittanceMinLightElevationAngle,
     fVar1 != this->TransmittanceMinLightElevationAngle)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x1000000;
    this->TransmittanceMinLightElevationAngle = fVar1;
  }
  if (((param_2->ModifiedFlags & 0x2000000) != 0) &&
     (fVar1 = param_2->AerialPerspectiveStartDepth, fVar1 != this->AerialPerspectiveStartDepth)) {
    this->ModifiedFlags = this->ModifiedFlags | 0x2000000;
    this->AerialPerspectiveStartDepth = fVar1;
  }
  if ((param_2->ModifiedFlags & 0x4000000) != 0) {
    uVar4 = this->field_0xb4;
    if (((param_2->bHoldout ^ this->bHoldout) & 1) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x4000000;
      this->field_0xb4 = (this->bHoldout ^ param_2->bHoldout) & 1 ^ uVar4;
    }
  }
  if ((param_2->ModifiedFlags & 0x8000000) != 0) {
    bVar5 = param_2->field_0xb4;
    bVar6 = this->field_0xb4;
    if (((bVar5 ^ bVar6) & 2) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x8000000;
      this->field_0xb4 = (bVar6 ^ bVar5) & 2 ^ bVar6;
    }
  }
  if ((param_2->ModifiedFlags & 0x10000000) != 0) {
    bVar5 = param_2->field_0xb4;
    bVar6 = this->field_0xb4;
    if (((bVar5 ^ bVar6) & 4) != 0) {
      this->ModifiedFlags = this->ModifiedFlags | 0x10000000;
      this->field_0xb4 = (bVar6 ^ bVar5) & 4 ^ bVar6;
    }
  }
  if ((param_2->ModifiedFlags & 0x20000000) != 0) {
    dVar2 = (param_2->ComponentTransform).Rotation.XY.m128d_f64[1];
    (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
         (param_2->ComponentTransform).Rotation.XY.m128d_f64[0];
    (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->ComponentTransform).Rotation.ZW.m128d_f64[1];
    (this->ComponentTransform).Rotation.ZW.m128d_f64[0] =
         (param_2->ComponentTransform).Rotation.ZW.m128d_f64[0];
    (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->ComponentTransform).Translation.XY.m128d_f64[1];
    (this->ComponentTransform).Translation.XY.m128d_f64[0] =
         (param_2->ComponentTransform).Translation.XY.m128d_f64[0];
    (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->ComponentTransform).Translation.ZW.m128d_f64[1];
    (this->ComponentTransform).Translation.ZW.m128d_f64[0] =
         (param_2->ComponentTransform).Translation.ZW.m128d_f64[0];
    (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_2->ComponentTransform).Scale3D.XY.m128d_f64[1];
    (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
         (param_2->ComponentTransform).Scale3D.XY.m128d_f64[0];
    (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_2->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar10 = (param_2->ComponentTransform).Scale3D.ZW.m128d_f64[1];
    this->ModifiedFlags = this->ModifiedFlags | 0x20000000;
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = dVar2;
    (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  }
  if ((param_2->ModifiedFlags & 0x40000000) != 0) {
    _Buf2 = &param_2->OverrideAtmosphericLight;
    iVar13 = memcmp(&this->OverrideAtmosphericLight,_Buf2,0x38);
    if (iVar13 != 0) {
      uVar12 = *(undefined7 *)&_Buf2->field_0x1;
      dVar2 = (param_2->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.X;
      (this->OverrideAtmosphericLight).EnabledMask = _Buf2->EnabledMask;
      *(undefined7 *)&(this->OverrideAtmosphericLight).field_0x1 = uVar12;
      (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.X = dVar2;
      dVar2 = (param_2->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Z;
      (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Y =
           (param_2->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Y;
      (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Z = dVar2;
      dVar2 = (param_2->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Y;
      (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.X =
           (param_2->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.X;
      (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Y = dVar2;
      dVar2 = (param_2->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Z;
      this->ModifiedFlags = this->ModifiedFlags | 0x40000000;
      (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Z = dVar2;
    }
  }
  return;
}

// Interpolate @ 145717de0

void __thiscall
FSkyAtmosphereDynamicState::Interpolate
          (FSkyAtmosphereDynamicState *this,FStateStreamInterpolateContext *param_1,
          FSkyAtmosphereDynamicState *param_2,FSkyAtmosphereDynamicState *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined7 uVar3;
  double *pdVar4;
  uint uVar5;
  bool bVar6;
  
  this->ModifiedFlags = 0;
  bVar6 = (param_3->ModifiedFlags & 1) != 0;
  if (bVar6) {
    this->ModifiedFlags = 1;
    this->TransformMode = param_3->TransformMode;
  }
  uVar5 = (uint)bVar6;
  if ((param_3->ModifiedFlags & 2) != 0) {
    uVar5 = uVar5 | 2;
    this->ModifiedFlags = uVar5;
    this->BottomRadius =
         (float)((double)(param_3->BottomRadius - param_2->BottomRadius) * param_1->Factor) +
         param_2->BottomRadius;
  }
  if ((param_3->ModifiedFlags & 4) != 0) {
    uVar5 = uVar5 | 4;
    this->ModifiedFlags = uVar5;
    (this->GroundAlbedo).field0_0x0 = (param_3->GroundAlbedo).field0_0x0;
  }
  if ((param_3->ModifiedFlags & 8) != 0) {
    uVar5 = uVar5 | 8;
    this->ModifiedFlags = uVar5;
    this->AtmosphereHeight =
         (float)((double)(param_3->AtmosphereHeight - param_2->AtmosphereHeight) * param_1->Factor)
         + param_2->AtmosphereHeight;
  }
  if ((param_3->ModifiedFlags & 0x10) != 0) {
    uVar5 = uVar5 | 0x10;
    this->ModifiedFlags = uVar5;
    this->MultiScatteringFactor =
         (float)((double)(param_3->MultiScatteringFactor - param_2->MultiScatteringFactor) *
                param_1->Factor) + param_2->MultiScatteringFactor;
  }
  if ((param_3->ModifiedFlags & 0x20) != 0) {
    uVar5 = uVar5 | 0x20;
    this->ModifiedFlags = uVar5;
    this->TraceSampleCountScale =
         (float)((double)(param_3->TraceSampleCountScale - param_2->TraceSampleCountScale) *
                param_1->Factor) + param_2->TraceSampleCountScale;
  }
  if ((param_3->ModifiedFlags & 0x40) != 0) {
    uVar5 = uVar5 | 0x40;
    this->ModifiedFlags = uVar5;
    this->RayleighScatteringScale =
         (float)((double)(param_3->RayleighScatteringScale - param_2->RayleighScatteringScale) *
                param_1->Factor) + param_2->RayleighScatteringScale;
  }
  if ((param_3->ModifiedFlags & 0x80) != 0) {
    uVar5 = uVar5 | 0x80;
    this->ModifiedFlags = uVar5;
    uVar1 = *(undefined8 *)((longlong)&(param_3->RayleighScattering).field0_0x0 + 8);
    *(undefined8 *)&(this->RayleighScattering).field0_0x0 =
         *(undefined8 *)&(param_3->RayleighScattering).field0_0x0;
    *(undefined8 *)((longlong)&(this->RayleighScattering).field0_0x0 + 8) = uVar1;
  }
  if ((param_3->ModifiedFlags & 0x100) != 0) {
    uVar5 = uVar5 | 0x100;
    this->ModifiedFlags = uVar5;
    this->RayleighExponentialDistribution =
         (float)((double)(param_3->RayleighExponentialDistribution -
                         param_2->RayleighExponentialDistribution) * param_1->Factor) +
         param_2->RayleighExponentialDistribution;
  }
  if ((param_3->ModifiedFlags & 0x200) != 0) {
    uVar5 = uVar5 | 0x200;
    this->ModifiedFlags = uVar5;
    this->MieScatteringScale =
         (float)((double)(param_3->MieScatteringScale - param_2->MieScatteringScale) *
                param_1->Factor) + param_2->MieScatteringScale;
  }
  if ((param_3->ModifiedFlags & 0x400) != 0) {
    uVar5 = uVar5 | 0x400;
    this->ModifiedFlags = uVar5;
    uVar1 = *(undefined8 *)((longlong)&(param_3->MieScattering).field0_0x0 + 8);
    *(undefined8 *)&(this->MieScattering).field0_0x0 =
         *(undefined8 *)&(param_3->MieScattering).field0_0x0;
    *(undefined8 *)((longlong)&(this->MieScattering).field0_0x0 + 8) = uVar1;
  }
  if ((param_3->ModifiedFlags & 0x800) != 0) {
    uVar5 = uVar5 | 0x800;
    this->ModifiedFlags = uVar5;
    this->MieAbsorptionScale =
         (float)((double)(param_3->MieAbsorptionScale - param_2->MieAbsorptionScale) *
                param_1->Factor) + param_2->MieAbsorptionScale;
  }
  if ((param_3->ModifiedFlags & 0x1000) != 0) {
    uVar5 = uVar5 | 0x1000;
    this->ModifiedFlags = uVar5;
    uVar1 = *(undefined8 *)((longlong)&(param_3->MieAbsorption).field0_0x0 + 8);
    *(undefined8 *)&(this->MieAbsorption).field0_0x0 =
         *(undefined8 *)&(param_3->MieAbsorption).field0_0x0;
    *(undefined8 *)((longlong)&(this->MieAbsorption).field0_0x0 + 8) = uVar1;
  }
  if ((param_3->ModifiedFlags & 0x2000) != 0) {
    uVar5 = uVar5 | 0x2000;
    this->ModifiedFlags = uVar5;
    this->MieAnisotropy =
         (float)((double)(param_3->MieAnisotropy - param_2->MieAnisotropy) * param_1->Factor) +
         param_2->MieAnisotropy;
  }
  if ((param_3->ModifiedFlags & 0x4000) != 0) {
    uVar5 = uVar5 | 0x4000;
    this->ModifiedFlags = uVar5;
    this->MieExponentialDistribution =
         (float)((double)(param_3->MieExponentialDistribution - param_2->MieExponentialDistribution)
                * param_1->Factor) + param_2->MieExponentialDistribution;
  }
  if ((param_3->ModifiedFlags & 0x8000) != 0) {
    uVar5 = uVar5 | 0x8000;
    this->ModifiedFlags = uVar5;
    this->OtherAbsorptionScale =
         (float)((double)(param_3->OtherAbsorptionScale - param_2->OtherAbsorptionScale) *
                param_1->Factor) + param_2->OtherAbsorptionScale;
  }
  if ((param_3->ModifiedFlags & 0x10000) != 0) {
    uVar5 = uVar5 | 0x10000;
    this->ModifiedFlags = uVar5;
    uVar1 = *(undefined8 *)((longlong)&(param_3->OtherAbsorption).field0_0x0 + 8);
    *(undefined8 *)&(this->OtherAbsorption).field0_0x0 =
         *(undefined8 *)&(param_3->OtherAbsorption).field0_0x0;
    *(undefined8 *)((longlong)&(this->OtherAbsorption).field0_0x0 + 8) = uVar1;
  }
  pdVar4 = &param_1->Factor;
  if ((param_3->ModifiedFlags & 0x20000) != 0) {
    uVar5 = uVar5 | 0x20000;
    this->ModifiedFlags = uVar5;
    this->OtherTentDistributionTipAltitude =
         (float)((double)(param_3->OtherTentDistributionTipAltitude -
                         param_2->OtherTentDistributionTipAltitude) * *pdVar4) +
         param_2->OtherTentDistributionTipAltitude;
  }
  if ((param_3->ModifiedFlags & 0x40000) != 0) {
    uVar5 = uVar5 | 0x40000;
    this->ModifiedFlags = uVar5;
    this->OtherTentDistributionTipValue =
         (float)((double)(param_3->OtherTentDistributionTipValue -
                         param_2->OtherTentDistributionTipValue) * *pdVar4) +
         param_2->OtherTentDistributionTipValue;
  }
  if ((param_3->ModifiedFlags & 0x80000) != 0) {
    uVar5 = uVar5 | 0x80000;
    this->ModifiedFlags = uVar5;
    this->OtherTentDistributionWidth =
         (float)((double)(param_3->OtherTentDistributionWidth - param_2->OtherTentDistributionWidth)
                * *pdVar4) + param_2->OtherTentDistributionWidth;
  }
  if ((param_3->ModifiedFlags & 0x100000) != 0) {
    uVar5 = uVar5 | 0x100000;
    this->ModifiedFlags = uVar5;
    uVar1 = *(undefined8 *)((longlong)&(param_3->SkyLuminanceFactor).field0_0x0 + 8);
    *(undefined8 *)&(this->SkyLuminanceFactor).field0_0x0 =
         *(undefined8 *)&(param_3->SkyLuminanceFactor).field0_0x0;
    *(undefined8 *)((longlong)&(this->SkyLuminanceFactor).field0_0x0 + 8) = uVar1;
  }
  if ((param_3->ModifiedFlags & 0x200000) != 0) {
    uVar5 = uVar5 | 0x200000;
    this->ModifiedFlags = uVar5;
    uVar1 = *(undefined8 *)
             ((longlong)&(param_3->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8);
    *(undefined8 *)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 =
         *(undefined8 *)&(param_3->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0;
    *(undefined8 *)((longlong)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8) =
         uVar1;
  }
  if ((param_3->ModifiedFlags & 0x400000) != 0) {
    uVar5 = uVar5 | 0x400000;
    this->ModifiedFlags = uVar5;
    this->AerialPespectiveViewDistanceScale =
         (float)((double)(param_3->AerialPespectiveViewDistanceScale -
                         param_2->AerialPespectiveViewDistanceScale) * param_1->Factor) +
         param_2->AerialPespectiveViewDistanceScale;
  }
  if ((param_3->ModifiedFlags & 0x800000) != 0) {
    uVar5 = uVar5 | 0x800000;
    this->ModifiedFlags = uVar5;
    this->HeightFogContribution =
         (float)((double)(param_3->HeightFogContribution - param_2->HeightFogContribution) *
                param_1->Factor) + param_2->HeightFogContribution;
  }
  if ((param_3->ModifiedFlags & 0x1000000) != 0) {
    uVar5 = uVar5 | 0x1000000;
    this->ModifiedFlags = uVar5;
    this->TransmittanceMinLightElevationAngle =
         (float)((double)(param_3->TransmittanceMinLightElevationAngle -
                         param_2->TransmittanceMinLightElevationAngle) * param_1->Factor) +
         param_2->TransmittanceMinLightElevationAngle;
  }
  if ((param_3->ModifiedFlags & 0x2000000) != 0) {
    uVar5 = uVar5 | 0x2000000;
    this->ModifiedFlags = uVar5;
    this->AerialPerspectiveStartDepth =
         (float)((double)(param_3->AerialPerspectiveStartDepth -
                         param_2->AerialPerspectiveStartDepth) * param_1->Factor) +
         param_2->AerialPerspectiveStartDepth;
  }
  if ((param_3->ModifiedFlags & 0x4000000) != 0) {
    uVar5 = uVar5 | 0x4000000;
    this->ModifiedFlags = uVar5;
    this->field_0xb4 = (this->bHoldout ^ param_3->bHoldout) & 1 ^ this->field_0xb4;
  }
  if ((param_3->ModifiedFlags & 0x8000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
    this->ModifiedFlags = uVar5;
    this->field_0xb4 = (this->field_0xb4 ^ param_3->field_0xb4) & 2 ^ this->field_0xb4;
  }
  if ((param_3->ModifiedFlags & 0x10000000) != 0) {
    uVar5 = uVar5 | 0x10000000;
    this->ModifiedFlags = uVar5;
    this->field_0xb4 = (this->field_0xb4 ^ param_3->field_0xb4) & 4 ^ this->field_0xb4;
  }
  if ((param_3->ModifiedFlags & 0x20000000) != 0) {
    this->ModifiedFlags = uVar5 | 0x20000000;
    UE::Math::TTransform<double>::Blend
              (&this->ComponentTransform,&param_2->ComponentTransform,&param_3->ComponentTransform,
               (float)param_1->Factor);
  }
  if ((param_3->ModifiedFlags & 0x40000000) != 0) {
    this->ModifiedFlags = this->ModifiedFlags | 0x40000000;
    uVar3 = *(undefined7 *)&(param_3->OverrideAtmosphericLight).field_0x1;
    dVar2 = (param_3->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.X;
    (this->OverrideAtmosphericLight).EnabledMask = (param_3->OverrideAtmosphericLight).EnabledMask;
    *(undefined7 *)&(this->OverrideAtmosphericLight).field_0x1 = uVar3;
    (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.X = dVar2;
    dVar2 = (param_3->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Z;
    (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Y =
         (param_3->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Y;
    (this->OverrideAtmosphericLight).Direction[0].field0_0x0._s_0.Z = dVar2;
    dVar2 = (param_3->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Y;
    (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.X =
         (param_3->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.X;
    (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Y = dVar2;
    (this->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Z =
         (param_3->OverrideAtmosphericLight).Direction[1].field0_0x0._s_0.Z;
  }
  return;
}

