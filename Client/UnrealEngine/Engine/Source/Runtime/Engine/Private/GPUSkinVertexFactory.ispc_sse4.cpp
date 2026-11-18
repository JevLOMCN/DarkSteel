// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// UpdateBoneData_CopyBones___un_3C_s_5B_unFMatrix3x4_5D__3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_CunS_3E_Cuni_sse4 @ 140a97770

/* WARNING: Type propagation algorithm not settling */

void UpdateBoneData_CopyBones___un_3C_s_5B_unFMatrix3x4_5D__3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_CunS_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,
               undefined1 (*param_5) [16])

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined4 unaff_ESI;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar23;
  undefined1 auVar22 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 in_XMM1 [16];
  undefined4 uVar26;
  undefined4 uVar28;
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [12];
  
  auVar27 = *param_5;
  uVar15 = movmskps((int)param_5,auVar27);
  if (uVar15 == 0xf) {
    if (0 < (int)param_4) {
      puVar16 = (undefined8 *)(param_1 + 0x20);
      uVar19 = 0;
      do {
        lVar18 = (ulonglong)*(ushort *)(param_3 + uVar19 * 2) * 0x40;
        puVar2 = (undefined4 *)(param_2 + lVar18);
        uVar20 = puVar2[1];
        uVar23 = puVar2[2];
        puVar3 = (undefined4 *)(param_2 + 0x10 + lVar18);
        uVar24 = puVar3[1];
        uVar25 = puVar3[2];
        puVar4 = (undefined4 *)(param_2 + 0x20 + lVar18);
        uVar26 = *puVar4;
        uVar28 = puVar4[1];
        uVar29 = puVar4[2];
        puVar4 = (undefined4 *)(param_2 + 0x30 + lVar18);
        uVar30 = *puVar4;
        uVar13 = puVar4[1];
        uVar14 = puVar4[2];
        puVar16[-4] = CONCAT44(*puVar3,*puVar2);
        puVar16[-3] = CONCAT44(uVar30,uVar26);
        *(undefined4 *)(puVar16 + -2) = uVar20;
        *(undefined4 *)((longlong)puVar16 + -0xc) = uVar24;
        *(undefined4 *)(puVar16 + -1) = uVar28;
        *(undefined4 *)((longlong)puVar16 + -4) = uVar13;
        *puVar16 = CONCAT44(uVar25,uVar23);
        puVar16[1] = CONCAT44(uVar14,uVar29);
        uVar19 = uVar19 + 1;
        puVar16 = puVar16 + 6;
      } while (param_4 != uVar19);
    }
  }
  else if (0 < (int)param_4) {
    puVar16 = (undefined8 *)(param_1 + 0x2c);
    uVar19 = 0;
    auVar22._0_4_ = auVar27._0_4_ << 0x1f;
    auVar22._4_4_ = auVar27._4_4_ << 0x1f;
    auVar22._8_4_ = auVar27._8_4_ << 0x1f;
    auVar22._12_4_ = auVar27._12_4_ << 0x1f;
    uVar17 = movmskps(unaff_ESI,auVar22);
    do {
      lVar18 = (ulonglong)*(ushort *)(param_3 + uVar19 * 2) * 0x40;
      pauVar1 = (undefined1 (*) [16])(param_2 + lVar18);
      if (((byte)uVar15 & 9) == 9) {
        auVar21 = SUB1612(*pauVar1,0);
        in_XMM1 = pauVar1[1];
        auVar27 = pauVar1[2];
        in_XMM3 = pauVar1[3];
      }
      else {
        if ((uVar17 & 1) == 0) {
          if ((uVar17 & 2) == 0) goto LAB_140a97824;
LAB_140a979cf:
          auVar22 = insertps(auVar22,*(undefined4 *)(*pauVar1 + 4),0x10);
          if ((uVar17 & 4) != 0) goto LAB_140a979e1;
LAB_140a9782e:
          auVar21 = auVar22._0_12_;
        }
        else {
          auVar22 = ZEXT416(*(uint *)*pauVar1);
          if ((uVar17 & 2) != 0) goto LAB_140a979cf;
LAB_140a97824:
          if ((uVar17 & 4) == 0) goto LAB_140a9782e;
LAB_140a979e1:
          auVar22 = insertps(auVar22,*(undefined4 *)(*pauVar1 + 8),0x20);
          auVar21 = auVar22._0_12_;
        }
        if ((uVar17 & 8) != 0) {
          auVar27 = insertps(auVar22,*(undefined4 *)(*pauVar1 + 0xc),0x30);
          auVar21 = auVar27._0_12_;
        }
        uVar5 = param_2 + 0x10 + lVar18;
        if ((uVar17 & 1) != 0) {
          in_XMM1 = ZEXT416(*(uint *)uVar5);
        }
        if ((uVar17 & 2) != 0) {
          in_XMM1 = insertps(in_XMM1,*(uint *)(uVar5 + 4),0x10);
        }
        if ((uVar17 & 4) != 0) {
          in_XMM1 = insertps(in_XMM1,*(uint *)(uVar5 + 8),0x20);
        }
        if ((uVar17 & 8) != 0) {
          in_XMM1 = insertps(in_XMM1,*(uint *)(uVar5 + 0xc),0x30);
        }
        uVar5 = param_2 + 0x20 + lVar18;
        auVar27 = in_XMM2;
        if ((uVar17 & 1) != 0) {
          auVar27 = ZEXT416(*(uint *)uVar5);
        }
        if ((uVar17 & 2) != 0) {
          auVar27 = insertps(auVar27,*(uint *)(uVar5 + 4),0x10);
        }
        if ((uVar17 & 4) != 0) {
          auVar27 = insertps(auVar27,*(uint *)(uVar5 + 8),0x20);
        }
        if ((uVar17 & 8) != 0) {
          auVar27 = insertps(auVar27,*(uint *)(uVar5 + 0xc),0x30);
        }
        uVar5 = param_2 + 0x30 + lVar18;
        if ((uVar17 & 1) != 0) {
          in_XMM3 = ZEXT416(*(uint *)uVar5);
        }
        if ((uVar17 & 2) != 0) {
          in_XMM3 = insertps(in_XMM3,*(uint *)(uVar5 + 4),0x10);
        }
        if ((uVar17 & 4) != 0) {
          in_XMM3 = insertps(in_XMM3,*(uint *)(uVar5 + 8),0x20);
        }
        if ((uVar17 & 8) != 0) {
          in_XMM3 = insertps(in_XMM3,*(uint *)(uVar5 + 0xc),0x30);
        }
      }
      uVar20 = auVar21._0_4_;
      uVar23 = auVar21._4_4_;
      uVar25 = in_XMM1._4_4_;
      uVar24 = in_XMM1._0_4_;
      uVar26 = auVar27._0_4_;
      uVar28 = auVar27._4_4_;
      uVar30 = in_XMM3._4_4_;
      uVar29 = in_XMM3._0_4_;
      cVar6 = (char)((byte)uVar15 << 4) >> 4;
      if ((uVar15 & 1) != 0) {
        *(undefined4 *)((longlong)puVar16 + -0x2c) = uVar20;
      }
      if ((uVar15 & 2) != 0) {
        auVar12._4_4_ = uVar24;
        auVar12._0_4_ = uVar20;
        auVar12._8_4_ = uVar26;
        auVar12._12_4_ = uVar29;
        uVar5 = extractps(auVar12,1);
        puVar16[-5] = uVar5;
      }
      if ((uVar15 & 4) != 0) {
        auVar11._4_4_ = uVar24;
        auVar11._0_4_ = uVar20;
        auVar11._8_4_ = uVar26;
        auVar11._12_4_ = uVar29;
        uVar5 = extractps(auVar11,2);
        *(undefined8 *)((longlong)puVar16 + -0x24) = uVar5;
      }
      if (cVar6 < '\0') {
        auVar10._4_4_ = uVar24;
        auVar10._0_4_ = uVar20;
        auVar10._8_4_ = uVar26;
        auVar10._12_4_ = uVar29;
        uVar5 = extractps(auVar10,3);
        puVar16[-4] = uVar5;
      }
      if ((uVar15 & 1) != 0) {
        *(undefined4 *)((longlong)puVar16 + -0x1c) = uVar23;
      }
      if ((uVar15 & 2) != 0) {
        auVar9._4_4_ = uVar25;
        auVar9._0_4_ = uVar23;
        auVar9._8_4_ = uVar28;
        auVar9._12_4_ = uVar30;
        uVar5 = extractps(auVar9,1);
        puVar16[-3] = uVar5;
      }
      if ((uVar15 & 4) != 0) {
        auVar8._4_4_ = uVar25;
        auVar8._0_4_ = uVar23;
        auVar8._8_4_ = uVar28;
        auVar8._12_4_ = uVar30;
        uVar5 = extractps(auVar8,2);
        *(undefined8 *)((longlong)puVar16 + -0x14) = uVar5;
      }
      if (cVar6 < '\0') {
        auVar7._4_4_ = uVar25;
        auVar7._0_4_ = uVar23;
        auVar7._8_4_ = uVar28;
        auVar7._12_4_ = uVar30;
        uVar5 = extractps(auVar7,3);
        puVar16[-2] = uVar5;
      }
      auVar22._4_4_ = in_XMM1._8_4_;
      auVar22._0_4_ = auVar21._8_4_;
      in_XMM2._0_8_ = CONCAT44(in_XMM3._8_4_,auVar27._8_4_);
      in_XMM2._8_4_ = auVar27._12_4_;
      in_XMM2._12_4_ = in_XMM3._12_4_;
      auVar22._8_8_ = in_XMM2._0_8_;
      if ((uVar15 & 1) != 0) {
        *(int *)((longlong)puVar16 + -0xc) = auVar21._8_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar5 = extractps(auVar22,1);
        puVar16[-1] = uVar5;
      }
      if ((uVar15 & 4) != 0) {
        uVar5 = extractps(auVar22,2);
        *(undefined8 *)((longlong)puVar16 + -4) = uVar5;
      }
      if (cVar6 < '\0') {
        uVar5 = extractps(auVar22,3);
        *puVar16 = uVar5;
      }
      uVar19 = uVar19 + 1;
      puVar16 = puVar16 + 6;
    } while (param_4 != uVar19);
  }
  return;
}

// UpdateBoneData_CopyBones_sse4 @ 140a97b60

void UpdateBoneData_CopyBones_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  if (0 < (int)param_4) {
    puVar14 = (undefined4 *)(param_1 + 0x20);
    uVar15 = 0;
    do {
      lVar16 = (ulonglong)*(ushort *)(param_3 + uVar15 * 2) * 0x40;
      puVar1 = (undefined4 *)(param_2 + lVar16);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar16);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar16);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      puVar2 = (undefined4 *)(param_2 + 0x30 + lVar16);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      puVar14[-8] = *puVar1;
      puVar14[-7] = uVar5;
      puVar14[-6] = uVar8;
      puVar14[-5] = uVar11;
      puVar14[-4] = uVar3;
      puVar14[-3] = uVar6;
      puVar14[-2] = uVar9;
      puVar14[-1] = uVar12;
      *puVar14 = uVar4;
      puVar14[1] = uVar7;
      puVar14[2] = uVar10;
      puVar14[3] = uVar13;
      uVar15 = uVar15 + 1;
      puVar14 = puVar14 + 0xc;
    } while (param_4 != uVar15);
  }
  return;
}

