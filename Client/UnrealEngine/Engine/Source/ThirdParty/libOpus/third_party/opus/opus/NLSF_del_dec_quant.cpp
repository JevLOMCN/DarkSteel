// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_NLSF_del_dec_quant @ 14f894e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int silk_NLSF_del_dec_quant
              (char *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
              longlong param_6,short param_7,short param_8,undefined4 param_9,short param_10)

{
  byte bVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  short sVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  ulonglong uVar22;
  short *psVar23;
  uint *puVar24;
  longlong lVar25;
  ushort uVar26;
  int iVar27;
  ulonglong uVar28;
  ushort uVar29;
  int iVar30;
  short *psVar31;
  undefined1 *puVar32;
  undefined1 auStack_1e8 [32];
  short local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  uint local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  int local_1ac;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  char *local_188;
  int local_180 [4];
  int aiStack_170 [4];
  uint local_160 [4];
  uint auStack_150 [4];
  int aiStack_140 [6];
  int aiStack_128 [20];
  int aiStack_d8 [20];
  short local_88 [4];
  short local_80 [4];
  byte local_78 [8];
  undefined8 auStack_70 [7];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  iVar5 = -10;
  do {
    sVar3 = (short)iVar5 * 0x400;
    sVar15 = sVar3 + 0x400;
    if (iVar5 < 1) {
      sVar4 = sVar3;
      if (iVar5 == 0) goto LAB_14f894eab;
      sVar4 = sVar3 + 0x66;
      if (iVar5 != -1) {
        sVar15 = sVar3 + 0x466;
      }
    }
    else {
      sVar4 = sVar3 + -0x66;
LAB_14f894eab:
      sVar15 = sVar3 + 0x39a;
    }
    iVar27 = iVar5 + 1;
    aiStack_128[(longlong)iVar5 + 10] = (int)sVar4 * (int)param_7 >> 0x10;
    aiStack_d8[(longlong)iVar5 + 10] = (int)sVar15 * (int)param_7 >> 0x10;
    iVar5 = iVar27;
    if (9 < iVar27) {
      local_1ac = (int)param_10;
      local_1c0 = 1;
      local_180[0] = 0;
      local_88[0] = 0;
      local_1bc = local_1ac + -1;
      local_1a8 = param_3;
      if (-1 < local_1bc) {
        local_198 = param_4 - (longlong)local_78;
        local_190 = param_5 - param_2;
        local_1a8 = param_3 - param_2;
        local_1a0 = (longlong)local_1bc;
        lVar25 = 1;
        psVar31 = (short *)(param_2 + local_1a0 * 2);
        local_1b0 = param_9;
        do {
          lVar21 = *(short *)(local_190 + (longlong)psVar31) + param_6;
          if (0 < lVar25) {
            sVar3 = *psVar31;
            puVar32 = (undefined1 *)((longlong)auStack_70 + local_1a0 + -8);
            local_1b4 = (int)param_8;
            bVar1 = puVar32[local_198];
            iVar5 = (int)*(short *)(local_1a8 + (longlong)psVar31);
            lVar16 = 0;
            local_1c4 = iVar5;
            do {
              local_1b8 = (uint)bVar1;
              sVar15 = (short)((int)local_88[lVar16] * (uint)bVar1 >> 8);
              iVar10 = (short)(*psVar31 - sVar15) * local_1b4 >> 0x10;
              iVar27 = iVar10;
              if (iVar10 < -10) {
                iVar27 = -10;
              }
              if (9 < iVar10) {
                iVar27 = 9;
              }
              lVar13 = (longlong)iVar27;
              *puVar32 = (char)iVar27;
              iVar10 = aiStack_d8[lVar13 + 10];
              local_1c8 = (short)aiStack_128[lVar13 + 10] + sVar15;
              local_88[lVar16] = local_1c8;
              sVar15 = (short)iVar10 + sVar15;
              local_88[lVar25 + lVar16] = sVar15;
              local_1c4 = CONCAT22(local_1c4._2_2_,sVar15);
              if (iVar27 + 1 < 4) {
                if (-4 < iVar27) {
                  uVar29 = (ushort)*(byte *)(lVar13 + 5 + lVar21);
                  goto LAB_14f89507f;
                }
                if (iVar27 == -4) {
                  uVar29 = (ushort)*(byte *)(lVar21 + 1);
                  uVar26 = 0x118;
                }
                else {
                  sVar4 = (short)iVar27 * -0x2b;
                  uVar26 = sVar4 + 0x6c;
                  uVar29 = sVar4 + 0x41;
                }
              }
              else if (iVar27 + 1 == 4) {
                uVar29 = 0x118;
LAB_14f89507f:
                uVar26 = (ushort)*(byte *)(lVar13 + 4 + lVar21);
              }
              else {
                sVar4 = (short)iVar27 * 0x2b;
                uVar26 = sVar4 + 0x6c;
                uVar29 = sVar4 + 0x97;
              }
              lVar13 = lVar16 + 1;
              iVar10 = (int)(short)(sVar3 - local_1c8);
              puVar32 = puVar32 + 0x10;
              iVar27 = local_180[lVar16];
              local_180[lVar16] =
                   iVar10 * iVar10 * iVar5 + (int)(short)uVar26 * (int)(short)param_9 + iVar27;
              iVar10 = (int)(short)(sVar3 - sVar15);
              local_180[lVar25 + lVar16] =
                   iVar10 * iVar10 * iVar5 + (int)(short)uVar29 * (int)(short)param_9 + iVar27;
              lVar16 = lVar13;
            } while (lVar13 < lVar25);
          }
          uVar19 = 0;
          if (local_1c0 < 3) {
            if (0 < lVar25) {
              pcVar14 = (char *)((longlong)auStack_70 + local_1a0 + -8);
              lVar21 = lVar25;
              do {
                pcVar14[lVar25 * 0x10] = *pcVar14 + '\x01';
                pcVar14 = pcVar14 + 0x10;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            local_1c0 = local_1c0 * 2;
            lVar25 = (longlong)local_1c0;
            if (lVar25 < 4) {
              lVar16 = lVar25 << 4;
              lVar21 = lVar25;
              do {
                lVar13 = local_1a0 + lVar16;
                lVar8 = lVar21 - lVar25;
                lVar21 = lVar21 + 1;
                lVar16 = lVar16 + 0x10;
                *(undefined1 *)((longlong)auStack_70 + lVar13 + -8) =
                     *(undefined1 *)((longlong)auStack_70 + lVar8 * 0x10 + local_1a0 + -8);
              } while (lVar16 < 0x40);
            }
          }
          else {
            psVar23 = local_88;
            uVar17 = uVar19;
            uVar18 = uVar19;
            do {
              iVar5 = *(int *)((longlong)local_180 + uVar17);
              iVar27 = *(int *)((longlong)aiStack_170 + uVar17);
              iVar30 = (int)uVar18;
              iVar10 = iVar27;
              iVar6 = iVar30;
              if (iVar27 < iVar5) {
                sVar3 = *psVar23;
                *psVar23 = psVar23[4];
                psVar23[4] = sVar3;
                *(int *)((longlong)local_180 + uVar17) = iVar27;
                *(int *)((longlong)aiStack_170 + uVar17) = iVar5;
                iVar10 = iVar5;
                iVar6 = iVar30 + 4;
                iVar5 = iVar27;
              }
              *(int *)((longlong)aiStack_140 + uVar17) = iVar10;
              uVar18 = (ulonglong)(iVar30 + 1U);
              *(int *)((longlong)auStack_150 + uVar17) = iVar5;
              psVar23 = psVar23 + 1;
              *(int *)((longlong)local_160 + uVar17) = iVar6;
              uVar17 = uVar17 + 4;
            } while ((int)(iVar30 + 1U) < 4);
            while( true ) {
              iVar5 = 0x7fffffff;
              lVar21 = 4;
              uVar18 = uVar19;
              uVar22 = uVar19;
              uVar17 = uVar19;
              uVar28 = uVar19;
              do {
                uVar9 = uVar28;
                iVar27 = aiStack_140[uVar28];
                if (iVar5 <= aiStack_140[uVar28]) {
                  uVar9 = uVar18;
                  iVar27 = iVar5;
                }
                iVar5 = iVar27;
                uVar11 = auStack_150[uVar28];
                uVar18 = uVar28;
                if ((int)auStack_150[uVar28] <= (int)(uint)uVar22) {
                  uVar11 = (uint)uVar22;
                  uVar18 = uVar17;
                }
                uVar17 = uVar18;
                uVar28 = uVar28 + 1;
                uVar22 = (ulonglong)uVar11;
                lVar21 = lVar21 + -1;
                uVar18 = uVar9;
              } while (lVar21 != 0);
              if ((int)uVar11 <= iVar5) break;
              aiStack_140[uVar9] = 0x7fffffff;
              local_160[uVar17] = local_160[uVar9] ^ 4;
              local_180[uVar17] = aiStack_170[uVar9];
              local_88[uVar17] = local_80[uVar9];
              auStack_150[uVar17] = 0;
              uVar2 = auStack_70[uVar9 * 2];
              auStack_70[uVar17 * 2 + -1] = auStack_70[uVar9 * 2 + -1];
              auStack_70[uVar17 * 2] = uVar2;
            }
            puVar24 = local_160;
            do {
              uVar11 = *puVar24;
              puVar24 = puVar24 + 1;
              pcVar14 = (char *)((longlong)auStack_70 + local_1a0 + uVar19 + -8);
              *pcVar14 = *pcVar14 + (char)((int)uVar11 >> 2);
              uVar19 = uVar19 + 0x10;
            } while ((longlong)uVar19 < 0x40);
          }
          local_1bc = local_1bc + -1;
          local_1a0 = local_1a0 + -1;
          psVar31 = psVar31 + -1;
        } while (-1 < local_1bc);
      }
      uVar12 = 0;
      iVar5 = 0x7fffffff;
      piVar20 = local_180;
      uVar11 = uVar12;
      do {
        iVar27 = *piVar20;
        piVar20 = piVar20 + 1;
        uVar7 = uVar12;
        if (iVar5 <= iVar27) {
          uVar7 = uVar11;
          iVar27 = iVar5;
        }
        iVar5 = iVar27;
        uVar12 = uVar12 + 1;
        uVar11 = uVar7;
      } while ((int)uVar12 < 8);
      if (0 < local_1ac) {
        local_188 = param_1;
        memcpy(param_1,auStack_70 + (ulonglong)(uVar7 & 3) * 2 + -1,(longlong)local_1ac);
      }
      *param_1 = *param_1 + (char)((int)uVar7 >> 2);
      return iVar5;
    }
  } while( true );
}

