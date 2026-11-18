// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: binka_ue_decode_win64_static
// Functions: 44

// scalar_rfpost @ 14f8d9020

void __cdecl scalar_rfpost(rfft_complex *param_1,ulong64 param_2,ulong64 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  rfft_complex *prVar7;
  rfft_complex *prVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar3 = __real_3f000000;
  prVar7 = param_1 + 1;
  prVar8 = param_1 + param_3 * 2 + -1;
  uVar5 = 1;
  if (1 < param_2) {
    if (param_2 - 1 < 4) goto LAB_14f8d92d0;
    pfVar6 = (float *)(radfft_s_twiddles_data + param_3 * 2 + 7);
    lVar4 = (param_2 - 5 >> 2) + 1;
    uVar5 = lVar4 * 4;
    do {
      fVar9 = (prVar7->im + prVar8->im) * fVar3;
      fVar11 = (prVar8->re - prVar7->re) * fVar3;
      fVar12 = prVar7->im - fVar9;
      fVar13 = prVar7->re + fVar11;
      fVar10 = pfVar6[-5] * fVar11 - pfVar6[-4] * fVar9;
      fVar11 = pfVar6[-5] * fVar9 + pfVar6[-4] * fVar11;
      prVar7->im = fVar10 + fVar12;
      prVar7->re = fVar11 + fVar13;
      fVar9 = prVar8[-1].re;
      prVar8->im = fVar10 - fVar12;
      prVar8->re = fVar13 - fVar11;
      fVar10 = (prVar7[1].im + prVar8[-1].im) * fVar3;
      fVar9 = (fVar9 - prVar7[1].re) * fVar3;
      fVar12 = prVar7[1].im - fVar10;
      fVar13 = prVar7[1].re + fVar9;
      fVar11 = pfVar6[-3] * fVar10 + pfVar6[-2] * fVar9;
      fVar10 = pfVar6[-3] * fVar9 - pfVar6[-2] * fVar10;
      prVar7[1].re = fVar11 + fVar13;
      prVar7[1].im = fVar10 + fVar12;
      fVar9 = prVar8[-2].re;
      prVar8[-1].im = fVar10 - fVar12;
      prVar8[-1].re = fVar13 - fVar11;
      fVar10 = (fVar9 - prVar7[2].re) * fVar3;
      fVar9 = (prVar7[2].im + prVar8[-2].im) * fVar3;
      fVar13 = prVar7[2].re + fVar10;
      fVar12 = prVar7[2].im - fVar9;
      fVar11 = pfVar6[-1] * fVar9 + *pfVar6 * fVar10;
      fVar10 = pfVar6[-1] * fVar10 - *pfVar6 * fVar9;
      prVar7[2].re = fVar11 + fVar13;
      prVar7[2].im = fVar10 + fVar12;
      fVar9 = prVar8[-3].re;
      prVar8[-2].im = fVar10 - fVar12;
      prVar8[-2].re = fVar13 - fVar11;
      pfVar1 = pfVar6 + 2;
      pfVar2 = pfVar6 + 1;
      pfVar6 = pfVar6 + 8;
      fVar11 = (prVar7[3].im + prVar8[-3].im) * fVar3;
      fVar9 = (fVar9 - prVar7[3].re) * fVar3;
      fVar12 = prVar7[3].im - fVar11;
      fVar13 = prVar7[3].re + fVar9;
      fVar10 = *pfVar2 * fVar9 - *pfVar1 * fVar11;
      fVar9 = *pfVar2 * fVar11 + *pfVar1 * fVar9;
      prVar7[3].im = fVar10 + fVar12;
      prVar7[3].re = fVar9 + fVar13;
      prVar7 = prVar7 + 4;
      prVar8[-3].re = fVar13 - fVar9;
      prVar8[-3].im = fVar10 - fVar12;
      prVar8 = prVar8 + -4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    while (uVar5 = uVar5 + 1, uVar5 < param_2) {
LAB_14f8d92d0:
      fVar9 = *(float *)(param_3 * 8 + 0x15352c614 + uVar5 * 8);
      fVar11 = (prVar7->im + prVar8->im) * fVar3;
      fVar12 = (prVar8->re - prVar7->re) * fVar3;
      fVar13 = prVar7->im - fVar11;
      fVar14 = prVar7->re + fVar12;
      fVar10 = (float)radfft_s_twiddles_data[param_3 * 2 + uVar5 * 2] * fVar12 - fVar9 * fVar11;
      fVar9 = (float)radfft_s_twiddles_data[param_3 * 2 + uVar5 * 2] * fVar11 + fVar9 * fVar12;
      prVar7->im = fVar10 + fVar13;
      prVar7->re = fVar9 + fVar14;
      prVar7 = prVar7 + 1;
      prVar8->re = fVar14 - fVar9;
      prVar8->im = fVar10 - fVar13;
      prVar8 = prVar8 + -1;
    }
  }
  return;
}

// scalar_ripre @ 14f8d9390

void __cdecl scalar_ripre(rfft_complex *param_1,ulong64 param_2,ulong64 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  float *pfVar6;
  rfft_complex *prVar7;
  rfft_complex *prVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar3 = __real_3f000000;
  prVar7 = param_1 + 1;
  prVar8 = param_1 + param_3 * 2 + -1;
  uVar5 = 1;
  if (1 < param_2) {
    if (3 < param_2 - 1) {
      pfVar6 = (float *)(radfft_s_twiddles_data + param_3 * 2 + 7);
      lVar4 = (param_2 - 5 >> 2) + 1;
      uVar5 = lVar4 * 4 + 1;
      do {
        fVar11 = (prVar7->re - prVar8->re) * fVar3;
        fVar9 = (prVar7->im + prVar8->im) * fVar3;
        fVar13 = prVar7->re - fVar11;
        fVar12 = prVar7->im - fVar9;
        fVar10 = pfVar6[-5] * fVar11 - pfVar6[-4] * fVar9;
        fVar9 = pfVar6[-5] * fVar9 + pfVar6[-4] * fVar11;
        prVar7->im = fVar10 + fVar12;
        prVar7->re = fVar13 - fVar9;
        prVar8->re = fVar9 + fVar13;
        prVar8->im = fVar10 - fVar12;
        fVar11 = (prVar7[1].re - prVar8[-1].re) * fVar3;
        fVar9 = (prVar7[1].im + prVar8[-1].im) * fVar3;
        fVar13 = prVar7[1].re - fVar11;
        fVar12 = prVar7[1].im - fVar9;
        fVar10 = pfVar6[-3] * fVar11 - pfVar6[-2] * fVar9;
        fVar9 = pfVar6[-3] * fVar9 + pfVar6[-2] * fVar11;
        prVar7[1].im = fVar10 + fVar12;
        prVar7[1].re = fVar13 - fVar9;
        prVar8[-1].re = fVar9 + fVar13;
        prVar8[-1].im = fVar10 - fVar12;
        fVar11 = (prVar7[2].re - prVar8[-2].re) * fVar3;
        fVar10 = (prVar7[2].im + prVar8[-2].im) * fVar3;
        fVar13 = prVar7[2].re - fVar11;
        fVar12 = prVar7[2].im - fVar10;
        fVar9 = pfVar6[-1] * fVar10 + *pfVar6 * fVar11;
        fVar10 = pfVar6[-1] * fVar11 - *pfVar6 * fVar10;
        prVar7[2].re = fVar13 - fVar9;
        prVar7[2].im = fVar10 + fVar12;
        prVar8[-2].re = fVar9 + fVar13;
        prVar8[-2].im = fVar10 - fVar12;
        pfVar1 = pfVar6 + 2;
        pfVar2 = pfVar6 + 1;
        pfVar6 = pfVar6 + 8;
        fVar11 = (prVar7[3].re - prVar8[-3].re) * fVar3;
        fVar9 = (prVar7[3].im + prVar8[-3].im) * fVar3;
        fVar13 = prVar7[3].re - fVar11;
        fVar12 = prVar7[3].im - fVar9;
        fVar10 = *pfVar2 * fVar11 - *pfVar1 * fVar9;
        fVar9 = *pfVar2 * fVar9 + *pfVar1 * fVar11;
        prVar7[3].im = fVar10 + fVar12;
        prVar7[3].re = fVar13 - fVar9;
        prVar7 = prVar7 + 4;
        prVar8[-3].re = fVar9 + fVar13;
        prVar8[-3].im = fVar10 - fVar12;
        prVar8 = prVar8 + -4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      if (param_2 <= uVar5) {
        return;
      }
    }
    do {
      fVar9 = *(float *)(param_3 * 8 + 0x15352c614 + uVar5 * 8);
      lVar4 = uVar5 * 2;
      uVar5 = uVar5 + 1;
      fVar12 = (prVar7->re - prVar8->re) * fVar3;
      fVar10 = (prVar7->im + prVar8->im) * fVar3;
      fVar14 = prVar7->re - fVar12;
      fVar13 = prVar7->im - fVar10;
      fVar11 = (float)radfft_s_twiddles_data[param_3 * 2 + lVar4] * fVar12 - fVar9 * fVar10;
      fVar9 = (float)radfft_s_twiddles_data[param_3 * 2 + lVar4] * fVar10 + fVar9 * fVar12;
      prVar7->im = fVar11 + fVar13;
      prVar7->re = fVar14 - fVar9;
      prVar7 = prVar7 + 1;
      prVar8->re = fVar9 + fVar14;
      prVar8->im = fVar11 - fVar13;
      prVar8 = prVar8 + -1;
    } while (uVar5 < param_2);
  }
  return;
}

// scalar_cfpass @ 14f8d9700

void __cdecl scalar_cfpass(rfft_complex *param_1,PlanElement *param_2,ulong64 param_3)

{
  rfft_complex *prVar1;
  ushort uVar2;
  PlanElement *pPVar3;
  float *pfVar4;
  rfft_complex *prVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  PlanElement *pPVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *local_res20;
  
  pPVar11 = param_2 + -1;
  do {
    uVar2 = pPVar11[1].Nloop;
    uVar9 = (ulonglong)uVar2;
    uVar8 = (uint)uVar2;
    uVar10 = (ulonglong)uVar8;
    uVar2 = pPVar11[1].offs;
    fVar12 = param_1[uVar2].re;
    prVar1 = param_1 + uVar2;
    fVar15 = prVar1->im;
    fVar14 = prVar1[uVar10 * 2].re + prVar1[uVar9 * 3].re;
    fVar17 = prVar1[uVar9 * 3].re - prVar1[uVar10 * 2].re;
    fVar13 = prVar1[uVar10 * 2].im + prVar1[uVar9 * 3].im;
    fVar16 = prVar1[uVar10 * 2].im - prVar1[uVar9 * 3].im;
    uVar6 = 1;
    prVar1[uVar10 * 2].re = fVar12 - fVar14;
    prVar1[uVar10 * 2].im = fVar15 - fVar13;
    prVar1->re = fVar12 + fVar14;
    prVar1->im = fVar15 + fVar13;
    fVar12 = prVar1[uVar9].re;
    fVar15 = prVar1[uVar9].im;
    prVar1[uVar9 * 3].re = fVar12 - fVar16;
    prVar1[uVar9 * 3].im = fVar15 - fVar17;
    prVar1[uVar9].re = fVar12 + fVar16;
    prVar1[uVar9].im = fVar15 + fVar17;
    prVar5 = prVar1 + 1;
    if (1 < uVar9) {
      if (3 < uVar9 - 1) {
        pfVar4 = &prVar1[uVar9 * 3 + 2].im;
        lVar7 = (uVar9 - 5 >> 2) + 1;
        uVar6 = lVar7 * 4 + 1;
        local_res20 = (float *)(radfft_s_twiddles_data + uVar9 * 2 + 7);
        do {
          fVar12 = local_res20[-5];
          fVar15 = local_res20[-4];
          fVar16 = fVar12 * pfVar4[uVar9 * -2 + -3] - fVar15 * pfVar4[uVar9 * -2 + -2];
          fVar13 = prVar5->re;
          fVar19 = fVar12 * pfVar4[uVar9 * -2 + -2] + fVar15 * pfVar4[uVar9 * -2 + -3];
          fVar14 = fVar15 * pfVar4[-2] + fVar12 * pfVar4[-3];
          fVar17 = fVar12 * pfVar4[-2] - fVar15 * pfVar4[-3];
          fVar12 = pfVar4[uVar9 * -6 + -2];
          fVar18 = fVar14 - fVar16;
          fVar14 = fVar14 + fVar16;
          fVar15 = fVar17 + fVar19;
          fVar19 = fVar19 - fVar17;
          pfVar4[uVar9 * -2 + -3] = fVar13 - fVar14;
          pfVar4[uVar9 * -2 + -2] = fVar12 - fVar15;
          prVar5->re = fVar13 + fVar14;
          pfVar4[uVar9 * -6 + -2] = fVar12 + fVar15;
          fVar12 = pfVar4[uVar10 * -4 + -2];
          fVar15 = pfVar4[uVar10 * -4 + -3];
          pfVar4[-3] = fVar15 - fVar19;
          pfVar4[-2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + -3] = fVar15 + fVar19;
          pfVar4[uVar10 * -4 + -2] = fVar12 + fVar18;
          fVar12 = local_res20[-3];
          fVar15 = local_res20[-2];
          fVar16 = fVar12 * pfVar4[uVar9 * -2 + -1] - pfVar4[uVar9 * -2] * fVar15;
          fVar19 = fVar15 * pfVar4[uVar9 * -2 + -1] + pfVar4[uVar9 * -2] * fVar12;
          fVar17 = fVar12 * *pfVar4 - fVar15 * ((rfft_complex *)(pfVar4 + -1))->re;
          fVar18 = fVar15 * *pfVar4 + fVar12 * ((rfft_complex *)(pfVar4 + -1))->re;
          fVar14 = fVar17 + fVar19;
          fVar13 = fVar18 + fVar16;
          fVar18 = fVar18 - fVar16;
          fVar19 = fVar19 - fVar17;
          fVar12 = pfVar4[uVar9 * -6 + -1];
          fVar15 = pfVar4[uVar9 * -6];
          pfVar4[uVar9 * -2 + -1] = fVar12 - fVar13;
          pfVar4[uVar9 * -2] = fVar15 - fVar14;
          pfVar4[uVar9 * -6 + -1] = fVar12 + fVar13;
          pfVar4[uVar9 * -6] = fVar15 + fVar14;
          fVar12 = pfVar4[uVar10 * -4 + -1];
          fVar15 = pfVar4[(ulonglong)uVar8 * -4];
          ((rfft_complex *)(pfVar4 + -1))->re = fVar12 - fVar19;
          *pfVar4 = fVar15 - fVar18;
          pfVar4[uVar10 * -4 + -1] = fVar12 + fVar19;
          pfVar4[(ulonglong)uVar8 * -4] = fVar15 + fVar18;
          fVar12 = local_res20[-1];
          fVar15 = *local_res20;
          fVar17 = fVar12 * pfVar4[uVar9 * -2 + 1] - fVar15 * pfVar4[uVar9 * -2 + 2];
          fVar19 = fVar12 * pfVar4[uVar9 * -2 + 2] + fVar15 * pfVar4[uVar9 * -2 + 1];
          fVar13 = pfVar4[uVar9 * -6 + 2];
          fVar14 = pfVar4[2] * fVar12 - fVar15 * pfVar4[1];
          fVar18 = pfVar4[2] * fVar15 + fVar12 * pfVar4[1];
          fVar16 = fVar14 + fVar19;
          fVar19 = fVar19 - fVar14;
          fVar12 = pfVar4[uVar9 * -6 + 1];
          fVar15 = fVar18 + fVar17;
          fVar18 = fVar18 - fVar17;
          pfVar4[uVar9 * -2 + 1] = fVar12 - fVar15;
          pfVar4[uVar9 * -2 + 2] = fVar13 - fVar16;
          pfVar4[uVar9 * -6 + 1] = fVar12 + fVar15;
          pfVar4[uVar9 * -6 + 2] = fVar13 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + 2];
          fVar15 = pfVar4[uVar10 * -4 + 1];
          pfVar4[1] = fVar15 - fVar19;
          pfVar4[2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + 1] = fVar15 + fVar19;
          prVar5 = prVar5 + 4;
          pfVar4[uVar10 * -4 + 2] = fVar12 + fVar18;
          fVar12 = local_res20[2];
          fVar15 = local_res20[1];
          fVar18 = fVar12 * pfVar4[uVar9 * -2 + 3] + pfVar4[(2 - uVar9) * 2] * fVar15;
          fVar16 = fVar15 * pfVar4[uVar9 * -2 + 3] - pfVar4[(2 - uVar9) * 2] * fVar12;
          fVar13 = pfVar4[4] * fVar15 - fVar12 * pfVar4[3];
          fVar17 = pfVar4[4] * fVar12 + fVar15 * pfVar4[3];
          fVar14 = fVar13 + fVar18;
          fVar18 = fVar18 - fVar13;
          fVar12 = pfVar4[uVar9 * -6 + 3];
          fVar13 = fVar17 + fVar16;
          fVar17 = fVar17 - fVar16;
          fVar15 = pfVar4[uVar9 * -6 + 4];
          pfVar4[uVar9 * -2 + 3] = fVar12 - fVar13;
          pfVar4[(2 - uVar9) * 2] = fVar15 - fVar14;
          pfVar4[uVar9 * -6 + 3] = fVar12 + fVar13;
          pfVar4[uVar9 * -6 + 4] = fVar15 + fVar14;
          fVar12 = pfVar4[uVar10 * -4 + 3];
          fVar15 = pfVar4[uVar10 * -4 + 4];
          pfVar4[3] = fVar12 - fVar18;
          pfVar4[4] = fVar15 - fVar17;
          pfVar4[uVar10 * -4 + 3] = fVar12 + fVar18;
          pfVar4[uVar10 * -4 + 4] = fVar15 + fVar17;
          pfVar4 = pfVar4 + 8;
          lVar7 = lVar7 + -1;
          local_res20 = local_res20 + 8;
        } while (lVar7 != 0);
        if (uVar9 <= uVar6) goto LAB_14f8d9f50;
      }
      pfVar4 = &prVar5[uVar9 * 3].im;
      do {
        fVar12 = *(float *)(uVar9 * 8 + 0x15352c614 + uVar6 * 8);
        fVar15 = (float)radfft_s_twiddles_data[uVar9 * 2 + uVar6 * 2];
        uVar6 = uVar6 + 1;
        fVar16 = pfVar4[uVar9 * -2 + -1] * fVar15 - fVar12 * pfVar4[uVar9 * -2];
        fVar18 = pfVar4[uVar9 * -2 + -1] * fVar12 + fVar15 * pfVar4[uVar9 * -2];
        fVar13 = pfVar4[uVar9 * -6];
        fVar14 = fVar15 * ((rfft_complex *)(pfVar4 + -1))->re + *pfVar4 * fVar12;
        fVar12 = *pfVar4 * fVar15 - fVar12 * ((rfft_complex *)(pfVar4 + -1))->re;
        fVar17 = fVar14 - fVar16;
        fVar14 = fVar14 + fVar16;
        fVar15 = fVar12 + fVar18;
        fVar18 = fVar18 - fVar12;
        fVar12 = pfVar4[uVar9 * -6 + -1];
        pfVar4[uVar9 * -2 + -1] = fVar12 - fVar14;
        pfVar4[uVar9 * -2] = fVar13 - fVar15;
        pfVar4[uVar9 * -6 + -1] = fVar12 + fVar14;
        pfVar4[uVar9 * -6] = fVar13 + fVar15;
        fVar12 = pfVar4[uVar10 * -4 + -1];
        fVar15 = pfVar4[uVar9 * -4];
        ((rfft_complex *)(pfVar4 + -1))->re = fVar12 - fVar18;
        *pfVar4 = fVar15 - fVar17;
        pfVar4[uVar10 * -4 + -1] = fVar12 + fVar18;
        pfVar4[uVar9 * -4] = fVar15 + fVar17;
        pfVar4 = pfVar4 + 2;
      } while (uVar6 < uVar9);
    }
LAB_14f8d9f50:
    pPVar3 = pPVar11 + 1;
    pPVar11 = pPVar11 + 1;
    if (param_3 <= pPVar3->Nloop) {
      return;
    }
  } while( true );
}

// scalar_cipass @ 14f8d9fb0

void __cdecl scalar_cipass(rfft_complex *param_1,PlanElement *param_2,ulong64 param_3)

{
  rfft_complex *prVar1;
  ushort uVar2;
  PlanElement *pPVar3;
  float *pfVar4;
  rfft_complex *prVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  PlanElement *pPVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *local_res20;
  
  pPVar11 = param_2 + -1;
  do {
    uVar2 = pPVar11[1].Nloop;
    uVar9 = (ulonglong)uVar2;
    uVar8 = (uint)uVar2;
    uVar10 = (ulonglong)uVar8;
    uVar2 = pPVar11[1].offs;
    fVar12 = param_1[uVar2].re;
    prVar1 = param_1 + uVar2;
    fVar14 = prVar1->im;
    fVar13 = prVar1[uVar10 * 2].im + prVar1[uVar9 * 3].im;
    fVar16 = prVar1[uVar9 * 3].im - prVar1[uVar10 * 2].im;
    fVar15 = prVar1[uVar10 * 2].re + prVar1[uVar9 * 3].re;
    fVar17 = prVar1[uVar10 * 2].re - prVar1[uVar9 * 3].re;
    uVar6 = 1;
    prVar1[uVar10 * 2].im = fVar14 - fVar13;
    prVar1[uVar10 * 2].re = fVar12 - fVar15;
    prVar1->re = fVar12 + fVar15;
    prVar1->im = fVar14 + fVar13;
    fVar12 = prVar1[uVar9].re;
    fVar14 = prVar1[uVar9].im;
    prVar1[uVar9 * 3].re = fVar12 - fVar16;
    prVar1[uVar9 * 3].im = fVar14 - fVar17;
    prVar1[uVar9].re = fVar12 + fVar16;
    prVar1[uVar9].im = fVar14 + fVar17;
    prVar5 = prVar1 + 1;
    if (1 < uVar9) {
      if (3 < uVar9 - 1) {
        local_res20 = (float *)(radfft_s_twiddles_data + uVar9 * 2 + 7);
        pfVar4 = &prVar1[uVar9 * 3 + 2].im;
        lVar7 = (uVar9 - 5 >> 2) + 1;
        uVar6 = lVar7 * 4 + 1;
        do {
          fVar12 = prVar5->re;
          fVar14 = local_res20[-5];
          fVar13 = local_res20[-4];
          fVar18 = fVar14 * pfVar4[uVar9 * -2 + -3] + fVar13 * pfVar4[uVar9 * -2 + -2];
          fVar17 = fVar14 * pfVar4[uVar9 * -2 + -2] - fVar13 * pfVar4[uVar9 * -2 + -3];
          fVar15 = fVar14 * pfVar4[-3] - fVar13 * pfVar4[-2];
          fVar16 = fVar14 * pfVar4[-2] + fVar13 * pfVar4[-3];
          fVar13 = fVar15 + fVar18;
          fVar18 = fVar18 - fVar15;
          fVar14 = pfVar4[uVar9 * -6 + -2];
          fVar15 = fVar16 - fVar17;
          fVar16 = fVar16 + fVar17;
          pfVar4[uVar9 * -2 + -3] = fVar12 - fVar13;
          pfVar4[uVar9 * -2 + -2] = fVar14 - fVar16;
          prVar5->re = fVar12 + fVar13;
          pfVar4[uVar9 * -6 + -2] = fVar14 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + -2];
          fVar14 = pfVar4[uVar10 * -4 + -3];
          pfVar4[-3] = fVar14 - fVar15;
          pfVar4[-2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + -3] = fVar14 + fVar15;
          pfVar4[uVar10 * -4 + -2] = fVar12 + fVar18;
          fVar12 = local_res20[-3];
          fVar14 = local_res20[-2];
          fVar17 = fVar12 * pfVar4[uVar9 * -2 + -1] + pfVar4[uVar9 * -2] * fVar14;
          fVar13 = pfVar4[uVar9 * -2] * fVar12 - fVar14 * pfVar4[uVar9 * -2 + -1];
          fVar15 = fVar12 * *pfVar4 + fVar14 * ((rfft_complex *)(pfVar4 + -1))->re;
          fVar12 = fVar12 * ((rfft_complex *)(pfVar4 + -1))->re - fVar14 * *pfVar4;
          fVar16 = fVar15 - fVar13;
          fVar15 = fVar15 + fVar13;
          fVar13 = fVar12 + fVar17;
          fVar17 = fVar17 - fVar12;
          fVar12 = pfVar4[uVar9 * -6 + -1];
          fVar14 = pfVar4[uVar9 * -6];
          pfVar4[uVar9 * -2 + -1] = fVar12 - fVar13;
          pfVar4[uVar9 * -2] = fVar14 - fVar15;
          pfVar4[uVar9 * -6 + -1] = fVar12 + fVar13;
          pfVar4[uVar9 * -6] = fVar14 + fVar15;
          fVar12 = pfVar4[uVar10 * -4 + -1];
          fVar14 = pfVar4[(ulonglong)uVar8 * -4];
          ((rfft_complex *)(pfVar4 + -1))->re = fVar12 - fVar16;
          *pfVar4 = fVar14 - fVar17;
          pfVar4[uVar10 * -4 + -1] = fVar12 + fVar16;
          pfVar4[(ulonglong)uVar8 * -4] = fVar14 + fVar17;
          fVar12 = *local_res20;
          fVar14 = local_res20[-1];
          fVar18 = fVar14 * pfVar4[uVar9 * -2 + 1] + fVar12 * pfVar4[uVar9 * -2 + 2];
          fVar17 = fVar14 * pfVar4[uVar9 * -2 + 2] - fVar12 * pfVar4[uVar9 * -2 + 1];
          fVar15 = fVar14 * pfVar4[1] - pfVar4[2] * fVar12;
          fVar13 = pfVar4[uVar9 * -6 + 2];
          fVar16 = pfVar4[2] * fVar14 + fVar12 * pfVar4[1];
          fVar14 = fVar15 + fVar18;
          fVar18 = fVar18 - fVar15;
          fVar12 = pfVar4[uVar9 * -6 + 1];
          fVar15 = fVar16 - fVar17;
          fVar16 = fVar16 + fVar17;
          pfVar4[uVar9 * -2 + 1] = fVar12 - fVar14;
          pfVar4[uVar9 * -2 + 2] = fVar13 - fVar16;
          pfVar4[uVar9 * -6 + 1] = fVar12 + fVar14;
          pfVar4[uVar9 * -6 + 2] = fVar13 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + 2];
          fVar14 = pfVar4[uVar10 * -4 + 1];
          pfVar4[1] = fVar14 - fVar15;
          pfVar4[2] = fVar12 - fVar18;
          pfVar4[uVar10 * -4 + 1] = fVar14 + fVar15;
          pfVar4[uVar10 * -4 + 2] = fVar12 + fVar18;
          fVar12 = local_res20[1];
          prVar5 = prVar5 + 4;
          fVar14 = local_res20[2];
          local_res20 = local_res20 + 8;
          fVar18 = fVar12 * pfVar4[uVar9 * -2 + 3] + pfVar4[(2 - uVar9) * 2] * fVar14;
          fVar17 = fVar12 * pfVar4[(2 - uVar9) * 2] - fVar14 * pfVar4[uVar9 * -2 + 3];
          fVar13 = fVar12 * pfVar4[3] - pfVar4[4] * fVar14;
          fVar16 = pfVar4[4] * fVar12 + fVar14 * pfVar4[3];
          fVar15 = fVar13 + fVar18;
          fVar18 = fVar18 - fVar13;
          fVar12 = pfVar4[uVar9 * -6 + 3];
          fVar13 = fVar16 - fVar17;
          fVar16 = fVar16 + fVar17;
          fVar14 = pfVar4[uVar9 * -6 + 4];
          pfVar4[uVar9 * -2 + 3] = fVar12 - fVar15;
          pfVar4[(2 - uVar9) * 2] = fVar14 - fVar16;
          pfVar4[uVar9 * -6 + 3] = fVar12 + fVar15;
          pfVar4[uVar9 * -6 + 4] = fVar14 + fVar16;
          fVar12 = pfVar4[uVar10 * -4 + 3];
          fVar14 = pfVar4[uVar10 * -4 + 4];
          pfVar4[3] = fVar12 - fVar13;
          pfVar4[4] = fVar14 - fVar18;
          pfVar4[uVar10 * -4 + 3] = fVar12 + fVar13;
          pfVar4[uVar10 * -4 + 4] = fVar14 + fVar18;
          pfVar4 = pfVar4 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        if (uVar9 <= uVar6) goto LAB_14f8da7f8;
      }
      pfVar4 = &prVar5[uVar9 * 3].im;
      do {
        fVar12 = (float)radfft_s_twiddles_data[uVar9 * 2 + uVar6 * 2];
        fVar14 = *(float *)(uVar9 * 8 + 0x15352c614 + uVar6 * 8);
        uVar6 = uVar6 + 1;
        fVar17 = fVar12 * pfVar4[uVar9 * -2] - pfVar4[uVar9 * -2 + -1] * fVar14;
        fVar18 = pfVar4[uVar9 * -2 + -1] * fVar12 + fVar14 * pfVar4[uVar9 * -2];
        fVar13 = fVar12 * ((rfft_complex *)(pfVar4 + -1))->re - *pfVar4 * fVar14;
        fVar16 = fVar14 * ((rfft_complex *)(pfVar4 + -1))->re + *pfVar4 * fVar12;
        fVar12 = pfVar4[uVar9 * -6 + -1];
        fVar15 = fVar13 + fVar18;
        fVar18 = fVar18 - fVar13;
        fVar14 = pfVar4[uVar9 * -6];
        fVar13 = fVar16 - fVar17;
        fVar16 = fVar16 + fVar17;
        pfVar4[uVar9 * -2 + -1] = fVar12 - fVar15;
        pfVar4[uVar9 * -2] = fVar14 - fVar16;
        pfVar4[uVar9 * -6 + -1] = fVar12 + fVar15;
        pfVar4[uVar9 * -6] = fVar14 + fVar16;
        fVar12 = pfVar4[uVar10 * -4 + -1];
        fVar14 = pfVar4[uVar9 * -4];
        ((rfft_complex *)(pfVar4 + -1))->re = fVar12 - fVar13;
        *pfVar4 = fVar14 - fVar18;
        pfVar4[uVar10 * -4 + -1] = fVar12 + fVar13;
        pfVar4[uVar9 * -4] = fVar14 + fVar18;
        pfVar4 = pfVar4 + 2;
      } while (uVar6 < uVar9);
    }
LAB_14f8da7f8:
    pPVar3 = pPVar11 + 1;
    pPVar11 = pPVar11 + 1;
    if (param_3 <= pPVar3->Nloop) {
      return;
    }
  } while( true );
}

