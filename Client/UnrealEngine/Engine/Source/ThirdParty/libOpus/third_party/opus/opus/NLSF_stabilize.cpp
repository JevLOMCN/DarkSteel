// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_NLSF_stabilize @ 14f894820

void silk_NLSF_stabilize(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  ulonglong uVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  uVar6 = (ulonglong)param_3;
  iVar15 = 0;
  do {
    uVar7 = 1;
    iVar13 = 0;
    uVar16 = 0;
    iVar10 = (int)*param_1 - (int)*param_2;
    if (0 < param_3 + -1) {
      uVar18 = uVar7;
      do {
        iVar4 = ((int)param_1[uVar7] - (int)param_1[uVar7 - 1]) - (int)param_2[uVar7];
        iVar11 = (int)uVar18;
        uVar2 = uVar7;
        if (iVar10 <= iVar4) {
          iVar11 = iVar13;
          iVar4 = iVar10;
          uVar2 = uVar16;
        }
        uVar16 = uVar2;
        iVar10 = iVar4;
        iVar13 = iVar11;
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        uVar7 = uVar7 + 1;
      } while ((int)uVar17 <= param_3 + -1);
    }
    iVar11 = 0x8000;
    iVar4 = (0x8000 - param_1[uVar6 - 1]) - (int)param_2[uVar6];
    if (iVar4 < iVar10) {
      uVar16 = uVar6;
      iVar13 = param_3;
      iVar10 = iVar4;
    }
    if (-1 < iVar10) {
      return;
    }
    if (iVar13 == 0) {
      *param_1 = *param_2;
    }
    else if (iVar13 == param_3) {
      param_1[uVar6 - 1] = -0x8000 - param_2[uVar6];
    }
    else {
      iVar10 = 0;
      lVar9 = 0;
      if (0 < (longlong)uVar16) {
        do {
          psVar8 = param_2 + lVar9;
          lVar9 = lVar9 + 1;
          iVar10 = iVar10 + *psVar8;
        } while (lVar9 < (longlong)uVar16);
      }
      iVar13 = (int)param_2[uVar16] >> 1;
      uVar17 = iVar10 + iVar13;
      for (uVar7 = uVar6; (longlong)uVar16 < (longlong)uVar7; uVar7 = uVar7 - 1) {
        iVar11 = iVar11 - param_2[uVar7];
      }
      uVar12 = iVar11 - iVar13;
      uVar14 = (int)param_1[uVar16 - 1] + (int)param_1[uVar16];
      iVar10 = (int)uVar14 >> 1;
      iVar13 = (uVar14 & 1) + iVar10;
      if ((int)uVar12 < (int)uVar17) {
        if (iVar13 <= (int)uVar17) {
          if (iVar13 < (int)uVar12) goto LAB_14f894991;
LAB_14f89499c:
          uVar17 = (uint)(ushort)((param_1[uVar16 - 1] + param_1[uVar16] & 1U) + (short)iVar10);
        }
      }
      else if ((int)uVar12 < iVar13) {
LAB_14f894991:
        uVar17 = uVar12 & 0xffff;
      }
      else if ((int)uVar17 <= iVar13) goto LAB_14f89499c;
      sVar3 = (short)uVar17 - (param_2[uVar16] >> 1);
      param_1[uVar16 - 1] = sVar3;
      param_1[uVar16] = param_2[uVar16] + sVar3;
    }
    iVar15 = iVar15 + 1;
    if (0x13 < iVar15) {
      if (iVar15 == 0x14) {
        silk_insertion_sort_increasing_all_values_int16(param_1,param_3);
        sVar3 = *param_2;
        if (*param_2 < *param_1) {
          sVar3 = *param_1;
        }
        *param_1 = sVar3;
        if (1 < param_3) {
          uVar16 = (ulonglong)(param_3 - 1);
          psVar8 = param_1;
          do {
            psVar8 = psVar8 + 1;
            psVar1 = (short *)(((longlong)param_2 - (longlong)param_1) + (longlong)psVar8);
            iVar15 = (int)*(short *)((longlong)psVar1 + (longlong)param_1 + (-2 - (longlong)param_2)
                                    ) + (int)*psVar1;
            if (iVar15 < 0x8000) {
              if (iVar15 < -0x8000) {
                iVar15 = -0x8000;
              }
            }
            else {
              iVar15 = 0x7fff;
            }
            sVar3 = (short)iVar15;
            if ((short)iVar15 < *psVar8) {
              sVar3 = *psVar8;
            }
            *psVar8 = sVar3;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        uVar17 = 0x8000 - (int)param_2[uVar6];
        lVar9 = (longlong)(param_3 + -2);
        if ((int)param_1[uVar6 - 1] < (int)uVar17) {
          uVar17 = (uint)(ushort)param_1[uVar6 - 1];
        }
        param_1[uVar6 - 1] = (short)uVar17;
        if (-1 < param_3 + -2) {
          puVar5 = (ushort *)(param_1 + lVar9);
          do {
            uVar17 = (int)(short)puVar5[1] -
                     (int)*(short *)((longlong)puVar5 + (longlong)param_2 + (2 - (longlong)param_1))
            ;
            if ((int)(short)*puVar5 < (int)uVar17) {
              uVar17 = (uint)*puVar5;
            }
            lVar9 = lVar9 + -1;
            *puVar5 = (ushort)uVar17;
            puVar5 = puVar5 + -1;
          } while (-1 < lVar9);
        }
      }
      return;
    }
  } while( true );
}

