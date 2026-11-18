// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// BlendPostProcessSettings @ 148359480

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
FPostProcessUtils::BlendPostProcessSettings
          (FPostProcessSettings *param_1,FPostProcessSettings *param_2,float param_3)

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
  int iVar15;
  UTextureCube *pUVar16;
  UTexture *pUVar17;
  UTexture2D *pUVar18;
  UCurveFloat *pUVar19;
  UObject *pUVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  double dVar41;
  TVector2<float>_u_0 TVar42;
  int iVar43;
  float *pfVar44;
  FScriptContainerElement *pFVar45;
  byte bVar46;
  longlong lVar47;
  FScriptContainerElement *pFVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  longlong lVar51;
  FWeightedBlendables *pFVar52;
  FScriptContainerElement *pFVar53;
  byte bVar54;
  FScriptContainerElement *pFVar55;
  float fVar56;
  double dVar57;
  undefined1 local_res18 [8];
  float local_res20;
  float fStackX_24;
  
  fVar8 = __real_3f800000;
  if (param_3 <= 0.0) {
    return false;
  }
  if (__real_3f800000 <= param_3) {
    param_3 = __real_3f800000;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  bVar21 = __real_3f000000 <= param_3;
  bVar54 = 0;
  if (((param_2->bOverride_TemperatureType != 0) || (param_1->bOverride_TemperatureType != 0)) &&
     (bVar21)) {
    param_1->bOverride_TemperatureType = '\x01';
    bVar54 = 1;
    (param_1->TemperatureType).Value = (param_2->TemperatureType).Value;
  }
  if ((param_2->bOverride_WhiteTemp != '\0') ||
     (bVar46 = *(byte *)param_1, ((byte *)param_1)->bOverride_WhiteTemp != '\0')) {
    param_1->bOverride_WhiteTemp = '\x01';
    bVar54 = 1;
    bVar46 = *(byte *)param_1;
    param_1->WhiteTemp = (param_2->WhiteTemp - param_1->WhiteTemp) * param_3 + param_1->WhiteTemp;
  }
  if (((bVar46 | *(byte *)param_2) & 4) != 0) {
    bVar46 = bVar46 | 4;
    bVar54 = 1;
    *(byte *)param_1 = bVar46;
    param_1->WhiteTint = (param_2->WhiteTint - param_1->WhiteTint) * param_3 + param_1->WhiteTint;
  }
  if (((bVar46 | *(byte *)param_2) & 8) != 0) {
    *(byte *)param_1 = bVar46 | 8;
    bVar54 = 1;
    dVar12 = (param_1->ColorSaturation).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorSaturation).field0_0x0._s_0.Z;
    dVar9 = (param_2->ColorSaturation).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorSaturation).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorSaturation).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorSaturation).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    dVar11 = (param_1->ColorSaturation).field0_0x0._s_0.W;
    (param_1->ColorSaturation).field0_0x0._s_0.X =
         ((param_2->ColorSaturation).field0_0x0._s_0.X -
         (param_1->ColorSaturation).field0_0x0._s_0.X) * dVar57 +
         (param_1->ColorSaturation).field0_0x0._s_0.X;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar22._8_4_ = SUB84(dVar41,0);
    auVar22._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar22._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorSaturation).field0_0x0 + 8) = auVar22;
    (param_1->ColorSaturation).field0_0x0._s_0.W = (dVar9 - dVar10) * dVar57 + dVar11;
  }
  if ((param_2->bOverride_ColorContrast != '\0') || (param_1->bOverride_ColorContrast != '\0')) {
    param_1->bOverride_ColorContrast = '\x01';
    bVar54 = 1;
    dVar12 = (param_1->ColorContrast).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorContrast).field0_0x0._s_0.Z;
    dVar9 = (param_2->ColorContrast).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorContrast).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorContrast).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorContrast).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    dVar11 = (param_1->ColorContrast).field0_0x0._s_0.W;
    (param_1->ColorContrast).field0_0x0._s_0.X =
         ((param_2->ColorContrast).field0_0x0._s_0.X - (param_1->ColorContrast).field0_0x0._s_0.X) *
         dVar57 + (param_1->ColorContrast).field0_0x0._s_0.X;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar23._8_4_ = SUB84(dVar41,0);
    auVar23._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar23._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorContrast).field0_0x0 + 8) = auVar23;
    (param_1->ColorContrast).field0_0x0._s_0.W = (dVar9 - dVar10) * dVar57 + dVar11;
  }
  if ((param_2->bOverride_ColorGamma != '\0') || (param_1->bOverride_ColorGamma != '\0')) {
    param_1->bOverride_ColorGamma = '\x01';
    dVar9 = (param_1->ColorGamma).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorGamma).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGamma).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGamma).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGamma).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGamma).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGamma).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorGamma).field0_0x0._s_0.X =
         ((param_2->ColorGamma).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar24._8_4_ = SUB84(dVar41,0);
    auVar24._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar24._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGamma).field0_0x0 + 8) = auVar24;
    (param_1->ColorGamma).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorGain != '\0') || (param_1->bOverride_ColorGain != '\0')) {
    param_1->bOverride_ColorGain = '\x01';
    dVar9 = (param_1->ColorGain).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorGain).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGain).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGain).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGain).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGain).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGain).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorGain).field0_0x0._s_0.X =
         ((param_2->ColorGain).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar25._8_4_ = SUB84(dVar41,0);
    auVar25._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar25._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGain).field0_0x0 + 8) = auVar25;
    (param_1->ColorGain).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if (((bool)param_2->bOverride_ColorOffset) || ((bool)param_1->bOverride_ColorOffset)) {
    param_1->bOverride_ColorOffset = '\x01';
    dVar9 = (param_1->ColorOffset).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorOffset).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorOffset).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorOffset).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorOffset).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorOffset).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorOffset).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorOffset).field0_0x0._s_0.X =
         ((param_2->ColorOffset).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar26._8_4_ = SUB84(dVar41,0);
    auVar26._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar26._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorOffset).field0_0x0 + 8) = auVar26;
    (param_1->ColorOffset).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorSaturationShadows != 0) ||
     (param_1->bOverride_ColorSaturationShadows != 0)) {
    param_1->bOverride_ColorSaturationShadows = '\x01';
    dVar9 = (param_1->ColorSaturationShadows).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorSaturationShadows).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorSaturationShadows).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorSaturationShadows).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorSaturationShadows).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorSaturationShadows).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorSaturationShadows).field0_0x0._s_0.X =
         ((param_2->ColorSaturationShadows).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar27._8_4_ = SUB84(dVar41,0);
    auVar27._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar27._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorSaturationShadows).field0_0x0 + 8) = auVar27;
    (param_1->ColorSaturationShadows).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorContrastShadows != '\0') ||
     (param_1->bOverride_ColorContrastShadows != '\0')) {
    param_1->bOverride_ColorContrastShadows = '\x01';
    dVar9 = (param_1->ColorContrastShadows).field0_0x0._s_0.Y;
    bVar54 = 1;
    dVar10 = (param_1->ColorContrastShadows).field0_0x0._s_0.X;
    dVar11 = (param_1->ColorContrastShadows).field0_0x0._s_0.Z;
    dVar41 = (param_1->ColorContrastShadows).field0_0x0._s_0.W;
    dVar12 = (param_2->ColorContrastShadows).field0_0x0._s_0.Y;
    dVar13 = (param_2->ColorContrastShadows).field0_0x0._s_0.Z;
    dVar14 = (param_2->ColorContrastShadows).field0_0x0._s_0.W;
    dVar57 = (double)param_3;
    (param_1->ColorContrastShadows).field0_0x0._s_0.X =
         ((param_2->ColorContrastShadows).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    (param_1->ColorContrastShadows).field0_0x0._s_0.Y = (dVar12 - dVar9) * dVar57 + dVar9;
    (param_1->ColorContrastShadows).field0_0x0._s_0.Z = (dVar13 - dVar11) * dVar57 + dVar11;
    (param_1->ColorContrastShadows).field0_0x0._s_0.W = (dVar14 - dVar41) * dVar57 + dVar41;
  }
  if ((param_2->bOverride_ColorGammaShadows != '\0') ||
     (param_1->bOverride_ColorGammaShadows != '\0')) {
    dVar57 = (double)param_3;
    bVar54 = 1;
    param_1->bOverride_ColorGammaShadows = '\x01';
    dVar9 = (param_1->ColorGammaShadows).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorGammaShadows).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGammaShadows).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGammaShadows).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGammaShadows).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGammaShadows).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGammaShadows).field0_0x0._s_0.Z;
    (param_1->ColorGammaShadows).field0_0x0._s_0.X =
         ((param_2->ColorGammaShadows).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar28._8_4_ = SUB84(dVar41,0);
    auVar28._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar28._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGammaShadows).field0_0x0 + 8) = auVar28;
    (param_1->ColorGammaShadows).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorGainShadows != '\0') || (param_1->bOverride_ColorGainShadows != '\0')
     ) {
    param_1->bOverride_ColorGainShadows = '\x01';
    dVar9 = (param_1->ColorGainShadows).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorGainShadows).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGainShadows).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGainShadows).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGainShadows).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGainShadows).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGainShadows).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorGainShadows).field0_0x0._s_0.X =
         ((param_2->ColorGainShadows).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar29._8_4_ = SUB84(dVar41,0);
    auVar29._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar29._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGainShadows).field0_0x0 + 8) = auVar29;
    (param_1->ColorGainShadows).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorOffsetShadows != '\0') ||
     (param_1->bOverride_ColorOffsetShadows != '\0')) {
    dVar57 = (double)param_3;
    bVar54 = 1;
    param_1->bOverride_ColorOffsetShadows = '\x01';
    dVar9 = (param_1->ColorOffsetShadows).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorOffsetShadows).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorOffsetShadows).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorOffsetShadows).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorOffsetShadows).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorOffsetShadows).field0_0x0._s_0.Z;
    (param_1->ColorOffsetShadows).field0_0x0._s_0.X =
         ((param_2->ColorOffsetShadows).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar30._8_4_ = SUB84(dVar41,0);
    auVar30._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar30._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorOffsetShadows).field0_0x0 + 8) = auVar30;
    (param_1->ColorOffsetShadows).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorSaturationMidtones != '\0') ||
     (param_1->bOverride_ColorSaturationMidtones != '\0')) {
    param_1->bOverride_ColorSaturationMidtones = '\x01';
    dVar9 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorSaturationMidtones).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorSaturationMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorSaturationMidtones).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorSaturationMidtones).field0_0x0._s_0.X =
         ((param_2->ColorSaturationMidtones).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar31._8_4_ = SUB84(dVar41,0);
    auVar31._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar31._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorSaturationMidtones).field0_0x0 + 8) = auVar31;
    (param_1->ColorSaturationMidtones).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorContrastMidtones != '\0') ||
     (param_1->bOverride_ColorContrastMidtones != '\0')) {
    dVar57 = (double)param_3;
    bVar54 = 1;
    param_1->bOverride_ColorContrastMidtones = '\x01';
    dVar9 = (param_1->ColorContrastMidtones).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorContrastMidtones).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorContrastMidtones).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorContrastMidtones).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorContrastMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorContrastMidtones).field0_0x0._s_0.Z;
    (param_1->ColorContrastMidtones).field0_0x0._s_0.X =
         ((param_2->ColorContrastMidtones).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar32._8_4_ = SUB84(dVar41,0);
    auVar32._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar32._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorContrastMidtones).field0_0x0 + 8) = auVar32;
    (param_1->ColorContrastMidtones).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if (((bool)param_2->bOverride_ColorGammaMidtones) || ((bool)param_1->bOverride_ColorGammaMidtones)
     ) {
    param_1->bOverride_ColorGammaMidtones = '\x01';
    dVar9 = (param_1->ColorGammaMidtones).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorGammaMidtones).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGammaMidtones).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGammaMidtones).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGammaMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGammaMidtones).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorGammaMidtones).field0_0x0._s_0.X =
         ((param_2->ColorGammaMidtones).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar33._8_4_ = SUB84(dVar41,0);
    auVar33._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar33._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGammaMidtones).field0_0x0 + 8) = auVar33;
    (param_1->ColorGammaMidtones).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorGainMidtones != 0) || (param_1->bOverride_ColorGainMidtones != 0)) {
    param_1->bOverride_ColorGainMidtones = '\x01';
    dVar9 = (param_1->ColorGainMidtones).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorGainMidtones).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGainMidtones).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGainMidtones).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGainMidtones).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGainMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGainMidtones).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorGainMidtones).field0_0x0._s_0.X =
         ((param_2->ColorGainMidtones).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar34._8_4_ = SUB84(dVar41,0);
    auVar34._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar34._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGainMidtones).field0_0x0 + 8) = auVar34;
    (param_1->ColorGainMidtones).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorOffsetMidtones != '\0') ||
     (param_1->bOverride_ColorOffsetMidtones != '\0')) {
    param_1->bOverride_ColorOffsetMidtones = '\x01';
    dVar9 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorOffsetMidtones).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorOffsetMidtones).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorOffsetMidtones).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorOffsetMidtones).field0_0x0._s_0.X =
         ((param_2->ColorOffsetMidtones).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar35._8_4_ = SUB84(dVar41,0);
    auVar35._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar35._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorOffsetMidtones).field0_0x0 + 8) = auVar35;
    (param_1->ColorOffsetMidtones).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorSaturationHighlights != '\0') ||
     (param_1->bOverride_ColorSaturationHighlights != '\0')) {
    dVar57 = (double)param_3;
    bVar54 = 1;
    param_1->bOverride_ColorSaturationHighlights = '\x01';
    dVar9 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorSaturationHighlights).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorSaturationHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorSaturationHighlights).field0_0x0._s_0.Z;
    (param_1->ColorSaturationHighlights).field0_0x0._s_0.X =
         ((param_2->ColorSaturationHighlights).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar36._8_4_ = SUB84(dVar41,0);
    auVar36._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar36._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorSaturationHighlights).field0_0x0 + 8) = auVar36
    ;
    (param_1->ColorSaturationHighlights).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorContrastHighlights != '\0') ||
     (param_1->bOverride_ColorContrastHighlights != '\0')) {
    param_1->bOverride_ColorContrastHighlights = '\x01';
    dVar9 = (param_1->ColorContrastHighlights).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorContrastHighlights).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorContrastHighlights).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorContrastHighlights).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorContrastHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorContrastHighlights).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorContrastHighlights).field0_0x0._s_0.X =
         ((param_2->ColorContrastHighlights).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar37._8_4_ = SUB84(dVar41,0);
    auVar37._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar37._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorContrastHighlights).field0_0x0 + 8) = auVar37;
    (param_1->ColorContrastHighlights).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorGammaHighlights != '\0') ||
     (param_1->bOverride_ColorGammaHighlights != '\0')) {
    dVar57 = (double)param_3;
    bVar54 = 1;
    param_1->bOverride_ColorGammaHighlights = '\x01';
    dVar9 = (param_1->ColorGammaHighlights).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorGammaHighlights).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGammaHighlights).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGammaHighlights).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGammaHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGammaHighlights).field0_0x0._s_0.Z;
    (param_1->ColorGammaHighlights).field0_0x0._s_0.X =
         ((param_2->ColorGammaHighlights).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar38._8_4_ = SUB84(dVar41,0);
    auVar38._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar38._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGammaHighlights).field0_0x0 + 8) = auVar38;
    (param_1->ColorGammaHighlights).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorGainHighlights != '\0') ||
     (param_1->bOverride_ColorGainHighlights != '\0')) {
    param_1->bOverride_ColorGainHighlights = '\x01';
    dVar9 = (param_1->ColorGainHighlights).field0_0x0._s_0.W;
    bVar54 = 1;
    dVar10 = (param_1->ColorGainHighlights).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorGainHighlights).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorGainHighlights).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorGainHighlights).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorGainHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorGainHighlights).field0_0x0._s_0.Z;
    dVar57 = (double)param_3;
    (param_1->ColorGainHighlights).field0_0x0._s_0.X =
         ((param_2->ColorGainHighlights).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar39._8_4_ = SUB84(dVar41,0);
    auVar39._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar39._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorGainHighlights).field0_0x0 + 8) = auVar39;
    (param_1->ColorGainHighlights).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if ((param_2->bOverride_ColorOffsetHighlights != '\0') ||
     (param_1->bOverride_ColorOffsetHighlights != '\0')) {
    dVar57 = (double)param_3;
    bVar54 = 1;
    param_1->bOverride_ColorOffsetHighlights = '\x01';
    dVar9 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.W;
    dVar10 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.X;
    dVar12 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y;
    dVar41 = (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z;
    dVar11 = (param_2->ColorOffsetHighlights).field0_0x0._s_0.W;
    dVar13 = (param_2->ColorOffsetHighlights).field0_0x0._s_0.Y;
    dVar14 = (param_2->ColorOffsetHighlights).field0_0x0._s_0.Z;
    (param_1->ColorOffsetHighlights).field0_0x0._s_0.X =
         ((param_2->ColorOffsetHighlights).field0_0x0._s_0.X - dVar10) * dVar57 + dVar10;
    dVar41 = (dVar14 - dVar41) * dVar57 + dVar41;
    auVar40._8_4_ = SUB84(dVar41,0);
    auVar40._0_8_ = (dVar13 - dVar12) * dVar57 + dVar12;
    auVar40._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->ColorOffsetHighlights).field0_0x0 + 8) = auVar40;
    (param_1->ColorOffsetHighlights).field0_0x0._s_0.W = (dVar11 - dVar9) * dVar57 + dVar9;
  }
  if (((bool)param_2->bOverride_ColorCorrectionShadowsMax) ||
     ((bool)param_1->bOverride_ColorCorrectionShadowsMax)) {
    param_1->bOverride_ColorCorrectionShadowsMax = '\x01';
    bVar54 = 1;
    param_1->ColorCorrectionShadowsMax =
         (param_2->ColorCorrectionShadowsMax - param_1->ColorCorrectionShadowsMax) * param_3 +
         param_1->ColorCorrectionShadowsMax;
  }
  puVar49 = &param_1->field_0x3;
  if ((param_2->bOverride_ColorCorrectionHighlightsMin != 0) ||
     (bVar46 = *puVar49, param_1->bOverride_ColorCorrectionHighlightsMin != 0)) {
    param_1->bOverride_ColorCorrectionHighlightsMin = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->ColorCorrectionHighlightsMin =
         (param_2->ColorCorrectionHighlightsMin - param_1->ColorCorrectionHighlightsMin) * param_3 +
         param_1->ColorCorrectionHighlightsMin;
  }
  if ((param_2->bOverride_ColorCorrectionHighlightsMax != '\0') || ((bVar46 & 2) != 0)) {
    bVar46 = bVar46 | 2;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->ColorCorrectionHighlightsMax =
         (param_2->ColorCorrectionHighlightsMax - param_1->ColorCorrectionHighlightsMax) * param_3 +
         param_1->ColorCorrectionHighlightsMax;
  }
  if ((param_2->bOverride_BlueCorrection != '\0') || ((bVar46 & 4) != 0)) {
    bVar46 = bVar46 | 4;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->BlueCorrection =
         (param_2->BlueCorrection - param_1->BlueCorrection) * param_3 + param_1->BlueCorrection;
  }
  if ((param_2->bOverride_ExpandGamut != '\0') || ((bVar46 & 8) != 0)) {
    bVar46 = bVar46 | 8;
    param_1->field_0x3 = bVar46;
    bVar54 = 1;
    param_1->ExpandGamut =
         (param_2->ExpandGamut - param_1->ExpandGamut) * param_3 + param_1->ExpandGamut;
  }
  if ((param_2->bOverride_ToneCurveAmount != '\0') || ((bVar46 & 0x10) != 0)) {
    bVar46 = bVar46 | 0x10;
    bVar54 = 1;
    param_1->field_0x3 = bVar46;
    param_1->ToneCurveAmount =
         (param_2->ToneCurveAmount - param_1->ToneCurveAmount) * param_3 + param_1->ToneCurveAmount;
  }
  if ((param_2->bOverride_FilmSlope != '\0') || ((bVar46 & 0x20) != 0)) {
    bVar46 = bVar46 | 0x20;
    param_1->field_0x3 = bVar46;
    bVar54 = 1;
    param_1->FilmSlope = (param_2->FilmSlope - param_1->FilmSlope) * param_3 + param_1->FilmSlope;
  }
  if ((param_2->bOverride_FilmToe != '\0') || ((bVar46 & 0x40) != 0)) {
    bVar46 = bVar46 | 0x40;
    bVar54 = 1;
    param_1->field_0x3 = bVar46;
    param_1->FilmToe = (param_2->FilmToe - param_1->FilmToe) * param_3 + param_1->FilmToe;
  }
  if (((bool)param_2->bOverride_FilmShoulder) || ((char)bVar46 < '\0')) {
    bVar54 = 1;
    param_1->field_0x3 = bVar46 | 0x80;
    param_1->FilmShoulder =
         (param_2->FilmShoulder - param_1->FilmShoulder) * param_3 + param_1->FilmShoulder;
  }
  puVar49 = &param_1->field_0x4;
  if ((param_2->bOverride_FilmBlackClip != 0) ||
     (bVar46 = *puVar49, param_1->bOverride_FilmBlackClip != 0)) {
    param_1->bOverride_FilmBlackClip = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->FilmBlackClip =
         (param_2->FilmBlackClip - param_1->FilmBlackClip) * param_3 + param_1->FilmBlackClip;
  }
  if ((param_2->bOverride_FilmWhiteClip != '\0') || ((bVar46 & 2) != 0)) {
    bVar46 = bVar46 | 2;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->FilmWhiteClip =
         (param_2->FilmWhiteClip - param_1->FilmWhiteClip) * param_3 + param_1->FilmWhiteClip;
  }
  puVar50 = &param_2->field_0x4;
  if (((bVar46 | *puVar50) & 4) != 0) {
    bVar54 = 1;
    *puVar49 = bVar46 | 4;
    fVar56 = (param_1->SceneColorTint).field0_0x0._s_0.G;
    fVar2 = (param_1->SceneColorTint).field0_0x0._s_0.R;
    fVar3 = (param_1->SceneColorTint).field0_0x0._s_0.B;
    fVar4 = (param_1->SceneColorTint).field0_0x0._s_0.A;
    fVar5 = (param_2->SceneColorTint).field0_0x0._s_0.G;
    fVar6 = (param_2->SceneColorTint).field0_0x0._s_0.B;
    fVar7 = (param_2->SceneColorTint).field0_0x0._s_0.A;
    (param_1->SceneColorTint).field0_0x0._s_0.R =
         ((param_2->SceneColorTint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->SceneColorTint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->SceneColorTint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->SceneColorTint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if ((param_2->bOverride_SceneFringeIntensity != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_SceneFringeIntensity != '\0')) {
    puVar49 = &param_1->field_0x4;
    param_1->bOverride_SceneFringeIntensity = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->SceneFringeIntensity =
         (param_2->SceneFringeIntensity - param_1->SceneFringeIntensity) * param_3 +
         param_1->SceneFringeIntensity;
  }
  if (((bVar46 | *puVar50) & 0x10) != 0) {
    bVar54 = 1;
    param_1->field_0x4 = bVar46 | 0x10;
    param_1->ChromaticAberrationStartOffset =
         (param_2->ChromaticAberrationStartOffset - param_1->ChromaticAberrationStartOffset) *
         param_3 + param_1->ChromaticAberrationStartOffset;
  }
  puVar49 = &param_1->field_0x5;
  if ((param_2->bOverride_BloomIntensity != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_BloomIntensity != '\0')) {
    param_1->bOverride_BloomIntensity = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->BloomIntensity =
         (param_2->BloomIntensity - param_1->BloomIntensity) * param_3 + param_1->BloomIntensity;
  }
  if ((param_2->bOverride_BloomGaussianIntensity != '\0') || ((bVar46 & 4) != 0)) {
    bVar46 = bVar46 | 4;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->BloomGaussianIntensity =
         (param_2->BloomGaussianIntensity - param_1->BloomGaussianIntensity) * param_3 +
         param_1->BloomGaussianIntensity;
  }
  if ((param_2->bOverride_BloomThreshold != '\0') || ((bVar46 & 8) != 0)) {
    bVar46 = bVar46 | 8;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->BloomThreshold =
         (param_2->BloomThreshold - param_1->BloomThreshold) * param_3 + param_1->BloomThreshold;
  }
  if (((bVar46 | param_2->field_0x5) & 0x10) != 0) {
    bVar54 = 1;
    param_1->field_0x5 = bVar46 | 0x10;
    fVar56 = (param_1->Bloom1Tint).field0_0x0._s_0.G;
    fVar2 = (param_1->Bloom1Tint).field0_0x0._s_0.R;
    fVar3 = (param_1->Bloom1Tint).field0_0x0._s_0.B;
    fVar4 = (param_1->Bloom1Tint).field0_0x0._s_0.A;
    fVar5 = (param_2->Bloom1Tint).field0_0x0._s_0.G;
    fVar6 = (param_2->Bloom1Tint).field0_0x0._s_0.B;
    fVar7 = (param_2->Bloom1Tint).field0_0x0._s_0.A;
    (param_1->Bloom1Tint).field0_0x0._s_0.R =
         ((param_2->Bloom1Tint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->Bloom1Tint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->Bloom1Tint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->Bloom1Tint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if ((param_2->bOverride_BloomSizeScale != 0) || (param_1->bOverride_BloomSizeScale != 0)) {
    param_1->bOverride_BloomSizeScale = '\x01';
    bVar54 = 1;
    param_1->BloomSizeScale =
         (param_2->BloomSizeScale - param_1->BloomSizeScale) * param_3 + param_1->BloomSizeScale;
  }
  puVar49 = &param_1->field_0x5;
  if ((param_2->bOverride_Bloom1Size != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_Bloom1Size != '\0')) {
    param_1->bOverride_Bloom1Size = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->Bloom1Size =
         (param_2->Bloom1Size - param_1->Bloom1Size) * param_3 + param_1->Bloom1Size;
  }
  if (((bool)param_2->bOverride_Bloom2Tint) || ((char)bVar46 < '\0')) {
    bVar54 = 1;
    *puVar49 = bVar46 | 0x80;
    fVar56 = (param_1->Bloom2Tint).field0_0x0._s_0.G;
    fVar2 = (param_1->Bloom2Tint).field0_0x0._s_0.R;
    fVar3 = (param_1->Bloom2Tint).field0_0x0._s_0.B;
    fVar4 = (param_1->Bloom2Tint).field0_0x0._s_0.A;
    fVar5 = (param_2->Bloom2Tint).field0_0x0._s_0.G;
    fVar6 = (param_2->Bloom2Tint).field0_0x0._s_0.B;
    fVar7 = (param_2->Bloom2Tint).field0_0x0._s_0.A;
    (param_1->Bloom2Tint).field0_0x0._s_0.R =
         ((param_2->Bloom2Tint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->Bloom2Tint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->Bloom2Tint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->Bloom2Tint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if ((param_2->bOverride_Bloom2Size != '\0') || (param_1->bOverride_Bloom2Size != '\0')) {
    param_1->bOverride_Bloom2Size = '\x01';
    bVar54 = 1;
    param_1->Bloom2Size =
         (param_2->Bloom2Size - param_1->Bloom2Size) * param_3 + param_1->Bloom2Size;
  }
  puVar49 = &param_1->field_0x6;
  if ((param_2->bOverride_Bloom3Tint != 0) || (param_1->bOverride_Bloom3Tint != 0)) {
    param_1->bOverride_Bloom3Tint = '\x01';
    bVar54 = 1;
    fVar56 = (param_1->Bloom3Tint).field0_0x0._s_0.G;
    fVar2 = (param_1->Bloom3Tint).field0_0x0._s_0.R;
    fVar3 = (param_1->Bloom3Tint).field0_0x0._s_0.B;
    fVar4 = (param_1->Bloom3Tint).field0_0x0._s_0.A;
    fVar5 = (param_2->Bloom3Tint).field0_0x0._s_0.G;
    fVar6 = (param_2->Bloom3Tint).field0_0x0._s_0.B;
    fVar7 = (param_2->Bloom3Tint).field0_0x0._s_0.A;
    (param_1->Bloom3Tint).field0_0x0._s_0.R =
         ((param_2->Bloom3Tint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->Bloom3Tint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->Bloom3Tint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->Bloom3Tint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if ((param_2->bOverride_Bloom3Size != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_Bloom3Size != '\0')) {
    param_1->bOverride_Bloom3Size = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->Bloom3Size =
         (param_2->Bloom3Size - param_1->Bloom3Size) * param_3 + param_1->Bloom3Size;
  }
  puVar50 = &param_2->field_0x6;
  if (((bVar46 | *puVar50) & 4) != 0) {
    bVar54 = 1;
    *puVar49 = bVar46 | 4;
    fVar56 = (param_1->Bloom4Tint).field0_0x0._s_0.G;
    fVar2 = (param_1->Bloom4Tint).field0_0x0._s_0.R;
    fVar3 = (param_1->Bloom4Tint).field0_0x0._s_0.B;
    fVar4 = (param_1->Bloom4Tint).field0_0x0._s_0.A;
    fVar5 = (param_2->Bloom4Tint).field0_0x0._s_0.G;
    fVar6 = (param_2->Bloom4Tint).field0_0x0._s_0.B;
    fVar7 = (param_2->Bloom4Tint).field0_0x0._s_0.A;
    (param_1->Bloom4Tint).field0_0x0._s_0.R =
         ((param_2->Bloom4Tint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->Bloom4Tint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->Bloom4Tint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->Bloom4Tint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  puVar49 = &param_1->field_0x6;
  if ((param_2->bOverride_Bloom4Size != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_Bloom4Size != '\0')) {
    param_1->bOverride_Bloom4Size = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->Bloom4Size =
         (param_2->Bloom4Size - param_1->Bloom4Size) * param_3 + param_1->Bloom4Size;
  }
  if (((bVar46 | *puVar50) & 0x10) != 0) {
    bVar54 = 1;
    *puVar49 = bVar46 | 0x10;
    fVar56 = (param_1->Bloom5Tint).field0_0x0._s_0.G;
    fVar2 = (param_1->Bloom5Tint).field0_0x0._s_0.R;
    fVar3 = (param_1->Bloom5Tint).field0_0x0._s_0.B;
    fVar4 = (param_1->Bloom5Tint).field0_0x0._s_0.A;
    fVar5 = (param_2->Bloom5Tint).field0_0x0._s_0.G;
    fVar6 = (param_2->Bloom5Tint).field0_0x0._s_0.B;
    fVar7 = (param_2->Bloom5Tint).field0_0x0._s_0.A;
    (param_1->Bloom5Tint).field0_0x0._s_0.R =
         ((param_2->Bloom5Tint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->Bloom5Tint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->Bloom5Tint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->Bloom5Tint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  puVar49 = &param_1->field_0x6;
  if ((param_2->bOverride_Bloom5Size != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_Bloom5Size != '\0')) {
    param_1->bOverride_Bloom5Size = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->Bloom5Size =
         (param_2->Bloom5Size - param_1->Bloom5Size) * param_3 + param_1->Bloom5Size;
  }
  if (((bVar46 | param_2->field_0x6) & 0x40) != 0) {
    bVar54 = 1;
    *puVar49 = bVar46 | 0x40;
    fVar56 = (param_1->Bloom6Tint).field0_0x0._s_0.G;
    fVar2 = (param_1->Bloom6Tint).field0_0x0._s_0.R;
    fVar3 = (param_1->Bloom6Tint).field0_0x0._s_0.B;
    fVar4 = (param_1->Bloom6Tint).field0_0x0._s_0.A;
    fVar5 = (param_2->Bloom6Tint).field0_0x0._s_0.G;
    fVar6 = (param_2->Bloom6Tint).field0_0x0._s_0.B;
    fVar7 = (param_2->Bloom6Tint).field0_0x0._s_0.A;
    (param_1->Bloom6Tint).field0_0x0._s_0.R =
         ((param_2->Bloom6Tint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->Bloom6Tint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->Bloom6Tint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->Bloom6Tint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if (((bool)param_2->bOverride_Bloom6Size) || ((bool)param_1->bOverride_Bloom6Size)) {
    param_1->bOverride_Bloom6Size = '\x01';
    bVar54 = 1;
    param_1->Bloom6Size =
         (param_2->Bloom6Size - param_1->Bloom6Size) * param_3 + param_1->Bloom6Size;
  }
  puVar49 = &param_1->field_0x8;
  if ((param_2->bOverride_BloomDirtMaskIntensity != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_BloomDirtMaskIntensity != '\0')) {
    param_1->bOverride_BloomDirtMaskIntensity = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->BloomDirtMaskIntensity =
         (param_2->BloomDirtMaskIntensity - param_1->BloomDirtMaskIntensity) * param_3 +
         param_1->BloomDirtMaskIntensity;
  }
  if (((bVar46 | param_2->field_0x8) & 0x10) != 0) {
    bVar54 = 1;
    *puVar49 = bVar46 | 0x10;
    fVar56 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.G;
    fVar2 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.R;
    fVar3 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.B;
    fVar4 = (param_1->BloomDirtMaskTint).field0_0x0._s_0.A;
    fVar5 = (param_2->BloomDirtMaskTint).field0_0x0._s_0.G;
    fVar6 = (param_2->BloomDirtMaskTint).field0_0x0._s_0.B;
    fVar7 = (param_2->BloomDirtMaskTint).field0_0x0._s_0.A;
    (param_1->BloomDirtMaskTint).field0_0x0._s_0.R =
         ((param_2->BloomDirtMaskTint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->BloomDirtMaskTint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->BloomDirtMaskTint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->BloomDirtMaskTint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  puVar49 = &param_1->field_0x7;
  if ((param_2->bOverride_BloomConvolutionIntensity != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_BloomConvolutionIntensity != '\0')) {
    param_1->bOverride_BloomConvolutionIntensity = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->BloomConvolutionIntensity =
         (param_2->BloomConvolutionIntensity - param_1->BloomConvolutionIntensity) * param_3 +
         param_1->BloomConvolutionIntensity;
  }
  if ((param_2->bOverride_BloomConvolutionScatterDispersion != '\0') || ((bVar46 & 8) != 0)) {
    bVar46 = bVar46 | 8;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->BloomConvolutionScatterDispersion =
         (param_2->BloomConvolutionScatterDispersion - param_1->BloomConvolutionScatterDispersion) *
         param_3 + param_1->BloomConvolutionScatterDispersion;
  }
  if ((param_2->bOverride_BloomConvolutionSize != '\0') || ((bVar46 & 0x10) != 0)) {
    bVar46 = bVar46 | 0x10;
    bVar54 = 1;
    *puVar49 = bVar46;
    param_1->BloomConvolutionSize =
         (param_2->BloomConvolutionSize - param_1->BloomConvolutionSize) * param_3 +
         param_1->BloomConvolutionSize;
  }
  puVar49 = &param_1->field_0x7;
  if (((bVar46 | param_2->field_0x7) & 0x20) != 0) {
    *puVar49 = bVar46 | 0x20;
    bVar54 = 1;
    dVar9 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
    dVar10 = (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X;
    dVar11 = (param_2->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
    (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X =
         ((param_2->BloomConvolutionCenterUV).field0_0x0._s_0.X - dVar10) * (double)param_3 + dVar10
    ;
    (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y =
         (dVar11 - dVar9) * (double)param_3 + dVar9;
  }
  if (((bool)param_2->bOverride_BloomConvolutionPreFilterMin) ||
     ((bool)param_1->bOverride_BloomConvolutionPreFilterMin)) {
    param_1->bOverride_BloomConvolutionPreFilterMin = '\x01';
    bVar54 = 1;
    param_1->BloomConvolutionPreFilterMin =
         (param_2->BloomConvolutionPreFilterMin - param_1->BloomConvolutionPreFilterMin) * param_3 +
         param_1->BloomConvolutionPreFilterMin;
  }
  puVar49 = &param_1->field_0x8;
  if ((param_2->bOverride_BloomConvolutionPreFilterMax != 0) ||
     (bVar46 = *puVar49, param_1->bOverride_BloomConvolutionPreFilterMax != 0)) {
    param_1->bOverride_BloomConvolutionPreFilterMax = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->BloomConvolutionPreFilterMax =
         (param_2->BloomConvolutionPreFilterMax - param_1->BloomConvolutionPreFilterMax) * param_3 +
         param_1->BloomConvolutionPreFilterMax;
  }
  if (((bVar46 | param_2->field_0x8) & 2) != 0) {
    bVar54 = 1;
    *puVar49 = bVar46 | 2;
    param_1->BloomConvolutionPreFilterMult =
         (param_2->BloomConvolutionPreFilterMult - param_1->BloomConvolutionPreFilterMult) * param_3
         + param_1->BloomConvolutionPreFilterMult;
  }
  puVar49 = &param_1->field_0x4;
  if (((bool)param_2->bOverride_AmbientCubemapIntensity) ||
     (bVar46 = *puVar49, (bool)param_1->bOverride_AmbientCubemapIntensity)) {
    param_1->bOverride_AmbientCubemapIntensity = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->AmbientCubemapIntensity =
         (param_2->AmbientCubemapIntensity - param_1->AmbientCubemapIntensity) * param_3 +
         param_1->AmbientCubemapIntensity;
  }
  puVar50 = &param_1->field_0x8;
  if (((bVar46 | param_2->field_0x4) & 0x40) != 0) {
    bVar54 = 1;
    *puVar49 = bVar46 | 0x40;
    fVar56 = (param_1->AmbientCubemapTint).field0_0x0._s_0.G;
    fVar2 = (param_1->AmbientCubemapTint).field0_0x0._s_0.R;
    fVar3 = (param_1->AmbientCubemapTint).field0_0x0._s_0.B;
    fVar4 = (param_1->AmbientCubemapTint).field0_0x0._s_0.A;
    fVar5 = (param_2->AmbientCubemapTint).field0_0x0._s_0.G;
    fVar6 = (param_2->AmbientCubemapTint).field0_0x0._s_0.B;
    fVar7 = (param_2->AmbientCubemapTint).field0_0x0._s_0.A;
    (param_1->AmbientCubemapTint).field0_0x0._s_0.R =
         ((param_2->AmbientCubemapTint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->AmbientCubemapTint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->AmbientCubemapTint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->AmbientCubemapTint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if ((param_2->bOverride_CameraShutterSpeed != '\0') ||
     (bVar46 = *puVar50, param_1->bOverride_CameraShutterSpeed != '\0')) {
    param_1->bOverride_CameraShutterSpeed = '\x01';
    bVar54 = 1;
    bVar46 = *puVar50;
    param_1->CameraShutterSpeed =
         (param_2->CameraShutterSpeed - param_1->CameraShutterSpeed) * param_3 +
         param_1->CameraShutterSpeed;
  }
  if (((bool)param_2->bOverride_CameraISO) || ((char)bVar46 < '\0')) {
    bVar54 = 1;
    param_1->field_0x8 = bVar46 | 0x80;
    param_1->CameraISO = (param_2->CameraISO - param_1->CameraISO) * param_3 + param_1->CameraISO;
  }
  puVar49 = &param_1->field_0x9;
  if ((param_2->bOverride_AutoExposureLowPercent != '\0') ||
     (bVar46 = *puVar49, param_1->bOverride_AutoExposureLowPercent != '\0')) {
    param_1->bOverride_AutoExposureLowPercent = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->AutoExposureLowPercent =
         (param_2->AutoExposureLowPercent - param_1->AutoExposureLowPercent) * param_3 +
         param_1->AutoExposureLowPercent;
  }
  if ((param_2->bOverride_AutoExposureHighPercent != '\0') || ((bVar46 & 4) != 0)) {
    bVar46 = bVar46 | 4;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->AutoExposureHighPercent =
         (param_2->AutoExposureHighPercent - param_1->AutoExposureHighPercent) * param_3 +
         param_1->AutoExposureHighPercent;
  }
  if ((param_2->bOverride_AutoExposureMinBrightness != '\0') || ((bVar46 & 8) != 0)) {
    bVar46 = bVar46 | 8;
    bVar54 = 1;
    *puVar49 = bVar46;
    param_1->AutoExposureMinBrightness =
         (param_2->AutoExposureMinBrightness - param_1->AutoExposureMinBrightness) * param_3 +
         param_1->AutoExposureMinBrightness;
  }
  if ((param_2->bOverride_AutoExposureMaxBrightness != '\0') || ((bVar46 & 0x10) != 0)) {
    bVar46 = bVar46 | 0x10;
    param_1->field_0x9 = bVar46;
    bVar54 = 1;
    param_1->AutoExposureMaxBrightness =
         (param_2->AutoExposureMaxBrightness - param_1->AutoExposureMaxBrightness) * param_3 +
         param_1->AutoExposureMaxBrightness;
  }
  if ((param_2->bOverride_AutoExposureSpeedUp != '\0') || ((bVar46 & 0x40) != 0)) {
    bVar46 = bVar46 | 0x40;
    bVar54 = 1;
    param_1->field_0x9 = bVar46;
    param_1->AutoExposureSpeedUp =
         (param_2->AutoExposureSpeedUp - param_1->AutoExposureSpeedUp) * param_3 +
         param_1->AutoExposureSpeedUp;
  }
  if (((bool)param_2->bOverride_AutoExposureSpeedDown) || ((char)bVar46 < '\0')) {
    bVar54 = 1;
    param_1->field_0x9 = bVar46 | 0x80;
    param_1->AutoExposureSpeedDown =
         (param_2->AutoExposureSpeedDown - param_1->AutoExposureSpeedDown) * param_3 +
         param_1->AutoExposureSpeedDown;
  }
  puVar49 = &param_1->field_0xa;
  if ((param_2->bOverride_AutoExposureBias != 0) ||
     (bVar46 = *puVar49, param_1->bOverride_AutoExposureBias != 0)) {
    param_1->bOverride_AutoExposureBias = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->AutoExposureBias =
         (param_2->AutoExposureBias - param_1->AutoExposureBias) * param_3 +
         param_1->AutoExposureBias;
  }
  if ((param_2->bOverride_HistogramLogMin != '\0') || ((bVar46 & 0x10) != 0)) {
    bVar46 = bVar46 | 0x10;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->HistogramLogMin =
         (param_2->HistogramLogMin - param_1->HistogramLogMin) * param_3 + param_1->HistogramLogMin;
  }
  if ((param_2->bOverride_HistogramLogMax != '\0') || ((bVar46 & 0x20) != 0)) {
    bVar46 = bVar46 | 0x20;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->HistogramLogMax =
         (param_2->HistogramLogMax - param_1->HistogramLogMax) * param_3 + param_1->HistogramLogMax;
  }
  if (((param_2->bOverride_LocalExposureMethod != '\0') || ((bVar46 & 0x40) != 0)) && (bVar21)) {
    bVar46 = bVar46 | 0x40;
    bVar54 = 1;
    param_1->field_0xa = bVar46;
    param_1->LocalExposureMethod = param_2->LocalExposureMethod;
  }
  if (((bool)param_2->bOverride_LocalExposureContrastScale_DEPRECATED) || ((char)bVar46 < '\0')) {
    bVar54 = 1;
    param_1->field_0xa = bVar46 | 0x80;
    param_1->LocalExposureContrastScale_DEPRECATED =
         (param_2->LocalExposureContrastScale_DEPRECATED -
         param_1->LocalExposureContrastScale_DEPRECATED) * param_3 +
         param_1->LocalExposureContrastScale_DEPRECATED;
  }
  puVar49 = &param_1->field_0xb;
  if ((param_2->bOverride_LocalExposureHighlightContrastScale != 0) ||
     (bVar46 = *puVar49, param_1->bOverride_LocalExposureHighlightContrastScale != 0)) {
    param_1->bOverride_LocalExposureHighlightContrastScale = '\x01';
    bVar54 = 1;
    bVar46 = *puVar49;
    param_1->LocalExposureHighlightContrastScale =
         (param_2->LocalExposureHighlightContrastScale -
         param_1->LocalExposureHighlightContrastScale) * param_3 +
         param_1->LocalExposureHighlightContrastScale;
  }
  if ((param_2->bOverride_LocalExposureShadowContrastScale != '\0') || ((bVar46 & 2) != 0)) {
    bVar46 = bVar46 | 2;
    *puVar49 = bVar46;
    bVar54 = 1;
    param_1->LocalExposureShadowContrastScale =
         (param_2->LocalExposureShadowContrastScale - param_1->LocalExposureShadowContrastScale) *
         param_3 + param_1->LocalExposureShadowContrastScale;
  }
  if ((param_2->bOverride_LocalExposureHighlightThreshold != '\0') || ((bVar46 & 0x10) != 0)) {
    bVar46 = bVar46 | 0x10;
    bVar54 = 1;
    *puVar49 = bVar46;
    param_1->LocalExposureHighlightThreshold =
         (param_2->LocalExposureHighlightThreshold - param_1->LocalExposureHighlightThreshold) *
         param_3 + param_1->LocalExposureHighlightThreshold;
  }
  if ((param_2->bOverride_LocalExposureShadowThreshold != '\0') || ((bVar46 & 0x20) != 0)) {
    bVar46 = bVar46 | 0x20;
    param_1->field_0xb = bVar46;
    bVar54 = 1;
    param_1->LocalExposureShadowThreshold =
         (param_2->LocalExposureShadowThreshold - param_1->LocalExposureShadowThreshold) * param_3 +
         param_1->LocalExposureShadowThreshold;
  }
  if ((param_2->bOverride_LocalExposureDetailStrength != '\0') || ((bVar46 & 0x40) != 0)) {
    bVar46 = bVar46 | 0x40;
    bVar54 = 1;
    param_1->field_0xb = bVar46;
    param_1->LocalExposureDetailStrength =
         (param_2->LocalExposureDetailStrength - param_1->LocalExposureDetailStrength) * param_3 +
         param_1->LocalExposureDetailStrength;
  }
  if (((bool)param_2->bOverride_LocalExposureBlurredLuminanceBlend) || ((char)bVar46 < '\0')) {
    bVar54 = 1;
    param_1->field_0xb = bVar46 | 0x80;
    param_1->LocalExposureBlurredLuminanceBlend =
         (param_2->LocalExposureBlurredLuminanceBlend - param_1->LocalExposureBlurredLuminanceBlend)
         * param_3 + param_1->LocalExposureBlurredLuminanceBlend;
  }
  if ((param_2->bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0) ||
     (param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0)) {
    param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\x01';
    bVar54 = 1;
    param_1->LocalExposureBlurredLuminanceKernelSizePercent =
         (param_2->LocalExposureBlurredLuminanceKernelSizePercent -
         param_1->LocalExposureBlurredLuminanceKernelSizePercent) * param_3 +
         param_1->LocalExposureBlurredLuminanceKernelSizePercent;
  }
  if ((param_2->bOverride_LocalExposureHighlightThresholdStrength != '\0') ||
     (param_1->bOverride_LocalExposureHighlightThresholdStrength != '\0')) {
    param_1->bOverride_LocalExposureHighlightThresholdStrength = '\x01';
    bVar54 = 1;
    param_1->LocalExposureHighlightThresholdStrength =
         (param_2->LocalExposureHighlightThresholdStrength -
         param_1->LocalExposureHighlightThresholdStrength) * param_3 +
         param_1->LocalExposureHighlightThresholdStrength;
  }
  if ((param_2->bOverride_LocalExposureShadowThresholdStrength != '\0') ||
     (param_1->bOverride_LocalExposureShadowThresholdStrength != '\0')) {
    bVar54 = 1;
    param_1->bOverride_LocalExposureShadowThresholdStrength = '\x01';
    param_1->LocalExposureShadowThresholdStrength =
         (param_2->LocalExposureShadowThresholdStrength -
         param_1->LocalExposureShadowThresholdStrength) * param_3 +
         param_1->LocalExposureShadowThresholdStrength;
  }
  if ((param_2->bOverride_LocalExposureMiddleGreyBias != '\0') ||
     (param_1->bOverride_LocalExposureMiddleGreyBias != '\0')) {
    param_1->bOverride_LocalExposureMiddleGreyBias = '\x01';
    bVar54 = 1;
    param_1->LocalExposureMiddleGreyBias =
         (param_2->LocalExposureMiddleGreyBias - param_1->LocalExposureMiddleGreyBias) * param_3 +
         param_1->LocalExposureMiddleGreyBias;
  }
  if ((param_2->bOverride_LensFlareIntensity != '\0') ||
     (param_1->bOverride_LensFlareIntensity != '\0')) {
    bVar54 = 1;
    param_1->bOverride_LensFlareIntensity = '\x01';
    param_1->LensFlareIntensity =
         (param_2->LensFlareIntensity - param_1->LensFlareIntensity) * param_3 +
         param_1->LensFlareIntensity;
  }
  if ((param_2->bOverride_LensFlareTint != '\0') || (param_1->bOverride_LensFlareTint != '\0')) {
    param_1->bOverride_LensFlareTint = '\x01';
    bVar54 = 1;
    fVar56 = (param_1->LensFlareTint).field0_0x0._s_0.G;
    fVar2 = (param_1->LensFlareTint).field0_0x0._s_0.R;
    fVar3 = (param_1->LensFlareTint).field0_0x0._s_0.B;
    fVar4 = (param_1->LensFlareTint).field0_0x0._s_0.A;
    fVar5 = (param_2->LensFlareTint).field0_0x0._s_0.G;
    fVar6 = (param_2->LensFlareTint).field0_0x0._s_0.B;
    fVar7 = (param_2->LensFlareTint).field0_0x0._s_0.A;
    (param_1->LensFlareTint).field0_0x0._s_0.R =
         ((param_2->LensFlareTint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->LensFlareTint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->LensFlareTint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->LensFlareTint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if (((bool)param_2->bOverride_LensFlareBokehSize) || ((bool)param_1->bOverride_LensFlareBokehSize)
     ) {
    bVar54 = 1;
    param_1->bOverride_LensFlareBokehSize = '\x01';
    param_1->LensFlareBokehSize =
         (param_2->LensFlareBokehSize - param_1->LensFlareBokehSize) * param_3 +
         param_1->LensFlareBokehSize;
  }
  if ((param_2->bOverride_LensFlareThreshold != '\0') ||
     (param_1->bOverride_LensFlareThreshold != '\0')) {
    param_1->bOverride_LensFlareThreshold = '\x01';
    bVar54 = 1;
    param_1->LensFlareThreshold =
         (param_2->LensFlareThreshold - param_1->LensFlareThreshold) * param_3 +
         param_1->LensFlareThreshold;
  }
  if ((param_2->bOverride_VignetteIntensity != '\0') ||
     (param_1->bOverride_VignetteIntensity != '\0')) {
    param_1->bOverride_VignetteIntensity = '\x01';
    bVar54 = 1;
    param_1->VignetteIntensity =
         (param_2->VignetteIntensity - param_1->VignetteIntensity) * param_3 +
         param_1->VignetteIntensity;
  }
  if ((param_2->bOverride_Sharpen != '\0') || (param_1->bOverride_Sharpen != '\0')) {
    bVar54 = 1;
    param_1->bOverride_Sharpen = '\x01';
    param_1->Sharpen = (param_2->Sharpen - param_1->Sharpen) * param_3 + param_1->Sharpen;
  }
  if ((param_2->bOverride_FilmGrainIntensity != '\0') ||
     (param_1->bOverride_FilmGrainIntensity != '\0')) {
    param_1->bOverride_FilmGrainIntensity = '\x01';
    bVar54 = 1;
    param_1->FilmGrainIntensity =
         (param_2->FilmGrainIntensity - param_1->FilmGrainIntensity) * param_3 +
         param_1->FilmGrainIntensity;
  }
  if (((bool)param_2->bOverride_FilmGrainIntensityShadows) ||
     ((bool)param_1->bOverride_FilmGrainIntensityShadows)) {
    bVar54 = 1;
    param_1->bOverride_FilmGrainIntensityShadows = '\x01';
    param_1->FilmGrainIntensityShadows =
         (param_2->FilmGrainIntensityShadows - param_1->FilmGrainIntensityShadows) * param_3 +
         param_1->FilmGrainIntensityShadows;
  }
  if ((param_2->bOverride_FilmGrainIntensityMidtones != 0) ||
     (param_1->bOverride_FilmGrainIntensityMidtones != 0)) {
    param_1->bOverride_FilmGrainIntensityMidtones = '\x01';
    bVar54 = 1;
    param_1->FilmGrainIntensityMidtones =
         (param_2->FilmGrainIntensityMidtones - param_1->FilmGrainIntensityMidtones) * param_3 +
         param_1->FilmGrainIntensityMidtones;
  }
  if ((param_2->bOverride_FilmGrainIntensityHighlights != '\0') ||
     (param_1->bOverride_FilmGrainIntensityHighlights != '\0')) {
    param_1->bOverride_FilmGrainIntensityHighlights = '\x01';
    bVar54 = 1;
    param_1->FilmGrainIntensityHighlights =
         (param_2->FilmGrainIntensityHighlights - param_1->FilmGrainIntensityHighlights) * param_3 +
         param_1->FilmGrainIntensityHighlights;
  }
  if ((param_2->bOverride_FilmGrainShadowsMax != '\0') ||
     (param_1->bOverride_FilmGrainShadowsMax != '\0')) {
    bVar54 = 1;
    param_1->bOverride_FilmGrainShadowsMax = '\x01';
    param_1->FilmGrainShadowsMax =
         (param_2->FilmGrainShadowsMax - param_1->FilmGrainShadowsMax) * param_3 +
         param_1->FilmGrainShadowsMax;
  }
  if ((param_2->bOverride_FilmGrainHighlightsMin != '\0') ||
     (param_1->bOverride_FilmGrainHighlightsMin != '\0')) {
    param_1->bOverride_FilmGrainHighlightsMin = '\x01';
    bVar54 = 1;
    param_1->FilmGrainHighlightsMin =
         (param_2->FilmGrainHighlightsMin - param_1->FilmGrainHighlightsMin) * param_3 +
         param_1->FilmGrainHighlightsMin;
  }
  if ((param_2->bOverride_FilmGrainHighlightsMax != '\0') ||
     (param_1->bOverride_FilmGrainHighlightsMax != '\0')) {
    bVar54 = 1;
    param_1->bOverride_FilmGrainHighlightsMax = '\x01';
    param_1->FilmGrainHighlightsMax =
         (param_2->FilmGrainHighlightsMax - param_1->FilmGrainHighlightsMax) * param_3 +
         param_1->FilmGrainHighlightsMax;
  }
  if ((param_2->bOverride_FilmGrainTexelSize != '\0') ||
     (param_1->bOverride_FilmGrainTexelSize != '\0')) {
    param_1->bOverride_FilmGrainTexelSize = '\x01';
    bVar54 = 1;
    param_1->FilmGrainTexelSize =
         (param_2->FilmGrainTexelSize - param_1->FilmGrainTexelSize) * param_3 +
         param_1->FilmGrainTexelSize;
  }
  if (((bool)param_2->bOverride_AmbientOcclusionIntensity) ||
     ((bool)param_1->bOverride_AmbientOcclusionIntensity)) {
    bVar54 = 1;
    param_1->bOverride_AmbientOcclusionIntensity = '\x01';
    param_1->AmbientOcclusionIntensity =
         (param_2->AmbientOcclusionIntensity - param_1->AmbientOcclusionIntensity) * param_3 +
         param_1->AmbientOcclusionIntensity;
  }
  if ((param_2->bOverride_AmbientOcclusionStaticFraction != 0) ||
     (param_1->bOverride_AmbientOcclusionStaticFraction != 0)) {
    param_1->bOverride_AmbientOcclusionStaticFraction = '\x01';
    bVar54 = 1;
    param_1->AmbientOcclusionStaticFraction =
         (param_2->AmbientOcclusionStaticFraction - param_1->AmbientOcclusionStaticFraction) *
         param_3 + param_1->AmbientOcclusionStaticFraction;
  }
  if ((param_2->bOverride_AmbientOcclusionRadius != '\0') ||
     (param_1->bOverride_AmbientOcclusionRadius != '\0')) {
    param_1->bOverride_AmbientOcclusionRadius = '\x01';
    bVar54 = 1;
    param_1->AmbientOcclusionRadius =
         (param_2->AmbientOcclusionRadius - param_1->AmbientOcclusionRadius) * param_3 +
         param_1->AmbientOcclusionRadius;
  }
  if ((param_2->bOverride_AmbientOcclusionFadeDistance != '\0') ||
     (param_1->bOverride_AmbientOcclusionFadeDistance != '\0')) {
    bVar54 = 1;
    param_1->bOverride_AmbientOcclusionFadeDistance = '\x01';
    param_1->AmbientOcclusionFadeDistance =
         (param_2->AmbientOcclusionFadeDistance - param_1->AmbientOcclusionFadeDistance) * param_3 +
         param_1->AmbientOcclusionFadeDistance;
  }
  if ((param_2->bOverride_AmbientOcclusionFadeRadius != '\0') ||
     (param_1->bOverride_AmbientOcclusionFadeRadius != '\0')) {
    param_1->bOverride_AmbientOcclusionFadeRadius = '\x01';
    bVar54 = 1;
    param_1->AmbientOcclusionFadeRadius =
         (param_2->AmbientOcclusionFadeRadius - param_1->AmbientOcclusionFadeRadius) * param_3 +
         param_1->AmbientOcclusionFadeRadius;
  }
  if ((param_2->bOverride_AmbientOcclusionDistance_DEPRECATED != '\0') ||
     (param_1->bOverride_AmbientOcclusionDistance_DEPRECATED != '\0')) {
    bVar54 = 1;
    param_1->bOverride_AmbientOcclusionDistance_DEPRECATED = '\x01';
    param_1->AmbientOcclusionDistance_DEPRECATED =
         (param_2->AmbientOcclusionDistance_DEPRECATED -
         param_1->AmbientOcclusionDistance_DEPRECATED) * param_3 +
         param_1->AmbientOcclusionDistance_DEPRECATED;
  }
  if ((param_2->bOverride_AmbientOcclusionPower != '\0') ||
     (param_1->bOverride_AmbientOcclusionPower != '\0')) {
    param_1->bOverride_AmbientOcclusionPower = '\x01';
    bVar54 = 1;
    param_1->AmbientOcclusionPower =
         (param_2->AmbientOcclusionPower - param_1->AmbientOcclusionPower) * param_3 +
         param_1->AmbientOcclusionPower;
  }
  if (((bool)param_2->bOverride_AmbientOcclusionBias) ||
     ((bool)param_1->bOverride_AmbientOcclusionBias)) {
    bVar54 = 1;
    param_1->bOverride_AmbientOcclusionBias = '\x01';
    param_1->AmbientOcclusionBias =
         (param_2->AmbientOcclusionBias - param_1->AmbientOcclusionBias) * param_3 +
         param_1->AmbientOcclusionBias;
  }
  if ((param_2->bOverride_AmbientOcclusionQuality != 0) ||
     (param_1->bOverride_AmbientOcclusionQuality != 0)) {
    param_1->bOverride_AmbientOcclusionQuality = '\x01';
    bVar54 = 1;
    param_1->AmbientOcclusionQuality =
         (param_2->AmbientOcclusionQuality - param_1->AmbientOcclusionQuality) * param_3 +
         param_1->AmbientOcclusionQuality;
  }
  if ((param_2->bOverride_AmbientOcclusionMipBlend != '\0') ||
     (param_1->bOverride_AmbientOcclusionMipBlend != '\0')) {
    param_1->bOverride_AmbientOcclusionMipBlend = '\x01';
    bVar54 = 1;
    param_1->AmbientOcclusionMipBlend =
         (param_2->AmbientOcclusionMipBlend - param_1->AmbientOcclusionMipBlend) * param_3 +
         param_1->AmbientOcclusionMipBlend;
  }
  if ((param_2->bOverride_AmbientOcclusionMipScale != '\0') ||
     (param_1->bOverride_AmbientOcclusionMipScale != '\0')) {
    bVar54 = 1;
    param_1->bOverride_AmbientOcclusionMipScale = '\x01';
    param_1->AmbientOcclusionMipScale =
         (param_2->AmbientOcclusionMipScale - param_1->AmbientOcclusionMipScale) * param_3 +
         param_1->AmbientOcclusionMipScale;
  }
  if ((param_2->bOverride_AmbientOcclusionMipThreshold != '\0') ||
     (param_1->bOverride_AmbientOcclusionMipThreshold != '\0')) {
    param_1->bOverride_AmbientOcclusionMipThreshold = '\x01';
    bVar54 = 1;
    param_1->AmbientOcclusionMipThreshold =
         (param_2->AmbientOcclusionMipThreshold - param_1->AmbientOcclusionMipThreshold) * param_3 +
         param_1->AmbientOcclusionMipThreshold;
  }
  if ((param_2->bOverride_AmbientOcclusionTemporalBlendWeight != '\0') ||
     (param_1->bOverride_AmbientOcclusionTemporalBlendWeight != '\0')) {
    bVar54 = 1;
    param_1->bOverride_AmbientOcclusionTemporalBlendWeight = '\x01';
    param_1->AmbientOcclusionTemporalBlendWeight =
         (param_2->AmbientOcclusionTemporalBlendWeight -
         param_1->AmbientOcclusionTemporalBlendWeight) * param_3 +
         param_1->AmbientOcclusionTemporalBlendWeight;
  }
  if (((bool)param_2->bOverride_IndirectLightingColor) ||
     ((bool)param_1->bOverride_IndirectLightingColor)) {
    param_1->bOverride_IndirectLightingColor = '\x01';
    bVar54 = 1;
    fVar56 = (param_1->IndirectLightingColor).field0_0x0._s_0.G;
    fVar2 = (param_1->IndirectLightingColor).field0_0x0._s_0.R;
    fVar3 = (param_1->IndirectLightingColor).field0_0x0._s_0.B;
    fVar4 = (param_1->IndirectLightingColor).field0_0x0._s_0.A;
    fVar5 = (param_2->IndirectLightingColor).field0_0x0._s_0.G;
    fVar6 = (param_2->IndirectLightingColor).field0_0x0._s_0.B;
    fVar7 = (param_2->IndirectLightingColor).field0_0x0._s_0.A;
    (param_1->IndirectLightingColor).field0_0x0._s_0.R =
         ((param_2->IndirectLightingColor).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->IndirectLightingColor).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->IndirectLightingColor).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->IndirectLightingColor).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  puVar49 = &param_1->field_0x1a;
  if ((param_2->bOverride_IndirectLightingIntensity != 0) ||
     (param_1->bOverride_IndirectLightingIntensity != 0)) {
    param_1->bOverride_IndirectLightingIntensity = '\x01';
    bVar54 = 1;
    param_1->IndirectLightingIntensity =
         (param_2->IndirectLightingIntensity - param_1->IndirectLightingIntensity) * param_3 +
         param_1->IndirectLightingIntensity;
  }
  if (param_2->bOverride_DepthOfFieldFocalDistance != '\0') {
    fVar56 = param_1->DepthOfFieldFocalDistance;
    if ((fVar56 == 0.0) || (param_2->DepthOfFieldFocalDistance == 0.0)) {
      fVar56 = param_2->DepthOfFieldFocalDistance;
    }
    else {
      fVar56 = (param_2->DepthOfFieldFocalDistance - fVar56) * param_3 + fVar56;
    }
    bVar54 = 1;
    param_1->DepthOfFieldFocalDistance = fVar56;
  }
  if ((param_2->bOverride_DepthOfFieldFstop != '\0') ||
     (param_1->bOverride_DepthOfFieldFstop != '\0')) {
    param_1->bOverride_DepthOfFieldFstop = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldFstop =
         (param_2->DepthOfFieldFstop - param_1->DepthOfFieldFstop) * param_3 +
         param_1->DepthOfFieldFstop;
  }
  if ((param_2->bOverride_DepthOfFieldMinFstop != '\0') ||
     (param_1->bOverride_DepthOfFieldMinFstop != '\0')) {
    param_1->bOverride_DepthOfFieldMinFstop = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldMinFstop =
         (param_2->DepthOfFieldMinFstop - param_1->DepthOfFieldMinFstop) * param_3 +
         param_1->DepthOfFieldMinFstop;
  }
  if (((bool)param_2->bOverride_DepthOfFieldSensorWidth) ||
     ((bool)param_1->bOverride_DepthOfFieldSensorWidth)) {
    bVar54 = 1;
    param_1->bOverride_DepthOfFieldSensorWidth = '\x01';
    param_1->DepthOfFieldSensorWidth =
         (param_2->DepthOfFieldSensorWidth - param_1->DepthOfFieldSensorWidth) * param_3 +
         param_1->DepthOfFieldSensorWidth;
  }
  puVar49 = &param_1->field_0x1b;
  if ((param_2->bOverride_DepthOfFieldSqueezeFactor != 0) ||
     (param_1->bOverride_DepthOfFieldSqueezeFactor != 0)) {
    param_1->bOverride_DepthOfFieldSqueezeFactor = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldSqueezeFactor =
         (param_2->DepthOfFieldSqueezeFactor - param_1->DepthOfFieldSqueezeFactor) * param_3 +
         param_1->DepthOfFieldSqueezeFactor;
  }
  if ((param_2->bOverride_DepthOfFieldDepthBlurRadius != '\0') ||
     (param_1->bOverride_DepthOfFieldDepthBlurRadius != '\0')) {
    param_1->bOverride_DepthOfFieldDepthBlurRadius = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldDepthBlurRadius =
         (param_2->DepthOfFieldDepthBlurRadius - param_1->DepthOfFieldDepthBlurRadius) * param_3 +
         param_1->DepthOfFieldDepthBlurRadius;
  }
  if (((param_2->bOverride_DepthOfFieldUseHairDepth != '\0') ||
      (param_1->bOverride_DepthOfFieldUseHairDepth != '\0')) && (bVar21)) {
    param_1->bOverride_DepthOfFieldUseHairDepth = '\x01';
    bVar54 = 1;
    *(uint *)&param_1->field_0x66c =
         (ZPULL(*(undefined4 *)&param_1->field_0x66c,0,1) ^ param_2->DepthOfFieldUseHairDepth) & 1 ^
         *(undefined4 *)&param_1->field_0x66c;
  }
  if ((param_2->bOverride_DepthOfFieldDepthBlurAmount != '\0') ||
     (param_1->bOverride_DepthOfFieldDepthBlurAmount != '\0')) {
    param_1->bOverride_DepthOfFieldDepthBlurAmount = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldDepthBlurAmount =
         (param_2->DepthOfFieldDepthBlurAmount - param_1->DepthOfFieldDepthBlurAmount) * param_3 +
         param_1->DepthOfFieldDepthBlurAmount;
  }
  if ((param_2->bOverride_DepthOfFieldPetzvalBokeh != '\0') ||
     (param_1->bOverride_DepthOfFieldPetzvalBokeh != '\0')) {
    bVar54 = 1;
    param_1->bOverride_DepthOfFieldPetzvalBokeh = '\x01';
    param_1->DepthOfFieldPetzvalBokeh =
         (param_2->DepthOfFieldPetzvalBokeh - param_1->DepthOfFieldPetzvalBokeh) * param_3 +
         param_1->DepthOfFieldPetzvalBokeh;
  }
  if ((param_2->bOverride_DepthOfFieldPetzvalBokehFalloff != '\0') ||
     (param_1->bOverride_DepthOfFieldPetzvalBokehFalloff != '\0')) {
    param_1->bOverride_DepthOfFieldPetzvalBokehFalloff = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldPetzvalBokehFalloff =
         (param_2->DepthOfFieldPetzvalBokehFalloff - param_1->DepthOfFieldPetzvalBokehFalloff) *
         param_3 + param_1->DepthOfFieldPetzvalBokehFalloff;
  }
  if ((param_2->bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0') ||
     (param_1->bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0')) {
    bVar54 = 1;
    param_1->bOverride_DepthOfFieldPetzvalExclusionBoxExtents = '\x01';
    local_res20 = (param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.X;
    fStackX_24 = (param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.Y;
    local_res20 = ((param_2->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.X - local_res20
                  ) * param_3 + local_res20;
    fStackX_24 = ((param_2->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0._s_0.Y - fStackX_24)
                 * param_3 + fStackX_24;
    TVar42._s_0.Y = fStackX_24;
    TVar42._s_0.X = local_res20;
    (param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0 = TVar42;
  }
  if ((param_2->bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0') ||
     (param_1->bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0')) {
    param_1->bOverride_DepthOfFieldPetzvalExclusionBoxRadius = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldPetzvalExclusionBoxRadius =
         (param_2->DepthOfFieldPetzvalExclusionBoxRadius -
         param_1->DepthOfFieldPetzvalExclusionBoxRadius) * param_3 +
         param_1->DepthOfFieldPetzvalExclusionBoxRadius;
  }
  if ((param_2->bOverride_DepthOfFieldBarrelRadius != '\0') ||
     (param_1->bOverride_DepthOfFieldBarrelRadius != '\0')) {
    param_1->bOverride_DepthOfFieldBarrelRadius = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldBarrelRadius =
         (param_2->DepthOfFieldBarrelRadius - param_1->DepthOfFieldBarrelRadius) * param_3 +
         param_1->DepthOfFieldBarrelRadius;
  }
  if ((param_2->bOverride_DepthOfFieldBarrelLength != '\0') ||
     (param_1->bOverride_DepthOfFieldBarrelLength != '\0')) {
    param_1->bOverride_DepthOfFieldBarrelLength = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldBarrelLength =
         (param_2->DepthOfFieldBarrelLength - param_1->DepthOfFieldBarrelLength) * param_3 +
         param_1->DepthOfFieldBarrelLength;
  }
  bVar46 = param_2->field_0x1c;
  if (param_2->bOverride_DepthOfFieldMatteBoxFlags != 0) {
    fVar56 = param_2->DepthOfFieldMatteBoxFlags[0].Roll;
    bVar54 = 1;
    param_1->DepthOfFieldMatteBoxFlags[0].Pitch = param_2->DepthOfFieldMatteBoxFlags[0].Pitch;
    param_1->DepthOfFieldMatteBoxFlags[0].Roll = fVar56;
    param_1->DepthOfFieldMatteBoxFlags[0].Length = param_2->DepthOfFieldMatteBoxFlags[0].Length;
    fVar56 = param_2->DepthOfFieldMatteBoxFlags[1].Roll;
    param_1->DepthOfFieldMatteBoxFlags[1].Pitch = param_2->DepthOfFieldMatteBoxFlags[1].Pitch;
    param_1->DepthOfFieldMatteBoxFlags[1].Roll = fVar56;
    param_1->DepthOfFieldMatteBoxFlags[1].Length = param_2->DepthOfFieldMatteBoxFlags[1].Length;
    fVar56 = param_2->DepthOfFieldMatteBoxFlags[2].Roll;
    param_1->DepthOfFieldMatteBoxFlags[2].Pitch = param_2->DepthOfFieldMatteBoxFlags[2].Pitch;
    param_1->DepthOfFieldMatteBoxFlags[2].Roll = fVar56;
    param_1->DepthOfFieldMatteBoxFlags[2].Length = param_2->DepthOfFieldMatteBoxFlags[2].Length;
    bVar46 = param_2->field_0x1c;
  }
  if (((bVar46 & 0x10) != 0) || (param_1->bOverride_DepthOfFieldFocalRegion != '\0')) {
    param_1->bOverride_DepthOfFieldFocalRegion = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldFocalRegion =
         (param_2->DepthOfFieldFocalRegion - param_1->DepthOfFieldFocalRegion) * param_3 +
         param_1->DepthOfFieldFocalRegion;
  }
  if ((param_2->bOverride_DepthOfFieldNearTransitionRegion != '\0') ||
     (param_1->bOverride_DepthOfFieldNearTransitionRegion != '\0')) {
    bVar54 = 1;
    param_1->bOverride_DepthOfFieldNearTransitionRegion = '\x01';
    param_1->DepthOfFieldNearTransitionRegion =
         (param_2->DepthOfFieldNearTransitionRegion - param_1->DepthOfFieldNearTransitionRegion) *
         param_3 + param_1->DepthOfFieldNearTransitionRegion;
  }
  if ((param_2->bOverride_DepthOfFieldFarTransitionRegion != '\0') ||
     (param_1->bOverride_DepthOfFieldFarTransitionRegion != '\0')) {
    param_1->bOverride_DepthOfFieldFarTransitionRegion = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldFarTransitionRegion =
         (param_2->DepthOfFieldFarTransitionRegion - param_1->DepthOfFieldFarTransitionRegion) *
         param_3 + param_1->DepthOfFieldFarTransitionRegion;
  }
  if (((bool)param_2->bOverride_DepthOfFieldScale) || ((bool)param_1->bOverride_DepthOfFieldScale))
  {
    bVar54 = 1;
    param_1->bOverride_DepthOfFieldScale = '\x01';
    param_1->DepthOfFieldScale =
         (param_2->DepthOfFieldScale - param_1->DepthOfFieldScale) * param_3 +
         param_1->DepthOfFieldScale;
  }
  if ((param_2->bOverride_DepthOfFieldNearBlurSize != 0) ||
     (param_1->bOverride_DepthOfFieldNearBlurSize != 0)) {
    param_1->bOverride_DepthOfFieldNearBlurSize = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldNearBlurSize =
         (param_2->DepthOfFieldNearBlurSize - param_1->DepthOfFieldNearBlurSize) * param_3 +
         param_1->DepthOfFieldNearBlurSize;
  }
  if ((param_2->bOverride_DepthOfFieldFarBlurSize != '\0') ||
     (param_1->bOverride_DepthOfFieldFarBlurSize != '\0')) {
    param_1->bOverride_DepthOfFieldFarBlurSize = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldFarBlurSize =
         (param_2->DepthOfFieldFarBlurSize - param_1->DepthOfFieldFarBlurSize) * param_3 +
         param_1->DepthOfFieldFarBlurSize;
  }
  if ((param_2->bOverride_DepthOfFieldOcclusion != '\0') ||
     (param_1->bOverride_DepthOfFieldOcclusion != '\0')) {
    bVar54 = 1;
    param_1->bOverride_DepthOfFieldOcclusion = '\x01';
    param_1->DepthOfFieldOcclusion =
         (param_2->DepthOfFieldOcclusion - param_1->DepthOfFieldOcclusion) * param_3 +
         param_1->DepthOfFieldOcclusion;
  }
  if ((param_2->bOverride_DepthOfFieldSkyFocusDistance != '\0') ||
     (param_1->bOverride_DepthOfFieldSkyFocusDistance != '\0')) {
    param_1->bOverride_DepthOfFieldSkyFocusDistance = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldSkyFocusDistance =
         (param_2->DepthOfFieldSkyFocusDistance - param_1->DepthOfFieldSkyFocusDistance) * param_3 +
         param_1->DepthOfFieldSkyFocusDistance;
  }
  if ((param_2->bOverride_DepthOfFieldVignetteSize != '\0') ||
     (param_1->bOverride_DepthOfFieldVignetteSize != '\0')) {
    bVar54 = 1;
    param_1->bOverride_DepthOfFieldVignetteSize = '\x01';
    param_1->DepthOfFieldVignetteSize =
         (param_2->DepthOfFieldVignetteSize - param_1->DepthOfFieldVignetteSize) * param_3 +
         param_1->DepthOfFieldVignetteSize;
  }
  if (((bool)param_2->bOverride_DepthOfFieldAspectRatioScalar) ||
     ((bool)param_1->bOverride_DepthOfFieldAspectRatioScalar)) {
    param_1->bOverride_DepthOfFieldAspectRatioScalar = '\x01';
    bVar54 = 1;
    param_1->DepthOfFieldAspectRatioScalar =
         (param_2->DepthOfFieldAspectRatioScalar - param_1->DepthOfFieldAspectRatioScalar) * param_3
         + param_1->DepthOfFieldAspectRatioScalar;
  }
  if ((param_2->bOverride_MotionBlurAmount != '\0') || (param_1->bOverride_MotionBlurAmount != '\0')
     ) {
    bVar54 = 1;
    param_1->bOverride_MotionBlurAmount = '\x01';
    param_1->MotionBlurAmount =
         (param_2->MotionBlurAmount - param_1->MotionBlurAmount) * param_3 +
         param_1->MotionBlurAmount;
  }
  if (((bool)param_2->bOverride_MotionBlurMax) || ((bool)param_1->bOverride_MotionBlurMax)) {
    param_1->bOverride_MotionBlurMax = '\x01';
    bVar54 = 1;
    param_1->MotionBlurMax =
         (param_2->MotionBlurMax - param_1->MotionBlurMax) * param_3 + param_1->MotionBlurMax;
  }
  if ((param_2->bOverride_MotionBlurPerObjectSize != '\0') ||
     (param_1->bOverride_MotionBlurPerObjectSize != '\0')) {
    param_1->bOverride_MotionBlurPerObjectSize = '\x01';
    bVar54 = 1;
    param_1->MotionBlurPerObjectSize =
         (param_2->MotionBlurPerObjectSize - param_1->MotionBlurPerObjectSize) * param_3 +
         param_1->MotionBlurPerObjectSize;
  }
  if ((param_2->bOverride_ScreenSpaceReflectionQuality != '\0') ||
     (param_1->bOverride_ScreenSpaceReflectionQuality != '\0')) {
    param_1->bOverride_ScreenSpaceReflectionQuality = '\x01';
    bVar54 = 1;
    param_1->ScreenSpaceReflectionQuality =
         (param_2->ScreenSpaceReflectionQuality - param_1->ScreenSpaceReflectionQuality) * param_3 +
         param_1->ScreenSpaceReflectionQuality;
  }
  if ((param_2->bOverride_ScreenSpaceReflectionIntensity != '\0') ||
     (param_1->bOverride_ScreenSpaceReflectionIntensity != '\0')) {
    bVar54 = 1;
    param_1->bOverride_ScreenSpaceReflectionIntensity = '\x01';
    param_1->ScreenSpaceReflectionIntensity =
         (param_2->ScreenSpaceReflectionIntensity - param_1->ScreenSpaceReflectionIntensity) *
         param_3 + param_1->ScreenSpaceReflectionIntensity;
  }
  if (((bool)param_2->bOverride_ScreenSpaceReflectionMaxRoughness) ||
     ((bool)param_1->bOverride_ScreenSpaceReflectionMaxRoughness)) {
    param_1->bOverride_ScreenSpaceReflectionMaxRoughness = '\x01';
    bVar54 = 1;
    param_1->ScreenSpaceReflectionMaxRoughness =
         (param_2->ScreenSpaceReflectionMaxRoughness - param_1->ScreenSpaceReflectionMaxRoughness) *
         param_3 + param_1->ScreenSpaceReflectionMaxRoughness;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_TranslucencyType != 0) || (param_1->bOverride_TranslucencyType != 0)) &&
     (bVar21)) {
    param_1->bOverride_TranslucencyType = 1;
    bVar54 = 1;
    param_1->TranslucencyType = param_2->TranslucencyType;
  }
  if (((param_2->bOverride_RayTracingTranslucencyMaxRoughness != 0) ||
      (param_1->bOverride_RayTracingTranslucencyMaxRoughness != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencyMaxRoughness = 1;
    bVar54 = 1;
    param_1->RayTracingTranslucencyMaxRoughness = param_2->RayTracingTranslucencyMaxRoughness;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_RayTracingTranslucencyRefractionRays != 0) ||
      (param_1->bOverride_RayTracingTranslucencyRefractionRays != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencyRefractionRays = 1;
    bVar54 = 1;
    param_1->RayTracingTranslucencyRefractionRays = param_2->RayTracingTranslucencyRefractionRays;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_RayTracingTranslucencySamplesPerPixel != 0) ||
      (param_1->bOverride_RayTracingTranslucencySamplesPerPixel != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencySamplesPerPixel = 1;
    bVar54 = 1;
    param_1->RayTracingTranslucencySamplesPerPixel = param_2->RayTracingTranslucencySamplesPerPixel;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_RayTracingTranslucencyShadows != 0) ||
      (param_1->bOverride_RayTracingTranslucencyShadows != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencyShadows = 1;
    bVar54 = 1;
    param_1->RayTracingTranslucencyShadows = param_2->RayTracingTranslucencyShadows;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_RayTracingTranslucencyRefraction != 0) ||
      (param_1->bOverride_RayTracingTranslucencyRefraction != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencyRefraction = 1;
    bVar54 = 1;
    param_1->field_0x735 =
         (param_1->RayTracingTranslucencyRefraction ^ param_2->RayTracingTranslucencyRefraction) & 1
         ^ param_1->field_0x735;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0) ||
      (param_1->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents = 1;
    bVar54 = 1;
    param_1->RayTracingTranslucencyMaxPrimaryHitEvents =
         param_2->RayTracingTranslucencyMaxPrimaryHitEvents;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0) ||
      (param_1->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents = 1;
    bVar54 = 1;
    param_1->RayTracingTranslucencyMaxSecondaryHitEvents =
         param_2->RayTracingTranslucencyMaxSecondaryHitEvents;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0) ||
      (param_1->bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingTranslucencyUseRayTracedRefraction = 1;
    bVar54 = 1;
    param_1->field_0x735 = (param_1->field_0x735 ^ param_2->field_0x735) & 2 ^ param_1->field_0x735;
  }
  if (((param_2->bOverride_DynamicGlobalIlluminationMethod != 0) ||
      (param_1->bOverride_DynamicGlobalIlluminationMethod != 0)) && (bVar21)) {
    param_1->bOverride_DynamicGlobalIlluminationMethod = 1;
    bVar54 = 1;
    (param_1->DynamicGlobalIlluminationMethod).Value =
         (param_2->DynamicGlobalIlluminationMethod).Value;
  }
  if (((param_2->bOverride_LumenSurfaceCacheResolution != 0) ||
      (param_1->bOverride_LumenSurfaceCacheResolution != 0)) && (bVar21)) {
    param_1->bOverride_LumenSurfaceCacheResolution = '\x01';
    bVar54 = 1;
    param_1->LumenSurfaceCacheResolution = param_2->LumenSurfaceCacheResolution;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenSceneLightingQuality != 0) ||
      (param_1->bOverride_LumenSceneLightingQuality != 0)) && (bVar21)) {
    param_1->bOverride_LumenSceneLightingQuality = 1;
    bVar54 = 1;
    param_1->LumenSceneLightingQuality = param_2->LumenSceneLightingQuality;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenSceneDetail != 0) || (param_1->bOverride_LumenSceneDetail != 0)) &&
     (bVar21)) {
    param_1->bOverride_LumenSceneDetail = 1;
    bVar54 = 1;
    param_1->LumenSceneDetail = param_2->LumenSceneDetail;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenSceneViewDistance != 0) ||
      (param_1->bOverride_LumenSceneViewDistance != 0)) && (bVar21)) {
    param_1->bOverride_LumenSceneViewDistance = 1;
    bVar54 = 1;
    param_1->LumenSceneViewDistance = param_2->LumenSceneViewDistance;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenSceneLightingUpdateSpeed != 0) ||
      (param_1->bOverride_LumenSceneLightingUpdateSpeed != 0)) && (bVar21)) {
    param_1->bOverride_LumenSceneLightingUpdateSpeed = 1;
    bVar54 = 1;
    param_1->LumenSceneLightingUpdateSpeed = param_2->LumenSceneLightingUpdateSpeed;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenFinalGatherQuality != 0) ||
      (param_1->bOverride_LumenFinalGatherQuality != 0)) && (bVar21)) {
    param_1->bOverride_LumenFinalGatherQuality = 1;
    bVar54 = 1;
    param_1->LumenFinalGatherQuality = param_2->LumenFinalGatherQuality;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenFinalGatherLightingUpdateSpeed != 0) ||
      (param_1->bOverride_LumenFinalGatherLightingUpdateSpeed != 0)) && (bVar21)) {
    param_1->bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
    bVar54 = 1;
    param_1->LumenFinalGatherLightingUpdateSpeed = param_2->LumenFinalGatherLightingUpdateSpeed;
  }
  puVar49 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenFinalGatherScreenTraces != 0) ||
      (param_1->bOverride_LumenFinalGatherScreenTraces != 0)) && (bVar21)) {
    param_1->bOverride_LumenFinalGatherScreenTraces = 1;
    bVar54 = 1;
    param_1->field_0x410 =
         (param_1->LumenFinalGatherScreenTraces ^ param_2->LumenFinalGatherScreenTraces) & 1 ^
         param_1->field_0x410;
  }
  puVar50 = &param_1->field_0x20;
  if (((param_2->bOverride_LumenMaxTraceDistance != 0) ||
      (param_1->bOverride_LumenMaxTraceDistance != 0)) && (bVar21)) {
    param_1->bOverride_LumenMaxTraceDistance = 1;
    bVar54 = 1;
    param_1->LumenMaxTraceDistance = param_2->LumenMaxTraceDistance;
  }
  if ((param_2->bOverride_LumenDiffuseColorBoost != 0) ||
     (param_1->bOverride_LumenDiffuseColorBoost != 0)) {
    param_1->bOverride_LumenDiffuseColorBoost = 1;
    bVar54 = 1;
    param_1->LumenDiffuseColorBoost =
         (param_2->LumenDiffuseColorBoost - param_1->LumenDiffuseColorBoost) * param_3 +
         param_1->LumenDiffuseColorBoost;
  }
  if ((param_2->bOverride_LumenSkylightLeaking != 0) ||
     (param_1->bOverride_LumenSkylightLeaking != 0)) {
    param_1->bOverride_LumenSkylightLeaking = 1;
    bVar54 = 1;
    param_1->LumenSkylightLeaking =
         (param_2->LumenSkylightLeaking - param_1->LumenSkylightLeaking) * param_3 +
         param_1->LumenSkylightLeaking;
  }
  if ((param_2->bOverride_LumenSkylightLeakingTint != 0) ||
     (param_1->bOverride_LumenSkylightLeakingTint != 0)) {
    bVar54 = 1;
    param_1->bOverride_LumenSkylightLeakingTint = 1;
    fVar56 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.G;
    fVar2 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.R;
    fVar3 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.B;
    fVar4 = (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.A;
    fVar5 = (param_2->LumenSkylightLeakingTint).field0_0x0._s_0.G;
    fVar6 = (param_2->LumenSkylightLeakingTint).field0_0x0._s_0.B;
    fVar7 = (param_2->LumenSkylightLeakingTint).field0_0x0._s_0.A;
    (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.R =
         ((param_2->LumenSkylightLeakingTint).field0_0x0._s_0.R - fVar2) * param_3 + fVar2;
    (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.G = (fVar5 - fVar56) * param_3 + fVar56;
    (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.B = (fVar6 - fVar3) * param_3 + fVar3;
    (param_1->LumenSkylightLeakingTint).field0_0x0._s_0.A = (fVar7 - fVar4) * param_3 + fVar4;
  }
  if ((param_2->bOverride_LumenFullSkylightLeakingDistance != 0) ||
     (param_1->bOverride_LumenFullSkylightLeakingDistance != 0)) {
    param_1->bOverride_LumenFullSkylightLeakingDistance = 1;
    bVar54 = 1;
    param_1->LumenFullSkylightLeakingDistance =
         (param_2->LumenFullSkylightLeakingDistance - param_1->LumenFullSkylightLeakingDistance) *
         param_3 + param_1->LumenFullSkylightLeakingDistance;
  }
  puVar49 = &param_1->field_0x24;
  if (((param_2->bOverride_LumenRayLightingMode != 0) ||
      (param_1->bOverride_LumenRayLightingMode != 0)) && (bVar21)) {
    param_1->bOverride_LumenRayLightingMode = '\x01';
    bVar54 = 1;
    param_1->LumenRayLightingMode = param_2->LumenRayLightingMode;
  }
  if (((param_2->bOverride_LumenReflectionsScreenTraces != '\0') ||
      (param_1->bOverride_LumenReflectionsScreenTraces != '\0')) && (bVar21)) {
    param_1->bOverride_LumenReflectionsScreenTraces = '\x01';
    bVar54 = 1;
    param_1->field_0x440 =
         (param_1->LumenReflectionsScreenTraces ^ param_2->LumenReflectionsScreenTraces) & 1 ^
         param_1->field_0x440;
  }
  if (((param_2->bOverride_LumenFrontLayerTranslucencyReflections != '\0') ||
      (param_1->bOverride_LumenFrontLayerTranslucencyReflections != '\0')) && (bVar21)) {
    param_1->bOverride_LumenFrontLayerTranslucencyReflections = '\x01';
    bVar54 = 1;
    param_1->field_0x440 = (param_1->field_0x440 ^ param_2->field_0x440) & 2 ^ param_1->field_0x440;
  }
  puVar49 = &param_1->field_0x28;
  if (((param_2->bOverride_LumenMaxRoughnessToTraceReflections != 0) ||
      (param_1->bOverride_LumenMaxRoughnessToTraceReflections != 0)) && (bVar21)) {
    param_1->bOverride_LumenMaxRoughnessToTraceReflections = 1;
    bVar54 = 1;
    param_1->LumenMaxRoughnessToTraceReflections = param_2->LumenMaxRoughnessToTraceReflections;
  }
  if (((param_2->bOverride_LumenMaxReflectionBounces != 0) ||
      (param_1->bOverride_LumenMaxReflectionBounces != 0)) && (bVar21)) {
    param_1->bOverride_LumenMaxReflectionBounces = 1;
    bVar54 = 1;
    param_1->LumenMaxReflectionBounces = param_2->LumenMaxReflectionBounces;
  }
  if (((param_2->bOverride_LumenMaxRefractionBounces != 0) ||
      (param_1->bOverride_LumenMaxRefractionBounces != 0)) && (bVar21)) {
    param_1->bOverride_LumenMaxRefractionBounces = 1;
    bVar54 = 1;
    param_1->LumenMaxRefractionBounces = param_2->LumenMaxRefractionBounces;
  }
  if (((param_2->bOverride_ReflectionMethod != '\0') ||
      (param_1->bOverride_ReflectionMethod != '\0')) && (bVar21)) {
    param_1->bOverride_ReflectionMethod = '\x01';
    bVar54 = 1;
    (param_1->ReflectionMethod).Value = (param_2->ReflectionMethod).Value;
  }
  if (((param_2->bOverride_LumenReflectionQuality != '\0') ||
      (param_1->bOverride_LumenReflectionQuality != '\0')) && (bVar21)) {
    param_1->bOverride_LumenReflectionQuality = '\x01';
    bVar54 = 1;
    param_1->LumenReflectionQuality = param_2->LumenReflectionQuality;
  }
  puVar49 = &param_1->field_0x14;
  if (((param_2->bOverride_RayTracingAO != 0) || (param_1->bOverride_RayTracingAO != 0)) && (bVar21)
     ) {
    param_1->bOverride_RayTracingAO = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x638 =
         (ZPULL(*(undefined4 *)&param_1->field_0x638,0,1) ^ param_2->RayTracingAO) & 1 ^
         *(undefined4 *)&param_1->field_0x638;
  }
  if (((param_2->bOverride_RayTracingAOSamplesPerPixel != 0) ||
      (param_1->bOverride_RayTracingAOSamplesPerPixel != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingAOSamplesPerPixel = 1;
    bVar54 = 1;
    param_1->RayTracingAOSamplesPerPixel = param_2->RayTracingAOSamplesPerPixel;
  }
  puVar50 = &param_1->field_0x14;
  if (((param_2->bOverride_RayTracingAOIntensity != 0) ||
      (param_1->bOverride_RayTracingAOIntensity != 0)) && (bVar21)) {
    param_1->bOverride_RayTracingAOIntensity = 1;
    bVar54 = 1;
    param_1->RayTracingAOIntensity = param_2->RayTracingAOIntensity;
  }
  if (((param_2->bOverride_RayTracingAORadius != 0) || (param_1->bOverride_RayTracingAORadius != 0))
     && (bVar21)) {
    param_1->bOverride_RayTracingAORadius = 1;
    bVar54 = 1;
    param_1->RayTracingAORadius = param_2->RayTracingAORadius;
  }
  puVar49 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingMaxBounces != 0) ||
      (param_1->bOverride_PathTracingMaxBounces != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingMaxBounces = 1;
    bVar54 = 1;
    param_1->PathTracingMaxBounces = param_2->PathTracingMaxBounces;
  }
  if (((param_2->bOverride_PathTracingSamplesPerPixel != 0) ||
      (param_1->bOverride_PathTracingSamplesPerPixel != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingSamplesPerPixel = 1;
    bVar54 = 1;
    param_1->PathTracingSamplesPerPixel = param_2->PathTracingSamplesPerPixel;
  }
  if ((param_2->bOverride_PathTracingMaxPathIntensity != 0) ||
     (param_1->bOverride_PathTracingMaxPathIntensity != 0)) {
    param_1->bOverride_PathTracingMaxPathIntensity = 1;
    bVar54 = 1;
    param_1->PathTracingMaxPathIntensity =
         (param_2->PathTracingMaxPathIntensity - param_1->PathTracingMaxPathIntensity) * param_3 +
         param_1->PathTracingMaxPathIntensity;
  }
  puVar49 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingEnableEmissiveMaterials != 0) ||
      (param_1->bOverride_PathTracingEnableEmissiveMaterials != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingEnableEmissiveMaterials = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (ZPULL(*(undefined4 *)&param_1->field_0x744,0,1) ^
         param_2->PathTracingEnableEmissiveMaterials) & 1 ^ *(undefined4 *)&param_1->field_0x744;
  }
  puVar50 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingEnableReferenceDOF != 0) ||
      (param_1->bOverride_PathTracingEnableReferenceDOF != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingEnableReferenceDOF = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 2 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar49 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingEnableReferenceAtmosphere != 0) ||
      (param_1->bOverride_PathTracingEnableReferenceAtmosphere != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingEnableReferenceAtmosphere = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 4 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar50 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingEnableDenoiser != 0) ||
      (param_1->bOverride_PathTracingEnableDenoiser != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingEnableDenoiser = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 8 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar49 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingIncludeEmissive != 0) ||
      (param_1->bOverride_PathTracingIncludeEmissive != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingIncludeEmissive = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 0x10 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar50 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingIncludeDiffuse != 0) ||
      (param_1->bOverride_PathTracingIncludeDiffuse != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingIncludeDiffuse = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 0x20 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar49 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingIncludeIndirectDiffuse != 0) ||
      (param_1->bOverride_PathTracingIncludeIndirectDiffuse != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingIncludeIndirectDiffuse = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 0x40 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar50 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingIncludeSpecular != 0) ||
      (param_1->bOverride_PathTracingIncludeSpecular != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingIncludeSpecular = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 0x80 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar49 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingIncludeIndirectSpecular != 0) ||
      (param_1->bOverride_PathTracingIncludeIndirectSpecular != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingIncludeIndirectSpecular = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 0x100 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar50 = &param_1->field_0x30;
  if (((param_2->bOverride_PathTracingIncludeVolume != 0) ||
      (param_1->bOverride_PathTracingIncludeVolume != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingIncludeVolume = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 0x200 ^
         *(uint *)&param_1->field_0x744;
  }
  if (((param_2->bOverride_PathTracingIncludeIndirectVolume != 0) ||
      (param_1->bOverride_PathTracingIncludeIndirectVolume != 0)) && (bVar21)) {
    param_1->bOverride_PathTracingIncludeIndirectVolume = 1;
    bVar54 = 1;
    *(uint *)&param_1->field_0x744 =
         (*(uint *)&param_1->field_0x744 ^ *(uint *)&param_2->field_0x744) & 0x400 ^
         *(uint *)&param_1->field_0x744;
  }
  puVar49 = &param_1->field_0x1a;
  if ((param_2->bOverride_DepthOfFieldBladeCount == '\0') &&
     (param_1->bOverride_DepthOfFieldBladeCount == '\0')) {
    if (!bVar21) goto LAB_14835d38c;
  }
  else {
    if (!bVar21) goto LAB_14835d38c;
    param_1->bOverride_DepthOfFieldBladeCount = '\x01';
    param_1->DepthOfFieldBladeCount = param_2->DepthOfFieldBladeCount;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 = (param_2->AmbientCubemap).field0_0x0.DebugPtr, pUVar16 != (UTextureCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  bVar54 = 1;
  (param_1->AmbientCubemap).field0_0x0 = (param_2->AmbientCubemap).field0_0x0;
LAB_14835d38c:
  if ((param_2->bOverride_ColorGradingIntensity != '\0') ||
     (param_1->bOverride_ColorGradingIntensity != '\0')) {
    param_1->bOverride_ColorGradingIntensity = '\x01';
    bVar54 = 1;
    param_1->ColorGradingIntensity =
         (param_2->ColorGradingIntensity - param_1->ColorGradingIntensity) * param_3 +
         param_1->ColorGradingIntensity;
  }
  if (((param_2->bOverride_ColorGradingLUT != '\0') || (param_1->bOverride_ColorGradingLUT != '\0'))
     && (bVar21)) {
    param_1->bOverride_ColorGradingLUT = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 = (param_2->ColorGradingLUT).field0_0x0.DebugPtr, pUVar17 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    bVar54 = 1;
    (param_1->ColorGradingLUT).field0_0x0 = (param_2->ColorGradingLUT).field0_0x0;
  }
  if (((param_2->bOverride_BloomDirtMask != '\0') || (param_1->bOverride_BloomDirtMask != '\0')) &&
     (bVar21)) {
    param_1->bOverride_BloomDirtMask = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 = (param_2->BloomDirtMask).field0_0x0.DebugPtr, pUVar17 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    bVar54 = 1;
    (param_1->BloomDirtMask).field0_0x0 = (param_2->BloomDirtMask).field0_0x0;
  }
  if (((param_2->bOverride_BloomMethod != 0) || (param_1->bOverride_BloomMethod != 0)) && (bVar21))
  {
    param_1->bOverride_BloomMethod = '\x01';
    bVar54 = 1;
    (param_1->BloomMethod).Value = (param_2->BloomMethod).Value;
  }
  if (((param_2->bOverride_BloomConvolutionTexture != '\0') ||
      (param_1->bOverride_BloomConvolutionTexture != '\0')) && (bVar21)) {
    param_1->bOverride_BloomConvolutionTexture = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar18 = (param_2->BloomConvolutionTexture).field0_0x0.DebugPtr,
       pUVar18 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    bVar54 = 1;
    (param_1->BloomConvolutionTexture).field0_0x0 = (param_2->BloomConvolutionTexture).field0_0x0;
  }
  if (((param_2->bOverride_FilmGrainTexture != '\0') ||
      (param_1->bOverride_FilmGrainTexture != '\0')) && (bVar21)) {
    param_1->bOverride_FilmGrainTexture = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar18 = (param_2->FilmGrainTexture).field0_0x0.DebugPtr, pUVar18 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    bVar54 = 1;
    (param_1->FilmGrainTexture).field0_0x0 = (param_2->FilmGrainTexture).field0_0x0;
  }
  if (((param_2->bOverride_BloomConvolutionBufferScale != '\0') ||
      (param_1->bOverride_BloomConvolutionBufferScale != '\0')) && (bVar21)) {
    param_1->bOverride_BloomConvolutionBufferScale = '\x01';
    bVar54 = 1;
    param_1->BloomConvolutionBufferScale = param_2->BloomConvolutionBufferScale;
  }
  if (((param_2->bOverride_AutoExposureBiasCurve != '\0') ||
      (param_1->bOverride_AutoExposureBiasCurve != '\0')) && (bVar21)) {
    param_1->bOverride_AutoExposureBiasCurve = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar19 = (param_2->AutoExposureBiasCurve).field0_0x0.DebugPtr,
       pUVar19 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    bVar54 = 1;
    (param_1->AutoExposureBiasCurve).field0_0x0 = (param_2->AutoExposureBiasCurve).field0_0x0;
  }
  if (((param_2->bOverride_AutoExposureMeterMask != '\0') ||
      (param_1->bOverride_AutoExposureMeterMask != '\0')) && (bVar21)) {
    param_1->bOverride_AutoExposureMeterMask = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 = (param_2->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar17 != (UTexture *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    bVar54 = 1;
    (param_1->AutoExposureMeterMask).field0_0x0 = (param_2->AutoExposureMeterMask).field0_0x0;
  }
  if (((param_2->bOverride_LocalExposureHighlightContrastCurve != '\0') ||
      (param_1->bOverride_LocalExposureHighlightContrastCurve != '\0')) && (bVar21)) {
    param_1->bOverride_LocalExposureHighlightContrastCurve = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar19 = (param_2->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
       pUVar19 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    bVar54 = 1;
    (param_1->LocalExposureHighlightContrastCurve).field0_0x0 =
         (param_2->LocalExposureHighlightContrastCurve).field0_0x0;
  }
  if (((param_2->bOverride_LocalExposureShadowContrastCurve != '\0') ||
      (param_1->bOverride_LocalExposureShadowContrastCurve != '\0')) && (bVar21)) {
    param_1->bOverride_LocalExposureShadowContrastCurve = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar19 = (param_2->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
       pUVar19 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    bVar54 = 1;
    (param_1->LocalExposureShadowContrastCurve).field0_0x0 =
         (param_2->LocalExposureShadowContrastCurve).field0_0x0;
  }
  if (((param_2->bOverride_LensFlareBokehShape != 0) ||
      (param_1->bOverride_LensFlareBokehShape != 0)) && (bVar21)) {
    param_1->bOverride_LensFlareBokehShape = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar17 = (param_2->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar17 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    bVar54 = 1;
    (param_1->LensFlareBokehShape).field0_0x0 = (param_2->LensFlareBokehShape).field0_0x0;
  }
  if (param_2->bOverride_LensFlareTints != '\0') {
    pfVar44 = &param_2->LensFlareTints[1].field0_0x0._s_0.G;
    lVar47 = (longlong)param_1 - (longlong)param_2;
    lVar51 = 2;
    do {
      fVar56 = pfVar44[-4];
      fVar2 = pfVar44[-3];
      fVar3 = pfVar44[-2];
      *(float *)(lVar47 + -0x14 + (longlong)pfVar44) =
           (pfVar44[-5] - *(float *)(lVar47 + -0x14 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + -0x14 + (longlong)pfVar44);
      *(float *)(lVar47 + -0x10 + (longlong)pfVar44) =
           (fVar56 - *(float *)(lVar47 + -0x10 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + -0x10 + (longlong)pfVar44);
      *(float *)(lVar47 + -0xc + (longlong)pfVar44) =
           (fVar2 - *(float *)(lVar47 + -0xc + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + -0xc + (longlong)pfVar44);
      *(float *)(lVar47 + -8 + (longlong)pfVar44) =
           (fVar3 - *(float *)(lVar47 + -8 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + -8 + (longlong)pfVar44);
      fVar56 = *pfVar44;
      fVar2 = pfVar44[1];
      fVar3 = pfVar44[2];
      *(float *)(lVar47 + -4 + (longlong)pfVar44) =
           (((FLinearColor_u_0_s_0 *)(pfVar44 + -1))->R -
           *(float *)(lVar47 + -4 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + -4 + (longlong)pfVar44);
      *(float *)(lVar47 + (longlong)pfVar44) =
           (fVar56 - *(float *)(lVar47 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + (longlong)pfVar44);
      *(float *)(lVar47 + 4 + (longlong)pfVar44) =
           (fVar2 - *(float *)(lVar47 + 4 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 4 + (longlong)pfVar44);
      *(float *)(lVar47 + 8 + (longlong)pfVar44) =
           (fVar3 - *(float *)(lVar47 + 8 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 8 + (longlong)pfVar44);
      fVar56 = pfVar44[4];
      fVar2 = pfVar44[5];
      fVar3 = pfVar44[6];
      *(float *)(lVar47 + 0xc + (longlong)pfVar44) =
           (pfVar44[3] - *(float *)(lVar47 + 0xc + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0xc + (longlong)pfVar44);
      *(float *)(lVar47 + 0x10 + (longlong)pfVar44) =
           (fVar56 - *(float *)(lVar47 + 0x10 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0x10 + (longlong)pfVar44);
      *(float *)(lVar47 + 0x14 + (longlong)pfVar44) =
           (fVar2 - *(float *)(lVar47 + 0x14 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0x14 + (longlong)pfVar44);
      *(float *)(lVar47 + 0x18 + (longlong)pfVar44) =
           (fVar3 - *(float *)(lVar47 + 0x18 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0x18 + (longlong)pfVar44);
      fVar56 = pfVar44[8];
      fVar2 = pfVar44[9];
      fVar3 = pfVar44[10];
      *(float *)(lVar47 + 0x1c + (longlong)pfVar44) =
           (pfVar44[7] - *(float *)(lVar47 + 0x1c + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0x1c + (longlong)pfVar44);
      *(float *)(lVar47 + 0x20 + (longlong)pfVar44) =
           (fVar56 - *(float *)(lVar47 + 0x20 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0x20 + (longlong)pfVar44);
      *(float *)(lVar47 + 0x24 + (longlong)pfVar44) =
           (fVar2 - *(float *)(lVar47 + 0x24 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0x24 + (longlong)pfVar44);
      *(float *)(lVar47 + 0x28 + (longlong)pfVar44) =
           (fVar3 - *(float *)(lVar47 + 0x28 + (longlong)pfVar44)) * param_3 +
           *(float *)(lVar47 + 0x28 + (longlong)pfVar44);
      pfVar44 = pfVar44 + 0x10;
      lVar51 = lVar51 + -1;
    } while (lVar51 != 0);
    bVar54 = 1;
  }
  if ((param_2->bOverride_MobileHQGaussian != '\0') && (bVar21)) {
    bVar54 = 1;
    param_1->field_0x34 =
         param_1->field_0x34 ^ (param_1->bMobileHQGaussian ^ param_2->bMobileHQGaussian) & 1;
  }
  if (((param_2->bOverride_AutoExposureMethod != 0) || (param_1->bOverride_AutoExposureMethod != 0))
     && (bVar21)) {
    param_1->bOverride_AutoExposureMethod = '\x01';
    bVar54 = 1;
    (param_1->AutoExposureMethod).Value = (param_2->AutoExposureMethod).Value;
  }
  if (((param_2->bOverride_AmbientOcclusionRadiusInWS != '\0') ||
      (param_1->bOverride_AmbientOcclusionRadiusInWS != '\0')) && (bVar21)) {
    param_1->bOverride_AmbientOcclusionRadiusInWS = '\x01';
    bVar54 = 1;
    *(uint *)&param_1->field_0x60c =
         (ZPULL(*(undefined4 *)&param_1->field_0x60c,0,1) ^ param_2->AmbientOcclusionRadiusInWS) & 1
         ^ *(undefined4 *)&param_1->field_0x60c;
  }
  if (((param_2->bOverride_MotionBlurTargetFPS != 0) ||
      (param_1->bOverride_MotionBlurTargetFPS != 0)) && (bVar21)) {
    param_1->bOverride_MotionBlurTargetFPS = '\x01';
    bVar54 = 1;
    param_1->MotionBlurTargetFPS = param_2->MotionBlurTargetFPS;
  }
  if (((param_2->bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') ||
      (param_1->bOverride_AutoExposureApplyPhysicalCameraExposure != '\0')) && (bVar21)) {
    param_1->bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
    bVar54 = 1;
    *(uint *)&param_1->field_0x4a0 =
         (ZPULL(*(undefined4 *)&param_1->field_0x4a0,0,1) ^
         param_2->AutoExposureApplyPhysicalCameraExposure) & 1 ^
         *(undefined4 *)&param_1->field_0x4a0;
  }
  if (((param_2->bOverride_UserFlags != '\0') || (param_1->bOverride_UserFlags != '\0')) && (bVar21)
     ) {
    param_1->bOverride_UserFlags = '\x01';
    bVar54 = 1;
    param_1->UserFlags = param_2->UserFlags;
  }
  iVar43 = (param_1->WeightedBlendables).Array.ArrayNum;
  if ((iVar43 < 1) && ((param_2->WeightedBlendables).Array.ArrayNum < 1)) {
    bVar46 = 0;
  }
  else {
    bVar46 = 1;
  }
  pFVar53 = (param_1->WeightedBlendables).Array.AllocatorInstance.Data;
  pFVar45 = pFVar53 + (longlong)iVar43 * 0x10;
  do {
    if ((param_1->WeightedBlendables).Array.ArrayNum != iVar43) {
      `TCheckedPointerIterator<FWeightedBlendable,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    iVar15 = (param_2->WeightedBlendables).Array.ArrayNum;
    pFVar55 = (param_2->WeightedBlendables).Array.AllocatorInstance.Data;
    if (pFVar53 == pFVar45) {
      pFVar53 = pFVar55 + (longlong)iVar15 * 0x10;
      pFVar52 = &param_1->WeightedBlendables;
      do {
        if ((param_2->WeightedBlendables).Array.ArrayNum != iVar15) {
          `TCheckedPointerIterator<FWeightedBlendable_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar55 == pFVar53) {
          return (bool)(bVar54 | bVar46);
        }
        pFVar45 = (pFVar52->Array).AllocatorInstance.Data;
        pFVar48 = pFVar45 + (longlong)(param_1->WeightedBlendables).Array.ArrayNum * 0x10;
        if (pFVar45 != pFVar48) {
          do {
            if (*(longlong *)(pFVar45 + 8) == *(longlong *)(pFVar55 + 8)) goto LAB_14835da89;
            pFVar45 = pFVar45 + 0x10;
          } while (pFVar45 != pFVar48);
        }
        iVar43 = (param_1->WeightedBlendables).Array.ArrayNum;
        piVar1 = &(param_1->WeightedBlendables).Array.ArrayMax;
        fVar8 = *(float *)pFVar55;
        if (iVar43 == *piVar1) {
          iVar43 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pFVar52,piVar1);
        }
        (param_1->WeightedBlendables).Array.ArrayNum = iVar43 + 1;
        pFVar45 = (pFVar52->Array).AllocatorInstance.Data;
        pUVar20 = *(UObject **)(pFVar55 + 8);
        *(float *)(pFVar45 + (longlong)iVar43 * 0x10) = param_3 * fVar8;
        *(UObject **)(pFVar45 + (longlong)iVar43 * 0x10 + 8) = pUVar20;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar20);
        }
LAB_14835da89:
        pFVar55 = pFVar55 + 0x10;
      } while( true );
    }
    pFVar48 = pFVar55 + (longlong)iVar15 * 0x10;
    if (pFVar55 != pFVar48) {
      do {
        if (*(longlong *)(pFVar53 + 8) == *(longlong *)(pFVar55 + 8)) goto LAB_14835d9c3;
        pFVar55 = pFVar55 + 0x10;
      } while (pFVar55 != pFVar48);
    }
    *(float *)pFVar53 = (fVar8 - param_3) * *(float *)pFVar53;
LAB_14835d9c3:
    pFVar53 = pFVar53 + 0x10;
  } while( true );
}

// OverridePostProcessSettings @ 1483970e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __cdecl
FPostProcessUtils::OverridePostProcessSettings
          (FPostProcessSettings *param_1,FPostProcessSettings *param_2)

{
  UTextureCube *pUVar1;
  UTexture *pUVar2;
  UTexture2D *pUVar3;
  UCurveFloat *pUVar4;
  double dVar5;
  undefined8 uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  uchar uVar26;
  float fVar27;
  uchar uVar28;
  uchar uVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  bool bVar89;
  bool bVar90;
  bool bVar91;
  bool bVar92;
  bool bVar93;
  bool bVar94;
  bool bVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  bool bVar100;
  bool bVar101;
  bool bVar102;
  bool bVar103;
  bool bVar104;
  bool bVar105;
  bool bVar106;
  bool bVar107;
  bool bVar108;
  bool bVar109;
  bool bVar110;
  bool bVar111;
  bool bVar112;
  bool bVar113;
  bool bVar114;
  bool bVar115;
  bool bVar116;
  bool bVar117;
  bool bVar118;
  bool bVar119;
  bool bVar120;
  bool bVar121;
  bool bVar122;
  bool bVar123;
  bool bVar124;
  bool bVar125;
  bool bVar126;
  bool bVar127;
  bool bVar128;
  bool bVar129;
  bool bVar130;
  bool bVar131;
  bool bVar132;
  bool bVar133;
  bool bVar134;
  bool bVar135;
  bool bVar136;
  bool bVar137;
  bool bVar138;
  bool bVar139;
  bool bVar140;
  bool bVar141;
  bool bVar142;
  bool bVar143;
  bool bVar144;
  bool bVar145;
  bool bVar146;
  bool bVar147;
  bool bVar148;
  bool bVar149;
  bool bVar150;
  bool bVar151;
  bool bVar152;
  bool bVar153;
  bool bVar154;
  bool bVar155;
  bool bVar156;
  bool bVar157;
  bool bVar158;
  bool bVar159;
  bool bVar160;
  bool bVar161;
  bool bVar162;
  bool bVar163;
  bool bVar164;
  bool bVar165;
  bool bVar166;
  bool bVar167;
  bool bVar168;
  bool bVar169;
  bool bVar170;
  bool bVar171;
  bool bVar172;
  bool bVar173;
  bool bVar174;
  bool bVar175;
  bool bVar176;
  bool bVar177;
  bool bVar178;
  bool bVar179;
  bool bVar180;
  bool bVar181;
  bool bVar182;
  bool bVar183;
  bool bVar184;
  bool bVar185;
  bool bVar186;
  bool bVar187;
  bool bVar188;
  bool bVar189;
  bool bVar190;
  bool bVar191;
  bool bVar192;
  bool bVar193;
  bool bVar194;
  bool bVar195;
  bool bVar196;
  bool bVar197;
  bool bVar198;
  bool bVar199;
  bool bVar200;
  bool bVar201;
  bool bVar202;
  bool bVar203;
  bool bVar204;
  bool bVar205;
  bool bVar206;
  bool bVar207;
  bool bVar208;
  
  bVar34 = param_2->bOverride_TemperatureType != 0;
  if (bVar34) {
    param_1->bOverride_TemperatureType = '\x01';
    (param_1->TemperatureType).Value = (param_2->TemperatureType).Value;
  }
  bVar35 = param_2->bOverride_WhiteTemp != '\0';
  if (bVar35) {
    param_1->bOverride_WhiteTemp = '\x01';
    param_1->WhiteTemp = param_2->WhiteTemp;
  }
  bVar36 = param_2->bOverride_WhiteTint != '\0';
  if (bVar36) {
    param_1->bOverride_WhiteTint = '\x01';
    param_1->WhiteTint = param_2->WhiteTint;
  }
  bVar37 = param_2->bOverride_ColorSaturation != '\0';
  if (bVar37) {
    param_1->bOverride_ColorSaturation = '\x01';
    dVar5 = (param_2->ColorSaturation).field0_0x0._s_0.Y;
    (param_1->ColorSaturation).field0_0x0._s_0.X = (param_2->ColorSaturation).field0_0x0._s_0.X;
    (param_1->ColorSaturation).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorSaturation).field0_0x0._s_0.W;
    (param_1->ColorSaturation).field0_0x0._s_0.Z = (param_2->ColorSaturation).field0_0x0._s_0.Z;
    (param_1->ColorSaturation).field0_0x0._s_0.W = dVar5;
  }
  bVar38 = param_2->bOverride_ColorContrast != '\0';
  if (bVar38) {
    param_1->bOverride_ColorContrast = '\x01';
    dVar5 = (param_2->ColorContrast).field0_0x0._s_0.Y;
    (param_1->ColorContrast).field0_0x0._s_0.X = (param_2->ColorContrast).field0_0x0._s_0.X;
    (param_1->ColorContrast).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorContrast).field0_0x0._s_0.W;
    (param_1->ColorContrast).field0_0x0._s_0.Z = (param_2->ColorContrast).field0_0x0._s_0.Z;
    (param_1->ColorContrast).field0_0x0._s_0.W = dVar5;
  }
  bVar39 = param_2->bOverride_ColorGamma != '\0';
  if (bVar39) {
    param_1->bOverride_ColorGamma = '\x01';
    dVar5 = (param_2->ColorGamma).field0_0x0._s_0.Y;
    (param_1->ColorGamma).field0_0x0._s_0.X = (param_2->ColorGamma).field0_0x0._s_0.X;
    (param_1->ColorGamma).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGamma).field0_0x0._s_0.W;
    (param_1->ColorGamma).field0_0x0._s_0.Z = (param_2->ColorGamma).field0_0x0._s_0.Z;
    (param_1->ColorGamma).field0_0x0._s_0.W = dVar5;
  }
  bVar40 = param_2->bOverride_ColorGain != '\0';
  if (bVar40) {
    param_1->bOverride_ColorGain = '\x01';
    dVar5 = (param_2->ColorGain).field0_0x0._s_0.Y;
    (param_1->ColorGain).field0_0x0._s_0.X = (param_2->ColorGain).field0_0x0._s_0.X;
    (param_1->ColorGain).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGain).field0_0x0._s_0.W;
    (param_1->ColorGain).field0_0x0._s_0.Z = (param_2->ColorGain).field0_0x0._s_0.Z;
    (param_1->ColorGain).field0_0x0._s_0.W = dVar5;
  }
  uVar7 = param_2->bOverride_ColorOffset;
  if ((bool)uVar7) {
    param_1->bOverride_ColorOffset = '\x01';
    dVar5 = (param_2->ColorOffset).field0_0x0._s_0.Y;
    (param_1->ColorOffset).field0_0x0._s_0.X = (param_2->ColorOffset).field0_0x0._s_0.X;
    (param_1->ColorOffset).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorOffset).field0_0x0._s_0.W;
    (param_1->ColorOffset).field0_0x0._s_0.Z = (param_2->ColorOffset).field0_0x0._s_0.Z;
    (param_1->ColorOffset).field0_0x0._s_0.W = dVar5;
  }
  bVar41 = param_2->bOverride_ColorSaturationShadows != 0;
  if (bVar41) {
    param_1->bOverride_ColorSaturationShadows = '\x01';
    dVar5 = (param_2->ColorSaturationShadows).field0_0x0._s_0.Y;
    (param_1->ColorSaturationShadows).field0_0x0._s_0.X =
         (param_2->ColorSaturationShadows).field0_0x0._s_0.X;
    (param_1->ColorSaturationShadows).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorSaturationShadows).field0_0x0._s_0.W;
    (param_1->ColorSaturationShadows).field0_0x0._s_0.Z =
         (param_2->ColorSaturationShadows).field0_0x0._s_0.Z;
    (param_1->ColorSaturationShadows).field0_0x0._s_0.W = dVar5;
  }
  bVar42 = param_2->bOverride_ColorContrastShadows != '\0';
  if (bVar42) {
    param_1->bOverride_ColorContrastShadows = '\x01';
    dVar5 = (param_2->ColorContrastShadows).field0_0x0._s_0.Y;
    (param_1->ColorContrastShadows).field0_0x0._s_0.X =
         (param_2->ColorContrastShadows).field0_0x0._s_0.X;
    (param_1->ColorContrastShadows).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorContrastShadows).field0_0x0._s_0.W;
    (param_1->ColorContrastShadows).field0_0x0._s_0.Z =
         (param_2->ColorContrastShadows).field0_0x0._s_0.Z;
    (param_1->ColorContrastShadows).field0_0x0._s_0.W = dVar5;
  }
  bVar43 = param_2->bOverride_ColorGammaShadows != '\0';
  if (bVar43) {
    param_1->bOverride_ColorGammaShadows = '\x01';
    dVar5 = (param_2->ColorGammaShadows).field0_0x0._s_0.Y;
    (param_1->ColorGammaShadows).field0_0x0._s_0.X = (param_2->ColorGammaShadows).field0_0x0._s_0.X;
    (param_1->ColorGammaShadows).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGammaShadows).field0_0x0._s_0.W;
    (param_1->ColorGammaShadows).field0_0x0._s_0.Z = (param_2->ColorGammaShadows).field0_0x0._s_0.Z;
    (param_1->ColorGammaShadows).field0_0x0._s_0.W = dVar5;
  }
  bVar44 = param_2->bOverride_ColorGainShadows != '\0';
  if (bVar44) {
    param_1->bOverride_ColorGainShadows = '\x01';
    dVar5 = (param_2->ColorGainShadows).field0_0x0._s_0.Y;
    (param_1->ColorGainShadows).field0_0x0._s_0.X = (param_2->ColorGainShadows).field0_0x0._s_0.X;
    (param_1->ColorGainShadows).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGainShadows).field0_0x0._s_0.W;
    (param_1->ColorGainShadows).field0_0x0._s_0.Z = (param_2->ColorGainShadows).field0_0x0._s_0.Z;
    (param_1->ColorGainShadows).field0_0x0._s_0.W = dVar5;
  }
  bVar45 = param_2->bOverride_ColorOffsetShadows != '\0';
  if (bVar45) {
    param_1->bOverride_ColorOffsetShadows = '\x01';
    dVar5 = (param_2->ColorOffsetShadows).field0_0x0._s_0.Y;
    (param_1->ColorOffsetShadows).field0_0x0._s_0.X =
         (param_2->ColorOffsetShadows).field0_0x0._s_0.X;
    (param_1->ColorOffsetShadows).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorOffsetShadows).field0_0x0._s_0.W;
    (param_1->ColorOffsetShadows).field0_0x0._s_0.Z =
         (param_2->ColorOffsetShadows).field0_0x0._s_0.Z;
    (param_1->ColorOffsetShadows).field0_0x0._s_0.W = dVar5;
  }
  bVar46 = param_2->bOverride_ColorSaturationMidtones != '\0';
  if (bVar46) {
    param_1->bOverride_ColorSaturationMidtones = '\x01';
    dVar5 = (param_2->ColorSaturationMidtones).field0_0x0._s_0.Y;
    (param_1->ColorSaturationMidtones).field0_0x0._s_0.X =
         (param_2->ColorSaturationMidtones).field0_0x0._s_0.X;
    (param_1->ColorSaturationMidtones).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorSaturationMidtones).field0_0x0._s_0.W;
    (param_1->ColorSaturationMidtones).field0_0x0._s_0.Z =
         (param_2->ColorSaturationMidtones).field0_0x0._s_0.Z;
    (param_1->ColorSaturationMidtones).field0_0x0._s_0.W = dVar5;
  }
  bVar47 = param_2->bOverride_ColorContrastMidtones != '\0';
  if (bVar47) {
    param_1->bOverride_ColorContrastMidtones = '\x01';
    dVar5 = (param_2->ColorContrastMidtones).field0_0x0._s_0.Y;
    (param_1->ColorContrastMidtones).field0_0x0._s_0.X =
         (param_2->ColorContrastMidtones).field0_0x0._s_0.X;
    (param_1->ColorContrastMidtones).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorContrastMidtones).field0_0x0._s_0.W;
    (param_1->ColorContrastMidtones).field0_0x0._s_0.Z =
         (param_2->ColorContrastMidtones).field0_0x0._s_0.Z;
    (param_1->ColorContrastMidtones).field0_0x0._s_0.W = dVar5;
  }
  uVar8 = param_2->bOverride_ColorGammaMidtones;
  if ((bool)uVar8) {
    param_1->bOverride_ColorGammaMidtones = '\x01';
    dVar5 = (param_2->ColorGammaMidtones).field0_0x0._s_0.Y;
    (param_1->ColorGammaMidtones).field0_0x0._s_0.X =
         (param_2->ColorGammaMidtones).field0_0x0._s_0.X;
    (param_1->ColorGammaMidtones).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGammaMidtones).field0_0x0._s_0.W;
    (param_1->ColorGammaMidtones).field0_0x0._s_0.Z =
         (param_2->ColorGammaMidtones).field0_0x0._s_0.Z;
    (param_1->ColorGammaMidtones).field0_0x0._s_0.W = dVar5;
  }
  bVar48 = param_2->bOverride_ColorGainMidtones != 0;
  if (bVar48) {
    param_1->bOverride_ColorGainMidtones = '\x01';
    dVar5 = (param_2->ColorGainMidtones).field0_0x0._s_0.Y;
    (param_1->ColorGainMidtones).field0_0x0._s_0.X = (param_2->ColorGainMidtones).field0_0x0._s_0.X;
    (param_1->ColorGainMidtones).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGainMidtones).field0_0x0._s_0.W;
    (param_1->ColorGainMidtones).field0_0x0._s_0.Z = (param_2->ColorGainMidtones).field0_0x0._s_0.Z;
    (param_1->ColorGainMidtones).field0_0x0._s_0.W = dVar5;
  }
  bVar49 = param_2->bOverride_ColorOffsetMidtones != '\0';
  if (bVar49) {
    param_1->bOverride_ColorOffsetMidtones = '\x01';
    dVar5 = (param_2->ColorOffsetMidtones).field0_0x0._s_0.Y;
    (param_1->ColorOffsetMidtones).field0_0x0._s_0.X =
         (param_2->ColorOffsetMidtones).field0_0x0._s_0.X;
    (param_1->ColorOffsetMidtones).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorOffsetMidtones).field0_0x0._s_0.W;
    (param_1->ColorOffsetMidtones).field0_0x0._s_0.Z =
         (param_2->ColorOffsetMidtones).field0_0x0._s_0.Z;
    (param_1->ColorOffsetMidtones).field0_0x0._s_0.W = dVar5;
  }
  bVar50 = param_2->bOverride_ColorSaturationHighlights != '\0';
  if (bVar50) {
    param_1->bOverride_ColorSaturationHighlights = '\x01';
    dVar5 = (param_2->ColorSaturationHighlights).field0_0x0._s_0.Y;
    (param_1->ColorSaturationHighlights).field0_0x0._s_0.X =
         (param_2->ColorSaturationHighlights).field0_0x0._s_0.X;
    (param_1->ColorSaturationHighlights).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorSaturationHighlights).field0_0x0._s_0.W;
    (param_1->ColorSaturationHighlights).field0_0x0._s_0.Z =
         (param_2->ColorSaturationHighlights).field0_0x0._s_0.Z;
    (param_1->ColorSaturationHighlights).field0_0x0._s_0.W = dVar5;
  }
  bVar51 = param_2->bOverride_ColorContrastHighlights != '\0';
  if (bVar51) {
    param_1->bOverride_ColorContrastHighlights = '\x01';
    dVar5 = (param_2->ColorContrastHighlights).field0_0x0._s_0.Y;
    (param_1->ColorContrastHighlights).field0_0x0._s_0.X =
         (param_2->ColorContrastHighlights).field0_0x0._s_0.X;
    (param_1->ColorContrastHighlights).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorContrastHighlights).field0_0x0._s_0.W;
    (param_1->ColorContrastHighlights).field0_0x0._s_0.Z =
         (param_2->ColorContrastHighlights).field0_0x0._s_0.Z;
    (param_1->ColorContrastHighlights).field0_0x0._s_0.W = dVar5;
  }
  bVar52 = param_2->bOverride_ColorGammaHighlights != '\0';
  if (bVar52) {
    param_1->bOverride_ColorGammaHighlights = '\x01';
    dVar5 = (param_2->ColorGammaHighlights).field0_0x0._s_0.Y;
    (param_1->ColorGammaHighlights).field0_0x0._s_0.X =
         (param_2->ColorGammaHighlights).field0_0x0._s_0.X;
    (param_1->ColorGammaHighlights).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGammaHighlights).field0_0x0._s_0.W;
    (param_1->ColorGammaHighlights).field0_0x0._s_0.Z =
         (param_2->ColorGammaHighlights).field0_0x0._s_0.Z;
    (param_1->ColorGammaHighlights).field0_0x0._s_0.W = dVar5;
  }
  bVar53 = param_2->bOverride_ColorGainHighlights != '\0';
  if (bVar53) {
    param_1->bOverride_ColorGainHighlights = '\x01';
    dVar5 = (param_2->ColorGainHighlights).field0_0x0._s_0.Y;
    (param_1->ColorGainHighlights).field0_0x0._s_0.X =
         (param_2->ColorGainHighlights).field0_0x0._s_0.X;
    (param_1->ColorGainHighlights).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorGainHighlights).field0_0x0._s_0.W;
    (param_1->ColorGainHighlights).field0_0x0._s_0.Z =
         (param_2->ColorGainHighlights).field0_0x0._s_0.Z;
    (param_1->ColorGainHighlights).field0_0x0._s_0.W = dVar5;
  }
  bVar54 = param_2->bOverride_ColorOffsetHighlights != '\0';
  if (bVar54) {
    param_1->bOverride_ColorOffsetHighlights = '\x01';
    dVar5 = (param_2->ColorOffsetHighlights).field0_0x0._s_0.Y;
    (param_1->ColorOffsetHighlights).field0_0x0._s_0.X =
         (param_2->ColorOffsetHighlights).field0_0x0._s_0.X;
    (param_1->ColorOffsetHighlights).field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_2->ColorOffsetHighlights).field0_0x0._s_0.W;
    (param_1->ColorOffsetHighlights).field0_0x0._s_0.Z =
         (param_2->ColorOffsetHighlights).field0_0x0._s_0.Z;
    (param_1->ColorOffsetHighlights).field0_0x0._s_0.W = dVar5;
  }
  uVar9 = param_2->bOverride_ColorCorrectionShadowsMax;
  if ((bool)uVar9) {
    param_1->bOverride_ColorCorrectionShadowsMax = '\x01';
    param_1->ColorCorrectionShadowsMax = param_2->ColorCorrectionShadowsMax;
  }
  bVar55 = param_2->bOverride_ColorCorrectionHighlightsMin != 0;
  if (bVar55) {
    param_1->bOverride_ColorCorrectionHighlightsMin = '\x01';
    param_1->ColorCorrectionHighlightsMin = param_2->ColorCorrectionHighlightsMin;
  }
  bVar56 = param_2->bOverride_ColorCorrectionHighlightsMax != '\0';
  if (bVar56) {
    param_1->bOverride_ColorCorrectionHighlightsMax = '\x01';
    param_1->ColorCorrectionHighlightsMax = param_2->ColorCorrectionHighlightsMax;
  }
  bVar57 = param_2->bOverride_BlueCorrection != '\0';
  if (bVar57) {
    param_1->bOverride_BlueCorrection = '\x01';
    param_1->BlueCorrection = param_2->BlueCorrection;
  }
  bVar58 = param_2->bOverride_ExpandGamut != '\0';
  if (bVar58) {
    param_1->bOverride_ExpandGamut = '\x01';
    param_1->ExpandGamut = param_2->ExpandGamut;
  }
  bVar59 = param_2->bOverride_ToneCurveAmount != '\0';
  if (bVar59) {
    param_1->bOverride_ToneCurveAmount = '\x01';
    param_1->ToneCurveAmount = param_2->ToneCurveAmount;
  }
  bVar60 = param_2->bOverride_FilmSlope != '\0';
  if (bVar60) {
    param_1->bOverride_FilmSlope = '\x01';
    param_1->FilmSlope = param_2->FilmSlope;
  }
  bVar61 = param_2->bOverride_FilmToe != '\0';
  if (bVar61) {
    param_1->bOverride_FilmToe = '\x01';
    param_1->FilmToe = param_2->FilmToe;
  }
  uVar10 = param_2->bOverride_FilmShoulder;
  if ((bool)uVar10) {
    param_1->bOverride_FilmShoulder = '\x01';
    param_1->FilmShoulder = param_2->FilmShoulder;
  }
  bVar62 = param_2->bOverride_FilmBlackClip != 0;
  if (bVar62) {
    param_1->bOverride_FilmBlackClip = '\x01';
    param_1->FilmBlackClip = param_2->FilmBlackClip;
  }
  bVar63 = param_2->bOverride_FilmWhiteClip != '\0';
  if (bVar63) {
    param_1->bOverride_FilmWhiteClip = '\x01';
    param_1->FilmWhiteClip = param_2->FilmWhiteClip;
  }
  bVar64 = param_2->bOverride_SceneColorTint != '\0';
  if (bVar64) {
    param_1->bOverride_SceneColorTint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->SceneColorTint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->SceneColorTint).field0_0x0 =
         *(undefined8 *)&(param_2->SceneColorTint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->SceneColorTint).field0_0x0 + 8) = uVar6;
  }
  bVar65 = param_2->bOverride_SceneFringeIntensity != '\0';
  if (bVar65) {
    param_1->bOverride_SceneFringeIntensity = '\x01';
    param_1->SceneFringeIntensity = param_2->SceneFringeIntensity;
  }
  bVar66 = param_2->bOverride_ChromaticAberrationStartOffset != '\0';
  if (bVar66) {
    param_1->bOverride_ChromaticAberrationStartOffset = '\x01';
    param_1->ChromaticAberrationStartOffset = param_2->ChromaticAberrationStartOffset;
  }
  bVar67 = param_2->bOverride_BloomIntensity != '\0';
  if (bVar67) {
    param_1->bOverride_BloomIntensity = '\x01';
    param_1->BloomIntensity = param_2->BloomIntensity;
  }
  bVar68 = param_2->bOverride_BloomGaussianIntensity != '\0';
  if (bVar68) {
    param_1->bOverride_BloomGaussianIntensity = '\x01';
    param_1->BloomGaussianIntensity = param_2->BloomGaussianIntensity;
  }
  bVar69 = param_2->bOverride_BloomThreshold != '\0';
  if (bVar69) {
    param_1->bOverride_BloomThreshold = '\x01';
    param_1->BloomThreshold = param_2->BloomThreshold;
  }
  bVar70 = param_2->bOverride_Bloom1Tint != '\0';
  if (bVar70) {
    param_1->bOverride_Bloom1Tint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->Bloom1Tint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->Bloom1Tint).field0_0x0 =
         *(undefined8 *)&(param_2->Bloom1Tint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->Bloom1Tint).field0_0x0 + 8) = uVar6;
  }
  bVar71 = param_2->bOverride_BloomSizeScale != 0;
  if (bVar71) {
    param_1->bOverride_BloomSizeScale = '\x01';
    param_1->BloomSizeScale = param_2->BloomSizeScale;
  }
  bVar72 = param_2->bOverride_Bloom1Size != '\0';
  if (bVar72) {
    param_1->bOverride_Bloom1Size = '\x01';
    param_1->Bloom1Size = param_2->Bloom1Size;
  }
  uVar11 = param_2->bOverride_Bloom2Tint;
  if ((bool)uVar11) {
    param_1->bOverride_Bloom2Tint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->Bloom2Tint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->Bloom2Tint).field0_0x0 =
         *(undefined8 *)&(param_2->Bloom2Tint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->Bloom2Tint).field0_0x0 + 8) = uVar6;
  }
  bVar73 = param_2->bOverride_Bloom2Size != '\0';
  if (bVar73) {
    param_1->bOverride_Bloom2Size = '\x01';
    param_1->Bloom2Size = param_2->Bloom2Size;
  }
  bVar74 = param_2->bOverride_Bloom3Tint != 0;
  if (bVar74) {
    param_1->bOverride_Bloom3Tint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->Bloom3Tint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->Bloom3Tint).field0_0x0 =
         *(undefined8 *)&(param_2->Bloom3Tint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->Bloom3Tint).field0_0x0 + 8) = uVar6;
  }
  bVar75 = param_2->bOverride_Bloom3Size != '\0';
  if (bVar75) {
    param_1->bOverride_Bloom3Size = '\x01';
    param_1->Bloom3Size = param_2->Bloom3Size;
  }
  bVar76 = param_2->bOverride_Bloom4Tint != '\0';
  if (bVar76) {
    param_1->bOverride_Bloom4Tint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->Bloom4Tint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->Bloom4Tint).field0_0x0 =
         *(undefined8 *)&(param_2->Bloom4Tint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->Bloom4Tint).field0_0x0 + 8) = uVar6;
  }
  bVar77 = param_2->bOverride_Bloom4Size != '\0';
  if (bVar77) {
    param_1->bOverride_Bloom4Size = '\x01';
    param_1->Bloom4Size = param_2->Bloom4Size;
  }
  bVar78 = param_2->bOverride_Bloom5Tint != '\0';
  if (bVar78) {
    param_1->bOverride_Bloom5Tint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->Bloom5Tint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->Bloom5Tint).field0_0x0 =
         *(undefined8 *)&(param_2->Bloom5Tint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->Bloom5Tint).field0_0x0 + 8) = uVar6;
  }
  bVar79 = param_2->bOverride_Bloom5Size != '\0';
  if (bVar79) {
    param_1->bOverride_Bloom5Size = '\x01';
    param_1->Bloom5Size = param_2->Bloom5Size;
  }
  bVar80 = param_2->bOverride_Bloom6Tint != '\0';
  if (bVar80) {
    param_1->bOverride_Bloom6Tint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->Bloom6Tint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->Bloom6Tint).field0_0x0 =
         *(undefined8 *)&(param_2->Bloom6Tint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->Bloom6Tint).field0_0x0 + 8) = uVar6;
  }
  uVar12 = param_2->bOverride_Bloom6Size;
  if ((bool)uVar12) {
    param_1->bOverride_Bloom6Size = '\x01';
    param_1->Bloom6Size = param_2->Bloom6Size;
  }
  bVar81 = param_2->bOverride_BloomDirtMaskIntensity != '\0';
  if (bVar81) {
    param_1->bOverride_BloomDirtMaskIntensity = '\x01';
    param_1->BloomDirtMaskIntensity = param_2->BloomDirtMaskIntensity;
  }
  bVar82 = param_2->bOverride_BloomDirtMaskTint != '\0';
  if (bVar82) {
    param_1->bOverride_BloomDirtMaskTint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->BloomDirtMaskTint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->BloomDirtMaskTint).field0_0x0 =
         *(undefined8 *)&(param_2->BloomDirtMaskTint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->BloomDirtMaskTint).field0_0x0 + 8) = uVar6;
  }
  bVar83 = param_2->bOverride_BloomConvolutionIntensity != '\0';
  if (bVar83) {
    param_1->bOverride_BloomConvolutionIntensity = '\x01';
    param_1->BloomConvolutionIntensity = param_2->BloomConvolutionIntensity;
  }
  bVar84 = param_2->bOverride_BloomConvolutionScatterDispersion != '\0';
  if (bVar84) {
    param_1->bOverride_BloomConvolutionScatterDispersion = '\x01';
    param_1->BloomConvolutionScatterDispersion = param_2->BloomConvolutionScatterDispersion;
  }
  bVar85 = param_2->bOverride_BloomConvolutionSize != '\0';
  if (bVar85) {
    param_1->bOverride_BloomConvolutionSize = '\x01';
    param_1->BloomConvolutionSize = param_2->BloomConvolutionSize;
  }
  bVar86 = param_2->bOverride_BloomConvolutionCenterUV != '\0';
  if (bVar86) {
    param_1->bOverride_BloomConvolutionCenterUV = '\x01';
    dVar5 = (param_2->BloomConvolutionCenterUV).field0_0x0._s_0.Y;
    (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.X =
         (param_2->BloomConvolutionCenterUV).field0_0x0._s_0.X;
    (param_1->BloomConvolutionCenterUV).field0_0x0._s_0.Y = dVar5;
  }
  uVar13 = param_2->bOverride_BloomConvolutionPreFilterMin;
  if ((bool)uVar13) {
    param_1->bOverride_BloomConvolutionPreFilterMin = '\x01';
    param_1->BloomConvolutionPreFilterMin = param_2->BloomConvolutionPreFilterMin;
  }
  bVar87 = param_2->bOverride_BloomConvolutionPreFilterMax != 0;
  if (bVar87) {
    param_1->bOverride_BloomConvolutionPreFilterMax = '\x01';
    param_1->BloomConvolutionPreFilterMax = param_2->BloomConvolutionPreFilterMax;
  }
  bVar88 = param_2->bOverride_BloomConvolutionPreFilterMult != '\0';
  if (bVar88) {
    param_1->bOverride_BloomConvolutionPreFilterMult = '\x01';
    param_1->BloomConvolutionPreFilterMult = param_2->BloomConvolutionPreFilterMult;
  }
  uVar14 = param_2->bOverride_AmbientCubemapIntensity;
  if ((bool)uVar14) {
    param_1->bOverride_AmbientCubemapIntensity = '\x01';
    param_1->AmbientCubemapIntensity = param_2->AmbientCubemapIntensity;
  }
  bVar89 = param_2->bOverride_AmbientCubemapTint != '\0';
  if (bVar89) {
    param_1->bOverride_AmbientCubemapTint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->AmbientCubemapTint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->AmbientCubemapTint).field0_0x0 =
         *(undefined8 *)&(param_2->AmbientCubemapTint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->AmbientCubemapTint).field0_0x0 + 8) = uVar6;
  }
  bVar90 = param_2->bOverride_CameraShutterSpeed != '\0';
  if (bVar90) {
    param_1->bOverride_CameraShutterSpeed = '\x01';
    param_1->CameraShutterSpeed = param_2->CameraShutterSpeed;
  }
  uVar15 = param_2->bOverride_CameraISO;
  if ((bool)uVar15) {
    param_1->bOverride_CameraISO = '\x01';
    param_1->CameraISO = param_2->CameraISO;
  }
  bVar91 = param_2->bOverride_AutoExposureLowPercent != '\0';
  if (bVar91) {
    param_1->bOverride_AutoExposureLowPercent = '\x01';
    param_1->AutoExposureLowPercent = param_2->AutoExposureLowPercent;
  }
  bVar92 = param_2->bOverride_AutoExposureHighPercent != '\0';
  if (bVar92) {
    param_1->bOverride_AutoExposureHighPercent = '\x01';
    param_1->AutoExposureHighPercent = param_2->AutoExposureHighPercent;
  }
  bVar93 = param_2->bOverride_AutoExposureMinBrightness != '\0';
  if (bVar93) {
    param_1->bOverride_AutoExposureMinBrightness = '\x01';
    param_1->AutoExposureMinBrightness = param_2->AutoExposureMinBrightness;
  }
  bVar94 = param_2->bOverride_AutoExposureMaxBrightness != '\0';
  if (bVar94) {
    param_1->bOverride_AutoExposureMaxBrightness = '\x01';
    param_1->AutoExposureMaxBrightness = param_2->AutoExposureMaxBrightness;
  }
  bVar95 = param_2->bOverride_AutoExposureSpeedUp != '\0';
  if (bVar95) {
    param_1->bOverride_AutoExposureSpeedUp = '\x01';
    param_1->AutoExposureSpeedUp = param_2->AutoExposureSpeedUp;
  }
  uVar16 = param_2->bOverride_AutoExposureSpeedDown;
  if ((bool)uVar16) {
    param_1->bOverride_AutoExposureSpeedDown = '\x01';
    param_1->AutoExposureSpeedDown = param_2->AutoExposureSpeedDown;
  }
  bVar96 = param_2->bOverride_AutoExposureBias != 0;
  if (bVar96) {
    param_1->bOverride_AutoExposureBias = '\x01';
    param_1->AutoExposureBias = param_2->AutoExposureBias;
  }
  bVar97 = param_2->bOverride_HistogramLogMin != '\0';
  if (bVar97) {
    param_1->bOverride_HistogramLogMin = '\x01';
    param_1->HistogramLogMin = param_2->HistogramLogMin;
  }
  bVar98 = param_2->bOverride_HistogramLogMax != '\0';
  if (bVar98) {
    param_1->bOverride_HistogramLogMax = '\x01';
    param_1->HistogramLogMax = param_2->HistogramLogMax;
  }
  bVar99 = param_2->bOverride_LocalExposureMethod != '\0';
  if (bVar99) {
    param_1->bOverride_LocalExposureMethod = '\x01';
    param_1->LocalExposureMethod = param_2->LocalExposureMethod;
  }
  uVar17 = param_2->bOverride_LocalExposureContrastScale_DEPRECATED;
  if ((bool)uVar17) {
    param_1->bOverride_LocalExposureContrastScale_DEPRECATED = '\x01';
    param_1->LocalExposureContrastScale_DEPRECATED = param_2->LocalExposureContrastScale_DEPRECATED;
  }
  bVar100 = param_2->bOverride_LocalExposureHighlightContrastScale != 0;
  if (bVar100) {
    param_1->bOverride_LocalExposureHighlightContrastScale = '\x01';
    param_1->LocalExposureHighlightContrastScale = param_2->LocalExposureHighlightContrastScale;
  }
  bVar101 = param_2->bOverride_LocalExposureShadowContrastScale != '\0';
  if (bVar101) {
    param_1->bOverride_LocalExposureShadowContrastScale = '\x01';
    param_1->LocalExposureShadowContrastScale = param_2->LocalExposureShadowContrastScale;
  }
  bVar102 = param_2->bOverride_LocalExposureHighlightThreshold != '\0';
  if (bVar102) {
    param_1->bOverride_LocalExposureHighlightThreshold = '\x01';
    param_1->LocalExposureHighlightThreshold = param_2->LocalExposureHighlightThreshold;
  }
  bVar103 = param_2->bOverride_LocalExposureShadowThreshold != '\0';
  if (bVar103) {
    param_1->bOverride_LocalExposureShadowThreshold = '\x01';
    param_1->LocalExposureShadowThreshold = param_2->LocalExposureShadowThreshold;
  }
  bVar104 = param_2->bOverride_LocalExposureDetailStrength != '\0';
  if (bVar104) {
    param_1->bOverride_LocalExposureDetailStrength = '\x01';
    param_1->LocalExposureDetailStrength = param_2->LocalExposureDetailStrength;
  }
  uVar18 = param_2->bOverride_LocalExposureBlurredLuminanceBlend;
  if ((bool)uVar18) {
    param_1->bOverride_LocalExposureBlurredLuminanceBlend = '\x01';
    param_1->LocalExposureBlurredLuminanceBlend = param_2->LocalExposureBlurredLuminanceBlend;
  }
  bVar105 = param_2->bOverride_LocalExposureBlurredLuminanceKernelSizePercent != 0;
  if (bVar105) {
    param_1->bOverride_LocalExposureBlurredLuminanceKernelSizePercent = '\x01';
    param_1->LocalExposureBlurredLuminanceKernelSizePercent =
         param_2->LocalExposureBlurredLuminanceKernelSizePercent;
  }
  bVar106 = param_2->bOverride_LocalExposureHighlightThresholdStrength != '\0';
  if (bVar106) {
    param_1->bOverride_LocalExposureHighlightThresholdStrength = '\x01';
    param_1->LocalExposureHighlightThresholdStrength =
         param_2->LocalExposureHighlightThresholdStrength;
  }
  bVar107 = param_2->bOverride_LocalExposureShadowThresholdStrength != '\0';
  if (bVar107) {
    param_1->bOverride_LocalExposureShadowThresholdStrength = '\x01';
    param_1->LocalExposureShadowThresholdStrength = param_2->LocalExposureShadowThresholdStrength;
  }
  bVar108 = param_2->bOverride_LocalExposureMiddleGreyBias != '\0';
  if (bVar108) {
    param_1->bOverride_LocalExposureMiddleGreyBias = '\x01';
    param_1->LocalExposureMiddleGreyBias = param_2->LocalExposureMiddleGreyBias;
  }
  bVar109 = param_2->bOverride_LensFlareIntensity != '\0';
  if (bVar109) {
    param_1->bOverride_LensFlareIntensity = '\x01';
    param_1->LensFlareIntensity = param_2->LensFlareIntensity;
  }
  bVar110 = param_2->bOverride_LensFlareTint != '\0';
  if (bVar110) {
    param_1->bOverride_LensFlareTint = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->LensFlareTint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->LensFlareTint).field0_0x0 =
         *(undefined8 *)&(param_2->LensFlareTint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->LensFlareTint).field0_0x0 + 8) = uVar6;
  }
  uVar19 = param_2->bOverride_LensFlareBokehSize;
  if ((bool)uVar19) {
    param_1->bOverride_LensFlareBokehSize = '\x01';
    param_1->LensFlareBokehSize = param_2->LensFlareBokehSize;
  }
  bVar111 = param_2->bOverride_LensFlareThreshold != '\0';
  if (bVar111) {
    param_1->bOverride_LensFlareThreshold = '\x01';
    param_1->LensFlareThreshold = param_2->LensFlareThreshold;
  }
  bVar112 = param_2->bOverride_VignetteIntensity != '\0';
  if (bVar112) {
    param_1->bOverride_VignetteIntensity = '\x01';
    param_1->VignetteIntensity = param_2->VignetteIntensity;
  }
  bVar113 = param_2->bOverride_Sharpen != '\0';
  if (bVar113) {
    param_1->bOverride_Sharpen = '\x01';
    param_1->Sharpen = param_2->Sharpen;
  }
  bVar114 = param_2->bOverride_FilmGrainIntensity != '\0';
  if (bVar114) {
    param_1->bOverride_FilmGrainIntensity = '\x01';
    param_1->FilmGrainIntensity = param_2->FilmGrainIntensity;
  }
  uVar20 = param_2->bOverride_FilmGrainIntensityShadows;
  if ((bool)uVar20) {
    param_1->bOverride_FilmGrainIntensityShadows = '\x01';
    param_1->FilmGrainIntensityShadows = param_2->FilmGrainIntensityShadows;
  }
  bVar115 = param_2->bOverride_FilmGrainIntensityMidtones != 0;
  if (bVar115) {
    param_1->bOverride_FilmGrainIntensityMidtones = '\x01';
    param_1->FilmGrainIntensityMidtones = param_2->FilmGrainIntensityMidtones;
  }
  bVar116 = param_2->bOverride_FilmGrainIntensityHighlights != '\0';
  if (bVar116) {
    param_1->bOverride_FilmGrainIntensityHighlights = '\x01';
    param_1->FilmGrainIntensityHighlights = param_2->FilmGrainIntensityHighlights;
  }
  bVar117 = param_2->bOverride_FilmGrainShadowsMax != '\0';
  if (bVar117) {
    param_1->bOverride_FilmGrainShadowsMax = '\x01';
    param_1->FilmGrainShadowsMax = param_2->FilmGrainShadowsMax;
  }
  bVar118 = param_2->bOverride_FilmGrainHighlightsMin != '\0';
  if (bVar118) {
    param_1->bOverride_FilmGrainHighlightsMin = '\x01';
    param_1->FilmGrainHighlightsMin = param_2->FilmGrainHighlightsMin;
  }
  bVar119 = param_2->bOverride_FilmGrainHighlightsMax != '\0';
  if (bVar119) {
    param_1->bOverride_FilmGrainHighlightsMax = '\x01';
    param_1->FilmGrainHighlightsMax = param_2->FilmGrainHighlightsMax;
  }
  bVar120 = param_2->bOverride_FilmGrainTexelSize != '\0';
  if (bVar120) {
    param_1->bOverride_FilmGrainTexelSize = '\x01';
    param_1->FilmGrainTexelSize = param_2->FilmGrainTexelSize;
  }
  uVar21 = param_2->bOverride_AmbientOcclusionIntensity;
  if ((bool)uVar21) {
    param_1->bOverride_AmbientOcclusionIntensity = '\x01';
    param_1->AmbientOcclusionIntensity = param_2->AmbientOcclusionIntensity;
  }
  bVar121 = param_2->bOverride_AmbientOcclusionStaticFraction != 0;
  if (bVar121) {
    param_1->bOverride_AmbientOcclusionStaticFraction = '\x01';
    param_1->AmbientOcclusionStaticFraction = param_2->AmbientOcclusionStaticFraction;
  }
  bVar122 = param_2->bOverride_AmbientOcclusionRadius != '\0';
  if (bVar122) {
    param_1->bOverride_AmbientOcclusionRadius = '\x01';
    param_1->AmbientOcclusionRadius = param_2->AmbientOcclusionRadius;
  }
  bVar123 = param_2->bOverride_AmbientOcclusionFadeDistance != '\0';
  if (bVar123) {
    param_1->bOverride_AmbientOcclusionFadeDistance = '\x01';
    param_1->AmbientOcclusionFadeDistance = param_2->AmbientOcclusionFadeDistance;
  }
  bVar124 = param_2->bOverride_AmbientOcclusionFadeRadius != '\0';
  if (bVar124) {
    param_1->bOverride_AmbientOcclusionFadeRadius = '\x01';
    param_1->AmbientOcclusionFadeRadius = param_2->AmbientOcclusionFadeRadius;
  }
  bVar125 = param_2->bOverride_AmbientOcclusionDistance_DEPRECATED != '\0';
  if (bVar125) {
    param_1->bOverride_AmbientOcclusionDistance_DEPRECATED = '\x01';
    param_1->AmbientOcclusionDistance_DEPRECATED = param_2->AmbientOcclusionDistance_DEPRECATED;
  }
  bVar126 = param_2->bOverride_AmbientOcclusionPower != '\0';
  if (bVar126) {
    param_1->bOverride_AmbientOcclusionPower = '\x01';
    param_1->AmbientOcclusionPower = param_2->AmbientOcclusionPower;
  }
  uVar22 = param_2->bOverride_AmbientOcclusionBias;
  if ((bool)uVar22) {
    param_1->bOverride_AmbientOcclusionBias = '\x01';
    param_1->AmbientOcclusionBias = param_2->AmbientOcclusionBias;
  }
  bVar127 = param_2->bOverride_AmbientOcclusionQuality != 0;
  if (bVar127) {
    param_1->bOverride_AmbientOcclusionQuality = '\x01';
    param_1->AmbientOcclusionQuality = param_2->AmbientOcclusionQuality;
  }
  bVar128 = param_2->bOverride_AmbientOcclusionMipBlend != '\0';
  if (bVar128) {
    param_1->bOverride_AmbientOcclusionMipBlend = '\x01';
    param_1->AmbientOcclusionMipBlend = param_2->AmbientOcclusionMipBlend;
  }
  bVar129 = param_2->bOverride_AmbientOcclusionMipScale != '\0';
  if (bVar129) {
    param_1->bOverride_AmbientOcclusionMipScale = '\x01';
    param_1->AmbientOcclusionMipScale = param_2->AmbientOcclusionMipScale;
  }
  bVar130 = param_2->bOverride_AmbientOcclusionMipThreshold != '\0';
  if (bVar130) {
    param_1->bOverride_AmbientOcclusionMipThreshold = '\x01';
    param_1->AmbientOcclusionMipThreshold = param_2->AmbientOcclusionMipThreshold;
  }
  bVar131 = param_2->bOverride_AmbientOcclusionTemporalBlendWeight != '\0';
  if (bVar131) {
    param_1->bOverride_AmbientOcclusionTemporalBlendWeight = '\x01';
    param_1->AmbientOcclusionTemporalBlendWeight = param_2->AmbientOcclusionTemporalBlendWeight;
  }
  uVar23 = param_2->bOverride_IndirectLightingColor;
  if ((bool)uVar23) {
    param_1->bOverride_IndirectLightingColor = '\x01';
    uVar6 = *(undefined8 *)((longlong)&(param_2->IndirectLightingColor).field0_0x0 + 8);
    *(undefined8 *)&(param_1->IndirectLightingColor).field0_0x0 =
         *(undefined8 *)&(param_2->IndirectLightingColor).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->IndirectLightingColor).field0_0x0 + 8) = uVar6;
  }
  bVar132 = param_2->bOverride_IndirectLightingIntensity != 0;
  if (bVar132) {
    param_1->bOverride_IndirectLightingIntensity = '\x01';
    param_1->IndirectLightingIntensity = param_2->IndirectLightingIntensity;
  }
  bVar133 = param_2->bOverride_DepthOfFieldFocalDistance != '\0';
  if (bVar133) {
    param_1->bOverride_DepthOfFieldFocalDistance = '\x01';
    param_1->DepthOfFieldFocalDistance = param_2->DepthOfFieldFocalDistance;
  }
  bVar134 = param_2->bOverride_DepthOfFieldFstop != '\0';
  if (bVar134) {
    param_1->bOverride_DepthOfFieldFstop = '\x01';
    param_1->DepthOfFieldFstop = param_2->DepthOfFieldFstop;
  }
  bVar135 = param_2->bOverride_DepthOfFieldMinFstop != '\0';
  if (bVar135) {
    param_1->bOverride_DepthOfFieldMinFstop = '\x01';
    param_1->DepthOfFieldMinFstop = param_2->DepthOfFieldMinFstop;
  }
  uVar24 = param_2->bOverride_DepthOfFieldSensorWidth;
  if ((bool)uVar24) {
    param_1->bOverride_DepthOfFieldSensorWidth = '\x01';
    param_1->DepthOfFieldSensorWidth = param_2->DepthOfFieldSensorWidth;
  }
  bVar136 = param_2->bOverride_DepthOfFieldSqueezeFactor != 0;
  if (bVar136) {
    param_1->bOverride_DepthOfFieldSqueezeFactor = '\x01';
    param_1->DepthOfFieldSqueezeFactor = param_2->DepthOfFieldSqueezeFactor;
  }
  bVar137 = param_2->bOverride_DepthOfFieldDepthBlurRadius != '\0';
  if (bVar137) {
    param_1->bOverride_DepthOfFieldDepthBlurRadius = '\x01';
    param_1->DepthOfFieldDepthBlurRadius = param_2->DepthOfFieldDepthBlurRadius;
  }
  bVar138 = param_2->bOverride_DepthOfFieldUseHairDepth != '\0';
  if (bVar138) {
    param_1->bOverride_DepthOfFieldUseHairDepth = '\x01';
    *(uint *)&param_1->field_0x66c =
         (ZPULL(*(undefined4 *)&param_1->field_0x66c,0,1) ^ param_2->DepthOfFieldUseHairDepth) & 1 ^
         *(undefined4 *)&param_1->field_0x66c;
  }
  bVar139 = param_2->bOverride_DepthOfFieldDepthBlurAmount != '\0';
  if (bVar139) {
    param_1->bOverride_DepthOfFieldDepthBlurAmount = '\x01';
    param_1->DepthOfFieldDepthBlurAmount = param_2->DepthOfFieldDepthBlurAmount;
  }
  bVar140 = param_2->bOverride_DepthOfFieldFocalRegion != '\0';
  if (bVar140) {
    param_1->bOverride_DepthOfFieldFocalRegion = '\x01';
    param_1->DepthOfFieldFocalRegion = param_2->DepthOfFieldFocalRegion;
  }
  bVar141 = param_2->bOverride_DepthOfFieldNearTransitionRegion != '\0';
  if (bVar141) {
    param_1->bOverride_DepthOfFieldNearTransitionRegion = '\x01';
    param_1->DepthOfFieldNearTransitionRegion = param_2->DepthOfFieldNearTransitionRegion;
  }
  bVar142 = param_2->bOverride_DepthOfFieldFarTransitionRegion != '\0';
  if (bVar142) {
    param_1->bOverride_DepthOfFieldFarTransitionRegion = '\x01';
    param_1->DepthOfFieldFarTransitionRegion = param_2->DepthOfFieldFarTransitionRegion;
  }
  uVar25 = param_2->bOverride_DepthOfFieldScale;
  if ((bool)uVar25) {
    param_1->bOverride_DepthOfFieldScale = '\x01';
    param_1->DepthOfFieldScale = param_2->DepthOfFieldScale;
  }
  bVar143 = param_2->bOverride_DepthOfFieldNearBlurSize != 0;
  if (bVar143) {
    param_1->bOverride_DepthOfFieldNearBlurSize = '\x01';
    param_1->DepthOfFieldNearBlurSize = param_2->DepthOfFieldNearBlurSize;
  }
  bVar144 = param_2->bOverride_DepthOfFieldFarBlurSize != '\0';
  if (bVar144) {
    param_1->bOverride_DepthOfFieldFarBlurSize = '\x01';
    param_1->DepthOfFieldFarBlurSize = param_2->DepthOfFieldFarBlurSize;
  }
  bVar145 = param_2->bOverride_DepthOfFieldOcclusion != '\0';
  if (bVar145) {
    param_1->bOverride_DepthOfFieldOcclusion = '\x01';
    param_1->DepthOfFieldOcclusion = param_2->DepthOfFieldOcclusion;
  }
  bVar146 = param_2->bOverride_DepthOfFieldSkyFocusDistance != '\0';
  if (bVar146) {
    param_1->bOverride_DepthOfFieldSkyFocusDistance = '\x01';
    param_1->DepthOfFieldSkyFocusDistance = param_2->DepthOfFieldSkyFocusDistance;
  }
  bVar147 = param_2->bOverride_DepthOfFieldVignetteSize != '\0';
  if (bVar147) {
    param_1->bOverride_DepthOfFieldVignetteSize = '\x01';
    param_1->DepthOfFieldVignetteSize = param_2->DepthOfFieldVignetteSize;
  }
  uVar26 = param_2->bOverride_DepthOfFieldAspectRatioScalar;
  if ((bool)uVar26) {
    param_1->bOverride_DepthOfFieldAspectRatioScalar = '\x01';
    param_1->DepthOfFieldAspectRatioScalar = param_2->DepthOfFieldAspectRatioScalar;
  }
  bVar148 = param_2->bOverride_DepthOfFieldPetzvalBokeh != '\0';
  if (bVar148) {
    param_1->bOverride_DepthOfFieldPetzvalBokeh = '\x01';
    param_1->DepthOfFieldPetzvalBokeh = param_2->DepthOfFieldPetzvalBokeh;
  }
  bVar149 = param_2->bOverride_DepthOfFieldPetzvalBokehFalloff != '\0';
  if (bVar149) {
    param_1->bOverride_DepthOfFieldPetzvalBokehFalloff = '\x01';
    param_1->DepthOfFieldPetzvalBokehFalloff = param_2->DepthOfFieldPetzvalBokehFalloff;
  }
  bVar150 = param_2->bOverride_DepthOfFieldPetzvalExclusionBoxExtents != '\0';
  if (bVar150) {
    param_1->bOverride_DepthOfFieldPetzvalExclusionBoxExtents = '\x01';
    (param_1->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0 =
         (param_2->DepthOfFieldPetzvalExclusionBoxExtents).field0_0x0;
  }
  bVar151 = param_2->bOverride_DepthOfFieldPetzvalExclusionBoxRadius != '\0';
  if (bVar151) {
    param_1->bOverride_DepthOfFieldPetzvalExclusionBoxRadius = '\x01';
    param_1->DepthOfFieldPetzvalExclusionBoxRadius = param_2->DepthOfFieldPetzvalExclusionBoxRadius;
  }
  bVar152 = param_2->bOverride_DepthOfFieldBarrelRadius != '\0';
  if (bVar152) {
    param_1->bOverride_DepthOfFieldBarrelRadius = '\x01';
    param_1->DepthOfFieldBarrelRadius = param_2->DepthOfFieldBarrelRadius;
  }
  bVar153 = param_2->bOverride_DepthOfFieldBarrelLength != '\0';
  if (bVar153) {
    param_1->bOverride_DepthOfFieldBarrelLength = '\x01';
    param_1->DepthOfFieldBarrelLength = param_2->DepthOfFieldBarrelLength;
  }
  bVar154 = param_2->bOverride_DepthOfFieldMatteBoxFlags != 0;
  if (bVar154) {
    fVar27 = param_2->DepthOfFieldMatteBoxFlags[0].Roll;
    param_1->DepthOfFieldMatteBoxFlags[0].Pitch = param_2->DepthOfFieldMatteBoxFlags[0].Pitch;
    param_1->DepthOfFieldMatteBoxFlags[0].Roll = fVar27;
    param_1->DepthOfFieldMatteBoxFlags[0].Length = param_2->DepthOfFieldMatteBoxFlags[0].Length;
    fVar27 = param_2->DepthOfFieldMatteBoxFlags[1].Roll;
    param_1->DepthOfFieldMatteBoxFlags[1].Pitch = param_2->DepthOfFieldMatteBoxFlags[1].Pitch;
    param_1->DepthOfFieldMatteBoxFlags[1].Roll = fVar27;
    param_1->DepthOfFieldMatteBoxFlags[1].Length = param_2->DepthOfFieldMatteBoxFlags[1].Length;
    fVar27 = param_2->DepthOfFieldMatteBoxFlags[2].Roll;
    param_1->DepthOfFieldMatteBoxFlags[2].Pitch = param_2->DepthOfFieldMatteBoxFlags[2].Pitch;
    param_1->DepthOfFieldMatteBoxFlags[2].Roll = fVar27;
    param_1->DepthOfFieldMatteBoxFlags[2].Length = param_2->DepthOfFieldMatteBoxFlags[2].Length;
  }
  bVar155 = param_2->bOverride_MotionBlurAmount != '\0';
  if (bVar155) {
    param_1->bOverride_MotionBlurAmount = '\x01';
    param_1->MotionBlurAmount = param_2->MotionBlurAmount;
  }
  uVar28 = param_2->bOverride_MotionBlurMax;
  if ((bool)uVar28) {
    param_1->bOverride_MotionBlurMax = '\x01';
    param_1->MotionBlurMax = param_2->MotionBlurMax;
  }
  bVar156 = param_2->bOverride_MotionBlurPerObjectSize != '\0';
  if (bVar156) {
    param_1->bOverride_MotionBlurPerObjectSize = '\x01';
    param_1->MotionBlurPerObjectSize = param_2->MotionBlurPerObjectSize;
  }
  bVar157 = param_2->bOverride_ScreenSpaceReflectionQuality != '\0';
  if (bVar157) {
    param_1->bOverride_ScreenSpaceReflectionQuality = '\x01';
    param_1->ScreenSpaceReflectionQuality = param_2->ScreenSpaceReflectionQuality;
  }
  bVar158 = param_2->bOverride_ScreenSpaceReflectionIntensity != '\0';
  if (bVar158) {
    param_1->bOverride_ScreenSpaceReflectionIntensity = '\x01';
    param_1->ScreenSpaceReflectionIntensity = param_2->ScreenSpaceReflectionIntensity;
  }
  uVar29 = param_2->bOverride_ScreenSpaceReflectionMaxRoughness;
  if ((bool)uVar29) {
    param_1->bOverride_ScreenSpaceReflectionMaxRoughness = '\x01';
    param_1->ScreenSpaceReflectionMaxRoughness = param_2->ScreenSpaceReflectionMaxRoughness;
  }
  bVar159 = param_2->bOverride_TranslucencyType != 0;
  if (bVar159) {
    param_1->bOverride_TranslucencyType = 1;
    param_1->TranslucencyType = param_2->TranslucencyType;
  }
  bVar160 = param_2->bOverride_RayTracingTranslucencyMaxRoughness != 0;
  if (bVar160) {
    param_1->bOverride_RayTracingTranslucencyMaxRoughness = 1;
    param_1->RayTracingTranslucencyMaxRoughness = param_2->RayTracingTranslucencyMaxRoughness;
  }
  bVar161 = param_2->bOverride_RayTracingTranslucencyRefractionRays != 0;
  if (bVar161) {
    param_1->bOverride_RayTracingTranslucencyRefractionRays = 1;
    param_1->RayTracingTranslucencyRefractionRays = param_2->RayTracingTranslucencyRefractionRays;
  }
  bVar162 = param_2->bOverride_RayTracingTranslucencySamplesPerPixel != 0;
  if (bVar162) {
    param_1->bOverride_RayTracingTranslucencySamplesPerPixel = 1;
    param_1->RayTracingTranslucencySamplesPerPixel = param_2->RayTracingTranslucencySamplesPerPixel;
  }
  bVar163 = param_2->bOverride_RayTracingTranslucencyShadows != 0;
  if (bVar163) {
    param_1->bOverride_RayTracingTranslucencyShadows = 1;
    param_1->RayTracingTranslucencyShadows = param_2->RayTracingTranslucencyShadows;
  }
  bVar164 = param_2->bOverride_RayTracingTranslucencyRefraction != 0;
  if (bVar164) {
    param_1->bOverride_RayTracingTranslucencyRefraction = 1;
    param_1->field_0x735 =
         (param_1->RayTracingTranslucencyRefraction ^ param_2->RayTracingTranslucencyRefraction) & 1
         ^ param_1->field_0x735;
  }
  bVar165 = param_2->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents != 0;
  if (bVar165) {
    param_1->bOverride_RayTracingTranslucencyMaxPrimaryHitEvents = 1;
    param_1->RayTracingTranslucencyMaxPrimaryHitEvents =
         param_2->RayTracingTranslucencyMaxPrimaryHitEvents;
  }
  bVar166 = param_2->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents != 0;
  if (bVar166) {
    param_1->bOverride_RayTracingTranslucencyMaxSecondaryHitEvents = 1;
    param_1->RayTracingTranslucencyMaxSecondaryHitEvents =
         param_2->RayTracingTranslucencyMaxSecondaryHitEvents;
  }
  bVar167 = param_2->bOverride_RayTracingTranslucencyUseRayTracedRefraction != 0;
  if (bVar167) {
    param_1->bOverride_RayTracingTranslucencyUseRayTracedRefraction = 1;
    param_1->field_0x735 = (param_1->field_0x735 ^ param_2->field_0x735) & 2 ^ param_1->field_0x735;
  }
  bVar168 = param_2->bOverride_DynamicGlobalIlluminationMethod != 0;
  if (bVar168) {
    param_1->bOverride_DynamicGlobalIlluminationMethod = 1;
    (param_1->DynamicGlobalIlluminationMethod).Value =
         (param_2->DynamicGlobalIlluminationMethod).Value;
  }
  bVar169 = param_2->bOverride_LumenSurfaceCacheResolution != 0;
  if (bVar169) {
    param_1->bOverride_LumenSurfaceCacheResolution = '\x01';
    param_1->LumenSurfaceCacheResolution = param_2->LumenSurfaceCacheResolution;
  }
  bVar170 = param_2->bOverride_LumenSceneLightingQuality != 0;
  if (bVar170) {
    param_1->bOverride_LumenSceneLightingQuality = 1;
    param_1->LumenSceneLightingQuality = param_2->LumenSceneLightingQuality;
  }
  bVar171 = param_2->bOverride_LumenSceneDetail != 0;
  if (bVar171) {
    param_1->bOverride_LumenSceneDetail = 1;
    param_1->LumenSceneDetail = param_2->LumenSceneDetail;
  }
  bVar172 = param_2->bOverride_LumenSceneViewDistance != 0;
  if (bVar172) {
    param_1->bOverride_LumenSceneViewDistance = 1;
    param_1->LumenSceneViewDistance = param_2->LumenSceneViewDistance;
  }
  bVar173 = param_2->bOverride_LumenSceneLightingUpdateSpeed != 0;
  if (bVar173) {
    param_1->bOverride_LumenSceneLightingUpdateSpeed = 1;
    param_1->LumenSceneLightingUpdateSpeed = param_2->LumenSceneLightingUpdateSpeed;
  }
  bVar174 = param_2->bOverride_LumenFinalGatherQuality != 0;
  if (bVar174) {
    param_1->bOverride_LumenFinalGatherQuality = 1;
    param_1->LumenFinalGatherQuality = param_2->LumenFinalGatherQuality;
  }
  bVar175 = param_2->bOverride_LumenFinalGatherLightingUpdateSpeed != 0;
  if (bVar175) {
    param_1->bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
    param_1->LumenFinalGatherLightingUpdateSpeed = param_2->LumenFinalGatherLightingUpdateSpeed;
  }
  bVar176 = param_2->bOverride_LumenFinalGatherScreenTraces != 0;
  if (bVar176) {
    param_1->bOverride_LumenFinalGatherScreenTraces = 1;
    param_1->field_0x410 =
         (param_1->LumenFinalGatherScreenTraces ^ param_2->LumenFinalGatherScreenTraces) & 1 ^
         param_1->field_0x410;
  }
  bVar177 = param_2->bOverride_LumenMaxTraceDistance != 0;
  if (bVar177) {
    param_1->bOverride_LumenMaxTraceDistance = 1;
    param_1->LumenMaxTraceDistance = param_2->LumenMaxTraceDistance;
  }
  bVar178 = param_2->bOverride_LumenDiffuseColorBoost != 0;
  if (bVar178) {
    param_1->bOverride_LumenDiffuseColorBoost = 1;
    param_1->LumenDiffuseColorBoost = param_2->LumenDiffuseColorBoost;
  }
  bVar179 = param_2->bOverride_LumenSkylightLeaking != 0;
  if (bVar179) {
    param_1->bOverride_LumenSkylightLeaking = 1;
    param_1->LumenSkylightLeaking = param_2->LumenSkylightLeaking;
  }
  bVar180 = param_2->bOverride_LumenSkylightLeakingTint != 0;
  if (bVar180) {
    param_1->bOverride_LumenSkylightLeakingTint = 1;
    uVar6 = *(undefined8 *)((longlong)&(param_2->LumenSkylightLeakingTint).field0_0x0 + 8);
    *(undefined8 *)&(param_1->LumenSkylightLeakingTint).field0_0x0 =
         *(undefined8 *)&(param_2->LumenSkylightLeakingTint).field0_0x0;
    *(undefined8 *)((longlong)&(param_1->LumenSkylightLeakingTint).field0_0x0 + 8) = uVar6;
  }
  bVar181 = param_2->bOverride_LumenFullSkylightLeakingDistance != 0;
  if (bVar181) {
    param_1->bOverride_LumenFullSkylightLeakingDistance = 1;
    param_1->LumenFullSkylightLeakingDistance = param_2->LumenFullSkylightLeakingDistance;
  }
  bVar182 = param_2->bOverride_LumenRayLightingMode != 0;
  if (bVar182) {
    param_1->bOverride_LumenRayLightingMode = '\x01';
    param_1->LumenRayLightingMode = param_2->LumenRayLightingMode;
  }
  bVar183 = param_2->bOverride_LumenReflectionsScreenTraces != '\0';
  if (bVar183) {
    param_1->bOverride_LumenReflectionsScreenTraces = '\x01';
    param_1->field_0x440 =
         (param_1->LumenReflectionsScreenTraces ^ param_2->LumenReflectionsScreenTraces) & 1 ^
         param_1->field_0x440;
  }
  bVar184 = param_2->bOverride_LumenFrontLayerTranslucencyReflections != '\0';
  if (bVar184) {
    param_1->bOverride_LumenFrontLayerTranslucencyReflections = '\x01';
    param_1->field_0x440 = (param_1->field_0x440 ^ param_2->field_0x440) & 2 ^ param_1->field_0x440;
  }
  bVar185 = param_2->bOverride_LumenMaxRoughnessToTraceReflections != 0;
  if (bVar185) {
    param_1->bOverride_LumenMaxRoughnessToTraceReflections = 1;
    param_1->LumenMaxRoughnessToTraceReflections = param_2->LumenMaxRoughnessToTraceReflections;
  }
  bVar186 = param_2->bOverride_LumenMaxReflectionBounces != 0;
  if (bVar186) {
    param_1->bOverride_LumenMaxReflectionBounces = 1;
    param_1->LumenMaxReflectionBounces = param_2->LumenMaxReflectionBounces;
  }
  bVar187 = param_2->bOverride_LumenMaxRefractionBounces != 0;
  if (bVar187) {
    param_1->bOverride_LumenMaxRefractionBounces = 1;
    param_1->LumenMaxRefractionBounces = param_2->LumenMaxRefractionBounces;
  }
  bVar188 = param_2->bOverride_ReflectionMethod != '\0';
  if (bVar188) {
    param_1->bOverride_ReflectionMethod = '\x01';
    (param_1->ReflectionMethod).Value = (param_2->ReflectionMethod).Value;
  }
  bVar189 = param_2->bOverride_LumenReflectionQuality != '\0';
  if (bVar189) {
    param_1->bOverride_LumenReflectionQuality = '\x01';
    param_1->LumenReflectionQuality = param_2->LumenReflectionQuality;
  }
  bVar190 = param_2->bOverride_RayTracingAO != 0;
  if (bVar190) {
    param_1->bOverride_RayTracingAO = 1;
    *(uint *)&param_1->field_0x638 =
         (ZPULL(*(undefined4 *)&param_1->field_0x638,0,1) ^ param_2->RayTracingAO) & 1 ^
         *(undefined4 *)&param_1->field_0x638;
  }
  bVar191 = param_2->bOverride_RayTracingAOSamplesPerPixel != 0;
  if (bVar191) {
    param_1->bOverride_RayTracingAOSamplesPerPixel = 1;
    param_1->RayTracingAOSamplesPerPixel = param_2->RayTracingAOSamplesPerPixel;
  }
  bVar192 = param_2->bOverride_RayTracingAOIntensity != 0;
  if (bVar192) {
    param_1->bOverride_RayTracingAOIntensity = 1;
    param_1->RayTracingAOIntensity = param_2->RayTracingAOIntensity;
  }
  bVar193 = param_2->bOverride_RayTracingAORadius != 0;
  if (bVar193) {
    param_1->bOverride_RayTracingAORadius = 1;
    param_1->RayTracingAORadius = param_2->RayTracingAORadius;
  }
  bVar194 = param_2->bOverride_PathTracingMaxBounces != 0;
  if (bVar194) {
    param_1->bOverride_PathTracingMaxBounces = 1;
    param_1->PathTracingMaxBounces = param_2->PathTracingMaxBounces;
  }
  bVar195 = param_2->bOverride_PathTracingSamplesPerPixel != 0;
  if (bVar195) {
    param_1->bOverride_PathTracingSamplesPerPixel = 1;
    param_1->PathTracingSamplesPerPixel = param_2->PathTracingSamplesPerPixel;
  }
  bVar196 = param_2->bOverride_PathTracingMaxPathIntensity != 0;
  if (bVar196) {
    param_1->bOverride_PathTracingMaxPathIntensity = 1;
    param_1->PathTracingMaxPathIntensity = param_2->PathTracingMaxPathIntensity;
  }
  bVar197 = param_2->bOverride_PathTracingEnableEmissiveMaterials != 0;
  puVar32 = &param_1->field_0x744;
  puVar31 = &param_2->field_0x744;
  if (bVar197) {
    param_1->bOverride_PathTracingEnableEmissiveMaterials = 1;
    *(uint *)puVar32 =
         *(uint *)puVar32 ^
         (param_1->PathTracingEnableEmissiveMaterials ^ param_2->PathTracingEnableEmissiveMaterials)
         & 1;
  }
  bVar198 = param_2->bOverride_PathTracingEnableReferenceDOF != 0;
  if (bVar198) {
    param_1->bOverride_PathTracingEnableReferenceDOF = 1;
    *(uint *)puVar32 = *(uint *)puVar32 ^ (*(uint *)puVar32 ^ *(uint *)puVar31) & 2;
  }
  bVar199 = param_2->bOverride_PathTracingEnableReferenceAtmosphere != 0;
  if (bVar199) {
    param_1->bOverride_PathTracingEnableReferenceAtmosphere = 1;
    *(uint *)puVar32 = *(uint *)puVar32 ^ (*(uint *)puVar32 ^ *(uint *)puVar31) & 4;
  }
  puVar31 = &param_1->field_0x744;
  bVar200 = param_2->bOverride_PathTracingEnableDenoiser != 0;
  if (bVar200) {
    param_1->bOverride_PathTracingEnableDenoiser = 1;
    *(uint *)puVar31 = (*(uint *)puVar32 ^ *(uint *)&param_2->field_0x744) & 8 ^ *(uint *)puVar32;
  }
  bVar201 = param_2->bOverride_PathTracingIncludeEmissive != 0;
  if (bVar201) {
    param_1->bOverride_PathTracingIncludeEmissive = 1;
    *(uint *)puVar31 = *(uint *)puVar31 ^ (*(uint *)puVar31 ^ *(uint *)&param_2->field_0x744) & 0x10
    ;
  }
  puVar30 = &param_1->field_0x744;
  bVar202 = param_2->bOverride_PathTracingIncludeDiffuse != 0;
  if (bVar202) {
    param_1->bOverride_PathTracingIncludeDiffuse = 1;
    *(uint *)puVar30 = (*(uint *)puVar31 ^ *(uint *)&param_2->field_0x744) & 0x20 ^ *(uint *)puVar31
    ;
  }
  bVar203 = param_2->bOverride_PathTracingIncludeIndirectDiffuse != 0;
  if (bVar203) {
    param_1->bOverride_PathTracingIncludeIndirectDiffuse = 1;
    *(uint *)puVar30 = *(uint *)puVar30 ^ (*(uint *)puVar30 ^ *(uint *)&param_2->field_0x744) & 0x40
    ;
  }
  puVar32 = &param_1->field_0x744;
  bVar204 = param_2->bOverride_PathTracingIncludeSpecular != 0;
  if (bVar204) {
    param_1->bOverride_PathTracingIncludeSpecular = 1;
    *(uint *)puVar32 = (*(uint *)puVar30 ^ *(uint *)&param_2->field_0x744) & 0x80 ^ *(uint *)puVar30
    ;
  }
  bVar205 = param_2->bOverride_PathTracingIncludeIndirectSpecular != 0;
  if (bVar205) {
    param_1->bOverride_PathTracingIncludeIndirectSpecular = 1;
    *(uint *)puVar32 =
         *(uint *)puVar32 ^ (*(uint *)puVar32 ^ *(uint *)&param_2->field_0x744) & 0x100;
  }
  puVar30 = &param_1->field_0x744;
  bVar206 = param_2->bOverride_PathTracingIncludeVolume != 0;
  if (bVar206) {
    param_1->bOverride_PathTracingIncludeVolume = 1;
    *(uint *)puVar30 =
         (*(uint *)puVar32 ^ *(uint *)&param_2->field_0x744) & 0x200 ^ *(uint *)puVar32;
  }
  bVar207 = param_2->bOverride_PathTracingIncludeIndirectVolume != 0;
  if (bVar207) {
    param_1->bOverride_PathTracingIncludeIndirectVolume = 1;
    *(uint *)puVar30 =
         *(uint *)puVar30 ^ (*(uint *)puVar30 ^ *(uint *)&param_2->field_0x744) & 0x400;
  }
  bVar208 = param_2->bOverride_DepthOfFieldBladeCount != '\0';
  if (bVar208) {
    param_1->bOverride_DepthOfFieldBladeCount = '\x01';
    param_1->DepthOfFieldBladeCount = param_2->DepthOfFieldBladeCount;
  }
  bVar208 = bVar208 ||
            (bVar207 ||
            (bVar206 ||
            (bVar205 ||
            (bVar204 ||
            (bVar203 ||
            (bVar202 ||
            (bVar201 ||
            (bVar200 ||
            (bVar199 ||
            (bVar198 ||
            (bVar197 ||
            (bVar196 ||
            (bVar195 ||
            (bVar194 ||
            (bVar193 ||
            (bVar192 ||
            (bVar191 ||
            (bVar190 ||
            (bVar189 ||
            (bVar188 ||
            (bVar187 ||
            (bVar186 ||
            (bVar185 ||
            (bVar184 ||
            (bVar183 ||
            (bVar182 ||
            (bVar181 ||
            (bVar180 ||
            (bVar179 ||
            (bVar178 ||
            (bVar177 ||
            (bVar176 ||
            (bVar175 ||
            (bVar174 ||
            (bVar173 ||
            (bVar172 ||
            (bVar171 ||
            (bVar170 ||
            (bVar169 ||
            (bVar168 ||
            (bVar167 ||
            (bVar166 ||
            (bVar165 ||
            (bVar164 ||
            (bVar163 ||
            (bVar162 ||
            (bVar161 ||
            (bVar160 ||
            (bVar159 ||
            ((bool)uVar29 ||
            (bVar158 ||
            (bVar157 ||
            (bVar156 ||
            ((bool)uVar28 ||
            (bVar155 ||
            (bVar154 ||
            (bVar153 ||
            (bVar152 ||
            (bVar151 ||
            (bVar150 ||
            (bVar149 ||
            (bVar148 ||
            ((bool)uVar26 ||
            (bVar147 ||
            (bVar146 ||
            (bVar145 ||
            (bVar144 ||
            (bVar143 ||
            ((bool)uVar25 ||
            (bVar142 ||
            (bVar141 ||
            (bVar140 ||
            (bVar139 ||
            (bVar138 ||
            (bVar137 ||
            (bVar136 ||
            ((bool)uVar24 ||
            (bVar135 ||
            (bVar134 ||
            (bVar133 ||
            (bVar132 ||
            ((bool)uVar23 ||
            (bVar131 ||
            (bVar130 ||
            (bVar129 ||
            (bVar128 ||
            (bVar127 ||
            ((bool)uVar22 ||
            (bVar126 ||
            (bVar125 ||
            (bVar124 ||
            (bVar123 ||
            (bVar122 ||
            (bVar121 ||
            ((bool)uVar21 ||
            (bVar120 ||
            (bVar119 ||
            (bVar118 ||
            (bVar117 ||
            (bVar116 ||
            (bVar115 ||
            ((bool)uVar20 ||
            (bVar114 ||
            (bVar113 ||
            (bVar112 ||
            (bVar111 ||
            ((bool)uVar19 ||
            (bVar110 ||
            (bVar109 ||
            (bVar108 ||
            (bVar107 ||
            (bVar106 ||
            (bVar105 ||
            ((bool)uVar18 ||
            (bVar104 ||
            (bVar103 ||
            (bVar102 ||
            (bVar101 ||
            (bVar100 ||
            ((bool)uVar17 ||
            (bVar99 ||
            (bVar98 ||
            (bVar97 ||
            (bVar96 ||
            ((bool)uVar16 ||
            (bVar95 ||
            (bVar94 ||
            (bVar93 ||
            (bVar92 ||
            (bVar91 ||
            ((bool)uVar15 ||
            (bVar90 ||
            (bVar89 ||
            ((bool)uVar14 ||
            (bVar88 ||
            (bVar87 ||
            ((bool)uVar13 ||
            (bVar86 ||
            (bVar85 ||
            (bVar84 ||
            (bVar83 ||
            (bVar82 ||
            (bVar81 ||
            ((bool)uVar12 ||
            (bVar80 ||
            (bVar79 ||
            (bVar78 ||
            (bVar77 ||
            (bVar76 ||
            (bVar75 ||
            (bVar74 ||
            (bVar73 ||
            ((bool)uVar11 ||
            (bVar72 ||
            (bVar71 ||
            (bVar70 ||
            (bVar69 ||
            (bVar68 ||
            (bVar67 ||
            (bVar66 ||
            (bVar65 ||
            (bVar64 ||
            (bVar63 ||
            (bVar62 ||
            ((bool)uVar10 ||
            (bVar61 ||
            (bVar60 ||
            (bVar59 ||
            (bVar58 ||
            (bVar57 ||
            (bVar56 ||
            (bVar55 ||
            ((bool)uVar9 ||
            (bVar54 ||
            (bVar53 ||
            (bVar52 ||
            (bVar51 ||
            (bVar50 ||
            (bVar49 ||
            (bVar48 ||
            ((bool)uVar8 ||
            (bVar47 ||
            (bVar46 ||
            (bVar45 ||
            (bVar44 ||
            (bVar43 ||
            (bVar42 ||
            (bVar41 ||
            ((bool)uVar7 ||
            (bVar40 || (bVar39 || (bVar38 || (bVar37 || (bVar36 || (bVar35 || bVar34))))))))))))))))
            ))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
            ))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
            )));
  pUVar1 = (param_2->AmbientCubemap).field0_0x0.DebugPtr;
  if (pUVar1 != (UTextureCube *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    bVar208 = true;
    (param_1->AmbientCubemap).field0_0x0 = (param_2->AmbientCubemap).field0_0x0;
  }
  if (param_2->bOverride_ColorGradingIntensity != '\0') {
    param_1->bOverride_ColorGradingIntensity = '\x01';
    bVar208 = true;
    param_1->ColorGradingIntensity = param_2->ColorGradingIntensity;
  }
  if (param_2->bOverride_ColorGradingLUT != '\0') {
    param_1->bOverride_ColorGradingLUT = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_2->ColorGradingLUT).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    bVar208 = true;
    (param_1->ColorGradingLUT).field0_0x0 = (param_2->ColorGradingLUT).field0_0x0;
  }
  if (param_2->bOverride_BloomDirtMask != '\0') {
    param_1->bOverride_BloomDirtMask = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_2->BloomDirtMask).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    bVar208 = true;
    (param_1->BloomDirtMask).field0_0x0 = (param_2->BloomDirtMask).field0_0x0;
  }
  if (param_2->bOverride_BloomMethod != 0) {
    param_1->bOverride_BloomMethod = '\x01';
    bVar208 = true;
    (param_1->BloomMethod).Value = (param_2->BloomMethod).Value;
  }
  if (param_2->bOverride_BloomConvolutionTexture != '\0') {
    param_1->bOverride_BloomConvolutionTexture = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (param_2->BloomConvolutionTexture).field0_0x0.DebugPtr, pUVar3 != (UTexture2D *)0x0
       )) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    bVar208 = true;
    (param_1->BloomConvolutionTexture).field0_0x0 = (param_2->BloomConvolutionTexture).field0_0x0;
  }
  if (param_2->bOverride_FilmGrainTexture != '\0') {
    param_1->bOverride_FilmGrainTexture = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (param_2->FilmGrainTexture).field0_0x0.DebugPtr, pUVar3 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    bVar208 = true;
    (param_1->FilmGrainTexture).field0_0x0 = (param_2->FilmGrainTexture).field0_0x0;
  }
  if (param_2->bOverride_BloomConvolutionBufferScale != '\0') {
    param_1->bOverride_BloomConvolutionBufferScale = '\x01';
    bVar208 = true;
    param_1->BloomConvolutionBufferScale = param_2->BloomConvolutionBufferScale;
  }
  if (param_2->bOverride_AutoExposureBiasCurve != '\0') {
    param_1->bOverride_AutoExposureBiasCurve = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (param_2->AutoExposureBiasCurve).field0_0x0.DebugPtr, pUVar4 != (UCurveFloat *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar208 = true;
    (param_1->AutoExposureBiasCurve).field0_0x0 = (param_2->AutoExposureBiasCurve).field0_0x0;
  }
  if (param_2->bOverride_AutoExposureMeterMask != '\0') {
    param_1->bOverride_AutoExposureMeterMask = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_2->AutoExposureMeterMask).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    bVar208 = true;
    (param_1->AutoExposureMeterMask).field0_0x0 = (param_2->AutoExposureMeterMask).field0_0x0;
  }
  if (param_2->bOverride_LocalExposureHighlightContrastCurve != '\0') {
    param_1->bOverride_LocalExposureHighlightContrastCurve = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (param_2->LocalExposureHighlightContrastCurve).field0_0x0.DebugPtr,
       pUVar4 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar208 = true;
    (param_1->LocalExposureHighlightContrastCurve).field0_0x0 =
         (param_2->LocalExposureHighlightContrastCurve).field0_0x0;
  }
  if (param_2->bOverride_LocalExposureShadowContrastCurve != '\0') {
    param_1->bOverride_LocalExposureShadowContrastCurve = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 = (param_2->LocalExposureShadowContrastCurve).field0_0x0.DebugPtr,
       pUVar4 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar208 = true;
    (param_1->LocalExposureShadowContrastCurve).field0_0x0 =
         (param_2->LocalExposureShadowContrastCurve).field0_0x0;
  }
  if (param_2->bOverride_LensFlareBokehShape != 0) {
    param_1->bOverride_LensFlareBokehShape = '\x01';
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_2->LensFlareBokehShape).field0_0x0.DebugPtr, pUVar2 != (UTexture *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    bVar208 = true;
    (param_1->LensFlareBokehShape).field0_0x0 = (param_2->LensFlareBokehShape).field0_0x0;
  }
  if (param_2->bOverride_LensFlareTints != '\0') {
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[0].field0_0x0 + 8);
    bVar208 = true;
    *(undefined8 *)&param_1->LensFlareTints[0].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[0].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[0].field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[1].field0_0x0 + 8);
    *(undefined8 *)&param_1->LensFlareTints[1].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[1].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[1].field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[2].field0_0x0 + 8);
    *(undefined8 *)&param_1->LensFlareTints[2].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[2].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[2].field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[3].field0_0x0 + 8);
    *(undefined8 *)&param_1->LensFlareTints[3].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[3].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[3].field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[4].field0_0x0 + 8);
    *(undefined8 *)&param_1->LensFlareTints[4].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[4].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[4].field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[5].field0_0x0 + 8);
    *(undefined8 *)&param_1->LensFlareTints[5].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[5].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[5].field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[6].field0_0x0 + 8);
    *(undefined8 *)&param_1->LensFlareTints[6].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[6].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[6].field0_0x0 + 8) = uVar6;
    uVar6 = *(undefined8 *)((longlong)&param_2->LensFlareTints[7].field0_0x0 + 8);
    *(undefined8 *)&param_1->LensFlareTints[7].field0_0x0 =
         *(undefined8 *)&param_2->LensFlareTints[7].field0_0x0;
    *(undefined8 *)((longlong)&param_1->LensFlareTints[7].field0_0x0 + 8) = uVar6;
  }
  if (param_2->bOverride_MobileHQGaussian != '\0') {
    bVar208 = true;
    param_1->field_0x34 =
         param_1->field_0x34 ^ (param_1->bMobileHQGaussian ^ param_2->bMobileHQGaussian) & 1;
  }
  if (param_2->bOverride_AutoExposureMethod != 0) {
    param_1->bOverride_AutoExposureMethod = '\x01';
    bVar208 = true;
    (param_1->AutoExposureMethod).Value = (param_2->AutoExposureMethod).Value;
  }
  if (param_2->bOverride_AmbientOcclusionRadiusInWS != '\0') {
    param_1->bOverride_AmbientOcclusionRadiusInWS = '\x01';
    bVar208 = true;
    *(uint *)&param_1->field_0x60c =
         (ZPULL(*(undefined4 *)&param_1->field_0x60c,0,1) ^ param_2->AmbientOcclusionRadiusInWS) & 1
         ^ *(undefined4 *)&param_1->field_0x60c;
  }
  if (param_2->bOverride_MotionBlurTargetFPS != 0) {
    param_1->bOverride_MotionBlurTargetFPS = '\x01';
    bVar208 = true;
    param_1->MotionBlurTargetFPS = param_2->MotionBlurTargetFPS;
  }
  if (param_2->bOverride_AutoExposureApplyPhysicalCameraExposure != '\0') {
    param_1->bOverride_AutoExposureApplyPhysicalCameraExposure = '\x01';
    bVar208 = true;
    *(uint *)&param_1->field_0x4a0 =
         (ZPULL(*(undefined4 *)&param_1->field_0x4a0,0,1) ^
         param_2->AutoExposureApplyPhysicalCameraExposure) & 1 ^
         *(undefined4 *)&param_1->field_0x4a0;
  }
  if (param_2->bOverride_UserFlags != '\0') {
    param_1->bOverride_UserFlags = '\x01';
    bVar208 = true;
    param_1->UserFlags = param_2->UserFlags;
  }
  if (((param_1->WeightedBlendables).Array.ArrayNum < 1) &&
     ((param_2->WeightedBlendables).Array.ArrayNum < 1)) {
    FWeightedBlendables::operator=(&param_1->WeightedBlendables,&param_2->WeightedBlendables);
    return bVar208;
  }
  FWeightedBlendables::operator=(&param_1->WeightedBlendables,&param_2->WeightedBlendables);
  return true;
}

