// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_CNG @ 14f88a924

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_CNG(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  void *_Src;
  uint uVar19;
  uint uVar20;
  int *piVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  void *local_78 [2];
  short local_68;
  short sStack_66;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short local_58;
  short sStack_56;
  short sStack_54;
  short sStack_52;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  undefined8 local_48;
  undefined4 auStack_40 [2];
  ulonglong uVar21;
  
  puVar18 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)local_78;
  _Src = (void *)(param_1 + 0xaec);
  lVar28 = (longlong)param_4;
  local_78[0] = _Src;
  if (*(int *)(param_1 + 0x90c) != *(int *)(param_1 + 0x1054)) {
    uStack_a0 = 0x14f88a978;
    silk_CNG_Reset();
    *(undefined4 *)(param_1 + 0x1054) = *(undefined4 *)(param_1 + 0x90c);
  }
  uVar17 = 0;
  uVar20 = 0;
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x105c) == 0) {
      if (0 < *(int *)(param_1 + 0x924)) {
        psVar15 = (short *)(param_1 + 0xfec);
        uVar12 = uVar17;
        do {
          uVar24 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar24;
          *psVar15 = *psVar15 +
                     (short)((ulonglong)
                             (uint)((int)*(short *)((param_1 - (longlong)_Src) + 0x428 +
                                                   (longlong)psVar15) - (int)*psVar15) * 0x3fdc >>
                            0x10);
          psVar15 = psVar15 + 1;
        } while ((int)uVar24 < *(int *)(param_1 + 0x924));
      }
      iVar14 = *(int *)(param_1 + 0x914);
      uVar24 = uVar20;
      if (0 < iVar14) {
        puVar25 = (uint *)(param_2 + 0x10);
        uVar12 = uVar17;
        uVar21 = uVar17;
        uVar29 = uVar17;
        do {
          uVar10 = *puVar25;
          uVar13 = (uint)uVar12;
          puVar25 = puVar25 + 1;
          uVar24 = (uint)uVar21;
          if ((int)uVar10 <= (int)uVar13) {
            uVar24 = (uint)uVar29;
          }
          uVar19 = (uint)uVar21 + 1;
          uVar21 = (ulonglong)uVar19;
          uVar29 = (ulonglong)uVar24;
          if ((int)uVar10 <= (int)uVar13) {
            uVar10 = uVar13;
          }
          uVar12 = (ulonglong)uVar10;
        } while ((int)uVar19 < iVar14);
      }
      uStack_a0 = 0x14f88aa3d;
      memmove((void *)((longlong)_Src + (longlong)*(int *)(param_1 + 0x91c) * 4),_Src,
              (longlong)((iVar14 + -1) * *(int *)(param_1 + 0x91c)) << 2);
      uStack_a0 = 0x14f88aa60;
      memcpy(_Src,(void *)(param_1 + ((longlong)(int)(*(int *)(param_1 + 0x91c) * uVar24) + 1) * 4),
             (longlong)*(int *)(param_1 + 0x91c) << 2);
      if (0 < *(int *)(param_1 + 0x914)) {
        iVar14 = *(int *)(param_1 + 0x104c);
        piVar22 = (int *)(param_2 + 0x10);
        uVar12 = uVar17;
        do {
          iVar14 = iVar14 + (int)((ulonglong)((longlong)(*piVar22 - iVar14) * 0x121a) >> 0x10);
          *(int *)(param_1 + 0x104c) = iVar14;
          if (*piVar22 < (int)((ulonglong)((longlong)iVar14 * 0xb53c) >> 0x10)) {
            iVar14 = *piVar22;
            *(int *)(param_1 + 0x104c) = iVar14;
          }
          uVar24 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar24;
          piVar22 = piVar22 + 1;
        } while ((int)uVar24 < *(int *)(param_1 + 0x914));
      }
    }
    if (*(int *)(param_1 + 0x1058) == 0) {
      uStack_a0 = 0x14f88af9f;
      memset((void *)(param_1 + 0x100c),0,(longlong)*(int *)(param_1 + 0x924) << 2);
      goto LAB_14f88af9f;
    }
  }
  uVar12 = lVar28 * 4 + 0x4f;
  if (uVar12 <= lVar28 * 4 + 0x40U) {
    uVar12 = 0xffffffffffffff0;
  }
  uStack_a0 = 0x14f88aaee;
  lVar5 = -(uVar12 & 0xfffffffffffffff0);
  puVar18 = auStack_98 + lVar5;
  puVar30 = (undefined8 *)((longlong)local_78 + lVar5);
  iVar14 = (int)((ulonglong)
                 ((longlong)*(int *)(param_1 + 0x10b0) * (longlong)*(short *)(param_1 + 0x109c)) >>
                0x10);
  if ((iVar14 < 0x200000) && (iVar9 = *(int *)(param_1 + 0x104c), iVar9 < 0x800001)) {
    uVar24 = (int)((ulonglong)((longlong)iVar9 * (longlong)iVar9) >> 0x10) +
             (int)((ulonglong)((longlong)iVar14 * (longlong)iVar14) >> 0x10) * -0x20;
    if (0 < (int)uVar24) {
      iVar14 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      uVar20 = 0x1f - iVar14;
      iVar14 = 0x18 - uVar20;
      if (iVar14 != 0) {
        if (iVar14 < 0) {
          bVar4 = -(byte)iVar14 & 0x1f;
          uVar24 = uVar24 << bVar4 | uVar24 >> 0x20 - bVar4;
        }
        else {
          bVar4 = (byte)iVar14 & 0x1f;
          uVar24 = uVar24 >> bVar4 | uVar24 << 0x20 - bVar4;
        }
      }
      iVar14 = (int)((-(uint)((uVar20 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
               ((byte)((int)uVar20 >> 1) & 0x1f);
      uVar20 = (int)((ulonglong)(uVar24 & 0x7f) * (longlong)iVar14 * 0xd5 >> 0x10) + iVar14;
    }
    iVar14 = uVar20 << 8;
  }
  else {
    uVar24 = (int)*(short *)(param_1 + 0x104e) * (int)*(short *)(param_1 + 0x104e) +
             (iVar14 >> 0x10) * (iVar14 >> 0x10) * -0x20;
    if (0 < (int)uVar24) {
      iVar14 = 0x1f;
      if (uVar24 != 0) {
        for (; uVar24 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      uVar20 = 0x1f - iVar14;
      iVar14 = 0x18 - uVar20;
      if (iVar14 != 0) {
        if (iVar14 < 0) {
          bVar4 = -(byte)iVar14 & 0x1f;
          uVar24 = uVar24 << bVar4 | uVar24 >> 0x20 - bVar4;
        }
        else {
          bVar4 = (byte)iVar14 & 0x1f;
          uVar24 = uVar24 >> bVar4 | uVar24 << 0x20 - bVar4;
        }
      }
      iVar14 = (int)((-(uint)((uVar20 & 1) != 0) & 0xffffcb7a) + 0xb486) >>
               ((byte)((int)uVar20 >> 1) & 0x1f);
      uVar20 = (int)((ulonglong)(uVar24 & 0x7f) * (longlong)iVar14 * 0xd5 >> 0x10) + iVar14;
    }
    iVar14 = uVar20 << 0x10;
  }
  iVar9 = 0xff;
  if (param_4 < 0xff) {
    do {
      iVar9 = iVar9 >> 1;
    } while (param_4 < iVar9);
  }
  iVar11 = *(int *)(param_1 + 0x1050);
  if (0 < lVar28) {
    puVar16 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar5);
    lVar23 = lVar28;
    do {
      iVar11 = iVar11 * 0xbb38435 + 0x3619636b;
      *puVar16 = *(undefined4 *)((longlong)_Src + ((longlong)iVar11 >> 0x18 & (longlong)iVar9) * 4);
      puVar16 = puVar16 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  *(int *)(param_1 + 0x1050) = iVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1060);
  uVar3 = *(undefined4 *)(param_1 + 0x924);
  local_78[1] = puVar30;
  *(undefined8 *)(auStack_98 + lVar5 + -8) = 0x14f88acb1;
  silk_NLSF2A(&local_68,param_1 + 0xfec,uVar3,uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x1014);
  *puVar30 = *(undefined8 *)(param_1 + 0x100c);
  *(undefined8 *)((longlong)local_78 + lVar5 + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x1024);
  *(undefined8 *)((longlong)&local_68 + lVar5) = *(undefined8 *)(param_1 + 0x101c);
  *(undefined8 *)((longlong)&sStack_60 + lVar5) = uVar7;
  uVar2 = *(undefined4 *)(param_1 + 0x1030);
  uVar3 = *(undefined4 *)(param_1 + 0x1034);
  uVar6 = *(undefined4 *)(param_1 + 0x1038);
  *(undefined4 *)((longlong)&local_58 + lVar5) = *(undefined4 *)(param_1 + 0x102c);
  *(undefined4 *)((longlong)&sStack_54 + lVar5) = uVar2;
  *(undefined4 *)((longlong)&sStack_50 + lVar5) = uVar3;
  *(undefined4 *)((longlong)&sStack_4c + lVar5) = uVar6;
  uVar2 = *(undefined4 *)(param_1 + 0x1040);
  uVar3 = *(undefined4 *)(param_1 + 0x1044);
  uVar6 = *(undefined4 *)(param_1 + 0x1048);
  *(undefined4 *)((longlong)auStack_40 + lVar5 + -8) = *(undefined4 *)(param_1 + 0x103c);
  *(undefined4 *)((longlong)auStack_40 + lVar5 + -4) = uVar2;
  *(undefined4 *)((longlong)auStack_40 + lVar5) = uVar3;
  *(undefined4 *)((longlong)auStack_40 + lVar5 + 4) = uVar6;
  if ((*(int *)(param_1 + 0x924) != 10) && (*(int *)(param_1 + 0x924) != 0x10)) {
    *(undefined8 *)(auStack_98 + lVar5 + -8) = 0x14f88ad09;
    celt_fatal("assertion failed: psDec->LPC_order == 10 || psDec->LPC_order == 16",
               "../../../third_party/opus/src/silk/CNG.c",0x99);
  }
  if (0 < lVar28) {
    piVar22 = (int *)((longlong)&sStack_54 + lVar5);
    do {
      uVar20 = (int)((ulonglong)((longlong)piVar22[-3] * (longlong)sStack_56) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[-2] * (longlong)local_58) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[-1] * (longlong)sStack_5a) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[1] * (longlong)sStack_5e) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[2] * (longlong)sStack_60) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[3] * (longlong)sStack_62) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[4] * (longlong)sStack_64) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[5] * (longlong)sStack_66) >> 0x10) +
               (int)((ulonglong)((longlong)piVar22[6] * (longlong)local_68) >> 0x10) +
               (int)((ulonglong)((longlong)sStack_5c * (longlong)*piVar22) >> 0x10) +
               (*(int *)(param_1 + 0x924) >> 1);
      if (*(int *)(param_1 + 0x924) == 0x10) {
        uVar20 = (int)((ulonglong)((longlong)piVar22[-7] * (longlong)sStack_4e) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-9] * (longlong)sStack_4a) >> 0x10) + uVar20 +
                 (int)((ulonglong)((longlong)piVar22[-8] * (longlong)sStack_4c) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-6] * (longlong)sStack_50) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-5] * (longlong)sStack_52) >> 0x10) +
                 (int)((ulonglong)((longlong)piVar22[-4] * (longlong)sStack_54) >> 0x10);
      }
      uVar24 = piVar22[7];
      uVar10 = uVar20;
      if ((int)uVar20 < -0x8000000) {
        uVar10 = 0xf8000000;
      }
      if (0x7ffffff < (int)uVar20) {
        uVar10 = 0x7ffffff;
      }
      if ((int)(uVar10 * 0x10 + uVar24) < 0) {
        if ((int)(uVar24 | uVar10 << 4) < 0) goto LAB_14f88aeb3;
        iVar9 = 0x7fffffff;
      }
      else if ((uVar24 & (uVar10 & 0xf8000000) << 4) == 0) {
LAB_14f88aeb3:
        iVar9 = uVar10 * 0x10 + uVar24;
      }
      else {
        iVar9 = -0x80000000;
      }
      piVar22[7] = iVar9;
      iVar11 = ((int)((ulonglong)((longlong)iVar9 * (longlong)(iVar14 >> 6)) >> 0x10) >> 7) + 1 >> 1
      ;
      iVar9 = 0x7fff;
      if ((iVar11 < 0x8000) && (iVar9 = iVar11, iVar11 < -0x8000)) {
        iVar9 = -0x8000;
      }
      sVar8 = *(short *)(param_3 + uVar17 * 2);
      iVar26 = 0x7fff;
      iVar27 = 0x7fff;
      if (iVar9 + sVar8 < 0x8000) {
        if ((iVar11 < 0x8000) && (iVar26 = iVar11, iVar11 < -0x8000)) {
          iVar26 = -0x8000;
        }
        if (iVar26 + sVar8 < -0x8000) {
          sVar8 = -0x8000;
        }
        else {
          if ((iVar11 < 0x8000) && (iVar27 = iVar11, iVar11 < -0x8000)) {
            iVar27 = -0x8000;
          }
          sVar8 = (short)iVar27 + sVar8;
        }
      }
      else {
        sVar8 = 0x7fff;
      }
      *(short *)(param_3 + uVar17 * 2) = sVar8;
      piVar22 = piVar22 + 1;
      uVar17 = uVar17 + 1;
      _Src = local_78[0];
      puVar30 = local_78[1];
    } while ((longlong)uVar17 < lVar28);
  }
  puVar1 = (undefined8 *)((longlong)puVar30 + lVar28 * 4);
  uVar7 = puVar1[1];
  *(undefined8 *)((longlong)_Src + 0x520) = *puVar1;
  *(undefined8 *)((longlong)_Src + 0x528) = uVar7;
  puVar1 = (undefined8 *)((longlong)puVar30 + lVar28 * 4 + 0x10);
  uVar7 = puVar1[1];
  *(undefined8 *)((longlong)_Src + 0x530) = *puVar1;
  *(undefined8 *)((longlong)_Src + 0x538) = uVar7;
  puVar1 = (undefined8 *)((longlong)puVar30 + lVar28 * 4 + 0x20);
  uVar7 = puVar1[1];
  *(undefined8 *)((longlong)_Src + 0x540) = *puVar1;
  *(undefined8 *)((longlong)_Src + 0x548) = uVar7;
  puVar30 = (undefined8 *)((longlong)puVar30 + lVar28 * 4 + 0x30);
  uVar7 = puVar30[1];
  *(undefined8 *)((longlong)_Src + 0x550) = *puVar30;
  *(undefined8 *)((longlong)_Src + 0x558) = uVar7;
LAB_14f88af9f:
  *(undefined8 *)(puVar18 + -8) = 0x14f88afab;
  return;
}

// silk_CNG_Reset @ 14f88afc8

void silk_CNG_Reset(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x924);
  iVar4 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    puVar2 = (undefined2 *)(param_1 + 0xfec);
    do {
      iVar3 = iVar3 + (int)(0x7fff / (longlong)(iVar1 + 1));
      iVar4 = iVar4 + 1;
      *puVar2 = (short)iVar3;
      puVar2 = puVar2 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x924));
  }
  *(undefined4 *)(param_1 + 0x104c) = 0;
  *(undefined4 *)(param_1 + 0x1050) = 0x307880;
  return;
}

