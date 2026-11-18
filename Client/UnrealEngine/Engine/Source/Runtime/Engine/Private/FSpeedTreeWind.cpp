// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// FSpeedTreeWind @ 148710c60

FSpeedTreeWind * __thiscall FSpeedTreeWind::FSpeedTreeWind(FSpeedTreeWind *this)

{
  SParams::SParams(&this->m_sParams);
  this->m_bGustingEnabled = true;
  this->m_fStrength = 0.0;
  this->m_fLastTime = -1.0;
  this->m_fGustAtStart = 1.0;
  this->m_fElapsedTime = 0.0;
  this->m_fGust = 0.0;
  this->m_fGustTarget = 0.0;
  this->m_fGustRiseTarget = 0.0;
  this->m_fGustFallTarget = 0.0;
  this->m_fGustStart = 0.0;
  this->m_fGustFallStart = 0.0;
  this->m_fStrengthTarget = 0.0;
  this->m_fStrengthChangeStartTime = 0.0;
  this->m_fStrengthChangeEndTime = 0.0;
  this->m_fStrengthAtStart = 0.0;
  this->m_fDirectionChangeStartTime = 0.0;
  this->m_fDirectionChangeEndTime = 0.0;
  this->m_fCombinedStrength = 0.0;
  this->m_afOscillationTimes[0] = 0.0;
  *(undefined8 *)(this->m_afBranchWindAnchor + 2) = 0;
  this->m_bNeedsReload = false;
  this->m_afOscillationTimes[1] = 0.0;
  this->m_afOscillationTimes[2] = 0.0;
  this->m_afOscillationTimes[3] = 0.0;
  this->m_afOscillationTimes[4] = 0.0;
  this->m_afOscillationTimes[5] = 0.0;
  this->m_afOscillationTimes[6] = 0.0;
  this->m_afOscillationTimes[7] = 0.0;
  this->m_afOscillationTimes[8] = 0.0;
  *(undefined8 *)(this->m_afOscillationTimes + 9) = 0;
  this->m_abOptions[4] = false;
  this->m_abOptions[5] = false;
  this->m_abOptions[6] = false;
  this->m_abOptions[7] = false;
  this->m_abOptions[8] = false;
  this->m_abOptions[9] = false;
  this->m_abOptions[10] = false;
  this->m_abOptions[0xb] = false;
  this->m_abOptions[0xc] = false;
  this->m_abOptions[0xd] = false;
  this->m_abOptions[0xe] = false;
  this->m_abOptions[0xf] = false;
  this->m_abOptions[0x10] = false;
  this->m_abOptions[0x11] = false;
  this->m_abOptions[0x12] = false;
  this->m_abOptions[0x13] = false;
  this->m_abOptions[0x14] = false;
  this->m_abOptions[0x15] = false;
  this->m_abOptions[0x16] = false;
  this->m_abOptions[0x17] = false;
  this->m_abOptions[0x18] = false;
  this->m_abOptions[0x19] = false;
  this->m_abOptions[0x1a] = false;
  this->m_abOptions[0x1b] = false;
  this->m_afDirection[0] = 1.0;
  this->m_afDirection[1] = 0.0;
  this->m_afDirectionMidTarget[0] = 1.0;
  this->m_afDirectionMidTarget[1] = 0.0;
  this->m_afDirectionAtStart[0] = 1.0;
  this->m_afDirectionAtStart[1] = 0.0;
  this->m_afDirectionTarget[0] = 1.0;
  this->m_afDirectionTarget[1] = 0.0;
  this->m_afDirection[2] = 0.0;
  this->m_afDirectionMidTarget[2] = 0.0;
  *(undefined8 *)(this->m_afDirectionAtStart + 2) = 0;
  this->m_afDirectionTarget[2] = 0.0;
  this->m_afBranchWindAnchor[0] = 0.0;
  this->m_afBranchWindAnchor[1] = 0.0;
  this->m_afRollingOffset[1] = 0.0;
  return this;
}

// Advance @ 148720af0

