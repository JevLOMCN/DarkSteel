// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// FUN_14f892788 @ 14f892788

int FUN_14f892788(int *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  
  iVar16 = param_2 + -1;
  iVar17 = 0x40000000;
  if (0 < iVar16) {
    puVar7 = (uint *)(param_1 + iVar16);
    do {
      if (0x1ffdf3c < *puVar7 + 0xffef9e) goto LAB_14f892a76;
      lVar18 = (longlong)(int)(*puVar7 * -0x80);
      uVar8 = 0x40000000 - (int)((ulonglong)(lVar18 * lVar18) >> 0x20);
      iVar17 = (int)((ulonglong)((longlong)iVar17 * (longlong)(int)uVar8) >> 0x20) * 4;
      if (iVar17 < 0x1a36e) goto LAB_14f892a76;
      uVar1 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
      if (uVar1 == 0) {
        iVar3 = -0x20;
      }
      else {
        iVar3 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = iVar3 + -0x1f;
      }
      iVar3 = iVar3 + 0x20;
      if (uVar1 == 0) {
        iVar14 = 0x1f;
      }
      else {
        iVar14 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        iVar14 = 0x1e - iVar14;
      }
      iVar9 = uVar8 << ((byte)iVar14 & 0x1f);
      lVar6 = 0x1fffffff / (longlong)(iVar9 >> 0x10);
      iVar5 = (int)lVar6;
      iVar5 = (int)((ulonglong)
                    ((longlong)
                     ((int)((ulonglong)((longlong)iVar9 * (longlong)(short)lVar6) >> 0x10) * -8) *
                    (longlong)iVar5) >> 0x10) + iVar5 * 0x10000;
      iVar14 = (0x1f - iVar14) - iVar3;
      if (iVar14 < 1) {
        bVar2 = -(byte)iVar14;
        iVar10 = -0x80000000 >> (bVar2 & 0x1f);
        iVar4 = 0x7fffffff >> (bVar2 & 0x1f);
        iVar9 = iVar5;
        if (iVar5 < iVar4) {
          iVar9 = iVar4;
        }
        iVar14 = iVar5;
        if (iVar5 < iVar10) {
          iVar14 = iVar10;
        }
        if (iVar10 < iVar5) {
          iVar9 = iVar10;
        }
        if (iVar4 < iVar5) {
          iVar14 = iVar4;
        }
        if (iVar4 < iVar10) {
          iVar14 = iVar9;
        }
        iVar14 = iVar14 << (bVar2 & 0x1f);
      }
      else if (iVar14 < 0x20) {
        iVar14 = iVar5 >> ((byte)iVar14 & 0x1f);
      }
      else {
        iVar14 = 0;
      }
      lVar6 = 0;
      if (0 < param_2 >> 1) {
        puVar15 = puVar7;
        do {
          puVar15 = puVar15 + -1;
          uVar8 = param_1[lVar6];
          uVar1 = *puVar15;
          uVar11 = (uint)(((int)uVar1 * lVar18 >> 0x1e) + 1 >> 1);
          iVar9 = uVar8 - uVar11;
          iVar5 = iVar9;
          if ((int)(uVar8 & ~uVar11) < 0) {
            iVar5 = -0x80000000;
          }
          iVar4 = iVar9;
          if ((int)(uVar11 & ~uVar8) < 0) {
            iVar4 = 0x7fffffff;
          }
          if (-1 < iVar9) {
            iVar4 = iVar5;
          }
          lVar12 = (longlong)iVar4 * (longlong)iVar14;
          lVar13 = (lVar12 >> ((char)iVar3 - 1U & 0x3f)) + 1 >> 1;
          if (iVar3 == 1) {
            lVar13 = (lVar12 >> 1) + (ulonglong)((uint)lVar12 & 1);
          }
          if (0xffffffff < lVar13 + 0x80000000U) goto LAB_14f892a76;
          param_1[lVar6] = (int)lVar13;
          uVar8 = (uint)(((int)uVar8 * lVar18 >> 0x1e) + 1 >> 1);
          iVar9 = uVar1 - uVar8;
          iVar5 = iVar9;
          if ((int)(uVar1 & ~uVar8) < 0) {
            iVar5 = -0x80000000;
          }
          iVar4 = iVar9;
          if ((int)(uVar8 & ~uVar1) < 0) {
            iVar4 = 0x7fffffff;
          }
          if (-1 < iVar9) {
            iVar4 = iVar5;
          }
          lVar12 = (longlong)iVar4 * (longlong)iVar14;
          lVar13 = (lVar12 >> ((char)iVar3 - 1U & 0x3f)) + 1 >> 1;
          if (iVar3 == 1) {
            lVar13 = (lVar12 >> 1) + (ulonglong)((uint)lVar12 & 1);
          }
          if (0xffffffff < lVar13 + 0x80000000U) goto LAB_14f892a76;
          *puVar15 = (uint)lVar13;
          lVar6 = lVar6 + 1;
        } while (lVar6 < param_2 >> 1);
      }
      iVar16 = iVar16 + -1;
      param_2 = param_2 + -1;
      puVar7 = puVar7 + -1;
    } while (0 < iVar16);
  }
  if ((0x1ffdf3c < param_1[iVar16] + 0xffef9eU) ||
     (iVar17 = (int)((ulonglong)
                     ((longlong)
                      (0x40000000 -
                      (int)((ulonglong)((longlong)(*param_1 * -0x80) * (longlong)(*param_1 * -0x80))
                           >> 0x20)) * (longlong)iVar17) >> 0x20) * 4, iVar17 < 0x1a36e)) {
LAB_14f892a76:
    iVar17 = 0;
  }
  return iVar17;
}

// silk_LPC_inverse_pred_gain_c @ 14f892a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 silk_LPC_inverse_pred_gain_c(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  int local_78 [24];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar3 = 0;
  if (0 < param_2) {
    lVar4 = 0;
    do {
      iVar1 = (int)*(short *)(param_1 + lVar4 * 2);
      iVar3 = iVar3 + iVar1;
      local_78[lVar4] = iVar1 << 0xc;
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_2);
    if (0xfff < iVar3) {
      return 0;
    }
  }
  uVar2 = FUN_14f892788(local_78,param_2);
  return uVar2;
}