// scalar_radix4 @ 14f8da850

void __cdecl
scalar_radix4(rfft_complex *param_1,rfft_complex *param_2,rfft_complex *param_3,
             rfft_complex *param_4,rfft_complex *param_5,ulong64 param_6,ulong64 param_7,
             ushort *param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_6 < param_7) {
    if (3 < param_7 - param_6) {
      puVar5 = param_8 + param_6 + 2;
      lVar7 = (longlong)param_5 - (longlong)param_2;
      pfVar3 = &param_2[param_6 + 1].im;
      lVar6 = (longlong)param_4 - (longlong)param_2;
      lVar4 = (longlong)param_3 - (longlong)param_2;
      lVar2 = ((param_7 - param_6) - 4 >> 2) + 1;
      param_6 = param_6 + lVar2 * 4;
      do {
        fVar13 = *(float *)(lVar7 + -0xc + (longlong)pfVar3);
        fVar10 = *(float *)(lVar4 + -8 + (longlong)pfVar3);
        fVar9 = fVar13 + *(float *)(lVar4 + -0xc + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + -0xc + (longlong)pfVar3);
        fVar15 = *(float *)(lVar6 + -0xc + (longlong)pfVar3);
        fVar8 = fVar10 + *(float *)(lVar7 + -8 + (longlong)pfVar3);
        fVar10 = fVar10 - *(float *)(lVar7 + -8 + (longlong)pfVar3);
        fVar11 = pfVar3[-2] + *(float *)(lVar6 + -8 + (longlong)pfVar3);
        fVar14 = pfVar3[-2] - *(float *)(lVar6 + -8 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[-2];
        fVar12 = fVar15 + pfVar3[-3];
        fVar15 = pfVar3[-3] - fVar15;
        param_1[uVar1].re = fVar9 + fVar12;
        param_1[uVar1].im = fVar8 + fVar11;
        param_1[uVar1 + 2].re = fVar12 - fVar9;
        param_1[uVar1 + 2].im = fVar11 - fVar8;
        param_1[uVar1 + 1].re = fVar10 + fVar15;
        param_1[uVar1 + 1].im = fVar13 + fVar14;
        param_1[uVar1 + 3].re = fVar15 - fVar10;
        param_1[uVar1 + 3].im = fVar14 - fVar13;
        fVar13 = *(float *)(lVar7 + -4 + (longlong)pfVar3);
        fVar10 = *(float *)(lVar6 + -4 + (longlong)pfVar3);
        fVar8 = fVar13 + *(float *)(lVar4 + -4 + (longlong)pfVar3);
        fVar12 = fVar10 + ((rfft_complex *)(pfVar3 + -1))->re;
        fVar15 = *(float *)(lVar4 + (longlong)pfVar3) + *(float *)(lVar7 + (longlong)pfVar3);
        fVar9 = *(float *)(lVar4 + (longlong)pfVar3) - *(float *)(lVar7 + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + -4 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[-1];
        fVar10 = ((rfft_complex *)(pfVar3 + -1))->re - fVar10;
        fVar11 = *(float *)(lVar6 + (longlong)pfVar3) + *pfVar3;
        fVar14 = *pfVar3 - *(float *)(lVar6 + (longlong)pfVar3);
        param_1[uVar1].re = fVar8 + fVar12;
        param_1[uVar1].im = fVar15 + fVar11;
        param_1[uVar1 + 2].re = fVar12 - fVar8;
        param_1[uVar1 + 2].im = fVar11 - fVar15;
        param_1[uVar1 + 1].re = fVar9 + fVar10;
        param_1[uVar1 + 1].im = fVar13 + fVar14;
        param_1[uVar1 + 3].re = fVar10 - fVar9;
        param_1[uVar1 + 3].im = fVar14 - fVar13;
        uVar1 = (ulonglong)*puVar5;
        fVar11 = pfVar3[1] + *(float *)(lVar6 + 4 + (longlong)pfVar3);
        fVar14 = pfVar3[1] - *(float *)(lVar6 + 4 + (longlong)pfVar3);
        fVar13 = *(float *)(lVar7 + 4 + (longlong)pfVar3);
        fVar10 = *(float *)(lVar4 + 8 + (longlong)pfVar3);
        fVar8 = fVar13 + *(float *)(lVar4 + 4 + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + 4 + (longlong)pfVar3);
        fVar15 = fVar10 + *(float *)(lVar7 + 8 + (longlong)pfVar3);
        fVar10 = fVar10 - *(float *)(lVar7 + 8 + (longlong)pfVar3);
        fVar9 = pfVar3[2] + *(float *)(lVar6 + 8 + (longlong)pfVar3);
        fVar12 = pfVar3[2] - *(float *)(lVar6 + 8 + (longlong)pfVar3);
        param_1[uVar1].re = fVar8 + fVar11;
        param_1[uVar1].im = fVar15 + fVar9;
        param_1[uVar1 + 2].re = fVar11 - fVar8;
        param_1[uVar1 + 2].im = fVar9 - fVar15;
        param_1[uVar1 + 1].re = fVar10 + fVar14;
        param_1[uVar1 + 1].im = fVar13 + fVar12;
        param_1[uVar1 + 3].re = fVar14 - fVar10;
        param_1[uVar1 + 3].im = fVar12 - fVar13;
        fVar13 = *(float *)(lVar7 + 0xc + (longlong)pfVar3);
        fVar10 = *(float *)(lVar4 + 0x10 + (longlong)pfVar3);
        fVar15 = *(float *)(lVar6 + 0xc + (longlong)pfVar3);
        fVar9 = fVar13 + *(float *)(lVar4 + 0xc + (longlong)pfVar3);
        fVar8 = fVar10 + *(float *)(lVar7 + 0x10 + (longlong)pfVar3);
        fVar11 = pfVar3[4] + *(float *)(lVar6 + 0x10 + (longlong)pfVar3);
        fVar10 = fVar10 - *(float *)(lVar7 + 0x10 + (longlong)pfVar3);
        fVar13 = fVar13 - *(float *)(lVar4 + 0xc + (longlong)pfVar3);
        fVar14 = pfVar3[4] - *(float *)(lVar6 + 0x10 + (longlong)pfVar3);
        uVar1 = (ulonglong)puVar5[1];
        fVar12 = fVar15 + pfVar3[3];
        fVar15 = pfVar3[3] - fVar15;
        pfVar3 = pfVar3 + 8;
        puVar5 = puVar5 + 4;
        param_1[uVar1].re = fVar9 + fVar12;
        param_1[uVar1].im = fVar8 + fVar11;
        param_1[uVar1 + 2].re = fVar12 - fVar9;
        param_1[uVar1 + 2].im = fVar11 - fVar8;
        param_1[uVar1 + 1].re = fVar10 + fVar15;
        param_1[uVar1 + 1].im = fVar13 + fVar14;
        param_1[uVar1 + 3].re = fVar15 - fVar10;
        param_1[uVar1 + 3].im = fVar14 - fVar13;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      if (param_7 <= param_6) {
        return;
      }
    }
    lVar4 = (longlong)param_3 - (longlong)param_2;
    pfVar3 = &param_2[param_6].im;
    lVar2 = (longlong)param_5 - (longlong)param_2;
    do {
      fVar13 = *(float *)(lVar2 + -4 + (longlong)pfVar3);
      fVar10 = *(float *)(((longlong)param_4 - (longlong)param_2) + -4 + (longlong)pfVar3);
      fVar15 = *(float *)((longlong)pfVar3 + ((longlong)param_4 - (longlong)param_2));
      fVar9 = fVar13 + *(float *)(lVar4 + -4 + (longlong)pfVar3);
      fVar8 = *(float *)((longlong)pfVar3 + lVar4) + *(float *)((longlong)pfVar3 + lVar2);
      fVar14 = fVar10 + ((rfft_complex *)(pfVar3 + -1))->re;
      fVar11 = *(float *)((longlong)pfVar3 + lVar4) - *(float *)((longlong)pfVar3 + lVar2);
      fVar13 = fVar13 - *(float *)(lVar4 + -4 + (longlong)pfVar3);
      uVar1 = (ulonglong)param_8[param_6];
      fVar10 = ((rfft_complex *)(pfVar3 + -1))->re - fVar10;
      fVar12 = fVar15 + *pfVar3;
      fVar15 = *pfVar3 - fVar15;
      param_6 = param_6 + 1;
      pfVar3 = pfVar3 + 2;
      param_1[uVar1].re = fVar9 + fVar14;
      param_1[uVar1 + 2].re = fVar14 - fVar9;
      param_1[uVar1].im = fVar8 + fVar12;
      param_1[uVar1 + 2].im = fVar12 - fVar8;
      param_1[uVar1 + 1].re = fVar11 + fVar10;
      param_1[uVar1 + 1].im = fVar13 + fVar15;
      param_1[uVar1 + 3].re = fVar10 - fVar11;
      param_1[uVar1 + 3].im = fVar15 - fVar13;
    } while (param_6 < param_7);
  }
  return;
}

// scalar_2radix2 @ 14f8dad80

void __cdecl
scalar_2radix2(rfft_complex *param_1,rfft_complex *param_2,rfft_complex *param_3,
              rfft_complex *param_4,rfft_complex *param_5,ulong64 param_6,ulong64 param_7,
              ushort *param_8)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_6 < param_7) {
    if (3 < param_7 - param_6) {
      pfVar4 = &param_4[param_6 + 1].im;
      puVar7 = param_8 + param_6 + 2;
      lVar9 = (longlong)param_3 - (longlong)param_4;
      lVar5 = (longlong)param_2 - (longlong)param_4;
      lVar8 = (longlong)param_5 - (longlong)param_4;
      lVar6 = ((param_7 - param_6) - 4 >> 2) + 1;
      param_6 = param_6 + lVar6 * 4;
      do {
        uVar3 = (ulonglong)puVar7[-2];
        param_1[uVar3].re = pfVar4[-3] + *(float *)((longlong)pfVar4 + lVar5 + -0xc);
        param_1[uVar3].im = pfVar4[-2] + *(float *)((longlong)pfVar4 + lVar5 + -8);
        param_1[uVar3 + 1].re = *(float *)((longlong)pfVar4 + lVar5 + -0xc) - pfVar4[-3];
        param_1[uVar3 + 1].im = *(float *)((longlong)pfVar4 + lVar5 + -8) - pfVar4[-2];
        param_1[uVar3 + 2].re =
             *(float *)(lVar9 + -0xc + (longlong)pfVar4) +
             *(float *)(lVar8 + -0xc + (longlong)pfVar4);
        param_1[uVar3 + 2].im =
             *(float *)(lVar9 + -8 + (longlong)pfVar4) + *(float *)(lVar8 + -8 + (longlong)pfVar4);
        param_1[uVar3 + 3].re =
             *(float *)(lVar8 + -0xc + (longlong)pfVar4) -
             *(float *)(lVar9 + -0xc + (longlong)pfVar4);
        param_1[uVar3 + 3].im =
             *(float *)(lVar8 + -8 + (longlong)pfVar4) - *(float *)(lVar9 + -8 + (longlong)pfVar4);
        uVar3 = (ulonglong)puVar7[-1];
        param_1[uVar3].re =
             ((rfft_complex *)(pfVar4 + -1))->re + *(float *)((longlong)pfVar4 + lVar5 + -4);
        param_1[uVar3].im = *(float *)((longlong)pfVar4 + lVar5) + *pfVar4;
        param_1[uVar3 + 1].re =
             *(float *)((longlong)pfVar4 + lVar5 + -4) - ((rfft_complex *)(pfVar4 + -1))->re;
        param_1[uVar3 + 1].im = *(float *)((longlong)pfVar4 + lVar5) - *pfVar4;
        param_1[uVar3 + 2].re =
             *(float *)(lVar8 + -4 + (longlong)pfVar4) + *(float *)(lVar9 + -4 + (longlong)pfVar4);
        param_1[uVar3 + 2].im =
             *(float *)(lVar9 + (longlong)pfVar4) + *(float *)(lVar8 + (longlong)pfVar4);
        param_1[uVar3 + 3].re =
             *(float *)(lVar8 + -4 + (longlong)pfVar4) - *(float *)(lVar9 + -4 + (longlong)pfVar4);
        param_1[uVar3 + 3].im =
             *(float *)(lVar8 + (longlong)pfVar4) - *(float *)(lVar9 + (longlong)pfVar4);
        uVar3 = (ulonglong)*puVar7;
        param_1[uVar3].re = pfVar4[1] + *(float *)((longlong)pfVar4 + lVar5 + 4);
        param_1[uVar3].im = pfVar4[2] + *(float *)((longlong)pfVar4 + lVar5 + 8);
        param_1[uVar3 + 1].re = *(float *)((longlong)pfVar4 + lVar5 + 4) - pfVar4[1];
        param_1[uVar3 + 1].im = *(float *)((longlong)pfVar4 + lVar5 + 8) - pfVar4[2];
        param_1[uVar3 + 2].re =
             *(float *)(lVar9 + 4 + (longlong)pfVar4) + *(float *)(lVar8 + 4 + (longlong)pfVar4);
        param_1[uVar3 + 2].im =
             *(float *)(lVar9 + 8 + (longlong)pfVar4) + *(float *)(lVar8 + 8 + (longlong)pfVar4);
        param_1[uVar3 + 3].re =
             *(float *)(lVar8 + 4 + (longlong)pfVar4) - *(float *)(lVar9 + 4 + (longlong)pfVar4);
        param_1[uVar3 + 3].im =
             *(float *)(lVar8 + 8 + (longlong)pfVar4) - *(float *)(lVar9 + 8 + (longlong)pfVar4);
        uVar3 = (ulonglong)puVar7[1];
        param_1[uVar3].re = pfVar4[3] + *(float *)((longlong)pfVar4 + lVar5 + 0xc);
        param_1[uVar3].im = pfVar4[4] + *(float *)((longlong)pfVar4 + lVar5 + 0x10);
        puVar7 = puVar7 + 4;
        param_1[uVar3 + 1].re = *(float *)((longlong)pfVar4 + lVar5 + 0xc) - pfVar4[3];
        param_1[uVar3 + 1].im = *(float *)((longlong)pfVar4 + lVar5 + 0x10) - pfVar4[4];
        param_1[uVar3 + 2].re =
             *(float *)(lVar8 + 0xc + (longlong)pfVar4) + *(float *)(lVar9 + 0xc + (longlong)pfVar4)
        ;
        param_1[uVar3 + 2].im =
             *(float *)(lVar8 + 0x10 + (longlong)pfVar4) +
             *(float *)(lVar9 + 0x10 + (longlong)pfVar4);
        param_1[uVar3 + 3].re =
             *(float *)(lVar8 + 0xc + (longlong)pfVar4) - *(float *)(lVar9 + 0xc + (longlong)pfVar4)
        ;
        pfVar1 = (float *)(lVar8 + 0x10 + (longlong)pfVar4);
        pfVar2 = (float *)(lVar9 + 0x10 + (longlong)pfVar4);
        pfVar4 = pfVar4 + 8;
        param_1[uVar3 + 3].im = *pfVar1 - *pfVar2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (param_7 <= param_6) {
        return;
      }
    }
    lVar5 = (longlong)param_2 - (longlong)param_4;
    lVar6 = (longlong)param_5 - (longlong)param_4;
    pfVar4 = &param_4[param_6].im;
    lVar8 = (longlong)param_3 - (longlong)param_4;
    do {
      uVar3 = (ulonglong)param_8[param_6];
      param_6 = param_6 + 1;
      param_1[uVar3].re =
           ((rfft_complex *)(pfVar4 + -1))->re + *(float *)(lVar5 + -4 + (longlong)pfVar4);
      param_1[uVar3].im = *pfVar4 + *(float *)((longlong)pfVar4 + lVar5);
      param_1[uVar3 + 1].re =
           *(float *)(lVar5 + -4 + (longlong)pfVar4) - ((rfft_complex *)(pfVar4 + -1))->re;
      param_1[uVar3 + 1].im = *(float *)((longlong)pfVar4 + lVar5) - *pfVar4;
      param_1[uVar3 + 2].re =
           *(float *)(lVar8 + -4 + (longlong)pfVar4) + *(float *)(lVar6 + -4 + (longlong)pfVar4);
      param_1[uVar3 + 2].im =
           *(float *)((longlong)pfVar4 + lVar8) + *(float *)((longlong)pfVar4 + lVar6);
      param_1[uVar3 + 3].re =
           *(float *)(lVar6 + -4 + (longlong)pfVar4) - *(float *)(lVar8 + -4 + (longlong)pfVar4);
      pfVar1 = (float *)((longlong)pfVar4 + lVar6);
      pfVar2 = (float *)((longlong)pfVar4 + lVar8);
      pfVar4 = pfVar4 + 2;
      param_1[uVar3 + 3].im = *pfVar1 - *pfVar2;
    } while (param_6 < param_7);
  }
  return;
}

// scalar_dct_split @ 14f8db1a0

void __cdecl scalar_dct_split(float *param_1,float *param_2,ulong64 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pfVar4 = param_1 + param_3;
  uVar6 = param_3 >> 1;
  uVar7 = 0;
  if (3 < uVar6) {
    lVar5 = (uVar6 - 4 >> 2) + 1;
    uVar7 = lVar5 * 4;
    do {
      fVar2 = param_2[1];
      *param_1 = *param_2;
      pfVar4[-1] = fVar2;
      fVar2 = param_2[3];
      param_1[1] = param_2[2];
      pfVar4[-2] = fVar2;
      fVar2 = param_2[5];
      param_1[2] = param_2[4];
      pfVar4[-3] = fVar2;
      pfVar4 = pfVar4 + -4;
      pfVar1 = param_2 + 6;
      fVar2 = param_2[7];
      param_2 = param_2 + 8;
      param_1[3] = *pfVar1;
      param_1 = param_1 + 4;
      *pfVar4 = fVar2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (uVar7 < uVar6) {
    lVar5 = uVar6 - uVar7;
    do {
      fVar2 = *param_2;
      pfVar4 = pfVar4 + -1;
      fVar3 = param_2[1];
      param_2 = param_2 + 2;
      *param_1 = fVar2;
      param_1 = param_1 + 1;
      *pfVar4 = fVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// scalar_dct_merge @ 14f8db270

void __cdecl scalar_dct_merge(float *param_1,float *param_2,ulong64 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pfVar5 = param_2 + param_3;
  uVar6 = param_3 >> 1;
  uVar7 = 0;
  if (3 < uVar6) {
    lVar4 = (uVar6 - 4 >> 2) + 1;
    uVar7 = lVar4 * 4;
    do {
      fVar2 = pfVar5[-1];
      *param_1 = *param_2;
      param_1[1] = fVar2;
      fVar2 = pfVar5[-2];
      param_1[2] = param_2[1];
      param_1[3] = fVar2;
      fVar2 = pfVar5[-3];
      pfVar5 = pfVar5 + -4;
      param_1[4] = param_2[2];
      param_1[5] = fVar2;
      pfVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      fVar2 = *pfVar5;
      param_1[6] = *pfVar1;
      param_1[7] = fVar2;
      param_1 = param_1 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (uVar7 < uVar6) {
    lVar4 = uVar6 - uVar7;
    do {
      fVar3 = *param_2;
      pfVar5 = pfVar5 + -1;
      fVar2 = *pfVar5;
      param_2 = param_2 + 1;
      *param_1 = fVar3;
      param_1[1] = fVar2;
      param_1 = param_1 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

// scalar_dct_merge_s16 @ 14f8db330

void __cdecl scalar_dct_merge_s16(short *param_1,float param_2,float *param_3,ulong64 param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  
  pfVar7 = param_3 + param_4;
  uVar8 = param_4 >> 1;
  uVar5 = 0;
  if (3 < uVar8) {
    lVar6 = (uVar8 - 4 >> 2) + 1;
    uVar5 = lVar6 * 4;
    do {
      iVar4 = (int)(param_2 * *param_3);
      iVar2 = (int)(param_2 * pfVar7[-1]);
      if (iVar4 < 0x8000) {
        sVar3 = (short)iVar4;
        if (iVar4 < -0x7fff) {
          sVar3 = -0x8000;
        }
      }
      else {
        sVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        sVar1 = (short)iVar2;
        if (iVar2 < -0x7fff) {
          sVar1 = -0x8000;
        }
      }
      else {
        sVar1 = 0x7fff;
      }
      *param_1 = sVar3;
      param_1[1] = sVar1;
      iVar4 = (int)(param_2 * param_3[1]);
      iVar2 = (int)(param_2 * pfVar7[-2]);
      if (iVar4 < 0x8000) {
        sVar3 = (short)iVar4;
        if (iVar4 < -0x7fff) {
          sVar3 = -0x8000;
        }
      }
      else {
        sVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        sVar1 = (short)iVar2;
        if (iVar2 < -0x7fff) {
          sVar1 = -0x8000;
        }
      }
      else {
        sVar1 = 0x7fff;
      }
      param_1[2] = sVar3;
      param_1[3] = sVar1;
      iVar4 = (int)(param_2 * param_3[2]);
      iVar2 = (int)(param_2 * pfVar7[-3]);
      if (iVar4 < 0x8000) {
        sVar3 = (short)iVar4;
        if (iVar4 < -0x7fff) {
          sVar3 = -0x8000;
        }
      }
      else {
        sVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        sVar1 = (short)iVar2;
        if (iVar2 < -0x7fff) {
          sVar1 = -0x8000;
        }
      }
      else {
        sVar1 = 0x7fff;
      }
      param_1[4] = sVar3;
      pfVar7 = pfVar7 + -4;
      param_1[5] = sVar1;
      iVar4 = (int)(param_2 * param_3[3]);
      iVar2 = (int)(param_2 * *pfVar7);
      if (iVar4 < 0x8000) {
        sVar3 = (short)iVar4;
        if (iVar4 < -0x7fff) {
          sVar3 = -0x8000;
        }
      }
      else {
        sVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        sVar1 = (short)iVar2;
        if (iVar2 < -0x7fff) {
          sVar1 = -0x8000;
        }
      }
      else {
        sVar1 = 0x7fff;
      }
      param_1[6] = sVar3;
      param_3 = param_3 + 4;
      param_1[7] = sVar1;
      param_1 = param_1 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (uVar5 < uVar8) {
    lVar6 = uVar8 - uVar5;
    do {
      pfVar7 = pfVar7 + -1;
      iVar4 = (int)(param_2 * *param_3);
      iVar2 = (int)(param_2 * *pfVar7);
      if (iVar4 < 0x8000) {
        sVar3 = (short)iVar4;
        if (iVar4 < -0x7fff) {
          sVar3 = -0x8000;
        }
      }
      else {
        sVar3 = 0x7fff;
      }
      if (iVar2 < 0x8000) {
        sVar1 = (short)iVar2;
        if (iVar2 < -0x7fff) {
          sVar1 = -0x8000;
        }
      }
      else {
        sVar1 = 0x7fff;
      }
      *param_1 = sVar3;
      param_3 = param_3 + 1;
      param_1[1] = sVar1;
      param_1 = param_1 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// scalar_dct_merge_s16s @ 14f8db520

void __cdecl
scalar_dct_merge_s16s(short *param_1,short *param_2,float param_3,float *param_4,ulong64 param_5)

{
  short *psVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  float *pfVar9;
  
  uVar3 = 0;
  uVar4 = param_5 >> 1;
  pfVar9 = param_4 + param_5;
  if (3 < uVar4) {
    lVar2 = (uVar4 - 4 >> 2) + 1;
    uVar3 = lVar2 * 4;
    do {
      iVar8 = (int)(param_3 * *param_4);
      iVar6 = (int)(param_3 * pfVar9[-1]);
      if (iVar8 < 0x8000) {
        sVar7 = (short)iVar8;
        if (iVar8 < -0x7fff) {
          sVar7 = -0x8000;
        }
      }
      else {
        sVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        sVar5 = (short)iVar6;
        if (iVar6 < -0x7fff) {
          sVar5 = -0x8000;
        }
      }
      else {
        sVar5 = 0x7fff;
      }
      *param_1 = *param_2;
      param_1[1] = sVar7;
      sVar7 = param_2[1];
      param_1[3] = sVar5;
      param_1[2] = sVar7;
      iVar8 = (int)(param_3 * param_4[1]);
      iVar6 = (int)(param_3 * pfVar9[-2]);
      if (iVar8 < 0x8000) {
        sVar7 = (short)iVar8;
        if (iVar8 < -0x7fff) {
          sVar7 = -0x8000;
        }
      }
      else {
        sVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        sVar5 = (short)iVar6;
        if (iVar6 < -0x7fff) {
          sVar5 = -0x8000;
        }
      }
      else {
        sVar5 = 0x7fff;
      }
      param_1[4] = param_2[2];
      param_1[5] = sVar7;
      sVar7 = param_2[3];
      param_1[7] = sVar5;
      param_1[6] = sVar7;
      iVar8 = (int)(param_3 * param_4[2]);
      iVar6 = (int)(param_3 * pfVar9[-3]);
      if (iVar8 < 0x8000) {
        sVar7 = (short)iVar8;
        if (iVar8 < -0x7fff) {
          sVar7 = -0x8000;
        }
      }
      else {
        sVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        sVar5 = (short)iVar6;
        if (iVar6 < -0x7fff) {
          sVar5 = -0x8000;
        }
      }
      else {
        sVar5 = 0x7fff;
      }
      pfVar9 = pfVar9 + -4;
      param_1[8] = param_2[4];
      param_1[9] = sVar7;
      sVar7 = param_2[5];
      param_1[0xb] = sVar5;
      param_1[10] = sVar7;
      iVar8 = (int)(param_3 * param_4[3]);
      iVar6 = (int)(param_3 * *pfVar9);
      if (iVar8 < 0x8000) {
        sVar7 = (short)iVar8;
        if (iVar8 < -0x7fff) {
          sVar7 = -0x8000;
        }
      }
      else {
        sVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        sVar5 = (short)iVar6;
        if (iVar6 < -0x7fff) {
          sVar5 = -0x8000;
        }
      }
      else {
        sVar5 = 0x7fff;
      }
      param_4 = param_4 + 4;
      param_1[0xc] = param_2[6];
      param_1[0xd] = sVar7;
      psVar1 = param_2 + 7;
      param_2 = param_2 + 8;
      param_1[0xe] = *psVar1;
      param_1[0xf] = sVar5;
      param_1 = param_1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (uVar3 < uVar4) {
    lVar2 = uVar4 - uVar3;
    do {
      pfVar9 = pfVar9 + -1;
      iVar8 = (int)(param_3 * *param_4);
      iVar6 = (int)(param_3 * *pfVar9);
      if (iVar8 < 0x8000) {
        sVar7 = (short)iVar8;
        if (iVar8 < -0x7fff) {
          sVar7 = -0x8000;
        }
      }
      else {
        sVar7 = 0x7fff;
      }
      if (iVar6 < 0x8000) {
        sVar5 = (short)iVar6;
        if (iVar6 < -0x7fff) {
          sVar5 = -0x8000;
        }
      }
      else {
        sVar5 = 0x7fff;
      }
      param_4 = param_4 + 1;
      *param_1 = *param_2;
      param_1[1] = sVar7;
      psVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      param_1[2] = *psVar1;
      param_1[3] = sVar5;
      param_1 = param_1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// scalar_dct2_modulate @ 14f8db7c0

void __cdecl
scalar_dct2_modulate
          (float *param_1,float *param_2,ulong64 param_3,ulong64 param_4,rfft_complex *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  
  *param_1 = *param_2;
  uVar10 = 1;
  param_1[param_3 >> 1] = param_2[1] * __real_3f3504f3;
  if (1 < param_4) {
    if (3 < param_4 - 1) {
      pfVar5 = &param_5[1].im;
      pfVar7 = param_1 + 3;
      lVar8 = (longlong)param_2 - (longlong)param_5;
      pfVar9 = param_1 + (param_3 - 3);
      lVar6 = (param_4 - 5 >> 2) + 1;
      uVar10 = lVar6 * 4 + 1;
      do {
        fVar1 = ((rfft_complex *)(pfVar5 + -1))->re;
        fVar2 = *pfVar5;
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + -4);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8);
        pfVar7[-2] = fVar2 * fVar4 + fVar1 * fVar3;
        pfVar9[2] = fVar1 * fVar4 - fVar2 * fVar3;
        fVar1 = pfVar5[1];
        fVar2 = pfVar5[2];
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + 4);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8 + 8);
        pfVar7[-1] = fVar2 * fVar4 + fVar1 * fVar3;
        pfVar9[1] = fVar1 * fVar4 - fVar2 * fVar3;
        fVar1 = pfVar5[3];
        fVar2 = pfVar5[4];
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + 0xc);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8 + 0x10);
        *pfVar7 = fVar2 * fVar4 + fVar1 * fVar3;
        *pfVar9 = fVar1 * fVar4 - fVar2 * fVar3;
        fVar1 = pfVar5[5];
        fVar2 = pfVar5[6];
        fVar3 = *(float *)((longlong)pfVar5 + lVar8 + 0x14);
        fVar4 = *(float *)((longlong)pfVar5 + lVar8 + 0x18);
        pfVar5 = pfVar5 + 8;
        pfVar7[1] = fVar2 * fVar4 + fVar1 * fVar3;
        pfVar7 = pfVar7 + 4;
        pfVar9[-1] = fVar1 * fVar4 - fVar2 * fVar3;
        pfVar9 = pfVar9 + -4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (param_4 <= uVar10) {
        return;
      }
    }
    pfVar5 = &param_5[uVar10].im;
    pfVar7 = param_1 + (param_3 - uVar10);
    do {
      fVar1 = ((rfft_complex *)(pfVar5 + -1))->re;
      fVar2 = *pfVar5;
      fVar3 = *(float *)((longlong)pfVar5 + ((longlong)param_2 - (longlong)param_5) + -4);
      fVar4 = *(float *)((longlong)pfVar5 + ((longlong)param_2 - (longlong)param_5));
      pfVar5 = pfVar5 + 2;
      param_1[uVar10] = fVar2 * fVar4 + fVar1 * fVar3;
      uVar10 = uVar10 + 1;
      *pfVar7 = fVar1 * fVar4 - fVar2 * fVar3;
      pfVar7 = pfVar7 + -1;
    } while (uVar10 < param_4);
  }
  return;
}

// scalar_dct3_modulate @ 14f8db9e0

void __cdecl
scalar_dct3_modulate
          (float *param_1,float *param_2,ulong64 param_3,ulong64 param_4,rfft_complex *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar10 = 1;
  *param_1 = *param_2 + *param_2;
  param_1[1] = param_2[param_3 >> 1] * __real_3fb504f3;
  if (1 < param_4) {
    if (3 < param_4 - 1) {
      pfVar5 = param_1 + 3;
      pfVar7 = param_2 + 3;
      pfVar8 = param_2 + (param_3 - 3);
      lVar9 = (longlong)param_5 - (longlong)param_1;
      lVar6 = (param_4 - 5 >> 2) + 1;
      uVar10 = lVar6 * 4 + 1;
      do {
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + -4);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9);
        fVar3 = pfVar7[-2];
        fVar4 = pfVar8[2];
        pfVar5[-1] = fVar1 * fVar3 - fVar2 * fVar4;
        *pfVar5 = fVar1 * fVar4 + fVar2 * fVar3;
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + 4);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9 + 8);
        fVar3 = pfVar7[-1];
        fVar4 = pfVar8[1];
        pfVar5[1] = fVar1 * fVar3 - fVar2 * fVar4;
        pfVar5[2] = fVar1 * fVar4 + fVar2 * fVar3;
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + 0xc);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9 + 0x10);
        fVar3 = *pfVar7;
        fVar4 = *pfVar8;
        pfVar5[3] = fVar1 * fVar3 - fVar2 * fVar4;
        pfVar5[4] = fVar1 * fVar4 + fVar2 * fVar3;
        fVar1 = *(float *)((longlong)pfVar5 + lVar9 + 0x14);
        fVar2 = *(float *)((longlong)pfVar5 + lVar9 + 0x18);
        fVar3 = pfVar7[1];
        fVar4 = pfVar8[-1];
        pfVar7 = pfVar7 + 4;
        pfVar8 = pfVar8 + -4;
        pfVar5[5] = fVar1 * fVar3 - fVar2 * fVar4;
        pfVar5[6] = fVar1 * fVar4 + fVar2 * fVar3;
        pfVar5 = pfVar5 + 8;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (param_4 <= uVar10) {
        return;
      }
    }
    pfVar5 = param_1 + uVar10 * 2 + 1;
    pfVar7 = param_2 + (param_3 - uVar10);
    do {
      fVar1 = *(float *)((longlong)pfVar5 + ((longlong)param_5 - (longlong)param_1) + -4);
      fVar2 = *(float *)((longlong)pfVar5 + ((longlong)param_5 - (longlong)param_1));
      fVar3 = param_2[uVar10];
      fVar4 = *pfVar7;
      uVar10 = uVar10 + 1;
      pfVar7 = pfVar7 + -1;
      pfVar5[-1] = fVar1 * fVar3 - fVar2 * fVar4;
      *pfVar5 = fVar1 * fVar4 + fVar2 * fVar3;
      pfVar5 = pfVar5 + 2;
    } while (uVar10 < param_4);
  }
  return;
}

// sse3_rfpost @ 14f8dbc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse3_rfpost(rfft_complex *param_1,ulong64 param_2,ulong64 param_3)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  rfft_complex *prVar12;
  rfft_complex *prVar13;
  float fVar14;
  float fVar15;
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
  
  fVar10 = _UNK_15076c5cc;
  fVar9 = _UNK_15076c5c8;
  fVar8 = _UNK_15076c5c4;
  fVar7 = ___xmm_bf0000003f000000bf0000003f000000;
  uVar6 = _UNK_15066df7c;
  uVar5 = _UNK_15066df78;
  uVar4 = __xmm_80000000000000008000000000000000._4_4_;
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  if (param_3 < 2) {
    scalar_rfpost(param_1,param_3,param_3);
    return;
  }
  prVar13 = param_1 + 2;
  prVar12 = param_1 + param_3 * 2 + -3;
  scalar_rfpost(param_1,2,param_3);
  if (prVar13 < param_1 + param_2) {
    lVar11 = param_3 * 8 - (longlong)prVar13;
    do {
      pfVar1 = (float *)(lVar11 + 0x15352c620 + (longlong)prVar13);
      fVar19 = *pfVar1;
      fVar21 = pfVar1[2];
      fVar20 = *(float *)((longlong)prVar13 + lVar11 + 0x15352c624);
      fVar2 = *(float *)((longlong)prVar13 + lVar11 + 0x15352c62c);
      fVar14 = (prVar12[1].re - prVar13->re) * fVar7;
      fVar15 = (prVar12[1].im + prVar13->im) * fVar8;
      fVar16 = (prVar12->re - prVar13[1].re) * fVar9;
      fVar17 = (prVar12->im + prVar13[1].im) * fVar10;
      fVar22 = fVar14 + prVar13->re;
      fVar23 = fVar15 + prVar13->im;
      fVar24 = fVar16 + prVar13[1].re;
      fVar25 = fVar17 + prVar13[1].im;
      fVar18 = fVar15 * fVar19 - fVar20 * fVar14;
      fVar19 = fVar14 * fVar19 + fVar20 * fVar15;
      fVar20 = fVar17 * fVar21 - fVar2 * fVar16;
      fVar21 = fVar16 * fVar21 + fVar2 * fVar17;
      prVar13->re = fVar22 - fVar18;
      prVar13->im = fVar23 + fVar19;
      prVar13[1].re = fVar24 - fVar20;
      prVar13[1].im = fVar25 + fVar21;
      prVar13 = prVar13 + 2;
      prVar12->re = (float)((uint)fVar24 ^ uVar5) + fVar20;
      prVar12->im = (float)((uint)fVar25 ^ uVar6) + fVar21;
      prVar12[1].re = (float)((uint)fVar22 ^ uVar3) + fVar18;
      prVar12[1].im = (float)((uint)fVar23 ^ uVar4) + fVar19;
      prVar12 = prVar12 + -2;
    } while (prVar13 < param_1 + param_2);
  }
  return;
}

// sse3_ripre @ 14f8dbd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse3_ripre(rfft_complex *param_1,ulong64 param_2,ulong64 param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  rfft_complex *prVar13;
  rfft_complex *prVar14;
  float fVar15;
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
  
  fVar11 = _UNK_153531f4c;
  fVar10 = _UNK_153531f48;
  fVar9 = _UNK_153531f44;
  fVar8 = ___xmm_3f000000bf0000003f000000bf000000;
  uVar7 = _UNK_15066df7c;
  uVar6 = _UNK_15066df78;
  uVar5 = __xmm_80000000000000008000000000000000._4_4_;
  uVar4 = (uint)__xmm_80000000000000008000000000000000;
  if (param_3 < 2) {
    scalar_rfpost(param_1,param_3,param_3);
    return;
  }
  prVar14 = param_1 + 2;
  prVar13 = param_1 + param_3 * 2 + -3;
  scalar_ripre(param_1,2,param_3);
  if (prVar14 < param_1 + param_2) {
    lVar12 = param_3 * 8 - (longlong)prVar14;
    do {
      pfVar1 = (float *)(lVar12 + 0x15352c620 + (longlong)prVar14);
      fVar16 = *pfVar1;
      fVar17 = pfVar1[2];
      uVar2 = *(uint *)((longlong)prVar14 + lVar12 + 0x15352c624);
      uVar3 = *(uint *)((longlong)prVar14 + lVar12 + 0x15352c62c);
      fVar18 = (prVar13[1].re - prVar14->re) * fVar8;
      fVar19 = (prVar13[1].im + prVar14->im) * fVar9;
      fVar20 = (prVar13->re - prVar14[1].re) * fVar10;
      fVar21 = (prVar13->im + prVar14[1].im) * fVar11;
      fVar22 = prVar14->re - fVar18;
      fVar23 = prVar14->im - fVar19;
      fVar24 = prVar14[1].re - fVar20;
      fVar25 = prVar14[1].im - fVar21;
      fVar15 = (float)(uVar2 ^ uVar4) * fVar18 + fVar19 * fVar16;
      fVar16 = (float)(uVar2 ^ uVar5) * fVar19 + fVar18 * fVar16;
      fVar18 = (float)(uVar3 ^ uVar6) * fVar20 + fVar21 * fVar17;
      fVar17 = (float)(uVar3 ^ uVar7) * fVar21 + fVar20 * fVar17;
      prVar14->re = fVar22 - fVar15;
      prVar14->im = fVar23 + fVar16;
      prVar14[1].re = fVar24 - fVar18;
      prVar14[1].im = fVar25 + fVar17;
      prVar14 = prVar14 + 2;
      prVar13->re = (float)((uint)fVar24 ^ uVar6) + fVar18;
      prVar13->im = (float)((uint)fVar25 ^ uVar7) + fVar17;
      prVar13[1].re = (float)((uint)fVar22 ^ uVar4) + fVar15;
      prVar13[1].im = (float)((uint)fVar23 ^ uVar5) + fVar16;
      prVar13 = prVar13 + -2;
    } while (prVar14 < param_1 + param_2);
  }
  return;
}

// sse3_cfpass @ 14f8dbe00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse3_cfpass(rfft_complex *param_1,PlanElement *param_2,ulong64 param_3)

{
  rfft_complex *prVar1;
  rfft_complex *prVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  PlanElement *pPVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  rfft_complex *prVar16;
  float *pfVar17;
  PlanElement *pPVar18;
  rfft_complex *prVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  uVar15 = _UNK_15066df7c;
  uVar14 = _UNK_15066df78;
  uVar13 = __xmm_80000000000000008000000000000000._4_4_;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  pPVar18 = param_2 + -1;
  do {
    uVar20 = (ulonglong)pPVar18[1].Nloop;
    prVar19 = param_1 + pPVar18[1].offs;
    prVar1 = prVar19 + uVar20;
    prVar16 = prVar19 + uVar20 * 2;
    pfVar17 = (float *)(radfft_s_twiddles_data + uVar20 * 2);
    do {
      prVar2 = prVar16 + uVar20;
      fVar3 = *pfVar17;
      fVar4 = pfVar17[2];
      fVar5 = pfVar17[1];
      fVar6 = pfVar17[3];
      pfVar17 = pfVar17 + 4;
      fVar7 = prVar19->re;
      fVar8 = prVar19->im;
      fVar9 = prVar19[1].re;
      fVar10 = prVar19[1].im;
      fVar29 = fVar3 * prVar16->re - prVar16->im * fVar5;
      fVar30 = fVar3 * prVar16->im + prVar16->re * fVar5;
      fVar31 = fVar4 * prVar16[1].re - prVar16[1].im * fVar6;
      fVar32 = fVar4 * prVar16[1].im + prVar16[1].re * fVar6;
      fVar21 = prVar2->im * fVar3 - fVar5 * prVar2->re;
      fVar22 = prVar2->re * fVar3 + fVar5 * prVar2->im;
      fVar23 = prVar2[1].im * fVar4 - fVar6 * prVar2[1].re;
      fVar24 = prVar2[1].re * fVar4 + fVar6 * prVar2[1].im;
      prVar2 = prVar16 + -uVar20;
      fVar3 = prVar2->re;
      fVar4 = prVar2->im;
      fVar5 = prVar2[1].re;
      fVar6 = prVar2[1].im;
      fVar25 = fVar22 + fVar29;
      fVar26 = fVar21 + fVar30;
      fVar27 = fVar24 + fVar31;
      fVar28 = fVar23 + fVar32;
      fVar30 = fVar30 - fVar21;
      fVar29 = fVar29 - fVar22;
      fVar32 = fVar32 - fVar23;
      fVar31 = fVar31 - fVar24;
      prVar19->re = fVar7 + fVar25;
      prVar19->im = fVar8 + fVar26;
      prVar19[1].re = fVar9 + fVar27;
      prVar19[1].im = fVar10 + fVar28;
      prVar19 = prVar19 + 2;
      prVar2 = prVar16 + -uVar20;
      prVar2->re = (float)((uint)fVar30 ^ uVar12) + fVar3;
      prVar2->im = (float)((uint)fVar29 ^ uVar13) + fVar4;
      prVar2[1].re = (float)((uint)fVar32 ^ uVar14) + fVar5;
      prVar2[1].im = (float)((uint)fVar31 ^ uVar15) + fVar6;
      prVar16->re = fVar7 - fVar25;
      prVar16->im = fVar8 - fVar26;
      prVar16[1].re = fVar9 - fVar27;
      prVar16[1].im = fVar10 - fVar28;
      prVar2 = prVar16 + uVar20;
      prVar2->re = fVar3 - fVar30;
      prVar2->im = fVar4 + fVar29;
      prVar2[1].re = fVar5 - fVar32;
      prVar2[1].im = fVar6 + fVar31;
      prVar16 = prVar16 + 2;
    } while (prVar19 < prVar1);
    pPVar11 = pPVar18 + 1;
    pPVar18 = pPVar18 + 1;
  } while (pPVar11->Nloop < param_3);
  return;
}

// sse3_cipass @ 14f8dbf10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse3_cipass(rfft_complex *param_1,PlanElement *param_2,ulong64 param_3)

{
  rfft_complex *prVar1;
  rfft_complex *prVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  PlanElement *pPVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  rfft_complex *prVar16;
  float *pfVar17;
  PlanElement *pPVar18;
  rfft_complex *prVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  uVar15 = _UNK_15066df7c;
  uVar14 = _UNK_15066df78;
  uVar13 = __xmm_80000000000000008000000000000000._4_4_;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  pPVar18 = param_2 + -1;
  do {
    uVar20 = (ulonglong)pPVar18[1].Nloop;
    prVar19 = param_1 + pPVar18[1].offs;
    prVar1 = prVar19 + uVar20;
    prVar16 = prVar19 + uVar20 * 2;
    pfVar17 = (float *)(radfft_s_twiddles_data + uVar20 * 2);
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[2];
      prVar2 = prVar16 + uVar20;
      fVar5 = pfVar17[1];
      fVar6 = pfVar17[3];
      pfVar17 = pfVar17 + 4;
      fVar7 = prVar19->re;
      fVar8 = prVar19->im;
      fVar9 = prVar19[1].re;
      fVar10 = prVar19[1].im;
      fVar29 = fVar3 * prVar2->re - prVar2->im * fVar5;
      fVar30 = fVar3 * prVar2->im + prVar2->re * fVar5;
      fVar31 = fVar4 * prVar2[1].re - prVar2[1].im * fVar6;
      fVar32 = fVar4 * prVar2[1].im + prVar2[1].re * fVar6;
      fVar21 = prVar16->im * fVar3 - fVar5 * prVar16->re;
      fVar22 = prVar16->re * fVar3 + fVar5 * prVar16->im;
      fVar23 = prVar16[1].im * fVar4 - fVar6 * prVar16[1].re;
      fVar24 = prVar16[1].re * fVar4 + fVar6 * prVar16[1].im;
      prVar2 = prVar16 + -uVar20;
      fVar3 = prVar2->re;
      fVar4 = prVar2->im;
      fVar5 = prVar2[1].re;
      fVar6 = prVar2[1].im;
      fVar25 = fVar22 + fVar29;
      fVar26 = fVar21 + fVar30;
      fVar27 = fVar24 + fVar31;
      fVar28 = fVar23 + fVar32;
      fVar30 = fVar30 - fVar21;
      fVar29 = fVar29 - fVar22;
      fVar32 = fVar32 - fVar23;
      fVar31 = fVar31 - fVar24;
      prVar19->re = fVar7 + fVar25;
      prVar19->im = fVar8 + fVar26;
      prVar19[1].re = fVar9 + fVar27;
      prVar19[1].im = fVar10 + fVar28;
      prVar19 = prVar19 + 2;
      prVar2 = prVar16 + -uVar20;
      prVar2->re = (float)((uint)fVar30 ^ uVar12) + fVar3;
      prVar2->im = (float)((uint)fVar29 ^ uVar13) + fVar4;
      prVar2[1].re = (float)((uint)fVar32 ^ uVar14) + fVar5;
      prVar2[1].im = (float)((uint)fVar31 ^ uVar15) + fVar6;
      prVar16->re = fVar7 - fVar25;
      prVar16->im = fVar8 - fVar26;
      prVar16[1].re = fVar9 - fVar27;
      prVar16[1].im = fVar10 - fVar28;
      prVar2 = prVar16 + uVar20;
      prVar2->re = fVar3 - fVar30;
      prVar2->im = fVar4 + fVar29;
      prVar2[1].re = fVar5 - fVar32;
      prVar2[1].im = fVar6 + fVar31;
      prVar16 = prVar16 + 2;
    } while (prVar19 < prVar1);
    pPVar11 = pPVar18 + 1;
    pPVar18 = pPVar18 + 1;
  } while (pPVar11->Nloop < param_3);
  return;
}

// sse3_dct2_modulate @ 14f8dc020

void __cdecl
sse3_dct2_modulate(float *param_1,float *param_2,ulong64 param_3,ulong64 param_4,
                  rfft_complex *param_5)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  rfft_complex *prVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  
  if (param_3 < 8) {
    scalar_dct2_modulate(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (((param_4 & 3) != 0) || (param_4 < 4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    scalar_dct2_modulate(param_1,param_2,param_3,4,param_5);
    if (4 < param_4) {
      pfVar13 = param_1 + (param_3 - 5);
      pfVar12 = param_1 + 4;
      lVar14 = (param_4 - 5 >> 1) + 1;
      prVar11 = param_5 + 4;
      do {
        pfVar1 = (float *)(((longlong)param_2 - (longlong)param_5) + (longlong)prVar11);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        fVar7 = prVar11->re;
        fVar8 = prVar11[1].re;
        fVar9 = prVar11->im;
        fVar10 = prVar11[1].im;
        prVar11 = prVar11 + 2;
        *(ulonglong *)pfVar12 =
             CONCAT44(fVar5 * fVar8 + fVar10 * fVar6,fVar3 * fVar7 + fVar9 * fVar4);
        pfVar12 = pfVar12 + 2;
        *(ulonglong *)pfVar13 =
             CONCAT44(fVar4 * fVar7 - fVar9 * fVar3,fVar6 * fVar8 - fVar10 * fVar5);
        pfVar13 = pfVar13 + -2;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}

// sse_rfpost @ 14f8dc110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse_rfpost(rfft_complex *param_1,ulong64 param_2,ulong64 param_3)

{
  float *pfVar1;
  rfft_complex *prVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  rfft_complex *prVar18;
  rfft_complex *prVar19;
  float *pfVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar13 = _UNK_15076c5cc;
  fVar12 = _UNK_15076c5c8;
  fVar11 = _UNK_15076c5c4;
  fVar10 = ___xmm_bf0000003f000000bf0000003f000000;
  uVar9 = _UNK_15066df7c;
  uVar8 = _UNK_15066df78;
  uVar7 = __xmm_80000000000000008000000000000000._4_4_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  if (param_3 < 2) {
    scalar_rfpost(param_1,param_3,param_3);
    return;
  }
  prVar2 = param_1 + param_2;
  pfVar20 = (float *)(radfft_s_twiddles_data + param_3 * 2 + 4);
  prVar19 = param_1 + param_3 * 2 + -3;
  scalar_rfpost(param_1,2,param_3);
  uVar17 = _UNK_153531f3c;
  uVar16 = _UNK_153531f38;
  uVar15 = _UNK_153531f34;
  uVar14 = ___xmm_00000000800000000000000080000000;
  prVar18 = param_1 + 2;
  if (prVar18 < prVar2) {
    if (0x3f < ((longlong)prVar2 + (0xf - (longlong)prVar18) & 0xfffffffffffffff0U)) {
      do {
        fVar23 = (prVar19[1].re + (float)(uVar14 ^ (uint)prVar18->re)) * fVar10;
        fVar24 = (prVar19[1].im + (float)(uVar15 ^ (uint)prVar18->im)) * fVar11;
        fVar25 = (prVar19->re + (float)(uVar16 ^ (uint)prVar18[1].re)) * fVar12;
        fVar26 = (prVar19->im + (float)(uVar17 ^ (uint)prVar18[1].im)) * fVar13;
        fVar27 = fVar23 + prVar18->re;
        fVar28 = fVar24 + prVar18->im;
        fVar29 = fVar25 + prVar18[1].re;
        fVar30 = fVar26 + prVar18[1].im;
        fVar22 = (float)((uint)(pfVar20[1] * fVar23) ^ uVar14) + fVar24 * *pfVar20;
        fVar23 = (float)((uint)(pfVar20[1] * fVar24) ^ uVar15) + fVar23 * *pfVar20;
        fVar24 = (float)((uint)(pfVar20[3] * fVar25) ^ uVar16) + fVar26 * pfVar20[2];
        fVar25 = (float)((uint)(pfVar20[3] * fVar26) ^ uVar17) + fVar25 * pfVar20[2];
        prVar18->re = (float)(uVar14 ^ (uint)fVar22) + fVar27;
        prVar18->im = (float)(uVar15 ^ (uint)fVar23) + fVar28;
        prVar18[1].re = (float)(uVar16 ^ (uint)fVar24) + fVar29;
        prVar18[1].im = (float)(uVar17 ^ (uint)fVar25) + fVar30;
        prVar19->re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19->im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[1].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[1].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        fVar23 = (prVar19[-1].re + (float)(uVar14 ^ (uint)prVar18[2].re)) * fVar10;
        fVar24 = (prVar19[-1].im + (float)(uVar15 ^ (uint)prVar18[2].im)) * fVar11;
        fVar25 = (prVar19[-2].re + (float)(uVar16 ^ (uint)prVar18[3].re)) * fVar12;
        fVar26 = (prVar19[-2].im + (float)(uVar17 ^ (uint)prVar18[3].im)) * fVar13;
        fVar27 = fVar23 + prVar18[2].re;
        fVar28 = fVar24 + prVar18[2].im;
        fVar29 = fVar25 + prVar18[3].re;
        fVar30 = fVar26 + prVar18[3].im;
        fVar22 = (float)((uint)(pfVar20[5] * fVar23) ^ uVar14) + fVar24 * pfVar20[4];
        fVar23 = (float)((uint)(pfVar20[5] * fVar24) ^ uVar15) + fVar23 * pfVar20[4];
        fVar24 = (float)((uint)(pfVar20[7] * fVar25) ^ uVar16) + fVar26 * pfVar20[6];
        fVar25 = (float)((uint)(pfVar20[7] * fVar26) ^ uVar17) + fVar25 * pfVar20[6];
        prVar18[2].re = (float)(uVar14 ^ (uint)fVar22) + fVar27;
        prVar18[2].im = (float)(uVar15 ^ (uint)fVar23) + fVar28;
        prVar18[3].re = (float)(uVar16 ^ (uint)fVar24) + fVar29;
        prVar18[3].im = (float)(uVar17 ^ (uint)fVar25) + fVar30;
        prVar19[-2].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19[-2].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[-1].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[-1].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        fVar23 = (prVar19[-3].re + (float)(uVar14 ^ (uint)prVar18[4].re)) * fVar10;
        fVar24 = (prVar19[-3].im + (float)(uVar15 ^ (uint)prVar18[4].im)) * fVar11;
        fVar25 = (prVar19[-4].re + (float)(uVar16 ^ (uint)prVar18[5].re)) * fVar12;
        fVar26 = (prVar19[-4].im + (float)(uVar17 ^ (uint)prVar18[5].im)) * fVar13;
        fVar27 = fVar23 + prVar18[4].re;
        fVar28 = fVar24 + prVar18[4].im;
        fVar29 = fVar25 + prVar18[5].re;
        fVar30 = fVar26 + prVar18[5].im;
        fVar22 = (float)((uint)(pfVar20[9] * fVar23) ^ uVar14) + fVar24 * pfVar20[8];
        fVar23 = (float)((uint)(pfVar20[9] * fVar24) ^ uVar15) + fVar23 * pfVar20[8];
        fVar24 = (float)((uint)(pfVar20[0xb] * fVar25) ^ uVar16) + fVar26 * pfVar20[10];
        fVar25 = (float)((uint)(pfVar20[0xb] * fVar26) ^ uVar17) + fVar25 * pfVar20[10];
        prVar18[4].re = (float)(uVar14 ^ (uint)fVar22) + fVar27;
        prVar18[4].im = (float)(uVar15 ^ (uint)fVar23) + fVar28;
        prVar18[5].re = (float)(uVar16 ^ (uint)fVar24) + fVar29;
        prVar18[5].im = (float)(uVar17 ^ (uint)fVar25) + fVar30;
        prVar19[-4].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19[-4].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[-3].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[-3].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        pfVar1 = pfVar20 + 0xc;
        pfVar3 = pfVar20 + 0xd;
        pfVar4 = pfVar20 + 0xe;
        pfVar5 = pfVar20 + 0xf;
        pfVar20 = pfVar20 + 0x10;
        fVar23 = (prVar19[-5].re + (float)(uVar14 ^ (uint)prVar18[6].re)) * fVar10;
        fVar24 = (prVar19[-5].im + (float)(uVar15 ^ (uint)prVar18[6].im)) * fVar11;
        fVar25 = (prVar19[-6].re + (float)(uVar16 ^ (uint)prVar18[7].re)) * fVar12;
        fVar26 = (prVar19[-6].im + (float)(uVar17 ^ (uint)prVar18[7].im)) * fVar13;
        fVar27 = fVar23 + prVar18[6].re;
        fVar28 = fVar24 + prVar18[6].im;
        fVar29 = fVar25 + prVar18[7].re;
        fVar30 = fVar26 + prVar18[7].im;
        fVar22 = (float)((uint)(*pfVar3 * fVar23) ^ uVar14) + fVar24 * *pfVar1;
        fVar23 = (float)((uint)(*pfVar3 * fVar24) ^ uVar15) + fVar23 * *pfVar1;
        fVar24 = (float)((uint)(*pfVar5 * fVar25) ^ uVar16) + fVar26 * *pfVar4;
        fVar25 = (float)((uint)(*pfVar5 * fVar26) ^ uVar17) + fVar25 * *pfVar4;
        prVar18[6].re = (float)(uVar14 ^ (uint)fVar22) + fVar27;
        prVar18[6].im = (float)(uVar15 ^ (uint)fVar23) + fVar28;
        prVar18[7].re = (float)(uVar16 ^ (uint)fVar24) + fVar29;
        prVar18[7].im = (float)(uVar17 ^ (uint)fVar25) + fVar30;
        prVar18 = prVar18 + 8;
        prVar19[-6].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19[-6].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[-5].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[-5].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        prVar19 = prVar19 + -8;
      } while (prVar18 < prVar2 + -6);
      if (prVar2 <= prVar18) {
        return;
      }
    }
    uVar17 = _UNK_153531f3c;
    uVar16 = _UNK_153531f38;
    uVar15 = _UNK_153531f34;
    uVar14 = ___xmm_00000000800000000000000080000000;
    prVar19 = prVar19 + 1;
    lVar21 = (longlong)pfVar20 - (longlong)prVar18;
    do {
      pfVar20 = (float *)(lVar21 + (longlong)prVar18);
      fVar23 = ((*prVar19).re + (float)(uVar14 ^ (uint)prVar18->re)) * fVar10;
      fVar24 = ((*prVar19).im + (float)(uVar15 ^ (uint)prVar18->im)) * fVar11;
      fVar25 = (prVar19[-1].re + (float)(uVar16 ^ (uint)prVar18[1].re)) * fVar12;
      fVar26 = (prVar19[-1].im + (float)(uVar17 ^ (uint)prVar18[1].im)) * fVar13;
      fVar27 = fVar23 + prVar18->re;
      fVar28 = fVar24 + prVar18->im;
      fVar29 = fVar25 + prVar18[1].re;
      fVar30 = fVar26 + prVar18[1].im;
      fVar22 = (float)((uint)(pfVar20[1] * fVar23) ^ uVar14) + fVar24 * *pfVar20;
      fVar23 = (float)((uint)(pfVar20[1] * fVar24) ^ uVar15) + fVar23 * *pfVar20;
      fVar24 = (float)((uint)(pfVar20[3] * fVar25) ^ uVar16) + fVar26 * pfVar20[2];
      fVar25 = (float)((uint)(pfVar20[3] * fVar26) ^ uVar17) + fVar25 * pfVar20[2];
      prVar18->re = (float)(uVar14 ^ (uint)fVar22) + fVar27;
      prVar18->im = (float)(uVar15 ^ (uint)fVar23) + fVar28;
      prVar18[1].re = (float)(uVar16 ^ (uint)fVar24) + fVar29;
      prVar18[1].im = (float)(uVar17 ^ (uint)fVar25) + fVar30;
      prVar18 = prVar18 + 2;
      prVar19[-1].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
      prVar19[-1].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
      prVar19->re = (float)((uint)fVar27 ^ uVar6) + fVar22;
      prVar19->im = (float)((uint)fVar28 ^ uVar7) + fVar23;
      prVar19 = prVar19 + -2;
    } while (prVar18 < prVar2);
  }
  return;
}

// sse_ripre @ 14f8dc3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse_ripre(rfft_complex *param_1,ulong64 param_2,ulong64 param_3)

{
  float *pfVar1;
  rfft_complex *prVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  rfft_complex *prVar18;
  rfft_complex *prVar19;
  float *pfVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar17 = _UNK_153531f4c;
  fVar16 = _UNK_153531f48;
  fVar15 = _UNK_153531f44;
  fVar14 = ___xmm_3f000000bf0000003f000000bf000000;
  uVar9 = _UNK_15066df7c;
  uVar8 = _UNK_15066df78;
  uVar7 = __xmm_80000000000000008000000000000000._4_4_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  if (param_3 < 2) {
    scalar_rfpost(param_1,param_3,param_3);
    return;
  }
  prVar2 = param_1 + param_2;
  pfVar20 = (float *)(radfft_s_twiddles_data + param_3 * 2 + 4);
  prVar19 = param_1 + param_3 * 2 + -3;
  scalar_ripre(param_1,2,param_3);
  uVar13 = _UNK_153531f3c;
  uVar12 = _UNK_153531f38;
  uVar11 = _UNK_153531f34;
  uVar10 = ___xmm_00000000800000000000000080000000;
  prVar18 = param_1 + 2;
  if (prVar18 < prVar2) {
    if (0x3f < ((longlong)prVar2 + (0xf - (longlong)prVar18) & 0xfffffffffffffff0U)) {
      do {
        fVar23 = (prVar19[1].re + (float)(uVar10 ^ (uint)prVar18->re)) * fVar14;
        fVar24 = (prVar19[1].im + (float)(uVar11 ^ (uint)prVar18->im)) * fVar15;
        fVar25 = (prVar19->re + (float)(uVar12 ^ (uint)prVar18[1].re)) * fVar16;
        fVar26 = (prVar19->im + (float)(uVar13 ^ (uint)prVar18[1].im)) * fVar17;
        fVar27 = prVar18->re - fVar23;
        fVar28 = prVar18->im - fVar24;
        fVar29 = prVar18[1].re - fVar25;
        fVar30 = prVar18[1].im - fVar26;
        fVar22 = (float)((uint)pfVar20[1] ^ uVar6) * fVar23 + fVar24 * *pfVar20;
        fVar23 = (float)((uint)pfVar20[1] ^ uVar7) * fVar24 + fVar23 * *pfVar20;
        fVar24 = (float)((uint)pfVar20[3] ^ uVar8) * fVar25 + fVar26 * pfVar20[2];
        fVar25 = (float)((uint)pfVar20[3] ^ uVar9) * fVar26 + fVar25 * pfVar20[2];
        prVar18->re = (float)(uVar10 ^ (uint)fVar22) + fVar27;
        prVar18->im = (float)(uVar11 ^ (uint)fVar23) + fVar28;
        prVar18[1].re = (float)(uVar12 ^ (uint)fVar24) + fVar29;
        prVar18[1].im = (float)(uVar13 ^ (uint)fVar25) + fVar30;
        prVar19->re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19->im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[1].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[1].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        fVar23 = (prVar19[-1].re + (float)(uVar10 ^ (uint)prVar18[2].re)) * fVar14;
        fVar24 = (prVar19[-1].im + (float)(uVar11 ^ (uint)prVar18[2].im)) * fVar15;
        fVar25 = (prVar19[-2].re + (float)(uVar12 ^ (uint)prVar18[3].re)) * fVar16;
        fVar26 = (prVar19[-2].im + (float)(uVar13 ^ (uint)prVar18[3].im)) * fVar17;
        fVar27 = prVar18[2].re - fVar23;
        fVar28 = prVar18[2].im - fVar24;
        fVar29 = prVar18[3].re - fVar25;
        fVar30 = prVar18[3].im - fVar26;
        fVar22 = (float)((uint)pfVar20[5] ^ uVar6) * fVar23 + fVar24 * pfVar20[4];
        fVar23 = (float)((uint)pfVar20[5] ^ uVar7) * fVar24 + fVar23 * pfVar20[4];
        fVar24 = (float)((uint)pfVar20[7] ^ uVar8) * fVar25 + fVar26 * pfVar20[6];
        fVar25 = (float)((uint)pfVar20[7] ^ uVar9) * fVar26 + fVar25 * pfVar20[6];
        prVar18[2].re = (float)(uVar10 ^ (uint)fVar22) + fVar27;
        prVar18[2].im = (float)(uVar11 ^ (uint)fVar23) + fVar28;
        prVar18[3].re = (float)(uVar12 ^ (uint)fVar24) + fVar29;
        prVar18[3].im = (float)(uVar13 ^ (uint)fVar25) + fVar30;
        prVar19[-2].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19[-2].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[-1].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[-1].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        fVar23 = (prVar19[-3].re + (float)(uVar10 ^ (uint)prVar18[4].re)) * fVar14;
        fVar24 = (prVar19[-3].im + (float)(uVar11 ^ (uint)prVar18[4].im)) * fVar15;
        fVar25 = (prVar19[-4].re + (float)(uVar12 ^ (uint)prVar18[5].re)) * fVar16;
        fVar26 = (prVar19[-4].im + (float)(uVar13 ^ (uint)prVar18[5].im)) * fVar17;
        fVar27 = prVar18[4].re - fVar23;
        fVar28 = prVar18[4].im - fVar24;
        fVar29 = prVar18[5].re - fVar25;
        fVar30 = prVar18[5].im - fVar26;
        fVar22 = (float)((uint)pfVar20[9] ^ uVar6) * fVar23 + fVar24 * pfVar20[8];
        fVar23 = (float)((uint)pfVar20[9] ^ uVar7) * fVar24 + fVar23 * pfVar20[8];
        fVar24 = (float)((uint)pfVar20[0xb] ^ uVar8) * fVar25 + fVar26 * pfVar20[10];
        fVar25 = (float)((uint)pfVar20[0xb] ^ uVar9) * fVar26 + fVar25 * pfVar20[10];
        prVar18[4].re = (float)(uVar10 ^ (uint)fVar22) + fVar27;
        prVar18[4].im = (float)(uVar11 ^ (uint)fVar23) + fVar28;
        prVar18[5].re = (float)(uVar12 ^ (uint)fVar24) + fVar29;
        prVar18[5].im = (float)(uVar13 ^ (uint)fVar25) + fVar30;
        prVar19[-4].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19[-4].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[-3].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[-3].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        pfVar1 = pfVar20 + 0xc;
        pfVar3 = pfVar20 + 0xd;
        pfVar4 = pfVar20 + 0xe;
        pfVar5 = pfVar20 + 0xf;
        pfVar20 = pfVar20 + 0x10;
        fVar23 = (prVar19[-5].re + (float)(uVar10 ^ (uint)prVar18[6].re)) * fVar14;
        fVar24 = (prVar19[-5].im + (float)(uVar11 ^ (uint)prVar18[6].im)) * fVar15;
        fVar25 = (prVar19[-6].re + (float)(uVar12 ^ (uint)prVar18[7].re)) * fVar16;
        fVar26 = (prVar19[-6].im + (float)(uVar13 ^ (uint)prVar18[7].im)) * fVar17;
        fVar27 = prVar18[6].re - fVar23;
        fVar28 = prVar18[6].im - fVar24;
        fVar29 = prVar18[7].re - fVar25;
        fVar30 = prVar18[7].im - fVar26;
        fVar22 = (float)((uint)*pfVar3 ^ uVar6) * fVar23 + fVar24 * *pfVar1;
        fVar23 = (float)((uint)*pfVar3 ^ uVar7) * fVar24 + fVar23 * *pfVar1;
        fVar24 = (float)((uint)*pfVar5 ^ uVar8) * fVar25 + fVar26 * *pfVar4;
        fVar25 = (float)((uint)*pfVar5 ^ uVar9) * fVar26 + fVar25 * *pfVar4;
        prVar18[6].re = (float)(uVar10 ^ (uint)fVar22) + fVar27;
        prVar18[6].im = (float)(uVar11 ^ (uint)fVar23) + fVar28;
        prVar18[7].re = (float)(uVar12 ^ (uint)fVar24) + fVar29;
        prVar18[7].im = (float)(uVar13 ^ (uint)fVar25) + fVar30;
        prVar18 = prVar18 + 8;
        prVar19[-6].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
        prVar19[-6].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
        prVar19[-5].re = (float)((uint)fVar27 ^ uVar6) + fVar22;
        prVar19[-5].im = (float)((uint)fVar28 ^ uVar7) + fVar23;
        prVar19 = prVar19 + -8;
      } while (prVar18 < prVar2 + -6);
      if (prVar2 <= prVar18) {
        return;
      }
    }
    uVar13 = _UNK_153531f3c;
    uVar12 = _UNK_153531f38;
    uVar11 = _UNK_153531f34;
    uVar10 = ___xmm_00000000800000000000000080000000;
    prVar19 = prVar19 + 1;
    lVar21 = (longlong)pfVar20 - (longlong)prVar18;
    do {
      pfVar20 = (float *)(lVar21 + (longlong)prVar18);
      fVar23 = ((*prVar19).re + (float)(uVar10 ^ (uint)prVar18->re)) * fVar14;
      fVar24 = ((*prVar19).im + (float)(uVar11 ^ (uint)prVar18->im)) * fVar15;
      fVar25 = (prVar19[-1].re + (float)(uVar12 ^ (uint)prVar18[1].re)) * fVar16;
      fVar26 = (prVar19[-1].im + (float)(uVar13 ^ (uint)prVar18[1].im)) * fVar17;
      fVar27 = prVar18->re - fVar23;
      fVar28 = prVar18->im - fVar24;
      fVar29 = prVar18[1].re - fVar25;
      fVar30 = prVar18[1].im - fVar26;
      fVar22 = (float)((uint)pfVar20[1] ^ uVar6) * fVar23 + fVar24 * *pfVar20;
      fVar23 = (float)((uint)pfVar20[1] ^ uVar7) * fVar24 + fVar23 * *pfVar20;
      fVar24 = (float)((uint)pfVar20[3] ^ uVar8) * fVar25 + fVar26 * pfVar20[2];
      fVar25 = (float)((uint)pfVar20[3] ^ uVar9) * fVar26 + fVar25 * pfVar20[2];
      prVar18->re = (float)(uVar10 ^ (uint)fVar22) + fVar27;
      prVar18->im = (float)(uVar11 ^ (uint)fVar23) + fVar28;
      prVar18[1].re = (float)(uVar12 ^ (uint)fVar24) + fVar29;
      prVar18[1].im = (float)(uVar13 ^ (uint)fVar25) + fVar30;
      prVar18 = prVar18 + 2;
      prVar19[-1].re = (float)((uint)fVar29 ^ uVar8) + fVar24;
      prVar19[-1].im = (float)((uint)fVar30 ^ uVar9) + fVar25;
      prVar19->re = (float)((uint)fVar27 ^ uVar6) + fVar22;
      prVar19->im = (float)((uint)fVar28 ^ uVar7) + fVar23;
      prVar19 = prVar19 + -2;
    } while (prVar18 < prVar2);
  }
  return;
}

// sse_cfpass @ 14f8dc690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse_cfpass(rfft_complex *param_1,PlanElement *param_2,ulong64 param_3)

{
  rfft_complex *prVar1;
  rfft_complex *prVar2;
  rfft_complex *prVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  PlanElement *pPVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  rfft_complex *prVar21;
  rfft_complex *prVar22;
  PlanElement *pPVar23;
  ulonglong uVar24;
  float *pfVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  uVar20 = _UNK_153531f3c;
  uVar19 = _UNK_153531f38;
  uVar18 = _UNK_153531f34;
  uVar17 = ___xmm_00000000800000000000000080000000;
  uVar16 = _UNK_15066df7c;
  uVar15 = _UNK_15066df78;
  uVar14 = __xmm_80000000000000008000000000000000._4_4_;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  pPVar23 = param_2 + -1;
  do {
    uVar24 = (ulonglong)pPVar23[1].Nloop;
    prVar22 = param_1 + pPVar23[1].offs;
    prVar1 = prVar22 + uVar24;
    prVar21 = prVar22 + uVar24 * 2;
    pfVar25 = (float *)(radfft_s_twiddles_data + uVar24 * 2);
    do {
      prVar2 = prVar21 + uVar24;
      fVar27 = *pfVar25;
      fVar28 = pfVar25[1];
      fVar29 = pfVar25[2];
      fVar30 = pfVar25[3];
      pfVar25 = pfVar25 + 4;
      fVar34 = (float)((uint)(prVar21->im * fVar28) ^ uVar17) + fVar27 * prVar21->re;
      fVar35 = (float)((uint)(prVar21->re * fVar28) ^ uVar18) + fVar27 * prVar21->im;
      fVar36 = (float)((uint)(prVar21[1].im * fVar30) ^ uVar19) + fVar29 * prVar21[1].re;
      fVar37 = (float)((uint)(prVar21[1].re * fVar30) ^ uVar20) + fVar29 * prVar21[1].im;
      prVar3 = prVar21 + -uVar24;
      fVar4 = prVar3->re;
      fVar5 = prVar3->im;
      fVar6 = prVar3[1].re;
      fVar7 = prVar3[1].im;
      fVar8 = prVar22->re;
      fVar9 = prVar22->im;
      fVar10 = prVar22[1].re;
      fVar11 = prVar22[1].im;
      fVar26 = prVar2->im * fVar27 + (float)((uint)(fVar28 * prVar2->re) ^ uVar17);
      fVar27 = prVar2->re * fVar27 + (float)((uint)(fVar28 * prVar2->im) ^ uVar18);
      fVar28 = prVar2[1].im * fVar29 + (float)((uint)(fVar30 * prVar2[1].re) ^ uVar19);
      fVar29 = prVar2[1].re * fVar29 + (float)((uint)(fVar30 * prVar2[1].im) ^ uVar20);
      fVar30 = fVar27 + fVar34;
      fVar31 = fVar26 + fVar35;
      fVar32 = fVar29 + fVar36;
      fVar33 = fVar28 + fVar37;
      fVar35 = fVar35 - fVar26;
      fVar34 = fVar34 - fVar27;
      fVar37 = fVar37 - fVar28;
      fVar36 = fVar36 - fVar29;
      prVar22->re = fVar8 + fVar30;
      prVar22->im = fVar9 + fVar31;
      prVar22[1].re = fVar10 + fVar32;
      prVar22[1].im = fVar11 + fVar33;
      prVar22 = prVar22 + 2;
      prVar2 = prVar21 + -uVar24;
      prVar2->re = (float)((uint)fVar35 ^ uVar13) + fVar4;
      prVar2->im = (float)((uint)fVar34 ^ uVar14) + fVar5;
      prVar2[1].re = (float)((uint)fVar37 ^ uVar15) + fVar6;
      prVar2[1].im = (float)((uint)fVar36 ^ uVar16) + fVar7;
      prVar21->re = fVar8 - fVar30;
      prVar21->im = fVar9 - fVar31;
      prVar21[1].re = fVar10 - fVar32;
      prVar21[1].im = fVar11 - fVar33;
      prVar2 = prVar21 + uVar24;
      prVar2->re = (float)(uVar17 ^ (uint)fVar35) + fVar4;
      prVar2->im = (float)(uVar18 ^ (uint)fVar34) + fVar5;
      prVar2[1].re = (float)(uVar19 ^ (uint)fVar37) + fVar6;
      prVar2[1].im = (float)(uVar20 ^ (uint)fVar36) + fVar7;
      prVar21 = prVar21 + 2;
    } while (prVar22 < prVar1);
    pPVar12 = pPVar23 + 1;
    pPVar23 = pPVar23 + 1;
  } while (pPVar12->Nloop < param_3);
  return;
}

// sse_cipass @ 14f8dc7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sse_cipass(rfft_complex *param_1,PlanElement *param_2,ulong64 param_3)

{
  rfft_complex *prVar1;
  rfft_complex *prVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  PlanElement *pPVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  rfft_complex *prVar20;
  rfft_complex *prVar21;
  PlanElement *pPVar22;
  ulonglong uVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar19 = _UNK_153531f3c;
  uVar18 = _UNK_153531f38;
  uVar17 = _UNK_153531f34;
  uVar16 = ___xmm_00000000800000000000000080000000;
  uVar15 = _UNK_15066df7c;
  uVar14 = _UNK_15066df78;
  uVar13 = __xmm_80000000000000008000000000000000._4_4_;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  pPVar22 = param_2 + -1;
  do {
    uVar23 = (ulonglong)pPVar22[1].Nloop;
    prVar21 = param_1 + pPVar22[1].offs;
    prVar1 = prVar21 + uVar23;
    prVar20 = prVar21 + uVar23 * 2;
    pfVar24 = (float *)(radfft_s_twiddles_data + uVar23 * 2);
    do {
      prVar2 = prVar20 + uVar23;
      fVar26 = *pfVar24;
      fVar27 = pfVar24[1];
      fVar28 = pfVar24[2];
      fVar29 = pfVar24[3];
      pfVar24 = pfVar24 + 4;
      fVar33 = (float)((uint)(prVar2->im * fVar27) ^ uVar16) + fVar26 * prVar2->re;
      fVar34 = (float)((uint)(prVar2->re * fVar27) ^ uVar17) + fVar26 * prVar2->im;
      fVar35 = (float)((uint)(prVar2[1].im * fVar29) ^ uVar18) + fVar28 * prVar2[1].re;
      fVar36 = (float)((uint)(prVar2[1].re * fVar29) ^ uVar19) + fVar28 * prVar2[1].im;
      prVar2 = prVar20 + -uVar23;
      fVar3 = prVar2->re;
      fVar4 = prVar2->im;
      fVar5 = prVar2[1].re;
      fVar6 = prVar2[1].im;
      fVar7 = prVar21->re;
      fVar8 = prVar21->im;
      fVar9 = prVar21[1].re;
      fVar10 = prVar21[1].im;
      fVar25 = prVar20->im * fVar26 + (float)((uint)(fVar27 * prVar20->re) ^ uVar16);
      fVar26 = prVar20->re * fVar26 + (float)((uint)(fVar27 * prVar20->im) ^ uVar17);
      fVar27 = prVar20[1].im * fVar28 + (float)((uint)(fVar29 * prVar20[1].re) ^ uVar18);
      fVar28 = prVar20[1].re * fVar28 + (float)((uint)(fVar29 * prVar20[1].im) ^ uVar19);
      fVar29 = fVar26 + fVar33;
      fVar30 = fVar25 + fVar34;
      fVar31 = fVar28 + fVar35;
      fVar32 = fVar27 + fVar36;
      fVar34 = fVar34 - fVar25;
      fVar33 = fVar33 - fVar26;
      fVar36 = fVar36 - fVar27;
      fVar35 = fVar35 - fVar28;
      prVar21->re = fVar7 + fVar29;
      prVar21->im = fVar8 + fVar30;
      prVar21[1].re = fVar9 + fVar31;
      prVar21[1].im = fVar10 + fVar32;
      prVar21 = prVar21 + 2;
      prVar2 = prVar20 + -uVar23;
      prVar2->re = (float)((uint)fVar34 ^ uVar12) + fVar3;
      prVar2->im = (float)((uint)fVar33 ^ uVar13) + fVar4;
      prVar2[1].re = (float)((uint)fVar36 ^ uVar14) + fVar5;
      prVar2[1].im = (float)((uint)fVar35 ^ uVar15) + fVar6;
      prVar20->re = fVar7 - fVar29;
      prVar20->im = fVar8 - fVar30;
      prVar20[1].re = fVar9 - fVar31;
      prVar20[1].im = fVar10 - fVar32;
      prVar2 = prVar20 + uVar23;
      prVar2->re = (float)(uVar16 ^ (uint)fVar34) + fVar3;
      prVar2->im = (float)(uVar17 ^ (uint)fVar33) + fVar4;
      prVar2[1].re = (float)(uVar18 ^ (uint)fVar36) + fVar5;
      prVar2[1].im = (float)(uVar19 ^ (uint)fVar35) + fVar6;
      prVar20 = prVar20 + 2;
    } while (prVar21 < prVar1);
    pPVar11 = pPVar22 + 1;
    pPVar22 = pPVar22 + 1;
  } while (pPVar11->Nloop < param_3);
  return;
}

// sse_dct2_modulate @ 14f8dc910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
sse_dct2_modulate(float *param_1,float *param_2,ulong64 param_3,ulong64 param_4,
                 rfft_complex *param_5)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  rfft_complex *prVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  
  if (param_3 < 8) {
    scalar_dct2_modulate(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (((param_4 & 3) != 0) || (param_4 < 4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    scalar_dct2_modulate(param_1,param_2,param_3,4,param_5);
    uVar14 = _UNK_153531f3c;
    uVar13 = _UNK_153531f38;
    uVar12 = _UNK_153531f34;
    uVar11 = ___xmm_00000000800000000000000080000000;
    if (4 < param_4) {
      pfVar16 = param_1 + 4;
      pfVar17 = param_1 + (param_3 - 5);
      prVar15 = param_5 + 4;
      lVar18 = (param_4 - 5 >> 1) + 1;
      do {
        fVar3 = prVar15->re;
        fVar4 = prVar15->im;
        fVar5 = prVar15[1].re;
        fVar6 = prVar15[1].im;
        pfVar1 = (float *)(((longlong)param_2 - (longlong)param_5) + (longlong)prVar15);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        prVar15 = prVar15 + 2;
        *(ulonglong *)pfVar16 =
             CONCAT44((float)((uint)(fVar6 * fVar10) ^ uVar14) + fVar5 * fVar9,
                      (float)((uint)(fVar4 * fVar8) ^ uVar12) + fVar3 * fVar7);
        pfVar16 = pfVar16 + 2;
        *(ulonglong *)pfVar17 =
             CONCAT44((float)((uint)(fVar4 * fVar7) ^ uVar11) + fVar3 * fVar8,
                      (float)((uint)(fVar6 * fVar9) ^ uVar13) + fVar5 * fVar10);
        pfVar17 = pfVar17 + -2;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  return;
}

// sse_2radix2 @ 14f8dca00

void __cdecl
sse_2radix2(rfft_complex *param_1,rfft_complex *param_2,rfft_complex *param_3,rfft_complex *param_4,
           rfft_complex *param_5,ulong64 param_6,ulong64 param_7,ushort *param_8)

{
  float *pfVar1;
  rfft_complex *prVar2;
  rfft_complex *prVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  float *pfVar28;
  ulong64 uVar29;
  rfft_complex *prVar30;
  
  if (param_6 != param_7) {
    uVar29 = param_6;
    if ((param_6 & 1) != 0) {
      uVar29 = param_6 + 1;
      scalar_2radix2(param_1,param_2,param_3,param_4,param_5,param_6,uVar29,param_8);
    }
    if (uVar29 < param_7) {
      prVar30 = param_4 + uVar29;
      do {
        pfVar1 = (float *)(((longlong)param_2 - (longlong)param_4) + (longlong)prVar30);
        fVar5 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar1 = (float *)(((longlong)param_5 - (longlong)param_4) + (longlong)prVar30);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar28 = &prVar30->re;
        fVar13 = prVar30->im;
        fVar14 = prVar30[1].re;
        fVar15 = prVar30[1].im;
        pfVar1 = (float *)(((longlong)param_3 - (longlong)param_4) + (longlong)prVar30);
        fVar16 = *pfVar1;
        fVar17 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar19 = pfVar1[3];
        fVar20 = prVar30->re;
        fVar21 = prVar30->im;
        fVar22 = prVar30[1].re;
        fVar23 = prVar30[1].im;
        pfVar1 = (float *)(((longlong)param_3 - (longlong)param_4) + (longlong)prVar30);
        fVar24 = *pfVar1;
        fVar25 = pfVar1[1];
        fVar26 = pfVar1[2];
        fVar27 = pfVar1[3];
        prVar2 = param_1 + param_8[uVar29];
        prVar30 = prVar30 + 2;
        uVar4 = param_8[uVar29 + 1];
        uVar29 = uVar29 + 2;
        prVar2->re = *pfVar28 + fVar5;
        prVar2->im = fVar13 + fVar6;
        prVar2[1].re = fVar5 - fVar20;
        prVar2[1].im = fVar6 - fVar21;
        prVar3 = param_1 + uVar4;
        prVar3->re = fVar14 + fVar7;
        prVar3->im = fVar15 + fVar8;
        prVar3[1].re = fVar7 - fVar22;
        prVar3[1].im = fVar8 - fVar23;
        prVar2[2].re = fVar16 + fVar9;
        prVar2[2].im = fVar17 + fVar10;
        prVar2[3].re = fVar9 - fVar24;
        prVar2[3].im = fVar10 - fVar25;
        prVar2 = param_1 + (ulonglong)uVar4 + 2;
        prVar2->re = fVar18 + fVar11;
        prVar2->im = fVar19 + fVar12;
        prVar2[1].re = fVar11 - fVar26;
        prVar2[1].im = fVar12 - fVar27;
      } while (uVar29 < param_7);
    }
    if ((param_7 & 0xfffffffffffffffe) != param_7) {
      scalar_2radix2(param_1,param_2,param_3,param_4,param_5,param_7 & 0xfffffffffffffffe,param_7,
                     param_8);
    }
  }
  return;
}

// sse_radix4 @ 14f8dcb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
sse_radix4(rfft_complex *param_1,rfft_complex *param_2,rfft_complex *param_3,rfft_complex *param_4,
          rfft_complex *param_5,ulong64 param_6,ulong64 param_7,ushort *param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  rfft_complex *prVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  rfft_complex *prVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  float fVar14;
  float fVar15;
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
  float fVar29;
  
  if (param_6 != param_7) {
    uVar12 = param_7 & 0xfffffffffffffffe;
    uVar13 = param_6;
    if ((param_6 & 1) != 0) {
      uVar13 = param_6 + 1;
      scalar_radix4(param_1,param_2,param_3,param_4,param_5,param_6,uVar13,param_8);
    }
    uVar10 = _UNK_15066df7c;
    uVar9 = _UNK_15066df78;
    uVar8 = __xmm_80000000000000008000000000000000._4_4_;
    uVar7 = (uint)__xmm_80000000000000008000000000000000;
    if (uVar13 < uVar12) {
      prVar11 = param_4 + uVar13;
      do {
        pfVar1 = (float *)(((longlong)param_3 - (longlong)param_4) + (longlong)prVar11);
        pfVar2 = (float *)(((longlong)param_2 - (longlong)param_4) + (longlong)prVar11);
        pfVar3 = (float *)(((longlong)param_5 - (longlong)param_4) + (longlong)prVar11);
        fVar14 = *pfVar3 + *pfVar1;
        fVar15 = pfVar3[1] + pfVar1[1];
        fVar16 = pfVar3[2] + pfVar1[2];
        fVar17 = pfVar3[3] + pfVar1[3];
        pfVar3 = (float *)(((longlong)param_5 - (longlong)param_4) + (longlong)prVar11);
        uVar5 = param_8[uVar13];
        fVar22 = prVar11->re + *pfVar2;
        fVar23 = prVar11->im + pfVar2[1];
        fVar24 = prVar11[1].re + pfVar2[2];
        fVar25 = prVar11[1].im + pfVar2[3];
        fVar26 = *pfVar2 - prVar11->re;
        fVar27 = pfVar2[1] - prVar11->im;
        fVar28 = pfVar2[2] - prVar11[1].re;
        fVar29 = pfVar2[3] - prVar11[1].im;
        uVar6 = param_8[uVar13 + 1];
        prVar11 = prVar11 + 2;
        uVar13 = uVar13 + 2;
        fVar18 = (float)((uint)(pfVar1[1] - pfVar3[1]) ^ uVar7);
        fVar19 = (float)((uint)(*pfVar1 - *pfVar3) ^ uVar8);
        fVar20 = (float)((uint)(pfVar1[3] - pfVar3[3]) ^ uVar9);
        fVar21 = (float)((uint)(pfVar1[2] - pfVar3[2]) ^ uVar10);
        prVar4 = param_1 + uVar5;
        prVar4->re = fVar14 + fVar22;
        prVar4->im = fVar15 + fVar23;
        prVar4[1].re = fVar18 + fVar26;
        prVar4[1].im = fVar19 + fVar27;
        prVar4 = param_1 + uVar6;
        prVar4->re = fVar16 + fVar24;
        prVar4->im = fVar17 + fVar25;
        prVar4[1].re = fVar20 + fVar28;
        prVar4[1].im = fVar21 + fVar29;
        prVar4 = param_1 + (ulonglong)uVar5 + 2;
        prVar4->re = fVar22 - fVar14;
        prVar4->im = fVar23 - fVar15;
        prVar4[1].re = fVar26 - fVar18;
        prVar4[1].im = fVar27 - fVar19;
        prVar4 = param_1 + (ulonglong)uVar6 + 2;
        prVar4->re = fVar24 - fVar16;
        prVar4->im = fVar25 - fVar17;
        prVar4[1].re = fVar28 - fVar20;
        prVar4[1].im = fVar29 - fVar21;
      } while (uVar13 < uVar12);
    }
    if (uVar12 != param_7) {
      scalar_radix4(param_1,param_2,param_3,param_4,param_5,uVar12,param_7,param_8);
    }
  }
  return;
}

// sse_dct_split @ 14f8dccf0

void __cdecl sse_dct_split(float *param_1,float *param_2,ulong64 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  
  pfVar1 = param_2 + param_3;
  pfVar10 = param_1 + (param_3 - 4);
  do {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar5 = param_2[3];
    fVar6 = param_2[4];
    fVar7 = param_2[5];
    fVar8 = param_2[6];
    fVar9 = param_2[7];
    param_2 = param_2 + 8;
    *param_1 = fVar2;
    param_1[1] = fVar4;
    param_1[2] = fVar6;
    param_1[3] = fVar8;
    *pfVar10 = fVar9;
    pfVar10[1] = fVar7;
    pfVar10[2] = fVar5;
    pfVar10[3] = fVar3;
    pfVar10 = pfVar10 + -4;
    param_1 = param_1 + 4;
  } while (param_2 != pfVar1);
  return;
}

// sse_dct_merge @ 14f8dcd40

void __cdecl sse_dct_merge(float *param_1,float *param_2,ulong64 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  
  pfVar10 = param_2 + (param_3 - 4);
  pfVar1 = param_1 + param_3;
  do {
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar5 = param_2[3];
    param_2 = param_2 + 4;
    fVar6 = *pfVar10;
    fVar7 = pfVar10[1];
    fVar8 = pfVar10[2];
    fVar9 = pfVar10[3];
    pfVar10 = pfVar10 + -4;
    *param_1 = fVar2;
    param_1[1] = fVar9;
    param_1[2] = fVar3;
    param_1[3] = fVar8;
    param_1[4] = fVar4;
    param_1[5] = fVar7;
    param_1[6] = fVar5;
    param_1[7] = fVar6;
    param_1 = param_1 + 8;
  } while (param_1 != pfVar1);
  return;
}

// sse_dct_merge_s16 @ 14f8dcd90

void __cdecl sse_dct_merge_s16(short *param_1,float param_2,float *param_3,ulong64 param_4)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pfVar7 = param_3 + (param_4 - 4);
  lVar8 = (longlong)param_3 - (longlong)param_1;
  pauVar1 = (undefined1 (*) [16])(param_1 + param_4);
  do {
    pfVar2 = (float *)(lVar8 + (longlong)param_1);
    fVar3 = *pfVar7;
    pfVar4 = pfVar7 + 1;
    pfVar5 = pfVar7 + 2;
    pfVar6 = pfVar7 + 3;
    pfVar7 = pfVar7 + -4;
    auVar9._0_4_ = (int)(*pfVar2 * param_2);
    auVar9._4_4_ = (int)(*pfVar6 * param_2);
    auVar9._8_4_ = (int)(pfVar2[1] * param_2);
    auVar9._12_4_ = (int)(*pfVar5 * param_2);
    auVar10._4_4_ = (int)(*pfVar4 * param_2);
    auVar10._0_4_ = (int)(pfVar2[2] * param_2);
    auVar10._8_4_ = (int)(pfVar2[3] * param_2);
    auVar10._12_4_ = (int)(fVar3 * param_2);
    auVar10 = packssdw(auVar9,auVar10);
    *(undefined1 (*) [16])param_1 = auVar10;
    param_1 = (short *)((longlong)param_1 + 0x10);
  } while ((undefined1 (*) [16])param_1 != pauVar1);
  return;
}

// sse_dct_merge_s16s @ 14f8dcdf0

void __cdecl
sse_dct_merge_s16s(short *param_1,short *param_2,float param_3,float *param_4,ulong64 param_5)

{
  short *psVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short *psVar14;
  float *pfVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pfVar15 = param_4 + (param_5 - 4);
  psVar1 = param_1 + param_5 * 2;
  psVar14 = param_2;
  do {
    pfVar2 = (float *)(((longlong)param_4 - (longlong)param_2) + (longlong)psVar14);
    fVar3 = *pfVar15;
    pfVar4 = pfVar15 + 1;
    pfVar5 = pfVar15 + 2;
    pfVar6 = pfVar15 + 3;
    pfVar15 = pfVar15 + -4;
    sVar7 = psVar14[1];
    sVar8 = psVar14[2];
    sVar9 = psVar14[3];
    sVar10 = psVar14[4];
    sVar11 = psVar14[5];
    sVar12 = psVar14[6];
    sVar13 = psVar14[7];
    auVar16._0_4_ = (int)(*pfVar2 * param_3);
    auVar16._4_4_ = (int)(*pfVar6 * param_3);
    auVar16._8_4_ = (int)(pfVar2[1] * param_3);
    auVar16._12_4_ = (int)(*pfVar5 * param_3);
    auVar17._0_4_ = (int)(pfVar2[2] * param_3);
    auVar17._4_4_ = (int)(*pfVar4 * param_3);
    auVar17._8_4_ = (int)(pfVar2[3] * param_3);
    auVar17._12_4_ = (int)(fVar3 * param_3);
    auVar17 = packssdw(auVar16,auVar17);
    *param_1 = *psVar14;
    param_1[1] = auVar17._0_2_;
    param_1[2] = sVar7;
    param_1[3] = auVar17._2_2_;
    param_1[4] = sVar8;
    param_1[5] = auVar17._4_2_;
    param_1[6] = sVar9;
    param_1[7] = auVar17._6_2_;
    param_1[8] = sVar10;
    param_1[9] = auVar17._8_2_;
    param_1[10] = sVar11;
    param_1[0xb] = auVar17._10_2_;
    param_1[0xc] = sVar12;
    param_1[0xd] = auVar17._12_2_;
    param_1[0xe] = sVar13;
    param_1[0xf] = auVar17._14_2_;
    param_1 = param_1 + 0x10;
    psVar14 = psVar14 + 8;
  } while (param_1 != psVar1);
  return;
}

// sse_dct3_modulate @ 14f8dce70

void __cdecl
sse_dct3_modulate(float *param_1,float *param_2,ulong64 param_3,ulong64 param_4,
                 rfft_complex *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong uVar25;
  
  if (((param_4 & 3) == 0) && (3 < param_4)) {
    uVar25 = 4;
    scalar_dct3_modulate(param_1,param_2,param_3,4,param_5);
    if (4 < param_4) {
      lVar24 = (longlong)param_5 - (longlong)param_1;
      pfVar23 = param_2 + (param_3 - 7);
      pfVar22 = param_1 + 0xc;
      do {
        pfVar1 = (float *)(lVar24 + -0x10 + (longlong)pfVar22);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        fVar11 = *pfVar23;
        fVar12 = pfVar23[1];
        fVar13 = pfVar23[2];
        fVar14 = pfVar23[3];
        pfVar23 = pfVar23 + -4;
        fVar3 = *(float *)((longlong)pfVar22 + lVar24 + 4);
        fVar5 = *(float *)((longlong)pfVar22 + lVar24 + 0xc);
        fVar2 = *(float *)(lVar24 + (longlong)pfVar22);
        fVar4 = ((float *)(lVar24 + (longlong)pfVar22))[2];
        pfVar1 = param_2 + uVar25;
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar18 = pfVar1[3];
        pfVar1 = param_2 + uVar25;
        fVar19 = pfVar1[1];
        fVar20 = pfVar1[2];
        fVar21 = pfVar1[3];
        uVar25 = uVar25 + 4;
        pfVar22[-4] = fVar7 * *pfVar1 - fVar8 * fVar14;
        pfVar22[-3] = fVar7 * fVar14 + fVar8 * fVar15;
        pfVar22[-2] = fVar9 * fVar19 - fVar10 * fVar13;
        pfVar22[-1] = fVar9 * fVar13 + fVar10 * fVar16;
        *pfVar22 = fVar2 * fVar20 - fVar3 * fVar12;
        pfVar22[1] = fVar2 * fVar12 + fVar3 * fVar17;
        pfVar22[2] = fVar4 * fVar21 - fVar5 * fVar11;
        pfVar22[3] = fVar4 * fVar11 + fVar5 * fVar18;
        pfVar22 = pfVar22 + 8;
      } while (uVar25 < param_4);
    }
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// fft_base_driver @ 14f8dcf50

void __cdecl
fft_base_driver(rfft_complex *param_1,rfft_complex *param_2,ulong64 param_3,bool param_4,
               _func___cdecl_void_rfft_complex_ptr_rfft_complex_ptr_rfft_complex_ptr_rfft_complex_ptr_rfft_complex_ptr_ulong64_ulong64_ushort_ptr
               *param_5,_func___cdecl_void_rfft_complex_ptr_rfft_complex_ptr_rfft_complex_ptr_rfft_complex_ptr_rfft_complex_ptr_ulong64_ulong64_ushort_ptr
                        *param_6)

{
  ushort *puVar1;
  rfft_complex *prVar2;
  rfft_complex *prVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  rfft_complex *prVar6;
  rfft_complex *prVar7;
  ulonglong uVar8;
  
  uVar8 = param_3 >> 2;
  prVar6 = param_2 + uVar8 * 2;
  puVar1 = radfft_s_permute + uVar8;
  prVar2 = param_2 + uVar8 * 3;
  prVar3 = param_2 + uVar8;
  uVar5 = uVar8 / 3 + 1;
  uVar4 = (uVar8 - uVar5) + 1;
  if (param_4) {
    (*param_5)(param_1,param_2,prVar2,prVar6,prVar3,0,uVar5,puVar1);
    (*param_6)(param_1,param_2,prVar3,prVar6,prVar2,uVar5,uVar4,puVar1);
    prVar7 = prVar6;
  }
  else {
    (*param_5)(param_1,param_2,prVar3,prVar6,prVar2,0,uVar5,puVar1);
    (*param_6)(param_1,param_2,prVar3,prVar6,prVar2,uVar5,uVar4,puVar1);
    prVar7 = param_2;
    param_2 = prVar6;
  }
  (*param_5)(param_1,prVar2,prVar7,prVar3,param_2,uVar4,uVar8,puVar1);
  return;
}

// fft_driver @ 14f8dd0e0

void __cdecl
fft_driver(rfft_complex *param_1,ulong64 param_2,
          _func___cdecl_void_rfft_complex_ptr_PlanElement_ptr_ulong64 *param_3)

{
  ulonglong uVar1;
  PlanElement *pPVar2;
  PlanElement local_res10 [2];
  
  pPVar2 = s_recursion_plan;
  uVar1 = param_2 >> 2;
  if (0x100 < param_2) {
    local_res10[0].Nloop = (ushort)uVar1;
    local_res10[0].offs = 0;
    pPVar2 = local_res10;
    fft_driver(param_1,uVar1 * 2,param_3);
    fft_driver(param_1 + uVar1 * 2,uVar1,param_3);
    fft_driver(param_1 + uVar1 * 3,uVar1,param_3);
  }
  (*param_3)(param_1,pPVar2,uVar1);
  return;
}

// get_dct_twiddle @ 14f8dd180

rfft_complex * __cdecl get_dct_twiddle(ulong64 param_1)

{
  if (param_1 * 4 < 0x801) {
    return (rfft_complex *)(radfft_s_twiddles_data + param_1 * 2);
  }
  return (rfft_complex *)(radfft_s_twiddles_data + (param_1 & 0xfffffffffffffffe) + 0x400);
}

// is_pow2 @ 14f8dd1c0

bool __cdecl is_pow2(ulong64 param_1)

{
  if ((param_1 != 0) && ((param_1 & param_1 - 1) == 0)) {
    return true;
  }
  return false;
}

// radfft_init_helper @ 14f8dd1e0

/* WARNING: Removing unreachable block (ram,0x00014f8dd1ed) */

int __cdecl radfft_init_helper(void)

{
  longlong lVar1;
  
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 1) == 0) {
    s_kernel = &s_kernel_sse;
    if ((*(uint *)(lVar1 + 8) >> 0x19 & 1) == 0) {
      s_kernel = &s_kernel_scalar;
    }
    return 1;
  }
  s_kernel = &s_kernel_sse3;
  return 1;
}

// x86_select_kernels @ 14f8dd240

/* WARNING: Removing unreachable block (ram,0x00014f8dd24d) */

KernelSet * __cdecl x86_select_kernels(void)

{
  longlong lVar1;
  KernelSet *pKVar2;
  
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 1) == 0) {
    pKVar2 = &s_kernel_sse;
    if ((*(uint *)(lVar1 + 8) >> 0x19 & 1) == 0) {
      pKVar2 = &s_kernel_scalar;
    }
    return pKVar2;
  }
  return &s_kernel_sse3;
}

// radfft_cfftUEBA @ 14f8dd290

void __cdecl radfft_cfftUEBA(rfft_complex *param_1,rfft_complex *param_2,ulong64 param_3)

{
  code *pcVar1;
  
  if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) && (param_3 < 0x801)) {
    fft_base_driver(param_1,param_2,param_3,false,s_kernel->radix4,s_kernel->radix2_2);
    if (7 < param_3) {
      fft_driver(param_1,param_3,s_kernel->cfpass);
    }
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// radfft_cifftUEBA @ 14f8dd310

void __cdecl radfft_cifftUEBA(rfft_complex *param_1,rfft_complex *param_2,ulong64 param_3)

{
  code *pcVar1;
  
  if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) && (param_3 < 0x801)) {
    fft_base_driver(param_1,param_2,param_3,true,s_kernel->radix4,s_kernel->radix2_2);
    if (7 < param_3) {
      fft_driver(param_1,param_3,s_kernel->cipass);
    }
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// radfft_dctUEBA @ 14f8dd390

void __cdecl radfft_dctUEBA(float *param_1,float *param_2,ulong64 param_3)

{
  float fVar1;
  code *pcVar2;
  rfft_complex *prVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || (param_3 < 2)) || (0x800 < param_3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*s_kernel->dct_split)(param_1,param_2,param_3);
  if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) && (param_3 - 2 < 0x7ff)) {
    uVar4 = param_3 >> 2;
    uVar5 = param_3 >> 1;
    if (((uVar5 != 0) && ((uVar5 & uVar5 - 1) == 0)) && (uVar5 < 0x801)) {
      fft_base_driver((rfft_complex *)param_2,(rfft_complex *)param_1,uVar5,true,s_kernel->radix4,
                      s_kernel->radix2_2);
      if (7 < uVar5) {
        fft_driver((rfft_complex *)param_2,uVar5,s_kernel->cipass);
      }
      fVar1 = *param_2;
      *param_2 = param_2[1] + fVar1;
      param_2[1] = fVar1 - param_2[1];
      if (uVar4 != 0) {
        (*s_kernel->rfpost)((rfft_complex *)param_2,uVar4,uVar4);
      }
      if (param_3 * 4 < 0x801) {
        prVar3 = (rfft_complex *)(radfft_s_twiddles_data + param_3 * 2);
      }
      else {
        prVar3 = (rfft_complex *)(radfft_s_twiddles_data + uVar5 * 2 + 0x400);
      }
      (*s_kernel->dct2_mod)(param_1,param_2,param_3,uVar5,prVar3);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// radfft_idctUEBA @ 14f8dd510

void __cdecl radfft_idctUEBA(float *param_1,float *param_2,ulong64 param_3)

{
  code *pcVar1;
  rfft_complex *prVar2;
  
  if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) && (param_3 - 2 < 0x7ff)) {
    if (param_3 * 4 < 0x801) {
      prVar2 = (rfft_complex *)(radfft_s_twiddles_data + param_3 * 2);
    }
    else {
      prVar2 = (rfft_complex *)(radfft_s_twiddles_data + (param_3 >> 1) * 2 + 0x400);
    }
    (*s_kernel->dct3_mod)(param_1,param_2,param_3,param_3 >> 1,prVar2);
    radfft_rifftUEBA(param_2,(rfft_complex *)param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014f8dd5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*s_kernel->dct_merge)(param_1,param_2,param_3);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// radfft_idct_to_S16UEBA @ 14f8dd5d0

void __cdecl
radfft_idct_to_S16UEBA(short *param_1,float param_2,float *param_3,float *param_4,ulong64 param_5)

{
  code *pcVar1;
  rfft_complex *prVar2;
  
  if (((param_5 != 0) && ((param_5 & param_5 - 1) == 0)) && (param_5 - 2 < 0x7ff)) {
    if (param_5 * 4 < 0x801) {
      prVar2 = (rfft_complex *)(radfft_s_twiddles_data + param_5 * 2);
    }
    else {
      prVar2 = (rfft_complex *)((param_5 >> 1) * 8 + 0x15352d610);
    }
    (*s_kernel->dct3_mod)(param_3,param_4,param_5,param_5 >> 1,prVar2);
    radfft_rifftUEBA(param_4,(rfft_complex *)param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00014f8dd69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*s_kernel->dct_merge_s16)(param_1,param_2,param_4,param_5);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// radfft_idct_to_S16_stereo_interleaveUEBA @ 14f8dd6b0

void __cdecl
radfft_idct_to_S16_stereo_interleaveUEBA
          (short *param_1,short *param_2,float param_3,float *param_4,float *param_5,ulong64 param_6
          )

{
  code *pcVar1;
  rfft_complex *prVar2;
  
  if (((param_6 != 0) && ((param_6 & param_6 - 1) == 0)) && (param_6 - 2 < 0x7ff)) {
    if (param_6 * 4 < 0x801) {
      prVar2 = (rfft_complex *)(radfft_s_twiddles_data + param_6 * 2);
    }
    else {
      prVar2 = (rfft_complex *)(radfft_s_twiddles_data + (param_6 >> 1) * 2 + 0x400);
    }
    (*s_kernel->dct3_mod)(param_4,param_5,param_6,param_6 >> 1,prVar2);
    radfft_rifftUEBA(param_5,(rfft_complex *)param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00014f8dd789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*s_kernel->dct_merge_s16s)(param_1,param_2,param_3,param_5,param_6);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// radfft_initUEBA @ 14f8dd7a0

/* WARNING: Removing unreachable block (ram,0x00014f8dd7ed) */

void __cdecl radfft_initUEBA(void)

{
  longlong lVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    lVar1 = cpuid_Version_info(1);
    if ((*(uint *)(lVar1 + 0xc) & 1) == 0) {
      s_kernel = &s_kernel_sse;
      if ((*(uint *)(lVar1 + 8) >> 0x19 & 1) == 0) {
        s_kernel = &s_kernel_scalar;
      }
    }
    else {
      s_kernel = &s_kernel_sse3;
    }
    _Init_thread_footer(&_TSS0);
  }
  return;
}

// radfft_rfftUEBA @ 14f8dd840

void __cdecl radfft_rfftUEBA(rfft_complex *param_1,float *param_2,ulong64 param_3)

{
  float fVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || (0x7fe < param_3 - 2)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = param_3 >> 2;
  uVar3 = param_3 >> 1;
  if (((uVar3 != 0) && ((uVar3 & uVar3 - 1) == 0)) && (uVar3 < 0x801)) {
    fft_base_driver(param_1,(rfft_complex *)param_2,uVar3,true,s_kernel->radix4,s_kernel->radix2_2);
    if (7 < uVar3) {
      fft_driver(param_1,uVar3,s_kernel->cipass);
    }
    fVar1 = param_1->re;
    param_1->re = param_1->im + fVar1;
    param_1->im = fVar1 - param_1->im;
    if (uVar4 != 0) {
      (*s_kernel->rfpost)(param_1,uVar4,uVar4);
    }
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// radfft_rifftUEBA @ 14f8dd920

void __cdecl radfft_rifftUEBA(float *param_1,rfft_complex *param_2,ulong64 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  float fVar3;
  
  if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || (0x7fe < param_3 - 2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = param_3 >> 2;
  fVar3 = (param_2->re - param_2->im) * __real_3f000000;
  param_2->re = (param_2->im + param_2->re) * __real_3f000000;
  param_2->im = fVar3;
  if (uVar2 != 0) {
    (*s_kernel->ripre)(param_2,uVar2,uVar2);
  }
  uVar2 = param_3 >> 1;
  if (((uVar2 != 0) && ((uVar2 & uVar2 - 1) == 0)) && (uVar2 < 0x801)) {
    fft_base_driver((rfft_complex *)param_1,param_2,uVar2,false,s_kernel->radix4,s_kernel->radix2_2)
    ;
    if (7 < uVar2) {
      fft_driver((rfft_complex *)param_1,uVar2,s_kernel->cfpass);
    }
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