void __thiscall FSpeedTreeWind::Advance(FSpeedTreeWind *this,bool param_1,double param_2)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (this->m_fLastTime == __real_bff0000000000000) {
    dVar15 = 0.0;
  }
  else {
    dVar15 = param_2 - this->m_fLastTime;
  }
  this->m_fElapsedTime = dVar15;
  this->m_fLastTime = param_2;
  lVar10 = 2;
  pfVar4 = this->m_afShaderTable + 0x48;
  pfVar5 = this->m_afShaderTable;
  do {
    pfVar9 = pfVar5;
    pfVar7 = pfVar4;
    uVar2 = *(undefined8 *)(pfVar9 + 2);
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar9;
    *(undefined8 *)(pfVar7 + 2) = uVar2;
    uVar2 = *(undefined8 *)(pfVar9 + 6);
    *(undefined8 *)(pfVar7 + 4) = *(undefined8 *)(pfVar9 + 4);
    *(undefined8 *)(pfVar7 + 6) = uVar2;
    uVar2 = *(undefined8 *)(pfVar9 + 10);
    *(undefined8 *)(pfVar7 + 8) = *(undefined8 *)(pfVar9 + 8);
    *(undefined8 *)(pfVar7 + 10) = uVar2;
    uVar2 = *(undefined8 *)(pfVar9 + 0xe);
    *(undefined8 *)(pfVar7 + 0xc) = *(undefined8 *)(pfVar9 + 0xc);
    *(undefined8 *)(pfVar7 + 0xe) = uVar2;
    uVar2 = *(undefined8 *)(pfVar9 + 0x12);
    *(undefined8 *)(pfVar7 + 0x10) = *(undefined8 *)(pfVar9 + 0x10);
    *(undefined8 *)(pfVar7 + 0x12) = uVar2;
    uVar2 = *(undefined8 *)(pfVar9 + 0x16);
    *(undefined8 *)(pfVar7 + 0x14) = *(undefined8 *)(pfVar9 + 0x14);
    *(undefined8 *)(pfVar7 + 0x16) = uVar2;
    uVar2 = *(undefined8 *)(pfVar9 + 0x1a);
    *(undefined8 *)(pfVar7 + 0x18) = *(undefined8 *)(pfVar9 + 0x18);
    *(undefined8 *)(pfVar7 + 0x1a) = uVar2;
    uVar2 = *(undefined8 *)(pfVar9 + 0x1e);
    *(undefined8 *)(pfVar7 + 0x1c) = *(undefined8 *)(pfVar9 + 0x1c);
    *(undefined8 *)(pfVar7 + 0x1e) = uVar2;
    lVar10 = lVar10 + -1;
    pfVar4 = pfVar7 + 0x20;
    pfVar5 = pfVar9 + 0x20;
  } while (lVar10 != 0);
  uVar2 = *(undefined8 *)(pfVar9 + 0x22);
  *(undefined8 *)(pfVar7 + 0x20) = *(undefined8 *)(pfVar9 + 0x20);
  *(undefined8 *)(pfVar7 + 0x22) = uVar2;
  uVar2 = *(undefined8 *)(pfVar9 + 0x26);
  *(undefined8 *)(pfVar7 + 0x24) = *(undefined8 *)(pfVar9 + 0x24);
  *(undefined8 *)(pfVar7 + 0x26) = uVar2;
  if (param_1) {
    if (this->m_bGustingEnabled != false) {
      Gust(this,param_2);
    }
    fVar13 = __real_41400000;
    fVar21 = __real_40c00000;
    fVar23 = __real_3f800000;
    dVar3 = __real_3ff0000000000000;
    dVar15 = this->m_fDirectionChangeStartTime;
    fVar22 = __real_3f800000;
    if (this->m_fDirectionChangeEndTime != dVar15) {
      dVar15 = (param_2 - dVar15) / (this->m_fDirectionChangeEndTime - dVar15);
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      if (__real_3ff0000000000000 <= dVar15) {
        dVar15 = __real_3ff0000000000000;
      }
      fVar22 = (float)dVar15;
    }
    fVar12 = expf(__real_40c00000 - fVar22 * __real_41400000);
    fVar20 = this->m_afDirectionMidTarget[0];
    fVar19 = this->m_afDirectionMidTarget[1];
    fVar17 = this->m_afDirectionMidTarget[2];
    fVar12 = fVar23 / (fVar12 + fVar23);
    fVar16 = (fVar22 - fVar12) * __real_3f000000 + fVar12;
    if (__real_3f000000 <= fVar16) {
      fVar22 = (fVar16 + fVar16) - fVar23;
      fVar17 = (this->m_afDirectionTarget[2] - fVar17) * fVar22 + fVar17;
      fVar19 = (this->m_afDirectionTarget[1] - fVar19) * fVar22 + fVar19;
      fVar20 = (this->m_afDirectionTarget[0] - fVar20) * fVar22 + fVar20;
    }
    else {
      fVar12 = (fVar22 - fVar12) + fVar12 + fVar12;
      fVar17 = (fVar17 - this->m_afDirectionAtStart[2]) * fVar12 + this->m_afDirectionAtStart[2];
      fVar19 = (fVar19 - this->m_afDirectionAtStart[1]) * fVar12 + this->m_afDirectionAtStart[1];
      fVar20 = (fVar20 - this->m_afDirectionAtStart[0]) * fVar12 + this->m_afDirectionAtStart[0];
    }
    this->m_afDirection[0] = fVar20;
    this->m_afDirection[1] = fVar19;
    this->m_afDirection[2] = fVar17;
    Normalize(this,this->m_afDirection);
    dVar15 = this->m_fStrengthChangeStartTime;
    fVar22 = 0.0;
    if (this->m_fStrengthChangeEndTime == dVar15) {
      fVar20 = 0.0;
    }
    else {
      dVar15 = (param_2 - dVar15) / (this->m_fStrengthChangeEndTime - dVar15);
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      if (dVar3 <= dVar15) {
        dVar15 = dVar3;
      }
      fVar20 = (float)dVar15;
    }
    fVar19 = this->m_fStrengthAtStart;
    fVar17 = this->m_fStrengthTarget;
    fVar13 = expf(fVar21 - fVar20 * fVar13);
    fVar21 = (this->m_sParams).m_fRollingNoiseSpeed;
    dVar15 = this->m_fElapsedTime;
    fVar19 = (fVar17 - fVar19) / (fVar13 + fVar23) + fVar19;
    this->m_fStrength = fVar19;
    fVar19 = fVar19 + this->m_fGust;
    if (fVar23 <= fVar19) {
      fVar19 = fVar23;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    this->m_fCombinedStrength = fVar19;
    fVar13 = this->m_afDirection[0];
    fVar20 = this->m_afDirection[1];
    fVar17 = fVar19 * __real_41100000;
    iVar8 = (int)fVar17;
    iVar6 = iVar8 + 1;
    this->m_afRollingOffset[0] =
         (float)((double)(fVar19 * fVar13 * fVar21) * dVar15 + (double)this->m_afRollingOffset[0]);
    this->m_afRollingOffset[1] =
         (float)((double)(fVar19 * fVar20 * fVar21) * dVar15 + (double)this->m_afRollingOffset[1]);
    if (iVar6 < 10) {
      if (iVar8 < 0) {
        iVar8 = 0;
        fVar17 = 0.0;
        iVar6 = iVar8;
      }
      else {
        fVar17 = fVar17 - (float)iVar8;
      }
    }
    else {
      iVar8 = 9;
      fVar17 = 0.0;
      iVar6 = 9;
    }
    lVar11 = (longlong)iVar8;
    lVar10 = (longlong)iVar6;
    fVar18 = (float)((double)(((this->m_sParams).m_afFrequencies[0][lVar10] -
                              (this->m_sParams).m_afFrequencies[0][lVar11]) * fVar17 +
                             (this->m_sParams).m_afFrequencies[0][lVar11]) * dVar15 +
                    (double)this->m_afOscillationTimes[0]);
    this->m_afOscillationTimes[0] = fVar18;
    fVar24 = (float)((double)(((this->m_sParams).m_afFrequencies[1][lVar10] -
                              (this->m_sParams).m_afFrequencies[1][lVar11]) * fVar17 +
                             (this->m_sParams).m_afFrequencies[1][lVar11]) * dVar15 +
                    (double)this->m_afOscillationTimes[1]);
    this->m_afOscillationTimes[1] = fVar24;
    fVar25 = (float)((double)(((this->m_sParams).m_afFrequencies[2][lVar10] -
                              (this->m_sParams).m_afFrequencies[2][lVar11]) * fVar17 +
                             (this->m_sParams).m_afFrequencies[2][lVar11]) * dVar15 +
                    (double)this->m_afOscillationTimes[2]);
    this->m_afOscillationTimes[2] = fVar25;
    fVar21 = (this->m_sParams).m_afFrequencies[3][lVar11];
    fVar27 = (float)((double)(((this->m_sParams).m_afFrequencies[3][lVar10] - fVar21) * fVar17 +
                             fVar21) * dVar15 + (double)this->m_afOscillationTimes[3]);
    this->m_afOscillationTimes[3] = fVar27;
    fVar21 = (this->m_sParams).m_afFrequencies[4][lVar11];
    fVar28 = (float)((double)(((this->m_sParams).m_afFrequencies[4][lVar10] - fVar21) * fVar17 +
                             fVar21) * dVar15 + (double)this->m_afOscillationTimes[4]);
    this->m_afOscillationTimes[4] = fVar28;
    fVar21 = (this->m_sParams).m_afFrequencies[5][lVar11];
    fVar26 = (float)((double)(((this->m_sParams).m_afFrequencies[5][lVar10] - fVar21) * fVar17 +
                             fVar21) * dVar15 + (double)this->m_afOscillationTimes[5]);
    this->m_afOscillationTimes[5] = fVar26;
    fVar21 = (this->m_sParams).m_afFrequencies[6][lVar11];
    fVar16 = (float)((double)(((this->m_sParams).m_afFrequencies[6][lVar10] - fVar21) * fVar17 +
                             fVar21) * dVar15 + (double)this->m_afOscillationTimes[6]);
    this->m_afOscillationTimes[6] = fVar16;
    fVar21 = (this->m_sParams).m_afGlobalDistance[lVar11 + -0x20];
    fVar14 = (float)((double)(((this->m_sParams).m_afGlobalDistance[lVar10 + -0x20] - fVar21) *
                              fVar17 + fVar21) * dVar15 + (double)this->m_afOscillationTimes[7]);
    this->m_afOscillationTimes[7] = fVar14;
    fVar21 = (this->m_sParams).m_afGlobalDistance[lVar11 + -0x16];
    this->m_afOscillationTimes[8] =
         (float)((double)(((this->m_sParams).m_afGlobalDistance[lVar10 + -0x16] - fVar21) * fVar17 +
                         fVar21) * dVar15 + (double)this->m_afOscillationTimes[8]);
    fVar21 = (this->m_sParams).m_afGlobalDistance[lVar11 + -0xc];
    this->m_afOscillationTimes[9] =
         (float)((double)(((this->m_sParams).m_afGlobalDistance[lVar10 + -0xc] - fVar21) * fVar17 +
                         fVar21) * dVar15 + (double)this->m_afOscillationTimes[9]);
    fVar21 = this->m_afDirection[2];
    this->m_afShaderTable[2] = fVar21;
    this->m_afShaderTable[0] = fVar13;
    this->m_afShaderTable[1] = fVar20;
    this->m_afShaderTable[3] = fVar19;
    fVar19 = (this->m_sParams).m_afGlobalDistance[lVar11];
    fVar12 = (this->m_sParams).m_afGlobalDistance[lVar10];
    this->m_afShaderTable[4] = fVar18;
    this->m_afShaderTable[5] = (fVar12 - fVar19) * fVar17 + fVar19;
    fVar19 = (this->m_sParams).m_fGlobalHeight;
    fVar12 = fVar23;
    if (fVar19 != 0.0) {
      fVar12 = fVar23 / fVar19;
    }
    this->m_afShaderTable[6] = fVar12;
    this->m_afShaderTable[7] = (this->m_sParams).m_fGlobalHeightExponent;
    fVar19 = (this->m_sParams).m_afGlobalDirectionAdherence[lVar11];
    this->m_afShaderTable[0x18] =
         ((this->m_sParams).m_afGlobalDirectionAdherence[lVar10] - fVar19) * fVar17 + fVar19;
    fVar19 = (this->m_sParams).m_asBranch[0].m_afDistance[lVar11];
    fVar12 = (this->m_sParams).m_asBranch[0].m_afDistance[lVar10];
    this->m_afShaderTable[8] = fVar24;
    this->m_afShaderTable[9] = (fVar12 - fVar19) * fVar17 + fVar19;
    fVar19 = (this->m_sParams).m_asBranch[1].m_afDistance[lVar11];
    fVar12 = (this->m_sParams).m_asBranch[1].m_afDistance[lVar10];
    this->m_afShaderTable[10] = fVar25;
    this->m_afShaderTable[0xb] = (fVar12 - fVar19) * fVar17 + fVar19;
    fVar21 = fVar21 + (this->m_sParams).m_fAnchorOffset;
    fVar19 = SQRT(fVar13 * fVar13 + fVar20 * fVar20 + fVar21 * fVar21);
    if (fVar19 == 0.0) {
      fVar13 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
    }
    else {
      fVar23 = fVar23 / fVar19;
      fVar13 = fVar13 * fVar23;
      fVar20 = fVar20 * fVar23;
      fVar21 = fVar21 * fVar23;
    }
    bVar1 = this->m_abOptions[3];
    fVar23 = (this->m_sParams).m_fAnchorDistanceScale;
    fVar19 = this->m_fMaxBranchLevel1Length;
    fVar12 = this->m_afBranchWindAnchor[0];
    this->m_afShaderTable[0x15] = fVar20 * fVar19 * fVar23 + this->m_afBranchWindAnchor[1];
    fVar20 = this->m_afBranchWindAnchor[2];
    this->m_afShaderTable[0x14] = fVar13 * fVar19 * fVar23 + fVar12;
    this->m_afShaderTable[0x16] = fVar21 * fVar19 * fVar23 + fVar20;
    fVar23 = (this->m_sParams).m_asBranch[0].m_afDirectionAdherence[lVar11];
    fVar23 = ((this->m_sParams).m_asBranch[0].m_afDirectionAdherence[lVar10] - fVar23) * fVar17 +
             fVar23;
    this->m_afShaderTable[0x19] = fVar23;
    if (bVar1 != false) {
      this->m_afShaderTable[0x19] = fVar23 * fVar19;
    }
    bVar1 = this->m_abOptions[9];
    this->m_afShaderTable[0x1c] = (this->m_sParams).m_asBranch[0].m_fTurbulence;
    fVar23 = (this->m_sParams).m_asBranch[1].m_afDirectionAdherence[lVar11];
    fVar23 = ((this->m_sParams).m_asBranch[1].m_afDirectionAdherence[lVar10] - fVar23) * fVar17 +
             fVar23;
    this->m_afShaderTable[0x1a] = fVar23;
    if (bVar1 != false) {
      this->m_afShaderTable[0x1a] = fVar23 * fVar19;
    }
    this->m_afShaderTable[0x1d] = (this->m_sParams).m_asBranch[1].m_fTurbulence;
    this->m_afShaderTable[0xc] = (this->m_sParams).m_asBranch[0].m_fTwitch;
    this->m_afShaderTable[0xd] = (this->m_sParams).m_asBranch[0].m_fTwitchFreqScale;
    this->m_afShaderTable[0xe] = (this->m_sParams).m_asBranch[1].m_fTwitch;
    this->m_afShaderTable[0xf] = (this->m_sParams).m_asBranch[1].m_fTwitchFreqScale;
    fVar23 = (this->m_sParams).m_asBranch[0].m_afWhip[lVar11];
    this->m_afShaderTable[0x10] =
         ((this->m_sParams).m_asBranch[0].m_afWhip[lVar10] - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asBranch[1].m_afWhip[lVar11];
    fVar21 = (this->m_sParams).m_asBranch[1].m_afWhip[lVar10];
    this->m_afShaderTable[0x20] = fVar27;
    this->m_afShaderTable[0x11] = (fVar21 - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asLeaf[0].m_afRippleDistance[lVar11];
    fVar21 = (this->m_sParams).m_asLeaf[0].m_afRippleDistance[lVar10];
    this->m_afShaderTable[0x2c] = fVar16;
    this->m_afShaderTable[0x21] = (fVar21 - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asLeaf[1].m_afRippleDistance[lVar11];
    fVar21 = (this->m_sParams).m_asLeaf[1].m_afRippleDistance[lVar10];
    this->m_afShaderTable[0x24] = fVar28;
    this->m_afShaderTable[0x2d] = (fVar21 - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asLeaf[0].m_afTumbleFlip[lVar11];
    this->m_afShaderTable[0x25] =
         ((this->m_sParams).m_asLeaf[0].m_afTumbleFlip[lVar10] - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asLeaf[0].m_afTumbleTwist[lVar11];
    this->m_afShaderTable[0x26] =
         ((this->m_sParams).m_asLeaf[0].m_afTumbleTwist[lVar10] - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asLeaf[0].m_afTumbleDirectionAdherence[lVar11];
    fVar21 = (this->m_sParams).m_asLeaf[0].m_afTumbleDirectionAdherence[lVar10];
    this->m_afShaderTable[0x30] = fVar14;
    this->m_afShaderTable[0x27] = (fVar21 - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asLeaf[1].m_afTumbleFlip[lVar11];
    this->m_afShaderTable[0x31] =
         ((this->m_sParams).m_asLeaf[1].m_afTumbleFlip[lVar10] - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_asLeaf[1].m_afTumbleTwist[lVar11];
    this->m_afShaderTable[0x32] =
         ((this->m_sParams).m_asLeaf[1].m_afTumbleTwist[lVar10] - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_afFrondRippleDistance[lVar11 + -0x1a];
    this->m_afShaderTable[0x33] =
         ((this->m_sParams).m_afFrondRippleDistance[lVar10 + -0x1a] - fVar23) * fVar17 + fVar23;
    fVar13 = __real_34000000;
    fVar21 = __real_41200000;
    fVar23 = (this->m_sParams).m_asLeaf[0].m_afTwitchThrow[lVar11];
    this->m_afShaderTable[0x28] =
         ((this->m_sParams).m_asLeaf[0].m_afTwitchThrow[lVar10] - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_afFrequencies[5][lVar11];
    fVar23 = ((this->m_sParams).m_afFrequencies[5][lVar10] - fVar23) * fVar17 + fVar23;
    if (fVar13 <= fVar23) {
      fVar23 = ((this->m_sParams).m_asLeaf[0].m_fTwitchSharpness / fVar23) * fVar21;
    }
    else {
      fVar23 = 0.0;
    }
    this->m_afShaderTable[0x29] = fVar23;
    this->m_afShaderTable[0x2a] = fVar26;
    fVar23 = (this->m_sParams).m_afFrondRippleDistance[lVar11 + -0x10];
    this->m_afShaderTable[0x34] =
         ((this->m_sParams).m_afFrondRippleDistance[lVar10 + -0x10] - fVar23) * fVar17 + fVar23;
    fVar23 = (this->m_sParams).m_afGlobalDistance[lVar11 + -0x16];
    fVar23 = ((this->m_sParams).m_afGlobalDistance[lVar10 + -0x16] - fVar23) * fVar17 + fVar23;
    if (fVar13 <= fVar23) {
      fVar22 = ((this->m_sParams).m_asLeaf[1].m_fTwitchSharpness / fVar23) * fVar21;
    }
    this->m_afShaderTable[0x35] = fVar22;
    this->m_afShaderTable[0x36] = this->m_afOscillationTimes[8];
    this->m_afShaderTable[0x22] = (this->m_sParams).m_asLeaf[0].m_fLeewardScalar;
    this->m_afShaderTable[0x2e] = (this->m_sParams).m_asLeaf[1].m_fLeewardScalar;
    this->m_afShaderTable[0x38] = this->m_afOscillationTimes[9];
    fVar23 = (this->m_sParams).m_afFrondRippleDistance[lVar11];
    this->m_afShaderTable[0x39] =
         ((this->m_sParams).m_afFrondRippleDistance[lVar10] - fVar23) * fVar17 + fVar23;
    this->m_afShaderTable[0x3a] = (this->m_sParams).m_fFrondRippleTile;
    this->m_afShaderTable[0x3b] = (this->m_sParams).m_fFrondRippleLightingScalar;
    this->m_afShaderTable[0x45] = (this->m_sParams).m_fRollingNoiseSize;
    this->m_afShaderTable[0x47] = (this->m_sParams).m_fRollingNoiseTwist;
    this->m_afShaderTable[0x46] = (this->m_sParams).m_fRollingNoiseTurbulence;
    this->m_afShaderTable[0x44] = (this->m_sParams).m_fRollingNoisePeriod;
    this->m_afShaderTable[0x40] = (this->m_sParams).m_fRollingLeafRippleMin;
    this->m_afShaderTable[0x41] = (this->m_sParams).m_fRollingLeafTumbleMin;
    this->m_afShaderTable[0x3c] = (this->m_sParams).m_fRollingBranchFieldMin;
    this->m_afShaderTable[0x3d] = (this->m_sParams).m_fRollingBranchLightingAdjust;
    this->m_afShaderTable[0x3e] = (this->m_sParams).m_fRollingBranchVerticalOffset;
    this->m_afShaderTable[0x42] = this->m_afRollingOffset[0];
    this->m_afShaderTable[0x43] = this->m_afRollingOffset[1];
  }
  else {
    this->m_afShaderTable[0] = 1.0;
    this->m_afShaderTable[1] = 0.0;
    this->m_afShaderTable[2] = 0.0;
    this->m_afShaderTable[3] = 0.0;
    this->m_afShaderTable[4] = 0.0;
    this->m_afShaderTable[5] = 0.0;
    this->m_afShaderTable[0x18] = 0.0;
    this->m_afShaderTable[0x19] = 0.0;
    this->m_afShaderTable[9] = 0.0;
    this->m_afShaderTable[10] = 0.0;
    this->m_afShaderTable[0xb] = 0.0;
    this->m_afShaderTable[0xc] = 0.0;
    this->m_afShaderTable[0x14] = 0.0;
    this->m_afShaderTable[0x15] = 0.0;
    this->m_afShaderTable[0x16] = 0.0;
    this->m_afShaderTable[0x1c] = 0.0;
    this->m_afShaderTable[0x1d] = 0.0;
    this->m_afShaderTable[0x1a] = 0.0;
    this->m_afShaderTable[0xd] = 0.0;
    this->m_afShaderTable[0xe] = 0.0;
    this->m_afShaderTable[0xf] = 0.0;
    this->m_afShaderTable[0x10] = 0.0;
    this->m_afShaderTable[0x11] = 0.0;
    this->m_afShaderTable[0x20] = 0.0;
    this->m_afShaderTable[0x21] = 0.0;
    this->m_afShaderTable[0x2c] = 0.0;
    this->m_afShaderTable[0x2d] = 0.0;
    this->m_afShaderTable[6] = 1.0;
    this->m_afShaderTable[7] = 1.0;
    this->m_afShaderTable[8] = 0.0;
    this->m_afShaderTable[0x24] = 0.0;
    this->m_afShaderTable[0x25] = 0.0;
    this->m_afShaderTable[0x26] = 0.0;
    this->m_afShaderTable[0x27] = 0.0;
    this->m_afShaderTable[0x30] = 0.0;
    this->m_afShaderTable[0x31] = 0.0;
    this->m_afShaderTable[0x32] = 0.0;
    this->m_afShaderTable[0x33] = 0.0;
    this->m_afShaderTable[0x28] = 0.0;
    this->m_afShaderTable[0x29] = 0.0;
    this->m_afShaderTable[0x2a] = 0.0;
    this->m_afShaderTable[0x34] = 0.0;
    this->m_afShaderTable[0x35] = 0.0;
    this->m_afShaderTable[0x36] = 0.0;
    this->m_afShaderTable[0x22] = 1.0;
    this->m_afShaderTable[0x2e] = 1.0;
    this->m_afShaderTable[0x38] = 0.0;
    this->m_afShaderTable[0x39] = 0.0;
    this->m_afShaderTable[0x3a] = 0.0;
    this->m_afShaderTable[0x3b] = 1.0;
    this->m_afShaderTable[0x45] = (this->m_sParams).m_fRollingNoiseSize;
    this->m_afShaderTable[0x47] = (this->m_sParams).m_fRollingNoiseTwist;
    this->m_afShaderTable[0x46] = (this->m_sParams).m_fRollingNoiseTurbulence;
    this->m_afShaderTable[0x44] = (this->m_sParams).m_fRollingNoisePeriod;
    this->m_afShaderTable[0x40] = (this->m_sParams).m_fRollingLeafRippleMin;
    this->m_afShaderTable[0x41] = (this->m_sParams).m_fRollingLeafTumbleMin;
    this->m_afShaderTable[0x3c] = (this->m_sParams).m_fRollingBranchFieldMin;
    this->m_afShaderTable[0x3d] = (this->m_sParams).m_fRollingBranchLightingAdjust;
    this->m_afShaderTable[0x3e] = (this->m_sParams).m_fRollingBranchVerticalOffset;
    this->m_afShaderTable[0x42] = 0.0;
    this->m_afShaderTable[0x43] = 0.0;
  }
  return;
}

// ComputeWindAnchor @ 14872cd80

void __thiscall FSpeedTreeWind::ComputeWindAnchor(FSpeedTreeWind *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = this->m_afDirection[0];
  fVar4 = this->m_afDirection[1];
  fVar5 = this->m_afDirection[2] + (this->m_sParams).m_fAnchorOffset;
  fVar2 = 0.0;
  fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar5 * fVar5);
  if (fVar3 == 0.0) {
    fVar4 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar3 = __real_3f800000 / fVar3;
    fVar2 = fVar3 * fVar1;
    fVar4 = fVar3 * fVar4;
    fVar3 = fVar3 * fVar5;
  }
  *param_1 = fVar2 * this->m_fMaxBranchLevel1Length * (this->m_sParams).m_fAnchorDistanceScale +
             this->m_afBranchWindAnchor[0];
  param_1[1] = fVar4 * this->m_fMaxBranchLevel1Length * (this->m_sParams).m_fAnchorDistanceScale +
               this->m_afBranchWindAnchor[1];
  param_1[2] = fVar3 * this->m_fMaxBranchLevel1Length * (this->m_sParams).m_fAnchorDistanceScale +
               this->m_afBranchWindAnchor[2];
  return;
}

// EnableGusting @ 148730b60

void __thiscall FSpeedTreeWind::EnableGusting(FSpeedTreeWind *this,bool param_1)

{
  this->m_bGustingEnabled = param_1;
  return;
}

// GetBranchAnchor @ 148739f80

float * __thiscall FSpeedTreeWind::GetBranchAnchor(FSpeedTreeWind *this)

{
  return this->m_afBranchWindAnchor;
}

// GetMaxBranchLength @ 14873c940

float __thiscall FSpeedTreeWind::GetMaxBranchLength(FSpeedTreeWind *this)

{
  return this->m_fMaxBranchLevel1Length;
}

// GetParams @ 14873da20

SParams * __thiscall FSpeedTreeWind::GetParams(FSpeedTreeWind *this)

{
  return &this->m_sParams;
}

// GetShaderTable @ 14873f530

float * __thiscall FSpeedTreeWind::GetShaderTable(FSpeedTreeWind *this)

{
  return this->m_afShaderTable;
}

// Gust @ 148742620

void __thiscall FSpeedTreeWind::Gust(FSpeedTreeWind *this,double param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  
  fVar5 = __real_3f000000;
  fVar2 = __real_3f800000;
  if ((this->m_fGustFallTarget <= param_1 && param_1 != this->m_fGustFallTarget) ||
     ((param_1 < this->m_fGustFallStart &&
      (this->m_fGustRiseTarget <= param_1 && param_1 != this->m_fGustRiseTarget)))) {
    dVar9 = this->m_fElapsedTime;
    uVar3 = rand();
    fVar6 = __real_38000100;
    if ((double)((float)(uVar3 & 0x7fff) * __real_38000100 * (float)dVar9) <
        (double)(this->m_sParams).m_fGustFrequency * this->m_fElapsedTime * __real_3f847ae140000000)
    {
      fVar4 = (this->m_sParams).m_fGustStrengthMax;
      fVar8 = (this->m_sParams).m_fGustStrengthMin;
      this->m_fGustAtStart = (double)this->m_fGust;
      this->m_fGustStart = param_1;
      uVar3 = rand();
      dVar9 = (double)((float)(uVar3 & 0x7fff) * (fVar4 - fVar8) * fVar6 + fVar8);
      this->m_fGustTarget = dVar9;
      dVar7 = (double)(fVar2 - this->m_fStrength);
      if (dVar7 < dVar9) {
        this->m_fGustTarget = dVar7;
        dVar9 = dVar7;
      }
      fVar4 = (this->m_sParams).m_fStrengthResponse;
      dVar7 = dVar9 - (double)this->m_fStrength;
      fVar8 = fVar4 * fVar5;
      fVar8 = (float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              * (fVar4 - fVar8) + fVar8;
      if (dVar9 <= (double)this->m_fGust) {
        uVar3 = rand();
        fVar4 = ((float)(uVar3 & 0x7fff) * fVar8 * fVar6 + fVar8) *
                (this->m_sParams).m_fGustFallScalar;
      }
      else {
        uVar3 = rand();
        fVar4 = ((float)(uVar3 & 0x7fff) * fVar8 * fVar6 + fVar8) *
                (this->m_sParams).m_fGustRiseScalar;
      }
      this->m_fGustRiseTarget = (double)fVar4 + param_1;
      fVar4 = (this->m_sParams).m_fGustDurationMax;
      fVar1 = (this->m_sParams).m_fGustDurationMin;
      uVar3 = rand();
      this->m_fGustFallStart =
           (double)((float)(uVar3 & 0x7fff) * (fVar4 - fVar1) * fVar6 + fVar1) +
           this->m_fGustRiseTarget;
      uVar3 = rand();
      this->m_fGustFallTarget =
           (double)(((float)(uVar3 & 0x7fff) * (fVar8 * __real_40400000 - (fVar8 + fVar8)) * fVar6 +
                    fVar8 + fVar8) * (this->m_sParams).m_fGustFallScalar) + this->m_fGustFallStart;
    }
  }
  if (this->m_fGustRiseTarget <= param_1) {
    dVar9 = this->m_fGustFallStart;
    if (((dVar9 < param_1) && (dVar7 = this->m_fGustFallTarget, 0.0 < dVar7)) && (dVar9 < dVar7)) {
      fVar4 = (float)((param_1 - dVar9) / (dVar7 - dVar9));
      fVar6 = expf(__real_40c00000 - fVar4 * __real_41400000);
      fVar6 = fVar2 / (fVar6 + fVar2);
      this->m_fGust =
           (float)this->m_fGustTarget -
           ((fVar4 - fVar6) * fVar5 + fVar6) * (float)this->m_fGustTarget;
    }
  }
  else {
    dVar9 = this->m_fGustAtStart;
    dVar7 = this->m_fGustTarget;
    fVar5 = expf(__real_40c00000 -
                 (float)((param_1 - this->m_fGustStart) /
                        (this->m_fGustRiseTarget - this->m_fGustStart)) * __real_41400000);
    this->m_fGust = ((float)dVar7 - (float)dVar9) / (fVar5 + fVar2) + (float)dVar9;
  }
  fVar5 = this->m_fGust;
  if (fVar2 <= this->m_fGust) {
    fVar5 = fVar2;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  this->m_fGust = fVar5;
  return;
}

// IsOptionEnabled @ 14874b690

bool __thiscall FSpeedTreeWind::IsOptionEnabled(FSpeedTreeWind *this,EOptions param_1)

{
  return this->m_abOptions[(int)param_1];
}

// Normalize @ 14874cfc0

void __thiscall FSpeedTreeWind::Normalize(FSpeedTreeWind *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  if (fVar4 != 0.0) {
    fVar4 = __real_3f800000 / fVar4;
    *param_1 = fVar4 * fVar2;
    param_1[1] = fVar4 * fVar1;
    param_1[2] = fVar4 * fVar3;
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}

// Scale @ 148755d60

void __thiscall FSpeedTreeWind::Scale(FSpeedTreeWind *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  
  pfVar5 = (this->m_sParams).m_asLeaf[0].m_afRippleDistance + 2;
  lVar6 = 2;
  fVar1 = (this->m_sParams).m_afGlobalDistance[0];
  fVar2 = (this->m_sParams).m_afGlobalDistance[1];
  (this->m_sParams).m_afGlobalDistance[3] = param_1 * (this->m_sParams).m_afGlobalDistance[3];
  fVar3 = (this->m_sParams).m_afGlobalDistance[9];
  (this->m_sParams).m_afGlobalDistance[0] = param_1 * fVar1;
  fVar1 = (this->m_sParams).m_afGlobalDistance[2];
  (this->m_sParams).m_afGlobalDistance[9] = param_1 * fVar3;
  (this->m_sParams).m_afGlobalDistance[1] = param_1 * fVar2;
  (this->m_sParams).m_afGlobalDistance[2] = param_1 * fVar1;
  fVar1 = (this->m_sParams).m_afGlobalDistance[5];
  fVar2 = (this->m_sParams).m_afGlobalDistance[6];
  fVar3 = (this->m_sParams).m_afGlobalDistance[7];
  (this->m_sParams).m_afGlobalDistance[4] = (this->m_sParams).m_afGlobalDistance[4] * param_1;
  (this->m_sParams).m_afGlobalDistance[5] = fVar1 * param_1;
  (this->m_sParams).m_afGlobalDistance[6] = fVar2 * param_1;
  (this->m_sParams).m_afGlobalDistance[7] = fVar3 * param_1;
  (this->m_sParams).m_afGlobalDistance[8] = param_1 * (this->m_sParams).m_afGlobalDistance[8];
  fVar1 = (this->m_sParams).m_afFrondRippleDistance[0];
  fVar2 = (this->m_sParams).m_afFrondRippleDistance[1];
  fVar3 = (this->m_sParams).m_afFrondRippleDistance[2];
  fVar4 = (this->m_sParams).m_afFrondRippleDistance[3];
  (this->m_sParams).m_afFrondRippleDistance[9] =
       param_1 * (this->m_sParams).m_afFrondRippleDistance[9];
  (this->m_sParams).m_afFrondRippleDistance[0] = fVar1 * param_1;
  (this->m_sParams).m_afFrondRippleDistance[1] = fVar2 * param_1;
  (this->m_sParams).m_afFrondRippleDistance[2] = fVar3 * param_1;
  (this->m_sParams).m_afFrondRippleDistance[3] = fVar4 * param_1;
  fVar1 = (this->m_sParams).m_afFrondRippleDistance[5];
  fVar2 = (this->m_sParams).m_afFrondRippleDistance[6];
  fVar3 = (this->m_sParams).m_afFrondRippleDistance[7];
  (this->m_sParams).m_afFrondRippleDistance[4] =
       (this->m_sParams).m_afFrondRippleDistance[4] * param_1;
  (this->m_sParams).m_afFrondRippleDistance[5] = fVar1 * param_1;
  (this->m_sParams).m_afFrondRippleDistance[6] = fVar2 * param_1;
  (this->m_sParams).m_afFrondRippleDistance[7] = fVar3 * param_1;
  (this->m_sParams).m_afFrondRippleDistance[8] =
       param_1 * (this->m_sParams).m_afFrondRippleDistance[8];
  fVar1 = (this->m_sParams).m_asBranch[0].m_afDistance[0];
  fVar2 = (this->m_sParams).m_asBranch[0].m_afDistance[1];
  fVar3 = (this->m_sParams).m_asBranch[0].m_afDistance[2];
  fVar4 = (this->m_sParams).m_asBranch[0].m_afDistance[3];
  (this->m_sParams).m_asBranch[0].m_afDistance[9] =
       param_1 * (this->m_sParams).m_asBranch[0].m_afDistance[9];
  (this->m_sParams).m_asBranch[0].m_afDistance[0] = fVar1 * param_1;
  (this->m_sParams).m_asBranch[0].m_afDistance[1] = fVar2 * param_1;
  (this->m_sParams).m_asBranch[0].m_afDistance[2] = fVar3 * param_1;
  (this->m_sParams).m_asBranch[0].m_afDistance[3] = fVar4 * param_1;
  fVar1 = (this->m_sParams).m_asBranch[0].m_afDistance[5];
  fVar2 = (this->m_sParams).m_asBranch[0].m_afDistance[6];
  fVar3 = (this->m_sParams).m_asBranch[0].m_afDistance[7];
  (this->m_sParams).m_asBranch[0].m_afDistance[4] =
       (this->m_sParams).m_asBranch[0].m_afDistance[4] * param_1;
  (this->m_sParams).m_asBranch[0].m_afDistance[5] = fVar1 * param_1;
  (this->m_sParams).m_asBranch[0].m_afDistance[6] = fVar2 * param_1;
  (this->m_sParams).m_asBranch[0].m_afDistance[7] = fVar3 * param_1;
  (this->m_sParams).m_asBranch[0].m_afDistance[8] =
       param_1 * (this->m_sParams).m_asBranch[0].m_afDistance[8];
  fVar1 = (this->m_sParams).m_asBranch[1].m_afDistance[1];
  fVar2 = (this->m_sParams).m_asBranch[1].m_afDistance[2];
  fVar3 = (this->m_sParams).m_asBranch[1].m_afDistance[3];
  (this->m_sParams).m_asBranch[1].m_afDistance[0] =
       (this->m_sParams).m_asBranch[1].m_afDistance[0] * param_1;
  (this->m_sParams).m_asBranch[1].m_afDistance[1] = fVar1 * param_1;
  (this->m_sParams).m_asBranch[1].m_afDistance[2] = fVar2 * param_1;
  (this->m_sParams).m_asBranch[1].m_afDistance[3] = fVar3 * param_1;
  fVar1 = (this->m_sParams).m_asBranch[1].m_afDistance[5];
  fVar2 = (this->m_sParams).m_asBranch[1].m_afDistance[6];
  fVar3 = (this->m_sParams).m_asBranch[1].m_afDistance[7];
  (this->m_sParams).m_asBranch[1].m_afDistance[4] =
       (this->m_sParams).m_asBranch[1].m_afDistance[4] * param_1;
  (this->m_sParams).m_asBranch[1].m_afDistance[5] = fVar1 * param_1;
  (this->m_sParams).m_asBranch[1].m_afDistance[6] = fVar2 * param_1;
  (this->m_sParams).m_asBranch[1].m_afDistance[7] = fVar3 * param_1;
  (this->m_sParams).m_asBranch[1].m_afDistance[8] =
       param_1 * (this->m_sParams).m_asBranch[1].m_afDistance[8];
  (this->m_sParams).m_asBranch[1].m_afDistance[9] =
       param_1 * (this->m_sParams).m_asBranch[1].m_afDistance[9];
  do {
    fVar1 = ((SWindGroup *)(pfVar5 + -2))->m_afRippleDistance[0];
    fVar2 = pfVar5[-1];
    fVar3 = *pfVar5;
    fVar4 = pfVar5[1];
    pfVar5[7] = param_1 * pfVar5[7];
    ((SWindGroup *)(pfVar5 + -2))->m_afRippleDistance[0] = fVar1 * param_1;
    pfVar5[-1] = fVar2 * param_1;
    *pfVar5 = fVar3 * param_1;
    pfVar5[1] = fVar4 * param_1;
    pfVar5[2] = pfVar5[2] * param_1;
    pfVar5[3] = pfVar5[3] * param_1;
    pfVar5[4] = pfVar5[4] * param_1;
    pfVar5[5] = pfVar5[5] * param_1;
    pfVar5[6] = param_1 * pfVar5[6];
    pfVar5[0x2f] = param_1 * pfVar5[0x2f];
    pfVar5[0x26] = pfVar5[0x26] * param_1;
    pfVar5[0x27] = pfVar5[0x27] * param_1;
    pfVar5[0x28] = pfVar5[0x28] * param_1;
    pfVar5[0x29] = pfVar5[0x29] * param_1;
    pfVar5[0x2a] = pfVar5[0x2a] * param_1;
    pfVar5[0x2b] = pfVar5[0x2b] * param_1;
    pfVar5[0x2c] = pfVar5[0x2c] * param_1;
    pfVar5[0x2d] = pfVar5[0x2d] * param_1;
    pfVar5[0x2e] = param_1 * pfVar5[0x2e];
    if (param_1 != 0.0) {
      pfVar5[0x34] = pfVar5[0x34] / param_1;
    }
    pfVar5 = pfVar5 + 0x38;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  this->m_afBranchWindAnchor[0] = param_1;
  fVar1 = this->m_fMaxBranchLevel1Length;
  (this->m_sParams).m_fGlobalHeight = param_1 * (this->m_sParams).m_fGlobalHeight;
  fVar2 = (this->m_sParams).m_fAnchorDistanceScale;
  this->m_fMaxBranchLevel1Length = param_1 * fVar1;
  fVar1 = (this->m_sParams).m_fAnchorOffset;
  (this->m_sParams).m_fAnchorDistanceScale = param_1 * fVar2;
  this->m_afBranchWindAnchor[1] = param_1;
  (this->m_sParams).m_fAnchorOffset = param_1 * fVar1;
  this->m_afBranchWindAnchor[2] = param_1;
  return;
}

// SetDirection @ 14875abf0

void __thiscall FSpeedTreeWind::SetDirection(FSpeedTreeWind *this,TVector<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = __real_3f000000;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  fVar1 = this->m_afDirection[0];
  if (((dVar4 != (double)fVar1) || ((double)this->m_afDirection[1] != (param_1->field0_0x0)._s_0.Y))
     || ((double)this->m_afDirection[2] != (param_1->field0_0x0)._s_0.Z)) {
    fVar2 = this->m_afDirection[1];
    dVar5 = this->m_fLastTime;
    fVar3 = this->m_afDirection[2];
    fVar9 = (float)dVar4;
    this->m_afDirectionTarget[0] = fVar9;
    fVar10 = (float)(param_1->field0_0x0)._s_0.Y;
    this->m_afDirectionTarget[1] = fVar10;
    fVar11 = (float)(param_1->field0_0x0)._s_0.Z;
    this->m_afDirectionTarget[2] = fVar11;
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = (param_1->field0_0x0)._s_0.Z;
    dVar7 = (param_1->field0_0x0)._s_0.X;
    this->m_fDirectionChangeStartTime = dVar5;
    this->m_afDirectionAtStart[0] = fVar1;
    this->m_afDirectionAtStart[1] = fVar2;
    this->m_afDirectionAtStart[2] = fVar3;
    this->m_afDirectionMidTarget[0] = (fVar9 + fVar1) * fVar8;
    this->m_afDirectionMidTarget[1] = (fVar10 + fVar2) * fVar8;
    this->m_afDirectionMidTarget[2] = (fVar11 + fVar3) * fVar8;
    fVar9 = (this->m_sParams).m_fDirectionResponse;
    fVar10 = fVar9 * fVar8;
    this->m_fDirectionChangeEndTime =
         (double)((fVar9 - fVar10) *
                  (fVar8 - (float)((double)fVar2 * dVar4 + (double)fVar1 * dVar7 +
                                  (double)fVar3 * dVar6) * fVar8) + fVar10) + dVar5;
    Normalize(this,this->m_afDirectionMidTarget);
  }
  return;
}

// SetGustFrequency @ 14875af30

void __thiscall FSpeedTreeWind::SetGustFrequency(FSpeedTreeWind *this,float param_1)

{
  (this->m_sParams).m_fGustFrequency = param_1;
  return;
}

// SetGustMax @ 14875af40

void __thiscall FSpeedTreeWind::SetGustMax(FSpeedTreeWind *this,float param_1)

{
  (this->m_sParams).m_fGustStrengthMax = param_1;
  return;
}

// SetGustMin @ 14875af50

void __thiscall FSpeedTreeWind::SetGustMin(FSpeedTreeWind *this,float param_1)

{
  (this->m_sParams).m_fGustStrengthMin = param_1;
  return;
}

// SetInitDirection @ 14875af60

void __thiscall FSpeedTreeWind::SetInitDirection(FSpeedTreeWind *this,TVector<double> *param_1)

{
  float fVar1;
  
  fVar1 = (float)(param_1->field0_0x0)._s_0.X;
  this->m_afDirection[0] = fVar1;
  this->m_afDirectionMidTarget[0] = fVar1;
  this->m_afDirectionAtStart[0] = fVar1;
  this->m_afDirectionTarget[0] = fVar1;
  fVar1 = (float)(param_1->field0_0x0)._s_0.Y;
  this->m_afDirection[1] = fVar1;
  this->m_afDirectionMidTarget[1] = fVar1;
  this->m_afDirectionAtStart[1] = fVar1;
  this->m_afDirectionTarget[1] = fVar1;
  fVar1 = (float)(param_1->field0_0x0)._s_0.Z;
  this->m_afDirection[2] = fVar1;
  this->m_afDirectionMidTarget[2] = fVar1;
  this->m_afDirectionAtStart[2] = fVar1;
  this->m_afDirectionTarget[2] = fVar1;
  return;
}

// SetOption @ 14875b520

void __thiscall FSpeedTreeWind::SetOption(FSpeedTreeWind *this,EOptions param_1,bool param_2)

{
  this->m_abOptions[(int)param_1] = param_2;
  return;
}

// SetParams @ 14875b560

void __thiscall FSpeedTreeWind::SetParams(FSpeedTreeWind *this,SParams *param_1)

{
  memcpy(this,param_1,0x534);
  return;
}

// SetStrength @ 14875b7b0

void __thiscall FSpeedTreeWind::SetStrength(FSpeedTreeWind *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = this->m_fStrength;
  if (param_1 != fVar2) {
    fVar1 = (this->m_sParams).m_fStrengthResponse;
    this->m_fStrengthChangeStartTime = this->m_fLastTime;
    fVar3 = fVar1 * __real_3f000000;
    this->m_fStrengthAtStart = fVar2;
    fVar2 = (float)((uint)(param_1 - fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    this->m_fStrengthTarget = param_1;
    this->m_fStrengthChangeEndTime = (double)(fVar2 * (fVar1 - fVar3) + fVar3) + this->m_fLastTime;
  }
  return;
}

// SetTreeValues @ 14875b820

void __thiscall
FSpeedTreeWind::SetTreeValues(FSpeedTreeWind *this,TVector<double> *param_1,float param_2)

{
  double dVar1;
  
  this->m_afBranchWindAnchor[0] = (float)(param_1->field0_0x0)._s_0.X;
  this->m_afBranchWindAnchor[1] = (float)(param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  this->m_fMaxBranchLevel1Length = param_2;
  this->m_afBranchWindAnchor[2] = (float)dVar1;
  return;
}

