// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FDynamicRibbonEmitterData @ 1481600a0

void __thiscall
FDynamicRibbonEmitterData::~FDynamicRibbonEmitterData(FDynamicRibbonEmitterData *this)

{
  this->_padding_ = (longlong)&___7FDynamicRibbonEmitterData__6B_;
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  FDynamicTrailsEmitterData::~FDynamicTrailsEmitterData((FDynamicTrailsEmitterData *)this);
  return;
}

// GetSourceData @ 14817e240

FDynamicRibbonEmitterReplayData * __thiscall
FDynamicRibbonEmitterData::GetSourceData(FDynamicRibbonEmitterData *this)

{
  return &this->Source;
}

// FillVertexData @ 1481ed4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FDynamicRibbonEmitterData::FillVertexData
          (FDynamicRibbonEmitterData *this,FAsyncBufferFillData *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  FSceneView *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_TrailFillVertexTime> FVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  float *pfVar23;
  FName FVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  ulonglong uVar28;
  double *pdVar29;
  double *pdVar30;
  double *pdVar31;
  uint *puVar32;
  uint *puVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  double local_3a0;
  uint local_394;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  int local_34c;
  ulonglong local_348;
  uint *local_340;
  double local_338;
  double local_330;
  double local_328;
  FColor_u_0 local_320;
  float local_31c;
  float local_318;
  float local_314;
  double local_310;
  double local_308;
  FName local_300;
  float *local_2f8;
  longlong local_2f0;
  FName local_2e8;
  FName local_2e0;
  undefined1 local_2d0 [16];
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  longlong local_2a8;
  double local_2a0;
  double dStack_298;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  double local_178;
  double local_170;
  FName local_168;
  double local_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [12];
  undefined4 uStack_dc;
  undefined8 local_d8;
  double dStack_d0;
  
  FVar19 = StatPtr_STAT_TrailFillVertexTime;
  if (StatPtr_STAT_TrailFillVertexTime == (FThreadSafeStaticStat<FStat_STAT_TrailFillVertexTime>)0x0
     ) {
    pFVar18 = ::FName::FName(&local_168,"STAT_TrailFillVertexTime");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_TrailFillVertexTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailFillVertexTime,*pFVar18,
                        L"Trail FillVertex Time RT","STATGROUP_TrailParticles","STATCAT_Advanced",
                        L"Trail Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar19;
  bVar12 = false;
  bVar14 = false;
  local_2e0.ComparisonIndex.Value = 0;
  local_2e0.Number = 0;
  bVar15 = false;
  bVar11 = false;
  if ((FVar24.ComparisonIndex.Value.Value != 0) || (FVar24.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_320.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_320._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar14 = true;
      bVar15 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_300.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_300.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_300,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x1525);
        bVar12 = true;
        bVar14 = true;
        bVar15 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2e8 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar15 = true;
      goto LAB_1481ed681;
    }
  }
  bVar14 = bVar11;
  bVar12 = bVar15;
  bVar15 = false;
  local_2e8 = local_2e0;
  FVar24 = local_2e0;
LAB_1481ed681:
  pFVar5 = param_1->View;
  pfVar27 = param_1->VertexData;
  pfVar25 = param_1->DynamicParameterData;
  local_148 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][0];
  dStack_140 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][1];
  local_128 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][0];
  dStack_120 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][1];
  local_d8 = (pFVar5->ViewMatrices).InvViewMatrix.M[3][2];
  dStack_d0 = (pFVar5->ViewMatrices).InvViewMatrix.M[3][3];
  local_108 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][0];
  dStack_100 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][1];
  local_138 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][2];
  dStack_130 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][3];
  local_118 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][2];
  dStack_110 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][3];
  _local_e8 = *(undefined1 (*) [16])(pFVar5->ViewMatrices).InvViewMatrix.M[3];
  uVar55 = local_e8._0_4_;
  uVar56 = local_e8._4_4_;
  uVar57 = local_e8._8_4_;
  uVar58 = local_e8._12_4_;
  local_f8 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][2];
  dStack_f0 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][3];
  auVar3 = *(undefined1 (*) [16])((pFVar5->ViewMatrices).InvViewMatrix.M[3] + 2);
  uVar37 = auVar3._0_4_;
  uVar38 = auVar3._4_4_;
  dVar8 = dStack_120 * 0.0 + dStack_140 * 0.0 + dStack_100 * ___xmm_00000000000000003ff0000000000000
          + local_e8._8_8_ * _UNK_150689518;
  local_288._8_4_ = SUB84(dVar8,0);
  local_288._0_8_ =
       local_128 * 0.0 + local_148 * 0.0 + local_108 * ___xmm_00000000000000003ff0000000000000 +
       local_e8._0_8_ * _UNK_150689518;
  local_288._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar9 = dStack_110 * 0.0 + dStack_130 * 0.0 + dStack_f0 * ___xmm_00000000000000003ff0000000000000
          + auVar3._8_8_ * _UNK_150689518;
  local_268._8_4_ = SUB84(dVar9,0);
  local_268._0_8_ =
       local_118 * 0.0 + local_138 * 0.0 + local_f8 * ___xmm_00000000000000003ff0000000000000 +
       auVar3._0_8_ * _UNK_150689518;
  local_268._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  if (((this->_padding_ & 1) == 0) || (pfVar25 == (float *)0x0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  lVar20 = (this->Source)._padding_;
  local_34c = 0;
  dVar9 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  dVar35 = (double)*(float *)&(this->Source)._padding_ * __real_4140000000000000;
  dVar10 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  local_310 = dVar9;
  local_308 = dVar35;
  local_2a8 = lVar20;
  if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
    local_2f0 = 0;
    fVar40 = __real_40000000;
    local_328 = __real_3ff0000000000000;
    fVar54 = __real_3f800000;
    local_278 = dVar8;
    dStack_270 = dVar8;
    do {
      uVar22 = 0;
      fVar62 = 0.0;
      pdVar31 = (double *)
                ((int)((uint)*(ushort *)(local_2f0 + (this->Source)._padding_) *
                      (int)(this->Source)._padding_) + lVar20);
      puVar32 = (uint *)((longlong)(int)(this->Source)._padding_ + (longlong)pdVar31);
      uVar21 = *puVar32 & 0xf0000000;
      if (((uVar21 == 0x40000000) || (uVar21 == 0x10000000)) && ((*puVar32 & 0x3fff) != 0x3fff)) {
        uVar21 = puVar32[2];
        bVar16 = false;
        local_338 = 0.0;
        local_330 = 0.0;
        local_394 = 0;
        bVar13 = false;
        local_348 = 0;
        if (bVar11) {
          local_394 = 0x10;
          uVar22 = 0x10;
          local_348 = 0x10;
          if (0 < (int)(this->Source)._padding_) {
            bVar16 = true;
            local_348 = 0x10;
            bVar13 = true;
          }
        }
        pfVar23 = (float *)0x0;
        pdVar29 = (double *)0x0;
        local_3a0 = (double)(float)puVar32[0xd];
        local_2f8 = (float *)0x0;
        local_340 = (uint *)0x0;
        uVar28 = uVar22;
        pdVar30 = pdVar29;
        dVar8 = (double)(float)puVar32[0xe];
        dVar7 = (double)(float)puVar32[0xf];
        if (this->RenderAxisOption != 0) goto LAB_1481edb43;
        dVar7 = pdVar31[3] - (double)CONCAT44(uVar56,uVar55);
        dVar49 = pdVar31[5] - (double)CONCAT44(uVar38,uVar37);
        dVar43 = pdVar31[4] - (double)CONCAT44(uVar58,uVar57);
        dVar8 = dVar43 * dVar43 + dVar7 * dVar7 + dVar49 * dVar49;
        dVar50 = local_328;
        if (__real_3e45798ee0000000 < dVar8) {
          local_160 = local_328 / SQRT(dVar8);
          dVar7 = dVar7 * local_160;
          dVar43 = dVar43 * local_160;
          dVar49 = dVar49 * local_160;
          dVar50 = __real_3ff0000000000000;
        }
        dVar47 = (double)(float)puVar32[10];
        dVar45 = (double)(float)puVar32[0xb];
        dVar46 = (double)(float)puVar32[0xc];
        dVar8 = dVar45 * dVar45 + dVar47 * dVar47 + dVar46 * dVar46;
        if (__real_3e45798ee0000000 < dVar8) {
          local_158 = dVar50 / SQRT(dVar8);
          dVar47 = dVar47 * local_158;
          dVar45 = dVar45 * local_158;
          dVar46 = dVar46 * local_158;
        }
        local_3a0 = dVar45 * dVar49 - dVar46 * dVar43;
        dVar8 = dVar46 * dVar7 - dVar47 * dVar49;
        dVar7 = dVar47 * dVar43 - dVar45 * dVar7;
        if ((((double)CONCAT44((uint)((ulonglong)local_3a0 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_3a0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000) &&
            ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)) &&
           ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) {
          local_3a0 = (double)local_288._0_8_;
          dVar8 = local_278;
          dVar7 = (double)local_268._0_8_;
        }
        dVar43 = dVar8 * dVar8 + local_3a0 * local_3a0 + dVar7 * dVar7;
        fVar54 = __real_3f800000;
        if (dVar43 <= __real_3e45798ee0000000) goto LAB_1481edb43;
        dVar43 = __real_3ff0000000000000 / SQRT(dVar43);
        local_1f8 = dVar43;
        do {
          local_3a0 = local_3a0 * dVar43;
          pdVar30 = pdVar29;
          fVar54 = __real_3f800000;
          dVar8 = dVar8 * dVar43;
          dVar7 = dVar7 * dVar43;
LAB_1481edb43:
          do {
            do {
              dVar50 = dVar7;
              dVar43 = dVar8;
              puVar33 = puVar32;
              pdVar29 = pdVar31;
              dVar49 = local_3a0;
              uVar4 = puVar33[7];
              fVar52 = *(float *)(pdVar29 + 0xc) * *(float *)&(this->Source)._padding_;
              local_314 = fVar52;
              if ((int)uVar4 < 2) {
                if (bVar16) {
                  pfVar23 = (float *)((longlong)(int)(this->Source)._padding_ + (longlong)pdVar29);
                  local_2f8 = pfVar23;
                }
                fVar54 = fVar62;
                if ((this->_padding_ & 0x2000000000) != 0) {
                  fVar54 = (float)puVar33[5];
                }
                dVar8 = pdVar29[4];
                dVar7 = pdVar29[5];
                dVar46 = (double)fVar52;
                *pfVar27 = (float)((pdVar29[3] - dVar9) + dVar46 * local_3a0);
                pfVar27[1] = (float)((dVar8 - dVar35) + dVar46 * dVar43);
                pfVar27[2] = (float)((dVar7 - dVar10) + dVar46 * dVar50);
                dVar8 = pdVar29[1];
                dVar7 = pdVar29[2];
                pfVar27[4] = (float)(*pdVar29 - dVar9);
                pfVar27[5] = (float)(dVar8 - dVar35);
                pfVar27[6] = (float)(dVar7 - dVar10);
                pfVar27[8] = fVar52;
                pfVar27[9] = fVar52;
                pfVar27[0x10] = fVar62;
                pfVar27[0x12] = fVar54;
                pfVar27[7] = 0.0;
                pfVar27[0x11] = 0.0;
                pfVar27[0x13] = 0.0;
                pfVar27[10] = *(float *)((longlong)pdVar29 + 0x3c);
                dVar8 = pdVar29[0xf];
                *(double *)(pfVar27 + 0xc) = pdVar29[0xe];
                *(double *)(pfVar27 + 0xe) = dVar8;
                fVar1 = __real_3f800000;
                pfVar26 = pfVar25;
                if (bVar11) {
                  if (pfVar23 == (float *)0x0) {
                    *pfVar25 = 1.0;
                    pfVar25[1] = 1.0;
                    pfVar25[2] = 1.0;
                  }
                  else {
                    *pfVar25 = *pfVar23;
                    pfVar25[1] = pfVar23[1];
                    pfVar25[2] = pfVar23[2];
                    fVar1 = pfVar23[3];
                  }
                  pfVar25[3] = fVar1;
                  pfVar26 = (float *)((longlong)pfVar25 + uVar22);
                }
                dVar8 = pdVar29[4];
                dVar7 = pdVar29[5];
                pfVar27[0x14] = (float)((pdVar29[3] - dVar9) - dVar46 * local_3a0);
                pfVar27[0x15] = (float)((dVar8 - dVar35) - dVar46 * dVar43);
                pfVar27[0x16] = (float)((dVar7 - dVar10) - dVar46 * dVar50);
                dVar8 = pdVar29[1];
                dVar7 = pdVar29[2];
                pfVar27[0x18] = (float)(*pdVar29 - dVar9);
                pfVar27[0x19] = (float)(dVar8 - dVar35);
                pfVar27[0x1a] = (float)(dVar7 - dVar10);
                pfVar27[0x1c] = fVar52;
                pfVar27[0x1d] = fVar52;
                pfVar27[0x24] = fVar62;
                pfVar27[0x26] = fVar54;
                pfVar27[0x1b] = 0.0;
                pfVar27[0x25] = 1.0;
                pfVar27[0x27] = 1.0;
                pfVar27[0x1e] = *(float *)((longlong)pdVar29 + 0x3c);
                dVar8 = pdVar29[0xf];
                *(double *)(pfVar27 + 0x20) = pdVar29[0xe];
                *(double *)(pfVar27 + 0x22) = dVar8;
                fVar54 = __real_3f800000;
                pfVar25 = pfVar26;
                if (bVar11) {
                  if (pfVar23 == (float *)0x0) {
                    *pfVar26 = 1.0;
                    pfVar26[1] = 1.0;
                    pfVar26[2] = 1.0;
                  }
                  else {
                    *pfVar26 = *pfVar23;
                    pfVar26[1] = pfVar23[1];
                    pfVar26[2] = pfVar23[2];
                    fVar54 = pfVar23[3];
                  }
                  pfVar25 = (float *)((longlong)pfVar26 + uVar28);
                  pfVar26[3] = fVar54;
                }
                fVar62 = fVar62 + fVar40 / (float)(int)uVar21;
                pfVar27 = pfVar27 + 0x28;
              }
              else {
                if ((pdVar30 == (double *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PrevParticle",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                        ,0x157c,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  iVar17 = (*pcVar6)();
                  return iVar17;
                }
                if ((((*puVar33 & 0xf0000000) == 0x40000000) ||
                    ((*puVar33 & 0xf0000000) == 0x10000000)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(((TrailPayload->Flags & 0xf0000000) == 0x40000000) || ((TrailPayload->Flags & 0xf0000000) == 0x10000000)) == 0"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                        ,0x157d,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  iVar17 = (*pcVar6)();
                  return iVar17;
                }
                local_228 = pdVar29[3];
                dStack_2b0 = pdVar29[4];
                local_1e8 = *(float *)(pdVar29 + 0xe);
                fStack_1e4 = *(float *)((longlong)pdVar29 + 0x74);
                fStack_1e0 = *(float *)(pdVar29 + 0xf);
                fStack_1dc = *(float *)((longlong)pdVar29 + 0x7c);
                local_388 = 0.0;
                local_374 = 0.0;
                local_380 = 0.0;
                local_378 = 0.0;
                fStack_1d4 = *(float *)((longlong)pdVar30 + 0x74);
                fStack_1b4 = *(float *)(pdVar30 + 0xf);
                fStack_194 = *(float *)((longlong)pdVar30 + 0x7c);
                local_218 = pdVar29[5];
                local_258 = (double)(float)*(undefined8 *)(puVar33 + 10);
                dStack_250 = (double)(float)((ulonglong)*(undefined8 *)(puVar33 + 10) >> 0x20);
                local_248 = (double)(float)puVar33[0xc];
                local_2a0 = pdVar30[3];
                dStack_298 = pdVar30[4];
                local_200 = pdVar30[5];
                local_240 = (double)(float)*(undefined8 *)(local_340 + 10);
                dStack_238 = (double)(float)((ulonglong)*(undefined8 *)(local_340 + 10) >> 0x20);
                local_230 = (double)(float)local_340[0xc];
                fVar1 = *(float *)(pdVar30 + 0xc);
                fVar2 = *(float *)&(this->Source)._padding_;
                local_31c = fVar54 / (float)(int)uVar4;
                local_384 = 0.0;
                local_37c = 0.0;
                local_370 = fVar54;
                local_36c = fVar54;
                if (bVar13) {
                  lVar20 = (longlong)(int)(this->Source)._padding_;
                  local_37c = *(float *)(lVar20 + 4 + (longlong)pdVar29);
                  local_384 = *(float *)(lVar20 + (longlong)pdVar29);
                  local_374 = *(float *)(lVar20 + 8 + (longlong)pdVar29);
                  local_36c = *(float *)(lVar20 + 0xc + (longlong)pdVar29);
                  local_388 = *(float *)(lVar20 + (longlong)pdVar30);
                  local_380 = *(float *)(lVar20 + 4 + (longlong)pdVar30);
                  local_378 = *(float *)(lVar20 + 8 + (longlong)pdVar30);
                  local_370 = *(float *)(lVar20 + 0xc + (longlong)pdVar30);
                }
                iVar17 = uVar4 - 1;
                local_318 = *(float *)(pdVar30 + 0xe) - local_1e8;
                local_1d8 = fStack_1d4 - fStack_1e4;
                local_1b8 = fStack_1b4 - fStack_1e0;
                local_198 = fStack_194 - fStack_1dc;
                fVar53 = fVar54;
                fVar59 = fVar54;
                fVar60 = fVar54;
                fVar61 = fVar54;
                do {
                  fVar51 = (float)iVar17 * local_31c;
                  fVar41 = fVar51 * fVar51;
                  fVar48 = (fVar51 + fVar51) * fVar41;
                  fVar36 = fVar41 * fVar51 - fVar41;
                  fVar44 = fVar41 * __real_40400000 - fVar48;
                  fVar34 = (fVar41 * fVar51 - (fVar51 + fVar51) * fVar51) + fVar51;
                  fVar53 = (fVar48 - fVar41 * __real_40400000) + fVar53;
                  dVar8 = (double)fVar44 * local_2a0 + (double)fVar36 * local_240 +
                          (double)fVar34 * local_258 + (double)fVar53 * local_228;
                  dVar9 = (double)fVar44 * dStack_298 + (double)fVar36 * dStack_238 +
                          (double)fVar34 * dStack_250 + (double)fVar53 * dStack_2b0;
                  local_2d0._8_4_ = SUB84(dVar9,0);
                  local_2d0._0_8_ = dVar8;
                  local_2d0._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                  dVar9 = (double)fVar51;
                  fVar41 = local_318 * fVar51 + local_1e8;
                  local_2c0 = (double)fVar34 * local_248 + (double)fVar53 * local_218 +
                              (double)fVar44 * local_200 + (double)fVar36 * local_230;
                  fVar53 = local_1d8 * fVar51 + fStack_1e4;
                  fVar44 = (fVar1 * fVar2 - fVar52) * fVar51 + local_314;
                  fVar34 = local_1b8 * fVar51 + fStack_1e0;
                  fVar36 = local_198 * fVar51 + fStack_1dc;
                  if (bVar13) {
                    fVar54 = (local_388 - local_384) * fVar51 + local_384;
                    fVar59 = (local_380 - local_37c) * fVar51 + local_37c;
                    fVar60 = (local_378 - local_374) * fVar51 + local_374;
                    fVar61 = (local_370 - local_36c) * fVar51 + local_36c;
                  }
                  fVar48 = fVar62;
                  if ((this->_padding_ & 0x2000000000) != 0) {
                    fVar48 = ((float)local_340[5] - (float)puVar33[5]) * fVar51 + (float)puVar33[5];
                  }
                  dVar35 = (double)fVar44;
                  local_2b8 = (dVar9 * (local_330 - dVar43) + dVar43) * dVar35;
                  dVar7 = (dVar9 * (local_338 - local_3a0) + local_3a0) * dVar35;
                  dVar35 = (dVar9 * (local_328 - dVar50) + dVar50) * dVar35;
                  fVar42 = (float)((dVar7 + dVar8) - local_310);
                  *pfVar27 = fVar42;
                  fVar39 = (float)((local_2b8 + (double)local_2d0._8_8_) - local_308);
                  pfVar27[1] = fVar39;
                  fVar51 = (float)((dVar35 + local_2c0) - dVar10);
                  pfVar27[2] = fVar51;
                  pfVar27[4] = fVar42;
                  pfVar27[5] = fVar39;
                  pfVar27[6] = fVar51;
                  pfVar27[8] = fVar44;
                  pfVar27[9] = fVar44;
                  pfVar27[0x10] = fVar62;
                  pfVar27[0x12] = fVar48;
                  pfVar27[7] = 0.0;
                  pfVar27[0x11] = 0.0;
                  pfVar27[0x13] = 0.0;
                  pfVar27[10] = *(float *)((longlong)pdVar29 + 0x3c);
                  pfVar27[0xc] = fVar41;
                  pfVar27[0xd] = fVar53;
                  pfVar27[0xe] = fVar34;
                  pfVar27[0xf] = fVar36;
                  if (bVar11) {
                    *pfVar25 = fVar54;
                    pfVar25[1] = fVar59;
                    pfVar25[2] = fVar60;
                    pfVar25[3] = fVar61;
                    pfVar25 = (float *)((longlong)pfVar25 + (ulonglong)local_394);
                  }
                  fVar42 = (float)((dVar8 - dVar7) - local_310);
                  pfVar27[0x14] = fVar42;
                  fVar39 = (float)(((double)local_2d0._8_8_ - local_2b8) - local_308);
                  pfVar27[0x15] = fVar39;
                  fVar51 = (float)((local_2c0 - dVar35) - dVar10);
                  pfVar27[0x16] = fVar51;
                  pfVar27[0x18] = fVar42;
                  pfVar27[0x19] = fVar39;
                  pfVar27[0x1a] = fVar51;
                  pfVar27[0x1c] = fVar44;
                  pfVar27[0x1d] = fVar44;
                  pfVar27[0x24] = fVar62;
                  pfVar27[0x26] = fVar48;
                  pfVar27[0x1b] = 0.0;
                  pfVar27[0x25] = 1.0;
                  pfVar27[0x27] = 1.0;
                  pfVar27[0x1e] = *(float *)((longlong)pdVar29 + 0x3c);
                  pfVar27[0x20] = fVar41;
                  pfVar27[0x21] = fVar53;
                  pfVar27[0x22] = fVar34;
                  pfVar27[0x23] = fVar36;
                  if (bVar11) {
                    *pfVar25 = fVar54;
                    pfVar25[1] = fVar59;
                    pfVar25[2] = fVar60;
                    pfVar25[3] = fVar61;
                    pfVar25 = (float *)((longlong)pfVar25 + (ulonglong)local_394);
                  }
                  fVar62 = fVar62 + fVar40 / (float)(int)uVar21;
                  pfVar27 = pfVar27 + 0x28;
                  iVar17 = iVar17 + -1;
                  fVar53 = __real_3f800000;
                } while (-1 < iVar17);
                uVar22 = (ulonglong)local_394;
                pfVar23 = local_2f8;
                lVar20 = local_2a8;
                dVar9 = local_310;
                dVar35 = local_308;
                dStack_220 = dStack_2b0;
                local_210 = local_2a0;
                dStack_208 = dStack_298;
                fStack_1d0 = fStack_1d4;
                fStack_1cc = fStack_1d4;
                local_1c8 = fStack_1e4;
                fStack_1c4 = fStack_1e4;
                fStack_1c0 = fStack_1e4;
                fStack_1bc = fStack_1e4;
                fStack_1b0 = fStack_1b4;
                fStack_1ac = fStack_1b4;
                local_1a8 = fStack_1e0;
                fStack_1a4 = fStack_1e0;
                fStack_1a0 = fStack_1e0;
                fStack_19c = fStack_1e0;
                fStack_190 = fStack_194;
                fStack_18c = fStack_194;
                local_188 = fStack_1dc;
                fStack_184 = fStack_1dc;
                fStack_180 = fStack_1dc;
                fStack_17c = fStack_1dc;
                bVar16 = bVar13;
              }
              fVar54 = __real_3f800000;
              if ((*puVar33 & 0x3fff) == 0x3fff) {
                uVar37 = (undefined4)local_d8;
                uVar38 = local_d8._4_4_;
                fVar40 = __real_40000000;
                local_328 = __real_3ff0000000000000;
                uVar55 = local_e8._0_4_;
                uVar56 = local_e8._4_4_;
                uVar57 = local_e8._8_4_;
                uVar58 = uStack_dc;
                goto LAB_1481ee798;
              }
              pdVar31 = (double *)
                        ((int)((*puVar33 & 0x3fff) * (int)(this->Source)._padding_) + lVar20);
              puVar32 = (uint *)((longlong)(int)(this->Source)._padding_ + (longlong)pdVar31);
              local_3a0 = (double)(float)puVar32[0xd];
              uVar28 = local_348;
              pdVar30 = pdVar29;
              dVar8 = (double)(float)puVar32[0xe];
              dVar7 = (double)(float)puVar32[0xf];
              local_340 = puVar33;
              local_338 = dVar49;
              local_330 = dVar43;
              local_328 = dVar50;
            } while (this->RenderAxisOption != 0);
            dVar50 = pdVar31[3] - (double)local_e8._0_8_;
            dVar43 = pdVar31[5] - local_d8;
            dVar7 = pdVar31[4] - stack0xffffffffffffff20;
            dVar8 = dVar7 * dVar7 + dVar50 * dVar50 + dVar43 * dVar43;
            if (__real_3e45798ee0000000 < dVar8) {
              local_1f0 = __real_3ff0000000000000 / SQRT(dVar8);
              dVar50 = dVar50 * local_1f0;
              dVar7 = dVar7 * local_1f0;
              dVar43 = dVar43 * local_1f0;
            }
            dVar46 = (double)(float)puVar32[10];
            dVar49 = (double)(float)puVar32[0xc];
            dVar47 = (double)(float)puVar32[0xb];
            dVar8 = dVar47 * dVar47 + dVar46 * dVar46 + dVar49 * dVar49;
            if (__real_3e45798ee0000000 < dVar8) {
              local_178 = __real_3ff0000000000000 / SQRT(dVar8);
              dVar47 = dVar47 * local_178;
              dVar46 = local_178 * dVar46;
              dVar49 = local_178 * dVar49;
            }
            local_3a0 = dVar47 * dVar43 - dVar49 * dVar7;
            dVar8 = dVar49 * dVar50 - dVar46 * dVar43;
            dVar7 = dVar46 * dVar7 - dVar47 * dVar50;
            if ((((double)CONCAT44((uint)((ulonglong)local_3a0 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_3a0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                  ) <= __real_3f1a36e2e0000000) &&
                ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                 __real_3f1a36e2e0000000)) &&
               ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                __real_3f1a36e2e0000000)) {
              local_3a0 = (double)local_288._0_8_;
              dVar8 = local_278;
              dVar7 = (double)local_268._0_8_;
            }
            dVar43 = dVar8 * dVar8 + local_3a0 * local_3a0 + dVar7 * dVar7;
          } while (dVar43 <= __real_3e45798ee0000000);
          dVar43 = __real_3ff0000000000000 / SQRT(dVar43);
          local_170 = dVar43;
        } while( true );
      }
LAB_1481ee798:
      local_34c = local_34c + 1;
      local_2f0 = local_2f0 + 2;
      FVar24 = local_2e8;
    } while (local_34c < *(int *)((longlong)&(this->Source)._padding_ + 4));
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return 0;
}

// Init @ 148201c50

void __thiscall FDynamicRibbonEmitterData::Init(FDynamicRibbonEmitterData *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  
  this->_padding_ = (longlong)&this->Source;
  FDynamicTrailsEmitterData::Init((FDynamicTrailsEmitterData *)this,param_1);
  lVar2 = (**(code **)(this->_padding_ + 0x50))(this);
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)(0 < iVar1);
  return;
}

// RenderDebug @ 14820fff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FDynamicRibbonEmitterData::RenderDebug
          (FDynamicRibbonEmitterData *this,FParticleSystemSceneProxy *param_1,
          FPrimitiveDrawInterface *param_2,FSceneView *param_3,bool param_4)

{
  uint *puVar1;
  code *pcVar2;
  double dVar3;
  uint *puVar4;
  uchar uVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar9;
  uint *puVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  FLinearColor_u_0 *pFVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_250;
  uint *local_248;
  byte local_230;
  byte local_22c;
  int local_228;
  longlong local_220;
  FLinearColor_u_0 local_210;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  TVector<double>_u_0 local_1f0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  uint local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  uint *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  FLinearColor_u_0 local_198;
  FLinearColor_u_0 local_188;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  double *local_168;
  TVector<double>_u_0 local_160;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ESceneDepthPriorityGroup EVar8;
  
  if ((this->_padding_ & 0xc00000000) != 0) {
    local_220 = (this->Source)._padding_;
    local_1b8 = (uint *)0x0;
    local_228 = 0;
    if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
      local_1a0 = 0;
      fVar24 = __real_437f0000;
      fVar23 = __real_3f800000;
      fVar22 = __real_3b808081;
      local_1a8 = local_220;
      do {
        iVar14 = (int)(this->Source)._padding_;
        lVar15 = (longlong)(int)(this->Source)._padding_;
        lVar19 = (int)((uint)*(ushort *)(local_1a0 + (this->Source)._padding_) * iVar14) + local_220
        ;
        uVar7 = *(uint *)(lVar19 + lVar15);
        puVar1 = (uint *)(lVar19 + lVar15);
        if (((uVar7 & 0xf0000000) == 0x40000000) || ((uVar7 & 0xf0000000) == 0x10000000)) {
          local_1c4 = 0.0;
          local_1c0 = __real_40000000 / (float)(int)puVar1[2];
          lVar9 = lVar19;
          puVar10 = puVar1;
          while (local_250 = lVar9, puVar4 = puVar10, (uVar7 & 0x3fff) != 0x3fff) {
            lVar9 = (int)(iVar14 * (uVar7 & 0x3fff)) + local_220;
            puVar10 = (uint *)(lVar15 + lVar9);
            local_250 = lVar19;
            puVar4 = local_1b8;
            if (puVar10 == (uint *)0x0) break;
            uVar7 = *puVar10;
          }
          local_1b8 = puVar4;
          if (local_1b8 != puVar1) {
            local_1b0 = local_250;
            if ((local_1b8[9] & 1) != 0) {
              local_1b0 = 0;
            }
            iVar12 = (int)fVar24;
            iVar14 = 0;
            puVar10 = local_1b8;
            do {
              uVar7 = (int)*puVar10 >> 0xe & 0x3fff;
              if (uVar7 == 0x3fff) {
                local_220 = 0;
                local_248 = (uint *)0x0;
                lVar15 = local_1b0;
LAB_1482101f6:
                local_1b0 = lVar15;
              }
              else {
                local_220 = (int)(uVar7 * (int)(this->Source)._padding_) + local_220;
                local_248 = (uint *)((int)(this->Source)._padding_ + local_220);
                if (((local_248 != (uint *)0x0) && ((local_248[9] & 1) == 0)) &&
                   (lVar15 = local_220, local_1b0 == 0)) goto LAB_1482101f6;
              }
              local_1c4 = local_1c4 + local_1c0;
              local_1f0._s_0.X = *(double *)(local_250 + 0x18);
              local_1f0._s_0.Y = *(double *)(local_250 + 0x20);
              bVar13 = (byte)iVar14;
              bVar11 = (byte)iVar12;
              local_1f0._s_0.Z = *(double *)(local_250 + 0x28);
              fVar26 = *(float *)(local_250 + 0x60) * *(float *)&(this->Source)._padding_;
              iVar14 = (int)(local_1c4 * fVar24);
              iVar12 = (int)((fVar23 - local_1c4) * fVar24);
              if ((this->_padding_ & 0x400000000) != 0) {
                if ((puVar10[9] & 1) == 0) {
                  EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                    ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar5 = (uchar)EVar8;
                  local_198._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
                  local_198._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
                  local_198._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
                  local_198._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar22;
                  pFVar16 = &local_198;
                }
                else {
                  EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                    ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar5 = (uchar)EVar8;
                  pFVar16 = &local_188;
                  local_188._s_0.R =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
                  local_188._s_0.G =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
                  local_188._s_0.B =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
                  local_188._s_0.A = (float)FColor::Green.field0_0x0._3_1_ * fVar22;
                }
                DrawWireStar(param_2,(TVector<double> *)&local_1f0._s_0,fVar26,
                             (FLinearColor *)&pFVar16->_s_0,uVar5);
                if (((this->_padding_ & 0x1000000000) != 0) && (local_220 != 0)) {
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                    ((FPrimitiveSceneProxy *)param_1,param_3);
                  local_178 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
                  local_174 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
                  local_170 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
                  local_168 = (double *)(local_220 + 0x18);
                  local_16c = (float)FColor::Blue.field0_0x0._3_1_ * fVar22;
                  (*pcVar2)(param_2,&local_1f0,local_168,&local_178,(char)EVar8,0,0,0);
                  local_1cc = puVar10[7];
                  local_148 = local_1f0._s_0.X;
                  dStack_140 = local_1f0._s_0.Y;
                  local_138 = local_1f0._s_0.Z;
                  local_1c8 = fVar23 / (float)(int)local_1cc;
                  local_1d8 = FLinearColor::sRGBToLinearTable[bVar11];
                  local_1d4 = FLinearColor::sRGBToLinearTable[bVar13];
                  local_230 = (byte)iVar12;
                  local_1d0 = FLinearColor::sRGBToLinearTable[0];
                  local_200 = FLinearColor::sRGBToLinearTable[local_230];
                  local_22c = (byte)iVar14;
                  local_1fc = FLinearColor::sRGBToLinearTable[local_22c];
                  iVar18 = 0;
                  local_1f8 = FLinearColor::sRGBToLinearTable[0];
                  local_1f4 = fVar23;
                  if (0 < (int)local_1cc) {
                    fVar26 = fVar26 * __real_3e99999a;
                    fVar24 = fVar23;
                    do {
                      fVar23 = __real_3f800000;
                      fVar25 = (float)iVar18 * local_1c8;
                      fVar20 = fVar25 * fVar25;
                      fVar22 = (fVar25 + fVar25) * fVar20;
                      fVar21 = fVar20 * __real_40400000 - fVar22;
                      fVar24 = (fVar22 - fVar20 * __real_40400000) + fVar24;
                      fVar22 = fVar20 * fVar25 - fVar20;
                      fVar20 = (fVar20 * fVar25 - (fVar25 + fVar25) * fVar25) + fVar25;
                      dVar3 = (double)fVar22 *
                              (double)(float)((ulonglong)*(undefined8 *)(local_248 + 10) >> 0x20) +
                              (double)fVar21 * local_168[1] +
                              (double)fVar24 * *(double *)(local_250 + 0x20) +
                              (double)fVar20 *
                              (double)(float)((ulonglong)*(undefined8 *)(puVar10 + 10) >> 0x20);
                      local_160._8_4_ = SUB84(dVar3,0);
                      local_160._s_0.X =
                           (double)fVar22 * (double)(float)*(undefined8 *)(local_248 + 10) +
                           (double)fVar21 * *local_168 +
                           (double)fVar24 * *(double *)(local_250 + 0x18) +
                           (double)fVar20 * (double)(float)*(undefined8 *)(puVar10 + 10);
                      local_160._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                      local_210._s_0.R = (local_200 - local_1d8) * fVar25 + local_1d8;
                      local_210._s_0.G = (local_1fc - local_1d4) * fVar25 + local_1d4;
                      local_160._s_0.Z =
                           (double)fVar24 * *(double *)(local_250 + 0x28) +
                           (double)fVar20 * (double)(float)puVar10[0xc] +
                           (double)fVar21 * local_168[2] +
                           (double)fVar22 * (double)(float)local_248[0xc];
                      local_210._s_0.B = (local_1f8 - local_1d0) * fVar25 + local_1d0;
                      pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                      local_210._s_0.A = (local_1f4 - __real_3f800000) * fVar25 + __real_3f800000;
                      EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                        ((FPrimitiveSceneProxy *)param_1,param_3);
                      (*pcVar2)(param_2,&local_148,&local_160,&local_210,(char)EVar8,0,0,0);
                      if (iVar18 != 0) {
                        local_210._s_0.R = fVar23 - fVar25;
                        local_210._s_0.G = local_210._s_0.R;
                        local_210._s_0.B = fVar25;
                      }
                      EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                        ((FPrimitiveSceneProxy *)param_1,param_3);
                      DrawWireStar(param_2,(TVector<double> *)&local_160._s_0,fVar26,
                                   (FLinearColor *)&local_210._s_0,(uchar)EVar8);
                      local_148 = local_160._s_0.X;
                      dStack_140 = local_160._s_0.Y;
                      iVar18 = iVar18 + 1;
                      local_138 = local_160._s_0.Z;
                      fVar24 = fVar23;
                      fVar22 = __real_3b808081;
                    } while (iVar18 < (int)local_1cc);
                  }
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                    ((FPrimitiveSceneProxy *)param_1,param_3);
                  (*pcVar2)(param_2,&local_148,local_220 + 0x18,&local_200,(char)EVar8,0,0,0);
                }
              }
              if ((this->_padding_ & 0x800000000) != 0) {
                pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                local_128 = (double)(float)puVar10[0xb] + local_1f0._s_0.Y;
                local_120 = (double)(float)puVar10[0xc] + local_1f0._s_0.Z;
                local_130 = (double)(float)puVar10[10] + local_1f0._s_0.X;
                if (puVar10 == puVar1) {
                  EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                    ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar6 = (undefined1)EVar8;
                  puVar17 = &local_100;
                  local_100 = ___xmm_3f800000000000003f80000000000000;
                  uStack_f8 = _UNK_15076b198;
                }
                else {
                  EVar8 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                    ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar6 = (undefined1)EVar8;
                  if (puVar10 == local_1b8) {
                    puVar17 = &local_f0;
                    local_f0 = ___xmm_3f80000000000000000000003f800000;
                    uStack_e8 = _UNK_15076b188;
                  }
                  else {
                    puVar17 = &local_e0;
                    local_e0 = ___xmm_3f800000000000003f8000003f800000;
                    uStack_d8 = _UNK_150a07f68;
                  }
                }
                (*pcVar2)(param_2,&local_1f0,&local_130,puVar17,uVar6,0,0,0);
              }
              lVar15 = local_220;
              if (local_220 == 0) {
                local_248 = (uint *)0x0;
                lVar15 = local_250;
              }
              local_250 = lVar15;
              puVar10 = local_248;
              local_220 = local_1a8;
              fVar24 = __real_437f0000;
            } while (local_248 != (uint *)0x0);
          }
        }
        local_228 = local_228 + 1;
        local_1a0 = local_1a0 + 2;
      } while (local_228 < *(int *)((longlong)&(this->Source)._padding_ + 4));
    }
  }
  return;
}

