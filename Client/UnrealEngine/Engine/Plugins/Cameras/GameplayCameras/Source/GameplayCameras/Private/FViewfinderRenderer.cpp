// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// DrawViewfinder @ 14d5a21a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::FViewfinderRenderer::DrawViewfinder
          (FCameraDebugRenderer *param_1,FViewfinderDrawElements param_2)

{
  FCanvas *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  int iVar12;
  byte bVar13;
  FCanvas **ppFVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 local_168 [8];
  undefined1 local_160 [16];
  undefined8 local_150;
  bool local_148;
  FBatchedElementParameters *local_140;
  FLinearColor_u_0 local_138;
  double local_128;
  double local_120;
  undefined8 uStack_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  undefined4 local_f8;
  FLinearColor_u_0 local_e8;
  TVector2<double>_u_0 local_d8 [11];
  
  iVar12 = GGameplayCamerasDebugViewfinderReticleNumSides;
  fVar11 = GGameplayCamerasDebugViewfinderReticleInnerSizeFactor;
  fVar19 = __real_3b808081;
  fVar10 = __real_3f800000;
  fVar23 = (float)(param_1->CanvasSize).field0_0x0._s_0.X;
  fVar20 = (float)(param_1->CanvasSize).field0_0x0._s_0.Y;
  dVar4 = (double)(fVar23 * __real_3f000000);
  dVar2 = (double)(fVar20 * __real_3f000000);
  local_d8[0]._0_8_ = dVar4;
  local_d8[0]._8_8_ = dVar2;
  if ((param_2 & FocusReticle) != None) {
    uVar15 = (uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 0x10 & 0xff;
    local_e8._s_0.R =
         FLinearColor::sRGBToLinearTable
         [(uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 0x10 & 0xff];
    uVar17 = (uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 8 & 0xff;
    uVar16 = (uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 & 0xff;
    local_e8._s_0.G =
         FLinearColor::sRGBToLinearTable
         [(uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 8 & 0xff];
    fVar18 = fVar20 * GGameplayCamerasDebugViewfinderReticleSizeFactor * __real_3f000000;
    local_e8._s_0.B =
         FLinearColor::sRGBToLinearTable
         [(uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 & 0xff];
    fVar22 = (float)((uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 0x18) *
             __real_3b808081;
    local_e8._s_0.A = fVar22;
    FCameraDebugRenderer::Draw2DCircle
              (param_1,(TVector2<double> *)&local_d8[0]._s_0,fVar18,(FLinearColor *)&local_e8._s_0,
               __real_3f800000,GGameplayCamerasDebugViewfinderReticleNumSides);
    local_e8._s_0.R = FLinearColor::sRGBToLinearTable[uVar15];
    local_e8._s_0.G = FLinearColor::sRGBToLinearTable[uVar17];
    fVar18 = fVar18 * fVar11;
    local_e8._s_0.B = FLinearColor::sRGBToLinearTable[uVar16];
    local_e8._s_0.A = fVar22;
    FCameraDebugRenderer::Draw2DCircle
              (param_1,(TVector2<double> *)&local_d8[0]._s_0,fVar18,(FLinearColor *)&local_e8._s_0,
               fVar10,(int)((float)iVar12 * fVar11));
    local_128 = (double)fVar18;
    local_110 = local_128 + dVar4;
    local_128 = dVar4 - local_128;
    if (param_1->Canvas != (FCanvas *)0x0) {
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar15];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[uVar16];
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar17];
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_160._8_8_ = dVar2;
      local_160._0_8_ = local_128;
      uStack_118 = 0;
      local_100 = 0;
      local_f8 = 0x3f800000;
      local_138._s_0.A = fVar22;
      local_120 = dVar2;
      local_108 = dVar2;
      FCanvas::DrawItem(param_1->Canvas,(FCanvasItem *)local_168);
    }
  }
  if ((param_2 & RuleOfThirds) != None) {
    ppFVar14 = &param_1->Canvas;
    uVar15 = (uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 8 & 0xff;
    uVar16 = (uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 0x10 & 0xff;
    bVar13 = FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0._0_1_;
    dVar4 = (double)(fVar23 * __real_3eaaaaab);
    dVar5 = (double)(fVar20 * __real_3eaaaaab);
    fVar19 = (float)((uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 0x18) *
             fVar19;
    dVar2 = (double)(fVar23 * __real_3f2aaaab);
    dVar3 = (double)(fVar20 * __real_3f2aaaab);
    dVar7 = (double)(fVar20 * GGameplayCamerasDebugViewfinderGuidesGapFactor);
    if (*ppFVar14 != (FCanvas *)0x0) {
      local_160._8_8_ = 0;
      local_160._0_8_ = dVar4;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_138._s_0.R =
           FLinearColor::sRGBToLinearTable
           [(uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 0x10 & 0xff];
      local_138._s_0.G =
           FLinearColor::sRGBToLinearTable
           [(uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 >> 8 & 0xff];
      local_138._s_0.B =
           FLinearColor::sRGBToLinearTable
           [(uint)FCameraDebugColors::CurrentColorScheme.Passive.field0_0x0 & 0xff];
      local_100 = 0;
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_120 = 0.0;
      uStack_118 = 0;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_128 = dVar4;
      local_110 = dVar4;
      local_108 = dVar5 - dVar7;
      FCanvas::DrawItem(*ppFVar14,(FCanvasItem *)local_168);
    }
    if (*ppFVar14 != (FCanvas *)0x0) {
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar15];
      local_160._8_8_ = 0;
      local_160._0_8_ = dVar2;
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar16];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[bVar13];
      local_100 = 0;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_120 = 0.0;
      uStack_118 = 0;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_128 = dVar2;
      local_110 = dVar2;
      local_108 = dVar5 - dVar7;
      FCanvas::DrawItem(*ppFVar14,(FCanvasItem *)local_168);
    }
    dVar6 = dVar7 + dVar3;
    uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (*ppFVar14 != (FCanvas *)0x0) {
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar15];
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_160._8_4_ = SUB84(dVar6,0);
      local_160._0_8_ = dVar4;
      local_160._12_4_ = uVar21;
      local_148 = false;
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar16];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[bVar13];
      local_140 = (FBatchedElementParameters *)0x0;
      uStack_118 = 0;
      local_100 = 0;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_128 = dVar4;
      local_120 = dVar6;
      local_110 = dVar4;
      local_108 = (double)fVar20;
      FCanvas::DrawItem(*ppFVar14,(FCanvasItem *)local_168);
    }
    ppFVar14 = &param_1->Canvas;
    if (*ppFVar14 != (FCanvas *)0x0) {
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar15];
      local_160._8_4_ = SUB84(dVar6,0);
      local_160._0_8_ = dVar2;
      local_160._12_4_ = uVar21;
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar16];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[bVar13];
      uStack_118 = 0;
      local_100 = 0;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_128 = dVar2;
      local_120 = dVar6;
      local_110 = dVar2;
      local_108 = (double)fVar20;
      FCanvas::DrawItem(*ppFVar14,(FCanvasItem *)local_168);
    }
    if (*ppFVar14 != (FCanvas *)0x0) {
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar16];
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar15];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[bVar13];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar5;
      local_160 = auVar8 << 0x40;
      local_128 = 0.0;
      uStack_118 = 0;
      local_100 = 0;
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_120 = dVar5;
      local_110 = dVar4 - dVar7;
      local_108 = dVar5;
      FCanvas::DrawItem(*ppFVar14,(FCanvasItem *)local_168);
    }
    if (*ppFVar14 != (FCanvas *)0x0) {
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar16];
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar15];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[bVar13];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar3;
      local_160 = auVar9 << 0x40;
      local_128 = 0.0;
      uStack_118 = 0;
      local_100 = 0;
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_120 = dVar3;
      local_110 = dVar4 - dVar7;
      local_108 = dVar3;
      FCanvas::DrawItem(*ppFVar14,(FCanvasItem *)local_168);
    }
    pFVar1 = param_1->Canvas;
    dVar2 = dVar2 + dVar7;
    if (pFVar1 != (FCanvas *)0x0) {
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar16];
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar15];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[bVar13];
      local_160._8_8_ = dVar5;
      local_160._0_8_ = dVar2;
      uStack_118 = 0;
      local_100 = 0;
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_128 = dVar2;
      local_120 = dVar5;
      local_110 = (double)fVar23;
      local_108 = dVar5;
      FCanvas::DrawItem(pFVar1,(FCanvasItem *)local_168);
    }
    pFVar1 = param_1->Canvas;
    if (pFVar1 != (FCanvas *)0x0) {
      local_138._s_0.R = FLinearColor::sRGBToLinearTable[uVar16];
      local_138._s_0.G = FLinearColor::sRGBToLinearTable[uVar15];
      local_138._s_0.B = FLinearColor::sRGBToLinearTable[bVar13];
      local_160._8_8_ = dVar3;
      local_160._0_8_ = dVar2;
      uStack_118 = 0;
      local_100 = 0;
      local_150._0_4_ = 0;
      local_150._4_4_ = SE_BLEND_Opaque;
      local_148 = false;
      local_140 = (FBatchedElementParameters *)0x0;
      local_168 = (undefined1  [8])&___7FCanvasLineItem__6B_;
      local_f8 = 0x40000000;
      local_138._s_0.A = fVar19;
      local_128 = dVar2;
      local_120 = dVar3;
      local_110 = (double)fVar23;
      local_108 = dVar3;
      FCanvas::DrawItem(pFVar1,(FCanvasItem *)local_168);
    }
  }
  return;
}

