// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// GetDynamicParameterVertexStride @ 148115ad0

int __thiscall
FDynamicBeam2EmitterData::GetDynamicParameterVertexStride(FDynamicBeam2EmitterData *this)

{
  return 0x10;
}

// GetDynamicVertexStride @ 148115b30

int __thiscall
FDynamicBeam2EmitterData::GetDynamicVertexStride(FDynamicBeam2EmitterData *this,Type param_1)

{
  return 0x50;
}

// GetSource @ 148119130

FDynamicEmitterReplayDataBase * __thiscall
FDynamicBeam2EmitterData::GetSource(FDynamicBeam2EmitterData *this)

{
  return (FDynamicEmitterReplayDataBase *)&this->Source;
}

// ~FDynamicBeam2EmitterData @ 1481c8fc0

void __thiscall FDynamicBeam2EmitterData::~FDynamicBeam2EmitterData(FDynamicBeam2EmitterData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDynamicBeam2EmitterData__6B_;
  pFVar1 = (this->Source).TrianglesPerSheet.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  this->_padding_ = (longlong)&___7FDynamicEmitterDataBase__6B_;
  return;
}

// DoBufferFill @ 1481e1c00

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
FDynamicBeam2EmitterData::DoBufferFill(FDynamicBeam2EmitterData *this,FAsyncBufferFillData *param_1)

{
  if ((((0 < param_1->VertexCount) && (0 < param_1->IndexCount)) &&
      (param_1->VertexData != (void *)0x0)) && (param_1->IndexData != (void *)0x0)) {
    FillIndexData(this,param_1);
    if ((this->Source).bLowFreqNoise_Enabled != false) {
      FillData_Noise(this,param_1);
      return;
    }
    FillVertexData_NoNoise(this,param_1);
  }
  return;
}

