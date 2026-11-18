// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_huff_x64_zen2_kern @ 140d3bf20

undefined8 oodle_newLZ_huff_x64_zen2_kern(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  longlong *plVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [64];
  
  plVar27 = (longlong *)param_1[8];
  if (7 < (ulonglong)(param_1[7] - (longlong)plVar27)) {
    lVar15 = param_1[2];
    if (0xf < (ulonglong)(lVar15 - *param_1)) {
      plVar25 = (longlong *)param_1[6];
      uVar28 = 0;
      uVar18 = 1;
      uVar29 = 0;
      uVar22 = 1;
      uVar30 = 0;
      uVar20 = 1;
      plVar26 = (longlong *)(param_1[7] + -8);
      auVar31 = ZEXT1664((undefined1  [16])0x0);
      pauVar23 = (undefined1 (*) [16])*param_1;
      do {
        uVar19 = (uint)uVar20;
        uVar21 = (uint)uVar22;
        uVar17 = (uint)uVar18;
        pauVar24 = pauVar23;
        if ((plVar27 < plVar25) || (plVar26 < plVar27)) break;
        pauVar24 = (undefined1 (*) [16])(*pauVar23 + 0xf);
        uVar28 = uVar28 | *plVar25 << (uVar18 & 0x3f);
        lVar1 = *plVar26;
        uVar29 = uVar29 | CONCAT17((char)lVar1,
                                   CONCAT16((char)((ulonglong)lVar1 >> 8),
                                            CONCAT15((char)((ulonglong)lVar1 >> 0x10),
                                                     CONCAT14((char)((ulonglong)lVar1 >> 0x18),
                                                              CONCAT13((char)((ulonglong)lVar1 >>
                                                                             0x20),
                                                                       CONCAT12((char)((ulonglong)
                                                                                       lVar1 >> 0x28
                                                                                      ),CONCAT11((
                                                  char)((ulonglong)lVar1 >> 0x30),
                                                  (char)((ulonglong)lVar1 >> 0x38)))))))) <<
                          (uVar22 & 0x3f);
        uVar30 = uVar30 | *plVar27 << (uVar20 & 0x3f);
        uVar18 = uVar28 & 0xffe;
        auVar16 = vpinsrb_avx(auVar31._0_16_,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),0);
        bVar2 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)bVar2 & 0x3f);
        plVar25 = (longlong *)((longlong)plVar25 + (7 - (ulonglong)(uVar17 >> 3 & 7)));
        uVar18 = uVar29 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),1);
        bVar3 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)bVar3 & 0x3f);
        plVar26 = (longlong *)((longlong)plVar26 + ((ulonglong)(uVar21 >> 3 & 7) - 7));
        uVar18 = uVar30 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),2);
        bVar4 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)bVar4 & 0x3f);
        plVar27 = (longlong *)((longlong)plVar27 + (7 - (ulonglong)(uVar19 >> 3 & 7)));
        uVar18 = uVar28 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),3);
        bVar5 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)bVar5 & 0x3f);
        uVar18 = uVar29 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),4);
        bVar6 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)bVar6 & 0x3f);
        uVar18 = uVar30 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),5);
        bVar7 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)bVar7 & 0x3f);
        uVar18 = uVar28 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),6);
        bVar8 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)bVar8 & 0x3f);
        uVar18 = uVar29 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),7);
        bVar9 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)bVar9 & 0x3f);
        uVar18 = uVar30 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),8);
        bVar10 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)bVar10 & 0x3f);
        uVar18 = uVar28 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),9);
        bVar11 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)bVar11 & 0x3f);
        uVar18 = uVar29 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),10);
        bVar12 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)bVar12 & 0x3f);
        uVar18 = uVar30 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),0xb);
        bVar13 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)bVar13 & 0x3f);
        uVar18 = uVar28 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar18 + 0x91),0xc);
        bVar14 = *(byte *)((longlong)param_1 + uVar18 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)bVar14 & 0x3f);
        uVar17 = (((((uVar17 | 0x38) - (uint)bVar2) - (uint)bVar5) - (uint)bVar8) - (uint)bVar11) -
                 (uint)bVar14;
        uVar18 = (ulonglong)uVar17;
        uVar20 = uVar29 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar20 + 0x91),0xd);
        bVar2 = *(byte *)((longlong)param_1 + uVar20 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)bVar2 & 0x3f);
        uVar21 = (((((uVar21 | 0x38) - (uint)bVar3) - (uint)bVar6) - (uint)bVar9) - (uint)bVar12) -
                 (uint)bVar2;
        uVar22 = (ulonglong)uVar21;
        uVar20 = uVar30 & 0xffe;
        auVar16 = vpinsrb_avx(auVar16,(uint)*(byte *)((longlong)param_1 + uVar20 + 0x91),0xe);
        auVar31 = ZEXT1664(auVar16);
        bVar2 = *(byte *)((longlong)param_1 + uVar20 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)bVar2 & 0x3f);
        uVar19 = (((((uVar19 | 0x38) - (uint)bVar4) - (uint)bVar7) - (uint)bVar10) - (uint)bVar13) -
                 (uint)bVar2;
        uVar20 = (ulonglong)uVar19;
        *pauVar23 = auVar16;
        pauVar23 = pauVar24;
      } while (pauVar24 < (undefined1 (*) [16])(lVar15 + -0xf));
      *param_1 = (longlong)pauVar24;
      param_1[6] = (longlong)plVar25 - (ulonglong)(uVar17 - 1 >> 3);
      *(uint *)(param_1 + 0xf) = uVar17 - 1 & 7;
      *(uint *)(param_1 + 0xc) = (uint)(uVar28 >> 1) & 0x7fffffff;
      param_1[7] = (longlong)plVar26 + (ulonglong)(uVar21 - 1 >> 3) + 8;
      *(uint *)((longlong)param_1 + 0x7c) = uVar21 - 1 & 7;
      *(uint *)((longlong)param_1 + 100) = (uint)(uVar29 >> 1) & 0x7fffffff;
      param_1[8] = (longlong)plVar27 - (ulonglong)(uVar19 - 1 >> 3);
      *(uint *)(param_1 + 0x10) = uVar19 - 1 & 7;
      *(uint *)(param_1 + 0xd) = (uint)(uVar30 >> 1) & 0x7fffffff;
    }
  }
  return 1;
}

