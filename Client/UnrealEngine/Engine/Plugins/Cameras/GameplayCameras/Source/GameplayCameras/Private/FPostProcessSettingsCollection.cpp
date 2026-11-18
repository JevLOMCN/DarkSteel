// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// InternalLerp @ 14d5b1790

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::InternalLerp
          (FPostProcessSettingsCollection *this,FPostProcessSettings *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  UTextureCube *pUVar19;
  UTexture *pUVar20;
  UTexture2D *pUVar21;
  UCurveFloat *pUVar22;
  UObject *pUVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  TVector2<float>_u_0 TVar45;
  int iVar46;
  float *pfVar47;
  FScriptContainerElement *pFVar48;
  byte bVar49;
  longlong lVar50;
  FScriptContainerElement *pFVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  longlong lVar54;
  FWeightedBlendables *pFVar55;
  FScriptContainerElement *pFVar56;
  FScriptContainerElement *pFVar57;
  float fVar58;
  double dVar59;
  undefined1 auStackX_18 [8];
  float fStackX_20;
  float fStackX_24;
  
  fVar8 = __real_3f800000;
  if (param_2 <= 0.0) {
    return;
  }
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  bVar24 = __real_3f000000 <= param_2;
  if (((param_1->bOverride_TemperatureType != 0) || (this.bOverride_TemperatureType != 0)) &&
     (bVar24)) {
    this.bOverride_TemperatureType = '\x01';
    (this->PostProcessSettings).TemperatureType.Value = (param_1->TemperatureType).Value;
  }
  if ((param_1->bOverride_WhiteTemp != '\0') ||
     (bVar49 = *(byte *)&this->PostProcessSettings,
     ((byte *)&this->PostProcessSettings)->bOverride_WhiteTemp != '\0')) {
    this.bOverride_WhiteTemp = '\x01';
    bVar49 = *(byte *)&this->PostProcessSettings;
    (this->PostProcessSettings).WhiteTemp =
         (param_1->WhiteTemp - (this->PostProcessSettings).WhiteTemp) * param_2 +
         (this->PostProcessSettings).WhiteTemp;
  }
  if (((bVar49 | *(byte *)param_1) & 4) != 0) {
    bVar49 = bVar49 | 4;
    *(byte *)&this->PostProcessSettings = bVar49;
    (this->PostProcessSettings).WhiteTint =
         (param_1->WhiteTint - (this->PostProcessSettings).WhiteTint) * param_2 +
         (this->PostProcessSettings).WhiteTint;
  }
  if (((bVar49 | *(byte *)param_1) & 8) != 0) {
    *(byte *)&this->PostProcessSettings = bVar49 | 8;
    dVar12 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z;
    dVar9 = (param_1->ColorSaturation).field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturation).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    dVar11 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X =
         ((param_1->ColorSaturation).field0_0x0._s_0.X -
         (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X) * dVar59 +
         (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar25._8_4_ = SUB84(dVar44,0);
    auVar25._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorSaturation.field0_0x0 + 8) =
         auVar25;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W =
         (dVar9 - dVar10) * dVar59 + dVar11;
  }
  if ((param_1->bOverride_ColorContrast != '\0') || (this.bOverride_ColorContrast != '\0')) {
    this.bOverride_ColorContrast = '\x01';
    dVar12 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z;
    dVar9 = (param_1->ColorContrast).field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    dVar13 = (param_1->ColorContrast).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorContrast).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    dVar11 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X =
         ((param_1->ColorContrast).field0_0x0._s_0.X -
         (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X) * dVar59 +
         (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar26._8_4_ = SUB84(dVar44,0);
    auVar26._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar26._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorContrast.field0_0x0 + 8) =
         auVar26;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W = (dVar9 - dVar10) * dVar59 + dVar11
    ;
  }
  if ((param_1->bOverride_ColorGamma != '\0') || (this.bOverride_ColorGamma != '\0')) {
    this.bOverride_ColorGamma = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGamma).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGamma).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGamma).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X =
         ((param_1->ColorGamma).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar27._8_4_ = SUB84(dVar44,0);
    auVar27._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar27._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGamma.field0_0x0 + 8) =
         auVar27;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGain != '\0') || (this.bOverride_ColorGain != '\0')) {
    this.bOverride_ColorGain = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGain).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGain).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGain).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X =
         ((param_1->ColorGain).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar28._8_4_ = SUB84(dVar44,0);
    auVar28._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar28._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGain.field0_0x0 + 8) =
         auVar28;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if (((bool)param_1->bOverride_ColorOffset) || ((bool)this.bOverride_ColorOffset)) {
    this.bOverride_ColorOffset = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffset).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffset).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffset).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X =
         ((param_1->ColorOffset).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar29._8_4_ = SUB84(dVar44,0);
    auVar29._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar29._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorOffset.field0_0x0 + 8) =
         auVar29;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorSaturationShadows != 0) ||
     ((this->PostProcessSettings).bOverride_ColorSaturationShadows != 0)) {
    (this->PostProcessSettings).bOverride_ColorSaturationShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X =
         ((param_1->ColorSaturationShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar30._8_4_ = SUB84(dVar44,0);
    auVar30._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar30._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationShadows.field0_0x0 + 8) = auVar30;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorContrastShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastShadows != '\0')) {
    (this->PostProcessSettings).bOverride_ColorContrastShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y;
    dVar10 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X;
    dVar11 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z;
    dVar44 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W;
    dVar12 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
    dVar13 = (param_1->ColorContrastShadows).field0_0x0._s_0.Z;
    dVar14 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X =
         ((param_1->ColorContrastShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y =
         (dVar12 - dVar9) * dVar59 + dVar9;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z =
         (dVar13 - dVar11) * dVar59 + dVar11;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W =
         (dVar14 - dVar44) * dVar59 + dVar44;
  }
  if ((param_1->bOverride_ColorGammaShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGammaShadows != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorGammaShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X =
         ((param_1->ColorGammaShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar31._8_4_ = SUB84(dVar44,0);
    auVar31._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar31._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGammaShadows.field0_0x0 + 8)
         = auVar31;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGainShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGainShadows != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGainShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X =
         ((param_1->ColorGainShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar32._8_4_ = SUB84(dVar44,0);
    auVar32._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar32._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGainShadows.field0_0x0 + 8) =
         auVar32;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorOffsetShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetShadows != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorOffsetShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X =
         ((param_1->ColorOffsetShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar33._8_4_ = SUB84(dVar44,0);
    auVar33._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar33._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorOffsetShadows.field0_0x0 + 8)
         = auVar33;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorSaturationMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorSaturationMidtones != '\0')) {
    (this->PostProcessSettings).bOverride_ColorSaturationMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X =
         ((param_1->ColorSaturationMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar34._8_4_ = SUB84(dVar44,0);
    auVar34._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar34._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationMidtones.field0_0x0 + 8) = auVar34;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorContrastMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastMidtones != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorContrastMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X =
         ((param_1->ColorContrastMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar35._8_4_ = SUB84(dVar44,0);
    auVar35._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar35._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorContrastMidtones.field0_0x0 + 8) = auVar35;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if (((bool)param_1->bOverride_ColorGammaMidtones) ||
     ((bool)(this->PostProcessSettings).bOverride_ColorGammaMidtones)) {
    (this->PostProcessSettings).bOverride_ColorGammaMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X =
         ((param_1->ColorGammaMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar36._8_4_ = SUB84(dVar44,0);
    auVar36._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar36._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGammaMidtones.field0_0x0 + 8)
         = auVar36;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGainMidtones != 0) ||
     ((this->PostProcessSettings).bOverride_ColorGainMidtones != 0)) {
    (this->PostProcessSettings).bOverride_ColorGainMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X =
         ((param_1->ColorGainMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar37._8_4_ = SUB84(dVar44,0);
    auVar37._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar37._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGainMidtones.field0_0x0 + 8)
         = auVar37;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorOffsetMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetMidtones != '\0')) {
    (this->PostProcessSettings).bOverride_ColorOffsetMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X =
         ((param_1->ColorOffsetMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar38._8_4_ = SUB84(dVar44,0);
    auVar38._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar38._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorOffsetMidtones.field0_0x0 + 8) = auVar38;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorSaturationHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorSaturationHighlights != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorSaturationHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X =
         ((param_1->ColorSaturationHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar39._8_4_ = SUB84(dVar44,0);
    auVar39._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar39._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationHighlights.field0_0x0 + 8) = auVar39;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorContrastHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_ColorContrastHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X =
         ((param_1->ColorContrastHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar40._8_4_ = SUB84(dVar44,0);
    auVar40._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar40._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorContrastHighlights.field0_0x0 + 8) = auVar40;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGammaHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGammaHighlights != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorGammaHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X =
         ((param_1->ColorGammaHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar41._8_4_ = SUB84(dVar44,0);
    auVar41._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar41._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorGammaHighlights.field0_0x0 + 8) = auVar41;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGainHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGainHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGainHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X =
         ((param_1->ColorGainHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar42._8_4_ = SUB84(dVar44,0);
    auVar42._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar42._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorGainHighlights.field0_0x0 + 8) = auVar42;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorOffsetHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetHighlights != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorOffsetHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X =
         ((param_1->ColorOffsetHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar43._8_4_ = SUB84(dVar44,0);
    auVar43._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar43._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorOffsetHighlights.field0_0x0 + 8) = auVar43;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if (((bool)param_1->bOverride_ColorCorrectionShadowsMax) ||
     ((bool)(this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax)) {
    (this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax = '\x01';
    fVar58 = (this->PostProcessSettings).ColorCorrectionShadowsMax;
    (this->PostProcessSettings).ColorCorrectionShadowsMax =
         (param_1->ColorCorrectionShadowsMax - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if ((param_1->bOverride_ColorCorrectionHighlightsMin != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin != 0)) {
    (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin = '\x01';
    fVar58 = (this->PostProcessSettings).ColorCorrectionHighlightsMin;
    bVar49 = *puVar52;
    (this->PostProcessSettings).ColorCorrectionHighlightsMin =
         (param_1->ColorCorrectionHighlightsMin - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ColorCorrectionHighlightsMax != '\0') || ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).ColorCorrectionHighlightsMax;
    (this->PostProcessSettings).ColorCorrectionHighlightsMax =
         (param_1->ColorCorrectionHighlightsMax - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BlueCorrection != '\0') || ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BlueCorrection;
    (this->PostProcessSettings).BlueCorrection =
         (param_1->BlueCorrection - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if ((param_1->bOverride_ExpandGamut != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).ExpandGamut;
    (this->PostProcessSettings).ExpandGamut = (param_1->ExpandGamut - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ToneCurveAmount != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).ToneCurveAmount;
    (this->PostProcessSettings).ToneCurveAmount =
         (param_1->ToneCurveAmount - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if ((param_1->bOverride_FilmSlope != '\0') || ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).FilmSlope;
    (this->PostProcessSettings).FilmSlope = (param_1->FilmSlope - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmToe != '\0') || ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).FilmToe;
    (this->PostProcessSettings).FilmToe = (param_1->FilmToe - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_FilmShoulder) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x3 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).FilmShoulder;
    (this->PostProcessSettings).FilmShoulder = (param_1->FilmShoulder - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x4;
  if ((param_1->bOverride_FilmBlackClip != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_FilmBlackClip != 0)) {
    (this->PostProcessSettings).bOverride_FilmBlackClip = '\x01';
    fVar58 = (this->PostProcessSettings).FilmBlackClip;
    bVar49 = *puVar52;
    (this->PostProcessSettings).FilmBlackClip = (param_1->FilmBlackClip - fVar58) * param_2 + fVar58
    ;
  }
  if ((param_1->bOverride_FilmWhiteClip != '\0') || ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).FilmWhiteClip;
    (this->PostProcessSettings).FilmWhiteClip = (param_1->FilmWhiteClip - fVar58) * param_2 + fVar58
    ;
  }
  puVar53 = &param_1->field_0x4;
  if (((bVar49 | *puVar53) & 4) != 0) {
    *puVar52 = bVar49 | 4;
    fVar58 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.A;
    fVar5 = (param_1->SceneColorTint).field0_0x0._s_0.G;
    fVar6 = (param_1->SceneColorTint).field0_0x0._s_0.B;
    fVar7 = (param_1->SceneColorTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.R =
         ((param_1->SceneColorTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3
    ;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4
    ;
  }
  if ((param_1->bOverride_SceneFringeIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_SceneFringeIntensity != '\0')) {
    puVar52 = &(this->PostProcessSettings).field_0x4;
    (this->PostProcessSettings).bOverride_SceneFringeIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).SceneFringeIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).SceneFringeIntensity =
         (param_1->SceneFringeIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | *puVar53) & 0x10) != 0) {
    (this->PostProcessSettings).field_0x4 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).ChromaticAberrationStartOffset;
    (this->PostProcessSettings).ChromaticAberrationStartOffset =
         (param_1->ChromaticAberrationStartOffset - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x5;
  if ((param_1->bOverride_BloomIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).BloomIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomIntensity =
         (param_1->BloomIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomGaussianIntensity != '\0') || ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomGaussianIntensity;
    (this->PostProcessSettings).BloomGaussianIntensity =
         (param_1->BloomGaussianIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomThreshold != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomThreshold;
    (this->PostProcessSettings).BloomThreshold =
         (param_1->BloomThreshold - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x5) & 0x10) != 0) {
    (this->PostProcessSettings).field_0x5 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom1Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom1Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom1Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.R =
         ((param_1->Bloom1Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_BloomSizeScale != 0) ||
     ((this->PostProcessSettings).bOverride_BloomSizeScale != 0)) {
    (this->PostProcessSettings).bOverride_BloomSizeScale = '\x01';
    fVar58 = (this->PostProcessSettings).BloomSizeScale;
    (this->PostProcessSettings).BloomSizeScale =
         (param_1->BloomSizeScale - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x5;
  if ((param_1->bOverride_Bloom1Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom1Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom1Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom1Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom1Size = (param_1->Bloom1Size - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_Bloom2Tint) || ((char)bVar49 < '\0')) {
    *puVar52 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom2Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom2Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom2Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.R =
         ((param_1->Bloom2Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_Bloom2Size != '\0') ||
     ((this->PostProcessSettings).bOverride_Bloom2Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom2Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom2Size;
    (this->PostProcessSettings).Bloom2Size = (param_1->Bloom2Size - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if ((param_1->bOverride_Bloom3Tint != 0) ||
     ((this->PostProcessSettings).bOverride_Bloom3Tint != 0)) {
    (this->PostProcessSettings).bOverride_Bloom3Tint = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom3Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom3Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom3Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.R =
         ((param_1->Bloom3Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_Bloom3Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom3Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom3Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom3Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom3Size = (param_1->Bloom3Size - fVar58) * param_2 + fVar58;
  }
  puVar53 = &param_1->field_0x6;
  if (((bVar49 | *puVar53) & 4) != 0) {
    *puVar52 = bVar49 | 4;
    fVar58 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom4Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom4Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom4Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.R =
         ((param_1->Bloom4Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if ((param_1->bOverride_Bloom4Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom4Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom4Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom4Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom4Size = (param_1->Bloom4Size - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | *puVar53) & 0x10) != 0) {
    *puVar52 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom5Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom5Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom5Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.R =
         ((param_1->Bloom5Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if ((param_1->bOverride_Bloom5Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom5Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom5Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom5Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom5Size = (param_1->Bloom5Size - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x6) & 0x40) != 0) {
    *puVar52 = bVar49 | 0x40;
    fVar58 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom6Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom6Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom6Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.R =
         ((param_1->Bloom6Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((bool)param_1->bOverride_Bloom6Size) ||
     ((bool)(this->PostProcessSettings).bOverride_Bloom6Size)) {
    (this->PostProcessSettings).bOverride_Bloom6Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom6Size;
    (this->PostProcessSettings).Bloom6Size = (param_1->Bloom6Size - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x8;
  if ((param_1->bOverride_BloomDirtMaskIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).BloomDirtMaskIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomDirtMaskIntensity =
         (param_1->BloomDirtMaskIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x8) & 0x10) != 0) {
    *puVar52 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.A;
    fVar5 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.G;
    fVar6 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.B;
    fVar7 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.R =
         ((param_1->BloomDirtMaskTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x7;
  if ((param_1->bOverride_BloomConvolutionIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomConvolutionIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomConvolutionIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).BloomConvolutionIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomConvolutionIntensity =
         (param_1->BloomConvolutionIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomConvolutionScatterDispersion != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomConvolutionScatterDispersion;
    (this->PostProcessSettings).BloomConvolutionScatterDispersion =
         (param_1->BloomConvolutionScatterDispersion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomConvolutionSize != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomConvolutionSize;
    (this->PostProcessSettings).BloomConvolutionSize =
         (param_1->BloomConvolutionSize - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x7;
  if (((bVar49 | param_1->field_0x7) & 0x20) != 0) {
    *puVar52 = bVar49 | 0x20;
    dVar9 = (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y;
    dVar10 = (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X;
    dVar11 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X =
         ((param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X - dVar10) * (double)param_2 + dVar10
    ;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y =
         (dVar11 - dVar9) * (double)param_2 + dVar9;
  }
  if (((bool)param_1->bOverride_BloomConvolutionPreFilterMin) ||
     ((bool)(this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin = '\x01';
    fVar58 = (this->PostProcessSettings).BloomConvolutionPreFilterMin;
    (this->PostProcessSettings).BloomConvolutionPreFilterMin =
         (param_1->BloomConvolutionPreFilterMin - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x8;
  if ((param_1->bOverride_BloomConvolutionPreFilterMax != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax != 0)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax = '\x01';
    fVar58 = (this->PostProcessSettings).BloomConvolutionPreFilterMax;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomConvolutionPreFilterMax =
         (param_1->BloomConvolutionPreFilterMax - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x8) & 2) != 0) {
    *puVar52 = bVar49 | 2;
    fVar58 = (this->PostProcessSettings).BloomConvolutionPreFilterMult;
    (this->PostProcessSettings).BloomConvolutionPreFilterMult =
         (param_1->BloomConvolutionPreFilterMult - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x4;
  if (((bool)param_1->bOverride_AmbientCubemapIntensity) ||
     (bVar49 = *puVar52, (bool)(this->PostProcessSettings).bOverride_AmbientCubemapIntensity)) {
    (this->PostProcessSettings).bOverride_AmbientCubemapIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientCubemapIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AmbientCubemapIntensity =
         (param_1->AmbientCubemapIntensity - fVar58) * param_2 + fVar58;
  }
  puVar53 = &(this->PostProcessSettings).field_0x8;
  if (((bVar49 | param_1->field_0x4) & 0x40) != 0) {
    *puVar52 = bVar49 | 0x40;
    fVar58 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.A;
    fVar5 = (param_1->AmbientCubemapTint).field0_0x0._s_0.G;
    fVar6 = (param_1->AmbientCubemapTint).field0_0x0._s_0.B;
    fVar7 = (param_1->AmbientCubemapTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.R =
         ((param_1->AmbientCubemapTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_CameraShutterSpeed != '\0') ||
     (bVar49 = *puVar53, (this->PostProcessSettings).bOverride_CameraShutterSpeed != '\0')) {
    (this->PostProcessSettings).bOverride_CameraShutterSpeed = '\x01';
    fVar58 = (this->PostProcessSettings).CameraShutterSpeed;
    bVar49 = *puVar53;
    (this->PostProcessSettings).CameraShutterSpeed =
         (param_1->CameraShutterSpeed - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_CameraISO) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x8 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).CameraISO;
    (this->PostProcessSettings).CameraISO = (param_1->CameraISO - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x9;
  if ((param_1->bOverride_AutoExposureLowPercent != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_AutoExposureLowPercent != '\0')) {
    (this->PostProcessSettings).bOverride_AutoExposureLowPercent = '\x01';
    fVar58 = (this->PostProcessSettings).AutoExposureLowPercent;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AutoExposureLowPercent =
         (param_1->AutoExposureLowPercent - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AutoExposureHighPercent != '\0') || ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureHighPercent;
    (this->PostProcessSettings).AutoExposureHighPercent =
         (param_1->AutoExposureHighPercent - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AutoExposureMinBrightness != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureMinBrightness;
    (this->PostProcessSettings).AutoExposureMinBrightness =
         (param_1->AutoExposureMinBrightness - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x9;
  if ((param_1->bOverride_AutoExposureMaxBrightness != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureMaxBrightness;
    (this->PostProcessSettings).AutoExposureMaxBrightness =
         (param_1->AutoExposureMaxBrightness - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AutoExposureSpeedUp != '\0') || ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureSpeedUp;
    (this->PostProcessSettings).AutoExposureSpeedUp =
         (param_1->AutoExposureSpeedUp - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_AutoExposureSpeedDown) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x9 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).AutoExposureSpeedDown;
    (this->PostProcessSettings).AutoExposureSpeedDown =
         (param_1->AutoExposureSpeedDown - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xa;
  if ((param_1->bOverride_AutoExposureBias != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_AutoExposureBias != 0)) {
    (this->PostProcessSettings).bOverride_AutoExposureBias = '\x01';
    fVar58 = (this->PostProcessSettings).AutoExposureBias;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AutoExposureBias =
         (param_1->AutoExposureBias - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_HistogramLogMin != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).HistogramLogMin;
    (this->PostProcessSettings).HistogramLogMin =
         (param_1->HistogramLogMin - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_HistogramLogMax != '\0') || ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).HistogramLogMax;
    (this->PostProcessSettings).HistogramLogMax =
         (param_1->HistogramLogMax - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xa;
  if (((param_1->bOverride_LocalExposureMethod != '\0') || ((bVar49 & 0x40) != 0)) && (bVar24)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    (this->PostProcessSettings).LocalExposureMethod = param_1->LocalExposureMethod;
  }
  if (((bool)param_1->bOverride_LocalExposureContrastScale_DEPRECATED) || ((char)bVar49 < '\0')) {
    *puVar52 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED;
    (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED =
         (param_1->LocalExposureContrastScale_DEPRECATED - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xb;
  if ((param_1->bOverride_LocalExposureHighlightContrastScale != 0) ||
     (bVar49 = *puVar52,
     (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale != 0)) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureHighlightContrastScale;
    bVar49 = *puVar52;
    (this->PostProcessSettings).LocalExposureHighlightContrastScale =
         (param_1->LocalExposureHighlightContrastScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureShadowContrastScale != '\0') || ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureShadowContrastScale;
    (this->PostProcessSettings).LocalExposureShadowContrastScale =
         (param_1->LocalExposureShadowContrastScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureHighlightThreshold != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureHighlightThreshold;
    (this->PostProcessSettings).LocalExposureHighlightThreshold =
         (param_1->LocalExposureHighlightThreshold - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xb;
  if ((param_1->bOverride_LocalExposureShadowThreshold != '\0') || ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureShadowThreshold;
    (this->PostProcessSettings).LocalExposureShadowThreshold =
         (param_1->LocalExposureShadowThreshold - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureDetailStrength != '\0') || ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureDetailStrength;
    (this->PostProcessSettings).LocalExposureDetailStrength =
         (param_1->LocalExposureDetailStrength - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_LocalExposureBlurredLuminanceBlend) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0xb = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend;
    (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend =
         (param_1->LocalExposureBlurredLuminanceBlend - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0) ||
     ((this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0)) {
    (this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent;
    (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent =
         (param_1->LocalExposureBlurredLuminanceKernelSizePercent - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureHighlightThresholdStrength != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureHighlightThresholdStrength;
    (this->PostProcessSettings).LocalExposureHighlightThresholdStrength =
         (param_1->LocalExposureHighlightThresholdStrength - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureShadowThresholdStrength != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureShadowThresholdStrength;
    (this->PostProcessSettings).LocalExposureShadowThresholdStrength =
         (param_1->LocalExposureShadowThresholdStrength - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureMiddleGreyBias != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureMiddleGreyBias;
    (this->PostProcessSettings).LocalExposureMiddleGreyBias =
         (param_1->LocalExposureMiddleGreyBias - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LensFlareIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareIntensity;
    (this->PostProcessSettings).LensFlareIntensity =
         (param_1->LensFlareIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LensFlareTint != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareTint != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareTint = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.A;
    fVar5 = (param_1->LensFlareTint).field0_0x0._s_0.G;
    fVar6 = (param_1->LensFlareTint).field0_0x0._s_0.B;
    fVar7 = (param_1->LensFlareTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.R =
         ((param_1->LensFlareTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((bool)param_1->bOverride_LensFlareBokehSize) ||
     ((bool)(this->PostProcessSettings).bOverride_LensFlareBokehSize)) {
    (this->PostProcessSettings).bOverride_LensFlareBokehSize = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareBokehSize;
    (this->PostProcessSettings).LensFlareBokehSize =
         (param_1->LensFlareBokehSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LensFlareThreshold != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareThreshold != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareThreshold = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareThreshold;
    (this->PostProcessSettings).LensFlareThreshold =
         (param_1->LensFlareThreshold - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_VignetteIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_VignetteIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_VignetteIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).VignetteIntensity;
    (this->PostProcessSettings).VignetteIntensity =
         (param_1->VignetteIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_Sharpen != '\0') ||
     ((this->PostProcessSettings).bOverride_Sharpen != '\0')) {
    (this->PostProcessSettings).bOverride_Sharpen = '\x01';
    fVar58 = (this->PostProcessSettings).Sharpen;
    (this->PostProcessSettings).Sharpen = (param_1->Sharpen - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensity;
    (this->PostProcessSettings).FilmGrainIntensity =
         (param_1->FilmGrainIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_FilmGrainIntensityShadows) ||
     ((bool)(this->PostProcessSettings).bOverride_FilmGrainIntensityShadows)) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityShadows = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensityShadows;
    (this->PostProcessSettings).FilmGrainIntensityShadows =
         (param_1->FilmGrainIntensityShadows - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainIntensityMidtones != 0) ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones != 0)) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensityMidtones;
    (this->PostProcessSettings).FilmGrainIntensityMidtones =
         (param_1->FilmGrainIntensityMidtones - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainIntensityHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensityHighlights;
    (this->PostProcessSettings).FilmGrainIntensityHighlights =
         (param_1->FilmGrainIntensityHighlights - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainShadowsMax != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainShadowsMax != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainShadowsMax = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainShadowsMax;
    (this->PostProcessSettings).FilmGrainShadowsMax =
         (param_1->FilmGrainShadowsMax - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainHighlightsMin != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainHighlightsMin != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMin = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainHighlightsMin;
    (this->PostProcessSettings).FilmGrainHighlightsMin =
         (param_1->FilmGrainHighlightsMin - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainHighlightsMax != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainHighlightsMax != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMax = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainHighlightsMax;
    (this->PostProcessSettings).FilmGrainHighlightsMax =
         (param_1->FilmGrainHighlightsMax - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainTexelSize != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainTexelSize != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainTexelSize = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainTexelSize;
    (this->PostProcessSettings).FilmGrainTexelSize =
         (param_1->FilmGrainTexelSize - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_AmbientOcclusionIntensity) ||
     ((bool)(this->PostProcessSettings).bOverride_AmbientOcclusionIntensity)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionIntensity;
    (this->PostProcessSettings).AmbientOcclusionIntensity =
         (param_1->AmbientOcclusionIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionStaticFraction != 0) ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction != 0)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionStaticFraction;
    (this->PostProcessSettings).AmbientOcclusionStaticFraction =
         (param_1->AmbientOcclusionStaticFraction - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionRadius != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadius = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionRadius;
    (this->PostProcessSettings).AmbientOcclusionRadius =
         (param_1->AmbientOcclusionRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionFadeDistance != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionFadeDistance;
    (this->PostProcessSettings).AmbientOcclusionFadeDistance =
         (param_1->AmbientOcclusionFadeDistance - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionFadeRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionFadeRadius;
    (this->PostProcessSettings).AmbientOcclusionFadeRadius =
         (param_1->AmbientOcclusionFadeRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionDistance_DEPRECATED != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED;
    (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED =
         (param_1->AmbientOcclusionDistance_DEPRECATED - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionPower != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionPower != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionPower = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionPower;
    (this->PostProcessSettings).AmbientOcclusionPower =
         (param_1->AmbientOcclusionPower - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_AmbientOcclusionBias) ||
     ((bool)(this->PostProcessSettings).bOverride_AmbientOcclusionBias)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionBias = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionBias;
    (this->PostProcessSettings).AmbientOcclusionBias =
         (param_1->AmbientOcclusionBias - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionQuality != 0) ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionQuality != 0)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionQuality = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionQuality;
    (this->PostProcessSettings).AmbientOcclusionQuality =
         (param_1->AmbientOcclusionQuality - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionMipBlend != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionMipBlend;
    (this->PostProcessSettings).AmbientOcclusionMipBlend =
         (param_1->AmbientOcclusionMipBlend - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionMipScale != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipScale != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipScale = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionMipScale;
    (this->PostProcessSettings).AmbientOcclusionMipScale =
         (param_1->AmbientOcclusionMipScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionMipThreshold != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionMipThreshold;
    (this->PostProcessSettings).AmbientOcclusionMipThreshold =
         (param_1->AmbientOcclusionMipThreshold - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionTemporalBlendWeight != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight;
    (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight =
         (param_1->AmbientOcclusionTemporalBlendWeight - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_IndirectLightingColor) ||
     ((bool)(this->PostProcessSettings).bOverride_IndirectLightingColor)) {
    (this->PostProcessSettings).bOverride_IndirectLightingColor = '\x01';
    fVar58 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.A;
    fVar5 = (param_1->IndirectLightingColor).field0_0x0._s_0.G;
    fVar6 = (param_1->IndirectLightingColor).field0_0x0._s_0.B;
    fVar7 = (param_1->IndirectLightingColor).field0_0x0._s_0.A;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.R =
         ((param_1->IndirectLightingColor).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1a;
  if ((param_1->bOverride_IndirectLightingIntensity != 0) ||
     ((this->PostProcessSettings).bOverride_IndirectLightingIntensity != 0)) {
    (this->PostProcessSettings).bOverride_IndirectLightingIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).IndirectLightingIntensity;
    (this->PostProcessSettings).IndirectLightingIntensity =
         (param_1->IndirectLightingIntensity - fVar58) * param_2 + fVar58;
  }
  if (param_1->bOverride_DepthOfFieldFocalDistance != '\0') {
    fVar58 = (this->PostProcessSettings).DepthOfFieldFocalDistance;
    if ((fVar58 == 0.0) || (param_1->DepthOfFieldFocalDistance == 0.0)) {
      fVar58 = param_1->DepthOfFieldFocalDistance;
    }
    else {
      fVar58 = (param_1->DepthOfFieldFocalDistance - fVar58) * param_2 + fVar58;
    }
    (this->PostProcessSettings).DepthOfFieldFocalDistance = fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldFstop != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFstop != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFstop = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFstop;
    (this->PostProcessSettings).DepthOfFieldFstop =
         (param_1->DepthOfFieldFstop - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldMinFstop != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldMinFstop != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldMinFstop = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldMinFstop;
    (this->PostProcessSettings).DepthOfFieldMinFstop =
         (param_1->DepthOfFieldMinFstop - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_DepthOfFieldSensorWidth) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldSensorWidth;
    (this->PostProcessSettings).DepthOfFieldSensorWidth =
         (param_1->DepthOfFieldSensorWidth - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1b;
  if ((param_1->bOverride_DepthOfFieldSqueezeFactor != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor != 0)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldSqueezeFactor;
    (this->PostProcessSettings).DepthOfFieldSqueezeFactor =
         (param_1->DepthOfFieldSqueezeFactor - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldDepthBlurRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldDepthBlurRadius;
    (this->PostProcessSettings).DepthOfFieldDepthBlurRadius =
         (param_1->DepthOfFieldDepthBlurRadius - fVar58) * param_2 + fVar58;
  }
  if (((param_1->bOverride_DepthOfFieldUseHairDepth != '\0') ||
      ((this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x66c;
    *(uint *)&(this->PostProcessSettings).field_0x66c =
         (ZPULL(uVar16,0,1) ^ param_1->DepthOfFieldUseHairDepth) & 1 ^ uVar16;
  }
  if ((param_1->bOverride_DepthOfFieldDepthBlurAmount != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldDepthBlurAmount;
    (this->PostProcessSettings).DepthOfFieldDepthBlurAmount =
         (param_1->DepthOfFieldDepthBlurAmount - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalBokeh != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldPetzvalBokeh;
    (this->PostProcessSettings).DepthOfFieldPetzvalBokeh =
         (param_1->DepthOfFieldPetzvalBokeh - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalBokehFalloff != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff;
    (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff =
         (param_1->DepthOfFieldPetzvalBokehFalloff - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents = '\x01';
    fStackX_20 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0._s_0.
                 X;
    fStackX_24 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0._s_0.
                 Y;
    fStackX_20 = ((param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.X - fStackX_20)
                 * param_2 + fStackX_20;
    fStackX_24 = ((param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.Y - fStackX_24)
                 * param_2 + fStackX_24;
    TVar45._s_0.Y = fStackX_24;
    TVar45._s_0.X = fStackX_20;
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0 = TVar45;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius;
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius =
         (param_1->DepthOfFieldPetzvalExclusionBoxRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldBarrelRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldBarrelRadius;
    (this->PostProcessSettings).DepthOfFieldBarrelRadius =
         (param_1->DepthOfFieldBarrelRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldBarrelLength != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldBarrelLength;
    (this->PostProcessSettings).DepthOfFieldBarrelLength =
         (param_1->DepthOfFieldBarrelLength - fVar58) * param_2 + fVar58;
  }
  bVar49 = param_1->field_0x1c;
  if (param_1->bOverride_DepthOfFieldMatteBoxFlags != 0) {
    fVar58 = param_1->DepthOfFieldMatteBoxFlags[0].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[0].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll = fVar58;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length =
         param_1->DepthOfFieldMatteBoxFlags[0].Length;
    fVar58 = param_1->DepthOfFieldMatteBoxFlags[1].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[1].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll = fVar58;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length =
         param_1->DepthOfFieldMatteBoxFlags[1].Length;
    fVar58 = param_1->DepthOfFieldMatteBoxFlags[2].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[2].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll = fVar58;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length =
         param_1->DepthOfFieldMatteBoxFlags[2].Length;
    bVar49 = param_1->field_0x1c;
  }
  if (((bVar49 & 0x10) != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFocalRegion;
    (this->PostProcessSettings).DepthOfFieldFocalRegion =
         (param_1->DepthOfFieldFocalRegion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldNearTransitionRegion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldNearTransitionRegion;
    (this->PostProcessSettings).DepthOfFieldNearTransitionRegion =
         (param_1->DepthOfFieldNearTransitionRegion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldFarTransitionRegion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFarTransitionRegion;
    (this->PostProcessSettings).DepthOfFieldFarTransitionRegion =
         (param_1->DepthOfFieldFarTransitionRegion - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_DepthOfFieldScale) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldScale)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldScale = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldScale;
    (this->PostProcessSettings).DepthOfFieldScale =
         (param_1->DepthOfFieldScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldNearBlurSize != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize != 0)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldNearBlurSize;
    (this->PostProcessSettings).DepthOfFieldNearBlurSize =
         (param_1->DepthOfFieldNearBlurSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldFarBlurSize != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFarBlurSize;
    (this->PostProcessSettings).DepthOfFieldFarBlurSize =
         (param_1->DepthOfFieldFarBlurSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldOcclusion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldOcclusion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldOcclusion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldOcclusion;
    (this->PostProcessSettings).DepthOfFieldOcclusion =
         (param_1->DepthOfFieldOcclusion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldSkyFocusDistance != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldSkyFocusDistance;
    (this->PostProcessSettings).DepthOfFieldSkyFocusDistance =
         (param_1->DepthOfFieldSkyFocusDistance - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldVignetteSize != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldVignetteSize;
    (this->PostProcessSettings).DepthOfFieldVignetteSize =
         (param_1->DepthOfFieldVignetteSize - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_DepthOfFieldAspectRatioScalar) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldAspectRatioScalar;
    (this->PostProcessSettings).DepthOfFieldAspectRatioScalar =
         (param_1->DepthOfFieldAspectRatioScalar - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_MotionBlurAmount != '\0') ||
     ((this->PostProcessSettings).bOverride_MotionBlurAmount != '\0')) {
    (this->PostProcessSettings).bOverride_MotionBlurAmount = '\x01';
    fVar58 = (this->PostProcessSettings).MotionBlurAmount;
    (this->PostProcessSettings).MotionBlurAmount =
         (param_1->MotionBlurAmount - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_MotionBlurMax) ||
     ((bool)(this->PostProcessSettings).bOverride_MotionBlurMax)) {
    (this->PostProcessSettings).bOverride_MotionBlurMax = '\x01';
    fVar58 = (this->PostProcessSettings).MotionBlurMax;
    (this->PostProcessSettings).MotionBlurMax = (param_1->MotionBlurMax - fVar58) * param_2 + fVar58
    ;
  }
  if ((param_1->bOverride_MotionBlurPerObjectSize != '\0') ||
     ((this->PostProcessSettings).bOverride_MotionBlurPerObjectSize != '\0')) {
    (this->PostProcessSettings).bOverride_MotionBlurPerObjectSize = '\x01';
    fVar58 = (this->PostProcessSettings).MotionBlurPerObjectSize;
    (this->PostProcessSettings).MotionBlurPerObjectSize =
         (param_1->MotionBlurPerObjectSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ScreenSpaceReflectionQuality != '\0') ||
     ((this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality != '\0')) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality = '\x01';
    fVar58 = (this->PostProcessSettings).ScreenSpaceReflectionQuality;
    (this->PostProcessSettings).ScreenSpaceReflectionQuality =
         (param_1->ScreenSpaceReflectionQuality - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ScreenSpaceReflectionIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).ScreenSpaceReflectionIntensity;
    (this->PostProcessSettings).ScreenSpaceReflectionIntensity =
         (param_1->ScreenSpaceReflectionIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_ScreenSpaceReflectionMaxRoughness) ||
     ((bool)(this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness)) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness = '\x01';
    fVar58 = (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness;
    (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness =
         (param_1->ScreenSpaceReflectionMaxRoughness - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_TranslucencyType != 0) ||
      ((this->PostProcessSettings).bOverride_TranslucencyType != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_TranslucencyType = 1;
    (this->PostProcessSettings).TranslucencyType = param_1->TranslucencyType;
  }
  if (((param_1->bOverride_RayTracingTranslucencyMaxRoughness != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxRoughness =
         param_1->RayTracingTranslucencyMaxRoughness;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyRefractionRays != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays != 0)) && (bVar24)
     ) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays = 1;
    (this->PostProcessSettings).RayTracingTranslucencyRefractionRays =
         param_1->RayTracingTranslucencyRefractionRays;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencySamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingTranslucencySamplesPerPixel =
         param_1->RayTracingTranslucencySamplesPerPixel;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyShadows != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows = 1;
    (this->PostProcessSettings).RayTracingTranslucencyShadows =
         param_1->RayTracingTranslucencyShadows;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyRefraction != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction = 1;
    uVar15 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 =
         ((this->PostProcessSettings).RayTracingTranslucencyRefraction ^
         param_1->RayTracingTranslucencyRefraction) & 1 ^ uVar15;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents =
         param_1->RayTracingTranslucencyMaxPrimaryHitEvents;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents =
         param_1->RayTracingTranslucencyMaxSecondaryHitEvents;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction = 1;
    bVar49 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 = (bVar49 ^ param_1->field_0x735) & 2 ^ bVar49;
  }
  if (((param_1->bOverride_DynamicGlobalIlluminationMethod != 0) ||
      ((this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod = 1;
    (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value =
         (param_1->DynamicGlobalIlluminationMethod).Value;
  }
  if (((param_1->bOverride_LumenSurfaceCacheResolution != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution = '\x01';
    (this->PostProcessSettings).LumenSurfaceCacheResolution = param_1->LumenSurfaceCacheResolution;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneLightingQuality != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneLightingQuality != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingQuality = 1;
    (this->PostProcessSettings).LumenSceneLightingQuality = param_1->LumenSceneLightingQuality;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneDetail != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneDetail != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneDetail = 1;
    (this->PostProcessSettings).LumenSceneDetail = param_1->LumenSceneDetail;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneViewDistance != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneViewDistance != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneViewDistance = 1;
    (this->PostProcessSettings).LumenSceneViewDistance = param_1->LumenSceneViewDistance;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneLightingUpdateSpeed != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenSceneLightingUpdateSpeed =
         param_1->LumenSceneLightingUpdateSpeed;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenFinalGatherQuality != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherQuality != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherQuality = 1;
    (this->PostProcessSettings).LumenFinalGatherQuality = param_1->LumenFinalGatherQuality;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenFinalGatherLightingUpdateSpeed != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed =
         param_1->LumenFinalGatherLightingUpdateSpeed;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenFinalGatherScreenTraces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces = 1;
    uVar15 = (this->PostProcessSettings).field_0x410;
    (this->PostProcessSettings).field_0x410 =
         ((this->PostProcessSettings).LumenFinalGatherScreenTraces ^
         param_1->LumenFinalGatherScreenTraces) & 1 ^ uVar15;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenMaxTraceDistance != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxTraceDistance != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxTraceDistance = 1;
    (this->PostProcessSettings).LumenMaxTraceDistance = param_1->LumenMaxTraceDistance;
  }
  if ((param_1->bOverride_LumenDiffuseColorBoost != 0) ||
     ((this->PostProcessSettings).bOverride_LumenDiffuseColorBoost != 0)) {
    (this->PostProcessSettings).bOverride_LumenDiffuseColorBoost = 1;
    fVar58 = (this->PostProcessSettings).LumenDiffuseColorBoost;
    (this->PostProcessSettings).LumenDiffuseColorBoost =
         (param_1->LumenDiffuseColorBoost - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LumenSkylightLeaking != 0) ||
     ((this->PostProcessSettings).bOverride_LumenSkylightLeaking != 0)) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeaking = 1;
    fVar58 = (this->PostProcessSettings).LumenSkylightLeaking;
    (this->PostProcessSettings).LumenSkylightLeaking =
         (param_1->LumenSkylightLeaking - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LumenSkylightLeakingTint != 0) ||
     ((this->PostProcessSettings).bOverride_LumenSkylightLeakingTint != 0)) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeakingTint = 1;
    fVar58 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.A;
    fVar5 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.G;
    fVar6 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.B;
    fVar7 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.R =
         ((param_1->LumenSkylightLeakingTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_LumenFullSkylightLeakingDistance != 0) ||
     ((this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance != 0)) {
    (this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance = 1;
    fVar58 = (this->PostProcessSettings).LumenFullSkylightLeakingDistance;
    (this->PostProcessSettings).LumenFullSkylightLeakingDistance =
         (param_1->LumenFullSkylightLeakingDistance - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x24;
  if (((param_1->bOverride_LumenRayLightingMode != 0) ||
      ((this->PostProcessSettings).bOverride_LumenRayLightingMode != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenRayLightingMode = '\x01';
    (this->PostProcessSettings).LumenRayLightingMode = param_1->LumenRayLightingMode;
  }
  if (((param_1->bOverride_LumenReflectionsScreenTraces != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces = '\x01';
    uVar15 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 =
         ((this->PostProcessSettings).LumenReflectionsScreenTraces ^
         param_1->LumenReflectionsScreenTraces) & 1 ^ uVar15;
  }
  if (((param_1->bOverride_LumenFrontLayerTranslucencyReflections != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections = '\x01';
    bVar49 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 = (bVar49 ^ param_1->field_0x440) & 2 ^ bVar49;
  }
  puVar52 = &(this->PostProcessSettings).field_0x28;
  if (((param_1->bOverride_LumenMaxRoughnessToTraceReflections != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections = 1;
    (this->PostProcessSettings).LumenMaxRoughnessToTraceReflections =
         param_1->LumenMaxRoughnessToTraceReflections;
  }
  if (((param_1->bOverride_LumenMaxReflectionBounces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxReflectionBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxReflectionBounces = 1;
    (this->PostProcessSettings).LumenMaxReflectionBounces = param_1->LumenMaxReflectionBounces;
  }
  if (((param_1->bOverride_LumenMaxRefractionBounces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxRefractionBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxRefractionBounces = 1;
    (this->PostProcessSettings).LumenMaxRefractionBounces = param_1->LumenMaxRefractionBounces;
  }
  if (((param_1->bOverride_ReflectionMethod != '\0') ||
      ((this->PostProcessSettings).bOverride_ReflectionMethod != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_ReflectionMethod = '\x01';
    (this->PostProcessSettings).ReflectionMethod.Value = (param_1->ReflectionMethod).Value;
  }
  if (((param_1->bOverride_LumenReflectionQuality != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenReflectionQuality != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenReflectionQuality = '\x01';
    (this->PostProcessSettings).LumenReflectionQuality = param_1->LumenReflectionQuality;
  }
  puVar52 = &(this->PostProcessSettings).field_0x14;
  if (((param_1->bOverride_RayTracingAO != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAO != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAO = 1;
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x638;
    *(uint *)&(this->PostProcessSettings).field_0x638 =
         (ZPULL(uVar16,0,1) ^ param_1->RayTracingAO) & 1 ^ uVar16;
  }
  if (((param_1->bOverride_RayTracingAOSamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingAOSamplesPerPixel = param_1->RayTracingAOSamplesPerPixel;
  }
  puVar53 = &(this->PostProcessSettings).field_0x14;
  if (((param_1->bOverride_RayTracingAOIntensity != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAOIntensity != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAOIntensity = 1;
    (this->PostProcessSettings).RayTracingAOIntensity = param_1->RayTracingAOIntensity;
  }
  if (((param_1->bOverride_RayTracingAORadius != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAORadius != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAORadius = 1;
    (this->PostProcessSettings).RayTracingAORadius = param_1->RayTracingAORadius;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingMaxBounces != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingMaxBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingMaxBounces = 1;
    (this->PostProcessSettings).PathTracingMaxBounces = param_1->PathTracingMaxBounces;
  }
  if (((param_1->bOverride_PathTracingSamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel = 1;
    (this->PostProcessSettings).PathTracingSamplesPerPixel = param_1->PathTracingSamplesPerPixel;
  }
  if ((param_1->bOverride_PathTracingMaxPathIntensity != 0) ||
     ((this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity != 0)) {
    (this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity = 1;
    fVar58 = (this->PostProcessSettings).PathTracingMaxPathIntensity;
    (this->PostProcessSettings).PathTracingMaxPathIntensity =
         (param_1->PathTracingMaxPathIntensity - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableEmissiveMaterials != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials = 1;
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (ZPULL(uVar16,0,1) ^ param_1->PathTracingEnableEmissiveMaterials) & 1 ^ uVar16;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableReferenceDOF != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 2 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableReferenceAtmosphere != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere != 0)) && (bVar24)
     ) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 4 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableDenoiser != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableDenoiser != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingEnableDenoiser = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 8 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeEmissive != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeEmissive != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeEmissive = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x10 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeDiffuse != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x20 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeIndirectDiffuse != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x40 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeSpecular != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeSpecular != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeSpecular = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x80 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeIndirectSpecular != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x100 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeVolume != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeVolume != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeVolume = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x200 ^ uVar17;
  }
  if (((param_1->bOverride_PathTracingIncludeIndirectVolume != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x400 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1a;
  if ((param_1->bOverride_DepthOfFieldBladeCount == '\0') &&
     ((this->PostProcessSettings).bOverride_DepthOfFieldBladeCount == '\0')) {
    if (!bVar24) goto LAB_14835d38c;
  }
  else {
    if (!bVar24) goto LAB_14835d38c;
    (this->PostProcessSettings).bOverride_DepthOfFieldBladeCount = '\x01';
    (this->PostProcessSettings).DepthOfFieldBladeCount = param_1->DepthOfFieldBladeCount;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 = (param_1->AmbientCubemap).field0_0x0.DebugPtr, pUVar19 != (UTextureCube *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->PostProcessSettings).AmbientCubemap.field0_0x0 = (param_1->AmbientCubemap).field0_0x0;
LAB_14835d38c:
  if ((param_1->bOverride_ColorGradingIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGradingIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGradingIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).ColorGradingIntensity;
    (this->PostProcessSettings).ColorGradingIntensity =
         (param_1->ColorGradingIntensity - fVar58) * param_2 + fVar58;
  }
  if (((param_1->bOverride_ColorGradingLUT != '\0') ||
      ((this->PostProcessSettings).bOverride_ColorGradingLUT != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_ColorGradingLUT = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).ColorGradingLUT.field0_0x0 = (param_1->ColorGradingLUT).field0_0x0;
  }
  if (((param_1->bOverride_BloomDirtMask != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomDirtMask != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomDirtMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->BloomDirtMask).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).BloomDirtMask.field0_0x0 = (param_1->BloomDirtMask).field0_0x0;
  }
  if (((param_1->bOverride_BloomMethod != 0) ||
      ((this->PostProcessSettings).bOverride_BloomMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomMethod = '\x01';
    (this->PostProcessSettings).BloomMethod.Value = (param_1->BloomMethod).Value;
  }
  if (((param_1->bOverride_BloomConvolutionTexture != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomConvolutionTexture != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr,
       pUVar21 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->PostProcessSettings).BloomConvolutionTexture.field0_0x0 =
         (param_1->BloomConvolutionTexture).field0_0x0;
  }
  if (((param_1->bOverride_FilmGrainTexture != '\0') ||
      ((this->PostProcessSettings).bOverride_FilmGrainTexture != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_FilmGrainTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr, pUVar21 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->PostProcessSettings).FilmGrainTexture.field0_0x0 = (param_1->FilmGrainTexture).field0_0x0
    ;
  }
  if (((param_1->bOverride_BloomConvolutionBufferScale != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomConvolutionBufferScale != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionBufferScale = '\x01';
    (this->PostProcessSettings).BloomConvolutionBufferScale = param_1->BloomConvolutionBufferScale;
  }
  if (((param_1->bOverride_AutoExposureBiasCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureBiasCurve != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureBiasCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr,
       pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).AutoExposureBiasCurve.field0_0x0 =
         (param_1->AutoExposureBiasCurve).field0_0x0;
  }
  if (((param_1->bOverride_AutoExposureMeterMask != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureMeterMask != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureMeterMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0))
    {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).AutoExposureMeterMask.field0_0x0 =
         (param_1->AutoExposureMeterMask).field0_0x0;
  }
  if (((param_1->bOverride_LocalExposureHighlightContrastCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
       pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0 =
         (param_1->LocalExposureHighlightContrastCurve).field0_0x0;
  }
  if (((param_1->bOverride_LocalExposureShadowContrastCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve != '\0')) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
       pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0 =
         (param_1->LocalExposureShadowContrastCurve).field0_0x0;
  }
  if (((param_1->bOverride_LensFlareBokehShape != 0) ||
      ((this->PostProcessSettings).bOverride_LensFlareBokehShape != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LensFlareBokehShape = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).LensFlareBokehShape.field0_0x0 =
         (param_1->LensFlareBokehShape).field0_0x0;
  }
  if (param_1->bOverride_LensFlareTints != '\0') {
    pfVar47 = &param_1->LensFlareTints[1].field0_0x0._s_0.G;
    lVar50 = (longlong)this - (longlong)param_1;
    lVar54 = 2;
    do {
      fVar58 = pfVar47[-4];
      fVar2 = pfVar47[-3];
      fVar3 = pfVar47[-2];
      *(float *)(lVar50 + -0x14 + (longlong)pfVar47) =
           (pfVar47[-5] - *(float *)(lVar50 + -0x14 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0x14 + (longlong)pfVar47);
      *(float *)(lVar50 + -0x10 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + -0x10 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0x10 + (longlong)pfVar47);
      *(float *)(lVar50 + -0xc + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + -0xc + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0xc + (longlong)pfVar47);
      *(float *)(lVar50 + -8 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + -8 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -8 + (longlong)pfVar47);
      fVar58 = *pfVar47;
      fVar2 = pfVar47[1];
      fVar3 = pfVar47[2];
      *(float *)(lVar50 + -4 + (longlong)pfVar47) =
           (((FLinearColor_u_0_s_0 *)(pfVar47 + -1))->R -
           *(float *)(lVar50 + -4 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -4 + (longlong)pfVar47);
      *(float *)(lVar50 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + (longlong)pfVar47);
      *(float *)(lVar50 + 4 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 4 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 4 + (longlong)pfVar47);
      *(float *)(lVar50 + 8 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 8 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 8 + (longlong)pfVar47);
      fVar58 = pfVar47[4];
      fVar2 = pfVar47[5];
      fVar3 = pfVar47[6];
      *(float *)(lVar50 + 0xc + (longlong)pfVar47) =
           (pfVar47[3] - *(float *)(lVar50 + 0xc + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0xc + (longlong)pfVar47);
      *(float *)(lVar50 + 0x10 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + 0x10 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x10 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x14 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 0x14 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x14 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x18 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 0x18 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x18 + (longlong)pfVar47);
      fVar58 = pfVar47[8];
      fVar2 = pfVar47[9];
      fVar3 = pfVar47[10];
      *(float *)(lVar50 + 0x1c + (longlong)pfVar47) =
           (pfVar47[7] - *(float *)(lVar50 + 0x1c + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x1c + (longlong)pfVar47);
      *(float *)(lVar50 + 0x20 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + 0x20 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x20 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x24 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 0x24 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x24 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x28 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 0x28 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x28 + (longlong)pfVar47);
      pfVar47 = pfVar47 + 0x10;
      lVar54 = lVar54 + -1;
    } while (lVar54 != 0);
  }
  if ((param_1->bOverride_MobileHQGaussian != '\0') && (bVar24)) {
    puVar52 = &(this->PostProcessSettings).field_0x34;
    *puVar52 = *puVar52 ^
               ((this->PostProcessSettings).bMobileHQGaussian ^ param_1->bMobileHQGaussian) & 1;
  }
  if (((param_1->bOverride_AutoExposureMethod != 0) ||
      ((this->PostProcessSettings).bOverride_AutoExposureMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureMethod = '\x01';
    (this->PostProcessSettings).AutoExposureMethod.Value = (param_1->AutoExposureMethod).Value;
  }
  if (((param_1->bOverride_AmbientOcclusionRadiusInWS != '\0') ||
      ((this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x60c;
    *(uint *)&(this->PostProcessSettings).field_0x60c =
         (ZPULL(uVar16,0,1) ^ param_1->AmbientOcclusionRadiusInWS) & 1 ^ uVar16;
  }
  if (((param_1->bOverride_MotionBlurTargetFPS != 0) ||
      ((this->PostProcessSettings).bOverride_MotionBlurTargetFPS != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_MotionBlurTargetFPS = '\x01';
    (this->PostProcessSettings).MotionBlurTargetFPS = param_1->MotionBlurTargetFPS;
  }
  if (((param_1->bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x4a0;
    *(uint *)&(this->PostProcessSettings).field_0x4a0 =
         (ZPULL(uVar16,0,1) ^ param_1->AutoExposureApplyPhysicalCameraExposure) & 1 ^ uVar16;
  }
  if (((param_1->bOverride_UserFlags != '\0') ||
      ((this->PostProcessSettings).bOverride_UserFlags != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_UserFlags = '\x01';
    (this->PostProcessSettings).UserFlags = param_1->UserFlags;
  }
  iVar46 = (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
  pFVar56 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  pFVar48 = pFVar56 + (longlong)iVar46 * 0x10;
  do {
    if ((this->PostProcessSettings).WeightedBlendables.Array.ArrayNum != iVar46) {
      `TCheckedPointerIterator<FWeightedBlendable,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_18);
    }
    iVar18 = (param_1->WeightedBlendables).Array.ArrayNum;
    pFVar57 = (param_1->WeightedBlendables).Array.AllocatorInstance.Data;
    if (pFVar56 == pFVar48) {
      pFVar56 = pFVar57 + (longlong)iVar18 * 0x10;
      pFVar55 = &(this->PostProcessSettings).WeightedBlendables;
      do {
        if ((param_1->WeightedBlendables).Array.ArrayNum != iVar18) {
          `TCheckedPointerIterator<FWeightedBlendable_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_18);
        }
        if (pFVar57 == pFVar56) {
          return;
        }
        pFVar48 = (pFVar55->Array).AllocatorInstance.Data;
        pFVar51 = pFVar48 + (longlong)(this->PostProcessSettings).WeightedBlendables.Array.ArrayNum
                            * 0x10;
        if (pFVar48 != pFVar51) {
          do {
            if (*(longlong *)(pFVar48 + 8) == *(longlong *)(pFVar57 + 8)) goto LAB_14835da89;
            pFVar48 = pFVar48 + 0x10;
          } while (pFVar48 != pFVar51);
        }
        iVar46 = (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
        piVar1 = &(this->PostProcessSettings).WeightedBlendables.Array.ArrayMax;
        fVar8 = *(float *)pFVar57;
        if (iVar46 == *piVar1) {
          iVar46 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar55,piVar1);
        }
        (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum = iVar46 + 1;
        pFVar48 = (pFVar55->Array).AllocatorInstance.Data;
        pUVar23 = *(UObject **)(pFVar57 + 8);
        *(float *)(pFVar48 + (longlong)iVar46 * 0x10) = param_2 * fVar8;
        *(UObject **)(pFVar48 + (longlong)iVar46 * 0x10 + 8) = pUVar23;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar23);
        }
LAB_14835da89:
        pFVar57 = pFVar57 + 0x10;
      } while( true );
    }
    pFVar51 = pFVar57 + (longlong)iVar18 * 0x10;
    if (pFVar57 != pFVar51) {
      do {
        if (*(longlong *)(pFVar56 + 8) == *(longlong *)(pFVar57 + 8)) goto LAB_14835d9c3;
        pFVar57 = pFVar57 + 0x10;
      } while (pFVar57 != pFVar51);
    }
    *(float *)pFVar56 = (fVar8 - param_2) * *(float *)pFVar56;
LAB_14835d9c3:
    pFVar56 = pFVar56 + 0x10;
  } while( true );
}

// LerpAll @ 14d5b5650

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::LerpAll
          (FPostProcessSettingsCollection *this,FPostProcessSettingsCollection *param_1,
          float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  UTextureCube *pUVar19;
  UTexture *pUVar20;
  UTexture2D *pUVar21;
  UCurveFloat *pUVar22;
  UObject *pUVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  TVector2<float>_u_0 TVar45;
  int iVar46;
  float *pfVar47;
  FScriptContainerElement *pFVar48;
  byte bVar49;
  longlong lVar50;
  FScriptContainerElement *pFVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  longlong lVar54;
  FWeightedBlendables *pFVar55;
  FScriptContainerElement *pFVar56;
  undefined1 *puVar57;
  FScriptContainerElement *pFVar58;
  float fVar59;
  double dVar60;
  undefined1 auStackX_18 [8];
  float fStackX_20;
  float fStackX_24;
  
  fVar8 = __real_3f800000;
  if (param_2 <= 0.0) {
    return;
  }
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  bVar24 = __real_3f000000 <= param_2;
  if (((param_1.bOverride_TemperatureType != 0) || (this.bOverride_TemperatureType != 0)) &&
     (bVar24)) {
    this.bOverride_TemperatureType = '\x01';
    (this->PostProcessSettings).TemperatureType.Value =
         (param_1->PostProcessSettings).TemperatureType.Value;
  }
  if ((param_1.bOverride_WhiteTemp != '\0') ||
     (bVar49 = *(byte *)&this->PostProcessSettings,
     ((byte *)&this->PostProcessSettings)->bOverride_WhiteTemp != '\0')) {
    this.bOverride_WhiteTemp = '\x01';
    bVar49 = *(byte *)&this->PostProcessSettings;
    (this->PostProcessSettings).WhiteTemp =
         ((param_1->PostProcessSettings).WhiteTemp - (this->PostProcessSettings).WhiteTemp) *
         param_2 + (this->PostProcessSettings).WhiteTemp;
  }
  if (((bVar49 | *(byte *)&param_1->PostProcessSettings) & 4) != 0) {
    bVar49 = bVar49 | 4;
    *(byte *)&this->PostProcessSettings = bVar49;
    (this->PostProcessSettings).WhiteTint =
         ((param_1->PostProcessSettings).WhiteTint - (this->PostProcessSettings).WhiteTint) *
         param_2 + (this->PostProcessSettings).WhiteTint;
  }
  if (((bVar49 | *(byte *)&param_1->PostProcessSettings) & 8) != 0) {
    *(byte *)&this->PostProcessSettings = bVar49 | 8;
    dVar12 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z;
    dVar9 = (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    dVar11 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X -
         (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X) * dVar60 +
         (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar25._8_4_ = SUB84(dVar44,0);
    auVar25._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorSaturation.field0_0x0 + 8) =
         auVar25;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W =
         (dVar9 - dVar10) * dVar60 + dVar11;
  }
  if ((param_1.bOverride_ColorContrast != '\0') || (this.bOverride_ColorContrast != '\0')) {
    this.bOverride_ColorContrast = '\x01';
    dVar12 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z;
    dVar9 = (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    dVar11 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.X -
         (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X) * dVar60 +
         (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar26._8_4_ = SUB84(dVar44,0);
    auVar26._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar26._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorContrast.field0_0x0 + 8) =
         auVar26;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W = (dVar9 - dVar10) * dVar60 + dVar11
    ;
  }
  if ((param_1.bOverride_ColorGamma != '\0') || (this.bOverride_ColorGamma != '\0')) {
    this.bOverride_ColorGamma = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.X - dVar10) * dVar60 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar27._8_4_ = SUB84(dVar44,0);
    auVar27._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar27._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGamma.field0_0x0 + 8) =
         auVar27;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if ((param_1.bOverride_ColorGain != '\0') || (this.bOverride_ColorGain != '\0')) {
    this.bOverride_ColorGain = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.X - dVar10) * dVar60 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar28._8_4_ = SUB84(dVar44,0);
    auVar28._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar28._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGain.field0_0x0 + 8) =
         auVar28;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((bool)param_1.bOverride_ColorOffset) || ((bool)this.bOverride_ColorOffset)) {
    this.bOverride_ColorOffset = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.X - dVar10) * dVar60 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar29._8_4_ = SUB84(dVar44,0);
    auVar29._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar29._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorOffset.field0_0x0 + 8) =
         auVar29;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorSaturationShadows != 0) ||
     ((this->PostProcessSettings).bOverride_ColorSaturationShadows != 0)) {
    (this->PostProcessSettings).bOverride_ColorSaturationShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X - dVar10) * dVar60
         + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar30._8_4_ = SUB84(dVar44,0);
    auVar30._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar30._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationShadows.field0_0x0 + 8) = auVar30;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorContrastShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastShadows != '\0')) {
    (this->PostProcessSettings).bOverride_ColorContrastShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y;
    dVar10 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X;
    dVar11 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z;
    dVar44 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W;
    dVar12 = (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y;
    dVar13 = (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z;
    dVar14 = (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y =
         (dVar12 - dVar9) * dVar60 + dVar9;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z =
         (dVar13 - dVar11) * dVar60 + dVar11;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W =
         (dVar14 - dVar44) * dVar60 + dVar44;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorGammaShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGammaShadows != '\0')) {
    dVar60 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorGammaShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar31._8_4_ = SUB84(dVar44,0);
    auVar31._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar31._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGammaShadows.field0_0x0 + 8)
         = auVar31;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorGainShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGainShadows != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGainShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar32._8_4_ = SUB84(dVar44,0);
    auVar32._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar32._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGainShadows.field0_0x0 + 8) =
         auVar32;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorOffsetShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetShadows != '\0')) {
    dVar60 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorOffsetShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar33._8_4_ = SUB84(dVar44,0);
    auVar33._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar33._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorOffsetShadows.field0_0x0 + 8)
         = auVar33;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorSaturationMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorSaturationMidtones != '\0')) {
    (this->PostProcessSettings).bOverride_ColorSaturationMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X - dVar10) *
         dVar60 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar34._8_4_ = SUB84(dVar44,0);
    auVar34._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar34._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationMidtones.field0_0x0 + 8) = auVar34;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorContrastMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastMidtones != '\0')) {
    dVar60 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorContrastMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X - dVar10) * dVar60
         + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar35._8_4_ = SUB84(dVar44,0);
    auVar35._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar35._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorContrastMidtones.field0_0x0 + 8) = auVar35;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_ColorGammaMidtones) ||
     ((bool)(this->PostProcessSettings).bOverride_ColorGammaMidtones)) {
    (this->PostProcessSettings).bOverride_ColorGammaMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar36._8_4_ = SUB84(dVar44,0);
    auVar36._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar36._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGammaMidtones.field0_0x0 + 8)
         = auVar36;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorGainMidtones != 0) ||
     ((this->PostProcessSettings).bOverride_ColorGainMidtones != 0)) {
    (this->PostProcessSettings).bOverride_ColorGainMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar37._8_4_ = SUB84(dVar44,0);
    auVar37._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar37._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGainMidtones.field0_0x0 + 8)
         = auVar37;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorOffsetMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetMidtones != '\0')) {
    (this->PostProcessSettings).bOverride_ColorOffsetMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar38._8_4_ = SUB84(dVar44,0);
    auVar38._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar38._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorOffsetMidtones.field0_0x0 + 8) = auVar38;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorSaturationHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorSaturationHighlights != '\0')) {
    dVar60 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorSaturationHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X - dVar10) *
         dVar60 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar39._8_4_ = SUB84(dVar44,0);
    auVar39._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar39._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationHighlights.field0_0x0 + 8) = auVar39;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorContrastHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_ColorContrastHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X - dVar10) *
         dVar60 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar40._8_4_ = SUB84(dVar44,0);
    auVar40._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar40._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorContrastHighlights.field0_0x0 + 8) = auVar40;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorGammaHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGammaHighlights != '\0')) {
    dVar60 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorGammaHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar41._8_4_ = SUB84(dVar44,0);
    auVar41._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar41._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorGammaHighlights.field0_0x0 + 8) = auVar41;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorGainHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGainHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGainHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z;
    dVar60 = (double)param_2;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X - dVar10) * dVar60 +
         dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar42._8_4_ = SUB84(dVar44,0);
    auVar42._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar42._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorGainHighlights.field0_0x0 + 8) = auVar42;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorOffsetHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetHighlights != '\0')) {
    dVar60 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorOffsetHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W;
    dVar13 = (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y;
    dVar14 = (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X - dVar10) * dVar60
         + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar60 + dVar44;
    auVar43._8_4_ = SUB84(dVar44,0);
    auVar43._0_8_ = (dVar13 - dVar12) * dVar60 + dVar12;
    auVar43._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorOffsetHighlights.field0_0x0 + 8) = auVar43;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar60 + dVar9;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_ColorCorrectionShadowsMax) ||
     ((bool)(this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax)) {
    (this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax = '\x01';
    fVar59 = (this->PostProcessSettings).ColorCorrectionShadowsMax;
    (this->PostProcessSettings).ColorCorrectionShadowsMax =
         ((param_1->PostProcessSettings).ColorCorrectionShadowsMax - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if (((param_1->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin != 0)) {
    (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin = '\x01';
    fVar59 = (this->PostProcessSettings).ColorCorrectionHighlightsMin;
    bVar49 = *puVar52;
    (this->PostProcessSettings).ColorCorrectionHighlightsMin =
         ((param_1->PostProcessSettings).ColorCorrectionHighlightsMin - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_ColorCorrectionHighlightsMax != '\0') ||
     ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).ColorCorrectionHighlightsMax;
    (this->PostProcessSettings).ColorCorrectionHighlightsMax =
         ((param_1->PostProcessSettings).ColorCorrectionHighlightsMax - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_BlueCorrection != '\0') || ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).BlueCorrection;
    (this->PostProcessSettings).BlueCorrection =
         ((param_1->PostProcessSettings).BlueCorrection - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if (((param_1->PostProcessSettings).bOverride_ExpandGamut != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).ExpandGamut;
    (this->PostProcessSettings).ExpandGamut =
         ((param_1->PostProcessSettings).ExpandGamut - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_ToneCurveAmount != '\0') || ((bVar49 & 0x10) != 0))
  {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).ToneCurveAmount;
    (this->PostProcessSettings).ToneCurveAmount =
         ((param_1->PostProcessSettings).ToneCurveAmount - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if (((param_1->PostProcessSettings).bOverride_FilmSlope != '\0') || ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).FilmSlope;
    (this->PostProcessSettings).FilmSlope =
         ((param_1->PostProcessSettings).FilmSlope - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmToe != '\0') || ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).FilmToe;
    (this->PostProcessSettings).FilmToe =
         ((param_1->PostProcessSettings).FilmToe - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_FilmShoulder) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x3 = bVar49 | 0x80;
    fVar59 = (this->PostProcessSettings).FilmShoulder;
    (this->PostProcessSettings).FilmShoulder =
         ((param_1->PostProcessSettings).FilmShoulder - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x4;
  if (((param_1->PostProcessSettings).bOverride_FilmBlackClip != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_FilmBlackClip != 0)) {
    (this->PostProcessSettings).bOverride_FilmBlackClip = '\x01';
    fVar59 = (this->PostProcessSettings).FilmBlackClip;
    bVar49 = *puVar52;
    (this->PostProcessSettings).FilmBlackClip =
         ((param_1->PostProcessSettings).FilmBlackClip - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmWhiteClip != '\0') || ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).FilmWhiteClip;
    (this->PostProcessSettings).FilmWhiteClip =
         ((param_1->PostProcessSettings).FilmWhiteClip - fVar59) * param_2 + fVar59;
  }
  puVar53 = &(param_1->PostProcessSettings).field_0x4;
  if (((bVar49 | *puVar53) & 4) != 0) {
    *puVar52 = bVar49 | 4;
    fVar59 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).SceneColorTint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).SceneColorTint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).SceneColorTint.field0_0x0._s_0.A;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).SceneColorTint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2
    ;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.G =
         (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3
    ;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4
    ;
  }
  if (((param_1->PostProcessSettings).bOverride_SceneFringeIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_SceneFringeIntensity != '\0')) {
    puVar52 = &(this->PostProcessSettings).field_0x4;
    (this->PostProcessSettings).bOverride_SceneFringeIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).SceneFringeIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).SceneFringeIntensity =
         ((param_1->PostProcessSettings).SceneFringeIntensity - fVar59) * param_2 + fVar59;
  }
  if (((bVar49 | *puVar53) & 0x10) != 0) {
    (this->PostProcessSettings).field_0x4 = bVar49 | 0x10;
    fVar59 = (this->PostProcessSettings).ChromaticAberrationStartOffset;
    (this->PostProcessSettings).ChromaticAberrationStartOffset =
         ((param_1->PostProcessSettings).ChromaticAberrationStartOffset - fVar59) * param_2 + fVar59
    ;
  }
  puVar52 = &(this->PostProcessSettings).field_0x5;
  if (((param_1->PostProcessSettings).bOverride_BloomIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).BloomIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomIntensity =
         ((param_1->PostProcessSettings).BloomIntensity - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_BloomGaussianIntensity != '\0') ||
     ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).BloomGaussianIntensity;
    (this->PostProcessSettings).BloomGaussianIntensity =
         ((param_1->PostProcessSettings).BloomGaussianIntensity - fVar59) * param_2 + fVar59;
  }
  puVar53 = &(param_1->PostProcessSettings).field_0x5;
  if (((param_1->PostProcessSettings).bOverride_BloomThreshold != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).BloomThreshold;
    (this->PostProcessSettings).BloomThreshold =
         ((param_1->PostProcessSettings).BloomThreshold - fVar59) * param_2 + fVar59;
  }
  if (((bVar49 | *puVar53) & 0x10) != 0) {
    (this->PostProcessSettings).field_0x5 = bVar49 | 0x10;
    fVar59 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.G = (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((param_1->PostProcessSettings).bOverride_BloomSizeScale != 0) ||
     ((this->PostProcessSettings).bOverride_BloomSizeScale != 0)) {
    (this->PostProcessSettings).bOverride_BloomSizeScale = '\x01';
    fVar59 = (this->PostProcessSettings).BloomSizeScale;
    (this->PostProcessSettings).BloomSizeScale =
         ((param_1->PostProcessSettings).BloomSizeScale - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x5;
  if (((param_1->PostProcessSettings).bOverride_Bloom1Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom1Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom1Size = '\x01';
    fVar59 = (this->PostProcessSettings).Bloom1Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom1Size =
         ((param_1->PostProcessSettings).Bloom1Size - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_Bloom2Tint) || ((char)bVar49 < '\0')) {
    *puVar52 = bVar49 | 0x80;
    fVar59 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.G = (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((param_1->PostProcessSettings).bOverride_Bloom2Size != '\0') ||
     ((this->PostProcessSettings).bOverride_Bloom2Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom2Size = '\x01';
    fVar59 = (this->PostProcessSettings).Bloom2Size;
    (this->PostProcessSettings).Bloom2Size =
         ((param_1->PostProcessSettings).Bloom2Size - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if (((param_1->PostProcessSettings).bOverride_Bloom3Tint != 0) ||
     ((this->PostProcessSettings).bOverride_Bloom3Tint != 0)) {
    (this->PostProcessSettings).bOverride_Bloom3Tint = '\x01';
    fVar59 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.G = (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((param_1->PostProcessSettings).bOverride_Bloom3Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom3Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom3Size = '\x01';
    fVar59 = (this->PostProcessSettings).Bloom3Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom3Size =
         ((param_1->PostProcessSettings).Bloom3Size - fVar59) * param_2 + fVar59;
  }
  puVar53 = &(param_1->PostProcessSettings).field_0x6;
  if (((bVar49 | *puVar53) & 4) != 0) {
    *puVar52 = bVar49 | 4;
    fVar59 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.G = (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if (((param_1->PostProcessSettings).bOverride_Bloom4Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom4Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom4Size = '\x01';
    fVar59 = (this->PostProcessSettings).Bloom4Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom4Size =
         ((param_1->PostProcessSettings).Bloom4Size - fVar59) * param_2 + fVar59;
  }
  puVar57 = &(param_1->PostProcessSettings).field_0x6;
  if (((bVar49 | *puVar53) & 0x10) != 0) {
    *puVar52 = bVar49 | 0x10;
    fVar59 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.G = (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if (((param_1->PostProcessSettings).bOverride_Bloom5Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom5Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom5Size = '\x01';
    fVar59 = (this->PostProcessSettings).Bloom5Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom5Size =
         ((param_1->PostProcessSettings).Bloom5Size - fVar59) * param_2 + fVar59;
  }
  if (((bVar49 | *puVar57) & 0x40) != 0) {
    *puVar52 = bVar49 | 0x40;
    fVar59 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.G = (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_Bloom6Size) ||
     ((bool)(this->PostProcessSettings).bOverride_Bloom6Size)) {
    (this->PostProcessSettings).bOverride_Bloom6Size = '\x01';
    fVar59 = (this->PostProcessSettings).Bloom6Size;
    (this->PostProcessSettings).Bloom6Size =
         ((param_1->PostProcessSettings).Bloom6Size - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x8;
  if (((param_1->PostProcessSettings).bOverride_BloomDirtMaskIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).BloomDirtMaskIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomDirtMaskIntensity =
         ((param_1->PostProcessSettings).BloomDirtMaskIntensity - fVar59) * param_2 + fVar59;
  }
  if (((bVar49 | (param_1->PostProcessSettings).field_0x8) & 0x10) != 0) {
    *puVar52 = bVar49 | 0x10;
    fVar59 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.A;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.R - fVar2) * param_2 +
         fVar2;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.G =
         (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x7;
  if (((param_1->PostProcessSettings).bOverride_BloomConvolutionIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomConvolutionIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomConvolutionIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).BloomConvolutionIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomConvolutionIntensity =
         ((param_1->PostProcessSettings).BloomConvolutionIntensity - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_BloomConvolutionScatterDispersion != '\0') ||
     ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).BloomConvolutionScatterDispersion;
    (this->PostProcessSettings).BloomConvolutionScatterDispersion =
         ((param_1->PostProcessSettings).BloomConvolutionScatterDispersion - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_BloomConvolutionSize != '\0') ||
     ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).BloomConvolutionSize;
    (this->PostProcessSettings).BloomConvolutionSize =
         ((param_1->PostProcessSettings).BloomConvolutionSize - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x7;
  if (((bVar49 | (param_1->PostProcessSettings).field_0x7) & 0x20) != 0) {
    *puVar52 = bVar49 | 0x20;
    dVar9 = (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y;
    dVar10 = (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X;
    dVar11 = (param_1->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X =
         ((param_1->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X - dVar10) *
         (double)param_2 + dVar10;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y =
         (dVar11 - dVar9) * (double)param_2 + dVar9;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin) ||
     ((bool)(this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin = '\x01';
    fVar59 = (this->PostProcessSettings).BloomConvolutionPreFilterMin;
    (this->PostProcessSettings).BloomConvolutionPreFilterMin =
         ((param_1->PostProcessSettings).BloomConvolutionPreFilterMin - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x8;
  if (((param_1->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax != 0)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax = '\x01';
    fVar59 = (this->PostProcessSettings).BloomConvolutionPreFilterMax;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomConvolutionPreFilterMax =
         ((param_1->PostProcessSettings).BloomConvolutionPreFilterMax - fVar59) * param_2 + fVar59;
  }
  if (((bVar49 | (param_1->PostProcessSettings).field_0x8) & 2) != 0) {
    *puVar52 = bVar49 | 2;
    fVar59 = (this->PostProcessSettings).BloomConvolutionPreFilterMult;
    (this->PostProcessSettings).BloomConvolutionPreFilterMult =
         ((param_1->PostProcessSettings).BloomConvolutionPreFilterMult - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x4;
  if (((bool)(param_1->PostProcessSettings).bOverride_AmbientCubemapIntensity) ||
     (bVar49 = *puVar52, (bool)(this->PostProcessSettings).bOverride_AmbientCubemapIntensity)) {
    (this->PostProcessSettings).bOverride_AmbientCubemapIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientCubemapIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AmbientCubemapIntensity =
         ((param_1->PostProcessSettings).AmbientCubemapIntensity - fVar59) * param_2 + fVar59;
  }
  puVar53 = &(this->PostProcessSettings).field_0x8;
  if (((bVar49 | (param_1->PostProcessSettings).field_0x4) & 0x40) != 0) {
    *puVar52 = bVar49 | 0x40;
    fVar59 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.A;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.R - fVar2) * param_2 +
         fVar2;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.G =
         (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((param_1->PostProcessSettings).bOverride_CameraShutterSpeed != '\0') ||
     (bVar49 = *puVar53, (this->PostProcessSettings).bOverride_CameraShutterSpeed != '\0')) {
    (this->PostProcessSettings).bOverride_CameraShutterSpeed = '\x01';
    fVar59 = (this->PostProcessSettings).CameraShutterSpeed;
    bVar49 = *puVar53;
    (this->PostProcessSettings).CameraShutterSpeed =
         ((param_1->PostProcessSettings).CameraShutterSpeed - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_CameraISO) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x8 = bVar49 | 0x80;
    fVar59 = (this->PostProcessSettings).CameraISO;
    (this->PostProcessSettings).CameraISO =
         ((param_1->PostProcessSettings).CameraISO - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x9;
  if (((param_1->PostProcessSettings).bOverride_AutoExposureLowPercent != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_AutoExposureLowPercent != '\0')) {
    (this->PostProcessSettings).bOverride_AutoExposureLowPercent = '\x01';
    fVar59 = (this->PostProcessSettings).AutoExposureLowPercent;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AutoExposureLowPercent =
         ((param_1->PostProcessSettings).AutoExposureLowPercent - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AutoExposureHighPercent != '\0') ||
     ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).AutoExposureHighPercent;
    (this->PostProcessSettings).AutoExposureHighPercent =
         ((param_1->PostProcessSettings).AutoExposureHighPercent - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AutoExposureMinBrightness != '\0') ||
     ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).AutoExposureMinBrightness;
    (this->PostProcessSettings).AutoExposureMinBrightness =
         ((param_1->PostProcessSettings).AutoExposureMinBrightness - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x9;
  if (((param_1->PostProcessSettings).bOverride_AutoExposureMaxBrightness != '\0') ||
     ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).AutoExposureMaxBrightness;
    (this->PostProcessSettings).AutoExposureMaxBrightness =
         ((param_1->PostProcessSettings).AutoExposureMaxBrightness - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AutoExposureSpeedUp != '\0') ||
     ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).AutoExposureSpeedUp;
    (this->PostProcessSettings).AutoExposureSpeedUp =
         ((param_1->PostProcessSettings).AutoExposureSpeedUp - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_AutoExposureSpeedDown) ||
     ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x9 = bVar49 | 0x80;
    fVar59 = (this->PostProcessSettings).AutoExposureSpeedDown;
    (this->PostProcessSettings).AutoExposureSpeedDown =
         ((param_1->PostProcessSettings).AutoExposureSpeedDown - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0xa;
  if (((param_1->PostProcessSettings).bOverride_AutoExposureBias != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_AutoExposureBias != 0)) {
    (this->PostProcessSettings).bOverride_AutoExposureBias = '\x01';
    fVar59 = (this->PostProcessSettings).AutoExposureBias;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AutoExposureBias =
         ((param_1->PostProcessSettings).AutoExposureBias - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_HistogramLogMin != '\0') || ((bVar49 & 0x10) != 0))
  {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).HistogramLogMin;
    (this->PostProcessSettings).HistogramLogMin =
         ((param_1->PostProcessSettings).HistogramLogMin - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_HistogramLogMax != '\0') || ((bVar49 & 0x20) != 0))
  {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).HistogramLogMax;
    (this->PostProcessSettings).HistogramLogMax =
         ((param_1->PostProcessSettings).HistogramLogMax - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0xa;
  if ((((param_1->PostProcessSettings).bOverride_LocalExposureMethod != '\0') ||
      ((bVar49 & 0x40) != 0)) && (bVar24)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    (this->PostProcessSettings).LocalExposureMethod =
         (param_1->PostProcessSettings).LocalExposureMethod;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_LocalExposureContrastScale_DEPRECATED) ||
     ((char)bVar49 < '\0')) {
    *puVar52 = bVar49 | 0x80;
    fVar59 = (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED;
    (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED =
         ((param_1->PostProcessSettings).LocalExposureContrastScale_DEPRECATED - fVar59) * param_2 +
         fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0xb;
  if (((param_1->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale != 0) ||
     (bVar49 = *puVar52,
     (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale != 0)) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale = '\x01';
    fVar59 = (this->PostProcessSettings).LocalExposureHighlightContrastScale;
    bVar49 = *puVar52;
    (this->PostProcessSettings).LocalExposureHighlightContrastScale =
         ((param_1->PostProcessSettings).LocalExposureHighlightContrastScale - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LocalExposureShadowContrastScale != '\0') ||
     ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).LocalExposureShadowContrastScale;
    (this->PostProcessSettings).LocalExposureShadowContrastScale =
         ((param_1->PostProcessSettings).LocalExposureShadowContrastScale - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LocalExposureHighlightThreshold != '\0') ||
     ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).LocalExposureHighlightThreshold;
    (this->PostProcessSettings).LocalExposureHighlightThreshold =
         ((param_1->PostProcessSettings).LocalExposureHighlightThreshold - fVar59) * param_2 +
         fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0xb;
  if (((param_1->PostProcessSettings).bOverride_LocalExposureShadowThreshold != '\0') ||
     ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).LocalExposureShadowThreshold;
    (this->PostProcessSettings).LocalExposureShadowThreshold =
         ((param_1->PostProcessSettings).LocalExposureShadowThreshold - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LocalExposureDetailStrength != '\0') ||
     ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar59 = (this->PostProcessSettings).LocalExposureDetailStrength;
    (this->PostProcessSettings).LocalExposureDetailStrength =
         ((param_1->PostProcessSettings).LocalExposureDetailStrength - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceBlend) ||
     ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0xb = bVar49 | 0x80;
    fVar59 = (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend;
    (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend =
         ((param_1->PostProcessSettings).LocalExposureBlurredLuminanceBlend - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0)
     || ((this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0))
  {
    (this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\x01';
    fVar59 = (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent;
    (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent =
         ((param_1->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent - fVar59) *
         param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength = '\x01';
    fVar59 = (this->PostProcessSettings).LocalExposureHighlightThresholdStrength;
    (this->PostProcessSettings).LocalExposureHighlightThresholdStrength =
         ((param_1->PostProcessSettings).LocalExposureHighlightThresholdStrength - fVar59) * param_2
         + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength = '\x01';
    fVar59 = (this->PostProcessSettings).LocalExposureShadowThresholdStrength;
    (this->PostProcessSettings).LocalExposureShadowThresholdStrength =
         ((param_1->PostProcessSettings).LocalExposureShadowThresholdStrength - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias = '\x01';
    fVar59 = (this->PostProcessSettings).LocalExposureMiddleGreyBias;
    (this->PostProcessSettings).LocalExposureMiddleGreyBias =
         ((param_1->PostProcessSettings).LocalExposureMiddleGreyBias - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LensFlareIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).LensFlareIntensity;
    (this->PostProcessSettings).LensFlareIntensity =
         ((param_1->PostProcessSettings).LensFlareIntensity - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LensFlareTint != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareTint != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareTint = '\x01';
    fVar59 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).LensFlareTint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).LensFlareTint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).LensFlareTint.field0_0x0._s_0.A;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).LensFlareTint.field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.G =
         (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_LensFlareBokehSize) ||
     ((bool)(this->PostProcessSettings).bOverride_LensFlareBokehSize)) {
    (this->PostProcessSettings).bOverride_LensFlareBokehSize = '\x01';
    fVar59 = (this->PostProcessSettings).LensFlareBokehSize;
    (this->PostProcessSettings).LensFlareBokehSize =
         ((param_1->PostProcessSettings).LensFlareBokehSize - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LensFlareThreshold != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareThreshold != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareThreshold = '\x01';
    fVar59 = (this->PostProcessSettings).LensFlareThreshold;
    (this->PostProcessSettings).LensFlareThreshold =
         ((param_1->PostProcessSettings).LensFlareThreshold - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_VignetteIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_VignetteIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_VignetteIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).VignetteIntensity;
    (this->PostProcessSettings).VignetteIntensity =
         ((param_1->PostProcessSettings).VignetteIntensity - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_Sharpen != '\0') ||
     ((this->PostProcessSettings).bOverride_Sharpen != '\0')) {
    (this->PostProcessSettings).bOverride_Sharpen = '\x01';
    fVar59 = (this->PostProcessSettings).Sharpen;
    (this->PostProcessSettings).Sharpen =
         ((param_1->PostProcessSettings).Sharpen - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmGrainIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainIntensity;
    (this->PostProcessSettings).FilmGrainIntensity =
         ((param_1->PostProcessSettings).FilmGrainIntensity - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_FilmGrainIntensityShadows) ||
     ((bool)(this->PostProcessSettings).bOverride_FilmGrainIntensityShadows)) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityShadows = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainIntensityShadows;
    (this->PostProcessSettings).FilmGrainIntensityShadows =
         ((param_1->PostProcessSettings).FilmGrainIntensityShadows - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmGrainIntensityMidtones != 0) ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones != 0)) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainIntensityMidtones;
    (this->PostProcessSettings).FilmGrainIntensityMidtones =
         ((param_1->PostProcessSettings).FilmGrainIntensityMidtones - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmGrainIntensityHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainIntensityHighlights;
    (this->PostProcessSettings).FilmGrainIntensityHighlights =
         ((param_1->PostProcessSettings).FilmGrainIntensityHighlights - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmGrainShadowsMax != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainShadowsMax != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainShadowsMax = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainShadowsMax;
    (this->PostProcessSettings).FilmGrainShadowsMax =
         ((param_1->PostProcessSettings).FilmGrainShadowsMax - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmGrainHighlightsMin != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainHighlightsMin != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMin = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainHighlightsMin;
    (this->PostProcessSettings).FilmGrainHighlightsMin =
         ((param_1->PostProcessSettings).FilmGrainHighlightsMin - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmGrainHighlightsMax != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainHighlightsMax != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMax = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainHighlightsMax;
    (this->PostProcessSettings).FilmGrainHighlightsMax =
         ((param_1->PostProcessSettings).FilmGrainHighlightsMax - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_FilmGrainTexelSize != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainTexelSize != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainTexelSize = '\x01';
    fVar59 = (this->PostProcessSettings).FilmGrainTexelSize;
    (this->PostProcessSettings).FilmGrainTexelSize =
         ((param_1->PostProcessSettings).FilmGrainTexelSize - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_AmbientOcclusionIntensity) ||
     ((bool)(this->PostProcessSettings).bOverride_AmbientOcclusionIntensity)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionIntensity;
    (this->PostProcessSettings).AmbientOcclusionIntensity =
         ((param_1->PostProcessSettings).AmbientOcclusionIntensity - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction != 0) ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction != 0)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionStaticFraction;
    (this->PostProcessSettings).AmbientOcclusionStaticFraction =
         ((param_1->PostProcessSettings).AmbientOcclusionStaticFraction - fVar59) * param_2 + fVar59
    ;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionRadius != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadius = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionRadius;
    (this->PostProcessSettings).AmbientOcclusionRadius =
         ((param_1->PostProcessSettings).AmbientOcclusionRadius - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionFadeDistance;
    (this->PostProcessSettings).AmbientOcclusionFadeDistance =
         ((param_1->PostProcessSettings).AmbientOcclusionFadeDistance - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionFadeRadius;
    (this->PostProcessSettings).AmbientOcclusionFadeRadius =
         ((param_1->PostProcessSettings).AmbientOcclusionFadeRadius - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED;
    (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED =
         ((param_1->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionPower != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionPower != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionPower = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionPower;
    (this->PostProcessSettings).AmbientOcclusionPower =
         ((param_1->PostProcessSettings).AmbientOcclusionPower - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_AmbientOcclusionBias) ||
     ((bool)(this->PostProcessSettings).bOverride_AmbientOcclusionBias)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionBias = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionBias;
    (this->PostProcessSettings).AmbientOcclusionBias =
         ((param_1->PostProcessSettings).AmbientOcclusionBias - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionQuality != 0) ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionQuality != 0)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionQuality = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionQuality;
    (this->PostProcessSettings).AmbientOcclusionQuality =
         ((param_1->PostProcessSettings).AmbientOcclusionQuality - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionMipBlend != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionMipBlend;
    (this->PostProcessSettings).AmbientOcclusionMipBlend =
         ((param_1->PostProcessSettings).AmbientOcclusionMipBlend - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionMipScale != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipScale != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipScale = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionMipScale;
    (this->PostProcessSettings).AmbientOcclusionMipScale =
         ((param_1->PostProcessSettings).AmbientOcclusionMipScale - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionMipThreshold;
    (this->PostProcessSettings).AmbientOcclusionMipThreshold =
         ((param_1->PostProcessSettings).AmbientOcclusionMipThreshold - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight = '\x01';
    fVar59 = (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight;
    (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight =
         ((param_1->PostProcessSettings).AmbientOcclusionTemporalBlendWeight - fVar59) * param_2 +
         fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_IndirectLightingColor) ||
     ((bool)(this->PostProcessSettings).bOverride_IndirectLightingColor)) {
    (this->PostProcessSettings).bOverride_IndirectLightingColor = '\x01';
    fVar59 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.A;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.R - fVar2) * param_2
         + fVar2;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.G =
         (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1a;
  if (((param_1->PostProcessSettings).bOverride_IndirectLightingIntensity != 0) ||
     ((this->PostProcessSettings).bOverride_IndirectLightingIntensity != 0)) {
    (this->PostProcessSettings).bOverride_IndirectLightingIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).IndirectLightingIntensity;
    (this->PostProcessSettings).IndirectLightingIntensity =
         ((param_1->PostProcessSettings).IndirectLightingIntensity - fVar59) * param_2 + fVar59;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldFocalDistance != '\0') {
    fVar59 = (this->PostProcessSettings).DepthOfFieldFocalDistance;
    if ((fVar59 == 0.0) ||
       (fVar2 = (param_1->PostProcessSettings).DepthOfFieldFocalDistance, fVar2 == 0.0)) {
      fVar59 = (param_1->PostProcessSettings).DepthOfFieldFocalDistance;
    }
    else {
      fVar59 = (fVar2 - fVar59) * param_2 + fVar59;
    }
    (this->PostProcessSettings).DepthOfFieldFocalDistance = fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldFstop != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFstop != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFstop = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldFstop;
    (this->PostProcessSettings).DepthOfFieldFstop =
         ((param_1->PostProcessSettings).DepthOfFieldFstop - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldMinFstop != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldMinFstop != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldMinFstop = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldMinFstop;
    (this->PostProcessSettings).DepthOfFieldMinFstop =
         ((param_1->PostProcessSettings).DepthOfFieldMinFstop - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_DepthOfFieldSensorWidth) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldSensorWidth;
    (this->PostProcessSettings).DepthOfFieldSensorWidth =
         ((param_1->PostProcessSettings).DepthOfFieldSensorWidth - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1b;
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor != 0)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldSqueezeFactor;
    (this->PostProcessSettings).DepthOfFieldSqueezeFactor =
         ((param_1->PostProcessSettings).DepthOfFieldSqueezeFactor - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldDepthBlurRadius;
    (this->PostProcessSettings).DepthOfFieldDepthBlurRadius =
         ((param_1->PostProcessSettings).DepthOfFieldDepthBlurRadius - fVar59) * param_2 + fVar59;
  }
  if ((((param_1->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth != '\0') ||
      ((this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x66c;
    *(uint *)&(this->PostProcessSettings).field_0x66c =
         (ZPULL(uVar16,0,1) ^ (param_1->PostProcessSettings).DepthOfFieldUseHairDepth) & 1 ^ uVar16;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldDepthBlurAmount;
    (this->PostProcessSettings).DepthOfFieldDepthBlurAmount =
         ((param_1->PostProcessSettings).DepthOfFieldDepthBlurAmount - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldPetzvalBokeh;
    (this->PostProcessSettings).DepthOfFieldPetzvalBokeh =
         ((param_1->PostProcessSettings).DepthOfFieldPetzvalBokeh - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff;
    (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff =
         ((param_1->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents = '\x01';
    fStackX_20 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0._s_0.
                 X;
    fStackX_24 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0._s_0.
                 Y;
    fStackX_20 = ((param_1->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0.
                  _s_0.X - fStackX_20) * param_2 + fStackX_20;
    fStackX_24 = ((param_1->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0.
                  _s_0.Y - fStackX_24) * param_2 + fStackX_24;
    TVar45._s_0.Y = fStackX_24;
    TVar45._s_0.X = fStackX_20;
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0 = TVar45;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius;
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius =
         ((param_1->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldBarrelRadius;
    (this->PostProcessSettings).DepthOfFieldBarrelRadius =
         ((param_1->PostProcessSettings).DepthOfFieldBarrelRadius - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldBarrelLength != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldBarrelLength;
    (this->PostProcessSettings).DepthOfFieldBarrelLength =
         ((param_1->PostProcessSettings).DepthOfFieldBarrelLength - fVar59) * param_2 + fVar59;
  }
  bVar49 = (param_1->PostProcessSettings).field_0x1c;
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldMatteBoxFlags != 0) {
    fVar59 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll = fVar59;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length;
    fVar59 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll = fVar59;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length;
    fVar59 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll = fVar59;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length;
    bVar49 = (param_1->PostProcessSettings).field_0x1c;
  }
  if (((bVar49 & 0x10) != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldFocalRegion;
    (this->PostProcessSettings).DepthOfFieldFocalRegion =
         ((param_1->PostProcessSettings).DepthOfFieldFocalRegion - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldNearTransitionRegion;
    (this->PostProcessSettings).DepthOfFieldNearTransitionRegion =
         ((param_1->PostProcessSettings).DepthOfFieldNearTransitionRegion - fVar59) * param_2 +
         fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldFarTransitionRegion;
    (this->PostProcessSettings).DepthOfFieldFarTransitionRegion =
         ((param_1->PostProcessSettings).DepthOfFieldFarTransitionRegion - fVar59) * param_2 +
         fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_DepthOfFieldScale) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldScale)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldScale = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldScale;
    (this->PostProcessSettings).DepthOfFieldScale =
         ((param_1->PostProcessSettings).DepthOfFieldScale - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize != 0)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldNearBlurSize;
    (this->PostProcessSettings).DepthOfFieldNearBlurSize =
         ((param_1->PostProcessSettings).DepthOfFieldNearBlurSize - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldFarBlurSize;
    (this->PostProcessSettings).DepthOfFieldFarBlurSize =
         ((param_1->PostProcessSettings).DepthOfFieldFarBlurSize - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldOcclusion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldOcclusion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldOcclusion = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldOcclusion;
    (this->PostProcessSettings).DepthOfFieldOcclusion =
         ((param_1->PostProcessSettings).DepthOfFieldOcclusion - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldSkyFocusDistance;
    (this->PostProcessSettings).DepthOfFieldSkyFocusDistance =
         ((param_1->PostProcessSettings).DepthOfFieldSkyFocusDistance - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldVignetteSize != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldVignetteSize;
    (this->PostProcessSettings).DepthOfFieldVignetteSize =
         ((param_1->PostProcessSettings).DepthOfFieldVignetteSize - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar = '\x01';
    fVar59 = (this->PostProcessSettings).DepthOfFieldAspectRatioScalar;
    (this->PostProcessSettings).DepthOfFieldAspectRatioScalar =
         ((param_1->PostProcessSettings).DepthOfFieldAspectRatioScalar - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_MotionBlurAmount != '\0') ||
     ((this->PostProcessSettings).bOverride_MotionBlurAmount != '\0')) {
    (this->PostProcessSettings).bOverride_MotionBlurAmount = '\x01';
    fVar59 = (this->PostProcessSettings).MotionBlurAmount;
    (this->PostProcessSettings).MotionBlurAmount =
         ((param_1->PostProcessSettings).MotionBlurAmount - fVar59) * param_2 + fVar59;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_MotionBlurMax) ||
     ((bool)(this->PostProcessSettings).bOverride_MotionBlurMax)) {
    (this->PostProcessSettings).bOverride_MotionBlurMax = '\x01';
    fVar59 = (this->PostProcessSettings).MotionBlurMax;
    (this->PostProcessSettings).MotionBlurMax =
         ((param_1->PostProcessSettings).MotionBlurMax - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_MotionBlurPerObjectSize != '\0') ||
     ((this->PostProcessSettings).bOverride_MotionBlurPerObjectSize != '\0')) {
    (this->PostProcessSettings).bOverride_MotionBlurPerObjectSize = '\x01';
    fVar59 = (this->PostProcessSettings).MotionBlurPerObjectSize;
    (this->PostProcessSettings).MotionBlurPerObjectSize =
         ((param_1->PostProcessSettings).MotionBlurPerObjectSize - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality != '\0') ||
     ((this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality != '\0')) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality = '\x01';
    fVar59 = (this->PostProcessSettings).ScreenSpaceReflectionQuality;
    (this->PostProcessSettings).ScreenSpaceReflectionQuality =
         ((param_1->PostProcessSettings).ScreenSpaceReflectionQuality - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).ScreenSpaceReflectionIntensity;
    (this->PostProcessSettings).ScreenSpaceReflectionIntensity =
         ((param_1->PostProcessSettings).ScreenSpaceReflectionIntensity - fVar59) * param_2 + fVar59
    ;
  }
  if (((bool)(param_1->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness) ||
     ((bool)(this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness)) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness = '\x01';
    fVar59 = (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness;
    (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness =
         ((param_1->PostProcessSettings).ScreenSpaceReflectionMaxRoughness - fVar59) * param_2 +
         fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_TranslucencyType != 0) ||
      ((this->PostProcessSettings).bOverride_TranslucencyType != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_TranslucencyType = 1;
    (this->PostProcessSettings).TranslucencyType = (param_1->PostProcessSettings).TranslucencyType;
  }
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxRoughness =
         (param_1->PostProcessSettings).RayTracingTranslucencyMaxRoughness;
  }
  puVar57 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays != 0)) && (bVar24)
     ) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays = 1;
    (this->PostProcessSettings).RayTracingTranslucencyRefractionRays =
         (param_1->PostProcessSettings).RayTracingTranslucencyRefractionRays;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingTranslucencySamplesPerPixel =
         (param_1->PostProcessSettings).RayTracingTranslucencySamplesPerPixel;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyShadows != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows = 1;
    (this->PostProcessSettings).RayTracingTranslucencyShadows =
         (param_1->PostProcessSettings).RayTracingTranslucencyShadows;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction = 1;
    uVar15 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 =
         ((this->PostProcessSettings).RayTracingTranslucencyRefraction ^
         (param_1->PostProcessSettings).RayTracingTranslucencyRefraction) & 1 ^ uVar15;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents =
         (param_1->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0)
      || ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0))
     && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents =
         (param_1->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0)
      || ((this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0))
     && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction = 1;
    bVar49 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 =
         (bVar49 ^ (param_1->PostProcessSettings).field_0x735) & 2 ^ bVar49;
  }
  if ((((param_1->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod != 0) ||
      ((this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod = 1;
    (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value =
         (param_1->PostProcessSettings).DynamicGlobalIlluminationMethod.Value;
  }
  if ((((param_1->PostProcessSettings).bOverride_LumenSurfaceCacheResolution != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution = '\x01';
    (this->PostProcessSettings).LumenSurfaceCacheResolution =
         (param_1->PostProcessSettings).LumenSurfaceCacheResolution;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenSceneLightingQuality != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneLightingQuality != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingQuality = 1;
    (this->PostProcessSettings).LumenSceneLightingQuality =
         (param_1->PostProcessSettings).LumenSceneLightingQuality;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenSceneDetail != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneDetail != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneDetail = 1;
    (this->PostProcessSettings).LumenSceneDetail = (param_1->PostProcessSettings).LumenSceneDetail;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenSceneViewDistance != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneViewDistance != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneViewDistance = 1;
    (this->PostProcessSettings).LumenSceneViewDistance =
         (param_1->PostProcessSettings).LumenSceneViewDistance;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenSceneLightingUpdateSpeed =
         (param_1->PostProcessSettings).LumenSceneLightingUpdateSpeed;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenFinalGatherQuality != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherQuality != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherQuality = 1;
    (this->PostProcessSettings).LumenFinalGatherQuality =
         (param_1->PostProcessSettings).LumenFinalGatherQuality;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed =
         (param_1->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces = 1;
    uVar15 = (this->PostProcessSettings).field_0x410;
    (this->PostProcessSettings).field_0x410 =
         ((this->PostProcessSettings).LumenFinalGatherScreenTraces ^
         (param_1->PostProcessSettings).LumenFinalGatherScreenTraces) & 1 ^ uVar15;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if ((((param_1->PostProcessSettings).bOverride_LumenMaxTraceDistance != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxTraceDistance != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxTraceDistance = 1;
    (this->PostProcessSettings).LumenMaxTraceDistance =
         (param_1->PostProcessSettings).LumenMaxTraceDistance;
  }
  if (((param_1->PostProcessSettings).bOverride_LumenDiffuseColorBoost != 0) ||
     ((this->PostProcessSettings).bOverride_LumenDiffuseColorBoost != 0)) {
    (this->PostProcessSettings).bOverride_LumenDiffuseColorBoost = 1;
    fVar59 = (this->PostProcessSettings).LumenDiffuseColorBoost;
    (this->PostProcessSettings).LumenDiffuseColorBoost =
         ((param_1->PostProcessSettings).LumenDiffuseColorBoost - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LumenSkylightLeaking != 0) ||
     ((this->PostProcessSettings).bOverride_LumenSkylightLeaking != 0)) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeaking = 1;
    fVar59 = (this->PostProcessSettings).LumenSkylightLeaking;
    (this->PostProcessSettings).LumenSkylightLeaking =
         ((param_1->PostProcessSettings).LumenSkylightLeaking - fVar59) * param_2 + fVar59;
  }
  if (((param_1->PostProcessSettings).bOverride_LumenSkylightLeakingTint != 0) ||
     ((this->PostProcessSettings).bOverride_LumenSkylightLeakingTint != 0)) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeakingTint = 1;
    fVar59 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.A;
    fVar5 = (param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.G;
    fVar6 = (param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.B;
    fVar7 = (param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.A;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.R =
         ((param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.R - fVar2) *
         param_2 + fVar2;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.G =
         (fVar5 - fVar59) * param_2 + fVar59;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((param_1->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance != 0) ||
     ((this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance != 0)) {
    (this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance = 1;
    fVar59 = (this->PostProcessSettings).LumenFullSkylightLeakingDistance;
    (this->PostProcessSettings).LumenFullSkylightLeakingDistance =
         ((param_1->PostProcessSettings).LumenFullSkylightLeakingDistance - fVar59) * param_2 +
         fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x24;
  if ((((param_1->PostProcessSettings).bOverride_LumenRayLightingMode != 0) ||
      ((this->PostProcessSettings).bOverride_LumenRayLightingMode != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenRayLightingMode = '\x01';
    (this->PostProcessSettings).LumenRayLightingMode =
         (param_1->PostProcessSettings).LumenRayLightingMode;
  }
  if ((((param_1->PostProcessSettings).bOverride_LumenReflectionsScreenTraces != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces = '\x01';
    uVar15 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 =
         ((this->PostProcessSettings).LumenReflectionsScreenTraces ^
         (param_1->PostProcessSettings).LumenReflectionsScreenTraces) & 1 ^ uVar15;
  }
  if ((((param_1->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections = '\x01';
    bVar49 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 =
         (bVar49 ^ (param_1->PostProcessSettings).field_0x440) & 2 ^ bVar49;
  }
  puVar52 = &(this->PostProcessSettings).field_0x28;
  if ((((param_1->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections = 1;
    (this->PostProcessSettings).LumenMaxRoughnessToTraceReflections =
         (param_1->PostProcessSettings).LumenMaxRoughnessToTraceReflections;
  }
  if ((((param_1->PostProcessSettings).bOverride_LumenMaxReflectionBounces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxReflectionBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxReflectionBounces = 1;
    (this->PostProcessSettings).LumenMaxReflectionBounces =
         (param_1->PostProcessSettings).LumenMaxReflectionBounces;
  }
  if ((((param_1->PostProcessSettings).bOverride_LumenMaxRefractionBounces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxRefractionBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxRefractionBounces = 1;
    (this->PostProcessSettings).LumenMaxRefractionBounces =
         (param_1->PostProcessSettings).LumenMaxRefractionBounces;
  }
  if ((((param_1->PostProcessSettings).bOverride_ReflectionMethod != '\0') ||
      ((this->PostProcessSettings).bOverride_ReflectionMethod != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_ReflectionMethod = '\x01';
    (this->PostProcessSettings).ReflectionMethod.Value =
         (param_1->PostProcessSettings).ReflectionMethod.Value;
  }
  if ((((param_1->PostProcessSettings).bOverride_LumenReflectionQuality != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenReflectionQuality != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenReflectionQuality = '\x01';
    (this->PostProcessSettings).LumenReflectionQuality =
         (param_1->PostProcessSettings).LumenReflectionQuality;
  }
  puVar52 = &(this->PostProcessSettings).field_0x14;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingAO != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAO != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAO = 1;
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x638;
    *(uint *)&(this->PostProcessSettings).field_0x638 =
         (ZPULL(uVar16,0,1) ^ (param_1->PostProcessSettings).RayTracingAO) & 1 ^ uVar16;
  }
  if ((((param_1->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingAOSamplesPerPixel =
         (param_1->PostProcessSettings).RayTracingAOSamplesPerPixel;
  }
  puVar57 = &(this->PostProcessSettings).field_0x14;
  if ((((param_1->PostProcessSettings).bOverride_RayTracingAOIntensity != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAOIntensity != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAOIntensity = 1;
    (this->PostProcessSettings).RayTracingAOIntensity =
         (param_1->PostProcessSettings).RayTracingAOIntensity;
  }
  if ((((param_1->PostProcessSettings).bOverride_RayTracingAORadius != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAORadius != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAORadius = 1;
    (this->PostProcessSettings).RayTracingAORadius =
         (param_1->PostProcessSettings).RayTracingAORadius;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingMaxBounces != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingMaxBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingMaxBounces = 1;
    (this->PostProcessSettings).PathTracingMaxBounces =
         (param_1->PostProcessSettings).PathTracingMaxBounces;
  }
  if ((((param_1->PostProcessSettings).bOverride_PathTracingSamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel = 1;
    (this->PostProcessSettings).PathTracingSamplesPerPixel =
         (param_1->PostProcessSettings).PathTracingSamplesPerPixel;
  }
  if (((param_1->PostProcessSettings).bOverride_PathTracingMaxPathIntensity != 0) ||
     ((this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity != 0)) {
    (this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity = 1;
    fVar59 = (this->PostProcessSettings).PathTracingMaxPathIntensity;
    (this->PostProcessSettings).PathTracingMaxPathIntensity =
         ((param_1->PostProcessSettings).PathTracingMaxPathIntensity - fVar59) * param_2 + fVar59;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials = 1;
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (ZPULL(uVar16,0,1) ^ (param_1->PostProcessSettings).PathTracingEnableEmissiveMaterials) & 1
         ^ uVar16;
  }
  puVar57 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 2 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere != 0)) && (bVar24)
     ) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 4 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingEnableDenoiser != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableDenoiser != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingEnableDenoiser = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 8 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingIncludeEmissive != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeEmissive != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeEmissive = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x10 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingIncludeDiffuse != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x20 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x40 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingIncludeSpecular != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeSpecular != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeSpecular = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x80 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x100 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if ((((param_1->PostProcessSettings).bOverride_PathTracingIncludeVolume != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeVolume != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeVolume = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x200 ^ uVar17;
  }
  if ((((param_1->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x400 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1a;
  if (((param_1->PostProcessSettings).bOverride_DepthOfFieldBladeCount == '\0') &&
     ((this->PostProcessSettings).bOverride_DepthOfFieldBladeCount == '\0')) {
    if (!bVar24) goto LAB_14835d38c;
  }
  else {
    if (!bVar24) goto LAB_14835d38c;
    (this->PostProcessSettings).bOverride_DepthOfFieldBladeCount = '\x01';
    (this->PostProcessSettings).DepthOfFieldBladeCount =
         (param_1->PostProcessSettings).DepthOfFieldBladeCount;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 = (param_1->PostProcessSettings).AmbientCubemap.field0_0x0.DebugPtr,
     pUVar19 != (UTextureCube *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->PostProcessSettings).AmbientCubemap.field0_0x0 =
       (param_1->PostProcessSettings).AmbientCubemap.field0_0x0;
LAB_14835d38c:
  if (((param_1->PostProcessSettings).bOverride_ColorGradingIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGradingIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGradingIntensity = '\x01';
    fVar59 = (this->PostProcessSettings).ColorGradingIntensity;
    (this->PostProcessSettings).ColorGradingIntensity =
         ((param_1->PostProcessSettings).ColorGradingIntensity - fVar59) * param_2 + fVar59;
  }
  if ((((param_1->PostProcessSettings).bOverride_ColorGradingLUT != '\0') ||
      ((this->PostProcessSettings).bOverride_ColorGradingLUT != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_ColorGradingLUT = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->PostProcessSettings).ColorGradingLUT.field0_0x0.DebugPtr,
       pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).ColorGradingLUT.field0_0x0 =
         (param_1->PostProcessSettings).ColorGradingLUT.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_BloomDirtMask != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomDirtMask != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomDirtMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->PostProcessSettings).BloomDirtMask.field0_0x0.DebugPtr,
       pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).BloomDirtMask.field0_0x0 =
         (param_1->PostProcessSettings).BloomDirtMask.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_BloomMethod != 0) ||
      ((this->PostProcessSettings).bOverride_BloomMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomMethod = '\x01';
    (this->PostProcessSettings).BloomMethod.Value = (param_1->PostProcessSettings).BloomMethod.Value
    ;
  }
  if ((((param_1->PostProcessSettings).bOverride_BloomConvolutionTexture != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomConvolutionTexture != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 = (param_1->PostProcessSettings).BloomConvolutionTexture.field0_0x0.DebugPtr,
       pUVar21 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->PostProcessSettings).BloomConvolutionTexture.field0_0x0 =
         (param_1->PostProcessSettings).BloomConvolutionTexture.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_FilmGrainTexture != '\0') ||
      ((this->PostProcessSettings).bOverride_FilmGrainTexture != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_FilmGrainTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 = (param_1->PostProcessSettings).FilmGrainTexture.field0_0x0.DebugPtr,
       pUVar21 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->PostProcessSettings).FilmGrainTexture.field0_0x0 =
         (param_1->PostProcessSettings).FilmGrainTexture.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_BloomConvolutionBufferScale != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomConvolutionBufferScale != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionBufferScale = '\x01';
    (this->PostProcessSettings).BloomConvolutionBufferScale =
         (param_1->PostProcessSettings).BloomConvolutionBufferScale;
  }
  if ((((param_1->PostProcessSettings).bOverride_AutoExposureBiasCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureBiasCurve != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureBiasCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->PostProcessSettings).AutoExposureBiasCurve.field0_0x0.DebugPtr,
       pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).AutoExposureBiasCurve.field0_0x0 =
         (param_1->PostProcessSettings).AutoExposureBiasCurve.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_AutoExposureMeterMask != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureMeterMask != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureMeterMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->PostProcessSettings).AutoExposureMeterMask.field0_0x0.DebugPtr,
       pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).AutoExposureMeterMask.field0_0x0 =
         (param_1->PostProcessSettings).AutoExposureMeterMask.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0.
                  DebugPtr, pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0 =
         (param_1->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve != '\0')) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0.
                  DebugPtr, pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0 =
         (param_1->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0;
  }
  if ((((param_1->PostProcessSettings).bOverride_LensFlareBokehShape != 0) ||
      ((this->PostProcessSettings).bOverride_LensFlareBokehShape != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LensFlareBokehShape = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->PostProcessSettings).LensFlareBokehShape.field0_0x0.DebugPtr,
       pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).LensFlareBokehShape.field0_0x0 =
         (param_1->PostProcessSettings).LensFlareBokehShape.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_LensFlareTints != '\0') {
    pfVar47 = &(param_1->PostProcessSettings).LensFlareTints[1].field0_0x0._s_0.G;
    lVar50 = (longlong)this - (longlong)param_1;
    lVar54 = 2;
    do {
      fVar59 = pfVar47[-4];
      fVar2 = pfVar47[-3];
      fVar3 = pfVar47[-2];
      *(float *)(lVar50 + -0x14 + (longlong)pfVar47) =
           (pfVar47[-5] - *(float *)(lVar50 + -0x14 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0x14 + (longlong)pfVar47);
      *(float *)(lVar50 + -0x10 + (longlong)pfVar47) =
           (fVar59 - *(float *)(lVar50 + -0x10 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0x10 + (longlong)pfVar47);
      *(float *)(lVar50 + -0xc + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + -0xc + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0xc + (longlong)pfVar47);
      *(float *)(lVar50 + -8 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + -8 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -8 + (longlong)pfVar47);
      fVar59 = *pfVar47;
      fVar2 = pfVar47[1];
      fVar3 = pfVar47[2];
      *(float *)(lVar50 + -4 + (longlong)pfVar47) =
           (((FLinearColor_u_0_s_0 *)(pfVar47 + -1))->R -
           *(float *)(lVar50 + -4 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -4 + (longlong)pfVar47);
      *(float *)(lVar50 + (longlong)pfVar47) =
           (fVar59 - *(float *)(lVar50 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + (longlong)pfVar47);
      *(float *)(lVar50 + 4 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 4 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 4 + (longlong)pfVar47);
      *(float *)(lVar50 + 8 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 8 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 8 + (longlong)pfVar47);
      fVar59 = pfVar47[4];
      fVar2 = pfVar47[5];
      fVar3 = pfVar47[6];
      *(float *)(lVar50 + 0xc + (longlong)pfVar47) =
           (pfVar47[3] - *(float *)(lVar50 + 0xc + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0xc + (longlong)pfVar47);
      *(float *)(lVar50 + 0x10 + (longlong)pfVar47) =
           (fVar59 - *(float *)(lVar50 + 0x10 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x10 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x14 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 0x14 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x14 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x18 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 0x18 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x18 + (longlong)pfVar47);
      fVar59 = pfVar47[8];
      fVar2 = pfVar47[9];
      fVar3 = pfVar47[10];
      *(float *)(lVar50 + 0x1c + (longlong)pfVar47) =
           (pfVar47[7] - *(float *)(lVar50 + 0x1c + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x1c + (longlong)pfVar47);
      *(float *)(lVar50 + 0x20 + (longlong)pfVar47) =
           (fVar59 - *(float *)(lVar50 + 0x20 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x20 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x24 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 0x24 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x24 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x28 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 0x28 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x28 + (longlong)pfVar47);
      pfVar47 = pfVar47 + 0x10;
      lVar54 = lVar54 + -1;
    } while (lVar54 != 0);
  }
  if (((param_1->PostProcessSettings).bOverride_MobileHQGaussian != '\0') && (bVar24)) {
    puVar52 = &(this->PostProcessSettings).field_0x34;
    *puVar52 = *puVar52 ^
               ((this->PostProcessSettings).bMobileHQGaussian ^
               (param_1->PostProcessSettings).bMobileHQGaussian) & 1;
  }
  if ((((param_1->PostProcessSettings).bOverride_AutoExposureMethod != 0) ||
      ((this->PostProcessSettings).bOverride_AutoExposureMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureMethod = '\x01';
    (this->PostProcessSettings).AutoExposureMethod.Value =
         (param_1->PostProcessSettings).AutoExposureMethod.Value;
  }
  if ((((param_1->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS != '\0') ||
      ((this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x60c;
    *(uint *)&(this->PostProcessSettings).field_0x60c =
         (ZPULL(uVar16,0,1) ^ (param_1->PostProcessSettings).AmbientOcclusionRadiusInWS) & 1 ^
         uVar16;
  }
  if ((((param_1->PostProcessSettings).bOverride_MotionBlurTargetFPS != 0) ||
      ((this->PostProcessSettings).bOverride_MotionBlurTargetFPS != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_MotionBlurTargetFPS = '\x01';
    (this->PostProcessSettings).MotionBlurTargetFPS =
         (param_1->PostProcessSettings).MotionBlurTargetFPS;
  }
  if ((((param_1->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x4a0;
    *(uint *)&(this->PostProcessSettings).field_0x4a0 =
         (ZPULL(uVar16,0,1) ^ (param_1->PostProcessSettings).AutoExposureApplyPhysicalCameraExposure
         ) & 1 ^ uVar16;
  }
  if ((((param_1->PostProcessSettings).bOverride_UserFlags != '\0') ||
      ((this->PostProcessSettings).bOverride_UserFlags != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_UserFlags = '\x01';
    (this->PostProcessSettings).UserFlags = (param_1->PostProcessSettings).UserFlags;
  }
  iVar46 = (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
  pFVar56 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  pFVar48 = pFVar56 + (longlong)iVar46 * 0x10;
  do {
    if ((this->PostProcessSettings).WeightedBlendables.Array.ArrayNum != iVar46) {
      `TCheckedPointerIterator<FWeightedBlendable,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_18);
    }
    iVar18 = (param_1->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
    pFVar58 = (param_1->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
    if (pFVar56 == pFVar48) {
      pFVar56 = pFVar58 + (longlong)iVar18 * 0x10;
      pFVar55 = &(this->PostProcessSettings).WeightedBlendables;
      do {
        if ((param_1->PostProcessSettings).WeightedBlendables.Array.ArrayNum != iVar18) {
          `TCheckedPointerIterator<FWeightedBlendable_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_18);
        }
        if (pFVar58 == pFVar56) {
          return;
        }
        pFVar48 = (pFVar55->Array).AllocatorInstance.Data;
        pFVar51 = pFVar48 + (longlong)(this->PostProcessSettings).WeightedBlendables.Array.ArrayNum
                            * 0x10;
        if (pFVar48 != pFVar51) {
          do {
            if (*(longlong *)(pFVar48 + 8) == *(longlong *)(pFVar58 + 8)) goto LAB_14835da89;
            pFVar48 = pFVar48 + 0x10;
          } while (pFVar48 != pFVar51);
        }
        iVar46 = (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
        piVar1 = &(this->PostProcessSettings).WeightedBlendables.Array.ArrayMax;
        fVar8 = *(float *)pFVar58;
        if (iVar46 == *piVar1) {
          iVar46 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar55,piVar1);
        }
        (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum = iVar46 + 1;
        pFVar48 = (pFVar55->Array).AllocatorInstance.Data;
        pUVar23 = *(UObject **)(pFVar58 + 8);
        *(float *)(pFVar48 + (longlong)iVar46 * 0x10) = param_2 * fVar8;
        *(UObject **)(pFVar48 + (longlong)iVar46 * 0x10 + 8) = pUVar23;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar23);
        }
LAB_14835da89:
        pFVar58 = pFVar58 + 0x10;
      } while( true );
    }
    pFVar51 = pFVar58 + (longlong)iVar18 * 0x10;
    if (pFVar58 != pFVar51) {
      do {
        if (*(longlong *)(pFVar56 + 8) == *(longlong *)(pFVar58 + 8)) goto LAB_14835d9c3;
        pFVar58 = pFVar58 + 0x10;
      } while (pFVar58 != pFVar51);
    }
    *(float *)pFVar56 = (fVar8 - param_2) * *(float *)pFVar56;
LAB_14835d9c3:
    pFVar56 = pFVar56 + 0x10;
  } while( true );
}

// LerpAll @ 14d5b5660

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::LerpAll
          (FPostProcessSettingsCollection *this,FPostProcessSettings *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  UTextureCube *pUVar19;
  UTexture *pUVar20;
  UTexture2D *pUVar21;
  UCurveFloat *pUVar22;
  UObject *pUVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  TVector2<float>_u_0 TVar45;
  int iVar46;
  float *pfVar47;
  FScriptContainerElement *pFVar48;
  byte bVar49;
  longlong lVar50;
  FScriptContainerElement *pFVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  longlong lVar54;
  FWeightedBlendables *pFVar55;
  FScriptContainerElement *pFVar56;
  FScriptContainerElement *pFVar57;
  float fVar58;
  double dVar59;
  undefined1 auStackX_18 [8];
  float fStackX_20;
  float fStackX_24;
  
  fVar8 = __real_3f800000;
  if (param_2 <= 0.0) {
    return;
  }
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  bVar24 = __real_3f000000 <= param_2;
  if (((param_1->bOverride_TemperatureType != 0) || (this.bOverride_TemperatureType != 0)) &&
     (bVar24)) {
    this.bOverride_TemperatureType = '\x01';
    (this->PostProcessSettings).TemperatureType.Value = (param_1->TemperatureType).Value;
  }
  if ((param_1->bOverride_WhiteTemp != '\0') ||
     (bVar49 = *(byte *)&this->PostProcessSettings,
     ((byte *)&this->PostProcessSettings)->bOverride_WhiteTemp != '\0')) {
    this.bOverride_WhiteTemp = '\x01';
    bVar49 = *(byte *)&this->PostProcessSettings;
    (this->PostProcessSettings).WhiteTemp =
         (param_1->WhiteTemp - (this->PostProcessSettings).WhiteTemp) * param_2 +
         (this->PostProcessSettings).WhiteTemp;
  }
  if (((bVar49 | *(byte *)param_1) & 4) != 0) {
    bVar49 = bVar49 | 4;
    *(byte *)&this->PostProcessSettings = bVar49;
    (this->PostProcessSettings).WhiteTint =
         (param_1->WhiteTint - (this->PostProcessSettings).WhiteTint) * param_2 +
         (this->PostProcessSettings).WhiteTint;
  }
  if (((bVar49 | *(byte *)param_1) & 8) != 0) {
    *(byte *)&this->PostProcessSettings = bVar49 | 8;
    dVar12 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z;
    dVar9 = (param_1->ColorSaturation).field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturation).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    dVar11 = (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X =
         ((param_1->ColorSaturation).field0_0x0._s_0.X -
         (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X) * dVar59 +
         (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar25._8_4_ = SUB84(dVar44,0);
    auVar25._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorSaturation.field0_0x0 + 8) =
         auVar25;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W =
         (dVar9 - dVar10) * dVar59 + dVar11;
  }
  if ((param_1->bOverride_ColorContrast != '\0') || (this.bOverride_ColorContrast != '\0')) {
    this.bOverride_ColorContrast = '\x01';
    dVar12 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z;
    dVar9 = (param_1->ColorContrast).field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    dVar13 = (param_1->ColorContrast).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorContrast).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    dVar11 = (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X =
         ((param_1->ColorContrast).field0_0x0._s_0.X -
         (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X) * dVar59 +
         (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar26._8_4_ = SUB84(dVar44,0);
    auVar26._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar26._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorContrast.field0_0x0 + 8) =
         auVar26;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W = (dVar9 - dVar10) * dVar59 + dVar11
    ;
  }
  if ((param_1->bOverride_ColorGamma != '\0') || (this.bOverride_ColorGamma != '\0')) {
    this.bOverride_ColorGamma = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGamma).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGamma).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGamma).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X =
         ((param_1->ColorGamma).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar27._8_4_ = SUB84(dVar44,0);
    auVar27._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar27._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGamma.field0_0x0 + 8) =
         auVar27;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGain != '\0') || (this.bOverride_ColorGain != '\0')) {
    this.bOverride_ColorGain = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGain).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGain).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGain).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X =
         ((param_1->ColorGain).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar28._8_4_ = SUB84(dVar44,0);
    auVar28._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar28._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGain.field0_0x0 + 8) =
         auVar28;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if (((bool)param_1->bOverride_ColorOffset) || ((bool)this.bOverride_ColorOffset)) {
    this.bOverride_ColorOffset = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffset).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffset).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffset).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X =
         ((param_1->ColorOffset).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar29._8_4_ = SUB84(dVar44,0);
    auVar29._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar29._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorOffset.field0_0x0 + 8) =
         auVar29;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W = (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorSaturationShadows != 0) ||
     ((this->PostProcessSettings).bOverride_ColorSaturationShadows != 0)) {
    (this->PostProcessSettings).bOverride_ColorSaturationShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X =
         ((param_1->ColorSaturationShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar30._8_4_ = SUB84(dVar44,0);
    auVar30._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar30._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationShadows.field0_0x0 + 8) = auVar30;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorContrastShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastShadows != '\0')) {
    (this->PostProcessSettings).bOverride_ColorContrastShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y;
    dVar10 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X;
    dVar11 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z;
    dVar44 = (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W;
    dVar12 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
    dVar13 = (param_1->ColorContrastShadows).field0_0x0._s_0.Z;
    dVar14 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X =
         ((param_1->ColorContrastShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y =
         (dVar12 - dVar9) * dVar59 + dVar9;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z =
         (dVar13 - dVar11) * dVar59 + dVar11;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W =
         (dVar14 - dVar44) * dVar59 + dVar44;
  }
  if ((param_1->bOverride_ColorGammaShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGammaShadows != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorGammaShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X =
         ((param_1->ColorGammaShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar31._8_4_ = SUB84(dVar44,0);
    auVar31._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar31._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGammaShadows.field0_0x0 + 8)
         = auVar31;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGainShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGainShadows != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGainShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X =
         ((param_1->ColorGainShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar32._8_4_ = SUB84(dVar44,0);
    auVar32._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar32._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGainShadows.field0_0x0 + 8) =
         auVar32;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorOffsetShadows != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetShadows != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorOffsetShadows = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X =
         ((param_1->ColorOffsetShadows).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar33._8_4_ = SUB84(dVar44,0);
    auVar33._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar33._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorOffsetShadows.field0_0x0 + 8)
         = auVar33;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorSaturationMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorSaturationMidtones != '\0')) {
    (this->PostProcessSettings).bOverride_ColorSaturationMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X =
         ((param_1->ColorSaturationMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar34._8_4_ = SUB84(dVar44,0);
    auVar34._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar34._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationMidtones.field0_0x0 + 8) = auVar34;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorContrastMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastMidtones != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorContrastMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X =
         ((param_1->ColorContrastMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar35._8_4_ = SUB84(dVar44,0);
    auVar35._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar35._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorContrastMidtones.field0_0x0 + 8) = auVar35;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if (((bool)param_1->bOverride_ColorGammaMidtones) ||
     ((bool)(this->PostProcessSettings).bOverride_ColorGammaMidtones)) {
    (this->PostProcessSettings).bOverride_ColorGammaMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X =
         ((param_1->ColorGammaMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar36._8_4_ = SUB84(dVar44,0);
    auVar36._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar36._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGammaMidtones.field0_0x0 + 8)
         = auVar36;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGainMidtones != 0) ||
     ((this->PostProcessSettings).bOverride_ColorGainMidtones != 0)) {
    (this->PostProcessSettings).bOverride_ColorGainMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X =
         ((param_1->ColorGainMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar37._8_4_ = SUB84(dVar44,0);
    auVar37._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar37._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->PostProcessSettings).ColorGainMidtones.field0_0x0 + 8)
         = auVar37;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorOffsetMidtones != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetMidtones != '\0')) {
    (this->PostProcessSettings).bOverride_ColorOffsetMidtones = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X =
         ((param_1->ColorOffsetMidtones).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar38._8_4_ = SUB84(dVar44,0);
    auVar38._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar38._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorOffsetMidtones.field0_0x0 + 8) = auVar38;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorSaturationHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorSaturationHighlights != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorSaturationHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X =
         ((param_1->ColorSaturationHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar39._8_4_ = SUB84(dVar44,0);
    auVar39._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar39._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorSaturationHighlights.field0_0x0 + 8) = auVar39;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorContrastHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorContrastHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_ColorContrastHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X =
         ((param_1->ColorContrastHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar40._8_4_ = SUB84(dVar44,0);
    auVar40._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar40._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorContrastHighlights.field0_0x0 + 8) = auVar40;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGammaHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGammaHighlights != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorGammaHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X =
         ((param_1->ColorGammaHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar41._8_4_ = SUB84(dVar44,0);
    auVar41._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar41._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorGammaHighlights.field0_0x0 + 8) = auVar41;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorGainHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGainHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGainHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
    dVar59 = (double)param_2;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X =
         ((param_1->ColorGainHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar42._8_4_ = SUB84(dVar44,0);
    auVar42._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar42._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorGainHighlights.field0_0x0 + 8) = auVar42;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if ((param_1->bOverride_ColorOffsetHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorOffsetHighlights != '\0')) {
    dVar59 = (double)param_2;
    (this->PostProcessSettings).bOverride_ColorOffsetHighlights = '\x01';
    dVar9 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W;
    dVar10 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X;
    dVar12 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y;
    dVar44 = (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z;
    dVar11 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
    dVar13 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X =
         ((param_1->ColorOffsetHighlights).field0_0x0._s_0.X - dVar10) * dVar59 + dVar10;
    dVar44 = (dVar14 - dVar44) * dVar59 + dVar44;
    auVar43._8_4_ = SUB84(dVar44,0);
    auVar43._0_8_ = (dVar13 - dVar12) * dVar59 + dVar12;
    auVar43._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])
     ((longlong)&(this->PostProcessSettings).ColorOffsetHighlights.field0_0x0 + 8) = auVar43;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W =
         (dVar11 - dVar9) * dVar59 + dVar9;
  }
  if (((bool)param_1->bOverride_ColorCorrectionShadowsMax) ||
     ((bool)(this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax)) {
    (this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax = '\x01';
    fVar58 = (this->PostProcessSettings).ColorCorrectionShadowsMax;
    (this->PostProcessSettings).ColorCorrectionShadowsMax =
         (param_1->ColorCorrectionShadowsMax - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if ((param_1->bOverride_ColorCorrectionHighlightsMin != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin != 0)) {
    (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin = '\x01';
    fVar58 = (this->PostProcessSettings).ColorCorrectionHighlightsMin;
    bVar49 = *puVar52;
    (this->PostProcessSettings).ColorCorrectionHighlightsMin =
         (param_1->ColorCorrectionHighlightsMin - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ColorCorrectionHighlightsMax != '\0') || ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).ColorCorrectionHighlightsMax;
    (this->PostProcessSettings).ColorCorrectionHighlightsMax =
         (param_1->ColorCorrectionHighlightsMax - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BlueCorrection != '\0') || ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BlueCorrection;
    (this->PostProcessSettings).BlueCorrection =
         (param_1->BlueCorrection - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if ((param_1->bOverride_ExpandGamut != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).ExpandGamut;
    (this->PostProcessSettings).ExpandGamut = (param_1->ExpandGamut - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ToneCurveAmount != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).ToneCurveAmount;
    (this->PostProcessSettings).ToneCurveAmount =
         (param_1->ToneCurveAmount - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x3;
  if ((param_1->bOverride_FilmSlope != '\0') || ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).FilmSlope;
    (this->PostProcessSettings).FilmSlope = (param_1->FilmSlope - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmToe != '\0') || ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).FilmToe;
    (this->PostProcessSettings).FilmToe = (param_1->FilmToe - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_FilmShoulder) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x3 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).FilmShoulder;
    (this->PostProcessSettings).FilmShoulder = (param_1->FilmShoulder - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x4;
  if ((param_1->bOverride_FilmBlackClip != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_FilmBlackClip != 0)) {
    (this->PostProcessSettings).bOverride_FilmBlackClip = '\x01';
    fVar58 = (this->PostProcessSettings).FilmBlackClip;
    bVar49 = *puVar52;
    (this->PostProcessSettings).FilmBlackClip = (param_1->FilmBlackClip - fVar58) * param_2 + fVar58
    ;
  }
  if ((param_1->bOverride_FilmWhiteClip != '\0') || ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).FilmWhiteClip;
    (this->PostProcessSettings).FilmWhiteClip = (param_1->FilmWhiteClip - fVar58) * param_2 + fVar58
    ;
  }
  puVar53 = &param_1->field_0x4;
  if (((bVar49 | *puVar53) & 4) != 0) {
    *puVar52 = bVar49 | 4;
    fVar58 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.A;
    fVar5 = (param_1->SceneColorTint).field0_0x0._s_0.G;
    fVar6 = (param_1->SceneColorTint).field0_0x0._s_0.B;
    fVar7 = (param_1->SceneColorTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.R =
         ((param_1->SceneColorTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3
    ;
    (this->PostProcessSettings).SceneColorTint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4
    ;
  }
  if ((param_1->bOverride_SceneFringeIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_SceneFringeIntensity != '\0')) {
    puVar52 = &(this->PostProcessSettings).field_0x4;
    (this->PostProcessSettings).bOverride_SceneFringeIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).SceneFringeIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).SceneFringeIntensity =
         (param_1->SceneFringeIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | *puVar53) & 0x10) != 0) {
    (this->PostProcessSettings).field_0x4 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).ChromaticAberrationStartOffset;
    (this->PostProcessSettings).ChromaticAberrationStartOffset =
         (param_1->ChromaticAberrationStartOffset - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x5;
  if ((param_1->bOverride_BloomIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).BloomIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomIntensity =
         (param_1->BloomIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomGaussianIntensity != '\0') || ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomGaussianIntensity;
    (this->PostProcessSettings).BloomGaussianIntensity =
         (param_1->BloomGaussianIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomThreshold != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomThreshold;
    (this->PostProcessSettings).BloomThreshold =
         (param_1->BloomThreshold - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x5) & 0x10) != 0) {
    (this->PostProcessSettings).field_0x5 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom1Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom1Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom1Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.R =
         ((param_1->Bloom1Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom1Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_BloomSizeScale != 0) ||
     ((this->PostProcessSettings).bOverride_BloomSizeScale != 0)) {
    (this->PostProcessSettings).bOverride_BloomSizeScale = '\x01';
    fVar58 = (this->PostProcessSettings).BloomSizeScale;
    (this->PostProcessSettings).BloomSizeScale =
         (param_1->BloomSizeScale - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x5;
  if ((param_1->bOverride_Bloom1Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom1Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom1Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom1Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom1Size = (param_1->Bloom1Size - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_Bloom2Tint) || ((char)bVar49 < '\0')) {
    *puVar52 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom2Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom2Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom2Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.R =
         ((param_1->Bloom2Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom2Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_Bloom2Size != '\0') ||
     ((this->PostProcessSettings).bOverride_Bloom2Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom2Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom2Size;
    (this->PostProcessSettings).Bloom2Size = (param_1->Bloom2Size - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if ((param_1->bOverride_Bloom3Tint != 0) ||
     ((this->PostProcessSettings).bOverride_Bloom3Tint != 0)) {
    (this->PostProcessSettings).bOverride_Bloom3Tint = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom3Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom3Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom3Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.R =
         ((param_1->Bloom3Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom3Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_Bloom3Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom3Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom3Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom3Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom3Size = (param_1->Bloom3Size - fVar58) * param_2 + fVar58;
  }
  puVar53 = &param_1->field_0x6;
  if (((bVar49 | *puVar53) & 4) != 0) {
    *puVar52 = bVar49 | 4;
    fVar58 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom4Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom4Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom4Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.R =
         ((param_1->Bloom4Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom4Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if ((param_1->bOverride_Bloom4Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom4Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom4Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom4Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom4Size = (param_1->Bloom4Size - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | *puVar53) & 0x10) != 0) {
    *puVar52 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom5Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom5Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom5Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.R =
         ((param_1->Bloom5Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom5Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x6;
  if ((param_1->bOverride_Bloom5Size != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_Bloom5Size != '\0')) {
    (this->PostProcessSettings).bOverride_Bloom5Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom5Size;
    bVar49 = *puVar52;
    (this->PostProcessSettings).Bloom5Size = (param_1->Bloom5Size - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x6) & 0x40) != 0) {
    *puVar52 = bVar49 | 0x40;
    fVar58 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.A;
    fVar5 = (param_1->Bloom6Tint).field0_0x0._s_0.G;
    fVar6 = (param_1->Bloom6Tint).field0_0x0._s_0.B;
    fVar7 = (param_1->Bloom6Tint).field0_0x0._s_0.A;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.R =
         ((param_1->Bloom6Tint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.G = (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).Bloom6Tint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((bool)param_1->bOverride_Bloom6Size) ||
     ((bool)(this->PostProcessSettings).bOverride_Bloom6Size)) {
    (this->PostProcessSettings).bOverride_Bloom6Size = '\x01';
    fVar58 = (this->PostProcessSettings).Bloom6Size;
    (this->PostProcessSettings).Bloom6Size = (param_1->Bloom6Size - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x8;
  if ((param_1->bOverride_BloomDirtMaskIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).BloomDirtMaskIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomDirtMaskIntensity =
         (param_1->BloomDirtMaskIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x8) & 0x10) != 0) {
    *puVar52 = bVar49 | 0x10;
    fVar58 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.A;
    fVar5 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.G;
    fVar6 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.B;
    fVar7 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.R =
         ((param_1->BloomDirtMaskTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).BloomDirtMaskTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x7;
  if ((param_1->bOverride_BloomConvolutionIntensity != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomConvolutionIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_BloomConvolutionIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).BloomConvolutionIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomConvolutionIntensity =
         (param_1->BloomConvolutionIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomConvolutionScatterDispersion != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomConvolutionScatterDispersion;
    (this->PostProcessSettings).BloomConvolutionScatterDispersion =
         (param_1->BloomConvolutionScatterDispersion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_BloomConvolutionSize != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).BloomConvolutionSize;
    (this->PostProcessSettings).BloomConvolutionSize =
         (param_1->BloomConvolutionSize - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x7;
  if (((bVar49 | param_1->field_0x7) & 0x20) != 0) {
    *puVar52 = bVar49 | 0x20;
    dVar9 = (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y;
    dVar10 = (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X;
    dVar11 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X =
         ((param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X - dVar10) * (double)param_2 + dVar10
    ;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y =
         (dVar11 - dVar9) * (double)param_2 + dVar9;
  }
  if (((bool)param_1->bOverride_BloomConvolutionPreFilterMin) ||
     ((bool)(this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin = '\x01';
    fVar58 = (this->PostProcessSettings).BloomConvolutionPreFilterMin;
    (this->PostProcessSettings).BloomConvolutionPreFilterMin =
         (param_1->BloomConvolutionPreFilterMin - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x8;
  if ((param_1->bOverride_BloomConvolutionPreFilterMax != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax != 0)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax = '\x01';
    fVar58 = (this->PostProcessSettings).BloomConvolutionPreFilterMax;
    bVar49 = *puVar52;
    (this->PostProcessSettings).BloomConvolutionPreFilterMax =
         (param_1->BloomConvolutionPreFilterMax - fVar58) * param_2 + fVar58;
  }
  if (((bVar49 | param_1->field_0x8) & 2) != 0) {
    *puVar52 = bVar49 | 2;
    fVar58 = (this->PostProcessSettings).BloomConvolutionPreFilterMult;
    (this->PostProcessSettings).BloomConvolutionPreFilterMult =
         (param_1->BloomConvolutionPreFilterMult - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x4;
  if (((bool)param_1->bOverride_AmbientCubemapIntensity) ||
     (bVar49 = *puVar52, (bool)(this->PostProcessSettings).bOverride_AmbientCubemapIntensity)) {
    (this->PostProcessSettings).bOverride_AmbientCubemapIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientCubemapIntensity;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AmbientCubemapIntensity =
         (param_1->AmbientCubemapIntensity - fVar58) * param_2 + fVar58;
  }
  puVar53 = &(this->PostProcessSettings).field_0x8;
  if (((bVar49 | param_1->field_0x4) & 0x40) != 0) {
    *puVar52 = bVar49 | 0x40;
    fVar58 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.A;
    fVar5 = (param_1->AmbientCubemapTint).field0_0x0._s_0.G;
    fVar6 = (param_1->AmbientCubemapTint).field0_0x0._s_0.B;
    fVar7 = (param_1->AmbientCubemapTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.R =
         ((param_1->AmbientCubemapTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).AmbientCubemapTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_CameraShutterSpeed != '\0') ||
     (bVar49 = *puVar53, (this->PostProcessSettings).bOverride_CameraShutterSpeed != '\0')) {
    (this->PostProcessSettings).bOverride_CameraShutterSpeed = '\x01';
    fVar58 = (this->PostProcessSettings).CameraShutterSpeed;
    bVar49 = *puVar53;
    (this->PostProcessSettings).CameraShutterSpeed =
         (param_1->CameraShutterSpeed - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_CameraISO) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x8 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).CameraISO;
    (this->PostProcessSettings).CameraISO = (param_1->CameraISO - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x9;
  if ((param_1->bOverride_AutoExposureLowPercent != '\0') ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_AutoExposureLowPercent != '\0')) {
    (this->PostProcessSettings).bOverride_AutoExposureLowPercent = '\x01';
    fVar58 = (this->PostProcessSettings).AutoExposureLowPercent;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AutoExposureLowPercent =
         (param_1->AutoExposureLowPercent - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AutoExposureHighPercent != '\0') || ((bVar49 & 4) != 0)) {
    bVar49 = bVar49 | 4;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureHighPercent;
    (this->PostProcessSettings).AutoExposureHighPercent =
         (param_1->AutoExposureHighPercent - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AutoExposureMinBrightness != '\0') || ((bVar49 & 8) != 0)) {
    bVar49 = bVar49 | 8;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureMinBrightness;
    (this->PostProcessSettings).AutoExposureMinBrightness =
         (param_1->AutoExposureMinBrightness - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x9;
  if ((param_1->bOverride_AutoExposureMaxBrightness != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureMaxBrightness;
    (this->PostProcessSettings).AutoExposureMaxBrightness =
         (param_1->AutoExposureMaxBrightness - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AutoExposureSpeedUp != '\0') || ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).AutoExposureSpeedUp;
    (this->PostProcessSettings).AutoExposureSpeedUp =
         (param_1->AutoExposureSpeedUp - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_AutoExposureSpeedDown) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0x9 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).AutoExposureSpeedDown;
    (this->PostProcessSettings).AutoExposureSpeedDown =
         (param_1->AutoExposureSpeedDown - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xa;
  if ((param_1->bOverride_AutoExposureBias != 0) ||
     (bVar49 = *puVar52, (this->PostProcessSettings).bOverride_AutoExposureBias != 0)) {
    (this->PostProcessSettings).bOverride_AutoExposureBias = '\x01';
    fVar58 = (this->PostProcessSettings).AutoExposureBias;
    bVar49 = *puVar52;
    (this->PostProcessSettings).AutoExposureBias =
         (param_1->AutoExposureBias - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_HistogramLogMin != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).HistogramLogMin;
    (this->PostProcessSettings).HistogramLogMin =
         (param_1->HistogramLogMin - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_HistogramLogMax != '\0') || ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).HistogramLogMax;
    (this->PostProcessSettings).HistogramLogMax =
         (param_1->HistogramLogMax - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xa;
  if (((param_1->bOverride_LocalExposureMethod != '\0') || ((bVar49 & 0x40) != 0)) && (bVar24)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    (this->PostProcessSettings).LocalExposureMethod = param_1->LocalExposureMethod;
  }
  if (((bool)param_1->bOverride_LocalExposureContrastScale_DEPRECATED) || ((char)bVar49 < '\0')) {
    *puVar52 = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED;
    (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED =
         (param_1->LocalExposureContrastScale_DEPRECATED - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xb;
  if ((param_1->bOverride_LocalExposureHighlightContrastScale != 0) ||
     (bVar49 = *puVar52,
     (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale != 0)) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureHighlightContrastScale;
    bVar49 = *puVar52;
    (this->PostProcessSettings).LocalExposureHighlightContrastScale =
         (param_1->LocalExposureHighlightContrastScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureShadowContrastScale != '\0') || ((bVar49 & 2) != 0)) {
    bVar49 = bVar49 | 2;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureShadowContrastScale;
    (this->PostProcessSettings).LocalExposureShadowContrastScale =
         (param_1->LocalExposureShadowContrastScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureHighlightThreshold != '\0') || ((bVar49 & 0x10) != 0)) {
    bVar49 = bVar49 | 0x10;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureHighlightThreshold;
    (this->PostProcessSettings).LocalExposureHighlightThreshold =
         (param_1->LocalExposureHighlightThreshold - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0xb;
  if ((param_1->bOverride_LocalExposureShadowThreshold != '\0') || ((bVar49 & 0x20) != 0)) {
    bVar49 = bVar49 | 0x20;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureShadowThreshold;
    (this->PostProcessSettings).LocalExposureShadowThreshold =
         (param_1->LocalExposureShadowThreshold - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureDetailStrength != '\0') || ((bVar49 & 0x40) != 0)) {
    bVar49 = bVar49 | 0x40;
    *puVar52 = bVar49;
    fVar58 = (this->PostProcessSettings).LocalExposureDetailStrength;
    (this->PostProcessSettings).LocalExposureDetailStrength =
         (param_1->LocalExposureDetailStrength - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_LocalExposureBlurredLuminanceBlend) || ((char)bVar49 < '\0')) {
    (this->PostProcessSettings).field_0xb = bVar49 | 0x80;
    fVar58 = (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend;
    (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend =
         (param_1->LocalExposureBlurredLuminanceBlend - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0) ||
     ((this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0)) {
    (this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent;
    (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent =
         (param_1->LocalExposureBlurredLuminanceKernelSizePercent - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureHighlightThresholdStrength != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureHighlightThresholdStrength;
    (this->PostProcessSettings).LocalExposureHighlightThresholdStrength =
         (param_1->LocalExposureHighlightThresholdStrength - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureShadowThresholdStrength != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureShadowThresholdStrength;
    (this->PostProcessSettings).LocalExposureShadowThresholdStrength =
         (param_1->LocalExposureShadowThresholdStrength - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LocalExposureMiddleGreyBias != '\0') ||
     ((this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias != '\0')) {
    (this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias = '\x01';
    fVar58 = (this->PostProcessSettings).LocalExposureMiddleGreyBias;
    (this->PostProcessSettings).LocalExposureMiddleGreyBias =
         (param_1->LocalExposureMiddleGreyBias - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LensFlareIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareIntensity;
    (this->PostProcessSettings).LensFlareIntensity =
         (param_1->LensFlareIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LensFlareTint != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareTint != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareTint = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.A;
    fVar5 = (param_1->LensFlareTint).field0_0x0._s_0.G;
    fVar6 = (param_1->LensFlareTint).field0_0x0._s_0.B;
    fVar7 = (param_1->LensFlareTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.R =
         ((param_1->LensFlareTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.B = (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).LensFlareTint.field0_0x0._s_0.A = (fVar7 - fVar4) * param_2 + fVar4;
  }
  if (((bool)param_1->bOverride_LensFlareBokehSize) ||
     ((bool)(this->PostProcessSettings).bOverride_LensFlareBokehSize)) {
    (this->PostProcessSettings).bOverride_LensFlareBokehSize = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareBokehSize;
    (this->PostProcessSettings).LensFlareBokehSize =
         (param_1->LensFlareBokehSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LensFlareThreshold != '\0') ||
     ((this->PostProcessSettings).bOverride_LensFlareThreshold != '\0')) {
    (this->PostProcessSettings).bOverride_LensFlareThreshold = '\x01';
    fVar58 = (this->PostProcessSettings).LensFlareThreshold;
    (this->PostProcessSettings).LensFlareThreshold =
         (param_1->LensFlareThreshold - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_VignetteIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_VignetteIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_VignetteIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).VignetteIntensity;
    (this->PostProcessSettings).VignetteIntensity =
         (param_1->VignetteIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_Sharpen != '\0') ||
     ((this->PostProcessSettings).bOverride_Sharpen != '\0')) {
    (this->PostProcessSettings).bOverride_Sharpen = '\x01';
    fVar58 = (this->PostProcessSettings).Sharpen;
    (this->PostProcessSettings).Sharpen = (param_1->Sharpen - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensity;
    (this->PostProcessSettings).FilmGrainIntensity =
         (param_1->FilmGrainIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_FilmGrainIntensityShadows) ||
     ((bool)(this->PostProcessSettings).bOverride_FilmGrainIntensityShadows)) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityShadows = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensityShadows;
    (this->PostProcessSettings).FilmGrainIntensityShadows =
         (param_1->FilmGrainIntensityShadows - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainIntensityMidtones != 0) ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones != 0)) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensityMidtones;
    (this->PostProcessSettings).FilmGrainIntensityMidtones =
         (param_1->FilmGrainIntensityMidtones - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainIntensityHighlights != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainIntensityHighlights;
    (this->PostProcessSettings).FilmGrainIntensityHighlights =
         (param_1->FilmGrainIntensityHighlights - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainShadowsMax != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainShadowsMax != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainShadowsMax = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainShadowsMax;
    (this->PostProcessSettings).FilmGrainShadowsMax =
         (param_1->FilmGrainShadowsMax - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainHighlightsMin != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainHighlightsMin != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMin = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainHighlightsMin;
    (this->PostProcessSettings).FilmGrainHighlightsMin =
         (param_1->FilmGrainHighlightsMin - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainHighlightsMax != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainHighlightsMax != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMax = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainHighlightsMax;
    (this->PostProcessSettings).FilmGrainHighlightsMax =
         (param_1->FilmGrainHighlightsMax - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_FilmGrainTexelSize != '\0') ||
     ((this->PostProcessSettings).bOverride_FilmGrainTexelSize != '\0')) {
    (this->PostProcessSettings).bOverride_FilmGrainTexelSize = '\x01';
    fVar58 = (this->PostProcessSettings).FilmGrainTexelSize;
    (this->PostProcessSettings).FilmGrainTexelSize =
         (param_1->FilmGrainTexelSize - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_AmbientOcclusionIntensity) ||
     ((bool)(this->PostProcessSettings).bOverride_AmbientOcclusionIntensity)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionIntensity;
    (this->PostProcessSettings).AmbientOcclusionIntensity =
         (param_1->AmbientOcclusionIntensity - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionStaticFraction != 0) ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction != 0)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionStaticFraction;
    (this->PostProcessSettings).AmbientOcclusionStaticFraction =
         (param_1->AmbientOcclusionStaticFraction - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionRadius != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadius = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionRadius;
    (this->PostProcessSettings).AmbientOcclusionRadius =
         (param_1->AmbientOcclusionRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionFadeDistance != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionFadeDistance;
    (this->PostProcessSettings).AmbientOcclusionFadeDistance =
         (param_1->AmbientOcclusionFadeDistance - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionFadeRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionFadeRadius;
    (this->PostProcessSettings).AmbientOcclusionFadeRadius =
         (param_1->AmbientOcclusionFadeRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionDistance_DEPRECATED != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED;
    (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED =
         (param_1->AmbientOcclusionDistance_DEPRECATED - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionPower != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionPower != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionPower = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionPower;
    (this->PostProcessSettings).AmbientOcclusionPower =
         (param_1->AmbientOcclusionPower - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_AmbientOcclusionBias) ||
     ((bool)(this->PostProcessSettings).bOverride_AmbientOcclusionBias)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionBias = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionBias;
    (this->PostProcessSettings).AmbientOcclusionBias =
         (param_1->AmbientOcclusionBias - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionQuality != 0) ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionQuality != 0)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionQuality = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionQuality;
    (this->PostProcessSettings).AmbientOcclusionQuality =
         (param_1->AmbientOcclusionQuality - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionMipBlend != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionMipBlend;
    (this->PostProcessSettings).AmbientOcclusionMipBlend =
         (param_1->AmbientOcclusionMipBlend - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionMipScale != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipScale != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipScale = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionMipScale;
    (this->PostProcessSettings).AmbientOcclusionMipScale =
         (param_1->AmbientOcclusionMipScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionMipThreshold != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionMipThreshold;
    (this->PostProcessSettings).AmbientOcclusionMipThreshold =
         (param_1->AmbientOcclusionMipThreshold - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_AmbientOcclusionTemporalBlendWeight != '\0') ||
     ((this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight != '\0')) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight = '\x01';
    fVar58 = (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight;
    (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight =
         (param_1->AmbientOcclusionTemporalBlendWeight - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_IndirectLightingColor) ||
     ((bool)(this->PostProcessSettings).bOverride_IndirectLightingColor)) {
    (this->PostProcessSettings).bOverride_IndirectLightingColor = '\x01';
    fVar58 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.A;
    fVar5 = (param_1->IndirectLightingColor).field0_0x0._s_0.G;
    fVar6 = (param_1->IndirectLightingColor).field0_0x0._s_0.B;
    fVar7 = (param_1->IndirectLightingColor).field0_0x0._s_0.A;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.R =
         ((param_1->IndirectLightingColor).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).IndirectLightingColor.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1a;
  if ((param_1->bOverride_IndirectLightingIntensity != 0) ||
     ((this->PostProcessSettings).bOverride_IndirectLightingIntensity != 0)) {
    (this->PostProcessSettings).bOverride_IndirectLightingIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).IndirectLightingIntensity;
    (this->PostProcessSettings).IndirectLightingIntensity =
         (param_1->IndirectLightingIntensity - fVar58) * param_2 + fVar58;
  }
  if (param_1->bOverride_DepthOfFieldFocalDistance != '\0') {
    fVar58 = (this->PostProcessSettings).DepthOfFieldFocalDistance;
    if ((fVar58 == 0.0) || (param_1->DepthOfFieldFocalDistance == 0.0)) {
      fVar58 = param_1->DepthOfFieldFocalDistance;
    }
    else {
      fVar58 = (param_1->DepthOfFieldFocalDistance - fVar58) * param_2 + fVar58;
    }
    (this->PostProcessSettings).DepthOfFieldFocalDistance = fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldFstop != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFstop != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFstop = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFstop;
    (this->PostProcessSettings).DepthOfFieldFstop =
         (param_1->DepthOfFieldFstop - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldMinFstop != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldMinFstop != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldMinFstop = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldMinFstop;
    (this->PostProcessSettings).DepthOfFieldMinFstop =
         (param_1->DepthOfFieldMinFstop - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_DepthOfFieldSensorWidth) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldSensorWidth;
    (this->PostProcessSettings).DepthOfFieldSensorWidth =
         (param_1->DepthOfFieldSensorWidth - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1b;
  if ((param_1->bOverride_DepthOfFieldSqueezeFactor != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor != 0)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldSqueezeFactor;
    (this->PostProcessSettings).DepthOfFieldSqueezeFactor =
         (param_1->DepthOfFieldSqueezeFactor - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldDepthBlurRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldDepthBlurRadius;
    (this->PostProcessSettings).DepthOfFieldDepthBlurRadius =
         (param_1->DepthOfFieldDepthBlurRadius - fVar58) * param_2 + fVar58;
  }
  if (((param_1->bOverride_DepthOfFieldUseHairDepth != '\0') ||
      ((this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x66c;
    *(uint *)&(this->PostProcessSettings).field_0x66c =
         (ZPULL(uVar16,0,1) ^ param_1->DepthOfFieldUseHairDepth) & 1 ^ uVar16;
  }
  if ((param_1->bOverride_DepthOfFieldDepthBlurAmount != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldDepthBlurAmount;
    (this->PostProcessSettings).DepthOfFieldDepthBlurAmount =
         (param_1->DepthOfFieldDepthBlurAmount - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalBokeh != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldPetzvalBokeh;
    (this->PostProcessSettings).DepthOfFieldPetzvalBokeh =
         (param_1->DepthOfFieldPetzvalBokeh - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalBokehFalloff != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff;
    (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff =
         (param_1->DepthOfFieldPetzvalBokehFalloff - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents = '\x01';
    fStackX_20 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0._s_0.
                 X;
    fStackX_24 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0._s_0.
                 Y;
    fStackX_20 = ((param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.X - fStackX_20)
                 * param_2 + fStackX_20;
    fStackX_24 = ((param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.Y - fStackX_24)
                 * param_2 + fStackX_24;
    TVar45._s_0.Y = fStackX_24;
    TVar45._s_0.X = fStackX_20;
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0 = TVar45;
  }
  if ((param_1->bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius;
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius =
         (param_1->DepthOfFieldPetzvalExclusionBoxRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldBarrelRadius != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldBarrelRadius;
    (this->PostProcessSettings).DepthOfFieldBarrelRadius =
         (param_1->DepthOfFieldBarrelRadius - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldBarrelLength != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldBarrelLength;
    (this->PostProcessSettings).DepthOfFieldBarrelLength =
         (param_1->DepthOfFieldBarrelLength - fVar58) * param_2 + fVar58;
  }
  bVar49 = param_1->field_0x1c;
  if (param_1->bOverride_DepthOfFieldMatteBoxFlags != 0) {
    fVar58 = param_1->DepthOfFieldMatteBoxFlags[0].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[0].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll = fVar58;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length =
         param_1->DepthOfFieldMatteBoxFlags[0].Length;
    fVar58 = param_1->DepthOfFieldMatteBoxFlags[1].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[1].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll = fVar58;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length =
         param_1->DepthOfFieldMatteBoxFlags[1].Length;
    fVar58 = param_1->DepthOfFieldMatteBoxFlags[2].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[2].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll = fVar58;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length =
         param_1->DepthOfFieldMatteBoxFlags[2].Length;
    bVar49 = param_1->field_0x1c;
  }
  if (((bVar49 & 0x10) != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFocalRegion;
    (this->PostProcessSettings).DepthOfFieldFocalRegion =
         (param_1->DepthOfFieldFocalRegion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldNearTransitionRegion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldNearTransitionRegion;
    (this->PostProcessSettings).DepthOfFieldNearTransitionRegion =
         (param_1->DepthOfFieldNearTransitionRegion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldFarTransitionRegion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFarTransitionRegion;
    (this->PostProcessSettings).DepthOfFieldFarTransitionRegion =
         (param_1->DepthOfFieldFarTransitionRegion - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_DepthOfFieldScale) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldScale)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldScale = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldScale;
    (this->PostProcessSettings).DepthOfFieldScale =
         (param_1->DepthOfFieldScale - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldNearBlurSize != 0) ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize != 0)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldNearBlurSize;
    (this->PostProcessSettings).DepthOfFieldNearBlurSize =
         (param_1->DepthOfFieldNearBlurSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldFarBlurSize != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldFarBlurSize;
    (this->PostProcessSettings).DepthOfFieldFarBlurSize =
         (param_1->DepthOfFieldFarBlurSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldOcclusion != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldOcclusion != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldOcclusion = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldOcclusion;
    (this->PostProcessSettings).DepthOfFieldOcclusion =
         (param_1->DepthOfFieldOcclusion - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldSkyFocusDistance != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldSkyFocusDistance;
    (this->PostProcessSettings).DepthOfFieldSkyFocusDistance =
         (param_1->DepthOfFieldSkyFocusDistance - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_DepthOfFieldVignetteSize != '\0') ||
     ((this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize != '\0')) {
    (this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldVignetteSize;
    (this->PostProcessSettings).DepthOfFieldVignetteSize =
         (param_1->DepthOfFieldVignetteSize - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_DepthOfFieldAspectRatioScalar) ||
     ((bool)(this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar)) {
    (this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar = '\x01';
    fVar58 = (this->PostProcessSettings).DepthOfFieldAspectRatioScalar;
    (this->PostProcessSettings).DepthOfFieldAspectRatioScalar =
         (param_1->DepthOfFieldAspectRatioScalar - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_MotionBlurAmount != '\0') ||
     ((this->PostProcessSettings).bOverride_MotionBlurAmount != '\0')) {
    (this->PostProcessSettings).bOverride_MotionBlurAmount = '\x01';
    fVar58 = (this->PostProcessSettings).MotionBlurAmount;
    (this->PostProcessSettings).MotionBlurAmount =
         (param_1->MotionBlurAmount - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_MotionBlurMax) ||
     ((bool)(this->PostProcessSettings).bOverride_MotionBlurMax)) {
    (this->PostProcessSettings).bOverride_MotionBlurMax = '\x01';
    fVar58 = (this->PostProcessSettings).MotionBlurMax;
    (this->PostProcessSettings).MotionBlurMax = (param_1->MotionBlurMax - fVar58) * param_2 + fVar58
    ;
  }
  if ((param_1->bOverride_MotionBlurPerObjectSize != '\0') ||
     ((this->PostProcessSettings).bOverride_MotionBlurPerObjectSize != '\0')) {
    (this->PostProcessSettings).bOverride_MotionBlurPerObjectSize = '\x01';
    fVar58 = (this->PostProcessSettings).MotionBlurPerObjectSize;
    (this->PostProcessSettings).MotionBlurPerObjectSize =
         (param_1->MotionBlurPerObjectSize - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ScreenSpaceReflectionQuality != '\0') ||
     ((this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality != '\0')) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality = '\x01';
    fVar58 = (this->PostProcessSettings).ScreenSpaceReflectionQuality;
    (this->PostProcessSettings).ScreenSpaceReflectionQuality =
         (param_1->ScreenSpaceReflectionQuality - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_ScreenSpaceReflectionIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).ScreenSpaceReflectionIntensity;
    (this->PostProcessSettings).ScreenSpaceReflectionIntensity =
         (param_1->ScreenSpaceReflectionIntensity - fVar58) * param_2 + fVar58;
  }
  if (((bool)param_1->bOverride_ScreenSpaceReflectionMaxRoughness) ||
     ((bool)(this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness)) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness = '\x01';
    fVar58 = (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness;
    (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness =
         (param_1->ScreenSpaceReflectionMaxRoughness - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_TranslucencyType != 0) ||
      ((this->PostProcessSettings).bOverride_TranslucencyType != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_TranslucencyType = 1;
    (this->PostProcessSettings).TranslucencyType = param_1->TranslucencyType;
  }
  if (((param_1->bOverride_RayTracingTranslucencyMaxRoughness != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxRoughness =
         param_1->RayTracingTranslucencyMaxRoughness;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyRefractionRays != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays != 0)) && (bVar24)
     ) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays = 1;
    (this->PostProcessSettings).RayTracingTranslucencyRefractionRays =
         param_1->RayTracingTranslucencyRefractionRays;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencySamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingTranslucencySamplesPerPixel =
         param_1->RayTracingTranslucencySamplesPerPixel;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyShadows != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows = 1;
    (this->PostProcessSettings).RayTracingTranslucencyShadows =
         param_1->RayTracingTranslucencyShadows;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyRefraction != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction = 1;
    uVar15 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 =
         ((this->PostProcessSettings).RayTracingTranslucencyRefraction ^
         param_1->RayTracingTranslucencyRefraction) & 1 ^ uVar15;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents =
         param_1->RayTracingTranslucencyMaxPrimaryHitEvents;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents =
         param_1->RayTracingTranslucencyMaxSecondaryHitEvents;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0)) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction = 1;
    bVar49 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 = (bVar49 ^ param_1->field_0x735) & 2 ^ bVar49;
  }
  if (((param_1->bOverride_DynamicGlobalIlluminationMethod != 0) ||
      ((this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod = 1;
    (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value =
         (param_1->DynamicGlobalIlluminationMethod).Value;
  }
  if (((param_1->bOverride_LumenSurfaceCacheResolution != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution = '\x01';
    (this->PostProcessSettings).LumenSurfaceCacheResolution = param_1->LumenSurfaceCacheResolution;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneLightingQuality != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneLightingQuality != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingQuality = 1;
    (this->PostProcessSettings).LumenSceneLightingQuality = param_1->LumenSceneLightingQuality;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneDetail != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneDetail != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneDetail = 1;
    (this->PostProcessSettings).LumenSceneDetail = param_1->LumenSceneDetail;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneViewDistance != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneViewDistance != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneViewDistance = 1;
    (this->PostProcessSettings).LumenSceneViewDistance = param_1->LumenSceneViewDistance;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenSceneLightingUpdateSpeed != 0) ||
      ((this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenSceneLightingUpdateSpeed =
         param_1->LumenSceneLightingUpdateSpeed;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenFinalGatherQuality != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherQuality != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherQuality = 1;
    (this->PostProcessSettings).LumenFinalGatherQuality = param_1->LumenFinalGatherQuality;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenFinalGatherLightingUpdateSpeed != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed =
         param_1->LumenFinalGatherLightingUpdateSpeed;
  }
  puVar52 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenFinalGatherScreenTraces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces = 1;
    uVar15 = (this->PostProcessSettings).field_0x410;
    (this->PostProcessSettings).field_0x410 =
         ((this->PostProcessSettings).LumenFinalGatherScreenTraces ^
         param_1->LumenFinalGatherScreenTraces) & 1 ^ uVar15;
  }
  puVar53 = &(this->PostProcessSettings).field_0x20;
  if (((param_1->bOverride_LumenMaxTraceDistance != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxTraceDistance != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxTraceDistance = 1;
    (this->PostProcessSettings).LumenMaxTraceDistance = param_1->LumenMaxTraceDistance;
  }
  if ((param_1->bOverride_LumenDiffuseColorBoost != 0) ||
     ((this->PostProcessSettings).bOverride_LumenDiffuseColorBoost != 0)) {
    (this->PostProcessSettings).bOverride_LumenDiffuseColorBoost = 1;
    fVar58 = (this->PostProcessSettings).LumenDiffuseColorBoost;
    (this->PostProcessSettings).LumenDiffuseColorBoost =
         (param_1->LumenDiffuseColorBoost - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LumenSkylightLeaking != 0) ||
     ((this->PostProcessSettings).bOverride_LumenSkylightLeaking != 0)) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeaking = 1;
    fVar58 = (this->PostProcessSettings).LumenSkylightLeaking;
    (this->PostProcessSettings).LumenSkylightLeaking =
         (param_1->LumenSkylightLeaking - fVar58) * param_2 + fVar58;
  }
  if ((param_1->bOverride_LumenSkylightLeakingTint != 0) ||
     ((this->PostProcessSettings).bOverride_LumenSkylightLeakingTint != 0)) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeakingTint = 1;
    fVar58 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.G;
    fVar2 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.R;
    fVar3 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.B;
    fVar4 = (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.A;
    fVar5 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.G;
    fVar6 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.B;
    fVar7 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.A;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.R =
         ((param_1->LumenSkylightLeakingTint).field0_0x0._s_0.R - fVar2) * param_2 + fVar2;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.G =
         (fVar5 - fVar58) * param_2 + fVar58;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.B =
         (fVar6 - fVar3) * param_2 + fVar3;
    (this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0._s_0.A =
         (fVar7 - fVar4) * param_2 + fVar4;
  }
  if ((param_1->bOverride_LumenFullSkylightLeakingDistance != 0) ||
     ((this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance != 0)) {
    (this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance = 1;
    fVar58 = (this->PostProcessSettings).LumenFullSkylightLeakingDistance;
    (this->PostProcessSettings).LumenFullSkylightLeakingDistance =
         (param_1->LumenFullSkylightLeakingDistance - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x24;
  if (((param_1->bOverride_LumenRayLightingMode != 0) ||
      ((this->PostProcessSettings).bOverride_LumenRayLightingMode != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenRayLightingMode = '\x01';
    (this->PostProcessSettings).LumenRayLightingMode = param_1->LumenRayLightingMode;
  }
  if (((param_1->bOverride_LumenReflectionsScreenTraces != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces = '\x01';
    uVar15 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 =
         ((this->PostProcessSettings).LumenReflectionsScreenTraces ^
         param_1->LumenReflectionsScreenTraces) & 1 ^ uVar15;
  }
  if (((param_1->bOverride_LumenFrontLayerTranslucencyReflections != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections = '\x01';
    bVar49 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 = (bVar49 ^ param_1->field_0x440) & 2 ^ bVar49;
  }
  puVar52 = &(this->PostProcessSettings).field_0x28;
  if (((param_1->bOverride_LumenMaxRoughnessToTraceReflections != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections = 1;
    (this->PostProcessSettings).LumenMaxRoughnessToTraceReflections =
         param_1->LumenMaxRoughnessToTraceReflections;
  }
  if (((param_1->bOverride_LumenMaxReflectionBounces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxReflectionBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxReflectionBounces = 1;
    (this->PostProcessSettings).LumenMaxReflectionBounces = param_1->LumenMaxReflectionBounces;
  }
  if (((param_1->bOverride_LumenMaxRefractionBounces != 0) ||
      ((this->PostProcessSettings).bOverride_LumenMaxRefractionBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenMaxRefractionBounces = 1;
    (this->PostProcessSettings).LumenMaxRefractionBounces = param_1->LumenMaxRefractionBounces;
  }
  if (((param_1->bOverride_ReflectionMethod != '\0') ||
      ((this->PostProcessSettings).bOverride_ReflectionMethod != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_ReflectionMethod = '\x01';
    (this->PostProcessSettings).ReflectionMethod.Value = (param_1->ReflectionMethod).Value;
  }
  if (((param_1->bOverride_LumenReflectionQuality != '\0') ||
      ((this->PostProcessSettings).bOverride_LumenReflectionQuality != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LumenReflectionQuality = '\x01';
    (this->PostProcessSettings).LumenReflectionQuality = param_1->LumenReflectionQuality;
  }
  puVar52 = &(this->PostProcessSettings).field_0x14;
  if (((param_1->bOverride_RayTracingAO != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAO != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAO = 1;
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x638;
    *(uint *)&(this->PostProcessSettings).field_0x638 =
         (ZPULL(uVar16,0,1) ^ param_1->RayTracingAO) & 1 ^ uVar16;
  }
  if (((param_1->bOverride_RayTracingAOSamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingAOSamplesPerPixel = param_1->RayTracingAOSamplesPerPixel;
  }
  puVar53 = &(this->PostProcessSettings).field_0x14;
  if (((param_1->bOverride_RayTracingAOIntensity != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAOIntensity != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAOIntensity = 1;
    (this->PostProcessSettings).RayTracingAOIntensity = param_1->RayTracingAOIntensity;
  }
  if (((param_1->bOverride_RayTracingAORadius != 0) ||
      ((this->PostProcessSettings).bOverride_RayTracingAORadius != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_RayTracingAORadius = 1;
    (this->PostProcessSettings).RayTracingAORadius = param_1->RayTracingAORadius;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingMaxBounces != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingMaxBounces != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingMaxBounces = 1;
    (this->PostProcessSettings).PathTracingMaxBounces = param_1->PathTracingMaxBounces;
  }
  if (((param_1->bOverride_PathTracingSamplesPerPixel != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel = 1;
    (this->PostProcessSettings).PathTracingSamplesPerPixel = param_1->PathTracingSamplesPerPixel;
  }
  if ((param_1->bOverride_PathTracingMaxPathIntensity != 0) ||
     ((this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity != 0)) {
    (this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity = 1;
    fVar58 = (this->PostProcessSettings).PathTracingMaxPathIntensity;
    (this->PostProcessSettings).PathTracingMaxPathIntensity =
         (param_1->PathTracingMaxPathIntensity - fVar58) * param_2 + fVar58;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableEmissiveMaterials != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials = 1;
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (ZPULL(uVar16,0,1) ^ param_1->PathTracingEnableEmissiveMaterials) & 1 ^ uVar16;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableReferenceDOF != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 2 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableReferenceAtmosphere != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere != 0)) && (bVar24)
     ) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 4 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingEnableDenoiser != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingEnableDenoiser != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingEnableDenoiser = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 8 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeEmissive != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeEmissive != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeEmissive = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x10 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeDiffuse != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x20 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeIndirectDiffuse != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x40 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeSpecular != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeSpecular != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeSpecular = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x80 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeIndirectSpecular != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular != 0)) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x100 ^ uVar17;
  }
  puVar53 = &(this->PostProcessSettings).field_0x30;
  if (((param_1->bOverride_PathTracingIncludeVolume != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeVolume != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeVolume = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x200 ^ uVar17;
  }
  if (((param_1->bOverride_PathTracingIncludeIndirectVolume != 0) ||
      ((this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume = 1;
    uVar17 = *(uint *)&(this->PostProcessSettings).field_0x744;
    *(uint *)&(this->PostProcessSettings).field_0x744 =
         (uVar17 ^ *(uint *)&param_1->field_0x744) & 0x400 ^ uVar17;
  }
  puVar52 = &(this->PostProcessSettings).field_0x1a;
  if ((param_1->bOverride_DepthOfFieldBladeCount == '\0') &&
     ((this->PostProcessSettings).bOverride_DepthOfFieldBladeCount == '\0')) {
    if (!bVar24) goto LAB_14835d38c;
  }
  else {
    if (!bVar24) goto LAB_14835d38c;
    (this->PostProcessSettings).bOverride_DepthOfFieldBladeCount = '\x01';
    (this->PostProcessSettings).DepthOfFieldBladeCount = param_1->DepthOfFieldBladeCount;
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 = (param_1->AmbientCubemap).field0_0x0.DebugPtr, pUVar19 != (UTextureCube *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->PostProcessSettings).AmbientCubemap.field0_0x0 = (param_1->AmbientCubemap).field0_0x0;
LAB_14835d38c:
  if ((param_1->bOverride_ColorGradingIntensity != '\0') ||
     ((this->PostProcessSettings).bOverride_ColorGradingIntensity != '\0')) {
    (this->PostProcessSettings).bOverride_ColorGradingIntensity = '\x01';
    fVar58 = (this->PostProcessSettings).ColorGradingIntensity;
    (this->PostProcessSettings).ColorGradingIntensity =
         (param_1->ColorGradingIntensity - fVar58) * param_2 + fVar58;
  }
  if (((param_1->bOverride_ColorGradingLUT != '\0') ||
      ((this->PostProcessSettings).bOverride_ColorGradingLUT != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_ColorGradingLUT = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).ColorGradingLUT.field0_0x0 = (param_1->ColorGradingLUT).field0_0x0;
  }
  if (((param_1->bOverride_BloomDirtMask != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomDirtMask != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomDirtMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->BloomDirtMask).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).BloomDirtMask.field0_0x0 = (param_1->BloomDirtMask).field0_0x0;
  }
  if (((param_1->bOverride_BloomMethod != 0) ||
      ((this->PostProcessSettings).bOverride_BloomMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomMethod = '\x01';
    (this->PostProcessSettings).BloomMethod.Value = (param_1->BloomMethod).Value;
  }
  if (((param_1->bOverride_BloomConvolutionTexture != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomConvolutionTexture != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr,
       pUVar21 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->PostProcessSettings).BloomConvolutionTexture.field0_0x0 =
         (param_1->BloomConvolutionTexture).field0_0x0;
  }
  if (((param_1->bOverride_FilmGrainTexture != '\0') ||
      ((this->PostProcessSettings).bOverride_FilmGrainTexture != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_FilmGrainTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr, pUVar21 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->PostProcessSettings).FilmGrainTexture.field0_0x0 = (param_1->FilmGrainTexture).field0_0x0
    ;
  }
  if (((param_1->bOverride_BloomConvolutionBufferScale != '\0') ||
      ((this->PostProcessSettings).bOverride_BloomConvolutionBufferScale != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_BloomConvolutionBufferScale = '\x01';
    (this->PostProcessSettings).BloomConvolutionBufferScale = param_1->BloomConvolutionBufferScale;
  }
  if (((param_1->bOverride_AutoExposureBiasCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureBiasCurve != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureBiasCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr,
       pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).AutoExposureBiasCurve.field0_0x0 =
         (param_1->AutoExposureBiasCurve).field0_0x0;
  }
  if (((param_1->bOverride_AutoExposureMeterMask != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureMeterMask != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureMeterMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0))
    {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).AutoExposureMeterMask.field0_0x0 =
         (param_1->AutoExposureMeterMask).field0_0x0;
  }
  if (((param_1->bOverride_LocalExposureHighlightContrastCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
       pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0 =
         (param_1->LocalExposureHighlightContrastCurve).field0_0x0;
  }
  if (((param_1->bOverride_LocalExposureShadowContrastCurve != '\0') ||
      ((this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve != '\0')) && (bVar24))
  {
    (this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar22 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
       pUVar22 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar22);
    }
    (this->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0 =
         (param_1->LocalExposureShadowContrastCurve).field0_0x0;
  }
  if (((param_1->bOverride_LensFlareBokehShape != 0) ||
      ((this->PostProcessSettings).bOverride_LensFlareBokehShape != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_LensFlareBokehShape = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar20 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar20 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar20);
    }
    (this->PostProcessSettings).LensFlareBokehShape.field0_0x0 =
         (param_1->LensFlareBokehShape).field0_0x0;
  }
  if (param_1->bOverride_LensFlareTints != '\0') {
    pfVar47 = &param_1->LensFlareTints[1].field0_0x0._s_0.G;
    lVar50 = (longlong)this - (longlong)param_1;
    lVar54 = 2;
    do {
      fVar58 = pfVar47[-4];
      fVar2 = pfVar47[-3];
      fVar3 = pfVar47[-2];
      *(float *)(lVar50 + -0x14 + (longlong)pfVar47) =
           (pfVar47[-5] - *(float *)(lVar50 + -0x14 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0x14 + (longlong)pfVar47);
      *(float *)(lVar50 + -0x10 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + -0x10 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0x10 + (longlong)pfVar47);
      *(float *)(lVar50 + -0xc + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + -0xc + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -0xc + (longlong)pfVar47);
      *(float *)(lVar50 + -8 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + -8 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -8 + (longlong)pfVar47);
      fVar58 = *pfVar47;
      fVar2 = pfVar47[1];
      fVar3 = pfVar47[2];
      *(float *)(lVar50 + -4 + (longlong)pfVar47) =
           (((FLinearColor_u_0_s_0 *)(pfVar47 + -1))->R -
           *(float *)(lVar50 + -4 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + -4 + (longlong)pfVar47);
      *(float *)(lVar50 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + (longlong)pfVar47);
      *(float *)(lVar50 + 4 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 4 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 4 + (longlong)pfVar47);
      *(float *)(lVar50 + 8 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 8 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 8 + (longlong)pfVar47);
      fVar58 = pfVar47[4];
      fVar2 = pfVar47[5];
      fVar3 = pfVar47[6];
      *(float *)(lVar50 + 0xc + (longlong)pfVar47) =
           (pfVar47[3] - *(float *)(lVar50 + 0xc + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0xc + (longlong)pfVar47);
      *(float *)(lVar50 + 0x10 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + 0x10 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x10 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x14 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 0x14 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x14 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x18 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 0x18 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x18 + (longlong)pfVar47);
      fVar58 = pfVar47[8];
      fVar2 = pfVar47[9];
      fVar3 = pfVar47[10];
      *(float *)(lVar50 + 0x1c + (longlong)pfVar47) =
           (pfVar47[7] - *(float *)(lVar50 + 0x1c + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x1c + (longlong)pfVar47);
      *(float *)(lVar50 + 0x20 + (longlong)pfVar47) =
           (fVar58 - *(float *)(lVar50 + 0x20 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x20 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x24 + (longlong)pfVar47) =
           (fVar2 - *(float *)(lVar50 + 0x24 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x24 + (longlong)pfVar47);
      *(float *)(lVar50 + 0x28 + (longlong)pfVar47) =
           (fVar3 - *(float *)(lVar50 + 0x28 + (longlong)pfVar47)) * param_2 +
           *(float *)(lVar50 + 0x28 + (longlong)pfVar47);
      pfVar47 = pfVar47 + 0x10;
      lVar54 = lVar54 + -1;
    } while (lVar54 != 0);
  }
  if ((param_1->bOverride_MobileHQGaussian != '\0') && (bVar24)) {
    puVar52 = &(this->PostProcessSettings).field_0x34;
    *puVar52 = *puVar52 ^
               ((this->PostProcessSettings).bMobileHQGaussian ^ param_1->bMobileHQGaussian) & 1;
  }
  if (((param_1->bOverride_AutoExposureMethod != 0) ||
      ((this->PostProcessSettings).bOverride_AutoExposureMethod != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureMethod = '\x01';
    (this->PostProcessSettings).AutoExposureMethod.Value = (param_1->AutoExposureMethod).Value;
  }
  if (((param_1->bOverride_AmbientOcclusionRadiusInWS != '\0') ||
      ((this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x60c;
    *(uint *)&(this->PostProcessSettings).field_0x60c =
         (ZPULL(uVar16,0,1) ^ param_1->AmbientOcclusionRadiusInWS) & 1 ^ uVar16;
  }
  if (((param_1->bOverride_MotionBlurTargetFPS != 0) ||
      ((this->PostProcessSettings).bOverride_MotionBlurTargetFPS != 0)) && (bVar24)) {
    (this->PostProcessSettings).bOverride_MotionBlurTargetFPS = '\x01';
    (this->PostProcessSettings).MotionBlurTargetFPS = param_1->MotionBlurTargetFPS;
  }
  if (((param_1->bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') ||
      ((this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure != '\0')) &&
     (bVar24)) {
    (this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
    uVar16 = *(undefined4 *)&(this->PostProcessSettings).field_0x4a0;
    *(uint *)&(this->PostProcessSettings).field_0x4a0 =
         (ZPULL(uVar16,0,1) ^ param_1->AutoExposureApplyPhysicalCameraExposure) & 1 ^ uVar16;
  }
  if (((param_1->bOverride_UserFlags != '\0') ||
      ((this->PostProcessSettings).bOverride_UserFlags != '\0')) && (bVar24)) {
    (this->PostProcessSettings).bOverride_UserFlags = '\x01';
    (this->PostProcessSettings).UserFlags = param_1->UserFlags;
  }
  iVar46 = (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
  pFVar56 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  pFVar48 = pFVar56 + (longlong)iVar46 * 0x10;
  do {
    if ((this->PostProcessSettings).WeightedBlendables.Array.ArrayNum != iVar46) {
      `TCheckedPointerIterator<FWeightedBlendable,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_18);
    }
    iVar18 = (param_1->WeightedBlendables).Array.ArrayNum;
    pFVar57 = (param_1->WeightedBlendables).Array.AllocatorInstance.Data;
    if (pFVar56 == pFVar48) {
      pFVar56 = pFVar57 + (longlong)iVar18 * 0x10;
      pFVar55 = &(this->PostProcessSettings).WeightedBlendables;
      do {
        if ((param_1->WeightedBlendables).Array.ArrayNum != iVar18) {
          `TCheckedPointerIterator<FWeightedBlendable_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_18);
        }
        if (pFVar57 == pFVar56) {
          return;
        }
        pFVar48 = (pFVar55->Array).AllocatorInstance.Data;
        pFVar51 = pFVar48 + (longlong)(this->PostProcessSettings).WeightedBlendables.Array.ArrayNum
                            * 0x10;
        if (pFVar48 != pFVar51) {
          do {
            if (*(longlong *)(pFVar48 + 8) == *(longlong *)(pFVar57 + 8)) goto LAB_14835da89;
            pFVar48 = pFVar48 + 0x10;
          } while (pFVar48 != pFVar51);
        }
        iVar46 = (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
        piVar1 = &(this->PostProcessSettings).WeightedBlendables.Array.ArrayMax;
        fVar8 = *(float *)pFVar57;
        if (iVar46 == *piVar1) {
          iVar46 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar55,piVar1);
        }
        (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum = iVar46 + 1;
        pFVar48 = (pFVar55->Array).AllocatorInstance.Data;
        pUVar23 = *(UObject **)(pFVar57 + 8);
        *(float *)(pFVar48 + (longlong)iVar46 * 0x10) = param_2 * fVar8;
        *(UObject **)(pFVar48 + (longlong)iVar46 * 0x10 + 8) = pUVar23;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar23);
        }
LAB_14835da89:
        pFVar57 = pFVar57 + 0x10;
      } while( true );
    }
    pFVar51 = pFVar57 + (longlong)iVar18 * 0x10;
    if (pFVar57 != pFVar51) {
      do {
        if (*(longlong *)(pFVar56 + 8) == *(longlong *)(pFVar57 + 8)) goto LAB_14835d9c3;
        pFVar57 = pFVar57 + 0x10;
      } while (pFVar57 != pFVar51);
    }
    *(float *)pFVar56 = (fVar8 - param_2) * *(float *)pFVar56;
LAB_14835d9c3:
    pFVar56 = pFVar56 + 0x10;
  } while( true );
}

// OverrideAll @ 14d5c3f40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::OverrideAll
          (FPostProcessSettingsCollection *this,FPostProcessSettingsCollection *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FWeightedBlendables *pFVar3;
  FWeightedBlendables *pFVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  UTexture2D *pUVar9;
  UTexture *pUVar10;
  UTextureCube *pUVar11;
  UCurveFloat *pUVar12;
  FWeightedBlendable *pFVar13;
  double dVar14;
  undefined8 uVar15;
  float fVar16;
  uint uVar17;
  byte bVar18;
  
  bVar18 = (this.bOverride_TemperatureType ^ param_1.bOverride_TemperatureType) & 1 ^
           *(byte *)&this->PostProcessSettings;
  *(byte *)&this->PostProcessSettings = bVar18;
  bVar18 = (bVar18 ^ *(byte *)&param_1->PostProcessSettings) & 2 ^ bVar18;
  *(byte *)&this->PostProcessSettings = bVar18;
  bVar18 = (bVar18 ^ *(byte *)&param_1->PostProcessSettings) & 4 ^ bVar18;
  *(byte *)&this->PostProcessSettings = bVar18;
  bVar18 = (bVar18 ^ *(byte *)&param_1->PostProcessSettings) & 8 ^ bVar18;
  *(byte *)&this->PostProcessSettings = bVar18;
  bVar18 = (bVar18 ^ *(byte *)&param_1->PostProcessSettings) & 0x10 ^ bVar18;
  *(byte *)&this->PostProcessSettings = bVar18;
  bVar18 = (bVar18 ^ *(byte *)&param_1->PostProcessSettings) & 0x20 ^ bVar18;
  *(byte *)&this->PostProcessSettings = bVar18;
  bVar18 = (bVar18 ^ *(byte *)&param_1->PostProcessSettings) & 0x40 ^ bVar18;
  *(byte *)&this->PostProcessSettings = bVar18;
  *(byte *)&this->PostProcessSettings =
       (bVar18 ^ *(byte *)&param_1->PostProcessSettings) & 0x7f ^
       *(byte *)&param_1->PostProcessSettings;
  bVar18 = ((this->PostProcessSettings).bOverride_ColorSaturationShadows ^
           (param_1->PostProcessSettings).bOverride_ColorSaturationShadows) & 1 ^
           (this->PostProcessSettings).field_0x1;
  (this->PostProcessSettings).field_0x1 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x1 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x1 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x1 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x1 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x1 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x1 = bVar18;
  (this->PostProcessSettings).field_0x1 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x1) & 0x7f ^
       (param_1->PostProcessSettings).field_0x1;
  bVar18 = ((this->PostProcessSettings).bOverride_ColorGainMidtones ^
           (param_1->PostProcessSettings).bOverride_ColorGainMidtones) & 1 ^
           (this->PostProcessSettings).field_0x2;
  (this->PostProcessSettings).field_0x2 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x2) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x2 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x2) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x2 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x2) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x2 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x2) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x2 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x2) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x2 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x2) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x2 = bVar18;
  (this->PostProcessSettings).field_0x2 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x2) & 0x7f ^
       (param_1->PostProcessSettings).field_0x2;
  bVar18 = ((this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin ^
           (param_1->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin) & 1 ^
           (this->PostProcessSettings).field_0x3;
  (this->PostProcessSettings).field_0x3 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x3) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x3 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x3) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x3 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x3) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x3 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x3) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x3 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x3) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x3 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x3) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x3 = bVar18;
  (this->PostProcessSettings).field_0x3 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x3) & 0x7f ^
       (param_1->PostProcessSettings).field_0x3;
  bVar18 = ((this->PostProcessSettings).bOverride_FilmBlackClip ^
           (param_1->PostProcessSettings).bOverride_FilmBlackClip) & 1 ^
           (this->PostProcessSettings).field_0x4;
  (this->PostProcessSettings).field_0x4 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x4) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x4 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x4) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x4 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x4) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x4 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x4) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x4 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x4) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x4 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x4) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x4 = bVar18;
  (this->PostProcessSettings).field_0x4 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x4) & 0x7f ^
       (param_1->PostProcessSettings).field_0x4;
  bVar18 = ((this->PostProcessSettings).bOverride_BloomMethod ^
           (param_1->PostProcessSettings).bOverride_BloomMethod) & 1 ^
           (this->PostProcessSettings).field_0x5;
  (this->PostProcessSettings).field_0x5 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x5) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x5 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x5) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x5 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x5) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x5 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x5) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x5 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x5) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x5 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x5) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x5 = bVar18;
  (this->PostProcessSettings).field_0x5 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x5) & 0x7f ^
       (param_1->PostProcessSettings).field_0x5;
  bVar18 = ((this->PostProcessSettings).bOverride_Bloom3Tint ^
           (param_1->PostProcessSettings).bOverride_Bloom3Tint) & 1 ^
           (this->PostProcessSettings).field_0x6;
  (this->PostProcessSettings).field_0x6 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x6) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x6 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x6) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x6 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x6) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x6 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x6) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x6 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x6) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x6 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x6) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x6 = bVar18;
  (this->PostProcessSettings).field_0x6 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x6) & 0x7f ^
       (param_1->PostProcessSettings).field_0x6;
  bVar18 = ((this->PostProcessSettings).bOverride_BloomSizeScale ^
           (param_1->PostProcessSettings).bOverride_BloomSizeScale) & 1 ^
           (this->PostProcessSettings).field_0x7;
  (this->PostProcessSettings).field_0x7 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x7) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x7 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x7) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x7 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x7) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x7 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x7) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x7 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x7) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x7 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x7) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x7 = bVar18;
  (this->PostProcessSettings).field_0x7 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x7) & 0x7f ^
       (param_1->PostProcessSettings).field_0x7;
  bVar18 = ((this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax ^
           (param_1->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax) & 1 ^
           (this->PostProcessSettings).field_0x8;
  (this->PostProcessSettings).field_0x8 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x8) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x8 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x8) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x8 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x8) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x8 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x8) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x8 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x8) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x8 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x8) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x8 = bVar18;
  (this->PostProcessSettings).field_0x8 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x8) & 0x7f ^
       (param_1->PostProcessSettings).field_0x8;
  bVar18 = ((this->PostProcessSettings).bOverride_AutoExposureMethod ^
           (param_1->PostProcessSettings).bOverride_AutoExposureMethod) & 1 ^
           (this->PostProcessSettings).field_0x9;
  (this->PostProcessSettings).field_0x9 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x9) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x9 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x9) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x9 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x9) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x9 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x9) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x9 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x9) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x9 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x9) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x9 = bVar18;
  (this->PostProcessSettings).field_0x9 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x9) & 0x7f ^
       (param_1->PostProcessSettings).field_0x9;
  bVar18 = ((this->PostProcessSettings).bOverride_AutoExposureBias ^
           (param_1->PostProcessSettings).bOverride_AutoExposureBias) & 1 ^
           (this->PostProcessSettings).field_0xa;
  (this->PostProcessSettings).field_0xa = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xa) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0xa = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xa) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0xa = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xa) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0xa = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xa) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0xa = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xa) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0xa = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xa) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0xa = bVar18;
  (this->PostProcessSettings).field_0xa =
       ((param_1->PostProcessSettings).field_0xa ^ bVar18) & 0x7f ^
       (param_1->PostProcessSettings).field_0xa;
  bVar18 = ((this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale ^
           (param_1->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale) & 1 ^
           (this->PostProcessSettings).field_0xb;
  (this->PostProcessSettings).field_0xb = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xb) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0xb = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xb) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0xb = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xb) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0xb = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xb) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0xb = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xb) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0xb = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xb) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0xb = bVar18;
  (this->PostProcessSettings).field_0xb =
       (bVar18 ^ (param_1->PostProcessSettings).field_0xb) & 0x7f ^
       (param_1->PostProcessSettings).field_0xb;
  bVar18 = ((this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent ^
           (param_1->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent)
           & 1 ^ (this->PostProcessSettings).field_0xc;
  (this->PostProcessSettings).field_0xc = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xc) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0xc = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xc) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0xc = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xc) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0xc = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xc) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0xc = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xc) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0xc = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xc) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0xc = bVar18;
  (this->PostProcessSettings).field_0xc =
       (bVar18 ^ (param_1->PostProcessSettings).field_0xc) & 0x7f ^
       (param_1->PostProcessSettings).field_0xc;
  bVar18 = ((this->PostProcessSettings).bOverride_LensFlareBokehShape ^
           (param_1->PostProcessSettings).bOverride_LensFlareBokehShape) & 1 ^
           (this->PostProcessSettings).field_0xd;
  (this->PostProcessSettings).field_0xd = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xd) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0xd = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xd) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0xd = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xd) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0xd = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xd) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0xd = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xd) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0xd = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xd) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0xd = bVar18;
  (this->PostProcessSettings).field_0xd =
       (bVar18 ^ (param_1->PostProcessSettings).field_0xd) & 0x7f ^
       (param_1->PostProcessSettings).field_0xd;
  bVar18 = ((this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones ^
           (param_1->PostProcessSettings).bOverride_FilmGrainIntensityMidtones) & 1 ^
           (this->PostProcessSettings).field_0xe;
  (this->PostProcessSettings).field_0xe = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xe) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0xe = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xe) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0xe = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xe) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0xe = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xe) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0xe = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xe) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0xe = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xe) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0xe = bVar18;
  (this->PostProcessSettings).field_0xe =
       (bVar18 ^ (param_1->PostProcessSettings).field_0xe) & 0x7f ^
       (param_1->PostProcessSettings).field_0xe;
  bVar18 = ((this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction ^
           (param_1->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction) & 1 ^
           (this->PostProcessSettings).field_0xf;
  (this->PostProcessSettings).field_0xf = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xf) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0xf = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xf) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0xf = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xf) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0xf = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xf) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0xf = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xf) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0xf = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0xf) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0xf = bVar18;
  (this->PostProcessSettings).field_0xf =
       (bVar18 ^ (param_1->PostProcessSettings).field_0xf) & 0x7f ^
       (param_1->PostProcessSettings).field_0xf;
  bVar18 = ((this->PostProcessSettings).bOverride_AmbientOcclusionQuality ^
           (param_1->PostProcessSettings).bOverride_AmbientOcclusionQuality) & 1 ^
           (this->PostProcessSettings).field_0x10;
  (this->PostProcessSettings).field_0x10 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x10) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x10 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x10) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x10 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x10) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x10 = bVar18;
  (this->PostProcessSettings).field_0x10 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x10) & 0x10 ^ bVar18;
  uVar17 = ((this->PostProcessSettings).bOverride_RayTracingAO ^
           (param_1->PostProcessSettings).bOverride_RayTracingAO) & 1 ^
           *(uint *)&(this->PostProcessSettings).field_0x14;
  *(uint *)&(this->PostProcessSettings).field_0x14 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x14) & 2 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x14 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x14) & 4 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x14 = uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x14 =
       (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x14) & 8 ^ uVar17;
  bVar18 = ((this->PostProcessSettings).bOverride_LPVIntensity_DEPRECATED ^
           (param_1->PostProcessSettings).bOverride_LPVIntensity_DEPRECATED) & 1 ^
           (this->PostProcessSettings).field_0x18;
  (this->PostProcessSettings).field_0x18 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x18) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x18 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x18) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x18 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x18) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x18 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x18) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x18 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x18) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x18 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x18) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x18 = bVar18;
  (this->PostProcessSettings).field_0x18 =
       ((param_1->PostProcessSettings).field_0x18 ^ bVar18) & 0x7f ^
       (param_1->PostProcessSettings).field_0x18;
  bVar18 = ((this->PostProcessSettings).bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED ^
           (param_1->PostProcessSettings).bOverride_LPVSecondaryOcclusionIntensity_DEPRECATED) & 1 ^
           (this->PostProcessSettings).field_0x19;
  (this->PostProcessSettings).field_0x19 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x19) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x19 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x19) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x19 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x19) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x19 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x19) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x19 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x19) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x19 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x19) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x19 = bVar18;
  (this->PostProcessSettings).field_0x19 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x19) & 0x7f ^
       (param_1->PostProcessSettings).field_0x19;
  bVar18 = ((this->PostProcessSettings).bOverride_IndirectLightingIntensity ^
           (param_1->PostProcessSettings).bOverride_IndirectLightingIntensity) & 1 ^
           (this->PostProcessSettings).field_0x1a;
  (this->PostProcessSettings).field_0x1a = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1a) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x1a = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1a) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x1a = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1a) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x1a = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1a) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x1a = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1a) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x1a = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1a) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x1a = bVar18;
  (this->PostProcessSettings).field_0x1a =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x1a) & 0x7f ^
       (param_1->PostProcessSettings).field_0x1a;
  bVar18 = ((this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor ^
           (param_1->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor) & 1 ^
           (this->PostProcessSettings).field_0x1b;
  (this->PostProcessSettings).field_0x1b = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1b) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x1b = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1b) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x1b = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1b) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x1b = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1b) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x1b = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1b) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x1b = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1b) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x1b = bVar18;
  (this->PostProcessSettings).field_0x1b =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x1b) & 0x7f ^
       (param_1->PostProcessSettings).field_0x1b;
  bVar18 = ((this->PostProcessSettings).bOverride_DepthOfFieldMatteBoxFlags ^
           (param_1->PostProcessSettings).bOverride_DepthOfFieldMatteBoxFlags) & 1 ^
           (this->PostProcessSettings).field_0x1c;
  (this->PostProcessSettings).field_0x1c = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1c) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x1c = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1c) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x1c = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1c) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x1c = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1c) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x1c = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1c) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x1c = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1c) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x1c = bVar18;
  (this->PostProcessSettings).field_0x1c =
       ((param_1->PostProcessSettings).field_0x1c ^ bVar18) & 0x7f ^
       (param_1->PostProcessSettings).field_0x1c;
  bVar18 = ((this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize ^
           (param_1->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize) & 1 ^
           (this->PostProcessSettings).field_0x1d;
  (this->PostProcessSettings).field_0x1d = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1d) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x1d = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1d) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x1d = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1d) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x1d = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1d) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x1d = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1d) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x1d = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1d) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x1d = bVar18;
  (this->PostProcessSettings).field_0x1d =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x1d) & 0x7f ^
       (param_1->PostProcessSettings).field_0x1d;
  bVar18 = ((this->PostProcessSettings).bOverride_MotionBlurTargetFPS ^
           (param_1->PostProcessSettings).bOverride_MotionBlurTargetFPS) & 1 ^
           (this->PostProcessSettings).field_0x1e;
  (this->PostProcessSettings).field_0x1e = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1e) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x1e = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1e) & 4 ^ bVar18;
  (this->PostProcessSettings).field_0x1e = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1e) & 8 ^ bVar18;
  (this->PostProcessSettings).field_0x1e = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1e) & 0x10 ^ bVar18;
  (this->PostProcessSettings).field_0x1e = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1e) & 0x20 ^ bVar18;
  (this->PostProcessSettings).field_0x1e = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x1e) & 0x40 ^ bVar18;
  (this->PostProcessSettings).field_0x1e = bVar18;
  (this->PostProcessSettings).field_0x1e =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x1e) & 0x7f ^
       (param_1->PostProcessSettings).field_0x1e;
  bVar18 = ((this->PostProcessSettings).bOverride_ScreenSpaceReflectionRoughnessScale ^
           (param_1->PostProcessSettings).bOverride_ScreenSpaceReflectionRoughnessScale) & 1 ^
           (this->PostProcessSettings).field_0x1f;
  (this->PostProcessSettings).field_0x1f = bVar18;
  (this->PostProcessSettings).field_0x1f =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x1f) & 2 ^ bVar18;
  uVar17 = ((this->PostProcessSettings).bOverride_ReflectionsType_DEPRECATED ^
           (param_1->PostProcessSettings).bOverride_ReflectionsType_DEPRECATED) & 1 ^
           *(uint *)&(this->PostProcessSettings).field_0x20;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 2 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 4 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 8 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x10 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x20 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x40 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x80 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x100 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x200 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x400 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x800 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x1000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x2000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x4000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x8000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x10000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x20000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x40000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x80000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x100000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x200000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x400000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x800000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x1000000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x2000000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x4000000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 = uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x20 =
       (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x20) & 0x8000000 ^ uVar17;
  bVar18 = ((this->PostProcessSettings).bOverride_LumenRayLightingMode ^
           (param_1->PostProcessSettings).bOverride_LumenRayLightingMode) & 1 ^
           (this->PostProcessSettings).field_0x24;
  (this->PostProcessSettings).field_0x24 = bVar18;
  bVar18 = (bVar18 ^ (param_1->PostProcessSettings).field_0x24) & 2 ^ bVar18;
  (this->PostProcessSettings).field_0x24 = bVar18;
  (this->PostProcessSettings).field_0x24 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x24) & 4 ^ bVar18;
  uVar17 = ((this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections ^
           (param_1->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections) & 1 ^
           *(uint *)&(this->PostProcessSettings).field_0x28;
  *(uint *)&(this->PostProcessSettings).field_0x28 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x28) & 2 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x28 = uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x28 =
       (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x28) & 4 ^ uVar17;
  puVar1 = &(this->PostProcessSettings).field_0x2c;
  *puVar1 = *puVar1 ^ ((this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution ^
                      (param_1->PostProcessSettings).bOverride_LumenSurfaceCacheResolution) & 1;
  uVar17 = ((this->PostProcessSettings).bOverride_RayTracingGI ^
           (param_1->PostProcessSettings).bOverride_RayTracingGI) & 1 ^
           *(uint *)&(this->PostProcessSettings).field_0x30;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 2 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 4 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 8 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x10 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x20 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x40 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x80 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x100 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x200 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x400 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x800 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x1000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x2000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x4000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x8000 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 = uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x30 =
       (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x30) & 0x10000 ^ uVar17;
  puVar1 = &(this->PostProcessSettings).field_0x34;
  *puVar1 = *puVar1 ^ ((this->PostProcessSettings).bMobileHQGaussian ^
                      (param_1->PostProcessSettings).bMobileHQGaussian) & 1;
  (this->PostProcessSettings).BloomMethod.Value = (param_1->PostProcessSettings).BloomMethod.Value;
  (this->PostProcessSettings).AutoExposureMethod.Value =
       (param_1->PostProcessSettings).AutoExposureMethod.Value;
  (this->PostProcessSettings).TemperatureType.Value =
       (param_1->PostProcessSettings).TemperatureType.Value;
  (this->PostProcessSettings).WhiteTemp = (param_1->PostProcessSettings).WhiteTemp;
  (this->PostProcessSettings).WhiteTint = (param_1->PostProcessSettings).WhiteTint;
  dVar14 = (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y;
  (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X;
  (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y = dVar14;
  dVar14 = (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W;
  (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z =
       (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z;
  (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W = dVar14;
  (this->PostProcessSettings).ColorCorrectionHighlightsMin =
       (param_1->PostProcessSettings).ColorCorrectionHighlightsMin;
  (this->PostProcessSettings).ColorCorrectionHighlightsMax =
       (param_1->PostProcessSettings).ColorCorrectionHighlightsMax;
  (this->PostProcessSettings).ColorCorrectionShadowsMax =
       (param_1->PostProcessSettings).ColorCorrectionShadowsMax;
  (this->PostProcessSettings).BlueCorrection = (param_1->PostProcessSettings).BlueCorrection;
  (this->PostProcessSettings).ExpandGamut = (param_1->PostProcessSettings).ExpandGamut;
  (this->PostProcessSettings).ToneCurveAmount = (param_1->PostProcessSettings).ToneCurveAmount;
  (this->PostProcessSettings).FilmSlope = (param_1->PostProcessSettings).FilmSlope;
  (this->PostProcessSettings).FilmToe = (param_1->PostProcessSettings).FilmToe;
  (this->PostProcessSettings).FilmShoulder = (param_1->PostProcessSettings).FilmShoulder;
  (this->PostProcessSettings).FilmBlackClip = (param_1->PostProcessSettings).FilmBlackClip;
  (this->PostProcessSettings).FilmWhiteClip = (param_1->PostProcessSettings).FilmWhiteClip;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).SceneColorTint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).SceneColorTint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).SceneColorTint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).SceneColorTint.field0_0x0 + 8) = uVar15;
  (this->PostProcessSettings).SceneFringeIntensity =
       (param_1->PostProcessSettings).SceneFringeIntensity;
  (this->PostProcessSettings).ChromaticAberrationStartOffset =
       (param_1->PostProcessSettings).ChromaticAberrationStartOffset;
  (this->PostProcessSettings).BloomIntensity = (param_1->PostProcessSettings).BloomIntensity;
  (this->PostProcessSettings).BloomGaussianIntensity =
       (param_1->PostProcessSettings).BloomGaussianIntensity;
  (this->PostProcessSettings).BloomThreshold = (param_1->PostProcessSettings).BloomThreshold;
  (this->PostProcessSettings).BloomSizeScale = (param_1->PostProcessSettings).BloomSizeScale;
  (this->PostProcessSettings).Bloom1Size = (param_1->PostProcessSettings).Bloom1Size;
  (this->PostProcessSettings).Bloom2Size = (param_1->PostProcessSettings).Bloom2Size;
  (this->PostProcessSettings).Bloom3Size = (param_1->PostProcessSettings).Bloom3Size;
  (this->PostProcessSettings).Bloom4Size = (param_1->PostProcessSettings).Bloom4Size;
  (this->PostProcessSettings).Bloom5Size = (param_1->PostProcessSettings).Bloom5Size;
  (this->PostProcessSettings).Bloom6Size = (param_1->PostProcessSettings).Bloom6Size;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom1Tint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).Bloom1Tint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).Bloom1Tint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom1Tint.field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom2Tint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).Bloom2Tint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).Bloom2Tint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom2Tint.field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom3Tint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).Bloom3Tint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).Bloom3Tint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom3Tint.field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom4Tint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).Bloom4Tint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).Bloom4Tint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom4Tint.field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom5Tint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).Bloom5Tint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).Bloom5Tint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom5Tint.field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom6Tint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).Bloom6Tint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).Bloom6Tint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom6Tint.field0_0x0 + 8) = uVar15;
  (this->PostProcessSettings).BloomConvolutionIntensity =
       (param_1->PostProcessSettings).BloomConvolutionIntensity;
  (this->PostProcessSettings).BloomConvolutionScatterDispersion =
       (param_1->PostProcessSettings).BloomConvolutionScatterDispersion;
  (this->PostProcessSettings).BloomConvolutionSize =
       (param_1->PostProcessSettings).BloomConvolutionSize;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (param_1->PostProcessSettings).BloomConvolutionTexture.field0_0x0.DebugPtr,
     pUVar9 != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->PostProcessSettings).BloomConvolutionTexture.field0_0x0 =
       (param_1->PostProcessSettings).BloomConvolutionTexture.field0_0x0;
  dVar14 = (param_1->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y;
  (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X =
       (param_1->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X;
  (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y = dVar14;
  (this->PostProcessSettings).BloomConvolutionPreFilterMin =
       (param_1->PostProcessSettings).BloomConvolutionPreFilterMin;
  (this->PostProcessSettings).BloomConvolutionPreFilterMax =
       (param_1->PostProcessSettings).BloomConvolutionPreFilterMax;
  (this->PostProcessSettings).BloomConvolutionPreFilterMult =
       (param_1->PostProcessSettings).BloomConvolutionPreFilterMult;
  (this->PostProcessSettings).BloomConvolutionBufferScale =
       (param_1->PostProcessSettings).BloomConvolutionBufferScale;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 = (param_1->PostProcessSettings).BloomDirtMask.field0_0x0.DebugPtr,
     pUVar10 != (UTexture *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->PostProcessSettings).BloomDirtMask.field0_0x0 =
       (param_1->PostProcessSettings).BloomDirtMask.field0_0x0;
  (this->PostProcessSettings).BloomDirtMaskIntensity =
       (param_1->PostProcessSettings).BloomDirtMaskIntensity;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).BloomDirtMaskTint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).BloomDirtMaskTint.field0_0x0 + 8) = uVar15;
  (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value =
       (param_1->PostProcessSettings).DynamicGlobalIlluminationMethod.Value;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).IndirectLightingColor.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).IndirectLightingColor.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).IndirectLightingColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).IndirectLightingColor.field0_0x0 + 8) =
       uVar15;
  (this->PostProcessSettings).IndirectLightingIntensity =
       (param_1->PostProcessSettings).IndirectLightingIntensity;
  (this->PostProcessSettings).LumenRayLightingMode =
       (param_1->PostProcessSettings).LumenRayLightingMode;
  (this->PostProcessSettings).LumenSceneLightingQuality =
       (param_1->PostProcessSettings).LumenSceneLightingQuality;
  (this->PostProcessSettings).LumenSceneDetail = (param_1->PostProcessSettings).LumenSceneDetail;
  (this->PostProcessSettings).LumenSceneViewDistance =
       (param_1->PostProcessSettings).LumenSceneViewDistance;
  (this->PostProcessSettings).LumenSceneLightingUpdateSpeed =
       (param_1->PostProcessSettings).LumenSceneLightingUpdateSpeed;
  (this->PostProcessSettings).LumenFinalGatherQuality =
       (param_1->PostProcessSettings).LumenFinalGatherQuality;
  (this->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed =
       (param_1->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed;
  uVar5 = (this->PostProcessSettings).field_0x410;
  (this->PostProcessSettings).field_0x410 =
       ((this->PostProcessSettings).LumenFinalGatherScreenTraces ^
       (param_1->PostProcessSettings).LumenFinalGatherScreenTraces) & 1 ^ uVar5;
  (this->PostProcessSettings).LumenMaxTraceDistance =
       (param_1->PostProcessSettings).LumenMaxTraceDistance;
  (this->PostProcessSettings).LumenDiffuseColorBoost =
       (param_1->PostProcessSettings).LumenDiffuseColorBoost;
  (this->PostProcessSettings).LumenSkylightLeaking =
       (param_1->PostProcessSettings).LumenSkylightLeaking;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 + 8) =
       uVar15;
  (this->PostProcessSettings).LumenFullSkylightLeakingDistance =
       (param_1->PostProcessSettings).LumenFullSkylightLeakingDistance;
  (this->PostProcessSettings).LumenSurfaceCacheResolution =
       (param_1->PostProcessSettings).LumenSurfaceCacheResolution;
  (this->PostProcessSettings).ReflectionMethod.Value =
       (param_1->PostProcessSettings).ReflectionMethod.Value;
  (this->PostProcessSettings).ReflectionsType_DEPRECATED =
       (param_1->PostProcessSettings).ReflectionsType_DEPRECATED;
  (this->PostProcessSettings).LumenReflectionQuality =
       (param_1->PostProcessSettings).LumenReflectionQuality;
  uVar5 = (this->PostProcessSettings).field_0x440;
  bVar18 = ((this->PostProcessSettings).LumenReflectionsScreenTraces ^
           (param_1->PostProcessSettings).LumenReflectionsScreenTraces) & 1 ^ uVar5;
  (this->PostProcessSettings).field_0x440 = bVar18;
  (this->PostProcessSettings).field_0x440 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x440) & 2 ^ bVar18;
  (this->PostProcessSettings).LumenMaxRoughnessToTraceReflections =
       (param_1->PostProcessSettings).LumenMaxRoughnessToTraceReflections;
  (this->PostProcessSettings).LumenMaxReflectionBounces =
       (param_1->PostProcessSettings).LumenMaxReflectionBounces;
  (this->PostProcessSettings).LumenMaxRefractionBounces =
       (param_1->PostProcessSettings).LumenMaxRefractionBounces;
  (this->PostProcessSettings).ScreenSpaceReflectionIntensity =
       (param_1->PostProcessSettings).ScreenSpaceReflectionIntensity;
  (this->PostProcessSettings).ScreenSpaceReflectionQuality =
       (param_1->PostProcessSettings).ScreenSpaceReflectionQuality;
  (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness =
       (param_1->PostProcessSettings).ScreenSpaceReflectionMaxRoughness;
  uVar5 = (this->PostProcessSettings).field_0x45c;
  (this->PostProcessSettings).field_0x45c =
       ((this->PostProcessSettings).bMegaLights ^ (param_1->PostProcessSettings).bMegaLights) & 1 ^
       uVar5;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).AmbientCubemapTint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).AmbientCubemapTint.field0_0x0 + 8) = uVar15
  ;
  (this->PostProcessSettings).AmbientCubemapIntensity =
       (param_1->PostProcessSettings).AmbientCubemapIntensity;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 = (param_1->PostProcessSettings).AmbientCubemap.field0_0x0.DebugPtr,
     pUVar11 != (UTextureCube *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->PostProcessSettings).AmbientCubemap.field0_0x0 =
       (param_1->PostProcessSettings).AmbientCubemap.field0_0x0;
  (this->PostProcessSettings).CameraShutterSpeed = (param_1->PostProcessSettings).CameraShutterSpeed
  ;
  (this->PostProcessSettings).CameraISO = (param_1->PostProcessSettings).CameraISO;
  (this->PostProcessSettings).DepthOfFieldFstop = (param_1->PostProcessSettings).DepthOfFieldFstop;
  (this->PostProcessSettings).DepthOfFieldMinFstop =
       (param_1->PostProcessSettings).DepthOfFieldMinFstop;
  (this->PostProcessSettings).DepthOfFieldBladeCount =
       (param_1->PostProcessSettings).DepthOfFieldBladeCount;
  (this->PostProcessSettings).AutoExposureBias = (param_1->PostProcessSettings).AutoExposureBias;
  (this->PostProcessSettings).AutoExposureBiasBackup =
       (param_1->PostProcessSettings).AutoExposureBiasBackup;
  uVar5 = (this->PostProcessSettings).field_0x49c;
  (this->PostProcessSettings).field_0x49c =
       ((this->PostProcessSettings).bOverride_AutoExposureBiasBackup ^
       (param_1->PostProcessSettings).bOverride_AutoExposureBiasBackup) & 1 ^ uVar5;
  uVar6 = *(undefined4 *)&(this->PostProcessSettings).field_0x4a0;
  *(uint *)&(this->PostProcessSettings).field_0x4a0 =
       (ZPULL(uVar6,0,1) ^ (param_1->PostProcessSettings).AutoExposureApplyPhysicalCameraExposure) &
       1 ^ uVar6;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 = (param_1->PostProcessSettings).AutoExposureBiasCurve.field0_0x0.DebugPtr,
     pUVar12 != (UCurveFloat *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->PostProcessSettings).AutoExposureBiasCurve.field0_0x0 =
       (param_1->PostProcessSettings).AutoExposureBiasCurve.field0_0x0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 = (param_1->PostProcessSettings).AutoExposureMeterMask.field0_0x0.DebugPtr,
     pUVar10 != (UTexture *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->PostProcessSettings).AutoExposureMeterMask.field0_0x0 =
       (param_1->PostProcessSettings).AutoExposureMeterMask.field0_0x0;
  (this->PostProcessSettings).AutoExposureLowPercent =
       (param_1->PostProcessSettings).AutoExposureLowPercent;
  (this->PostProcessSettings).AutoExposureHighPercent =
       (param_1->PostProcessSettings).AutoExposureHighPercent;
  (this->PostProcessSettings).AutoExposureMinBrightness =
       (param_1->PostProcessSettings).AutoExposureMinBrightness;
  (this->PostProcessSettings).AutoExposureMaxBrightness =
       (param_1->PostProcessSettings).AutoExposureMaxBrightness;
  (this->PostProcessSettings).AutoExposureSpeedUp =
       (param_1->PostProcessSettings).AutoExposureSpeedUp;
  (this->PostProcessSettings).AutoExposureSpeedDown =
       (param_1->PostProcessSettings).AutoExposureSpeedDown;
  (this->PostProcessSettings).HistogramLogMin = (param_1->PostProcessSettings).HistogramLogMin;
  (this->PostProcessSettings).HistogramLogMax = (param_1->PostProcessSettings).HistogramLogMax;
  (this->PostProcessSettings).AutoExposureCalibrationConstant_DEPRECATED =
       (param_1->PostProcessSettings).AutoExposureCalibrationConstant_DEPRECATED;
  (this->PostProcessSettings).LocalExposureMethod =
       (param_1->PostProcessSettings).LocalExposureMethod;
  (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED =
       (param_1->PostProcessSettings).LocalExposureContrastScale_DEPRECATED;
  (this->PostProcessSettings).LocalExposureHighlightContrastScale =
       (param_1->PostProcessSettings).LocalExposureHighlightContrastScale;
  (this->PostProcessSettings).LocalExposureShadowContrastScale =
       (param_1->PostProcessSettings).LocalExposureShadowContrastScale;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 = (param_1->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0.
                DebugPtr, pUVar12 != (UCurveFloat *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0 =
       (param_1->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 = (param_1->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0.DebugPtr,
     pUVar12 != (UCurveFloat *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0 =
       (param_1->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0;
  (this->PostProcessSettings).LocalExposureHighlightThreshold =
       (param_1->PostProcessSettings).LocalExposureHighlightThreshold;
  (this->PostProcessSettings).LocalExposureShadowThreshold =
       (param_1->PostProcessSettings).LocalExposureShadowThreshold;
  (this->PostProcessSettings).LocalExposureDetailStrength =
       (param_1->PostProcessSettings).LocalExposureDetailStrength;
  (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend =
       (param_1->PostProcessSettings).LocalExposureBlurredLuminanceBlend;
  (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent =
       (param_1->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent;
  (this->PostProcessSettings).LocalExposureHighlightThresholdStrength =
       (param_1->PostProcessSettings).LocalExposureHighlightThresholdStrength;
  (this->PostProcessSettings).LocalExposureShadowThresholdStrength =
       (param_1->PostProcessSettings).LocalExposureShadowThresholdStrength;
  (this->PostProcessSettings).LocalExposureMiddleGreyBias =
       (param_1->PostProcessSettings).LocalExposureMiddleGreyBias;
  (this->PostProcessSettings).LensFlareIntensity = (param_1->PostProcessSettings).LensFlareIntensity
  ;
  uVar15 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).LensFlareTint.field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTint.field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTint.field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTint.field0_0x0 + 8) = uVar15;
  (this->PostProcessSettings).LensFlareBokehSize = (param_1->PostProcessSettings).LensFlareBokehSize
  ;
  (this->PostProcessSettings).LensFlareThreshold = (param_1->PostProcessSettings).LensFlareThreshold
  ;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 = (param_1->PostProcessSettings).LensFlareBokehShape.field0_0x0.DebugPtr,
     pUVar10 != (UTexture *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->PostProcessSettings).LensFlareBokehShape.field0_0x0 =
       (param_1->PostProcessSettings).LensFlareBokehShape.field0_0x0;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[0].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[0].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[0].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[0].field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[1].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[1].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[1].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[1].field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[2].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[2].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[2].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[2].field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[3].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[3].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[3].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[3].field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[4].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[4].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[4].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[4].field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[5].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[5].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[5].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[5].field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[6].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[6].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[6].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[6].field0_0x0 + 8) = uVar15;
  uVar15 = *(undefined8 *)
            ((longlong)&(param_1->PostProcessSettings).LensFlareTints[7].field0_0x0 + 8);
  *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[7].field0_0x0 =
       *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[7].field0_0x0;
  *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[7].field0_0x0 + 8) = uVar15;
  (this->PostProcessSettings).VignetteIntensity = (param_1->PostProcessSettings).VignetteIntensity;
  (this->PostProcessSettings).Sharpen = (param_1->PostProcessSettings).Sharpen;
  (this->PostProcessSettings).GrainJitter_DEPRECATED =
       (param_1->PostProcessSettings).GrainJitter_DEPRECATED;
  (this->PostProcessSettings).GrainIntensity_DEPRECATED =
       (param_1->PostProcessSettings).GrainIntensity_DEPRECATED;
  (this->PostProcessSettings).FilmGrainIntensity = (param_1->PostProcessSettings).FilmGrainIntensity
  ;
  (this->PostProcessSettings).FilmGrainIntensityShadows =
       (param_1->PostProcessSettings).FilmGrainIntensityShadows;
  (this->PostProcessSettings).FilmGrainIntensityMidtones =
       (param_1->PostProcessSettings).FilmGrainIntensityMidtones;
  (this->PostProcessSettings).FilmGrainIntensityHighlights =
       (param_1->PostProcessSettings).FilmGrainIntensityHighlights;
  (this->PostProcessSettings).FilmGrainShadowsMax =
       (param_1->PostProcessSettings).FilmGrainShadowsMax;
  (this->PostProcessSettings).FilmGrainHighlightsMin =
       (param_1->PostProcessSettings).FilmGrainHighlightsMin;
  (this->PostProcessSettings).FilmGrainHighlightsMax =
       (param_1->PostProcessSettings).FilmGrainHighlightsMax;
  (this->PostProcessSettings).FilmGrainTexelSize = (param_1->PostProcessSettings).FilmGrainTexelSize
  ;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (param_1->PostProcessSettings).FilmGrainTexture.field0_0x0.DebugPtr,
     pUVar9 != (UTexture2D *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->PostProcessSettings).FilmGrainTexture.field0_0x0 =
       (param_1->PostProcessSettings).FilmGrainTexture.field0_0x0;
  (this->PostProcessSettings).AmbientOcclusionIntensity =
       (param_1->PostProcessSettings).AmbientOcclusionIntensity;
  (this->PostProcessSettings).AmbientOcclusionStaticFraction =
       (param_1->PostProcessSettings).AmbientOcclusionStaticFraction;
  (this->PostProcessSettings).AmbientOcclusionRadius =
       (param_1->PostProcessSettings).AmbientOcclusionRadius;
  uVar6 = *(undefined4 *)&(this->PostProcessSettings).field_0x60c;
  *(uint *)&(this->PostProcessSettings).field_0x60c =
       (ZPULL(uVar6,0,1) ^ (param_1->PostProcessSettings).AmbientOcclusionRadiusInWS) & 1 ^ uVar6;
  (this->PostProcessSettings).AmbientOcclusionFadeDistance =
       (param_1->PostProcessSettings).AmbientOcclusionFadeDistance;
  (this->PostProcessSettings).AmbientOcclusionFadeRadius =
       (param_1->PostProcessSettings).AmbientOcclusionFadeRadius;
  (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED =
       (param_1->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED;
  (this->PostProcessSettings).AmbientOcclusionPower =
       (param_1->PostProcessSettings).AmbientOcclusionPower;
  (this->PostProcessSettings).AmbientOcclusionBias =
       (param_1->PostProcessSettings).AmbientOcclusionBias;
  (this->PostProcessSettings).AmbientOcclusionQuality =
       (param_1->PostProcessSettings).AmbientOcclusionQuality;
  (this->PostProcessSettings).AmbientOcclusionMipBlend =
       (param_1->PostProcessSettings).AmbientOcclusionMipBlend;
  (this->PostProcessSettings).AmbientOcclusionMipScale =
       (param_1->PostProcessSettings).AmbientOcclusionMipScale;
  (this->PostProcessSettings).AmbientOcclusionMipThreshold =
       (param_1->PostProcessSettings).AmbientOcclusionMipThreshold;
  (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight =
       (param_1->PostProcessSettings).AmbientOcclusionTemporalBlendWeight;
  uVar6 = *(undefined4 *)&(this->PostProcessSettings).field_0x638;
  *(uint *)&(this->PostProcessSettings).field_0x638 =
       (ZPULL(uVar6,0,1) ^ (param_1->PostProcessSettings).RayTracingAO) & 1 ^ uVar6;
  (this->PostProcessSettings).RayTracingAOSamplesPerPixel =
       (param_1->PostProcessSettings).RayTracingAOSamplesPerPixel;
  (this->PostProcessSettings).RayTracingAOIntensity =
       (param_1->PostProcessSettings).RayTracingAOIntensity;
  (this->PostProcessSettings).RayTracingAORadius = (param_1->PostProcessSettings).RayTracingAORadius
  ;
  (this->PostProcessSettings).ColorGradingIntensity =
       (param_1->PostProcessSettings).ColorGradingIntensity;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 = (param_1->PostProcessSettings).ColorGradingLUT.field0_0x0.DebugPtr,
     pUVar10 != (UTexture *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->PostProcessSettings).ColorGradingLUT.field0_0x0 =
       (param_1->PostProcessSettings).ColorGradingLUT.field0_0x0;
  (this->PostProcessSettings).DepthOfFieldSensorWidth =
       (param_1->PostProcessSettings).DepthOfFieldSensorWidth;
  (this->PostProcessSettings).DepthOfFieldSqueezeFactor =
       (param_1->PostProcessSettings).DepthOfFieldSqueezeFactor;
  (this->PostProcessSettings).DepthOfFieldFocalDistance =
       (param_1->PostProcessSettings).DepthOfFieldFocalDistance;
  (this->PostProcessSettings).DepthOfFieldDepthBlurAmount =
       (param_1->PostProcessSettings).DepthOfFieldDepthBlurAmount;
  (this->PostProcessSettings).DepthOfFieldDepthBlurRadius =
       (param_1->PostProcessSettings).DepthOfFieldDepthBlurRadius;
  uVar6 = *(undefined4 *)&(this->PostProcessSettings).field_0x66c;
  *(uint *)&(this->PostProcessSettings).field_0x66c =
       (ZPULL(uVar6,0,1) ^ (param_1->PostProcessSettings).DepthOfFieldUseHairDepth) & 1 ^ uVar6;
  (this->PostProcessSettings).DepthOfFieldPetzvalBokeh =
       (param_1->PostProcessSettings).DepthOfFieldPetzvalBokeh;
  (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff =
       (param_1->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff;
  (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0 =
       (param_1->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0;
  (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius =
       (param_1->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius;
  (this->PostProcessSettings).DepthOfFieldAspectRatioScalar =
       (param_1->PostProcessSettings).DepthOfFieldAspectRatioScalar;
  (this->PostProcessSettings).DepthOfFieldBarrelRadius =
       (param_1->PostProcessSettings).DepthOfFieldBarrelRadius;
  (this->PostProcessSettings).DepthOfFieldBarrelLength =
       (param_1->PostProcessSettings).DepthOfFieldBarrelLength;
  fVar16 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch =
       (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll = fVar16;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length =
       (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length;
  fVar16 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch =
       (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll = fVar16;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length =
       (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length;
  fVar16 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch =
       (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll = fVar16;
  (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length =
       (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length;
  (this->PostProcessSettings).DepthOfFieldFocalRegion =
       (param_1->PostProcessSettings).DepthOfFieldFocalRegion;
  (this->PostProcessSettings).DepthOfFieldNearTransitionRegion =
       (param_1->PostProcessSettings).DepthOfFieldNearTransitionRegion;
  (this->PostProcessSettings).DepthOfFieldFarTransitionRegion =
       (param_1->PostProcessSettings).DepthOfFieldFarTransitionRegion;
  (this->PostProcessSettings).DepthOfFieldScale = (param_1->PostProcessSettings).DepthOfFieldScale;
  (this->PostProcessSettings).DepthOfFieldNearBlurSize =
       (param_1->PostProcessSettings).DepthOfFieldNearBlurSize;
  (this->PostProcessSettings).DepthOfFieldFarBlurSize =
       (param_1->PostProcessSettings).DepthOfFieldFarBlurSize;
  (this->PostProcessSettings).DepthOfFieldOcclusion =
       (param_1->PostProcessSettings).DepthOfFieldOcclusion;
  (this->PostProcessSettings).DepthOfFieldSkyFocusDistance =
       (param_1->PostProcessSettings).DepthOfFieldSkyFocusDistance;
  (this->PostProcessSettings).DepthOfFieldVignetteSize =
       (param_1->PostProcessSettings).DepthOfFieldVignetteSize;
  (this->PostProcessSettings).MotionBlurAmount = (param_1->PostProcessSettings).MotionBlurAmount;
  (this->PostProcessSettings).MotionBlurMax = (param_1->PostProcessSettings).MotionBlurMax;
  (this->PostProcessSettings).MotionBlurTargetFPS =
       (param_1->PostProcessSettings).MotionBlurTargetFPS;
  (this->PostProcessSettings).MotionBlurPerObjectSize =
       (param_1->PostProcessSettings).MotionBlurPerObjectSize;
  (this->PostProcessSettings).LPVIntensity_DEPRECATED =
       (param_1->PostProcessSettings).LPVIntensity_DEPRECATED;
  (this->PostProcessSettings).LPVVplInjectionBias_DEPRECATED =
       (param_1->PostProcessSettings).LPVVplInjectionBias_DEPRECATED;
  (this->PostProcessSettings).LPVSize_DEPRECATED = (param_1->PostProcessSettings).LPVSize_DEPRECATED
  ;
  (this->PostProcessSettings).LPVSecondaryOcclusionIntensity_DEPRECATED =
       (param_1->PostProcessSettings).LPVSecondaryOcclusionIntensity_DEPRECATED;
  (this->PostProcessSettings).LPVSecondaryBounceIntensity_DEPRECATED =
       (param_1->PostProcessSettings).LPVSecondaryBounceIntensity_DEPRECATED;
  (this->PostProcessSettings).LPVGeometryVolumeBias_DEPRECATED =
       (param_1->PostProcessSettings).LPVGeometryVolumeBias_DEPRECATED;
  (this->PostProcessSettings).LPVEmissiveInjectionIntensity_DEPRECATED =
       (param_1->PostProcessSettings).LPVEmissiveInjectionIntensity_DEPRECATED;
  (this->PostProcessSettings).LPVDirectionalOcclusionIntensity_DEPRECATED =
       (param_1->PostProcessSettings).LPVDirectionalOcclusionIntensity_DEPRECATED;
  (this->PostProcessSettings).LPVDirectionalOcclusionRadius_DEPRECATED =
       (param_1->PostProcessSettings).LPVDirectionalOcclusionRadius_DEPRECATED;
  (this->PostProcessSettings).LPVDiffuseOcclusionExponent_DEPRECATED =
       (param_1->PostProcessSettings).LPVDiffuseOcclusionExponent_DEPRECATED;
  (this->PostProcessSettings).LPVSpecularOcclusionExponent_DEPRECATED =
       (param_1->PostProcessSettings).LPVSpecularOcclusionExponent_DEPRECATED;
  (this->PostProcessSettings).LPVDiffuseOcclusionIntensity_DEPRECATED =
       (param_1->PostProcessSettings).LPVDiffuseOcclusionIntensity_DEPRECATED;
  (this->PostProcessSettings).LPVSpecularOcclusionIntensity_DEPRECATED =
       (param_1->PostProcessSettings).LPVSpecularOcclusionIntensity_DEPRECATED;
  (this->PostProcessSettings).TranslucencyType = (param_1->PostProcessSettings).TranslucencyType;
  (this->PostProcessSettings).RayTracingTranslucencyMaxRoughness =
       (param_1->PostProcessSettings).RayTracingTranslucencyMaxRoughness;
  (this->PostProcessSettings).RayTracingTranslucencyRefractionRays =
       (param_1->PostProcessSettings).RayTracingTranslucencyRefractionRays;
  (this->PostProcessSettings).RayTracingTranslucencySamplesPerPixel =
       (param_1->PostProcessSettings).RayTracingTranslucencySamplesPerPixel;
  (this->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents =
       (param_1->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents;
  (this->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents =
       (param_1->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents;
  (this->PostProcessSettings).RayTracingTranslucencyShadows =
       (param_1->PostProcessSettings).RayTracingTranslucencyShadows;
  uVar5 = (this->PostProcessSettings).field_0x735;
  bVar18 = ((this->PostProcessSettings).RayTracingTranslucencyRefraction ^
           (param_1->PostProcessSettings).RayTracingTranslucencyRefraction) & 1 ^ uVar5;
  (this->PostProcessSettings).field_0x735 = bVar18;
  (this->PostProcessSettings).field_0x735 =
       (bVar18 ^ (param_1->PostProcessSettings).field_0x735) & 2 ^ bVar18;
  (this->PostProcessSettings).PathTracingMaxBounces =
       (param_1->PostProcessSettings).PathTracingMaxBounces;
  (this->PostProcessSettings).PathTracingSamplesPerPixel =
       (param_1->PostProcessSettings).PathTracingSamplesPerPixel;
  (this->PostProcessSettings).PathTracingMaxPathIntensity =
       (param_1->PostProcessSettings).PathTracingMaxPathIntensity;
  uVar6 = *(undefined4 *)&(this->PostProcessSettings).field_0x744;
  uVar17 = (ZPULL(uVar6,0,1) ^ (param_1->PostProcessSettings).PathTracingEnableEmissiveMaterials) &
           1 ^ uVar6;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 2 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 4 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 8 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x10 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x20 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x40 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  pFVar3 = &(this->PostProcessSettings).WeightedBlendables;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x80 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x100 ^ uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  uVar17 = (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x200 ^ uVar17;
  pFVar4 = &(param_1->PostProcessSettings).WeightedBlendables;
  *(uint *)&(this->PostProcessSettings).field_0x744 = uVar17;
  *(uint *)&(this->PostProcessSettings).field_0x744 =
       (uVar17 ^ *(uint *)&(param_1->PostProcessSettings).field_0x744) & 0x400 ^ uVar17;
  (this->PostProcessSettings).LPVFadeRange_DEPRECATED =
       (param_1->PostProcessSettings).LPVFadeRange_DEPRECATED;
  (this->PostProcessSettings).LPVDirectionalOcclusionFadeRange_DEPRECATED =
       (param_1->PostProcessSettings).LPVDirectionalOcclusionFadeRange_DEPRECATED;
  (this->PostProcessSettings).ScreenPercentage_DEPRECATED =
       (param_1->PostProcessSettings).ScreenPercentage_DEPRECATED;
  (this->PostProcessSettings).UserFlags = (param_1->PostProcessSettings).UserFlags;
  if (pFVar3 != pFVar4) {
    iVar7 = (param_1->PostProcessSettings).WeightedBlendables.Array.ArrayNum;
    piVar2 = &(this->PostProcessSettings).WeightedBlendables.Array.ArrayMax;
    iVar8 = *piVar2;
    pFVar13 = (FWeightedBlendable *)(pFVar4->Array).AllocatorInstance.Data;
    (this->PostProcessSettings).WeightedBlendables.Array.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,iVar8,(ForAnyElementType *)pFVar3,iVar7,piVar2);
      ConstructItems<FWeightedBlendable,FWeightedBlendable,int>
                ((pFVar3->Array).AllocatorInstance.Data,pFVar13,iVar7);
    }
  }
  return;
}

// OverrideChanged @ 14d5c42d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::OverrideChanged
          (FPostProcessSettingsCollection *this,FPostProcessSettingsCollection *param_1)

{
  FWeightedBlendables *this_00;
  FWeightedBlendables *pFVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  UTextureCube *pUVar5;
  UTexture *pUVar6;
  UTexture2D *pUVar7;
  UCurveFloat *pUVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  
  if (param_1.bOverride_TemperatureType != 0) {
    this.bOverride_TemperatureType = '\x01';
    (this->PostProcessSettings).TemperatureType.Value =
         (param_1->PostProcessSettings).TemperatureType.Value;
  }
  if (param_1.bOverride_WhiteTemp != '\0') {
    this.bOverride_WhiteTemp = '\x01';
    (this->PostProcessSettings).WhiteTemp = (param_1->PostProcessSettings).WhiteTemp;
  }
  if (param_1.bOverride_WhiteTint != '\0') {
    this.bOverride_WhiteTint = '\x01';
    (this->PostProcessSettings).WhiteTint = (param_1->PostProcessSettings).WhiteTint;
  }
  if (param_1.bOverride_ColorSaturation != '\0') {
    this.bOverride_ColorSaturation = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W = dVar9;
  }
  if (param_1.bOverride_ColorContrast != '\0') {
    this.bOverride_ColorContrast = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W = dVar9;
  }
  if (param_1.bOverride_ColorGamma != '\0') {
    this.bOverride_ColorGamma = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W = dVar9;
  }
  if (param_1.bOverride_ColorGain != '\0') {
    this.bOverride_ColorGain = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGain.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W = dVar9;
  }
  if ((bool)param_1.bOverride_ColorOffset) {
    this.bOverride_ColorOffset = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorSaturationShadows != 0) {
    (this->PostProcessSettings).bOverride_ColorSaturationShadows = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorContrastShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorContrastShadows = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorGammaShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorGammaShadows = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorGainShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorGainShadows = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorOffsetShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorOffsetShadows = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorSaturationMidtones != '\0') {
    (this->PostProcessSettings).bOverride_ColorSaturationMidtones = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorContrastMidtones != '\0') {
    (this->PostProcessSettings).bOverride_ColorContrastMidtones = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W = dVar9;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_ColorGammaMidtones) {
    (this->PostProcessSettings).bOverride_ColorGammaMidtones = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorGainMidtones != 0) {
    (this->PostProcessSettings).bOverride_ColorGainMidtones = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorOffsetMidtones != '\0') {
    (this->PostProcessSettings).bOverride_ColorOffsetMidtones = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorSaturationHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorSaturationHighlights = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorContrastHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorContrastHighlights = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorGammaHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorGammaHighlights = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorGainHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorGainHighlights = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W = dVar9;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorOffsetHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorOffsetHighlights = '\x01';
    dVar9 = (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y = dVar9;
    dVar9 = (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z =
         (param_1->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W = dVar9;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_ColorCorrectionShadowsMax) {
    (this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax = '\x01';
    (this->PostProcessSettings).ColorCorrectionShadowsMax =
         (param_1->PostProcessSettings).ColorCorrectionShadowsMax;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin != 0) {
    (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin = '\x01';
    (this->PostProcessSettings).ColorCorrectionHighlightsMin =
         (param_1->PostProcessSettings).ColorCorrectionHighlightsMin;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorCorrectionHighlightsMax != '\0') {
    (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMax = '\x01';
    (this->PostProcessSettings).ColorCorrectionHighlightsMax =
         (param_1->PostProcessSettings).ColorCorrectionHighlightsMax;
  }
  if ((param_1->PostProcessSettings).bOverride_BlueCorrection != '\0') {
    (this->PostProcessSettings).bOverride_BlueCorrection = '\x01';
    (this->PostProcessSettings).BlueCorrection = (param_1->PostProcessSettings).BlueCorrection;
  }
  if ((param_1->PostProcessSettings).bOverride_ExpandGamut != '\0') {
    (this->PostProcessSettings).bOverride_ExpandGamut = '\x01';
    (this->PostProcessSettings).ExpandGamut = (param_1->PostProcessSettings).ExpandGamut;
  }
  if ((param_1->PostProcessSettings).bOverride_ToneCurveAmount != '\0') {
    (this->PostProcessSettings).bOverride_ToneCurveAmount = '\x01';
    (this->PostProcessSettings).ToneCurveAmount = (param_1->PostProcessSettings).ToneCurveAmount;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmSlope != '\0') {
    (this->PostProcessSettings).bOverride_FilmSlope = '\x01';
    (this->PostProcessSettings).FilmSlope = (param_1->PostProcessSettings).FilmSlope;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmToe != '\0') {
    (this->PostProcessSettings).bOverride_FilmToe = '\x01';
    (this->PostProcessSettings).FilmToe = (param_1->PostProcessSettings).FilmToe;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_FilmShoulder) {
    (this->PostProcessSettings).bOverride_FilmShoulder = '\x01';
    (this->PostProcessSettings).FilmShoulder = (param_1->PostProcessSettings).FilmShoulder;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmBlackClip != 0) {
    (this->PostProcessSettings).bOverride_FilmBlackClip = '\x01';
    (this->PostProcessSettings).FilmBlackClip = (param_1->PostProcessSettings).FilmBlackClip;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmWhiteClip != '\0') {
    (this->PostProcessSettings).bOverride_FilmWhiteClip = '\x01';
    (this->PostProcessSettings).FilmWhiteClip = (param_1->PostProcessSettings).FilmWhiteClip;
  }
  if ((param_1->PostProcessSettings).bOverride_SceneColorTint != '\0') {
    (this->PostProcessSettings).bOverride_SceneColorTint = '\x01';
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).SceneColorTint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).SceneColorTint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).SceneColorTint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).SceneColorTint.field0_0x0 + 8) = uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_SceneFringeIntensity != '\0') {
    (this->PostProcessSettings).bOverride_SceneFringeIntensity = '\x01';
    (this->PostProcessSettings).SceneFringeIntensity =
         (param_1->PostProcessSettings).SceneFringeIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_ChromaticAberrationStartOffset != '\0') {
    (this->PostProcessSettings).bOverride_ChromaticAberrationStartOffset = '\x01';
    (this->PostProcessSettings).ChromaticAberrationStartOffset =
         (param_1->PostProcessSettings).ChromaticAberrationStartOffset;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomIntensity = '\x01';
    (this->PostProcessSettings).BloomIntensity = (param_1->PostProcessSettings).BloomIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomGaussianIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomGaussianIntensity = '\x01';
    (this->PostProcessSettings).BloomGaussianIntensity =
         (param_1->PostProcessSettings).BloomGaussianIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomThreshold != '\0') {
    (this->PostProcessSettings).bOverride_BloomThreshold = '\x01';
    (this->PostProcessSettings).BloomThreshold = (param_1->PostProcessSettings).BloomThreshold;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom1Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom1Tint = '\x01';
    uVar10 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom1Tint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom1Tint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).Bloom1Tint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom1Tint.field0_0x0 + 8) = uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomSizeScale != 0) {
    (this->PostProcessSettings).bOverride_BloomSizeScale = '\x01';
    (this->PostProcessSettings).BloomSizeScale = (param_1->PostProcessSettings).BloomSizeScale;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom1Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom1Size = '\x01';
    (this->PostProcessSettings).Bloom1Size = (param_1->PostProcessSettings).Bloom1Size;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_Bloom2Tint) {
    (this->PostProcessSettings).bOverride_Bloom2Tint = '\x01';
    uVar10 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom2Tint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom2Tint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).Bloom2Tint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom2Tint.field0_0x0 + 8) = uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom2Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom2Size = '\x01';
    (this->PostProcessSettings).Bloom2Size = (param_1->PostProcessSettings).Bloom2Size;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom3Tint != 0) {
    (this->PostProcessSettings).bOverride_Bloom3Tint = '\x01';
    uVar10 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom3Tint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom3Tint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).Bloom3Tint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom3Tint.field0_0x0 + 8) = uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom3Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom3Size = '\x01';
    (this->PostProcessSettings).Bloom3Size = (param_1->PostProcessSettings).Bloom3Size;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom4Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom4Tint = '\x01';
    uVar10 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom4Tint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom4Tint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).Bloom4Tint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom4Tint.field0_0x0 + 8) = uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom4Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom4Size = '\x01';
    (this->PostProcessSettings).Bloom4Size = (param_1->PostProcessSettings).Bloom4Size;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom5Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom5Tint = '\x01';
    uVar10 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom5Tint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom5Tint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).Bloom5Tint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom5Tint.field0_0x0 + 8) = uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom5Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom5Size = '\x01';
    (this->PostProcessSettings).Bloom5Size = (param_1->PostProcessSettings).Bloom5Size;
  }
  if ((param_1->PostProcessSettings).bOverride_Bloom6Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom6Tint = '\x01';
    uVar10 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).Bloom6Tint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom6Tint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).Bloom6Tint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom6Tint.field0_0x0 + 8) = uVar10;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_Bloom6Size) {
    (this->PostProcessSettings).bOverride_Bloom6Size = '\x01';
    (this->PostProcessSettings).Bloom6Size = (param_1->PostProcessSettings).Bloom6Size;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomDirtMaskIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity = '\x01';
    (this->PostProcessSettings).BloomDirtMaskIntensity =
         (param_1->PostProcessSettings).BloomDirtMaskIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomDirtMaskTint != '\0') {
    (this->PostProcessSettings).bOverride_BloomDirtMaskTint = '\x01';
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).BloomDirtMaskTint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).BloomDirtMaskTint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).BloomDirtMaskTint.field0_0x0 + 8) =
         uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionIntensity = '\x01';
    (this->PostProcessSettings).BloomConvolutionIntensity =
         (param_1->PostProcessSettings).BloomConvolutionIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionScatterDispersion != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionScatterDispersion = '\x01';
    (this->PostProcessSettings).BloomConvolutionScatterDispersion =
         (param_1->PostProcessSettings).BloomConvolutionScatterDispersion;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionSize != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionSize = '\x01';
    (this->PostProcessSettings).BloomConvolutionSize =
         (param_1->PostProcessSettings).BloomConvolutionSize;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionCenterUV != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionCenterUV = '\x01';
    dVar9 = (param_1->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X =
         (param_1->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y = dVar9;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin = '\x01';
    (this->PostProcessSettings).BloomConvolutionPreFilterMin =
         (param_1->PostProcessSettings).BloomConvolutionPreFilterMin;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax != 0) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax = '\x01';
    (this->PostProcessSettings).BloomConvolutionPreFilterMax =
         (param_1->PostProcessSettings).BloomConvolutionPreFilterMax;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionPreFilterMult != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMult = '\x01';
    (this->PostProcessSettings).BloomConvolutionPreFilterMult =
         (param_1->PostProcessSettings).BloomConvolutionPreFilterMult;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_AmbientCubemapIntensity) {
    (this->PostProcessSettings).bOverride_AmbientCubemapIntensity = '\x01';
    (this->PostProcessSettings).AmbientCubemapIntensity =
         (param_1->PostProcessSettings).AmbientCubemapIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientCubemapTint != '\0') {
    (this->PostProcessSettings).bOverride_AmbientCubemapTint = '\x01';
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).AmbientCubemapTint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).AmbientCubemapTint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).AmbientCubemapTint.field0_0x0 + 8) =
         uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_CameraShutterSpeed != '\0') {
    (this->PostProcessSettings).bOverride_CameraShutterSpeed = '\x01';
    (this->PostProcessSettings).CameraShutterSpeed =
         (param_1->PostProcessSettings).CameraShutterSpeed;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_CameraISO) {
    (this->PostProcessSettings).bOverride_CameraISO = '\x01';
    (this->PostProcessSettings).CameraISO = (param_1->PostProcessSettings).CameraISO;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureLowPercent != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureLowPercent = '\x01';
    (this->PostProcessSettings).AutoExposureLowPercent =
         (param_1->PostProcessSettings).AutoExposureLowPercent;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureHighPercent != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureHighPercent = '\x01';
    (this->PostProcessSettings).AutoExposureHighPercent =
         (param_1->PostProcessSettings).AutoExposureHighPercent;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureMinBrightness != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureMinBrightness = '\x01';
    (this->PostProcessSettings).AutoExposureMinBrightness =
         (param_1->PostProcessSettings).AutoExposureMinBrightness;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureMaxBrightness != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureMaxBrightness = '\x01';
    (this->PostProcessSettings).AutoExposureMaxBrightness =
         (param_1->PostProcessSettings).AutoExposureMaxBrightness;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureSpeedUp != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureSpeedUp = '\x01';
    (this->PostProcessSettings).AutoExposureSpeedUp =
         (param_1->PostProcessSettings).AutoExposureSpeedUp;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_AutoExposureSpeedDown) {
    (this->PostProcessSettings).bOverride_AutoExposureSpeedDown = '\x01';
    (this->PostProcessSettings).AutoExposureSpeedDown =
         (param_1->PostProcessSettings).AutoExposureSpeedDown;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureBias != 0) {
    (this->PostProcessSettings).bOverride_AutoExposureBias = '\x01';
    (this->PostProcessSettings).AutoExposureBias = (param_1->PostProcessSettings).AutoExposureBias;
  }
  if ((param_1->PostProcessSettings).bOverride_HistogramLogMin != '\0') {
    (this->PostProcessSettings).bOverride_HistogramLogMin = '\x01';
    (this->PostProcessSettings).HistogramLogMin = (param_1->PostProcessSettings).HistogramLogMin;
  }
  if ((param_1->PostProcessSettings).bOverride_HistogramLogMax != '\0') {
    (this->PostProcessSettings).bOverride_HistogramLogMax = '\x01';
    (this->PostProcessSettings).HistogramLogMax = (param_1->PostProcessSettings).HistogramLogMax;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureMethod != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureMethod = '\x01';
    (this->PostProcessSettings).LocalExposureMethod =
         (param_1->PostProcessSettings).LocalExposureMethod;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_LocalExposureContrastScale_DEPRECATED) {
    (this->PostProcessSettings).bOverride_LocalExposureContrastScale_DEPRECATED = '\x01';
    (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED =
         (param_1->PostProcessSettings).LocalExposureContrastScale_DEPRECATED;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale != 0) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale = '\x01';
    (this->PostProcessSettings).LocalExposureHighlightContrastScale =
         (param_1->PostProcessSettings).LocalExposureHighlightContrastScale;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureShadowContrastScale != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowContrastScale = '\x01';
    (this->PostProcessSettings).LocalExposureShadowContrastScale =
         (param_1->PostProcessSettings).LocalExposureShadowContrastScale;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureHighlightThreshold != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightThreshold = '\x01';
    (this->PostProcessSettings).LocalExposureHighlightThreshold =
         (param_1->PostProcessSettings).LocalExposureHighlightThreshold;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureShadowThreshold != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowThreshold = '\x01';
    (this->PostProcessSettings).LocalExposureShadowThreshold =
         (param_1->PostProcessSettings).LocalExposureShadowThreshold;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureDetailStrength != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureDetailStrength = '\x01';
    (this->PostProcessSettings).LocalExposureDetailStrength =
         (param_1->PostProcessSettings).LocalExposureDetailStrength;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceBlend) {
    (this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceBlend = '\x01';
    (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend =
         (param_1->PostProcessSettings).LocalExposureBlurredLuminanceBlend;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0)
  {
    (this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\x01';
    (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent =
         (param_1->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength = '\x01';
    (this->PostProcessSettings).LocalExposureHighlightThresholdStrength =
         (param_1->PostProcessSettings).LocalExposureHighlightThresholdStrength;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength = '\x01';
    (this->PostProcessSettings).LocalExposureShadowThresholdStrength =
         (param_1->PostProcessSettings).LocalExposureShadowThresholdStrength;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias = '\x01';
    (this->PostProcessSettings).LocalExposureMiddleGreyBias =
         (param_1->PostProcessSettings).LocalExposureMiddleGreyBias;
  }
  if ((param_1->PostProcessSettings).bOverride_LensFlareIntensity != '\0') {
    (this->PostProcessSettings).bOverride_LensFlareIntensity = '\x01';
    (this->PostProcessSettings).LensFlareIntensity =
         (param_1->PostProcessSettings).LensFlareIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_LensFlareTint != '\0') {
    (this->PostProcessSettings).bOverride_LensFlareTint = '\x01';
    uVar10 = *(undefined8 *)((longlong)&(param_1->PostProcessSettings).LensFlareTint.field0_0x0 + 8)
    ;
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTint.field0_0x0 + 8) = uVar10;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_LensFlareBokehSize) {
    (this->PostProcessSettings).bOverride_LensFlareBokehSize = '\x01';
    (this->PostProcessSettings).LensFlareBokehSize =
         (param_1->PostProcessSettings).LensFlareBokehSize;
  }
  if ((param_1->PostProcessSettings).bOverride_LensFlareThreshold != '\0') {
    (this->PostProcessSettings).bOverride_LensFlareThreshold = '\x01';
    (this->PostProcessSettings).LensFlareThreshold =
         (param_1->PostProcessSettings).LensFlareThreshold;
  }
  if ((param_1->PostProcessSettings).bOverride_VignetteIntensity != '\0') {
    (this->PostProcessSettings).bOverride_VignetteIntensity = '\x01';
    (this->PostProcessSettings).VignetteIntensity = (param_1->PostProcessSettings).VignetteIntensity
    ;
  }
  if ((param_1->PostProcessSettings).bOverride_Sharpen != '\0') {
    (this->PostProcessSettings).bOverride_Sharpen = '\x01';
    (this->PostProcessSettings).Sharpen = (param_1->PostProcessSettings).Sharpen;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainIntensity != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainIntensity = '\x01';
    (this->PostProcessSettings).FilmGrainIntensity =
         (param_1->PostProcessSettings).FilmGrainIntensity;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_FilmGrainIntensityShadows) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityShadows = '\x01';
    (this->PostProcessSettings).FilmGrainIntensityShadows =
         (param_1->PostProcessSettings).FilmGrainIntensityShadows;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainIntensityMidtones != 0) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones = '\x01';
    (this->PostProcessSettings).FilmGrainIntensityMidtones =
         (param_1->PostProcessSettings).FilmGrainIntensityMidtones;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainIntensityHighlights != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights = '\x01';
    (this->PostProcessSettings).FilmGrainIntensityHighlights =
         (param_1->PostProcessSettings).FilmGrainIntensityHighlights;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainShadowsMax != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainShadowsMax = '\x01';
    (this->PostProcessSettings).FilmGrainShadowsMax =
         (param_1->PostProcessSettings).FilmGrainShadowsMax;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainHighlightsMin != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMin = '\x01';
    (this->PostProcessSettings).FilmGrainHighlightsMin =
         (param_1->PostProcessSettings).FilmGrainHighlightsMin;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainHighlightsMax != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMax = '\x01';
    (this->PostProcessSettings).FilmGrainHighlightsMax =
         (param_1->PostProcessSettings).FilmGrainHighlightsMax;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainTexelSize != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainTexelSize = '\x01';
    (this->PostProcessSettings).FilmGrainTexelSize =
         (param_1->PostProcessSettings).FilmGrainTexelSize;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_AmbientOcclusionIntensity) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionIntensity = '\x01';
    (this->PostProcessSettings).AmbientOcclusionIntensity =
         (param_1->PostProcessSettings).AmbientOcclusionIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction != 0) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction = '\x01';
    (this->PostProcessSettings).AmbientOcclusionStaticFraction =
         (param_1->PostProcessSettings).AmbientOcclusionStaticFraction;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionRadius != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadius = '\x01';
    (this->PostProcessSettings).AmbientOcclusionRadius =
         (param_1->PostProcessSettings).AmbientOcclusionRadius;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance = '\x01';
    (this->PostProcessSettings).AmbientOcclusionFadeDistance =
         (param_1->PostProcessSettings).AmbientOcclusionFadeDistance;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius = '\x01';
    (this->PostProcessSettings).AmbientOcclusionFadeRadius =
         (param_1->PostProcessSettings).AmbientOcclusionFadeRadius;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED = '\x01';
    (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED =
         (param_1->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionPower != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionPower = '\x01';
    (this->PostProcessSettings).AmbientOcclusionPower =
         (param_1->PostProcessSettings).AmbientOcclusionPower;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_AmbientOcclusionBias) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionBias = '\x01';
    (this->PostProcessSettings).AmbientOcclusionBias =
         (param_1->PostProcessSettings).AmbientOcclusionBias;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionQuality != 0) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionQuality = '\x01';
    (this->PostProcessSettings).AmbientOcclusionQuality =
         (param_1->PostProcessSettings).AmbientOcclusionQuality;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionMipBlend != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend = '\x01';
    (this->PostProcessSettings).AmbientOcclusionMipBlend =
         (param_1->PostProcessSettings).AmbientOcclusionMipBlend;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionMipScale != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipScale = '\x01';
    (this->PostProcessSettings).AmbientOcclusionMipScale =
         (param_1->PostProcessSettings).AmbientOcclusionMipScale;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold = '\x01';
    (this->PostProcessSettings).AmbientOcclusionMipThreshold =
         (param_1->PostProcessSettings).AmbientOcclusionMipThreshold;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight = '\x01';
    (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight =
         (param_1->PostProcessSettings).AmbientOcclusionTemporalBlendWeight;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_IndirectLightingColor) {
    (this->PostProcessSettings).bOverride_IndirectLightingColor = '\x01';
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).IndirectLightingColor.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).IndirectLightingColor.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).IndirectLightingColor.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).IndirectLightingColor.field0_0x0 + 8) =
         uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_IndirectLightingIntensity != 0) {
    (this->PostProcessSettings).bOverride_IndirectLightingIntensity = '\x01';
    (this->PostProcessSettings).IndirectLightingIntensity =
         (param_1->PostProcessSettings).IndirectLightingIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldFocalDistance != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFocalDistance = '\x01';
    (this->PostProcessSettings).DepthOfFieldFocalDistance =
         (param_1->PostProcessSettings).DepthOfFieldFocalDistance;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldFstop != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFstop = '\x01';
    (this->PostProcessSettings).DepthOfFieldFstop = (param_1->PostProcessSettings).DepthOfFieldFstop
    ;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldMinFstop != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldMinFstop = '\x01';
    (this->PostProcessSettings).DepthOfFieldMinFstop =
         (param_1->PostProcessSettings).DepthOfFieldMinFstop;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_DepthOfFieldSensorWidth) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth = '\x01';
    (this->PostProcessSettings).DepthOfFieldSensorWidth =
         (param_1->PostProcessSettings).DepthOfFieldSensorWidth;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor != 0) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor = '\x01';
    (this->PostProcessSettings).DepthOfFieldSqueezeFactor =
         (param_1->PostProcessSettings).DepthOfFieldSqueezeFactor;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius = '\x01';
    (this->PostProcessSettings).DepthOfFieldDepthBlurRadius =
         (param_1->PostProcessSettings).DepthOfFieldDepthBlurRadius;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth = '\x01';
    uVar4 = *(undefined4 *)&(this->PostProcessSettings).field_0x66c;
    *(uint *)&(this->PostProcessSettings).field_0x66c =
         (ZPULL(uVar4,0,1) ^ (param_1->PostProcessSettings).DepthOfFieldUseHairDepth) & 1 ^ uVar4;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount = '\x01';
    (this->PostProcessSettings).DepthOfFieldDepthBlurAmount =
         (param_1->PostProcessSettings).DepthOfFieldDepthBlurAmount;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldFocalRegion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion = '\x01';
    (this->PostProcessSettings).DepthOfFieldFocalRegion =
         (param_1->PostProcessSettings).DepthOfFieldFocalRegion;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion = '\x01';
    (this->PostProcessSettings).DepthOfFieldNearTransitionRegion =
         (param_1->PostProcessSettings).DepthOfFieldNearTransitionRegion;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion = '\x01';
    (this->PostProcessSettings).DepthOfFieldFarTransitionRegion =
         (param_1->PostProcessSettings).DepthOfFieldFarTransitionRegion;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_DepthOfFieldScale) {
    (this->PostProcessSettings).bOverride_DepthOfFieldScale = '\x01';
    (this->PostProcessSettings).DepthOfFieldScale = (param_1->PostProcessSettings).DepthOfFieldScale
    ;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize != 0) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize = '\x01';
    (this->PostProcessSettings).DepthOfFieldNearBlurSize =
         (param_1->PostProcessSettings).DepthOfFieldNearBlurSize;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize = '\x01';
    (this->PostProcessSettings).DepthOfFieldFarBlurSize =
         (param_1->PostProcessSettings).DepthOfFieldFarBlurSize;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldOcclusion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldOcclusion = '\x01';
    (this->PostProcessSettings).DepthOfFieldOcclusion =
         (param_1->PostProcessSettings).DepthOfFieldOcclusion;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance = '\x01';
    (this->PostProcessSettings).DepthOfFieldSkyFocusDistance =
         (param_1->PostProcessSettings).DepthOfFieldSkyFocusDistance;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldVignetteSize != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize = '\x01';
    (this->PostProcessSettings).DepthOfFieldVignetteSize =
         (param_1->PostProcessSettings).DepthOfFieldVignetteSize;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar) {
    (this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar = '\x01';
    (this->PostProcessSettings).DepthOfFieldAspectRatioScalar =
         (param_1->PostProcessSettings).DepthOfFieldAspectRatioScalar;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalBokeh =
         (param_1->PostProcessSettings).DepthOfFieldPetzvalBokeh;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff =
         (param_1->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0 =
         (param_1->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius =
         (param_1->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius = '\x01';
    (this->PostProcessSettings).DepthOfFieldBarrelRadius =
         (param_1->PostProcessSettings).DepthOfFieldBarrelRadius;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldBarrelLength != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength = '\x01';
    (this->PostProcessSettings).DepthOfFieldBarrelLength =
         (param_1->PostProcessSettings).DepthOfFieldBarrelLength;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldMatteBoxFlags != 0) {
    fVar11 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll = fVar11;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length;
    fVar11 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll = fVar11;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length;
    fVar11 = (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll = fVar11;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length =
         (param_1->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length;
  }
  if ((param_1->PostProcessSettings).bOverride_MotionBlurAmount != '\0') {
    (this->PostProcessSettings).bOverride_MotionBlurAmount = '\x01';
    (this->PostProcessSettings).MotionBlurAmount = (param_1->PostProcessSettings).MotionBlurAmount;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_MotionBlurMax) {
    (this->PostProcessSettings).bOverride_MotionBlurMax = '\x01';
    (this->PostProcessSettings).MotionBlurMax = (param_1->PostProcessSettings).MotionBlurMax;
  }
  if ((param_1->PostProcessSettings).bOverride_MotionBlurPerObjectSize != '\0') {
    (this->PostProcessSettings).bOverride_MotionBlurPerObjectSize = '\x01';
    (this->PostProcessSettings).MotionBlurPerObjectSize =
         (param_1->PostProcessSettings).MotionBlurPerObjectSize;
  }
  if ((param_1->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality != '\0') {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality = '\x01';
    (this->PostProcessSettings).ScreenSpaceReflectionQuality =
         (param_1->PostProcessSettings).ScreenSpaceReflectionQuality;
  }
  if ((param_1->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity != '\0') {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity = '\x01';
    (this->PostProcessSettings).ScreenSpaceReflectionIntensity =
         (param_1->PostProcessSettings).ScreenSpaceReflectionIntensity;
  }
  if ((bool)(param_1->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness = '\x01';
    (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness =
         (param_1->PostProcessSettings).ScreenSpaceReflectionMaxRoughness;
  }
  if ((param_1->PostProcessSettings).bOverride_TranslucencyType != 0) {
    (this->PostProcessSettings).bOverride_TranslucencyType = 1;
    (this->PostProcessSettings).TranslucencyType = (param_1->PostProcessSettings).TranslucencyType;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxRoughness =
         (param_1->PostProcessSettings).RayTracingTranslucencyMaxRoughness;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays = 1;
    (this->PostProcessSettings).RayTracingTranslucencyRefractionRays =
         (param_1->PostProcessSettings).RayTracingTranslucencyRefractionRays;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingTranslucencySamplesPerPixel =
         (param_1->PostProcessSettings).RayTracingTranslucencySamplesPerPixel;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyShadows != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows = 1;
    (this->PostProcessSettings).RayTracingTranslucencyShadows =
         (param_1->PostProcessSettings).RayTracingTranslucencyShadows;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction = 1;
    uVar2 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 =
         ((this->PostProcessSettings).RayTracingTranslucencyRefraction ^
         (param_1->PostProcessSettings).RayTracingTranslucencyRefraction) & 1 ^ uVar2;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents =
         (param_1->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents =
         (param_1->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction = 1;
    bVar3 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 =
         (bVar3 ^ (param_1->PostProcessSettings).field_0x735) & 2 ^ bVar3;
  }
  if ((param_1->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod != 0) {
    (this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod = 1;
    (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value =
         (param_1->PostProcessSettings).DynamicGlobalIlluminationMethod.Value;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenSurfaceCacheResolution != 0) {
    (this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution = '\x01';
    (this->PostProcessSettings).LumenSurfaceCacheResolution =
         (param_1->PostProcessSettings).LumenSurfaceCacheResolution;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenSceneLightingQuality != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingQuality = 1;
    (this->PostProcessSettings).LumenSceneLightingQuality =
         (param_1->PostProcessSettings).LumenSceneLightingQuality;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenSceneDetail != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneDetail = 1;
    (this->PostProcessSettings).LumenSceneDetail = (param_1->PostProcessSettings).LumenSceneDetail;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenSceneViewDistance != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneViewDistance = 1;
    (this->PostProcessSettings).LumenSceneViewDistance =
         (param_1->PostProcessSettings).LumenSceneViewDistance;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenSceneLightingUpdateSpeed =
         (param_1->PostProcessSettings).LumenSceneLightingUpdateSpeed;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenFinalGatherQuality != 0) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherQuality = 1;
    (this->PostProcessSettings).LumenFinalGatherQuality =
         (param_1->PostProcessSettings).LumenFinalGatherQuality;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed != 0) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed =
         (param_1->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces != 0) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces = 1;
    uVar2 = (this->PostProcessSettings).field_0x410;
    (this->PostProcessSettings).field_0x410 =
         ((this->PostProcessSettings).LumenFinalGatherScreenTraces ^
         (param_1->PostProcessSettings).LumenFinalGatherScreenTraces) & 1 ^ uVar2;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenMaxTraceDistance != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxTraceDistance = 1;
    (this->PostProcessSettings).LumenMaxTraceDistance =
         (param_1->PostProcessSettings).LumenMaxTraceDistance;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenDiffuseColorBoost != 0) {
    (this->PostProcessSettings).bOverride_LumenDiffuseColorBoost = 1;
    (this->PostProcessSettings).LumenDiffuseColorBoost =
         (param_1->PostProcessSettings).LumenDiffuseColorBoost;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenSkylightLeaking != 0) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeaking = 1;
    (this->PostProcessSettings).LumenSkylightLeaking =
         (param_1->PostProcessSettings).LumenSkylightLeaking;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenSkylightLeakingTint != 0) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeakingTint = 1;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 + 8)
         = uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance != 0) {
    (this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance = 1;
    (this->PostProcessSettings).LumenFullSkylightLeakingDistance =
         (param_1->PostProcessSettings).LumenFullSkylightLeakingDistance;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenRayLightingMode != 0) {
    (this->PostProcessSettings).bOverride_LumenRayLightingMode = '\x01';
    (this->PostProcessSettings).LumenRayLightingMode =
         (param_1->PostProcessSettings).LumenRayLightingMode;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenReflectionsScreenTraces != '\0') {
    (this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces = '\x01';
    uVar2 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 =
         ((this->PostProcessSettings).LumenReflectionsScreenTraces ^
         (param_1->PostProcessSettings).LumenReflectionsScreenTraces) & 1 ^ uVar2;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections != '\0') {
    (this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections = '\x01';
    bVar3 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 =
         (bVar3 ^ (param_1->PostProcessSettings).field_0x440) & 2 ^ bVar3;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections = 1;
    (this->PostProcessSettings).LumenMaxRoughnessToTraceReflections =
         (param_1->PostProcessSettings).LumenMaxRoughnessToTraceReflections;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenMaxReflectionBounces != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxReflectionBounces = 1;
    (this->PostProcessSettings).LumenMaxReflectionBounces =
         (param_1->PostProcessSettings).LumenMaxReflectionBounces;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenMaxRefractionBounces != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxRefractionBounces = 1;
    (this->PostProcessSettings).LumenMaxRefractionBounces =
         (param_1->PostProcessSettings).LumenMaxRefractionBounces;
  }
  if ((param_1->PostProcessSettings).bOverride_ReflectionMethod != '\0') {
    (this->PostProcessSettings).bOverride_ReflectionMethod = '\x01';
    (this->PostProcessSettings).ReflectionMethod.Value =
         (param_1->PostProcessSettings).ReflectionMethod.Value;
  }
  if ((param_1->PostProcessSettings).bOverride_LumenReflectionQuality != '\0') {
    (this->PostProcessSettings).bOverride_LumenReflectionQuality = '\x01';
    (this->PostProcessSettings).LumenReflectionQuality =
         (param_1->PostProcessSettings).LumenReflectionQuality;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingAO != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAO = 1;
    uVar4 = *(undefined4 *)&(this->PostProcessSettings).field_0x638;
    *(uint *)&(this->PostProcessSettings).field_0x638 =
         (ZPULL(uVar4,0,1) ^ (param_1->PostProcessSettings).RayTracingAO) & 1 ^ uVar4;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingAOSamplesPerPixel =
         (param_1->PostProcessSettings).RayTracingAOSamplesPerPixel;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingAOIntensity != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAOIntensity = 1;
    (this->PostProcessSettings).RayTracingAOIntensity =
         (param_1->PostProcessSettings).RayTracingAOIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_RayTracingAORadius != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAORadius = 1;
    (this->PostProcessSettings).RayTracingAORadius =
         (param_1->PostProcessSettings).RayTracingAORadius;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingMaxBounces != 0) {
    (this->PostProcessSettings).bOverride_PathTracingMaxBounces = 1;
    (this->PostProcessSettings).PathTracingMaxBounces =
         (param_1->PostProcessSettings).PathTracingMaxBounces;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingSamplesPerPixel != 0) {
    (this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel = 1;
    (this->PostProcessSettings).PathTracingSamplesPerPixel =
         (param_1->PostProcessSettings).PathTracingSamplesPerPixel;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingMaxPathIntensity != 0) {
    (this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity = 1;
    (this->PostProcessSettings).PathTracingMaxPathIntensity =
         (param_1->PostProcessSettings).PathTracingMaxPathIntensity;
  }
  puVar15 = &(this->PostProcessSettings).field_0x744;
  puVar13 = &(param_1->PostProcessSettings).field_0x744;
  if ((param_1->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials = 1;
    *(uint *)puVar15 =
         *(uint *)puVar15 ^
         ((this->PostProcessSettings).PathTracingEnableEmissiveMaterials ^
         (param_1->PostProcessSettings).PathTracingEnableEmissiveMaterials) & 1;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF = 1;
    *(uint *)puVar15 = *(uint *)puVar15 ^ (*(uint *)puVar15 ^ *(uint *)puVar13) & 2;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere = 1;
    *(uint *)puVar15 = *(uint *)puVar15 ^ (*(uint *)puVar15 ^ *(uint *)puVar13) & 4;
  }
  puVar17 = &(this->PostProcessSettings).field_0x744;
  puVar13 = &(param_1->PostProcessSettings).field_0x744;
  if ((param_1->PostProcessSettings).bOverride_PathTracingEnableDenoiser != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableDenoiser = 1;
    *(uint *)puVar17 = (*(uint *)puVar15 ^ *(uint *)puVar13) & 8 ^ *(uint *)puVar15;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingIncludeEmissive != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeEmissive = 1;
    *(uint *)puVar17 = *(uint *)puVar17 ^ (*(uint *)puVar17 ^ *(uint *)puVar13) & 0x10;
  }
  puVar18 = &(param_1->PostProcessSettings).field_0x744;
  puVar13 = &(this->PostProcessSettings).field_0x744;
  if ((param_1->PostProcessSettings).bOverride_PathTracingIncludeDiffuse != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse = 1;
    *(uint *)puVar13 = (*(uint *)puVar17 ^ *(uint *)puVar18) & 0x20 ^ *(uint *)puVar17;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse = 1;
    *(uint *)puVar13 = *(uint *)puVar13 ^ (*(uint *)puVar13 ^ *(uint *)puVar18) & 0x40;
  }
  puVar12 = &(param_1->PostProcessSettings).field_0x744;
  puVar15 = &(this->PostProcessSettings).field_0x744;
  if ((param_1->PostProcessSettings).bOverride_PathTracingIncludeSpecular != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeSpecular = 1;
    *(uint *)puVar15 = (*(uint *)puVar13 ^ *(uint *)puVar12) & 0x80 ^ *(uint *)puVar13;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular = 1;
    *(uint *)puVar15 = *(uint *)puVar15 ^ (*(uint *)puVar15 ^ *(uint *)puVar12) & 0x100;
  }
  puVar14 = &(param_1->PostProcessSettings).field_0x744;
  puVar12 = &(this->PostProcessSettings).field_0x744;
  if ((param_1->PostProcessSettings).bOverride_PathTracingIncludeVolume != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeVolume = 1;
    *(uint *)puVar12 = (*(uint *)puVar15 ^ *(uint *)puVar14) & 0x200 ^ *(uint *)puVar15;
  }
  if ((param_1->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume = 1;
    *(uint *)puVar12 = *(uint *)puVar12 ^ (*(uint *)puVar12 ^ *(uint *)puVar14) & 0x400;
  }
  if ((param_1->PostProcessSettings).bOverride_DepthOfFieldBladeCount != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldBladeCount = '\x01';
    (this->PostProcessSettings).DepthOfFieldBladeCount =
         (param_1->PostProcessSettings).DepthOfFieldBladeCount;
  }
  pUVar5 = (param_1->PostProcessSettings).AmbientCubemap.field0_0x0.DebugPtr;
  if (pUVar5 != (UTextureCube *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->PostProcessSettings).AmbientCubemap.field0_0x0 =
         (param_1->PostProcessSettings).AmbientCubemap.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorGradingIntensity != '\0') {
    (this->PostProcessSettings).bOverride_ColorGradingIntensity = '\x01';
    (this->PostProcessSettings).ColorGradingIntensity =
         (param_1->PostProcessSettings).ColorGradingIntensity;
  }
  if ((param_1->PostProcessSettings).bOverride_ColorGradingLUT != '\0') {
    (this->PostProcessSettings).bOverride_ColorGradingLUT = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (param_1->PostProcessSettings).ColorGradingLUT.field0_0x0.DebugPtr,
       pUVar6 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->PostProcessSettings).ColorGradingLUT.field0_0x0 =
         (param_1->PostProcessSettings).ColorGradingLUT.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomDirtMask != '\0') {
    (this->PostProcessSettings).bOverride_BloomDirtMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (param_1->PostProcessSettings).BloomDirtMask.field0_0x0.DebugPtr,
       pUVar6 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->PostProcessSettings).BloomDirtMask.field0_0x0 =
         (param_1->PostProcessSettings).BloomDirtMask.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomMethod != 0) {
    (this->PostProcessSettings).bOverride_BloomMethod = '\x01';
    (this->PostProcessSettings).BloomMethod.Value = (param_1->PostProcessSettings).BloomMethod.Value
    ;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionTexture != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_1->PostProcessSettings).BloomConvolutionTexture.field0_0x0.DebugPtr,
       pUVar7 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->PostProcessSettings).BloomConvolutionTexture.field0_0x0 =
         (param_1->PostProcessSettings).BloomConvolutionTexture.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_FilmGrainTexture != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_1->PostProcessSettings).FilmGrainTexture.field0_0x0.DebugPtr,
       pUVar7 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->PostProcessSettings).FilmGrainTexture.field0_0x0 =
         (param_1->PostProcessSettings).FilmGrainTexture.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_BloomConvolutionBufferScale != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionBufferScale = '\x01';
    (this->PostProcessSettings).BloomConvolutionBufferScale =
         (param_1->PostProcessSettings).BloomConvolutionBufferScale;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureBiasCurve != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureBiasCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 = (param_1->PostProcessSettings).AutoExposureBiasCurve.field0_0x0.DebugPtr,
       pUVar8 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->PostProcessSettings).AutoExposureBiasCurve.field0_0x0 =
         (param_1->PostProcessSettings).AutoExposureBiasCurve.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureMeterMask != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureMeterMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (param_1->PostProcessSettings).AutoExposureMeterMask.field0_0x0.DebugPtr,
       pUVar6 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->PostProcessSettings).AutoExposureMeterMask.field0_0x0 =
         (param_1->PostProcessSettings).AutoExposureMeterMask.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 = (param_1->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0.
                 DebugPtr, pUVar8 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0 =
         (param_1->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 = (param_1->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0.DebugPtr
       , pUVar8 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0 =
         (param_1->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_LensFlareBokehShape != 0) {
    (this->PostProcessSettings).bOverride_LensFlareBokehShape = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (param_1->PostProcessSettings).LensFlareBokehShape.field0_0x0.DebugPtr,
       pUVar6 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->PostProcessSettings).LensFlareBokehShape.field0_0x0 =
         (param_1->PostProcessSettings).LensFlareBokehShape.field0_0x0;
  }
  if ((param_1->PostProcessSettings).bOverride_LensFlareTints != '\0') {
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[0].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[0].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[0].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[0].field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[1].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[1].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[1].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[1].field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[2].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[2].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[2].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[2].field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[3].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[3].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[3].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[3].field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[4].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[4].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[4].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[4].field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[5].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[5].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[5].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[5].field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[6].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[6].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[6].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[6].field0_0x0 + 8) =
         uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(param_1->PostProcessSettings).LensFlareTints[7].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[7].field0_0x0 =
         *(undefined8 *)&(param_1->PostProcessSettings).LensFlareTints[7].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[7].field0_0x0 + 8) =
         uVar10;
  }
  if ((param_1->PostProcessSettings).bOverride_MobileHQGaussian != '\0') {
    puVar15 = &(this->PostProcessSettings).field_0x34;
    *puVar15 = *puVar15 ^
               ((this->PostProcessSettings).bMobileHQGaussian ^
               (param_1->PostProcessSettings).bMobileHQGaussian) & 1;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureMethod != 0) {
    (this->PostProcessSettings).bOverride_AutoExposureMethod = '\x01';
    (this->PostProcessSettings).AutoExposureMethod.Value =
         (param_1->PostProcessSettings).AutoExposureMethod.Value;
  }
  if ((param_1->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS = '\x01';
    uVar4 = *(undefined4 *)&(this->PostProcessSettings).field_0x60c;
    *(uint *)&(this->PostProcessSettings).field_0x60c =
         (ZPULL(uVar4,0,1) ^ (param_1->PostProcessSettings).AmbientOcclusionRadiusInWS) & 1 ^ uVar4;
  }
  if ((param_1->PostProcessSettings).bOverride_MotionBlurTargetFPS != 0) {
    (this->PostProcessSettings).bOverride_MotionBlurTargetFPS = '\x01';
    (this->PostProcessSettings).MotionBlurTargetFPS =
         (param_1->PostProcessSettings).MotionBlurTargetFPS;
  }
  if ((param_1->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
    uVar4 = *(undefined4 *)&(this->PostProcessSettings).field_0x4a0;
    *(uint *)&(this->PostProcessSettings).field_0x4a0 =
         (ZPULL(uVar4,0,1) ^ (param_1->PostProcessSettings).AutoExposureApplyPhysicalCameraExposure)
         & 1 ^ uVar4;
  }
  if ((param_1->PostProcessSettings).bOverride_UserFlags != '\0') {
    (this->PostProcessSettings).bOverride_UserFlags = '\x01';
    (this->PostProcessSettings).UserFlags = (param_1->PostProcessSettings).UserFlags;
  }
  this_00 = &(this->PostProcessSettings).WeightedBlendables;
  pFVar1 = &(param_1->PostProcessSettings).WeightedBlendables;
  if (((this->PostProcessSettings).WeightedBlendables.Array.ArrayNum < 1) &&
     ((param_1->PostProcessSettings).WeightedBlendables.Array.ArrayNum < 1)) {
    FWeightedBlendables::operator=(this_00,pFVar1);
    return;
  }
  FWeightedBlendables::operator=(this_00,pFVar1);
  return;
}

// OverrideChanged @ 14d5c42e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::OverrideChanged
          (FPostProcessSettingsCollection *this,FPostProcessSettings *param_1)

{
  FWeightedBlendables *this_00;
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  UTextureCube *pUVar4;
  UTexture *pUVar5;
  UTexture2D *pUVar6;
  UCurveFloat *pUVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  
  if (param_1->bOverride_TemperatureType != 0) {
    this.bOverride_TemperatureType = '\x01';
    (this->PostProcessSettings).TemperatureType.Value = (param_1->TemperatureType).Value;
  }
  if (param_1->bOverride_WhiteTemp != '\0') {
    this.bOverride_WhiteTemp = '\x01';
    (this->PostProcessSettings).WhiteTemp = param_1->WhiteTemp;
  }
  if (param_1->bOverride_WhiteTint != '\0') {
    this.bOverride_WhiteTint = '\x01';
    (this->PostProcessSettings).WhiteTint = param_1->WhiteTint;
  }
  if (param_1->bOverride_ColorSaturation != '\0') {
    this.bOverride_ColorSaturation = '\x01';
    dVar8 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.X =
         (param_1->ColorSaturation).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorSaturation).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.Z =
         (param_1->ColorSaturation).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturation.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorContrast != '\0') {
    this.bOverride_ColorContrast = '\x01';
    dVar8 = (param_1->ColorContrast).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.X =
         (param_1->ColorContrast).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorContrast).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.Z =
         (param_1->ColorContrast).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrast.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorGamma != '\0') {
    this.bOverride_ColorGamma = '\x01';
    dVar8 = (param_1->ColorGamma).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.X =
         (param_1->ColorGamma).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGamma).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.Z =
         (param_1->ColorGamma).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGamma.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorGain != '\0') {
    this.bOverride_ColorGain = '\x01';
    dVar8 = (param_1->ColorGain).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.X = (param_1->ColorGain).field0_0x0._s_0.X
    ;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGain).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.Z = (param_1->ColorGain).field0_0x0._s_0.Z
    ;
    (this->PostProcessSettings).ColorGain.field0_0x0._s_0.W = dVar8;
  }
  if ((bool)param_1->bOverride_ColorOffset) {
    this.bOverride_ColorOffset = '\x01';
    dVar8 = (param_1->ColorOffset).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.X =
         (param_1->ColorOffset).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorOffset).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.Z =
         (param_1->ColorOffset).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffset.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorSaturationShadows != 0) {
    (this->PostProcessSettings).bOverride_ColorSaturationShadows = '\x01';
    dVar8 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.X =
         (param_1->ColorSaturationShadows).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.Z =
         (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationShadows.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorContrastShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorContrastShadows = '\x01';
    dVar8 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.X =
         (param_1->ColorContrastShadows).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.Z =
         (param_1->ColorContrastShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastShadows.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorGammaShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorGammaShadows = '\x01';
    dVar8 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.X =
         (param_1->ColorGammaShadows).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.Z =
         (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaShadows.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorGainShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorGainShadows = '\x01';
    dVar8 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.X =
         (param_1->ColorGainShadows).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.Z =
         (param_1->ColorGainShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGainShadows.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorOffsetShadows != '\0') {
    (this->PostProcessSettings).bOverride_ColorOffsetShadows = '\x01';
    dVar8 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.X =
         (param_1->ColorOffsetShadows).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.Z =
         (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetShadows.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorSaturationMidtones != '\0') {
    (this->PostProcessSettings).bOverride_ColorSaturationMidtones = '\x01';
    dVar8 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.X =
         (param_1->ColorSaturationMidtones).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.Z =
         (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationMidtones.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorContrastMidtones != '\0') {
    (this->PostProcessSettings).bOverride_ColorContrastMidtones = '\x01';
    dVar8 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.X =
         (param_1->ColorContrastMidtones).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.Z =
         (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastMidtones.field0_0x0._s_0.W = dVar8;
  }
  if ((bool)param_1->bOverride_ColorGammaMidtones) {
    (this->PostProcessSettings).bOverride_ColorGammaMidtones = '\x01';
    dVar8 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.X =
         (param_1->ColorGammaMidtones).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.Z =
         (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaMidtones.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorGainMidtones != 0) {
    (this->PostProcessSettings).bOverride_ColorGainMidtones = '\x01';
    dVar8 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.X =
         (param_1->ColorGainMidtones).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.Z =
         (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGainMidtones.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorOffsetMidtones != '\0') {
    (this->PostProcessSettings).bOverride_ColorOffsetMidtones = '\x01';
    dVar8 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.X =
         (param_1->ColorOffsetMidtones).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.Z =
         (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetMidtones.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorSaturationHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorSaturationHighlights = '\x01';
    dVar8 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.X =
         (param_1->ColorSaturationHighlights).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.Z =
         (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorSaturationHighlights.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorContrastHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorContrastHighlights = '\x01';
    dVar8 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.X =
         (param_1->ColorContrastHighlights).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.Z =
         (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorContrastHighlights.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorGammaHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorGammaHighlights = '\x01';
    dVar8 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.X =
         (param_1->ColorGammaHighlights).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.Z =
         (param_1->ColorGammaHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGammaHighlights.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorGainHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorGainHighlights = '\x01';
    dVar8 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.X =
         (param_1->ColorGainHighlights).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.Z =
         (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorGainHighlights.field0_0x0._s_0.W = dVar8;
  }
  if (param_1->bOverride_ColorOffsetHighlights != '\0') {
    (this->PostProcessSettings).bOverride_ColorOffsetHighlights = '\x01';
    dVar8 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.X =
         (param_1->ColorOffsetHighlights).field0_0x0._s_0.X;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.Z =
         (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
    (this->PostProcessSettings).ColorOffsetHighlights.field0_0x0._s_0.W = dVar8;
  }
  if ((bool)param_1->bOverride_ColorCorrectionShadowsMax) {
    (this->PostProcessSettings).bOverride_ColorCorrectionShadowsMax = '\x01';
    (this->PostProcessSettings).ColorCorrectionShadowsMax = param_1->ColorCorrectionShadowsMax;
  }
  if (param_1->bOverride_ColorCorrectionHighlightsMin != 0) {
    (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMin = '\x01';
    (this->PostProcessSettings).ColorCorrectionHighlightsMin = param_1->ColorCorrectionHighlightsMin
    ;
  }
  if (param_1->bOverride_ColorCorrectionHighlightsMax != '\0') {
    (this->PostProcessSettings).bOverride_ColorCorrectionHighlightsMax = '\x01';
    (this->PostProcessSettings).ColorCorrectionHighlightsMax = param_1->ColorCorrectionHighlightsMax
    ;
  }
  if (param_1->bOverride_BlueCorrection != '\0') {
    (this->PostProcessSettings).bOverride_BlueCorrection = '\x01';
    (this->PostProcessSettings).BlueCorrection = param_1->BlueCorrection;
  }
  if (param_1->bOverride_ExpandGamut != '\0') {
    (this->PostProcessSettings).bOverride_ExpandGamut = '\x01';
    (this->PostProcessSettings).ExpandGamut = param_1->ExpandGamut;
  }
  if (param_1->bOverride_ToneCurveAmount != '\0') {
    (this->PostProcessSettings).bOverride_ToneCurveAmount = '\x01';
    (this->PostProcessSettings).ToneCurveAmount = param_1->ToneCurveAmount;
  }
  if (param_1->bOverride_FilmSlope != '\0') {
    (this->PostProcessSettings).bOverride_FilmSlope = '\x01';
    (this->PostProcessSettings).FilmSlope = param_1->FilmSlope;
  }
  if (param_1->bOverride_FilmToe != '\0') {
    (this->PostProcessSettings).bOverride_FilmToe = '\x01';
    (this->PostProcessSettings).FilmToe = param_1->FilmToe;
  }
  if ((bool)param_1->bOverride_FilmShoulder) {
    (this->PostProcessSettings).bOverride_FilmShoulder = '\x01';
    (this->PostProcessSettings).FilmShoulder = param_1->FilmShoulder;
  }
  if (param_1->bOverride_FilmBlackClip != 0) {
    (this->PostProcessSettings).bOverride_FilmBlackClip = '\x01';
    (this->PostProcessSettings).FilmBlackClip = param_1->FilmBlackClip;
  }
  if (param_1->bOverride_FilmWhiteClip != '\0') {
    (this->PostProcessSettings).bOverride_FilmWhiteClip = '\x01';
    (this->PostProcessSettings).FilmWhiteClip = param_1->FilmWhiteClip;
  }
  if (param_1->bOverride_SceneColorTint != '\0') {
    (this->PostProcessSettings).bOverride_SceneColorTint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->SceneColorTint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).SceneColorTint.field0_0x0 =
         *(undefined8 *)&(param_1->SceneColorTint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).SceneColorTint.field0_0x0 + 8) = uVar9;
  }
  if (param_1->bOverride_SceneFringeIntensity != '\0') {
    (this->PostProcessSettings).bOverride_SceneFringeIntensity = '\x01';
    (this->PostProcessSettings).SceneFringeIntensity = param_1->SceneFringeIntensity;
  }
  if (param_1->bOverride_ChromaticAberrationStartOffset != '\0') {
    (this->PostProcessSettings).bOverride_ChromaticAberrationStartOffset = '\x01';
    (this->PostProcessSettings).ChromaticAberrationStartOffset =
         param_1->ChromaticAberrationStartOffset;
  }
  if (param_1->bOverride_BloomIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomIntensity = '\x01';
    (this->PostProcessSettings).BloomIntensity = param_1->BloomIntensity;
  }
  if (param_1->bOverride_BloomGaussianIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomGaussianIntensity = '\x01';
    (this->PostProcessSettings).BloomGaussianIntensity = param_1->BloomGaussianIntensity;
  }
  if (param_1->bOverride_BloomThreshold != '\0') {
    (this->PostProcessSettings).bOverride_BloomThreshold = '\x01';
    (this->PostProcessSettings).BloomThreshold = param_1->BloomThreshold;
  }
  if (param_1->bOverride_Bloom1Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom1Tint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom1Tint.field0_0x0 =
         *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom1Tint.field0_0x0 + 8) = uVar9;
  }
  if (param_1->bOverride_BloomSizeScale != 0) {
    (this->PostProcessSettings).bOverride_BloomSizeScale = '\x01';
    (this->PostProcessSettings).BloomSizeScale = param_1->BloomSizeScale;
  }
  if (param_1->bOverride_Bloom1Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom1Size = '\x01';
    (this->PostProcessSettings).Bloom1Size = param_1->Bloom1Size;
  }
  if ((bool)param_1->bOverride_Bloom2Tint) {
    (this->PostProcessSettings).bOverride_Bloom2Tint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom2Tint.field0_0x0 =
         *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom2Tint.field0_0x0 + 8) = uVar9;
  }
  if (param_1->bOverride_Bloom2Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom2Size = '\x01';
    (this->PostProcessSettings).Bloom2Size = param_1->Bloom2Size;
  }
  if (param_1->bOverride_Bloom3Tint != 0) {
    (this->PostProcessSettings).bOverride_Bloom3Tint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom3Tint.field0_0x0 =
         *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom3Tint.field0_0x0 + 8) = uVar9;
  }
  if (param_1->bOverride_Bloom3Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom3Size = '\x01';
    (this->PostProcessSettings).Bloom3Size = param_1->Bloom3Size;
  }
  if (param_1->bOverride_Bloom4Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom4Tint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom4Tint.field0_0x0 =
         *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom4Tint.field0_0x0 + 8) = uVar9;
  }
  if (param_1->bOverride_Bloom4Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom4Size = '\x01';
    (this->PostProcessSettings).Bloom4Size = param_1->Bloom4Size;
  }
  if (param_1->bOverride_Bloom5Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom5Tint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom5Tint.field0_0x0 =
         *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom5Tint.field0_0x0 + 8) = uVar9;
  }
  if (param_1->bOverride_Bloom5Size != '\0') {
    (this->PostProcessSettings).bOverride_Bloom5Size = '\x01';
    (this->PostProcessSettings).Bloom5Size = param_1->Bloom5Size;
  }
  if (param_1->bOverride_Bloom6Tint != '\0') {
    (this->PostProcessSettings).bOverride_Bloom6Tint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).Bloom6Tint.field0_0x0 =
         *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).Bloom6Tint.field0_0x0 + 8) = uVar9;
  }
  if ((bool)param_1->bOverride_Bloom6Size) {
    (this->PostProcessSettings).bOverride_Bloom6Size = '\x01';
    (this->PostProcessSettings).Bloom6Size = param_1->Bloom6Size;
  }
  if (param_1->bOverride_BloomDirtMaskIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomDirtMaskIntensity = '\x01';
    (this->PostProcessSettings).BloomDirtMaskIntensity = param_1->BloomDirtMaskIntensity;
  }
  if (param_1->bOverride_BloomDirtMaskTint != '\0') {
    (this->PostProcessSettings).bOverride_BloomDirtMaskTint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).BloomDirtMaskTint.field0_0x0 =
         *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).BloomDirtMaskTint.field0_0x0 + 8) = uVar9
    ;
  }
  if (param_1->bOverride_BloomConvolutionIntensity != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionIntensity = '\x01';
    (this->PostProcessSettings).BloomConvolutionIntensity = param_1->BloomConvolutionIntensity;
  }
  if (param_1->bOverride_BloomConvolutionScatterDispersion != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionScatterDispersion = '\x01';
    (this->PostProcessSettings).BloomConvolutionScatterDispersion =
         param_1->BloomConvolutionScatterDispersion;
  }
  if (param_1->bOverride_BloomConvolutionSize != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionSize = '\x01';
    (this->PostProcessSettings).BloomConvolutionSize = param_1->BloomConvolutionSize;
  }
  if (param_1->bOverride_BloomConvolutionCenterUV != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionCenterUV = '\x01';
    dVar8 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.X =
         (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X;
    (this->PostProcessSettings).BloomConvolutionCenterUV.field0_0x0._s_0.Y = dVar8;
  }
  if ((bool)param_1->bOverride_BloomConvolutionPreFilterMin) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMin = '\x01';
    (this->PostProcessSettings).BloomConvolutionPreFilterMin = param_1->BloomConvolutionPreFilterMin
    ;
  }
  if (param_1->bOverride_BloomConvolutionPreFilterMax != 0) {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMax = '\x01';
    (this->PostProcessSettings).BloomConvolutionPreFilterMax = param_1->BloomConvolutionPreFilterMax
    ;
  }
  if (param_1->bOverride_BloomConvolutionPreFilterMult != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionPreFilterMult = '\x01';
    (this->PostProcessSettings).BloomConvolutionPreFilterMult =
         param_1->BloomConvolutionPreFilterMult;
  }
  if ((bool)param_1->bOverride_AmbientCubemapIntensity) {
    (this->PostProcessSettings).bOverride_AmbientCubemapIntensity = '\x01';
    (this->PostProcessSettings).AmbientCubemapIntensity = param_1->AmbientCubemapIntensity;
  }
  if (param_1->bOverride_AmbientCubemapTint != '\0') {
    (this->PostProcessSettings).bOverride_AmbientCubemapTint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->AmbientCubemapTint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).AmbientCubemapTint.field0_0x0 =
         *(undefined8 *)&(param_1->AmbientCubemapTint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).AmbientCubemapTint.field0_0x0 + 8) =
         uVar9;
  }
  if (param_1->bOverride_CameraShutterSpeed != '\0') {
    (this->PostProcessSettings).bOverride_CameraShutterSpeed = '\x01';
    (this->PostProcessSettings).CameraShutterSpeed = param_1->CameraShutterSpeed;
  }
  if ((bool)param_1->bOverride_CameraISO) {
    (this->PostProcessSettings).bOverride_CameraISO = '\x01';
    (this->PostProcessSettings).CameraISO = param_1->CameraISO;
  }
  if (param_1->bOverride_AutoExposureLowPercent != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureLowPercent = '\x01';
    (this->PostProcessSettings).AutoExposureLowPercent = param_1->AutoExposureLowPercent;
  }
  if (param_1->bOverride_AutoExposureHighPercent != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureHighPercent = '\x01';
    (this->PostProcessSettings).AutoExposureHighPercent = param_1->AutoExposureHighPercent;
  }
  if (param_1->bOverride_AutoExposureMinBrightness != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureMinBrightness = '\x01';
    (this->PostProcessSettings).AutoExposureMinBrightness = param_1->AutoExposureMinBrightness;
  }
  if (param_1->bOverride_AutoExposureMaxBrightness != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureMaxBrightness = '\x01';
    (this->PostProcessSettings).AutoExposureMaxBrightness = param_1->AutoExposureMaxBrightness;
  }
  if (param_1->bOverride_AutoExposureSpeedUp != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureSpeedUp = '\x01';
    (this->PostProcessSettings).AutoExposureSpeedUp = param_1->AutoExposureSpeedUp;
  }
  if ((bool)param_1->bOverride_AutoExposureSpeedDown) {
    (this->PostProcessSettings).bOverride_AutoExposureSpeedDown = '\x01';
    (this->PostProcessSettings).AutoExposureSpeedDown = param_1->AutoExposureSpeedDown;
  }
  if (param_1->bOverride_AutoExposureBias != 0) {
    (this->PostProcessSettings).bOverride_AutoExposureBias = '\x01';
    (this->PostProcessSettings).AutoExposureBias = param_1->AutoExposureBias;
  }
  if (param_1->bOverride_HistogramLogMin != '\0') {
    (this->PostProcessSettings).bOverride_HistogramLogMin = '\x01';
    (this->PostProcessSettings).HistogramLogMin = param_1->HistogramLogMin;
  }
  if (param_1->bOverride_HistogramLogMax != '\0') {
    (this->PostProcessSettings).bOverride_HistogramLogMax = '\x01';
    (this->PostProcessSettings).HistogramLogMax = param_1->HistogramLogMax;
  }
  if (param_1->bOverride_LocalExposureMethod != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureMethod = '\x01';
    (this->PostProcessSettings).LocalExposureMethod = param_1->LocalExposureMethod;
  }
  if ((bool)param_1->bOverride_LocalExposureContrastScale_DEPRECATED) {
    (this->PostProcessSettings).bOverride_LocalExposureContrastScale_DEPRECATED = '\x01';
    (this->PostProcessSettings).LocalExposureContrastScale_DEPRECATED =
         param_1->LocalExposureContrastScale_DEPRECATED;
  }
  if (param_1->bOverride_LocalExposureHighlightContrastScale != 0) {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastScale = '\x01';
    (this->PostProcessSettings).LocalExposureHighlightContrastScale =
         param_1->LocalExposureHighlightContrastScale;
  }
  if (param_1->bOverride_LocalExposureShadowContrastScale != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowContrastScale = '\x01';
    (this->PostProcessSettings).LocalExposureShadowContrastScale =
         param_1->LocalExposureShadowContrastScale;
  }
  if (param_1->bOverride_LocalExposureHighlightThreshold != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightThreshold = '\x01';
    (this->PostProcessSettings).LocalExposureHighlightThreshold =
         param_1->LocalExposureHighlightThreshold;
  }
  if (param_1->bOverride_LocalExposureShadowThreshold != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowThreshold = '\x01';
    (this->PostProcessSettings).LocalExposureShadowThreshold = param_1->LocalExposureShadowThreshold
    ;
  }
  if (param_1->bOverride_LocalExposureDetailStrength != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureDetailStrength = '\x01';
    (this->PostProcessSettings).LocalExposureDetailStrength = param_1->LocalExposureDetailStrength;
  }
  if ((bool)param_1->bOverride_LocalExposureBlurredLuminanceBlend) {
    (this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceBlend = '\x01';
    (this->PostProcessSettings).LocalExposureBlurredLuminanceBlend =
         param_1->LocalExposureBlurredLuminanceBlend;
  }
  if (param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0) {
    (this->PostProcessSettings).bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\x01';
    (this->PostProcessSettings).LocalExposureBlurredLuminanceKernelSizePercent =
         param_1->LocalExposureBlurredLuminanceKernelSizePercent;
  }
  if (param_1->bOverride_LocalExposureHighlightThresholdStrength != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightThresholdStrength = '\x01';
    (this->PostProcessSettings).LocalExposureHighlightThresholdStrength =
         param_1->LocalExposureHighlightThresholdStrength;
  }
  if (param_1->bOverride_LocalExposureShadowThresholdStrength != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowThresholdStrength = '\x01';
    (this->PostProcessSettings).LocalExposureShadowThresholdStrength =
         param_1->LocalExposureShadowThresholdStrength;
  }
  if (param_1->bOverride_LocalExposureMiddleGreyBias != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureMiddleGreyBias = '\x01';
    (this->PostProcessSettings).LocalExposureMiddleGreyBias = param_1->LocalExposureMiddleGreyBias;
  }
  if (param_1->bOverride_LensFlareIntensity != '\0') {
    (this->PostProcessSettings).bOverride_LensFlareIntensity = '\x01';
    (this->PostProcessSettings).LensFlareIntensity = param_1->LensFlareIntensity;
  }
  if (param_1->bOverride_LensFlareTint != '\0') {
    (this->PostProcessSettings).bOverride_LensFlareTint = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->LensFlareTint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTint.field0_0x0 =
         *(undefined8 *)&(param_1->LensFlareTint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTint.field0_0x0 + 8) = uVar9;
  }
  if ((bool)param_1->bOverride_LensFlareBokehSize) {
    (this->PostProcessSettings).bOverride_LensFlareBokehSize = '\x01';
    (this->PostProcessSettings).LensFlareBokehSize = param_1->LensFlareBokehSize;
  }
  if (param_1->bOverride_LensFlareThreshold != '\0') {
    (this->PostProcessSettings).bOverride_LensFlareThreshold = '\x01';
    (this->PostProcessSettings).LensFlareThreshold = param_1->LensFlareThreshold;
  }
  if (param_1->bOverride_VignetteIntensity != '\0') {
    (this->PostProcessSettings).bOverride_VignetteIntensity = '\x01';
    (this->PostProcessSettings).VignetteIntensity = param_1->VignetteIntensity;
  }
  if (param_1->bOverride_Sharpen != '\0') {
    (this->PostProcessSettings).bOverride_Sharpen = '\x01';
    (this->PostProcessSettings).Sharpen = param_1->Sharpen;
  }
  if (param_1->bOverride_FilmGrainIntensity != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainIntensity = '\x01';
    (this->PostProcessSettings).FilmGrainIntensity = param_1->FilmGrainIntensity;
  }
  if ((bool)param_1->bOverride_FilmGrainIntensityShadows) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityShadows = '\x01';
    (this->PostProcessSettings).FilmGrainIntensityShadows = param_1->FilmGrainIntensityShadows;
  }
  if (param_1->bOverride_FilmGrainIntensityMidtones != 0) {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityMidtones = '\x01';
    (this->PostProcessSettings).FilmGrainIntensityMidtones = param_1->FilmGrainIntensityMidtones;
  }
  if (param_1->bOverride_FilmGrainIntensityHighlights != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainIntensityHighlights = '\x01';
    (this->PostProcessSettings).FilmGrainIntensityHighlights = param_1->FilmGrainIntensityHighlights
    ;
  }
  if (param_1->bOverride_FilmGrainShadowsMax != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainShadowsMax = '\x01';
    (this->PostProcessSettings).FilmGrainShadowsMax = param_1->FilmGrainShadowsMax;
  }
  if (param_1->bOverride_FilmGrainHighlightsMin != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMin = '\x01';
    (this->PostProcessSettings).FilmGrainHighlightsMin = param_1->FilmGrainHighlightsMin;
  }
  if (param_1->bOverride_FilmGrainHighlightsMax != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainHighlightsMax = '\x01';
    (this->PostProcessSettings).FilmGrainHighlightsMax = param_1->FilmGrainHighlightsMax;
  }
  if (param_1->bOverride_FilmGrainTexelSize != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainTexelSize = '\x01';
    (this->PostProcessSettings).FilmGrainTexelSize = param_1->FilmGrainTexelSize;
  }
  if ((bool)param_1->bOverride_AmbientOcclusionIntensity) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionIntensity = '\x01';
    (this->PostProcessSettings).AmbientOcclusionIntensity = param_1->AmbientOcclusionIntensity;
  }
  if (param_1->bOverride_AmbientOcclusionStaticFraction != 0) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionStaticFraction = '\x01';
    (this->PostProcessSettings).AmbientOcclusionStaticFraction =
         param_1->AmbientOcclusionStaticFraction;
  }
  if (param_1->bOverride_AmbientOcclusionRadius != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadius = '\x01';
    (this->PostProcessSettings).AmbientOcclusionRadius = param_1->AmbientOcclusionRadius;
  }
  if (param_1->bOverride_AmbientOcclusionFadeDistance != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeDistance = '\x01';
    (this->PostProcessSettings).AmbientOcclusionFadeDistance = param_1->AmbientOcclusionFadeDistance
    ;
  }
  if (param_1->bOverride_AmbientOcclusionFadeRadius != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionFadeRadius = '\x01';
    (this->PostProcessSettings).AmbientOcclusionFadeRadius = param_1->AmbientOcclusionFadeRadius;
  }
  if (param_1->bOverride_AmbientOcclusionDistance_DEPRECATED != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionDistance_DEPRECATED = '\x01';
    (this->PostProcessSettings).AmbientOcclusionDistance_DEPRECATED =
         param_1->AmbientOcclusionDistance_DEPRECATED;
  }
  if (param_1->bOverride_AmbientOcclusionPower != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionPower = '\x01';
    (this->PostProcessSettings).AmbientOcclusionPower = param_1->AmbientOcclusionPower;
  }
  if ((bool)param_1->bOverride_AmbientOcclusionBias) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionBias = '\x01';
    (this->PostProcessSettings).AmbientOcclusionBias = param_1->AmbientOcclusionBias;
  }
  if (param_1->bOverride_AmbientOcclusionQuality != 0) {
    (this->PostProcessSettings).bOverride_AmbientOcclusionQuality = '\x01';
    (this->PostProcessSettings).AmbientOcclusionQuality = param_1->AmbientOcclusionQuality;
  }
  if (param_1->bOverride_AmbientOcclusionMipBlend != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipBlend = '\x01';
    (this->PostProcessSettings).AmbientOcclusionMipBlend = param_1->AmbientOcclusionMipBlend;
  }
  if (param_1->bOverride_AmbientOcclusionMipScale != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipScale = '\x01';
    (this->PostProcessSettings).AmbientOcclusionMipScale = param_1->AmbientOcclusionMipScale;
  }
  if (param_1->bOverride_AmbientOcclusionMipThreshold != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionMipThreshold = '\x01';
    (this->PostProcessSettings).AmbientOcclusionMipThreshold = param_1->AmbientOcclusionMipThreshold
    ;
  }
  if (param_1->bOverride_AmbientOcclusionTemporalBlendWeight != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionTemporalBlendWeight = '\x01';
    (this->PostProcessSettings).AmbientOcclusionTemporalBlendWeight =
         param_1->AmbientOcclusionTemporalBlendWeight;
  }
  if ((bool)param_1->bOverride_IndirectLightingColor) {
    (this->PostProcessSettings).bOverride_IndirectLightingColor = '\x01';
    uVar9 = *(undefined8 *)((longlong)&(param_1->IndirectLightingColor).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).IndirectLightingColor.field0_0x0 =
         *(undefined8 *)&(param_1->IndirectLightingColor).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).IndirectLightingColor.field0_0x0 + 8) =
         uVar9;
  }
  if (param_1->bOverride_IndirectLightingIntensity != 0) {
    (this->PostProcessSettings).bOverride_IndirectLightingIntensity = '\x01';
    (this->PostProcessSettings).IndirectLightingIntensity = param_1->IndirectLightingIntensity;
  }
  if (param_1->bOverride_DepthOfFieldFocalDistance != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFocalDistance = '\x01';
    (this->PostProcessSettings).DepthOfFieldFocalDistance = param_1->DepthOfFieldFocalDistance;
  }
  if (param_1->bOverride_DepthOfFieldFstop != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFstop = '\x01';
    (this->PostProcessSettings).DepthOfFieldFstop = param_1->DepthOfFieldFstop;
  }
  if (param_1->bOverride_DepthOfFieldMinFstop != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldMinFstop = '\x01';
    (this->PostProcessSettings).DepthOfFieldMinFstop = param_1->DepthOfFieldMinFstop;
  }
  if ((bool)param_1->bOverride_DepthOfFieldSensorWidth) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSensorWidth = '\x01';
    (this->PostProcessSettings).DepthOfFieldSensorWidth = param_1->DepthOfFieldSensorWidth;
  }
  if (param_1->bOverride_DepthOfFieldSqueezeFactor != 0) {
    (this->PostProcessSettings).bOverride_DepthOfFieldSqueezeFactor = '\x01';
    (this->PostProcessSettings).DepthOfFieldSqueezeFactor = param_1->DepthOfFieldSqueezeFactor;
  }
  if (param_1->bOverride_DepthOfFieldDepthBlurRadius != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurRadius = '\x01';
    (this->PostProcessSettings).DepthOfFieldDepthBlurRadius = param_1->DepthOfFieldDepthBlurRadius;
  }
  if (param_1->bOverride_DepthOfFieldUseHairDepth != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldUseHairDepth = '\x01';
    uVar3 = *(undefined4 *)&(this->PostProcessSettings).field_0x66c;
    *(uint *)&(this->PostProcessSettings).field_0x66c =
         (ZPULL(uVar3,0,1) ^ param_1->DepthOfFieldUseHairDepth) & 1 ^ uVar3;
  }
  if (param_1->bOverride_DepthOfFieldDepthBlurAmount != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldDepthBlurAmount = '\x01';
    (this->PostProcessSettings).DepthOfFieldDepthBlurAmount = param_1->DepthOfFieldDepthBlurAmount;
  }
  if (param_1->bOverride_DepthOfFieldFocalRegion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFocalRegion = '\x01';
    (this->PostProcessSettings).DepthOfFieldFocalRegion = param_1->DepthOfFieldFocalRegion;
  }
  if (param_1->bOverride_DepthOfFieldNearTransitionRegion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearTransitionRegion = '\x01';
    (this->PostProcessSettings).DepthOfFieldNearTransitionRegion =
         param_1->DepthOfFieldNearTransitionRegion;
  }
  if (param_1->bOverride_DepthOfFieldFarTransitionRegion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarTransitionRegion = '\x01';
    (this->PostProcessSettings).DepthOfFieldFarTransitionRegion =
         param_1->DepthOfFieldFarTransitionRegion;
  }
  if ((bool)param_1->bOverride_DepthOfFieldScale) {
    (this->PostProcessSettings).bOverride_DepthOfFieldScale = '\x01';
    (this->PostProcessSettings).DepthOfFieldScale = param_1->DepthOfFieldScale;
  }
  if (param_1->bOverride_DepthOfFieldNearBlurSize != 0) {
    (this->PostProcessSettings).bOverride_DepthOfFieldNearBlurSize = '\x01';
    (this->PostProcessSettings).DepthOfFieldNearBlurSize = param_1->DepthOfFieldNearBlurSize;
  }
  if (param_1->bOverride_DepthOfFieldFarBlurSize != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldFarBlurSize = '\x01';
    (this->PostProcessSettings).DepthOfFieldFarBlurSize = param_1->DepthOfFieldFarBlurSize;
  }
  if (param_1->bOverride_DepthOfFieldOcclusion != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldOcclusion = '\x01';
    (this->PostProcessSettings).DepthOfFieldOcclusion = param_1->DepthOfFieldOcclusion;
  }
  if (param_1->bOverride_DepthOfFieldSkyFocusDistance != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldSkyFocusDistance = '\x01';
    (this->PostProcessSettings).DepthOfFieldSkyFocusDistance = param_1->DepthOfFieldSkyFocusDistance
    ;
  }
  if (param_1->bOverride_DepthOfFieldVignetteSize != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldVignetteSize = '\x01';
    (this->PostProcessSettings).DepthOfFieldVignetteSize = param_1->DepthOfFieldVignetteSize;
  }
  if ((bool)param_1->bOverride_DepthOfFieldAspectRatioScalar) {
    (this->PostProcessSettings).bOverride_DepthOfFieldAspectRatioScalar = '\x01';
    (this->PostProcessSettings).DepthOfFieldAspectRatioScalar =
         param_1->DepthOfFieldAspectRatioScalar;
  }
  if (param_1->bOverride_DepthOfFieldPetzvalBokeh != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokeh = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalBokeh = param_1->DepthOfFieldPetzvalBokeh;
  }
  if (param_1->bOverride_DepthOfFieldPetzvalBokehFalloff != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalBokehFalloff = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalBokehFalloff =
         param_1->DepthOfFieldPetzvalBokehFalloff;
  }
  if (param_1->bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxExtents = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxExtents.field0_0x0 =
         (param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0;
  }
  if (param_1->bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldPetzvalExclusionBoxRadius = '\x01';
    (this->PostProcessSettings).DepthOfFieldPetzvalExclusionBoxRadius =
         param_1->DepthOfFieldPetzvalExclusionBoxRadius;
  }
  if (param_1->bOverride_DepthOfFieldBarrelRadius != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelRadius = '\x01';
    (this->PostProcessSettings).DepthOfFieldBarrelRadius = param_1->DepthOfFieldBarrelRadius;
  }
  if (param_1->bOverride_DepthOfFieldBarrelLength != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldBarrelLength = '\x01';
    (this->PostProcessSettings).DepthOfFieldBarrelLength = param_1->DepthOfFieldBarrelLength;
  }
  if (param_1->bOverride_DepthOfFieldMatteBoxFlags != 0) {
    fVar10 = param_1->DepthOfFieldMatteBoxFlags[0].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[0].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Roll = fVar10;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[0].Length =
         param_1->DepthOfFieldMatteBoxFlags[0].Length;
    fVar10 = param_1->DepthOfFieldMatteBoxFlags[1].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[1].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Roll = fVar10;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[1].Length =
         param_1->DepthOfFieldMatteBoxFlags[1].Length;
    fVar10 = param_1->DepthOfFieldMatteBoxFlags[2].Roll;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Pitch =
         param_1->DepthOfFieldMatteBoxFlags[2].Pitch;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Roll = fVar10;
    (this->PostProcessSettings).DepthOfFieldMatteBoxFlags[2].Length =
         param_1->DepthOfFieldMatteBoxFlags[2].Length;
  }
  if (param_1->bOverride_MotionBlurAmount != '\0') {
    (this->PostProcessSettings).bOverride_MotionBlurAmount = '\x01';
    (this->PostProcessSettings).MotionBlurAmount = param_1->MotionBlurAmount;
  }
  if ((bool)param_1->bOverride_MotionBlurMax) {
    (this->PostProcessSettings).bOverride_MotionBlurMax = '\x01';
    (this->PostProcessSettings).MotionBlurMax = param_1->MotionBlurMax;
  }
  if (param_1->bOverride_MotionBlurPerObjectSize != '\0') {
    (this->PostProcessSettings).bOverride_MotionBlurPerObjectSize = '\x01';
    (this->PostProcessSettings).MotionBlurPerObjectSize = param_1->MotionBlurPerObjectSize;
  }
  if (param_1->bOverride_ScreenSpaceReflectionQuality != '\0') {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionQuality = '\x01';
    (this->PostProcessSettings).ScreenSpaceReflectionQuality = param_1->ScreenSpaceReflectionQuality
    ;
  }
  if (param_1->bOverride_ScreenSpaceReflectionIntensity != '\0') {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionIntensity = '\x01';
    (this->PostProcessSettings).ScreenSpaceReflectionIntensity =
         param_1->ScreenSpaceReflectionIntensity;
  }
  if ((bool)param_1->bOverride_ScreenSpaceReflectionMaxRoughness) {
    (this->PostProcessSettings).bOverride_ScreenSpaceReflectionMaxRoughness = '\x01';
    (this->PostProcessSettings).ScreenSpaceReflectionMaxRoughness =
         param_1->ScreenSpaceReflectionMaxRoughness;
  }
  if (param_1->bOverride_TranslucencyType != 0) {
    (this->PostProcessSettings).bOverride_TranslucencyType = 1;
    (this->PostProcessSettings).TranslucencyType = param_1->TranslucencyType;
  }
  if (param_1->bOverride_RayTracingTranslucencyMaxRoughness != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxRoughness = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxRoughness =
         param_1->RayTracingTranslucencyMaxRoughness;
  }
  if (param_1->bOverride_RayTracingTranslucencyRefractionRays != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefractionRays = 1;
    (this->PostProcessSettings).RayTracingTranslucencyRefractionRays =
         param_1->RayTracingTranslucencyRefractionRays;
  }
  if (param_1->bOverride_RayTracingTranslucencySamplesPerPixel != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencySamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingTranslucencySamplesPerPixel =
         param_1->RayTracingTranslucencySamplesPerPixel;
  }
  if (param_1->bOverride_RayTracingTranslucencyShadows != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyShadows = 1;
    (this->PostProcessSettings).RayTracingTranslucencyShadows =
         param_1->RayTracingTranslucencyShadows;
  }
  if (param_1->bOverride_RayTracingTranslucencyRefraction != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyRefraction = 1;
    uVar1 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 =
         ((this->PostProcessSettings).RayTracingTranslucencyRefraction ^
         param_1->RayTracingTranslucencyRefraction) & 1 ^ uVar1;
  }
  if (param_1->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxPrimaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxPrimaryHitEvents =
         param_1->RayTracingTranslucencyMaxPrimaryHitEvents;
  }
  if (param_1->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyMaxSecondaryHitEvents = 1;
    (this->PostProcessSettings).RayTracingTranslucencyMaxSecondaryHitEvents =
         param_1->RayTracingTranslucencyMaxSecondaryHitEvents;
  }
  if (param_1->bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0) {
    (this->PostProcessSettings).bOverride_RayTracingTranslucencyUseRayTracedRefraction = 1;
    bVar2 = (this->PostProcessSettings).field_0x735;
    (this->PostProcessSettings).field_0x735 = (bVar2 ^ param_1->field_0x735) & 2 ^ bVar2;
  }
  if (param_1->bOverride_DynamicGlobalIlluminationMethod != 0) {
    (this->PostProcessSettings).bOverride_DynamicGlobalIlluminationMethod = 1;
    (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value =
         (param_1->DynamicGlobalIlluminationMethod).Value;
  }
  if (param_1->bOverride_LumenSurfaceCacheResolution != 0) {
    (this->PostProcessSettings).bOverride_LumenSurfaceCacheResolution = '\x01';
    (this->PostProcessSettings).LumenSurfaceCacheResolution = param_1->LumenSurfaceCacheResolution;
  }
  if (param_1->bOverride_LumenSceneLightingQuality != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingQuality = 1;
    (this->PostProcessSettings).LumenSceneLightingQuality = param_1->LumenSceneLightingQuality;
  }
  if (param_1->bOverride_LumenSceneDetail != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneDetail = 1;
    (this->PostProcessSettings).LumenSceneDetail = param_1->LumenSceneDetail;
  }
  if (param_1->bOverride_LumenSceneViewDistance != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneViewDistance = 1;
    (this->PostProcessSettings).LumenSceneViewDistance = param_1->LumenSceneViewDistance;
  }
  if (param_1->bOverride_LumenSceneLightingUpdateSpeed != 0) {
    (this->PostProcessSettings).bOverride_LumenSceneLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenSceneLightingUpdateSpeed =
         param_1->LumenSceneLightingUpdateSpeed;
  }
  if (param_1->bOverride_LumenFinalGatherQuality != 0) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherQuality = 1;
    (this->PostProcessSettings).LumenFinalGatherQuality = param_1->LumenFinalGatherQuality;
  }
  if (param_1->bOverride_LumenFinalGatherLightingUpdateSpeed != 0) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
    (this->PostProcessSettings).LumenFinalGatherLightingUpdateSpeed =
         param_1->LumenFinalGatherLightingUpdateSpeed;
  }
  if (param_1->bOverride_LumenFinalGatherScreenTraces != 0) {
    (this->PostProcessSettings).bOverride_LumenFinalGatherScreenTraces = 1;
    uVar1 = (this->PostProcessSettings).field_0x410;
    (this->PostProcessSettings).field_0x410 =
         ((this->PostProcessSettings).LumenFinalGatherScreenTraces ^
         param_1->LumenFinalGatherScreenTraces) & 1 ^ uVar1;
  }
  if (param_1->bOverride_LumenMaxTraceDistance != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxTraceDistance = 1;
    (this->PostProcessSettings).LumenMaxTraceDistance = param_1->LumenMaxTraceDistance;
  }
  if (param_1->bOverride_LumenDiffuseColorBoost != 0) {
    (this->PostProcessSettings).bOverride_LumenDiffuseColorBoost = 1;
    (this->PostProcessSettings).LumenDiffuseColorBoost = param_1->LumenDiffuseColorBoost;
  }
  if (param_1->bOverride_LumenSkylightLeaking != 0) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeaking = 1;
    (this->PostProcessSettings).LumenSkylightLeaking = param_1->LumenSkylightLeaking;
  }
  if (param_1->bOverride_LumenSkylightLeakingTint != 0) {
    (this->PostProcessSettings).bOverride_LumenSkylightLeakingTint = 1;
    uVar9 = *(undefined8 *)((longlong)&(param_1->LumenSkylightLeakingTint).field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 =
         *(undefined8 *)&(param_1->LumenSkylightLeakingTint).field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LumenSkylightLeakingTint.field0_0x0 + 8)
         = uVar9;
  }
  if (param_1->bOverride_LumenFullSkylightLeakingDistance != 0) {
    (this->PostProcessSettings).bOverride_LumenFullSkylightLeakingDistance = 1;
    (this->PostProcessSettings).LumenFullSkylightLeakingDistance =
         param_1->LumenFullSkylightLeakingDistance;
  }
  if (param_1->bOverride_LumenRayLightingMode != 0) {
    (this->PostProcessSettings).bOverride_LumenRayLightingMode = '\x01';
    (this->PostProcessSettings).LumenRayLightingMode = param_1->LumenRayLightingMode;
  }
  if (param_1->bOverride_LumenReflectionsScreenTraces != '\0') {
    (this->PostProcessSettings).bOverride_LumenReflectionsScreenTraces = '\x01';
    uVar1 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 =
         ((this->PostProcessSettings).LumenReflectionsScreenTraces ^
         param_1->LumenReflectionsScreenTraces) & 1 ^ uVar1;
  }
  if (param_1->bOverride_LumenFrontLayerTranslucencyReflections != '\0') {
    (this->PostProcessSettings).bOverride_LumenFrontLayerTranslucencyReflections = '\x01';
    bVar2 = (this->PostProcessSettings).field_0x440;
    (this->PostProcessSettings).field_0x440 = (bVar2 ^ param_1->field_0x440) & 2 ^ bVar2;
  }
  if (param_1->bOverride_LumenMaxRoughnessToTraceReflections != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxRoughnessToTraceReflections = 1;
    (this->PostProcessSettings).LumenMaxRoughnessToTraceReflections =
         param_1->LumenMaxRoughnessToTraceReflections;
  }
  if (param_1->bOverride_LumenMaxReflectionBounces != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxReflectionBounces = 1;
    (this->PostProcessSettings).LumenMaxReflectionBounces = param_1->LumenMaxReflectionBounces;
  }
  if (param_1->bOverride_LumenMaxRefractionBounces != 0) {
    (this->PostProcessSettings).bOverride_LumenMaxRefractionBounces = 1;
    (this->PostProcessSettings).LumenMaxRefractionBounces = param_1->LumenMaxRefractionBounces;
  }
  if (param_1->bOverride_ReflectionMethod != '\0') {
    (this->PostProcessSettings).bOverride_ReflectionMethod = '\x01';
    (this->PostProcessSettings).ReflectionMethod.Value = (param_1->ReflectionMethod).Value;
  }
  if (param_1->bOverride_LumenReflectionQuality != '\0') {
    (this->PostProcessSettings).bOverride_LumenReflectionQuality = '\x01';
    (this->PostProcessSettings).LumenReflectionQuality = param_1->LumenReflectionQuality;
  }
  if (param_1->bOverride_RayTracingAO != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAO = 1;
    uVar3 = *(undefined4 *)&(this->PostProcessSettings).field_0x638;
    *(uint *)&(this->PostProcessSettings).field_0x638 =
         (ZPULL(uVar3,0,1) ^ param_1->RayTracingAO) & 1 ^ uVar3;
  }
  if (param_1->bOverride_RayTracingAOSamplesPerPixel != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAOSamplesPerPixel = 1;
    (this->PostProcessSettings).RayTracingAOSamplesPerPixel = param_1->RayTracingAOSamplesPerPixel;
  }
  if (param_1->bOverride_RayTracingAOIntensity != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAOIntensity = 1;
    (this->PostProcessSettings).RayTracingAOIntensity = param_1->RayTracingAOIntensity;
  }
  if (param_1->bOverride_RayTracingAORadius != 0) {
    (this->PostProcessSettings).bOverride_RayTracingAORadius = 1;
    (this->PostProcessSettings).RayTracingAORadius = param_1->RayTracingAORadius;
  }
  if (param_1->bOverride_PathTracingMaxBounces != 0) {
    (this->PostProcessSettings).bOverride_PathTracingMaxBounces = 1;
    (this->PostProcessSettings).PathTracingMaxBounces = param_1->PathTracingMaxBounces;
  }
  if (param_1->bOverride_PathTracingSamplesPerPixel != 0) {
    (this->PostProcessSettings).bOverride_PathTracingSamplesPerPixel = 1;
    (this->PostProcessSettings).PathTracingSamplesPerPixel = param_1->PathTracingSamplesPerPixel;
  }
  if (param_1->bOverride_PathTracingMaxPathIntensity != 0) {
    (this->PostProcessSettings).bOverride_PathTracingMaxPathIntensity = 1;
    (this->PostProcessSettings).PathTracingMaxPathIntensity = param_1->PathTracingMaxPathIntensity;
  }
  puVar12 = &(this->PostProcessSettings).field_0x744;
  puVar11 = &param_1->field_0x744;
  if (param_1->bOverride_PathTracingEnableEmissiveMaterials != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableEmissiveMaterials = 1;
    *(uint *)puVar12 =
         *(uint *)puVar12 ^
         ((this->PostProcessSettings).PathTracingEnableEmissiveMaterials ^
         param_1->PathTracingEnableEmissiveMaterials) & 1;
  }
  if (param_1->bOverride_PathTracingEnableReferenceDOF != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceDOF = 1;
    *(uint *)puVar12 = *(uint *)puVar12 ^ (*(uint *)puVar12 ^ *(uint *)puVar11) & 2;
  }
  if (param_1->bOverride_PathTracingEnableReferenceAtmosphere != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableReferenceAtmosphere = 1;
    *(uint *)puVar12 = *(uint *)puVar12 ^ (*(uint *)puVar12 ^ *(uint *)puVar11) & 4;
  }
  puVar13 = &(this->PostProcessSettings).field_0x744;
  if (param_1->bOverride_PathTracingEnableDenoiser != 0) {
    (this->PostProcessSettings).bOverride_PathTracingEnableDenoiser = 1;
    *(uint *)puVar13 = (*(uint *)puVar12 ^ *(uint *)&param_1->field_0x744) & 8 ^ *(uint *)puVar12;
  }
  if (param_1->bOverride_PathTracingIncludeEmissive != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeEmissive = 1;
    *(uint *)puVar13 = *(uint *)puVar13 ^ (*(uint *)puVar13 ^ *(uint *)&param_1->field_0x744) & 0x10
    ;
  }
  puVar12 = &(this->PostProcessSettings).field_0x744;
  if (param_1->bOverride_PathTracingIncludeDiffuse != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeDiffuse = 1;
    *(uint *)puVar12 = (*(uint *)puVar13 ^ *(uint *)&param_1->field_0x744) & 0x20 ^ *(uint *)puVar13
    ;
  }
  if (param_1->bOverride_PathTracingIncludeIndirectDiffuse != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectDiffuse = 1;
    *(uint *)puVar12 = *(uint *)puVar12 ^ (*(uint *)puVar12 ^ *(uint *)&param_1->field_0x744) & 0x40
    ;
  }
  puVar14 = &(this->PostProcessSettings).field_0x744;
  if (param_1->bOverride_PathTracingIncludeSpecular != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeSpecular = 1;
    *(uint *)puVar14 = (*(uint *)puVar12 ^ *(uint *)&param_1->field_0x744) & 0x80 ^ *(uint *)puVar12
    ;
  }
  if (param_1->bOverride_PathTracingIncludeIndirectSpecular != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectSpecular = 1;
    *(uint *)puVar14 =
         *(uint *)puVar14 ^ (*(uint *)puVar14 ^ *(uint *)&param_1->field_0x744) & 0x100;
  }
  puVar11 = &(this->PostProcessSettings).field_0x744;
  if (param_1->bOverride_PathTracingIncludeVolume != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeVolume = 1;
    *(uint *)puVar11 =
         (*(uint *)puVar14 ^ *(uint *)&param_1->field_0x744) & 0x200 ^ *(uint *)puVar14;
  }
  if (param_1->bOverride_PathTracingIncludeIndirectVolume != 0) {
    (this->PostProcessSettings).bOverride_PathTracingIncludeIndirectVolume = 1;
    *(uint *)puVar11 =
         *(uint *)puVar11 ^ (*(uint *)puVar11 ^ *(uint *)&param_1->field_0x744) & 0x400;
  }
  if (param_1->bOverride_DepthOfFieldBladeCount != '\0') {
    (this->PostProcessSettings).bOverride_DepthOfFieldBladeCount = '\x01';
    (this->PostProcessSettings).DepthOfFieldBladeCount = param_1->DepthOfFieldBladeCount;
  }
  pUVar4 = (param_1->AmbientCubemap).field0_0x0.DebugPtr;
  if (pUVar4 != (UTextureCube *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->PostProcessSettings).AmbientCubemap.field0_0x0 = (param_1->AmbientCubemap).field0_0x0;
  }
  if (param_1->bOverride_ColorGradingIntensity != '\0') {
    (this->PostProcessSettings).bOverride_ColorGradingIntensity = '\x01';
    (this->PostProcessSettings).ColorGradingIntensity = param_1->ColorGradingIntensity;
  }
  if (param_1->bOverride_ColorGradingLUT != '\0') {
    (this->PostProcessSettings).bOverride_ColorGradingLUT = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (param_1->ColorGradingLUT).field0_0x0.DebugPtr, pUVar5 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->PostProcessSettings).ColorGradingLUT.field0_0x0 = (param_1->ColorGradingLUT).field0_0x0;
  }
  if (param_1->bOverride_BloomDirtMask != '\0') {
    (this->PostProcessSettings).bOverride_BloomDirtMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (param_1->BloomDirtMask).field0_0x0.DebugPtr, pUVar5 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->PostProcessSettings).BloomDirtMask.field0_0x0 = (param_1->BloomDirtMask).field0_0x0;
  }
  if (param_1->bOverride_BloomMethod != 0) {
    (this->PostProcessSettings).bOverride_BloomMethod = '\x01';
    (this->PostProcessSettings).BloomMethod.Value = (param_1->BloomMethod).Value;
  }
  if (param_1->bOverride_BloomConvolutionTexture != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (param_1->BloomConvolutionTexture).field0_0x0.DebugPtr, pUVar6 != (UTexture2D *)0x0
       )) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->PostProcessSettings).BloomConvolutionTexture.field0_0x0 =
         (param_1->BloomConvolutionTexture).field0_0x0;
  }
  if (param_1->bOverride_FilmGrainTexture != '\0') {
    (this->PostProcessSettings).bOverride_FilmGrainTexture = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (param_1->FilmGrainTexture).field0_0x0.DebugPtr, pUVar6 != (UTexture2D *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->PostProcessSettings).FilmGrainTexture.field0_0x0 = (param_1->FilmGrainTexture).field0_0x0
    ;
  }
  if (param_1->bOverride_BloomConvolutionBufferScale != '\0') {
    (this->PostProcessSettings).bOverride_BloomConvolutionBufferScale = '\x01';
    (this->PostProcessSettings).BloomConvolutionBufferScale = param_1->BloomConvolutionBufferScale;
  }
  if (param_1->bOverride_AutoExposureBiasCurve != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureBiasCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_1->AutoExposureBiasCurve).field0_0x0.DebugPtr, pUVar7 != (UCurveFloat *)0x0)
       ) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->PostProcessSettings).AutoExposureBiasCurve.field0_0x0 =
         (param_1->AutoExposureBiasCurve).field0_0x0;
  }
  if (param_1->bOverride_AutoExposureMeterMask != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureMeterMask = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (param_1->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar5 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->PostProcessSettings).AutoExposureMeterMask.field0_0x0 =
         (param_1->AutoExposureMeterMask).field0_0x0;
  }
  if (param_1->bOverride_LocalExposureHighlightContrastCurve != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureHighlightContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_1->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
       pUVar7 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->PostProcessSettings).LocalExposureHighlightContrastCurve.field0_0x0 =
         (param_1->LocalExposureHighlightContrastCurve).field0_0x0;
  }
  if (param_1->bOverride_LocalExposureShadowContrastCurve != '\0') {
    (this->PostProcessSettings).bOverride_LocalExposureShadowContrastCurve = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_1->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
       pUVar7 != (UCurveFloat *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->PostProcessSettings).LocalExposureShadowContrastCurve.field0_0x0 =
         (param_1->LocalExposureShadowContrastCurve).field0_0x0;
  }
  if (param_1->bOverride_LensFlareBokehShape != 0) {
    (this->PostProcessSettings).bOverride_LensFlareBokehShape = '\x01';
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (param_1->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar5 != (UTexture *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->PostProcessSettings).LensFlareBokehShape.field0_0x0 =
         (param_1->LensFlareBokehShape).field0_0x0;
  }
  if (param_1->bOverride_LensFlareTints != '\0') {
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[0].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[0].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[0].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[0].field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[1].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[1].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[1].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[1].field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[2].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[2].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[2].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[2].field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[3].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[3].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[3].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[3].field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[4].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[4].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[4].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[4].field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[5].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[5].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[5].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[5].field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[6].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[6].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[6].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[6].field0_0x0 + 8) = uVar9
    ;
    uVar9 = *(undefined8 *)((longlong)&param_1->LensFlareTints[7].field0_0x0 + 8);
    *(undefined8 *)&(this->PostProcessSettings).LensFlareTints[7].field0_0x0 =
         *(undefined8 *)&param_1->LensFlareTints[7].field0_0x0;
    *(undefined8 *)((longlong)&(this->PostProcessSettings).LensFlareTints[7].field0_0x0 + 8) = uVar9
    ;
  }
  if (param_1->bOverride_MobileHQGaussian != '\0') {
    puVar14 = &(this->PostProcessSettings).field_0x34;
    *puVar14 = *puVar14 ^
               ((this->PostProcessSettings).bMobileHQGaussian ^ param_1->bMobileHQGaussian) & 1;
  }
  if (param_1->bOverride_AutoExposureMethod != 0) {
    (this->PostProcessSettings).bOverride_AutoExposureMethod = '\x01';
    (this->PostProcessSettings).AutoExposureMethod.Value = (param_1->AutoExposureMethod).Value;
  }
  if (param_1->bOverride_AmbientOcclusionRadiusInWS != '\0') {
    (this->PostProcessSettings).bOverride_AmbientOcclusionRadiusInWS = '\x01';
    uVar3 = *(undefined4 *)&(this->PostProcessSettings).field_0x60c;
    *(uint *)&(this->PostProcessSettings).field_0x60c =
         (ZPULL(uVar3,0,1) ^ param_1->AmbientOcclusionRadiusInWS) & 1 ^ uVar3;
  }
  if (param_1->bOverride_MotionBlurTargetFPS != 0) {
    (this->PostProcessSettings).bOverride_MotionBlurTargetFPS = '\x01';
    (this->PostProcessSettings).MotionBlurTargetFPS = param_1->MotionBlurTargetFPS;
  }
  if (param_1->bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') {
    (this->PostProcessSettings).bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
    uVar3 = *(undefined4 *)&(this->PostProcessSettings).field_0x4a0;
    *(uint *)&(this->PostProcessSettings).field_0x4a0 =
         (ZPULL(uVar3,0,1) ^ param_1->AutoExposureApplyPhysicalCameraExposure) & 1 ^ uVar3;
  }
  if (param_1->bOverride_UserFlags != '\0') {
    (this->PostProcessSettings).bOverride_UserFlags = '\x01';
    (this->PostProcessSettings).UserFlags = param_1->UserFlags;
  }
  this_00 = &(this->PostProcessSettings).WeightedBlendables;
  if (((this->PostProcessSettings).WeightedBlendables.Array.ArrayNum < 1) &&
     ((param_1->WeightedBlendables).Array.ArrayNum < 1)) {
    FWeightedBlendables::operator=(this_00,&param_1->WeightedBlendables);
    return;
  }
  FWeightedBlendables::operator=(this_00,&param_1->WeightedBlendables);
  return;
}

// Reset @ 14d5cc100

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::Reset(FPostProcessSettingsCollection *this)

{
  FPostProcessSettings *pFVar1;
  
  pFVar1 = FPostProcessSettings::GetDefault();
  FPostProcessSettings::operator=(&this->PostProcessSettings,pFVar1);
  return;
}

// Serialize @ 14d5cd290

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPostProcessSettingsCollection::Serialize
          (FPostProcessSettingsCollection *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  FPostProcessSettings *pFVar1;
  
  this_00 = FPostProcessSettings::StaticStruct();
  pFVar1 = FPostProcessSettings::GetDefault();
  UScriptStruct::SerializeItem(this_00,param_1,this,pFVar1);
  return;
}

