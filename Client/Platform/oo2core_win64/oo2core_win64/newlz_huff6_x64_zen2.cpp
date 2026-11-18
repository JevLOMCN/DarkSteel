// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_huff6_x64_zen2_kern @ 140d3cd00

undefined8 oodle_newLZ_huff6_x64_zen2_kern(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong *puVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte bVar15;
  ulonglong uVar16;
  byte bVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong uVar22;
  byte bVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [64];
  ulonglong uVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  
  if (0xf < param_1[3] - param_1[1]) {
    puVar3 = (ulonglong *)param_1[6];
    puVar5 = (ulonglong *)param_1[8];
    if (7 < param_1[7] - (longlong)puVar5) {
      puVar6 = (ulonglong *)(param_1[7] - 8);
      puVar8 = (ulonglong *)param_1[9];
      puVar11 = (ulonglong *)param_1[0xb];
      if (7 < param_1[10] - (longlong)puVar11) {
        puVar9 = (ulonglong *)(param_1[10] - 8);
        param_1[3] = param_1[3] - 0xf;
        uVar13 = 0;
        uVar16 = 0;
        uVar18 = 0;
        uVar20 = 0;
        uVar22 = 0;
        uVar24 = 0;
        auVar26 = ZEXT864(*param_1);
        auVar28 = ZEXT864(param_1[1]);
        auVar29 = ZEXT1664((undefined1  [16])0x0);
        auVar30 = ZEXT1664((undefined1  [16])0x0);
        do {
          uVar27 = auVar28._0_8_;
          uVar25 = auVar26._0_8_;
          if ((((puVar5 < puVar3) || (puVar6 < puVar5)) || (puVar11 < puVar8)) || (puVar9 < puVar11)
             ) break;
          uVar14 = (*puVar3 | 0x8000000000000000) >> uVar13;
          uVar13 = *puVar6;
          uVar16 = (CONCAT17((char)uVar13,
                             CONCAT16((char)(uVar13 >> 8),
                                      CONCAT15((char)(uVar13 >> 0x10),
                                               CONCAT14((char)(uVar13 >> 0x18),
                                                        CONCAT13((char)(uVar13 >> 0x20),
                                                                 CONCAT12((char)(uVar13 >> 0x28),
                                                                          CONCAT11((char)(uVar13 >>
                                                                                         0x30),
                                                                                   (char)(uVar13 >>
                                                                                         0x38)))))))
                            ) | 0x8000000000000000) >> uVar16;
          uVar18 = (*puVar5 | 0x8000000000000000) >> uVar18;
          uVar20 = (*puVar8 | 0x8000000000000000) >> uVar20;
          uVar13 = *puVar9;
          uVar22 = (CONCAT17((char)uVar13,
                             CONCAT16((char)(uVar13 >> 8),
                                      CONCAT15((char)(uVar13 >> 0x10),
                                               CONCAT14((char)(uVar13 >> 0x18),
                                                        CONCAT13((char)(uVar13 >> 0x20),
                                                                 CONCAT12((char)(uVar13 >> 0x28),
                                                                          CONCAT11((char)(uVar13 >>
                                                                                         0x30),
                                                                                   (char)(uVar13 >>
                                                                                         0x38)))))))
                            ) | 0x8000000000000000) >> uVar22;
          uVar24 = (*puVar11 | 0x8000000000000000) >> uVar24;
          auVar1 = vpaddq_avx(auVar26._0_16_,SUB6416(ZEXT864(0xf),0));
          auVar26 = ZEXT1664(auVar1);
          uVar25 = auVar1._0_8_;
          auVar1 = vpaddq_avx(auVar28._0_16_,SUB6416(ZEXT864(0xf),0));
          auVar28 = ZEXT1664(auVar1);
          uVar27 = auVar1._0_8_;
          uVar13 = uVar14 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar29._0_16_,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91)
                               ,0);
          uVar14 = uVar14 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar16 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),1);
          uVar16 = uVar16 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar18 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),2);
          uVar18 = uVar18 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar20 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar30._0_16_,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91)
                               ,0);
          uVar20 = uVar20 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar22 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),1);
          uVar22 = uVar22 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar24 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),2);
          uVar24 = uVar24 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar14 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),3);
          uVar14 = uVar14 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar16 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),4);
          uVar16 = uVar16 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar18 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),5);
          uVar18 = uVar18 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar20 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),3);
          uVar20 = uVar20 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar22 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),4);
          uVar22 = uVar22 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar24 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),5);
          uVar24 = uVar24 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar14 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),6);
          uVar14 = uVar14 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar16 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),7);
          uVar16 = uVar16 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar18 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),8);
          uVar18 = uVar18 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar20 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),6);
          uVar20 = uVar20 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar22 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),7);
          uVar22 = uVar22 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar24 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),8);
          uVar24 = uVar24 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar14 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),9);
          uVar14 = uVar14 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar16 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),10);
          uVar16 = uVar16 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar18 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xb);
          uVar18 = uVar18 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar20 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),9);
          uVar20 = uVar20 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar22 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),10);
          uVar22 = uVar22 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar24 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xb);
          uVar24 = uVar24 >> ((ulonglong)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x90) & 0x3f);
          uVar13 = uVar14 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xc);
          bVar12 = (char)LZCOUNT(uVar14) + *(char *)((longlong)param_1 + uVar13 * 2 + 0x90);
          uVar13 = uVar16 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xd);
          bVar15 = (char)LZCOUNT(uVar16) + *(char *)((longlong)param_1 + uVar13 * 2 + 0x90);
          uVar13 = uVar18 & 0x7ff;
          auVar1 = vpinsrb_avx(auVar1,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xe);
          auVar29 = ZEXT1664(auVar1);
          bVar17 = (char)LZCOUNT(uVar18) + *(char *)((longlong)param_1 + uVar13 * 2 + 0x90);
          uVar13 = uVar20 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xc);
          bVar19 = (char)LZCOUNT(uVar20) + *(char *)((longlong)param_1 + uVar13 * 2 + 0x90);
          uVar13 = uVar22 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xd);
          bVar21 = (char)LZCOUNT(uVar22) + *(char *)((longlong)param_1 + uVar13 * 2 + 0x90);
          uVar13 = uVar24 & 0x7ff;
          auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)((longlong)param_1 + uVar13 * 2 + 0x91),0xe);
          auVar30 = ZEXT1664(auVar2);
          bVar23 = (char)LZCOUNT(uVar24) + *(char *)((longlong)param_1 + uVar13 * 2 + 0x90);
          *(undefined1 (*) [16])(uVar25 - 0xf) = auVar1;
          puVar3 = (ulonglong *)((longlong)puVar3 + (((ulonglong)bVar12 & 0x38) >> 3));
          uVar13 = (ulonglong)bVar12 & 7;
          puVar6 = (ulonglong *)((longlong)puVar6 - (((ulonglong)bVar15 & 0x38) >> 3));
          uVar16 = (ulonglong)bVar15 & 7;
          puVar5 = (ulonglong *)((longlong)puVar5 + (((ulonglong)bVar17 & 0x38) >> 3));
          uVar18 = (ulonglong)bVar17 & 7;
          puVar8 = (ulonglong *)((longlong)puVar8 + (((ulonglong)bVar19 & 0x38) >> 3));
          uVar20 = (ulonglong)bVar19 & 7;
          puVar9 = (ulonglong *)((longlong)puVar9 - (((ulonglong)bVar21 & 0x38) >> 3));
          uVar22 = (ulonglong)bVar21 & 7;
          puVar11 = (ulonglong *)((longlong)puVar11 + (((ulonglong)bVar23 & 0x38) >> 3));
          uVar24 = (ulonglong)bVar23 & 7;
          *(undefined1 (*) [16])(uVar27 - 0xf) = auVar2;
        } while (uVar27 < param_1[3]);
        *param_1 = uVar25;
        param_1[1] = uVar27;
        param_1[3] = param_1[3] + 0xf;
        puVar7 = puVar6 + 1;
        if (((puVar5 < puVar3) ||
            (((puVar7 <= puVar5 && ((puVar5 != puVar7 || (uVar16 != 0 || uVar18 != 0)))) ||
             (puVar10 = puVar9 + 1, puVar11 < puVar8)))) ||
           ((puVar10 <= puVar11 && ((puVar11 != puVar10 || (uVar22 != 0 || uVar24 != 0)))))) {
          return 0;
        }
        iVar4 = 0;
        if (uVar13 != 0) {
          uVar25 = *puVar3;
          puVar3 = (ulonglong *)((longlong)puVar3 + 1);
          iVar4 = 8 - (int)uVar13;
          *(uint *)(param_1 + 0xc) = (uint)(byte)((byte)uVar25 >> (sbyte)uVar13);
        }
        param_1[6] = (ulonglong)puVar3;
        *(int *)(param_1 + 0xf) = iVar4;
        iVar4 = 0;
        if (uVar16 != 0) {
          puVar7 = (ulonglong *)((longlong)puVar6 + 7);
          iVar4 = 8 - (int)uVar16;
          *(uint *)((longlong)param_1 + 100) =
               (uint)(*(byte *)((longlong)puVar6 + 7) >> (sbyte)uVar16);
        }
        param_1[7] = (ulonglong)puVar7;
        *(int *)((longlong)param_1 + 0x7c) = iVar4;
        iVar4 = 0;
        if (uVar18 != 0) {
          uVar13 = *puVar5;
          puVar5 = (ulonglong *)((longlong)puVar5 + 1);
          iVar4 = 8 - (int)uVar18;
          *(uint *)(param_1 + 0xd) = (uint)(byte)((byte)uVar13 >> (sbyte)uVar18);
        }
        param_1[8] = (ulonglong)puVar5;
        *(int *)(param_1 + 0x10) = iVar4;
        iVar4 = 0;
        if (uVar20 != 0) {
          uVar13 = *puVar8;
          puVar8 = (ulonglong *)((longlong)puVar8 + 1);
          iVar4 = 8 - (int)uVar20;
          *(uint *)((longlong)param_1 + 0x6c) = (uint)(byte)((byte)uVar13 >> (sbyte)uVar20);
        }
        param_1[9] = (ulonglong)puVar8;
        *(int *)((longlong)param_1 + 0x84) = iVar4;
        iVar4 = 0;
        if (uVar22 != 0) {
          puVar10 = (ulonglong *)((longlong)puVar9 + 7);
          iVar4 = 8 - (int)uVar22;
          *(uint *)(param_1 + 0xe) = (uint)(*(byte *)((longlong)puVar9 + 7) >> (sbyte)uVar22);
        }
        param_1[10] = (ulonglong)puVar10;
        *(int *)(param_1 + 0x11) = iVar4;
        iVar4 = 0;
        if (uVar24 != 0) {
          uVar13 = *puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          iVar4 = 8 - (int)uVar24;
          *(uint *)((longlong)param_1 + 0x74) = (uint)(byte)((byte)uVar13 >> (sbyte)uVar24);
        }
        param_1[0xb] = (ulonglong)puVar11;
        *(int *)((longlong)param_1 + 0x8c) = iVar4;
      }
    }
  }
  return 1;
}