// FillData_InterpolatedNoise @ 1481e41b0

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
FDynamicBeam2EmitterData::FillData_InterpolatedNoise
          (FDynamicBeam2EmitterData *this,FAsyncBufferFillData *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  FSceneView *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  bool bVar16;
  int iVar17;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  double *pdVar25;
  double *pdVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double extraout_XMM0_Qa;
  double dVar36;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double extraout_XMM0_Qb_00;
  undefined1 auVar41 [16];
  double extraout_XMM0_Qb_01;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  double dVar51;
  undefined1 auVar52 [16];
  float fVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  float fVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar67;
  undefined1 auVar66 [16];
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  int local_544;
  int local_540;
  float local_53c;
  TVector<double>_u_0 local_530;
  int local_518;
  int local_514;
  int local_510;
  float local_50c;
  float local_508;
  float *local_500;
  int local_4f8;
  float local_4f4;
  float local_4f0;
  int local_4ec;
  float *local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  double local_4d0;
  double *local_4c8;
  undefined1 local_4c0 [12];
  undefined4 uStack_4b4;
  double local_4b0;
  float *local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  float local_488;
  int local_484;
  double local_480;
  double local_478;
  float local_470;
  uint local_46c;
  double local_468;
  double local_460;
  double local_458;
  double dStack_450;
  double local_448;
  double local_440;
  double dStack_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double *local_410;
  longlong local_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  float local_3e8;
  float fStack_3e4;
  longlong local_3e0;
  double local_3d8;
  float local_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  double local_3b0;
  float local_3a8;
  float fStack_3a4;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  longlong local_318;
  double local_310;
  int *local_308;
  double local_300;
  longlong local_2f8;
  longlong local_2f0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 local_1b0 [16];
  double local_1a0;
  undefined1 local_198 [16];
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
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
  double local_e8;
  
  if (((this->Source).InterpolationPoints < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Source.InterpolationPoints > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0x10ea,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    iVar17 = (*pcVar6)();
    return iVar17;
  }
  if (((this->Source).Frequency < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Source.Frequency > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0x10eb,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    iVar17 = (*pcVar6)();
    return iVar17;
  }
  pFVar5 = param_1->View;
  local_500 = param_1->VertexData;
  local_2c8 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][0];
  dStack_2c0 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][1];
  local_2b8 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][2];
  dStack_2b0 = (pFVar5->ViewMatrices).InvViewMatrix.M[0][3];
  local_298 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][2];
  dStack_290 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][3];
  local_2a8 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][0];
  dStack_2a0 = (pFVar5->ViewMatrices).InvViewMatrix.M[1][1];
  local_278 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][2];
  dStack_270 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][3];
  local_288 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][0];
  dStack_280 = (pFVar5->ViewMatrices).InvViewMatrix.M[2][1];
  local_258 = (pFVar5->ViewMatrices).InvViewMatrix.M[3][2];
  dStack_250 = (pFVar5->ViewMatrices).InvViewMatrix.M[3][3];
  local_268 = *(undefined1 (*) [16])(pFVar5->ViewMatrices).InvViewMatrix.M[3];
  iVar17 = (this->Source).NoiseTessellation;
  iVar22 = 1;
  if (iVar17 != 0) {
    iVar22 = iVar17;
  }
  iVar17 = (this->Source).Frequency;
  iVar21 = 1;
  if (0 < iVar17) {
    iVar21 = iVar17;
  }
  local_1d8._8_4_ = local_268._8_4_;
  local_1d8._0_8_ = local_268._8_8_;
  local_1d8._12_4_ = local_268._12_4_;
  local_544 = 0;
  local_470 = __real_3f800000 / (float)iVar22;
  local_4f0 = __real_3f800000 / (float)(iVar21 * iVar22);
  local_168 = (param_1->WorldToLocal).M[0][2];
  dStack_160 = (param_1->WorldToLocal).M[0][3];
  local_480 = 0.0;
  local_4a0 = 0.0;
  local_498 = 0.0;
  local_490 = 0.0;
  local_178 = (param_1->WorldToLocal).M[0][0];
  dStack_170 = (param_1->WorldToLocal).M[0][1];
  local_148 = (param_1->WorldToLocal).M[1][2];
  dStack_140 = (param_1->WorldToLocal).M[1][3];
  local_158 = (param_1->WorldToLocal).M[1][0];
  dStack_150 = (param_1->WorldToLocal).M[1][1];
  local_128 = (param_1->WorldToLocal).M[2][2];
  dStack_120 = (param_1->WorldToLocal).M[2][3];
  local_138 = (param_1->WorldToLocal).M[2][0];
  dStack_130 = (param_1->WorldToLocal).M[2][1];
  local_108 = (param_1->WorldToLocal).M[3][2];
  dStack_100 = (param_1->WorldToLocal).M[3][3];
  local_118 = (param_1->WorldToLocal).M[3][0];
  dStack_110 = (param_1->WorldToLocal).M[3][1];
  local_388 = (param_1->LocalToWorld).M[0][2];
  dStack_380 = (param_1->LocalToWorld).M[0][3];
  local_398 = (param_1->LocalToWorld).M[0][0];
  dStack_390 = (param_1->LocalToWorld).M[0][1];
  local_368 = (param_1->LocalToWorld).M[1][2];
  dStack_360 = (param_1->LocalToWorld).M[1][3];
  local_378 = (param_1->LocalToWorld).M[1][0];
  dStack_370 = (param_1->LocalToWorld).M[1][1];
  local_348 = (param_1->LocalToWorld).M[2][2];
  dStack_340 = (param_1->LocalToWorld).M[2][3];
  local_358 = (param_1->LocalToWorld).M[2][0];
  dStack_350 = (param_1->LocalToWorld).M[2][1];
  local_328 = (param_1->LocalToWorld).M[3][2];
  dStack_320 = (param_1->LocalToWorld).M[3][3];
  local_4ec = 0;
  local_338 = (param_1->LocalToWorld).M[3][0];
  dStack_330 = (param_1->LocalToWorld).M[3][1];
  local_418 = (double)*(float *)&(this->Source)._padding_ * __real_4140000000000000;
  local_420 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  local_460 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  iVar17 = 0;
  local_1e8 = local_268;
  local_1c8 = local_258;
  dStack_1c0 = dStack_250;
  if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
    uVar69 = SUB84(__real_3ff0000000000000,0);
    uVar70 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    fVar49 = __real_3f800000;
    do {
      pfVar18 = (float *)0x0;
      lVar27 = (longlong)(this->Source).BeamDataOffset;
      local_408 = 0;
      local_4a8 = (float *)0x0;
      local_410 = (double *)0x0;
      local_4c8 = (double *)0x0;
      lVar28 = (longlong)(local_4ec * (int)(this->Source)._padding_) + (this->Source)._padding_;
      local_4e8 = (float *)0x0;
      local_3e0 = lVar27;
      if ((*(int *)(lVar28 + 0xa0 + lVar27) != 0) &&
         (iVar17 = *(int *)(lVar28 + 0x98 + lVar27), iVar17 != 0)) {
        iVar21 = (this->Source).InterpolatedPointsOffset;
        if (iVar21 != -1) {
          local_408 = lVar28 + iVar21;
        }
        lVar20 = local_408;
        iVar21 = (this->Source).NoiseRateOffset;
        if (iVar21 != -1) {
          local_4a8 = (float *)(lVar28 + iVar21);
        }
        iVar21 = (this->Source).TargetNoisePointsOffset;
        if (iVar21 != -1) {
          local_410 = (double *)(lVar28 + iVar21);
        }
        pdVar26 = local_410;
        iVar21 = (this->Source).NextNoisePointsOffset;
        if (iVar21 != -1) {
          local_4c8 = (double *)(lVar28 + iVar21);
        }
        pdVar25 = local_4c8;
        iVar21 = (this->Source).TaperValuesOffset;
        if (iVar21 != -1) {
          local_4e8 = (float *)(lVar28 + iVar21);
        }
        pfVar24 = local_4e8;
        iVar21 = (this->Source).NoiseDistanceScaleOffset;
        if (iVar21 != -1) {
          pfVar18 = (float *)(lVar28 + iVar21);
        }
        fVar46 = fVar49;
        if (pfVar18 != (float *)0x0) {
          fVar46 = *pfVar18;
        }
        fVar57 = (float)*(int *)(lVar28 + 0x70 + lVar27) / (float)iVar17;
        local_488 = (float)truncf();
        local_488 = fVar57 - local_488;
        local_484 = (int)fVar57;
        if (pdVar26 != (double *)0x0) {
          fVar57 = *(float *)&(this->Source)._padding_ * *(float *)(lVar28 + 0x60);
          local_4b0 = *(double *)(lVar28 + 0x10 + lVar27);
          local_428 = (double)fVar57;
          _local_4c0 = *(undefined1 (*) [16])(lVar28 + lVar27);
          if ((this->Source).bUseSource == false) {
            uVar42 = SUB84(local_178,0);
            uVar43 = (undefined4)((ulonglong)local_178 >> 0x20);
            uVar44 = SUB84(dStack_170,0);
            uVar45 = (undefined4)((ulonglong)dStack_170 >> 0x20);
            local_448 = local_168;
          }
          else {
            puVar2 = (undefined4 *)(lVar28 + 0x18 + lVar27);
            uVar42 = *puVar2;
            uVar43 = puVar2[1];
            uVar44 = puVar2[2];
            uVar45 = puVar2[3];
            local_448 = *(double *)(lVar28 + 0x28 + lVar27);
          }
          local_4f4 = (this->Source).NoiseTangentStrength;
          dVar30 = (double)local_4f4;
          local_46c = *(uint *)(lVar28 + 0x6c + lVar27) >> 0x1f;
          local_540 = 0;
          local_458 = (double)CONCAT44(uVar43,uVar42) * dVar30;
          dStack_450 = (double)CONCAT44(uVar45,uVar44) * dVar30;
          local_448 = local_448 * dVar30;
          local_4e0 = *(undefined8 *)(lVar28 + lVar27);
          uStack_4d8 = ((undefined8 *)(lVar28 + lVar27))[1];
          local_4d0 = *(double *)(lVar28 + 0x10 + lVar27);
          if (0 < (this->Source).Sheets) {
            local_468 = (double)fVar46;
            local_2f8 = (longlong)local_484 * 3;
            local_478 = (double)(this->Source).NoiseRangeScale;
            local_2f0 = ((longlong)local_484 + 1) * 3;
            local_308 = (int *)(lVar27 + 0x98 + lVar28);
            local_300 = (double)local_488;
            local_508 = fVar49 - local_488;
            do {
              pfVar18 = &(this->Source).NoiseLockTime;
              puVar1 = (undefined8 *)(lVar28 + lVar27);
              uVar42 = *(undefined4 *)puVar1;
              uVar43 = *(undefined4 *)((longlong)puVar1 + 4);
              local_4e0 = *puVar1;
              uVar44 = *(undefined4 *)(puVar1 + 1);
              uVar45 = *(undefined4 *)((longlong)puVar1 + 0xc);
              uStack_4d8 = puVar1[1];
              local_4d0 = *(double *)(lVar28 + 0x10 + lVar27);
              uVar71 = SUB84(local_4d0,0);
              uVar72 = (undefined4)((ulonglong)local_4d0 >> 0x20);
              dVar58 = (double)local_508;
              dVar31 = local_300 * *(double *)(lVar20 + local_2f8 * 8);
              dVar30 = *(double *)(lVar20 + local_2f0 * 8);
              dVar36 = *(double *)(lVar20 + 8 + local_2f0 * 8);
              dVar55 = *(double *)(lVar20 + 0x10 + local_2f0 * 8);
              dVar32 = local_300 * *(double *)(lVar20 + 8 + local_2f8 * 8);
              dVar33 = local_300 * *(double *)(lVar20 + 0x10 + local_2f8 * 8);
              if ((0.0 < *pfVar18 || *pfVar18 == 0.0) &&
                 ((this->Source).bSmoothNoise_Enabled != false)) {
                local_530._s_0.X = *pdVar25 - *pdVar26;
                dVar48 = pdVar25[1];
                dVar35 = pdVar26[1];
                dVar54 = pdVar26[2];
                local_530._s_0.Y = dVar48 - dVar35;
                local_530._s_0.Z = pdVar25[2] - dVar54;
                UE::Math::TVector<double>::Normalize
                          ((TVector<double> *)&local_530._s_0,__real_3e45798ee0000000);
                fVar49 = (this->Source).NoiseLockRadius;
                dVar34 = (double)*local_4a8;
                dVar47 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_530._s_0.Y *
                         dVar34;
                dVar51 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_530._s_0.X *
                         dVar34 + *pdVar26;
                dVar34 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_530._s_0.Z *
                         dVar34;
                if ((fVar49 <= (float)((uint)(float)(dVar51 - *pdVar25) &
                                      __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                   ((fVar49 <= (float)((uint)(float)((dVar35 + dVar47) - dVar48) &
                                      __xmm_7fffffff7fffffff7fffffff7fffffff) ||
                    (fVar49 <= (float)((uint)(float)((dVar54 + dVar34) - pdVar25[2]) &
                                      __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
                  *pdVar26 = dVar51;
                  pdVar26[1] = dVar47 + dVar35;
                  pdVar26[2] = dVar34 + dVar54;
                  uVar71 = SUB84(local_4d0,0);
                  uVar72 = (undefined4)((ulonglong)local_4d0 >> 0x20);
                  uVar42 = (undefined4)local_4e0;
                  uVar43 = local_4e0._4_4_;
                  uVar44 = (undefined4)uStack_4d8;
                  uVar45 = uStack_4d8._4_4_;
                }
                else {
                  dVar48 = pdVar25[1];
                  *pdVar26 = *pdVar25;
                  pdVar26[1] = dVar48;
                  pdVar26[2] = pdVar25[2];
                }
                uVar69 = SUB84(__real_3ff0000000000000,0);
                uVar70 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              }
              dVar34 = local_468 * *pdVar26;
              dVar35 = local_468 * pdVar26[1];
              dVar54 = local_468 * pdVar26[2];
              dVar48 = 0.0;
              local_e8 = (double)CONCAT44(uVar72,uVar71);
              local_4b0 = (local_368 * dVar35 + local_388 * dVar34 + local_348 * dVar54 +
                          local_328 * local_480) * local_478 + dVar58 * dVar55 + dVar33;
              local_4c0._0_8_ =
                   (local_378 * dVar35 + local_398 * dVar34 + local_358 * dVar54 +
                   local_338 * local_480) * local_478 + dVar58 * dVar30 + dVar31;
              register0x00001300 =
                   (dStack_370 * dVar35 + dStack_390 * dVar34 + dStack_350 * dVar54 +
                   dStack_330 * local_480) * local_478 + dVar58 * dVar36 + dVar32;
              dVar36 = local_4d0 - local_4b0;
              dVar58 = (double)CONCAT44(uVar43,uVar42) - (double)local_4c0._0_8_;
              dVar55 = (double)CONCAT44(uVar45,uVar44) - register0x00001300;
              dVar30 = dVar55 * dVar55 + dVar58 * dVar58 + dVar36 * dVar36;
              if (__real_3e45798ee0000000 < dVar30) {
                local_180 = (double)CONCAT44(uVar70,uVar69) / SQRT(dVar30);
                dVar36 = dVar36 * local_180;
                dVar55 = dVar55 * local_180;
                dVar58 = dVar58 * local_180;
              }
              iVar17 = (this->Source).UpVectorStepSize;
              if (((iVar17 == 1) && (local_4ec == 0)) || (iVar17 == 0)) {
                dVar31 = (double)CONCAT44(uVar45,uVar44) - (double)local_1d8._0_8_;
                dVar30 = (double)CONCAT44(uVar43,uVar42) - (double)local_1e8._0_8_;
                local_4a0 = dVar55 * (local_4d0 - local_1c8) - dVar36 * dVar31;
                auVar59._8_4_ = uVar44;
                auVar59._0_8_ = dVar58;
                auVar59._12_4_ = uVar45;
                dVar48 = auVar59._8_8_;
                local_498 = dVar36 * dVar30 - dVar58 * (local_4d0 - local_1c8);
                local_490 = dVar58 * dVar31 - dVar55 * dVar30;
                dVar30 = local_498 * local_498 + local_4a0 * local_4a0 + local_490 * local_490;
                if (dVar30 <= __real_3e45798ee0000000) {
                  local_490 = local_298;
                  local_498 = dStack_2a0;
                  local_4a0 = local_2a8;
                }
                else {
                  local_230 = (double)CONCAT44(uVar70,uVar69) / SQRT(dVar30);
                  local_4a0 = local_230 * local_4a0;
                  local_498 = local_230 * local_498;
                  local_490 = local_230 * local_490;
                }
              }
              dVar31 = local_490;
              dVar30 = local_498;
              dVar32 = local_4a0;
              if (local_540 != 0) {
                __libm_sse2_sincos_();
                dVar36 = extraout_XMM0_Qa * dVar36;
                dVar58 = extraout_XMM0_Qa * dVar58;
                dVar55 = extraout_XMM0_Qa * dVar55;
                dVar35 = dVar55 * dVar31 - dVar36 * dVar30;
                dVar35 = dVar35 + dVar35;
                dVar33 = dVar36 * dVar32 - dVar58 * dVar31;
                dVar33 = dVar33 + dVar33;
                dVar48 = dVar58 * dVar30 - dVar55 * dVar32;
                dVar48 = dVar48 + dVar48;
                dVar30 = (dVar35 * dVar36 - dVar48 * dVar58) + dVar33 * extraout_XMM0_Qb + dVar30;
                dVar31 = (dVar33 * dVar58 - dVar35 * dVar55) + dVar48 * extraout_XMM0_Qb + dVar31;
                dVar32 = (dVar48 * dVar55 - dVar33 * dVar36) + dVar35 * extraout_XMM0_Qb + dVar32;
                dVar48 = extraout_XMM0_Qb;
              }
              local_53c = __real_3f800000;
              if ((this->Source).TaperMethod != '\0') {
                if ((pfVar24 == (float *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TaperValues",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                        ,0x11db,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  iVar17 = (*pcVar6)();
                  return iVar17;
                }
                local_53c = *pfVar24;
              }
              auVar7._4_8_ = dVar48;
              auVar7._0_4_ = uVar43;
              auVar60._0_8_ = auVar7._0_8_ << 0x20;
              auVar60._8_4_ = uVar44;
              auVar60._12_4_ = uVar45;
              dVar55 = (double)local_53c;
              dVar33 = auVar60._8_8_;
              auVar61._12_4_ = uVar45;
              auVar61._8_4_ = uVar44;
              dVar36 = local_428 * dVar32 * dVar55;
              dVar58 = local_428 * dVar31 * dVar55;
              dVar55 = local_428 * dVar30 * dVar55;
              *local_500 = (float)(((double)CONCAT44(uVar43,uVar42) + dVar36) - local_420);
              local_500[1] = (float)((dVar33 + dVar55) - local_418);
              local_500[2] = (float)((local_e8 + dVar58) - local_460);
              fVar49 = (float)((double)CONCAT44(uVar43,uVar42) - local_420);
              auVar61._0_8_ = (dVar33 - dVar55) - local_418;
              local_500[4] = fVar49;
              local_500[5] = (float)(dVar33 - local_418);
              local_500[6] = (float)(local_e8 - local_460);
              *(ulonglong *)(local_500 + 8) = CONCAT44(fVar57,fVar57);
              local_500[7] = 0.0;
              local_500[0x10] = 0.0;
              local_500[0x11] = 0.0;
              local_500[10] = *(float *)(lVar28 + 0x3c);
              uVar67 = *(undefined8 *)(lVar28 + 0x78);
              *(undefined8 *)(local_500 + 0xc) = *(undefined8 *)(lVar28 + 0x70);
              *(undefined8 *)(local_500 + 0xe) = uVar67;
              local_500[0x14] = (float)(((double)CONCAT44(uVar43,uVar42) - dVar36) - local_420);
              local_500[0x15] = (float)auVar61._0_8_;
              local_500[0x16] = (float)((local_e8 - dVar58) - local_460);
              local_500[0x18] = fVar49;
              local_500[0x19] = (float)(dVar33 - local_418);
              local_500[0x1a] = (float)(local_e8 - local_460);
              local_500[0x1b] = 0.0;
              *(ulonglong *)(local_500 + 0x1c) = CONCAT44(fVar57,fVar57);
              local_500[0x24] = 0.0;
              local_544 = local_544 + 2;
              local_500[0x25] = 1.0;
              local_500[0x1e] = *(float *)(lVar28 + 0x3c);
              uVar67 = *(undefined8 *)(lVar28 + 0x78);
              *(undefined8 *)(local_500 + 0x20) = *(undefined8 *)(lVar28 + 0x70);
              *(undefined8 *)(local_500 + 0x22) = uVar67;
              local_500 = local_500 + 0x28;
              local_50c = local_4f0;
              local_3d0 = fVar57;
              fStack_3cc = fVar57;
              local_3c8 = fVar57;
              fStack_3c4 = fVar57;
              if ((lVar20 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InterpolatedPoints",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                      ,0x11fd,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                iVar17 = (*pcVar6)();
                return iVar17;
              }
              local_518 = 0;
              iVar17 = *(int *)(lVar28 + lVar27 + 0x98);
              uVar69 = (undefined4)local_4e0;
              uVar70 = local_4e0._4_4_;
              uVar42 = (undefined4)uStack_4d8;
              uVar43 = uStack_4d8._4_4_;
              if (0 < iVar17) {
                local_310 = (double)local_508;
                local_510 = 0;
                local_514 = 0;
                lVar29 = (longlong)pdVar26 - (longlong)local_4c8;
                local_3b0 = (double)local_488;
                pdVar25 = local_4c8 + 5;
                local_318 = lVar29;
                do {
                  dVar31 = local_468;
                  dVar58 = local_478;
                  lVar19 = (longlong)local_514;
                  dVar30 = *(double *)(lVar20 + lVar19 * 0x18);
                  dVar36 = *(double *)(lVar20 + 8 + lVar19 * 0x18);
                  dVar55 = *(double *)(lVar20 + 0x10 + lVar19 * 0x18);
                  if (local_518 == iVar17 + -1) {
                    dVar48 = *(double *)(lVar28 + 0x38 + lVar27);
                    dVar32 = *(double *)(lVar28 + 0x40 + lVar27);
                    dVar33 = *(double *)(lVar28 + 0x48 + lVar27);
                  }
                  else {
                    dVar48 = *(double *)(lVar20 + 0x18 + lVar19 * 0x18);
                    dVar32 = *(double *)(lVar20 + 0x20 + lVar19 * 0x18);
                    dVar33 = *(double *)(lVar20 + 0x28 + lVar19 * 0x18);
                  }
                  dVar33 = local_3b0 * dVar33;
                  dVar32 = local_3b0 * dVar32;
                  dVar48 = local_3b0 * dVar48;
                  pfVar18 = &(this->Source).NoiseLockTime;
                  if ((0.0 < *pfVar18 || *pfVar18 == 0.0) &&
                     ((this->Source).bSmoothNoise_Enabled != false)) {
                    local_530._s_0.X = pdVar25[-5] - *(double *)(lVar29 + -0x28 + (longlong)pdVar25)
                    ;
                    dVar35 = *(double *)(lVar29 + -0x20 + (longlong)pdVar25);
                    dVar54 = *(double *)(lVar29 + -0x18 + (longlong)pdVar25);
                    local_530._s_0.Y = pdVar25[-4] - dVar35;
                    local_530._s_0.Z = pdVar25[-3] - dVar54;
                    dVar34 = local_530._s_0.Y * local_530._s_0.Y +
                             local_530._s_0.X * local_530._s_0.X +
                             local_530._s_0.Z * local_530._s_0.Z;
                    if (__real_3e45798ee0000000 < dVar34) {
                      local_228 = __real_3ff0000000000000 / SQRT(dVar34);
                      local_530._s_0.X = local_228 * local_530._s_0.X;
                      local_530._s_0.Y = local_228 * local_530._s_0.Y;
                      local_530._s_0.Z = local_228 * local_530._s_0.Z;
                    }
                    dVar34 = (double)*local_4a8;
                    dVar47 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_530._s_0.Y;
                    dVar51 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_530._s_0.X
                             * dVar34 + *(double *)(lVar29 + -0x28 + (longlong)pdVar25);
                    dVar56 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_530._s_0.Z;
                    fVar49 = (this->Source).NoiseLockRadius;
                    if (((fVar49 <= (float)((uint)(float)(dVar51 - pdVar25[-5]) &
                                           __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                        (fVar49 <= (float)((uint)(float)((dVar47 * dVar34 + dVar35) - pdVar25[-4]) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                       (fVar49 <= (float)((uint)(float)((dVar56 * dVar34 + dVar54) - pdVar25[-3]) &
                                         __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                      *(double *)(lVar29 + -0x28 + (longlong)pdVar25) = dVar51;
                      *(double *)(lVar29 + -0x20 + (longlong)pdVar25) = dVar34 * dVar47 + dVar35;
                      *(double *)(lVar29 + -0x18 + (longlong)pdVar25) = dVar34 * dVar56 + dVar54;
                      uVar69 = (undefined4)local_4e0;
                      uVar70 = local_4e0._4_4_;
                      uVar42 = (undefined4)uStack_4d8;
                      uVar43 = uStack_4d8._4_4_;
                    }
                    else {
                      dVar35 = pdVar25[-4];
                      pdVar3 = (double *)(lVar29 + -0x28 + (longlong)pdVar25);
                      *pdVar3 = pdVar25[-5];
                      pdVar3[1] = dVar35;
                      local_3b0 = (double)local_488;
                      *(double *)(lVar29 + -0x18 + (longlong)pdVar25) = pdVar25[-3];
                    }
                  }
                  dVar51 = local_468 * *(double *)(lVar29 + -0x28 + (longlong)pdVar25);
                  dVar34 = local_468 * *(double *)(lVar29 + -0x20 + (longlong)pdVar25);
                  dVar47 = local_468 * *(double *)(lVar29 + -0x18 + (longlong)pdVar25);
                  lVar19 = (longlong)(local_484 + local_514);
                  uVar44 = (undefined4)((ulonglong)local_480 >> 0x20);
                  auVar37._8_4_ = SUB84(dVar51,0);
                  auVar37._0_8_ = dVar51;
                  auVar37._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                  auVar38._8_4_ = SUB84(local_480,0);
                  auVar38._0_8_ = local_480;
                  auVar38._12_4_ = uVar44;
                  dVar35 = *(double *)(lVar20 + 8 + lVar19 * 0x18);
                  dVar54 = (double)local_508;
                  local_4b0 = (dVar34 * local_368 + dVar51 * local_388 + dVar47 * local_348 +
                              local_480 * local_328) * local_478 + dVar33 + local_310 * dVar55;
                  stack0xfffffffffffffb48 =
                       (dVar34 * dStack_370 + auVar37._8_8_ * dStack_390 + dVar47 * dStack_350 +
                       auVar38._8_8_ * dStack_330) * local_478 + dVar32 + local_310 * dVar36;
                  local_4c0._0_8_ =
                       (dVar34 * local_378 + dVar51 * local_398 + dVar47 * local_358 +
                       local_480 * local_338) * local_478 + dVar48 + local_310 * dVar30;
                  dVar30 = *(double *)(lVar20 + lVar19 * 0x18);
                  dVar36 = *(double *)(lVar20 + 0x10 + lVar19 * 0x18);
                  if (local_518 == *(int *)(lVar28 + lVar27 + 0x98) + -1) {
                    dVar33 = *(double *)(lVar28 + 0x38 + lVar27);
                    dVar32 = *(double *)(lVar28 + 0x40 + lVar27);
                    dVar55 = *(double *)(lVar28 + 0x48 + lVar27);
                  }
                  else {
                    dVar33 = *(double *)(lVar20 + 0x18 + lVar19 * 0x18);
                    dVar32 = *(double *)(lVar20 + 0x20 + lVar19 * 0x18);
                    dVar55 = *(double *)(lVar20 + 0x28 + lVar19 * 0x18);
                  }
                  if (((char)local_46c == '\0') ||
                     (local_518 + 1 != *(int *)(lVar28 + lVar27 + 0x98))) {
                    pfVar18 = &(this->Source).NoiseLockTime;
                    if ((0.0 < *pfVar18 || *pfVar18 == 0.0) &&
                       ((this->Source).bSmoothNoise_Enabled != false)) {
                      dVar58 = *(double *)(lVar29 + -0x10 + (longlong)pdVar25);
                      dVar31 = *(double *)((longlong)pdVar25 + lVar29 + -8);
                      local_530._s_0.X = pdVar25[-2] - dVar58;
                      dVar48 = *(double *)(lVar29 + (longlong)pdVar25);
                      local_530._s_0.Y = pdVar25[-1] - dVar31;
                      local_530._s_0.Z = *pdVar25 - dVar48;
                      dVar34 = local_530._s_0.Y * local_530._s_0.Y +
                               local_530._s_0.X * local_530._s_0.X +
                               local_530._s_0.Z * local_530._s_0.Z;
                      if (__real_3e45798ee0000000 < dVar34) {
                        local_220 = __real_3ff0000000000000 / SQRT(dVar34);
                        local_530._s_0.X = local_530._s_0.X * local_220;
                        local_530._s_0.Y = local_530._s_0.Y * local_220;
                        local_530._s_0.Z = local_530._s_0.Z * local_220;
                      }
                      dVar47 = (double)*local_4a8;
                      dVar58 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                               local_530._s_0.X * dVar47 + dVar58;
                      fVar49 = (this->Source).NoiseLockRadius;
                      dVar34 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                               local_530._s_0.Y * dVar47;
                      dVar47 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                               local_530._s_0.Z * dVar47;
                      if (((fVar49 <= (float)((uint)(float)(dVar58 - pdVar25[-2]) &
                                             __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                          (fVar49 <= (float)((uint)(float)((dVar31 + dVar34) - pdVar25[-1]) &
                                            __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                         (fVar49 <= (float)((uint)(float)((dVar48 + dVar47) - *pdVar25) &
                                           __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                        *(double *)(lVar29 + -0x10 + (longlong)pdVar25) = dVar58;
                        *(double *)((longlong)pdVar25 + lVar29 + -8) = dVar31 + dVar34;
                        *(double *)(lVar29 + (longlong)pdVar25) = dVar48 + dVar47;
                        uVar69 = (undefined4)local_4e0;
                        uVar70 = local_4e0._4_4_;
                        uVar42 = (undefined4)uStack_4d8;
                        uVar43 = uStack_4d8._4_4_;
                      }
                      else {
                        dVar58 = pdVar25[-1];
                        pdVar3 = (double *)(lVar29 + -0x10 + (longlong)pdVar25);
                        *pdVar3 = pdVar25[-2];
                        pdVar3[1] = dVar58;
                        *(double *)(lVar29 + (longlong)pdVar25) = *pdVar25;
                      }
                    }
                    dVar48 = local_468 * *(double *)(lVar29 + -0x10 + (longlong)pdVar25);
                    dVar58 = local_468 * *(double *)((longlong)pdVar25 + lVar29 + -8);
                    dVar31 = local_468 * *(double *)(lVar29 + (longlong)pdVar25);
                    auVar39._8_4_ = SUB84(dVar48,0);
                    auVar39._0_8_ = dVar48;
                    auVar39._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                    auVar40._8_4_ = SUB84(local_480,0);
                    auVar40._0_8_ = local_480;
                    auVar40._12_4_ = uVar44;
                    dVar33 = local_478 *
                             (dVar58 * local_378 + dVar48 * local_398 + dVar31 * local_358 +
                             local_480 * local_338) + dVar54 * dVar33 + local_3b0 * dVar30;
                    auVar61 = ZEXT416((uint)local_4f4);
                    dVar32 = local_478 *
                             (dVar58 * dStack_370 + auVar39._8_8_ * dStack_390 + dVar31 * dStack_350
                             + auVar40._8_8_ * dStack_330) + dVar54 * dVar32 + local_3b0 * dVar35;
                    dVar30 = local_478 *
                             (dVar58 * local_368 + dVar48 * local_388 + dVar31 * local_348 +
                             local_480 * local_328) + dVar54 * dVar55 + local_3b0 * dVar36;
                  }
                  else {
                    pdVar3 = (double *)(lVar28 + 0x38 + lVar27);
                    dVar33 = *pdVar3;
                    dVar32 = pdVar3[1];
                    dVar30 = *(double *)(lVar28 + 0x48 + lVar27);
                    local_400 = dVar33;
                    dStack_3f8 = dVar32;
                    local_3f0 = dVar30;
                    if ((this->Source).bTargetNoise == false) {
                      local_4f4 = (this->Source).NoiseTangentStrength;
                      auVar61 = ZEXT416((uint)local_4f4);
                    }
                    else {
                      pfVar18 = &(this->Source).NoiseLockTime;
                      if ((0.0 < *pfVar18 || *pfVar18 == 0.0) &&
                         ((this->Source).bSmoothNoise_Enabled != false)) {
                        lVar20 = (longlong)(this->Source).Frequency;
                        dVar30 = local_4c8[lVar20 * 3];
                        dVar36 = local_4c8[lVar20 * 3 + 1];
                        local_530._s_0.X = dVar30 - pdVar26[lVar20 * 3];
                        dVar55 = local_4c8[lVar20 * 3 + 2];
                        dVar32 = pdVar26[lVar20 * 3 + 1];
                        dVar33 = pdVar26[lVar20 * 3 + 2];
                        local_530._s_0.Y = dVar36 - dVar32;
                        local_530._s_0.Z = dVar55 - dVar33;
                        UE::Math::TVector<double>::Normalize
                                  ((TVector<double> *)&local_530._s_0,__real_3e45798ee0000000);
                        fVar49 = (this->Source).NoiseLockRadius;
                        dVar48 = (double)*local_4a8;
                        dVar35 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                 local_530._s_0.Y * dVar48;
                        dVar54 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                 local_530._s_0.X * dVar48 + pdVar26[lVar20 * 3];
                        dVar48 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                 local_530._s_0.Z * dVar48;
                        if ((fVar49 <= (float)((uint)(float)(dVar54 - dVar30) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                           ((fVar49 <= (float)((uint)(float)((dVar32 + dVar35) - dVar36) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff) ||
                            (fVar49 <= (float)((uint)(float)((dVar33 + dVar48) - dVar55) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
                          pdVar26[lVar20 * 3] = dVar54;
                          pdVar26[lVar20 * 3 + 1] = dVar35 + dVar32;
                          pdVar26[lVar20 * 3 + 2] = dVar48 + dVar33;
                          uVar69 = (undefined4)local_4e0;
                          uVar70 = local_4e0._4_4_;
                          uVar42 = (undefined4)uStack_4d8;
                          uVar43 = uStack_4d8._4_4_;
                        }
                        else {
                          dVar30 = (local_4c8 + lVar20 * 3)[1];
                          pdVar26[lVar20 * 3] = local_4c8[lVar20 * 3];
                          (pdVar26 + lVar20 * 3)[1] = dVar30;
                          pdVar26[lVar20 * 3 + 2] = local_4c8[lVar20 * 3 + 2];
                        }
                      }
                      lVar20 = (longlong)(this->Source).Frequency;
                      dVar36 = dVar31 * pdVar26[lVar20 * 3 + 1];
                      dVar55 = dVar31 * pdVar26[lVar20 * 3 + 2];
                      dVar31 = dVar31 * pdVar26[lVar20 * 3];
                      local_4f4 = (this->Source).NoiseTangentStrength;
                      auVar61 = ZEXT416((uint)local_4f4);
                      dVar30 = local_3f0 +
                               (local_368 * dVar36 + local_388 * dVar31 + local_348 * dVar55 +
                               local_328 * local_480) * dVar58;
                      dVar33 = local_400 +
                               (local_378 * dVar36 + local_398 * dVar31 + local_358 * dVar55 +
                               local_338 * local_480) * dVar58;
                      dVar32 = dStack_3f8 +
                               (dStack_370 * dVar36 + dStack_390 * dVar31 + dStack_350 * dVar55 +
                               dStack_330 * local_480) * dVar58;
                    }
                  }
                  dVar36 = (double)((__real_3f800000 - (this->Source).NoiseTension) *
                                   __real_3f000000);
                  auVar15._4_4_ = uVar42;
                  auVar15._0_4_ = uVar70;
                  auVar15._8_4_ = uVar43;
                  dVar55 = (dVar33 - (double)CONCAT44(uVar70,uVar69)) * dVar36;
                  local_430 = (dVar30 - local_4d0) * dVar36;
                  dVar36 = (dVar32 - auVar15._4_8_) * dVar36;
                  dVar30 = dVar36 * dVar36 + dVar55 * dVar55 + local_430 * local_430;
                  if (__real_3e45798ee0000000 < dVar30) {
                    local_218 = __real_3ff0000000000000 / SQRT(dVar30);
                    dVar55 = dVar55 * local_218;
                    dVar36 = dVar36 * local_218;
                    local_430 = local_430 * local_218;
                  }
                  lVar20 = (longlong)iVar22;
                  dVar30 = (double)auVar61._0_4_;
                  local_430 = local_430 * dVar30;
                  dStack_438 = dVar36 * dVar30;
                  local_440 = dVar55 * dVar30;
                  local_2d8 = local_4d0;
                  if (0 < iVar22) {
                    local_4f8 = 1;
                    pfVar18 = local_500 + 6;
                    pfVar24 = local_4e8 + local_510;
                    local_544 = local_544 + iVar22 * 2;
                    pfVar23 = local_4e8;
                    dVar30 = (double)CONCAT44(uVar70,uVar69);
                    dVar36 = (double)CONCAT44(uVar43,uVar42);
                    while( true ) {
                      fVar46 = (float)local_4f8 * local_470;
                      fVar50 = fVar46 * fVar46;
                      fVar49 = (fVar46 + fVar46) * fVar50;
                      auVar62 = ZEXT416((uint)fVar49);
                      fVar53 = fVar50 * __real_40400000 - fVar49;
                      fVar68 = (fVar49 - fVar50 * __real_40400000) + __real_3f800000;
                      fVar49 = fVar50 * fVar46 - fVar50;
                      fVar46 = (fVar50 * fVar46 - (fVar46 + fVar46) * fVar46) + fVar46;
                      dVar33 = (double)fVar53 * (double)local_4c0._0_8_ + (double)fVar49 * local_440
                               + (double)fVar46 * local_458 +
                                 (double)fVar68 * (double)CONCAT44(uVar70,uVar69);
                      uVar69 = (undefined4)((ulonglong)dVar33 >> 0x20);
                      dVar48 = (double)fVar53 * stack0xfffffffffffffb48 +
                               (double)fVar49 * dStack_438 +
                               (double)fVar46 * dStack_450 +
                               (double)fVar68 * (double)CONCAT44(uVar43,uVar42);
                      uVar70 = SUB84(dVar48,0);
                      uVar42 = (undefined4)((ulonglong)dVar48 >> 0x20);
                      dVar32 = dVar30 - dVar33;
                      local_1b0._8_4_ = uVar70;
                      local_1b0._0_8_ = dVar33;
                      local_1b0._12_4_ = uVar42;
                      auVar13._4_4_ = uVar70;
                      auVar13._0_4_ = uVar69;
                      auVar13._8_4_ = uVar42;
                      dVar31 = dVar36 - auVar13._4_8_;
                      local_3d8 = (double)fVar53 * local_4b0 + (double)fVar49 * local_430 +
                                  (double)fVar46 * local_448 + (double)fVar68 * local_4d0;
                      dVar58 = local_2d8 - local_3d8;
                      dVar55 = dVar31 * dVar31 + dVar32 * dVar32 + dVar58 * dVar58;
                      if (__real_3e45798ee0000000 < dVar55) {
                        local_210 = __real_3ff0000000000000 / SQRT(dVar55);
                        dVar58 = dVar58 * local_210;
                        dVar31 = dVar31 * local_210;
                        dVar32 = dVar32 * local_210;
                      }
                      dVar35 = local_490;
                      dVar54 = local_4a0;
                      dVar55 = local_498;
                      if ((this->Source).UpVectorStepSize == 0) {
                        dVar34 = (local_2d8 - local_258) * dVar31 -
                                 (dVar36 - (double)local_268._8_8_) * dVar58;
                        dVar47 = (dVar30 - (double)local_268._0_8_) * dVar58 -
                                 (local_2d8 - local_258) * dVar32;
                        dVar36 = (dVar36 - (double)local_268._8_8_) * dVar32 -
                                 (dVar30 - (double)local_268._0_8_) * dVar31;
                        dVar30 = dVar47 * dVar47 + dVar34 * dVar34 + dVar36 * dVar36;
                        dVar35 = local_298;
                        dVar54 = local_2a8;
                        dVar55 = dStack_2a0;
                        if (__real_3e45798ee0000000 < dVar30) {
                          local_208 = __real_3ff0000000000000 / SQRT(dVar30);
                          dVar35 = dVar36 * local_208;
                          dVar54 = dVar34 * local_208;
                          dVar55 = dVar47 * local_208;
                        }
                      }
                      local_238 = local_3d8;
                      local_1a0 = local_3d8;
                      if (local_540 != 0) {
                        __libm_sse2_sincos_();
                        dVar58 = extraout_XMM0_Qa_00 * dVar58;
                        dVar31 = extraout_XMM0_Qa_00 * dVar31;
                        auVar62._0_8_ = extraout_XMM0_Qa_00 * dVar32;
                        auVar62._8_8_ = extraout_XMM0_Qb_00;
                        dVar32 = dVar31 * dVar35 - dVar58 * dVar55;
                        dVar32 = dVar32 + dVar32;
                        dVar30 = dVar58 * dVar54 - auVar62._0_8_ * dVar35;
                        dVar30 = dVar30 + dVar30;
                        dVar36 = auVar62._0_8_ * dVar55 - dVar31 * dVar54;
                        dVar36 = dVar36 + dVar36;
                        dVar54 = (dVar36 * dVar31 - dVar30 * dVar58) +
                                 dVar32 * extraout_XMM0_Qb_00 + dVar54;
                        dVar35 = (dVar30 * auVar62._0_8_ - dVar32 * dVar31) +
                                 dVar36 * extraout_XMM0_Qb_00 + dVar35;
                        dVar55 = (dVar32 * dVar58 - dVar36 * auVar62._0_8_) +
                                 dVar30 * extraout_XMM0_Qb_00 + dVar55;
                        pfVar23 = local_4e8;
                      }
                      if ((this->Source).TaperMethod != '\0') {
                        if ((pfVar23 == (float *)0x0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("TaperValues",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                                ,0x12aa,L""), pfVar23 = local_4e8, bVar16)) {
                          pcVar6 = (code *)swi(3);
                          iVar17 = (*pcVar6)();
                          return iVar17;
                        }
                        local_53c = *pfVar24;
                      }
                      auVar8._4_8_ = auVar62._8_8_;
                      auVar8._0_4_ = uVar69;
                      auVar63._0_8_ = auVar8._0_8_ << 0x20;
                      auVar63._8_4_ = uVar70;
                      auVar63._12_4_ = uVar42;
                      dVar58 = (double)local_53c;
                      dVar31 = auVar63._8_8_;
                      dVar36 = local_428 * dVar55 * dVar58;
                      dVar30 = local_428 * dVar54 * dVar58;
                      dVar58 = local_428 * dVar35 * dVar58;
                      *local_500 = (float)((dVar30 + dVar33) - local_420);
                      pfVar18[-5] = (float)((dVar36 + dVar31) - local_418);
                      pfVar18[-4] = (float)((dVar58 + local_238) - local_460);
                      auVar61._0_8_ = (dVar31 - dVar36) - local_418;
                      auVar61._8_8_ = dVar48;
                      pfVar18[-2] = (float)(dVar33 - local_420);
                      pfVar18[-1] = (float)(dVar31 - local_418);
                      *pfVar18 = (float)(local_238 - local_460);
                      pfVar18[10] = local_50c;
                      pfVar18[1] = 0.0;
                      *(ulonglong *)(pfVar18 + 2) = CONCAT44(fVar57,fVar57);
                      pfVar18[0xb] = 0.0;
                      pfVar18[4] = *(float *)(lVar28 + 0x3c);
                      uVar67 = *(undefined8 *)(lVar28 + 0x78);
                      *(undefined8 *)(pfVar18 + 6) = *(undefined8 *)(lVar28 + 0x70);
                      *(undefined8 *)(pfVar18 + 8) = uVar67;
                      pfVar18[0xe] = (float)((dVar33 - dVar30) - local_420);
                      pfVar18[0xf] = (float)auVar61._0_8_;
                      pfVar18[0x10] = (float)((local_238 - dVar58) - local_460);
                      pfVar18[0x12] = (float)(dVar33 - local_420);
                      pfVar18[0x13] = (float)(dVar31 - local_418);
                      pfVar18[0x14] = (float)(local_238 - local_460);
                      pfVar18[0x15] = 0.0;
                      local_500 = local_500 + 0x28;
                      pfVar18[0x1e] = local_50c;
                      local_4f8 = local_4f8 + 1;
                      local_50c = local_50c + local_4f0;
                      *(ulonglong *)(pfVar18 + 0x16) = CONCAT44(fVar57,fVar57);
                      pfVar24 = pfVar24 + 1;
                      pfVar18[0x1f] = 1.0;
                      pfVar18[0x18] = *(float *)(lVar28 + 0x3c);
                      uVar67 = *(undefined8 *)(lVar28 + 0x78);
                      *(undefined8 *)(pfVar18 + 0x1a) = *(undefined8 *)(lVar28 + 0x70);
                      *(undefined8 *)(pfVar18 + 0x1c) = uVar67;
                      pfVar18 = pfVar18 + 0x28;
                      local_2d8 = local_3d8;
                      lVar20 = lVar20 + -1;
                      pdVar26 = local_410;
                      lVar27 = local_3e0;
                      lVar29 = local_318;
                      local_3c0 = fVar57;
                      fStack_3bc = fVar57;
                      local_3b8 = fVar57;
                      fStack_3b4 = fVar57;
                      if (lVar20 == 0) break;
                      uVar69 = (undefined4)local_4e0;
                      uVar70 = local_4e0._4_4_;
                      uVar42 = (undefined4)uStack_4d8;
                      uVar43 = uStack_4d8._4_4_;
                      dVar30 = dVar33;
                      dVar36 = dVar48;
                    }
                  }
                  local_4d0 = local_4b0;
                  local_510 = local_510 + iVar22;
                  local_514 = local_514 + local_484;
                  iVar17 = *(int *)(lVar28 + lVar27 + 0x98);
                  local_518 = local_518 + 1;
                  local_458 = local_440;
                  dStack_450 = dStack_438;
                  pdVar25 = pdVar25 + 3;
                  local_448 = local_430;
                  local_4e0 = local_4c0._0_8_;
                  uStack_4d8 = local_4c0._8_8_;
                  lVar20 = local_408;
                  uVar69 = local_4c0._0_4_;
                  uVar70 = local_4c0._4_4_;
                  uVar42 = local_4c0._8_4_;
                  uVar43 = uStack_4b4;
                } while (local_518 < iVar17);
              }
              pdVar25 = local_4c8;
              pfVar18 = local_500;
              if ((char)local_46c != '\0') {
                pauVar4 = (undefined1 (*) [16])(lVar28 + 0x38 + lVar27);
                dVar36 = *(double *)*pauVar4;
                dVar30 = *(double *)(*pauVar4 + 8);
                _local_4c0 = *pauVar4;
                local_4b0 = *(double *)(lVar28 + 0x48 + lVar27);
                if ((this->Source).bTargetNoise != false) {
                  pfVar18 = &(this->Source).NoiseLockTime;
                  if ((0.0 < *pfVar18 || *pfVar18 == 0.0) &&
                     ((this->Source).bSmoothNoise_Enabled != false)) {
                    lVar20 = (longlong)(this->Source).Frequency;
                    local_530._s_0.X = local_4c8[lVar20 * 3] - pdVar26[lVar20 * 3];
                    dVar30 = local_4c8[lVar20 * 3 + 1];
                    dVar36 = pdVar26[lVar20 * 3 + 1];
                    dVar55 = local_4c8[lVar20 * 3 + 2];
                    local_530._s_0.Y = dVar30 - dVar36;
                    dVar58 = pdVar26[lVar20 * 3 + 2];
                    local_530._s_0.Z = dVar55 - dVar58;
                    UE::Math::TVector<double>::Normalize
                              ((TVector<double> *)&local_530._s_0,__real_3e45798ee0000000);
                    fVar49 = (this->Source).NoiseLockRadius;
                    dVar32 = (double)*local_4a8;
                    dVar33 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_530._s_0.Y
                             * dVar32;
                    dVar31 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_530._s_0.X
                             * dVar32 + pdVar26[lVar20 * 3];
                    dVar32 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_530._s_0.Z
                             * dVar32;
                    if ((fVar49 <= (float)((uint)(float)(dVar31 - pdVar25[lVar20 * 3]) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                       ((fVar49 <= (float)((uint)(float)((dVar33 + dVar36) - dVar30) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff) ||
                        (fVar49 <= (float)((uint)(float)((dVar32 + dVar58) - dVar55) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
                      pdVar26[lVar20 * 3] = dVar31;
                      pdVar26[lVar20 * 3 + 1] = dVar36 + dVar33;
                      pdVar26[lVar20 * 3 + 2] = dVar58 + dVar32;
                      uVar69 = (undefined4)local_4e0;
                      uVar70 = local_4e0._4_4_;
                      uVar42 = (undefined4)uStack_4d8;
                      uVar43 = uStack_4d8._4_4_;
                    }
                    else {
                      dVar30 = (pdVar25 + lVar20 * 3)[1];
                      pdVar26[lVar20 * 3] = pdVar25[lVar20 * 3];
                      (pdVar26 + lVar20 * 3)[1] = dVar30;
                      pdVar26[lVar20 * 3 + 2] = pdVar25[lVar20 * 3 + 2];
                    }
                  }
                  lVar20 = (longlong)(this->Source).Frequency;
                  dVar58 = local_468 * pdVar26[lVar20 * 3 + 1];
                  dVar55 = local_468 * pdVar26[lVar20 * 3 + 2];
                  dVar31 = local_468 * pdVar26[lVar20 * 3];
                  auVar61._8_8_ = dVar58;
                  auVar61._0_8_ = dVar58;
                  dVar36 = (double)local_4c0._0_8_ +
                           local_478 *
                           (local_378 * dVar58 + local_398 * dVar31 + local_358 * dVar55 +
                           local_338 * local_480);
                  dVar30 = stack0xfffffffffffffb48 +
                           local_478 *
                           (dStack_370 * dVar58 + dStack_390 * dVar31 + dStack_350 * dVar55 +
                           dStack_330 * local_480);
                  local_4b0 = local_4b0 +
                              local_478 *
                              (local_368 * dVar58 + local_388 * dVar31 + local_348 * dVar55 +
                              local_328 * local_480);
                  local_4c0._8_4_ = SUB84(dVar30,0);
                  local_4c0._0_8_ = dVar36;
                  uStack_4b4 = (int)((ulonglong)dVar30 >> 0x20);
                }
                pfVar24 = local_4e8;
                dVar55 = (double)CONCAT44(uVar43,uVar42);
                local_3f0 = *(double *)(lVar28 + 0x48 + lVar27);
                pdVar25 = (double *)(lVar28 + 0x38 + lVar27);
                if ((this->Source).bUseTarget == false) {
                  dVar58 = (double)((__real_3f800000 - (this->Source).NoiseTension) *
                                   __real_3f000000);
                  auVar10._4_8_ = SUB168(ZEXT1216((undefined1  [12])0x0),4);
                  auVar10._0_4_ = uVar70;
                  auVar41._0_8_ = auVar10._0_8_ << 0x20;
                  auVar41._8_4_ = uVar42;
                  auVar41._12_4_ = uVar43;
                  dVar31 = (*pdVar25 - (double)CONCAT44(uVar70,uVar69)) * dVar58;
                  local_430 = (local_3f0 - local_4d0) * dVar58;
                  dVar58 = (pdVar25[1] - auVar41._8_8_) * dVar58;
                  dVar32 = dVar58 * dVar58 + dVar31 * dVar31 + local_430 * local_430;
                  if (__real_3e45798ee0000000 < dVar32) {
                    local_200 = __real_3ff0000000000000 / SQRT(dVar32);
                    dVar31 = local_200 * dVar31;
                    dVar58 = local_200 * dVar58;
                    local_430 = local_430 * local_200;
                  }
                }
                else {
                  auVar59 = *(undefined1 (*) [16])(lVar28 + 0x50 + lVar27);
                  dVar31 = auVar59._0_8_;
                  local_430 = *(double *)(lVar28 + 0x60 + lVar27);
                  auVar9._4_8_ = auVar61._8_8_;
                  auVar9._0_4_ = auVar59._4_4_;
                  auVar64._0_8_ = auVar9._0_8_ << 0x20;
                  auVar64._8_4_ = auVar59._8_4_;
                  auVar64._12_4_ = auVar59._12_4_;
                  dVar58 = auVar64._8_8_;
                }
                iVar17 = 0;
                dVar32 = (double)local_4f4;
                local_430 = local_430 * dVar32;
                dStack_438 = dVar58 * dVar32;
                local_440 = dVar31 * dVar32;
                local_2d8 = local_4d0;
                pfVar18 = local_500;
                if (0 < iVar22) {
                  local_544 = local_544 + iVar22 * 2;
                  pfVar23 = local_500 + 6;
                  dVar58 = (double)CONCAT44(uVar70,uVar69);
                  while( true ) {
                    uVar45 = (undefined4)((ulonglong)dVar55 >> 0x20);
                    uVar44 = SUB84(dVar55,0);
                    fVar50 = (float)(iVar17 + 1) * local_470;
                    fVar53 = fVar50 * fVar50;
                    fVar49 = (fVar50 + fVar50) * fVar53;
                    fVar46 = fVar50 * fVar53 - fVar53;
                    fVar68 = fVar53 * __real_40400000 - fVar49;
                    fVar49 = (fVar49 - fVar53 * __real_40400000) + __real_3f800000;
                    fVar50 = (fVar50 * fVar53 - fVar50 * (fVar50 + fVar50)) + fVar50;
                    dVar33 = (double)fVar68 * dVar36 + (double)fVar46 * local_440 +
                             (double)fVar50 * local_458 +
                             (double)fVar49 * (double)CONCAT44(uVar70,uVar69);
                    uVar69 = (undefined4)((ulonglong)dVar33 >> 0x20);
                    dVar55 = (double)fVar68 * dVar30 + (double)fVar46 * dStack_438 +
                             (double)fVar50 * dStack_450 +
                             (double)fVar49 * (double)CONCAT44(uVar43,uVar42);
                    uVar70 = SUB84(dVar55,0);
                    uVar42 = (undefined4)((ulonglong)dVar55 >> 0x20);
                    dVar32 = dVar58 - dVar33;
                    auVar14._4_4_ = uVar70;
                    auVar14._0_4_ = uVar69;
                    auVar14._8_4_ = uVar42;
                    dVar48 = (double)fVar68 * local_4b0 + (double)fVar46 * local_430 +
                             (double)fVar50 * local_448 + (double)fVar49 * local_4d0;
                    local_198._8_4_ = uVar70;
                    local_198._0_8_ = dVar33;
                    local_198._12_4_ = uVar42;
                    dVar36 = local_2d8 - dVar48;
                    auVar11._4_8_ =
                         (double)fVar68 * 0.0 + (double)fVar46 * 0.0 +
                         (double)fVar50 * 0.0 + (double)fVar49 * 0.0;
                    auVar11._0_4_ = (int)((ulonglong)dVar58 >> 0x20);
                    auVar52._0_8_ = auVar11._0_8_ << 0x20;
                    auVar52._8_4_ = uVar44;
                    auVar52._12_4_ = uVar45;
                    dVar31 = auVar52._8_8_ - auVar14._4_8_;
                    dVar30 = dVar31 * dVar31 + dVar32 * dVar32 + dVar36 * dVar36;
                    if (__real_3e45798ee0000000 < dVar30) {
                      local_1b8 = __real_3ff0000000000000 / SQRT(dVar30);
                      dVar36 = dVar36 * local_1b8;
                      dVar31 = dVar31 * local_1b8;
                      dVar32 = dVar32 * local_1b8;
                    }
                    dVar54 = local_498;
                    dVar30 = local_490;
                    dVar35 = local_4a0;
                    if ((this->Source).UpVectorStepSize == 0) {
                      dVar30 = auVar52._8_8_ - (double)local_268._8_8_;
                      dVar51 = dVar31 * (local_2d8 - local_258) - dVar36 * dVar30;
                      dVar34 = dVar36 * (dVar58 - (double)local_268._0_8_) -
                               dVar32 * (local_2d8 - local_258);
                      dVar47 = dVar32 * dVar30 - dVar31 * (dVar58 - (double)local_268._0_8_);
                      dVar58 = dVar34 * dVar34 + dVar51 * dVar51 + dVar47 * dVar47;
                      dVar54 = dStack_2a0;
                      dVar30 = local_298;
                      dVar35 = local_2a8;
                      if (__real_3e45798ee0000000 < dVar58) {
                        local_1f8 = __real_3ff0000000000000 / SQRT(dVar58);
                        dVar54 = dVar34 * local_1f8;
                        dVar30 = dVar47 * local_1f8;
                        dVar35 = dVar51 * local_1f8;
                      }
                    }
                    local_238 = dVar48;
                    local_188 = dVar48;
                    if (local_540 == 0) {
                      uVar67 = 0;
                    }
                    else {
                      __libm_sse2_sincos_();
                      dVar31 = dVar31 * extraout_XMM0_Qa_01;
                      dVar36 = dVar36 * extraout_XMM0_Qa_01;
                      dVar32 = dVar32 * extraout_XMM0_Qa_01;
                      dVar47 = dVar31 * dVar30 - dVar36 * dVar54;
                      dVar47 = dVar47 + dVar47;
                      dVar34 = dVar36 * dVar35 - dVar32 * dVar30;
                      dVar58 = dVar32 * dVar54 - dVar31 * dVar35;
                      dVar34 = dVar34 + dVar34;
                      auVar65._8_4_ = uVar44;
                      auVar65._0_8_ = dVar47;
                      auVar65._12_4_ = uVar45;
                      uVar67 = auVar65._8_8_;
                      dVar58 = dVar58 + dVar58;
                      dVar35 = (dVar58 * dVar31 - dVar34 * dVar36) +
                               extraout_XMM0_Qb_01 * dVar47 + dVar35;
                      dVar54 = (dVar47 * dVar36 - dVar58 * dVar32) +
                               extraout_XMM0_Qb_01 * dVar34 + dVar54;
                      dVar30 = (dVar34 * dVar32 - dVar47 * dVar31) +
                               extraout_XMM0_Qb_01 * dVar58 + dVar30;
                    }
                    if ((this->Source).TaperMethod != '\0') {
                      if ((pfVar24 == (float *)0x0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("TaperValues",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                              ,0x1321,L""), bVar16)) {
                        pcVar6 = (code *)swi(3);
                        iVar17 = (*pcVar6)();
                        return iVar17;
                      }
                      local_53c = pfVar24[iVar22 * *local_308 + iVar17];
                    }
                    dVar31 = (double)local_53c;
                    auVar12._4_8_ = uVar67;
                    auVar12._0_4_ = uVar69;
                    auVar66._0_8_ = auVar12._0_8_ << 0x20;
                    auVar66._8_4_ = uVar70;
                    auVar66._12_4_ = uVar42;
                    dVar58 = local_428 * dVar54 * dVar31;
                    dVar36 = local_428 * dVar35 * dVar31;
                    dVar32 = auVar66._8_8_;
                    dVar31 = local_428 * dVar30 * dVar31;
                    *pfVar18 = (float)((dVar36 + dVar33) - local_420);
                    pfVar23[-5] = (float)((dVar58 + dVar32) - local_418);
                    pfVar23[-4] = (float)((dVar31 + local_238) - local_460);
                    pfVar23[-2] = (float)(dVar33 - local_420);
                    pfVar23[-1] = (float)(dVar32 - local_418);
                    *pfVar23 = (float)(local_238 - local_460);
                    *(ulonglong *)(pfVar23 + 2) = CONCAT44(fVar57,fVar57);
                    pfVar23[10] = local_50c;
                    pfVar23[1] = 0.0;
                    pfVar23[0xb] = 0.0;
                    pfVar23[4] = *(float *)(lVar28 + 0x3c);
                    uVar67 = *(undefined8 *)(lVar28 + 0x78);
                    *(undefined8 *)(pfVar23 + 6) = *(undefined8 *)(lVar28 + 0x70);
                    *(undefined8 *)(pfVar23 + 8) = uVar67;
                    pfVar23[0xe] = (float)((dVar33 - dVar36) - local_420);
                    pfVar23[0xf] = (float)((dVar32 - dVar58) - local_418);
                    pfVar23[0x10] = (float)((local_238 - dVar31) - local_460);
                    pfVar23[0x12] = (float)(dVar33 - local_420);
                    pfVar23[0x13] = (float)(dVar32 - local_418);
                    pfVar23[0x14] = (float)(local_238 - local_460);
                    pfVar23[0x15] = 0.0;
                    *(ulonglong *)(pfVar23 + 0x16) = CONCAT44(fVar57,fVar57);
                    pfVar23[0x1e] = local_50c;
                    pfVar18 = pfVar18 + 0x28;
                    local_50c = local_50c + local_4f0;
                    pfVar23[0x1f] = 1.0;
                    iVar17 = iVar17 + 1;
                    pfVar23[0x18] = *(float *)(lVar28 + 0x3c);
                    uVar67 = *(undefined8 *)(lVar28 + 0x78);
                    *(undefined8 *)(pfVar23 + 0x1a) = *(undefined8 *)(lVar28 + 0x70);
                    *(undefined8 *)(pfVar23 + 0x1c) = uVar67;
                    pfVar23 = pfVar23 + 0x28;
                    pdVar26 = local_410;
                    lVar27 = local_3e0;
                    local_3e8 = fVar57;
                    fStack_3e4 = fVar57;
                    local_3a8 = fVar57;
                    fStack_3a4 = fVar57;
                    local_2d8 = dVar48;
                    if (iVar22 <= iVar17) break;
                    uVar69 = (undefined4)local_4e0;
                    uVar70 = local_4e0._4_4_;
                    uVar42 = (undefined4)uStack_4d8;
                    uVar43 = uStack_4d8._4_4_;
                    dVar36 = (double)local_4c0._0_8_;
                    dVar58 = dVar33;
                    dVar30 = stack0xfffffffffffffb48;
                  }
                }
              }
              local_500 = pfVar18;
              local_540 = local_540 + 1;
              uVar69 = SUB84(__real_3ff0000000000000,0);
              uVar70 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              lVar20 = local_408;
              pfVar24 = local_4e8;
              pdVar25 = local_4c8;
              fVar49 = __real_3f800000;
            } while (local_540 < (this->Source).Sheets);
          }
        }
      }
      local_4ec = local_4ec + 1;
      iVar17 = local_544;
    } while (local_4ec < *(int *)((longlong)&(this->Source)._padding_ + 4));
  }
  if (((this->Source).VertexCount < iVar17) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CheckVertexCount <= Source.VertexCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0x134d,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    iVar17 = (*pcVar6)();
    return iVar17;
  }
  return 0;
}

// FillData_Noise @ 1481e6c60

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
FDynamicBeam2EmitterData::FillData_Noise
          (FDynamicBeam2EmitterData *this,FAsyncBufferFillData *param_1)

{
  double *pdVar1;
  undefined1 (*pauVar2) [16];
  double dVar3;
  FSceneView *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  TStatId TVar19;
  float *pfVar20;
  TVector<double> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  float *pfVar25;
  longlong lVar26;
  int iVar27;
  double dVar28;
  longlong lVar29;
  float *pfVar30;
  double *pdVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double extraout_XMM0_Qa;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  double dVar41;
  double extraout_XMM0_Qa_03;
  double extraout_XMM0_Qa_04;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double extraout_XMM0_Qb_01;
  undefined1 auVar47 [16];
  double extraout_XMM0_Qb_02;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  double dVar60;
  double dVar61;
  double dVar68;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  int local_958;
  float local_950;
  int local_94c;
  float local_948;
  float local_944;
  float local_940;
  undefined8 uStack_930;
  int local_920;
  undefined1 local_918 [16];
  double local_908;
  double *local_900;
  float *local_8f0;
  undefined1 local_8e8 [12];
  undefined4 uStack_8dc;
  double local_8d8;
  int local_8d0;
  int local_8cc;
  double *local_8c8;
  double local_8c0;
  double dStack_8b8;
  double local_8b0;
  TVector<double>_u_0 local_880;
  TVector<double>_u_0 local_868;
  TVector<double>_u_0 local_850;
  float local_838;
  int local_834;
  double local_830;
  undefined1 local_828 [12];
  undefined4 uStack_81c;
  double local_818;
  double local_810;
  float *local_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  undefined1 local_7e8 [16];
  double local_7d8;
  double local_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  TVector<double>_u_0 local_7b0;
  TQuat<double> local_798;
  undefined1 local_778 [16];
  double local_768;
  double local_760;
  double dStack_758;
  double local_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  double local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  FName local_688;
  byte local_680;
  longlong local_678;
  float local_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  longlong local_660;
  float local_658;
  float fStack_654;
  float local_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float local_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float local_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float local_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float local_610;
  float fStack_60c;
  longlong local_608;
  undefined8 local_600;
  float local_5f8;
  undefined8 local_5f4;
  float local_5ec;
  undefined8 local_5e8;
  float local_5e0;
  undefined8 local_5dc;
  float local_5d4;
  undefined8 local_5d0;
  float local_5c8;
  undefined8 local_5c4;
  float local_5bc;
  FSourceLocation local_5b8;
  TMatrix<double> local_598;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  TVector<double>_u_0 local_498;
  double local_478;
  double dStack_470;
  double local_468;
  undefined1 local_460 [16];
  double local_450;
  TVector<double>_u_0 local_448;
  double local_428;
  double local_420;
  double dStack_418;
  double local_410;
  undefined1 local_408 [16];
  double local_3f8;
  double local_368;
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  double local_328;
  double dStack_320;
  double local_318;
  undefined1 local_310 [16];
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  TMatrix<double> local_2c8 [2];
  TVector<double> local_168;
  TVector<double> local_150;
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108;
  TVector<double> local_f0;
  
  TVar19 = FThreadSafeStaticStatInner<FStat_STAT_BeamFillVertexTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_BeamFillVertexTime,1> *)
                      &StatPtr_STAT_BeamFillVertexTime);
  local_5b8.Impl._Line = 0xd23;
  local_5b8.Impl._Function =
       "int __cdecl FDynamicBeam2EmitterData::FillData_Noise(struct FAsyncBufferFillData &) const";
  local_5b8.Impl._Column = 2;
  local_5b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_688,*(TStatIdData **)&(TVar19.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_5b8);
  if ((this->Source).InterpolationPoints < 1) {
    pFVar4 = param_1->View;
    pfVar25 = param_1->VertexData;
    local_598.M[0][0] = (pFVar4->ViewMatrices).InvViewMatrix.M[0][0];
    local_598.M[0][1] = (pFVar4->ViewMatrices).InvViewMatrix.M[0][1];
    local_598.M[0][2] = (pFVar4->ViewMatrices).InvViewMatrix.M[0][2];
    local_598.M[0][3] = (pFVar4->ViewMatrices).InvViewMatrix.M[0][3];
    local_598.M[1][0] = (pFVar4->ViewMatrices).InvViewMatrix.M[1][0];
    local_598.M[1][1] = (pFVar4->ViewMatrices).InvViewMatrix.M[1][1];
    local_598.M[1][2] = (pFVar4->ViewMatrices).InvViewMatrix.M[1][2];
    local_598.M[1][3] = (pFVar4->ViewMatrices).InvViewMatrix.M[1][3];
    local_598.M[2][0] = (pFVar4->ViewMatrices).InvViewMatrix.M[2][0];
    local_598.M[2][1] = (pFVar4->ViewMatrices).InvViewMatrix.M[2][1];
    local_598.M[2][2] = (pFVar4->ViewMatrices).InvViewMatrix.M[2][2];
    local_598.M[2][3] = (pFVar4->ViewMatrices).InvViewMatrix.M[2][3];
    local_6b8 = *(undefined4 *)(pFVar4->ViewMatrices).InvViewMatrix.M[3];
    uStack_6b4 = *(undefined4 *)((longlong)(pFVar4->ViewMatrices).InvViewMatrix.M[3] + 4);
    uStack_6b0 = *(undefined4 *)((pFVar4->ViewMatrices).InvViewMatrix.M[3] + 1);
    uStack_6ac = *(undefined4 *)((longlong)(pFVar4->ViewMatrices).InvViewMatrix.M[3] + 0xc);
    local_6a8 = (pFVar4->ViewMatrices).InvViewMatrix.M[3][2];
    uStack_6a0 = *(undefined4 *)((pFVar4->ViewMatrices).InvViewMatrix.M[3] + 3);
    uStack_69c = *(undefined4 *)((longlong)(pFVar4->ViewMatrices).InvViewMatrix.M[3] + 0x1c);
    iVar18 = (this->Source).NoiseTessellation;
    iVar27 = 1;
    if (iVar18 != 0) {
      iVar27 = iVar18;
    }
    iVar18 = (this->Source).Frequency;
    iVar24 = 1;
    if (0 < iVar18) {
      iVar24 = iVar18;
    }
    iVar18 = 0;
    local_958 = 0;
    local_838 = __real_3f800000 / (float)iVar27;
    fVar48 = __real_3f800000 / (float)(iVar24 * iVar27);
    local_810 = 0.0;
    local_7f0 = 0.0;
    local_800 = 0.0;
    dStack_7f8 = 0.0;
    local_2c8[0].M[0][0] = (param_1->WorldToLocal).M[0][0];
    local_2c8[0].M[0][1] = (param_1->WorldToLocal).M[0][1];
    local_2c8[0].M[0][2] = (param_1->WorldToLocal).M[0][2];
    local_2c8[0].M[0][3] = (param_1->WorldToLocal).M[0][3];
    local_2c8[0].M[1][0] = (param_1->WorldToLocal).M[1][0];
    local_2c8[0].M[1][1] = (param_1->WorldToLocal).M[1][1];
    local_2c8[0].M[1][2] = (param_1->WorldToLocal).M[1][2];
    local_2c8[0].M[1][3] = (param_1->WorldToLocal).M[1][3];
    local_2c8[0].M[2][0] = (param_1->WorldToLocal).M[2][0];
    local_2c8[0].M[2][1] = (param_1->WorldToLocal).M[2][1];
    local_2c8[0].M[2][2] = (param_1->WorldToLocal).M[2][2];
    local_2c8[0].M[2][3] = (param_1->WorldToLocal).M[2][3];
    local_2c8[0].M[3][0] = (param_1->WorldToLocal).M[3][0];
    local_2c8[0].M[3][1] = (param_1->WorldToLocal).M[3][1];
    local_2c8[0].M[3][2] = (param_1->WorldToLocal).M[3][2];
    local_2c8[0].M[3][3] = (param_1->WorldToLocal).M[3][3];
    local_748 = (param_1->LocalToWorld).M[0][0];
    dStack_740 = (param_1->LocalToWorld).M[0][1];
    local_738 = (param_1->LocalToWorld).M[0][2];
    dStack_730 = (param_1->LocalToWorld).M[0][3];
    local_728 = (param_1->LocalToWorld).M[1][0];
    dStack_720 = (param_1->LocalToWorld).M[1][1];
    local_718 = (param_1->LocalToWorld).M[1][2];
    dStack_710 = (param_1->LocalToWorld).M[1][3];
    local_708 = (param_1->LocalToWorld).M[2][0];
    dStack_700 = (param_1->LocalToWorld).M[2][1];
    local_6f8 = (param_1->LocalToWorld).M[2][2];
    dStack_6f0 = (param_1->LocalToWorld).M[2][3];
    local_6e8 = (param_1->LocalToWorld).M[3][0];
    dStack_6e0 = (param_1->LocalToWorld).M[3][1];
    local_6d8 = (param_1->LocalToWorld).M[3][2];
    dStack_6d0 = (param_1->LocalToWorld).M[3][3];
    local_834 = 0;
    local_7c8 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) *
                __real_4140000000000000;
    local_7c0 = (double)*(float *)&(this->Source)._padding_ * __real_4140000000000000;
    local_7b8 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) *
                __real_4140000000000000;
    local_698 = uStack_6b0;
    uStack_694 = uStack_6ac;
    uStack_690 = uStack_6b0;
    uStack_68c = uStack_6ac;
    local_598.M[3][0]._0_4_ = local_6b8;
    local_598.M[3][0]._4_4_ = uStack_6b4;
    local_598.M[3][1]._0_4_ = uStack_6b0;
    local_598.M[3][1]._4_4_ = uStack_6ac;
    local_598.M[3][2] = local_6a8;
    local_598.M[3][3]._0_4_ = uStack_6a0;
    local_598.M[3][3]._4_4_ = uStack_69c;
    if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
      uVar69 = SUB84(__real_3e45798ee0000000,0);
      uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      fVar51 = __real_3f800000;
      iVar18 = 0;
      do {
        pfVar20 = (float *)0x0;
        lVar29 = (longlong)(this->Source).BeamDataOffset;
        local_8f0 = (float *)0x0;
        local_8c8 = (double *)0x0;
        local_900 = (double *)0x0;
        lVar26 = (longlong)(local_834 * (int)(this->Source)._padding_) + (this->Source)._padding_;
        local_808 = (float *)0x0;
        local_678 = lVar29;
        if (*(int *)(lVar26 + 0xa0 + lVar29) != 0) {
          iVar24 = (this->Source).NoiseRateOffset;
          if (iVar24 != -1) {
            local_8f0 = (float *)(lVar26 + iVar24);
          }
          iVar24 = (this->Source).TargetNoisePointsOffset;
          if (iVar24 != -1) {
            local_8c8 = (double *)(lVar26 + iVar24);
          }
          iVar24 = (this->Source).NextNoisePointsOffset;
          if (iVar24 != -1) {
            local_900 = (double *)(iVar24 + lVar26);
          }
          iVar24 = (this->Source).TaperValuesOffset;
          if (iVar24 != -1) {
            local_808 = (float *)(lVar26 + iVar24);
          }
          pfVar30 = local_808;
          iVar24 = (this->Source).NoiseDistanceScaleOffset;
          if (iVar24 != -1) {
            pfVar20 = (float *)(lVar26 + iVar24);
          }
          fVar52 = fVar51;
          if (pfVar20 != (float *)0x0) {
            fVar52 = *pfVar20;
          }
          fVar57 = (this->Source).NoiseRangeScale;
          if (local_8c8 != (double *)0x0) {
            dVar3 = *(double *)(lVar26 + 0x10 + lVar29);
            fVar32 = *(float *)&(this->Source)._padding_ * *(float *)(lVar26 + 0x60);
            local_660 = (longlong)iVar27;
            auVar45 = *(undefined1 (*) [16])(lVar26 + lVar29);
            local_7d0 = (double)fVar32;
            iVar18 = local_958;
            if (iVar27 < 2) {
              if ((this->Source).bUseSource == false) {
                pTVar21 = UE::Math::TMatrix<double>::GetScaledAxis(local_2c8,&local_f0,X);
                fVar51 = (this->Source).NoiseTangentStrength;
                local_880._s_0.X = (pTVar21->field0_0x0)._s_0.X;
                local_880._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
                local_880._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
              }
              else {
                pdVar31 = (double *)(lVar26 + 0x18 + lVar29);
                local_880._s_0.X = *pdVar31;
                local_880._s_0.Y = pdVar31[1];
                local_880._s_0.Z = *(double *)(lVar26 + 0x28 + lVar29);
                fVar51 = *(float *)(lVar26 + 0x30 + lVar29);
              }
              UE::Math::TVector<double>::Normalize
                        ((TVector<double> *)&local_880._s_0,(double)CONCAT44(uVar70,uVar69));
              iVar24 = *(int *)(lVar26 + 0x6c + lVar29);
              dVar33 = (double)fVar51;
              local_920 = 0;
              local_880._s_0.X = local_880._s_0.X * dVar33;
              local_880._s_0.Y = local_880._s_0.Y * dVar33;
              local_880._s_0.Z = local_880._s_0.Z * dVar33;
              local_940 = (this->Source).NoiseTangentStrength;
              local_778 = auVar45;
              local_768 = dVar3;
              fVar51 = __real_3f800000;
              if (0 < (this->Source).Sheets) {
                dVar3 = (double)fVar57;
                dVar33 = (double)fVar52;
                do {
                  local_918 = *(undefined1 (*) [16])(lVar26 + lVar29);
                  pdVar31 = (double *)(lVar26 + 0x78 + lVar29);
                  local_358 = *pdVar31;
                  dStack_350 = pdVar31[1];
                  local_908 = *(double *)(lVar26 + 0x10 + lVar29);
                  dVar54 = *(double *)(lVar26 + 0x90 + lVar29);
                  local_348 = *(double *)(lVar26 + 0x88 + lVar29);
                  local_8b0 = local_348 * dVar54 + local_908;
                  dVar36 = local_918._8_8_;
                  dStack_8b8 = dStack_350 * dVar54 + dVar36;
                  pfVar20 = &(this->Source).NoiseLockTime;
                  dVar37 = local_918._0_8_;
                  local_8c0 = local_358 * dVar54 + dVar37;
                  local_778 = local_918;
                  local_768 = local_908;
                  if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                     ((this->Source).bSmoothNoise_Enabled != false)) {
                    local_850._s_0.X = *local_900 - *local_8c8;
                    dVar54 = local_900[1];
                    local_850._s_0.Y = dVar54 - local_8c8[1];
                    local_850._s_0.Z = local_900[2] - local_8c8[2];
                    UE::Math::TVector<double>::Normalize
                              ((TVector<double> *)&local_850._s_0,__real_3e45798ee0000000);
                    fVar51 = (this->Source).NoiseLockRadius;
                    dVar34 = (double)*local_8f0;
                    dVar41 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_850._s_0.X
                             * dVar34 + *local_8c8;
                    dVar28 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_850._s_0.Z
                             * dVar34 + local_8c8[2];
                    dVar34 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_850._s_0.Y
                             * dVar34 + local_8c8[1];
                    if ((fVar51 <= (float)((uint)(float)(dVar41 - *local_900) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                       ((fVar51 <= (float)((uint)(float)(dVar34 - dVar54) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff) ||
                        (fVar51 <= (float)((uint)(float)(dVar28 - local_900[2]) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
                      *local_8c8 = dVar41;
                      local_8c8[1] = dVar34;
                      local_8c8[2] = dVar28;
                    }
                    else {
                      dVar54 = local_900[1];
                      *local_8c8 = *local_900;
                      local_8c8[1] = dVar54;
                      local_8c8[2] = local_900[2];
                    }
                  }
                  dVar53 = dVar33 * *local_8c8;
                  dVar34 = dVar33 * local_8c8[1];
                  dVar54 = dVar33 * local_8c8[2];
                  uVar81 = SUB84(__real_3ff0000000000000,0);
                  uVar82 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                  dVar28 = local_728 * dVar34 + local_748 * dVar53 + local_708 * dVar54 +
                           local_6e8 * local_810;
                  dVar41 = dStack_720 * dVar34 + dStack_740 * dVar53 + dStack_700 * dVar54 +
                           dStack_6e0 * local_810;
                  auVar8._4_8_ = dStack_6d0 * local_810;
                  auVar8._0_4_ = (int)((ulonglong)dVar28 >> 0x20);
                  auVar42._0_8_ = auVar8._0_8_ << 0x20;
                  auVar42._8_4_ = SUB84(dVar41,0);
                  auVar42._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                  uVar69 = SUB84(__real_3e45798ee0000000,0);
                  uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                  dVar41 = local_908 -
                           ((local_718 * dVar34 + local_738 * dVar53 + local_6f8 * dVar54 +
                            local_6d8 * local_810) * dVar3 + local_8b0);
                  dVar34 = dVar36 - (dVar3 * auVar42._8_8_ + dStack_8b8);
                  dVar28 = dVar37 - (dVar3 * dVar28 + local_8c0);
                  dVar54 = dVar28 * dVar28 + dVar34 * dVar34 + dVar41 * dVar41;
                  if (__real_3e45798ee0000000 < dVar54) {
                    local_4c0 = __real_3ff0000000000000 / SQRT(dVar54);
                    dVar41 = dVar41 * local_4c0;
                    dVar34 = dVar34 * local_4c0;
                    dVar28 = dVar28 * local_4c0;
                  }
                  iVar18 = (this->Source).UpVectorStepSize;
                  _local_828 = local_918;
                  local_818 = local_908;
                  if (iVar18 == 1) {
                    if (local_834 == 0) goto LAB_1481e7621;
LAB_1481e7549:
                    uVar79 = SUB84(local_7f0,0);
                    uVar80 = (undefined4)((ulonglong)local_7f0 >> 0x20);
                    local_7b0._s_0.X = local_800;
                    local_7b0._s_0.Y = dStack_7f8;
                    local_7b0._16_8_ = local_7f0;
                  }
                  else {
                    if (iVar18 != 0) goto LAB_1481e7549;
LAB_1481e7621:
                    dVar54 = dVar36 - (double)CONCAT44(uStack_694,local_698);
                    dVar53 = dVar37 - (double)CONCAT44(uStack_6b4,local_6b8);
                    local_7b0._s_0.X = dVar34 * (local_908 - local_6a8) - dVar41 * dVar54;
                    local_7b0._s_0.Y = dVar41 * dVar53 - dVar28 * (local_908 - local_6a8);
                    local_7b0._s_0.Z = dVar28 * dVar54 - dVar34 * dVar53;
                    bVar17 = UE::Math::TVector<double>::Normalize
                                       ((TVector<double> *)&local_7b0._s_0,__real_3e45798ee0000000);
                    if (bVar17) {
                      uVar79 = SUB84(local_7b0._s_0.Z,0);
                      uVar80 = (undefined4)((ulonglong)local_7b0._16_8_ >> 0x20);
                    }
                    else {
                      pTVar21 = UE::Math::TMatrix<double>::GetScaledAxis(&local_598,&local_168,Y);
                      local_7b0._s_0.X = (pTVar21->field0_0x0)._s_0.X;
                      local_7b0._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
                      local_7b0._s_0.Z = *(double *)((longlong)&pTVar21->field0_0x0 + 0x10);
                      uVar79 = SUB84(local_7b0._s_0.Z,0);
                      uVar80 = (undefined4)((ulonglong)local_7b0._s_0.Z >> 0x20);
                    }
                  }
                  uVar16 = local_7b0._s_0.Y;
                  uVar14 = local_7b0._s_0.X;
                  local_800 = local_7b0._s_0.X;
                  dStack_7f8 = local_7b0._s_0.Y;
                  local_7f0 = (double)local_7b0._16_8_;
                  if (local_920 == 0) {
                    local_750 = (double)CONCAT44(uVar80,uVar79);
                    local_760 = local_7b0._s_0.X;
                    dStack_758 = local_7b0._s_0.Y;
                  }
                  else {
                    __libm_sse2_sincos_();
                    local_798.X = dVar28 * extraout_XMM0_Qa;
                    local_798.Y = dVar34 * extraout_XMM0_Qa;
                    local_798.Z = dVar41 * extraout_XMM0_Qa;
                    local_498._s_0.Z = (double)CONCAT44(uVar80,uVar79);
                    local_498._s_0.X = (double)uVar14;
                    local_498._s_0.Y = (double)uVar16;
                    pTVar21 = UE::Math::TQuat<double>::RotateVector
                                        (&local_798,&local_150,(TVector<double> *)&local_498._s_0);
                    local_760 = (pTVar21->field0_0x0)._s_0.X;
                    dStack_758 = (pTVar21->field0_0x0)._s_0.Y;
                    local_750 = (pTVar21->field0_0x0)._s_0.Z;
                  }
                  pfVar20 = local_808;
                  local_950 = __real_3f800000;
                  if ((this->Source).TaperMethod != '\0') {
                    if ((local_808 == (float *)0x0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("TaperValues",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                            ,0xe02,L""), bVar17)) {
                      pcVar5 = (code *)swi(3);
                      iVar18 = (*pcVar5)();
                      return iVar18;
                    }
                    local_950 = *pfVar20;
                  }
                  dVar34 = (double)local_950;
                  dVar28 = local_7d0 * dStack_758 * dVar34;
                  dVar41 = local_7d0 * local_750 * dVar34;
                  dVar34 = local_7d0 * local_760 * dVar34;
                  dVar54 = 0.0;
                  *pfVar25 = (float)(((double)local_828._0_8_ + dVar34) - local_7c8);
                  pfVar25[1] = (float)((stack0xfffffffffffff7e0 + dVar28) - local_7c0);
                  pfVar25[2] = (float)((local_818 + dVar41) - local_7b8);
                  pfVar25[4] = (float)((double)local_828._0_8_ - local_7c8);
                  local_5f8 = (float)(local_818 - local_7b8);
                  pfVar25[5] = (float)(stack0xfffffffffffff7e0 - local_7c0);
                  pfVar25[6] = local_5f8;
                  pfVar25[7] = 0.0;
                  *(ulonglong *)(pfVar25 + 8) = CONCAT44(fVar32,fVar32);
                  pfVar25[0x10] = 0.0;
                  pfVar25[0x11] = 0.0;
                  pfVar25[10] = *(float *)(lVar26 + 0x3c);
                  uVar14 = *(undefined8 *)(lVar26 + 0x78);
                  *(undefined8 *)(pfVar25 + 0xc) = *(undefined8 *)(lVar26 + 0x70);
                  *(undefined8 *)(pfVar25 + 0xe) = uVar14;
                  pfVar25[0x14] = (float)(((double)local_828._0_8_ - dVar34) - local_7c8);
                  pfVar25[0x15] = (float)((stack0xfffffffffffff7e0 - dVar28) - local_7c0);
                  pfVar25[0x16] = (float)((local_818 - dVar41) - local_7b8);
                  local_600 = CONCAT44((float)(stack0xfffffffffffff7e0 - local_7c0),
                                       (float)((double)local_828._0_8_ - local_7c8));
                  *(undefined8 *)(pfVar25 + 0x18) = local_600;
                  pfVar25[0x1a] = local_5f8;
                  pfVar25[0x1b] = 0.0;
                  *(ulonglong *)(pfVar25 + 0x1c) = CONCAT44(fVar32,fVar32);
                  pfVar25[0x24] = 0.0;
                  local_958 = local_958 + 2;
                  pfVar25[0x25] = 1.0;
                  pfVar25[0x1e] = *(float *)(lVar26 + 0x3c);
                  uVar14 = *(undefined8 *)(lVar26 + 0x78);
                  local_94c = 0;
                  *(undefined8 *)(pfVar25 + 0x20) = *(undefined8 *)(lVar26 + 0x70);
                  *(undefined8 *)(pfVar25 + 0x22) = uVar14;
                  pfVar25 = pfVar25 + 0x28;
                  local_944 = fVar48;
                  local_620 = fVar32;
                  fStack_61c = fVar32;
                  local_618 = fVar32;
                  fStack_614 = fVar32;
                  if (0 < *(int *)(lVar26 + 0x98 + lVar29)) {
                    dVar28 = (double)((longlong)local_8c8 - (longlong)local_900);
                    pdVar31 = local_900 + 5;
                    local_6c8 = dVar28;
                    do {
                      pdVar1 = (double *)(lVar26 + 0x78 + lVar29);
                      local_340 = *pdVar1;
                      dStack_338 = pdVar1[1];
                      dVar54 = *(double *)(lVar26 + 0x90 + lVar29);
                      pfVar20 = &(this->Source).NoiseLockTime;
                      local_330 = *(double *)(lVar26 + 0x88 + lVar29);
                      dStack_8b8 = dStack_338 * dVar54 + (double)local_778._8_8_;
                      local_8c0 = local_340 * dVar54 + (double)local_778._0_8_;
                      local_8b0 = local_330 * dVar54 + local_768;
                      dVar56 = local_918._0_8_;
                      dVar53 = local_918._8_8_;
                      dVar34 = dVar36;
                      dVar41 = dVar37;
                      if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                         ((this->Source).bSmoothNoise_Enabled != false)) {
                        dVar54 = *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x20);
                        dVar37 = *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x28);
                        local_850._s_0.Y = pdVar31[-4] - dVar54;
                        local_850._s_0.X = pdVar31[-5] - dVar37;
                        dVar36 = *(double *)((longlong)dVar28 + -0x18 + (longlong)pdVar31);
                        local_850._s_0.Z = pdVar31[-3] - dVar36;
                        dVar35 = local_850._s_0.X * local_850._s_0.X +
                                 local_850._s_0.Y * local_850._s_0.Y +
                                 local_850._s_0.Z * local_850._s_0.Z;
                        if (__real_3e45798ee0000000 < dVar35) {
                          local_4b8 = (double)CONCAT44(uVar82,uVar81) / SQRT(dVar35);
                          local_850._s_0.X = local_4b8 * local_850._s_0.X;
                          local_850._s_0.Y = local_4b8 * local_850._s_0.Y;
                          local_850._s_0.Z = local_4b8 * local_850._s_0.Z;
                        }
                        dVar35 = (double)*local_8f0;
                        fVar51 = (this->Source).NoiseLockRadius;
                        dVar37 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                 local_850._s_0.X * dVar35 + dVar37;
                        dVar36 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                 local_850._s_0.Z * dVar35 + dVar36;
                        dVar54 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                 local_850._s_0.Y * dVar35 + dVar54;
                        if (((fVar51 <= (float)((uint)(float)(dVar37 - pdVar31[-5]) &
                                               __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                            (fVar51 <= (float)((uint)(float)(dVar54 - pdVar31[-4]) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                           (fVar51 <= (float)((uint)(float)(dVar36 - pdVar31[-3]) &
                                             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                          *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x28) = dVar37;
                          *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x20) = dVar54;
                          *(double *)((longlong)dVar28 + -0x18 + (longlong)pdVar31) = dVar36;
                          uVar69 = SUB84(__real_3e45798ee0000000,0);
                          uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                          dVar34 = dVar53;
                          dVar41 = dVar56;
                        }
                        else {
                          dVar54 = pdVar31[-4];
                          uVar69 = SUB84(__real_3e45798ee0000000,0);
                          uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                          pdVar1 = (double *)((longlong)pdVar31 + (longlong)dVar28 + -0x28);
                          *pdVar1 = pdVar31[-5];
                          pdVar1[1] = dVar54;
                          *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x18) = pdVar31[-3];
                        }
                      }
                      dVar35 = dVar33 * *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x28);
                      dVar36 = dVar33 * *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x20);
                      dVar54 = dVar33 * *(double *)((longlong)dVar28 + -0x18 + (longlong)pdVar31);
                      pdVar1 = (double *)(lVar26 + 0x78 + lVar29);
                      local_328 = *pdVar1;
                      dStack_320 = pdVar1[1];
                      local_318 = *(double *)(lVar26 + 0x88 + lVar29);
                      auVar43._8_4_ = SUB84(dVar35,0);
                      auVar43._0_8_ = dVar35;
                      auVar43._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                      auVar49._8_4_ = SUB84(dVar54,0);
                      auVar49._0_8_ = dVar54;
                      auVar49._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                      auVar44._8_4_ = SUB84(local_810,0);
                      auVar44._0_8_ = local_810;
                      auVar44._12_4_ = (int)((ulonglong)local_810 >> 0x20);
                      dVar37 = dVar3 * (dVar36 * local_728 + dVar35 * local_748 + dVar54 * local_708
                                       + local_810 * local_6e8) + local_8c0;
                      dVar68 = dVar36 * dStack_710 + dVar35 * dStack_730 + dVar54 * dStack_6f0 +
                               local_810 * dStack_6d0;
                      dVar38 = dVar3 * (dVar36 * local_718 + dVar35 * local_738 + dVar54 * local_6f8
                                       + local_810 * local_6d8) + local_8b0;
                      dVar36 = dVar3 * (dVar36 * dStack_720 + auVar43._8_8_ * dStack_740 +
                                        auVar49._8_8_ * dStack_700 + auVar44._8_8_ * dStack_6e0) +
                               dStack_8b8;
                      dVar35 = *(double *)(lVar26 + 0x90 + lVar29);
                      local_830 = local_328 * dVar35 + local_8c0;
                      if ((iVar24 < 0) && (local_94c + 1 == *(int *)(lVar26 + 0x98 + lVar29))) {
                        if ((((this->Source).bTargetNoise != false) &&
                            (pfVar20 = &(this->Source).NoiseLockTime,
                            0.0 < *pfVar20 || *pfVar20 == 0.0)) &&
                           ((this->Source).bSmoothNoise_Enabled != false)) {
                          lVar22 = (longlong)(this->Source).Frequency;
                          dVar54 = local_900[lVar22 * 3];
                          dVar35 = local_900[lVar22 * 3 + 1];
                          dVar73 = local_900[lVar22 * 3 + 2];
                          dVar40 = local_8c8[lVar22 * 3];
                          dVar55 = local_8c8[lVar22 * 3 + 1];
                          local_850._s_0.X = dVar54 - dVar40;
                          dVar60 = local_8c8[lVar22 * 3 + 2];
                          dVar68 = 0.0;
                          local_850._s_0.Y = dVar35 - dVar55;
                          local_850._s_0.Z = dVar73 - dVar60;
                          UE::Math::TVector<double>::Normalize
                                    ((TVector<double> *)&local_850._s_0,
                                     (double)CONCAT44(uVar70,uVar69));
                          fVar51 = (this->Source).NoiseLockRadius;
                          dVar39 = (double)*local_8f0;
                          dVar40 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                   local_850._s_0.X * dVar39 + dVar40;
                          dVar60 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                   local_850._s_0.Z * dVar39 + dVar60;
                          dVar55 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                   local_850._s_0.Y * dVar39 + dVar55;
                          if (((fVar51 <= (float)((uint)(float)(dVar40 - dVar54) &
                                                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                              (fVar51 <= (float)((uint)(float)(dVar55 - dVar35) &
                                                __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                             (fVar51 <= (float)((uint)(float)(dVar60 - dVar73) &
                                               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                            local_8c8[lVar22 * 3] = dVar40;
                            local_8c8[lVar22 * 3 + 1] = dVar55;
                            local_8c8[lVar22 * 3 + 2] = dVar60;
                            dVar34 = dVar53;
                            dVar41 = dVar56;
                          }
                          else {
                            dVar54 = (local_900 + lVar22 * 3)[1];
                            local_8c8[lVar22 * 3] = local_900[lVar22 * 3];
                            (local_8c8 + lVar22 * 3)[1] = dVar54;
                            local_8c8[lVar22 * 3 + 2] = local_900[lVar22 * 3 + 2];
                          }
                        }
                        auVar45 = *(undefined1 (*) [16])(lVar26 + 0x50 + lVar29);
                        dVar40 = auVar45._0_8_;
                        dVar73 = *(double *)(lVar26 + 0x60 + lVar29);
                        local_940 = *(float *)(lVar26 + 0x68 + lVar29);
                        auVar9._4_8_ = dVar68;
                        auVar9._0_4_ = auVar45._4_4_;
                        auVar62._0_8_ = auVar9._0_8_ << 0x20;
                        auVar62._8_4_ = auVar45._8_4_;
                        auVar62._12_4_ = auVar45._12_4_;
                        dVar68 = auVar62._8_8_;
                        dVar54 = auVar45._8_8_;
                      }
                      else {
                        pfVar20 = &(this->Source).NoiseLockTime;
                        if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                           ((this->Source).bSmoothNoise_Enabled != false)) {
                          dVar54 = *(double *)((longlong)pdVar31 + (longlong)dVar28 + -8);
                          dVar68 = *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x10);
                          local_850._s_0.Y = pdVar31[-1] - dVar54;
                          local_850._s_0.X = pdVar31[-2] - dVar68;
                          local_850._s_0.Z =
                               *pdVar31 - *(double *)((longlong)pdVar31 + (longlong)dVar28);
                          dVar73 = local_850._s_0.X * local_850._s_0.X +
                                   local_850._s_0.Y * local_850._s_0.Y +
                                   local_850._s_0.Z * local_850._s_0.Z;
                          if (__real_3e45798ee0000000 < dVar73) {
                            local_4b0 = __real_3ff0000000000000 / SQRT(dVar73);
                            local_850._s_0.X = local_4b0 * local_850._s_0.X;
                            local_850._s_0.Y = local_4b0 * local_850._s_0.Y;
                            local_850._s_0.Z = local_4b0 * local_850._s_0.Z;
                          }
                          dVar40 = (double)*local_8f0;
                          fVar51 = (this->Source).NoiseLockRadius;
                          dVar73 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                   local_850._s_0.Z * dVar40 +
                                   *(double *)((longlong)pdVar31 + (longlong)dVar28);
                          dVar54 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                   local_850._s_0.Y * dVar40 + dVar54;
                          dVar68 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                   local_850._s_0.X * dVar40 + dVar68;
                          if (((fVar51 <= (float)((uint)(float)(dVar68 - pdVar31[-2]) &
                                                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                              (fVar51 <= (float)((uint)(float)(dVar54 - pdVar31[-1]) &
                                                __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                             (fVar51 <= (float)((uint)(float)(dVar73 - *pdVar31) &
                                               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                            *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x10) = dVar68;
                            *(double *)((longlong)pdVar31 + (longlong)dVar28 + -8) = dVar54;
                            *(double *)((longlong)pdVar31 + (longlong)dVar28) = dVar73;
                            dVar34 = dVar53;
                            dVar41 = dVar56;
                          }
                          else {
                            dVar54 = pdVar31[-1];
                            pdVar1 = (double *)((longlong)pdVar31 + (longlong)dVar28 + -0x10);
                            *pdVar1 = pdVar31[-2];
                            pdVar1[1] = dVar54;
                            *(double *)((longlong)pdVar31 + (longlong)dVar28) = *pdVar31;
                          }
                        }
                        dVar73 = dVar33 * *(double *)((longlong)pdVar31 + (longlong)dVar28 + -0x10);
                        dVar60 = dVar33 * *(double *)((longlong)pdVar31 + (longlong)dVar28 + -8);
                        dVar55 = dVar33 * *(double *)((longlong)pdVar31 + (longlong)dVar28);
                        uVar69 = SUB84(__real_3e45798ee0000000,0);
                        uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                        dVar54 = dStack_720 * dVar60 + dStack_740 * dVar73 + dStack_700 * dVar55 +
                                 dStack_6e0 * local_810;
                        dVar68 = (double)((__real_3f800000 - (this->Source).NoiseTension) *
                                         __real_3f000000);
                        dVar40 = (((local_728 * dVar60 + local_748 * dVar73 + local_708 * dVar55 +
                                   local_6e8 * local_810) * dVar3 + local_830) - dVar41) * dVar68;
                        dVar73 = (((local_718 * dVar60 + local_738 * dVar73 + local_6f8 * dVar55 +
                                   local_6d8 * local_810) * dVar3 + local_318 * dVar35 + local_8b0)
                                 - local_908) * dVar68;
                        dVar68 = ((dVar54 * dVar3 + dStack_320 * dVar35 + dStack_8b8) - dVar34) *
                                 dVar68;
                      }
                      pfVar20 = local_808;
                      dVar55 = __real_3ff0000000000000;
                      uVar81 = SUB84(__real_3ff0000000000000,0);
                      uVar82 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                      dVar35 = dVar68 * dVar68 + dVar40 * dVar40 + dVar73 * dVar73;
                      if ((double)CONCAT44(uVar70,uVar69) <= dVar35 &&
                          dVar35 != (double)CONCAT44(uVar70,uVar69)) {
                        local_4d0 = __real_3ff0000000000000 / SQRT(dVar35);
                        dVar40 = dVar40 * local_4d0;
                        dVar68 = dVar68 * local_4d0;
                        dVar73 = dVar73 * local_4d0;
                      }
                      local_7d8 = local_908;
                      dVar35 = (double)local_940;
                      local_7e8._8_4_ = SUB84(dVar34,0);
                      local_7e8._0_8_ = dVar41;
                      local_7e8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
                      dVar40 = dVar40 * dVar35;
                      dVar68 = dVar68 * dVar35;
                      dVar73 = dVar73 * dVar35;
                      if (0 < local_660) {
                        pfVar30 = local_808 + local_94c * iVar27;
                        local_8d0 = 1;
                        local_830 = (double)local_660;
                        dVar28 = dVar41;
                        dVar35 = dVar34;
                        do {
                          uStack_81c = (undefined4)((ulonglong)dVar35 >> 0x20);
                          fVar57 = (float)local_8d0 * local_838;
                          local_828._8_4_ = SUB84(dVar35,0);
                          local_828._0_8_ = dVar41;
                          fVar59 = fVar57 * fVar57;
                          fVar51 = fVar57 * fVar59 - fVar59;
                          fVar58 = (fVar57 + fVar57) * fVar59;
                          fVar57 = (fVar57 * fVar59 - fVar57 * (fVar57 + fVar57)) + fVar57;
                          fVar52 = fVar59 * __real_40400000 - fVar58;
                          fVar58 = (fVar58 - fVar59 * __real_40400000) + __real_3f800000;
                          dVar71 = (double)fVar52 * dVar37 + (double)fVar51 * dVar40 +
                                   (double)fVar57 * local_880._s_0.X + (double)fVar58 * dVar28;
                          dVar78 = (double)fVar52 * dVar36 + (double)fVar51 * dVar68 +
                                   (double)fVar57 * local_880._s_0.Y + (double)fVar58 * dVar34;
                          dVar39 = dVar41 - dVar71;
                          dVar28 = (double)fVar58 * local_908 + (double)fVar57 * local_880._s_0.Z +
                                   (double)fVar52 * dVar38 + (double)fVar51 * dVar73;
                          dVar34 = local_7d8 - dVar28;
                          dVar60 = dVar35 - dVar78;
                          dVar54 = dVar39 * dVar39 + dVar60 * dVar60 + dVar34 * dVar34;
                          if (__real_3e45798ee0000000 < dVar54) {
                            local_4a8 = dVar55 / SQRT(dVar54);
                            dVar34 = dVar34 * local_4a8;
                            dVar60 = dVar60 * local_4a8;
                            dVar39 = dVar39 * local_4a8;
                          }
                          if ((this->Source).UpVectorStepSize == 0) {
                            dVar74 = dVar35 - (double)CONCAT44(uStack_694,local_698);
                            dVar41 = dVar41 - (double)CONCAT44(uStack_6b4,local_6b8);
                            auVar75._8_4_ = SUB84(dVar35,0);
                            auVar75._0_8_ = dVar39;
                            auVar75._12_4_ = uStack_81c;
                            dVar54 = auVar75._8_8_;
                            dVar72 = dVar39 * dVar74 - dVar60 * dVar41;
                            dVar61 = dVar34 * dVar41 - dVar39 * (local_7d8 - local_6a8);
                            dVar74 = dVar60 * (local_7d8 - local_6a8) - dVar34 * dVar74;
                            dVar41 = dVar74 * dVar74 + dVar61 * dVar61 + dVar72 * dVar72;
                            if (dVar41 <= __real_3e45798ee0000000) {
                              dVar35 = 0.0;
                              dVar54 = 0.0;
                              dVar74 = local_598.M[1][0];
                              dVar41 = local_598.M[1][1];
                              dVar61 = local_598.M[1][2];
                            }
                            else {
                              local_4a0 = dVar55 / SQRT(dVar41);
                              dVar74 = dVar74 * local_4a0;
                              dVar41 = dVar61 * local_4a0;
                              dVar61 = dVar72 * local_4a0;
                            }
                          }
                          else {
                            dVar35 = 0.0;
                            dVar54 = 0.0;
                            dVar74 = local_800;
                            dVar41 = dStack_7f8;
                            dVar61 = local_7f0;
                          }
                          local_818 = local_7d8;
                          local_478 = dVar71;
                          dStack_470 = dVar78;
                          local_468 = dVar28;
                          if (local_920 != 0) {
                            __libm_sse2_sincos_();
                            local_798.X = dVar39 * extraout_XMM0_Qa_00;
                            local_798.Y = dVar60 * extraout_XMM0_Qa_00;
                            auVar63._8_4_ = SUB84(dVar35,0);
                            auVar63._0_8_ = dVar74;
                            auVar63._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                            local_798.Z = dVar34 * extraout_XMM0_Qa_00;
                            dVar54 = auVar63._8_8_;
                            dVar35 = dVar41 * local_798.X - dVar74 * local_798.Y;
                            dVar35 = dVar35 + dVar35;
                            dVar60 = dVar74 * local_798.Z - dVar61 * local_798.X;
                            dVar34 = dVar61 * local_798.Y - dVar41 * local_798.Z;
                            dVar60 = dVar60 + dVar60;
                            dVar34 = dVar34 + dVar34;
                            dVar74 = (dVar35 * local_798.Y - dVar60 * local_798.Z) +
                                     extraout_XMM0_Qb * dVar34 + dVar74;
                            dVar41 = (dVar34 * local_798.Z - dVar35 * local_798.X) +
                                     extraout_XMM0_Qb * dVar60 + dVar41;
                            dVar61 = (dVar60 * local_798.X - dVar34 * local_798.Y) +
                                     extraout_XMM0_Qb * dVar35 + dVar61;
                          }
                          if ((this->Source).TaperMethod != '\0') {
                            if ((pfVar20 == (float *)0x0) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("TaperValues",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                                  ,0xe9f,L""), bVar17)) {
                              pcVar5 = (code *)swi(3);
                              iVar18 = (*pcVar5)();
                              return iVar18;
                            }
                            local_950 = *pfVar30;
                          }
                          dVar34 = (double)local_950;
                          dVar41 = dVar41 * local_7d0 * dVar34;
                          dVar35 = dVar61 * local_7d0 * dVar34;
                          dVar34 = dVar74 * local_7d0 * dVar34;
                          *pfVar25 = (float)((dVar34 + dVar71) - local_7c8);
                          pfVar25[1] = (float)((dVar41 + dVar78) - local_7c0);
                          pfVar25[2] = (float)((dVar35 + dVar28) - local_7b8);
                          pfVar25[4] = (float)(dVar71 - local_7c8);
                          local_5bc = (float)(dVar28 - local_7b8);
                          pfVar25[5] = (float)(dVar78 - local_7c0);
                          pfVar25[6] = local_5bc;
                          pfVar25[7] = 0.0;
                          *(ulonglong *)(pfVar25 + 8) = CONCAT44(fVar32,fVar32);
                          pfVar25[0x10] = local_944;
                          pfVar25[0x11] = 0.0;
                          pfVar25[10] = *(float *)(lVar26 + 0x3c);
                          uVar14 = *(undefined8 *)(lVar26 + 0x78);
                          *(undefined8 *)(pfVar25 + 0xc) = *(undefined8 *)(lVar26 + 0x70);
                          *(undefined8 *)(pfVar25 + 0xe) = uVar14;
                          pfVar25[0x14] = (float)((dVar71 - dVar34) - local_7c8);
                          pfVar25[0x15] = (float)((dVar78 - dVar41) - local_7c0);
                          pfVar25[0x16] = (float)((dVar28 - dVar35) - local_7b8);
                          local_5c4 = CONCAT44((float)(dVar78 - local_7c0),
                                               (float)(dVar71 - local_7c8));
                          *(undefined8 *)(pfVar25 + 0x18) = local_5c4;
                          pfVar25[0x1a] = local_5bc;
                          pfVar25[0x1b] = 0.0;
                          *(ulonglong *)(pfVar25 + 0x1c) = CONCAT44(fVar32,fVar32);
                          pfVar25[0x24] = local_944;
                          local_944 = local_944 + fVar48;
                          local_958 = local_958 + 2;
                          pfVar30 = pfVar30 + 1;
                          uStack_930._0_4_ = SUB84(dVar78,0);
                          uStack_930._4_4_ = (undefined4)((ulonglong)dVar78 >> 0x20);
                          pfVar25[0x25] = 1.0;
                          pfVar25[0x1e] = *(float *)(lVar26 + 0x3c);
                          uVar14 = *(undefined8 *)(lVar26 + 0x78);
                          *(undefined8 *)(pfVar25 + 0x20) = *(undefined8 *)(lVar26 + 0x70);
                          *(undefined8 *)(pfVar25 + 0x22) = uVar14;
                          pfVar25 = pfVar25 + 0x28;
                          local_8d0 = local_8d0 + 1;
                          local_830 = (double)((longlong)local_830 + -1);
                          local_7e8._8_4_ = (undefined4)uStack_930;
                          local_7e8._0_8_ = dVar71;
                          local_7e8._12_4_ = uStack_930._4_4_;
                          local_7d8 = dVar28;
                          local_630 = fVar32;
                          fStack_62c = fVar32;
                          local_628 = fVar32;
                          fStack_624 = fVar32;
                          dVar34 = dVar53;
                          dVar41 = dVar71;
                          dVar28 = dVar56;
                          dVar35 = dVar78;
                        } while (local_830 != 0.0);
                        uVar69 = SUB84(__real_3e45798ee0000000,0);
                        uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                        local_830 = 0.0;
                        dVar28 = local_6c8;
                        lVar29 = local_678;
                      }
                      local_94c = local_94c + 1;
                      pdVar31 = pdVar31 + 3;
                      local_8e8._8_4_ = SUB84(dVar36,0);
                      uStack_8dc = (undefined4)((ulonglong)dVar36 >> 0x20);
                      local_778._8_8_ = dStack_8b8;
                      local_778._0_8_ = local_8c0;
                      local_918._8_4_ = local_8e8._8_4_;
                      local_918._0_8_ = dVar37;
                      local_918._12_4_ = uStack_8dc;
                      local_908 = dVar38;
                      local_880._s_0.X = dVar40;
                      local_880._s_0.Y = dVar68;
                      local_880._s_0.Z = dVar73;
                      local_768 = local_8b0;
                    } while (local_94c < *(int *)(lVar26 + 0x98 + lVar29));
                  }
                  if (iVar24 < 0) {
                    pauVar2 = (undefined1 (*) [16])(lVar26 + 0x38 + lVar29);
                    dVar41 = *(double *)*pauVar2;
                    dVar28 = *(double *)(*pauVar2 + 8);
                    _local_8e8 = *pauVar2;
                    local_8d8 = *(double *)(lVar26 + 0x48 + lVar29);
                    if ((this->Source).bTargetNoise != false) {
                      pfVar20 = &(this->Source).NoiseLockTime;
                      if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                         ((this->Source).bSmoothNoise_Enabled != false)) {
                        lVar22 = (longlong)(this->Source).Frequency;
                        dVar54 = local_900[lVar22 * 3];
                        dVar34 = local_900[lVar22 * 3 + 1];
                        local_850._s_0.X = dVar54 - local_8c8[lVar22 * 3];
                        dVar53 = local_900[lVar22 * 3 + 2];
                        local_850._s_0.Y = dVar34 - local_8c8[lVar22 * 3 + 1];
                        local_850._s_0.Z = dVar53 - local_8c8[lVar22 * 3 + 2];
                        UE::Math::TVector<double>::Normalize
                                  ((TVector<double> *)&local_850._s_0,
                                   (double)CONCAT44(uVar70,uVar69));
                        fVar51 = (this->Source).NoiseLockRadius;
                        dVar38 = (double)*local_8f0;
                        dVar35 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                 local_850._s_0.X * dVar38 + local_8c8[lVar22 * 3];
                        dVar56 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                 local_850._s_0.Z * dVar38 + local_8c8[lVar22 * 3 + 2];
                        dVar38 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                 local_850._s_0.Y * dVar38 + local_8c8[lVar22 * 3 + 1];
                        if ((fVar51 <= (float)((uint)(float)(dVar35 - dVar54) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                           ((fVar51 <= (float)((uint)(float)(dVar38 - dVar34) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff) ||
                            (fVar51 <= (float)((uint)(float)(dVar56 - dVar53) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
                          local_8c8[lVar22 * 3] = dVar35;
                          local_8c8[lVar22 * 3 + 1] = dVar38;
                          local_8c8[lVar22 * 3 + 2] = dVar56;
                          dVar36 = local_918._8_8_;
                          dVar37 = local_918._0_8_;
                        }
                        else {
                          dVar54 = (local_900 + lVar22 * 3)[1];
                          local_8c8[lVar22 * 3] = local_900[lVar22 * 3];
                          (local_8c8 + lVar22 * 3)[1] = dVar54;
                          local_8c8[lVar22 * 3 + 2] = local_900[lVar22 * 3 + 2];
                        }
                      }
                      lVar22 = (longlong)(this->Source).Frequency;
                      dVar34 = dVar33 * local_8c8[lVar22 * 3 + 1];
                      dVar54 = dVar33 * local_8c8[lVar22 * 3 + 2];
                      dVar53 = dVar33 * local_8c8[lVar22 * 3];
                      dVar41 = dVar41 + dVar3 * (local_728 * dVar34 + local_748 * dVar53 +
                                                 local_708 * dVar54 + local_6e8 * local_810);
                      dVar28 = dVar28 + dVar3 * (dStack_720 * dVar34 + dStack_740 * dVar53 +
                                                 dStack_700 * dVar54 + dStack_6e0 * local_810);
                      local_8d8 = local_8d8 +
                                  dVar3 * (local_718 * dVar34 + local_738 * dVar53 +
                                           local_6f8 * dVar54 + local_6d8 * local_810);
                      local_8e8._8_4_ = SUB84(dVar28,0);
                      local_8e8._0_8_ = dVar41;
                      uStack_8dc = (int)((ulonglong)dVar28 >> 0x20);
                      dVar54 = local_810;
                    }
                    pfVar20 = local_808;
                    local_7e8._12_4_ = (undefined4)((ulonglong)dVar36 >> 0x20);
                    if ((this->Source).bUseTarget == false) {
                      local_310 = *(undefined1 (*) [16])(lVar26 + 0x78 + lVar29);
                      dVar54 = *(double *)(lVar26 + 0x90 + lVar29);
                      local_300 = *(double *)(lVar26 + 0x88 + lVar29);
                      dVar34 = (double)((__real_3f800000 - (this->Source).NoiseTension) *
                                       __real_3f000000);
                      dVar53 = ((local_310._8_8_ * dVar54 + dStack_8b8) - dVar36) * dVar34;
                      dVar56 = ((local_310._0_8_ * dVar54 + local_8c0) - dVar37) * dVar34;
                      dVar34 = ((local_300 * dVar54 + local_8b0) - local_908) * dVar34;
                    }
                    else {
                      auVar45 = *(undefined1 (*) [16])(lVar26 + 0x50 + lVar29);
                      dVar56 = auVar45._0_8_;
                      dVar34 = *(double *)(lVar26 + 0x60 + lVar29);
                      auVar10._4_8_ = dVar54;
                      auVar10._0_4_ = auVar45._4_4_;
                      auVar64._0_8_ = auVar10._0_8_ << 0x20;
                      auVar64._8_4_ = auVar45._8_4_;
                      auVar64._12_4_ = auVar45._12_4_;
                      dVar53 = auVar64._8_8_;
                    }
                    dVar54 = dVar53 * dVar53 + dVar56 * dVar56 + dVar34 * dVar34;
                    if ((double)CONCAT44(uVar70,uVar69) <= dVar54 &&
                        dVar54 != (double)CONCAT44(uVar70,uVar69)) {
                      local_428 = (double)CONCAT44(uVar82,uVar81) / SQRT(dVar54);
                      dVar56 = dVar56 * local_428;
                      dVar53 = dVar53 * local_428;
                      dVar34 = dVar34 * local_428;
                    }
                    iVar18 = 0;
                    auVar76._8_4_ = SUB84(dVar36,0);
                    auVar76._0_8_ = dVar37;
                    auVar76._12_4_ = local_7e8._12_4_;
                    local_7d8 = local_908;
                    dVar54 = (double)local_940;
                    local_7e8._8_4_ = SUB84(dVar36,0);
                    local_7e8._0_8_ = dVar37;
                    if (0 < iVar27) {
                      while( true ) {
                        fVar52 = (float)(iVar18 + 1) * local_838;
                        fVar59 = fVar52 * fVar52;
                        fVar51 = (fVar52 + fVar52) * fVar59;
                        fVar58 = fVar59 * __real_40400000 - fVar51;
                        fVar51 = (fVar51 - fVar59 * __real_40400000) + __real_3f800000;
                        fVar57 = fVar52 * fVar59 - fVar59;
                        fVar52 = (fVar52 * fVar59 - fVar52 * (fVar52 + fVar52)) + fVar52;
                        dVar41 = (double)fVar51 * dVar37 + (double)fVar52 * local_880._s_0.X +
                                 (double)fVar58 * dVar41 + (double)fVar57 * dVar56 * dVar54;
                        dVar28 = (double)fVar51 * dVar36 + (double)fVar52 * local_880._s_0.Y +
                                 (double)fVar58 * dVar28 + (double)fVar57 * dVar53 * dVar54;
                        uVar69 = (undefined4)((ulonglong)dVar28 >> 0x20);
                        dVar38 = auVar76._0_8_ - dVar41;
                        local_460._8_4_ = SUB84(dVar28,0);
                        local_460._0_8_ = dVar41;
                        local_460._12_4_ = uVar69;
                        dVar36 = (double)fVar52 * local_880._s_0.Z + (double)fVar51 * local_908 +
                                 (double)fVar58 * local_8d8 + (double)fVar57 * dVar34 * dVar54;
                        auVar6._8_4_ = SUB84(dVar28,0);
                        auVar6._0_8_ = dVar41;
                        auVar6._12_4_ = uVar69;
                        dVar35 = local_7d8 - dVar36;
                        dVar28 = auVar76._8_8_ - dVar28;
                        dVar37 = dVar38 * dVar38 + dVar28 * dVar28 + dVar35 * dVar35;
                        if (__real_3e45798ee0000000 < dVar37) {
                          local_368 = __real_3ff0000000000000 / SQRT(dVar37);
                          dVar35 = dVar35 * local_368;
                          dVar28 = dVar28 * local_368;
                          dVar38 = dVar38 * local_368;
                        }
                        dVar37 = local_800;
                        dVar68 = dStack_7f8;
                        dVar73 = local_7f0;
                        if ((this->Source).UpVectorStepSize == 0) {
                          dVar68 = auVar76._0_8_ - (double)CONCAT44(uStack_6b4,local_6b8);
                          dVar37 = auVar76._8_8_ - (double)CONCAT44(uStack_694,local_698);
                          dVar60 = dVar37 * dVar38 - dVar68 * dVar28;
                          dVar39 = dVar68 * dVar35 - (local_7d8 - local_6a8) * dVar38;
                          dVar55 = (local_7d8 - local_6a8) * dVar28 - dVar37 * dVar35;
                          dVar40 = dVar55 * dVar55 + dVar39 * dVar39 + dVar60 * dVar60;
                          dVar37 = local_598.M[1][0];
                          dVar68 = local_598.M[1][1];
                          dVar73 = local_598.M[1][2];
                          if (__real_3e45798ee0000000 < dVar40) {
                            local_360 = __real_3ff0000000000000 / SQRT(dVar40);
                            dVar37 = local_360 * dVar55;
                            dVar68 = local_360 * dVar39;
                            dVar73 = local_360 * dVar60;
                          }
                        }
                        _local_828 = auVar76;
                        local_818 = local_7d8;
                        local_450 = dVar36;
                        if (local_920 != 0) {
                          __libm_sse2_sincos_();
                          local_798.X = extraout_XMM0_Qa_01 * dVar38;
                          local_798.Z = extraout_XMM0_Qa_01 * dVar35;
                          local_798.Y = extraout_XMM0_Qa_01 * dVar28;
                          dVar35 = local_798.X * dVar68 - local_798.Y * dVar37;
                          dVar35 = dVar35 + dVar35;
                          dVar38 = local_798.Z * dVar37 - local_798.X * dVar73;
                          dVar28 = local_798.Y * dVar73 - local_798.Z * dVar68;
                          dVar38 = dVar38 + dVar38;
                          dVar28 = dVar28 + dVar28;
                          dVar37 = (dVar35 * local_798.Y - dVar38 * local_798.Z) +
                                   dVar28 * extraout_XMM0_Qb_00 + dVar37;
                          dVar73 = (dVar38 * local_798.X - dVar28 * local_798.Y) +
                                   dVar35 * extraout_XMM0_Qb_00 + dVar73;
                          dVar68 = (dVar28 * local_798.Z - dVar35 * local_798.X) +
                                   dVar38 * extraout_XMM0_Qb_00 + dVar68;
                        }
                        if ((this->Source).TaperMethod != '\0') {
                          if ((pfVar20 == (float *)0x0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("TaperValues",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                                  ,0xf16,L""), bVar17)) {
                            pcVar5 = (code *)swi(3);
                            iVar18 = (*pcVar5)();
                            return iVar18;
                          }
                          local_950 = pfVar20[iVar27 * *(int *)(lVar26 + 0x98 + lVar29) + iVar18];
                        }
                        dVar28 = (double)local_950;
                        dVar37 = dVar37 * local_7d0 * dVar28;
                        dVar35 = dVar73 * local_7d0 * dVar28;
                        dVar28 = dVar68 * local_7d0 * dVar28;
                        *pfVar25 = (float)((dVar37 + dVar41) - local_7c8);
                        uStack_930 = auVar6._8_8_;
                        pfVar25[1] = (float)((dVar28 + uStack_930) - local_7c0);
                        pfVar25[2] = (float)((dVar35 + dVar36) - local_7b8);
                        pfVar25[4] = (float)(dVar41 - local_7c8);
                        local_5c8 = (float)(dVar36 - local_7b8);
                        pfVar25[5] = (float)(uStack_930 - local_7c0);
                        pfVar25[6] = local_5c8;
                        pfVar25[7] = 0.0;
                        *(ulonglong *)(pfVar25 + 8) = CONCAT44(fVar32,fVar32);
                        pfVar25[0x10] = local_944;
                        pfVar25[0x11] = 0.0;
                        pfVar25[10] = *(float *)(lVar26 + 0x3c);
                        uVar14 = *(undefined8 *)(lVar26 + 0x78);
                        *(undefined8 *)(pfVar25 + 0xc) = *(undefined8 *)(lVar26 + 0x70);
                        *(undefined8 *)(pfVar25 + 0xe) = uVar14;
                        pfVar25[0x14] = (float)((dVar41 - dVar37) - local_7c8);
                        pfVar25[0x15] = (float)((uStack_930 - dVar28) - local_7c0);
                        pfVar25[0x16] = (float)((dVar36 - dVar35) - local_7b8);
                        local_5d0 = CONCAT44((float)(uStack_930 - local_7c0),
                                             (float)(dVar41 - local_7c8));
                        *(undefined8 *)(pfVar25 + 0x18) = local_5d0;
                        pfVar25[0x1a] = local_5c8;
                        pfVar25[0x1b] = 0.0;
                        *(ulonglong *)(pfVar25 + 0x1c) = CONCAT44(fVar32,fVar32);
                        pfVar25[0x24] = local_944;
                        pfVar25[0x25] = 1.0;
                        iVar18 = iVar18 + 1;
                        local_944 = local_944 + fVar48;
                        local_958 = local_958 + 2;
                        pfVar25[0x1e] = *(float *)(lVar26 + 0x3c);
                        *(undefined1 (*) [16])(pfVar25 + 0x20) =
                             *(undefined1 (*) [16])(lVar26 + 0x70);
                        pfVar25 = pfVar25 + 0x28;
                        local_7e8 = auVar6;
                        local_7d8 = dVar36;
                        local_640 = fVar32;
                        fStack_63c = fVar32;
                        local_638 = fVar32;
                        fStack_634 = fVar32;
                        if (iVar27 <= iVar18) break;
                        auVar76 = auVar6;
                        dVar41 = (double)local_8e8._0_8_;
                        dVar28 = stack0xfffffffffffff720;
                        dVar36 = local_918._8_8_;
                        dVar37 = local_918._0_8_;
                      }
                    }
                  }
                  local_920 = local_920 + 1;
                } while (local_920 < (this->Source).Sheets);
                uVar69 = SUB84(__real_3e45798ee0000000,0);
                uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                fVar51 = __real_3f800000;
                iVar18 = local_958;
              }
            }
            else {
              if ((this->Source).bUseSource == false) {
                pTVar21 = UE::Math::TMatrix<double>::GetScaledAxis(local_2c8,&local_138,X);
                fVar51 = (this->Source).NoiseTangentStrength;
                local_880._s_0.X = (pTVar21->field0_0x0)._s_0.X;
                local_880._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
                local_880._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
              }
              else {
                pdVar31 = (double *)(lVar26 + 0x18 + lVar29);
                local_880._s_0.X = *pdVar31;
                local_880._s_0.Y = pdVar31[1];
                local_880._s_0.Z = *(double *)(lVar26 + 0x28 + lVar29);
                fVar51 = *(float *)(lVar26 + 0x30 + lVar29);
              }
              UE::Math::TVector<double>::Normalize
                        ((TVector<double> *)&local_880._s_0,(double)CONCAT44(uVar70,uVar69));
              iVar24 = *(int *)(lVar26 + 0x6c + lVar29);
              dVar33 = (double)fVar51;
              local_920 = 0;
              local_880._s_0.X = local_880._s_0.X * dVar33;
              local_880._s_0.Y = local_880._s_0.Y * dVar33;
              local_880._s_0.Z = local_880._s_0.Z * dVar33;
              local_948 = (this->Source).NoiseTangentStrength;
              local_778 = auVar45;
              local_768 = dVar3;
              fVar51 = __real_3f800000;
              if (0 < (this->Source).Sheets) {
                dVar3 = (double)fVar57;
                dVar33 = (double)fVar52;
                do {
                  local_918 = *(undefined1 (*) [16])(lVar26 + lVar29);
                  dVar36 = local_918._0_8_;
                  dVar37 = local_918._8_8_;
                  pdVar31 = (double *)(lVar26 + 0x78 + lVar29);
                  local_2f8 = *pdVar31;
                  dStack_2f0 = pdVar31[1];
                  local_908 = *(double *)(lVar26 + 0x10 + lVar29);
                  dVar54 = *(double *)(lVar26 + 0x90 + lVar29);
                  local_2e8 = *(double *)(lVar26 + 0x88 + lVar29);
                  local_8b0 = local_2e8 * dVar54 + local_908;
                  dStack_8b8 = dStack_2f0 * dVar54 + dVar37;
                  pfVar20 = &(this->Source).NoiseLockTime;
                  local_8c0 = local_2f8 * dVar54 + dVar36;
                  local_778 = local_918;
                  local_768 = local_908;
                  if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                     ((this->Source).bSmoothNoise_Enabled != false)) {
                    dVar54 = *local_900;
                    dVar28 = local_900[1];
                    local_868._s_0.X = dVar54 - *local_8c8;
                    local_868._s_0.Y = dVar28 - local_8c8[1];
                    local_868._s_0.Z = local_900[2] - local_8c8[2];
                    UE::Math::TVector<double>::Normalize
                              ((TVector<double> *)&local_868._s_0,__real_3e45798ee0000000);
                    fVar51 = (this->Source).NoiseLockRadius;
                    dVar53 = (double)*local_8f0;
                    dVar34 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_868._s_0.X
                             * dVar53 + *local_8c8;
                    dVar41 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_868._s_0.Z
                             * dVar53 + local_8c8[2];
                    dVar53 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_868._s_0.Y
                             * dVar53 + local_8c8[1];
                    if ((fVar51 <= (float)((uint)(float)(dVar34 - dVar54) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                       ((fVar51 <= (float)((uint)(float)(dVar53 - dVar28) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff) ||
                        (fVar51 <= (float)((uint)(float)(dVar41 - local_900[2]) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
                      *local_8c8 = dVar34;
                      local_8c8[1] = dVar53;
                      local_8c8[2] = dVar41;
                    }
                    else {
                      dVar54 = local_900[1];
                      *local_8c8 = *local_900;
                      local_8c8[1] = dVar54;
                      local_8c8[2] = local_900[2];
                    }
                  }
                  dVar34 = __real_3ff0000000000000;
                  dVar56 = dVar33 * *local_8c8;
                  dVar53 = dVar33 * local_8c8[1];
                  dVar54 = dVar33 * local_8c8[2];
                  dVar28 = local_728 * dVar53 + local_748 * dVar56 + local_708 * dVar54 +
                           local_6e8 * local_810;
                  dVar41 = dStack_720 * dVar53 + dStack_740 * dVar56 + dStack_700 * dVar54 +
                           dStack_6e0 * local_810;
                  auVar11._4_8_ = dStack_6d0 * local_810;
                  auVar11._0_4_ = (int)((ulonglong)dVar28 >> 0x20);
                  auVar45._0_8_ = auVar11._0_8_ << 0x20;
                  auVar45._8_4_ = SUB84(dVar41,0);
                  auVar45._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                  dVar35 = dVar37 - (auVar45._8_8_ * dVar3 + dStack_8b8);
                  dVar41 = dVar36 - (dVar28 * dVar3 + local_8c0);
                  dVar28 = local_908 -
                           ((local_718 * dVar53 + local_738 * dVar56 + local_6f8 * dVar54 +
                            local_6d8 * local_810) * dVar3 + local_8b0);
                  dVar54 = dVar41 * dVar41 + dVar35 * dVar35 + dVar28 * dVar28;
                  if (__real_3e45798ee0000000 < dVar54) {
                    local_518 = __real_3ff0000000000000 / SQRT(dVar54);
                    dVar28 = dVar28 * local_518;
                    dVar35 = dVar35 * local_518;
                    dVar41 = dVar41 * local_518;
                  }
                  iVar18 = (this->Source).UpVectorStepSize;
                  _local_828 = local_918;
                  local_818 = local_908;
                  if (((iVar18 == 1) && (local_834 == 0)) || (iVar18 == 0)) {
                    dVar54 = dVar37 - (double)CONCAT44(uStack_694,local_698);
                    dVar53 = dVar36 - (double)CONCAT44(uStack_6b4,local_6b8);
                    local_7b0._s_0.X = (local_908 - local_6a8) * dVar35 - dVar54 * dVar28;
                    local_7b0._s_0.Y = dVar53 * dVar28 - (local_908 - local_6a8) * dVar41;
                    local_7b0._s_0.Z = dVar54 * dVar41 - dVar53 * dVar35;
                    bVar17 = UE::Math::TVector<double>::Normalize
                                       ((TVector<double> *)&local_7b0._s_0,__real_3e45798ee0000000);
                    if (bVar17) {
                      uVar69 = SUB84(local_7b0._s_0.Z,0);
                      uVar70 = (undefined4)((ulonglong)local_7b0._16_8_ >> 0x20);
                    }
                    else {
                      pTVar21 = UE::Math::TMatrix<double>::GetScaledAxis(&local_598,&local_120,Y);
                      local_7b0._s_0.X = (pTVar21->field0_0x0)._s_0.X;
                      local_7b0._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
                      local_7b0._s_0.Z = *(double *)((longlong)&pTVar21->field0_0x0 + 0x10);
                      uVar69 = SUB84(local_7b0._s_0.Z,0);
                      uVar70 = (undefined4)((ulonglong)local_7b0._s_0.Z >> 0x20);
                    }
                  }
                  else {
                    uVar69 = SUB84(local_7f0,0);
                    uVar70 = (undefined4)((ulonglong)local_7f0 >> 0x20);
                    local_7b0._s_0.X = local_800;
                    local_7b0._s_0.Y = dStack_7f8;
                    local_7b0._16_8_ = local_7f0;
                  }
                  uVar16 = local_7b0._s_0.Y;
                  uVar14 = local_7b0._s_0.X;
                  local_800 = local_7b0._s_0.X;
                  dStack_7f8 = local_7b0._s_0.Y;
                  local_7f0 = local_7b0._s_0.Z;
                  if (local_920 == 0) {
                    local_750 = (double)CONCAT44(uVar70,uVar69);
                    local_760 = local_7b0._s_0.X;
                    dStack_758 = local_7b0._s_0.Y;
                  }
                  else {
                    __libm_sse2_sincos_();
                    local_798.X = dVar41 * extraout_XMM0_Qa_02;
                    local_798.Y = dVar35 * extraout_XMM0_Qa_02;
                    local_798.Z = dVar28 * extraout_XMM0_Qa_02;
                    local_448._s_0.Z = (double)CONCAT44(uVar70,uVar69);
                    local_448._s_0.X = (double)uVar14;
                    local_448._s_0.Y = (double)uVar16;
                    pTVar21 = UE::Math::TQuat<double>::RotateVector
                                        (&local_798,&local_108,(TVector<double> *)&local_448._s_0);
                    local_760 = (pTVar21->field0_0x0)._s_0.X;
                    dStack_758 = (pTVar21->field0_0x0)._s_0.Y;
                    local_750 = (pTVar21->field0_0x0)._s_0.Z;
                  }
                  local_950 = __real_3f800000;
                  if ((this->Source).TaperMethod != '\0') {
                    if ((pfVar30 == (float *)0x0) &&
                       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("TaperValues",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                            ,0xf9e,L""), bVar17)) {
                      pcVar5 = (code *)swi(3);
                      iVar18 = (*pcVar5)();
                      return iVar18;
                    }
                    local_950 = *pfVar30;
                  }
                  dVar41 = (double)local_950;
                  dVar54 = local_7d0 * dStack_758 * dVar41;
                  dVar28 = local_7d0 * local_750 * dVar41;
                  auVar65._0_8_ = local_7d0 * local_760 * dVar41;
                  auVar65._8_8_ = 0;
                  *pfVar25 = (float)(((double)local_828._0_8_ + auVar65._0_8_) - local_7c8);
                  pfVar25[1] = (float)((stack0xfffffffffffff7e0 + dVar54) - local_7c0);
                  pfVar25[2] = (float)((local_818 + dVar28) - local_7b8);
                  pfVar25[4] = (float)((double)local_828._0_8_ - local_7c8);
                  local_5d4 = (float)(local_818 - local_7b8);
                  pfVar25[5] = (float)(stack0xfffffffffffff7e0 - local_7c0);
                  pfVar25[6] = local_5d4;
                  pfVar25[7] = 0.0;
                  *(ulonglong *)(pfVar25 + 8) = CONCAT44(fVar32,fVar32);
                  pfVar25[0x10] = 0.0;
                  pfVar25[0x11] = 0.0;
                  pfVar25[10] = *(float *)(lVar26 + 0x3c);
                  uVar14 = *(undefined8 *)(lVar26 + 0x78);
                  *(undefined8 *)(pfVar25 + 0xc) = *(undefined8 *)(lVar26 + 0x70);
                  *(undefined8 *)(pfVar25 + 0xe) = uVar14;
                  pfVar25[0x14] = (float)(((double)local_828._0_8_ - auVar65._0_8_) - local_7c8);
                  pfVar25[0x15] = (float)((stack0xfffffffffffff7e0 - dVar54) - local_7c0);
                  pfVar25[0x16] = (float)((local_818 - dVar28) - local_7b8);
                  local_5dc = CONCAT44((float)(stack0xfffffffffffff7e0 - local_7c0),
                                       (float)((double)local_828._0_8_ - local_7c8));
                  *(undefined8 *)(pfVar25 + 0x18) = local_5dc;
                  pfVar25[0x1a] = local_5d4;
                  pfVar25[0x1b] = 0.0;
                  *(ulonglong *)(pfVar25 + 0x1c) = CONCAT44(fVar32,fVar32);
                  pfVar25[0x24] = 0.0;
                  pfVar25[0x25] = 1.0;
                  pfVar25[0x1e] = *(float *)(lVar26 + 0x3c);
                  local_958 = local_958 + 2;
                  uVar14 = *(undefined8 *)(lVar26 + 0x78);
                  local_944 = 0.0;
                  *(undefined8 *)(pfVar25 + 0x20) = *(undefined8 *)(lVar26 + 0x70);
                  *(undefined8 *)(pfVar25 + 0x22) = uVar14;
                  pfVar25 = pfVar25 + 0x28;
                  local_940 = fVar48;
                  local_650 = fVar32;
                  fStack_64c = fVar32;
                  local_648 = fVar32;
                  fStack_644 = fVar32;
                  if (0 < *(int *)(lVar26 + 0x98 + lVar29)) {
                    lVar22 = (longlong)local_8c8 - (longlong)local_900;
                    pdVar31 = local_900 + 5;
                    local_608 = lVar22;
                    do {
                      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                      dVar54 = *(double *)(lVar26 + 0x90 + lVar29);
                      pfVar20 = &(this->Source).NoiseLockTime;
                      local_8c0 = dVar54 * *(double *)(lVar26 + 0x78 + lVar29) +
                                  (double)local_778._0_8_;
                      dStack_8b8 = dVar54 * *(double *)(lVar26 + 0x80 + lVar29) +
                                   (double)local_778._8_8_;
                      local_8b0 = dVar54 * *(double *)(lVar26 + 0x88 + lVar29) + local_768;
                      dVar53 = local_918._0_8_;
                      dVar41 = local_918._8_8_;
                      dVar54 = dVar37;
                      dVar28 = dVar36;
                      if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                         ((this->Source).bSmoothNoise_Enabled != false)) {
                        dVar37 = *(double *)(lVar22 + -0x20 + (longlong)pdVar31);
                        dVar36 = *(double *)(lVar22 + -0x28 + (longlong)pdVar31);
                        local_868._s_0.Y = pdVar31[-4] - dVar37;
                        local_868._s_0.X = pdVar31[-5] - dVar36;
                        dVar56 = *(double *)(lVar22 + -0x18 + (longlong)pdVar31);
                        local_868._s_0.Z = pdVar31[-3] - dVar56;
                        dVar35 = local_868._s_0.X * local_868._s_0.X +
                                 local_868._s_0.Y * local_868._s_0.Y +
                                 local_868._s_0.Z * local_868._s_0.Z;
                        if (__real_3e45798ee0000000 < dVar35) {
                          local_510 = dVar34 / SQRT(dVar35);
                          local_868._s_0.X = local_868._s_0.X * local_510;
                          local_868._s_0.Y = local_868._s_0.Y * local_510;
                          local_868._s_0.Z = local_868._s_0.Z * local_510;
                        }
                        dVar34 = (double)*local_8f0;
                        fVar51 = (this->Source).NoiseLockRadius;
                        dVar36 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                 local_868._s_0.X * dVar34 + dVar36;
                        dVar56 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                 local_868._s_0.Z * dVar34 + dVar56;
                        dVar37 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                 local_868._s_0.Y * dVar34 + dVar37;
                        if (((fVar51 <= (float)((uint)(float)(dVar36 - pdVar31[-5]) &
                                               __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                            (fVar51 <= (float)((uint)(float)(dVar37 - pdVar31[-4]) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                           (fVar51 <= (float)((uint)(float)(dVar56 - pdVar31[-3]) &
                                             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                          *(double *)(lVar22 + -0x28 + (longlong)pdVar31) = dVar36;
                          *(double *)(lVar22 + -0x20 + (longlong)pdVar31) = dVar37;
                          *(double *)(lVar22 + -0x18 + (longlong)pdVar31) = dVar56;
                          dVar54 = dVar41;
                          dVar28 = dVar53;
                        }
                        else {
                          dVar37 = pdVar31[-4];
                          pdVar1 = (double *)(lVar22 + -0x28 + (longlong)pdVar31);
                          *pdVar1 = pdVar31[-5];
                          pdVar1[1] = dVar37;
                          *(double *)(lVar22 + -0x18 + (longlong)pdVar31) = pdVar31[-3];
                        }
                      }
                      dVar36 = dVar33 * *(double *)(lVar22 + -0x28 + (longlong)pdVar31);
                      dVar56 = dVar33 * *(double *)(lVar22 + -0x20 + (longlong)pdVar31);
                      dVar38 = dVar33 * *(double *)(lVar22 + -0x18 + (longlong)pdVar31);
                      dVar34 = *(double *)(lVar26 + 0x90 + lVar29);
                      dVar35 = (local_718 * dVar56 + local_738 * dVar36 + local_6f8 * dVar38 +
                               local_6d8 * local_810) * dVar3 + local_8b0;
                      dVar37 = (dStack_720 * dVar56 + dStack_740 * dVar36 + dStack_700 * dVar38 +
                               dStack_6e0 * local_810) * dVar3 + dStack_8b8;
                      dVar36 = (local_728 * dVar56 + local_748 * dVar36 + local_708 * dVar38 +
                               local_6e8 * local_810) * dVar3 + local_8c0;
                      local_2d0 = *(double *)(lVar26 + 0x88 + lVar29);
                      pdVar1 = (double *)(lVar26 + 0x78 + lVar29);
                      local_2e0 = *pdVar1;
                      dStack_2d8 = pdVar1[1];
                      local_6c8 = local_2d0 * dVar34 + local_8b0;
                      if ((iVar24 < 0) && ((int)local_944 + 1 == *(int *)(lVar26 + 0x98 + lVar29)))
                      {
                        if ((((this->Source).bTargetNoise != false) &&
                            (pfVar20 = &(this->Source).NoiseLockTime,
                            0.0 < *pfVar20 || *pfVar20 == 0.0)) &&
                           ((this->Source).bSmoothNoise_Enabled != false)) {
                          lVar23 = (longlong)(this->Source).Frequency;
                          dVar34 = local_900[lVar23 * 3];
                          dVar56 = local_900[lVar23 * 3 + 1];
                          dVar38 = local_900[lVar23 * 3 + 2];
                          dVar68 = local_8c8[lVar23 * 3];
                          dVar73 = local_8c8[lVar23 * 3 + 1];
                          local_868._s_0.X = dVar34 - dVar68;
                          dVar40 = local_8c8[lVar23 * 3 + 2];
                          local_868._s_0.Y = dVar56 - dVar73;
                          local_868._s_0.Z = dVar38 - dVar40;
                          UE::Math::TVector<double>::Normalize
                                    ((TVector<double> *)&local_868._s_0,__real_3e45798ee0000000);
                          fVar51 = (this->Source).NoiseLockRadius;
                          dVar55 = (double)*local_8f0;
                          dVar68 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                   local_868._s_0.X * dVar55 + dVar68;
                          dVar40 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                   local_868._s_0.Z * dVar55 + dVar40;
                          dVar73 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                   local_868._s_0.Y * dVar55 + dVar73;
                          if (((fVar51 <= (float)((uint)(float)(dVar68 - dVar34) & uVar15)) ||
                              (fVar51 <= (float)((uint)(float)(dVar73 - dVar56) & uVar15))) ||
                             (fVar51 <= (float)((uint)(float)(dVar40 - dVar38) & uVar15))) {
                            local_8c8[lVar23 * 3] = dVar68;
                            local_8c8[lVar23 * 3 + 1] = dVar73;
                            local_8c8[lVar23 * 3 + 2] = dVar40;
                            dVar54 = dVar41;
                            dVar28 = dVar53;
                          }
                          else {
                            dVar34 = (local_900 + lVar23 * 3)[1];
                            local_8c8[lVar23 * 3] = local_900[lVar23 * 3];
                            (local_8c8 + lVar23 * 3)[1] = dVar34;
                            local_8c8[lVar23 * 3 + 2] = local_900[lVar23 * 3 + 2];
                          }
                        }
                        pdVar1 = (double *)(lVar26 + 0x50 + lVar29);
                        dVar68 = *pdVar1;
                        dVar38 = pdVar1[1];
                        dVar56 = *(double *)(lVar26 + 0x60 + lVar29);
                        dVar55 = 0.0;
                        local_948 = *(float *)(lVar26 + 0x68 + lVar29);
                      }
                      else {
                        pfVar20 = &(this->Source).NoiseLockTime;
                        if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                           ((this->Source).bSmoothNoise_Enabled != false)) {
                          dVar56 = *(double *)(lVar22 + -8 + (longlong)pdVar31);
                          dVar38 = *(double *)(lVar22 + -0x10 + (longlong)pdVar31);
                          local_868._s_0.Y = pdVar31[-1] - dVar56;
                          local_868._s_0.X = pdVar31[-2] - dVar38;
                          local_868._s_0.Z = *pdVar31 - *(double *)(lVar22 + (longlong)pdVar31);
                          dVar68 = local_868._s_0.X * local_868._s_0.X +
                                   local_868._s_0.Y * local_868._s_0.Y +
                                   local_868._s_0.Z * local_868._s_0.Z;
                          if (__real_3e45798ee0000000 < dVar68) {
                            local_508 = __real_3ff0000000000000 / SQRT(dVar68);
                            local_868._s_0.X = local_508 * local_868._s_0.X;
                            local_868._s_0.Y = local_508 * local_868._s_0.Y;
                            local_868._s_0.Z = local_508 * local_868._s_0.Z;
                          }
                          dVar73 = (double)*local_8f0;
                          fVar51 = (this->Source).NoiseLockRadius;
                          dVar68 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                   local_868._s_0.Z * dVar73 +
                                   *(double *)(lVar22 + (longlong)pdVar31);
                          dVar56 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                   local_868._s_0.Y * dVar73 + dVar56;
                          dVar38 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                   local_868._s_0.X * dVar73 + dVar38;
                          if (((fVar51 <= (float)((uint)(float)(dVar38 - pdVar31[-2]) &
                                                 __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                              (fVar51 <= (float)((uint)(float)(dVar56 - pdVar31[-1]) &
                                                __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                             (fVar51 <= (float)((uint)(float)(dVar68 - *pdVar31) &
                                               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                            *(double *)(lVar22 + -0x10 + (longlong)pdVar31) = dVar38;
                            *(double *)(lVar22 + -8 + (longlong)pdVar31) = dVar56;
                            *(double *)(lVar22 + (longlong)pdVar31) = dVar68;
                            dVar54 = dVar41;
                            dVar28 = dVar53;
                          }
                          else {
                            dVar56 = pdVar31[-1];
                            pdVar1 = (double *)(lVar22 + -0x10 + (longlong)pdVar31);
                            *pdVar1 = pdVar31[-2];
                            pdVar1[1] = dVar56;
                            *(double *)(lVar22 + (longlong)pdVar31) = *pdVar31;
                          }
                        }
                        dVar40 = dVar33 * *(double *)(lVar22 + -0x10 + (longlong)pdVar31);
                        dVar73 = dVar33 * *(double *)(lVar22 + -8 + (longlong)pdVar31);
                        dVar56 = dVar33 * *(double *)(lVar22 + (longlong)pdVar31);
                        auVar46._8_4_ = SUB84(dVar40,0);
                        auVar46._0_8_ = dVar40;
                        auVar46._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                        auVar50._8_4_ = SUB84(dVar56,0);
                        auVar50._0_8_ = dVar56;
                        auVar50._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                        dVar55 = dVar73 * dStack_710 + dVar40 * dStack_730 + dVar56 * dStack_6f0 +
                                 dStack_6d0 * local_810;
                        dVar38 = (double)((__real_3f800000 - (this->Source).NoiseTension) *
                                         __real_3f000000);
                        dVar68 = (((dVar73 * local_728 + dVar40 * local_748 + dVar56 * local_708 +
                                   local_6e8 * local_810) * dVar3 + local_2e0 * dVar34 + local_8c0)
                                 - dVar28) * dVar38;
                        dVar56 = (((dVar73 * local_718 + dVar40 * local_738 + dVar56 * local_6f8 +
                                   local_6d8 * local_810) * dVar3 + local_6c8) - local_908) * dVar38
                        ;
                        dVar38 = (((dVar73 * dStack_720 + auVar46._8_8_ * dStack_740 +
                                    auVar50._8_8_ * dStack_700 + dStack_6e0 * local_810) * dVar3 +
                                  dStack_2d8 * dVar34 + dStack_8b8) - dVar54) * dVar38;
                      }
                      pfVar20 = local_808;
                      local_7e8._12_4_ = (undefined4)((ulonglong)dVar54 >> 0x20);
                      dVar34 = dVar38 * dVar38 + dVar68 * dVar68 + dVar56 * dVar56;
                      if (__real_3e45798ee0000000 < dVar34) {
                        local_500 = __real_3ff0000000000000 / SQRT(dVar34);
                        dVar68 = dVar68 * local_500;
                        dVar38 = dVar38 * local_500;
                        dVar56 = dVar56 * local_500;
                      }
                      auVar77._8_4_ = SUB84(dVar54,0);
                      auVar77._0_8_ = dVar28;
                      auVar77._12_4_ = local_7e8._12_4_;
                      local_7d8 = local_908;
                      dVar34 = (double)local_948;
                      local_7e8._8_4_ = SUB84(dVar54,0);
                      local_7e8._0_8_ = dVar28;
                      dVar68 = dVar68 * dVar34;
                      dVar38 = dVar38 * dVar34;
                      auVar66._0_8_ = dVar56 * dVar34;
                      auVar66._8_8_ = dVar55;
                      auVar65 = auVar66;
                      if (0 < local_660) {
                        pfVar30 = local_808 + (int)local_944 * iVar27;
                        local_8cc = 1;
                        local_830 = (double)local_660;
                        do {
                          fVar51 = (float)local_8cc * local_838;
                          fVar59 = fVar51 * fVar51;
                          fVar58 = (fVar51 + fVar51) * fVar59;
                          fVar52 = fVar59 * fVar51 - fVar59;
                          fVar57 = fVar59 * __real_40400000 - fVar58;
                          fVar51 = (fVar59 * fVar51 - (fVar51 + fVar51) * fVar51) + fVar51;
                          fVar58 = (fVar58 - fVar59 * __real_40400000) + __real_3f800000;
                          dVar34 = (double)fVar57 * dVar36 + (double)fVar52 * dVar68 +
                                   (double)fVar51 * local_880._s_0.X + (double)fVar58 * dVar28;
                          dVar56 = (double)fVar57 * dVar37 + (double)fVar52 * dVar38 +
                                   (double)fVar51 * local_880._s_0.Y + (double)fVar58 * dVar54;
                          uVar69 = (undefined4)((ulonglong)dVar56 >> 0x20);
                          local_408._8_4_ = SUB84(dVar56,0);
                          local_408._0_8_ = dVar34;
                          local_408._12_4_ = uVar69;
                          auVar7._8_4_ = SUB84(dVar56,0);
                          auVar7._0_8_ = dVar34;
                          auVar7._12_4_ = uVar69;
                          dVar28 = (double)fVar51 * local_880._s_0.Z + (double)fVar58 * local_908 +
                                   (double)fVar57 * dVar35 + (double)fVar52 * auVar66._0_8_;
                          dVar73 = auVar77._0_8_ - dVar34;
                          dVar40 = local_7d8 - dVar28;
                          dVar56 = auVar77._8_8_ - dVar56;
                          dVar54 = dVar73 * dVar73 + dVar56 * dVar56 + dVar40 * dVar40;
                          if (__real_3e45798ee0000000 < dVar54) {
                            local_4f0 = __real_3ff0000000000000 / SQRT(dVar54);
                            dVar73 = dVar73 * local_4f0;
                            dVar40 = dVar40 * local_4f0;
                            dVar56 = dVar56 * local_4f0;
                          }
                          dVar60 = local_800;
                          dVar54 = local_7f0;
                          dVar55 = dStack_7f8;
                          if ((this->Source).UpVectorStepSize == 0) {
                            dVar55 = auVar77._0_8_ - (double)CONCAT44(uStack_6b4,local_6b8);
                            dVar54 = auVar77._8_8_ - (double)CONCAT44(uStack_694,local_698);
                            dVar78 = dVar54 * dVar73 - dVar55 * dVar56;
                            dVar74 = dVar55 * dVar40 - (local_7d8 - local_6a8) * dVar73;
                            dVar71 = (local_7d8 - local_6a8) * dVar56 - dVar54 * dVar40;
                            dVar39 = dVar71 * dVar71 + dVar74 * dVar74 + dVar78 * dVar78;
                            dVar60 = local_598.M[1][0];
                            dVar54 = local_598.M[1][2];
                            dVar55 = local_598.M[1][1];
                            if (__real_3e45798ee0000000 < dVar39) {
                              local_4e8 = __real_3ff0000000000000 / SQRT(dVar39);
                              dVar60 = dVar71 * local_4e8;
                              dVar54 = dVar78 * local_4e8;
                              dVar55 = dVar74 * local_4e8;
                            }
                          }
                          _local_828 = auVar77;
                          local_818 = local_7d8;
                          local_3f8 = dVar28;
                          if (local_920 != 0) {
                            __libm_sse2_sincos_();
                            local_798.X = extraout_XMM0_Qa_03 * dVar73;
                            local_798.Y = extraout_XMM0_Qa_03 * dVar56;
                            local_798.Z = extraout_XMM0_Qa_03 * dVar40;
                            dVar73 = local_798.X * dVar55 - local_798.Y * dVar60;
                            dVar73 = dVar73 + dVar73;
                            dVar40 = local_798.Z * dVar60 - local_798.X * dVar54;
                            dVar56 = local_798.Y * dVar54 - local_798.Z * dVar55;
                            dVar40 = dVar40 + dVar40;
                            dVar56 = dVar56 + dVar56;
                            dVar60 = (dVar73 * local_798.Y - dVar40 * local_798.Z) +
                                     dVar56 * extraout_XMM0_Qb_01 + dVar60;
                            dVar54 = (dVar40 * local_798.X - dVar56 * local_798.Y) +
                                     dVar73 * extraout_XMM0_Qb_01 + dVar54;
                            dVar55 = (dVar56 * local_798.Z - dVar73 * local_798.X) +
                                     dVar40 * extraout_XMM0_Qb_01 + dVar55;
                          }
                          if ((this->Source).TaperMethod != '\0') {
                            if ((pfVar20 == (float *)0x0) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("TaperValues",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                                  ,0x103d,L""), bVar17)) {
                              pcVar5 = (code *)swi(3);
                              iVar18 = (*pcVar5)();
                              return iVar18;
                            }
                            local_950 = *pfVar30;
                          }
                          dVar73 = (double)local_950;
                          dVar56 = dVar55 * local_7d0 * dVar73;
                          dVar54 = dVar54 * local_7d0 * dVar73;
                          dVar73 = dVar60 * local_7d0 * dVar73;
                          *pfVar25 = (float)((dVar73 + dVar34) - local_7c8);
                          uStack_930 = auVar7._8_8_;
                          pfVar25[1] = (float)((dVar56 + uStack_930) - local_7c0);
                          pfVar25[2] = (float)((dVar54 + dVar28) - local_7b8);
                          pfVar25[4] = (float)(dVar34 - local_7c8);
                          local_5e0 = (float)(dVar28 - local_7b8);
                          pfVar25[5] = (float)(uStack_930 - local_7c0);
                          pfVar25[6] = local_5e0;
                          pfVar25[7] = 0.0;
                          *(ulonglong *)(pfVar25 + 8) = CONCAT44(fVar32,fVar32);
                          pfVar25[0x10] = local_940;
                          pfVar25[0x11] = 0.0;
                          pfVar25[10] = *(float *)(lVar26 + 0x3c);
                          uVar14 = *(undefined8 *)(lVar26 + 0x78);
                          *(undefined8 *)(pfVar25 + 0xc) = *(undefined8 *)(lVar26 + 0x70);
                          *(undefined8 *)(pfVar25 + 0xe) = uVar14;
                          pfVar25[0x14] = (float)((dVar34 - dVar73) - local_7c8);
                          pfVar25[0x15] = (float)((uStack_930 - dVar56) - local_7c0);
                          pfVar25[0x16] = (float)((dVar28 - dVar54) - local_7b8);
                          local_5e8 = CONCAT44((float)(uStack_930 - local_7c0),
                                               (float)(dVar34 - local_7c8));
                          *(undefined8 *)(pfVar25 + 0x18) = local_5e8;
                          pfVar25[0x1a] = local_5e0;
                          pfVar25[0x1b] = 0.0;
                          *(ulonglong *)(pfVar25 + 0x1c) = CONCAT44(fVar32,fVar32);
                          pfVar25[0x24] = local_940;
                          pfVar30 = pfVar30 + 1;
                          local_940 = local_940 + fVar48;
                          local_958 = local_958 + 2;
                          pfVar25[0x25] = 1.0;
                          pfVar25[0x1e] = *(float *)(lVar26 + 0x3c);
                          uVar14 = *(undefined8 *)(lVar26 + 0x78);
                          *(undefined8 *)(pfVar25 + 0x20) = *(undefined8 *)(lVar26 + 0x70);
                          *(undefined8 *)(pfVar25 + 0x22) = uVar14;
                          pfVar25 = pfVar25 + 0x28;
                          local_8cc = local_8cc + 1;
                          local_830 = (double)((longlong)local_830 + -1);
                          auVar77 = auVar7;
                          local_7e8 = auVar7;
                          local_7d8 = dVar28;
                          local_658 = fVar32;
                          fStack_654 = fVar32;
                          local_610 = fVar32;
                          fStack_60c = fVar32;
                          dVar54 = dVar41;
                          dVar28 = dVar53;
                        } while (local_830 != 0.0);
                        local_830 = 0.0;
                        lVar22 = local_608;
                        lVar29 = local_678;
                        auVar65 = ZEXT416((uint)local_940);
                      }
                      local_944 = (float)((int)local_944 + 1);
                      pdVar31 = pdVar31 + 3;
                      local_8e8._8_4_ = SUB84(dVar37,0);
                      uStack_8dc = (undefined4)((ulonglong)dVar37 >> 0x20);
                      local_778._8_8_ = dStack_8b8;
                      local_778._0_8_ = local_8c0;
                      local_918._8_4_ = local_8e8._8_4_;
                      local_918._0_8_ = dVar36;
                      local_918._12_4_ = uStack_8dc;
                      local_908 = dVar35;
                      local_880._s_0.X = dVar68;
                      local_880._s_0.Y = dVar38;
                      local_880._s_0.Z = auVar66._0_8_;
                      local_768 = local_8b0;
                      dVar34 = __real_3ff0000000000000;
                    } while ((int)local_944 < *(int *)(lVar26 + 0x98 + lVar29));
                  }
                  if (iVar24 < 0) {
                    pauVar2 = (undefined1 (*) [16])(lVar26 + 0x38 + lVar29);
                    dVar54 = *(double *)*pauVar2;
                    dVar28 = *(double *)(*pauVar2 + 8);
                    _local_8e8 = *pauVar2;
                    local_8d8 = *(double *)(lVar26 + 0x48 + lVar29);
                    if ((this->Source).bTargetNoise != false) {
                      pfVar20 = &(this->Source).NoiseLockTime;
                      if ((0.0 < *pfVar20 || *pfVar20 == 0.0) &&
                         ((this->Source).bSmoothNoise_Enabled != false)) {
                        lVar22 = (longlong)(this->Source).Frequency;
                        dVar41 = local_900[lVar22 * 3];
                        dVar34 = local_900[lVar22 * 3 + 1];
                        local_868._s_0.X = dVar41 - local_8c8[lVar22 * 3];
                        dVar53 = local_900[lVar22 * 3 + 2];
                        local_868._s_0.Y = dVar34 - local_8c8[lVar22 * 3 + 1];
                        local_868._s_0.Z = dVar53 - local_8c8[lVar22 * 3 + 2];
                        UE::Math::TVector<double>::Normalize
                                  ((TVector<double> *)&local_868._s_0,__real_3e45798ee0000000);
                        fVar51 = (this->Source).NoiseLockRadius;
                        dVar38 = (double)*local_8f0;
                        dVar35 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X *
                                 local_868._s_0.X * dVar38 + local_8c8[lVar22 * 3];
                        dVar56 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z *
                                 local_868._s_0.Z * dVar38 + local_8c8[lVar22 * 3 + 2];
                        dVar38 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y *
                                 local_868._s_0.Y * dVar38 + local_8c8[lVar22 * 3 + 1];
                        if ((fVar51 <= (float)((uint)(float)(dVar35 - dVar41) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                           ((fVar51 <= (float)((uint)(float)(dVar38 - dVar34) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff) ||
                            (fVar51 <= (float)((uint)(float)(dVar56 - dVar53) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
                          local_8c8[lVar22 * 3] = dVar35;
                          local_8c8[lVar22 * 3 + 1] = dVar38;
                          local_8c8[lVar22 * 3 + 2] = dVar56;
                          dVar37 = local_918._8_8_;
                          dVar36 = local_918._0_8_;
                        }
                        else {
                          dVar41 = (local_900 + lVar22 * 3)[1];
                          local_8c8[lVar22 * 3] = local_900[lVar22 * 3];
                          (local_8c8 + lVar22 * 3)[1] = dVar41;
                          local_8c8[lVar22 * 3 + 2] = local_900[lVar22 * 3 + 2];
                        }
                      }
                      lVar22 = (longlong)(this->Source).Frequency;
                      dVar53 = dVar33 * local_8c8[lVar22 * 3 + 1];
                      dVar34 = dVar33 * local_8c8[lVar22 * 3];
                      dVar41 = dVar33 * local_8c8[lVar22 * 3 + 2];
                      auVar65._8_8_ = local_810;
                      auVar65._0_8_ = local_810;
                      dVar54 = dVar54 + (local_728 * dVar53 + local_748 * dVar34 +
                                         local_708 * dVar41 + local_6e8 * local_810) * dVar3;
                      dVar28 = dVar28 + (dStack_720 * dVar53 + dStack_740 * dVar34 +
                                         dStack_700 * dVar41 + dStack_6e0 * local_810) * dVar3;
                      local_8d8 = local_8d8 +
                                  (local_718 * dVar53 + local_738 * dVar34 + local_6f8 * dVar41 +
                                  local_6d8 * local_810) * dVar3;
                      local_8e8._8_4_ = SUB84(dVar28,0);
                      local_8e8._0_8_ = dVar54;
                      uStack_8dc = (int)((ulonglong)dVar28 >> 0x20);
                    }
                    pfVar20 = local_808;
                    local_7e8._12_4_ = (undefined4)((ulonglong)dVar37 >> 0x20);
                    if ((this->Source).bUseTarget == false) {
                      dVar34 = *(double *)(lVar26 + 0x90 + lVar29);
                      dVar56 = (double)((__real_3f800000 - (this->Source).NoiseTension) *
                                       __real_3f000000);
                      auVar13._4_8_ = SUB168(ZEXT1216((undefined1  [12])0x0),4);
                      auVar13._0_4_ = (int)((ulonglong)dVar36 >> 0x20);
                      auVar47._0_8_ = auVar13._0_8_ << 0x20;
                      auVar47._8_4_ = SUB84(dVar37,0);
                      auVar47._12_4_ = local_7e8._12_4_;
                      dVar53 = ((dVar34 * *(double *)(lVar26 + 0x78 + lVar29) + local_8c0) - dVar36)
                               * dVar56;
                      dVar41 = ((dVar34 * *(double *)(lVar26 + 0x88 + lVar29) + local_8b0) -
                               local_908) * dVar56;
                      dVar56 = ((dVar34 * *(double *)(lVar26 + 0x80 + lVar29) + dStack_8b8) -
                               auVar47._8_8_) * dVar56;
                    }
                    else {
                      auVar45 = *(undefined1 (*) [16])(lVar26 + 0x50 + lVar29);
                      dVar53 = auVar45._0_8_;
                      dVar41 = *(double *)(lVar26 + 0x60 + lVar29);
                      auVar12._4_8_ = auVar65._8_8_;
                      auVar12._0_4_ = auVar45._4_4_;
                      auVar67._0_8_ = auVar12._0_8_ << 0x20;
                      auVar67._8_4_ = auVar45._8_4_;
                      auVar67._12_4_ = auVar45._12_4_;
                      dVar56 = auVar67._8_8_;
                    }
                    iVar18 = 0;
                    local_7e8._8_4_ = SUB84(dVar37,0);
                    local_7e8._0_8_ = dVar36;
                    local_7d8 = local_908;
                    dVar34 = dVar56 * dVar56 + dVar53 * dVar53 + dVar41 * dVar41;
                    if (__real_3e45798ee0000000 < dVar34) {
                      local_4e0 = __real_3ff0000000000000 / SQRT(dVar34);
                      dVar53 = dVar53 * local_4e0;
                      dVar56 = dVar56 * local_4e0;
                      dVar41 = dVar41 * local_4e0;
                    }
                    dVar38 = (double)local_948;
                    dVar35 = dVar36;
                    dVar34 = dVar37;
                    while( true ) {
                      local_828._8_4_ = SUB84(dVar34,0);
                      local_828._0_8_ = dVar36;
                      uStack_81c = (int)((ulonglong)dVar34 >> 0x20);
                      fVar58 = (float)(iVar18 + 1) * local_838;
                      fVar59 = fVar58 * fVar58;
                      fVar51 = (fVar58 + fVar58) * fVar59;
                      fVar52 = fVar58 * fVar59 - fVar59;
                      fVar57 = fVar59 * __real_40400000 - fVar51;
                      fVar51 = (fVar51 - fVar59 * __real_40400000) + __real_3f800000;
                      fVar58 = (fVar58 * fVar59 - fVar58 * (fVar58 + fVar58)) + fVar58;
                      dVar68 = (double)fVar57 * dVar54 + (double)fVar52 * dVar53 * dVar38 +
                               (double)fVar58 * local_880._s_0.X + (double)fVar51 * dVar35;
                      dVar73 = (double)fVar57 * dVar28 + (double)fVar52 * dVar56 * dVar38 +
                               (double)fVar58 * local_880._s_0.Y + (double)fVar51 * dVar37;
                      dVar40 = dVar36 - dVar68;
                      dVar37 = (double)fVar57 * local_8d8 + (double)fVar52 * dVar41 * dVar38 +
                               (double)fVar51 * local_908 + (double)fVar58 * local_880._s_0.Z;
                      dVar35 = local_7d8 - dVar37;
                      dVar28 = dVar34 - dVar73;
                      dVar54 = dVar40 * dVar40 + dVar28 * dVar28 + dVar35 * dVar35;
                      if (__real_3e45798ee0000000 < dVar54) {
                        local_4d8 = __real_3ff0000000000000 / SQRT(dVar54);
                        dVar28 = dVar28 * local_4d8;
                        dVar40 = dVar40 * local_4d8;
                        dVar35 = dVar35 * local_4d8;
                      }
                      dVar54 = local_800;
                      dVar55 = dStack_7f8;
                      dVar60 = local_7f0;
                      if ((this->Source).UpVectorStepSize == 0) {
                        dVar36 = dVar36 - (double)CONCAT44(uStack_6b4,local_6b8);
                        dVar34 = dVar34 - (double)CONCAT44(uStack_694,local_698);
                        dVar71 = dVar34 * dVar40 - dVar36 * dVar28;
                        dVar39 = dVar36 * dVar35 - (local_7d8 - local_6a8) * dVar40;
                        dVar34 = (local_7d8 - local_6a8) * dVar28 - dVar34 * dVar35;
                        dVar36 = dVar34 * dVar34 + dVar39 * dVar39 + dVar71 * dVar71;
                        dVar54 = local_598.M[1][0];
                        dVar55 = local_598.M[1][1];
                        dVar60 = local_598.M[1][2];
                        if (__real_3e45798ee0000000 < dVar36) {
                          local_4f8 = __real_3ff0000000000000 / SQRT(dVar36);
                          dVar54 = local_4f8 * dVar34;
                          dVar55 = local_4f8 * dVar39;
                          dVar60 = local_4f8 * dVar71;
                        }
                      }
                      local_818 = local_7d8;
                      local_420 = dVar68;
                      dStack_418 = dVar73;
                      local_410 = dVar37;
                      if (local_920 != 0) {
                        __libm_sse2_sincos_();
                        local_798.Y = extraout_XMM0_Qa_04 * dVar28;
                        local_798.X = extraout_XMM0_Qa_04 * dVar40;
                        local_798.Z = extraout_XMM0_Qa_04 * dVar35;
                        dVar28 = dVar55 * local_798.X - dVar54 * local_798.Y;
                        dVar28 = dVar28 + dVar28;
                        dVar34 = dVar54 * local_798.Z - dVar60 * local_798.X;
                        dVar36 = dVar60 * local_798.Y - dVar55 * local_798.Z;
                        dVar34 = dVar34 + dVar34;
                        dVar36 = dVar36 + dVar36;
                        dVar54 = (dVar28 * local_798.Y - dVar34 * local_798.Z) +
                                 dVar36 * extraout_XMM0_Qb_02 + dVar54;
                        dVar60 = (dVar34 * local_798.X - dVar36 * local_798.Y) +
                                 dVar28 * extraout_XMM0_Qb_02 + dVar60;
                        dVar55 = (dVar36 * local_798.Z - dVar28 * local_798.X) +
                                 dVar34 * extraout_XMM0_Qb_02 + dVar55;
                      }
                      if ((this->Source).TaperMethod != '\0') {
                        if ((pfVar20 == (float *)0x0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("TaperValues",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                                ,0x10b4,L""), bVar17)) {
                          pcVar5 = (code *)swi(3);
                          iVar18 = (*pcVar5)();
                          return iVar18;
                        }
                        local_950 = pfVar20[iVar27 * *(int *)(lVar26 + 0x98 + lVar29) + iVar18];
                      }
                      dVar36 = (double)local_950;
                      dVar28 = dVar55 * local_7d0 * dVar36;
                      dVar34 = dVar60 * local_7d0 * dVar36;
                      dVar36 = dVar54 * local_7d0 * dVar36;
                      *pfVar25 = (float)((dVar36 + dVar68) - local_7c8);
                      pfVar25[1] = (float)((dVar28 + dVar73) - local_7c0);
                      pfVar25[2] = (float)((dVar34 + dVar37) - local_7b8);
                      pfVar25[4] = (float)(dVar68 - local_7c8);
                      local_5ec = (float)(dVar37 - local_7b8);
                      pfVar25[5] = (float)(dVar73 - local_7c0);
                      pfVar25[6] = local_5ec;
                      pfVar25[7] = 0.0;
                      *(ulonglong *)(pfVar25 + 8) = CONCAT44(fVar32,fVar32);
                      pfVar25[0x10] = local_940;
                      pfVar25[0x11] = 0.0;
                      pfVar25[10] = *(float *)(lVar26 + 0x3c);
                      uVar14 = *(undefined8 *)(lVar26 + 0x78);
                      *(undefined8 *)(pfVar25 + 0xc) = *(undefined8 *)(lVar26 + 0x70);
                      *(undefined8 *)(pfVar25 + 0xe) = uVar14;
                      pfVar25[0x14] = (float)((dVar68 - dVar36) - local_7c8);
                      pfVar25[0x15] = (float)((dVar73 - dVar28) - local_7c0);
                      pfVar25[0x16] = (float)((dVar37 - dVar34) - local_7b8);
                      local_5f4 = CONCAT44((float)(dVar73 - local_7c0),(float)(dVar68 - local_7c8));
                      *(undefined8 *)(pfVar25 + 0x18) = local_5f4;
                      pfVar25[0x1a] = local_5ec;
                      pfVar25[0x1b] = 0.0;
                      *(ulonglong *)(pfVar25 + 0x1c) = CONCAT44(fVar32,fVar32);
                      pfVar25[0x24] = local_940;
                      pfVar25[0x25] = 1.0;
                      iVar18 = iVar18 + 1;
                      local_940 = local_940 + fVar48;
                      uStack_930._0_4_ = SUB84(dVar73,0);
                      uStack_930._4_4_ = (undefined4)((ulonglong)dVar73 >> 0x20);
                      local_958 = local_958 + 2;
                      pfVar25[0x1e] = *(float *)(lVar26 + 0x3c);
                      *(undefined1 (*) [16])(pfVar25 + 0x20) = *(undefined1 (*) [16])(lVar26 + 0x70)
                      ;
                      pfVar25 = pfVar25 + 0x28;
                      local_7e8._8_4_ = (undefined4)uStack_930;
                      local_7e8._0_8_ = dVar68;
                      local_7e8._12_4_ = uStack_930._4_4_;
                      local_7d8 = dVar37;
                      local_670 = fVar32;
                      fStack_66c = fVar32;
                      local_668 = fVar32;
                      fStack_664 = fVar32;
                      if (iVar27 <= iVar18) break;
                      dVar54 = (double)local_8e8._0_8_;
                      dVar28 = stack0xfffffffffffff720;
                      dVar37 = local_918._8_8_;
                      dVar36 = dVar68;
                      dVar35 = local_918._0_8_;
                      dVar34 = dVar73;
                    }
                  }
                  local_920 = local_920 + 1;
                  pfVar30 = local_808;
                } while (local_920 < (this->Source).Sheets);
                uVar69 = SUB84(__real_3e45798ee0000000,0);
                uVar70 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                fVar51 = __real_3f800000;
                iVar18 = local_958;
              }
            }
          }
        }
        local_834 = local_834 + 1;
      } while (local_834 < *(int *)((longlong)&(this->Source)._padding_ + 4));
    }
    if (((this->Source).VertexCount < iVar18) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("CheckVertexCount <= Source.VertexCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                            ,0x10e1,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      iVar18 = (*pcVar5)();
      return iVar18;
    }
    iVar18 = 0;
  }
  else {
    iVar18 = FillData_InterpolatedNoise(this,param_1);
  }
  if ((local_680 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_680 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_680 & 4) != 0) {
    FThreadStats::AddMessage(local_688,CycleScopeEnd);
  }
  return iVar18;
}

// FillIndexData @ 1481eb7c0

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
FDynamicBeam2EmitterData::FillIndexData
          (FDynamicBeam2EmitterData *this,FAsyncBufferFillData *param_1)

{
  int *piVar1;
  void **ppvVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_BeamFillIndexTime> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  FVar10 = StatPtr_STAT_BeamFillIndexTime;
  if (StatPtr_STAT_BeamFillIndexTime == (FThreadSafeStaticStat<FStat_STAT_BeamFillIndexTime>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_BeamFillIndexTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_BeamFillIndexTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamFillIndexTime,*pFVar9,
                        L"Beam FillIndex Time RT","STATGROUP_BeamParticles","STATCAT_Advanced",
                        L"Beam Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0xb61);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_1481eb917;
    }
  }
  bVar5 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_1481eb917:
  ppvVar2 = &param_1->IndexData;
  if ((param_1->IndexCount < 1) || (*ppvVar2 == (void *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.IndexCount > 0 && Data.IndexData != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                       ,0xb70,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
  }
  iVar8 = (this->Source).IndexStride;
  if (iVar8 == 2) {
    iVar8 = CreateDynamicBeam2EmitterIndices<unsigned_short>(*ppvVar2,&this->Source);
  }
  else {
    if (iVar8 != 4) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source.IndexStride == sizeof(uint32)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                         ,0xb7c,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
    }
    iVar8 = CreateDynamicBeam2EmitterIndices<unsigned_int>(*ppvVar2,&this->Source);
  }
  param_1->OutTriangleCount = iVar8;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return iVar8;
}

// FillVertexData_NoNoise @ 1481ee8c0

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
FDynamicBeam2EmitterData::FillVertexData_NoNoise
          (FDynamicBeam2EmitterData *this,FAsyncBufferFillData *param_1)

{
  double dVar1;
  double dVar2;
  FSceneView *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_BeamFillVertexTime> FVar28;
  longlong lVar29;
  longlong lVar30;
  float *pfVar31;
  float *pfVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  double *pdVar37;
  double *pdVar38;
  float *pfVar39;
  double *pdVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double extraout_XMM0_Qa;
  double dVar46;
  double dVar47;
  double dVar48;
  double extraout_XMM0_Qa_00;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar52 [16];
  double extraout_XMM0_Qb_00;
  double dVar53;
  undefined8 uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined8 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float fVar66;
  int local_res10;
  float local_res20;
  float local_2e8;
  int local_2e4;
  float local_2b8;
  int local_2b4;
  double local_2b0;
  undefined1 local_288 [16];
  FName local_278;
  FColor_u_0 local_260;
  float local_25c;
  float fStack_258;
  float local_254;
  float fStack_250;
  float local_24c;
  float fStack_248;
  float local_244;
  float fStack_240;
  float local_23c;
  float fStack_238;
  double local_230;
  float local_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  undefined1 local_218 [16];
  FName local_208;
  float local_200;
  float fStack_1fc;
  FName local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  FName local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  
  FVar28 = StatPtr_STAT_BeamFillVertexTime;
  if (StatPtr_STAT_BeamFillVertexTime == (FThreadSafeStaticStat<FStat_STAT_BeamFillVertexTime>)0x0)
  {
    pFVar27 = ::FName::FName(&local_118,"STAT_BeamFillVertexTime");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_BeamFillVertexTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamFillVertexTime,*pFVar27,
                        L"Beam FillVertex Time RT","STATGROUP_BeamParticles","STATCAT_Advanced",
                        L"Beam Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_278 = *(FName *)FVar28;
  bVar22 = false;
  bVar21 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  bVar24 = false;
  bVar23 = false;
  if ((local_278.ComparisonIndex.Value.Value != 0) || (local_278.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_260.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_260._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar22 = false;
      bVar21 = true;
      bVar24 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = local_278.ComparisonIndex.Value.Value;
        local_208.Number = local_278.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0xb86);
        bVar22 = true;
        bVar21 = true;
        bVar24 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_278,CycleScopeStart);
      bVar23 = true;
      goto LAB_1481eea38;
    }
  }
  bVar22 = bVar24;
  bVar21 = bVar23;
  bVar23 = false;
  local_278 = local_1f8;
LAB_1481eea38:
  fVar43 = __real_3f800000;
  dVar15 = __real_3e45798ee0000000;
  fVar66 = __real_38d1b717;
  dVar12 = __real_3ff0000000000000;
  pFVar3 = param_1->View;
  iVar26 = (this->Source).InterpolationPoints;
  pfVar31 = param_1->VertexData;
  iVar35 = *(int *)((longlong)&(this->Source)._padding_ + 4);
  local_188 = (pFVar3->ViewMatrices).InvViewMatrix.M[0][2];
  dStack_180 = (pFVar3->ViewMatrices).InvViewMatrix.M[0][3];
  local_198 = (pFVar3->ViewMatrices).InvViewMatrix.M[0][0];
  dStack_190 = (pFVar3->ViewMatrices).InvViewMatrix.M[0][1];
  local_168 = (pFVar3->ViewMatrices).InvViewMatrix.M[1][2];
  dStack_160 = (pFVar3->ViewMatrices).InvViewMatrix.M[1][3];
  local_148 = (pFVar3->ViewMatrices).InvViewMatrix.M[2][2];
  dStack_140 = (pFVar3->ViewMatrices).InvViewMatrix.M[2][3];
  local_128 = (pFVar3->ViewMatrices).InvViewMatrix.M[3][2];
  dStack_120 = (pFVar3->ViewMatrices).InvViewMatrix.M[3][3];
  local_178 = (pFVar3->ViewMatrices).InvViewMatrix.M[1][0];
  dStack_170 = (pFVar3->ViewMatrices).InvViewMatrix.M[1][1];
  local_158 = (pFVar3->ViewMatrices).InvViewMatrix.M[2][0];
  dStack_150 = (pFVar3->ViewMatrices).InvViewMatrix.M[2][1];
  local_138 = (pFVar3->ViewMatrices).InvViewMatrix.M[3][0];
  dStack_130 = (pFVar3->ViewMatrices).InvViewMatrix.M[3][1];
  iVar25 = 1;
  if (iVar26 != 0) {
    iVar25 = iVar26;
  }
  iVar36 = 0;
  iVar33 = 0;
  dVar5 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  local_res10 = 0;
  dVar6 = (double)*(float *)&(this->Source)._padding_ * __real_4140000000000000;
  dVar7 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  uVar59 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar60 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar61 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar62 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if (iVar25 < 2) {
    if (0 < iVar35) {
      uVar64 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar65 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      iVar33 = iVar36;
      do {
        pfVar32 = (float *)0x0;
        pdVar38 = (double *)
                  ((longlong)(iVar36 * (int)(this->Source)._padding_) + (this->Source)._padding_);
        lVar29 = (longlong)(this->Source).BeamDataOffset;
        if (*(int *)(lVar29 + 0xa0 + (longlong)pdVar38) != 0) {
          iVar26 = (this->Source).TaperValuesOffset;
          pfVar39 = pfVar32;
          if (iVar26 != -1) {
            pfVar39 = (float *)((longlong)pdVar38 + (longlong)iVar26);
          }
          local_218 = *(undefined1 (*) [16])(lVar29 + (longlong)pdVar38);
          dVar1 = pdVar38[5];
          dVar2 = *(double *)(lVar29 + 0x10 + (longlong)pdVar38);
          fVar41 = *(float *)(pdVar38 + 0xc) * *(float *)&(this->Source)._padding_;
          dVar13 = dVar2 - dVar1;
          dVar44 = (double)fVar41;
          local_1e8 = *(undefined1 (*) [16])(pdVar38 + 3);
          dVar17 = local_218._0_8_;
          dVar11 = dVar17 - local_1e8._0_8_;
          dVar55 = local_218._8_8_;
          dVar16 = dVar55 - local_1e8._8_8_;
          local_1d8._8_4_ = local_1e8._8_4_;
          local_1d8._0_8_ = local_1e8._8_8_;
          local_1d8._12_4_ = local_1e8._12_4_;
          dVar48 = dVar16 * dVar16 + dVar11 * dVar11 + dVar13 * dVar13;
          if (dVar15 < dVar48) {
            local_110 = dVar12 / SQRT(dVar48);
            dVar13 = dVar13 * local_110;
            dVar16 = dVar16 * local_110;
            dVar11 = dVar11 * local_110;
          }
          iVar26 = (this->Source).UpVectorStepSize;
          if (iVar26 == 1) {
            iVar26 = iVar36;
          }
          dVar48 = (double)CONCAT44(uVar65,uVar64);
          dVar49 = (double)CONCAT44(uVar62,uVar61);
          dVar57 = (double)CONCAT44(uVar60,uVar59);
          if (iVar26 == 0) {
            dVar10 = dVar16 * (dVar2 - local_128) - dVar13 * (dVar55 - dStack_130);
            dVar45 = dVar13 * (dVar17 - local_138) - dVar11 * (dVar2 - local_128);
            dVar47 = dVar11 * (dVar55 - dStack_130) - dVar16 * (dVar17 - local_138);
            dVar56 = dVar45 * dVar45 + dVar10 * dVar10 + dVar47 * dVar47;
            dVar48 = local_168;
            dVar49 = local_178;
            dVar57 = dStack_170;
            if (dVar15 < dVar56) {
              local_108 = dVar12 / SQRT(dVar56);
              dVar48 = local_108 * dVar47;
              dVar49 = local_108 * dVar10;
              dVar57 = local_108 * dVar45;
            }
          }
          fVar42 = (this->Source).TextureTileDistance;
          if (fVar42 <= fVar66) {
            fVar42 = (float)(this->Source).TextureTile;
            if (fVar42 <= fVar43) {
              fVar42 = fVar43;
            }
          }
          else {
            dVar10 = *(double *)(lVar29 + 0x40 + (longlong)pdVar38) -
                     *(double *)(lVar29 + 8 + (longlong)pdVar38);
            dVar45 = *(double *)(lVar29 + 0x48 + (longlong)pdVar38) -
                     *(double *)(lVar29 + 0x10 + (longlong)pdVar38);
            dVar56 = *(double *)(lVar29 + 0x38 + (longlong)pdVar38) -
                     *(double *)(lVar29 + (longlong)pdVar38);
            auVar50._0_8_ = dVar45 * dVar45;
            auVar50._8_8_ = 0;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = dVar10 * dVar10 + dVar56 * dVar56 + auVar50._0_8_;
            auVar51 = sqrtpd(auVar50,auVar8);
            fVar42 = (float)auVar51._0_8_ / fVar42;
          }
          fVar63 = *(float *)(lVar29 + 0x9c + (longlong)pdVar38);
          if (fVar66 < fVar63) {
            fVar42 = fVar63 * fVar42;
          }
          local_1a0 = dVar1;
          if (0 < (this->Source).Sheets) {
            uVar59 = local_218._0_4_;
            uVar60 = local_218._4_4_;
            do {
              dVar56 = dVar48;
              dVar10 = dVar49;
              dVar45 = dVar57;
              if ((int)pfVar32 != 0) {
                __libm_sse2_sincos_();
                dVar46 = dVar11 * extraout_XMM0_Qa;
                dVar45 = dVar13 * extraout_XMM0_Qa;
                dVar10 = dVar16 * extraout_XMM0_Qa;
                dVar47 = dVar10 * dVar48 - dVar45 * dVar57;
                dVar47 = dVar47 + dVar47;
                dVar14 = dVar45 * dVar49 - dVar46 * dVar48;
                dVar14 = dVar14 + dVar14;
                dVar53 = dVar46 * dVar57 - dVar10 * dVar49;
                dVar53 = dVar53 + dVar53;
                uVar59 = local_218._0_4_;
                uVar60 = local_218._4_4_;
                dVar56 = (dVar14 * dVar46 - dVar47 * dVar10) + dVar53 * extraout_XMM0_Qb + dVar48;
                dVar10 = (dVar53 * dVar10 - dVar14 * dVar45) + dVar47 * extraout_XMM0_Qb + dVar49;
                dVar45 = (dVar47 * dVar45 - dVar53 * dVar46) + dVar14 * extraout_XMM0_Qb + dVar57;
              }
              fVar63 = fVar43;
              if ((this->Source).TaperMethod != '\0') {
                if ((pfVar39 == (float *)0x0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TaperValues",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                        ,0xbfa,L""), bVar24)) {
                  pcVar4 = (code *)swi(3);
                  iVar26 = (*pcVar4)();
                  return iVar26;
                }
                fVar63 = *pfVar39;
              }
              dVar46 = (double)fVar63;
              dVar47 = dVar45 * dVar44 * dVar46;
              dVar53 = dVar46 * dVar10 * dVar44;
              dVar46 = dVar56 * dVar44 * dVar46;
              *pfVar31 = (float)(((double)CONCAT44(uVar60,uVar59) + dVar53) - dVar5);
              pfVar31[1] = (float)((dVar55 + dVar47) - dVar6);
              pfVar31[2] = (float)((dVar2 + dVar46) - dVar7);
              pfVar31[4] = (float)(dVar17 - dVar5);
              pfVar31[5] = (float)(dVar55 - dVar6);
              pfVar31[6] = (float)(dVar2 - dVar7);
              *(ulonglong *)(pfVar31 + 8) = CONCAT44(fVar41,fVar41);
              pfVar31[7] = 0.0;
              pfVar31[0x10] = 0.0;
              pfVar31[0x11] = 0.0;
              pfVar31[0x12] = 0.0;
              pfVar31[0x13] = 0.0;
              pfVar31[10] = *(float *)((longlong)pdVar38 + 0x3c);
              dVar14 = pdVar38[0xf];
              *(double *)(pfVar31 + 0xc) = pdVar38[0xe];
              *(double *)(pfVar31 + 0xe) = dVar14;
              pfVar31[0x14] = (float)(((double)CONCAT44(uVar60,uVar59) - dVar53) - dVar5);
              pfVar31[0x15] = (float)((dVar55 - dVar47) - dVar6);
              pfVar31[0x16] = (float)((dVar2 - dVar46) - dVar7);
              pfVar31[0x18] = (float)(dVar17 - dVar5);
              pfVar31[0x19] = (float)(dVar55 - dVar6);
              pfVar31[0x1a] = (float)(dVar2 - dVar7);
              pfVar31[0x1b] = 0.0;
              *(ulonglong *)(pfVar31 + 0x1c) = CONCAT44(fVar41,fVar41);
              pfVar31[0x24] = 0.0;
              pfVar31[0x25] = 1.0;
              pfVar31[0x26] = 0.0;
              pfVar31[0x27] = 1.0;
              pfVar31[0x1e] = *(float *)((longlong)pdVar38 + 0x3c);
              dVar47 = pdVar38[0xf];
              *(double *)(pfVar31 + 0x20) = pdVar38[0xe];
              *(double *)(pfVar31 + 0x22) = dVar47;
              local_25c = fVar41;
              fStack_258 = fVar41;
              local_200 = fVar41;
              fStack_1fc = fVar41;
              if ((this->Source).TaperMethod != '\0') {
                if ((pfVar39 == (float *)0x0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TaperValues",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                        ,0xc20,L""), bVar24)) {
                  pcVar4 = (code *)swi(3);
                  iVar26 = (*pcVar4)();
                  return iVar26;
                }
                fVar63 = pfVar39[1];
              }
              dVar47 = (double)fVar63;
              dVar46 = dVar45 * dVar44 * dVar47;
              dVar45 = dVar56 * dVar44 * dVar47;
              dVar47 = dVar47 * dVar10 * dVar44;
              pfVar31[0x28] = (float)(((double)local_1e8._0_8_ + dVar47) - dVar5);
              pfVar31[0x29] = (float)(((double)local_1d8._0_8_ + dVar46) - dVar6);
              pfVar31[0x2a] = (float)((dVar1 + dVar45) - dVar7);
              dVar56 = pdVar38[1];
              dVar10 = pdVar38[2];
              pfVar31[0x2c] = (float)(*pdVar38 - dVar5);
              pfVar31[0x2d] = (float)(dVar56 - dVar6);
              pfVar31[0x2e] = (float)(dVar10 - dVar7);
              *(ulonglong *)(pfVar31 + 0x30) = CONCAT44(fVar41,fVar41);
              pfVar31[0x38] = fVar42;
              pfVar31[0x2f] = 0.0;
              pfVar31[0x39] = 0.0;
              pfVar31[0x3a] = 1.0;
              pfVar31[0x3b] = 0.0;
              pfVar31[0x32] = *(float *)((longlong)pdVar38 + 0x3c);
              dVar56 = pdVar38[0xf];
              *(double *)(pfVar31 + 0x34) = pdVar38[0xe];
              *(double *)(pfVar31 + 0x36) = dVar56;
              pfVar31[0x3c] = (float)(((double)local_1e8._0_8_ - dVar47) - dVar5);
              pfVar31[0x3d] = (float)(((double)local_1d8._0_8_ - dVar46) - dVar6);
              pfVar31[0x3e] = (float)((dVar1 - dVar45) - dVar7);
              dVar56 = pdVar38[1];
              dVar10 = pdVar38[2];
              pfVar31[0x40] = (float)(*pdVar38 - dVar5);
              pfVar31[0x41] = (float)(dVar56 - dVar6);
              pfVar31[0x42] = (float)(dVar10 - dVar7);
              pfVar31[0x43] = 0.0;
              *(ulonglong *)(pfVar31 + 0x44) = CONCAT44(fVar41,fVar41);
              uVar34 = (int)pfVar32 + 1;
              pfVar32 = (float *)(ulonglong)uVar34;
              iVar33 = local_res10 + 4;
              pfVar31[0x4c] = fVar42;
              pfVar31[0x4d] = 1.0;
              pfVar31[0x4e] = 1.0;
              pfVar31[0x4f] = 1.0;
              pfVar31[0x46] = *(float *)((longlong)pdVar38 + 0x3c);
              *(undefined1 (*) [16])(pfVar31 + 0x48) = *(undefined1 (*) [16])(pdVar38 + 0xe);
              pfVar31 = pfVar31 + 0x50;
              local_res10 = iVar33;
              local_254 = fVar41;
              fStack_250 = fVar41;
              local_24c = fVar41;
              fStack_248 = fVar41;
            } while ((int)uVar34 < (this->Source).Sheets);
            uVar64 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar65 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar59 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar60 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar61 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar62 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          }
        }
        iVar36 = iVar36 + 1;
      } while (iVar36 < *(int *)((longlong)&(this->Source)._padding_ + 4));
    }
  }
  else {
    local_2b4 = 0;
    local_2b8 = __real_3f800000 / (float)iVar26;
    uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    fVar66 = __real_3f800000;
    fVar43 = __real_38d1b717;
    if (0 < iVar35) {
      do {
        dVar15 = (double)CONCAT44(uVar60,uVar59);
        dVar12 = (double)CONCAT44(uVar62,uVar61);
        pdVar38 = (double *)0x0;
        lVar30 = (longlong)(this->Source).BeamDataOffset;
        uVar18 = local_218._8_8_;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = local_218._8_8_;
        local_218 = auVar51 << 0x40;
        lVar29 = (longlong)(local_2b4 * (int)(this->Source)._padding_) + (this->Source)._padding_;
        pfVar32 = pfVar31;
        uVar58 = uVar54;
        iVar33 = iVar36;
        if (*(int *)(lVar30 + 0xa0 + lVar29) != 0) {
          iVar26 = (this->Source).InterpolatedPointsOffset;
          pdVar40 = pdVar38;
          if (iVar26 != -1) {
            pdVar40 = (double *)(lVar29 + iVar26);
            local_218._0_8_ = pdVar40;
            local_218 = CONCAT88(uVar18,local_218._0_8_);
          }
          iVar26 = (this->Source).TaperValuesOffset;
          if (iVar26 != -1) {
            pdVar38 = (double *)(lVar29 + iVar26);
          }
          fVar41 = (this->Source).TextureTileDistance;
          if (fVar43 < fVar41) {
            dVar2 = *(double *)(lVar30 + 0x40 + lVar29) - *(double *)(lVar30 + 8 + lVar29);
            dVar1 = *(double *)(lVar30 + 0x38 + lVar29) - *(double *)(lVar30 + lVar29);
            dVar48 = *(double *)(lVar30 + 0x48 + lVar29) - *(double *)(lVar30 + 0x10 + lVar29);
            auVar52._0_8_ = dVar48 * dVar48;
            auVar52._8_8_ = 0;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + auVar52._0_8_;
            auVar51 = sqrtpd(auVar52,auVar9);
            local_2b8 = (float)auVar51._0_8_ / ((float)(this->Source).InterpolationPoints * fVar41);
          }
          fVar41 = *(float *)(lVar29 + 0x60) * *(float *)&(this->Source)._padding_;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = local_1d8._8_8_;
          local_1d8 = auVar19 << 0x40;
          local_2b0 = 0.0;
          local_230 = 0.0;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = local_288._8_8_;
          local_288 = auVar20 << 0x40;
          local_res20 = 0.0;
          iVar26 = *(int *)(lVar30 + 0x98 + lVar29);
          local_1e8._0_8_ = (double)fVar41;
          if (pdVar40 == (double *)0x0) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("InterpolatedPoints",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                ,0xc8b,L"");
            if (bVar24) {
              pcVar4 = (code *)swi(3);
              iVar26 = (*pcVar4)();
              return iVar26;
            }
            uVar61 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar62 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar59 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar60 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            iVar33 = local_res10;
          }
          iVar35 = 0;
          fVar43 = __real_38d1b717;
          if (0 < (this->Source).Sheets) {
            do {
              auVar51 = *(undefined1 (*) [16])(lVar30 + lVar29);
              uVar59 = auVar51._0_4_;
              uVar60 = auVar51._4_4_;
              uVar61 = auVar51._8_4_;
              uVar62 = auVar51._12_4_;
              local_1a0 = pdVar40[2];
              dVar13 = auVar51._0_8_;
              dVar55 = dVar13 - *pdVar40;
              local_2e8 = 0.0;
              dVar1 = *(double *)(lVar30 + 0x10 + lVar29);
              uVar64 = SUB84(dVar1,0);
              uVar65 = (undefined4)((ulonglong)dVar1 >> 0x20);
              dVar11 = auVar51._8_8_;
              dVar2 = dVar11 - pdVar40[1];
              dVar17 = dVar1 - local_1a0;
              dVar48 = dVar2 * dVar2 + dVar55 * dVar55 + dVar17 * dVar17;
              if (__real_3e45798ee0000000 < dVar48) {
                local_100 = __real_3ff0000000000000 / SQRT(dVar48);
                dVar17 = dVar17 * local_100;
                dVar55 = local_100 * dVar55;
                dVar2 = local_100 * dVar2;
              }
              if ((this->Source).UpVectorStepSize == 0) {
                dVar44 = (dVar1 - local_128) * dVar2 - (dVar11 - dStack_130) * dVar17;
                dVar49 = (dVar13 - local_138) * dVar17 - (dVar1 - local_128) * dVar55;
                dVar16 = (dVar11 - dStack_130) * dVar55 - (dVar13 - local_138) * dVar2;
                dVar48 = dVar49 * dVar49 + dVar44 * dVar44 + dVar16 * dVar16;
                dVar12 = local_178;
                dVar15 = dStack_170;
                uVar54 = local_168;
                if (__real_3e45798ee0000000 < dVar48) {
                  local_f8 = __real_3ff0000000000000 / SQRT(dVar48);
                  dVar12 = dVar44 * local_f8;
                  dVar15 = dVar49 * local_f8;
                  uVar54 = dVar16 * local_f8;
                }
              }
              dVar48 = dVar12;
              dVar16 = dVar15;
              dVar44 = (double)uVar54;
              local_1b8 = dVar1;
              if (iVar35 != 0) {
                __libm_sse2_sincos_();
                local_2b0 = extraout_XMM0_Qa_00 * dVar2;
                local_288._8_8_ = extraout_XMM0_Qa_00;
                local_288._0_8_ = extraout_XMM0_Qb_00;
                local_230 = extraout_XMM0_Qa_00 * dVar17;
                dVar57 = extraout_XMM0_Qa_00 * dVar55;
                dVar49 = local_2b0 * (double)uVar54 - local_230 * dVar15;
                local_1d8._0_8_ = dVar57;
                dVar49 = dVar49 + dVar49;
                dVar56 = local_230 * dVar12 - dVar57 * (double)uVar54;
                dVar56 = dVar56 + dVar56;
                dVar44 = dVar57 * dVar15 - local_2b0 * dVar12;
                dVar44 = dVar44 + dVar44;
                dVar48 = (local_2b0 * dVar44 - local_230 * dVar56) +
                         extraout_XMM0_Qb_00 * dVar49 + dVar12;
                dVar16 = (local_230 * dVar49 - dVar57 * dVar44) +
                         extraout_XMM0_Qb_00 * dVar56 + dVar15;
                dVar44 = (dVar57 * dVar56 - local_2b0 * dVar49) +
                         extraout_XMM0_Qb_00 * dVar44 + (double)uVar54;
              }
              fVar43 = __real_3f800000;
              if ((this->Source).TaperMethod != '\0') {
                if ((pdVar38 == (double *)0x0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TaperValues",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                        ,0xcae,L""), bVar24)) {
                  pcVar4 = (code *)swi(3);
                  iVar26 = (*pcVar4)();
                  return iVar26;
                }
                fVar43 = *(float *)pdVar38;
              }
              dVar49 = (double)fVar43;
              dVar16 = dVar16 * (double)local_1e8._0_8_ * dVar49;
              dVar44 = dVar44 * (double)local_1e8._0_8_ * dVar49;
              dVar49 = dVar48 * (double)local_1e8._0_8_ * dVar49;
              *pfVar31 = (float)((dVar13 + dVar49) - dVar5);
              pfVar31[1] = (float)((dVar11 + dVar16) - dVar6);
              pfVar31[2] = (float)((dVar1 + dVar44) - dVar7);
              pfVar31[4] = (float)(dVar13 - dVar5);
              pfVar31[5] = (float)(dVar11 - dVar6);
              pfVar31[6] = (float)(dVar1 - dVar7);
              pfVar31[7] = 0.0;
              pfVar31[0x10] = 0.0;
              pfVar31[0x11] = 0.0;
              pfVar31[0x12] = 0.0;
              pfVar31[0x13] = 0.0;
              *(ulonglong *)(pfVar31 + 8) = CONCAT44(fVar41,fVar41);
              pfVar31[10] = *(float *)(lVar29 + 0x3c);
              uVar18 = *(undefined8 *)(lVar29 + 0x78);
              *(undefined8 *)(pfVar31 + 0xc) = *(undefined8 *)(lVar29 + 0x70);
              *(undefined8 *)(pfVar31 + 0xe) = uVar18;
              pfVar31[0x14] = (float)((dVar13 - dVar49) - dVar5);
              pfVar31[0x15] = (float)((dVar11 - dVar16) - dVar6);
              pfVar31[0x16] = (float)((dVar1 - dVar44) - dVar7);
              pfVar31[0x18] = (float)(dVar13 - dVar5);
              pfVar31[0x19] = (float)(dVar11 - dVar6);
              pfVar31[0x1a] = (float)(dVar1 - dVar7);
              pfVar31[0x1b] = 0.0;
              pfVar31[0x24] = 0.0;
              pfVar31[0x25] = 1.0;
              pfVar31[0x26] = 0.0;
              pfVar31[0x27] = 1.0;
              *(ulonglong *)(pfVar31 + 0x1c) = CONCAT44(fVar41,fVar41);
              pfVar31[0x1e] = *(float *)(lVar29 + 0x3c);
              uVar18 = *(undefined8 *)(lVar29 + 0x78);
              *(undefined8 *)(pfVar31 + 0x20) = *(undefined8 *)(lVar29 + 0x70);
              *(undefined8 *)(pfVar31 + 0x22) = uVar18;
              iVar33 = local_res10 + 2;
              local_2e4 = 0;
              pfVar32 = pfVar31 + 0x28;
              local_244 = fVar41;
              fStack_240 = fVar41;
              local_23c = fVar41;
              fStack_238 = fVar41;
              if (0 < *(int *)(lVar30 + 0x98 + lVar29)) {
                pfVar31 = pfVar31 + 0x2e;
                pdVar37 = pdVar38;
                while( true ) {
                  pdVar37 = (double *)((longlong)pdVar37 + 4);
                  local_res20 = local_res20 + fVar66 / (float)iVar26;
                  dVar48 = *pdVar40;
                  dVar11 = pdVar40[1];
                  dVar1 = pdVar40[2];
                  if ((this->Source).UpVectorStepSize == 0) {
                    dVar12 = (double)CONCAT44(uVar62,uVar61) - dStack_130;
                    dVar15 = (double)CONCAT44(uVar60,uVar59) - local_138;
                    dVar13 = (double)CONCAT44(uVar65,uVar64) - local_128;
                    dVar49 = dVar12 * dVar55 - dVar15 * dVar2;
                    dVar16 = dVar13 * dVar2 - dVar12 * dVar17;
                    dVar44 = dVar15 * dVar17 - dVar13 * dVar55;
                    dVar13 = dVar44 * dVar44 + dVar16 * dVar16 + dVar49 * dVar49;
                    uVar54 = local_168;
                    dVar12 = local_178;
                    dVar15 = dStack_170;
                    if (__real_3e45798ee0000000 < dVar13) {
                      local_f0 = __real_3ff0000000000000 / SQRT(dVar13);
                      uVar54 = local_f0 * dVar49;
                      dVar12 = local_f0 * dVar16;
                      dVar15 = local_f0 * dVar44;
                    }
                  }
                  dVar13 = dVar12;
                  dVar16 = dVar15;
                  dVar44 = (double)uVar54;
                  if (iVar35 != 0) {
                    dVar57 = (double)uVar54 * local_2b0 - dVar15 * local_230;
                    dVar57 = dVar57 + dVar57;
                    dVar49 = dVar12 * local_230 - (double)uVar54 * (double)local_1d8._0_8_;
                    dVar49 = dVar49 + dVar49;
                    dVar44 = dVar15 * (double)local_1d8._0_8_ - dVar12 * local_2b0;
                    dVar44 = dVar44 + dVar44;
                    dVar13 = (dVar44 * local_2b0 - dVar49 * local_230) +
                             dVar57 * (double)local_288._0_8_ + dVar12;
                    dVar16 = (dVar57 * local_230 - dVar44 * (double)local_1d8._0_8_) +
                             dVar49 * (double)local_288._0_8_ + dVar15;
                    dVar44 = (dVar49 * (double)local_1d8._0_8_ - dVar57 * local_2b0) +
                             dVar44 * (double)local_288._0_8_ + (double)uVar54;
                  }
                  local_1a0 = dVar1;
                  if ((this->Source).TaperMethod != '\0') {
                    if ((pdVar38 == (double *)0x0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("TaperValues",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                            ,0xcec,L""), bVar24)) {
                      pcVar4 = (code *)swi(3);
                      iVar26 = (*pcVar4)();
                      return iVar26;
                    }
                    fVar43 = *(float *)pdVar37;
                  }
                  dVar49 = (double)fVar43;
                  dVar13 = dVar13 * (double)local_1e8._0_8_ * dVar49;
                  dVar16 = dVar16 * (double)local_1e8._0_8_ * dVar49;
                  dVar49 = dVar44 * (double)local_1e8._0_8_ * dVar49;
                  *pfVar32 = (float)((dVar48 + dVar13) - dVar5);
                  pfVar31[-5] = (float)((dVar11 + dVar16) - dVar6);
                  pfVar31[-4] = (float)((local_1a0 + dVar49) - dVar7);
                  pfVar31[-2] = (float)(dVar48 - dVar5);
                  pfVar31[-1] = (float)(dVar11 - dVar6);
                  local_2e8 = local_2e8 + local_2b8;
                  *pfVar31 = (float)(local_1a0 - dVar7);
                  pfVar31[1] = 0.0;
                  pfVar31[10] = local_2e8;
                  pfVar31[0xc] = local_res20;
                  *(ulonglong *)(pfVar31 + 2) = CONCAT44(fVar41,fVar41);
                  pfVar31[0xb] = 0.0;
                  pfVar31[0xd] = 0.0;
                  pfVar31[4] = *(float *)(lVar29 + 0x3c);
                  uVar18 = *(undefined8 *)(lVar29 + 0x78);
                  *(undefined8 *)(pfVar31 + 6) = *(undefined8 *)(lVar29 + 0x70);
                  *(undefined8 *)(pfVar31 + 8) = uVar18;
                  pfVar31[0xe] = (float)((dVar48 - dVar13) - dVar5);
                  pfVar31[0xf] = (float)((dVar11 - dVar16) - dVar6);
                  pfVar31[0x10] = (float)((local_1a0 - dVar49) - dVar7);
                  pfVar31[0x12] = (float)(dVar48 - dVar5);
                  pfVar31[0x13] = (float)(dVar11 - dVar6);
                  pfVar31[0x14] = (float)(local_1a0 - dVar7);
                  pfVar31[0x15] = 0.0;
                  iVar33 = iVar33 + 2;
                  pfVar31[0x1e] = local_2e8;
                  local_2e4 = local_2e4 + 1;
                  pfVar32 = pfVar32 + 0x28;
                  pfVar31[0x20] = local_res20;
                  pfVar31[0x1f] = 1.0;
                  pdVar40 = pdVar40 + 3;
                  pfVar31[0x21] = 1.0;
                  *(ulonglong *)(pfVar31 + 0x16) = CONCAT44(fVar41,fVar41);
                  pfVar31[0x18] = *(float *)(lVar29 + 0x3c);
                  uVar18 = *(undefined8 *)(lVar29 + 0x78);
                  *(undefined8 *)(pfVar31 + 0x1a) = *(undefined8 *)(lVar29 + 0x70);
                  *(undefined8 *)(pfVar31 + 0x1c) = uVar18;
                  pfVar31 = pfVar31 + 0x28;
                  local_228 = fVar41;
                  fStack_224 = fVar41;
                  local_220 = fVar41;
                  fStack_21c = fVar41;
                  local_1c8 = dVar48;
                  dStack_1c0 = dVar11;
                  local_1b8 = dVar1;
                  if (*(int *)(lVar30 + 0x98 + lVar29) <= local_2e4) break;
                  uVar64 = SUB84(dVar1,0);
                  uVar65 = (undefined4)((ulonglong)dVar1 >> 0x20);
                  uVar61 = SUB84(dVar11,0);
                  uVar62 = (undefined4)((ulonglong)dVar11 >> 0x20);
                  uVar59 = SUB84(dVar48,0);
                  uVar60 = (undefined4)((ulonglong)dVar48 >> 0x20);
                }
                pdVar40 = (double *)local_218._0_8_;
              }
              iVar35 = iVar35 + 1;
              pfVar31 = pfVar32;
              local_res10 = iVar33;
            } while (iVar35 < (this->Source).Sheets);
            uVar59 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar60 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar61 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar62 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            fVar66 = __real_3f800000;
            fVar43 = __real_38d1b717;
          }
        }
        local_2b4 = local_2b4 + 1;
        pfVar31 = pfVar32;
        uVar54 = uVar58;
        iVar36 = iVar33;
      } while (local_2b4 < *(int *)((longlong)&(this->Source)._padding_ + 4));
    }
  }
  if (((this->Source).VertexCount < iVar33) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("PackedCount <= Source.VertexCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0xd1c,L""), bVar24)) {
    pcVar4 = (code *)swi(3);
    iVar26 = (*pcVar4)();
    return iVar26;
  }
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar23) {
    FThreadStats::AddMessage(local_278,CycleScopeEnd);
  }
  return 0;
}

// GetDynamicMeshElementsEmitter @ 1481f6ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicBeam2EmitterData::GetDynamicMeshElementsEmitter
          (FDynamicBeam2EmitterData *this,FParticleSystemSceneProxy *param_1,FSceneView *param_2,
          FSceneViewFamily *param_3,int param_4,FMeshElementCollector *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  Type TVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FParticleBeamTrailVertexFactory *this_00;
  bool bVar9;
  uint uVar10;
  ESceneDepthPriorityGroup EVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_BeamRenderingTime> FVar14;
  FThreadSafeStaticStat<FStat_STAT_BeamParticlesRenderCalls> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FRHICommandListBase *pFVar18;
  FGlobalDynamicVertexBuffer *pFVar19;
  FGlobalDynamicIndexBuffer *pFVar20;
  FDynamicBeamTrailCollectorResources *pFVar21;
  TUniformBufferRef<FParticleBeamTrailUniformParameters> TVar22;
  ForElementType<FMeshBatchElement> this_01;
  FRHIUniformBuffer *pFVar23;
  FColoredMaterialRenderProxy *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_BeamParticlesTrianglesRendered> FVar25;
  FPrimitiveDrawInterface *pFVar26;
  ForElementType<FMeshBatchElement> FVar27;
  undefined1 auStackY_2d8 [32];
  FColor_u_0 local_258;
  Type local_254;
  FName local_250;
  FParticleBeamTrailVertexFactory *local_248;
  FName local_240;
  FName local_230;
  FIndexBuffer *local_228;
  LARGE_INTEGER local_220;
  FStatMessage local_218;
  FStatMessage local_208;
  FGlobalDynamicVertexBufferAllocation local_1f8;
  FGlobalDynamicIndexBufferAllocation local_1e0;
  FName local_1c8;
  FName local_1c0;
  undefined1 local_1b8 [16];
  FGlobalDynamicVertexBufferAllocation local_1a8;
  FAsyncBufferFillData local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  FVar14 = StatPtr_STAT_BeamRenderingTime;
  if (StatPtr_STAT_BeamRenderingTime == (FThreadSafeStaticStat<FStat_STAT_BeamRenderingTime>)0x0) {
    pFVar13 = ::FName::FName(&local_1c8,"STAT_BeamRenderingTime");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_BeamRenderingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamRenderingTime,*pFVar13,
                        L"Beam Render Time RT","STATGROUP_Particles","STATCAT_Advanced",L"Particles"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  bVar7 = false;
  bVar6 = false;
  bVar8 = false;
  FVar4 = *(FName *)FVar14;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_258.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_258._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_250.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_250.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_250,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x8ac);
        bVar6 = true;
        bVar8 = true;
      }
    }
    bVar7 = false;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481f6f5d;
    local_240 = FVar4;
    FThreadStats::AddMessage(FVar4,CycleScopeStart);
    bVar7 = true;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar15 = StatPtr_STAT_BeamParticlesRenderCalls;
    if (StatPtr_STAT_BeamParticlesRenderCalls ==
        (FThreadSafeStaticStat<FStat_STAT_BeamParticlesRenderCalls>)0x0) {
      pFVar13 = ::FName::FName(&local_1c0,"STAT_BeamParticlesRenderCalls");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_BeamParticlesRenderCalls>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamParticlesRenderCalls,
                          *pFVar13,L"Beam Ptcl Render Calls","STATGROUP_BeamParticles",
                          "STATCAT_Advanced",L"Beam Particles",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar4 = *(FName *)FVar15;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_218.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_218.StatData.Pad[0] = '\x01';
      local_218.StatData.Pad[1] = '\0';
      local_218.StatData.Pad[2] = '\0';
      local_218.StatData.Pad[3] = '\0';
      local_218.StatData.Pad[4] = '\0';
      local_218.StatData.Pad[5] = '\0';
      local_218.StatData.Pad[6] = '\0';
      local_218.StatData.Pad[7] = '\0';
      local_230 = FVar4;
      local_218.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_218);
      FStatsTrace::Add(&local_230,1);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
LAB_1481f6f5d:
  if ((((this->_padding_ & 2) != 0) &&
      (((this->Source).VertexCount != 0 || ((this->Source).IndexCount != 0)))) &&
     (GFXCascadeBeamRenderingEnabled != false)) {
    pFVar18 = (FRHICommandListBase *)FMeshElementCollector::GetRHICommandList(param_5);
    local_1f8.Buffer = (uchar *)0x0;
    local_1f8.VertexBuffer = (FVertexBuffer *)0x0;
    local_1f8.VertexOffset = 0;
    local_1e0.FirstIndex = 0;
    local_1a8.VertexOffset = 0;
    local_1e0.Buffer = (uchar *)0x0;
    local_1e0.IndexBuffer = (FIndexBuffer *)0x0;
    local_1a8.Buffer = (uchar *)0x0;
    local_1a8.VertexBuffer = (FVertexBuffer *)0x0;
    memset(&local_188,0,0x140);
    pFVar19 = FMeshElementCollector::GetDynamicVertexBuffer(param_5);
    pFVar20 = FMeshElementCollector::GetDynamicIndexBuffer(param_5);
    FDynamicSpriteEmitterDataBase::BuildViewFillData
              ((FDynamicSpriteEmitterDataBase *)this,param_1,param_2,(this->Source).VertexCount,0x50
               ,0,pFVar20,pFVar19,&local_1f8,&local_1e0,&local_1a8,&local_188);
    (**(code **)(this->_padding_ + 0x68))(this);
    if (local_188.OutTriangleCount != 0) {
      if (*(char *)((longlong)&(this->Source)._padding_ + 4) == '\0') {
        FParticleSystemSceneProxy::UpdateWorldSpacePrimitiveUniformBuffer(param_1,pFVar18);
      }
      TVar3 = param_2->FeatureLevel;
      local_254 = TVar3;
      pFVar21 = FMeshElementCollector::
                AllocateOneFrameResource<FDynamicBeamTrailCollectorResources,enum_ERHIFeatureLevel::Type_&>
                          (param_5,&local_254);
      local_248 = &pFVar21->VertexFactory;
      *(undefined4 *)&(pFVar21->VertexFactory)._padding_ = 1;
      (pFVar21->VertexFactory).bUsesDynamicParameter = (bool)((byte)this->_padding_ & 1);
      (**(code **)(local_248->_padding_ + 0x18))(local_248,pFVar18);
      TVar22 = CreateBeamTrailUniformBuffer
                         ((FParticleSystemSceneProxy *)local_1b8,
                          (FDynamicSpriteEmitterReplayDataBase *)param_1,(FSceneView *)&this->Source
                         );
      this_00 = local_248;
      FParticleBeamTrailVertexFactory::SetBeamTrailUniformBuffer(local_248,TVar22);
      uVar10 = (**(code **)(this->_padding_ + 0x40))(this,TVar3);
      FParticleBeamTrailVertexFactory::SetVertexBuffer
                (this_00,local_1f8.VertexBuffer,local_1f8.VertexOffset,uVar10);
      FParticleBeamTrailVertexFactory::SetDynamicParameterBuffer(this_00,(FVertexBuffer *)0x0,0,0);
      uVar10 = local_1e0.FirstIndex;
      local_228 = local_1e0.IndexBuffer;
      this_00->IndexBuffer = local_1e0.IndexBuffer;
      this_00->FirstIndex = local_1e0.FirstIndex;
      this_00->OutTriangleCount = local_188.OutTriangleCount;
      this_01 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(param_5);
      if ((*(int *)((longlong)this_01 + 0xa0) < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar27 = this_01;
      if (*(ForElementType<FMeshBatchElement> *)((longlong)this_01 + 0x98) !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar27 = *(ForElementType<FMeshBatchElement> *)((longlong)this_01 + 0x98);
      }
      *(FIndexBuffer **)((longlong)FVar27 + 0x18) = local_228;
      *(uint *)((longlong)FVar27 + 0x58) = uVar10;
      *(FParticleBeamTrailVertexFactory **)((longlong)this_01 + 0xa8) = local_248;
      *(undefined8 *)((longlong)this_01 + 0xb8) = 0;
      if (*(char *)((longlong)&(this->Source)._padding_ + 4) == '\x01') {
        pFVar23 = *(FRHIUniformBuffer **)&param_1->field_0x258;
      }
      else {
        pFVar23 = FParticleSystemSceneProxy::GetWorldSpacePrimitiveUniformBuffer(param_1);
      }
      *(FRHIUniformBuffer **)FVar27 = pFVar23;
      *(undefined4 *)((longlong)FVar27 + 0x68) = 0;
      uVar10 = local_188.OutTriangleCount - 1;
      if ((local_188.OutTriangleCount & 1U) == 0) {
        uVar10 = local_188.OutTriangleCount;
      }
      *(uint *)((longlong)FVar27 + 0x5c) = uVar10;
      *(int *)((longlong)FVar27 + 0x6c) = (this->Source).VertexCount + -1;
      uVar10 = ((uint)(byte)param_1->field_0x78 ^ *(uint *)((longlong)this_01 + 0xd4)) & 1 ^
               *(uint *)((longlong)this_01 + 0xd4);
      *(uint *)((longlong)this_01 + 0xd4) = uVar10;
      *(uint *)((longlong)this_01 + 0xd4) =
           ((uint)(byte)param_1->field_0x298 * 2 ^ uVar10) & 4 ^ uVar10;
      EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_1,param_2);
      *(ESceneDepthPriorityGroup *)((longlong)this_01 + 0xd4) =
           (EVar11 << 10 ^ *(uint *)((longlong)this_01 + 0xd4)) & 0x1c00 ^
           *(uint *)((longlong)this_01 + 0xd4);
      bVar9 = AllowDebugViewmodes();
      if (((bVar9) && ((param_3->EngineShowFlags).Wireframe != 0)) &&
         ((param_3->EngineShowFlags).Materials == 0)) {
        pFVar24 = param_1->DeselectedWireframeMaterialInstance;
      }
      else {
        pFVar24 = (FColoredMaterialRenderProxy *)this->_padding_;
      }
      *(FColoredMaterialRenderProxy **)((longlong)this_01 + 0xb0) = pFVar24;
      *(uint *)((longlong)this_01 + 0xd4) = *(uint *)((longlong)this_01 + 0xd4) & 0xfffffcff;
      *(uint *)((longlong)this_01 + 0xd4) = *(uint *)((longlong)this_01 + 0xd4) | 0x2080;
      *(uint *)((longlong)this_01 + 0xd4) =
           -(uint)((param_1->field_0x79 & 6) != 0) & 0x4000 |
           *(uint *)((longlong)this_01 + 0xd4) & 0xffffbfff;
      *(char *)((longlong)this_01 + 0xd9) = (char)param_1->VisualizeLODIndex;
      FMeshElementCollector::AddMesh(param_5,param_4,(FMeshBatch *)this_01);
      iVar12 = FMeshBatch::GetNumPrimitives((FMeshBatch *)this_01);
      if ((iVar12 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar25 = StatPtr_STAT_BeamParticlesTrianglesRendered;
        if (StatPtr_STAT_BeamParticlesTrianglesRendered ==
            (FThreadSafeStaticStat<FStat_STAT_BeamParticlesTrianglesRendered>)0x0) {
          pFVar13 = ::FName::FName((FName *)(local_1b8 + 8),"STAT_BeamParticlesTrianglesRendered");
          FVar25 = (FThreadSafeStaticStat<FStat_STAT_BeamParticlesTrianglesRendered>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_BeamParticlesTrianglesRendered,*pFVar13,
                              L"Beam Ptcl Tris","STATGROUP_Particles","STATCAT_Advanced",
                              L"Particles",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FThreadStats::AddMessage<__int64>(*(FName *)FVar25,Add,(longlong)iVar12,false);
      }
      if ((this->Source).bRenderDirectLine == true) {
        pcVar5 = *(code **)(this->_padding_ + 0x70);
        pFVar26 = FMeshElementCollector::GetPDI(param_5,param_4);
        (*pcVar5)(this,param_1,pFVar26,param_2);
      }
      if (((this->Source).bRenderLines == true) || ((this->Source).bRenderTessellation == true)) {
        pcVar5 = *(code **)(this->_padding_ + 0x78);
        pFVar26 = FMeshElementCollector::GetPDI(param_5,param_4);
        (*pcVar5)(this,param_1,pFVar26,param_2);
      }
    }
    memset(&local_188,0,0x140);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar4 = local_240;
  if ((((bVar7) && (local_240 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_208.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
      local_208.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_220);
      local_208.StatData.Pad[4] = '\0';
      local_208.StatData.Pad[5] = '\0';
      local_208.StatData.Pad[6] = '\0';
      local_208.StatData.Pad[7] = '\0';
      local_208.StatData.Pad[0] = local_220.s.LowPart._0_1_;
      local_208.StatData.Pad[1] = local_220.s.LowPart._1_1_;
      local_208.StatData.Pad[2] = local_220.s.LowPart._2_1_;
      local_208.StatData.Pad[3] = local_220.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_208);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return;
}

// GetIndexAllocInfo @ 1481fad40

void __thiscall
FDynamicBeam2EmitterData::GetIndexAllocInfo
          (FDynamicBeam2EmitterData *this,int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = (this->Source).TrianglesPerSheet.ArrayNum;
  iVar4 = 0;
  uVar5 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar6) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = *(int *)((this->Source).TrianglesPerSheet.AllocatorInstance.Data + lVar7);
      if (0 < iVar6) {
        if (iVar4 == 0) {
          iVar4 = -2;
        }
        iVar4 = (iVar6 + 4) * (this->Source).Sheets + iVar4;
      }
      iVar6 = (this->Source).TrianglesPerSheet.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar5 < iVar6);
  }
  *param_1 = iVar4;
  *param_2 = (this->Source).IndexStride;
  return;
}

// Init @ 1482015f0

void __thiscall FDynamicBeam2EmitterData::Init(FDynamicBeam2EmitterData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)param_1;
  if (0x7ff < *(uint *)((longlong)&(this->Source)._padding_ + 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source.ActiveParticleCount < (MaxBeams)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                       ,0x856,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x2eff < (uint)(this->Source)._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source.ParticleStride < ((MaxInterpolationPoints + 2) * (sizeof(FVector3f) + sizeof(float))) + (MaxNoiseFrequency * (sizeof(FVector3f) + sizeof(FVector3f) + sizeof(float) + sizeof(float)))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                       ,0x85a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar3 = (**(code **)(*(longlong *)(this->Source)._padding_ + 0x310))();
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  this->_padding_ = lVar3;
  (this->Source)._padding_ = 0;
  return;
}

// RenderDebug @ 14820ffe0

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
FDynamicBeam2EmitterData::RenderDebug
          (FDynamicBeam2EmitterData *this,FParticleSystemSceneProxy *param_1,
          FPrimitiveDrawInterface *param_2,FSceneView *param_3,bool param_4)

{
  return;
}

// RenderDirectLine @ 148210e60

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
FDynamicBeam2EmitterData::RenderDirectLine
          (FDynamicBeam2EmitterData *this,FParticleSystemSceneProxy *param_1,
          FPrimitiveDrawInterface *param_2,FSceneView *param_3)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  ESceneDepthPriorityGroup EVar6;
  longlong lVar7;
  int iVar8;
  FLinearColor_u_0 local_b8;
  FLinearColor_u_0 local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  TVector<double>_u_0 local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  fVar5 = __real_41a00000;
  fVar4 = __real_3b808081;
  iVar8 = 0;
  if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
    do {
      lVar2 = (this->Source)._padding_;
      lVar7 = (longlong)(iVar8 * (int)(this->Source)._padding_) +
              (longlong)(this->Source).BeamDataOffset;
      if (*(int *)(lVar7 + 0xa0 + lVar2) != 0) {
        EVar6 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_1,param_3)
        ;
        local_88._s_0.Z = *(double *)(lVar7 + 0x10 + lVar2);
        local_b8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
        local_b8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
        local_b8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
        local_b8._s_0.A = (float)FColor::Green.field0_0x0._3_1_ * fVar4;
        local_88._s_0.X = *(double *)(lVar7 + lVar2);
        local_88._s_0.Y = ((double *)(lVar7 + lVar2))[1];
        DrawWireStar(param_2,(TVector<double> *)&local_88._s_0,fVar5,(FLinearColor *)&local_b8._s_0,
                     (uchar)EVar6);
        EVar6 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_1,param_3)
        ;
        local_88._s_0.Z = *(double *)(lVar7 + 0x48 + lVar2);
        local_a8._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
        local_a8._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
        local_a8._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
        local_a8._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar4;
        pdVar1 = (double *)(lVar7 + 0x38 + lVar2);
        local_88._s_0.X = *pdVar1;
        local_88._s_0.Y = pdVar1[1];
        DrawWireStar(param_2,(TVector<double> *)&local_88._s_0,fVar5,(FLinearColor *)&local_a8._s_0,
                     (uchar)EVar6);
        pcVar3 = *(code **)(param_2->_padding_ + 0x30);
        EVar6 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_1,param_3)
        ;
        local_98 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.R];
        local_94 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.G];
        local_90 = FLinearColor::sRGBToLinearTable[FColor::Yellow.field0_0x0._s_0.B];
        local_8c = (float)FColor::Yellow.field0_0x0._3_1_ * fVar4;
        pdVar1 = (double *)(lVar7 + 0x38 + lVar2);
        local_88._s_0.X = *pdVar1;
        local_88._s_0.Y = pdVar1[1];
        local_88._s_0.Z = *(double *)(lVar7 + 0x48 + lVar2);
        local_70 = *(undefined8 *)(lVar7 + lVar2);
        uStack_68 = ((undefined8 *)(lVar7 + lVar2))[1];
        local_60 = *(undefined8 *)(lVar7 + 0x10 + lVar2);
        (*pcVar3)(param_2,&local_70,&local_88,&local_98,(char)EVar6,0,0,0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((longlong)&(this->Source)._padding_ + 4));
  }
  return;
}

// RenderLines @ 148211110

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
FDynamicBeam2EmitterData::RenderLines
          (FDynamicBeam2EmitterData *this,FParticleSystemSceneProxy *param_1,
          FPrimitiveDrawInterface *param_2,FSceneView *param_3)

{
  float *pfVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  uint uVar10;
  FParticleSystemSceneProxy *pFVar11;
  undefined8 uVar12;
  bool bVar13;
  ESceneDepthPriorityGroup EVar14;
  FColor_u_0 FVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  double dVar23;
  ulonglong uVar24;
  double *pdVar25;
  int iVar26;
  double *pdVar27;
  int iVar28;
  longlong lVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  float fVar42;
  double dVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  float fVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  int local_498;
  float local_488;
  TVector<double>_u_0 local_480;
  int local_468;
  float local_464;
  float local_460;
  double *local_458;
  FParticleSystemSceneProxy *local_450;
  float *local_448;
  double local_440;
  undefined1 local_438 [12];
  undefined4 uStack_42c;
  double *local_428;
  int local_420;
  uint local_41c;
  float local_418;
  double local_410;
  double local_408;
  double *local_400;
  double local_3f8;
  double dStack_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0 [16];
  double *local_3d0;
  longlong local_3c8;
  FDynamicBeam2EmitterData *local_3c0;
  double local_3b8;
  TVector<double>_u_0 local_3b0;
  undefined1 local_398 [16];
  double local_388;
  FPrimitiveDrawInterface *local_380;
  TVector<double>_u_0 local_378;
  double *local_360;
  TVector<double>_u_0 local_358;
  FLinearColor_u_0 local_340;
  FLinearColor_u_0 local_330;
  FLinearColor_u_0 local_320;
  FLinearColor_u_0 local_310;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  FLinearColor_u_0 local_2f0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined8 uStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  undefined8 uStack_250;
  double *local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  longlong local_218;
  double *local_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double *local_1d8;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double *local_170;
  TMatrix<double> local_168 [2];
  
  fVar35 = __real_41700000;
  fVar50 = __real_3b808081;
  local_450 = param_1;
  local_3c0 = this;
  local_380 = param_2;
  if ((this->Source).bLowFreqNoise_Enabled != false) {
    UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)&param_1->field_0x110,local_168);
    iVar21 = (this->Source).NoiseTessellation;
    local_2d8 = *(double *)&param_1->field_0x110;
    dStack_2d0 = *(double *)&param_1->field_0x118;
    local_2c8 = *(double *)&param_1->field_0x120;
    uStack_2c0 = *(undefined8 *)&param_1->field_0x128;
    iVar28 = 1;
    if (iVar21 != 0) {
      iVar28 = iVar21;
    }
    local_2b8 = *(double *)&param_1->field_0x130;
    dStack_2b0 = *(double *)&param_1->field_0x138;
    local_298 = *(double *)&param_1->field_0x150;
    dStack_290 = *(double *)&param_1->field_0x158;
    local_2a8 = *(double *)&param_1->field_0x140;
    uStack_2a0 = *(undefined8 *)&param_1->field_0x148;
    local_278 = *(double *)&param_1->field_0x170;
    dStack_270 = *(double *)&param_1->field_0x178;
    local_288 = *(double *)&param_1->field_0x160;
    uStack_280 = *(undefined8 *)&param_1->field_0x168;
    local_268 = *(double *)&param_1->field_0x180;
    uStack_260 = *(undefined8 *)&param_1->field_0x188;
    local_498 = 0;
    local_418 = __real_3f800000 / (float)iVar28;
    dVar30 = __real_3e45798ee0000000;
    fVar42 = __real_3f800000;
    uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    local_468 = iVar28;
    if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
      do {
        dVar23 = (double)(longlong)(this->Source).BeamDataOffset;
        local_448 = (float *)0x0;
        local_360 = (double *)0x0;
        pfVar16 = (float *)0x0;
        lVar20 = (longlong)(local_498 * (int)(this->Source)._padding_) + (this->Source)._padding_;
        local_458 = (double *)0x0;
        fVar50 = __real_3b808081;
        local_3c8 = lVar20;
        local_258 = dVar23;
        if (*(int *)((longlong)dVar23 + 0xa0 + lVar20) != 0) {
          iVar21 = (this->Source).NoiseRateOffset;
          if (iVar21 != -1) {
            local_448 = (float *)(lVar20 + iVar21);
          }
          iVar21 = (this->Source).TargetNoisePointsOffset;
          if (iVar21 != -1) {
            local_360 = (double *)(lVar20 + iVar21);
          }
          pdVar25 = local_360;
          iVar21 = (this->Source).NextNoisePointsOffset;
          if (iVar21 != -1) {
            local_458 = (double *)(iVar21 + lVar20);
          }
          iVar21 = (this->Source).NoiseDistanceScaleOffset;
          if (iVar21 != -1) {
            pfVar16 = (float *)(lVar20 + iVar21);
          }
          local_488 = fVar42;
          if (pfVar16 != (float *)0x0) {
            local_488 = *pfVar16;
          }
          local_464 = (this->Source).NoiseRangeScale;
          if (local_360 != (double *)0x0) {
            if ((iVar28 < 1) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TessFactor > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                    ,0x9a6,L""), dVar30 = __real_3e45798ee0000000, bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pfVar16 = &(this->Source).NoiseTangentStrength;
            _local_438 = *(undefined1 (*) [16])((longlong)dVar23 + lVar20);
            local_428 = *(double **)((longlong)dVar23 + 0x10 + lVar20);
            if ((this->Source).bUseSource == false) {
              fVar50 = *pfVar16;
              local_3f8 = local_168[0].M[0][0];
              dStack_3f0 = local_168[0].M[0][1];
              local_3e8 = local_168[0].M[0][2];
            }
            else {
              pdVar2 = (double *)((longlong)dVar23 + 0x18 + lVar20);
              local_3f8 = *pdVar2;
              dStack_3f0 = pdVar2[1];
              local_3e8 = *(double *)((longlong)dVar23 + 0x28 + lVar20);
              fVar50 = *(float *)((longlong)dVar23 + 0x30 + lVar20);
            }
            UE::Math::TVector<double>::Normalize((TVector<double> *)&local_3f8,dVar30);
            pdVar27 = local_458;
            local_3e0 = *(undefined1 (*) [16])((longlong)dVar23 + lVar20);
            uVar52 = local_3e0._0_4_;
            uVar53 = local_3e0._4_4_;
            uVar54 = local_3e0._8_4_;
            uVar55 = local_3e0._12_4_;
            dVar30 = *(double *)((longlong)dVar23 + 0x90 + lVar20);
            local_41c = *(uint *)((longlong)dVar23 + 0x6c + lVar20) >> 0x1f;
            local_3d0 = *(double **)((longlong)dVar23 + 0x10 + lVar20);
            uVar56 = SUB84(local_3d0,0);
            uVar57 = (undefined4)((ulonglong)local_3d0 >> 0x20);
            pfVar1 = &(this->Source).NoiseLockTime;
            local_228 = *(double *)((longlong)dVar23 + 0x88 + lVar20);
            dVar40 = (double)fVar50;
            dStack_3f0 = dStack_3f0 * dVar40;
            local_3f8 = local_3f8 * dVar40;
            local_3e8 = (double)local_3e8 * dVar40;
            local_460 = *pfVar16;
            pdVar2 = (double *)((longlong)dVar23 + 0x78 + lVar20);
            local_410 = dVar30 * *pdVar2 + local_3e0._0_8_;
            local_408 = dVar30 * pdVar2[1] + local_3e0._8_8_;
            pdVar2 = (double *)(dVar30 * local_228 + (double)local_3d0);
            uVar58 = uVar52;
            uVar59 = uVar53;
            uVar60 = uVar54;
            uVar61 = uVar55;
            local_1d8 = local_3d0;
            if ((0.0 < *pfVar1 || *pfVar1 == 0.0) && ((this->Source).bSmoothNoise_Enabled != false))
            {
              local_440 = pdVar25[1];
              dVar30 = pdVar25[2];
              local_480._s_0.X = *local_458 - *pdVar25;
              local_480._s_0.Y = local_458[1] - local_440;
              local_480._s_0.Z = local_458[2] - dVar30;
              UE::Math::TVector<double>::Normalize
                        ((TVector<double> *)&local_480._s_0,__real_3e45798ee0000000);
              fVar50 = (this->Source).NoiseLockRadius;
              dVar40 = (double)*local_448;
              dVar45 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_480._s_0.Y *
                       dVar40;
              dVar41 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_480._s_0.X *
                       dVar40 + *pdVar25;
              dVar40 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_480._s_0.Z *
                       dVar40;
              if ((fVar50 <= (float)((uint)(float)(dVar41 - *pdVar27) & uVar19)) ||
                 ((fVar50 <= (float)((uint)(float)((dVar45 + local_440) - pdVar27[1]) & uVar19) ||
                  (fVar50 <= (float)((uint)(float)((dVar40 + dVar30) - pdVar27[2]) & uVar19))))) {
                *pdVar25 = dVar41;
                pdVar25[1] = local_440 + dVar45;
                pdVar25[2] = dVar30 + dVar40;
                uVar58 = local_3e0._0_4_;
                uVar59 = local_3e0._4_4_;
                uVar60 = local_3e0._8_4_;
                uVar61 = local_3e0._12_4_;
              }
              else {
                dVar30 = pdVar27[1];
                *pdVar25 = *pdVar27;
                pdVar25[1] = dVar30;
                pdVar25[2] = pdVar27[2];
              }
            }
            local_1f0 = (double)local_488;
            dVar41 = local_1f0 * *pdVar25;
            dVar30 = local_1f0 * pdVar25[1];
            dVar40 = local_1f0 * pdVar25[2];
            local_378._4_4_ = uVar59;
            local_378._0_4_ = uVar58;
            local_378._8_4_ = uVar60;
            local_378._12_4_ = uVar61;
            auVar31._8_4_ = SUB84(dVar41,0);
            auVar31._0_8_ = dVar41;
            auVar31._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            auVar36._8_4_ = SUB84(dVar40,0);
            auVar36._0_8_ = dVar40;
            auVar36._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            local_1f8 = (double)local_464;
            local_3b0._s_0.X =
                 (dVar30 * local_2b8 + dVar41 * local_2d8 + dVar40 * local_298 + local_278 * 0.0) *
                 local_1f8 + local_410;
            local_3b0._s_0.Y =
                 (dVar30 * dStack_2b0 + auVar31._8_8_ * dStack_2d0 + auVar36._8_8_ * dStack_290 +
                 dStack_270 * 0.0) * local_1f8 + local_408;
            local_428 = (double *)
                        ((dVar30 * local_2a8 + dVar41 * local_2c8 + dVar40 * local_288 +
                         local_268 * 0.0) * local_1f8 + (double)pdVar2);
            local_378._s_0.Z = (double)local_3d0;
            stack0xfffffffffffffbd0 = local_3b0._s_0.Y;
            local_438._0_8_ = local_3b0._s_0.X;
            local_3b0._s_0.Z = (double)local_428;
            EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                               ((FPrimitiveSceneProxy *)local_450,param_3);
            fVar50 = __real_3b808081;
            local_340._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
            local_340._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
            local_340._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
            local_340._s_0.A = (float)FColor::Green.field0_0x0._3_1_ * __real_3b808081;
            DrawWireStar(param_2,(TVector<double> *)&local_378._s_0,__real_41700000,
                         (FLinearColor *)&local_340._s_0,(uchar)EVar14);
            local_420 = 0;
            if (0 < *(int *)((longlong)dVar23 + 0x98 + lVar20)) {
              lVar29 = (longlong)pdVar25 - (longlong)local_458;
              pdVar27 = local_458 + 5;
              local_438._0_4_ = uVar58;
              local_438._4_4_ = uVar59;
              local_438._8_4_ = uVar60;
              uStack_42c = uVar61;
              local_218 = lVar29;
              do {
                uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                pfVar16 = &(this->Source).NoiseLockTime;
                dVar30 = *(double *)((longlong)dVar23 + 0x90 + lVar20);
                local_410 = dVar30 * *(double *)((longlong)dVar23 + 0x78 + lVar20) +
                            (double)CONCAT44(uVar53,uVar52);
                local_408 = dVar30 * *(double *)((longlong)dVar23 + 0x80 + lVar20) +
                            (double)CONCAT44(uVar55,uVar54);
                pdVar2 = (double *)
                         (dVar30 * *(double *)((longlong)dVar23 + 0x88 + lVar20) +
                         (double)CONCAT44(uVar57,uVar56));
                uVar52 = local_438._0_4_;
                uVar53 = local_438._4_4_;
                uVar54 = local_438._8_4_;
                uVar55 = uStack_42c;
                if ((0.0 < *pfVar16 || *pfVar16 == 0.0) &&
                   ((this->Source).bSmoothNoise_Enabled != false)) {
                  dVar30 = *(double *)((longlong)pdVar27 + lVar29 + -0x28);
                  dVar40 = *(double *)((longlong)pdVar27 + lVar29 + -0x20);
                  dVar46 = pdVar27[-5] - dVar30;
                  dVar49 = pdVar27[-4] - dVar40;
                  dVar41 = *(double *)((longlong)pdVar27 + lVar29 + -0x18);
                  dVar51 = pdVar27[-3] - dVar41;
                  dVar45 = dVar49 * dVar49 + dVar46 * dVar46 + dVar51 * dVar51;
                  if (__real_3e45798ee0000000 < dVar45) {
                    local_188 = __real_3ff0000000000000 / SQRT(dVar45);
                    dVar46 = dVar46 * local_188;
                    dVar49 = dVar49 * local_188;
                    dVar51 = dVar51 * local_188;
                  }
                  dVar45 = (double)*local_448;
                  fVar50 = (this->Source).NoiseLockRadius;
                  dVar43 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * dVar49 * dVar45;
                  dVar49 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * dVar51 * dVar45;
                  dVar30 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * dVar46 * dVar45 +
                           dVar30;
                  uVar19 = uVar10;
                  if (((fVar50 <= (float)((uint)(float)(dVar30 - pdVar27[-5]) &
                                         __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                      (fVar50 <= (float)((uint)(float)((dVar43 + dVar40) - pdVar27[-4]) &
                                        __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                     (fVar50 <= (float)((uint)(float)((dVar49 + dVar41) - pdVar27[-3]) &
                                       __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                    *(double *)((longlong)pdVar27 + lVar29 + -0x28) = dVar30;
                    *(double *)((longlong)pdVar27 + lVar29 + -0x20) = dVar43 + dVar40;
                    *(double *)((longlong)pdVar27 + lVar29 + -0x18) = dVar49 + dVar41;
                    uVar52 = local_3e0._0_4_;
                    uVar53 = local_3e0._4_4_;
                    uVar54 = local_3e0._8_4_;
                    uVar55 = local_3e0._12_4_;
                  }
                  else {
                    dVar30 = pdVar27[-4];
                    pdVar3 = (double *)((longlong)pdVar27 + lVar29 + -0x28);
                    *pdVar3 = pdVar27[-5];
                    pdVar3[1] = dVar30;
                    *(double *)((longlong)pdVar27 + lVar29 + -0x18) = pdVar27[-3];
                  }
                }
                dVar40 = local_1f0 * *(double *)((longlong)pdVar27 + lVar29 + -0x20);
                dVar41 = local_1f0 * *(double *)((longlong)pdVar27 + lVar29 + -0x18);
                dVar45 = local_1f0 * *(double *)((longlong)pdVar27 + lVar29 + -0x28);
                auVar32._8_4_ = SUB84(dVar45,0);
                auVar32._0_8_ = dVar45;
                auVar32._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                auVar37._8_4_ = SUB84(dVar41,0);
                auVar37._0_8_ = dVar41;
                auVar37._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                local_228 = *(double *)((longlong)dVar23 + 0x88 + lVar20);
                stack0xfffffffffffffbd0 =
                     (dVar40 * dStack_2b0 + auVar32._8_8_ * dStack_2d0 + auVar37._8_8_ * dStack_290
                     + dStack_270 * 0.0) * local_1f8 + local_408;
                local_438._0_8_ =
                     (dVar40 * local_2b8 + dVar45 * local_2d8 + dVar41 * local_298 + local_278 * 0.0
                     ) * local_1f8 + local_410;
                dVar30 = *(double *)((longlong)dVar23 + 0x90 + lVar20);
                local_428 = (double *)
                            (local_1f8 *
                             (dVar40 * local_2a8 + dVar45 * local_2c8 + dVar41 * local_288 +
                             local_268 * 0.0) + (double)pdVar2);
                pdVar3 = (double *)((longlong)dVar23 + 0x78 + lVar20);
                local_3b8 = dVar30 * local_228 + (double)pdVar2;
                local_440 = dVar30 * *pdVar3 + local_410;
                local_208 = dVar30 * pdVar3[1] + local_408;
                local_400 = pdVar27;
                local_210 = pdVar2;
                local_170 = pdVar2;
                if (((char)local_41c == '\0') ||
                   (local_420 + 1 != *(int *)((longlong)dVar23 + 0x98 + lVar20))) {
                  pfVar16 = &(this->Source).NoiseLockTime;
                  if ((0.0 < *pfVar16 || *pfVar16 == 0.0) &&
                     ((this->Source).bSmoothNoise_Enabled != false)) {
                    local_480._s_0.X = pdVar27[-2] - *(double *)((longlong)pdVar27 + lVar29 + -0x10)
                    ;
                    dVar30 = pdVar27[-1];
                    dVar40 = *(double *)((longlong)pdVar27 + lVar29 + -8);
                    dVar41 = *pdVar27;
                    local_480._s_0.Y = dVar30 - dVar40;
                    dVar45 = *(double *)((longlong)pdVar27 + lVar29);
                    local_480._s_0.Z = dVar41 - dVar45;
                    UE::Math::TVector<double>::Normalize
                              ((TVector<double> *)&local_480._s_0,__real_3e45798ee0000000);
                    fVar50 = (this->Source).NoiseLockRadius;
                    dVar43 = (double)*local_448;
                    dVar49 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_480._s_0.Y;
                    dVar51 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_480._s_0.X
                             * dVar43 + *(double *)((longlong)pdVar27 + lVar29 + -0x10);
                    dVar46 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_480._s_0.Z;
                    if (((fVar50 <= (float)((uint)(float)(dVar51 - pdVar27[-2]) &
                                           __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
                        (fVar50 <= (float)((uint)(float)((dVar49 * dVar43 + dVar40) - dVar30) &
                                          __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
                       (fVar50 <= (float)((uint)(float)((dVar46 * dVar43 + dVar45) - dVar41) &
                                         __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                      *(double *)((longlong)pdVar27 + lVar29 + -0x10) = dVar51;
                      *(double *)((longlong)pdVar27 + lVar29 + -8) = dVar49 * dVar43 + dVar40;
                      *(double *)((longlong)pdVar27 + lVar29) = dVar46 * dVar43 + dVar45;
                      uVar52 = local_3e0._0_4_;
                      uVar53 = local_3e0._4_4_;
                      uVar54 = local_3e0._8_4_;
                      uVar55 = local_3e0._12_4_;
                    }
                    else {
                      dVar30 = pdVar27[-1];
                      pdVar3 = (double *)((longlong)pdVar27 + lVar29 + -0x10);
                      *pdVar3 = pdVar27[-2];
                      pdVar3[1] = dVar30;
                      *(double *)((longlong)pdVar27 + lVar29) = *pdVar27;
                    }
                  }
                  dVar49 = (double)local_488 * *(double *)((longlong)pdVar27 + lVar29 + -0x10);
                  dVar41 = (double)local_488 * *(double *)((longlong)pdVar27 + lVar29 + -8);
                  dVar45 = (double)local_488 * *(double *)((longlong)pdVar27 + lVar29);
                  auVar47._8_4_ = SUB84(dVar41,0);
                  auVar47._0_8_ = dVar41;
                  auVar47._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                  auVar33._8_4_ = SUB84(dVar49,0);
                  auVar33._0_8_ = dVar49;
                  auVar33._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
                  auVar38._8_4_ = SUB84(dVar45,0);
                  auVar38._0_8_ = dVar45;
                  auVar38._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                  dVar46 = (double)((__real_3f800000 - (this->Source).NoiseTension) *
                                   __real_3f000000);
                  auVar8._4_4_ = uVar54;
                  auVar8._0_4_ = uVar53;
                  auVar8._8_4_ = uVar55;
                  dVar40 = (((double)local_464 *
                             (dVar41 * local_2b8 + dVar49 * local_2d8 + dVar45 * local_298 +
                             local_278 * 0.0) + local_440) - (double)CONCAT44(uVar53,uVar52)) *
                           dVar46;
                  dVar30 = (((double)local_464 *
                             (auVar47._8_8_ * dStack_2b0 + auVar33._8_8_ * dStack_2d0 +
                              auVar38._8_8_ * dStack_290 + dStack_270 * 0.0) + local_208) -
                           auVar8._4_8_) * dVar46;
                  local_3b8 = (((double)local_464 *
                                (dVar41 * local_2a8 + dVar49 * local_2c8 + dVar45 * local_288 +
                                local_268 * 0.0) + local_3b8) - (double)local_3d0) * dVar46;
                }
                else {
                  if ((((this->Source).bTargetNoise != false) &&
                      (pfVar16 = &(this->Source).NoiseLockTime, 0.0 < *pfVar16 || *pfVar16 == 0.0))
                     && ((this->Source).bSmoothNoise_Enabled != false)) {
                    lVar17 = (longlong)(this->Source).Frequency;
                    dVar30 = local_458[lVar17 * 3];
                    dVar40 = local_458[lVar17 * 3 + 1];
                    local_480._s_0.X = dVar30 - pdVar25[lVar17 * 3];
                    dVar41 = local_458[lVar17 * 3 + 2];
                    dVar45 = pdVar25[lVar17 * 3 + 1];
                    dVar46 = pdVar25[lVar17 * 3 + 2];
                    local_480._s_0.Y = dVar40 - dVar45;
                    local_480._s_0.Z = dVar41 - dVar46;
                    UE::Math::TVector<double>::Normalize
                              ((TVector<double> *)&local_480._s_0,__real_3e45798ee0000000);
                    fVar50 = (this->Source).NoiseLockRadius;
                    dVar49 = (double)*local_448;
                    dVar51 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_480._s_0.Y
                             * dVar49;
                    dVar43 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_480._s_0.X
                             * dVar49 + pdVar25[lVar17 * 3];
                    dVar49 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_480._s_0.Z
                             * dVar49;
                    lVar20 = local_3c8;
                    if (((fVar50 <= (float)((uint)(float)(dVar43 - dVar30) & uVar19)) ||
                        (fVar50 <= (float)((uint)(float)((dVar51 + dVar45) - dVar40) & uVar19))) ||
                       (fVar50 <= (float)((uint)(float)((dVar49 + dVar46) - dVar41) & uVar19))) {
                      pdVar25[lVar17 * 3] = dVar43;
                      pdVar25[lVar17 * 3 + 1] = dVar51 + dVar45;
                      pdVar25[lVar17 * 3 + 2] = dVar49 + dVar46;
                      uVar52 = local_3e0._0_4_;
                      uVar53 = local_3e0._4_4_;
                      uVar54 = local_3e0._8_4_;
                      uVar55 = local_3e0._12_4_;
                    }
                    else {
                      dVar30 = (local_458 + lVar17 * 3)[1];
                      pdVar25[lVar17 * 3] = local_458[lVar17 * 3];
                      (pdVar25 + lVar17 * 3)[1] = dVar30;
                      pdVar25[lVar17 * 3 + 2] = local_458[lVar17 * 3 + 2];
                    }
                  }
                  pdVar3 = (double *)((longlong)dVar23 + 0x50 + lVar20);
                  dVar40 = *pdVar3;
                  dVar30 = pdVar3[1];
                  local_3b8 = *(double *)((longlong)dVar23 + 0x60 + lVar20);
                  local_460 = *(float *)((longlong)dVar23 + 0x68 + lVar20);
                }
                pdVar3 = local_3d0;
                uVar12 = local_3e8;
                pFVar11 = local_450;
                iVar21 = local_468;
                dVar45 = (double)CONCAT44(uVar55,uVar54);
                dVar41 = (double)CONCAT44(uVar53,uVar52);
                dVar46 = dVar30 * dVar30 + dVar40 * dVar40 + local_3b8 * local_3b8;
                if (__real_3e45798ee0000000 < dVar46) {
                  local_1b8 = __real_3ff0000000000000 / SQRT(dVar46);
                  dVar40 = dVar40 * local_1b8;
                  dVar30 = dVar30 * local_1b8;
                  local_3b8 = local_3b8 * local_1b8;
                }
                dVar46 = (double)local_460;
                local_3b8 = local_3b8 * dVar46;
                dVar40 = dVar40 * dVar46;
                dVar30 = dVar30 * dVar46;
                uVar58 = (undefined4)((ulonglong)dVar30 >> 0x20);
                local_398._8_4_ = SUB84(dVar30,0);
                local_398._0_8_ = dVar40;
                local_398._12_4_ = uVar58;
                local_388 = local_3b8;
                if (0 < local_468) {
                  local_208 = (double)local_3e8;
                  uStack_200 = 0;
                  uStack_230 = 0;
                  local_248 = local_428;
                  uStack_240 = 0;
                  pdVar7 = local_3d0;
                  iVar28 = 0;
                  local_238 = local_3b8;
                  do {
                    local_440 = (double)CONCAT44(local_440._4_4_,iVar28 + 1);
                    local_378._8_4_ = SUB84(dVar45,0);
                    local_378._s_0.X = dVar41;
                    local_378._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                    fVar42 = (float)(iVar28 + 1) * local_418;
                    fVar44 = fVar42 * fVar42;
                    fVar50 = (fVar42 + fVar42) * fVar44;
                    fVar35 = fVar44 * fVar42 - fVar44;
                    fVar48 = fVar44 * __real_40400000 - fVar50;
                    fVar50 = (fVar50 - fVar44 * __real_40400000) + __real_3f800000;
                    fVar42 = (fVar44 * fVar42 - (fVar42 + fVar42) * fVar42) + fVar42;
                    dVar41 = (double)fVar48 * (double)local_438._0_8_ + (double)fVar35 * dVar40 +
                             (double)fVar42 * local_3f8 +
                             (double)fVar50 * (double)CONCAT44(uVar53,uVar52);
                    dVar45 = (double)fVar48 * stack0xfffffffffffffbd0 + (double)fVar35 * dVar30 +
                             (double)fVar42 * dStack_3f0 +
                             (double)fVar50 * (double)CONCAT44(uVar55,uVar54);
                    pdVar6 = (double *)
                             ((double)fVar42 * (double)uVar12 + (double)fVar50 * (double)pdVar3 +
                             (double)fVar48 * (double)local_248 + (double)fVar35 * local_238);
                    FVar15 = FColor::Blue.field0_0x0;
                    if (iVar28 == 0) {
LAB_148212144:
                      uVar18 = (ulonglong)FVar15.Bits;
                      uVar19 = FVar15.Bits >> 0x18;
                      uVar24 = (ulonglong)(FVar15.Bits >> 0x10);
                      uVar22 = (ulonglong)(FVar15.Bits >> 8);
                    }
                    else {
                      uVar19 = 0xff;
                      uVar22 = 0;
                      uVar24 = 0xff;
                      uVar18 = 0xff;
                      FVar15 = FColor::Yellow.field0_0x0;
                      if (iVar28 == iVar21 + -1) goto LAB_148212144;
                    }
                    local_3b0._s_0.X = dVar41;
                    local_3b0._s_0.Y = dVar45;
                    local_3b0._s_0.Z = (double)pdVar6;
                    local_378._s_0.Z = (double)pdVar7;
                    EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)pFVar11,param_3);
                    param_2 = local_380;
                    local_330._s_0.R = FLinearColor::sRGBToLinearTable[uVar24 & 0xff];
                    local_330._s_0.A = (float)uVar19 * __real_3b808081;
                    local_330._s_0.G = FLinearColor::sRGBToLinearTable[uVar22 & 0xff];
                    local_330._s_0.B = FLinearColor::sRGBToLinearTable[uVar18 & 0xff];
                    DrawWireStar(local_380,(TVector<double> *)&local_3b0._s_0,__real_41700000,
                                 (FLinearColor *)&local_330._s_0,(uchar)EVar14);
                    pcVar5 = *(code **)(param_2->_padding_ + 0x30);
                    EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)pFVar11,param_3);
                    local_1a8 = ___xmm_3f800000000000003f8000003f800000;
                    uStack_1a0 = _UNK_150a07f68;
                    (*pcVar5)(param_2,&local_378,&local_3b0,&local_1a8,(char)EVar14,0,0,0);
                    lVar20 = local_3c8;
                    pdVar25 = local_360;
                    dVar23 = local_258;
                    pdVar27 = local_400;
                    lVar29 = local_218;
                    this = local_3c0;
                    pdVar2 = local_210;
                    pdVar7 = pdVar6;
                    iVar28 = local_440._0_4_;
                  } while (local_440._0_4_ < iVar21);
                }
                pdVar27 = pdVar27 + 3;
                local_420 = local_420 + 1;
                local_1e8 = local_410;
                dStack_1e0 = local_408;
                local_1d8 = local_170;
                local_3d0 = local_428;
                local_3e0 = _local_438;
                unique0x10000a2e = SUB84(dVar30,0);
                local_3f8 = dVar40;
                unique0x10000a32 = uVar58;
                uVar58 = local_438._0_4_;
                uVar59 = local_438._4_4_;
                uVar60 = local_438._8_4_;
                uVar61 = uStack_42c;
                iVar28 = local_468;
                fVar50 = __real_3b808081;
                uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                local_400 = pdVar27;
                local_3e8 = local_3b8;
                if (*(int *)((longlong)dVar23 + 0x98 + lVar20) <= local_420) break;
                uVar56 = SUB84(local_170,0);
                uVar57 = (undefined4)((ulonglong)local_170 >> 0x20);
                uVar54 = SUB84(local_408,0);
                uVar55 = (undefined4)((ulonglong)local_408 >> 0x20);
                uVar52 = SUB84(local_410,0);
                uVar53 = (undefined4)((ulonglong)local_410 >> 0x20);
              } while( true );
            }
            dVar30 = __real_3e45798ee0000000;
            fVar35 = __real_41700000;
            fVar42 = __real_3f800000;
            if ((char)local_41c != '\0') {
              local_428 = *(double **)((longlong)dVar23 + 0x48 + lVar20);
              pauVar4 = (undefined1 (*) [16])((longlong)dVar23 + 0x38 + lVar20);
              dVar40 = *(double *)*pauVar4;
              dVar41 = *(double *)(*pauVar4 + 8);
              _local_438 = *pauVar4;
              local_400 = local_428;
              if ((this->Source).bTargetNoise != false) {
                pfVar16 = &(this->Source).NoiseLockTime;
                if ((0.0 < *pfVar16 || *pfVar16 == 0.0) &&
                   ((this->Source).bSmoothNoise_Enabled != false)) {
                  lVar29 = (longlong)(this->Source).Frequency;
                  dVar30 = pdVar25[lVar29 * 3 + 1];
                  dVar40 = pdVar25[lVar29 * 3 + 2];
                  dVar41 = local_458[lVar29 * 3];
                  dVar45 = local_458[lVar29 * 3 + 1];
                  local_480._s_0.X = dVar41 - pdVar25[lVar29 * 3];
                  dVar46 = local_458[lVar29 * 3 + 2];
                  local_480._s_0.Y = dVar45 - dVar30;
                  local_480._s_0.Z = dVar46 - dVar40;
                  UE::Math::TVector<double>::Normalize
                            ((TVector<double> *)&local_480._s_0,__real_3e45798ee0000000);
                  fVar50 = (this->Source).NoiseLockRadius;
                  dVar49 = (double)*local_448;
                  dVar43 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Y * local_480._s_0.Y *
                           dVar49;
                  dVar51 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.X * local_480._s_0.X *
                           dVar49 + pdVar25[lVar29 * 3];
                  dVar49 = (double)(this->Source).NoiseSpeed.field0_0x0._s_0.Z * local_480._s_0.Z *
                           dVar49;
                  if ((fVar50 <= (float)((uint)(float)(dVar51 - dVar41) & uVar19)) ||
                     ((fVar50 <= (float)((uint)(float)((dVar43 + dVar30) - dVar45) & uVar19) ||
                      (fVar50 <= (float)((uint)(float)((dVar49 + dVar40) - dVar46) & uVar19))))) {
                    pdVar25[lVar29 * 3] = dVar51;
                    pdVar25[lVar29 * 3 + 1] = dVar30 + dVar43;
                    pdVar25[lVar29 * 3 + 2] = dVar40 + dVar49;
                    uVar58 = local_3e0._0_4_;
                    uVar59 = local_3e0._4_4_;
                    uVar60 = local_3e0._8_4_;
                    uVar61 = local_3e0._12_4_;
                  }
                  else {
                    dVar30 = (local_458 + lVar29 * 3)[1];
                    pdVar25[lVar29 * 3] = local_458[lVar29 * 3];
                    (pdVar25 + lVar29 * 3)[1] = dVar30;
                    pdVar25[lVar29 * 3 + 2] = local_458[lVar29 * 3 + 2];
                  }
                }
                lVar29 = (longlong)(this->Source).Frequency;
                dVar46 = (double)local_488 * pdVar25[lVar29 * 3];
                dVar30 = (double)local_488 * pdVar25[lVar29 * 3 + 1];
                dVar45 = (double)local_488 * pdVar25[lVar29 * 3 + 2];
                auVar34._8_4_ = SUB84(dVar46,0);
                auVar34._0_8_ = dVar46;
                auVar34._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                auVar39._8_4_ = SUB84(dVar45,0);
                auVar39._0_8_ = dVar45;
                auVar39._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                dVar40 = (double)local_438._0_8_ +
                         (double)local_464 *
                         (dVar30 * local_2b8 + dVar46 * local_2d8 + dVar45 * local_298 +
                         local_278 * 0.0);
                dVar41 = stack0xfffffffffffffbd0 +
                         (double)local_464 *
                         (dVar30 * dStack_2b0 + auVar34._8_8_ * dStack_2d0 +
                          auVar39._8_8_ * dStack_290 + dStack_270 * 0.0);
                local_400 = (double *)
                            ((double)local_428 +
                            (double)local_464 *
                            (dVar30 * local_2a8 + dVar46 * local_2c8 + dVar45 * local_288 +
                            local_268 * 0.0));
                local_438._8_4_ = SUB84(dVar41,0);
                local_438._0_8_ = dVar40;
                uStack_42c = (int)((ulonglong)dVar41 >> 0x20);
              }
              pdVar25 = local_3d0;
              uVar12 = local_3e8;
              pFVar11 = local_450;
              dVar46 = (double)CONCAT44(uVar61,uVar60);
              dVar45 = (double)CONCAT44(uVar59,uVar58);
              if ((this->Source).bUseTarget == false) {
                dVar30 = *(double *)((longlong)dVar23 + 0x90 + lVar20);
                pdVar27 = (double *)((longlong)dVar23 + 0x78 + lVar20);
                local_480._s_0.Z = *(double *)((longlong)dVar23 + 0x88 + lVar20);
                dVar51 = (double)((__real_3f800000 - (this->Source).NoiseTension) * __real_3f000000)
                ;
                auVar9._4_4_ = uVar60;
                auVar9._0_4_ = uVar59;
                auVar9._8_4_ = uVar61;
                dVar49 = ((dVar30 * *pdVar27 + local_410) - (double)CONCAT44(uVar59,uVar58)) *
                         dVar51;
                local_388 = ((dVar30 * local_480._s_0.Z + (double)pdVar2) - (double)local_3d0) *
                            dVar51;
                dVar51 = ((dVar30 * pdVar27[1] + local_408) - auVar9._4_8_) * dVar51;
              }
              else {
                pdVar2 = (double *)((longlong)dVar23 + 0x50 + lVar20);
                dVar49 = *pdVar2;
                dVar51 = pdVar2[1];
                local_388 = *(double *)((longlong)dVar23 + 0x60 + lVar20);
              }
              dVar30 = dVar51 * dVar51 + dVar49 * dVar49 + local_388 * local_388;
              if (__real_3e45798ee0000000 < dVar30) {
                local_1b0 = __real_3ff0000000000000 / SQRT(dVar30);
                dVar49 = dVar49 * local_1b0;
                dVar51 = dVar51 * local_1b0;
                local_388 = local_388 * local_1b0;
              }
              dVar30 = (double)local_460;
              local_388 = local_388 * dVar30;
              local_398._8_8_ = dVar51 * dVar30;
              local_398._0_8_ = dVar49 * dVar30;
              dVar30 = __real_3e45798ee0000000;
              fVar35 = __real_41700000;
              fVar50 = __real_3b808081;
              fVar42 = __real_3f800000;
              local_428 = local_400;
              if (0 < iVar28) {
                local_238 = (double)local_3e8;
                uStack_230 = 0;
                uStack_250 = 0;
                local_248 = local_400;
                uStack_240 = 0;
                iVar21 = 0;
                pdVar2 = local_3d0;
                local_258 = local_388;
                do {
                  iVar26 = iVar21 + 1;
                  local_378._8_4_ = SUB84(dVar46,0);
                  local_378._s_0.X = dVar45;
                  local_378._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                  fVar35 = (float)iVar26 * local_418;
                  fVar42 = fVar35 * fVar35;
                  fVar48 = (fVar35 + fVar35) * fVar42;
                  fVar50 = fVar42 * fVar35 - fVar42;
                  fVar44 = fVar42 * __real_40400000 - fVar48;
                  fVar35 = (fVar42 * fVar35 - (fVar35 + fVar35) * fVar35) + fVar35;
                  fVar42 = (fVar48 - fVar42 * __real_40400000) + __real_3f800000;
                  dVar45 = (double)fVar44 * dVar40 + (double)fVar50 * (double)local_398._0_8_ +
                           (double)fVar35 * local_3f8 +
                           (double)fVar42 * (double)CONCAT44(uVar59,uVar58);
                  dVar46 = (double)fVar44 * dVar41 + (double)fVar50 * (double)local_398._8_8_ +
                           (double)fVar35 * dStack_3f0 +
                           (double)fVar42 * (double)CONCAT44(uVar61,uVar60);
                  pdVar27 = (double *)
                            ((double)fVar35 * (double)uVar12 + (double)fVar42 * (double)pdVar25 +
                            (double)fVar44 * (double)local_248 + (double)fVar50 * local_258);
                  FVar15 = FColor::White.field0_0x0;
                  if (iVar21 == 0) {
LAB_148212855:
                    uVar18 = (ulonglong)FVar15.Bits;
                    uVar19 = FVar15.Bits >> 0x18;
                    uVar24 = (ulonglong)(FVar15.Bits >> 0x10);
                    uVar22 = (ulonglong)(FVar15.Bits >> 8);
                  }
                  else {
                    uVar19 = 0xff;
                    uVar22 = 0;
                    uVar24 = 0xff;
                    uVar18 = 0xff;
                    FVar15 = FColor::Yellow.field0_0x0;
                    if (iVar21 == iVar28 + -1) goto LAB_148212855;
                  }
                  local_3b0._s_0.X = dVar45;
                  local_3b0._s_0.Y = dVar46;
                  local_3b0._s_0.Z = (double)pdVar27;
                  local_378._16_8_ = pdVar2;
                  EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)pFVar11,param_3);
                  param_2 = local_380;
                  fVar35 = __real_41700000;
                  local_2f0._s_0.R = FLinearColor::sRGBToLinearTable[uVar24 & 0xff];
                  local_2f0._s_0.A = (float)uVar19 * __real_3b808081;
                  local_2f0._s_0.G = FLinearColor::sRGBToLinearTable[uVar22 & 0xff];
                  local_2f0._s_0.B = FLinearColor::sRGBToLinearTable[uVar18 & 0xff];
                  DrawWireStar(local_380,(TVector<double> *)&local_3b0._s_0,__real_41700000,
                               (FLinearColor *)&local_2f0._s_0,(uchar)EVar14);
                  pcVar5 = *(code **)(param_2->_padding_ + 0x30);
                  EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)pFVar11,param_3);
                  local_198 = ___xmm_3f800000000000003f8000003f800000;
                  uStack_190 = _UNK_150a07f68;
                  (*pcVar5)(param_2,&local_378,&local_3b0,&local_198,(char)EVar14,0,0,0);
                  this = local_3c0;
                  dVar30 = __real_3e45798ee0000000;
                  iVar21 = iVar26;
                  pdVar2 = pdVar27;
                  fVar50 = __real_3b808081;
                  fVar42 = __real_3f800000;
                  uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                } while (iVar26 < iVar28);
              }
            }
          }
        }
        local_498 = local_498 + 1;
      } while (local_498 < *(int *)((longlong)&(this->Source)._padding_ + 4));
    }
  }
  if ((1 < (this->Source).InterpolationPoints) &&
     (local_498 = 0, 0 < *(int *)((longlong)&(this->Source)._padding_ + 4))) {
    do {
      pFVar11 = local_450;
      pdVar25 = (double *)0x0;
      lVar29 = (longlong)(this->Source).BeamDataOffset;
      lVar20 = (longlong)(local_498 * (int)(this->Source)._padding_) + (this->Source)._padding_;
      if (*(int *)(lVar20 + 0xa0 + lVar29) != 0) {
        iVar21 = (this->Source).InterpolatedPointsOffset;
        if (((iVar21 == -1) || (pdVar25 = (double *)(iVar21 + lVar20), pdVar25 == (double *)0x0)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InterpolatedPoints",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                                ,0xad1,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1d0._0_16_ = *(undefined1 (*) [16])(lVar20 + lVar29);
        local_1d0._s_0.Z = *(double *)(lVar20 + 0x10 + lVar29);
        local_358._s_0.X = *pdVar25;
        local_358._s_0.Y = pdVar25[1];
        local_358._s_0.Z = pdVar25[2];
        EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                           ((FPrimitiveSceneProxy *)pFVar11,param_3);
        local_320._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
        local_320._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
        local_320._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
        local_320._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar50;
        DrawWireStar(param_2,(TVector<double> *)&local_1d0._s_0,fVar35,
                     (FLinearColor *)&local_320._s_0,(uchar)EVar14);
        pFVar11 = local_450;
        iVar21 = 0;
        if (0 < *(int *)(lVar20 + 0x70 + lVar29)) {
          do {
            local_358._s_0.X = *pdVar25;
            local_358._s_0.Y = pdVar25[1];
            local_358._s_0.Z = pdVar25[2];
            EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                               ((FPrimitiveSceneProxy *)pFVar11,param_3);
            local_310._s_0.R = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
            local_310._s_0.G = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
            local_310._s_0.B = FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
            local_310._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar50;
            DrawWireStar(param_2,(TVector<double> *)&local_358._s_0,fVar35,
                         (FLinearColor *)&local_310._s_0,(uchar)EVar14);
            pcVar5 = *(code **)(param_2->_padding_ + 0x30);
            EVar14 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                               ((FPrimitiveSceneProxy *)pFVar11,param_3);
            local_300 = FLinearColor::sRGBToLinearTable
                        [(uint)FColor::Yellow.field0_0x0 >> 0x10 & 0xff];
            local_2fc = FLinearColor::sRGBToLinearTable[(uint)FColor::Yellow.field0_0x0 >> 8 & 0xff]
            ;
            local_2f8 = FLinearColor::sRGBToLinearTable[(uint)FColor::Yellow.field0_0x0 & 0xff];
            local_2f4 = (float)((uint)FColor::Yellow.field0_0x0 >> 0x18) * fVar50;
            (*pcVar5)(param_2,&local_1d0,&local_358,&local_300,(char)EVar14,0,0,0);
            local_1d0._8_8_ = local_358._s_0.Y;
            local_1d0._0_8_ = local_358._s_0.X;
            pdVar25 = pdVar25 + 3;
            iVar21 = iVar21 + 1;
            local_1d0._s_0.Z = local_358._s_0.Z;
            this = local_3c0;
          } while (iVar21 < *(int *)(lVar20 + 0x70 + lVar29));
        }
      }
      local_498 = local_498 + 1;
    } while (local_498 < *(int *)((longlong)&(this->Source)._padding_ + 4));
  }
  return;
}

