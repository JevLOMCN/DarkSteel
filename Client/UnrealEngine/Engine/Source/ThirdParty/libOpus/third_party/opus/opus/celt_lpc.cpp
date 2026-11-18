// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 4

// _celt_autocorr @ 14f882c74

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
_celt_autocorr(undefined4 *param_1,float *param_2,float *param_3,int param_4,int param_5,int param_6
              ,undefined4 param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined8 auStack_70 [5];
  int aiStack_48 [4];
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)local_38;
  lVar13 = (longlong)param_4;
  lVar7 = (longlong)param_6;
  local_38[0] = (float)(param_6 - param_5);
  uVar5 = lVar7 * 4 + 0xf;
  if (uVar5 <= (ulonglong)(lVar7 * 4)) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x14f882cdf;
  lVar4 = -(uVar5 & 0xfffffffffffffff0);
  lVar10 = 0;
  puVar2 = (undefined4 *)((longlong)local_38 + lVar4);
  if (param_6 < 1) {
    *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x14f882d06;
    celt_fatal("assertion failed: n>0","../../../third_party/opus/src/celt/celt_lpc.c",0xe4);
  }
  if (param_4 < 0) {
    *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x14f882d24;
    celt_fatal("assertion failed: overlap>=0","../../../third_party/opus/src/celt/celt_lpc.c",0xe5);
  }
  puVar8 = param_1;
  if (param_4 != 0) {
    if (0 < lVar7) {
      puVar8 = puVar2;
      lVar11 = lVar7;
      do {
        *puVar8 = *(undefined4 *)(((longlong)param_1 - (longlong)puVar2) + (longlong)puVar8);
        puVar8 = puVar8 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    puVar8 = puVar2;
    if (0 < param_4) {
      pfVar9 = (float *)(puVar2 + lVar7 + -1);
      lVar11 = (longlong)puVar2 - (longlong)param_3;
      do {
        pfVar1 = (float *)(lVar11 + (longlong)param_3);
        *pfVar1 = *(float *)((longlong)pfVar1 + ((longlong)param_1 - (longlong)puVar2)) * *param_3;
        fVar14 = *param_3;
        param_3 = param_3 + 1;
        *pfVar9 = *(float *)((longlong)pfVar9 + ((longlong)param_1 - (longlong)puVar2)) * fVar14;
        pfVar9 = pfVar9 + -1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  fVar14 = local_38[0];
  lVar13 = (longlong)(int)local_38[0];
  *(undefined4 *)((longlong)aiStack_48 + lVar4 + 8) = param_7;
  *(int *)((longlong)aiStack_48 + lVar4) = param_5 + 1;
  *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x14f882dbe;
  celt_pitch_xcorr_c(puVar8,puVar8,param_2,fVar14);
  if (-1 < param_5) {
    lVar12 = lVar13 * 4 - (longlong)param_2;
    lVar11 = lVar10;
    do {
      fVar14 = 0.0;
      if (lVar13 + lVar11 < lVar7) {
        pfVar9 = (float *)(lVar12 + (longlong)puVar8 + (longlong)param_2);
        lVar6 = (lVar7 - lVar13) - lVar11;
        do {
          pfVar1 = (float *)(lVar10 + (longlong)pfVar9);
          fVar3 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar14 = *pfVar1 * fVar3 + fVar14;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + -4;
      *param_2 = fVar14 + *param_2;
      param_2 = param_2 + 1;
    } while (lVar11 <= param_5);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar4) = 0x14f882e2c;
  return 0;
}

// _celt_lpc @ 14f882e4c

void _celt_lpc(void *param_1,float *param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = *param_2;
  memset(param_1,0,(longlong)param_3 << 2);
  if ((*param_2 != __real_00000000) && (iVar8 = 0, 0 < param_3)) {
    lVar7 = 0;
    pfVar4 = (float *)((longlong)param_1 + -4);
    do {
      lVar5 = 0;
      fVar9 = 0.0;
      if (0 < lVar7) {
        pfVar6 = (float *)((longlong)param_2 + (4 - (longlong)param_1) + (longlong)pfVar4);
        do {
          lVar1 = lVar5 * 4;
          lVar5 = lVar5 + 1;
          fVar2 = *pfVar6;
          pfVar6 = pfVar6 + -1;
          fVar9 = fVar9 + *(float *)((longlong)param_1 + lVar1) * fVar2;
        } while (lVar5 < lVar7);
      }
      lVar5 = 0;
      iVar8 = iVar8 + 1;
      fVar9 = (float)((uint)((fVar9 + *(float *)((longlong)param_2 + (8 - (longlong)param_1) +
                                                (longlong)pfVar4)) / fVar10) ^
                     __xmm_80000000800000008000000080000000);
      pfVar4[1] = fVar9;
      pfVar6 = pfVar4;
      if (0 < (longlong)iVar8 >> 1) {
        do {
          fVar2 = *pfVar6;
          fVar3 = *(float *)((longlong)param_1 + lVar5 * 4);
          *(float *)((longlong)param_1 + lVar5 * 4) = fVar2 * fVar9 + fVar3;
          lVar5 = lVar5 + 1;
          *pfVar6 = fVar3 * fVar9 + fVar2;
          pfVar6 = pfVar6 + -1;
        } while (lVar5 < (longlong)iVar8 >> 1);
      }
      fVar10 = fVar10 - fVar9 * fVar9 * fVar10;
      if (fVar10 < *param_2 * __real_3a83126f) {
        return;
      }
      lVar7 = lVar7 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar8 < param_3);
  }
  return;
}

// celt_fir_c @ 14f882f78

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void celt_fir_c(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined8 auStack_a0 [5];
  float local_78 [2];
  int local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)local_78;
  lVar12 = (longlong)param_5;
  local_68 = param_4;
  local_58 = param_3;
  if (param_1 == param_3) {
    auStack_a0[0] = 0x14f882fdb;
    celt_fatal("assertion failed: x != y","../../../third_party/opus/src/celt/celt_lpc.c",0x66);
  }
  uVar13 = lVar12 * 4;
  uVar7 = uVar13 + 0xf;
  if (uVar7 <= uVar13) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x14f882ffe;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  pfVar2 = (float *)((longlong)local_78 + lVar5);
  if (0 < lVar12) {
    lVar9 = 0;
    pfVar10 = (float *)(param_2 + -4 + uVar13);
    do {
      fVar15 = *pfVar10;
      pfVar10 = pfVar10 + -1;
      pfVar2[lVar9] = fVar15;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar12);
  }
  local_70 = 0;
  if (0 < param_4 + -3) {
    puVar14 = (undefined4 *)(param_1 + 8);
    lVar9 = param_3 - param_1;
    local_60 = 0;
    uVar6 = (param_4 - 4U >> 2) + 1;
    local_70 = uVar6 * 4;
    uVar7 = (ulonglong)uVar6;
    do {
      local_50 = *(undefined8 *)(puVar14 + -2);
      uStack_48 = *puVar14;
      uStack_44 = puVar14[1];
      lVar8 = local_60 - lVar12;
      *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x14f883079;
      xcorr_kernel_sse(pfVar2,param_1 + lVar8 * 4,&local_50,param_5);
      puVar14 = puVar14 + 4;
      local_60 = local_60 + 4;
      puVar3 = (undefined8 *)(lVar9 + -0x18 + (longlong)puVar14);
      *puVar3 = local_50;
      puVar3[1] = CONCAT44(uStack_44,uStack_48);
      uVar7 = uVar7 - 1;
      param_3 = local_58;
      param_4 = local_68;
    } while (uVar7 != 0);
  }
  lVar9 = (longlong)local_70;
  if (lVar9 < param_4) {
    pfVar10 = (float *)(param_1 + lVar9 * 4);
    lVar9 = param_4 - lVar9;
    do {
      fVar15 = *pfVar10;
      if (0 < lVar12) {
        pfVar11 = pfVar2;
        lVar8 = lVar12;
        do {
          pfVar1 = (float *)((longlong)pfVar11 + ((longlong)pfVar10 - (longlong)(pfVar2 + lVar12)));
          fVar4 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          fVar15 = *pfVar1 * fVar4 + fVar15;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *(float *)((param_3 - param_1) + (longlong)pfVar10) = fVar15;
      pfVar10 = pfVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar5) = 0x14f883112;
  return;
}

// celt_iir @ 14f883130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void celt_iir(longlong param_1,float *param_2,longlong param_3,float param_4,int param_5,
             longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  float *pfVar19;
  ulonglong uVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  undefined8 auStack_d0 [5];
  float local_a8 [2];
  undefined8 local_a0;
  float *local_98;
  longlong local_90;
  longlong local_88;
  float *local_80;
  longlong local_78;
  longlong local_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)local_a8;
  uVar24 = (ulonglong)param_5;
  local_a8[0] = param_4;
  local_a0 = param_3;
  local_98 = param_2;
  local_68 = param_1;
  local_78 = param_6;
  if ((uVar24 & 3) != 0) {
    auStack_d0[0] = 0x14f8831ab;
    celt_fatal("assertion failed: (ord&3)==0","../../../third_party/opus/src/celt/celt_lpc.c",0xa0);
  }
  pfVar19 = local_98;
  uVar10 = __xmm_80000000800000008000000080000000;
  uVar20 = uVar24 * 4;
  uVar12 = uVar20 + 0xf;
  if (uVar12 <= uVar20) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14f8831d8;
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  iVar18 = param_5 + (int)param_4;
  pfVar4 = (float *)((longlong)local_a8 + lVar8);
  uVar12 = (longlong)iVar18 * 4 + 0xf;
  if (uVar12 <= (ulonglong)((longlong)iVar18 * 4)) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8) = 0x14f883203;
  lVar9 = -(uVar12 & 0xfffffffffffffff0);
  lVar13 = 0;
  lVar5 = (longlong)local_a8 + lVar9 + lVar8;
  if (0 < param_5) {
    pfVar19 = pfVar19 + (uVar24 - 1);
    lVar16 = lVar13;
    do {
      fVar25 = *pfVar19;
      pfVar19 = pfVar19 + -1;
      pfVar4[lVar16] = fVar25;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (longlong)uVar24);
  }
  iVar15 = 0;
  if (0 < param_5) {
    puVar21 = (uint *)(local_78 + -4 + uVar20);
    do {
      uVar11 = *puVar21;
      puVar21 = puVar21 + -1;
      *(uint *)(lVar5 + lVar13 * 4) = uVar11 ^ __xmm_80000000800000008000000080000000;
      lVar13 = lVar13 + 1;
      iVar15 = param_5;
    } while (lVar13 < (longlong)uVar24);
  }
  if (iVar15 < iVar18) {
    *(undefined8 *)((longlong)auStack_d0 + lVar9 + lVar8) = 0x14f883281;
    memset((void *)(lVar5 + (longlong)iVar15 * 4),0,(longlong)(iVar18 - iVar15) << 2);
  }
  pfVar19 = local_98;
  local_a8[1] = (float)0;
  if (0 < (int)param_4 + -3) {
    local_80 = (float *)(param_1 + 8);
    lVar16 = local_a0 - param_1;
    local_88 = 0;
    uVar11 = ((int)param_4 - 4U >> 2) + 1;
    uVar12 = (ulonglong)uVar11;
    local_a8[1] = (float)(uVar11 * 4);
    lVar13 = lVar5;
    local_90 = lVar5;
    do {
      local_60 = local_80[-2];
      fStack_5c = local_80[-1];
      fStack_58 = *local_80;
      fStack_54 = local_80[1];
      *(undefined8 *)((longlong)auStack_d0 + lVar9 + lVar8) = 0x14f8832dd;
      xcorr_kernel_sse(pfVar4,lVar13,&local_60,param_5);
      lVar22 = uVar24 + local_88;
      *(uint *)(lVar5 + lVar22 * 4) = (uint)local_60 ^ uVar10;
      lVar23 = uVar24 + local_88;
      *(float *)(lVar16 + -8 + (longlong)local_80) = local_60;
      lVar1 = uVar24 + local_88;
      fVar25 = fStack_5c + *pfVar19 * *(float *)(lVar5 + lVar22 * 4);
      *(uint *)((longlong)local_a8 + lVar23 * 4 + lVar9 + lVar8 + 4) = (uint)fVar25 ^ uVar10;
      *(float *)(lVar16 + -4 + (longlong)local_80) = fVar25;
      fVar25 = *pfVar19 * *(float *)((longlong)local_a8 + lVar23 * 4 + lVar9 + lVar8 + 4) +
               fStack_58 + pfVar19[1] * *(float *)(lVar5 + lVar22 * 4);
      *(uint *)((longlong)&local_a0 + lVar1 * 4 + lVar9 + lVar8) = (uint)fVar25 ^ uVar10;
      *(float *)(lVar16 + (longlong)local_80) = fVar25;
      lVar2 = uVar24 + local_88;
      local_88 = local_88 + 4;
      lVar13 = local_90 + 0x10;
      local_90 = lVar13;
      fVar25 = *pfVar19 * *(float *)((longlong)&local_a0 + lVar1 * 4 + lVar9 + lVar8) + fStack_54 +
               pfVar19[1] * *(float *)((longlong)local_a8 + lVar23 * 4 + lVar9 + lVar8 + 4) +
               pfVar19[2] * *(float *)(lVar5 + lVar22 * 4);
      *(uint *)((longlong)&local_a0 + lVar2 * 4 + lVar9 + lVar8 + 4) = (uint)fVar25 ^ uVar10;
      *(float *)(lVar16 + 4 + (longlong)local_80) = fVar25;
      local_80 = local_80 + 4;
      uVar12 = uVar12 - 1;
      param_1 = local_68;
      param_4 = local_a8[0];
    } while (uVar12 != 0);
  }
  lVar16 = 0;
  lVar13 = (longlong)(int)local_a8[1];
  lVar22 = (longlong)(int)param_4;
  if (lVar13 < lVar22) {
    pfVar19 = (float *)(param_1 + lVar13 * 4);
    do {
      fVar25 = *pfVar19;
      if (0 < (longlong)uVar24) {
        pfVar14 = pfVar4;
        lVar23 = lVar16;
        do {
          pfVar3 = (float *)(((lVar5 - (longlong)pfVar4) - param_1) + (longlong)pfVar19 +
                            (longlong)pfVar14);
          lVar23 = lVar23 + 1;
          fVar6 = *pfVar14;
          pfVar14 = pfVar14 + 1;
          fVar25 = fVar25 - *pfVar3 * fVar6;
        } while (lVar23 < (longlong)uVar24);
      }
      lVar23 = uVar24 + lVar13;
      lVar13 = lVar13 + 1;
      *(float *)(lVar5 + lVar23 * 4) = fVar25;
      *(float *)((longlong)pfVar19 + (local_a0 - param_1)) = fVar25;
      pfVar19 = pfVar19 + 1;
    } while (lVar13 < lVar22);
  }
  if (0 < (longlong)uVar24) {
    puVar17 = (undefined4 *)(local_a0 + (lVar22 + -1) * 4);
    do {
      uVar7 = *puVar17;
      puVar17 = puVar17 + -1;
      *(undefined4 *)(local_78 + lVar16 * 4) = uVar7;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (longlong)uVar24);
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar9 + lVar8) = 0x14f883473;
  return;
}

