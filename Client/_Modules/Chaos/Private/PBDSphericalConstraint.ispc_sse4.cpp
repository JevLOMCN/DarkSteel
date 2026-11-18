// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 26

// ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_sse4 @ 140348e70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  byte bVar22;
  undefined4 unaff_EBP;
  int iVar23;
  float *pfVar24;
  longlong lVar25;
  uint *puVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  longlong in_R11;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar46;
  undefined8 uVar41;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  
  uVar18 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar18 = param_7;
  }
  if ((int)(uVar18 & 0xfffffffc) < 1) {
    uVar19 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    in_R11 = (longlong)param_6 * 0x10 + param_1;
    pfVar24 = (float *)(param_2 + 0x20 + (longlong)param_6 * 0xc);
    uVar21 = 0;
    uVar19 = 0;
    do {
      auVar57 = *(undefined1 (*) [16])(in_R11 + uVar21 * 4);
      fVar40 = auVar57._12_4_;
      auVar42 = *(undefined1 (*) [16])(in_R11 + 0x10 + uVar21 * 4);
      fVar46 = auVar42._12_4_;
      auVar63 = *(undefined1 (*) [16])(in_R11 + 0x20 + uVar21 * 4);
      fVar48 = auVar63._12_4_;
      auVar76 = *(undefined1 (*) [16])(in_R11 + 0x30 + uVar21 * 4);
      fVar50 = auVar76._12_4_;
      auVar4._4_4_ = -(uint)(fVar46 != _UNK_150aa8f64);
      auVar4._0_4_ = -(uint)(fVar40 != __xmm_00000000000000000000000000000000);
      auVar4._8_4_ = -(uint)(fVar48 != (float)DAT_150aa8f68);
      auVar4._12_4_ = -(uint)(fVar50 != DAT_150aa8f68._4_4_);
      iVar23 = movmskps(unaff_EBP,auVar4);
      unaff_EBP = 0;
      if (iVar23 != 0) {
        auVar4 = *(undefined1 (*) [16])(pfVar24 + -8);
        auVar75 = *(undefined1 (*) [16])(pfVar24 + -4);
        auVar74 = insertps(auVar75,auVar4,0x8c);
        fVar84 = auVar57._0_4_ - auVar4._0_4_;
        fVar85 = auVar42._0_4_ - auVar4._12_4_;
        fVar86 = auVar63._0_4_ - auVar75._8_4_;
        fVar87 = auVar76._0_4_ - pfVar24[1];
        fVar39 = auVar57._4_4_ - auVar4._4_4_;
        fVar45 = auVar42._4_4_ - auVar75._0_4_;
        fVar47 = auVar63._4_4_ - auVar75._12_4_;
        fVar49 = auVar76._4_4_ - pfVar24[2];
        fVar68 = auVar57._8_4_ - auVar74._0_4_;
        fVar71 = auVar42._8_4_ - auVar74._4_4_;
        fVar72 = auVar63._8_4_ - *pfVar24;
        fVar73 = auVar76._8_4_ - pfVar24[3];
        fVar80 = fVar68 * fVar68 + fVar39 * fVar39 + fVar84 * fVar84;
        fVar81 = fVar71 * fVar71 + fVar45 * fVar45 + fVar85 * fVar85;
        fVar82 = fVar72 * fVar72 + fVar47 * fVar47 + fVar86 * fVar86;
        fVar83 = fVar73 * fVar73 + fVar49 * fVar49 + fVar87 * fVar87;
        pfVar1 = (float *)(param_3 + (uVar21 & 0xffffffff));
        auVar56._0_4_ = *pfVar1 * param_5 + param_4;
        auVar56._4_4_ = pfVar1[1] * param_5 + param_4;
        auVar56._8_4_ = pfVar1[2] * param_5 + param_4;
        auVar56._12_4_ = pfVar1[3] * param_5 + param_4;
        auVar31._0_4_ =
             -(uint)(auVar56._0_4_ * auVar56._0_4_ + ___xmm_322bcc77322bcc77322bcc77322bcc77 <
                     fVar80 && fVar40 != __xmm_00000000000000000000000000000000);
        auVar31._4_4_ =
             -(uint)(auVar56._4_4_ * auVar56._4_4_ + _UNK_1506895d4 < fVar81 &&
                    fVar46 != _UNK_150aa8f64);
        auVar31._8_4_ =
             -(uint)(auVar56._8_4_ * auVar56._8_4_ + _UNK_1506895d8 < fVar82 &&
                    fVar48 != (float)DAT_150aa8f68);
        auVar31._12_4_ =
             -(uint)(auVar56._12_4_ * auVar56._12_4_ + _UNK_1506895dc < fVar83 &&
                    fVar50 != DAT_150aa8f68._4_4_);
        iVar23 = movmskps(iVar23,auVar31);
        unaff_EBP = 0;
        if (iVar23 != 0) {
          auVar17._4_4_ = fVar81;
          auVar17._0_4_ = fVar80;
          auVar17._8_4_ = fVar82;
          auVar17._12_4_ = fVar83;
          auVar31 = sqrtps(auVar31,auVar17);
          auVar31 = divps(auVar56,auVar31);
          fVar80 = auVar31._0_4_;
          fVar81 = auVar31._4_4_;
          fVar82 = auVar31._8_4_;
          fVar83 = auVar31._12_4_;
          fVar78 = auVar4._0_4_ + fVar84 * fVar80;
          fVar79 = auVar4._12_4_ + fVar85 * fVar81;
          fVar86 = auVar75._8_4_ + fVar86 * fVar82;
          fVar87 = pfVar24[1] + fVar87 * fVar83;
          fVar84 = auVar4._4_4_ + fVar39 * fVar80;
          fVar85 = auVar75._0_4_ + fVar45 * fVar81;
          fVar47 = auVar75._12_4_ + fVar47 * fVar82;
          fVar49 = pfVar24[2] + fVar49 * fVar83;
          fVar39 = auVar74._0_4_ + fVar68 * fVar80;
          fVar45 = auVar74._4_4_ + fVar71 * fVar81;
          auVar75._0_8_ = CONCAT44(fVar45,fVar39);
          auVar75._8_4_ = *pfVar24 + fVar72 * fVar82;
          auVar75._12_4_ = pfVar24[3] + fVar73 * fVar83;
          bVar22 = (char)((char)iVar23 << 4) >> 4;
          unaff_EBP = CONCAT31((int3)((uint)iVar23 >> 8),bVar22);
          if ((~bVar22 & 0xf) == 0) {
            auVar57._4_4_ = fVar79;
            auVar57._0_4_ = fVar78;
            auVar57._8_4_ = fVar79;
            auVar57._12_4_ = fVar85;
            auVar42._8_4_ = fVar45;
            auVar42._0_8_ = auVar75._0_8_;
            auVar42._12_4_ = fVar46;
            auVar63._8_8_ = auVar42._8_8_;
            auVar76._0_8_ = CONCAT44(fVar48,auVar75._8_4_);
            auVar76._8_4_ = auVar75._12_4_;
            auVar76._12_4_ = fVar50;
            puVar2 = (undefined8 *)(in_R11 + uVar21 * 4);
            *puVar2 = CONCAT44(fVar84,fVar78);
            puVar2[1] = CONCAT44(fVar40,fVar39);
            auVar63._0_8_ = auVar57._8_8_;
            *(undefined1 (*) [16])(in_R11 + 0x10 + uVar21 * 4) = auVar63;
            puVar2 = (undefined8 *)(in_R11 + 0x20 + uVar21 * 4);
            *puVar2 = CONCAT44(fVar47,fVar86);
            puVar2[1] = auVar76._0_8_;
            auVar74._8_8_ = auVar76._8_8_;
            auVar74._4_4_ = fVar49;
            auVar74._0_4_ = fVar87;
            *(undefined1 (*) [16])(in_R11 + 0x30 + uVar21 * 4) = auVar74;
          }
          else {
            if ((bVar22 & 1) != 0) {
              *(float *)(in_R11 + uVar21 * 4) = fVar78;
            }
            if ((bVar22 & 2) != 0) {
              auVar16._4_4_ = fVar79;
              auVar16._0_4_ = fVar78;
              auVar16._8_4_ = fVar86;
              auVar16._12_4_ = fVar87;
              uVar41 = extractps(auVar16,1);
              *(undefined8 *)(in_R11 + 0x10 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              auVar15._4_4_ = fVar79;
              auVar15._0_4_ = fVar78;
              auVar15._8_4_ = fVar86;
              auVar15._12_4_ = fVar87;
              uVar41 = extractps(auVar15,2);
              *(undefined8 *)(in_R11 + 0x20 + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              auVar14._4_4_ = fVar79;
              auVar14._0_4_ = fVar78;
              auVar14._8_4_ = fVar86;
              auVar14._12_4_ = fVar87;
              uVar41 = extractps(auVar14,3);
              *(undefined8 *)(in_R11 + 0x30 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 1) != 0) {
              *(float *)(in_R11 + 4 + uVar21 * 4) = fVar84;
            }
            if ((bVar22 & 2) != 0) {
              auVar13._4_4_ = fVar85;
              auVar13._0_4_ = fVar84;
              auVar13._8_4_ = fVar47;
              auVar13._12_4_ = fVar49;
              uVar41 = extractps(auVar13,1);
              *(undefined8 *)(in_R11 + 0x14 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              auVar12._4_4_ = fVar85;
              auVar12._0_4_ = fVar84;
              auVar12._8_4_ = fVar47;
              auVar12._12_4_ = fVar49;
              uVar41 = extractps(auVar12,2);
              *(undefined8 *)(in_R11 + 0x24 + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              auVar11._4_4_ = fVar85;
              auVar11._0_4_ = fVar84;
              auVar11._8_4_ = fVar47;
              auVar11._12_4_ = fVar49;
              uVar41 = extractps(auVar11,3);
              *(undefined8 *)(in_R11 + 0x34 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 1) != 0) {
              *(float *)(in_R11 + 8 + uVar21 * 4) = fVar39;
            }
            if ((bVar22 & 2) != 0) {
              uVar41 = extractps(auVar75,1);
              *(undefined8 *)(in_R11 + 0x18 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              uVar41 = extractps(auVar75,2);
              *(undefined8 *)(in_R11 + 0x28 + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              uVar41 = extractps(auVar75,3);
              *(undefined8 *)(in_R11 + 0x38 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 1) != 0) {
              uVar41 = extractps(auVar57,3);
              *(undefined8 *)(in_R11 + 0xc + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 2) != 0) {
              uVar41 = extractps(auVar42,3);
              *(undefined8 *)(in_R11 + 0x1c + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              uVar41 = extractps(auVar63,3);
              *(undefined8 *)(in_R11 + 0x2c + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              uVar41 = extractps(auVar76,3);
              *(undefined8 *)(in_R11 + 0x3c + uVar21 * 4) = uVar41;
            }
          }
        }
      }
      uVar19 = uVar19 + 4;
      uVar21 = uVar21 + 0x10;
      pfVar24 = pfVar24 + 0xc;
    } while (uVar19 < (uVar18 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar19) {
      return;
    }
  }
  uVar29 = (uint)in_R11;
  uVar18 = (uint)uVar19;
  bVar5 = (int)(uVar18 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  uVar51 = -(uint)bVar5;
  bVar6 = (int)(uVar18 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  uVar52 = -(uint)bVar6;
  bVar7 = (int)(uVar18 | _UNK_150631e08) < (int)param_7;
  uVar53 = -(uint)bVar7;
  bVar8 = (int)(uVar18 | _UNK_150631e0c) < (int)param_7;
  uVar54 = -(uint)bVar8;
  lVar28 = (longlong)(int)(param_6 + uVar18) * 0x10;
  pauVar20 = (undefined1 (*) [16])(param_1 + lVar28);
  auVar9._4_4_ = uVar52;
  auVar9._0_4_ = uVar51;
  auVar9._8_4_ = uVar53;
  auVar9._12_4_ = uVar54;
  uVar27 = movmskps((int)lVar28,auVar9);
  if (uVar27 == 0xf) {
    auVar57 = *pauVar20;
    auVar42 = pauVar20[2];
    auVar61._8_4_ = auVar57._4_4_;
    auVar61._0_8_ = auVar57._0_8_;
    auVar61._12_4_ = *(undefined4 *)(pauVar20[1] + 4);
    auVar58._4_4_ = *(undefined4 *)pauVar20[1];
    auVar58._0_4_ = auVar57._0_4_;
    auVar33._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[1] + 8),auVar57._8_4_);
    auVar33._8_4_ = auVar57._12_4_;
    auVar33._12_4_ = *(undefined4 *)(pauVar20[1] + 0xc);
    auVar60._8_4_ = auVar42._4_4_;
    auVar60._0_8_ = auVar42._0_8_;
    auVar60._12_4_ = *(undefined4 *)(pauVar20[3] + 4);
    auVar59._8_8_ = auVar60._8_8_;
    auVar58._12_4_ = *(undefined4 *)pauVar20[3];
    auVar58._8_4_ = auVar42._0_4_;
    auVar44._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[3] + 8),auVar42._8_4_);
    auVar44._8_4_ = auVar42._12_4_;
    auVar44._12_4_ = *(undefined4 *)(pauVar20[3] + 0xc);
    auVar59._0_8_ = auVar61._8_8_;
    auVar65._8_8_ = auVar44._0_8_;
    auVar65._0_8_ = auVar33._0_8_;
    auVar43._8_8_ = auVar44._8_8_;
    auVar43._0_8_ = auVar33._8_8_;
  }
  else {
    auVar32._0_4_ = ___xmm_00000030000000200000001000000000 & uVar51;
    auVar32._4_4_ = _UNK_150b511c4 & uVar52;
    auVar32._8_4_ = _UNK_150b511c8 & uVar53;
    auVar32._12_4_ = _UNK_150b511cc & uVar54;
    lVar30 = extractps(auVar32,1);
    lVar28 = extractps(auVar32,2);
    lVar25 = extractps(auVar32,3);
    auVar57 = insertps(ZEXT416(*(uint *)*pauVar20),*(undefined4 *)(*pauVar20 + lVar30),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + lVar28),0x20);
    auVar58 = insertps(auVar57,*(undefined4 *)(*pauVar20 + lVar25),0x30);
    auVar57 = insertps(ZEXT416(*(uint *)(*pauVar20 +
                                        (___xmm_00000034000000240000001400000004 & uVar51))),
                       *(undefined4 *)(*pauVar20 + (_UNK_150b511d4 & uVar52)),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511d8 & uVar53)),0x20);
    auVar59 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511dc & uVar54)),0x30);
    auVar57 = insertps(ZEXT416(*(uint *)(*pauVar20 +
                                        (___xmm_00000038000000280000001800000008 & uVar51))),
                       *(undefined4 *)(*pauVar20 + (_UNK_150b511e4 & uVar52)),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511e8 & uVar53)),0x20);
    auVar65 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511ec & uVar54)),0x30);
    uVar29 = _UNK_150b511f4 & uVar52;
    auVar57 = insertps(ZEXT416(*(uint *)(*pauVar20 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar51))),
                       *(undefined4 *)(*pauVar20 + uVar29),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511f8 & uVar53)),0x20);
    auVar43 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511fc & uVar54)),0x30);
  }
  fVar40 = auVar43._0_4_;
  fVar46 = auVar43._4_4_;
  fVar48 = auVar43._8_4_;
  fVar50 = auVar43._12_4_;
  auVar34._0_4_ = -(uint)(fVar40 != 0.0 && bVar5);
  auVar34._4_4_ = -(uint)(fVar46 != 0.0 && bVar6);
  auVar34._8_4_ = -(uint)(fVar48 != 0.0 && bVar7);
  auVar34._12_4_ = -(uint)(fVar50 != 0.0 && bVar8);
  iVar23 = movmskps(uVar29,auVar34);
  if (iVar23 != 0) {
    bVar22 = ~((char)((char)uVar27 << 4) >> 4);
    pauVar3 = (undefined1 (*) [16])(param_2 + (longlong)(int)(param_6 + uVar18) * 0xc);
    if ((bVar22 & 0xf) == 0) {
      auVar57 = *pauVar3;
      auVar42 = pauVar3[1];
      auVar66._0_4_ = auVar57._0_4_;
      auVar63 = insertps(auVar42,auVar57,0x8c);
      auVar66._4_4_ = auVar57._12_4_;
      auVar66._8_4_ = auVar42._8_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
      auVar69._4_4_ = auVar42._0_4_;
      auVar69._0_4_ = auVar57._4_4_;
      auVar69._8_4_ = auVar42._12_4_;
      auVar69._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
      auVar62._0_8_ = auVar63._0_8_;
      auVar62._8_4_ = *(undefined4 *)pauVar3[2];
      auVar62._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
    }
    else {
      auVar35._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar51;
      auVar35._4_4_ = _UNK_150b50da4 & uVar52;
      auVar35._8_4_ = _UNK_150b50da8 & uVar53;
      auVar35._12_4_ = _UNK_150b50dac & uVar54;
      lVar30 = extractps(auVar35,1);
      lVar28 = extractps(auVar35,2);
      lVar25 = extractps(auVar35,3);
      auVar57 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar30),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar3 + lVar28),0x20);
      auVar66 = insertps(auVar57,*(undefined4 *)(*pauVar3 + lVar25),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                          (___xmm_000000280000001c0000001000000004 & uVar51))),
                         *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar52)),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar53)),0x20);
      auVar69 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar54)),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                          (___xmm_0000002c000000200000001400000008 & uVar51))),
                         *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar52)),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar53)),0x20);
      auVar62 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar54)),0x30);
    }
    fVar39 = auVar58._0_4_ - auVar66._0_4_;
    fVar45 = auVar58._4_4_ - auVar66._4_4_;
    fVar47 = auVar58._8_4_ - auVar66._8_4_;
    fVar49 = auVar58._12_4_ - auVar66._12_4_;
    fVar68 = auVar59._0_4_ - auVar69._0_4_;
    fVar71 = auVar59._4_4_ - auVar69._4_4_;
    fVar72 = auVar59._8_4_ - auVar69._8_4_;
    fVar73 = auVar59._12_4_ - auVar69._12_4_;
    fVar80 = auVar65._0_4_ - auVar62._0_4_;
    fVar81 = auVar65._4_4_ - auVar62._4_4_;
    fVar82 = auVar65._8_4_ - auVar62._8_4_;
    fVar83 = auVar65._12_4_ - auVar62._12_4_;
    auVar36._0_4_ = fVar39 * fVar39;
    auVar36._4_4_ = fVar45 * fVar45;
    auVar36._8_4_ = fVar47 * fVar47;
    auVar36._12_4_ = fVar49 * fVar49;
    auVar77._0_4_ = fVar80 * fVar80 + fVar68 * fVar68 + auVar36._0_4_;
    auVar77._4_4_ = fVar81 * fVar81 + fVar71 * fVar71 + auVar36._4_4_;
    auVar77._8_4_ = fVar82 * fVar82 + fVar72 * fVar72 + auVar36._8_4_;
    auVar77._12_4_ = fVar83 * fVar83 + fVar73 * fVar73 + auVar36._12_4_;
    iVar23 = uVar18 << 2;
    if ((bVar22 & 9) == 0) {
      auVar36 = *(undefined1 (*) [16])(param_3 + iVar23);
    }
    else {
      puVar26 = (uint *)(param_3 + iVar23);
      if ((uVar27 & 1) != 0) {
        auVar36 = ZEXT416(*puVar26);
      }
      if ((uVar27 & 2) != 0) {
        auVar36 = insertps(auVar36,puVar26[1],0x10);
      }
      if ((uVar27 & 4) != 0) {
        auVar36 = insertps(auVar36,puVar26[2],0x20);
      }
      if ((uVar27 & 8) != 0) {
        auVar36 = insertps(auVar36,puVar26[3],0x30);
      }
    }
    auVar55._0_4_ = param_4 + param_5 * auVar36._0_4_;
    auVar55._4_4_ = param_4 + param_5 * auVar36._4_4_;
    auVar55._8_4_ = param_4 + param_5 * auVar36._8_4_;
    auVar55._12_4_ = param_4 + param_5 * auVar36._12_4_;
    auVar37._0_4_ =
         -(uint)(auVar55._0_4_ * auVar55._0_4_ + ___xmm_322bcc77322bcc77322bcc77322bcc77 <
                 auVar77._0_4_ && (fVar40 != 0.0 && bVar5));
    auVar37._4_4_ =
         -(uint)(auVar55._4_4_ * auVar55._4_4_ + _UNK_1506895d4 < auVar77._4_4_ &&
                (fVar46 != 0.0 && bVar6));
    auVar37._8_4_ =
         -(uint)(auVar55._8_4_ * auVar55._8_4_ + _UNK_1506895d8 < auVar77._8_4_ &&
                (fVar48 != 0.0 && bVar7));
    auVar37._12_4_ =
         -(uint)(auVar55._12_4_ * auVar55._12_4_ + _UNK_1506895dc < auVar77._12_4_ &&
                (fVar50 != 0.0 && bVar8));
    iVar23 = movmskps(iVar23,auVar37);
    if (iVar23 != 0) {
      auVar57 = sqrtps(auVar37,auVar77);
      auVar57 = divps(auVar55,auVar57);
      fVar84 = auVar57._0_4_;
      fVar85 = auVar57._4_4_;
      fVar86 = auVar57._8_4_;
      fVar87 = auVar57._12_4_;
      fVar39 = auVar66._0_4_ + fVar39 * fVar84;
      fVar45 = auVar66._4_4_ + fVar45 * fVar85;
      auVar67._0_8_ = CONCAT44(fVar45,fVar39);
      auVar67._8_4_ = auVar66._8_4_ + fVar47 * fVar86;
      auVar67._12_4_ = auVar66._12_4_ + fVar49 * fVar87;
      auVar70._0_4_ = auVar69._0_4_ + fVar68 * fVar84;
      auVar70._4_4_ = auVar69._4_4_ + fVar71 * fVar85;
      auVar70._8_4_ = auVar69._8_4_ + fVar72 * fVar86;
      auVar70._12_4_ = auVar69._12_4_ + fVar73 * fVar87;
      auVar64._0_4_ = auVar62._0_4_ + fVar80 * fVar84;
      auVar64._4_4_ = auVar62._4_4_ + fVar81 * fVar85;
      auVar64._8_4_ = auVar62._8_4_ + fVar82 * fVar86;
      auVar64._12_4_ = auVar62._12_4_ + fVar83 * fVar87;
      bVar22 = (char)((char)iVar23 << 4) >> 4;
      if ((~bVar22 & 0xf) == 0) {
        auVar38._8_4_ = fVar45;
        auVar38._0_8_ = auVar67._0_8_;
        auVar38._12_4_ = auVar70._4_4_;
        uVar41 = CONCAT44(auVar70._0_4_,fVar39);
        *(undefined8 *)*pauVar20 = uVar41;
        *(ulonglong *)(*pauVar20 + 8) = CONCAT44(fVar40,auVar64._0_4_);
        auVar10._8_4_ = auVar64._4_4_;
        auVar10._0_8_ = auVar38._8_8_;
        auVar10._12_4_ = fVar46;
        pauVar20[1] = auVar10;
        *(float *)pauVar20[2] = auVar67._8_4_;
        *(float *)(pauVar20[2] + 4) = auVar70._8_4_;
        *(float *)(pauVar20[2] + 8) = auVar64._8_4_;
        *(float *)(pauVar20[2] + 0xc) = fVar48;
        *(float *)pauVar20[3] = auVar67._12_4_;
        *(float *)(pauVar20[3] + 4) = auVar70._12_4_;
        *(float *)(pauVar20[3] + 8) = auVar64._12_4_;
        *(float *)(pauVar20[3] + 0xc) = fVar50;
      }
      else {
        if ((bVar22 & 1) != 0) {
          *(float *)*pauVar20 = fVar39;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar67,1);
          *(undefined8 *)pauVar20[1] = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar67,2);
          *(undefined8 *)pauVar20[2] = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar67,3);
          *(undefined8 *)pauVar20[3] = uVar41;
        }
        if ((bVar22 & 1) != 0) {
          *(float *)(*pauVar20 + 4) = auVar70._0_4_;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar70,1);
          *(undefined8 *)(pauVar20[1] + 4) = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar70,2);
          *(undefined8 *)(pauVar20[2] + 4) = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar70,3);
          *(undefined8 *)(pauVar20[3] + 4) = uVar41;
        }
        if ((bVar22 & 1) != 0) {
          *(float *)(*pauVar20 + 8) = auVar64._0_4_;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar64,1);
          *(undefined8 *)(pauVar20[1] + 8) = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar64,2);
          *(undefined8 *)(pauVar20[2] + 8) = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar64,3);
          *(undefined8 *)(pauVar20[3] + 8) = uVar41;
        }
        if ((bVar22 & 1) != 0) {
          *(float *)(*pauVar20 + 0xc) = fVar40;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar43,1);
          *(undefined8 *)(pauVar20[1] + 0xc) = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar43,2);
          *(undefined8 *)(pauVar20[2] + 0xc) = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar43,3);
          *(undefined8 *)(pauVar20[3] + 0xc) = uVar41;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraintsWithoutMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_sse4 @ 140349860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithoutMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_sse4
               (longlong param_1,longlong param_2,float param_3,int param_4,uint param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  float *pfVar13;
  byte bVar14;
  undefined4 unaff_EDI;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar61 [16];
  
  uVar18 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar18 = param_5;
  }
  if ((int)(uVar18 & 0xfffffffc) < 1) {
    uVar16 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    fVar30 = param_3 * param_3 + __real_322bcc77;
    pauVar20 = (undefined1 (*) [16])((longlong)param_4 * 0x10 + param_1);
    pfVar13 = (float *)(param_2 + 0x20 + (longlong)param_4 * 0xc);
    uVar16 = 0;
    do {
      auVar42 = *pauVar20;
      fVar27 = auVar42._12_4_;
      auVar47 = pauVar20[1];
      fVar28 = auVar47._12_4_;
      auVar53 = pauVar20[2];
      fVar29 = auVar53._12_4_;
      auVar41 = pauVar20[3];
      fVar40 = auVar41._12_4_;
      auVar2._4_4_ = -(uint)(fVar28 != _UNK_150aa8f64);
      auVar2._0_4_ = -(uint)(fVar27 != __xmm_00000000000000000000000000000000);
      auVar2._8_4_ = -(uint)(fVar29 != (float)DAT_150aa8f68);
      auVar2._12_4_ = -(uint)(fVar40 != DAT_150aa8f68._4_4_);
      iVar15 = movmskps(unaff_EDI,auVar2);
      unaff_EDI = 0;
      if (iVar15 != 0) {
        auVar2 = *(undefined1 (*) [16])(pfVar13 + -8);
        auVar70 = *(undefined1 (*) [16])(pfVar13 + -4);
        auVar69 = insertps(auVar70,auVar2,0x8c);
        fVar74 = auVar42._0_4_ - auVar2._0_4_;
        fVar75 = auVar47._0_4_ - auVar2._12_4_;
        fVar76 = auVar53._0_4_ - auVar70._8_4_;
        fVar77 = auVar41._0_4_ - pfVar13[1];
        fVar39 = auVar42._4_4_ - auVar2._4_4_;
        fVar44 = auVar47._4_4_ - auVar70._0_4_;
        fVar45 = auVar53._4_4_ - auVar70._12_4_;
        fVar46 = auVar41._4_4_ - pfVar13[2];
        fVar57 = auVar42._8_4_ - auVar69._0_4_;
        fVar62 = auVar47._8_4_ - auVar69._4_4_;
        fVar64 = auVar53._8_4_ - *pfVar13;
        fVar65 = auVar41._8_4_ - pfVar13[3];
        auVar73._0_4_ = fVar57 * fVar57 + fVar39 * fVar39 + fVar74 * fVar74;
        auVar73._4_4_ = fVar62 * fVar62 + fVar44 * fVar44 + fVar75 * fVar75;
        auVar73._8_4_ = fVar64 * fVar64 + fVar45 * fVar45 + fVar76 * fVar76;
        auVar73._12_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar77 * fVar77;
        auVar66._0_4_ =
             -(uint)(fVar30 < auVar73._0_4_ && fVar27 != __xmm_00000000000000000000000000000000);
        auVar66._4_4_ = -(uint)(fVar30 < auVar73._4_4_ && fVar28 != _UNK_150aa8f64);
        auVar66._8_4_ = -(uint)(fVar30 < auVar73._8_4_ && fVar29 != (float)DAT_150aa8f68);
        auVar66._12_4_ = -(uint)(fVar30 < auVar73._12_4_ && fVar40 != DAT_150aa8f68._4_4_);
        iVar15 = movmskps(iVar15,auVar66);
        unaff_EDI = 0;
        if (iVar15 != 0) {
          auVar66 = sqrtps(auVar66,auVar73);
          auVar11._4_4_ = param_3;
          auVar11._0_4_ = param_3;
          auVar11._8_4_ = param_3;
          auVar11._12_4_ = param_3;
          auVar66 = divps(auVar11,auVar66);
          fVar36 = auVar66._0_4_;
          fVar37 = auVar66._4_4_;
          fVar38 = auVar66._8_4_;
          fVar58 = auVar66._12_4_;
          fVar74 = auVar2._0_4_ + fVar74 * fVar36;
          fVar75 = auVar2._12_4_ + fVar75 * fVar37;
          fVar76 = auVar70._8_4_ + fVar76 * fVar38;
          fVar77 = pfVar13[1] + fVar77 * fVar58;
          auVar33._0_4_ = auVar2._4_4_ + fVar39 * fVar36;
          auVar33._4_4_ = auVar70._0_4_ + fVar44 * fVar37;
          auVar33._8_4_ = auVar70._12_4_ + fVar45 * fVar38;
          auVar33._12_4_ = pfVar13[2] + fVar46 * fVar58;
          fVar39 = auVar69._0_4_ + fVar57 * fVar36;
          fVar44 = auVar69._4_4_ + fVar62 * fVar37;
          auVar70._0_8_ = CONCAT44(fVar44,fVar39);
          auVar70._8_4_ = *pfVar13 + fVar64 * fVar38;
          auVar70._12_4_ = pfVar13[3] + fVar65 * fVar58;
          bVar14 = (char)((char)iVar15 << 4) >> 4;
          unaff_EDI = CONCAT31((int3)((uint)iVar15 >> 8),bVar14);
          if ((~bVar14 & 0xf) == 0) {
            auVar42._4_4_ = fVar75;
            auVar42._0_4_ = fVar74;
            auVar42._8_4_ = fVar75;
            auVar42._12_4_ = auVar33._4_4_;
            auVar53._8_4_ = fVar44;
            auVar53._0_8_ = auVar70._0_8_;
            auVar53._12_4_ = fVar28;
            auVar41._8_8_ = auVar53._8_8_;
            auVar47._12_4_ = fVar27;
            auVar47._8_4_ = fVar39;
            auVar69._0_8_ = CONCAT44(fVar29,auVar70._8_4_);
            auVar69._8_4_ = auVar70._12_4_;
            auVar69._12_4_ = fVar40;
            auVar47._4_4_ = auVar33._0_4_;
            auVar47._0_4_ = fVar74;
            *pauVar20 = auVar47;
            auVar41._0_8_ = auVar42._8_8_;
            pauVar20[1] = auVar41;
            uVar23 = CONCAT44(auVar33._8_4_,fVar76);
            *(undefined8 *)pauVar20[2] = uVar23;
            *(undefined8 *)(pauVar20[2] + 8) = auVar69._0_8_;
            auVar71._8_8_ = auVar69._8_8_;
            auVar71._4_4_ = auVar33._12_4_;
            auVar71._0_4_ = fVar77;
            pauVar20[3] = auVar71;
          }
          else {
            if ((bVar14 & 1) != 0) {
              *(float *)*pauVar20 = fVar74;
            }
            if ((bVar14 & 2) != 0) {
              auVar9._4_4_ = fVar75;
              auVar9._0_4_ = fVar74;
              auVar9._8_4_ = fVar76;
              auVar9._12_4_ = fVar77;
              uVar23 = extractps(auVar9,1);
              *(undefined8 *)pauVar20[1] = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              auVar8._4_4_ = fVar75;
              auVar8._0_4_ = fVar74;
              auVar8._8_4_ = fVar76;
              auVar8._12_4_ = fVar77;
              uVar23 = extractps(auVar8,2);
              *(undefined8 *)pauVar20[2] = uVar23;
            }
            if ((char)bVar14 < '\0') {
              auVar7._4_4_ = fVar75;
              auVar7._0_4_ = fVar74;
              auVar7._8_4_ = fVar76;
              auVar7._12_4_ = fVar77;
              uVar23 = extractps(auVar7,3);
              *(undefined8 *)pauVar20[3] = uVar23;
            }
            if ((bVar14 & 1) != 0) {
              *(float *)(*pauVar20 + 4) = auVar33._0_4_;
            }
            if ((bVar14 & 2) != 0) {
              uVar23 = extractps(auVar33,1);
              *(undefined8 *)(pauVar20[1] + 4) = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              uVar23 = extractps(auVar33,2);
              *(undefined8 *)(pauVar20[2] + 4) = uVar23;
            }
            if ((char)bVar14 < '\0') {
              uVar23 = extractps(auVar33,3);
              *(undefined8 *)(pauVar20[3] + 4) = uVar23;
            }
            if ((bVar14 & 1) != 0) {
              *(float *)(*pauVar20 + 8) = fVar39;
            }
            if ((bVar14 & 2) != 0) {
              uVar23 = extractps(auVar70,1);
              *(undefined8 *)(pauVar20[1] + 8) = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              uVar23 = extractps(auVar70,2);
              *(undefined8 *)(pauVar20[2] + 8) = uVar23;
            }
            if ((char)bVar14 < '\0') {
              uVar23 = extractps(auVar70,3);
              *(undefined8 *)(pauVar20[3] + 8) = uVar23;
            }
            if ((bVar14 & 1) != 0) {
              uVar23 = extractps(auVar42,3);
              *(undefined8 *)(*pauVar20 + 0xc) = uVar23;
            }
            if ((bVar14 & 2) != 0) {
              uVar23 = extractps(auVar47,3);
              *(undefined8 *)(pauVar20[1] + 0xc) = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              uVar23 = extractps(auVar53,3);
              *(undefined8 *)(pauVar20[2] + 0xc) = uVar23;
            }
            if ((char)bVar14 < '\0') {
              uVar23 = extractps(auVar41,3);
              *(undefined8 *)(pauVar20[3] + 0xc) = uVar23;
            }
          }
        }
      }
      uVar16 = uVar16 + 4;
      pauVar20 = pauVar20 + 4;
      pfVar13 = pfVar13 + 0xc;
    } while (uVar16 < (uVar18 & 0xfffffffc));
    if ((int)param_5 <= (int)uVar16) {
      return;
    }
  }
  uVar18 = (uint)uVar16;
  bVar3 = (int)(uVar18 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5;
  auVar31._0_4_ = -(uint)bVar3;
  bVar4 = (int)(uVar18 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5;
  auVar31._4_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar18 | _UNK_150631e08) < (int)param_5;
  auVar31._8_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar18 | _UNK_150631e0c) < (int)param_5;
  auVar31._12_4_ = -(uint)bVar6;
  uVar18 = param_4 + uVar18;
  lVar12 = (longlong)(int)uVar18;
  lVar17 = lVar12 * 0x10;
  pauVar20 = (undefined1 (*) [16])(param_1 + lVar17);
  iVar15 = movmskps((int)lVar17,auVar31);
  if (iVar15 == 0xf) {
    auVar42 = *pauVar20;
    auVar47 = pauVar20[2];
    auVar56._0_8_ = auVar42._0_8_;
    auVar56._8_4_ = auVar42._4_4_;
    auVar56._12_4_ = *(undefined4 *)(pauVar20[1] + 4);
    auVar43._4_4_ = *(undefined4 *)pauVar20[1];
    auVar43._0_4_ = auVar42._0_4_;
    auVar59._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[1] + 8),auVar42._8_4_);
    auVar59._8_4_ = auVar42._12_4_;
    auVar59._12_4_ = *(undefined4 *)(pauVar20[1] + 0xc);
    auVar49._8_4_ = auVar47._4_4_;
    auVar49._0_8_ = auVar47._0_8_;
    auVar49._12_4_ = *(undefined4 *)(pauVar20[3] + 4);
    auVar48._8_8_ = auVar49._8_8_;
    auVar43._12_4_ = *(undefined4 *)pauVar20[3];
    auVar43._8_4_ = auVar47._0_4_;
    auVar26._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[3] + 8),auVar47._8_4_);
    auVar26._8_4_ = auVar47._12_4_;
    auVar26._12_4_ = *(undefined4 *)(pauVar20[3] + 0xc);
    auVar48._0_8_ = auVar56._8_8_;
    auVar55._8_8_ = auVar26._0_8_;
    auVar55._0_8_ = auVar59._0_8_;
    auVar25._8_8_ = auVar26._8_8_;
    auVar25._0_8_ = auVar59._8_8_;
  }
  else {
    auVar24._0_4_ = ___xmm_00000030000000200000001000000000 & auVar31._0_4_;
    auVar24._4_4_ = _UNK_150b511c4 & auVar31._4_4_;
    auVar24._8_4_ = _UNK_150b511c8 & auVar31._8_4_;
    auVar24._12_4_ = _UNK_150b511cc & auVar31._12_4_;
    lVar17 = extractps(auVar24,1);
    lVar21 = extractps(auVar24,2);
    lVar22 = extractps(auVar24,3);
    auVar42 = insertps(ZEXT416(*(uint *)*pauVar20),*(undefined4 *)(*pauVar20 + lVar17),0x10);
    auVar42 = insertps(auVar42,*(undefined4 *)(*pauVar20 + lVar21),0x20);
    auVar43 = insertps(auVar42,*(undefined4 *)(*pauVar20 + lVar22),0x30);
    auVar42 = ___xmm_00000034000000240000001400000004 & auVar31;
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar20 + auVar42._0_4_)),
                       *(undefined4 *)(*pauVar20 + auVar42._4_4_),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._8_4_),0x20);
    auVar48 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._12_4_),0x30);
    auVar42 = ___xmm_00000038000000280000001800000008 & auVar31;
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar20 + auVar42._0_4_)),
                       *(undefined4 *)(*pauVar20 + auVar42._4_4_),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._8_4_),0x20);
    auVar55 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._12_4_),0x30);
    auVar42 = ___xmm_0000003c0000002c0000001c0000000c & auVar31;
    uVar18 = auVar42._4_4_;
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar20 + auVar42._0_4_)),
                       *(undefined4 *)(*pauVar20 + uVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._8_4_),0x20);
    auVar25 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._12_4_),0x30);
  }
  fVar30 = auVar25._0_4_;
  fVar27 = auVar25._4_4_;
  fVar28 = auVar25._8_4_;
  fVar29 = auVar25._12_4_;
  auVar50._0_4_ = -(uint)(fVar30 != 0.0 && bVar3);
  auVar50._4_4_ = -(uint)(fVar27 != 0.0 && bVar4);
  auVar50._8_4_ = -(uint)(fVar28 != 0.0 && bVar5);
  auVar50._12_4_ = -(uint)(fVar29 != 0.0 && bVar6);
  iVar19 = movmskps(uVar18,auVar50);
  if (iVar19 != 0) {
    pauVar1 = (undefined1 (*) [16])(param_2 + lVar12 * 0xc);
    if ((~((char)((char)iVar15 << 4) >> 4) & 0xfU) == 0) {
      auVar42 = *pauVar1;
      auVar47 = pauVar1[1];
      auVar60._0_4_ = auVar42._0_4_;
      auVar53 = insertps(auVar47,auVar42,0x8c);
      auVar60._4_4_ = auVar42._12_4_;
      auVar60._8_4_ = auVar47._8_4_;
      auVar60._12_4_ = *(undefined4 *)(pauVar1[2] + 4);
      auVar67._4_4_ = auVar47._0_4_;
      auVar67._0_4_ = auVar42._4_4_;
      auVar67._8_4_ = auVar47._12_4_;
      auVar67._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
      auVar52._0_8_ = auVar53._0_8_;
      auVar52._8_4_ = *(undefined4 *)pauVar1[2];
      auVar52._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    }
    else {
      auVar51._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar31._0_4_;
      auVar51._4_4_ = _UNK_150b50da4 & auVar31._4_4_;
      auVar51._8_4_ = _UNK_150b50da8 & auVar31._8_4_;
      auVar51._12_4_ = _UNK_150b50dac & auVar31._12_4_;
      lVar12 = extractps(auVar51,1);
      lVar17 = extractps(auVar51,2);
      lVar21 = extractps(auVar51,3);
      auVar42 = insertps(ZEXT416(*(uint *)*pauVar1),*(undefined4 *)(*pauVar1 + lVar12),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(*pauVar1 + lVar17),0x20);
      auVar60 = insertps(auVar42,*(undefined4 *)(*pauVar1 + lVar21),0x30);
      auVar42 = ___xmm_000000280000001c0000001000000004 & auVar31;
      auVar47 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar42._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar42._4_4_),0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._8_4_),0x20);
      auVar67 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._12_4_),0x30);
      auVar42 = ___xmm_0000002c000000200000001400000008 & auVar31;
      auVar47 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar42._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar42._4_4_),0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._8_4_),0x20);
      auVar52 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._12_4_),0x30);
    }
    fVar40 = auVar43._0_4_ - auVar60._0_4_;
    fVar39 = auVar43._4_4_ - auVar60._4_4_;
    fVar44 = auVar43._8_4_ - auVar60._8_4_;
    fVar45 = auVar43._12_4_ - auVar60._12_4_;
    fVar46 = auVar48._0_4_ - auVar67._0_4_;
    fVar57 = auVar48._4_4_ - auVar67._4_4_;
    fVar62 = auVar48._8_4_ - auVar67._8_4_;
    fVar64 = auVar48._12_4_ - auVar67._12_4_;
    fVar65 = auVar55._0_4_ - auVar52._0_4_;
    fVar74 = auVar55._4_4_ - auVar52._4_4_;
    fVar75 = auVar55._8_4_ - auVar52._8_4_;
    fVar76 = auVar55._12_4_ - auVar52._12_4_;
    auVar72._0_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar40 * fVar40;
    auVar72._4_4_ = fVar74 * fVar74 + fVar57 * fVar57 + fVar39 * fVar39;
    auVar72._8_4_ = fVar75 * fVar75 + fVar62 * fVar62 + fVar44 * fVar44;
    auVar72._12_4_ = fVar76 * fVar76 + fVar64 * fVar64 + fVar45 * fVar45;
    fVar77 = param_3 * param_3 + __real_322bcc77;
    auVar10._4_4_ = -(uint)(fVar77 < auVar72._4_4_ && (fVar27 != 0.0 && bVar4));
    auVar10._0_4_ = -(uint)(fVar77 < auVar72._0_4_ && (fVar30 != 0.0 && bVar3));
    auVar10._8_4_ = -(uint)(fVar77 < auVar72._8_4_ && (fVar28 != 0.0 && bVar5));
    auVar10._12_4_ = -(uint)(fVar77 < auVar72._12_4_ && (fVar29 != 0.0 && bVar6));
    iVar15 = movmskps((int)pauVar1,auVar10);
    if (iVar15 != 0) {
      auVar42 = sqrtps(auVar31,auVar72);
      auVar34._4_4_ = param_3;
      auVar34._0_4_ = param_3;
      auVar34._8_4_ = param_3;
      auVar34._12_4_ = param_3;
      auVar42 = divps(auVar34,auVar42);
      fVar77 = auVar42._0_4_;
      fVar36 = auVar42._4_4_;
      fVar37 = auVar42._8_4_;
      fVar38 = auVar42._12_4_;
      fVar58 = auVar60._0_4_ + fVar40 * fVar77;
      fVar63 = auVar60._4_4_ + fVar39 * fVar36;
      auVar61._0_8_ = CONCAT44(fVar63,fVar58);
      auVar61._8_4_ = auVar60._8_4_ + fVar44 * fVar37;
      auVar61._12_4_ = auVar60._12_4_ + fVar45 * fVar38;
      auVar68._0_4_ = auVar67._0_4_ + fVar46 * fVar77;
      auVar68._4_4_ = auVar67._4_4_ + fVar57 * fVar36;
      auVar68._8_4_ = auVar67._8_4_ + fVar62 * fVar37;
      auVar68._12_4_ = auVar67._12_4_ + fVar64 * fVar38;
      fVar40 = auVar52._0_4_ + fVar65 * fVar77;
      fVar39 = auVar52._4_4_ + fVar74 * fVar36;
      auVar54._0_8_ = CONCAT44(fVar39,fVar40);
      auVar54._8_4_ = auVar52._8_4_ + fVar75 * fVar37;
      auVar54._12_4_ = auVar52._12_4_ + fVar76 * fVar38;
      bVar14 = (char)((char)iVar15 << 4) >> 4;
      if ((~bVar14 & 0xf) == 0) {
        auVar32._8_4_ = fVar63;
        auVar32._0_8_ = auVar61._0_8_;
        auVar32._12_4_ = auVar68._4_4_;
        uVar23 = CONCAT44(auVar68._0_4_,fVar58);
        auVar35._8_4_ = fVar39;
        auVar35._0_8_ = auVar54._0_8_;
        auVar35._12_4_ = fVar27;
        *(undefined8 *)*pauVar20 = uVar23;
        *(ulonglong *)(*pauVar20 + 8) = CONCAT44(fVar30,fVar40);
        *(longlong *)pauVar20[1] = auVar32._8_8_;
        *(longlong *)(pauVar20[1] + 8) = auVar35._8_8_;
        *(float *)pauVar20[2] = auVar61._8_4_;
        *(float *)(pauVar20[2] + 4) = auVar68._8_4_;
        *(float *)(pauVar20[2] + 8) = auVar54._8_4_;
        *(float *)(pauVar20[2] + 0xc) = fVar28;
        *(float *)pauVar20[3] = auVar61._12_4_;
        *(float *)(pauVar20[3] + 4) = auVar68._12_4_;
        *(float *)(pauVar20[3] + 8) = auVar54._12_4_;
        *(float *)(pauVar20[3] + 0xc) = fVar29;
      }
      else {
        if ((bVar14 & 1) != 0) {
          *(float *)*pauVar20 = fVar58;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar61,1);
          *(undefined8 *)pauVar20[1] = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar61,2);
          *(undefined8 *)pauVar20[2] = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar61,3);
          *(undefined8 *)pauVar20[3] = uVar23;
        }
        if ((bVar14 & 1) != 0) {
          *(float *)(*pauVar20 + 4) = auVar68._0_4_;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar68,1);
          *(undefined8 *)(pauVar20[1] + 4) = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar68,2);
          *(undefined8 *)(pauVar20[2] + 4) = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar68,3);
          *(undefined8 *)(pauVar20[3] + 4) = uVar23;
        }
        if ((bVar14 & 1) != 0) {
          *(float *)(*pauVar20 + 8) = fVar40;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar54,1);
          *(undefined8 *)(pauVar20[1] + 8) = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar54,2);
          *(undefined8 *)(pauVar20[2] + 8) = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar54,3);
          *(undefined8 *)(pauVar20[3] + 8) = uVar23;
        }
        if ((bVar14 & 1) != 0) {
          *(float *)(*pauVar20 + 0xc) = fVar30;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar25,1);
          *(undefined8 *)(pauVar20[1] + 0xc) = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar25,2);
          *(undefined8 *)(pauVar20[2] + 0xc) = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar25,3);
          *(undefined8 *)(pauVar20[3] + 0xc) = uVar23;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCuniCuni_sse4 @ 14034a180

void ApplySphericalConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCuniCuni_sse4
               (void)

{
  ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_sse4
            ();
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4 @ 14034a1c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined3 uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  int unaff_EBP;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar94;
  float fVar96;
  float fVar98;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  float fVar97;
  float fVar99;
  undefined1 auVar93 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  uint uVar104;
  float fVar108;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar109;
  undefined1 auVar107 [16];
  float fVar110;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar118 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  
  uVar20 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar20 = param_11;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar25 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar21 = (longlong)param_10;
    uVar18 = lVar21 * 3;
    lVar22 = lVar21 * 0x10 + param_1;
    lVar21 = lVar21 * 0xc + 0x20;
    uVar29 = 0;
    uVar25 = 0;
    do {
      pauVar28 = (undefined1 (*) [16])(lVar22 + uVar29 * 4);
      fVar90 = *(float *)(*pauVar28 + 0xc);
      auVar69 = *pauVar28;
      pauVar5 = (undefined1 (*) [16])(lVar22 + 0x10 + uVar29 * 4);
      fVar95 = *(float *)(*pauVar5 + 0xc);
      auVar13 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar22 + 0x20 + uVar29 * 4);
      fVar97 = *(float *)(*pauVar6 + 0xc);
      auVar66 = *pauVar6;
      pauVar7 = (undefined1 (*) [16])(lVar22 + 0x30 + uVar29 * 4);
      fVar99 = *(float *)(*pauVar7 + 0xc);
      auVar74 = *pauVar7;
      auVar53._4_4_ = -(uint)(fVar95 != 0.0);
      auVar53._0_4_ = -(uint)(fVar90 != 0.0);
      auVar53._8_4_ = -(uint)(fVar97 != 0.0);
      auVar53._12_4_ = -(uint)(fVar99 != 0.0);
      uVar16 = movmskps((int)uVar18,auVar53);
      uVar18 = (ulonglong)uVar16;
      if (uVar16 != 0) {
        auVar53 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar21);
        auVar34 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar21);
        pfVar1 = (float *)(param_2 + lVar21);
        auVar63 = insertps(auVar34,auVar53,0x8c);
        auVar52 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar21);
        auVar64 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar21);
        pfVar2 = (float *)(param_3 + lVar21);
        auVar78 = insertps(auVar64,auVar52,0x8c);
        uVar18 = uVar29 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar18);
        fVar89 = *pfVar3 * param_7 + param_6;
        fVar94 = pfVar3[1] * param_7 + param_6;
        fVar96 = pfVar3[2] * param_7 + param_6;
        fVar98 = pfVar3[3] * param_7 + param_6;
        pfVar3 = (float *)(param_5 + uVar18);
        fVar45 = *pfVar3 * param_9 + param_8;
        fVar49 = pfVar3[1] * param_9 + param_8;
        auVar105._4_4_ = fVar49;
        auVar105._0_4_ = fVar45;
        fVar50 = pfVar3[2] * param_9 + param_8;
        fVar51 = pfVar3[3] * param_9 + param_8;
        fVar70 = auVar53._0_4_ - auVar52._0_4_ * fVar89;
        fVar75 = auVar53._12_4_ - auVar52._12_4_ * fVar94;
        fVar76 = auVar34._8_4_ - auVar64._8_4_ * fVar96;
        fVar77 = pfVar1[1] - pfVar2[1] * fVar98;
        fVar33 = auVar53._4_4_ - auVar52._4_4_ * fVar89;
        fVar42 = auVar34._0_4_ - auVar64._0_4_ * fVar94;
        fVar43 = auVar34._12_4_ - auVar64._12_4_ * fVar96;
        fVar44 = pfVar1[2] - pfVar2[2] * fVar98;
        fVar100 = auVar63._0_4_ - auVar78._0_4_ * fVar89;
        fVar101 = auVar63._4_4_ - auVar78._4_4_ * fVar94;
        fVar102 = *pfVar1 - *pfVar2 * fVar96;
        fVar103 = pfVar1[3] - pfVar2[3] * fVar98;
        fVar110 = *(float *)*pauVar28 - fVar70;
        fVar115 = *(float *)*pauVar5 - fVar75;
        fVar116 = *(float *)*pauVar6 - fVar76;
        fVar117 = *(float *)*pauVar7 - fVar77;
        fVar81 = *(float *)(*pauVar28 + 4) - fVar33;
        fVar84 = *(float *)(*pauVar5 + 4) - fVar42;
        fVar85 = *(float *)(*pauVar6 + 4) - fVar43;
        fVar87 = *(float *)(*pauVar7 + 4) - fVar44;
        fVar54 = *(float *)(*pauVar28 + 8) - fVar100;
        fVar59 = *(float *)(*pauVar5 + 8) - fVar101;
        fVar60 = *(float *)(*pauVar6 + 8) - fVar102;
        fVar61 = *(float *)(*pauVar7 + 8) - fVar103;
        auVar83._0_4_ = fVar54 * fVar54 + fVar81 * fVar81 + fVar110 * fVar110;
        auVar83._4_4_ = fVar59 * fVar59 + fVar84 * fVar84 + fVar115 * fVar115;
        auVar83._8_4_ = fVar60 * fVar60 + fVar85 * fVar85 + fVar116 * fVar116;
        auVar83._12_4_ = fVar61 * fVar61 + fVar87 * fVar87 + fVar117 * fVar117;
        unaff_XMM15 = sqrtps(unaff_XMM15,auVar83);
        auVar105._8_4_ = fVar50;
        auVar105._12_4_ = fVar51;
        auVar106 = divps(auVar105,unaff_XMM15);
        fVar86 = auVar106._0_4_;
        fVar88 = auVar106._4_4_;
        fVar108 = auVar106._8_4_;
        fVar109 = auVar106._12_4_;
        fVar89 = fVar89 - fVar45;
        fVar94 = fVar94 - fVar49;
        fVar96 = fVar96 - fVar50;
        fVar98 = fVar98 - fVar51;
        auVar112._0_4_ = auVar53._0_4_ - auVar52._0_4_ * fVar89;
        auVar112._4_4_ = auVar53._12_4_ - auVar52._12_4_ * fVar94;
        auVar112._8_4_ = auVar34._8_4_ - auVar64._8_4_ * fVar96;
        auVar112._12_4_ = pfVar1[1] - pfVar2[1] * fVar98;
        uVar16 = -(uint)(auVar83._0_4_ < fVar45 * fVar45);
        uVar30 = -(uint)(auVar83._4_4_ < fVar49 * fVar49);
        uVar31 = -(uint)(auVar83._8_4_ < fVar50 * fVar50);
        uVar32 = -(uint)(auVar83._12_4_ < fVar51 * fVar51);
        auVar111._0_4_ = (uint)(fVar110 * fVar86 + fVar70) & uVar16;
        auVar111._4_4_ = (uint)(fVar115 * fVar88 + fVar75) & uVar30;
        auVar111._8_4_ = (uint)(fVar116 * fVar108 + fVar76) & uVar31;
        auVar111._12_4_ = (uint)(fVar117 * fVar109 + fVar77) & uVar32;
        auVar106._4_4_ = -(uint)(auVar83._4_4_ < _UNK_1506895d4);
        auVar106._0_4_ = -(uint)(auVar83._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar106._8_4_ = -(uint)(auVar83._8_4_ < _UNK_1506895d8);
        auVar106._12_4_ = -(uint)(auVar83._12_4_ < _UNK_1506895dc);
        auVar112 = blendvps(auVar111,auVar112,auVar106);
        auVar65._0_4_ = auVar53._4_4_ - auVar52._4_4_ * fVar89;
        auVar65._4_4_ = auVar34._0_4_ - auVar64._0_4_ * fVar94;
        auVar65._8_4_ = auVar34._12_4_ - auVar64._12_4_ * fVar96;
        auVar65._12_4_ = pfVar1[2] - pfVar2[2] * fVar98;
        auVar82._0_4_ = (uint)(fVar81 * fVar86 + fVar33) & uVar16;
        auVar82._4_4_ = (uint)(fVar84 * fVar88 + fVar42) & uVar30;
        auVar82._8_4_ = (uint)(fVar85 * fVar108 + fVar43) & uVar31;
        auVar82._12_4_ = (uint)(fVar87 * fVar109 + fVar44) & uVar32;
        auVar83 = blendvps(auVar82,auVar65,auVar106);
        auVar64._0_4_ = auVar63._0_4_ - fVar89 * auVar78._0_4_;
        auVar64._4_4_ = auVar63._4_4_ - fVar94 * auVar78._4_4_;
        auVar64._8_4_ = *pfVar1 - fVar96 * *pfVar2;
        auVar64._12_4_ = pfVar1[3] - fVar98 * pfVar2[3];
        auVar52._0_4_ = uVar16 & (uint)(fVar86 * fVar54 + fVar100);
        auVar52._4_4_ = uVar30 & (uint)(fVar88 * fVar59 + fVar101);
        auVar52._8_4_ = uVar31 & (uint)(fVar108 * fVar60 + fVar102);
        auVar52._12_4_ = uVar32 & (uint)(fVar109 * fVar61 + fVar103);
        auVar53 = blendvps(auVar52,auVar64,auVar106);
        fVar33 = auVar112._0_4_;
        auVar34._0_4_ = -(uint)(fVar33 != 0.0 && fVar90 != 0.0);
        auVar34._4_4_ = -(uint)(auVar112._4_4_ != 0.0 && fVar95 != 0.0);
        auVar34._8_4_ = -(uint)(auVar112._8_4_ != 0.0 && fVar97 != 0.0);
        auVar34._12_4_ = -(uint)(auVar112._12_4_ != 0.0 && fVar99 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar34);
        if (unaff_EBP != 0) {
          uVar15 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar15,bVar19);
          uVar18 = (ulonglong)CONCAT31(uVar15,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar66._0_8_ = auVar112._0_8_;
            auVar66._8_4_ = auVar112._4_4_;
            auVar66._12_4_ = auVar83._4_4_;
            auVar69._0_8_ = auVar53._0_8_;
            auVar69._8_4_ = auVar53._4_4_;
            auVar69._12_4_ = fVar95;
            auVar74._0_8_ = CONCAT44(auVar83._8_4_,auVar112._8_4_);
            auVar74._8_4_ = auVar112._12_4_;
            auVar74._12_4_ = auVar83._12_4_;
            puVar4 = (undefined8 *)(lVar22 + uVar29 * 4);
            *puVar4 = CONCAT44(auVar83._0_4_,fVar33);
            puVar4[1] = CONCAT44(fVar90,auVar53._0_4_);
            puVar4 = (undefined8 *)(lVar22 + 0x10 + uVar29 * 4);
            *puVar4 = auVar66._8_8_;
            puVar4[1] = auVar69._8_8_;
            puVar4 = (undefined8 *)(lVar22 + 0x20 + uVar29 * 4);
            *puVar4 = auVar74._0_8_;
            *(int *)(puVar4 + 1) = auVar53._8_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar97;
            puVar4 = (undefined8 *)(lVar22 + 0x30 + uVar29 * 4);
            *puVar4 = auVar74._8_8_;
            *(int *)(puVar4 + 1) = auVar53._12_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar99;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar22 + uVar29 * 4) = fVar33;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar112,1);
              *(undefined8 *)(lVar22 + 0x10 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar112,2);
              *(undefined8 *)(lVar22 + 0x20 + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar112,3);
              *(undefined8 *)(lVar22 + 0x30 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar22 + 4 + uVar29 * 4) = auVar83._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar83,1);
              *(undefined8 *)(lVar22 + 0x14 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar83,2);
              *(undefined8 *)(lVar22 + 0x24 + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar83,3);
              *(undefined8 *)(lVar22 + 0x34 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar22 + 8 + uVar29 * 4) = auVar53._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar53,1);
              *(undefined8 *)(lVar22 + 0x18 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar53,2);
              *(undefined8 *)(lVar22 + 0x28 + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar53,3);
              *(undefined8 *)(lVar22 + 0x38 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar69,3);
              *(undefined8 *)(lVar22 + 0xc + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar13,3);
              *(undefined8 *)(lVar22 + 0x1c + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar66,3);
              *(undefined8 *)(lVar22 + 0x2c + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar74,3);
              *(undefined8 *)(lVar22 + 0x3c + uVar29 * 4) = uVar8;
            }
          }
        }
      }
      uVar25 = uVar25 + 4;
      uVar29 = uVar29 + 0x10;
      lVar21 = lVar21 + 0x30;
    } while (uVar25 < (uVar20 & 0xfffffffc));
    if ((int)param_11 <= (int)uVar25) {
      return;
    }
  }
  uVar16 = (uint)uVar25;
  bVar9 = (int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
  uVar30 = -(uint)bVar9;
  bVar10 = (int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
  uVar31 = -(uint)bVar10;
  bVar11 = (int)(uVar16 | _UNK_150631e08) < (int)param_11;
  uVar32 = -(uint)bVar11;
  bVar12 = (int)(uVar16 | _UNK_150631e0c) < (int)param_11;
  uVar104 = -(uint)bVar12;
  lVar21 = (longlong)(int)(param_10 + uVar16);
  uVar25 = lVar21 * 0x10;
  pauVar28 = (undefined1 (*) [16])(param_1 + uVar25);
  auVar13._4_4_ = uVar31;
  auVar13._0_4_ = uVar30;
  auVar13._8_4_ = uVar32;
  auVar13._12_4_ = uVar104;
  uVar20 = movmskps(unaff_EBP,auVar13);
  if (uVar20 == 0xf) {
    auVar66 = *pauVar28;
    auVar69 = pauVar28[2];
    auVar55._8_4_ = auVar66._4_4_;
    auVar55._0_8_ = auVar66._0_8_;
    auVar55._12_4_ = *(undefined4 *)(pauVar28[1] + 4);
    auVar63._0_8_ = CONCAT44(*(undefined4 *)(pauVar28[1] + 8),auVar66._8_4_);
    auVar63._8_4_ = auVar66._12_4_;
    auVar63._12_4_ = *(undefined4 *)(pauVar28[1] + 0xc);
    auVar72._0_8_ = auVar69._0_8_;
    auVar72._8_4_ = auVar69._4_4_;
    auVar72._12_4_ = *(undefined4 *)(pauVar28[3] + 4);
    auVar71._8_8_ = auVar72._8_8_;
    auVar67._12_4_ = *(undefined4 *)pauVar28[3];
    auVar67._8_4_ = auVar69._0_4_;
    auVar92._0_8_ = CONCAT44(*(undefined4 *)(pauVar28[3] + 8),auVar69._8_4_);
    auVar92._8_4_ = auVar69._12_4_;
    auVar92._12_4_ = *(undefined4 *)(pauVar28[3] + 0xc);
    auVar67._4_4_ = *(undefined4 *)pauVar28[1];
    auVar67._0_4_ = auVar66._0_4_;
    auVar71._0_8_ = auVar55._8_8_;
    auVar78._8_8_ = auVar92._0_8_;
    auVar78._0_8_ = auVar63._0_8_;
    auVar91._8_8_ = auVar92._8_8_;
    auVar91._0_8_ = auVar63._8_8_;
  }
  else {
    auVar35._0_4_ = ___xmm_00000030000000200000001000000000 & uVar30;
    auVar35._4_4_ = _UNK_150b511c4 & uVar31;
    auVar35._8_4_ = _UNK_150b511c8 & uVar32;
    auVar35._12_4_ = _UNK_150b511cc & uVar104;
    lVar22 = extractps(auVar35,1);
    lVar26 = extractps(auVar35,2);
    lVar23 = extractps(auVar35,3);
    auVar66 = insertps(ZEXT416(*(uint *)*pauVar28),*(undefined4 *)(*pauVar28 + lVar22),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + lVar26),0x20);
    auVar67 = insertps(auVar66,*(undefined4 *)(*pauVar28 + lVar23),0x30);
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar28 +
                                        (___xmm_00000034000000240000001400000004 & uVar30))),
                       *(undefined4 *)(*pauVar28 + (_UNK_150b511d4 & uVar31)),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511d8 & uVar32)),0x20);
    auVar71 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511dc & uVar104)),0x30);
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar28 +
                                        (___xmm_00000038000000280000001800000008 & uVar30))),
                       *(undefined4 *)(*pauVar28 + (_UNK_150b511e4 & uVar31)),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511e8 & uVar32)),0x20);
    auVar78 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511ec & uVar104)),0x30);
    uVar25 = (ulonglong)(_UNK_150b511f4 & uVar31);
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar28 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar30))),
                       *(undefined4 *)(*pauVar28 + uVar25),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511f8 & uVar32)),0x20);
    auVar91 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511fc & uVar104)),0x30);
  }
  fVar90 = auVar91._0_4_;
  fVar95 = auVar91._4_4_;
  fVar97 = auVar91._8_4_;
  fVar99 = auVar91._12_4_;
  auVar36._0_4_ = -(uint)(fVar90 != 0.0 && bVar9);
  auVar36._4_4_ = -(uint)(fVar95 != 0.0 && bVar10);
  auVar36._8_4_ = -(uint)(fVar97 != 0.0 && bVar11);
  auVar36._12_4_ = -(uint)(fVar99 != 0.0 && bVar12);
  iVar17 = movmskps((int)uVar25,auVar36);
  if (iVar17 != 0) {
    bVar19 = ~((char)((char)uVar20 << 4) >> 4);
    pauVar5 = (undefined1 (*) [16])(param_2 + lVar21 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar66 = *pauVar5;
      auVar69 = pauVar5[1];
      auVar79._0_4_ = auVar66._0_4_;
      auVar74 = insertps(auVar69,auVar66,0x8c);
      auVar79._4_4_ = auVar66._12_4_;
      auVar79._8_4_ = auVar69._8_4_;
      auVar79._12_4_ = *(undefined4 *)(pauVar5[2] + 4);
      auVar93._4_4_ = auVar69._0_4_;
      auVar93._0_4_ = auVar66._4_4_;
      auVar93._8_4_ = auVar69._12_4_;
      auVar93._12_4_ = *(undefined4 *)(pauVar5[2] + 8);
      auVar113._0_8_ = auVar74._0_8_;
      auVar113._8_4_ = *(undefined4 *)pauVar5[2];
      auVar113._12_4_ = *(undefined4 *)(pauVar5[2] + 0xc);
      auVar66 = *(undefined1 (*) [16])(param_3 + lVar21 * 0xc);
      auVar69 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar21 * 0xc);
      auVar38 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar21 * 0xc);
      auVar118._0_4_ = auVar66._0_4_;
      auVar46._0_8_ = auVar69._8_8_;
      auVar46._8_4_ = auVar38._4_4_;
      auVar46._12_4_ = auVar38._8_4_;
      auVar74 = insertps(auVar69,auVar66,0x8c);
      auVar118._4_4_ = auVar66._12_4_;
      auVar118._8_4_ = auVar69._8_4_;
      auVar118._12_4_ = auVar38._4_4_;
      auVar107._4_4_ = auVar69._0_4_;
      auVar107._0_4_ = auVar66._4_4_;
      auVar107._8_4_ = auVar69._12_4_;
      auVar107._12_4_ = auVar38._8_4_;
      auVar56._0_8_ = auVar74._0_8_;
      auVar56._8_4_ = auVar38._0_4_;
      auVar56._12_4_ = auVar38._12_4_;
    }
    else {
      auVar37._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar30;
      auVar37._4_4_ = _UNK_150b50da4 & uVar31;
      auVar37._8_4_ = _UNK_150b50da8 & uVar32;
      auVar37._12_4_ = _UNK_150b50dac & uVar104;
      lVar23 = extractps(auVar37,1);
      lVar27 = extractps(auVar37,2);
      lVar26 = extractps(auVar37,3);
      auVar66 = insertps(ZEXT416(*(uint *)*pauVar5),*(undefined4 *)(*pauVar5 + lVar23),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar27),0x20);
      auVar79 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar26),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 +
                                          (___xmm_000000280000001c0000001000000004 & uVar30))),
                         *(undefined4 *)(*pauVar5 + (_UNK_150b50db4 & uVar31)),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50db8 & uVar32)),0x20);
      auVar93 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dbc & uVar104)),0x30);
      auVar38._4_4_ = uVar31;
      auVar38._0_4_ = uVar30;
      auVar38._8_4_ = uVar32;
      auVar38._12_4_ = uVar104;
      auVar38 = ___xmm_0000002c000000200000001400000008 & auVar38;
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 + auVar38._0_4_)),
                         *(undefined4 *)(*pauVar5 + auVar38._4_4_),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + auVar38._8_4_),0x20);
      auVar113 = insertps(auVar66,*(undefined4 *)(*pauVar5 + auVar38._12_4_),0x30);
      lVar22 = param_3 + lVar21 * 0xc;
      auVar66 = insertps(ZEXT416(*(uint *)(param_3 + lVar21 * 0xc)),*(undefined4 *)(lVar23 + lVar22)
                         ,0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(lVar27 + lVar22),0x20);
      auVar118 = insertps(auVar66,*(undefined4 *)(lVar26 + lVar22),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar30) +
                                          lVar22)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar31) + lVar22),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar32) + lVar22),0x20
                        );
      auVar107 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar104) + lVar22),
                          0x30);
      auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)auVar38._0_4_ + lVar22)),
                         *(undefined4 *)((ulonglong)auVar38._4_4_ + lVar22),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar38._8_4_ + lVar22),0x20);
      auVar56 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar38._12_4_ + lVar22),0x30);
      auVar46 = auVar78;
    }
    lVar21 = (longlong)(int)(uVar16 << 2);
    if ((bVar19 & 9) == 0) {
      auVar38 = *(undefined1 (*) [16])(param_4 + lVar21);
      auVar46 = *(undefined1 (*) [16])(param_5 + lVar21);
      lVar22 = param_5;
    }
    else {
      puVar24 = (uint *)(param_4 + lVar21);
      if ((uVar20 & 1) != 0) {
        auVar38 = ZEXT416(*puVar24);
      }
      if ((uVar20 & 2) != 0) {
        auVar38 = insertps(auVar38,puVar24[1],0x10);
      }
      if ((uVar20 & 4) != 0) {
        auVar38 = insertps(auVar38,puVar24[2],0x20);
      }
      if ((uVar20 & 8) != 0) {
        auVar38 = insertps(auVar38,puVar24[3],0x30);
      }
      if ((uVar20 & 1) != 0) {
        auVar46 = ZEXT416(*(uint *)(param_5 + lVar21));
      }
      if ((uVar20 & 2) != 0) {
        auVar46 = insertps(auVar46,*(undefined4 *)(param_5 + lVar21 + 4),0x10);
      }
      if ((uVar20 & 4) != 0) {
        auVar46 = insertps(auVar46,*(undefined4 *)(param_5 + lVar21 + 8),0x20);
      }
      lVar22 = param_5 + lVar21;
      if ((uVar20 & 8) != 0) {
        lVar22 = param_5 + lVar21;
        auVar46 = insertps(auVar46,*(undefined4 *)(lVar22 + 0xc),0x30);
      }
    }
    fVar77 = param_8 + param_9 * auVar46._0_4_;
    fVar81 = param_8 + param_9 * auVar46._4_4_;
    auVar62._4_4_ = fVar81;
    auVar62._0_4_ = fVar77;
    fVar84 = param_8 + param_9 * auVar46._8_4_;
    param_8 = param_8 + param_9 * auVar46._12_4_;
    fVar54 = param_6 + param_7 * auVar38._0_4_;
    fVar60 = param_6 + param_7 * auVar38._4_4_;
    fVar70 = param_6 + param_7 * auVar38._8_4_;
    param_6 = param_6 + param_7 * auVar38._12_4_;
    fVar102 = auVar79._0_4_ - auVar118._0_4_ * fVar54;
    fVar103 = auVar79._4_4_ - auVar118._4_4_ * fVar60;
    fVar86 = auVar79._8_4_ - auVar118._8_4_ * fVar70;
    fVar88 = auVar79._12_4_ - auVar118._12_4_ * param_6;
    fVar45 = auVar93._0_4_ - auVar107._0_4_ * fVar54;
    fVar49 = auVar93._4_4_ - auVar107._4_4_ * fVar60;
    fVar50 = auVar93._8_4_ - auVar107._8_4_ * fVar70;
    fVar51 = auVar93._12_4_ - auVar107._12_4_ * param_6;
    fVar33 = auVar113._0_4_ - auVar56._0_4_ * fVar54;
    fVar42 = auVar113._4_4_ - auVar56._4_4_ * fVar60;
    fVar43 = auVar113._8_4_ - auVar56._8_4_ * fVar70;
    fVar44 = auVar113._12_4_ - auVar56._12_4_ * param_6;
    fVar85 = auVar67._0_4_ - fVar102;
    fVar87 = auVar67._4_4_ - fVar103;
    fVar89 = auVar67._8_4_ - fVar86;
    fVar94 = auVar67._12_4_ - fVar88;
    fVar96 = auVar71._0_4_ - fVar45;
    fVar98 = auVar71._4_4_ - fVar49;
    fVar100 = auVar71._8_4_ - fVar50;
    fVar101 = auVar71._12_4_ - fVar51;
    local_138 = auVar78._0_4_;
    fStack_134 = auVar78._4_4_;
    fStack_130 = auVar78._8_4_;
    fStack_12c = auVar78._12_4_;
    local_138 = local_138 - fVar33;
    fStack_134 = fStack_134 - fVar42;
    fStack_130 = fStack_130 - fVar43;
    fStack_12c = fStack_12c - fVar44;
    auVar57._0_4_ = fVar96 * fVar96 + fVar85 * fVar85;
    auVar57._4_4_ = fVar98 * fVar98 + fVar87 * fVar87;
    auVar57._8_4_ = fVar100 * fVar100 + fVar89 * fVar89;
    auVar57._12_4_ = fVar101 * fVar101 + fVar94 * fVar94;
    auVar39._0_4_ = local_138 * local_138 + auVar57._0_4_;
    auVar39._4_4_ = fStack_134 * fStack_134 + auVar57._4_4_;
    auVar39._8_4_ = fStack_130 * fStack_130 + auVar57._8_4_;
    auVar39._12_4_ = fStack_12c * fStack_12c + auVar57._12_4_;
    auVar66 = sqrtps(auVar57,auVar39);
    auVar62._8_4_ = fVar84;
    auVar62._12_4_ = param_8;
    auVar66 = divps(auVar62,auVar66);
    fVar59 = auVar66._0_4_;
    fVar61 = auVar66._4_4_;
    fVar75 = auVar66._8_4_;
    fVar76 = auVar66._12_4_;
    fVar54 = fVar54 - fVar77;
    fVar60 = fVar60 - fVar81;
    fVar70 = fVar70 - fVar84;
    param_6 = param_6 - param_8;
    auVar80._0_4_ = auVar79._0_4_ - auVar118._0_4_ * fVar54;
    auVar80._4_4_ = auVar79._4_4_ - auVar118._4_4_ * fVar60;
    auVar80._8_4_ = auVar79._8_4_ - auVar118._8_4_ * fVar70;
    auVar80._12_4_ = auVar79._12_4_ - auVar118._12_4_ * param_6;
    uVar20 = -(uint)(auVar39._0_4_ < fVar77 * fVar77);
    uVar16 = -(uint)(auVar39._4_4_ < fVar81 * fVar81);
    uVar30 = -(uint)(auVar39._8_4_ < fVar84 * fVar84);
    uVar31 = -(uint)(auVar39._12_4_ < param_8 * param_8);
    auVar40._4_4_ = -(uint)(auVar39._4_4_ < _UNK_1506895d4);
    auVar40._0_4_ = -(uint)(auVar39._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar40._8_4_ = -(uint)(auVar39._8_4_ < _UNK_1506895d8);
    auVar40._12_4_ = -(uint)(auVar39._12_4_ < _UNK_1506895dc);
    auVar68._0_4_ = (uint)(fVar85 * fVar59 + fVar102) & uVar20;
    auVar68._4_4_ = (uint)(fVar87 * fVar61 + fVar103) & uVar16;
    auVar68._8_4_ = (uint)(fVar89 * fVar75 + fVar86) & uVar30;
    auVar68._12_4_ = (uint)(fVar94 * fVar76 + fVar88) & uVar31;
    auVar69 = blendvps(auVar68,auVar80,auVar40);
    auVar73._0_4_ = (uint)(fVar96 * fVar59 + fVar45) & uVar20;
    auVar73._4_4_ = (uint)(fVar98 * fVar61 + fVar49) & uVar16;
    auVar73._8_4_ = (uint)(fVar100 * fVar75 + fVar50) & uVar30;
    auVar73._12_4_ = (uint)(fVar101 * fVar76 + fVar51) & uVar31;
    auVar14._4_4_ = auVar93._4_4_ - auVar107._4_4_ * fVar60;
    auVar14._0_4_ = auVar93._0_4_ - auVar107._0_4_ * fVar54;
    auVar14._8_4_ = auVar93._8_4_ - auVar107._8_4_ * fVar70;
    auVar14._12_4_ = auVar93._12_4_ - auVar107._12_4_ * param_6;
    auVar74 = blendvps(auVar73,auVar14,auVar40);
    auVar114._0_4_ = auVar113._0_4_ - fVar54 * auVar56._0_4_;
    auVar114._4_4_ = auVar113._4_4_ - fVar60 * auVar56._4_4_;
    auVar114._8_4_ = auVar113._8_4_ - fVar70 * auVar56._8_4_;
    auVar114._12_4_ = auVar113._12_4_ - param_6 * auVar56._12_4_;
    auVar58._0_4_ = uVar20 & (uint)(fVar59 * local_138 + fVar33);
    auVar58._4_4_ = uVar16 & (uint)(fVar61 * fStack_134 + fVar42);
    auVar58._8_4_ = uVar30 & (uint)(fVar75 * fStack_130 + fVar43);
    auVar58._12_4_ = uVar31 & (uint)(fVar76 * fStack_12c + fVar44);
    auVar66 = blendvps(auVar58,auVar114,auVar40);
    fVar33 = auVar69._0_4_;
    auVar47._0_4_ = -(uint)((fVar90 != 0.0 && bVar9) && fVar33 != 0.0);
    auVar47._4_4_ = -(uint)((fVar95 != 0.0 && bVar10) && auVar69._4_4_ != 0.0);
    auVar47._8_4_ = -(uint)((fVar97 != 0.0 && bVar11) && auVar69._8_4_ != 0.0);
    auVar47._12_4_ = -(uint)((fVar99 != 0.0 && bVar12) && auVar69._12_4_ != 0.0);
    iVar17 = movmskps((int)lVar22,auVar47);
    if (iVar17 != 0) {
      bVar19 = (char)((char)iVar17 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar41._0_8_ = auVar69._0_8_;
        auVar41._8_4_ = auVar69._4_4_;
        auVar41._12_4_ = auVar74._4_4_;
        auVar48._0_8_ = auVar66._0_8_;
        auVar48._8_4_ = auVar66._4_4_;
        auVar48._12_4_ = fVar95;
        *(ulonglong *)*pauVar28 = CONCAT44(auVar74._0_4_,fVar33);
        *(ulonglong *)(*pauVar28 + 8) = CONCAT44(fVar90,auVar66._0_4_);
        *(longlong *)pauVar28[1] = auVar41._8_8_;
        *(longlong *)(pauVar28[1] + 8) = auVar48._8_8_;
        *(float *)pauVar28[2] = auVar69._8_4_;
        *(int *)(pauVar28[2] + 4) = auVar74._8_4_;
        *(int *)(pauVar28[2] + 8) = auVar66._8_4_;
        *(float *)(pauVar28[2] + 0xc) = fVar97;
        *(float *)pauVar28[3] = auVar69._12_4_;
        *(int *)(pauVar28[3] + 4) = auVar74._12_4_;
        *(int *)(pauVar28[3] + 8) = auVar66._12_4_;
        *(float *)(pauVar28[3] + 0xc) = fVar99;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar28 = fVar33;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar69,1);
          *(undefined8 *)pauVar28[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar69,2);
          *(undefined8 *)pauVar28[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar69,3);
          *(undefined8 *)pauVar28[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar28 + 4) = auVar74._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar74,1);
          *(undefined8 *)(pauVar28[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar74,2);
          *(undefined8 *)(pauVar28[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar74,3);
          *(undefined8 *)(pauVar28[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar28 + 8) = auVar66._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar66,1);
          *(undefined8 *)(pauVar28[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar66,2);
          *(undefined8 *)(pauVar28[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar66,3);
          *(undefined8 *)(pauVar28[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar28 + 0xc) = fVar90;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar91,1);
          *(undefined8 *)(pauVar28[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar91,2);
          *(undefined8 *)(pauVar28[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar91,3);
          *(undefined8 *)(pauVar28[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4 @ 14034af40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar56;
  undefined1 auVar53 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar72 [16];
  float fVar78;
  float fVar79;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
  float fVar81;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar87;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  float fVar99;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  float fVar106;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar31 = param_7 * param_7;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    auVar61._4_4_ = param_7;
    auVar61._0_4_ = param_7;
    auVar61._8_4_ = param_7;
    auVar61._12_4_ = param_7;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar78 = *(float *)(*pauVar25 + 0xc);
      auVar109 = *pauVar25;
      pauVar4 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar79 = *(float *)(*pauVar4 + 0xc);
      auVar70 = *pauVar4;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar80 = *(float *)(*pauVar5 + 0xc);
      auVar66 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar43 = *(float *)(*pauVar6 + 0xc);
      auVar50 = *pauVar6;
      auVar48._4_4_ = -(uint)(fVar79 != 0.0);
      auVar48._0_4_ = -(uint)(fVar78 != 0.0);
      auVar48._8_4_ = -(uint)(fVar80 != 0.0);
      auVar48._12_4_ = -(uint)(fVar43 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar48);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar48 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar33 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar58 = insertps(auVar33,auVar48,0x8c);
        auVar47 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar59 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar44 = insertps(auVar59,auVar47,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar81 = *pfVar3 * param_6 + param_5;
        fVar84 = pfVar3[1] * param_6 + param_5;
        fVar85 = pfVar3[2] * param_6 + param_5;
        fVar86 = pfVar3[3] * param_6 + param_5;
        fVar71 = auVar48._0_4_ - auVar47._0_4_ * fVar81;
        fVar73 = auVar48._12_4_ - auVar47._12_4_ * fVar84;
        fVar74 = auVar33._8_4_ - auVar59._8_4_ * fVar85;
        fVar75 = pfVar1[1] - pfVar2[1] * fVar86;
        fVar94 = auVar48._4_4_ - auVar47._4_4_ * fVar81;
        fVar96 = auVar33._0_4_ - auVar59._0_4_ * fVar84;
        fVar97 = auVar33._12_4_ - auVar59._12_4_ * fVar85;
        fVar98 = pfVar1[2] - pfVar2[2] * fVar86;
        fVar32 = auVar58._0_4_ - auVar44._0_4_ * fVar81;
        fVar40 = auVar58._4_4_ - auVar44._4_4_ * fVar84;
        fVar41 = *pfVar1 - *pfVar2 * fVar85;
        fVar42 = pfVar1[3] - pfVar2[3] * fVar86;
        fVar106 = *(float *)*pauVar25 - fVar71;
        fVar111 = *(float *)*pauVar4 - fVar73;
        fVar112 = *(float *)*pauVar5 - fVar74;
        fVar113 = *(float *)*pauVar6 - fVar75;
        fVar87 = *(float *)(*pauVar25 + 4) - fVar94;
        fVar91 = *(float *)(*pauVar4 + 4) - fVar96;
        fVar92 = *(float *)(*pauVar5 + 4) - fVar97;
        fVar93 = *(float *)(*pauVar6 + 4) - fVar98;
        fVar99 = *(float *)(*pauVar25 + 8) - fVar32;
        fVar102 = *(float *)(*pauVar4 + 8) - fVar40;
        fVar103 = *(float *)(*pauVar5 + 8) - fVar41;
        fVar104 = *(float *)(*pauVar6 + 8) - fVar42;
        auVar64._0_4_ = fVar87 * fVar87 + fVar106 * fVar106;
        auVar64._4_4_ = fVar91 * fVar91 + fVar111 * fVar111;
        auVar64._8_4_ = fVar92 * fVar92 + fVar112 * fVar112;
        auVar64._12_4_ = fVar93 * fVar93 + fVar113 * fVar113;
        auVar89._0_4_ = fVar99 * fVar99 + auVar64._0_4_;
        auVar89._4_4_ = fVar102 * fVar102 + auVar64._4_4_;
        auVar89._8_4_ = fVar103 * fVar103 + auVar64._8_4_;
        auVar89._12_4_ = fVar104 * fVar104 + auVar64._12_4_;
        auVar65 = sqrtps(auVar64,auVar89);
        auVar65 = divps(auVar61,auVar65);
        fVar54 = auVar65._0_4_;
        fVar55 = auVar65._4_4_;
        fVar56 = auVar65._8_4_;
        fVar57 = auVar65._12_4_;
        fVar81 = fVar81 - param_7;
        fVar84 = fVar84 - param_7;
        fVar85 = fVar85 - param_7;
        fVar86 = fVar86 - param_7;
        auVar108._0_4_ = auVar48._0_4_ - auVar47._0_4_ * fVar81;
        auVar108._4_4_ = auVar48._12_4_ - auVar47._12_4_ * fVar84;
        auVar108._8_4_ = auVar33._8_4_ - auVar59._8_4_ * fVar85;
        auVar108._12_4_ = pfVar1[1] - pfVar2[1] * fVar86;
        uVar15 = -(uint)(auVar89._0_4_ < fVar31);
        uVar28 = -(uint)(auVar89._4_4_ < fVar31);
        uVar29 = -(uint)(auVar89._8_4_ < fVar31);
        uVar30 = -(uint)(auVar89._12_4_ < fVar31);
        auVar107._0_4_ = (uint)(fVar106 * fVar54 + fVar71) & uVar15;
        auVar107._4_4_ = (uint)(fVar111 * fVar55 + fVar73) & uVar28;
        auVar107._8_4_ = (uint)(fVar112 * fVar56 + fVar74) & uVar29;
        auVar107._12_4_ = (uint)(fVar113 * fVar57 + fVar75) & uVar30;
        auVar65._4_4_ = -(uint)(auVar89._4_4_ < _UNK_1506895d4);
        auVar65._0_4_ = -(uint)(auVar89._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar65._8_4_ = -(uint)(auVar89._8_4_ < _UNK_1506895d8);
        auVar65._12_4_ = -(uint)(auVar89._12_4_ < _UNK_1506895dc);
        auVar108 = blendvps(auVar107,auVar108,auVar65);
        auVar60._0_4_ = auVar48._4_4_ - auVar47._4_4_ * fVar81;
        auVar60._4_4_ = auVar33._0_4_ - auVar59._0_4_ * fVar84;
        auVar60._8_4_ = auVar33._12_4_ - auVar59._12_4_ * fVar85;
        auVar60._12_4_ = pfVar1[2] - pfVar2[2] * fVar86;
        auVar88._0_4_ = (uint)(fVar87 * fVar54 + fVar94) & uVar15;
        auVar88._4_4_ = (uint)(fVar91 * fVar55 + fVar96) & uVar28;
        auVar88._8_4_ = (uint)(fVar92 * fVar56 + fVar97) & uVar29;
        auVar88._12_4_ = (uint)(fVar93 * fVar57 + fVar98) & uVar30;
        auVar89 = blendvps(auVar88,auVar60,auVar65);
        auVar59._0_4_ = auVar58._0_4_ - fVar81 * auVar44._0_4_;
        auVar59._4_4_ = auVar58._4_4_ - fVar84 * auVar44._4_4_;
        auVar59._8_4_ = *pfVar1 - fVar85 * *pfVar2;
        auVar59._12_4_ = pfVar1[3] - fVar86 * pfVar2[3];
        auVar47._0_4_ = uVar15 & (uint)(fVar54 * fVar99 + fVar32);
        auVar47._4_4_ = uVar28 & (uint)(fVar55 * fVar102 + fVar40);
        auVar47._8_4_ = uVar29 & (uint)(fVar56 * fVar103 + fVar41);
        auVar47._12_4_ = uVar30 & (uint)(fVar57 * fVar104 + fVar42);
        auVar48 = blendvps(auVar47,auVar59,auVar65);
        fVar32 = auVar108._0_4_;
        auVar33._0_4_ = -(uint)(fVar32 != 0.0 && fVar78 != 0.0);
        auVar33._4_4_ = -(uint)(auVar108._4_4_ != 0.0 && fVar79 != 0.0);
        auVar33._8_4_ = -(uint)(auVar108._8_4_ != 0.0 && fVar80 != 0.0);
        auVar33._12_4_ = -(uint)(auVar108._12_4_ != 0.0 && fVar43 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar33);
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar66._0_8_ = auVar108._0_8_;
            auVar66._8_4_ = auVar108._4_4_;
            auVar66._12_4_ = auVar89._4_4_;
            auVar70._0_8_ = auVar48._0_8_;
            auVar70._8_4_ = auVar48._4_4_;
            auVar70._12_4_ = fVar79;
            auVar50._12_4_ = fVar78;
            auVar50._8_4_ = auVar48._0_4_;
            auVar109._0_8_ = CONCAT44(auVar89._8_4_,auVar108._8_4_);
            auVar109._8_4_ = auVar108._12_4_;
            auVar109._12_4_ = auVar89._12_4_;
            auVar50._4_4_ = auVar89._0_4_;
            auVar50._0_4_ = fVar32;
            *(undefined1 (*) [16])(lVar20 + uVar26 * 4) = auVar50;
            puVar7 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar7 = auVar66._8_8_;
            puVar7[1] = auVar70._8_8_;
            puVar7 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar7 = auVar109._0_8_;
            *(int *)(puVar7 + 1) = auVar48._8_4_;
            *(float *)((longlong)puVar7 + 0xc) = fVar80;
            puVar7 = (undefined8 *)(lVar20 + 0x30 + uVar26 * 4);
            *puVar7 = auVar109._8_8_;
            *(int *)(puVar7 + 1) = auVar48._12_4_;
            *(float *)((longlong)puVar7 + 0xc) = fVar43;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar32;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar108,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar108,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar108,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar26 * 4) = auVar89._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar89,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar89,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar89,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar26 * 4) = auVar48._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar48,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar48,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar48,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar109,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar70,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar66,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar50,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar8;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar9 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  auVar44._0_4_ = -(uint)bVar9;
  bVar10 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  auVar44._4_4_ = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  auVar44._8_4_ = -(uint)bVar11;
  bVar12 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  auVar44._12_4_ = -(uint)bVar12;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  uVar15 = movmskps((int)unaff_RBX,auVar44);
  if (uVar15 == 0xf) {
    auVar61 = *pauVar25;
    auVar66 = pauVar25[2];
    auVar51._8_4_ = auVar61._4_4_;
    auVar51._0_8_ = auVar61._0_8_;
    auVar51._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar58._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar61._8_4_);
    auVar58._8_4_ = auVar61._12_4_;
    auVar58._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar68._0_8_ = auVar66._0_8_;
    auVar68._8_4_ = auVar66._4_4_;
    auVar68._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar67._8_8_ = auVar68._8_8_;
    auVar62._12_4_ = *(undefined4 *)pauVar25[3];
    auVar62._8_4_ = auVar66._0_4_;
    auVar77._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar66._8_4_);
    auVar77._8_4_ = auVar66._12_4_;
    auVar77._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar62._4_4_ = *(undefined4 *)pauVar25[1];
    auVar62._0_4_ = auVar61._0_4_;
    auVar67._0_8_ = auVar51._8_8_;
    auVar49._8_8_ = auVar77._0_8_;
    auVar49._0_8_ = auVar58._0_8_;
    auVar76._8_8_ = auVar77._8_8_;
    auVar76._0_8_ = auVar58._8_8_;
  }
  else {
    auVar34._0_4_ = ___xmm_00000030000000200000001000000000 & auVar44._0_4_;
    auVar34._4_4_ = _UNK_150b511c4 & auVar44._4_4_;
    auVar34._8_4_ = _UNK_150b511c8 & auVar44._8_4_;
    auVar34._12_4_ = _UNK_150b511cc & auVar44._12_4_;
    lVar18 = extractps(auVar34,1);
    lVar22 = extractps(auVar34,2);
    lVar24 = extractps(auVar34,3);
    auVar61 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar61 = insertps(auVar61,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar62 = insertps(auVar61,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar61 = ___xmm_00000034000000240000001400000004 & auVar44;
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar61._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar61._4_4_),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._8_4_),0x20);
    auVar67 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._12_4_),0x30);
    auVar61 = ___xmm_00000038000000280000001800000008 & auVar44;
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar61._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar61._4_4_),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._8_4_),0x20);
    auVar49 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._12_4_),0x30);
    auVar61 = ___xmm_0000003c0000002c0000001c0000000c & auVar44;
    uVar14 = (ulonglong)auVar61._4_4_;
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar61._0_4_)),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._8_4_),0x20);
    auVar76 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._12_4_),0x30);
  }
  fVar31 = auVar76._0_4_;
  fVar78 = auVar76._4_4_;
  fVar79 = auVar76._8_4_;
  fVar80 = auVar76._12_4_;
  auVar35._0_4_ = -(uint)(fVar31 != 0.0 && bVar9);
  auVar35._4_4_ = -(uint)(fVar78 != 0.0 && bVar10);
  auVar35._8_4_ = -(uint)(fVar79 != 0.0 && bVar11);
  auVar35._12_4_ = -(uint)(fVar80 != 0.0 && bVar12);
  iVar16 = movmskps((int)uVar14,auVar35);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar4 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar61 = *pauVar4;
      auVar66 = pauVar4[1];
      auVar82._0_4_ = auVar61._0_4_;
      auVar70 = insertps(auVar66,auVar61,0x8c);
      auVar82._4_4_ = auVar61._12_4_;
      auVar82._8_4_ = auVar66._8_4_;
      auVar82._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      local_188._4_4_ = auVar66._0_4_;
      local_188._0_4_ = auVar61._4_4_;
      fStack_180 = (float)auVar66._12_4_;
      fStack_17c = (float)*(undefined4 *)(pauVar4[2] + 8);
      auVar100._0_8_ = auVar70._0_8_;
      auVar100._8_4_ = *(undefined4 *)pauVar4[2];
      auVar100._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar61 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar66 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar44 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar105._0_4_ = auVar61._0_4_;
      auVar70 = insertps(auVar66,auVar61,0x8c);
      auVar105._4_4_ = auVar61._12_4_;
      auVar105._8_4_ = auVar66._8_4_;
      auVar105._12_4_ = auVar44._4_4_;
      auVar95._4_4_ = auVar66._0_4_;
      auVar95._0_4_ = auVar61._4_4_;
      auVar95._8_4_ = auVar66._12_4_;
      auVar95._12_4_ = auVar44._8_4_;
      auVar52._0_8_ = auVar70._0_8_;
      auVar52._8_4_ = auVar44._0_4_;
      auVar52._12_4_ = auVar44._12_4_;
    }
    else {
      auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar44._0_4_;
      auVar36._4_4_ = _UNK_150b50da4 & auVar44._4_4_;
      auVar36._8_4_ = _UNK_150b50da8 & auVar44._8_4_;
      auVar36._12_4_ = _UNK_150b50dac & auVar44._12_4_;
      lVar22 = extractps(auVar36,1);
      lVar23 = extractps(auVar36,2);
      lVar24 = extractps(auVar36,3);
      auVar61 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar22),0x10);
      auVar61 = insertps(auVar61,*(undefined4 *)(*pauVar4 + lVar23),0x20);
      auVar82 = insertps(auVar61,*(undefined4 *)(*pauVar4 + lVar24),0x30);
      auVar61 = ___xmm_000000280000001c0000001000000004 & auVar44;
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar61._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar61._4_4_),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar61._8_4_),0x20);
      _local_188 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar61._12_4_),0x30);
      auVar44 = ___xmm_0000002c000000200000001400000008 & auVar44;
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar44._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar44._4_4_),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar44._8_4_),0x20);
      auVar100 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar44._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar66 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar105 = insertps(auVar66,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)auVar61._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar61._4_4_ + lVar18),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar61._8_4_ + lVar18),0x20);
      auVar95 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar61._12_4_ + lVar18),0x30);
      auVar61 = insertps(ZEXT416(*(uint *)((ulonglong)auVar44._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar44._4_4_ + lVar18),0x10);
      auVar61 = insertps(auVar61,*(undefined4 *)((ulonglong)auVar44._8_4_ + lVar18),0x20);
      auVar52 = insertps(auVar61,*(undefined4 *)((ulonglong)auVar44._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar44 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar44 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar44 = insertps(auVar44,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar44 = insertps(auVar44,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar44 = insertps(auVar44,puVar21[3],0x30);
      }
    }
    auVar72._0_4_ = param_6 * auVar44._0_4_;
    auVar72._4_4_ = param_6 * auVar44._4_4_;
    auVar72._8_4_ = param_6 * auVar44._8_4_;
    auVar72._12_4_ = param_6 * auVar44._12_4_;
    fVar57 = param_5 + auVar72._0_4_;
    fVar81 = param_5 + auVar72._4_4_;
    fVar84 = param_5 + auVar72._8_4_;
    param_5 = param_5 + auVar72._12_4_;
    fVar75 = auVar82._0_4_ - auVar105._0_4_ * fVar57;
    fVar54 = auVar82._4_4_ - auVar105._4_4_ * fVar81;
    fVar55 = auVar82._8_4_ - auVar105._8_4_ * fVar84;
    fVar56 = auVar82._12_4_ - auVar105._12_4_ * param_5;
    fVar42 = (float)local_188._0_4_ - auVar95._0_4_ * fVar57;
    fVar71 = (float)local_188._4_4_ - auVar95._4_4_ * fVar81;
    fVar73 = fStack_180 - auVar95._8_4_ * fVar84;
    fVar74 = fStack_17c - auVar95._12_4_ * param_5;
    fVar43 = auVar100._0_4_ - auVar52._0_4_ * fVar57;
    fVar32 = auVar100._4_4_ - auVar52._4_4_ * fVar81;
    fVar40 = auVar100._8_4_ - auVar52._8_4_ * fVar84;
    fVar41 = auVar100._12_4_ - auVar52._12_4_ * param_5;
    fVar85 = auVar62._0_4_ - fVar75;
    fVar86 = auVar62._4_4_ - fVar54;
    fVar87 = auVar62._8_4_ - fVar55;
    fVar91 = auVar62._12_4_ - fVar56;
    fVar92 = auVar67._0_4_ - fVar42;
    fVar93 = auVar67._4_4_ - fVar71;
    fVar94 = auVar67._8_4_ - fVar73;
    fVar96 = auVar67._12_4_ - fVar74;
    fVar97 = auVar49._0_4_ - fVar43;
    fVar98 = auVar49._4_4_ - fVar32;
    fVar99 = auVar49._8_4_ - fVar40;
    fVar102 = auVar49._12_4_ - fVar41;
    auVar37._0_4_ = fVar97 * fVar97 + fVar92 * fVar92 + fVar85 * fVar85;
    auVar37._4_4_ = fVar98 * fVar98 + fVar93 * fVar93 + fVar86 * fVar86;
    auVar37._8_4_ = fVar99 * fVar99 + fVar94 * fVar94 + fVar87 * fVar87;
    auVar37._12_4_ = fVar102 * fVar102 + fVar96 * fVar96 + fVar91 * fVar91;
    auVar110._4_4_ = param_7;
    auVar110._0_4_ = param_7;
    auVar110._8_4_ = param_7;
    auVar110._12_4_ = param_7;
    auVar61 = sqrtps(auVar72,auVar37);
    fVar57 = fVar57 - param_7;
    fVar81 = fVar81 - param_7;
    fVar84 = fVar84 - param_7;
    param_5 = param_5 - param_7;
    auVar61 = divps(auVar110,auVar61);
    fVar103 = auVar61._0_4_;
    fVar104 = auVar61._4_4_;
    fVar106 = auVar61._8_4_;
    fVar111 = auVar61._12_4_;
    auVar83._0_4_ = auVar82._0_4_ - auVar105._0_4_ * fVar57;
    auVar83._4_4_ = auVar82._4_4_ - auVar105._4_4_ * fVar81;
    auVar83._8_4_ = auVar82._8_4_ - auVar105._8_4_ * fVar84;
    auVar83._12_4_ = auVar82._12_4_ - auVar105._12_4_ * param_5;
    param_7 = param_7 * param_7;
    uVar27 = -(uint)(auVar37._0_4_ < param_7);
    uVar15 = -(uint)(auVar37._4_4_ < param_7);
    uVar28 = -(uint)(auVar37._8_4_ < param_7);
    uVar29 = -(uint)(auVar37._12_4_ < param_7);
    auVar38._4_4_ = -(uint)(auVar37._4_4_ < _UNK_1506895d4);
    auVar38._0_4_ = -(uint)(auVar37._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar38._8_4_ = -(uint)(auVar37._8_4_ < _UNK_1506895d8);
    auVar38._12_4_ = -(uint)(auVar37._12_4_ < _UNK_1506895dc);
    auVar63._0_4_ = (uint)(fVar85 * fVar103 + fVar75) & uVar27;
    auVar63._4_4_ = (uint)(fVar86 * fVar104 + fVar54) & uVar15;
    auVar63._8_4_ = (uint)(fVar87 * fVar106 + fVar55) & uVar28;
    auVar63._12_4_ = (uint)(fVar91 * fVar111 + fVar56) & uVar29;
    auVar66 = blendvps(auVar63,auVar83,auVar38);
    auVar90._0_4_ = (float)local_188._0_4_ - auVar95._0_4_ * fVar57;
    auVar90._4_4_ = (float)local_188._4_4_ - auVar95._4_4_ * fVar81;
    auVar90._8_4_ = fStack_180 - auVar95._8_4_ * fVar84;
    auVar90._12_4_ = fStack_17c - auVar95._12_4_ * param_5;
    auVar69._0_4_ = (uint)(fVar92 * fVar103 + fVar42) & uVar27;
    auVar69._4_4_ = (uint)(fVar93 * fVar104 + fVar71) & uVar15;
    auVar69._8_4_ = (uint)(fVar94 * fVar106 + fVar73) & uVar28;
    auVar69._12_4_ = (uint)(fVar96 * fVar111 + fVar74) & uVar29;
    auVar70 = blendvps(auVar69,auVar90,auVar38);
    auVar101._0_4_ = auVar100._0_4_ - fVar57 * auVar52._0_4_;
    auVar101._4_4_ = auVar100._4_4_ - fVar81 * auVar52._4_4_;
    auVar101._8_4_ = auVar100._8_4_ - fVar84 * auVar52._8_4_;
    auVar101._12_4_ = auVar100._12_4_ - param_5 * auVar52._12_4_;
    auVar53._0_4_ = uVar27 & (uint)(fVar103 * fVar97 + fVar43);
    auVar53._4_4_ = uVar15 & (uint)(fVar104 * fVar98 + fVar32);
    auVar53._8_4_ = uVar28 & (uint)(fVar106 * fVar99 + fVar40);
    auVar53._12_4_ = uVar29 & (uint)(fVar111 * fVar102 + fVar41);
    auVar61 = blendvps(auVar53,auVar101,auVar38);
    fVar43 = auVar66._0_4_;
    auVar45._0_4_ = -(uint)((fVar31 != 0.0 && bVar9) && fVar43 != 0.0);
    auVar45._4_4_ = -(uint)((fVar78 != 0.0 && bVar10) && auVar66._4_4_ != 0.0);
    auVar45._8_4_ = -(uint)((fVar79 != 0.0 && bVar11) && auVar66._8_4_ != 0.0);
    auVar45._12_4_ = -(uint)((fVar80 != 0.0 && bVar12) && auVar66._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar45);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar39._0_8_ = auVar66._0_8_;
        auVar39._8_4_ = auVar66._4_4_;
        auVar39._12_4_ = auVar70._4_4_;
        auVar46._0_8_ = auVar61._0_8_;
        auVar46._8_4_ = auVar61._4_4_;
        auVar46._12_4_ = fVar78;
        *(ulonglong *)*pauVar25 = CONCAT44(auVar70._0_4_,fVar43);
        *(ulonglong *)(*pauVar25 + 8) = CONCAT44(fVar31,auVar61._0_4_);
        *(longlong *)pauVar25[1] = auVar39._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar46._8_8_;
        *(float *)pauVar25[2] = auVar66._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar70._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar61._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar79;
        *(float *)pauVar25[3] = auVar66._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar70._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar61._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar80;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar43;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar66,1);
          *(undefined8 *)pauVar25[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar66,2);
          *(undefined8 *)pauVar25[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar66,3);
          *(undefined8 *)pauVar25[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar70._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar70,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar70,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar70,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar61._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar61,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar61,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar61,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar76,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar76,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar76,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4 @ 14034bc30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar105 [16];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar72 = *(float *)(*pauVar25 + 0xc);
      auVar52 = *pauVar25;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar76 = *(float *)(*pauVar5 + 0xc);
      auVar71 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar78 = *(float *)(*pauVar6 + 0xc);
      auVar67 = *pauVar6;
      pauVar7 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar80 = *(float *)(*pauVar7 + 0xc);
      auVar60 = *pauVar7;
      auVar51._4_4_ = -(uint)(fVar76 != 0.0);
      auVar51._0_4_ = -(uint)(fVar72 != 0.0);
      auVar51._8_4_ = -(uint)(fVar78 != 0.0);
      auVar51._12_4_ = -(uint)(fVar80 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar51);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar51 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar32 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar82 = insertps(auVar32,auVar51,0x8c);
        auVar50 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar83 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar66 = insertps(auVar83,auVar50,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar43 = *pfVar3 * param_7 + param_6;
        fVar46 = pfVar3[1] * param_7 + param_6;
        auVar90._4_4_ = fVar46;
        auVar90._0_4_ = fVar43;
        fVar47 = pfVar3[2] * param_7 + param_6;
        fVar48 = pfVar3[3] * param_7 + param_6;
        fVar59 = auVar51._0_4_ - param_5 * auVar50._0_4_;
        fVar63 = auVar51._12_4_ - param_5 * auVar50._12_4_;
        fVar64 = auVar32._8_4_ - param_5 * auVar83._8_4_;
        fVar65 = pfVar1[1] - param_5 * pfVar2[1];
        fVar93 = auVar51._4_4_ - param_5 * auVar50._4_4_;
        fVar96 = auVar32._0_4_ - param_5 * auVar83._0_4_;
        fVar97 = auVar32._12_4_ - param_5 * auVar83._12_4_;
        fVar98 = pfVar1[2] - param_5 * pfVar2[2];
        fVar31 = auVar82._0_4_ - param_5 * auVar66._0_4_;
        fVar40 = auVar82._4_4_ - param_5 * auVar66._4_4_;
        fVar41 = *pfVar1 - param_5 * *pfVar2;
        fVar42 = pfVar1[3] - param_5 * pfVar2[3];
        fVar109 = *(float *)*pauVar25 - fVar59;
        fVar113 = *(float *)*pauVar5 - fVar63;
        fVar114 = *(float *)*pauVar6 - fVar64;
        fVar115 = *(float *)*pauVar7 - fVar65;
        fVar84 = *(float *)(*pauVar25 + 4) - fVar93;
        fVar87 = *(float *)(*pauVar5 + 4) - fVar96;
        fVar88 = *(float *)(*pauVar6 + 4) - fVar97;
        fVar89 = *(float *)(*pauVar7 + 4) - fVar98;
        fVar99 = *(float *)(*pauVar25 + 8) - fVar31;
        fVar101 = *(float *)(*pauVar5 + 8) - fVar40;
        fVar102 = *(float *)(*pauVar6 + 8) - fVar41;
        fVar103 = *(float *)(*pauVar7 + 8) - fVar42;
        auVar111._0_4_ = fVar84 * fVar84 + fVar109 * fVar109;
        auVar111._4_4_ = fVar87 * fVar87 + fVar113 * fVar113;
        auVar111._8_4_ = fVar88 * fVar88 + fVar114 * fVar114;
        auVar111._12_4_ = fVar89 * fVar89 + fVar115 * fVar115;
        auVar86._0_4_ = fVar99 * fVar99 + auVar111._0_4_;
        auVar86._4_4_ = fVar101 * fVar101 + auVar111._4_4_;
        auVar86._8_4_ = fVar102 * fVar102 + auVar111._8_4_;
        auVar86._12_4_ = fVar103 * fVar103 + auVar111._12_4_;
        auVar49 = sqrtps(auVar111,auVar86);
        auVar90._8_4_ = fVar47;
        auVar90._12_4_ = fVar48;
        auVar49 = divps(auVar90,auVar49);
        fVar73 = auVar49._0_4_;
        fVar77 = auVar49._4_4_;
        fVar79 = auVar49._8_4_;
        fVar81 = auVar49._12_4_;
        fVar104 = param_5 - fVar43;
        fVar106 = param_5 - fVar46;
        fVar107 = param_5 - fVar47;
        fVar108 = param_5 - fVar48;
        auVar116._0_4_ = auVar51._0_4_ - auVar50._0_4_ * fVar104;
        auVar116._4_4_ = auVar51._12_4_ - auVar50._12_4_ * fVar106;
        auVar116._8_4_ = auVar32._8_4_ - auVar83._8_4_ * fVar107;
        auVar116._12_4_ = pfVar1[1] - pfVar2[1] * fVar108;
        uVar15 = -(uint)(auVar86._0_4_ < fVar43 * fVar43);
        uVar28 = -(uint)(auVar86._4_4_ < fVar46 * fVar46);
        uVar29 = -(uint)(auVar86._8_4_ < fVar47 * fVar47);
        uVar30 = -(uint)(auVar86._12_4_ < fVar48 * fVar48);
        auVar110._0_4_ = (uint)(fVar109 * fVar73 + fVar59) & uVar15;
        auVar110._4_4_ = (uint)(fVar113 * fVar77 + fVar63) & uVar28;
        auVar110._8_4_ = (uint)(fVar114 * fVar79 + fVar64) & uVar29;
        auVar110._12_4_ = (uint)(fVar115 * fVar81 + fVar65) & uVar30;
        auVar49._4_4_ = -(uint)(auVar86._4_4_ < _UNK_1506895d4);
        auVar49._0_4_ = -(uint)(auVar86._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar49._8_4_ = -(uint)(auVar86._8_4_ < _UNK_1506895d8);
        auVar49._12_4_ = -(uint)(auVar86._12_4_ < _UNK_1506895dc);
        auVar111 = blendvps(auVar110,auVar116,auVar49);
        auVar56._0_4_ = auVar51._4_4_ - auVar50._4_4_ * fVar104;
        auVar56._4_4_ = auVar32._0_4_ - auVar83._0_4_ * fVar106;
        auVar56._8_4_ = auVar32._12_4_ - auVar83._12_4_ * fVar107;
        auVar56._12_4_ = pfVar1[2] - pfVar2[2] * fVar108;
        auVar85._0_4_ = (uint)(fVar84 * fVar73 + fVar93) & uVar15;
        auVar85._4_4_ = (uint)(fVar87 * fVar77 + fVar96) & uVar28;
        auVar85._8_4_ = (uint)(fVar88 * fVar79 + fVar97) & uVar29;
        auVar85._12_4_ = (uint)(fVar89 * fVar81 + fVar98) & uVar30;
        auVar86 = blendvps(auVar85,auVar56,auVar49);
        auVar83._0_4_ = auVar82._0_4_ - fVar104 * auVar66._0_4_;
        auVar83._4_4_ = auVar82._4_4_ - fVar106 * auVar66._4_4_;
        auVar83._8_4_ = *pfVar1 - fVar107 * *pfVar2;
        auVar83._12_4_ = pfVar1[3] - fVar108 * pfVar2[3];
        auVar50._0_4_ = uVar15 & (uint)(fVar73 * fVar99 + fVar31);
        auVar50._4_4_ = uVar28 & (uint)(fVar77 * fVar101 + fVar40);
        auVar50._8_4_ = uVar29 & (uint)(fVar79 * fVar102 + fVar41);
        auVar50._12_4_ = uVar30 & (uint)(fVar81 * fVar103 + fVar42);
        auVar51 = blendvps(auVar50,auVar83,auVar49);
        fVar31 = auVar111._0_4_;
        auVar32._0_4_ = -(uint)(fVar31 != 0.0 && fVar72 != 0.0);
        auVar32._4_4_ = -(uint)(auVar111._4_4_ != 0.0 && fVar76 != 0.0);
        auVar32._8_4_ = -(uint)(auVar111._8_4_ != 0.0 && fVar78 != 0.0);
        auVar32._12_4_ = -(uint)(auVar111._12_4_ != 0.0 && fVar80 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar32);
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar60._0_8_ = auVar111._0_8_;
            auVar60._8_4_ = auVar111._4_4_;
            auVar60._12_4_ = auVar86._4_4_;
            auVar67._0_8_ = auVar51._0_8_;
            auVar67._8_4_ = auVar51._4_4_;
            auVar67._12_4_ = fVar76;
            auVar66._0_8_ = CONCAT44(auVar86._8_4_,auVar111._8_4_);
            auVar66._8_4_ = auVar111._12_4_;
            auVar66._12_4_ = auVar86._12_4_;
            auVar71._0_8_ = CONCAT44(fVar78,auVar51._8_4_);
            auVar71._8_4_ = auVar51._12_4_;
            auVar71._12_4_ = fVar80;
            puVar4 = (undefined8 *)(lVar20 + uVar26 * 4);
            *puVar4 = CONCAT44(auVar86._0_4_,fVar31);
            puVar4[1] = CONCAT44(fVar72,auVar51._0_4_);
            puVar4 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar4 = auVar60._8_8_;
            puVar4[1] = auVar67._8_8_;
            puVar4 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar4 = auVar66._0_8_;
            puVar4[1] = auVar71._0_8_;
            auVar52._8_8_ = auVar71._8_8_;
            auVar52._0_8_ = auVar66._8_8_;
            *(undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4) = auVar52;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar31;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar111,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar111,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar111,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar26 * 4) = auVar86._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar86,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar86,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar86,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar26 * 4) = auVar51._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar51,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar51,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar51,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar52,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar71,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar67,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar60,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar8;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar9 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  auVar82._0_4_ = -(uint)bVar9;
  bVar10 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  auVar82._4_4_ = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  auVar82._8_4_ = -(uint)bVar11;
  bVar12 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  auVar82._12_4_ = -(uint)bVar12;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  uVar15 = movmskps((int)unaff_RBX,auVar82);
  if (uVar15 == 0xf) {
    auVar60 = *pauVar25;
    auVar67 = pauVar25[2];
    auVar53._8_4_ = auVar60._4_4_;
    auVar53._0_8_ = auVar60._0_8_;
    auVar53._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar34._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar60._8_4_);
    auVar34._8_4_ = auVar60._12_4_;
    auVar34._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar69._0_8_ = auVar67._0_8_;
    auVar69._8_4_ = auVar67._4_4_;
    auVar69._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar68._8_8_ = auVar69._8_8_;
    auVar61._12_4_ = *(undefined4 *)pauVar25[3];
    auVar61._8_4_ = auVar67._0_4_;
    auVar75._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar67._8_4_);
    auVar75._8_4_ = auVar67._12_4_;
    auVar75._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar61._4_4_ = *(undefined4 *)pauVar25[1];
    auVar61._0_4_ = auVar60._0_4_;
    auVar68._0_8_ = auVar53._8_8_;
    auVar117._8_8_ = auVar75._0_8_;
    auVar117._0_8_ = auVar34._0_8_;
    auVar74._8_8_ = auVar75._8_8_;
    auVar74._0_8_ = auVar34._8_8_;
  }
  else {
    auVar33._0_4_ = ___xmm_00000030000000200000001000000000 & auVar82._0_4_;
    auVar33._4_4_ = _UNK_150b511c4 & auVar82._4_4_;
    auVar33._8_4_ = _UNK_150b511c8 & auVar82._8_4_;
    auVar33._12_4_ = _UNK_150b511cc & auVar82._12_4_;
    lVar18 = extractps(auVar33,1);
    lVar22 = extractps(auVar33,2);
    lVar24 = extractps(auVar33,3);
    auVar60 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar61 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar60 = ___xmm_00000034000000240000001400000004 & auVar82;
    auVar67 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar60._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar60._4_4_),0x10);
    auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._8_4_),0x20);
    auVar68 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._12_4_),0x30);
    auVar60 = ___xmm_00000038000000280000001800000008 & auVar82;
    auVar67 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar60._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar60._4_4_),0x10);
    auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._8_4_),0x20);
    auVar117 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._12_4_),0x30);
    auVar60 = ___xmm_0000003c0000002c0000001c0000000c & auVar82;
    uVar14 = (ulonglong)auVar60._4_4_;
    auVar67 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar60._0_4_)),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._8_4_),0x20);
    auVar74 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._12_4_),0x30);
  }
  fVar72 = auVar74._0_4_;
  fVar76 = auVar74._4_4_;
  fVar78 = auVar74._8_4_;
  fVar80 = auVar74._12_4_;
  auVar35._0_4_ = -(uint)(fVar72 != 0.0 && bVar9);
  auVar35._4_4_ = -(uint)(fVar76 != 0.0 && bVar10);
  auVar35._8_4_ = -(uint)(fVar78 != 0.0 && bVar11);
  auVar35._12_4_ = -(uint)(fVar80 != 0.0 && bVar12);
  iVar16 = movmskps((int)uVar14,auVar35);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar5 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar60 = *pauVar5;
      auVar67 = pauVar5[1];
      auVar57._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar67,auVar60,0x8c);
      auVar57._4_4_ = auVar60._12_4_;
      auVar57._8_4_ = auVar67._8_4_;
      auVar57._12_4_ = *(undefined4 *)(pauVar5[2] + 4);
      auVar91._4_4_ = auVar67._0_4_;
      auVar91._0_4_ = auVar60._4_4_;
      auVar91._8_4_ = auVar67._12_4_;
      auVar91._12_4_ = *(undefined4 *)(pauVar5[2] + 8);
      auVar94._0_8_ = auVar71._0_8_;
      auVar94._8_4_ = *(undefined4 *)pauVar5[2];
      auVar94._12_4_ = *(undefined4 *)(pauVar5[2] + 0xc);
      auVar60 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar67 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar82 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar112._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar67,auVar60,0x8c);
      auVar112._4_4_ = auVar60._12_4_;
      auVar112._8_4_ = auVar67._8_4_;
      auVar112._12_4_ = auVar82._4_4_;
      auVar100._4_4_ = auVar67._0_4_;
      auVar100._0_4_ = auVar60._4_4_;
      auVar100._8_4_ = auVar67._12_4_;
      auVar100._12_4_ = auVar82._8_4_;
      auVar105._0_8_ = auVar71._0_8_;
      auVar105._8_4_ = auVar82._0_4_;
      auVar105._12_4_ = auVar82._12_4_;
    }
    else {
      auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar82._0_4_;
      auVar36._4_4_ = _UNK_150b50da4 & auVar82._4_4_;
      auVar36._8_4_ = _UNK_150b50da8 & auVar82._8_4_;
      auVar36._12_4_ = _UNK_150b50dac & auVar82._12_4_;
      lVar22 = extractps(auVar36,1);
      lVar23 = extractps(auVar36,2);
      lVar24 = extractps(auVar36,3);
      auVar60 = insertps(ZEXT416(*(uint *)*pauVar5),*(undefined4 *)(*pauVar5 + lVar22),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar5 + lVar23),0x20);
      auVar57 = insertps(auVar60,*(undefined4 *)(*pauVar5 + lVar24),0x30);
      auVar60 = ___xmm_000000280000001c0000001000000004 & auVar82;
      auVar67 = insertps(ZEXT416(*(uint *)(*pauVar5 + auVar60._0_4_)),
                         *(undefined4 *)(*pauVar5 + auVar60._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar60._8_4_),0x20);
      auVar91 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar60._12_4_),0x30);
      auVar82 = ___xmm_0000002c000000200000001400000008 & auVar82;
      auVar67 = insertps(ZEXT416(*(uint *)(*pauVar5 + auVar82._0_4_)),
                         *(undefined4 *)(*pauVar5 + auVar82._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar82._8_4_),0x20);
      auVar94 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar82._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar67 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar112 = insertps(auVar67,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar67 = insertps(ZEXT416(*(uint *)((ulonglong)auVar60._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar60._4_4_ + lVar18),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar60._8_4_ + lVar18),0x20);
      auVar100 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar60._12_4_ + lVar18),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)((ulonglong)auVar82._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar82._4_4_ + lVar18),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar82._8_4_ + lVar18),0x20);
      auVar105 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar82._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar82 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar82 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar82 = insertps(auVar82,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar82 = insertps(auVar82,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar82 = insertps(auVar82,puVar21[3],0x30);
      }
    }
    fVar81 = param_6 + param_7 * auVar82._0_4_;
    fVar93 = param_6 + param_7 * auVar82._4_4_;
    auVar118._4_4_ = fVar93;
    auVar118._0_4_ = fVar81;
    fVar96 = param_6 + param_7 * auVar82._8_4_;
    param_6 = param_6 + param_7 * auVar82._12_4_;
    fVar97 = auVar57._0_4_ - param_5 * auVar112._0_4_;
    fVar98 = auVar57._4_4_ - param_5 * auVar112._4_4_;
    fVar99 = auVar57._8_4_ - param_5 * auVar112._8_4_;
    fVar101 = auVar57._12_4_ - param_5 * auVar112._12_4_;
    fVar43 = auVar91._0_4_ - param_5 * auVar100._0_4_;
    fVar46 = auVar91._4_4_ - param_5 * auVar100._4_4_;
    fVar47 = auVar91._8_4_ - param_5 * auVar100._8_4_;
    fVar48 = auVar91._12_4_ - param_5 * auVar100._12_4_;
    fVar31 = auVar94._0_4_ - param_5 * auVar105._0_4_;
    fVar40 = auVar94._4_4_ - param_5 * auVar105._4_4_;
    fVar41 = auVar94._8_4_ - param_5 * auVar105._8_4_;
    fVar42 = auVar94._12_4_ - param_5 * auVar105._12_4_;
    fVar59 = auVar61._0_4_ - fVar97;
    fVar63 = auVar61._4_4_ - fVar98;
    fVar64 = auVar61._8_4_ - fVar99;
    fVar65 = auVar61._12_4_ - fVar101;
    fVar84 = auVar68._0_4_ - fVar43;
    fVar87 = auVar68._4_4_ - fVar46;
    fVar88 = auVar68._8_4_ - fVar47;
    fVar89 = auVar68._12_4_ - fVar48;
    fVar102 = auVar117._0_4_ - fVar31;
    fVar104 = auVar117._4_4_ - fVar40;
    fVar107 = auVar117._8_4_ - fVar41;
    fVar109 = auVar117._12_4_ - fVar42;
    auVar54._0_4_ = fVar84 * fVar84 + fVar59 * fVar59;
    auVar54._4_4_ = fVar87 * fVar87 + fVar63 * fVar63;
    auVar54._8_4_ = fVar88 * fVar88 + fVar64 * fVar64;
    auVar54._12_4_ = fVar89 * fVar89 + fVar65 * fVar65;
    auVar37._0_4_ = fVar102 * fVar102 + auVar54._0_4_;
    auVar37._4_4_ = fVar104 * fVar104 + auVar54._4_4_;
    auVar37._8_4_ = fVar107 * fVar107 + auVar54._8_4_;
    auVar37._12_4_ = fVar109 * fVar109 + auVar54._12_4_;
    auVar60 = sqrtps(auVar54,auVar37);
    auVar118._8_4_ = fVar96;
    auVar118._12_4_ = param_6;
    auVar60 = divps(auVar118,auVar60);
    fVar103 = auVar60._0_4_;
    fVar106 = auVar60._4_4_;
    fVar108 = auVar60._8_4_;
    fVar113 = auVar60._12_4_;
    fVar73 = param_5 - fVar81;
    fVar77 = param_5 - fVar93;
    fVar79 = param_5 - fVar96;
    param_5 = param_5 - param_6;
    auVar58._0_4_ = auVar57._0_4_ - auVar112._0_4_ * fVar73;
    auVar58._4_4_ = auVar57._4_4_ - auVar112._4_4_ * fVar77;
    auVar58._8_4_ = auVar57._8_4_ - auVar112._8_4_ * fVar79;
    auVar58._12_4_ = auVar57._12_4_ - auVar112._12_4_ * param_5;
    uVar27 = -(uint)(auVar37._0_4_ < fVar81 * fVar81);
    uVar15 = -(uint)(auVar37._4_4_ < fVar93 * fVar93);
    uVar28 = -(uint)(auVar37._8_4_ < fVar96 * fVar96);
    uVar29 = -(uint)(auVar37._12_4_ < param_6 * param_6);
    auVar38._4_4_ = -(uint)(auVar37._4_4_ < _UNK_1506895d4);
    auVar38._0_4_ = -(uint)(auVar37._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar38._8_4_ = -(uint)(auVar37._8_4_ < _UNK_1506895d8);
    auVar38._12_4_ = -(uint)(auVar37._12_4_ < _UNK_1506895dc);
    auVar62._0_4_ = (uint)(fVar59 * fVar103 + fVar97) & uVar27;
    auVar62._4_4_ = (uint)(fVar63 * fVar106 + fVar98) & uVar15;
    auVar62._8_4_ = (uint)(fVar64 * fVar108 + fVar99) & uVar28;
    auVar62._12_4_ = (uint)(fVar65 * fVar113 + fVar101) & uVar29;
    auVar67 = blendvps(auVar62,auVar58,auVar38);
    auVar92._0_4_ = auVar91._0_4_ - auVar100._0_4_ * fVar73;
    auVar92._4_4_ = auVar91._4_4_ - auVar100._4_4_ * fVar77;
    auVar92._8_4_ = auVar91._8_4_ - auVar100._8_4_ * fVar79;
    auVar92._12_4_ = auVar91._12_4_ - auVar100._12_4_ * param_5;
    auVar70._0_4_ = (uint)(fVar84 * fVar103 + fVar43) & uVar27;
    auVar70._4_4_ = (uint)(fVar87 * fVar106 + fVar46) & uVar15;
    auVar70._8_4_ = (uint)(fVar88 * fVar108 + fVar47) & uVar28;
    auVar70._12_4_ = (uint)(fVar89 * fVar113 + fVar48) & uVar29;
    auVar71 = blendvps(auVar70,auVar92,auVar38);
    auVar95._0_4_ = auVar94._0_4_ - fVar73 * auVar105._0_4_;
    auVar95._4_4_ = auVar94._4_4_ - fVar77 * auVar105._4_4_;
    auVar95._8_4_ = auVar94._8_4_ - fVar79 * auVar105._8_4_;
    auVar95._12_4_ = auVar94._12_4_ - param_5 * auVar105._12_4_;
    auVar55._0_4_ = uVar27 & (uint)(fVar103 * fVar102 + fVar31);
    auVar55._4_4_ = uVar15 & (uint)(fVar106 * fVar104 + fVar40);
    auVar55._8_4_ = uVar28 & (uint)(fVar108 * fVar107 + fVar41);
    auVar55._12_4_ = uVar29 & (uint)(fVar113 * fVar109 + fVar42);
    auVar60 = blendvps(auVar55,auVar95,auVar38);
    fVar31 = auVar67._0_4_;
    auVar44._0_4_ = -(uint)((fVar72 != 0.0 && bVar9) && fVar31 != 0.0);
    auVar44._4_4_ = -(uint)((fVar76 != 0.0 && bVar10) && auVar67._4_4_ != 0.0);
    auVar44._8_4_ = -(uint)((fVar78 != 0.0 && bVar11) && auVar67._8_4_ != 0.0);
    auVar44._12_4_ = -(uint)((fVar80 != 0.0 && bVar12) && auVar67._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar44);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar39._0_8_ = auVar67._0_8_;
        auVar39._8_4_ = auVar67._4_4_;
        auVar39._12_4_ = auVar71._4_4_;
        auVar45._0_8_ = auVar60._0_8_;
        auVar45._8_4_ = auVar60._4_4_;
        auVar45._12_4_ = fVar76;
        *(ulonglong *)*pauVar25 = CONCAT44(auVar71._0_4_,fVar31);
        *(ulonglong *)(*pauVar25 + 8) = CONCAT44(fVar72,auVar60._0_4_);
        *(longlong *)pauVar25[1] = auVar39._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar45._8_8_;
        *(float *)pauVar25[2] = auVar67._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar71._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar60._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar78;
        *(float *)pauVar25[3] = auVar67._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar71._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar60._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar80;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar67,1);
          *(undefined8 *)pauVar25[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar67,2);
          *(undefined8 *)pauVar25[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar67,3);
          *(undefined8 *)pauVar25[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar71._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar71,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar71,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar71,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar60._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar60,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar60,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar60,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar72;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar74,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar74,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar74,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_sse4 @ 14034c8d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  byte bVar9;
  undefined4 unaff_EBX;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar58;
  undefined1 auVar56 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar81;
  undefined1 auVar77 [16];
  float fVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  float fVar93;
  float fVar94;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  
  uVar20 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar20 = param_7;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar42 = param_4 - param_5;
    fVar24 = param_5 * param_5;
    pauVar16 = (undefined1 (*) [16])((longlong)param_6 * 0x10 + param_1);
    lVar12 = (longlong)param_6 * 0xc + 0x20;
    uVar14 = 0;
    do {
      fVar57 = *(float *)(*pauVar16 + 0xc);
      auVar31 = *pauVar16;
      fVar58 = *(float *)(pauVar16[1] + 0xc);
      auVar97 = pauVar16[1];
      fVar43 = *(float *)(pauVar16[2] + 0xc);
      auVar49 = pauVar16[2];
      fVar48 = *(float *)(pauVar16[3] + 0xc);
      auVar80 = pauVar16[3];
      auVar36._4_4_ = -(uint)(fVar58 != 0.0);
      auVar36._0_4_ = -(uint)(fVar57 != 0.0);
      auVar36._8_4_ = -(uint)(fVar43 != 0.0);
      auVar36._12_4_ = -(uint)(fVar48 != 0.0);
      iVar10 = movmskps(unaff_EBX,auVar36);
      unaff_EBX = 0;
      if (iVar10 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar12);
        auVar27 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar12);
        pfVar8 = (float *)(param_2 + lVar12);
        auVar44 = insertps(auVar27,auVar36,0x8c);
        auVar35 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar12);
        auVar45 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar12);
        pfVar1 = (float *)(param_3 + lVar12);
        auVar40 = insertps(auVar45,auVar35,0x8c);
        fVar59 = auVar36._0_4_ - param_4 * auVar35._0_4_;
        fVar60 = auVar36._12_4_ - param_4 * auVar35._12_4_;
        fVar61 = auVar27._8_4_ - param_4 * auVar45._8_4_;
        fVar62 = pfVar8[1] - param_4 * pfVar1[1];
        fVar71 = auVar36._4_4_ - param_4 * auVar35._4_4_;
        fVar74 = auVar27._0_4_ - param_4 * auVar45._0_4_;
        fVar75 = auVar27._12_4_ - param_4 * auVar45._12_4_;
        fVar76 = pfVar8[2] - param_4 * pfVar1[2];
        fVar65 = auVar44._0_4_ - param_4 * auVar40._0_4_;
        fVar68 = auVar44._4_4_ - param_4 * auVar40._4_4_;
        fVar69 = *pfVar8 - param_4 * *pfVar1;
        fVar70 = pfVar8[3] - param_4 * pfVar1[3];
        fVar94 = *(float *)*pauVar16 - fVar59;
        fVar99 = *(float *)pauVar16[1] - fVar60;
        fVar100 = *(float *)pauVar16[2] - fVar61;
        fVar101 = *(float *)pauVar16[3] - fVar62;
        fVar87 = *(float *)(*pauVar16 + 4) - fVar71;
        fVar89 = *(float *)(pauVar16[1] + 4) - fVar74;
        fVar90 = *(float *)(pauVar16[2] + 4) - fVar75;
        fVar92 = *(float *)(pauVar16[3] + 4) - fVar76;
        fVar83 = *(float *)(*pauVar16 + 8) - fVar65;
        fVar84 = *(float *)(pauVar16[1] + 8) - fVar68;
        fVar85 = *(float *)(pauVar16[2] + 8) - fVar69;
        fVar86 = *(float *)(pauVar16[3] + 8) - fVar70;
        auVar25._0_4_ = fVar83 * fVar83 + fVar87 * fVar87 + fVar94 * fVar94;
        auVar25._4_4_ = fVar84 * fVar84 + fVar89 * fVar89 + fVar99 * fVar99;
        auVar25._8_4_ = fVar85 * fVar85 + fVar90 * fVar90 + fVar100 * fVar100;
        auVar25._12_4_ = fVar86 * fVar86 + fVar92 * fVar92 + fVar101 * fVar101;
        unaff_XMM8 = sqrtps(unaff_XMM8,auVar25);
        auVar96._4_4_ = param_5;
        auVar96._0_4_ = param_5;
        auVar96._8_4_ = param_5;
        auVar96._12_4_ = param_5;
        auVar77 = divps(auVar96,unaff_XMM8);
        fVar91 = auVar77._0_4_;
        fVar93 = auVar77._4_4_;
        fVar81 = auVar77._8_4_;
        fVar82 = auVar77._12_4_;
        uVar19 = -(uint)(auVar25._0_4_ < fVar24);
        uVar21 = -(uint)(auVar25._4_4_ < fVar24);
        uVar22 = -(uint)(auVar25._8_4_ < fVar24);
        uVar23 = -(uint)(auVar25._12_4_ < fVar24);
        auVar95._0_4_ = (uint)(fVar94 * fVar91 + fVar59) & uVar19;
        auVar95._4_4_ = (uint)(fVar99 * fVar93 + fVar60) & uVar21;
        auVar95._8_4_ = (uint)(fVar100 * fVar81 + fVar61) & uVar22;
        auVar95._12_4_ = (uint)(fVar101 * fVar82 + fVar62) & uVar23;
        auVar26._4_4_ = -(uint)(auVar25._4_4_ < _UNK_1506895d4);
        auVar26._0_4_ = -(uint)(auVar25._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar26._8_4_ = -(uint)(auVar25._8_4_ < _UNK_1506895d8);
        auVar26._12_4_ = -(uint)(auVar25._12_4_ < _UNK_1506895dc);
        auVar77._4_4_ = auVar36._12_4_ - auVar35._12_4_ * fVar42;
        auVar77._0_4_ = auVar36._0_4_ - auVar35._0_4_ * fVar42;
        auVar77._8_4_ = auVar27._8_4_ - auVar45._8_4_ * fVar42;
        auVar77._12_4_ = pfVar8[1] - pfVar1[1] * fVar42;
        auVar96 = blendvps(auVar95,auVar77,auVar26);
        auVar53._0_4_ = auVar36._4_4_ - auVar35._4_4_ * fVar42;
        auVar53._4_4_ = auVar27._0_4_ - auVar45._0_4_ * fVar42;
        auVar53._8_4_ = auVar27._12_4_ - auVar45._12_4_ * fVar42;
        auVar53._12_4_ = pfVar8[2] - pfVar1[2] * fVar42;
        auVar88._0_4_ = (uint)(fVar87 * fVar91 + fVar71) & uVar19;
        auVar88._4_4_ = (uint)(fVar89 * fVar93 + fVar74) & uVar21;
        auVar88._8_4_ = (uint)(fVar90 * fVar81 + fVar75) & uVar22;
        auVar88._12_4_ = (uint)(fVar92 * fVar82 + fVar76) & uVar23;
        auVar77 = blendvps(auVar88,auVar53,auVar26);
        auVar45._0_4_ = auVar44._0_4_ - auVar40._0_4_ * fVar42;
        auVar45._4_4_ = auVar44._4_4_ - auVar40._4_4_ * fVar42;
        auVar45._8_4_ = *pfVar8 - *pfVar1 * fVar42;
        auVar45._12_4_ = pfVar8[3] - pfVar1[3] * fVar42;
        auVar35._0_4_ = uVar19 & (uint)(fVar91 * fVar83 + fVar65);
        auVar35._4_4_ = uVar21 & (uint)(fVar93 * fVar84 + fVar68);
        auVar35._8_4_ = uVar22 & (uint)(fVar81 * fVar85 + fVar69);
        auVar35._12_4_ = uVar23 & (uint)(fVar82 * fVar86 + fVar70);
        auVar36 = blendvps(auVar35,auVar45,auVar26);
        fVar59 = auVar96._0_4_;
        auVar27._0_4_ = -(uint)(fVar59 != 0.0 && fVar57 != 0.0);
        auVar27._4_4_ = -(uint)(auVar96._4_4_ != 0.0 && fVar58 != 0.0);
        auVar27._8_4_ = -(uint)(auVar96._8_4_ != 0.0 && fVar43 != 0.0);
        auVar27._12_4_ = -(uint)(auVar96._12_4_ != 0.0 && fVar48 != 0.0);
        iVar10 = movmskps(iVar10,auVar27);
        unaff_EBX = 0;
        if (iVar10 != 0) {
          bVar9 = (char)((char)iVar10 << 4) >> 4;
          unaff_EBX = CONCAT31((int3)((uint)iVar10 >> 8),bVar9);
          if ((~bVar9 & 0xf) == 0) {
            auVar49._0_8_ = auVar96._0_8_;
            auVar49._8_4_ = auVar96._4_4_;
            auVar49._12_4_ = auVar77._4_4_;
            auVar80._0_8_ = auVar36._0_8_;
            auVar80._8_4_ = auVar36._4_4_;
            auVar80._12_4_ = fVar58;
            auVar97._0_8_ = CONCAT44(auVar77._8_4_,auVar96._8_4_);
            auVar97._8_4_ = auVar96._12_4_;
            auVar97._12_4_ = auVar77._12_4_;
            *(float *)*pauVar16 = fVar59;
            *(int *)(*pauVar16 + 4) = auVar77._0_4_;
            *(int *)(*pauVar16 + 8) = auVar36._0_4_;
            *(float *)(*pauVar16 + 0xc) = fVar57;
            *(longlong *)pauVar16[1] = auVar49._8_8_;
            *(longlong *)(pauVar16[1] + 8) = auVar80._8_8_;
            *(undefined8 *)pauVar16[2] = auVar97._0_8_;
            *(int *)(pauVar16[2] + 8) = auVar36._8_4_;
            *(float *)(pauVar16[2] + 0xc) = fVar43;
            *(longlong *)pauVar16[3] = auVar97._8_8_;
            *(int *)(pauVar16[3] + 8) = auVar36._12_4_;
            *(float *)(pauVar16[3] + 0xc) = fVar48;
          }
          else {
            if ((bVar9 & 1) != 0) {
              *(float *)*pauVar16 = fVar59;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar96,1);
              *(undefined8 *)pauVar16[1] = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar96,2);
              *(undefined8 *)pauVar16[2] = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar96,3);
              *(undefined8 *)pauVar16[3] = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 4) = auVar77._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar77,1);
              *(undefined8 *)(pauVar16[1] + 4) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar77,2);
              *(undefined8 *)(pauVar16[2] + 4) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar77,3);
              *(undefined8 *)(pauVar16[3] + 4) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 8) = auVar36._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar36,1);
              *(undefined8 *)(pauVar16[1] + 8) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar36,2);
              *(undefined8 *)(pauVar16[2] + 8) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar36,3);
              *(undefined8 *)(pauVar16[3] + 8) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              uVar3 = extractps(auVar31,3);
              *(undefined8 *)(*pauVar16 + 0xc) = uVar3;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar97,3);
              *(undefined8 *)(pauVar16[1] + 0xc) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar49,3);
              *(undefined8 *)(pauVar16[2] + 0xc) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar80,3);
              *(undefined8 *)(pauVar16[3] + 0xc) = uVar3;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      pauVar16 = pauVar16 + 4;
      lVar12 = lVar12 + 0x30;
    } while (uVar14 < (uVar20 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar14) {
      return;
    }
  }
  uVar20 = (uint)uVar14;
  bVar4 = (int)(uVar20 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar31._0_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar20 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar31._4_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar20 | _UNK_150631e08) < (int)param_7;
  auVar31._8_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar20 | _UNK_150631e0c) < (int)param_7;
  auVar31._12_4_ = -(uint)bVar7;
  param_6 = param_6 + uVar20;
  lVar12 = (longlong)param_6;
  pfVar8 = (float *)(param_1 + lVar12 * 0x10);
  iVar10 = movmskps((int)(lVar12 * 0x10),auVar31);
  if (iVar10 == 0xf) {
    auVar36 = *(undefined1 (*) [16])(pfVar8 + 8);
    auVar40._0_8_ = CONCAT44(pfVar8[6],pfVar8[2]);
    auVar40._8_4_ = pfVar8[3];
    auVar40._12_4_ = pfVar8[7];
    auVar51._0_8_ = auVar36._0_8_;
    auVar51._8_4_ = auVar36._4_4_;
    auVar51._12_4_ = pfVar8[0xd];
    auVar50._8_8_ = auVar51._8_8_;
    auVar46._12_4_ = pfVar8[0xc];
    auVar46._8_4_ = auVar36._0_4_;
    auVar55._0_8_ = CONCAT44(pfVar8[0xe],auVar36._8_4_);
    auVar55._8_4_ = auVar36._12_4_;
    auVar55._12_4_ = pfVar8[0xf];
    auVar46._4_4_ = pfVar8[4];
    auVar46._0_4_ = *pfVar8;
    auVar50._4_4_ = pfVar8[5];
    auVar50._0_4_ = pfVar8[1];
    auVar44._8_8_ = auVar55._0_8_;
    auVar44._0_8_ = auVar40._0_8_;
    auVar54._8_8_ = auVar55._8_8_;
    auVar54._0_8_ = auVar40._8_8_;
  }
  else {
    auVar28._0_4_ = ___xmm_00000030000000200000001000000000 & auVar31._0_4_;
    auVar28._4_4_ = _UNK_150b511c4 & auVar31._4_4_;
    auVar28._8_4_ = _UNK_150b511c8 & auVar31._8_4_;
    auVar28._12_4_ = _UNK_150b511cc & auVar31._12_4_;
    lVar15 = extractps(auVar28,1);
    lVar17 = extractps(auVar28,2);
    lVar11 = extractps(auVar28,3);
    auVar36 = insertps(ZEXT416((uint)*pfVar8),*(undefined4 *)((longlong)pfVar8 + lVar15),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + lVar17),0x20);
    auVar46 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + lVar11),0x30);
    auVar36 = ___xmm_00000034000000240000001400000004 & auVar31;
    auVar49 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar36._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._4_4_),0x10);
    auVar49 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._8_4_),0x20);
    auVar50 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._12_4_),0x30);
    auVar36 = ___xmm_00000038000000280000001800000008 & auVar31;
    auVar49 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar36._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._4_4_),0x10);
    auVar49 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._8_4_),0x20);
    auVar44 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._12_4_),0x30);
    auVar36 = ___xmm_0000003c0000002c0000001c0000000c & auVar31;
    uVar20 = auVar36._4_4_;
    auVar49 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar36._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)uVar20),0x10);
    auVar49 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._8_4_),0x20);
    auVar54 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._12_4_),0x30);
  }
  fVar24 = auVar54._0_4_;
  fVar42 = auVar54._4_4_;
  fVar57 = auVar54._8_4_;
  fVar58 = auVar54._12_4_;
  auVar29._0_4_ = -(uint)(fVar24 != 0.0 && bVar4);
  auVar29._4_4_ = -(uint)(fVar42 != 0.0 && bVar5);
  auVar29._8_4_ = -(uint)(fVar57 != 0.0 && bVar6);
  auVar29._12_4_ = -(uint)(fVar58 != 0.0 && bVar7);
  iVar13 = movmskps(uVar20,auVar29);
  if (iVar13 != 0) {
    pauVar16 = (undefined1 (*) [16])(param_2 + lVar12 * 0xc);
    if ((~((char)((char)iVar10 << 4) >> 4) & 0xfU) == 0) {
      auVar36 = *pauVar16;
      auVar49 = pauVar16[1];
      auVar63._0_4_ = auVar36._0_4_;
      auVar80 = insertps(auVar49,auVar36,0x8c);
      auVar63._4_4_ = auVar36._12_4_;
      auVar63._8_4_ = auVar49._8_4_;
      auVar63._12_4_ = *(undefined4 *)(pauVar16[2] + 4);
      auVar66._4_4_ = auVar49._0_4_;
      auVar66._0_4_ = auVar36._4_4_;
      auVar66._8_4_ = auVar49._12_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar16[2] + 8);
      auVar72._0_8_ = auVar80._0_8_;
      auVar72._8_4_ = *(undefined4 *)pauVar16[2];
      auVar72._12_4_ = *(undefined4 *)(pauVar16[2] + 0xc);
      auVar36 = *(undefined1 (*) [16])(param_3 + lVar12 * 0xc);
      auVar49 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar12 * 0xc);
      puVar2 = (undefined4 *)(param_3 + 0x20 + lVar12 * 0xc);
      auVar78._0_4_ = auVar36._0_4_;
      auVar80 = insertps(auVar49,auVar36,0x8c);
      auVar78._4_4_ = auVar36._12_4_;
      auVar78._8_4_ = auVar49._8_4_;
      auVar78._12_4_ = puVar2[1];
      auVar37._4_4_ = auVar49._0_4_;
      auVar37._0_4_ = auVar36._4_4_;
      auVar37._8_4_ = auVar49._12_4_;
      auVar37._12_4_ = puVar2[2];
      auVar56._0_8_ = auVar80._0_8_;
      auVar56._8_4_ = *puVar2;
      auVar56._12_4_ = puVar2[3];
    }
    else {
      auVar30._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar31._0_4_;
      auVar30._4_4_ = _UNK_150b50da4 & auVar31._4_4_;
      auVar30._8_4_ = _UNK_150b50da8 & auVar31._8_4_;
      auVar30._12_4_ = _UNK_150b50dac & auVar31._12_4_;
      lVar15 = extractps(auVar30,1);
      lVar17 = extractps(auVar30,2);
      lVar18 = extractps(auVar30,3);
      auVar36 = insertps(ZEXT416(*(uint *)*pauVar16),*(undefined4 *)(*pauVar16 + lVar15),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(*pauVar16 + lVar17),0x20);
      auVar63 = insertps(auVar36,*(undefined4 *)(*pauVar16 + lVar18),0x30);
      auVar36 = ___xmm_000000280000001c0000001000000004 & auVar31;
      auVar49 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar36._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar36._4_4_),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar36._8_4_),0x20);
      auVar66 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar36._12_4_),0x30);
      auVar31 = ___xmm_0000002c000000200000001400000008 & auVar31;
      auVar49 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar31._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar31._4_4_),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar31._8_4_),0x20);
      auVar72 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar31._12_4_),0x30);
      lVar11 = param_3 + lVar12 * 0xc;
      auVar49 = insertps(ZEXT416(*(uint *)(param_3 + lVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar11)
                         ,0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(lVar17 + lVar11),0x20);
      auVar78 = insertps(auVar49,*(undefined4 *)(lVar18 + lVar11),0x30);
      auVar49 = insertps(ZEXT416(*(uint *)((ulonglong)auVar36._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar36._4_4_ + lVar11),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)((ulonglong)auVar36._8_4_ + lVar11),0x20);
      auVar37 = insertps(auVar49,*(undefined4 *)((ulonglong)auVar36._12_4_ + lVar11),0x30);
      auVar36 = insertps(ZEXT416(*(uint *)((ulonglong)auVar31._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar31._4_4_ + lVar11),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar31._8_4_ + lVar11),0x20);
      auVar56 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar31._12_4_ + lVar11),0x30);
    }
    fVar85 = auVar63._0_4_ - param_4 * auVar78._0_4_;
    fVar86 = auVar63._4_4_ - param_4 * auVar78._4_4_;
    fVar87 = auVar63._8_4_ - param_4 * auVar78._8_4_;
    fVar89 = auVar63._12_4_ - param_4 * auVar78._12_4_;
    fVar75 = auVar66._0_4_ - param_4 * auVar37._0_4_;
    fVar76 = auVar66._4_4_ - param_4 * auVar37._4_4_;
    fVar91 = auVar66._8_4_ - param_4 * auVar37._8_4_;
    fVar93 = auVar66._12_4_ - param_4 * auVar37._12_4_;
    fVar69 = auVar72._0_4_ - param_4 * auVar56._0_4_;
    fVar70 = auVar72._4_4_ - param_4 * auVar56._4_4_;
    fVar71 = auVar72._8_4_ - param_4 * auVar56._8_4_;
    fVar74 = auVar72._12_4_ - param_4 * auVar56._12_4_;
    fVar43 = auVar46._0_4_ - fVar85;
    fVar48 = auVar46._4_4_ - fVar86;
    fVar59 = auVar46._8_4_ - fVar87;
    fVar60 = auVar46._12_4_ - fVar89;
    fVar61 = auVar50._0_4_ - fVar75;
    fVar62 = auVar50._4_4_ - fVar76;
    fVar65 = auVar50._8_4_ - fVar91;
    fVar68 = auVar50._12_4_ - fVar93;
    auVar41._0_4_ = auVar44._0_4_ - fVar69;
    auVar41._4_4_ = auVar44._4_4_ - fVar70;
    auVar41._8_4_ = auVar44._8_4_ - fVar71;
    auVar41._12_4_ = auVar44._12_4_ - fVar74;
    auVar32._0_4_ = auVar41._0_4_ * auVar41._0_4_ + fVar61 * fVar61 + fVar43 * fVar43;
    auVar32._4_4_ = auVar41._4_4_ * auVar41._4_4_ + fVar62 * fVar62 + fVar48 * fVar48;
    auVar32._8_4_ = auVar41._8_4_ * auVar41._8_4_ + fVar65 * fVar65 + fVar59 * fVar59;
    auVar32._12_4_ = auVar41._12_4_ * auVar41._12_4_ + fVar68 * fVar68 + fVar60 * fVar60;
    auVar98._4_4_ = param_5;
    auVar98._0_4_ = param_5;
    auVar98._8_4_ = param_5;
    auVar98._12_4_ = param_5;
    auVar36 = sqrtps(auVar41,auVar32);
    auVar36 = divps(auVar98,auVar36);
    fVar81 = auVar36._0_4_;
    fVar82 = auVar36._4_4_;
    fVar83 = auVar36._8_4_;
    fVar84 = auVar36._12_4_;
    param_4 = param_4 - param_5;
    auVar64._0_4_ = auVar63._0_4_ - auVar78._0_4_ * param_4;
    auVar64._4_4_ = auVar63._4_4_ - auVar78._4_4_ * param_4;
    auVar64._8_4_ = auVar63._8_4_ - auVar78._8_4_ * param_4;
    auVar64._12_4_ = auVar63._12_4_ - auVar78._12_4_ * param_4;
    param_5 = param_5 * param_5;
    uVar20 = -(uint)(auVar32._0_4_ < param_5);
    uVar19 = -(uint)(auVar32._4_4_ < param_5);
    uVar21 = -(uint)(auVar32._8_4_ < param_5);
    uVar22 = -(uint)(auVar32._12_4_ < param_5);
    auVar33._4_4_ = -(uint)(auVar32._4_4_ < _UNK_1506895d4);
    auVar33._0_4_ = -(uint)(auVar32._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar33._8_4_ = -(uint)(auVar32._8_4_ < _UNK_1506895d8);
    auVar33._12_4_ = -(uint)(auVar32._12_4_ < _UNK_1506895dc);
    auVar47._0_4_ = (uint)(fVar43 * fVar81 + fVar85) & uVar20;
    auVar47._4_4_ = (uint)(fVar48 * fVar82 + fVar86) & uVar19;
    auVar47._8_4_ = (uint)(fVar59 * fVar83 + fVar87) & uVar21;
    auVar47._12_4_ = (uint)(fVar60 * fVar84 + fVar89) & uVar22;
    auVar36 = blendvps(auVar47,auVar64,auVar33);
    auVar67._0_4_ = auVar66._0_4_ - auVar37._0_4_ * param_4;
    auVar67._4_4_ = auVar66._4_4_ - auVar37._4_4_ * param_4;
    auVar67._8_4_ = auVar66._8_4_ - auVar37._8_4_ * param_4;
    auVar67._12_4_ = auVar66._12_4_ - auVar37._12_4_ * param_4;
    auVar52._0_4_ = (uint)(fVar61 * fVar81 + fVar75) & uVar20;
    auVar52._4_4_ = (uint)(fVar62 * fVar82 + fVar76) & uVar19;
    auVar52._8_4_ = (uint)(fVar65 * fVar83 + fVar91) & uVar21;
    auVar52._12_4_ = (uint)(fVar68 * fVar84 + fVar93) & uVar22;
    auVar49 = blendvps(auVar52,auVar67,auVar33);
    auVar73._0_4_ = auVar72._0_4_ - param_4 * auVar56._0_4_;
    auVar73._4_4_ = auVar72._4_4_ - param_4 * auVar56._4_4_;
    auVar73._8_4_ = auVar72._8_4_ - param_4 * auVar56._8_4_;
    auVar73._12_4_ = auVar72._12_4_ - param_4 * auVar56._12_4_;
    auVar79._0_4_ = uVar20 & (uint)(fVar81 * auVar41._0_4_ + fVar69);
    auVar79._4_4_ = uVar19 & (uint)(fVar82 * auVar41._4_4_ + fVar70);
    auVar79._8_4_ = uVar21 & (uint)(fVar83 * auVar41._8_4_ + fVar71);
    auVar79._12_4_ = uVar22 & (uint)(fVar84 * auVar41._12_4_ + fVar74);
    auVar80 = blendvps(auVar79,auVar73,auVar33);
    fVar43 = auVar36._0_4_;
    auVar38._0_4_ = -(uint)((fVar24 != 0.0 && bVar4) && fVar43 != 0.0);
    auVar38._4_4_ = -(uint)((fVar42 != 0.0 && bVar5) && auVar36._4_4_ != 0.0);
    auVar38._8_4_ = -(uint)((fVar57 != 0.0 && bVar6) && auVar36._8_4_ != 0.0);
    auVar38._12_4_ = -(uint)((fVar58 != 0.0 && bVar7) && auVar36._12_4_ != 0.0);
    iVar10 = movmskps(param_6 * 3,auVar38);
    if (iVar10 != 0) {
      bVar9 = (char)((char)iVar10 << 4) >> 4;
      if ((~bVar9 & 0xf) == 0) {
        auVar34._0_8_ = auVar36._0_8_;
        auVar34._8_4_ = auVar36._4_4_;
        auVar34._12_4_ = auVar49._4_4_;
        auVar39._0_8_ = auVar80._0_8_;
        auVar39._8_4_ = auVar80._4_4_;
        auVar39._12_4_ = fVar42;
        *(ulonglong *)pfVar8 = CONCAT44(auVar49._0_4_,fVar43);
        *(ulonglong *)(pfVar8 + 2) = CONCAT44(fVar24,auVar80._0_4_);
        *(longlong *)(pfVar8 + 4) = auVar34._8_8_;
        *(longlong *)(pfVar8 + 6) = auVar39._8_8_;
        pfVar8[8] = auVar36._8_4_;
        pfVar8[9] = auVar49._8_4_;
        pfVar8[10] = auVar80._8_4_;
        pfVar8[0xb] = fVar57;
        pfVar8[0xc] = auVar36._12_4_;
        pfVar8[0xd] = auVar49._12_4_;
        pfVar8[0xe] = auVar80._12_4_;
        pfVar8[0xf] = fVar58;
      }
      else {
        if ((bVar9 & 1) != 0) {
          *pfVar8 = fVar43;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar36,1);
          *(undefined8 *)(pfVar8 + 4) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar36,2);
          *(undefined8 *)(pfVar8 + 8) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar36,3);
          *(undefined8 *)(pfVar8 + 0xc) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[1] = auVar49._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar49,1);
          *(undefined8 *)(pfVar8 + 5) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar49,2);
          *(undefined8 *)(pfVar8 + 9) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar49,3);
          *(undefined8 *)(pfVar8 + 0xd) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[2] = auVar80._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar80,1);
          *(undefined8 *)(pfVar8 + 6) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar80,2);
          *(undefined8 *)(pfVar8 + 10) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar80,3);
          *(undefined8 *)(pfVar8 + 0xe) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[3] = fVar24;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar54,1);
          *(undefined8 *)(pfVar8 + 7) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar54,2);
          *(undefined8 *)(pfVar8 + 0xb) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar54,3);
          *(undefined8 *)(pfVar8 + 0xf) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_sse4 @ 14034d470

void ApplyLegacySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_sse4
               (void)

{
  ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4
            ();
  return;
}

// ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4 @ 14034d4e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined3 uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  byte bVar18;
  int unaff_EBP;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar60;
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  uint uVar90;
  float fVar91;
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar93 [16];
  float fVar98;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar104;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar111;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar119 [16];
  
  uVar28 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar28 = param_11;
  }
  if ((int)(uVar28 & 0xfffffffc) < 1) {
    uVar23 = 0;
  }
  else {
    lVar19 = (longlong)param_10;
    uVar17 = lVar19 * 3;
    lVar20 = lVar19 * 0x10 + param_1;
    lVar19 = lVar19 * 0xc + 0x20;
    uVar27 = 0;
    uVar23 = 0;
    do {
      pauVar26 = (undefined1 (*) [16])(lVar20 + uVar27 * 4);
      fVar56 = *(float *)(*pauVar26 + 0xc);
      auVar76 = *pauVar26;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar27 * 4);
      fVar60 = *(float *)(*pauVar5 + 0xc);
      auVar45 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar27 * 4);
      fVar61 = *(float *)(*pauVar6 + 0xc);
      auVar66 = *pauVar6;
      pauVar7 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar27 * 4);
      fVar62 = *(float *)(*pauVar7 + 0xc);
      auVar69 = *pauVar7;
      auVar52._4_4_ = -(uint)(fVar60 != 0.0);
      auVar52._0_4_ = -(uint)(fVar56 != 0.0);
      auVar52._8_4_ = -(uint)(fVar61 != 0.0);
      auVar52._12_4_ = -(uint)(fVar62 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar52);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar52 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar19);
        auVar33 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar19);
        pfVar1 = (float *)(param_2 + lVar19);
        auVar63 = insertps(auVar33,auVar52,0x8c);
        auVar51 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar19);
        auVar64 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar19);
        pfVar2 = (float *)(param_3 + lVar19);
        auVar82 = insertps(auVar64,auVar51,0x8c);
        uVar17 = uVar27 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar92 = *pfVar3 * param_7 + param_6;
        fVar94 = pfVar3[1] * param_7 + param_6;
        fVar96 = pfVar3[2] * param_7 + param_6;
        fVar97 = pfVar3[3] * param_7 + param_6;
        pfVar3 = (float *)(param_5 + uVar17);
        fVar44 = *pfVar3 * param_9 + param_8;
        fVar48 = pfVar3[1] * param_9 + param_8;
        auVar105._4_4_ = fVar48;
        auVar105._0_4_ = fVar44;
        fVar49 = pfVar3[2] * param_9 + param_8;
        fVar50 = pfVar3[3] * param_9 + param_8;
        fVar32 = fVar92 + fVar44;
        fVar41 = fVar94 + fVar48;
        fVar42 = fVar96 + fVar49;
        fVar43 = fVar97 + fVar50;
        fVar70 = auVar52._0_4_ - auVar51._0_4_ * fVar32;
        fVar77 = auVar52._12_4_ - auVar51._12_4_ * fVar41;
        fVar78 = auVar33._8_4_ - auVar64._8_4_ * fVar42;
        fVar79 = pfVar1[1] - pfVar2[1] * fVar43;
        fVar85 = auVar52._4_4_ - auVar51._4_4_ * fVar32;
        fVar86 = auVar33._0_4_ - auVar64._0_4_ * fVar41;
        fVar88 = auVar33._12_4_ - auVar64._12_4_ * fVar42;
        fVar89 = pfVar1[2] - pfVar2[2] * fVar43;
        fVar98 = auVar63._0_4_ - fVar32 * auVar82._0_4_;
        fVar101 = auVar63._4_4_ - fVar41 * auVar82._4_4_;
        fVar102 = *pfVar1 - fVar42 * *pfVar2;
        fVar103 = pfVar1[3] - fVar43 * pfVar2[3];
        fVar111 = *(float *)*pauVar26 - fVar70;
        fVar116 = *(float *)*pauVar5 - fVar77;
        fVar117 = *(float *)*pauVar6 - fVar78;
        fVar118 = *(float *)*pauVar7 - fVar79;
        fVar104 = *(float *)(*pauVar26 + 4) - fVar85;
        fVar108 = *(float *)(*pauVar5 + 4) - fVar86;
        fVar109 = *(float *)(*pauVar6 + 4) - fVar88;
        fVar110 = *(float *)(*pauVar7 + 4) - fVar89;
        fVar32 = *(float *)(*pauVar26 + 8) - fVar98;
        fVar41 = *(float *)(*pauVar5 + 8) - fVar101;
        fVar42 = *(float *)(*pauVar6 + 8) - fVar102;
        fVar43 = *(float *)(*pauVar7 + 8) - fVar103;
        auVar72._0_4_ = fVar32 * fVar32 + fVar104 * fVar104 + fVar111 * fVar111;
        auVar72._4_4_ = fVar41 * fVar41 + fVar108 * fVar108 + fVar116 * fVar116;
        auVar72._8_4_ = fVar42 * fVar42 + fVar109 * fVar109 + fVar117 * fVar117;
        auVar72._12_4_ = fVar43 * fVar43 + fVar110 * fVar110 + fVar118 * fVar118;
        unaff_XMM15 = sqrtps(unaff_XMM15,auVar72);
        auVar105._8_4_ = fVar49;
        auVar105._12_4_ = fVar50;
        auVar106 = divps(auVar105,unaff_XMM15);
        fVar81 = auVar106._0_4_;
        fVar87 = auVar106._4_4_;
        fVar91 = auVar106._8_4_;
        fVar95 = auVar106._12_4_;
        auVar113._0_4_ = auVar52._0_4_ - auVar51._0_4_ * fVar92;
        auVar113._4_4_ = auVar52._12_4_ - auVar51._12_4_ * fVar94;
        auVar113._8_4_ = auVar33._8_4_ - auVar64._8_4_ * fVar96;
        auVar113._12_4_ = pfVar1[1] - pfVar2[1] * fVar97;
        uVar15 = -(uint)(auVar72._0_4_ < fVar44 * fVar44);
        uVar29 = -(uint)(auVar72._4_4_ < fVar48 * fVar48);
        uVar30 = -(uint)(auVar72._8_4_ < fVar49 * fVar49);
        uVar31 = -(uint)(auVar72._12_4_ < fVar50 * fVar50);
        auVar112._0_4_ = (uint)(fVar111 * fVar81 + fVar70) & uVar15;
        auVar112._4_4_ = (uint)(fVar116 * fVar87 + fVar77) & uVar29;
        auVar112._8_4_ = (uint)(fVar117 * fVar91 + fVar78) & uVar30;
        auVar112._12_4_ = (uint)(fVar118 * fVar95 + fVar79) & uVar31;
        auVar106._4_4_ = -(uint)(auVar72._4_4_ < _UNK_1506895d4);
        auVar106._0_4_ = -(uint)(auVar72._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar106._8_4_ = -(uint)(auVar72._8_4_ < _UNK_1506895d8);
        auVar106._12_4_ = -(uint)(auVar72._12_4_ < _UNK_1506895dc);
        auVar113 = blendvps(auVar112,auVar113,auVar106);
        auVar65._0_4_ = auVar52._4_4_ - auVar51._4_4_ * fVar92;
        auVar65._4_4_ = auVar33._0_4_ - auVar64._0_4_ * fVar94;
        auVar65._8_4_ = auVar33._12_4_ - auVar64._12_4_ * fVar96;
        auVar65._12_4_ = pfVar1[2] - pfVar2[2] * fVar97;
        auVar71._0_4_ = (uint)(fVar104 * fVar81 + fVar85) & uVar15;
        auVar71._4_4_ = (uint)(fVar108 * fVar87 + fVar86) & uVar29;
        auVar71._8_4_ = (uint)(fVar109 * fVar91 + fVar88) & uVar30;
        auVar71._12_4_ = (uint)(fVar110 * fVar95 + fVar89) & uVar31;
        auVar72 = blendvps(auVar71,auVar65,auVar106);
        auVar64._0_4_ = auVar63._0_4_ - fVar92 * auVar82._0_4_;
        auVar64._4_4_ = auVar63._4_4_ - fVar94 * auVar82._4_4_;
        auVar64._8_4_ = *pfVar1 - fVar96 * *pfVar2;
        auVar64._12_4_ = pfVar1[3] - fVar97 * pfVar2[3];
        auVar51._0_4_ = uVar15 & (uint)(fVar81 * fVar32 + fVar98);
        auVar51._4_4_ = uVar29 & (uint)(fVar87 * fVar41 + fVar101);
        auVar51._8_4_ = uVar30 & (uint)(fVar91 * fVar42 + fVar102);
        auVar51._12_4_ = uVar31 & (uint)(fVar95 * fVar43 + fVar103);
        auVar52 = blendvps(auVar51,auVar64,auVar106);
        fVar32 = auVar113._0_4_;
        auVar33._0_4_ = -(uint)(fVar32 != 0.0 && fVar56 != 0.0);
        auVar33._4_4_ = -(uint)(auVar113._4_4_ != 0.0 && fVar60 != 0.0);
        auVar33._8_4_ = -(uint)(auVar113._8_4_ != 0.0 && fVar61 != 0.0);
        auVar33._12_4_ = -(uint)(auVar113._12_4_ != 0.0 && fVar62 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar33);
        if (unaff_EBP != 0) {
          uVar14 = (undefined3)((uint)unaff_EBP >> 8);
          bVar18 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar14,bVar18);
          uVar17 = (ulonglong)CONCAT31(uVar14,~bVar18);
          if ((~bVar18 & 0xf) == 0) {
            auVar66._0_8_ = auVar113._0_8_;
            auVar66._8_4_ = auVar113._4_4_;
            auVar66._12_4_ = auVar72._4_4_;
            auVar69._0_8_ = auVar52._0_8_;
            auVar69._8_4_ = auVar52._4_4_;
            auVar69._12_4_ = fVar60;
            auVar76._0_8_ = CONCAT44(auVar72._8_4_,auVar113._8_4_);
            auVar76._8_4_ = auVar113._12_4_;
            auVar76._12_4_ = auVar72._12_4_;
            puVar4 = (undefined8 *)(lVar20 + uVar27 * 4);
            *puVar4 = CONCAT44(auVar72._0_4_,fVar32);
            puVar4[1] = CONCAT44(fVar56,auVar52._0_4_);
            puVar4 = (undefined8 *)(lVar20 + 0x10 + uVar27 * 4);
            *puVar4 = auVar66._8_8_;
            puVar4[1] = auVar69._8_8_;
            puVar4 = (undefined8 *)(lVar20 + 0x20 + uVar27 * 4);
            *puVar4 = auVar76._0_8_;
            *(int *)(puVar4 + 1) = auVar52._8_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar61;
            puVar4 = (undefined8 *)(lVar20 + 0x30 + uVar27 * 4);
            *puVar4 = auVar76._8_8_;
            *(int *)(puVar4 + 1) = auVar52._12_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar62;
          }
          else {
            if ((bVar18 & 1) != 0) {
              *(float *)(lVar20 + uVar27 * 4) = fVar32;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar113,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar113,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar113,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar27 * 4) = auVar72._0_4_;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar72,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar72,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar72,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar27 * 4) = auVar52._0_4_;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar52,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar52,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar52,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 1) != 0) {
              uVar9 = extractps(auVar76,3);
              *(undefined8 *)(lVar20 + 0xc + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar45,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar66,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar69,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar27 * 4) = uVar9;
            }
          }
        }
      }
      uVar23 = uVar23 + 4;
      uVar27 = uVar27 + 0x10;
      lVar19 = lVar19 + 0x30;
    } while (uVar23 < (uVar28 & 0xfffffffc));
  }
  uVar28 = (uint)uVar23;
  if ((int)uVar28 < (int)param_11) {
    auVar45 = ZEXT416(param_11);
    bVar10 = (int)(uVar28 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
    uVar29 = -(uint)bVar10;
    bVar11 = (int)(uVar28 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
    uVar30 = -(uint)bVar11;
    bVar12 = (int)(uVar28 | _UNK_150631e08) < (int)param_11;
    uVar31 = -(uint)bVar12;
    bVar13 = (int)(uVar28 | _UNK_150631e0c) < (int)param_11;
    uVar90 = -(uint)bVar13;
    lVar19 = (longlong)(int)(param_10 + uVar28);
    uVar23 = lVar19 * 0x10;
    pauVar26 = (undefined1 (*) [16])(param_1 + uVar23);
    auVar63._4_4_ = uVar30;
    auVar63._0_4_ = uVar29;
    auVar63._8_4_ = uVar31;
    auVar63._12_4_ = uVar90;
    uVar15 = movmskps(unaff_EBP,auVar63);
    if (uVar15 == 0xf) {
      auVar66 = *pauVar26;
      auVar45 = pauVar26[1];
      auVar69 = pauVar26[2];
      auVar53._8_4_ = auVar66._4_4_;
      auVar53._0_8_ = auVar66._0_8_;
      auVar53._12_4_ = auVar45._4_4_;
      auVar82._0_8_ = CONCAT44(auVar45._8_4_,auVar66._8_4_);
      auVar82._8_4_ = auVar66._12_4_;
      auVar82._12_4_ = auVar45._12_4_;
      auVar74._8_4_ = auVar69._4_4_;
      auVar74._0_8_ = auVar69._0_8_;
      auVar74._12_4_ = *(undefined4 *)(pauVar26[3] + 4);
      auVar73._8_8_ = auVar74._8_8_;
      auVar67._12_4_ = *(undefined4 *)pauVar26[3];
      auVar67._8_4_ = auVar69._0_4_;
      auVar58._0_8_ = CONCAT44(*(undefined4 *)(pauVar26[3] + 8),auVar69._8_4_);
      auVar58._8_4_ = auVar69._12_4_;
      auVar58._12_4_ = *(undefined4 *)(pauVar26[3] + 0xc);
      auVar67._4_4_ = auVar45._0_4_;
      auVar67._0_4_ = auVar66._0_4_;
      auVar73._0_8_ = auVar53._8_8_;
      auVar80._8_8_ = auVar58._0_8_;
      auVar80._0_8_ = auVar82._0_8_;
      auVar57._8_8_ = auVar58._8_8_;
      auVar57._0_8_ = auVar82._8_8_;
    }
    else {
      auVar34._0_4_ = ___xmm_00000030000000200000001000000000 & uVar29;
      auVar34._4_4_ = _UNK_150b511c4 & uVar30;
      auVar34._8_4_ = _UNK_150b511c8 & uVar31;
      auVar34._12_4_ = _UNK_150b511cc & uVar90;
      lVar20 = extractps(auVar34,1);
      lVar24 = extractps(auVar34,2);
      lVar21 = extractps(auVar34,3);
      auVar66 = insertps(ZEXT416(*(uint *)*pauVar26),*(undefined4 *)(*pauVar26 + lVar20),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + lVar24),0x20);
      auVar67 = insertps(auVar66,*(undefined4 *)(*pauVar26 + lVar21),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar26 +
                                          (___xmm_00000034000000240000001400000004 & uVar29))),
                         *(undefined4 *)(*pauVar26 + (_UNK_150b511d4 & uVar30)),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511d8 & uVar31)),0x20);
      auVar73 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511dc & uVar90)),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar26 +
                                          (___xmm_00000038000000280000001800000008 & uVar29))),
                         *(undefined4 *)(*pauVar26 + (_UNK_150b511e4 & uVar30)),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511e8 & uVar31)),0x20);
      auVar80 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511ec & uVar90)),0x30);
      uVar23 = (ulonglong)(_UNK_150b511f4 & uVar30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar26 +
                                          (___xmm_0000003c0000002c0000001c0000000c & uVar29))),
                         *(undefined4 *)(*pauVar26 + uVar23),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511f8 & uVar31)),0x20);
      auVar57 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511fc & uVar90)),0x30);
    }
    fVar56 = auVar57._0_4_;
    fVar60 = auVar57._4_4_;
    fVar61 = auVar57._8_4_;
    fVar62 = auVar57._12_4_;
    auVar35._0_4_ = -(uint)(fVar56 != 0.0 && bVar10);
    auVar35._4_4_ = -(uint)(fVar60 != 0.0 && bVar11);
    auVar35._8_4_ = -(uint)(fVar61 != 0.0 && bVar12);
    auVar35._12_4_ = -(uint)(fVar62 != 0.0 && bVar13);
    iVar16 = movmskps((int)uVar23,auVar35);
    if (iVar16 != 0) {
      bVar18 = ~((char)((char)uVar15 << 4) >> 4);
      pauVar5 = (undefined1 (*) [16])(param_2 + lVar19 * 0xc);
      if ((bVar18 & 0xf) == 0) {
        auVar66 = *pauVar5;
        auVar69 = pauVar5[1];
        auVar93._0_4_ = auVar66._0_4_;
        auVar76 = insertps(auVar69,auVar66,0x8c);
        auVar93._4_4_ = auVar66._12_4_;
        auVar93._8_4_ = auVar69._8_4_;
        auVar93._12_4_ = *(undefined4 *)(pauVar5[2] + 4);
        auVar99._4_4_ = auVar69._0_4_;
        auVar99._0_4_ = auVar66._4_4_;
        auVar99._8_4_ = auVar69._12_4_;
        auVar99._12_4_ = *(undefined4 *)(pauVar5[2] + 8);
        auVar114._0_8_ = auVar76._0_8_;
        auVar114._8_4_ = *(undefined4 *)pauVar5[2];
        auVar114._12_4_ = *(undefined4 *)(pauVar5[2] + 0xc);
        auVar66 = *(undefined1 (*) [16])(param_3 + lVar19 * 0xc);
        auVar69 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar19 * 0xc);
        puVar8 = (undefined4 *)(param_3 + 0x20 + lVar19 * 0xc);
        auVar119._0_4_ = auVar66._0_4_;
        auVar45._0_8_ = auVar69._8_8_;
        auVar45._8_4_ = puVar8[1];
        auVar45._12_4_ = puVar8[2];
        auVar76 = insertps(auVar69,auVar66,0x8c);
        auVar119._4_4_ = auVar66._12_4_;
        auVar119._8_4_ = auVar69._8_4_;
        auVar119._12_4_ = puVar8[1];
        auVar107._4_4_ = auVar69._0_4_;
        auVar107._0_4_ = auVar66._4_4_;
        auVar107._8_4_ = auVar69._12_4_;
        auVar107._12_4_ = puVar8[2];
        auVar83._0_8_ = auVar76._0_8_;
        auVar83._8_4_ = *puVar8;
        auVar83._12_4_ = puVar8[3];
      }
      else {
        auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar29;
        auVar36._4_4_ = _UNK_150b50da4 & uVar30;
        auVar36._8_4_ = _UNK_150b50da8 & uVar31;
        auVar36._12_4_ = _UNK_150b50dac & uVar90;
        lVar21 = extractps(auVar36,1);
        lVar25 = extractps(auVar36,2);
        lVar24 = extractps(auVar36,3);
        auVar66 = insertps(ZEXT416(*(uint *)*pauVar5),*(undefined4 *)(*pauVar5 + lVar21),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar25),0x20);
        auVar93 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar24),0x30);
        auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 +
                                            (___xmm_000000280000001c0000001000000004 & uVar29))),
                           *(undefined4 *)(*pauVar5 + (_UNK_150b50db4 & uVar30)),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50db8 & uVar31)),0x20);
        auVar99 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dbc & uVar90)),0x30);
        auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 +
                                            (___xmm_0000002c000000200000001400000008 & uVar29))),
                           *(undefined4 *)(*pauVar5 + (_UNK_150b50dc4 & uVar30)),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dc8 & uVar31)),0x20);
        auVar114 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dcc & uVar90)),0x30);
        lVar20 = param_3 + lVar19 * 0xc;
        auVar66 = insertps(ZEXT416(*(uint *)(param_3 + lVar19 * 0xc)),
                           *(undefined4 *)(lVar21 + lVar20),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(lVar25 + lVar20),0x20);
        auVar119 = insertps(auVar66,*(undefined4 *)(lVar24 + lVar20),0x30);
        auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)
                                             (___xmm_000000280000001c0000001000000004 & uVar29) +
                                            lVar20)),
                           *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar30) + lVar20),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar31) + lVar20),
                           0x20);
        auVar107 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar90) + lVar20),
                            0x30);
        auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)
                                             (___xmm_0000002c000000200000001400000008 & uVar29) +
                                            lVar20)),
                           *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar30) + lVar20),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & uVar31) + lVar20),
                           0x20);
        auVar83 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dcc & uVar90) + lVar20),
                           0x30);
      }
      lVar19 = (longlong)(int)(uVar28 << 2);
      auVar37._4_4_ = param_9;
      auVar37._0_4_ = param_9;
      auVar37._8_4_ = param_9;
      auVar37._12_4_ = param_9;
      if ((bVar18 & 9) == 0) {
        auVar37 = *(undefined1 (*) [16])(param_4 + lVar19);
        auVar45 = *(undefined1 (*) [16])(param_5 + lVar19);
      }
      else {
        puVar22 = (uint *)(param_4 + lVar19);
        if ((uVar15 & 1) != 0) {
          auVar37 = ZEXT416(*puVar22);
        }
        if ((uVar15 & 2) != 0) {
          auVar37 = insertps(auVar37,puVar22[1],0x10);
        }
        if ((uVar15 & 4) != 0) {
          auVar37 = insertps(auVar37,puVar22[2],0x20);
        }
        if ((uVar15 & 8) != 0) {
          auVar37 = insertps(auVar37,puVar22[3],0x30);
        }
        if ((uVar15 & 1) != 0) {
          auVar45 = ZEXT416(*(uint *)(param_5 + lVar19));
        }
        if ((uVar15 & 2) != 0) {
          auVar45 = insertps(auVar45,*(undefined4 *)(param_5 + lVar19 + 4),0x10);
        }
        if ((uVar15 & 4) != 0) {
          auVar45 = insertps(auVar45,*(undefined4 *)(param_5 + lVar19 + 8),0x20);
        }
        if ((uVar15 & 8) == 0) {
          param_5 = param_5 + lVar19;
        }
        else {
          param_5 = param_5 + lVar19;
          auVar45 = insertps(auVar45,*(undefined4 *)(param_5 + 0xc),0x30);
        }
      }
      fVar79 = param_8 + param_9 * auVar45._0_4_;
      fVar85 = param_8 + param_9 * auVar45._4_4_;
      auVar59._4_4_ = fVar85;
      auVar59._0_4_ = fVar79;
      fVar86 = param_8 + param_9 * auVar45._8_4_;
      param_8 = param_8 + param_9 * auVar45._12_4_;
      fVar44 = param_6 + param_7 * auVar37._0_4_;
      fVar48 = param_6 + param_7 * auVar37._4_4_;
      fVar49 = param_6 + param_7 * auVar37._8_4_;
      param_6 = param_6 + param_7 * auVar37._12_4_;
      fVar32 = fVar44 + fVar79;
      fVar41 = fVar48 + fVar85;
      fVar42 = fVar49 + fVar86;
      fVar43 = param_6 + param_8;
      fVar108 = auVar93._0_4_ - auVar119._0_4_ * fVar32;
      fVar87 = auVar93._4_4_ - auVar119._4_4_ * fVar41;
      fVar109 = auVar93._8_4_ - auVar119._8_4_ * fVar42;
      fVar91 = auVar93._12_4_ - auVar119._12_4_ * fVar43;
      fVar110 = auVar99._0_4_ - auVar107._0_4_ * fVar32;
      fVar95 = auVar99._4_4_ - auVar107._4_4_ * fVar41;
      fVar111 = auVar99._8_4_ - auVar107._8_4_ * fVar42;
      fVar116 = auVar99._12_4_ - auVar107._12_4_ * fVar43;
      fVar32 = auVar114._0_4_ - fVar32 * auVar83._0_4_;
      fVar41 = auVar114._4_4_ - fVar41 * auVar83._4_4_;
      fVar42 = auVar114._8_4_ - fVar42 * auVar83._8_4_;
      fVar43 = auVar114._12_4_ - fVar43 * auVar83._12_4_;
      fVar88 = auVar67._0_4_ - fVar108;
      fVar89 = auVar67._4_4_ - fVar87;
      fVar92 = auVar67._8_4_ - fVar109;
      fVar94 = auVar67._12_4_ - fVar91;
      fVar96 = auVar73._0_4_ - fVar110;
      fVar97 = auVar73._4_4_ - fVar95;
      fVar98 = auVar73._8_4_ - fVar111;
      fVar101 = auVar73._12_4_ - fVar116;
      fVar102 = auVar80._0_4_ - fVar32;
      fVar103 = auVar80._4_4_ - fVar41;
      fVar104 = auVar80._8_4_ - fVar42;
      fVar81 = auVar80._12_4_ - fVar43;
      auVar54._0_4_ = fVar96 * fVar96 + fVar88 * fVar88;
      auVar54._4_4_ = fVar97 * fVar97 + fVar89 * fVar89;
      auVar54._8_4_ = fVar98 * fVar98 + fVar92 * fVar92;
      auVar54._12_4_ = fVar101 * fVar101 + fVar94 * fVar94;
      auVar38._0_4_ = fVar102 * fVar102 + auVar54._0_4_;
      auVar38._4_4_ = fVar103 * fVar103 + auVar54._4_4_;
      auVar38._8_4_ = fVar104 * fVar104 + auVar54._8_4_;
      auVar38._12_4_ = fVar81 * fVar81 + auVar54._12_4_;
      auVar66 = sqrtps(auVar54,auVar38);
      auVar59._8_4_ = fVar86;
      auVar59._12_4_ = param_8;
      auVar66 = divps(auVar59,auVar66);
      fVar50 = auVar66._0_4_;
      fVar70 = auVar66._4_4_;
      fVar77 = auVar66._8_4_;
      fVar78 = auVar66._12_4_;
      auVar84._0_4_ = auVar93._0_4_ - auVar119._0_4_ * fVar44;
      auVar84._4_4_ = auVar93._4_4_ - auVar119._4_4_ * fVar48;
      auVar84._8_4_ = auVar93._8_4_ - auVar119._8_4_ * fVar49;
      auVar84._12_4_ = auVar93._12_4_ - auVar119._12_4_ * param_6;
      uVar28 = -(uint)(auVar38._0_4_ < fVar79 * fVar79);
      uVar15 = -(uint)(auVar38._4_4_ < fVar85 * fVar85);
      uVar29 = -(uint)(auVar38._8_4_ < fVar86 * fVar86);
      uVar30 = -(uint)(auVar38._12_4_ < param_8 * param_8);
      auVar39._4_4_ = -(uint)(auVar38._4_4_ < _UNK_1506895d4);
      auVar39._0_4_ = -(uint)(auVar38._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar39._8_4_ = -(uint)(auVar38._8_4_ < _UNK_1506895d8);
      auVar39._12_4_ = -(uint)(auVar38._12_4_ < _UNK_1506895dc);
      auVar68._0_4_ = (uint)(fVar88 * fVar50 + fVar108) & uVar28;
      auVar68._4_4_ = (uint)(fVar89 * fVar70 + fVar87) & uVar15;
      auVar68._8_4_ = (uint)(fVar92 * fVar77 + fVar109) & uVar29;
      auVar68._12_4_ = (uint)(fVar94 * fVar78 + fVar91) & uVar30;
      auVar69 = blendvps(auVar68,auVar84,auVar39);
      auVar100._0_4_ = auVar99._0_4_ - auVar107._0_4_ * fVar44;
      auVar100._4_4_ = auVar99._4_4_ - auVar107._4_4_ * fVar48;
      auVar100._8_4_ = auVar99._8_4_ - auVar107._8_4_ * fVar49;
      auVar100._12_4_ = auVar99._12_4_ - auVar107._12_4_ * param_6;
      auVar75._0_4_ = (uint)(fVar96 * fVar50 + fVar110) & uVar28;
      auVar75._4_4_ = (uint)(fVar97 * fVar70 + fVar95) & uVar15;
      auVar75._8_4_ = (uint)(fVar98 * fVar77 + fVar111) & uVar29;
      auVar75._12_4_ = (uint)(fVar101 * fVar78 + fVar116) & uVar30;
      auVar76 = blendvps(auVar75,auVar100,auVar39);
      auVar115._0_4_ = auVar114._0_4_ - fVar44 * auVar83._0_4_;
      auVar115._4_4_ = auVar114._4_4_ - fVar48 * auVar83._4_4_;
      auVar115._8_4_ = auVar114._8_4_ - fVar49 * auVar83._8_4_;
      auVar115._12_4_ = auVar114._12_4_ - param_6 * auVar83._12_4_;
      auVar55._0_4_ = uVar28 & (uint)(fVar50 * fVar102 + fVar32);
      auVar55._4_4_ = uVar15 & (uint)(fVar70 * fVar103 + fVar41);
      auVar55._8_4_ = uVar29 & (uint)(fVar77 * fVar104 + fVar42);
      auVar55._12_4_ = uVar30 & (uint)(fVar78 * fVar81 + fVar43);
      auVar66 = blendvps(auVar55,auVar115,auVar39);
      fVar32 = auVar69._0_4_;
      auVar46._0_4_ = -(uint)((fVar56 != 0.0 && bVar10) && fVar32 != 0.0);
      auVar46._4_4_ = -(uint)((fVar60 != 0.0 && bVar11) && auVar69._4_4_ != 0.0);
      auVar46._8_4_ = -(uint)((fVar61 != 0.0 && bVar12) && auVar69._8_4_ != 0.0);
      auVar46._12_4_ = -(uint)((fVar62 != 0.0 && bVar13) && auVar69._12_4_ != 0.0);
      iVar16 = movmskps((int)param_5,auVar46);
      if (iVar16 != 0) {
        bVar18 = (char)((char)iVar16 << 4) >> 4;
        if ((~bVar18 & 0xf) == 0) {
          auVar40._0_8_ = auVar69._0_8_;
          auVar40._8_4_ = auVar69._4_4_;
          auVar40._12_4_ = auVar76._4_4_;
          auVar47._0_8_ = auVar66._0_8_;
          auVar47._8_4_ = auVar66._4_4_;
          auVar47._12_4_ = fVar60;
          *(ulonglong *)*pauVar26 = CONCAT44(auVar76._0_4_,fVar32);
          *(ulonglong *)(*pauVar26 + 8) = CONCAT44(fVar56,auVar66._0_4_);
          *(longlong *)pauVar26[1] = auVar40._8_8_;
          *(longlong *)(pauVar26[1] + 8) = auVar47._8_8_;
          *(float *)pauVar26[2] = auVar69._8_4_;
          *(int *)(pauVar26[2] + 4) = auVar76._8_4_;
          *(int *)(pauVar26[2] + 8) = auVar66._8_4_;
          *(float *)(pauVar26[2] + 0xc) = fVar61;
          *(float *)pauVar26[3] = auVar69._12_4_;
          *(int *)(pauVar26[3] + 4) = auVar76._12_4_;
          *(int *)(pauVar26[3] + 8) = auVar66._12_4_;
          *(float *)(pauVar26[3] + 0xc) = fVar62;
        }
        else {
          if ((bVar18 & 1) != 0) {
            *(float *)*pauVar26 = fVar32;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar69,1);
            *(undefined8 *)pauVar26[1] = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar69,2);
            *(undefined8 *)pauVar26[2] = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar69,3);
            *(undefined8 *)pauVar26[3] = uVar9;
          }
          if ((bVar18 & 1) != 0) {
            *(int *)(*pauVar26 + 4) = auVar76._0_4_;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar76,1);
            *(undefined8 *)(pauVar26[1] + 4) = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar76,2);
            *(undefined8 *)(pauVar26[2] + 4) = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar76,3);
            *(undefined8 *)(pauVar26[3] + 4) = uVar9;
          }
          if ((bVar18 & 1) != 0) {
            *(int *)(*pauVar26 + 8) = auVar66._0_4_;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar66,1);
            *(undefined8 *)(pauVar26[1] + 8) = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar66,2);
            *(undefined8 *)(pauVar26[2] + 8) = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar66,3);
            *(undefined8 *)(pauVar26[3] + 8) = uVar9;
          }
          if ((bVar18 & 1) != 0) {
            *(float *)(*pauVar26 + 0xc) = fVar56;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar57,1);
            *(undefined8 *)(pauVar26[1] + 0xc) = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar57,2);
            *(undefined8 *)(pauVar26[2] + 0xc) = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar57,3);
            *(undefined8 *)(pauVar26[3] + 0xc) = uVar9;
          }
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4 @ 14034e220

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar70;
  float fVar72;
  float fVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar73;
  float fVar75;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  uint uVar76;
  float fVar77;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar100;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    local_168._4_4_ = param_7;
    local_168._0_4_ = param_7;
    fStack_160 = param_7;
    fStack_15c = param_7;
    fVar31 = param_7 * param_7;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar73 = *(float *)(*pauVar25 + 0xc);
      auVar12 = *pauVar25;
      pauVar4 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar75 = *(float *)(*pauVar4 + 0xc);
      auVar59 = *pauVar4;
      auVar56 = *(undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar71 = auVar56._12_4_;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar33 = *(float *)(*pauVar5 + 0xc);
      auVar64 = *pauVar5;
      auVar49._4_4_ = -(uint)(fVar75 != 0.0);
      auVar49._0_4_ = -(uint)(fVar73 != 0.0);
      auVar49._8_4_ = -(uint)(fVar71 != 0.0);
      auVar49._12_4_ = -(uint)(fVar33 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar49);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar49 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar34 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar53 = insertps(auVar34,auVar49,0x8c);
        auVar48 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar54 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar60 = insertps(auVar54,auVar48,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar83 = *pfVar3 * param_6 + param_5;
        fVar84 = pfVar3[1] * param_6 + param_5;
        fVar85 = pfVar3[2] * param_6 + param_5;
        fVar86 = pfVar3[3] * param_6 + param_5;
        fVar32 = param_7 + fVar83;
        fVar42 = param_7 + fVar84;
        fVar43 = param_7 + fVar85;
        fVar44 = param_7 + fVar86;
        fVar65 = auVar49._0_4_ - auVar48._0_4_ * fVar32;
        fVar70 = auVar49._12_4_ - auVar48._12_4_ * fVar42;
        fVar72 = auVar34._8_4_ - auVar54._8_4_ * fVar43;
        fVar74 = pfVar1[1] - pfVar2[1] * fVar44;
        fVar77 = auVar49._4_4_ - auVar48._4_4_ * fVar32;
        fVar80 = auVar34._0_4_ - auVar54._0_4_ * fVar42;
        fVar81 = auVar34._12_4_ - auVar54._12_4_ * fVar43;
        fVar82 = pfVar1[2] - pfVar2[2] * fVar44;
        fVar87 = auVar53._0_4_ - fVar32 * auVar60._0_4_;
        fVar90 = auVar53._4_4_ - fVar42 * auVar60._4_4_;
        fVar91 = *pfVar1 - fVar43 * *pfVar2;
        fVar92 = pfVar1[3] - fVar44 * pfVar2[3];
        fVar107 = *(float *)*pauVar25 - fVar65;
        fVar110 = *(float *)*pauVar4 - fVar70;
        fVar111 = auVar56._0_4_ - fVar72;
        fVar112 = *(float *)*pauVar5 - fVar74;
        fVar93 = *(float *)(*pauVar25 + 4) - fVar77;
        fVar97 = *(float *)(*pauVar4 + 4) - fVar80;
        fVar98 = auVar56._4_4_ - fVar81;
        fVar99 = *(float *)(*pauVar5 + 4) - fVar82;
        fVar100 = *(float *)(*pauVar25 + 8) - fVar87;
        fVar103 = *(float *)(*pauVar4 + 8) - fVar90;
        fVar104 = auVar56._8_4_ - fVar91;
        fVar105 = *(float *)(*pauVar5 + 8) - fVar92;
        auVar95._0_4_ = fVar100 * fVar100 + fVar93 * fVar93 + fVar107 * fVar107;
        auVar95._4_4_ = fVar103 * fVar103 + fVar97 * fVar97 + fVar110 * fVar110;
        auVar95._8_4_ = fVar104 * fVar104 + fVar98 * fVar98 + fVar111 * fVar111;
        auVar95._12_4_ = fVar105 * fVar105 + fVar99 * fVar99 + fVar112 * fVar112;
        in_XMM3 = sqrtps(in_XMM3,auVar95);
        auVar78 = divps(_local_168,in_XMM3);
        fVar32 = auVar78._0_4_;
        fVar42 = auVar78._4_4_;
        fVar43 = auVar78._8_4_;
        fVar44 = auVar78._12_4_;
        auVar109._0_4_ = auVar49._0_4_ - auVar48._0_4_ * fVar83;
        auVar109._4_4_ = auVar49._12_4_ - auVar48._12_4_ * fVar84;
        auVar109._8_4_ = auVar34._8_4_ - auVar54._8_4_ * fVar85;
        auVar109._12_4_ = pfVar1[1] - pfVar2[1] * fVar86;
        uVar15 = -(uint)(auVar95._0_4_ < fVar31);
        uVar28 = -(uint)(auVar95._4_4_ < fVar31);
        uVar29 = -(uint)(auVar95._8_4_ < fVar31);
        uVar30 = -(uint)(auVar95._12_4_ < fVar31);
        auVar108._0_4_ = (uint)(fVar107 * fVar32 + fVar65) & uVar15;
        auVar108._4_4_ = (uint)(fVar110 * fVar42 + fVar70) & uVar28;
        auVar108._8_4_ = (uint)(fVar111 * fVar43 + fVar72) & uVar29;
        auVar108._12_4_ = (uint)(fVar112 * fVar44 + fVar74) & uVar30;
        auVar78._4_4_ = -(uint)(auVar95._4_4_ < _UNK_1506895d4);
        auVar78._0_4_ = -(uint)(auVar95._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar78._8_4_ = -(uint)(auVar95._8_4_ < _UNK_1506895d8);
        auVar78._12_4_ = -(uint)(auVar95._12_4_ < _UNK_1506895dc);
        auVar109 = blendvps(auVar108,auVar109,auVar78);
        auVar55._0_4_ = auVar49._4_4_ - auVar48._4_4_ * fVar83;
        auVar55._4_4_ = auVar34._0_4_ - auVar54._0_4_ * fVar84;
        auVar55._8_4_ = auVar34._12_4_ - auVar54._12_4_ * fVar85;
        auVar55._12_4_ = pfVar1[2] - pfVar2[2] * fVar86;
        auVar94._0_4_ = (uint)(fVar93 * fVar32 + fVar77) & uVar15;
        auVar94._4_4_ = (uint)(fVar97 * fVar42 + fVar80) & uVar28;
        auVar94._8_4_ = (uint)(fVar98 * fVar43 + fVar81) & uVar29;
        auVar94._12_4_ = (uint)(fVar99 * fVar44 + fVar82) & uVar30;
        auVar95 = blendvps(auVar94,auVar55,auVar78);
        auVar54._0_4_ = auVar53._0_4_ - fVar83 * auVar60._0_4_;
        auVar54._4_4_ = auVar53._4_4_ - fVar84 * auVar60._4_4_;
        auVar54._8_4_ = *pfVar1 - fVar85 * *pfVar2;
        auVar54._12_4_ = pfVar1[3] - fVar86 * pfVar2[3];
        auVar48._0_4_ = uVar15 & (uint)(fVar32 * fVar100 + fVar87);
        auVar48._4_4_ = uVar28 & (uint)(fVar42 * fVar103 + fVar90);
        auVar48._8_4_ = uVar29 & (uint)(fVar43 * fVar104 + fVar91);
        auVar48._12_4_ = uVar30 & (uint)(fVar44 * fVar105 + fVar92);
        auVar49 = blendvps(auVar48,auVar54,auVar78);
        fVar32 = auVar109._0_4_;
        auVar34._0_4_ = -(uint)(fVar32 != 0.0 && fVar73 != 0.0);
        auVar34._4_4_ = -(uint)(auVar109._4_4_ != 0.0 && fVar75 != 0.0);
        auVar34._8_4_ = -(uint)(auVar109._8_4_ != 0.0 && fVar71 != 0.0);
        auVar34._12_4_ = -(uint)(auVar109._12_4_ != 0.0 && fVar33 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar34);
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar56._0_8_ = auVar109._0_8_;
            auVar56._8_4_ = auVar109._4_4_;
            auVar56._12_4_ = auVar95._4_4_;
            auVar59._0_8_ = auVar49._0_8_;
            auVar59._8_4_ = auVar49._4_4_;
            auVar59._12_4_ = fVar75;
            in_XMM3._12_4_ = fVar73;
            in_XMM3._8_4_ = auVar49._0_4_;
            auVar64._0_8_ = CONCAT44(auVar95._8_4_,auVar109._8_4_);
            auVar64._8_4_ = auVar109._12_4_;
            auVar64._12_4_ = auVar95._12_4_;
            in_XMM3._4_4_ = auVar95._0_4_;
            in_XMM3._0_4_ = fVar32;
            *(undefined1 (*) [16])(lVar20 + uVar26 * 4) = in_XMM3;
            puVar6 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar6 = auVar56._8_8_;
            puVar6[1] = auVar59._8_8_;
            puVar6 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar6 = auVar64._0_8_;
            *(int *)(puVar6 + 1) = auVar49._8_4_;
            *(float *)((longlong)puVar6 + 0xc) = fVar71;
            puVar6 = (undefined8 *)(lVar20 + 0x30 + uVar26 * 4);
            *puVar6 = auVar64._8_8_;
            *(int *)(puVar6 + 1) = auVar49._12_4_;
            *(float *)((longlong)puVar6 + 0xc) = fVar33;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar32;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar109,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar109,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar109,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar26 * 4) = auVar95._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar95,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar95,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar95,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar26 * 4) = auVar49._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar49,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar49,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar49,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 1) != 0) {
              uVar7 = extractps(auVar12,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar59,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar56,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar64,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar7;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar8 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  uVar28 = -(uint)bVar8;
  bVar9 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  uVar29 = -(uint)bVar9;
  bVar10 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  uVar30 = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  uVar76 = -(uint)bVar11;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  auVar12._4_4_ = uVar29;
  auVar12._0_4_ = uVar28;
  auVar12._8_4_ = uVar30;
  auVar12._12_4_ = uVar76;
  uVar15 = movmskps((int)unaff_RBX,auVar12);
  if (uVar15 == 0xf) {
    auVar56 = *pauVar25;
    auVar59 = pauVar25[2];
    auVar60._8_4_ = auVar56._4_4_;
    auVar60._0_8_ = auVar56._0_8_;
    auVar60._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar53._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar56._8_4_);
    auVar53._8_4_ = auVar56._12_4_;
    auVar53._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar62._0_8_ = auVar59._0_8_;
    auVar62._8_4_ = auVar59._4_4_;
    auVar62._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar61._8_8_ = auVar62._8_8_;
    auVar57._12_4_ = *(undefined4 *)pauVar25[3];
    auVar57._8_4_ = auVar59._0_4_;
    auVar67._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar59._8_4_);
    auVar67._8_4_ = auVar59._12_4_;
    auVar67._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar57._4_4_ = *(undefined4 *)pauVar25[1];
    auVar57._0_4_ = auVar56._0_4_;
    auVar61._0_8_ = auVar60._8_8_;
    auVar50._8_8_ = auVar67._0_8_;
    auVar50._0_8_ = auVar53._0_8_;
    auVar66._8_8_ = auVar67._8_8_;
    auVar66._0_8_ = auVar53._8_8_;
  }
  else {
    auVar35._0_4_ = ___xmm_00000030000000200000001000000000 & uVar28;
    auVar35._4_4_ = _UNK_150b511c4 & uVar29;
    auVar35._8_4_ = _UNK_150b511c8 & uVar30;
    auVar35._12_4_ = _UNK_150b511cc & uVar76;
    lVar18 = extractps(auVar35,1);
    lVar22 = extractps(auVar35,2);
    lVar24 = extractps(auVar35,3);
    auVar56 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar57 = insertps(auVar56,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar56 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000034000000240000001400000004 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511d4 & uVar29)),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511d8 & uVar30)),0x20);
    auVar61 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511dc & uVar76)),0x30);
    auVar56 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000038000000280000001800000008 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511e4 & uVar29)),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511e8 & uVar30)),0x20);
    auVar50 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511ec & uVar76)),0x30);
    uVar14 = (ulonglong)(_UNK_150b511f4 & uVar29);
    auVar56 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar28))),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511f8 & uVar30)),0x20);
    auVar66 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511fc & uVar76)),0x30);
  }
  fVar31 = auVar66._0_4_;
  fVar71 = auVar66._4_4_;
  fVar73 = auVar66._8_4_;
  fVar75 = auVar66._12_4_;
  auVar36._0_4_ = -(uint)(fVar31 != 0.0 && bVar8);
  auVar36._4_4_ = -(uint)(fVar71 != 0.0 && bVar9);
  auVar36._8_4_ = -(uint)(fVar73 != 0.0 && bVar10);
  auVar36._12_4_ = -(uint)(fVar75 != 0.0 && bVar11);
  iVar16 = movmskps((int)uVar14,auVar36);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar4 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar56 = *pauVar4;
      auVar59 = pauVar4[1];
      auVar68._0_4_ = auVar56._0_4_;
      auVar64 = insertps(auVar59,auVar56,0x8c);
      auVar68._4_4_ = auVar56._12_4_;
      auVar68._8_4_ = auVar59._8_4_;
      auVar68._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar88._4_4_ = auVar59._0_4_;
      auVar88._0_4_ = auVar56._4_4_;
      auVar88._8_4_ = auVar59._12_4_;
      auVar88._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar101._0_8_ = auVar64._0_8_;
      auVar101._8_4_ = *(undefined4 *)pauVar4[2];
      auVar101._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar56 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar59 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar38 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar106._0_4_ = auVar56._0_4_;
      auVar64 = insertps(auVar59,auVar56,0x8c);
      auVar106._4_4_ = auVar56._12_4_;
      auVar106._8_4_ = auVar59._8_4_;
      auVar106._12_4_ = auVar38._4_4_;
      auVar96._4_4_ = auVar59._0_4_;
      auVar96._0_4_ = auVar56._4_4_;
      auVar96._8_4_ = auVar59._12_4_;
      auVar96._12_4_ = auVar38._8_4_;
      auVar79._0_8_ = auVar64._0_8_;
      auVar79._8_4_ = auVar38._0_4_;
      auVar79._12_4_ = auVar38._12_4_;
    }
    else {
      auVar37._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar28;
      auVar37._4_4_ = _UNK_150b50da4 & uVar29;
      auVar37._8_4_ = _UNK_150b50da8 & uVar30;
      auVar37._12_4_ = _UNK_150b50dac & uVar76;
      lVar22 = extractps(auVar37,1);
      lVar23 = extractps(auVar37,2);
      lVar24 = extractps(auVar37,3);
      auVar56 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar22),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar4 + lVar23),0x20);
      auVar68 = insertps(auVar56,*(undefined4 *)(*pauVar4 + lVar24),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_000000280000001c0000001000000004 & uVar28))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50db4 & uVar29)),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar4 + (_UNK_150b50db8 & uVar30)),0x20);
      auVar88 = insertps(auVar56,*(undefined4 *)(*pauVar4 + (_UNK_150b50dbc & uVar76)),0x30);
      auVar38._4_4_ = uVar29;
      auVar38._0_4_ = uVar28;
      auVar38._8_4_ = uVar30;
      auVar38._12_4_ = uVar76;
      auVar38 = ___xmm_0000002c000000200000001400000008 & auVar38;
      auVar56 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar38._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar38._4_4_),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar4 + auVar38._8_4_),0x20);
      auVar101 = insertps(auVar56,*(undefined4 *)(*pauVar4 + auVar38._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar56 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar106 = insertps(auVar56,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar28) +
                                          lVar18)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar29) + lVar18),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar30) + lVar18),0x20
                        );
      auVar96 = insertps(auVar56,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar76) + lVar18),0x30
                        );
      auVar56 = insertps(ZEXT416(*(uint *)((ulonglong)auVar38._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar38._4_4_ + lVar18),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)((ulonglong)auVar38._8_4_ + lVar18),0x20);
      auVar79 = insertps(auVar56,*(undefined4 *)((ulonglong)auVar38._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar38 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar38 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar38 = insertps(auVar38,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar38 = insertps(auVar38,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar38 = insertps(auVar38,puVar21[3],0x30);
      }
    }
    fVar105 = param_5 + param_6 * auVar38._0_4_;
    fVar107 = param_5 + param_6 * auVar38._4_4_;
    fVar110 = param_5 + param_6 * auVar38._8_4_;
    param_5 = param_5 + param_6 * auVar38._12_4_;
    auVar45._4_4_ = param_7;
    auVar45._0_4_ = param_7;
    auVar45._8_4_ = param_7;
    auVar45._12_4_ = param_7;
    fVar33 = param_7 + fVar105;
    fVar32 = param_7 + fVar107;
    fVar42 = param_7 + fVar110;
    fVar43 = param_7 + param_5;
    fVar92 = auVar68._0_4_ - auVar106._0_4_ * fVar33;
    fVar93 = auVar68._4_4_ - auVar106._4_4_ * fVar32;
    fVar97 = auVar68._8_4_ - auVar106._8_4_ * fVar42;
    fVar98 = auVar68._12_4_ - auVar106._12_4_ * fVar43;
    fVar99 = auVar88._0_4_ - auVar96._0_4_ * fVar33;
    fVar100 = auVar88._4_4_ - auVar96._4_4_ * fVar32;
    fVar103 = auVar88._8_4_ - auVar96._8_4_ * fVar42;
    fVar104 = auVar88._12_4_ - auVar96._12_4_ * fVar43;
    fVar44 = auVar101._0_4_ - fVar33 * auVar79._0_4_;
    fVar65 = auVar101._4_4_ - fVar32 * auVar79._4_4_;
    fVar70 = auVar101._8_4_ - fVar42 * auVar79._8_4_;
    fVar72 = auVar101._12_4_ - fVar43 * auVar79._12_4_;
    fVar82 = auVar57._0_4_ - fVar92;
    fVar83 = auVar57._4_4_ - fVar93;
    fVar84 = auVar57._8_4_ - fVar97;
    fVar85 = auVar57._12_4_ - fVar98;
    fVar86 = auVar61._0_4_ - fVar99;
    fVar87 = auVar61._4_4_ - fVar100;
    fVar90 = auVar61._8_4_ - fVar103;
    fVar91 = auVar61._12_4_ - fVar104;
    fVar74 = auVar50._0_4_ - fVar44;
    fVar77 = auVar50._4_4_ - fVar65;
    fVar80 = auVar50._8_4_ - fVar70;
    fVar81 = auVar50._12_4_ - fVar72;
    auVar51._0_4_ = fVar86 * fVar86 + fVar82 * fVar82;
    auVar51._4_4_ = fVar87 * fVar87 + fVar83 * fVar83;
    auVar51._8_4_ = fVar90 * fVar90 + fVar84 * fVar84;
    auVar51._12_4_ = fVar91 * fVar91 + fVar85 * fVar85;
    auVar39._0_4_ = fVar74 * fVar74 + auVar51._0_4_;
    auVar39._4_4_ = fVar77 * fVar77 + auVar51._4_4_;
    auVar39._8_4_ = fVar80 * fVar80 + auVar51._8_4_;
    auVar39._12_4_ = fVar81 * fVar81 + auVar51._12_4_;
    auVar56 = sqrtps(auVar51,auVar39);
    auVar56 = divps(auVar45,auVar56);
    fVar33 = auVar56._0_4_;
    fVar32 = auVar56._4_4_;
    fVar42 = auVar56._8_4_;
    fVar43 = auVar56._12_4_;
    auVar69._0_4_ = auVar68._0_4_ - auVar106._0_4_ * fVar105;
    auVar69._4_4_ = auVar68._4_4_ - auVar106._4_4_ * fVar107;
    auVar69._8_4_ = auVar68._8_4_ - auVar106._8_4_ * fVar110;
    auVar69._12_4_ = auVar68._12_4_ - auVar106._12_4_ * param_5;
    param_7 = param_7 * param_7;
    uVar27 = -(uint)(auVar39._0_4_ < param_7);
    uVar15 = -(uint)(auVar39._4_4_ < param_7);
    uVar28 = -(uint)(auVar39._8_4_ < param_7);
    uVar29 = -(uint)(auVar39._12_4_ < param_7);
    auVar40._4_4_ = -(uint)(auVar39._4_4_ < _UNK_1506895d4);
    auVar40._0_4_ = -(uint)(auVar39._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar40._8_4_ = -(uint)(auVar39._8_4_ < _UNK_1506895d8);
    auVar40._12_4_ = -(uint)(auVar39._12_4_ < _UNK_1506895dc);
    auVar58._0_4_ = (uint)(fVar82 * fVar33 + fVar92) & uVar27;
    auVar58._4_4_ = (uint)(fVar83 * fVar32 + fVar93) & uVar15;
    auVar58._8_4_ = (uint)(fVar84 * fVar42 + fVar97) & uVar28;
    auVar58._12_4_ = (uint)(fVar85 * fVar43 + fVar98) & uVar29;
    auVar59 = blendvps(auVar58,auVar69,auVar40);
    auVar89._0_4_ = auVar88._0_4_ - auVar96._0_4_ * fVar105;
    auVar89._4_4_ = auVar88._4_4_ - auVar96._4_4_ * fVar107;
    auVar89._8_4_ = auVar88._8_4_ - auVar96._8_4_ * fVar110;
    auVar89._12_4_ = auVar88._12_4_ - auVar96._12_4_ * param_5;
    auVar63._0_4_ = (uint)(fVar86 * fVar33 + fVar99) & uVar27;
    auVar63._4_4_ = (uint)(fVar87 * fVar32 + fVar100) & uVar15;
    auVar63._8_4_ = (uint)(fVar90 * fVar42 + fVar103) & uVar28;
    auVar63._12_4_ = (uint)(fVar91 * fVar43 + fVar104) & uVar29;
    auVar64 = blendvps(auVar63,auVar89,auVar40);
    auVar102._0_4_ = auVar101._0_4_ - fVar105 * auVar79._0_4_;
    auVar102._4_4_ = auVar101._4_4_ - fVar107 * auVar79._4_4_;
    auVar102._8_4_ = auVar101._8_4_ - fVar110 * auVar79._8_4_;
    auVar102._12_4_ = auVar101._12_4_ - param_5 * auVar79._12_4_;
    auVar52._0_4_ = uVar27 & (uint)(fVar33 * fVar74 + fVar44);
    auVar52._4_4_ = uVar15 & (uint)(fVar32 * fVar77 + fVar65);
    auVar52._8_4_ = uVar28 & (uint)(fVar42 * fVar80 + fVar70);
    auVar52._12_4_ = uVar29 & (uint)(fVar43 * fVar81 + fVar72);
    auVar56 = blendvps(auVar52,auVar102,auVar40);
    fVar33 = auVar59._0_4_;
    auVar46._0_4_ = -(uint)((fVar31 != 0.0 && bVar8) && fVar33 != 0.0);
    auVar46._4_4_ = -(uint)((fVar71 != 0.0 && bVar9) && auVar59._4_4_ != 0.0);
    auVar46._8_4_ = -(uint)((fVar73 != 0.0 && bVar10) && auVar59._8_4_ != 0.0);
    auVar46._12_4_ = -(uint)((fVar75 != 0.0 && bVar11) && auVar59._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar46);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar41._0_8_ = auVar59._0_8_;
        auVar41._8_4_ = auVar59._4_4_;
        auVar41._12_4_ = auVar64._4_4_;
        auVar47._0_8_ = auVar56._0_8_;
        auVar47._8_4_ = auVar56._4_4_;
        auVar47._12_4_ = fVar71;
        *(ulonglong *)*pauVar25 = CONCAT44(auVar64._0_4_,fVar33);
        *(ulonglong *)(*pauVar25 + 8) = CONCAT44(fVar31,auVar56._0_4_);
        *(longlong *)pauVar25[1] = auVar41._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar47._8_8_;
        *(float *)pauVar25[2] = auVar59._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar64._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar56._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar73;
        *(float *)pauVar25[3] = auVar59._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar64._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar56._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar75;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar33;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar59,1);
          *(undefined8 *)pauVar25[1] = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar59,2);
          *(undefined8 *)pauVar25[2] = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar59,3);
          *(undefined8 *)pauVar25[3] = uVar7;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar64._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar64,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar64,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar64,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar7;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar56._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar56,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar56,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar56,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar7;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar66,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar66,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar66,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar7;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4 @ 14034eed0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar72;
  float fVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  float fVar79;
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  float fVar99;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar106;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    local_158._4_4_ = param_5;
    local_158._0_4_ = param_5;
    fStack_150 = param_5;
    fStack_14c = param_5;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar75 = *(float *)(*pauVar25 + 0xc);
      auVar52 = *pauVar25;
      pauVar4 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar79 = *(float *)(*pauVar4 + 0xc);
      auVar60 = *pauVar4;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar80 = *(float *)(*pauVar5 + 0xc);
      auVar63 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar81 = *(float *)(*pauVar6 + 0xc);
      auVar71 = *pauVar6;
      auVar51._4_4_ = -(uint)(fVar79 != 0.0);
      auVar51._0_4_ = -(uint)(fVar75 != 0.0);
      auVar51._8_4_ = -(uint)(fVar80 != 0.0);
      auVar51._12_4_ = -(uint)(fVar81 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar51);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar51 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar32 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar82 = insertps(auVar32,auVar51,0x8c);
        auVar50 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar83 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar76 = insertps(auVar83,auVar50,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar46 = *pfVar3 * param_7 + param_6;
        fVar47 = pfVar3[1] * param_7 + param_6;
        fVar48 = pfVar3[2] * param_7 + param_6;
        fVar49 = pfVar3[3] * param_7 + param_6;
        fVar31 = param_5 + fVar46;
        fVar41 = param_5 + fVar47;
        fVar42 = param_5 + fVar48;
        fVar43 = param_5 + fVar49;
        fVar59 = auVar51._0_4_ - auVar50._0_4_ * fVar31;
        fVar64 = auVar51._12_4_ - auVar50._12_4_ * fVar41;
        fVar65 = auVar32._8_4_ - auVar83._8_4_ * fVar42;
        fVar66 = pfVar1[1] - pfVar2[1] * fVar43;
        fVar88 = auVar51._4_4_ - auVar50._4_4_ * fVar31;
        fVar91 = auVar32._0_4_ - auVar83._0_4_ * fVar41;
        fVar92 = auVar32._12_4_ - auVar83._12_4_ * fVar42;
        fVar93 = pfVar1[2] - pfVar2[2] * fVar43;
        fVar31 = auVar82._0_4_ - fVar31 * auVar76._0_4_;
        fVar41 = auVar82._4_4_ - fVar41 * auVar76._4_4_;
        fVar42 = *pfVar1 - fVar42 * *pfVar2;
        fVar43 = pfVar1[3] - fVar43 * pfVar2[3];
        fVar106 = *(float *)*pauVar25 - fVar59;
        fVar110 = *(float *)*pauVar4 - fVar64;
        fVar111 = *(float *)*pauVar5 - fVar65;
        fVar112 = *(float *)*pauVar6 - fVar66;
        fVar99 = *(float *)(*pauVar25 + 4) - fVar88;
        fVar103 = *(float *)(*pauVar4 + 4) - fVar91;
        fVar104 = *(float *)(*pauVar5 + 4) - fVar92;
        fVar105 = *(float *)(*pauVar6 + 4) - fVar93;
        fVar94 = *(float *)(*pauVar25 + 8) - fVar31;
        fVar96 = *(float *)(*pauVar4 + 8) - fVar41;
        fVar97 = *(float *)(*pauVar5 + 8) - fVar42;
        fVar98 = *(float *)(*pauVar6 + 8) - fVar43;
        auVar101._0_4_ = fVar94 * fVar94 + fVar99 * fVar99 + fVar106 * fVar106;
        auVar101._4_4_ = fVar96 * fVar96 + fVar103 * fVar103 + fVar110 * fVar110;
        auVar101._8_4_ = fVar97 * fVar97 + fVar104 * fVar104 + fVar111 * fVar111;
        auVar101._12_4_ = fVar98 * fVar98 + fVar105 * fVar105 + fVar112 * fVar112;
        auVar113 = sqrtps(unaff_XMM15,auVar101);
        auVar85._4_4_ = fVar47;
        auVar85._0_4_ = fVar46;
        auVar85._8_4_ = fVar48;
        auVar85._12_4_ = fVar49;
        auVar113 = divps(auVar85,auVar113);
        fVar67 = auVar113._0_4_;
        fVar72 = auVar113._4_4_;
        fVar73 = auVar113._8_4_;
        fVar74 = auVar113._12_4_;
        auVar108._0_4_ = auVar51._0_4_ - auVar50._0_4_ * param_5;
        auVar108._4_4_ = auVar51._12_4_ - auVar50._12_4_ * param_5;
        auVar108._8_4_ = auVar32._8_4_ - auVar83._8_4_ * param_5;
        auVar108._12_4_ = pfVar1[1] - pfVar2[1] * param_5;
        uVar15 = -(uint)(auVar101._0_4_ < fVar46 * fVar46);
        uVar28 = -(uint)(auVar101._4_4_ < fVar47 * fVar47);
        uVar29 = -(uint)(auVar101._8_4_ < fVar48 * fVar48);
        uVar30 = -(uint)(auVar101._12_4_ < fVar49 * fVar49);
        auVar107._0_4_ = (uint)(fVar106 * fVar67 + fVar59) & uVar15;
        auVar107._4_4_ = (uint)(fVar110 * fVar72 + fVar64) & uVar28;
        auVar107._8_4_ = (uint)(fVar111 * fVar73 + fVar65) & uVar29;
        auVar107._12_4_ = (uint)(fVar112 * fVar74 + fVar66) & uVar30;
        auVar113._4_4_ = -(uint)(auVar101._4_4_ < _UNK_1506895d4);
        auVar113._0_4_ = -(uint)(auVar101._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar113._8_4_ = -(uint)(auVar101._8_4_ < _UNK_1506895d8);
        auVar113._12_4_ = -(uint)(auVar101._12_4_ < _UNK_1506895dc);
        auVar108 = blendvps(auVar107,auVar108,auVar113);
        auVar56._0_4_ = auVar51._4_4_ - auVar50._4_4_ * param_5;
        auVar56._4_4_ = auVar32._0_4_ - auVar83._0_4_ * param_5;
        auVar56._8_4_ = auVar32._12_4_ - auVar83._12_4_ * param_5;
        auVar56._12_4_ = pfVar1[2] - pfVar2[2] * param_5;
        auVar100._0_4_ = (uint)(fVar99 * fVar67 + fVar88) & uVar15;
        auVar100._4_4_ = (uint)(fVar103 * fVar72 + fVar91) & uVar28;
        auVar100._8_4_ = (uint)(fVar104 * fVar73 + fVar92) & uVar29;
        auVar100._12_4_ = (uint)(fVar105 * fVar74 + fVar93) & uVar30;
        auVar101 = blendvps(auVar100,auVar56,auVar113);
        auVar83._0_4_ = auVar82._0_4_ - auVar76._0_4_ * param_5;
        auVar83._4_4_ = auVar82._4_4_ - auVar76._4_4_ * param_5;
        auVar83._8_4_ = *pfVar1 - *pfVar2 * param_5;
        auVar83._12_4_ = pfVar1[3] - pfVar2[3] * param_5;
        auVar50._0_4_ = uVar15 & (uint)(fVar67 * fVar94 + fVar31);
        auVar50._4_4_ = uVar28 & (uint)(fVar72 * fVar96 + fVar41);
        auVar50._8_4_ = uVar29 & (uint)(fVar73 * fVar97 + fVar42);
        auVar50._12_4_ = uVar30 & (uint)(fVar74 * fVar98 + fVar43);
        auVar51 = blendvps(auVar50,auVar83,auVar113);
        fVar31 = auVar108._0_4_;
        auVar32._0_4_ = -(uint)(fVar31 != 0.0 && fVar75 != 0.0);
        auVar32._4_4_ = -(uint)(auVar108._4_4_ != 0.0 && fVar79 != 0.0);
        auVar32._8_4_ = -(uint)(auVar108._8_4_ != 0.0 && fVar80 != 0.0);
        auVar32._12_4_ = -(uint)(auVar108._12_4_ != 0.0 && fVar81 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar32);
        unaff_XMM15 = _local_158;
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar60._0_8_ = auVar108._0_8_;
            auVar60._8_4_ = auVar108._4_4_;
            auVar60._12_4_ = auVar101._4_4_;
            auVar63._0_8_ = auVar51._0_8_;
            auVar63._8_4_ = auVar51._4_4_;
            auVar63._12_4_ = fVar79;
            auVar76._0_8_ = CONCAT44(auVar101._8_4_,auVar108._8_4_);
            auVar76._8_4_ = auVar108._12_4_;
            auVar76._12_4_ = auVar101._12_4_;
            auVar71._0_8_ = CONCAT44(fVar80,auVar51._8_4_);
            auVar71._8_4_ = auVar51._12_4_;
            auVar71._12_4_ = fVar81;
            pfVar1 = (float *)(lVar20 + uVar26 * 4);
            *pfVar1 = fVar31;
            pfVar1[1] = auVar101._0_4_;
            pfVar1[2] = auVar51._0_4_;
            pfVar1[3] = fVar75;
            puVar7 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar7 = auVar60._8_8_;
            puVar7[1] = auVar63._8_8_;
            puVar7 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar7 = auVar76._0_8_;
            puVar7[1] = auVar71._0_8_;
            auVar52._8_8_ = auVar71._8_8_;
            auVar52._0_8_ = auVar76._8_8_;
            *(undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4) = auVar52;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar31;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar108,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar108,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar108,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + 4 + uVar26 * 4) = auVar101._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar101,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar101,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar101,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + 8 + uVar26 * 4) = auVar51._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar51,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar51,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar51,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar52,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar60,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar63,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar71,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar8;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar9 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  uVar28 = -(uint)bVar9;
  bVar10 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  uVar29 = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  uVar30 = -(uint)bVar11;
  bVar12 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  uVar84 = -(uint)bVar12;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  auVar82._4_4_ = uVar29;
  auVar82._0_4_ = uVar28;
  auVar82._8_4_ = uVar30;
  auVar82._12_4_ = uVar84;
  uVar15 = movmskps((int)unaff_RBX,auVar82);
  if (uVar15 == 0xf) {
    auVar60 = *pauVar25;
    auVar63 = pauVar25[2];
    auVar53._8_4_ = auVar60._4_4_;
    auVar53._0_8_ = auVar60._0_8_;
    auVar53._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar34._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar60._8_4_);
    auVar34._8_4_ = auVar60._12_4_;
    auVar34._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar69._0_8_ = auVar63._0_8_;
    auVar69._8_4_ = auVar63._4_4_;
    auVar69._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar68._8_8_ = auVar69._8_8_;
    auVar61._12_4_ = *(undefined4 *)pauVar25[3];
    auVar61._8_4_ = auVar63._0_4_;
    auVar78._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar63._8_4_);
    auVar78._8_4_ = auVar63._12_4_;
    auVar78._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar61._4_4_ = *(undefined4 *)pauVar25[1];
    auVar61._0_4_ = auVar60._0_4_;
    auVar68._0_8_ = auVar53._8_8_;
    auVar114._8_8_ = auVar78._0_8_;
    auVar114._0_8_ = auVar34._0_8_;
    auVar77._8_8_ = auVar78._8_8_;
    auVar77._0_8_ = auVar34._8_8_;
  }
  else {
    auVar33._0_4_ = ___xmm_00000030000000200000001000000000 & uVar28;
    auVar33._4_4_ = _UNK_150b511c4 & uVar29;
    auVar33._8_4_ = _UNK_150b511c8 & uVar30;
    auVar33._12_4_ = _UNK_150b511cc & uVar84;
    lVar18 = extractps(auVar33,1);
    lVar22 = extractps(auVar33,2);
    lVar24 = extractps(auVar33,3);
    auVar60 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar61 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar60 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000034000000240000001400000004 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511d4 & uVar29)),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511d8 & uVar30)),0x20);
    auVar68 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511dc & uVar84)),0x30);
    auVar60 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000038000000280000001800000008 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511e4 & uVar29)),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511e8 & uVar30)),0x20);
    auVar114 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511ec & uVar84)),0x30);
    uVar14 = (ulonglong)(_UNK_150b511f4 & uVar29);
    auVar60 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar28))),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511f8 & uVar30)),0x20);
    auVar77 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511fc & uVar84)),0x30);
  }
  fVar75 = auVar77._0_4_;
  fVar79 = auVar77._4_4_;
  fVar80 = auVar77._8_4_;
  fVar81 = auVar77._12_4_;
  auVar35._0_4_ = -(uint)(fVar75 != 0.0 && bVar9);
  auVar35._4_4_ = -(uint)(fVar79 != 0.0 && bVar10);
  auVar35._8_4_ = -(uint)(fVar80 != 0.0 && bVar11);
  auVar35._12_4_ = -(uint)(fVar81 != 0.0 && bVar12);
  iVar16 = movmskps((int)uVar14,auVar35);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar4 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar60 = *pauVar4;
      auVar63 = pauVar4[1];
      auVar57._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar63,auVar60,0x8c);
      auVar57._4_4_ = auVar60._12_4_;
      auVar57._8_4_ = auVar63._8_4_;
      auVar57._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar86._4_4_ = auVar63._0_4_;
      auVar86._0_4_ = auVar60._4_4_;
      auVar86._8_4_ = auVar63._12_4_;
      auVar86._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar89._0_8_ = auVar71._0_8_;
      auVar89._8_4_ = *(undefined4 *)pauVar4[2];
      auVar89._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar60 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar63 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar37 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar109._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar63,auVar60,0x8c);
      auVar109._4_4_ = auVar60._12_4_;
      auVar109._8_4_ = auVar63._8_4_;
      auVar109._12_4_ = auVar37._4_4_;
      auVar95._4_4_ = auVar63._0_4_;
      auVar95._0_4_ = auVar60._4_4_;
      auVar95._8_4_ = auVar63._12_4_;
      auVar95._12_4_ = auVar37._8_4_;
      auVar102._0_8_ = auVar71._0_8_;
      auVar102._8_4_ = auVar37._0_4_;
      auVar102._12_4_ = auVar37._12_4_;
    }
    else {
      auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar28;
      auVar36._4_4_ = _UNK_150b50da4 & uVar29;
      auVar36._8_4_ = _UNK_150b50da8 & uVar30;
      auVar36._12_4_ = _UNK_150b50dac & uVar84;
      lVar22 = extractps(auVar36,1);
      lVar23 = extractps(auVar36,2);
      lVar24 = extractps(auVar36,3);
      auVar60 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar22),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar4 + lVar23),0x20);
      auVar57 = insertps(auVar60,*(undefined4 *)(*pauVar4 + lVar24),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_000000280000001c0000001000000004 & uVar28))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50db4 & uVar29)),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar4 + (_UNK_150b50db8 & uVar30)),0x20);
      auVar86 = insertps(auVar60,*(undefined4 *)(*pauVar4 + (_UNK_150b50dbc & uVar84)),0x30);
      auVar37._4_4_ = uVar29;
      auVar37._0_4_ = uVar28;
      auVar37._8_4_ = uVar30;
      auVar37._12_4_ = uVar84;
      auVar37 = ___xmm_0000002c000000200000001400000008 & auVar37;
      auVar60 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar37._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar37._4_4_),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar4 + auVar37._8_4_),0x20);
      auVar89 = insertps(auVar60,*(undefined4 *)(*pauVar4 + auVar37._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar60 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar109 = insertps(auVar60,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar28) +
                                          lVar18)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar29) + lVar18),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar30) + lVar18),0x20
                        );
      auVar95 = insertps(auVar60,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar84) + lVar18),0x30
                        );
      auVar60 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar18),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar18),0x20);
      auVar102 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar37 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar37 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar37 = insertps(auVar37,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar37 = insertps(auVar37,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar37 = insertps(auVar37,puVar21[3],0x30);
      }
    }
    fVar88 = param_6 + param_7 * auVar37._0_4_;
    fVar91 = param_6 + param_7 * auVar37._4_4_;
    auVar115._4_4_ = fVar91;
    auVar115._0_4_ = fVar88;
    fVar92 = param_6 + param_7 * auVar37._8_4_;
    param_6 = param_6 + param_7 * auVar37._12_4_;
    fVar31 = param_5 + fVar88;
    fVar41 = param_5 + fVar91;
    fVar42 = param_5 + fVar92;
    fVar43 = param_5 + param_6;
    fVar93 = auVar57._0_4_ - auVar109._0_4_ * fVar31;
    fVar94 = auVar57._4_4_ - auVar109._4_4_ * fVar41;
    fVar96 = auVar57._8_4_ - auVar109._8_4_ * fVar42;
    fVar97 = auVar57._12_4_ - auVar109._12_4_ * fVar43;
    fVar46 = auVar86._0_4_ - auVar95._0_4_ * fVar31;
    fVar47 = auVar86._4_4_ - auVar95._4_4_ * fVar41;
    fVar48 = auVar86._8_4_ - auVar95._8_4_ * fVar42;
    fVar49 = auVar86._12_4_ - auVar95._12_4_ * fVar43;
    fVar31 = auVar89._0_4_ - fVar31 * auVar102._0_4_;
    fVar41 = auVar89._4_4_ - fVar41 * auVar102._4_4_;
    fVar42 = auVar89._8_4_ - fVar42 * auVar102._8_4_;
    fVar43 = auVar89._12_4_ - fVar43 * auVar102._12_4_;
    fVar59 = auVar61._0_4_ - fVar93;
    fVar64 = auVar61._4_4_ - fVar94;
    fVar65 = auVar61._8_4_ - fVar96;
    fVar66 = auVar61._12_4_ - fVar97;
    fVar67 = auVar68._0_4_ - fVar46;
    fVar72 = auVar68._4_4_ - fVar47;
    fVar73 = auVar68._8_4_ - fVar48;
    fVar74 = auVar68._12_4_ - fVar49;
    fVar98 = auVar114._0_4_ - fVar31;
    fVar103 = auVar114._4_4_ - fVar41;
    fVar105 = auVar114._8_4_ - fVar42;
    fVar110 = auVar114._12_4_ - fVar43;
    auVar54._0_4_ = fVar67 * fVar67 + fVar59 * fVar59;
    auVar54._4_4_ = fVar72 * fVar72 + fVar64 * fVar64;
    auVar54._8_4_ = fVar73 * fVar73 + fVar65 * fVar65;
    auVar54._12_4_ = fVar74 * fVar74 + fVar66 * fVar66;
    auVar38._0_4_ = fVar98 * fVar98 + auVar54._0_4_;
    auVar38._4_4_ = fVar103 * fVar103 + auVar54._4_4_;
    auVar38._8_4_ = fVar105 * fVar105 + auVar54._8_4_;
    auVar38._12_4_ = fVar110 * fVar110 + auVar54._12_4_;
    auVar60 = sqrtps(auVar54,auVar38);
    auVar115._8_4_ = fVar92;
    auVar115._12_4_ = param_6;
    auVar60 = divps(auVar115,auVar60);
    fVar99 = auVar60._0_4_;
    fVar104 = auVar60._4_4_;
    fVar106 = auVar60._8_4_;
    fVar111 = auVar60._12_4_;
    auVar58._0_4_ = auVar57._0_4_ - auVar109._0_4_ * param_5;
    auVar58._4_4_ = auVar57._4_4_ - auVar109._4_4_ * param_5;
    auVar58._8_4_ = auVar57._8_4_ - auVar109._8_4_ * param_5;
    auVar58._12_4_ = auVar57._12_4_ - auVar109._12_4_ * param_5;
    uVar27 = -(uint)(auVar38._0_4_ < fVar88 * fVar88);
    uVar15 = -(uint)(auVar38._4_4_ < fVar91 * fVar91);
    uVar28 = -(uint)(auVar38._8_4_ < fVar92 * fVar92);
    uVar29 = -(uint)(auVar38._12_4_ < param_6 * param_6);
    auVar39._4_4_ = -(uint)(auVar38._4_4_ < _UNK_1506895d4);
    auVar39._0_4_ = -(uint)(auVar38._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar39._8_4_ = -(uint)(auVar38._8_4_ < _UNK_1506895d8);
    auVar39._12_4_ = -(uint)(auVar38._12_4_ < _UNK_1506895dc);
    auVar62._0_4_ = (uint)(fVar59 * fVar99 + fVar93) & uVar27;
    auVar62._4_4_ = (uint)(fVar64 * fVar104 + fVar94) & uVar15;
    auVar62._8_4_ = (uint)(fVar65 * fVar106 + fVar96) & uVar28;
    auVar62._12_4_ = (uint)(fVar66 * fVar111 + fVar97) & uVar29;
    auVar63 = blendvps(auVar62,auVar58,auVar39);
    auVar87._0_4_ = auVar86._0_4_ - auVar95._0_4_ * param_5;
    auVar87._4_4_ = auVar86._4_4_ - auVar95._4_4_ * param_5;
    auVar87._8_4_ = auVar86._8_4_ - auVar95._8_4_ * param_5;
    auVar87._12_4_ = auVar86._12_4_ - auVar95._12_4_ * param_5;
    auVar70._0_4_ = (uint)(fVar67 * fVar99 + fVar46) & uVar27;
    auVar70._4_4_ = (uint)(fVar72 * fVar104 + fVar47) & uVar15;
    auVar70._8_4_ = (uint)(fVar73 * fVar106 + fVar48) & uVar28;
    auVar70._12_4_ = (uint)(fVar74 * fVar111 + fVar49) & uVar29;
    auVar71 = blendvps(auVar70,auVar87,auVar39);
    auVar90._0_4_ = auVar89._0_4_ - param_5 * auVar102._0_4_;
    auVar90._4_4_ = auVar89._4_4_ - param_5 * auVar102._4_4_;
    auVar90._8_4_ = auVar89._8_4_ - param_5 * auVar102._8_4_;
    auVar90._12_4_ = auVar89._12_4_ - param_5 * auVar102._12_4_;
    auVar55._0_4_ = uVar27 & (uint)(fVar99 * fVar98 + fVar31);
    auVar55._4_4_ = uVar15 & (uint)(fVar104 * fVar103 + fVar41);
    auVar55._8_4_ = uVar28 & (uint)(fVar106 * fVar105 + fVar42);
    auVar55._12_4_ = uVar29 & (uint)(fVar111 * fVar110 + fVar43);
    auVar60 = blendvps(auVar55,auVar90,auVar39);
    fVar31 = auVar63._0_4_;
    auVar44._0_4_ = -(uint)((fVar75 != 0.0 && bVar9) && fVar31 != 0.0);
    auVar44._4_4_ = -(uint)((fVar79 != 0.0 && bVar10) && auVar63._4_4_ != 0.0);
    auVar44._8_4_ = -(uint)((fVar80 != 0.0 && bVar11) && auVar63._8_4_ != 0.0);
    auVar44._12_4_ = -(uint)((fVar81 != 0.0 && bVar12) && auVar63._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar44);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar40._0_8_ = auVar63._0_8_;
        auVar40._8_4_ = auVar63._4_4_;
        auVar40._12_4_ = auVar71._4_4_;
        auVar45._0_8_ = auVar60._0_8_;
        auVar45._8_4_ = auVar60._4_4_;
        auVar45._12_4_ = fVar79;
        *(float *)*pauVar25 = fVar31;
        *(int *)(*pauVar25 + 4) = auVar71._0_4_;
        *(int *)(*pauVar25 + 8) = auVar60._0_4_;
        *(float *)(*pauVar25 + 0xc) = fVar75;
        *(longlong *)pauVar25[1] = auVar40._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar45._8_8_;
        *(float *)pauVar25[2] = auVar63._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar71._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar60._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar80;
        *(float *)pauVar25[3] = auVar63._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar71._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar60._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar81;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar63,1);
          *(undefined8 *)pauVar25[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar63,2);
          *(undefined8 *)pauVar25[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar63,3);
          *(undefined8 *)pauVar25[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar71._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar71,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar71,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar71,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar60._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar60,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar60,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar60,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar75;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar77,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar77,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar77,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_sse4 @ 14034fb70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  byte bVar9;
  undefined4 unaff_EBX;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar81;
  undefined1 auVar77 [16];
  float fVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  float fVar93;
  float fVar94;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  
  uVar20 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar20 = param_7;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar34 = param_4 + param_5;
    fVar24 = param_5 * param_5;
    pauVar16 = (undefined1 (*) [16])((longlong)param_6 * 0x10 + param_1);
    lVar12 = (longlong)param_6 * 0xc + 0x20;
    uVar14 = 0;
    do {
      fVar57 = *(float *)(*pauVar16 + 0xc);
      auVar30 = *pauVar16;
      fVar25 = *(float *)(pauVar16[1] + 0xc);
      auVar80 = pauVar16[1];
      auVar44 = pauVar16[2];
      fVar56 = auVar44._12_4_;
      fVar47 = *(float *)(pauVar16[3] + 0xc);
      auVar97 = pauVar16[3];
      auVar36._4_4_ = -(uint)(fVar25 != 0.0);
      auVar36._0_4_ = -(uint)(fVar57 != 0.0);
      auVar36._8_4_ = -(uint)(fVar56 != 0.0);
      auVar36._12_4_ = -(uint)(fVar47 != 0.0);
      iVar10 = movmskps(unaff_EBX,auVar36);
      unaff_EBX = 0;
      if (iVar10 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar12);
        auVar26 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar12);
        pfVar8 = (float *)(param_2 + lVar12);
        auVar42 = insertps(auVar26,auVar36,0x8c);
        auVar35 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar12);
        auVar43 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar12);
        pfVar1 = (float *)(param_3 + lVar12);
        auVar48 = insertps(auVar43,auVar35,0x8c);
        fVar58 = auVar36._0_4_ - fVar34 * auVar35._0_4_;
        fVar59 = auVar36._12_4_ - fVar34 * auVar35._12_4_;
        fVar60 = auVar26._8_4_ - fVar34 * auVar43._8_4_;
        fVar61 = pfVar8[1] - fVar34 * pfVar1[1];
        fVar71 = auVar36._4_4_ - fVar34 * auVar35._4_4_;
        fVar74 = auVar26._0_4_ - fVar34 * auVar43._0_4_;
        fVar75 = auVar26._12_4_ - fVar34 * auVar43._12_4_;
        fVar76 = pfVar8[2] - fVar34 * pfVar1[2];
        fVar65 = auVar42._0_4_ - fVar34 * auVar48._0_4_;
        fVar68 = auVar42._4_4_ - fVar34 * auVar48._4_4_;
        fVar69 = *pfVar8 - fVar34 * *pfVar1;
        fVar70 = pfVar8[3] - fVar34 * pfVar1[3];
        fVar94 = *(float *)*pauVar16 - fVar58;
        fVar99 = *(float *)pauVar16[1] - fVar59;
        fVar100 = auVar44._0_4_ - fVar60;
        fVar101 = *(float *)pauVar16[3] - fVar61;
        fVar87 = *(float *)(*pauVar16 + 4) - fVar71;
        fVar89 = *(float *)(pauVar16[1] + 4) - fVar74;
        fVar90 = auVar44._4_4_ - fVar75;
        fVar92 = *(float *)(pauVar16[3] + 4) - fVar76;
        fVar83 = *(float *)(*pauVar16 + 8) - fVar65;
        fVar84 = *(float *)(pauVar16[1] + 8) - fVar68;
        fVar85 = auVar44._8_4_ - fVar69;
        fVar86 = *(float *)(pauVar16[3] + 8) - fVar70;
        auVar96._0_4_ = fVar83 * fVar83 + fVar87 * fVar87 + fVar94 * fVar94;
        auVar96._4_4_ = fVar84 * fVar84 + fVar89 * fVar89 + fVar99 * fVar99;
        auVar96._8_4_ = fVar85 * fVar85 + fVar90 * fVar90 + fVar100 * fVar100;
        auVar96._12_4_ = fVar86 * fVar86 + fVar92 * fVar92 + fVar101 * fVar101;
        auVar41 = sqrtps(auVar44,auVar96);
        auVar77._4_4_ = param_5;
        auVar77._0_4_ = param_5;
        auVar77._8_4_ = param_5;
        auVar77._12_4_ = param_5;
        auVar77 = divps(auVar77,auVar41);
        fVar91 = auVar77._0_4_;
        fVar93 = auVar77._4_4_;
        fVar81 = auVar77._8_4_;
        fVar82 = auVar77._12_4_;
        auVar62._0_4_ = auVar36._0_4_ - auVar35._0_4_ * param_4;
        auVar62._4_4_ = auVar36._12_4_ - auVar35._12_4_ * param_4;
        auVar62._8_4_ = auVar26._8_4_ - auVar43._8_4_ * param_4;
        auVar62._12_4_ = pfVar8[1] - pfVar1[1] * param_4;
        uVar19 = -(uint)(auVar96._0_4_ < fVar24);
        uVar21 = -(uint)(auVar96._4_4_ < fVar24);
        uVar22 = -(uint)(auVar96._8_4_ < fVar24);
        uVar23 = -(uint)(auVar96._12_4_ < fVar24);
        auVar95._0_4_ = (uint)(fVar94 * fVar91 + fVar58) & uVar19;
        auVar95._4_4_ = (uint)(fVar99 * fVar93 + fVar59) & uVar21;
        auVar95._8_4_ = (uint)(fVar100 * fVar81 + fVar60) & uVar22;
        auVar95._12_4_ = (uint)(fVar101 * fVar82 + fVar61) & uVar23;
        auVar41._4_4_ = -(uint)(auVar96._4_4_ < _UNK_1506895d4);
        auVar41._0_4_ = -(uint)(auVar96._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar41._8_4_ = -(uint)(auVar96._8_4_ < _UNK_1506895d8);
        auVar41._12_4_ = -(uint)(auVar96._12_4_ < _UNK_1506895dc);
        auVar96 = blendvps(auVar95,auVar62,auVar41);
        auVar52._0_4_ = auVar36._4_4_ - auVar35._4_4_ * param_4;
        auVar52._4_4_ = auVar26._0_4_ - auVar43._0_4_ * param_4;
        auVar52._8_4_ = auVar26._12_4_ - auVar43._12_4_ * param_4;
        auVar52._12_4_ = pfVar8[2] - pfVar1[2] * param_4;
        auVar88._0_4_ = (uint)(fVar87 * fVar91 + fVar71) & uVar19;
        auVar88._4_4_ = (uint)(fVar89 * fVar93 + fVar74) & uVar21;
        auVar88._8_4_ = (uint)(fVar90 * fVar81 + fVar75) & uVar22;
        auVar88._12_4_ = (uint)(fVar92 * fVar82 + fVar76) & uVar23;
        auVar77 = blendvps(auVar88,auVar52,auVar41);
        auVar43._0_4_ = auVar42._0_4_ - auVar48._0_4_ * param_4;
        auVar43._4_4_ = auVar42._4_4_ - auVar48._4_4_ * param_4;
        auVar43._8_4_ = *pfVar8 - *pfVar1 * param_4;
        auVar43._12_4_ = pfVar8[3] - pfVar1[3] * param_4;
        auVar35._0_4_ = uVar19 & (uint)(fVar91 * fVar83 + fVar65);
        auVar35._4_4_ = uVar21 & (uint)(fVar93 * fVar84 + fVar68);
        auVar35._8_4_ = uVar22 & (uint)(fVar81 * fVar85 + fVar69);
        auVar35._12_4_ = uVar23 & (uint)(fVar82 * fVar86 + fVar70);
        auVar36 = blendvps(auVar35,auVar43,auVar41);
        fVar58 = auVar96._0_4_;
        auVar26._0_4_ = -(uint)(fVar58 != 0.0 && fVar57 != 0.0);
        auVar26._4_4_ = -(uint)(auVar96._4_4_ != 0.0 && fVar25 != 0.0);
        auVar26._8_4_ = -(uint)(auVar96._8_4_ != 0.0 && fVar56 != 0.0);
        auVar26._12_4_ = -(uint)(auVar96._12_4_ != 0.0 && fVar47 != 0.0);
        iVar10 = movmskps(iVar10,auVar26);
        unaff_EBX = 0;
        if (iVar10 != 0) {
          bVar9 = (char)((char)iVar10 << 4) >> 4;
          unaff_EBX = CONCAT31((int3)((uint)iVar10 >> 8),bVar9);
          if ((~bVar9 & 0xf) == 0) {
            auVar44._0_8_ = auVar96._0_8_;
            auVar44._8_4_ = auVar96._4_4_;
            auVar44._12_4_ = auVar77._4_4_;
            auVar80._0_8_ = auVar36._0_8_;
            auVar80._8_4_ = auVar36._4_4_;
            auVar80._12_4_ = fVar25;
            auVar97._0_8_ = CONCAT44(auVar77._8_4_,auVar96._8_4_);
            auVar97._8_4_ = auVar96._12_4_;
            auVar97._12_4_ = auVar77._12_4_;
            *(ulonglong *)*pauVar16 = CONCAT44(auVar77._0_4_,fVar58);
            *(ulonglong *)(*pauVar16 + 8) = CONCAT44(fVar57,auVar36._0_4_);
            *(longlong *)pauVar16[1] = auVar44._8_8_;
            *(longlong *)(pauVar16[1] + 8) = auVar80._8_8_;
            *(undefined8 *)pauVar16[2] = auVar97._0_8_;
            *(int *)(pauVar16[2] + 8) = auVar36._8_4_;
            *(float *)(pauVar16[2] + 0xc) = fVar56;
            *(longlong *)pauVar16[3] = auVar97._8_8_;
            *(int *)(pauVar16[3] + 8) = auVar36._12_4_;
            *(float *)(pauVar16[3] + 0xc) = fVar47;
          }
          else {
            if ((bVar9 & 1) != 0) {
              *(float *)*pauVar16 = fVar58;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar96,1);
              *(undefined8 *)pauVar16[1] = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar96,2);
              *(undefined8 *)pauVar16[2] = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar96,3);
              *(undefined8 *)pauVar16[3] = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 4) = auVar77._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar77,1);
              *(undefined8 *)(pauVar16[1] + 4) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar77,2);
              *(undefined8 *)(pauVar16[2] + 4) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar77,3);
              *(undefined8 *)(pauVar16[3] + 4) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 8) = auVar36._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar36,1);
              *(undefined8 *)(pauVar16[1] + 8) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar36,2);
              *(undefined8 *)(pauVar16[2] + 8) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar36,3);
              *(undefined8 *)(pauVar16[3] + 8) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              uVar3 = extractps(auVar30,3);
              *(undefined8 *)(*pauVar16 + 0xc) = uVar3;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar80,3);
              *(undefined8 *)(pauVar16[1] + 0xc) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar44,3);
              *(undefined8 *)(pauVar16[2] + 0xc) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar97,3);
              *(undefined8 *)(pauVar16[3] + 0xc) = uVar3;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      pauVar16 = pauVar16 + 4;
      lVar12 = lVar12 + 0x30;
    } while (uVar14 < (uVar20 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar14) {
      return;
    }
  }
  uVar20 = (uint)uVar14;
  bVar4 = (int)(uVar20 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar30._0_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar20 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar30._4_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar20 | _UNK_150631e08) < (int)param_7;
  auVar30._8_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar20 | _UNK_150631e0c) < (int)param_7;
  auVar30._12_4_ = -(uint)bVar7;
  param_6 = param_6 + uVar20;
  lVar12 = (longlong)param_6;
  pfVar8 = (float *)(param_1 + lVar12 * 0x10);
  iVar10 = movmskps((int)(lVar12 * 0x10),auVar30);
  if (iVar10 == 0xf) {
    auVar44 = *(undefined1 (*) [16])(pfVar8 + 8);
    auVar42._0_8_ = CONCAT44(pfVar8[6],pfVar8[2]);
    auVar42._8_4_ = pfVar8[3];
    auVar42._12_4_ = pfVar8[7];
    auVar50._0_8_ = auVar44._0_8_;
    auVar50._8_4_ = auVar44._4_4_;
    auVar50._12_4_ = pfVar8[0xd];
    auVar49._8_8_ = auVar50._8_8_;
    auVar45._12_4_ = pfVar8[0xc];
    auVar45._8_4_ = auVar44._0_4_;
    auVar54._0_8_ = CONCAT44(pfVar8[0xe],auVar44._8_4_);
    auVar54._8_4_ = auVar44._12_4_;
    auVar54._12_4_ = pfVar8[0xf];
    auVar45._4_4_ = pfVar8[4];
    auVar45._0_4_ = *pfVar8;
    auVar49._4_4_ = pfVar8[5];
    auVar49._0_4_ = pfVar8[1];
    auVar48._8_8_ = auVar54._0_8_;
    auVar48._0_8_ = auVar42._0_8_;
    auVar53._8_8_ = auVar54._8_8_;
    auVar53._0_8_ = auVar42._8_8_;
  }
  else {
    auVar27._0_4_ = ___xmm_00000030000000200000001000000000 & auVar30._0_4_;
    auVar27._4_4_ = _UNK_150b511c4 & auVar30._4_4_;
    auVar27._8_4_ = _UNK_150b511c8 & auVar30._8_4_;
    auVar27._12_4_ = _UNK_150b511cc & auVar30._12_4_;
    lVar15 = extractps(auVar27,1);
    lVar17 = extractps(auVar27,2);
    lVar11 = extractps(auVar27,3);
    auVar44 = insertps(ZEXT416((uint)*pfVar8),*(undefined4 *)((longlong)pfVar8 + lVar15),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((longlong)pfVar8 + lVar17),0x20);
    auVar45 = insertps(auVar44,*(undefined4 *)((longlong)pfVar8 + lVar11),0x30);
    auVar44 = ___xmm_00000034000000240000001400000004 & auVar30;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar44._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._4_4_),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._8_4_),0x20);
    auVar49 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._12_4_),0x30);
    auVar44 = ___xmm_00000038000000280000001800000008 & auVar30;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar44._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._4_4_),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._8_4_),0x20);
    auVar48 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._12_4_),0x30);
    auVar44 = ___xmm_0000003c0000002c0000001c0000000c & auVar30;
    uVar20 = auVar44._4_4_;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar44._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)uVar20),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._8_4_),0x20);
    auVar53 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._12_4_),0x30);
  }
  fVar24 = auVar53._0_4_;
  fVar34 = auVar53._4_4_;
  fVar56 = auVar53._8_4_;
  fVar57 = auVar53._12_4_;
  auVar28._0_4_ = -(uint)(fVar24 != 0.0 && bVar4);
  auVar28._4_4_ = -(uint)(fVar34 != 0.0 && bVar5);
  auVar28._8_4_ = -(uint)(fVar56 != 0.0 && bVar6);
  auVar28._12_4_ = -(uint)(fVar57 != 0.0 && bVar7);
  iVar13 = movmskps(uVar20,auVar28);
  if (iVar13 != 0) {
    pauVar16 = (undefined1 (*) [16])(param_2 + lVar12 * 0xc);
    if ((~((char)((char)iVar10 << 4) >> 4) & 0xfU) == 0) {
      auVar44 = *pauVar16;
      auVar36 = pauVar16[1];
      auVar63._0_4_ = auVar44._0_4_;
      auVar80 = insertps(auVar36,auVar44,0x8c);
      auVar63._4_4_ = auVar44._12_4_;
      auVar63._8_4_ = auVar36._8_4_;
      auVar63._12_4_ = *(undefined4 *)(pauVar16[2] + 4);
      auVar66._4_4_ = auVar36._0_4_;
      auVar66._0_4_ = auVar44._4_4_;
      auVar66._8_4_ = auVar36._12_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar16[2] + 8);
      auVar72._0_8_ = auVar80._0_8_;
      auVar72._8_4_ = *(undefined4 *)pauVar16[2];
      auVar72._12_4_ = *(undefined4 *)(pauVar16[2] + 0xc);
      auVar44 = *(undefined1 (*) [16])(param_3 + lVar12 * 0xc);
      auVar36 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar12 * 0xc);
      puVar2 = (undefined4 *)(param_3 + 0x20 + lVar12 * 0xc);
      auVar78._0_4_ = auVar44._0_4_;
      auVar80 = insertps(auVar36,auVar44,0x8c);
      auVar78._4_4_ = auVar44._12_4_;
      auVar78._8_4_ = auVar36._8_4_;
      auVar78._12_4_ = puVar2[1];
      auVar37._4_4_ = auVar36._0_4_;
      auVar37._0_4_ = auVar44._4_4_;
      auVar37._8_4_ = auVar36._12_4_;
      auVar37._12_4_ = puVar2[2];
      auVar55._0_8_ = auVar80._0_8_;
      auVar55._8_4_ = *puVar2;
      auVar55._12_4_ = puVar2[3];
    }
    else {
      auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar30._0_4_;
      auVar29._4_4_ = _UNK_150b50da4 & auVar30._4_4_;
      auVar29._8_4_ = _UNK_150b50da8 & auVar30._8_4_;
      auVar29._12_4_ = _UNK_150b50dac & auVar30._12_4_;
      lVar15 = extractps(auVar29,1);
      lVar17 = extractps(auVar29,2);
      lVar18 = extractps(auVar29,3);
      auVar44 = insertps(ZEXT416(*(uint *)*pauVar16),*(undefined4 *)(*pauVar16 + lVar15),0x10);
      auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar16 + lVar17),0x20);
      auVar63 = insertps(auVar44,*(undefined4 *)(*pauVar16 + lVar18),0x30);
      auVar44 = ___xmm_000000280000001c0000001000000004 & auVar30;
      auVar36 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar44._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar44._4_4_),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar44._8_4_),0x20);
      auVar66 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar44._12_4_),0x30);
      auVar30 = ___xmm_0000002c000000200000001400000008 & auVar30;
      auVar36 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar30._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar30._4_4_),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar30._8_4_),0x20);
      auVar72 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar30._12_4_),0x30);
      lVar11 = param_3 + lVar12 * 0xc;
      auVar36 = insertps(ZEXT416(*(uint *)(param_3 + lVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar11)
                         ,0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(lVar17 + lVar11),0x20);
      auVar78 = insertps(auVar36,*(undefined4 *)(lVar18 + lVar11),0x30);
      auVar36 = insertps(ZEXT416(*(uint *)((ulonglong)auVar44._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar44._4_4_ + lVar11),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar44._8_4_ + lVar11),0x20);
      auVar37 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar44._12_4_ + lVar11),0x30);
      auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)auVar30._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar30._4_4_ + lVar11),0x10);
      auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)auVar30._8_4_ + lVar11),0x20);
      auVar55 = insertps(auVar44,*(undefined4 *)((ulonglong)auVar30._12_4_ + lVar11),0x30);
    }
    fVar25 = param_4 + param_5;
    fVar85 = auVar63._0_4_ - fVar25 * auVar78._0_4_;
    fVar86 = auVar63._4_4_ - fVar25 * auVar78._4_4_;
    fVar87 = auVar63._8_4_ - fVar25 * auVar78._8_4_;
    fVar89 = auVar63._12_4_ - fVar25 * auVar78._12_4_;
    fVar75 = auVar66._0_4_ - fVar25 * auVar37._0_4_;
    fVar76 = auVar66._4_4_ - fVar25 * auVar37._4_4_;
    fVar91 = auVar66._8_4_ - fVar25 * auVar37._8_4_;
    fVar93 = auVar66._12_4_ - fVar25 * auVar37._12_4_;
    fVar69 = auVar72._0_4_ - fVar25 * auVar55._0_4_;
    fVar70 = auVar72._4_4_ - fVar25 * auVar55._4_4_;
    fVar71 = auVar72._8_4_ - fVar25 * auVar55._8_4_;
    fVar74 = auVar72._12_4_ - fVar25 * auVar55._12_4_;
    fVar25 = auVar45._0_4_ - fVar85;
    fVar47 = auVar45._4_4_ - fVar86;
    fVar58 = auVar45._8_4_ - fVar87;
    fVar59 = auVar45._12_4_ - fVar89;
    fVar60 = auVar49._0_4_ - fVar75;
    fVar61 = auVar49._4_4_ - fVar76;
    fVar65 = auVar49._8_4_ - fVar91;
    fVar68 = auVar49._12_4_ - fVar93;
    auVar40._0_4_ = auVar48._0_4_ - fVar69;
    auVar40._4_4_ = auVar48._4_4_ - fVar70;
    auVar40._8_4_ = auVar48._8_4_ - fVar71;
    auVar40._12_4_ = auVar48._12_4_ - fVar74;
    auVar31._0_4_ = auVar40._0_4_ * auVar40._0_4_ + fVar60 * fVar60 + fVar25 * fVar25;
    auVar31._4_4_ = auVar40._4_4_ * auVar40._4_4_ + fVar61 * fVar61 + fVar47 * fVar47;
    auVar31._8_4_ = auVar40._8_4_ * auVar40._8_4_ + fVar65 * fVar65 + fVar58 * fVar58;
    auVar31._12_4_ = auVar40._12_4_ * auVar40._12_4_ + fVar68 * fVar68 + fVar59 * fVar59;
    auVar98._4_4_ = param_5;
    auVar98._0_4_ = param_5;
    auVar98._8_4_ = param_5;
    auVar98._12_4_ = param_5;
    auVar44 = sqrtps(auVar40,auVar31);
    auVar44 = divps(auVar98,auVar44);
    fVar81 = auVar44._0_4_;
    fVar82 = auVar44._4_4_;
    fVar83 = auVar44._8_4_;
    fVar84 = auVar44._12_4_;
    auVar64._0_4_ = auVar63._0_4_ - auVar78._0_4_ * param_4;
    auVar64._4_4_ = auVar63._4_4_ - auVar78._4_4_ * param_4;
    auVar64._8_4_ = auVar63._8_4_ - auVar78._8_4_ * param_4;
    auVar64._12_4_ = auVar63._12_4_ - auVar78._12_4_ * param_4;
    param_5 = param_5 * param_5;
    uVar20 = -(uint)(auVar31._0_4_ < param_5);
    uVar19 = -(uint)(auVar31._4_4_ < param_5);
    uVar21 = -(uint)(auVar31._8_4_ < param_5);
    uVar22 = -(uint)(auVar31._12_4_ < param_5);
    auVar32._4_4_ = -(uint)(auVar31._4_4_ < _UNK_1506895d4);
    auVar32._0_4_ = -(uint)(auVar31._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar32._8_4_ = -(uint)(auVar31._8_4_ < _UNK_1506895d8);
    auVar32._12_4_ = -(uint)(auVar31._12_4_ < _UNK_1506895dc);
    auVar46._0_4_ = (uint)(fVar25 * fVar81 + fVar85) & uVar20;
    auVar46._4_4_ = (uint)(fVar47 * fVar82 + fVar86) & uVar19;
    auVar46._8_4_ = (uint)(fVar58 * fVar83 + fVar87) & uVar21;
    auVar46._12_4_ = (uint)(fVar59 * fVar84 + fVar89) & uVar22;
    auVar44 = blendvps(auVar46,auVar64,auVar32);
    auVar67._0_4_ = auVar66._0_4_ - auVar37._0_4_ * param_4;
    auVar67._4_4_ = auVar66._4_4_ - auVar37._4_4_ * param_4;
    auVar67._8_4_ = auVar66._8_4_ - auVar37._8_4_ * param_4;
    auVar67._12_4_ = auVar66._12_4_ - auVar37._12_4_ * param_4;
    auVar51._0_4_ = (uint)(fVar60 * fVar81 + fVar75) & uVar20;
    auVar51._4_4_ = (uint)(fVar61 * fVar82 + fVar76) & uVar19;
    auVar51._8_4_ = (uint)(fVar65 * fVar83 + fVar91) & uVar21;
    auVar51._12_4_ = (uint)(fVar68 * fVar84 + fVar93) & uVar22;
    auVar36 = blendvps(auVar51,auVar67,auVar32);
    auVar73._0_4_ = auVar72._0_4_ - param_4 * auVar55._0_4_;
    auVar73._4_4_ = auVar72._4_4_ - param_4 * auVar55._4_4_;
    auVar73._8_4_ = auVar72._8_4_ - param_4 * auVar55._8_4_;
    auVar73._12_4_ = auVar72._12_4_ - param_4 * auVar55._12_4_;
    auVar79._0_4_ = uVar20 & (uint)(fVar81 * auVar40._0_4_ + fVar69);
    auVar79._4_4_ = uVar19 & (uint)(fVar82 * auVar40._4_4_ + fVar70);
    auVar79._8_4_ = uVar21 & (uint)(fVar83 * auVar40._8_4_ + fVar71);
    auVar79._12_4_ = uVar22 & (uint)(fVar84 * auVar40._12_4_ + fVar74);
    auVar80 = blendvps(auVar79,auVar73,auVar32);
    fVar25 = auVar44._0_4_;
    auVar38._0_4_ = -(uint)((fVar24 != 0.0 && bVar4) && fVar25 != 0.0);
    auVar38._4_4_ = -(uint)((fVar34 != 0.0 && bVar5) && auVar44._4_4_ != 0.0);
    auVar38._8_4_ = -(uint)((fVar56 != 0.0 && bVar6) && auVar44._8_4_ != 0.0);
    auVar38._12_4_ = -(uint)((fVar57 != 0.0 && bVar7) && auVar44._12_4_ != 0.0);
    iVar10 = movmskps(param_6 * 3,auVar38);
    if (iVar10 != 0) {
      bVar9 = (char)((char)iVar10 << 4) >> 4;
      if ((~bVar9 & 0xf) == 0) {
        auVar33._0_8_ = auVar44._0_8_;
        auVar33._8_4_ = auVar44._4_4_;
        auVar33._12_4_ = auVar36._4_4_;
        auVar39._0_8_ = auVar80._0_8_;
        auVar39._8_4_ = auVar80._4_4_;
        auVar39._12_4_ = fVar34;
        *(ulonglong *)pfVar8 = CONCAT44(auVar36._0_4_,fVar25);
        *(ulonglong *)(pfVar8 + 2) = CONCAT44(fVar24,auVar80._0_4_);
        *(longlong *)(pfVar8 + 4) = auVar33._8_8_;
        *(longlong *)(pfVar8 + 6) = auVar39._8_8_;
        pfVar8[8] = auVar44._8_4_;
        pfVar8[9] = auVar36._8_4_;
        pfVar8[10] = auVar80._8_4_;
        pfVar8[0xb] = fVar56;
        pfVar8[0xc] = auVar44._12_4_;
        pfVar8[0xd] = auVar36._12_4_;
        pfVar8[0xe] = auVar80._12_4_;
        pfVar8[0xf] = fVar57;
      }
      else {
        if ((bVar9 & 1) != 0) {
          *pfVar8 = fVar25;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar44,1);
          *(undefined8 *)(pfVar8 + 4) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar44,2);
          *(undefined8 *)(pfVar8 + 8) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar44,3);
          *(undefined8 *)(pfVar8 + 0xc) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[1] = auVar36._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar36,1);
          *(undefined8 *)(pfVar8 + 5) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar36,2);
          *(undefined8 *)(pfVar8 + 9) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar36,3);
          *(undefined8 *)(pfVar8 + 0xd) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[2] = auVar80._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar80,1);
          *(undefined8 *)(pfVar8 + 6) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar80,2);
          *(undefined8 *)(pfVar8 + 10) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar80,3);
          *(undefined8 *)(pfVar8 + 0xe) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[3] = fVar24;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar53,1);
          *(undefined8 *)(pfVar8 + 7) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar53,2);
          *(undefined8 *)(pfVar8 + 0xb) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar53,3);
          *(undefined8 *)(pfVar8 + 0xf) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_sse4 @ 140350720

void ApplySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_sse4
               (void)

{
  ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4
            ();
  return;
}

// ApplySphericalConstraintsWithMap_sse4 @ 140350790

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithMap_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  byte bVar22;
  undefined4 unaff_EBP;
  int iVar23;
  float *pfVar24;
  longlong lVar25;
  uint *puVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  longlong in_R11;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar46;
  undefined8 uVar41;
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  
  uVar18 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar18 = param_7;
  }
  if ((int)(uVar18 & 0xfffffffc) < 1) {
    uVar19 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    in_R11 = (longlong)param_6 * 0x10 + param_1;
    pfVar24 = (float *)(param_2 + 0x20 + (longlong)param_6 * 0xc);
    uVar21 = 0;
    uVar19 = 0;
    do {
      auVar57 = *(undefined1 (*) [16])(in_R11 + uVar21 * 4);
      fVar40 = auVar57._12_4_;
      auVar42 = *(undefined1 (*) [16])(in_R11 + 0x10 + uVar21 * 4);
      fVar46 = auVar42._12_4_;
      auVar63 = *(undefined1 (*) [16])(in_R11 + 0x20 + uVar21 * 4);
      fVar48 = auVar63._12_4_;
      auVar76 = *(undefined1 (*) [16])(in_R11 + 0x30 + uVar21 * 4);
      fVar50 = auVar76._12_4_;
      auVar4._4_4_ = -(uint)(fVar46 != _UNK_150aa8f64);
      auVar4._0_4_ = -(uint)(fVar40 != __xmm_00000000000000000000000000000000);
      auVar4._8_4_ = -(uint)(fVar48 != (float)DAT_150aa8f68);
      auVar4._12_4_ = -(uint)(fVar50 != DAT_150aa8f68._4_4_);
      iVar23 = movmskps(unaff_EBP,auVar4);
      unaff_EBP = 0;
      if (iVar23 != 0) {
        auVar4 = *(undefined1 (*) [16])(pfVar24 + -8);
        auVar75 = *(undefined1 (*) [16])(pfVar24 + -4);
        auVar74 = insertps(auVar75,auVar4,0x8c);
        fVar84 = auVar57._0_4_ - auVar4._0_4_;
        fVar85 = auVar42._0_4_ - auVar4._12_4_;
        fVar86 = auVar63._0_4_ - auVar75._8_4_;
        fVar87 = auVar76._0_4_ - pfVar24[1];
        fVar39 = auVar57._4_4_ - auVar4._4_4_;
        fVar45 = auVar42._4_4_ - auVar75._0_4_;
        fVar47 = auVar63._4_4_ - auVar75._12_4_;
        fVar49 = auVar76._4_4_ - pfVar24[2];
        fVar68 = auVar57._8_4_ - auVar74._0_4_;
        fVar71 = auVar42._8_4_ - auVar74._4_4_;
        fVar72 = auVar63._8_4_ - *pfVar24;
        fVar73 = auVar76._8_4_ - pfVar24[3];
        fVar80 = fVar68 * fVar68 + fVar39 * fVar39 + fVar84 * fVar84;
        fVar81 = fVar71 * fVar71 + fVar45 * fVar45 + fVar85 * fVar85;
        fVar82 = fVar72 * fVar72 + fVar47 * fVar47 + fVar86 * fVar86;
        fVar83 = fVar73 * fVar73 + fVar49 * fVar49 + fVar87 * fVar87;
        pfVar1 = (float *)(param_3 + (uVar21 & 0xffffffff));
        auVar56._0_4_ = *pfVar1 * param_5 + param_4;
        auVar56._4_4_ = pfVar1[1] * param_5 + param_4;
        auVar56._8_4_ = pfVar1[2] * param_5 + param_4;
        auVar56._12_4_ = pfVar1[3] * param_5 + param_4;
        auVar31._0_4_ =
             -(uint)(auVar56._0_4_ * auVar56._0_4_ + ___xmm_322bcc77322bcc77322bcc77322bcc77 <
                     fVar80 && fVar40 != __xmm_00000000000000000000000000000000);
        auVar31._4_4_ =
             -(uint)(auVar56._4_4_ * auVar56._4_4_ + _UNK_1506895d4 < fVar81 &&
                    fVar46 != _UNK_150aa8f64);
        auVar31._8_4_ =
             -(uint)(auVar56._8_4_ * auVar56._8_4_ + _UNK_1506895d8 < fVar82 &&
                    fVar48 != (float)DAT_150aa8f68);
        auVar31._12_4_ =
             -(uint)(auVar56._12_4_ * auVar56._12_4_ + _UNK_1506895dc < fVar83 &&
                    fVar50 != DAT_150aa8f68._4_4_);
        iVar23 = movmskps(iVar23,auVar31);
        unaff_EBP = 0;
        if (iVar23 != 0) {
          auVar17._4_4_ = fVar81;
          auVar17._0_4_ = fVar80;
          auVar17._8_4_ = fVar82;
          auVar17._12_4_ = fVar83;
          auVar31 = sqrtps(auVar31,auVar17);
          auVar31 = divps(auVar56,auVar31);
          fVar80 = auVar31._0_4_;
          fVar81 = auVar31._4_4_;
          fVar82 = auVar31._8_4_;
          fVar83 = auVar31._12_4_;
          fVar78 = auVar4._0_4_ + fVar84 * fVar80;
          fVar79 = auVar4._12_4_ + fVar85 * fVar81;
          fVar86 = auVar75._8_4_ + fVar86 * fVar82;
          fVar87 = pfVar24[1] + fVar87 * fVar83;
          fVar84 = auVar4._4_4_ + fVar39 * fVar80;
          fVar85 = auVar75._0_4_ + fVar45 * fVar81;
          fVar47 = auVar75._12_4_ + fVar47 * fVar82;
          fVar49 = pfVar24[2] + fVar49 * fVar83;
          fVar39 = auVar74._0_4_ + fVar68 * fVar80;
          fVar45 = auVar74._4_4_ + fVar71 * fVar81;
          auVar75._0_8_ = CONCAT44(fVar45,fVar39);
          auVar75._8_4_ = *pfVar24 + fVar72 * fVar82;
          auVar75._12_4_ = pfVar24[3] + fVar73 * fVar83;
          bVar22 = (char)((char)iVar23 << 4) >> 4;
          unaff_EBP = CONCAT31((int3)((uint)iVar23 >> 8),bVar22);
          if ((~bVar22 & 0xf) == 0) {
            auVar57._4_4_ = fVar79;
            auVar57._0_4_ = fVar78;
            auVar57._8_4_ = fVar79;
            auVar57._12_4_ = fVar85;
            auVar42._8_4_ = fVar45;
            auVar42._0_8_ = auVar75._0_8_;
            auVar42._12_4_ = fVar46;
            auVar63._8_8_ = auVar42._8_8_;
            auVar76._0_8_ = CONCAT44(fVar48,auVar75._8_4_);
            auVar76._8_4_ = auVar75._12_4_;
            auVar76._12_4_ = fVar50;
            puVar2 = (undefined8 *)(in_R11 + uVar21 * 4);
            *puVar2 = CONCAT44(fVar84,fVar78);
            puVar2[1] = CONCAT44(fVar40,fVar39);
            auVar63._0_8_ = auVar57._8_8_;
            *(undefined1 (*) [16])(in_R11 + 0x10 + uVar21 * 4) = auVar63;
            puVar2 = (undefined8 *)(in_R11 + 0x20 + uVar21 * 4);
            *puVar2 = CONCAT44(fVar47,fVar86);
            puVar2[1] = auVar76._0_8_;
            auVar74._8_8_ = auVar76._8_8_;
            auVar74._4_4_ = fVar49;
            auVar74._0_4_ = fVar87;
            *(undefined1 (*) [16])(in_R11 + 0x30 + uVar21 * 4) = auVar74;
          }
          else {
            if ((bVar22 & 1) != 0) {
              *(float *)(in_R11 + uVar21 * 4) = fVar78;
            }
            if ((bVar22 & 2) != 0) {
              auVar16._4_4_ = fVar79;
              auVar16._0_4_ = fVar78;
              auVar16._8_4_ = fVar86;
              auVar16._12_4_ = fVar87;
              uVar41 = extractps(auVar16,1);
              *(undefined8 *)(in_R11 + 0x10 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              auVar15._4_4_ = fVar79;
              auVar15._0_4_ = fVar78;
              auVar15._8_4_ = fVar86;
              auVar15._12_4_ = fVar87;
              uVar41 = extractps(auVar15,2);
              *(undefined8 *)(in_R11 + 0x20 + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              auVar14._4_4_ = fVar79;
              auVar14._0_4_ = fVar78;
              auVar14._8_4_ = fVar86;
              auVar14._12_4_ = fVar87;
              uVar41 = extractps(auVar14,3);
              *(undefined8 *)(in_R11 + 0x30 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 1) != 0) {
              *(float *)(in_R11 + 4 + uVar21 * 4) = fVar84;
            }
            if ((bVar22 & 2) != 0) {
              auVar13._4_4_ = fVar85;
              auVar13._0_4_ = fVar84;
              auVar13._8_4_ = fVar47;
              auVar13._12_4_ = fVar49;
              uVar41 = extractps(auVar13,1);
              *(undefined8 *)(in_R11 + 0x14 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              auVar12._4_4_ = fVar85;
              auVar12._0_4_ = fVar84;
              auVar12._8_4_ = fVar47;
              auVar12._12_4_ = fVar49;
              uVar41 = extractps(auVar12,2);
              *(undefined8 *)(in_R11 + 0x24 + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              auVar11._4_4_ = fVar85;
              auVar11._0_4_ = fVar84;
              auVar11._8_4_ = fVar47;
              auVar11._12_4_ = fVar49;
              uVar41 = extractps(auVar11,3);
              *(undefined8 *)(in_R11 + 0x34 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 1) != 0) {
              *(float *)(in_R11 + 8 + uVar21 * 4) = fVar39;
            }
            if ((bVar22 & 2) != 0) {
              uVar41 = extractps(auVar75,1);
              *(undefined8 *)(in_R11 + 0x18 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              uVar41 = extractps(auVar75,2);
              *(undefined8 *)(in_R11 + 0x28 + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              uVar41 = extractps(auVar75,3);
              *(undefined8 *)(in_R11 + 0x38 + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 1) != 0) {
              uVar41 = extractps(auVar57,3);
              *(undefined8 *)(in_R11 + 0xc + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 2) != 0) {
              uVar41 = extractps(auVar42,3);
              *(undefined8 *)(in_R11 + 0x1c + uVar21 * 4) = uVar41;
            }
            if ((bVar22 & 4) != 0) {
              uVar41 = extractps(auVar63,3);
              *(undefined8 *)(in_R11 + 0x2c + uVar21 * 4) = uVar41;
            }
            if ((char)bVar22 < '\0') {
              uVar41 = extractps(auVar76,3);
              *(undefined8 *)(in_R11 + 0x3c + uVar21 * 4) = uVar41;
            }
          }
        }
      }
      uVar19 = uVar19 + 4;
      uVar21 = uVar21 + 0x10;
      pfVar24 = pfVar24 + 0xc;
    } while (uVar19 < (uVar18 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar19) {
      return;
    }
  }
  uVar29 = (uint)in_R11;
  uVar18 = (uint)uVar19;
  bVar5 = (int)(uVar18 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  uVar51 = -(uint)bVar5;
  bVar6 = (int)(uVar18 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  uVar52 = -(uint)bVar6;
  bVar7 = (int)(uVar18 | _UNK_150631e08) < (int)param_7;
  uVar53 = -(uint)bVar7;
  bVar8 = (int)(uVar18 | _UNK_150631e0c) < (int)param_7;
  uVar54 = -(uint)bVar8;
  lVar28 = (longlong)(int)(param_6 + uVar18) * 0x10;
  pauVar20 = (undefined1 (*) [16])(param_1 + lVar28);
  auVar9._4_4_ = uVar52;
  auVar9._0_4_ = uVar51;
  auVar9._8_4_ = uVar53;
  auVar9._12_4_ = uVar54;
  uVar27 = movmskps((int)lVar28,auVar9);
  if (uVar27 == 0xf) {
    auVar57 = *pauVar20;
    auVar42 = pauVar20[2];
    auVar61._8_4_ = auVar57._4_4_;
    auVar61._0_8_ = auVar57._0_8_;
    auVar61._12_4_ = *(undefined4 *)(pauVar20[1] + 4);
    auVar58._4_4_ = *(undefined4 *)pauVar20[1];
    auVar58._0_4_ = auVar57._0_4_;
    auVar33._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[1] + 8),auVar57._8_4_);
    auVar33._8_4_ = auVar57._12_4_;
    auVar33._12_4_ = *(undefined4 *)(pauVar20[1] + 0xc);
    auVar60._8_4_ = auVar42._4_4_;
    auVar60._0_8_ = auVar42._0_8_;
    auVar60._12_4_ = *(undefined4 *)(pauVar20[3] + 4);
    auVar59._8_8_ = auVar60._8_8_;
    auVar58._12_4_ = *(undefined4 *)pauVar20[3];
    auVar58._8_4_ = auVar42._0_4_;
    auVar44._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[3] + 8),auVar42._8_4_);
    auVar44._8_4_ = auVar42._12_4_;
    auVar44._12_4_ = *(undefined4 *)(pauVar20[3] + 0xc);
    auVar59._0_8_ = auVar61._8_8_;
    auVar65._8_8_ = auVar44._0_8_;
    auVar65._0_8_ = auVar33._0_8_;
    auVar43._8_8_ = auVar44._8_8_;
    auVar43._0_8_ = auVar33._8_8_;
  }
  else {
    auVar32._0_4_ = ___xmm_00000030000000200000001000000000 & uVar51;
    auVar32._4_4_ = _UNK_150b511c4 & uVar52;
    auVar32._8_4_ = _UNK_150b511c8 & uVar53;
    auVar32._12_4_ = _UNK_150b511cc & uVar54;
    lVar30 = extractps(auVar32,1);
    lVar28 = extractps(auVar32,2);
    lVar25 = extractps(auVar32,3);
    auVar57 = insertps(ZEXT416(*(uint *)*pauVar20),*(undefined4 *)(*pauVar20 + lVar30),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + lVar28),0x20);
    auVar58 = insertps(auVar57,*(undefined4 *)(*pauVar20 + lVar25),0x30);
    auVar57 = insertps(ZEXT416(*(uint *)(*pauVar20 +
                                        (___xmm_00000034000000240000001400000004 & uVar51))),
                       *(undefined4 *)(*pauVar20 + (_UNK_150b511d4 & uVar52)),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511d8 & uVar53)),0x20);
    auVar59 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511dc & uVar54)),0x30);
    auVar57 = insertps(ZEXT416(*(uint *)(*pauVar20 +
                                        (___xmm_00000038000000280000001800000008 & uVar51))),
                       *(undefined4 *)(*pauVar20 + (_UNK_150b511e4 & uVar52)),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511e8 & uVar53)),0x20);
    auVar65 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511ec & uVar54)),0x30);
    uVar29 = _UNK_150b511f4 & uVar52;
    auVar57 = insertps(ZEXT416(*(uint *)(*pauVar20 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar51))),
                       *(undefined4 *)(*pauVar20 + uVar29),0x10);
    auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511f8 & uVar53)),0x20);
    auVar43 = insertps(auVar57,*(undefined4 *)(*pauVar20 + (_UNK_150b511fc & uVar54)),0x30);
  }
  fVar40 = auVar43._0_4_;
  fVar46 = auVar43._4_4_;
  fVar48 = auVar43._8_4_;
  fVar50 = auVar43._12_4_;
  auVar34._0_4_ = -(uint)(fVar40 != 0.0 && bVar5);
  auVar34._4_4_ = -(uint)(fVar46 != 0.0 && bVar6);
  auVar34._8_4_ = -(uint)(fVar48 != 0.0 && bVar7);
  auVar34._12_4_ = -(uint)(fVar50 != 0.0 && bVar8);
  iVar23 = movmskps(uVar29,auVar34);
  if (iVar23 != 0) {
    bVar22 = ~((char)((char)uVar27 << 4) >> 4);
    pauVar3 = (undefined1 (*) [16])(param_2 + (longlong)(int)(param_6 + uVar18) * 0xc);
    if ((bVar22 & 0xf) == 0) {
      auVar57 = *pauVar3;
      auVar42 = pauVar3[1];
      auVar66._0_4_ = auVar57._0_4_;
      auVar63 = insertps(auVar42,auVar57,0x8c);
      auVar66._4_4_ = auVar57._12_4_;
      auVar66._8_4_ = auVar42._8_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
      auVar69._4_4_ = auVar42._0_4_;
      auVar69._0_4_ = auVar57._4_4_;
      auVar69._8_4_ = auVar42._12_4_;
      auVar69._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
      auVar62._0_8_ = auVar63._0_8_;
      auVar62._8_4_ = *(undefined4 *)pauVar3[2];
      auVar62._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
    }
    else {
      auVar35._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar51;
      auVar35._4_4_ = _UNK_150b50da4 & uVar52;
      auVar35._8_4_ = _UNK_150b50da8 & uVar53;
      auVar35._12_4_ = _UNK_150b50dac & uVar54;
      lVar30 = extractps(auVar35,1);
      lVar28 = extractps(auVar35,2);
      lVar25 = extractps(auVar35,3);
      auVar57 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar30),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar3 + lVar28),0x20);
      auVar66 = insertps(auVar57,*(undefined4 *)(*pauVar3 + lVar25),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                          (___xmm_000000280000001c0000001000000004 & uVar51))),
                         *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar52)),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar53)),0x20);
      auVar69 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar54)),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                          (___xmm_0000002c000000200000001400000008 & uVar51))),
                         *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar52)),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar53)),0x20);
      auVar62 = insertps(auVar57,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar54)),0x30);
    }
    fVar39 = auVar58._0_4_ - auVar66._0_4_;
    fVar45 = auVar58._4_4_ - auVar66._4_4_;
    fVar47 = auVar58._8_4_ - auVar66._8_4_;
    fVar49 = auVar58._12_4_ - auVar66._12_4_;
    fVar68 = auVar59._0_4_ - auVar69._0_4_;
    fVar71 = auVar59._4_4_ - auVar69._4_4_;
    fVar72 = auVar59._8_4_ - auVar69._8_4_;
    fVar73 = auVar59._12_4_ - auVar69._12_4_;
    fVar80 = auVar65._0_4_ - auVar62._0_4_;
    fVar81 = auVar65._4_4_ - auVar62._4_4_;
    fVar82 = auVar65._8_4_ - auVar62._8_4_;
    fVar83 = auVar65._12_4_ - auVar62._12_4_;
    auVar36._0_4_ = fVar39 * fVar39;
    auVar36._4_4_ = fVar45 * fVar45;
    auVar36._8_4_ = fVar47 * fVar47;
    auVar36._12_4_ = fVar49 * fVar49;
    auVar77._0_4_ = fVar80 * fVar80 + fVar68 * fVar68 + auVar36._0_4_;
    auVar77._4_4_ = fVar81 * fVar81 + fVar71 * fVar71 + auVar36._4_4_;
    auVar77._8_4_ = fVar82 * fVar82 + fVar72 * fVar72 + auVar36._8_4_;
    auVar77._12_4_ = fVar83 * fVar83 + fVar73 * fVar73 + auVar36._12_4_;
    iVar23 = uVar18 << 2;
    if ((bVar22 & 9) == 0) {
      auVar36 = *(undefined1 (*) [16])(param_3 + iVar23);
    }
    else {
      puVar26 = (uint *)(param_3 + iVar23);
      if ((uVar27 & 1) != 0) {
        auVar36 = ZEXT416(*puVar26);
      }
      if ((uVar27 & 2) != 0) {
        auVar36 = insertps(auVar36,puVar26[1],0x10);
      }
      if ((uVar27 & 4) != 0) {
        auVar36 = insertps(auVar36,puVar26[2],0x20);
      }
      if ((uVar27 & 8) != 0) {
        auVar36 = insertps(auVar36,puVar26[3],0x30);
      }
    }
    auVar55._0_4_ = param_4 + param_5 * auVar36._0_4_;
    auVar55._4_4_ = param_4 + param_5 * auVar36._4_4_;
    auVar55._8_4_ = param_4 + param_5 * auVar36._8_4_;
    auVar55._12_4_ = param_4 + param_5 * auVar36._12_4_;
    auVar37._0_4_ =
         -(uint)(auVar55._0_4_ * auVar55._0_4_ + ___xmm_322bcc77322bcc77322bcc77322bcc77 <
                 auVar77._0_4_ && (fVar40 != 0.0 && bVar5));
    auVar37._4_4_ =
         -(uint)(auVar55._4_4_ * auVar55._4_4_ + _UNK_1506895d4 < auVar77._4_4_ &&
                (fVar46 != 0.0 && bVar6));
    auVar37._8_4_ =
         -(uint)(auVar55._8_4_ * auVar55._8_4_ + _UNK_1506895d8 < auVar77._8_4_ &&
                (fVar48 != 0.0 && bVar7));
    auVar37._12_4_ =
         -(uint)(auVar55._12_4_ * auVar55._12_4_ + _UNK_1506895dc < auVar77._12_4_ &&
                (fVar50 != 0.0 && bVar8));
    iVar23 = movmskps(iVar23,auVar37);
    if (iVar23 != 0) {
      auVar57 = sqrtps(auVar37,auVar77);
      auVar57 = divps(auVar55,auVar57);
      fVar84 = auVar57._0_4_;
      fVar85 = auVar57._4_4_;
      fVar86 = auVar57._8_4_;
      fVar87 = auVar57._12_4_;
      fVar39 = auVar66._0_4_ + fVar39 * fVar84;
      fVar45 = auVar66._4_4_ + fVar45 * fVar85;
      auVar67._0_8_ = CONCAT44(fVar45,fVar39);
      auVar67._8_4_ = auVar66._8_4_ + fVar47 * fVar86;
      auVar67._12_4_ = auVar66._12_4_ + fVar49 * fVar87;
      auVar70._0_4_ = auVar69._0_4_ + fVar68 * fVar84;
      auVar70._4_4_ = auVar69._4_4_ + fVar71 * fVar85;
      auVar70._8_4_ = auVar69._8_4_ + fVar72 * fVar86;
      auVar70._12_4_ = auVar69._12_4_ + fVar73 * fVar87;
      auVar64._0_4_ = auVar62._0_4_ + fVar80 * fVar84;
      auVar64._4_4_ = auVar62._4_4_ + fVar81 * fVar85;
      auVar64._8_4_ = auVar62._8_4_ + fVar82 * fVar86;
      auVar64._12_4_ = auVar62._12_4_ + fVar83 * fVar87;
      bVar22 = (char)((char)iVar23 << 4) >> 4;
      if ((~bVar22 & 0xf) == 0) {
        auVar38._8_4_ = fVar45;
        auVar38._0_8_ = auVar67._0_8_;
        auVar38._12_4_ = auVar70._4_4_;
        uVar41 = CONCAT44(auVar70._0_4_,fVar39);
        *(undefined8 *)*pauVar20 = uVar41;
        *(ulonglong *)(*pauVar20 + 8) = CONCAT44(fVar40,auVar64._0_4_);
        auVar10._8_4_ = auVar64._4_4_;
        auVar10._0_8_ = auVar38._8_8_;
        auVar10._12_4_ = fVar46;
        pauVar20[1] = auVar10;
        *(float *)pauVar20[2] = auVar67._8_4_;
        *(float *)(pauVar20[2] + 4) = auVar70._8_4_;
        *(float *)(pauVar20[2] + 8) = auVar64._8_4_;
        *(float *)(pauVar20[2] + 0xc) = fVar48;
        *(float *)pauVar20[3] = auVar67._12_4_;
        *(float *)(pauVar20[3] + 4) = auVar70._12_4_;
        *(float *)(pauVar20[3] + 8) = auVar64._12_4_;
        *(float *)(pauVar20[3] + 0xc) = fVar50;
      }
      else {
        if ((bVar22 & 1) != 0) {
          *(float *)*pauVar20 = fVar39;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar67,1);
          *(undefined8 *)pauVar20[1] = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar67,2);
          *(undefined8 *)pauVar20[2] = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar67,3);
          *(undefined8 *)pauVar20[3] = uVar41;
        }
        if ((bVar22 & 1) != 0) {
          *(float *)(*pauVar20 + 4) = auVar70._0_4_;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar70,1);
          *(undefined8 *)(pauVar20[1] + 4) = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar70,2);
          *(undefined8 *)(pauVar20[2] + 4) = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar70,3);
          *(undefined8 *)(pauVar20[3] + 4) = uVar41;
        }
        if ((bVar22 & 1) != 0) {
          *(float *)(*pauVar20 + 8) = auVar64._0_4_;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar64,1);
          *(undefined8 *)(pauVar20[1] + 8) = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar64,2);
          *(undefined8 *)(pauVar20[2] + 8) = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar64,3);
          *(undefined8 *)(pauVar20[3] + 8) = uVar41;
        }
        if ((bVar22 & 1) != 0) {
          *(float *)(*pauVar20 + 0xc) = fVar40;
        }
        if ((bVar22 & 2) != 0) {
          uVar41 = extractps(auVar43,1);
          *(undefined8 *)(pauVar20[1] + 0xc) = uVar41;
        }
        if ((bVar22 & 4) != 0) {
          uVar41 = extractps(auVar43,2);
          *(undefined8 *)(pauVar20[2] + 0xc) = uVar41;
        }
        if ((char)bVar22 < '\0') {
          uVar41 = extractps(auVar43,3);
          *(undefined8 *)(pauVar20[3] + 0xc) = uVar41;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraintsWithoutMap_sse4 @ 140351180

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithoutMap_sse4
               (longlong param_1,longlong param_2,float param_3,int param_4,uint param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  float *pfVar13;
  byte bVar14;
  undefined4 unaff_EDI;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  longlong lVar22;
  undefined8 uVar23;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar61 [16];
  
  uVar18 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar18 = param_5;
  }
  if ((int)(uVar18 & 0xfffffffc) < 1) {
    uVar16 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    fVar30 = param_3 * param_3 + __real_322bcc77;
    pauVar20 = (undefined1 (*) [16])((longlong)param_4 * 0x10 + param_1);
    pfVar13 = (float *)(param_2 + 0x20 + (longlong)param_4 * 0xc);
    uVar16 = 0;
    do {
      auVar42 = *pauVar20;
      fVar27 = auVar42._12_4_;
      auVar47 = pauVar20[1];
      fVar28 = auVar47._12_4_;
      auVar53 = pauVar20[2];
      fVar29 = auVar53._12_4_;
      auVar41 = pauVar20[3];
      fVar40 = auVar41._12_4_;
      auVar2._4_4_ = -(uint)(fVar28 != _UNK_150aa8f64);
      auVar2._0_4_ = -(uint)(fVar27 != __xmm_00000000000000000000000000000000);
      auVar2._8_4_ = -(uint)(fVar29 != (float)DAT_150aa8f68);
      auVar2._12_4_ = -(uint)(fVar40 != DAT_150aa8f68._4_4_);
      iVar15 = movmskps(unaff_EDI,auVar2);
      unaff_EDI = 0;
      if (iVar15 != 0) {
        auVar2 = *(undefined1 (*) [16])(pfVar13 + -8);
        auVar70 = *(undefined1 (*) [16])(pfVar13 + -4);
        auVar69 = insertps(auVar70,auVar2,0x8c);
        fVar74 = auVar42._0_4_ - auVar2._0_4_;
        fVar75 = auVar47._0_4_ - auVar2._12_4_;
        fVar76 = auVar53._0_4_ - auVar70._8_4_;
        fVar77 = auVar41._0_4_ - pfVar13[1];
        fVar39 = auVar42._4_4_ - auVar2._4_4_;
        fVar44 = auVar47._4_4_ - auVar70._0_4_;
        fVar45 = auVar53._4_4_ - auVar70._12_4_;
        fVar46 = auVar41._4_4_ - pfVar13[2];
        fVar57 = auVar42._8_4_ - auVar69._0_4_;
        fVar62 = auVar47._8_4_ - auVar69._4_4_;
        fVar64 = auVar53._8_4_ - *pfVar13;
        fVar65 = auVar41._8_4_ - pfVar13[3];
        auVar73._0_4_ = fVar57 * fVar57 + fVar39 * fVar39 + fVar74 * fVar74;
        auVar73._4_4_ = fVar62 * fVar62 + fVar44 * fVar44 + fVar75 * fVar75;
        auVar73._8_4_ = fVar64 * fVar64 + fVar45 * fVar45 + fVar76 * fVar76;
        auVar73._12_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar77 * fVar77;
        auVar66._0_4_ =
             -(uint)(fVar30 < auVar73._0_4_ && fVar27 != __xmm_00000000000000000000000000000000);
        auVar66._4_4_ = -(uint)(fVar30 < auVar73._4_4_ && fVar28 != _UNK_150aa8f64);
        auVar66._8_4_ = -(uint)(fVar30 < auVar73._8_4_ && fVar29 != (float)DAT_150aa8f68);
        auVar66._12_4_ = -(uint)(fVar30 < auVar73._12_4_ && fVar40 != DAT_150aa8f68._4_4_);
        iVar15 = movmskps(iVar15,auVar66);
        unaff_EDI = 0;
        if (iVar15 != 0) {
          auVar66 = sqrtps(auVar66,auVar73);
          auVar11._4_4_ = param_3;
          auVar11._0_4_ = param_3;
          auVar11._8_4_ = param_3;
          auVar11._12_4_ = param_3;
          auVar66 = divps(auVar11,auVar66);
          fVar36 = auVar66._0_4_;
          fVar37 = auVar66._4_4_;
          fVar38 = auVar66._8_4_;
          fVar58 = auVar66._12_4_;
          fVar74 = auVar2._0_4_ + fVar74 * fVar36;
          fVar75 = auVar2._12_4_ + fVar75 * fVar37;
          fVar76 = auVar70._8_4_ + fVar76 * fVar38;
          fVar77 = pfVar13[1] + fVar77 * fVar58;
          auVar33._0_4_ = auVar2._4_4_ + fVar39 * fVar36;
          auVar33._4_4_ = auVar70._0_4_ + fVar44 * fVar37;
          auVar33._8_4_ = auVar70._12_4_ + fVar45 * fVar38;
          auVar33._12_4_ = pfVar13[2] + fVar46 * fVar58;
          fVar39 = auVar69._0_4_ + fVar57 * fVar36;
          fVar44 = auVar69._4_4_ + fVar62 * fVar37;
          auVar70._0_8_ = CONCAT44(fVar44,fVar39);
          auVar70._8_4_ = *pfVar13 + fVar64 * fVar38;
          auVar70._12_4_ = pfVar13[3] + fVar65 * fVar58;
          bVar14 = (char)((char)iVar15 << 4) >> 4;
          unaff_EDI = CONCAT31((int3)((uint)iVar15 >> 8),bVar14);
          if ((~bVar14 & 0xf) == 0) {
            auVar42._4_4_ = fVar75;
            auVar42._0_4_ = fVar74;
            auVar42._8_4_ = fVar75;
            auVar42._12_4_ = auVar33._4_4_;
            auVar53._8_4_ = fVar44;
            auVar53._0_8_ = auVar70._0_8_;
            auVar53._12_4_ = fVar28;
            auVar41._8_8_ = auVar53._8_8_;
            auVar47._12_4_ = fVar27;
            auVar47._8_4_ = fVar39;
            auVar69._0_8_ = CONCAT44(fVar29,auVar70._8_4_);
            auVar69._8_4_ = auVar70._12_4_;
            auVar69._12_4_ = fVar40;
            auVar47._4_4_ = auVar33._0_4_;
            auVar47._0_4_ = fVar74;
            *pauVar20 = auVar47;
            auVar41._0_8_ = auVar42._8_8_;
            pauVar20[1] = auVar41;
            uVar23 = CONCAT44(auVar33._8_4_,fVar76);
            *(undefined8 *)pauVar20[2] = uVar23;
            *(undefined8 *)(pauVar20[2] + 8) = auVar69._0_8_;
            auVar71._8_8_ = auVar69._8_8_;
            auVar71._4_4_ = auVar33._12_4_;
            auVar71._0_4_ = fVar77;
            pauVar20[3] = auVar71;
          }
          else {
            if ((bVar14 & 1) != 0) {
              *(float *)*pauVar20 = fVar74;
            }
            if ((bVar14 & 2) != 0) {
              auVar9._4_4_ = fVar75;
              auVar9._0_4_ = fVar74;
              auVar9._8_4_ = fVar76;
              auVar9._12_4_ = fVar77;
              uVar23 = extractps(auVar9,1);
              *(undefined8 *)pauVar20[1] = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              auVar8._4_4_ = fVar75;
              auVar8._0_4_ = fVar74;
              auVar8._8_4_ = fVar76;
              auVar8._12_4_ = fVar77;
              uVar23 = extractps(auVar8,2);
              *(undefined8 *)pauVar20[2] = uVar23;
            }
            if ((char)bVar14 < '\0') {
              auVar7._4_4_ = fVar75;
              auVar7._0_4_ = fVar74;
              auVar7._8_4_ = fVar76;
              auVar7._12_4_ = fVar77;
              uVar23 = extractps(auVar7,3);
              *(undefined8 *)pauVar20[3] = uVar23;
            }
            if ((bVar14 & 1) != 0) {
              *(float *)(*pauVar20 + 4) = auVar33._0_4_;
            }
            if ((bVar14 & 2) != 0) {
              uVar23 = extractps(auVar33,1);
              *(undefined8 *)(pauVar20[1] + 4) = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              uVar23 = extractps(auVar33,2);
              *(undefined8 *)(pauVar20[2] + 4) = uVar23;
            }
            if ((char)bVar14 < '\0') {
              uVar23 = extractps(auVar33,3);
              *(undefined8 *)(pauVar20[3] + 4) = uVar23;
            }
            if ((bVar14 & 1) != 0) {
              *(float *)(*pauVar20 + 8) = fVar39;
            }
            if ((bVar14 & 2) != 0) {
              uVar23 = extractps(auVar70,1);
              *(undefined8 *)(pauVar20[1] + 8) = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              uVar23 = extractps(auVar70,2);
              *(undefined8 *)(pauVar20[2] + 8) = uVar23;
            }
            if ((char)bVar14 < '\0') {
              uVar23 = extractps(auVar70,3);
              *(undefined8 *)(pauVar20[3] + 8) = uVar23;
            }
            if ((bVar14 & 1) != 0) {
              uVar23 = extractps(auVar42,3);
              *(undefined8 *)(*pauVar20 + 0xc) = uVar23;
            }
            if ((bVar14 & 2) != 0) {
              uVar23 = extractps(auVar47,3);
              *(undefined8 *)(pauVar20[1] + 0xc) = uVar23;
            }
            if ((bVar14 & 4) != 0) {
              uVar23 = extractps(auVar53,3);
              *(undefined8 *)(pauVar20[2] + 0xc) = uVar23;
            }
            if ((char)bVar14 < '\0') {
              uVar23 = extractps(auVar41,3);
              *(undefined8 *)(pauVar20[3] + 0xc) = uVar23;
            }
          }
        }
      }
      uVar16 = uVar16 + 4;
      pauVar20 = pauVar20 + 4;
      pfVar13 = pfVar13 + 0xc;
    } while (uVar16 < (uVar18 & 0xfffffffc));
    if ((int)param_5 <= (int)uVar16) {
      return;
    }
  }
  uVar18 = (uint)uVar16;
  bVar3 = (int)(uVar18 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5;
  auVar31._0_4_ = -(uint)bVar3;
  bVar4 = (int)(uVar18 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5;
  auVar31._4_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar18 | _UNK_150631e08) < (int)param_5;
  auVar31._8_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar18 | _UNK_150631e0c) < (int)param_5;
  auVar31._12_4_ = -(uint)bVar6;
  uVar18 = param_4 + uVar18;
  lVar12 = (longlong)(int)uVar18;
  lVar17 = lVar12 * 0x10;
  pauVar20 = (undefined1 (*) [16])(param_1 + lVar17);
  iVar15 = movmskps((int)lVar17,auVar31);
  if (iVar15 == 0xf) {
    auVar42 = *pauVar20;
    auVar47 = pauVar20[2];
    auVar56._0_8_ = auVar42._0_8_;
    auVar56._8_4_ = auVar42._4_4_;
    auVar56._12_4_ = *(undefined4 *)(pauVar20[1] + 4);
    auVar43._4_4_ = *(undefined4 *)pauVar20[1];
    auVar43._0_4_ = auVar42._0_4_;
    auVar59._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[1] + 8),auVar42._8_4_);
    auVar59._8_4_ = auVar42._12_4_;
    auVar59._12_4_ = *(undefined4 *)(pauVar20[1] + 0xc);
    auVar49._8_4_ = auVar47._4_4_;
    auVar49._0_8_ = auVar47._0_8_;
    auVar49._12_4_ = *(undefined4 *)(pauVar20[3] + 4);
    auVar48._8_8_ = auVar49._8_8_;
    auVar43._12_4_ = *(undefined4 *)pauVar20[3];
    auVar43._8_4_ = auVar47._0_4_;
    auVar26._0_8_ = CONCAT44(*(undefined4 *)(pauVar20[3] + 8),auVar47._8_4_);
    auVar26._8_4_ = auVar47._12_4_;
    auVar26._12_4_ = *(undefined4 *)(pauVar20[3] + 0xc);
    auVar48._0_8_ = auVar56._8_8_;
    auVar55._8_8_ = auVar26._0_8_;
    auVar55._0_8_ = auVar59._0_8_;
    auVar25._8_8_ = auVar26._8_8_;
    auVar25._0_8_ = auVar59._8_8_;
  }
  else {
    auVar24._0_4_ = ___xmm_00000030000000200000001000000000 & auVar31._0_4_;
    auVar24._4_4_ = _UNK_150b511c4 & auVar31._4_4_;
    auVar24._8_4_ = _UNK_150b511c8 & auVar31._8_4_;
    auVar24._12_4_ = _UNK_150b511cc & auVar31._12_4_;
    lVar17 = extractps(auVar24,1);
    lVar21 = extractps(auVar24,2);
    lVar22 = extractps(auVar24,3);
    auVar42 = insertps(ZEXT416(*(uint *)*pauVar20),*(undefined4 *)(*pauVar20 + lVar17),0x10);
    auVar42 = insertps(auVar42,*(undefined4 *)(*pauVar20 + lVar21),0x20);
    auVar43 = insertps(auVar42,*(undefined4 *)(*pauVar20 + lVar22),0x30);
    auVar42 = ___xmm_00000034000000240000001400000004 & auVar31;
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar20 + auVar42._0_4_)),
                       *(undefined4 *)(*pauVar20 + auVar42._4_4_),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._8_4_),0x20);
    auVar48 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._12_4_),0x30);
    auVar42 = ___xmm_00000038000000280000001800000008 & auVar31;
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar20 + auVar42._0_4_)),
                       *(undefined4 *)(*pauVar20 + auVar42._4_4_),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._8_4_),0x20);
    auVar55 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._12_4_),0x30);
    auVar42 = ___xmm_0000003c0000002c0000001c0000000c & auVar31;
    uVar18 = auVar42._4_4_;
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar20 + auVar42._0_4_)),
                       *(undefined4 *)(*pauVar20 + uVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._8_4_),0x20);
    auVar25 = insertps(auVar47,*(undefined4 *)(*pauVar20 + auVar42._12_4_),0x30);
  }
  fVar30 = auVar25._0_4_;
  fVar27 = auVar25._4_4_;
  fVar28 = auVar25._8_4_;
  fVar29 = auVar25._12_4_;
  auVar50._0_4_ = -(uint)(fVar30 != 0.0 && bVar3);
  auVar50._4_4_ = -(uint)(fVar27 != 0.0 && bVar4);
  auVar50._8_4_ = -(uint)(fVar28 != 0.0 && bVar5);
  auVar50._12_4_ = -(uint)(fVar29 != 0.0 && bVar6);
  iVar19 = movmskps(uVar18,auVar50);
  if (iVar19 != 0) {
    pauVar1 = (undefined1 (*) [16])(param_2 + lVar12 * 0xc);
    if ((~((char)((char)iVar15 << 4) >> 4) & 0xfU) == 0) {
      auVar42 = *pauVar1;
      auVar47 = pauVar1[1];
      auVar60._0_4_ = auVar42._0_4_;
      auVar53 = insertps(auVar47,auVar42,0x8c);
      auVar60._4_4_ = auVar42._12_4_;
      auVar60._8_4_ = auVar47._8_4_;
      auVar60._12_4_ = *(undefined4 *)(pauVar1[2] + 4);
      auVar67._4_4_ = auVar47._0_4_;
      auVar67._0_4_ = auVar42._4_4_;
      auVar67._8_4_ = auVar47._12_4_;
      auVar67._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
      auVar52._0_8_ = auVar53._0_8_;
      auVar52._8_4_ = *(undefined4 *)pauVar1[2];
      auVar52._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    }
    else {
      auVar51._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar31._0_4_;
      auVar51._4_4_ = _UNK_150b50da4 & auVar31._4_4_;
      auVar51._8_4_ = _UNK_150b50da8 & auVar31._8_4_;
      auVar51._12_4_ = _UNK_150b50dac & auVar31._12_4_;
      lVar12 = extractps(auVar51,1);
      lVar17 = extractps(auVar51,2);
      lVar21 = extractps(auVar51,3);
      auVar42 = insertps(ZEXT416(*(uint *)*pauVar1),*(undefined4 *)(*pauVar1 + lVar12),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(*pauVar1 + lVar17),0x20);
      auVar60 = insertps(auVar42,*(undefined4 *)(*pauVar1 + lVar21),0x30);
      auVar42 = ___xmm_000000280000001c0000001000000004 & auVar31;
      auVar47 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar42._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar42._4_4_),0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._8_4_),0x20);
      auVar67 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._12_4_),0x30);
      auVar42 = ___xmm_0000002c000000200000001400000008 & auVar31;
      auVar47 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar42._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar42._4_4_),0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._8_4_),0x20);
      auVar52 = insertps(auVar47,*(undefined4 *)(*pauVar1 + auVar42._12_4_),0x30);
    }
    fVar40 = auVar43._0_4_ - auVar60._0_4_;
    fVar39 = auVar43._4_4_ - auVar60._4_4_;
    fVar44 = auVar43._8_4_ - auVar60._8_4_;
    fVar45 = auVar43._12_4_ - auVar60._12_4_;
    fVar46 = auVar48._0_4_ - auVar67._0_4_;
    fVar57 = auVar48._4_4_ - auVar67._4_4_;
    fVar62 = auVar48._8_4_ - auVar67._8_4_;
    fVar64 = auVar48._12_4_ - auVar67._12_4_;
    fVar65 = auVar55._0_4_ - auVar52._0_4_;
    fVar74 = auVar55._4_4_ - auVar52._4_4_;
    fVar75 = auVar55._8_4_ - auVar52._8_4_;
    fVar76 = auVar55._12_4_ - auVar52._12_4_;
    auVar72._0_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar40 * fVar40;
    auVar72._4_4_ = fVar74 * fVar74 + fVar57 * fVar57 + fVar39 * fVar39;
    auVar72._8_4_ = fVar75 * fVar75 + fVar62 * fVar62 + fVar44 * fVar44;
    auVar72._12_4_ = fVar76 * fVar76 + fVar64 * fVar64 + fVar45 * fVar45;
    fVar77 = param_3 * param_3 + __real_322bcc77;
    auVar10._4_4_ = -(uint)(fVar77 < auVar72._4_4_ && (fVar27 != 0.0 && bVar4));
    auVar10._0_4_ = -(uint)(fVar77 < auVar72._0_4_ && (fVar30 != 0.0 && bVar3));
    auVar10._8_4_ = -(uint)(fVar77 < auVar72._8_4_ && (fVar28 != 0.0 && bVar5));
    auVar10._12_4_ = -(uint)(fVar77 < auVar72._12_4_ && (fVar29 != 0.0 && bVar6));
    iVar15 = movmskps((int)pauVar1,auVar10);
    if (iVar15 != 0) {
      auVar42 = sqrtps(auVar31,auVar72);
      auVar34._4_4_ = param_3;
      auVar34._0_4_ = param_3;
      auVar34._8_4_ = param_3;
      auVar34._12_4_ = param_3;
      auVar42 = divps(auVar34,auVar42);
      fVar77 = auVar42._0_4_;
      fVar36 = auVar42._4_4_;
      fVar37 = auVar42._8_4_;
      fVar38 = auVar42._12_4_;
      fVar58 = auVar60._0_4_ + fVar40 * fVar77;
      fVar63 = auVar60._4_4_ + fVar39 * fVar36;
      auVar61._0_8_ = CONCAT44(fVar63,fVar58);
      auVar61._8_4_ = auVar60._8_4_ + fVar44 * fVar37;
      auVar61._12_4_ = auVar60._12_4_ + fVar45 * fVar38;
      auVar68._0_4_ = auVar67._0_4_ + fVar46 * fVar77;
      auVar68._4_4_ = auVar67._4_4_ + fVar57 * fVar36;
      auVar68._8_4_ = auVar67._8_4_ + fVar62 * fVar37;
      auVar68._12_4_ = auVar67._12_4_ + fVar64 * fVar38;
      fVar40 = auVar52._0_4_ + fVar65 * fVar77;
      fVar39 = auVar52._4_4_ + fVar74 * fVar36;
      auVar54._0_8_ = CONCAT44(fVar39,fVar40);
      auVar54._8_4_ = auVar52._8_4_ + fVar75 * fVar37;
      auVar54._12_4_ = auVar52._12_4_ + fVar76 * fVar38;
      bVar14 = (char)((char)iVar15 << 4) >> 4;
      if ((~bVar14 & 0xf) == 0) {
        auVar32._8_4_ = fVar63;
        auVar32._0_8_ = auVar61._0_8_;
        auVar32._12_4_ = auVar68._4_4_;
        uVar23 = CONCAT44(auVar68._0_4_,fVar58);
        auVar35._8_4_ = fVar39;
        auVar35._0_8_ = auVar54._0_8_;
        auVar35._12_4_ = fVar27;
        *(undefined8 *)*pauVar20 = uVar23;
        *(ulonglong *)(*pauVar20 + 8) = CONCAT44(fVar30,fVar40);
        *(longlong *)pauVar20[1] = auVar32._8_8_;
        *(longlong *)(pauVar20[1] + 8) = auVar35._8_8_;
        *(float *)pauVar20[2] = auVar61._8_4_;
        *(float *)(pauVar20[2] + 4) = auVar68._8_4_;
        *(float *)(pauVar20[2] + 8) = auVar54._8_4_;
        *(float *)(pauVar20[2] + 0xc) = fVar28;
        *(float *)pauVar20[3] = auVar61._12_4_;
        *(float *)(pauVar20[3] + 4) = auVar68._12_4_;
        *(float *)(pauVar20[3] + 8) = auVar54._12_4_;
        *(float *)(pauVar20[3] + 0xc) = fVar29;
      }
      else {
        if ((bVar14 & 1) != 0) {
          *(float *)*pauVar20 = fVar58;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar61,1);
          *(undefined8 *)pauVar20[1] = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar61,2);
          *(undefined8 *)pauVar20[2] = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar61,3);
          *(undefined8 *)pauVar20[3] = uVar23;
        }
        if ((bVar14 & 1) != 0) {
          *(float *)(*pauVar20 + 4) = auVar68._0_4_;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar68,1);
          *(undefined8 *)(pauVar20[1] + 4) = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar68,2);
          *(undefined8 *)(pauVar20[2] + 4) = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar68,3);
          *(undefined8 *)(pauVar20[3] + 4) = uVar23;
        }
        if ((bVar14 & 1) != 0) {
          *(float *)(*pauVar20 + 8) = fVar40;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar54,1);
          *(undefined8 *)(pauVar20[1] + 8) = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar54,2);
          *(undefined8 *)(pauVar20[2] + 8) = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar54,3);
          *(undefined8 *)(pauVar20[3] + 8) = uVar23;
        }
        if ((bVar14 & 1) != 0) {
          *(float *)(*pauVar20 + 0xc) = fVar30;
        }
        if ((bVar14 & 2) != 0) {
          uVar23 = extractps(auVar25,1);
          *(undefined8 *)(pauVar20[1] + 0xc) = uVar23;
        }
        if ((bVar14 & 4) != 0) {
          uVar23 = extractps(auVar25,2);
          *(undefined8 *)(pauVar20[2] + 0xc) = uVar23;
        }
        if ((char)bVar14 < '\0') {
          uVar23 = extractps(auVar25,3);
          *(undefined8 *)(pauVar20[3] + 0xc) = uVar23;
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraints_sse4 @ 140351aa0

void ApplySphericalConstraints_sse4(void)

{
  ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_sse4
            ();
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithMaps_sse4 @ 140351ae0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined3 uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  int unaff_EBP;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar94;
  float fVar96;
  float fVar98;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  float fVar97;
  float fVar99;
  undefined1 auVar93 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  uint uVar104;
  float fVar108;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar109;
  undefined1 auVar107 [16];
  float fVar110;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar118 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  
  uVar20 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar20 = param_11;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar25 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar21 = (longlong)param_10;
    uVar18 = lVar21 * 3;
    lVar22 = lVar21 * 0x10 + param_1;
    lVar21 = lVar21 * 0xc + 0x20;
    uVar29 = 0;
    uVar25 = 0;
    do {
      pauVar28 = (undefined1 (*) [16])(lVar22 + uVar29 * 4);
      fVar90 = *(float *)(*pauVar28 + 0xc);
      auVar69 = *pauVar28;
      pauVar5 = (undefined1 (*) [16])(lVar22 + 0x10 + uVar29 * 4);
      fVar95 = *(float *)(*pauVar5 + 0xc);
      auVar13 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar22 + 0x20 + uVar29 * 4);
      fVar97 = *(float *)(*pauVar6 + 0xc);
      auVar66 = *pauVar6;
      pauVar7 = (undefined1 (*) [16])(lVar22 + 0x30 + uVar29 * 4);
      fVar99 = *(float *)(*pauVar7 + 0xc);
      auVar74 = *pauVar7;
      auVar53._4_4_ = -(uint)(fVar95 != 0.0);
      auVar53._0_4_ = -(uint)(fVar90 != 0.0);
      auVar53._8_4_ = -(uint)(fVar97 != 0.0);
      auVar53._12_4_ = -(uint)(fVar99 != 0.0);
      uVar16 = movmskps((int)uVar18,auVar53);
      uVar18 = (ulonglong)uVar16;
      if (uVar16 != 0) {
        auVar53 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar21);
        auVar34 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar21);
        pfVar1 = (float *)(param_2 + lVar21);
        auVar63 = insertps(auVar34,auVar53,0x8c);
        auVar52 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar21);
        auVar64 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar21);
        pfVar2 = (float *)(param_3 + lVar21);
        auVar78 = insertps(auVar64,auVar52,0x8c);
        uVar18 = uVar29 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar18);
        fVar89 = *pfVar3 * param_7 + param_6;
        fVar94 = pfVar3[1] * param_7 + param_6;
        fVar96 = pfVar3[2] * param_7 + param_6;
        fVar98 = pfVar3[3] * param_7 + param_6;
        pfVar3 = (float *)(param_5 + uVar18);
        fVar45 = *pfVar3 * param_9 + param_8;
        fVar49 = pfVar3[1] * param_9 + param_8;
        auVar105._4_4_ = fVar49;
        auVar105._0_4_ = fVar45;
        fVar50 = pfVar3[2] * param_9 + param_8;
        fVar51 = pfVar3[3] * param_9 + param_8;
        fVar70 = auVar53._0_4_ - auVar52._0_4_ * fVar89;
        fVar75 = auVar53._12_4_ - auVar52._12_4_ * fVar94;
        fVar76 = auVar34._8_4_ - auVar64._8_4_ * fVar96;
        fVar77 = pfVar1[1] - pfVar2[1] * fVar98;
        fVar33 = auVar53._4_4_ - auVar52._4_4_ * fVar89;
        fVar42 = auVar34._0_4_ - auVar64._0_4_ * fVar94;
        fVar43 = auVar34._12_4_ - auVar64._12_4_ * fVar96;
        fVar44 = pfVar1[2] - pfVar2[2] * fVar98;
        fVar100 = auVar63._0_4_ - auVar78._0_4_ * fVar89;
        fVar101 = auVar63._4_4_ - auVar78._4_4_ * fVar94;
        fVar102 = *pfVar1 - *pfVar2 * fVar96;
        fVar103 = pfVar1[3] - pfVar2[3] * fVar98;
        fVar110 = *(float *)*pauVar28 - fVar70;
        fVar115 = *(float *)*pauVar5 - fVar75;
        fVar116 = *(float *)*pauVar6 - fVar76;
        fVar117 = *(float *)*pauVar7 - fVar77;
        fVar81 = *(float *)(*pauVar28 + 4) - fVar33;
        fVar84 = *(float *)(*pauVar5 + 4) - fVar42;
        fVar85 = *(float *)(*pauVar6 + 4) - fVar43;
        fVar87 = *(float *)(*pauVar7 + 4) - fVar44;
        fVar54 = *(float *)(*pauVar28 + 8) - fVar100;
        fVar59 = *(float *)(*pauVar5 + 8) - fVar101;
        fVar60 = *(float *)(*pauVar6 + 8) - fVar102;
        fVar61 = *(float *)(*pauVar7 + 8) - fVar103;
        auVar83._0_4_ = fVar54 * fVar54 + fVar81 * fVar81 + fVar110 * fVar110;
        auVar83._4_4_ = fVar59 * fVar59 + fVar84 * fVar84 + fVar115 * fVar115;
        auVar83._8_4_ = fVar60 * fVar60 + fVar85 * fVar85 + fVar116 * fVar116;
        auVar83._12_4_ = fVar61 * fVar61 + fVar87 * fVar87 + fVar117 * fVar117;
        unaff_XMM15 = sqrtps(unaff_XMM15,auVar83);
        auVar105._8_4_ = fVar50;
        auVar105._12_4_ = fVar51;
        auVar106 = divps(auVar105,unaff_XMM15);
        fVar86 = auVar106._0_4_;
        fVar88 = auVar106._4_4_;
        fVar108 = auVar106._8_4_;
        fVar109 = auVar106._12_4_;
        fVar89 = fVar89 - fVar45;
        fVar94 = fVar94 - fVar49;
        fVar96 = fVar96 - fVar50;
        fVar98 = fVar98 - fVar51;
        auVar112._0_4_ = auVar53._0_4_ - auVar52._0_4_ * fVar89;
        auVar112._4_4_ = auVar53._12_4_ - auVar52._12_4_ * fVar94;
        auVar112._8_4_ = auVar34._8_4_ - auVar64._8_4_ * fVar96;
        auVar112._12_4_ = pfVar1[1] - pfVar2[1] * fVar98;
        uVar16 = -(uint)(auVar83._0_4_ < fVar45 * fVar45);
        uVar30 = -(uint)(auVar83._4_4_ < fVar49 * fVar49);
        uVar31 = -(uint)(auVar83._8_4_ < fVar50 * fVar50);
        uVar32 = -(uint)(auVar83._12_4_ < fVar51 * fVar51);
        auVar111._0_4_ = (uint)(fVar110 * fVar86 + fVar70) & uVar16;
        auVar111._4_4_ = (uint)(fVar115 * fVar88 + fVar75) & uVar30;
        auVar111._8_4_ = (uint)(fVar116 * fVar108 + fVar76) & uVar31;
        auVar111._12_4_ = (uint)(fVar117 * fVar109 + fVar77) & uVar32;
        auVar106._4_4_ = -(uint)(auVar83._4_4_ < _UNK_1506895d4);
        auVar106._0_4_ = -(uint)(auVar83._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar106._8_4_ = -(uint)(auVar83._8_4_ < _UNK_1506895d8);
        auVar106._12_4_ = -(uint)(auVar83._12_4_ < _UNK_1506895dc);
        auVar112 = blendvps(auVar111,auVar112,auVar106);
        auVar65._0_4_ = auVar53._4_4_ - auVar52._4_4_ * fVar89;
        auVar65._4_4_ = auVar34._0_4_ - auVar64._0_4_ * fVar94;
        auVar65._8_4_ = auVar34._12_4_ - auVar64._12_4_ * fVar96;
        auVar65._12_4_ = pfVar1[2] - pfVar2[2] * fVar98;
        auVar82._0_4_ = (uint)(fVar81 * fVar86 + fVar33) & uVar16;
        auVar82._4_4_ = (uint)(fVar84 * fVar88 + fVar42) & uVar30;
        auVar82._8_4_ = (uint)(fVar85 * fVar108 + fVar43) & uVar31;
        auVar82._12_4_ = (uint)(fVar87 * fVar109 + fVar44) & uVar32;
        auVar83 = blendvps(auVar82,auVar65,auVar106);
        auVar64._0_4_ = auVar63._0_4_ - fVar89 * auVar78._0_4_;
        auVar64._4_4_ = auVar63._4_4_ - fVar94 * auVar78._4_4_;
        auVar64._8_4_ = *pfVar1 - fVar96 * *pfVar2;
        auVar64._12_4_ = pfVar1[3] - fVar98 * pfVar2[3];
        auVar52._0_4_ = uVar16 & (uint)(fVar86 * fVar54 + fVar100);
        auVar52._4_4_ = uVar30 & (uint)(fVar88 * fVar59 + fVar101);
        auVar52._8_4_ = uVar31 & (uint)(fVar108 * fVar60 + fVar102);
        auVar52._12_4_ = uVar32 & (uint)(fVar109 * fVar61 + fVar103);
        auVar53 = blendvps(auVar52,auVar64,auVar106);
        fVar33 = auVar112._0_4_;
        auVar34._0_4_ = -(uint)(fVar33 != 0.0 && fVar90 != 0.0);
        auVar34._4_4_ = -(uint)(auVar112._4_4_ != 0.0 && fVar95 != 0.0);
        auVar34._8_4_ = -(uint)(auVar112._8_4_ != 0.0 && fVar97 != 0.0);
        auVar34._12_4_ = -(uint)(auVar112._12_4_ != 0.0 && fVar99 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar34);
        if (unaff_EBP != 0) {
          uVar15 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar15,bVar19);
          uVar18 = (ulonglong)CONCAT31(uVar15,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar66._0_8_ = auVar112._0_8_;
            auVar66._8_4_ = auVar112._4_4_;
            auVar66._12_4_ = auVar83._4_4_;
            auVar69._0_8_ = auVar53._0_8_;
            auVar69._8_4_ = auVar53._4_4_;
            auVar69._12_4_ = fVar95;
            auVar74._0_8_ = CONCAT44(auVar83._8_4_,auVar112._8_4_);
            auVar74._8_4_ = auVar112._12_4_;
            auVar74._12_4_ = auVar83._12_4_;
            puVar4 = (undefined8 *)(lVar22 + uVar29 * 4);
            *puVar4 = CONCAT44(auVar83._0_4_,fVar33);
            puVar4[1] = CONCAT44(fVar90,auVar53._0_4_);
            puVar4 = (undefined8 *)(lVar22 + 0x10 + uVar29 * 4);
            *puVar4 = auVar66._8_8_;
            puVar4[1] = auVar69._8_8_;
            puVar4 = (undefined8 *)(lVar22 + 0x20 + uVar29 * 4);
            *puVar4 = auVar74._0_8_;
            *(int *)(puVar4 + 1) = auVar53._8_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar97;
            puVar4 = (undefined8 *)(lVar22 + 0x30 + uVar29 * 4);
            *puVar4 = auVar74._8_8_;
            *(int *)(puVar4 + 1) = auVar53._12_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar99;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar22 + uVar29 * 4) = fVar33;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar112,1);
              *(undefined8 *)(lVar22 + 0x10 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar112,2);
              *(undefined8 *)(lVar22 + 0x20 + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar112,3);
              *(undefined8 *)(lVar22 + 0x30 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar22 + 4 + uVar29 * 4) = auVar83._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar83,1);
              *(undefined8 *)(lVar22 + 0x14 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar83,2);
              *(undefined8 *)(lVar22 + 0x24 + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar83,3);
              *(undefined8 *)(lVar22 + 0x34 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar22 + 8 + uVar29 * 4) = auVar53._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar53,1);
              *(undefined8 *)(lVar22 + 0x18 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar53,2);
              *(undefined8 *)(lVar22 + 0x28 + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar53,3);
              *(undefined8 *)(lVar22 + 0x38 + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar69,3);
              *(undefined8 *)(lVar22 + 0xc + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar13,3);
              *(undefined8 *)(lVar22 + 0x1c + uVar29 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar66,3);
              *(undefined8 *)(lVar22 + 0x2c + uVar29 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar74,3);
              *(undefined8 *)(lVar22 + 0x3c + uVar29 * 4) = uVar8;
            }
          }
        }
      }
      uVar25 = uVar25 + 4;
      uVar29 = uVar29 + 0x10;
      lVar21 = lVar21 + 0x30;
    } while (uVar25 < (uVar20 & 0xfffffffc));
    if ((int)param_11 <= (int)uVar25) {
      return;
    }
  }
  uVar16 = (uint)uVar25;
  bVar9 = (int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
  uVar30 = -(uint)bVar9;
  bVar10 = (int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
  uVar31 = -(uint)bVar10;
  bVar11 = (int)(uVar16 | _UNK_150631e08) < (int)param_11;
  uVar32 = -(uint)bVar11;
  bVar12 = (int)(uVar16 | _UNK_150631e0c) < (int)param_11;
  uVar104 = -(uint)bVar12;
  lVar21 = (longlong)(int)(param_10 + uVar16);
  uVar25 = lVar21 * 0x10;
  pauVar28 = (undefined1 (*) [16])(param_1 + uVar25);
  auVar13._4_4_ = uVar31;
  auVar13._0_4_ = uVar30;
  auVar13._8_4_ = uVar32;
  auVar13._12_4_ = uVar104;
  uVar20 = movmskps(unaff_EBP,auVar13);
  if (uVar20 == 0xf) {
    auVar66 = *pauVar28;
    auVar69 = pauVar28[2];
    auVar55._8_4_ = auVar66._4_4_;
    auVar55._0_8_ = auVar66._0_8_;
    auVar55._12_4_ = *(undefined4 *)(pauVar28[1] + 4);
    auVar63._0_8_ = CONCAT44(*(undefined4 *)(pauVar28[1] + 8),auVar66._8_4_);
    auVar63._8_4_ = auVar66._12_4_;
    auVar63._12_4_ = *(undefined4 *)(pauVar28[1] + 0xc);
    auVar72._0_8_ = auVar69._0_8_;
    auVar72._8_4_ = auVar69._4_4_;
    auVar72._12_4_ = *(undefined4 *)(pauVar28[3] + 4);
    auVar71._8_8_ = auVar72._8_8_;
    auVar67._12_4_ = *(undefined4 *)pauVar28[3];
    auVar67._8_4_ = auVar69._0_4_;
    auVar92._0_8_ = CONCAT44(*(undefined4 *)(pauVar28[3] + 8),auVar69._8_4_);
    auVar92._8_4_ = auVar69._12_4_;
    auVar92._12_4_ = *(undefined4 *)(pauVar28[3] + 0xc);
    auVar67._4_4_ = *(undefined4 *)pauVar28[1];
    auVar67._0_4_ = auVar66._0_4_;
    auVar71._0_8_ = auVar55._8_8_;
    auVar78._8_8_ = auVar92._0_8_;
    auVar78._0_8_ = auVar63._0_8_;
    auVar91._8_8_ = auVar92._8_8_;
    auVar91._0_8_ = auVar63._8_8_;
  }
  else {
    auVar35._0_4_ = ___xmm_00000030000000200000001000000000 & uVar30;
    auVar35._4_4_ = _UNK_150b511c4 & uVar31;
    auVar35._8_4_ = _UNK_150b511c8 & uVar32;
    auVar35._12_4_ = _UNK_150b511cc & uVar104;
    lVar22 = extractps(auVar35,1);
    lVar26 = extractps(auVar35,2);
    lVar23 = extractps(auVar35,3);
    auVar66 = insertps(ZEXT416(*(uint *)*pauVar28),*(undefined4 *)(*pauVar28 + lVar22),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + lVar26),0x20);
    auVar67 = insertps(auVar66,*(undefined4 *)(*pauVar28 + lVar23),0x30);
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar28 +
                                        (___xmm_00000034000000240000001400000004 & uVar30))),
                       *(undefined4 *)(*pauVar28 + (_UNK_150b511d4 & uVar31)),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511d8 & uVar32)),0x20);
    auVar71 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511dc & uVar104)),0x30);
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar28 +
                                        (___xmm_00000038000000280000001800000008 & uVar30))),
                       *(undefined4 *)(*pauVar28 + (_UNK_150b511e4 & uVar31)),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511e8 & uVar32)),0x20);
    auVar78 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511ec & uVar104)),0x30);
    uVar25 = (ulonglong)(_UNK_150b511f4 & uVar31);
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar28 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar30))),
                       *(undefined4 *)(*pauVar28 + uVar25),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511f8 & uVar32)),0x20);
    auVar91 = insertps(auVar66,*(undefined4 *)(*pauVar28 + (_UNK_150b511fc & uVar104)),0x30);
  }
  fVar90 = auVar91._0_4_;
  fVar95 = auVar91._4_4_;
  fVar97 = auVar91._8_4_;
  fVar99 = auVar91._12_4_;
  auVar36._0_4_ = -(uint)(fVar90 != 0.0 && bVar9);
  auVar36._4_4_ = -(uint)(fVar95 != 0.0 && bVar10);
  auVar36._8_4_ = -(uint)(fVar97 != 0.0 && bVar11);
  auVar36._12_4_ = -(uint)(fVar99 != 0.0 && bVar12);
  iVar17 = movmskps((int)uVar25,auVar36);
  if (iVar17 != 0) {
    bVar19 = ~((char)((char)uVar20 << 4) >> 4);
    pauVar5 = (undefined1 (*) [16])(param_2 + lVar21 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar66 = *pauVar5;
      auVar69 = pauVar5[1];
      auVar79._0_4_ = auVar66._0_4_;
      auVar74 = insertps(auVar69,auVar66,0x8c);
      auVar79._4_4_ = auVar66._12_4_;
      auVar79._8_4_ = auVar69._8_4_;
      auVar79._12_4_ = *(undefined4 *)(pauVar5[2] + 4);
      auVar93._4_4_ = auVar69._0_4_;
      auVar93._0_4_ = auVar66._4_4_;
      auVar93._8_4_ = auVar69._12_4_;
      auVar93._12_4_ = *(undefined4 *)(pauVar5[2] + 8);
      auVar113._0_8_ = auVar74._0_8_;
      auVar113._8_4_ = *(undefined4 *)pauVar5[2];
      auVar113._12_4_ = *(undefined4 *)(pauVar5[2] + 0xc);
      auVar66 = *(undefined1 (*) [16])(param_3 + lVar21 * 0xc);
      auVar69 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar21 * 0xc);
      auVar38 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar21 * 0xc);
      auVar118._0_4_ = auVar66._0_4_;
      auVar46._0_8_ = auVar69._8_8_;
      auVar46._8_4_ = auVar38._4_4_;
      auVar46._12_4_ = auVar38._8_4_;
      auVar74 = insertps(auVar69,auVar66,0x8c);
      auVar118._4_4_ = auVar66._12_4_;
      auVar118._8_4_ = auVar69._8_4_;
      auVar118._12_4_ = auVar38._4_4_;
      auVar107._4_4_ = auVar69._0_4_;
      auVar107._0_4_ = auVar66._4_4_;
      auVar107._8_4_ = auVar69._12_4_;
      auVar107._12_4_ = auVar38._8_4_;
      auVar56._0_8_ = auVar74._0_8_;
      auVar56._8_4_ = auVar38._0_4_;
      auVar56._12_4_ = auVar38._12_4_;
    }
    else {
      auVar37._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar30;
      auVar37._4_4_ = _UNK_150b50da4 & uVar31;
      auVar37._8_4_ = _UNK_150b50da8 & uVar32;
      auVar37._12_4_ = _UNK_150b50dac & uVar104;
      lVar23 = extractps(auVar37,1);
      lVar27 = extractps(auVar37,2);
      lVar26 = extractps(auVar37,3);
      auVar66 = insertps(ZEXT416(*(uint *)*pauVar5),*(undefined4 *)(*pauVar5 + lVar23),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar27),0x20);
      auVar79 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar26),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 +
                                          (___xmm_000000280000001c0000001000000004 & uVar30))),
                         *(undefined4 *)(*pauVar5 + (_UNK_150b50db4 & uVar31)),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50db8 & uVar32)),0x20);
      auVar93 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dbc & uVar104)),0x30);
      auVar38._4_4_ = uVar31;
      auVar38._0_4_ = uVar30;
      auVar38._8_4_ = uVar32;
      auVar38._12_4_ = uVar104;
      auVar38 = ___xmm_0000002c000000200000001400000008 & auVar38;
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 + auVar38._0_4_)),
                         *(undefined4 *)(*pauVar5 + auVar38._4_4_),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + auVar38._8_4_),0x20);
      auVar113 = insertps(auVar66,*(undefined4 *)(*pauVar5 + auVar38._12_4_),0x30);
      lVar22 = param_3 + lVar21 * 0xc;
      auVar66 = insertps(ZEXT416(*(uint *)(param_3 + lVar21 * 0xc)),*(undefined4 *)(lVar23 + lVar22)
                         ,0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(lVar27 + lVar22),0x20);
      auVar118 = insertps(auVar66,*(undefined4 *)(lVar26 + lVar22),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar30) +
                                          lVar22)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar31) + lVar22),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar32) + lVar22),0x20
                        );
      auVar107 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar104) + lVar22),
                          0x30);
      auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)auVar38._0_4_ + lVar22)),
                         *(undefined4 *)((ulonglong)auVar38._4_4_ + lVar22),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar38._8_4_ + lVar22),0x20);
      auVar56 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar38._12_4_ + lVar22),0x30);
      auVar46 = auVar78;
    }
    lVar21 = (longlong)(int)(uVar16 << 2);
    if ((bVar19 & 9) == 0) {
      auVar38 = *(undefined1 (*) [16])(param_4 + lVar21);
      auVar46 = *(undefined1 (*) [16])(param_5 + lVar21);
      lVar22 = param_5;
    }
    else {
      puVar24 = (uint *)(param_4 + lVar21);
      if ((uVar20 & 1) != 0) {
        auVar38 = ZEXT416(*puVar24);
      }
      if ((uVar20 & 2) != 0) {
        auVar38 = insertps(auVar38,puVar24[1],0x10);
      }
      if ((uVar20 & 4) != 0) {
        auVar38 = insertps(auVar38,puVar24[2],0x20);
      }
      if ((uVar20 & 8) != 0) {
        auVar38 = insertps(auVar38,puVar24[3],0x30);
      }
      if ((uVar20 & 1) != 0) {
        auVar46 = ZEXT416(*(uint *)(param_5 + lVar21));
      }
      if ((uVar20 & 2) != 0) {
        auVar46 = insertps(auVar46,*(undefined4 *)(param_5 + lVar21 + 4),0x10);
      }
      if ((uVar20 & 4) != 0) {
        auVar46 = insertps(auVar46,*(undefined4 *)(param_5 + lVar21 + 8),0x20);
      }
      lVar22 = param_5 + lVar21;
      if ((uVar20 & 8) != 0) {
        lVar22 = param_5 + lVar21;
        auVar46 = insertps(auVar46,*(undefined4 *)(lVar22 + 0xc),0x30);
      }
    }
    fVar77 = param_8 + param_9 * auVar46._0_4_;
    fVar81 = param_8 + param_9 * auVar46._4_4_;
    auVar62._4_4_ = fVar81;
    auVar62._0_4_ = fVar77;
    fVar84 = param_8 + param_9 * auVar46._8_4_;
    param_8 = param_8 + param_9 * auVar46._12_4_;
    fVar54 = param_6 + param_7 * auVar38._0_4_;
    fVar60 = param_6 + param_7 * auVar38._4_4_;
    fVar70 = param_6 + param_7 * auVar38._8_4_;
    param_6 = param_6 + param_7 * auVar38._12_4_;
    fVar102 = auVar79._0_4_ - auVar118._0_4_ * fVar54;
    fVar103 = auVar79._4_4_ - auVar118._4_4_ * fVar60;
    fVar86 = auVar79._8_4_ - auVar118._8_4_ * fVar70;
    fVar88 = auVar79._12_4_ - auVar118._12_4_ * param_6;
    fVar45 = auVar93._0_4_ - auVar107._0_4_ * fVar54;
    fVar49 = auVar93._4_4_ - auVar107._4_4_ * fVar60;
    fVar50 = auVar93._8_4_ - auVar107._8_4_ * fVar70;
    fVar51 = auVar93._12_4_ - auVar107._12_4_ * param_6;
    fVar33 = auVar113._0_4_ - auVar56._0_4_ * fVar54;
    fVar42 = auVar113._4_4_ - auVar56._4_4_ * fVar60;
    fVar43 = auVar113._8_4_ - auVar56._8_4_ * fVar70;
    fVar44 = auVar113._12_4_ - auVar56._12_4_ * param_6;
    fVar85 = auVar67._0_4_ - fVar102;
    fVar87 = auVar67._4_4_ - fVar103;
    fVar89 = auVar67._8_4_ - fVar86;
    fVar94 = auVar67._12_4_ - fVar88;
    fVar96 = auVar71._0_4_ - fVar45;
    fVar98 = auVar71._4_4_ - fVar49;
    fVar100 = auVar71._8_4_ - fVar50;
    fVar101 = auVar71._12_4_ - fVar51;
    local_138 = auVar78._0_4_;
    fStack_134 = auVar78._4_4_;
    fStack_130 = auVar78._8_4_;
    fStack_12c = auVar78._12_4_;
    local_138 = local_138 - fVar33;
    fStack_134 = fStack_134 - fVar42;
    fStack_130 = fStack_130 - fVar43;
    fStack_12c = fStack_12c - fVar44;
    auVar57._0_4_ = fVar96 * fVar96 + fVar85 * fVar85;
    auVar57._4_4_ = fVar98 * fVar98 + fVar87 * fVar87;
    auVar57._8_4_ = fVar100 * fVar100 + fVar89 * fVar89;
    auVar57._12_4_ = fVar101 * fVar101 + fVar94 * fVar94;
    auVar39._0_4_ = local_138 * local_138 + auVar57._0_4_;
    auVar39._4_4_ = fStack_134 * fStack_134 + auVar57._4_4_;
    auVar39._8_4_ = fStack_130 * fStack_130 + auVar57._8_4_;
    auVar39._12_4_ = fStack_12c * fStack_12c + auVar57._12_4_;
    auVar66 = sqrtps(auVar57,auVar39);
    auVar62._8_4_ = fVar84;
    auVar62._12_4_ = param_8;
    auVar66 = divps(auVar62,auVar66);
    fVar59 = auVar66._0_4_;
    fVar61 = auVar66._4_4_;
    fVar75 = auVar66._8_4_;
    fVar76 = auVar66._12_4_;
    fVar54 = fVar54 - fVar77;
    fVar60 = fVar60 - fVar81;
    fVar70 = fVar70 - fVar84;
    param_6 = param_6 - param_8;
    auVar80._0_4_ = auVar79._0_4_ - auVar118._0_4_ * fVar54;
    auVar80._4_4_ = auVar79._4_4_ - auVar118._4_4_ * fVar60;
    auVar80._8_4_ = auVar79._8_4_ - auVar118._8_4_ * fVar70;
    auVar80._12_4_ = auVar79._12_4_ - auVar118._12_4_ * param_6;
    uVar20 = -(uint)(auVar39._0_4_ < fVar77 * fVar77);
    uVar16 = -(uint)(auVar39._4_4_ < fVar81 * fVar81);
    uVar30 = -(uint)(auVar39._8_4_ < fVar84 * fVar84);
    uVar31 = -(uint)(auVar39._12_4_ < param_8 * param_8);
    auVar40._4_4_ = -(uint)(auVar39._4_4_ < _UNK_1506895d4);
    auVar40._0_4_ = -(uint)(auVar39._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar40._8_4_ = -(uint)(auVar39._8_4_ < _UNK_1506895d8);
    auVar40._12_4_ = -(uint)(auVar39._12_4_ < _UNK_1506895dc);
    auVar68._0_4_ = (uint)(fVar85 * fVar59 + fVar102) & uVar20;
    auVar68._4_4_ = (uint)(fVar87 * fVar61 + fVar103) & uVar16;
    auVar68._8_4_ = (uint)(fVar89 * fVar75 + fVar86) & uVar30;
    auVar68._12_4_ = (uint)(fVar94 * fVar76 + fVar88) & uVar31;
    auVar69 = blendvps(auVar68,auVar80,auVar40);
    auVar73._0_4_ = (uint)(fVar96 * fVar59 + fVar45) & uVar20;
    auVar73._4_4_ = (uint)(fVar98 * fVar61 + fVar49) & uVar16;
    auVar73._8_4_ = (uint)(fVar100 * fVar75 + fVar50) & uVar30;
    auVar73._12_4_ = (uint)(fVar101 * fVar76 + fVar51) & uVar31;
    auVar14._4_4_ = auVar93._4_4_ - auVar107._4_4_ * fVar60;
    auVar14._0_4_ = auVar93._0_4_ - auVar107._0_4_ * fVar54;
    auVar14._8_4_ = auVar93._8_4_ - auVar107._8_4_ * fVar70;
    auVar14._12_4_ = auVar93._12_4_ - auVar107._12_4_ * param_6;
    auVar74 = blendvps(auVar73,auVar14,auVar40);
    auVar114._0_4_ = auVar113._0_4_ - fVar54 * auVar56._0_4_;
    auVar114._4_4_ = auVar113._4_4_ - fVar60 * auVar56._4_4_;
    auVar114._8_4_ = auVar113._8_4_ - fVar70 * auVar56._8_4_;
    auVar114._12_4_ = auVar113._12_4_ - param_6 * auVar56._12_4_;
    auVar58._0_4_ = uVar20 & (uint)(fVar59 * local_138 + fVar33);
    auVar58._4_4_ = uVar16 & (uint)(fVar61 * fStack_134 + fVar42);
    auVar58._8_4_ = uVar30 & (uint)(fVar75 * fStack_130 + fVar43);
    auVar58._12_4_ = uVar31 & (uint)(fVar76 * fStack_12c + fVar44);
    auVar66 = blendvps(auVar58,auVar114,auVar40);
    fVar33 = auVar69._0_4_;
    auVar47._0_4_ = -(uint)((fVar90 != 0.0 && bVar9) && fVar33 != 0.0);
    auVar47._4_4_ = -(uint)((fVar95 != 0.0 && bVar10) && auVar69._4_4_ != 0.0);
    auVar47._8_4_ = -(uint)((fVar97 != 0.0 && bVar11) && auVar69._8_4_ != 0.0);
    auVar47._12_4_ = -(uint)((fVar99 != 0.0 && bVar12) && auVar69._12_4_ != 0.0);
    iVar17 = movmskps((int)lVar22,auVar47);
    if (iVar17 != 0) {
      bVar19 = (char)((char)iVar17 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar41._0_8_ = auVar69._0_8_;
        auVar41._8_4_ = auVar69._4_4_;
        auVar41._12_4_ = auVar74._4_4_;
        auVar48._0_8_ = auVar66._0_8_;
        auVar48._8_4_ = auVar66._4_4_;
        auVar48._12_4_ = fVar95;
        *(ulonglong *)*pauVar28 = CONCAT44(auVar74._0_4_,fVar33);
        *(ulonglong *)(*pauVar28 + 8) = CONCAT44(fVar90,auVar66._0_4_);
        *(longlong *)pauVar28[1] = auVar41._8_8_;
        *(longlong *)(pauVar28[1] + 8) = auVar48._8_8_;
        *(float *)pauVar28[2] = auVar69._8_4_;
        *(int *)(pauVar28[2] + 4) = auVar74._8_4_;
        *(int *)(pauVar28[2] + 8) = auVar66._8_4_;
        *(float *)(pauVar28[2] + 0xc) = fVar97;
        *(float *)pauVar28[3] = auVar69._12_4_;
        *(int *)(pauVar28[3] + 4) = auVar74._12_4_;
        *(int *)(pauVar28[3] + 8) = auVar66._12_4_;
        *(float *)(pauVar28[3] + 0xc) = fVar99;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar28 = fVar33;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar69,1);
          *(undefined8 *)pauVar28[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar69,2);
          *(undefined8 *)pauVar28[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar69,3);
          *(undefined8 *)pauVar28[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar28 + 4) = auVar74._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar74,1);
          *(undefined8 *)(pauVar28[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar74,2);
          *(undefined8 *)(pauVar28[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar74,3);
          *(undefined8 *)(pauVar28[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar28 + 8) = auVar66._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar66,1);
          *(undefined8 *)(pauVar28[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar66,2);
          *(undefined8 *)(pauVar28[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar66,3);
          *(undefined8 *)(pauVar28[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar28 + 0xc) = fVar90;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar91,1);
          *(undefined8 *)(pauVar28[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar91,2);
          *(undefined8 *)(pauVar28[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar91,3);
          *(undefined8 *)(pauVar28[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithDistanceMap_sse4 @ 140352860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithDistanceMap_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar54;
  float fVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar56;
  undefined1 auVar53 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar72 [16];
  float fVar78;
  float fVar79;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar80;
  float fVar81;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar87;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  float fVar99;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  float fVar106;
  float fVar111;
  float fVar112;
  float fVar113;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar31 = param_7 * param_7;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    auVar61._4_4_ = param_7;
    auVar61._0_4_ = param_7;
    auVar61._8_4_ = param_7;
    auVar61._12_4_ = param_7;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar78 = *(float *)(*pauVar25 + 0xc);
      auVar109 = *pauVar25;
      pauVar4 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar79 = *(float *)(*pauVar4 + 0xc);
      auVar70 = *pauVar4;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar80 = *(float *)(*pauVar5 + 0xc);
      auVar66 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar43 = *(float *)(*pauVar6 + 0xc);
      auVar50 = *pauVar6;
      auVar48._4_4_ = -(uint)(fVar79 != 0.0);
      auVar48._0_4_ = -(uint)(fVar78 != 0.0);
      auVar48._8_4_ = -(uint)(fVar80 != 0.0);
      auVar48._12_4_ = -(uint)(fVar43 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar48);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar48 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar33 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar58 = insertps(auVar33,auVar48,0x8c);
        auVar47 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar59 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar44 = insertps(auVar59,auVar47,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar81 = *pfVar3 * param_6 + param_5;
        fVar84 = pfVar3[1] * param_6 + param_5;
        fVar85 = pfVar3[2] * param_6 + param_5;
        fVar86 = pfVar3[3] * param_6 + param_5;
        fVar71 = auVar48._0_4_ - auVar47._0_4_ * fVar81;
        fVar73 = auVar48._12_4_ - auVar47._12_4_ * fVar84;
        fVar74 = auVar33._8_4_ - auVar59._8_4_ * fVar85;
        fVar75 = pfVar1[1] - pfVar2[1] * fVar86;
        fVar94 = auVar48._4_4_ - auVar47._4_4_ * fVar81;
        fVar96 = auVar33._0_4_ - auVar59._0_4_ * fVar84;
        fVar97 = auVar33._12_4_ - auVar59._12_4_ * fVar85;
        fVar98 = pfVar1[2] - pfVar2[2] * fVar86;
        fVar32 = auVar58._0_4_ - auVar44._0_4_ * fVar81;
        fVar40 = auVar58._4_4_ - auVar44._4_4_ * fVar84;
        fVar41 = *pfVar1 - *pfVar2 * fVar85;
        fVar42 = pfVar1[3] - pfVar2[3] * fVar86;
        fVar106 = *(float *)*pauVar25 - fVar71;
        fVar111 = *(float *)*pauVar4 - fVar73;
        fVar112 = *(float *)*pauVar5 - fVar74;
        fVar113 = *(float *)*pauVar6 - fVar75;
        fVar87 = *(float *)(*pauVar25 + 4) - fVar94;
        fVar91 = *(float *)(*pauVar4 + 4) - fVar96;
        fVar92 = *(float *)(*pauVar5 + 4) - fVar97;
        fVar93 = *(float *)(*pauVar6 + 4) - fVar98;
        fVar99 = *(float *)(*pauVar25 + 8) - fVar32;
        fVar102 = *(float *)(*pauVar4 + 8) - fVar40;
        fVar103 = *(float *)(*pauVar5 + 8) - fVar41;
        fVar104 = *(float *)(*pauVar6 + 8) - fVar42;
        auVar64._0_4_ = fVar87 * fVar87 + fVar106 * fVar106;
        auVar64._4_4_ = fVar91 * fVar91 + fVar111 * fVar111;
        auVar64._8_4_ = fVar92 * fVar92 + fVar112 * fVar112;
        auVar64._12_4_ = fVar93 * fVar93 + fVar113 * fVar113;
        auVar89._0_4_ = fVar99 * fVar99 + auVar64._0_4_;
        auVar89._4_4_ = fVar102 * fVar102 + auVar64._4_4_;
        auVar89._8_4_ = fVar103 * fVar103 + auVar64._8_4_;
        auVar89._12_4_ = fVar104 * fVar104 + auVar64._12_4_;
        auVar65 = sqrtps(auVar64,auVar89);
        auVar65 = divps(auVar61,auVar65);
        fVar54 = auVar65._0_4_;
        fVar55 = auVar65._4_4_;
        fVar56 = auVar65._8_4_;
        fVar57 = auVar65._12_4_;
        fVar81 = fVar81 - param_7;
        fVar84 = fVar84 - param_7;
        fVar85 = fVar85 - param_7;
        fVar86 = fVar86 - param_7;
        auVar108._0_4_ = auVar48._0_4_ - auVar47._0_4_ * fVar81;
        auVar108._4_4_ = auVar48._12_4_ - auVar47._12_4_ * fVar84;
        auVar108._8_4_ = auVar33._8_4_ - auVar59._8_4_ * fVar85;
        auVar108._12_4_ = pfVar1[1] - pfVar2[1] * fVar86;
        uVar15 = -(uint)(auVar89._0_4_ < fVar31);
        uVar28 = -(uint)(auVar89._4_4_ < fVar31);
        uVar29 = -(uint)(auVar89._8_4_ < fVar31);
        uVar30 = -(uint)(auVar89._12_4_ < fVar31);
        auVar107._0_4_ = (uint)(fVar106 * fVar54 + fVar71) & uVar15;
        auVar107._4_4_ = (uint)(fVar111 * fVar55 + fVar73) & uVar28;
        auVar107._8_4_ = (uint)(fVar112 * fVar56 + fVar74) & uVar29;
        auVar107._12_4_ = (uint)(fVar113 * fVar57 + fVar75) & uVar30;
        auVar65._4_4_ = -(uint)(auVar89._4_4_ < _UNK_1506895d4);
        auVar65._0_4_ = -(uint)(auVar89._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar65._8_4_ = -(uint)(auVar89._8_4_ < _UNK_1506895d8);
        auVar65._12_4_ = -(uint)(auVar89._12_4_ < _UNK_1506895dc);
        auVar108 = blendvps(auVar107,auVar108,auVar65);
        auVar60._0_4_ = auVar48._4_4_ - auVar47._4_4_ * fVar81;
        auVar60._4_4_ = auVar33._0_4_ - auVar59._0_4_ * fVar84;
        auVar60._8_4_ = auVar33._12_4_ - auVar59._12_4_ * fVar85;
        auVar60._12_4_ = pfVar1[2] - pfVar2[2] * fVar86;
        auVar88._0_4_ = (uint)(fVar87 * fVar54 + fVar94) & uVar15;
        auVar88._4_4_ = (uint)(fVar91 * fVar55 + fVar96) & uVar28;
        auVar88._8_4_ = (uint)(fVar92 * fVar56 + fVar97) & uVar29;
        auVar88._12_4_ = (uint)(fVar93 * fVar57 + fVar98) & uVar30;
        auVar89 = blendvps(auVar88,auVar60,auVar65);
        auVar59._0_4_ = auVar58._0_4_ - fVar81 * auVar44._0_4_;
        auVar59._4_4_ = auVar58._4_4_ - fVar84 * auVar44._4_4_;
        auVar59._8_4_ = *pfVar1 - fVar85 * *pfVar2;
        auVar59._12_4_ = pfVar1[3] - fVar86 * pfVar2[3];
        auVar47._0_4_ = uVar15 & (uint)(fVar54 * fVar99 + fVar32);
        auVar47._4_4_ = uVar28 & (uint)(fVar55 * fVar102 + fVar40);
        auVar47._8_4_ = uVar29 & (uint)(fVar56 * fVar103 + fVar41);
        auVar47._12_4_ = uVar30 & (uint)(fVar57 * fVar104 + fVar42);
        auVar48 = blendvps(auVar47,auVar59,auVar65);
        fVar32 = auVar108._0_4_;
        auVar33._0_4_ = -(uint)(fVar32 != 0.0 && fVar78 != 0.0);
        auVar33._4_4_ = -(uint)(auVar108._4_4_ != 0.0 && fVar79 != 0.0);
        auVar33._8_4_ = -(uint)(auVar108._8_4_ != 0.0 && fVar80 != 0.0);
        auVar33._12_4_ = -(uint)(auVar108._12_4_ != 0.0 && fVar43 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar33);
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar66._0_8_ = auVar108._0_8_;
            auVar66._8_4_ = auVar108._4_4_;
            auVar66._12_4_ = auVar89._4_4_;
            auVar70._0_8_ = auVar48._0_8_;
            auVar70._8_4_ = auVar48._4_4_;
            auVar70._12_4_ = fVar79;
            auVar50._12_4_ = fVar78;
            auVar50._8_4_ = auVar48._0_4_;
            auVar109._0_8_ = CONCAT44(auVar89._8_4_,auVar108._8_4_);
            auVar109._8_4_ = auVar108._12_4_;
            auVar109._12_4_ = auVar89._12_4_;
            auVar50._4_4_ = auVar89._0_4_;
            auVar50._0_4_ = fVar32;
            *(undefined1 (*) [16])(lVar20 + uVar26 * 4) = auVar50;
            puVar7 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar7 = auVar66._8_8_;
            puVar7[1] = auVar70._8_8_;
            puVar7 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar7 = auVar109._0_8_;
            *(int *)(puVar7 + 1) = auVar48._8_4_;
            *(float *)((longlong)puVar7 + 0xc) = fVar80;
            puVar7 = (undefined8 *)(lVar20 + 0x30 + uVar26 * 4);
            *puVar7 = auVar109._8_8_;
            *(int *)(puVar7 + 1) = auVar48._12_4_;
            *(float *)((longlong)puVar7 + 0xc) = fVar43;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar32;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar108,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar108,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar108,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar26 * 4) = auVar89._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar89,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar89,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar89,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar26 * 4) = auVar48._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar48,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar48,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar48,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar109,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar70,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar66,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar50,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar8;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar9 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  auVar44._0_4_ = -(uint)bVar9;
  bVar10 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  auVar44._4_4_ = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  auVar44._8_4_ = -(uint)bVar11;
  bVar12 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  auVar44._12_4_ = -(uint)bVar12;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  uVar15 = movmskps((int)unaff_RBX,auVar44);
  if (uVar15 == 0xf) {
    auVar61 = *pauVar25;
    auVar66 = pauVar25[2];
    auVar51._8_4_ = auVar61._4_4_;
    auVar51._0_8_ = auVar61._0_8_;
    auVar51._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar58._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar61._8_4_);
    auVar58._8_4_ = auVar61._12_4_;
    auVar58._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar68._0_8_ = auVar66._0_8_;
    auVar68._8_4_ = auVar66._4_4_;
    auVar68._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar67._8_8_ = auVar68._8_8_;
    auVar62._12_4_ = *(undefined4 *)pauVar25[3];
    auVar62._8_4_ = auVar66._0_4_;
    auVar77._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar66._8_4_);
    auVar77._8_4_ = auVar66._12_4_;
    auVar77._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar62._4_4_ = *(undefined4 *)pauVar25[1];
    auVar62._0_4_ = auVar61._0_4_;
    auVar67._0_8_ = auVar51._8_8_;
    auVar49._8_8_ = auVar77._0_8_;
    auVar49._0_8_ = auVar58._0_8_;
    auVar76._8_8_ = auVar77._8_8_;
    auVar76._0_8_ = auVar58._8_8_;
  }
  else {
    auVar34._0_4_ = ___xmm_00000030000000200000001000000000 & auVar44._0_4_;
    auVar34._4_4_ = _UNK_150b511c4 & auVar44._4_4_;
    auVar34._8_4_ = _UNK_150b511c8 & auVar44._8_4_;
    auVar34._12_4_ = _UNK_150b511cc & auVar44._12_4_;
    lVar18 = extractps(auVar34,1);
    lVar22 = extractps(auVar34,2);
    lVar24 = extractps(auVar34,3);
    auVar61 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar61 = insertps(auVar61,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar62 = insertps(auVar61,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar61 = ___xmm_00000034000000240000001400000004 & auVar44;
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar61._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar61._4_4_),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._8_4_),0x20);
    auVar67 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._12_4_),0x30);
    auVar61 = ___xmm_00000038000000280000001800000008 & auVar44;
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar61._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar61._4_4_),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._8_4_),0x20);
    auVar49 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._12_4_),0x30);
    auVar61 = ___xmm_0000003c0000002c0000001c0000000c & auVar44;
    uVar14 = (ulonglong)auVar61._4_4_;
    auVar66 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar61._0_4_)),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._8_4_),0x20);
    auVar76 = insertps(auVar66,*(undefined4 *)(*pauVar25 + auVar61._12_4_),0x30);
  }
  fVar31 = auVar76._0_4_;
  fVar78 = auVar76._4_4_;
  fVar79 = auVar76._8_4_;
  fVar80 = auVar76._12_4_;
  auVar35._0_4_ = -(uint)(fVar31 != 0.0 && bVar9);
  auVar35._4_4_ = -(uint)(fVar78 != 0.0 && bVar10);
  auVar35._8_4_ = -(uint)(fVar79 != 0.0 && bVar11);
  auVar35._12_4_ = -(uint)(fVar80 != 0.0 && bVar12);
  iVar16 = movmskps((int)uVar14,auVar35);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar4 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar61 = *pauVar4;
      auVar66 = pauVar4[1];
      auVar82._0_4_ = auVar61._0_4_;
      auVar70 = insertps(auVar66,auVar61,0x8c);
      auVar82._4_4_ = auVar61._12_4_;
      auVar82._8_4_ = auVar66._8_4_;
      auVar82._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      local_188._4_4_ = auVar66._0_4_;
      local_188._0_4_ = auVar61._4_4_;
      fStack_180 = (float)auVar66._12_4_;
      fStack_17c = (float)*(undefined4 *)(pauVar4[2] + 8);
      auVar100._0_8_ = auVar70._0_8_;
      auVar100._8_4_ = *(undefined4 *)pauVar4[2];
      auVar100._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar61 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar66 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar44 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar105._0_4_ = auVar61._0_4_;
      auVar70 = insertps(auVar66,auVar61,0x8c);
      auVar105._4_4_ = auVar61._12_4_;
      auVar105._8_4_ = auVar66._8_4_;
      auVar105._12_4_ = auVar44._4_4_;
      auVar95._4_4_ = auVar66._0_4_;
      auVar95._0_4_ = auVar61._4_4_;
      auVar95._8_4_ = auVar66._12_4_;
      auVar95._12_4_ = auVar44._8_4_;
      auVar52._0_8_ = auVar70._0_8_;
      auVar52._8_4_ = auVar44._0_4_;
      auVar52._12_4_ = auVar44._12_4_;
    }
    else {
      auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar44._0_4_;
      auVar36._4_4_ = _UNK_150b50da4 & auVar44._4_4_;
      auVar36._8_4_ = _UNK_150b50da8 & auVar44._8_4_;
      auVar36._12_4_ = _UNK_150b50dac & auVar44._12_4_;
      lVar22 = extractps(auVar36,1);
      lVar23 = extractps(auVar36,2);
      lVar24 = extractps(auVar36,3);
      auVar61 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar22),0x10);
      auVar61 = insertps(auVar61,*(undefined4 *)(*pauVar4 + lVar23),0x20);
      auVar82 = insertps(auVar61,*(undefined4 *)(*pauVar4 + lVar24),0x30);
      auVar61 = ___xmm_000000280000001c0000001000000004 & auVar44;
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar61._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar61._4_4_),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar61._8_4_),0x20);
      _local_188 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar61._12_4_),0x30);
      auVar44 = ___xmm_0000002c000000200000001400000008 & auVar44;
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar44._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar44._4_4_),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar44._8_4_),0x20);
      auVar100 = insertps(auVar66,*(undefined4 *)(*pauVar4 + auVar44._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar66 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar105 = insertps(auVar66,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)auVar61._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar61._4_4_ + lVar18),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar61._8_4_ + lVar18),0x20);
      auVar95 = insertps(auVar66,*(undefined4 *)((ulonglong)auVar61._12_4_ + lVar18),0x30);
      auVar61 = insertps(ZEXT416(*(uint *)((ulonglong)auVar44._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar44._4_4_ + lVar18),0x10);
      auVar61 = insertps(auVar61,*(undefined4 *)((ulonglong)auVar44._8_4_ + lVar18),0x20);
      auVar52 = insertps(auVar61,*(undefined4 *)((ulonglong)auVar44._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar44 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar44 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar44 = insertps(auVar44,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar44 = insertps(auVar44,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar44 = insertps(auVar44,puVar21[3],0x30);
      }
    }
    auVar72._0_4_ = param_6 * auVar44._0_4_;
    auVar72._4_4_ = param_6 * auVar44._4_4_;
    auVar72._8_4_ = param_6 * auVar44._8_4_;
    auVar72._12_4_ = param_6 * auVar44._12_4_;
    fVar57 = param_5 + auVar72._0_4_;
    fVar81 = param_5 + auVar72._4_4_;
    fVar84 = param_5 + auVar72._8_4_;
    param_5 = param_5 + auVar72._12_4_;
    fVar75 = auVar82._0_4_ - auVar105._0_4_ * fVar57;
    fVar54 = auVar82._4_4_ - auVar105._4_4_ * fVar81;
    fVar55 = auVar82._8_4_ - auVar105._8_4_ * fVar84;
    fVar56 = auVar82._12_4_ - auVar105._12_4_ * param_5;
    fVar42 = (float)local_188._0_4_ - auVar95._0_4_ * fVar57;
    fVar71 = (float)local_188._4_4_ - auVar95._4_4_ * fVar81;
    fVar73 = fStack_180 - auVar95._8_4_ * fVar84;
    fVar74 = fStack_17c - auVar95._12_4_ * param_5;
    fVar43 = auVar100._0_4_ - auVar52._0_4_ * fVar57;
    fVar32 = auVar100._4_4_ - auVar52._4_4_ * fVar81;
    fVar40 = auVar100._8_4_ - auVar52._8_4_ * fVar84;
    fVar41 = auVar100._12_4_ - auVar52._12_4_ * param_5;
    fVar85 = auVar62._0_4_ - fVar75;
    fVar86 = auVar62._4_4_ - fVar54;
    fVar87 = auVar62._8_4_ - fVar55;
    fVar91 = auVar62._12_4_ - fVar56;
    fVar92 = auVar67._0_4_ - fVar42;
    fVar93 = auVar67._4_4_ - fVar71;
    fVar94 = auVar67._8_4_ - fVar73;
    fVar96 = auVar67._12_4_ - fVar74;
    fVar97 = auVar49._0_4_ - fVar43;
    fVar98 = auVar49._4_4_ - fVar32;
    fVar99 = auVar49._8_4_ - fVar40;
    fVar102 = auVar49._12_4_ - fVar41;
    auVar37._0_4_ = fVar97 * fVar97 + fVar92 * fVar92 + fVar85 * fVar85;
    auVar37._4_4_ = fVar98 * fVar98 + fVar93 * fVar93 + fVar86 * fVar86;
    auVar37._8_4_ = fVar99 * fVar99 + fVar94 * fVar94 + fVar87 * fVar87;
    auVar37._12_4_ = fVar102 * fVar102 + fVar96 * fVar96 + fVar91 * fVar91;
    auVar110._4_4_ = param_7;
    auVar110._0_4_ = param_7;
    auVar110._8_4_ = param_7;
    auVar110._12_4_ = param_7;
    auVar61 = sqrtps(auVar72,auVar37);
    fVar57 = fVar57 - param_7;
    fVar81 = fVar81 - param_7;
    fVar84 = fVar84 - param_7;
    param_5 = param_5 - param_7;
    auVar61 = divps(auVar110,auVar61);
    fVar103 = auVar61._0_4_;
    fVar104 = auVar61._4_4_;
    fVar106 = auVar61._8_4_;
    fVar111 = auVar61._12_4_;
    auVar83._0_4_ = auVar82._0_4_ - auVar105._0_4_ * fVar57;
    auVar83._4_4_ = auVar82._4_4_ - auVar105._4_4_ * fVar81;
    auVar83._8_4_ = auVar82._8_4_ - auVar105._8_4_ * fVar84;
    auVar83._12_4_ = auVar82._12_4_ - auVar105._12_4_ * param_5;
    param_7 = param_7 * param_7;
    uVar27 = -(uint)(auVar37._0_4_ < param_7);
    uVar15 = -(uint)(auVar37._4_4_ < param_7);
    uVar28 = -(uint)(auVar37._8_4_ < param_7);
    uVar29 = -(uint)(auVar37._12_4_ < param_7);
    auVar38._4_4_ = -(uint)(auVar37._4_4_ < _UNK_1506895d4);
    auVar38._0_4_ = -(uint)(auVar37._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar38._8_4_ = -(uint)(auVar37._8_4_ < _UNK_1506895d8);
    auVar38._12_4_ = -(uint)(auVar37._12_4_ < _UNK_1506895dc);
    auVar63._0_4_ = (uint)(fVar85 * fVar103 + fVar75) & uVar27;
    auVar63._4_4_ = (uint)(fVar86 * fVar104 + fVar54) & uVar15;
    auVar63._8_4_ = (uint)(fVar87 * fVar106 + fVar55) & uVar28;
    auVar63._12_4_ = (uint)(fVar91 * fVar111 + fVar56) & uVar29;
    auVar66 = blendvps(auVar63,auVar83,auVar38);
    auVar90._0_4_ = (float)local_188._0_4_ - auVar95._0_4_ * fVar57;
    auVar90._4_4_ = (float)local_188._4_4_ - auVar95._4_4_ * fVar81;
    auVar90._8_4_ = fStack_180 - auVar95._8_4_ * fVar84;
    auVar90._12_4_ = fStack_17c - auVar95._12_4_ * param_5;
    auVar69._0_4_ = (uint)(fVar92 * fVar103 + fVar42) & uVar27;
    auVar69._4_4_ = (uint)(fVar93 * fVar104 + fVar71) & uVar15;
    auVar69._8_4_ = (uint)(fVar94 * fVar106 + fVar73) & uVar28;
    auVar69._12_4_ = (uint)(fVar96 * fVar111 + fVar74) & uVar29;
    auVar70 = blendvps(auVar69,auVar90,auVar38);
    auVar101._0_4_ = auVar100._0_4_ - fVar57 * auVar52._0_4_;
    auVar101._4_4_ = auVar100._4_4_ - fVar81 * auVar52._4_4_;
    auVar101._8_4_ = auVar100._8_4_ - fVar84 * auVar52._8_4_;
    auVar101._12_4_ = auVar100._12_4_ - param_5 * auVar52._12_4_;
    auVar53._0_4_ = uVar27 & (uint)(fVar103 * fVar97 + fVar43);
    auVar53._4_4_ = uVar15 & (uint)(fVar104 * fVar98 + fVar32);
    auVar53._8_4_ = uVar28 & (uint)(fVar106 * fVar99 + fVar40);
    auVar53._12_4_ = uVar29 & (uint)(fVar111 * fVar102 + fVar41);
    auVar61 = blendvps(auVar53,auVar101,auVar38);
    fVar43 = auVar66._0_4_;
    auVar45._0_4_ = -(uint)((fVar31 != 0.0 && bVar9) && fVar43 != 0.0);
    auVar45._4_4_ = -(uint)((fVar78 != 0.0 && bVar10) && auVar66._4_4_ != 0.0);
    auVar45._8_4_ = -(uint)((fVar79 != 0.0 && bVar11) && auVar66._8_4_ != 0.0);
    auVar45._12_4_ = -(uint)((fVar80 != 0.0 && bVar12) && auVar66._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar45);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar39._0_8_ = auVar66._0_8_;
        auVar39._8_4_ = auVar66._4_4_;
        auVar39._12_4_ = auVar70._4_4_;
        auVar46._0_8_ = auVar61._0_8_;
        auVar46._8_4_ = auVar61._4_4_;
        auVar46._12_4_ = fVar78;
        *(ulonglong *)*pauVar25 = CONCAT44(auVar70._0_4_,fVar43);
        *(ulonglong *)(*pauVar25 + 8) = CONCAT44(fVar31,auVar61._0_4_);
        *(longlong *)pauVar25[1] = auVar39._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar46._8_8_;
        *(float *)pauVar25[2] = auVar66._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar70._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar61._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar79;
        *(float *)pauVar25[3] = auVar66._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar70._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar61._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar80;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar43;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar66,1);
          *(undefined8 *)pauVar25[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar66,2);
          *(undefined8 *)pauVar25[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar66,3);
          *(undefined8 *)pauVar25[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar70._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar70,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar70,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar70,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar61._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar61,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar61,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar61,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar76,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar76,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar76,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithRadiusMap_sse4 @ 140353550

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithRadiusMap_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar105 [16];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar72 = *(float *)(*pauVar25 + 0xc);
      auVar52 = *pauVar25;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar76 = *(float *)(*pauVar5 + 0xc);
      auVar71 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar78 = *(float *)(*pauVar6 + 0xc);
      auVar67 = *pauVar6;
      pauVar7 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar80 = *(float *)(*pauVar7 + 0xc);
      auVar60 = *pauVar7;
      auVar51._4_4_ = -(uint)(fVar76 != 0.0);
      auVar51._0_4_ = -(uint)(fVar72 != 0.0);
      auVar51._8_4_ = -(uint)(fVar78 != 0.0);
      auVar51._12_4_ = -(uint)(fVar80 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar51);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar51 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar32 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar82 = insertps(auVar32,auVar51,0x8c);
        auVar50 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar83 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar66 = insertps(auVar83,auVar50,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar43 = *pfVar3 * param_7 + param_6;
        fVar46 = pfVar3[1] * param_7 + param_6;
        auVar90._4_4_ = fVar46;
        auVar90._0_4_ = fVar43;
        fVar47 = pfVar3[2] * param_7 + param_6;
        fVar48 = pfVar3[3] * param_7 + param_6;
        fVar59 = auVar51._0_4_ - param_5 * auVar50._0_4_;
        fVar63 = auVar51._12_4_ - param_5 * auVar50._12_4_;
        fVar64 = auVar32._8_4_ - param_5 * auVar83._8_4_;
        fVar65 = pfVar1[1] - param_5 * pfVar2[1];
        fVar93 = auVar51._4_4_ - param_5 * auVar50._4_4_;
        fVar96 = auVar32._0_4_ - param_5 * auVar83._0_4_;
        fVar97 = auVar32._12_4_ - param_5 * auVar83._12_4_;
        fVar98 = pfVar1[2] - param_5 * pfVar2[2];
        fVar31 = auVar82._0_4_ - param_5 * auVar66._0_4_;
        fVar40 = auVar82._4_4_ - param_5 * auVar66._4_4_;
        fVar41 = *pfVar1 - param_5 * *pfVar2;
        fVar42 = pfVar1[3] - param_5 * pfVar2[3];
        fVar109 = *(float *)*pauVar25 - fVar59;
        fVar113 = *(float *)*pauVar5 - fVar63;
        fVar114 = *(float *)*pauVar6 - fVar64;
        fVar115 = *(float *)*pauVar7 - fVar65;
        fVar84 = *(float *)(*pauVar25 + 4) - fVar93;
        fVar87 = *(float *)(*pauVar5 + 4) - fVar96;
        fVar88 = *(float *)(*pauVar6 + 4) - fVar97;
        fVar89 = *(float *)(*pauVar7 + 4) - fVar98;
        fVar99 = *(float *)(*pauVar25 + 8) - fVar31;
        fVar101 = *(float *)(*pauVar5 + 8) - fVar40;
        fVar102 = *(float *)(*pauVar6 + 8) - fVar41;
        fVar103 = *(float *)(*pauVar7 + 8) - fVar42;
        auVar111._0_4_ = fVar84 * fVar84 + fVar109 * fVar109;
        auVar111._4_4_ = fVar87 * fVar87 + fVar113 * fVar113;
        auVar111._8_4_ = fVar88 * fVar88 + fVar114 * fVar114;
        auVar111._12_4_ = fVar89 * fVar89 + fVar115 * fVar115;
        auVar86._0_4_ = fVar99 * fVar99 + auVar111._0_4_;
        auVar86._4_4_ = fVar101 * fVar101 + auVar111._4_4_;
        auVar86._8_4_ = fVar102 * fVar102 + auVar111._8_4_;
        auVar86._12_4_ = fVar103 * fVar103 + auVar111._12_4_;
        auVar49 = sqrtps(auVar111,auVar86);
        auVar90._8_4_ = fVar47;
        auVar90._12_4_ = fVar48;
        auVar49 = divps(auVar90,auVar49);
        fVar73 = auVar49._0_4_;
        fVar77 = auVar49._4_4_;
        fVar79 = auVar49._8_4_;
        fVar81 = auVar49._12_4_;
        fVar104 = param_5 - fVar43;
        fVar106 = param_5 - fVar46;
        fVar107 = param_5 - fVar47;
        fVar108 = param_5 - fVar48;
        auVar116._0_4_ = auVar51._0_4_ - auVar50._0_4_ * fVar104;
        auVar116._4_4_ = auVar51._12_4_ - auVar50._12_4_ * fVar106;
        auVar116._8_4_ = auVar32._8_4_ - auVar83._8_4_ * fVar107;
        auVar116._12_4_ = pfVar1[1] - pfVar2[1] * fVar108;
        uVar15 = -(uint)(auVar86._0_4_ < fVar43 * fVar43);
        uVar28 = -(uint)(auVar86._4_4_ < fVar46 * fVar46);
        uVar29 = -(uint)(auVar86._8_4_ < fVar47 * fVar47);
        uVar30 = -(uint)(auVar86._12_4_ < fVar48 * fVar48);
        auVar110._0_4_ = (uint)(fVar109 * fVar73 + fVar59) & uVar15;
        auVar110._4_4_ = (uint)(fVar113 * fVar77 + fVar63) & uVar28;
        auVar110._8_4_ = (uint)(fVar114 * fVar79 + fVar64) & uVar29;
        auVar110._12_4_ = (uint)(fVar115 * fVar81 + fVar65) & uVar30;
        auVar49._4_4_ = -(uint)(auVar86._4_4_ < _UNK_1506895d4);
        auVar49._0_4_ = -(uint)(auVar86._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar49._8_4_ = -(uint)(auVar86._8_4_ < _UNK_1506895d8);
        auVar49._12_4_ = -(uint)(auVar86._12_4_ < _UNK_1506895dc);
        auVar111 = blendvps(auVar110,auVar116,auVar49);
        auVar56._0_4_ = auVar51._4_4_ - auVar50._4_4_ * fVar104;
        auVar56._4_4_ = auVar32._0_4_ - auVar83._0_4_ * fVar106;
        auVar56._8_4_ = auVar32._12_4_ - auVar83._12_4_ * fVar107;
        auVar56._12_4_ = pfVar1[2] - pfVar2[2] * fVar108;
        auVar85._0_4_ = (uint)(fVar84 * fVar73 + fVar93) & uVar15;
        auVar85._4_4_ = (uint)(fVar87 * fVar77 + fVar96) & uVar28;
        auVar85._8_4_ = (uint)(fVar88 * fVar79 + fVar97) & uVar29;
        auVar85._12_4_ = (uint)(fVar89 * fVar81 + fVar98) & uVar30;
        auVar86 = blendvps(auVar85,auVar56,auVar49);
        auVar83._0_4_ = auVar82._0_4_ - fVar104 * auVar66._0_4_;
        auVar83._4_4_ = auVar82._4_4_ - fVar106 * auVar66._4_4_;
        auVar83._8_4_ = *pfVar1 - fVar107 * *pfVar2;
        auVar83._12_4_ = pfVar1[3] - fVar108 * pfVar2[3];
        auVar50._0_4_ = uVar15 & (uint)(fVar73 * fVar99 + fVar31);
        auVar50._4_4_ = uVar28 & (uint)(fVar77 * fVar101 + fVar40);
        auVar50._8_4_ = uVar29 & (uint)(fVar79 * fVar102 + fVar41);
        auVar50._12_4_ = uVar30 & (uint)(fVar81 * fVar103 + fVar42);
        auVar51 = blendvps(auVar50,auVar83,auVar49);
        fVar31 = auVar111._0_4_;
        auVar32._0_4_ = -(uint)(fVar31 != 0.0 && fVar72 != 0.0);
        auVar32._4_4_ = -(uint)(auVar111._4_4_ != 0.0 && fVar76 != 0.0);
        auVar32._8_4_ = -(uint)(auVar111._8_4_ != 0.0 && fVar78 != 0.0);
        auVar32._12_4_ = -(uint)(auVar111._12_4_ != 0.0 && fVar80 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar32);
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar60._0_8_ = auVar111._0_8_;
            auVar60._8_4_ = auVar111._4_4_;
            auVar60._12_4_ = auVar86._4_4_;
            auVar67._0_8_ = auVar51._0_8_;
            auVar67._8_4_ = auVar51._4_4_;
            auVar67._12_4_ = fVar76;
            auVar66._0_8_ = CONCAT44(auVar86._8_4_,auVar111._8_4_);
            auVar66._8_4_ = auVar111._12_4_;
            auVar66._12_4_ = auVar86._12_4_;
            auVar71._0_8_ = CONCAT44(fVar78,auVar51._8_4_);
            auVar71._8_4_ = auVar51._12_4_;
            auVar71._12_4_ = fVar80;
            puVar4 = (undefined8 *)(lVar20 + uVar26 * 4);
            *puVar4 = CONCAT44(auVar86._0_4_,fVar31);
            puVar4[1] = CONCAT44(fVar72,auVar51._0_4_);
            puVar4 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar4 = auVar60._8_8_;
            puVar4[1] = auVar67._8_8_;
            puVar4 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar4 = auVar66._0_8_;
            puVar4[1] = auVar71._0_8_;
            auVar52._8_8_ = auVar71._8_8_;
            auVar52._0_8_ = auVar66._8_8_;
            *(undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4) = auVar52;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar31;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar111,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar111,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar111,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar26 * 4) = auVar86._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar86,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar86,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar86,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar26 * 4) = auVar51._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar51,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar51,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar51,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar52,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar71,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar67,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar60,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar8;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar9 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  auVar82._0_4_ = -(uint)bVar9;
  bVar10 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  auVar82._4_4_ = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  auVar82._8_4_ = -(uint)bVar11;
  bVar12 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  auVar82._12_4_ = -(uint)bVar12;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  uVar15 = movmskps((int)unaff_RBX,auVar82);
  if (uVar15 == 0xf) {
    auVar60 = *pauVar25;
    auVar67 = pauVar25[2];
    auVar53._8_4_ = auVar60._4_4_;
    auVar53._0_8_ = auVar60._0_8_;
    auVar53._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar34._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar60._8_4_);
    auVar34._8_4_ = auVar60._12_4_;
    auVar34._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar69._0_8_ = auVar67._0_8_;
    auVar69._8_4_ = auVar67._4_4_;
    auVar69._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar68._8_8_ = auVar69._8_8_;
    auVar61._12_4_ = *(undefined4 *)pauVar25[3];
    auVar61._8_4_ = auVar67._0_4_;
    auVar75._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar67._8_4_);
    auVar75._8_4_ = auVar67._12_4_;
    auVar75._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar61._4_4_ = *(undefined4 *)pauVar25[1];
    auVar61._0_4_ = auVar60._0_4_;
    auVar68._0_8_ = auVar53._8_8_;
    auVar117._8_8_ = auVar75._0_8_;
    auVar117._0_8_ = auVar34._0_8_;
    auVar74._8_8_ = auVar75._8_8_;
    auVar74._0_8_ = auVar34._8_8_;
  }
  else {
    auVar33._0_4_ = ___xmm_00000030000000200000001000000000 & auVar82._0_4_;
    auVar33._4_4_ = _UNK_150b511c4 & auVar82._4_4_;
    auVar33._8_4_ = _UNK_150b511c8 & auVar82._8_4_;
    auVar33._12_4_ = _UNK_150b511cc & auVar82._12_4_;
    lVar18 = extractps(auVar33,1);
    lVar22 = extractps(auVar33,2);
    lVar24 = extractps(auVar33,3);
    auVar60 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar61 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar60 = ___xmm_00000034000000240000001400000004 & auVar82;
    auVar67 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar60._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar60._4_4_),0x10);
    auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._8_4_),0x20);
    auVar68 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._12_4_),0x30);
    auVar60 = ___xmm_00000038000000280000001800000008 & auVar82;
    auVar67 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar60._0_4_)),
                       *(undefined4 *)(*pauVar25 + auVar60._4_4_),0x10);
    auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._8_4_),0x20);
    auVar117 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._12_4_),0x30);
    auVar60 = ___xmm_0000003c0000002c0000001c0000000c & auVar82;
    uVar14 = (ulonglong)auVar60._4_4_;
    auVar67 = insertps(ZEXT416(*(uint *)(*pauVar25 + auVar60._0_4_)),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._8_4_),0x20);
    auVar74 = insertps(auVar67,*(undefined4 *)(*pauVar25 + auVar60._12_4_),0x30);
  }
  fVar72 = auVar74._0_4_;
  fVar76 = auVar74._4_4_;
  fVar78 = auVar74._8_4_;
  fVar80 = auVar74._12_4_;
  auVar35._0_4_ = -(uint)(fVar72 != 0.0 && bVar9);
  auVar35._4_4_ = -(uint)(fVar76 != 0.0 && bVar10);
  auVar35._8_4_ = -(uint)(fVar78 != 0.0 && bVar11);
  auVar35._12_4_ = -(uint)(fVar80 != 0.0 && bVar12);
  iVar16 = movmskps((int)uVar14,auVar35);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar5 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar60 = *pauVar5;
      auVar67 = pauVar5[1];
      auVar57._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar67,auVar60,0x8c);
      auVar57._4_4_ = auVar60._12_4_;
      auVar57._8_4_ = auVar67._8_4_;
      auVar57._12_4_ = *(undefined4 *)(pauVar5[2] + 4);
      auVar91._4_4_ = auVar67._0_4_;
      auVar91._0_4_ = auVar60._4_4_;
      auVar91._8_4_ = auVar67._12_4_;
      auVar91._12_4_ = *(undefined4 *)(pauVar5[2] + 8);
      auVar94._0_8_ = auVar71._0_8_;
      auVar94._8_4_ = *(undefined4 *)pauVar5[2];
      auVar94._12_4_ = *(undefined4 *)(pauVar5[2] + 0xc);
      auVar60 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar67 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar82 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar112._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar67,auVar60,0x8c);
      auVar112._4_4_ = auVar60._12_4_;
      auVar112._8_4_ = auVar67._8_4_;
      auVar112._12_4_ = auVar82._4_4_;
      auVar100._4_4_ = auVar67._0_4_;
      auVar100._0_4_ = auVar60._4_4_;
      auVar100._8_4_ = auVar67._12_4_;
      auVar100._12_4_ = auVar82._8_4_;
      auVar105._0_8_ = auVar71._0_8_;
      auVar105._8_4_ = auVar82._0_4_;
      auVar105._12_4_ = auVar82._12_4_;
    }
    else {
      auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar82._0_4_;
      auVar36._4_4_ = _UNK_150b50da4 & auVar82._4_4_;
      auVar36._8_4_ = _UNK_150b50da8 & auVar82._8_4_;
      auVar36._12_4_ = _UNK_150b50dac & auVar82._12_4_;
      lVar22 = extractps(auVar36,1);
      lVar23 = extractps(auVar36,2);
      lVar24 = extractps(auVar36,3);
      auVar60 = insertps(ZEXT416(*(uint *)*pauVar5),*(undefined4 *)(*pauVar5 + lVar22),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar5 + lVar23),0x20);
      auVar57 = insertps(auVar60,*(undefined4 *)(*pauVar5 + lVar24),0x30);
      auVar60 = ___xmm_000000280000001c0000001000000004 & auVar82;
      auVar67 = insertps(ZEXT416(*(uint *)(*pauVar5 + auVar60._0_4_)),
                         *(undefined4 *)(*pauVar5 + auVar60._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar60._8_4_),0x20);
      auVar91 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar60._12_4_),0x30);
      auVar82 = ___xmm_0000002c000000200000001400000008 & auVar82;
      auVar67 = insertps(ZEXT416(*(uint *)(*pauVar5 + auVar82._0_4_)),
                         *(undefined4 *)(*pauVar5 + auVar82._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar82._8_4_),0x20);
      auVar94 = insertps(auVar67,*(undefined4 *)(*pauVar5 + auVar82._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar67 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar112 = insertps(auVar67,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar67 = insertps(ZEXT416(*(uint *)((ulonglong)auVar60._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar60._4_4_ + lVar18),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar60._8_4_ + lVar18),0x20);
      auVar100 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar60._12_4_ + lVar18),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)((ulonglong)auVar82._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar82._4_4_ + lVar18),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar82._8_4_ + lVar18),0x20);
      auVar105 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar82._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar82 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar82 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar82 = insertps(auVar82,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar82 = insertps(auVar82,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar82 = insertps(auVar82,puVar21[3],0x30);
      }
    }
    fVar81 = param_6 + param_7 * auVar82._0_4_;
    fVar93 = param_6 + param_7 * auVar82._4_4_;
    auVar118._4_4_ = fVar93;
    auVar118._0_4_ = fVar81;
    fVar96 = param_6 + param_7 * auVar82._8_4_;
    param_6 = param_6 + param_7 * auVar82._12_4_;
    fVar97 = auVar57._0_4_ - param_5 * auVar112._0_4_;
    fVar98 = auVar57._4_4_ - param_5 * auVar112._4_4_;
    fVar99 = auVar57._8_4_ - param_5 * auVar112._8_4_;
    fVar101 = auVar57._12_4_ - param_5 * auVar112._12_4_;
    fVar43 = auVar91._0_4_ - param_5 * auVar100._0_4_;
    fVar46 = auVar91._4_4_ - param_5 * auVar100._4_4_;
    fVar47 = auVar91._8_4_ - param_5 * auVar100._8_4_;
    fVar48 = auVar91._12_4_ - param_5 * auVar100._12_4_;
    fVar31 = auVar94._0_4_ - param_5 * auVar105._0_4_;
    fVar40 = auVar94._4_4_ - param_5 * auVar105._4_4_;
    fVar41 = auVar94._8_4_ - param_5 * auVar105._8_4_;
    fVar42 = auVar94._12_4_ - param_5 * auVar105._12_4_;
    fVar59 = auVar61._0_4_ - fVar97;
    fVar63 = auVar61._4_4_ - fVar98;
    fVar64 = auVar61._8_4_ - fVar99;
    fVar65 = auVar61._12_4_ - fVar101;
    fVar84 = auVar68._0_4_ - fVar43;
    fVar87 = auVar68._4_4_ - fVar46;
    fVar88 = auVar68._8_4_ - fVar47;
    fVar89 = auVar68._12_4_ - fVar48;
    fVar102 = auVar117._0_4_ - fVar31;
    fVar104 = auVar117._4_4_ - fVar40;
    fVar107 = auVar117._8_4_ - fVar41;
    fVar109 = auVar117._12_4_ - fVar42;
    auVar54._0_4_ = fVar84 * fVar84 + fVar59 * fVar59;
    auVar54._4_4_ = fVar87 * fVar87 + fVar63 * fVar63;
    auVar54._8_4_ = fVar88 * fVar88 + fVar64 * fVar64;
    auVar54._12_4_ = fVar89 * fVar89 + fVar65 * fVar65;
    auVar37._0_4_ = fVar102 * fVar102 + auVar54._0_4_;
    auVar37._4_4_ = fVar104 * fVar104 + auVar54._4_4_;
    auVar37._8_4_ = fVar107 * fVar107 + auVar54._8_4_;
    auVar37._12_4_ = fVar109 * fVar109 + auVar54._12_4_;
    auVar60 = sqrtps(auVar54,auVar37);
    auVar118._8_4_ = fVar96;
    auVar118._12_4_ = param_6;
    auVar60 = divps(auVar118,auVar60);
    fVar103 = auVar60._0_4_;
    fVar106 = auVar60._4_4_;
    fVar108 = auVar60._8_4_;
    fVar113 = auVar60._12_4_;
    fVar73 = param_5 - fVar81;
    fVar77 = param_5 - fVar93;
    fVar79 = param_5 - fVar96;
    param_5 = param_5 - param_6;
    auVar58._0_4_ = auVar57._0_4_ - auVar112._0_4_ * fVar73;
    auVar58._4_4_ = auVar57._4_4_ - auVar112._4_4_ * fVar77;
    auVar58._8_4_ = auVar57._8_4_ - auVar112._8_4_ * fVar79;
    auVar58._12_4_ = auVar57._12_4_ - auVar112._12_4_ * param_5;
    uVar27 = -(uint)(auVar37._0_4_ < fVar81 * fVar81);
    uVar15 = -(uint)(auVar37._4_4_ < fVar93 * fVar93);
    uVar28 = -(uint)(auVar37._8_4_ < fVar96 * fVar96);
    uVar29 = -(uint)(auVar37._12_4_ < param_6 * param_6);
    auVar38._4_4_ = -(uint)(auVar37._4_4_ < _UNK_1506895d4);
    auVar38._0_4_ = -(uint)(auVar37._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar38._8_4_ = -(uint)(auVar37._8_4_ < _UNK_1506895d8);
    auVar38._12_4_ = -(uint)(auVar37._12_4_ < _UNK_1506895dc);
    auVar62._0_4_ = (uint)(fVar59 * fVar103 + fVar97) & uVar27;
    auVar62._4_4_ = (uint)(fVar63 * fVar106 + fVar98) & uVar15;
    auVar62._8_4_ = (uint)(fVar64 * fVar108 + fVar99) & uVar28;
    auVar62._12_4_ = (uint)(fVar65 * fVar113 + fVar101) & uVar29;
    auVar67 = blendvps(auVar62,auVar58,auVar38);
    auVar92._0_4_ = auVar91._0_4_ - auVar100._0_4_ * fVar73;
    auVar92._4_4_ = auVar91._4_4_ - auVar100._4_4_ * fVar77;
    auVar92._8_4_ = auVar91._8_4_ - auVar100._8_4_ * fVar79;
    auVar92._12_4_ = auVar91._12_4_ - auVar100._12_4_ * param_5;
    auVar70._0_4_ = (uint)(fVar84 * fVar103 + fVar43) & uVar27;
    auVar70._4_4_ = (uint)(fVar87 * fVar106 + fVar46) & uVar15;
    auVar70._8_4_ = (uint)(fVar88 * fVar108 + fVar47) & uVar28;
    auVar70._12_4_ = (uint)(fVar89 * fVar113 + fVar48) & uVar29;
    auVar71 = blendvps(auVar70,auVar92,auVar38);
    auVar95._0_4_ = auVar94._0_4_ - fVar73 * auVar105._0_4_;
    auVar95._4_4_ = auVar94._4_4_ - fVar77 * auVar105._4_4_;
    auVar95._8_4_ = auVar94._8_4_ - fVar79 * auVar105._8_4_;
    auVar95._12_4_ = auVar94._12_4_ - param_5 * auVar105._12_4_;
    auVar55._0_4_ = uVar27 & (uint)(fVar103 * fVar102 + fVar31);
    auVar55._4_4_ = uVar15 & (uint)(fVar106 * fVar104 + fVar40);
    auVar55._8_4_ = uVar28 & (uint)(fVar108 * fVar107 + fVar41);
    auVar55._12_4_ = uVar29 & (uint)(fVar113 * fVar109 + fVar42);
    auVar60 = blendvps(auVar55,auVar95,auVar38);
    fVar31 = auVar67._0_4_;
    auVar44._0_4_ = -(uint)((fVar72 != 0.0 && bVar9) && fVar31 != 0.0);
    auVar44._4_4_ = -(uint)((fVar76 != 0.0 && bVar10) && auVar67._4_4_ != 0.0);
    auVar44._8_4_ = -(uint)((fVar78 != 0.0 && bVar11) && auVar67._8_4_ != 0.0);
    auVar44._12_4_ = -(uint)((fVar80 != 0.0 && bVar12) && auVar67._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar44);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar39._0_8_ = auVar67._0_8_;
        auVar39._8_4_ = auVar67._4_4_;
        auVar39._12_4_ = auVar71._4_4_;
        auVar45._0_8_ = auVar60._0_8_;
        auVar45._8_4_ = auVar60._4_4_;
        auVar45._12_4_ = fVar76;
        *(ulonglong *)*pauVar25 = CONCAT44(auVar71._0_4_,fVar31);
        *(ulonglong *)(*pauVar25 + 8) = CONCAT44(fVar72,auVar60._0_4_);
        *(longlong *)pauVar25[1] = auVar39._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar45._8_8_;
        *(float *)pauVar25[2] = auVar67._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar71._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar60._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar78;
        *(float *)pauVar25[3] = auVar67._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar71._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar60._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar80;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar67,1);
          *(undefined8 *)pauVar25[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar67,2);
          *(undefined8 *)pauVar25[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar67,3);
          *(undefined8 *)pauVar25[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar71._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar71,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar71,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar71,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar60._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar60,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar60,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar60,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar72;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar74,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar74,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar74,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithoutMaps_sse4 @ 1403541f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithoutMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  byte bVar9;
  undefined4 unaff_EBX;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar58;
  undefined1 auVar56 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar81;
  undefined1 auVar77 [16];
  float fVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  float fVar93;
  float fVar94;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  
  uVar20 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar20 = param_7;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar42 = param_4 - param_5;
    fVar24 = param_5 * param_5;
    pauVar16 = (undefined1 (*) [16])((longlong)param_6 * 0x10 + param_1);
    lVar12 = (longlong)param_6 * 0xc + 0x20;
    uVar14 = 0;
    do {
      fVar57 = *(float *)(*pauVar16 + 0xc);
      auVar31 = *pauVar16;
      fVar58 = *(float *)(pauVar16[1] + 0xc);
      auVar97 = pauVar16[1];
      fVar43 = *(float *)(pauVar16[2] + 0xc);
      auVar49 = pauVar16[2];
      fVar48 = *(float *)(pauVar16[3] + 0xc);
      auVar80 = pauVar16[3];
      auVar36._4_4_ = -(uint)(fVar58 != 0.0);
      auVar36._0_4_ = -(uint)(fVar57 != 0.0);
      auVar36._8_4_ = -(uint)(fVar43 != 0.0);
      auVar36._12_4_ = -(uint)(fVar48 != 0.0);
      iVar10 = movmskps(unaff_EBX,auVar36);
      unaff_EBX = 0;
      if (iVar10 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar12);
        auVar27 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar12);
        pfVar8 = (float *)(param_2 + lVar12);
        auVar44 = insertps(auVar27,auVar36,0x8c);
        auVar35 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar12);
        auVar45 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar12);
        pfVar1 = (float *)(param_3 + lVar12);
        auVar40 = insertps(auVar45,auVar35,0x8c);
        fVar59 = auVar36._0_4_ - param_4 * auVar35._0_4_;
        fVar60 = auVar36._12_4_ - param_4 * auVar35._12_4_;
        fVar61 = auVar27._8_4_ - param_4 * auVar45._8_4_;
        fVar62 = pfVar8[1] - param_4 * pfVar1[1];
        fVar71 = auVar36._4_4_ - param_4 * auVar35._4_4_;
        fVar74 = auVar27._0_4_ - param_4 * auVar45._0_4_;
        fVar75 = auVar27._12_4_ - param_4 * auVar45._12_4_;
        fVar76 = pfVar8[2] - param_4 * pfVar1[2];
        fVar65 = auVar44._0_4_ - param_4 * auVar40._0_4_;
        fVar68 = auVar44._4_4_ - param_4 * auVar40._4_4_;
        fVar69 = *pfVar8 - param_4 * *pfVar1;
        fVar70 = pfVar8[3] - param_4 * pfVar1[3];
        fVar94 = *(float *)*pauVar16 - fVar59;
        fVar99 = *(float *)pauVar16[1] - fVar60;
        fVar100 = *(float *)pauVar16[2] - fVar61;
        fVar101 = *(float *)pauVar16[3] - fVar62;
        fVar87 = *(float *)(*pauVar16 + 4) - fVar71;
        fVar89 = *(float *)(pauVar16[1] + 4) - fVar74;
        fVar90 = *(float *)(pauVar16[2] + 4) - fVar75;
        fVar92 = *(float *)(pauVar16[3] + 4) - fVar76;
        fVar83 = *(float *)(*pauVar16 + 8) - fVar65;
        fVar84 = *(float *)(pauVar16[1] + 8) - fVar68;
        fVar85 = *(float *)(pauVar16[2] + 8) - fVar69;
        fVar86 = *(float *)(pauVar16[3] + 8) - fVar70;
        auVar25._0_4_ = fVar83 * fVar83 + fVar87 * fVar87 + fVar94 * fVar94;
        auVar25._4_4_ = fVar84 * fVar84 + fVar89 * fVar89 + fVar99 * fVar99;
        auVar25._8_4_ = fVar85 * fVar85 + fVar90 * fVar90 + fVar100 * fVar100;
        auVar25._12_4_ = fVar86 * fVar86 + fVar92 * fVar92 + fVar101 * fVar101;
        unaff_XMM8 = sqrtps(unaff_XMM8,auVar25);
        auVar96._4_4_ = param_5;
        auVar96._0_4_ = param_5;
        auVar96._8_4_ = param_5;
        auVar96._12_4_ = param_5;
        auVar77 = divps(auVar96,unaff_XMM8);
        fVar91 = auVar77._0_4_;
        fVar93 = auVar77._4_4_;
        fVar81 = auVar77._8_4_;
        fVar82 = auVar77._12_4_;
        uVar19 = -(uint)(auVar25._0_4_ < fVar24);
        uVar21 = -(uint)(auVar25._4_4_ < fVar24);
        uVar22 = -(uint)(auVar25._8_4_ < fVar24);
        uVar23 = -(uint)(auVar25._12_4_ < fVar24);
        auVar95._0_4_ = (uint)(fVar94 * fVar91 + fVar59) & uVar19;
        auVar95._4_4_ = (uint)(fVar99 * fVar93 + fVar60) & uVar21;
        auVar95._8_4_ = (uint)(fVar100 * fVar81 + fVar61) & uVar22;
        auVar95._12_4_ = (uint)(fVar101 * fVar82 + fVar62) & uVar23;
        auVar26._4_4_ = -(uint)(auVar25._4_4_ < _UNK_1506895d4);
        auVar26._0_4_ = -(uint)(auVar25._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar26._8_4_ = -(uint)(auVar25._8_4_ < _UNK_1506895d8);
        auVar26._12_4_ = -(uint)(auVar25._12_4_ < _UNK_1506895dc);
        auVar77._4_4_ = auVar36._12_4_ - auVar35._12_4_ * fVar42;
        auVar77._0_4_ = auVar36._0_4_ - auVar35._0_4_ * fVar42;
        auVar77._8_4_ = auVar27._8_4_ - auVar45._8_4_ * fVar42;
        auVar77._12_4_ = pfVar8[1] - pfVar1[1] * fVar42;
        auVar96 = blendvps(auVar95,auVar77,auVar26);
        auVar53._0_4_ = auVar36._4_4_ - auVar35._4_4_ * fVar42;
        auVar53._4_4_ = auVar27._0_4_ - auVar45._0_4_ * fVar42;
        auVar53._8_4_ = auVar27._12_4_ - auVar45._12_4_ * fVar42;
        auVar53._12_4_ = pfVar8[2] - pfVar1[2] * fVar42;
        auVar88._0_4_ = (uint)(fVar87 * fVar91 + fVar71) & uVar19;
        auVar88._4_4_ = (uint)(fVar89 * fVar93 + fVar74) & uVar21;
        auVar88._8_4_ = (uint)(fVar90 * fVar81 + fVar75) & uVar22;
        auVar88._12_4_ = (uint)(fVar92 * fVar82 + fVar76) & uVar23;
        auVar77 = blendvps(auVar88,auVar53,auVar26);
        auVar45._0_4_ = auVar44._0_4_ - auVar40._0_4_ * fVar42;
        auVar45._4_4_ = auVar44._4_4_ - auVar40._4_4_ * fVar42;
        auVar45._8_4_ = *pfVar8 - *pfVar1 * fVar42;
        auVar45._12_4_ = pfVar8[3] - pfVar1[3] * fVar42;
        auVar35._0_4_ = uVar19 & (uint)(fVar91 * fVar83 + fVar65);
        auVar35._4_4_ = uVar21 & (uint)(fVar93 * fVar84 + fVar68);
        auVar35._8_4_ = uVar22 & (uint)(fVar81 * fVar85 + fVar69);
        auVar35._12_4_ = uVar23 & (uint)(fVar82 * fVar86 + fVar70);
        auVar36 = blendvps(auVar35,auVar45,auVar26);
        fVar59 = auVar96._0_4_;
        auVar27._0_4_ = -(uint)(fVar59 != 0.0 && fVar57 != 0.0);
        auVar27._4_4_ = -(uint)(auVar96._4_4_ != 0.0 && fVar58 != 0.0);
        auVar27._8_4_ = -(uint)(auVar96._8_4_ != 0.0 && fVar43 != 0.0);
        auVar27._12_4_ = -(uint)(auVar96._12_4_ != 0.0 && fVar48 != 0.0);
        iVar10 = movmskps(iVar10,auVar27);
        unaff_EBX = 0;
        if (iVar10 != 0) {
          bVar9 = (char)((char)iVar10 << 4) >> 4;
          unaff_EBX = CONCAT31((int3)((uint)iVar10 >> 8),bVar9);
          if ((~bVar9 & 0xf) == 0) {
            auVar49._0_8_ = auVar96._0_8_;
            auVar49._8_4_ = auVar96._4_4_;
            auVar49._12_4_ = auVar77._4_4_;
            auVar80._0_8_ = auVar36._0_8_;
            auVar80._8_4_ = auVar36._4_4_;
            auVar80._12_4_ = fVar58;
            auVar97._0_8_ = CONCAT44(auVar77._8_4_,auVar96._8_4_);
            auVar97._8_4_ = auVar96._12_4_;
            auVar97._12_4_ = auVar77._12_4_;
            *(float *)*pauVar16 = fVar59;
            *(int *)(*pauVar16 + 4) = auVar77._0_4_;
            *(int *)(*pauVar16 + 8) = auVar36._0_4_;
            *(float *)(*pauVar16 + 0xc) = fVar57;
            *(longlong *)pauVar16[1] = auVar49._8_8_;
            *(longlong *)(pauVar16[1] + 8) = auVar80._8_8_;
            *(undefined8 *)pauVar16[2] = auVar97._0_8_;
            *(int *)(pauVar16[2] + 8) = auVar36._8_4_;
            *(float *)(pauVar16[2] + 0xc) = fVar43;
            *(longlong *)pauVar16[3] = auVar97._8_8_;
            *(int *)(pauVar16[3] + 8) = auVar36._12_4_;
            *(float *)(pauVar16[3] + 0xc) = fVar48;
          }
          else {
            if ((bVar9 & 1) != 0) {
              *(float *)*pauVar16 = fVar59;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar96,1);
              *(undefined8 *)pauVar16[1] = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar96,2);
              *(undefined8 *)pauVar16[2] = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar96,3);
              *(undefined8 *)pauVar16[3] = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 4) = auVar77._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar77,1);
              *(undefined8 *)(pauVar16[1] + 4) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar77,2);
              *(undefined8 *)(pauVar16[2] + 4) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar77,3);
              *(undefined8 *)(pauVar16[3] + 4) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 8) = auVar36._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar36,1);
              *(undefined8 *)(pauVar16[1] + 8) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar36,2);
              *(undefined8 *)(pauVar16[2] + 8) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar36,3);
              *(undefined8 *)(pauVar16[3] + 8) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              uVar3 = extractps(auVar31,3);
              *(undefined8 *)(*pauVar16 + 0xc) = uVar3;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar97,3);
              *(undefined8 *)(pauVar16[1] + 0xc) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar49,3);
              *(undefined8 *)(pauVar16[2] + 0xc) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar80,3);
              *(undefined8 *)(pauVar16[3] + 0xc) = uVar3;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      pauVar16 = pauVar16 + 4;
      lVar12 = lVar12 + 0x30;
    } while (uVar14 < (uVar20 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar14) {
      return;
    }
  }
  uVar20 = (uint)uVar14;
  bVar4 = (int)(uVar20 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar31._0_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar20 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar31._4_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar20 | _UNK_150631e08) < (int)param_7;
  auVar31._8_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar20 | _UNK_150631e0c) < (int)param_7;
  auVar31._12_4_ = -(uint)bVar7;
  param_6 = param_6 + uVar20;
  lVar12 = (longlong)param_6;
  pfVar8 = (float *)(param_1 + lVar12 * 0x10);
  iVar10 = movmskps((int)(lVar12 * 0x10),auVar31);
  if (iVar10 == 0xf) {
    auVar36 = *(undefined1 (*) [16])(pfVar8 + 8);
    auVar40._0_8_ = CONCAT44(pfVar8[6],pfVar8[2]);
    auVar40._8_4_ = pfVar8[3];
    auVar40._12_4_ = pfVar8[7];
    auVar51._0_8_ = auVar36._0_8_;
    auVar51._8_4_ = auVar36._4_4_;
    auVar51._12_4_ = pfVar8[0xd];
    auVar50._8_8_ = auVar51._8_8_;
    auVar46._12_4_ = pfVar8[0xc];
    auVar46._8_4_ = auVar36._0_4_;
    auVar55._0_8_ = CONCAT44(pfVar8[0xe],auVar36._8_4_);
    auVar55._8_4_ = auVar36._12_4_;
    auVar55._12_4_ = pfVar8[0xf];
    auVar46._4_4_ = pfVar8[4];
    auVar46._0_4_ = *pfVar8;
    auVar50._4_4_ = pfVar8[5];
    auVar50._0_4_ = pfVar8[1];
    auVar44._8_8_ = auVar55._0_8_;
    auVar44._0_8_ = auVar40._0_8_;
    auVar54._8_8_ = auVar55._8_8_;
    auVar54._0_8_ = auVar40._8_8_;
  }
  else {
    auVar28._0_4_ = ___xmm_00000030000000200000001000000000 & auVar31._0_4_;
    auVar28._4_4_ = _UNK_150b511c4 & auVar31._4_4_;
    auVar28._8_4_ = _UNK_150b511c8 & auVar31._8_4_;
    auVar28._12_4_ = _UNK_150b511cc & auVar31._12_4_;
    lVar15 = extractps(auVar28,1);
    lVar17 = extractps(auVar28,2);
    lVar11 = extractps(auVar28,3);
    auVar36 = insertps(ZEXT416((uint)*pfVar8),*(undefined4 *)((longlong)pfVar8 + lVar15),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + lVar17),0x20);
    auVar46 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + lVar11),0x30);
    auVar36 = ___xmm_00000034000000240000001400000004 & auVar31;
    auVar49 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar36._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._4_4_),0x10);
    auVar49 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._8_4_),0x20);
    auVar50 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._12_4_),0x30);
    auVar36 = ___xmm_00000038000000280000001800000008 & auVar31;
    auVar49 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar36._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._4_4_),0x10);
    auVar49 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._8_4_),0x20);
    auVar44 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._12_4_),0x30);
    auVar36 = ___xmm_0000003c0000002c0000001c0000000c & auVar31;
    uVar20 = auVar36._4_4_;
    auVar49 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar36._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)uVar20),0x10);
    auVar49 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._8_4_),0x20);
    auVar54 = insertps(auVar49,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar36._12_4_),0x30);
  }
  fVar24 = auVar54._0_4_;
  fVar42 = auVar54._4_4_;
  fVar57 = auVar54._8_4_;
  fVar58 = auVar54._12_4_;
  auVar29._0_4_ = -(uint)(fVar24 != 0.0 && bVar4);
  auVar29._4_4_ = -(uint)(fVar42 != 0.0 && bVar5);
  auVar29._8_4_ = -(uint)(fVar57 != 0.0 && bVar6);
  auVar29._12_4_ = -(uint)(fVar58 != 0.0 && bVar7);
  iVar13 = movmskps(uVar20,auVar29);
  if (iVar13 != 0) {
    pauVar16 = (undefined1 (*) [16])(param_2 + lVar12 * 0xc);
    if ((~((char)((char)iVar10 << 4) >> 4) & 0xfU) == 0) {
      auVar36 = *pauVar16;
      auVar49 = pauVar16[1];
      auVar63._0_4_ = auVar36._0_4_;
      auVar80 = insertps(auVar49,auVar36,0x8c);
      auVar63._4_4_ = auVar36._12_4_;
      auVar63._8_4_ = auVar49._8_4_;
      auVar63._12_4_ = *(undefined4 *)(pauVar16[2] + 4);
      auVar66._4_4_ = auVar49._0_4_;
      auVar66._0_4_ = auVar36._4_4_;
      auVar66._8_4_ = auVar49._12_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar16[2] + 8);
      auVar72._0_8_ = auVar80._0_8_;
      auVar72._8_4_ = *(undefined4 *)pauVar16[2];
      auVar72._12_4_ = *(undefined4 *)(pauVar16[2] + 0xc);
      auVar36 = *(undefined1 (*) [16])(param_3 + lVar12 * 0xc);
      auVar49 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar12 * 0xc);
      puVar2 = (undefined4 *)(param_3 + 0x20 + lVar12 * 0xc);
      auVar78._0_4_ = auVar36._0_4_;
      auVar80 = insertps(auVar49,auVar36,0x8c);
      auVar78._4_4_ = auVar36._12_4_;
      auVar78._8_4_ = auVar49._8_4_;
      auVar78._12_4_ = puVar2[1];
      auVar37._4_4_ = auVar49._0_4_;
      auVar37._0_4_ = auVar36._4_4_;
      auVar37._8_4_ = auVar49._12_4_;
      auVar37._12_4_ = puVar2[2];
      auVar56._0_8_ = auVar80._0_8_;
      auVar56._8_4_ = *puVar2;
      auVar56._12_4_ = puVar2[3];
    }
    else {
      auVar30._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar31._0_4_;
      auVar30._4_4_ = _UNK_150b50da4 & auVar31._4_4_;
      auVar30._8_4_ = _UNK_150b50da8 & auVar31._8_4_;
      auVar30._12_4_ = _UNK_150b50dac & auVar31._12_4_;
      lVar15 = extractps(auVar30,1);
      lVar17 = extractps(auVar30,2);
      lVar18 = extractps(auVar30,3);
      auVar36 = insertps(ZEXT416(*(uint *)*pauVar16),*(undefined4 *)(*pauVar16 + lVar15),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(*pauVar16 + lVar17),0x20);
      auVar63 = insertps(auVar36,*(undefined4 *)(*pauVar16 + lVar18),0x30);
      auVar36 = ___xmm_000000280000001c0000001000000004 & auVar31;
      auVar49 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar36._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar36._4_4_),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar36._8_4_),0x20);
      auVar66 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar36._12_4_),0x30);
      auVar31 = ___xmm_0000002c000000200000001400000008 & auVar31;
      auVar49 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar31._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar31._4_4_),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar31._8_4_),0x20);
      auVar72 = insertps(auVar49,*(undefined4 *)(*pauVar16 + auVar31._12_4_),0x30);
      lVar11 = param_3 + lVar12 * 0xc;
      auVar49 = insertps(ZEXT416(*(uint *)(param_3 + lVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar11)
                         ,0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)(lVar17 + lVar11),0x20);
      auVar78 = insertps(auVar49,*(undefined4 *)(lVar18 + lVar11),0x30);
      auVar49 = insertps(ZEXT416(*(uint *)((ulonglong)auVar36._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar36._4_4_ + lVar11),0x10);
      auVar49 = insertps(auVar49,*(undefined4 *)((ulonglong)auVar36._8_4_ + lVar11),0x20);
      auVar37 = insertps(auVar49,*(undefined4 *)((ulonglong)auVar36._12_4_ + lVar11),0x30);
      auVar36 = insertps(ZEXT416(*(uint *)((ulonglong)auVar31._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar31._4_4_ + lVar11),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar31._8_4_ + lVar11),0x20);
      auVar56 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar31._12_4_ + lVar11),0x30);
    }
    fVar85 = auVar63._0_4_ - param_4 * auVar78._0_4_;
    fVar86 = auVar63._4_4_ - param_4 * auVar78._4_4_;
    fVar87 = auVar63._8_4_ - param_4 * auVar78._8_4_;
    fVar89 = auVar63._12_4_ - param_4 * auVar78._12_4_;
    fVar75 = auVar66._0_4_ - param_4 * auVar37._0_4_;
    fVar76 = auVar66._4_4_ - param_4 * auVar37._4_4_;
    fVar91 = auVar66._8_4_ - param_4 * auVar37._8_4_;
    fVar93 = auVar66._12_4_ - param_4 * auVar37._12_4_;
    fVar69 = auVar72._0_4_ - param_4 * auVar56._0_4_;
    fVar70 = auVar72._4_4_ - param_4 * auVar56._4_4_;
    fVar71 = auVar72._8_4_ - param_4 * auVar56._8_4_;
    fVar74 = auVar72._12_4_ - param_4 * auVar56._12_4_;
    fVar43 = auVar46._0_4_ - fVar85;
    fVar48 = auVar46._4_4_ - fVar86;
    fVar59 = auVar46._8_4_ - fVar87;
    fVar60 = auVar46._12_4_ - fVar89;
    fVar61 = auVar50._0_4_ - fVar75;
    fVar62 = auVar50._4_4_ - fVar76;
    fVar65 = auVar50._8_4_ - fVar91;
    fVar68 = auVar50._12_4_ - fVar93;
    auVar41._0_4_ = auVar44._0_4_ - fVar69;
    auVar41._4_4_ = auVar44._4_4_ - fVar70;
    auVar41._8_4_ = auVar44._8_4_ - fVar71;
    auVar41._12_4_ = auVar44._12_4_ - fVar74;
    auVar32._0_4_ = auVar41._0_4_ * auVar41._0_4_ + fVar61 * fVar61 + fVar43 * fVar43;
    auVar32._4_4_ = auVar41._4_4_ * auVar41._4_4_ + fVar62 * fVar62 + fVar48 * fVar48;
    auVar32._8_4_ = auVar41._8_4_ * auVar41._8_4_ + fVar65 * fVar65 + fVar59 * fVar59;
    auVar32._12_4_ = auVar41._12_4_ * auVar41._12_4_ + fVar68 * fVar68 + fVar60 * fVar60;
    auVar98._4_4_ = param_5;
    auVar98._0_4_ = param_5;
    auVar98._8_4_ = param_5;
    auVar98._12_4_ = param_5;
    auVar36 = sqrtps(auVar41,auVar32);
    auVar36 = divps(auVar98,auVar36);
    fVar81 = auVar36._0_4_;
    fVar82 = auVar36._4_4_;
    fVar83 = auVar36._8_4_;
    fVar84 = auVar36._12_4_;
    param_4 = param_4 - param_5;
    auVar64._0_4_ = auVar63._0_4_ - auVar78._0_4_ * param_4;
    auVar64._4_4_ = auVar63._4_4_ - auVar78._4_4_ * param_4;
    auVar64._8_4_ = auVar63._8_4_ - auVar78._8_4_ * param_4;
    auVar64._12_4_ = auVar63._12_4_ - auVar78._12_4_ * param_4;
    param_5 = param_5 * param_5;
    uVar20 = -(uint)(auVar32._0_4_ < param_5);
    uVar19 = -(uint)(auVar32._4_4_ < param_5);
    uVar21 = -(uint)(auVar32._8_4_ < param_5);
    uVar22 = -(uint)(auVar32._12_4_ < param_5);
    auVar33._4_4_ = -(uint)(auVar32._4_4_ < _UNK_1506895d4);
    auVar33._0_4_ = -(uint)(auVar32._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar33._8_4_ = -(uint)(auVar32._8_4_ < _UNK_1506895d8);
    auVar33._12_4_ = -(uint)(auVar32._12_4_ < _UNK_1506895dc);
    auVar47._0_4_ = (uint)(fVar43 * fVar81 + fVar85) & uVar20;
    auVar47._4_4_ = (uint)(fVar48 * fVar82 + fVar86) & uVar19;
    auVar47._8_4_ = (uint)(fVar59 * fVar83 + fVar87) & uVar21;
    auVar47._12_4_ = (uint)(fVar60 * fVar84 + fVar89) & uVar22;
    auVar36 = blendvps(auVar47,auVar64,auVar33);
    auVar67._0_4_ = auVar66._0_4_ - auVar37._0_4_ * param_4;
    auVar67._4_4_ = auVar66._4_4_ - auVar37._4_4_ * param_4;
    auVar67._8_4_ = auVar66._8_4_ - auVar37._8_4_ * param_4;
    auVar67._12_4_ = auVar66._12_4_ - auVar37._12_4_ * param_4;
    auVar52._0_4_ = (uint)(fVar61 * fVar81 + fVar75) & uVar20;
    auVar52._4_4_ = (uint)(fVar62 * fVar82 + fVar76) & uVar19;
    auVar52._8_4_ = (uint)(fVar65 * fVar83 + fVar91) & uVar21;
    auVar52._12_4_ = (uint)(fVar68 * fVar84 + fVar93) & uVar22;
    auVar49 = blendvps(auVar52,auVar67,auVar33);
    auVar73._0_4_ = auVar72._0_4_ - param_4 * auVar56._0_4_;
    auVar73._4_4_ = auVar72._4_4_ - param_4 * auVar56._4_4_;
    auVar73._8_4_ = auVar72._8_4_ - param_4 * auVar56._8_4_;
    auVar73._12_4_ = auVar72._12_4_ - param_4 * auVar56._12_4_;
    auVar79._0_4_ = uVar20 & (uint)(fVar81 * auVar41._0_4_ + fVar69);
    auVar79._4_4_ = uVar19 & (uint)(fVar82 * auVar41._4_4_ + fVar70);
    auVar79._8_4_ = uVar21 & (uint)(fVar83 * auVar41._8_4_ + fVar71);
    auVar79._12_4_ = uVar22 & (uint)(fVar84 * auVar41._12_4_ + fVar74);
    auVar80 = blendvps(auVar79,auVar73,auVar33);
    fVar43 = auVar36._0_4_;
    auVar38._0_4_ = -(uint)((fVar24 != 0.0 && bVar4) && fVar43 != 0.0);
    auVar38._4_4_ = -(uint)((fVar42 != 0.0 && bVar5) && auVar36._4_4_ != 0.0);
    auVar38._8_4_ = -(uint)((fVar57 != 0.0 && bVar6) && auVar36._8_4_ != 0.0);
    auVar38._12_4_ = -(uint)((fVar58 != 0.0 && bVar7) && auVar36._12_4_ != 0.0);
    iVar10 = movmskps(param_6 * 3,auVar38);
    if (iVar10 != 0) {
      bVar9 = (char)((char)iVar10 << 4) >> 4;
      if ((~bVar9 & 0xf) == 0) {
        auVar34._0_8_ = auVar36._0_8_;
        auVar34._8_4_ = auVar36._4_4_;
        auVar34._12_4_ = auVar49._4_4_;
        auVar39._0_8_ = auVar80._0_8_;
        auVar39._8_4_ = auVar80._4_4_;
        auVar39._12_4_ = fVar42;
        *(ulonglong *)pfVar8 = CONCAT44(auVar49._0_4_,fVar43);
        *(ulonglong *)(pfVar8 + 2) = CONCAT44(fVar24,auVar80._0_4_);
        *(longlong *)(pfVar8 + 4) = auVar34._8_8_;
        *(longlong *)(pfVar8 + 6) = auVar39._8_8_;
        pfVar8[8] = auVar36._8_4_;
        pfVar8[9] = auVar49._8_4_;
        pfVar8[10] = auVar80._8_4_;
        pfVar8[0xb] = fVar57;
        pfVar8[0xc] = auVar36._12_4_;
        pfVar8[0xd] = auVar49._12_4_;
        pfVar8[0xe] = auVar80._12_4_;
        pfVar8[0xf] = fVar58;
      }
      else {
        if ((bVar9 & 1) != 0) {
          *pfVar8 = fVar43;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar36,1);
          *(undefined8 *)(pfVar8 + 4) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar36,2);
          *(undefined8 *)(pfVar8 + 8) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar36,3);
          *(undefined8 *)(pfVar8 + 0xc) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[1] = auVar49._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar49,1);
          *(undefined8 *)(pfVar8 + 5) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar49,2);
          *(undefined8 *)(pfVar8 + 9) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar49,3);
          *(undefined8 *)(pfVar8 + 0xd) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[2] = auVar80._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar80,1);
          *(undefined8 *)(pfVar8 + 6) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar80,2);
          *(undefined8 *)(pfVar8 + 10) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar80,3);
          *(undefined8 *)(pfVar8 + 0xe) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[3] = fVar24;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar54,1);
          *(undefined8 *)(pfVar8 + 7) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar54,2);
          *(undefined8 *)(pfVar8 + 0xb) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar54,3);
          *(undefined8 *)(pfVar8 + 0xf) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraints_sse4 @ 140354d90

void ApplyLegacySphericalBackstopConstraints_sse4(void)

{
  ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4
            ();
  return;
}

// ApplySphericalBackstopConstraintsWithMaps_sse4 @ 140354e00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,float param_9,int param_10,uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined3 uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  byte bVar18;
  int unaff_EBP;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar60;
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  uint uVar90;
  float fVar91;
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined1 auVar93 [16];
  float fVar98;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar104;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar111;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar119 [16];
  
  uVar28 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar28 = param_11;
  }
  if ((int)(uVar28 & 0xfffffffc) < 1) {
    uVar23 = 0;
  }
  else {
    lVar19 = (longlong)param_10;
    uVar17 = lVar19 * 3;
    lVar20 = lVar19 * 0x10 + param_1;
    lVar19 = lVar19 * 0xc + 0x20;
    uVar27 = 0;
    uVar23 = 0;
    do {
      pauVar26 = (undefined1 (*) [16])(lVar20 + uVar27 * 4);
      fVar56 = *(float *)(*pauVar26 + 0xc);
      auVar76 = *pauVar26;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar27 * 4);
      fVar60 = *(float *)(*pauVar5 + 0xc);
      auVar45 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar27 * 4);
      fVar61 = *(float *)(*pauVar6 + 0xc);
      auVar66 = *pauVar6;
      pauVar7 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar27 * 4);
      fVar62 = *(float *)(*pauVar7 + 0xc);
      auVar69 = *pauVar7;
      auVar52._4_4_ = -(uint)(fVar60 != 0.0);
      auVar52._0_4_ = -(uint)(fVar56 != 0.0);
      auVar52._8_4_ = -(uint)(fVar61 != 0.0);
      auVar52._12_4_ = -(uint)(fVar62 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar52);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar52 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar19);
        auVar33 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar19);
        pfVar1 = (float *)(param_2 + lVar19);
        auVar63 = insertps(auVar33,auVar52,0x8c);
        auVar51 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar19);
        auVar64 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar19);
        pfVar2 = (float *)(param_3 + lVar19);
        auVar82 = insertps(auVar64,auVar51,0x8c);
        uVar17 = uVar27 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar92 = *pfVar3 * param_7 + param_6;
        fVar94 = pfVar3[1] * param_7 + param_6;
        fVar96 = pfVar3[2] * param_7 + param_6;
        fVar97 = pfVar3[3] * param_7 + param_6;
        pfVar3 = (float *)(param_5 + uVar17);
        fVar44 = *pfVar3 * param_9 + param_8;
        fVar48 = pfVar3[1] * param_9 + param_8;
        auVar105._4_4_ = fVar48;
        auVar105._0_4_ = fVar44;
        fVar49 = pfVar3[2] * param_9 + param_8;
        fVar50 = pfVar3[3] * param_9 + param_8;
        fVar32 = fVar92 + fVar44;
        fVar41 = fVar94 + fVar48;
        fVar42 = fVar96 + fVar49;
        fVar43 = fVar97 + fVar50;
        fVar70 = auVar52._0_4_ - auVar51._0_4_ * fVar32;
        fVar77 = auVar52._12_4_ - auVar51._12_4_ * fVar41;
        fVar78 = auVar33._8_4_ - auVar64._8_4_ * fVar42;
        fVar79 = pfVar1[1] - pfVar2[1] * fVar43;
        fVar85 = auVar52._4_4_ - auVar51._4_4_ * fVar32;
        fVar86 = auVar33._0_4_ - auVar64._0_4_ * fVar41;
        fVar88 = auVar33._12_4_ - auVar64._12_4_ * fVar42;
        fVar89 = pfVar1[2] - pfVar2[2] * fVar43;
        fVar98 = auVar63._0_4_ - fVar32 * auVar82._0_4_;
        fVar101 = auVar63._4_4_ - fVar41 * auVar82._4_4_;
        fVar102 = *pfVar1 - fVar42 * *pfVar2;
        fVar103 = pfVar1[3] - fVar43 * pfVar2[3];
        fVar111 = *(float *)*pauVar26 - fVar70;
        fVar116 = *(float *)*pauVar5 - fVar77;
        fVar117 = *(float *)*pauVar6 - fVar78;
        fVar118 = *(float *)*pauVar7 - fVar79;
        fVar104 = *(float *)(*pauVar26 + 4) - fVar85;
        fVar108 = *(float *)(*pauVar5 + 4) - fVar86;
        fVar109 = *(float *)(*pauVar6 + 4) - fVar88;
        fVar110 = *(float *)(*pauVar7 + 4) - fVar89;
        fVar32 = *(float *)(*pauVar26 + 8) - fVar98;
        fVar41 = *(float *)(*pauVar5 + 8) - fVar101;
        fVar42 = *(float *)(*pauVar6 + 8) - fVar102;
        fVar43 = *(float *)(*pauVar7 + 8) - fVar103;
        auVar72._0_4_ = fVar32 * fVar32 + fVar104 * fVar104 + fVar111 * fVar111;
        auVar72._4_4_ = fVar41 * fVar41 + fVar108 * fVar108 + fVar116 * fVar116;
        auVar72._8_4_ = fVar42 * fVar42 + fVar109 * fVar109 + fVar117 * fVar117;
        auVar72._12_4_ = fVar43 * fVar43 + fVar110 * fVar110 + fVar118 * fVar118;
        unaff_XMM15 = sqrtps(unaff_XMM15,auVar72);
        auVar105._8_4_ = fVar49;
        auVar105._12_4_ = fVar50;
        auVar106 = divps(auVar105,unaff_XMM15);
        fVar81 = auVar106._0_4_;
        fVar87 = auVar106._4_4_;
        fVar91 = auVar106._8_4_;
        fVar95 = auVar106._12_4_;
        auVar113._0_4_ = auVar52._0_4_ - auVar51._0_4_ * fVar92;
        auVar113._4_4_ = auVar52._12_4_ - auVar51._12_4_ * fVar94;
        auVar113._8_4_ = auVar33._8_4_ - auVar64._8_4_ * fVar96;
        auVar113._12_4_ = pfVar1[1] - pfVar2[1] * fVar97;
        uVar15 = -(uint)(auVar72._0_4_ < fVar44 * fVar44);
        uVar29 = -(uint)(auVar72._4_4_ < fVar48 * fVar48);
        uVar30 = -(uint)(auVar72._8_4_ < fVar49 * fVar49);
        uVar31 = -(uint)(auVar72._12_4_ < fVar50 * fVar50);
        auVar112._0_4_ = (uint)(fVar111 * fVar81 + fVar70) & uVar15;
        auVar112._4_4_ = (uint)(fVar116 * fVar87 + fVar77) & uVar29;
        auVar112._8_4_ = (uint)(fVar117 * fVar91 + fVar78) & uVar30;
        auVar112._12_4_ = (uint)(fVar118 * fVar95 + fVar79) & uVar31;
        auVar106._4_4_ = -(uint)(auVar72._4_4_ < _UNK_1506895d4);
        auVar106._0_4_ = -(uint)(auVar72._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar106._8_4_ = -(uint)(auVar72._8_4_ < _UNK_1506895d8);
        auVar106._12_4_ = -(uint)(auVar72._12_4_ < _UNK_1506895dc);
        auVar113 = blendvps(auVar112,auVar113,auVar106);
        auVar65._0_4_ = auVar52._4_4_ - auVar51._4_4_ * fVar92;
        auVar65._4_4_ = auVar33._0_4_ - auVar64._0_4_ * fVar94;
        auVar65._8_4_ = auVar33._12_4_ - auVar64._12_4_ * fVar96;
        auVar65._12_4_ = pfVar1[2] - pfVar2[2] * fVar97;
        auVar71._0_4_ = (uint)(fVar104 * fVar81 + fVar85) & uVar15;
        auVar71._4_4_ = (uint)(fVar108 * fVar87 + fVar86) & uVar29;
        auVar71._8_4_ = (uint)(fVar109 * fVar91 + fVar88) & uVar30;
        auVar71._12_4_ = (uint)(fVar110 * fVar95 + fVar89) & uVar31;
        auVar72 = blendvps(auVar71,auVar65,auVar106);
        auVar64._0_4_ = auVar63._0_4_ - fVar92 * auVar82._0_4_;
        auVar64._4_4_ = auVar63._4_4_ - fVar94 * auVar82._4_4_;
        auVar64._8_4_ = *pfVar1 - fVar96 * *pfVar2;
        auVar64._12_4_ = pfVar1[3] - fVar97 * pfVar2[3];
        auVar51._0_4_ = uVar15 & (uint)(fVar81 * fVar32 + fVar98);
        auVar51._4_4_ = uVar29 & (uint)(fVar87 * fVar41 + fVar101);
        auVar51._8_4_ = uVar30 & (uint)(fVar91 * fVar42 + fVar102);
        auVar51._12_4_ = uVar31 & (uint)(fVar95 * fVar43 + fVar103);
        auVar52 = blendvps(auVar51,auVar64,auVar106);
        fVar32 = auVar113._0_4_;
        auVar33._0_4_ = -(uint)(fVar32 != 0.0 && fVar56 != 0.0);
        auVar33._4_4_ = -(uint)(auVar113._4_4_ != 0.0 && fVar60 != 0.0);
        auVar33._8_4_ = -(uint)(auVar113._8_4_ != 0.0 && fVar61 != 0.0);
        auVar33._12_4_ = -(uint)(auVar113._12_4_ != 0.0 && fVar62 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar33);
        if (unaff_EBP != 0) {
          uVar14 = (undefined3)((uint)unaff_EBP >> 8);
          bVar18 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar14,bVar18);
          uVar17 = (ulonglong)CONCAT31(uVar14,~bVar18);
          if ((~bVar18 & 0xf) == 0) {
            auVar66._0_8_ = auVar113._0_8_;
            auVar66._8_4_ = auVar113._4_4_;
            auVar66._12_4_ = auVar72._4_4_;
            auVar69._0_8_ = auVar52._0_8_;
            auVar69._8_4_ = auVar52._4_4_;
            auVar69._12_4_ = fVar60;
            auVar76._0_8_ = CONCAT44(auVar72._8_4_,auVar113._8_4_);
            auVar76._8_4_ = auVar113._12_4_;
            auVar76._12_4_ = auVar72._12_4_;
            puVar4 = (undefined8 *)(lVar20 + uVar27 * 4);
            *puVar4 = CONCAT44(auVar72._0_4_,fVar32);
            puVar4[1] = CONCAT44(fVar56,auVar52._0_4_);
            puVar4 = (undefined8 *)(lVar20 + 0x10 + uVar27 * 4);
            *puVar4 = auVar66._8_8_;
            puVar4[1] = auVar69._8_8_;
            puVar4 = (undefined8 *)(lVar20 + 0x20 + uVar27 * 4);
            *puVar4 = auVar76._0_8_;
            *(int *)(puVar4 + 1) = auVar52._8_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar61;
            puVar4 = (undefined8 *)(lVar20 + 0x30 + uVar27 * 4);
            *puVar4 = auVar76._8_8_;
            *(int *)(puVar4 + 1) = auVar52._12_4_;
            *(float *)((longlong)puVar4 + 0xc) = fVar62;
          }
          else {
            if ((bVar18 & 1) != 0) {
              *(float *)(lVar20 + uVar27 * 4) = fVar32;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar113,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar113,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar113,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar27 * 4) = auVar72._0_4_;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar72,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar72,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar72,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar27 * 4) = auVar52._0_4_;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar52,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar52,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar52,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 1) != 0) {
              uVar9 = extractps(auVar76,3);
              *(undefined8 *)(lVar20 + 0xc + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 2) != 0) {
              uVar9 = extractps(auVar45,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar27 * 4) = uVar9;
            }
            if ((bVar18 & 4) != 0) {
              uVar9 = extractps(auVar66,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar27 * 4) = uVar9;
            }
            if ((char)bVar18 < '\0') {
              uVar9 = extractps(auVar69,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar27 * 4) = uVar9;
            }
          }
        }
      }
      uVar23 = uVar23 + 4;
      uVar27 = uVar27 + 0x10;
      lVar19 = lVar19 + 0x30;
    } while (uVar23 < (uVar28 & 0xfffffffc));
  }
  uVar28 = (uint)uVar23;
  if ((int)uVar28 < (int)param_11) {
    auVar45 = ZEXT416(param_11);
    bVar10 = (int)(uVar28 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
    uVar29 = -(uint)bVar10;
    bVar11 = (int)(uVar28 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
    uVar30 = -(uint)bVar11;
    bVar12 = (int)(uVar28 | _UNK_150631e08) < (int)param_11;
    uVar31 = -(uint)bVar12;
    bVar13 = (int)(uVar28 | _UNK_150631e0c) < (int)param_11;
    uVar90 = -(uint)bVar13;
    lVar19 = (longlong)(int)(param_10 + uVar28);
    uVar23 = lVar19 * 0x10;
    pauVar26 = (undefined1 (*) [16])(param_1 + uVar23);
    auVar63._4_4_ = uVar30;
    auVar63._0_4_ = uVar29;
    auVar63._8_4_ = uVar31;
    auVar63._12_4_ = uVar90;
    uVar15 = movmskps(unaff_EBP,auVar63);
    if (uVar15 == 0xf) {
      auVar66 = *pauVar26;
      auVar45 = pauVar26[1];
      auVar69 = pauVar26[2];
      auVar53._8_4_ = auVar66._4_4_;
      auVar53._0_8_ = auVar66._0_8_;
      auVar53._12_4_ = auVar45._4_4_;
      auVar82._0_8_ = CONCAT44(auVar45._8_4_,auVar66._8_4_);
      auVar82._8_4_ = auVar66._12_4_;
      auVar82._12_4_ = auVar45._12_4_;
      auVar74._8_4_ = auVar69._4_4_;
      auVar74._0_8_ = auVar69._0_8_;
      auVar74._12_4_ = *(undefined4 *)(pauVar26[3] + 4);
      auVar73._8_8_ = auVar74._8_8_;
      auVar67._12_4_ = *(undefined4 *)pauVar26[3];
      auVar67._8_4_ = auVar69._0_4_;
      auVar58._0_8_ = CONCAT44(*(undefined4 *)(pauVar26[3] + 8),auVar69._8_4_);
      auVar58._8_4_ = auVar69._12_4_;
      auVar58._12_4_ = *(undefined4 *)(pauVar26[3] + 0xc);
      auVar67._4_4_ = auVar45._0_4_;
      auVar67._0_4_ = auVar66._0_4_;
      auVar73._0_8_ = auVar53._8_8_;
      auVar80._8_8_ = auVar58._0_8_;
      auVar80._0_8_ = auVar82._0_8_;
      auVar57._8_8_ = auVar58._8_8_;
      auVar57._0_8_ = auVar82._8_8_;
    }
    else {
      auVar34._0_4_ = ___xmm_00000030000000200000001000000000 & uVar29;
      auVar34._4_4_ = _UNK_150b511c4 & uVar30;
      auVar34._8_4_ = _UNK_150b511c8 & uVar31;
      auVar34._12_4_ = _UNK_150b511cc & uVar90;
      lVar20 = extractps(auVar34,1);
      lVar24 = extractps(auVar34,2);
      lVar21 = extractps(auVar34,3);
      auVar66 = insertps(ZEXT416(*(uint *)*pauVar26),*(undefined4 *)(*pauVar26 + lVar20),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + lVar24),0x20);
      auVar67 = insertps(auVar66,*(undefined4 *)(*pauVar26 + lVar21),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar26 +
                                          (___xmm_00000034000000240000001400000004 & uVar29))),
                         *(undefined4 *)(*pauVar26 + (_UNK_150b511d4 & uVar30)),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511d8 & uVar31)),0x20);
      auVar73 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511dc & uVar90)),0x30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar26 +
                                          (___xmm_00000038000000280000001800000008 & uVar29))),
                         *(undefined4 *)(*pauVar26 + (_UNK_150b511e4 & uVar30)),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511e8 & uVar31)),0x20);
      auVar80 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511ec & uVar90)),0x30);
      uVar23 = (ulonglong)(_UNK_150b511f4 & uVar30);
      auVar66 = insertps(ZEXT416(*(uint *)(*pauVar26 +
                                          (___xmm_0000003c0000002c0000001c0000000c & uVar29))),
                         *(undefined4 *)(*pauVar26 + uVar23),0x10);
      auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511f8 & uVar31)),0x20);
      auVar57 = insertps(auVar66,*(undefined4 *)(*pauVar26 + (_UNK_150b511fc & uVar90)),0x30);
    }
    fVar56 = auVar57._0_4_;
    fVar60 = auVar57._4_4_;
    fVar61 = auVar57._8_4_;
    fVar62 = auVar57._12_4_;
    auVar35._0_4_ = -(uint)(fVar56 != 0.0 && bVar10);
    auVar35._4_4_ = -(uint)(fVar60 != 0.0 && bVar11);
    auVar35._8_4_ = -(uint)(fVar61 != 0.0 && bVar12);
    auVar35._12_4_ = -(uint)(fVar62 != 0.0 && bVar13);
    iVar16 = movmskps((int)uVar23,auVar35);
    if (iVar16 != 0) {
      bVar18 = ~((char)((char)uVar15 << 4) >> 4);
      pauVar5 = (undefined1 (*) [16])(param_2 + lVar19 * 0xc);
      if ((bVar18 & 0xf) == 0) {
        auVar66 = *pauVar5;
        auVar69 = pauVar5[1];
        auVar93._0_4_ = auVar66._0_4_;
        auVar76 = insertps(auVar69,auVar66,0x8c);
        auVar93._4_4_ = auVar66._12_4_;
        auVar93._8_4_ = auVar69._8_4_;
        auVar93._12_4_ = *(undefined4 *)(pauVar5[2] + 4);
        auVar99._4_4_ = auVar69._0_4_;
        auVar99._0_4_ = auVar66._4_4_;
        auVar99._8_4_ = auVar69._12_4_;
        auVar99._12_4_ = *(undefined4 *)(pauVar5[2] + 8);
        auVar114._0_8_ = auVar76._0_8_;
        auVar114._8_4_ = *(undefined4 *)pauVar5[2];
        auVar114._12_4_ = *(undefined4 *)(pauVar5[2] + 0xc);
        auVar66 = *(undefined1 (*) [16])(param_3 + lVar19 * 0xc);
        auVar69 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar19 * 0xc);
        puVar8 = (undefined4 *)(param_3 + 0x20 + lVar19 * 0xc);
        auVar119._0_4_ = auVar66._0_4_;
        auVar45._0_8_ = auVar69._8_8_;
        auVar45._8_4_ = puVar8[1];
        auVar45._12_4_ = puVar8[2];
        auVar76 = insertps(auVar69,auVar66,0x8c);
        auVar119._4_4_ = auVar66._12_4_;
        auVar119._8_4_ = auVar69._8_4_;
        auVar119._12_4_ = puVar8[1];
        auVar107._4_4_ = auVar69._0_4_;
        auVar107._0_4_ = auVar66._4_4_;
        auVar107._8_4_ = auVar69._12_4_;
        auVar107._12_4_ = puVar8[2];
        auVar83._0_8_ = auVar76._0_8_;
        auVar83._8_4_ = *puVar8;
        auVar83._12_4_ = puVar8[3];
      }
      else {
        auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar29;
        auVar36._4_4_ = _UNK_150b50da4 & uVar30;
        auVar36._8_4_ = _UNK_150b50da8 & uVar31;
        auVar36._12_4_ = _UNK_150b50dac & uVar90;
        lVar21 = extractps(auVar36,1);
        lVar25 = extractps(auVar36,2);
        lVar24 = extractps(auVar36,3);
        auVar66 = insertps(ZEXT416(*(uint *)*pauVar5),*(undefined4 *)(*pauVar5 + lVar21),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar25),0x20);
        auVar93 = insertps(auVar66,*(undefined4 *)(*pauVar5 + lVar24),0x30);
        auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 +
                                            (___xmm_000000280000001c0000001000000004 & uVar29))),
                           *(undefined4 *)(*pauVar5 + (_UNK_150b50db4 & uVar30)),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50db8 & uVar31)),0x20);
        auVar99 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dbc & uVar90)),0x30);
        auVar66 = insertps(ZEXT416(*(uint *)(*pauVar5 +
                                            (___xmm_0000002c000000200000001400000008 & uVar29))),
                           *(undefined4 *)(*pauVar5 + (_UNK_150b50dc4 & uVar30)),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dc8 & uVar31)),0x20);
        auVar114 = insertps(auVar66,*(undefined4 *)(*pauVar5 + (_UNK_150b50dcc & uVar90)),0x30);
        lVar20 = param_3 + lVar19 * 0xc;
        auVar66 = insertps(ZEXT416(*(uint *)(param_3 + lVar19 * 0xc)),
                           *(undefined4 *)(lVar21 + lVar20),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)(lVar25 + lVar20),0x20);
        auVar119 = insertps(auVar66,*(undefined4 *)(lVar24 + lVar20),0x30);
        auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)
                                             (___xmm_000000280000001c0000001000000004 & uVar29) +
                                            lVar20)),
                           *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar30) + lVar20),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar31) + lVar20),
                           0x20);
        auVar107 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar90) + lVar20),
                            0x30);
        auVar66 = insertps(ZEXT416(*(uint *)((ulonglong)
                                             (___xmm_0000002c000000200000001400000008 & uVar29) +
                                            lVar20)),
                           *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar30) + lVar20),0x10);
        auVar66 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & uVar31) + lVar20),
                           0x20);
        auVar83 = insertps(auVar66,*(undefined4 *)((ulonglong)(_UNK_150b50dcc & uVar90) + lVar20),
                           0x30);
      }
      lVar19 = (longlong)(int)(uVar28 << 2);
      auVar37._4_4_ = param_9;
      auVar37._0_4_ = param_9;
      auVar37._8_4_ = param_9;
      auVar37._12_4_ = param_9;
      if ((bVar18 & 9) == 0) {
        auVar37 = *(undefined1 (*) [16])(param_4 + lVar19);
        auVar45 = *(undefined1 (*) [16])(param_5 + lVar19);
      }
      else {
        puVar22 = (uint *)(param_4 + lVar19);
        if ((uVar15 & 1) != 0) {
          auVar37 = ZEXT416(*puVar22);
        }
        if ((uVar15 & 2) != 0) {
          auVar37 = insertps(auVar37,puVar22[1],0x10);
        }
        if ((uVar15 & 4) != 0) {
          auVar37 = insertps(auVar37,puVar22[2],0x20);
        }
        if ((uVar15 & 8) != 0) {
          auVar37 = insertps(auVar37,puVar22[3],0x30);
        }
        if ((uVar15 & 1) != 0) {
          auVar45 = ZEXT416(*(uint *)(param_5 + lVar19));
        }
        if ((uVar15 & 2) != 0) {
          auVar45 = insertps(auVar45,*(undefined4 *)(param_5 + lVar19 + 4),0x10);
        }
        if ((uVar15 & 4) != 0) {
          auVar45 = insertps(auVar45,*(undefined4 *)(param_5 + lVar19 + 8),0x20);
        }
        if ((uVar15 & 8) == 0) {
          param_5 = param_5 + lVar19;
        }
        else {
          param_5 = param_5 + lVar19;
          auVar45 = insertps(auVar45,*(undefined4 *)(param_5 + 0xc),0x30);
        }
      }
      fVar79 = param_8 + param_9 * auVar45._0_4_;
      fVar85 = param_8 + param_9 * auVar45._4_4_;
      auVar59._4_4_ = fVar85;
      auVar59._0_4_ = fVar79;
      fVar86 = param_8 + param_9 * auVar45._8_4_;
      param_8 = param_8 + param_9 * auVar45._12_4_;
      fVar44 = param_6 + param_7 * auVar37._0_4_;
      fVar48 = param_6 + param_7 * auVar37._4_4_;
      fVar49 = param_6 + param_7 * auVar37._8_4_;
      param_6 = param_6 + param_7 * auVar37._12_4_;
      fVar32 = fVar44 + fVar79;
      fVar41 = fVar48 + fVar85;
      fVar42 = fVar49 + fVar86;
      fVar43 = param_6 + param_8;
      fVar108 = auVar93._0_4_ - auVar119._0_4_ * fVar32;
      fVar87 = auVar93._4_4_ - auVar119._4_4_ * fVar41;
      fVar109 = auVar93._8_4_ - auVar119._8_4_ * fVar42;
      fVar91 = auVar93._12_4_ - auVar119._12_4_ * fVar43;
      fVar110 = auVar99._0_4_ - auVar107._0_4_ * fVar32;
      fVar95 = auVar99._4_4_ - auVar107._4_4_ * fVar41;
      fVar111 = auVar99._8_4_ - auVar107._8_4_ * fVar42;
      fVar116 = auVar99._12_4_ - auVar107._12_4_ * fVar43;
      fVar32 = auVar114._0_4_ - fVar32 * auVar83._0_4_;
      fVar41 = auVar114._4_4_ - fVar41 * auVar83._4_4_;
      fVar42 = auVar114._8_4_ - fVar42 * auVar83._8_4_;
      fVar43 = auVar114._12_4_ - fVar43 * auVar83._12_4_;
      fVar88 = auVar67._0_4_ - fVar108;
      fVar89 = auVar67._4_4_ - fVar87;
      fVar92 = auVar67._8_4_ - fVar109;
      fVar94 = auVar67._12_4_ - fVar91;
      fVar96 = auVar73._0_4_ - fVar110;
      fVar97 = auVar73._4_4_ - fVar95;
      fVar98 = auVar73._8_4_ - fVar111;
      fVar101 = auVar73._12_4_ - fVar116;
      fVar102 = auVar80._0_4_ - fVar32;
      fVar103 = auVar80._4_4_ - fVar41;
      fVar104 = auVar80._8_4_ - fVar42;
      fVar81 = auVar80._12_4_ - fVar43;
      auVar54._0_4_ = fVar96 * fVar96 + fVar88 * fVar88;
      auVar54._4_4_ = fVar97 * fVar97 + fVar89 * fVar89;
      auVar54._8_4_ = fVar98 * fVar98 + fVar92 * fVar92;
      auVar54._12_4_ = fVar101 * fVar101 + fVar94 * fVar94;
      auVar38._0_4_ = fVar102 * fVar102 + auVar54._0_4_;
      auVar38._4_4_ = fVar103 * fVar103 + auVar54._4_4_;
      auVar38._8_4_ = fVar104 * fVar104 + auVar54._8_4_;
      auVar38._12_4_ = fVar81 * fVar81 + auVar54._12_4_;
      auVar66 = sqrtps(auVar54,auVar38);
      auVar59._8_4_ = fVar86;
      auVar59._12_4_ = param_8;
      auVar66 = divps(auVar59,auVar66);
      fVar50 = auVar66._0_4_;
      fVar70 = auVar66._4_4_;
      fVar77 = auVar66._8_4_;
      fVar78 = auVar66._12_4_;
      auVar84._0_4_ = auVar93._0_4_ - auVar119._0_4_ * fVar44;
      auVar84._4_4_ = auVar93._4_4_ - auVar119._4_4_ * fVar48;
      auVar84._8_4_ = auVar93._8_4_ - auVar119._8_4_ * fVar49;
      auVar84._12_4_ = auVar93._12_4_ - auVar119._12_4_ * param_6;
      uVar28 = -(uint)(auVar38._0_4_ < fVar79 * fVar79);
      uVar15 = -(uint)(auVar38._4_4_ < fVar85 * fVar85);
      uVar29 = -(uint)(auVar38._8_4_ < fVar86 * fVar86);
      uVar30 = -(uint)(auVar38._12_4_ < param_8 * param_8);
      auVar39._4_4_ = -(uint)(auVar38._4_4_ < _UNK_1506895d4);
      auVar39._0_4_ = -(uint)(auVar38._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar39._8_4_ = -(uint)(auVar38._8_4_ < _UNK_1506895d8);
      auVar39._12_4_ = -(uint)(auVar38._12_4_ < _UNK_1506895dc);
      auVar68._0_4_ = (uint)(fVar88 * fVar50 + fVar108) & uVar28;
      auVar68._4_4_ = (uint)(fVar89 * fVar70 + fVar87) & uVar15;
      auVar68._8_4_ = (uint)(fVar92 * fVar77 + fVar109) & uVar29;
      auVar68._12_4_ = (uint)(fVar94 * fVar78 + fVar91) & uVar30;
      auVar69 = blendvps(auVar68,auVar84,auVar39);
      auVar100._0_4_ = auVar99._0_4_ - auVar107._0_4_ * fVar44;
      auVar100._4_4_ = auVar99._4_4_ - auVar107._4_4_ * fVar48;
      auVar100._8_4_ = auVar99._8_4_ - auVar107._8_4_ * fVar49;
      auVar100._12_4_ = auVar99._12_4_ - auVar107._12_4_ * param_6;
      auVar75._0_4_ = (uint)(fVar96 * fVar50 + fVar110) & uVar28;
      auVar75._4_4_ = (uint)(fVar97 * fVar70 + fVar95) & uVar15;
      auVar75._8_4_ = (uint)(fVar98 * fVar77 + fVar111) & uVar29;
      auVar75._12_4_ = (uint)(fVar101 * fVar78 + fVar116) & uVar30;
      auVar76 = blendvps(auVar75,auVar100,auVar39);
      auVar115._0_4_ = auVar114._0_4_ - fVar44 * auVar83._0_4_;
      auVar115._4_4_ = auVar114._4_4_ - fVar48 * auVar83._4_4_;
      auVar115._8_4_ = auVar114._8_4_ - fVar49 * auVar83._8_4_;
      auVar115._12_4_ = auVar114._12_4_ - param_6 * auVar83._12_4_;
      auVar55._0_4_ = uVar28 & (uint)(fVar50 * fVar102 + fVar32);
      auVar55._4_4_ = uVar15 & (uint)(fVar70 * fVar103 + fVar41);
      auVar55._8_4_ = uVar29 & (uint)(fVar77 * fVar104 + fVar42);
      auVar55._12_4_ = uVar30 & (uint)(fVar78 * fVar81 + fVar43);
      auVar66 = blendvps(auVar55,auVar115,auVar39);
      fVar32 = auVar69._0_4_;
      auVar46._0_4_ = -(uint)((fVar56 != 0.0 && bVar10) && fVar32 != 0.0);
      auVar46._4_4_ = -(uint)((fVar60 != 0.0 && bVar11) && auVar69._4_4_ != 0.0);
      auVar46._8_4_ = -(uint)((fVar61 != 0.0 && bVar12) && auVar69._8_4_ != 0.0);
      auVar46._12_4_ = -(uint)((fVar62 != 0.0 && bVar13) && auVar69._12_4_ != 0.0);
      iVar16 = movmskps((int)param_5,auVar46);
      if (iVar16 != 0) {
        bVar18 = (char)((char)iVar16 << 4) >> 4;
        if ((~bVar18 & 0xf) == 0) {
          auVar40._0_8_ = auVar69._0_8_;
          auVar40._8_4_ = auVar69._4_4_;
          auVar40._12_4_ = auVar76._4_4_;
          auVar47._0_8_ = auVar66._0_8_;
          auVar47._8_4_ = auVar66._4_4_;
          auVar47._12_4_ = fVar60;
          *(ulonglong *)*pauVar26 = CONCAT44(auVar76._0_4_,fVar32);
          *(ulonglong *)(*pauVar26 + 8) = CONCAT44(fVar56,auVar66._0_4_);
          *(longlong *)pauVar26[1] = auVar40._8_8_;
          *(longlong *)(pauVar26[1] + 8) = auVar47._8_8_;
          *(float *)pauVar26[2] = auVar69._8_4_;
          *(int *)(pauVar26[2] + 4) = auVar76._8_4_;
          *(int *)(pauVar26[2] + 8) = auVar66._8_4_;
          *(float *)(pauVar26[2] + 0xc) = fVar61;
          *(float *)pauVar26[3] = auVar69._12_4_;
          *(int *)(pauVar26[3] + 4) = auVar76._12_4_;
          *(int *)(pauVar26[3] + 8) = auVar66._12_4_;
          *(float *)(pauVar26[3] + 0xc) = fVar62;
        }
        else {
          if ((bVar18 & 1) != 0) {
            *(float *)*pauVar26 = fVar32;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar69,1);
            *(undefined8 *)pauVar26[1] = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar69,2);
            *(undefined8 *)pauVar26[2] = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar69,3);
            *(undefined8 *)pauVar26[3] = uVar9;
          }
          if ((bVar18 & 1) != 0) {
            *(int *)(*pauVar26 + 4) = auVar76._0_4_;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar76,1);
            *(undefined8 *)(pauVar26[1] + 4) = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar76,2);
            *(undefined8 *)(pauVar26[2] + 4) = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar76,3);
            *(undefined8 *)(pauVar26[3] + 4) = uVar9;
          }
          if ((bVar18 & 1) != 0) {
            *(int *)(*pauVar26 + 8) = auVar66._0_4_;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar66,1);
            *(undefined8 *)(pauVar26[1] + 8) = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar66,2);
            *(undefined8 *)(pauVar26[2] + 8) = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar66,3);
            *(undefined8 *)(pauVar26[3] + 8) = uVar9;
          }
          if ((bVar18 & 1) != 0) {
            *(float *)(*pauVar26 + 0xc) = fVar56;
          }
          if ((bVar18 & 2) != 0) {
            uVar9 = extractps(auVar57,1);
            *(undefined8 *)(pauVar26[1] + 0xc) = uVar9;
          }
          if ((bVar18 & 4) != 0) {
            uVar9 = extractps(auVar57,2);
            *(undefined8 *)(pauVar26[2] + 0xc) = uVar9;
          }
          if ((char)bVar18 < '\0') {
            uVar9 = extractps(auVar57,3);
            *(undefined8 *)(pauVar26[3] + 0xc) = uVar9;
          }
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithDistanceMap_sse4 @ 140355b40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithDistanceMap_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar70;
  float fVar72;
  float fVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar73;
  float fVar75;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  uint uVar76;
  float fVar77;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar93;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar100;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    local_168._4_4_ = param_7;
    local_168._0_4_ = param_7;
    fStack_160 = param_7;
    fStack_15c = param_7;
    fVar31 = param_7 * param_7;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar73 = *(float *)(*pauVar25 + 0xc);
      auVar12 = *pauVar25;
      pauVar4 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar75 = *(float *)(*pauVar4 + 0xc);
      auVar59 = *pauVar4;
      auVar56 = *(undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar71 = auVar56._12_4_;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar33 = *(float *)(*pauVar5 + 0xc);
      auVar64 = *pauVar5;
      auVar49._4_4_ = -(uint)(fVar75 != 0.0);
      auVar49._0_4_ = -(uint)(fVar73 != 0.0);
      auVar49._8_4_ = -(uint)(fVar71 != 0.0);
      auVar49._12_4_ = -(uint)(fVar33 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar49);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar49 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar34 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar53 = insertps(auVar34,auVar49,0x8c);
        auVar48 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar54 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar60 = insertps(auVar54,auVar48,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar83 = *pfVar3 * param_6 + param_5;
        fVar84 = pfVar3[1] * param_6 + param_5;
        fVar85 = pfVar3[2] * param_6 + param_5;
        fVar86 = pfVar3[3] * param_6 + param_5;
        fVar32 = param_7 + fVar83;
        fVar42 = param_7 + fVar84;
        fVar43 = param_7 + fVar85;
        fVar44 = param_7 + fVar86;
        fVar65 = auVar49._0_4_ - auVar48._0_4_ * fVar32;
        fVar70 = auVar49._12_4_ - auVar48._12_4_ * fVar42;
        fVar72 = auVar34._8_4_ - auVar54._8_4_ * fVar43;
        fVar74 = pfVar1[1] - pfVar2[1] * fVar44;
        fVar77 = auVar49._4_4_ - auVar48._4_4_ * fVar32;
        fVar80 = auVar34._0_4_ - auVar54._0_4_ * fVar42;
        fVar81 = auVar34._12_4_ - auVar54._12_4_ * fVar43;
        fVar82 = pfVar1[2] - pfVar2[2] * fVar44;
        fVar87 = auVar53._0_4_ - fVar32 * auVar60._0_4_;
        fVar90 = auVar53._4_4_ - fVar42 * auVar60._4_4_;
        fVar91 = *pfVar1 - fVar43 * *pfVar2;
        fVar92 = pfVar1[3] - fVar44 * pfVar2[3];
        fVar107 = *(float *)*pauVar25 - fVar65;
        fVar110 = *(float *)*pauVar4 - fVar70;
        fVar111 = auVar56._0_4_ - fVar72;
        fVar112 = *(float *)*pauVar5 - fVar74;
        fVar93 = *(float *)(*pauVar25 + 4) - fVar77;
        fVar97 = *(float *)(*pauVar4 + 4) - fVar80;
        fVar98 = auVar56._4_4_ - fVar81;
        fVar99 = *(float *)(*pauVar5 + 4) - fVar82;
        fVar100 = *(float *)(*pauVar25 + 8) - fVar87;
        fVar103 = *(float *)(*pauVar4 + 8) - fVar90;
        fVar104 = auVar56._8_4_ - fVar91;
        fVar105 = *(float *)(*pauVar5 + 8) - fVar92;
        auVar95._0_4_ = fVar100 * fVar100 + fVar93 * fVar93 + fVar107 * fVar107;
        auVar95._4_4_ = fVar103 * fVar103 + fVar97 * fVar97 + fVar110 * fVar110;
        auVar95._8_4_ = fVar104 * fVar104 + fVar98 * fVar98 + fVar111 * fVar111;
        auVar95._12_4_ = fVar105 * fVar105 + fVar99 * fVar99 + fVar112 * fVar112;
        in_XMM3 = sqrtps(in_XMM3,auVar95);
        auVar78 = divps(_local_168,in_XMM3);
        fVar32 = auVar78._0_4_;
        fVar42 = auVar78._4_4_;
        fVar43 = auVar78._8_4_;
        fVar44 = auVar78._12_4_;
        auVar109._0_4_ = auVar49._0_4_ - auVar48._0_4_ * fVar83;
        auVar109._4_4_ = auVar49._12_4_ - auVar48._12_4_ * fVar84;
        auVar109._8_4_ = auVar34._8_4_ - auVar54._8_4_ * fVar85;
        auVar109._12_4_ = pfVar1[1] - pfVar2[1] * fVar86;
        uVar15 = -(uint)(auVar95._0_4_ < fVar31);
        uVar28 = -(uint)(auVar95._4_4_ < fVar31);
        uVar29 = -(uint)(auVar95._8_4_ < fVar31);
        uVar30 = -(uint)(auVar95._12_4_ < fVar31);
        auVar108._0_4_ = (uint)(fVar107 * fVar32 + fVar65) & uVar15;
        auVar108._4_4_ = (uint)(fVar110 * fVar42 + fVar70) & uVar28;
        auVar108._8_4_ = (uint)(fVar111 * fVar43 + fVar72) & uVar29;
        auVar108._12_4_ = (uint)(fVar112 * fVar44 + fVar74) & uVar30;
        auVar78._4_4_ = -(uint)(auVar95._4_4_ < _UNK_1506895d4);
        auVar78._0_4_ = -(uint)(auVar95._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar78._8_4_ = -(uint)(auVar95._8_4_ < _UNK_1506895d8);
        auVar78._12_4_ = -(uint)(auVar95._12_4_ < _UNK_1506895dc);
        auVar109 = blendvps(auVar108,auVar109,auVar78);
        auVar55._0_4_ = auVar49._4_4_ - auVar48._4_4_ * fVar83;
        auVar55._4_4_ = auVar34._0_4_ - auVar54._0_4_ * fVar84;
        auVar55._8_4_ = auVar34._12_4_ - auVar54._12_4_ * fVar85;
        auVar55._12_4_ = pfVar1[2] - pfVar2[2] * fVar86;
        auVar94._0_4_ = (uint)(fVar93 * fVar32 + fVar77) & uVar15;
        auVar94._4_4_ = (uint)(fVar97 * fVar42 + fVar80) & uVar28;
        auVar94._8_4_ = (uint)(fVar98 * fVar43 + fVar81) & uVar29;
        auVar94._12_4_ = (uint)(fVar99 * fVar44 + fVar82) & uVar30;
        auVar95 = blendvps(auVar94,auVar55,auVar78);
        auVar54._0_4_ = auVar53._0_4_ - fVar83 * auVar60._0_4_;
        auVar54._4_4_ = auVar53._4_4_ - fVar84 * auVar60._4_4_;
        auVar54._8_4_ = *pfVar1 - fVar85 * *pfVar2;
        auVar54._12_4_ = pfVar1[3] - fVar86 * pfVar2[3];
        auVar48._0_4_ = uVar15 & (uint)(fVar32 * fVar100 + fVar87);
        auVar48._4_4_ = uVar28 & (uint)(fVar42 * fVar103 + fVar90);
        auVar48._8_4_ = uVar29 & (uint)(fVar43 * fVar104 + fVar91);
        auVar48._12_4_ = uVar30 & (uint)(fVar44 * fVar105 + fVar92);
        auVar49 = blendvps(auVar48,auVar54,auVar78);
        fVar32 = auVar109._0_4_;
        auVar34._0_4_ = -(uint)(fVar32 != 0.0 && fVar73 != 0.0);
        auVar34._4_4_ = -(uint)(auVar109._4_4_ != 0.0 && fVar75 != 0.0);
        auVar34._8_4_ = -(uint)(auVar109._8_4_ != 0.0 && fVar71 != 0.0);
        auVar34._12_4_ = -(uint)(auVar109._12_4_ != 0.0 && fVar33 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar34);
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar56._0_8_ = auVar109._0_8_;
            auVar56._8_4_ = auVar109._4_4_;
            auVar56._12_4_ = auVar95._4_4_;
            auVar59._0_8_ = auVar49._0_8_;
            auVar59._8_4_ = auVar49._4_4_;
            auVar59._12_4_ = fVar75;
            in_XMM3._12_4_ = fVar73;
            in_XMM3._8_4_ = auVar49._0_4_;
            auVar64._0_8_ = CONCAT44(auVar95._8_4_,auVar109._8_4_);
            auVar64._8_4_ = auVar109._12_4_;
            auVar64._12_4_ = auVar95._12_4_;
            in_XMM3._4_4_ = auVar95._0_4_;
            in_XMM3._0_4_ = fVar32;
            *(undefined1 (*) [16])(lVar20 + uVar26 * 4) = in_XMM3;
            puVar6 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar6 = auVar56._8_8_;
            puVar6[1] = auVar59._8_8_;
            puVar6 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar6 = auVar64._0_8_;
            *(int *)(puVar6 + 1) = auVar49._8_4_;
            *(float *)((longlong)puVar6 + 0xc) = fVar71;
            puVar6 = (undefined8 *)(lVar20 + 0x30 + uVar26 * 4);
            *puVar6 = auVar64._8_8_;
            *(int *)(puVar6 + 1) = auVar49._12_4_;
            *(float *)((longlong)puVar6 + 0xc) = fVar33;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar32;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar109,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar109,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar109,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 4 + uVar26 * 4) = auVar95._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar95,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar95,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar95,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 1) != 0) {
              *(int *)(lVar20 + 8 + uVar26 * 4) = auVar49._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar49,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar49,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar49,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 1) != 0) {
              uVar7 = extractps(auVar12,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 2) != 0) {
              uVar7 = extractps(auVar59,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar7;
            }
            if ((bVar19 & 4) != 0) {
              uVar7 = extractps(auVar56,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar7;
            }
            if ((char)bVar19 < '\0') {
              uVar7 = extractps(auVar64,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar7;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar8 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  uVar28 = -(uint)bVar8;
  bVar9 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  uVar29 = -(uint)bVar9;
  bVar10 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  uVar30 = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  uVar76 = -(uint)bVar11;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  auVar12._4_4_ = uVar29;
  auVar12._0_4_ = uVar28;
  auVar12._8_4_ = uVar30;
  auVar12._12_4_ = uVar76;
  uVar15 = movmskps((int)unaff_RBX,auVar12);
  if (uVar15 == 0xf) {
    auVar56 = *pauVar25;
    auVar59 = pauVar25[2];
    auVar60._8_4_ = auVar56._4_4_;
    auVar60._0_8_ = auVar56._0_8_;
    auVar60._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar53._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar56._8_4_);
    auVar53._8_4_ = auVar56._12_4_;
    auVar53._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar62._0_8_ = auVar59._0_8_;
    auVar62._8_4_ = auVar59._4_4_;
    auVar62._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar61._8_8_ = auVar62._8_8_;
    auVar57._12_4_ = *(undefined4 *)pauVar25[3];
    auVar57._8_4_ = auVar59._0_4_;
    auVar67._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar59._8_4_);
    auVar67._8_4_ = auVar59._12_4_;
    auVar67._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar57._4_4_ = *(undefined4 *)pauVar25[1];
    auVar57._0_4_ = auVar56._0_4_;
    auVar61._0_8_ = auVar60._8_8_;
    auVar50._8_8_ = auVar67._0_8_;
    auVar50._0_8_ = auVar53._0_8_;
    auVar66._8_8_ = auVar67._8_8_;
    auVar66._0_8_ = auVar53._8_8_;
  }
  else {
    auVar35._0_4_ = ___xmm_00000030000000200000001000000000 & uVar28;
    auVar35._4_4_ = _UNK_150b511c4 & uVar29;
    auVar35._8_4_ = _UNK_150b511c8 & uVar30;
    auVar35._12_4_ = _UNK_150b511cc & uVar76;
    lVar18 = extractps(auVar35,1);
    lVar22 = extractps(auVar35,2);
    lVar24 = extractps(auVar35,3);
    auVar56 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar57 = insertps(auVar56,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar56 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000034000000240000001400000004 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511d4 & uVar29)),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511d8 & uVar30)),0x20);
    auVar61 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511dc & uVar76)),0x30);
    auVar56 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000038000000280000001800000008 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511e4 & uVar29)),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511e8 & uVar30)),0x20);
    auVar50 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511ec & uVar76)),0x30);
    uVar14 = (ulonglong)(_UNK_150b511f4 & uVar29);
    auVar56 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar28))),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511f8 & uVar30)),0x20);
    auVar66 = insertps(auVar56,*(undefined4 *)(*pauVar25 + (_UNK_150b511fc & uVar76)),0x30);
  }
  fVar31 = auVar66._0_4_;
  fVar71 = auVar66._4_4_;
  fVar73 = auVar66._8_4_;
  fVar75 = auVar66._12_4_;
  auVar36._0_4_ = -(uint)(fVar31 != 0.0 && bVar8);
  auVar36._4_4_ = -(uint)(fVar71 != 0.0 && bVar9);
  auVar36._8_4_ = -(uint)(fVar73 != 0.0 && bVar10);
  auVar36._12_4_ = -(uint)(fVar75 != 0.0 && bVar11);
  iVar16 = movmskps((int)uVar14,auVar36);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar4 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar56 = *pauVar4;
      auVar59 = pauVar4[1];
      auVar68._0_4_ = auVar56._0_4_;
      auVar64 = insertps(auVar59,auVar56,0x8c);
      auVar68._4_4_ = auVar56._12_4_;
      auVar68._8_4_ = auVar59._8_4_;
      auVar68._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar88._4_4_ = auVar59._0_4_;
      auVar88._0_4_ = auVar56._4_4_;
      auVar88._8_4_ = auVar59._12_4_;
      auVar88._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar101._0_8_ = auVar64._0_8_;
      auVar101._8_4_ = *(undefined4 *)pauVar4[2];
      auVar101._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar56 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar59 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar38 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar106._0_4_ = auVar56._0_4_;
      auVar64 = insertps(auVar59,auVar56,0x8c);
      auVar106._4_4_ = auVar56._12_4_;
      auVar106._8_4_ = auVar59._8_4_;
      auVar106._12_4_ = auVar38._4_4_;
      auVar96._4_4_ = auVar59._0_4_;
      auVar96._0_4_ = auVar56._4_4_;
      auVar96._8_4_ = auVar59._12_4_;
      auVar96._12_4_ = auVar38._8_4_;
      auVar79._0_8_ = auVar64._0_8_;
      auVar79._8_4_ = auVar38._0_4_;
      auVar79._12_4_ = auVar38._12_4_;
    }
    else {
      auVar37._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar28;
      auVar37._4_4_ = _UNK_150b50da4 & uVar29;
      auVar37._8_4_ = _UNK_150b50da8 & uVar30;
      auVar37._12_4_ = _UNK_150b50dac & uVar76;
      lVar22 = extractps(auVar37,1);
      lVar23 = extractps(auVar37,2);
      lVar24 = extractps(auVar37,3);
      auVar56 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar22),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar4 + lVar23),0x20);
      auVar68 = insertps(auVar56,*(undefined4 *)(*pauVar4 + lVar24),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_000000280000001c0000001000000004 & uVar28))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50db4 & uVar29)),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar4 + (_UNK_150b50db8 & uVar30)),0x20);
      auVar88 = insertps(auVar56,*(undefined4 *)(*pauVar4 + (_UNK_150b50dbc & uVar76)),0x30);
      auVar38._4_4_ = uVar29;
      auVar38._0_4_ = uVar28;
      auVar38._8_4_ = uVar30;
      auVar38._12_4_ = uVar76;
      auVar38 = ___xmm_0000002c000000200000001400000008 & auVar38;
      auVar56 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar38._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar38._4_4_),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(*pauVar4 + auVar38._8_4_),0x20);
      auVar101 = insertps(auVar56,*(undefined4 *)(*pauVar4 + auVar38._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar56 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar106 = insertps(auVar56,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar28) +
                                          lVar18)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar29) + lVar18),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar30) + lVar18),0x20
                        );
      auVar96 = insertps(auVar56,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar76) + lVar18),0x30
                        );
      auVar56 = insertps(ZEXT416(*(uint *)((ulonglong)auVar38._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar38._4_4_ + lVar18),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)((ulonglong)auVar38._8_4_ + lVar18),0x20);
      auVar79 = insertps(auVar56,*(undefined4 *)((ulonglong)auVar38._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar38 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar38 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar38 = insertps(auVar38,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar38 = insertps(auVar38,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar38 = insertps(auVar38,puVar21[3],0x30);
      }
    }
    fVar105 = param_5 + param_6 * auVar38._0_4_;
    fVar107 = param_5 + param_6 * auVar38._4_4_;
    fVar110 = param_5 + param_6 * auVar38._8_4_;
    param_5 = param_5 + param_6 * auVar38._12_4_;
    auVar45._4_4_ = param_7;
    auVar45._0_4_ = param_7;
    auVar45._8_4_ = param_7;
    auVar45._12_4_ = param_7;
    fVar33 = param_7 + fVar105;
    fVar32 = param_7 + fVar107;
    fVar42 = param_7 + fVar110;
    fVar43 = param_7 + param_5;
    fVar92 = auVar68._0_4_ - auVar106._0_4_ * fVar33;
    fVar93 = auVar68._4_4_ - auVar106._4_4_ * fVar32;
    fVar97 = auVar68._8_4_ - auVar106._8_4_ * fVar42;
    fVar98 = auVar68._12_4_ - auVar106._12_4_ * fVar43;
    fVar99 = auVar88._0_4_ - auVar96._0_4_ * fVar33;
    fVar100 = auVar88._4_4_ - auVar96._4_4_ * fVar32;
    fVar103 = auVar88._8_4_ - auVar96._8_4_ * fVar42;
    fVar104 = auVar88._12_4_ - auVar96._12_4_ * fVar43;
    fVar44 = auVar101._0_4_ - fVar33 * auVar79._0_4_;
    fVar65 = auVar101._4_4_ - fVar32 * auVar79._4_4_;
    fVar70 = auVar101._8_4_ - fVar42 * auVar79._8_4_;
    fVar72 = auVar101._12_4_ - fVar43 * auVar79._12_4_;
    fVar82 = auVar57._0_4_ - fVar92;
    fVar83 = auVar57._4_4_ - fVar93;
    fVar84 = auVar57._8_4_ - fVar97;
    fVar85 = auVar57._12_4_ - fVar98;
    fVar86 = auVar61._0_4_ - fVar99;
    fVar87 = auVar61._4_4_ - fVar100;
    fVar90 = auVar61._8_4_ - fVar103;
    fVar91 = auVar61._12_4_ - fVar104;
    fVar74 = auVar50._0_4_ - fVar44;
    fVar77 = auVar50._4_4_ - fVar65;
    fVar80 = auVar50._8_4_ - fVar70;
    fVar81 = auVar50._12_4_ - fVar72;
    auVar51._0_4_ = fVar86 * fVar86 + fVar82 * fVar82;
    auVar51._4_4_ = fVar87 * fVar87 + fVar83 * fVar83;
    auVar51._8_4_ = fVar90 * fVar90 + fVar84 * fVar84;
    auVar51._12_4_ = fVar91 * fVar91 + fVar85 * fVar85;
    auVar39._0_4_ = fVar74 * fVar74 + auVar51._0_4_;
    auVar39._4_4_ = fVar77 * fVar77 + auVar51._4_4_;
    auVar39._8_4_ = fVar80 * fVar80 + auVar51._8_4_;
    auVar39._12_4_ = fVar81 * fVar81 + auVar51._12_4_;
    auVar56 = sqrtps(auVar51,auVar39);
    auVar56 = divps(auVar45,auVar56);
    fVar33 = auVar56._0_4_;
    fVar32 = auVar56._4_4_;
    fVar42 = auVar56._8_4_;
    fVar43 = auVar56._12_4_;
    auVar69._0_4_ = auVar68._0_4_ - auVar106._0_4_ * fVar105;
    auVar69._4_4_ = auVar68._4_4_ - auVar106._4_4_ * fVar107;
    auVar69._8_4_ = auVar68._8_4_ - auVar106._8_4_ * fVar110;
    auVar69._12_4_ = auVar68._12_4_ - auVar106._12_4_ * param_5;
    param_7 = param_7 * param_7;
    uVar27 = -(uint)(auVar39._0_4_ < param_7);
    uVar15 = -(uint)(auVar39._4_4_ < param_7);
    uVar28 = -(uint)(auVar39._8_4_ < param_7);
    uVar29 = -(uint)(auVar39._12_4_ < param_7);
    auVar40._4_4_ = -(uint)(auVar39._4_4_ < _UNK_1506895d4);
    auVar40._0_4_ = -(uint)(auVar39._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar40._8_4_ = -(uint)(auVar39._8_4_ < _UNK_1506895d8);
    auVar40._12_4_ = -(uint)(auVar39._12_4_ < _UNK_1506895dc);
    auVar58._0_4_ = (uint)(fVar82 * fVar33 + fVar92) & uVar27;
    auVar58._4_4_ = (uint)(fVar83 * fVar32 + fVar93) & uVar15;
    auVar58._8_4_ = (uint)(fVar84 * fVar42 + fVar97) & uVar28;
    auVar58._12_4_ = (uint)(fVar85 * fVar43 + fVar98) & uVar29;
    auVar59 = blendvps(auVar58,auVar69,auVar40);
    auVar89._0_4_ = auVar88._0_4_ - auVar96._0_4_ * fVar105;
    auVar89._4_4_ = auVar88._4_4_ - auVar96._4_4_ * fVar107;
    auVar89._8_4_ = auVar88._8_4_ - auVar96._8_4_ * fVar110;
    auVar89._12_4_ = auVar88._12_4_ - auVar96._12_4_ * param_5;
    auVar63._0_4_ = (uint)(fVar86 * fVar33 + fVar99) & uVar27;
    auVar63._4_4_ = (uint)(fVar87 * fVar32 + fVar100) & uVar15;
    auVar63._8_4_ = (uint)(fVar90 * fVar42 + fVar103) & uVar28;
    auVar63._12_4_ = (uint)(fVar91 * fVar43 + fVar104) & uVar29;
    auVar64 = blendvps(auVar63,auVar89,auVar40);
    auVar102._0_4_ = auVar101._0_4_ - fVar105 * auVar79._0_4_;
    auVar102._4_4_ = auVar101._4_4_ - fVar107 * auVar79._4_4_;
    auVar102._8_4_ = auVar101._8_4_ - fVar110 * auVar79._8_4_;
    auVar102._12_4_ = auVar101._12_4_ - param_5 * auVar79._12_4_;
    auVar52._0_4_ = uVar27 & (uint)(fVar33 * fVar74 + fVar44);
    auVar52._4_4_ = uVar15 & (uint)(fVar32 * fVar77 + fVar65);
    auVar52._8_4_ = uVar28 & (uint)(fVar42 * fVar80 + fVar70);
    auVar52._12_4_ = uVar29 & (uint)(fVar43 * fVar81 + fVar72);
    auVar56 = blendvps(auVar52,auVar102,auVar40);
    fVar33 = auVar59._0_4_;
    auVar46._0_4_ = -(uint)((fVar31 != 0.0 && bVar8) && fVar33 != 0.0);
    auVar46._4_4_ = -(uint)((fVar71 != 0.0 && bVar9) && auVar59._4_4_ != 0.0);
    auVar46._8_4_ = -(uint)((fVar73 != 0.0 && bVar10) && auVar59._8_4_ != 0.0);
    auVar46._12_4_ = -(uint)((fVar75 != 0.0 && bVar11) && auVar59._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar46);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar41._0_8_ = auVar59._0_8_;
        auVar41._8_4_ = auVar59._4_4_;
        auVar41._12_4_ = auVar64._4_4_;
        auVar47._0_8_ = auVar56._0_8_;
        auVar47._8_4_ = auVar56._4_4_;
        auVar47._12_4_ = fVar71;
        *(ulonglong *)*pauVar25 = CONCAT44(auVar64._0_4_,fVar33);
        *(ulonglong *)(*pauVar25 + 8) = CONCAT44(fVar31,auVar56._0_4_);
        *(longlong *)pauVar25[1] = auVar41._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar47._8_8_;
        *(float *)pauVar25[2] = auVar59._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar64._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar56._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar73;
        *(float *)pauVar25[3] = auVar59._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar64._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar56._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar75;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar33;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar59,1);
          *(undefined8 *)pauVar25[1] = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar59,2);
          *(undefined8 *)pauVar25[2] = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar59,3);
          *(undefined8 *)pauVar25[3] = uVar7;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar64._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar64,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar64,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar64,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar7;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar56._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar56,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar56,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar56,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar7;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar7 = extractps(auVar66,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar7;
        }
        if ((bVar19 & 4) != 0) {
          uVar7 = extractps(auVar66,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar7;
        }
        if ((char)bVar19 < '\0') {
          uVar7 = extractps(auVar66,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar7;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithRadiusMap_sse4 @ 1403567f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithRadiusMap_sse4
               (ulonglong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined3 uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong unaff_RBX;
  byte bVar19;
  int unaff_EBP;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar72;
  float fVar73;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  float fVar79;
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar94;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  float fVar99;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar106;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  
  uVar27 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar27 = param_9;
  }
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    local_158._4_4_ = param_5;
    local_158._0_4_ = param_5;
    fStack_150 = param_5;
    fStack_14c = param_5;
    lVar20 = (longlong)param_8 * 0x10 + param_1;
    unaff_RBX = (longlong)param_8 * 0xc + 0x20;
    uVar26 = 0;
    uVar14 = 0;
    uVar17 = param_1;
    do {
      pauVar25 = (undefined1 (*) [16])(lVar20 + uVar26 * 4);
      fVar75 = *(float *)(*pauVar25 + 0xc);
      auVar52 = *pauVar25;
      pauVar4 = (undefined1 (*) [16])(lVar20 + 0x10 + uVar26 * 4);
      fVar79 = *(float *)(*pauVar4 + 0xc);
      auVar60 = *pauVar4;
      pauVar5 = (undefined1 (*) [16])(lVar20 + 0x20 + uVar26 * 4);
      fVar80 = *(float *)(*pauVar5 + 0xc);
      auVar63 = *pauVar5;
      pauVar6 = (undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4);
      fVar81 = *(float *)(*pauVar6 + 0xc);
      auVar71 = *pauVar6;
      auVar51._4_4_ = -(uint)(fVar79 != 0.0);
      auVar51._0_4_ = -(uint)(fVar75 != 0.0);
      auVar51._8_4_ = -(uint)(fVar80 != 0.0);
      auVar51._12_4_ = -(uint)(fVar81 != 0.0);
      uVar15 = movmskps((int)uVar17,auVar51);
      uVar17 = (ulonglong)uVar15;
      if (uVar15 != 0) {
        auVar51 = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RBX);
        auVar32 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RBX);
        pfVar1 = (float *)(param_2 + unaff_RBX);
        auVar82 = insertps(auVar32,auVar51,0x8c);
        auVar50 = *(undefined1 (*) [16])(param_3 + -0x20 + unaff_RBX);
        auVar83 = *(undefined1 (*) [16])(param_3 + -0x10 + unaff_RBX);
        pfVar2 = (float *)(param_3 + unaff_RBX);
        auVar76 = insertps(auVar83,auVar50,0x8c);
        uVar17 = uVar26 & 0xffffffff;
        pfVar3 = (float *)(param_4 + uVar17);
        fVar46 = *pfVar3 * param_7 + param_6;
        fVar47 = pfVar3[1] * param_7 + param_6;
        fVar48 = pfVar3[2] * param_7 + param_6;
        fVar49 = pfVar3[3] * param_7 + param_6;
        fVar31 = param_5 + fVar46;
        fVar41 = param_5 + fVar47;
        fVar42 = param_5 + fVar48;
        fVar43 = param_5 + fVar49;
        fVar59 = auVar51._0_4_ - auVar50._0_4_ * fVar31;
        fVar64 = auVar51._12_4_ - auVar50._12_4_ * fVar41;
        fVar65 = auVar32._8_4_ - auVar83._8_4_ * fVar42;
        fVar66 = pfVar1[1] - pfVar2[1] * fVar43;
        fVar88 = auVar51._4_4_ - auVar50._4_4_ * fVar31;
        fVar91 = auVar32._0_4_ - auVar83._0_4_ * fVar41;
        fVar92 = auVar32._12_4_ - auVar83._12_4_ * fVar42;
        fVar93 = pfVar1[2] - pfVar2[2] * fVar43;
        fVar31 = auVar82._0_4_ - fVar31 * auVar76._0_4_;
        fVar41 = auVar82._4_4_ - fVar41 * auVar76._4_4_;
        fVar42 = *pfVar1 - fVar42 * *pfVar2;
        fVar43 = pfVar1[3] - fVar43 * pfVar2[3];
        fVar106 = *(float *)*pauVar25 - fVar59;
        fVar110 = *(float *)*pauVar4 - fVar64;
        fVar111 = *(float *)*pauVar5 - fVar65;
        fVar112 = *(float *)*pauVar6 - fVar66;
        fVar99 = *(float *)(*pauVar25 + 4) - fVar88;
        fVar103 = *(float *)(*pauVar4 + 4) - fVar91;
        fVar104 = *(float *)(*pauVar5 + 4) - fVar92;
        fVar105 = *(float *)(*pauVar6 + 4) - fVar93;
        fVar94 = *(float *)(*pauVar25 + 8) - fVar31;
        fVar96 = *(float *)(*pauVar4 + 8) - fVar41;
        fVar97 = *(float *)(*pauVar5 + 8) - fVar42;
        fVar98 = *(float *)(*pauVar6 + 8) - fVar43;
        auVar101._0_4_ = fVar94 * fVar94 + fVar99 * fVar99 + fVar106 * fVar106;
        auVar101._4_4_ = fVar96 * fVar96 + fVar103 * fVar103 + fVar110 * fVar110;
        auVar101._8_4_ = fVar97 * fVar97 + fVar104 * fVar104 + fVar111 * fVar111;
        auVar101._12_4_ = fVar98 * fVar98 + fVar105 * fVar105 + fVar112 * fVar112;
        auVar113 = sqrtps(unaff_XMM15,auVar101);
        auVar85._4_4_ = fVar47;
        auVar85._0_4_ = fVar46;
        auVar85._8_4_ = fVar48;
        auVar85._12_4_ = fVar49;
        auVar113 = divps(auVar85,auVar113);
        fVar67 = auVar113._0_4_;
        fVar72 = auVar113._4_4_;
        fVar73 = auVar113._8_4_;
        fVar74 = auVar113._12_4_;
        auVar108._0_4_ = auVar51._0_4_ - auVar50._0_4_ * param_5;
        auVar108._4_4_ = auVar51._12_4_ - auVar50._12_4_ * param_5;
        auVar108._8_4_ = auVar32._8_4_ - auVar83._8_4_ * param_5;
        auVar108._12_4_ = pfVar1[1] - pfVar2[1] * param_5;
        uVar15 = -(uint)(auVar101._0_4_ < fVar46 * fVar46);
        uVar28 = -(uint)(auVar101._4_4_ < fVar47 * fVar47);
        uVar29 = -(uint)(auVar101._8_4_ < fVar48 * fVar48);
        uVar30 = -(uint)(auVar101._12_4_ < fVar49 * fVar49);
        auVar107._0_4_ = (uint)(fVar106 * fVar67 + fVar59) & uVar15;
        auVar107._4_4_ = (uint)(fVar110 * fVar72 + fVar64) & uVar28;
        auVar107._8_4_ = (uint)(fVar111 * fVar73 + fVar65) & uVar29;
        auVar107._12_4_ = (uint)(fVar112 * fVar74 + fVar66) & uVar30;
        auVar113._4_4_ = -(uint)(auVar101._4_4_ < _UNK_1506895d4);
        auVar113._0_4_ = -(uint)(auVar101._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar113._8_4_ = -(uint)(auVar101._8_4_ < _UNK_1506895d8);
        auVar113._12_4_ = -(uint)(auVar101._12_4_ < _UNK_1506895dc);
        auVar108 = blendvps(auVar107,auVar108,auVar113);
        auVar56._0_4_ = auVar51._4_4_ - auVar50._4_4_ * param_5;
        auVar56._4_4_ = auVar32._0_4_ - auVar83._0_4_ * param_5;
        auVar56._8_4_ = auVar32._12_4_ - auVar83._12_4_ * param_5;
        auVar56._12_4_ = pfVar1[2] - pfVar2[2] * param_5;
        auVar100._0_4_ = (uint)(fVar99 * fVar67 + fVar88) & uVar15;
        auVar100._4_4_ = (uint)(fVar103 * fVar72 + fVar91) & uVar28;
        auVar100._8_4_ = (uint)(fVar104 * fVar73 + fVar92) & uVar29;
        auVar100._12_4_ = (uint)(fVar105 * fVar74 + fVar93) & uVar30;
        auVar101 = blendvps(auVar100,auVar56,auVar113);
        auVar83._0_4_ = auVar82._0_4_ - auVar76._0_4_ * param_5;
        auVar83._4_4_ = auVar82._4_4_ - auVar76._4_4_ * param_5;
        auVar83._8_4_ = *pfVar1 - *pfVar2 * param_5;
        auVar83._12_4_ = pfVar1[3] - pfVar2[3] * param_5;
        auVar50._0_4_ = uVar15 & (uint)(fVar67 * fVar94 + fVar31);
        auVar50._4_4_ = uVar28 & (uint)(fVar72 * fVar96 + fVar41);
        auVar50._8_4_ = uVar29 & (uint)(fVar73 * fVar97 + fVar42);
        auVar50._12_4_ = uVar30 & (uint)(fVar74 * fVar98 + fVar43);
        auVar51 = blendvps(auVar50,auVar83,auVar113);
        fVar31 = auVar108._0_4_;
        auVar32._0_4_ = -(uint)(fVar31 != 0.0 && fVar75 != 0.0);
        auVar32._4_4_ = -(uint)(auVar108._4_4_ != 0.0 && fVar79 != 0.0);
        auVar32._8_4_ = -(uint)(auVar108._8_4_ != 0.0 && fVar80 != 0.0);
        auVar32._12_4_ = -(uint)(auVar108._12_4_ != 0.0 && fVar81 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar32);
        unaff_XMM15 = _local_158;
        if (unaff_EBP != 0) {
          uVar13 = (undefined3)((uint)unaff_EBP >> 8);
          bVar19 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31(uVar13,bVar19);
          uVar17 = (ulonglong)CONCAT31(uVar13,~bVar19);
          if ((~bVar19 & 0xf) == 0) {
            auVar60._0_8_ = auVar108._0_8_;
            auVar60._8_4_ = auVar108._4_4_;
            auVar60._12_4_ = auVar101._4_4_;
            auVar63._0_8_ = auVar51._0_8_;
            auVar63._8_4_ = auVar51._4_4_;
            auVar63._12_4_ = fVar79;
            auVar76._0_8_ = CONCAT44(auVar101._8_4_,auVar108._8_4_);
            auVar76._8_4_ = auVar108._12_4_;
            auVar76._12_4_ = auVar101._12_4_;
            auVar71._0_8_ = CONCAT44(fVar80,auVar51._8_4_);
            auVar71._8_4_ = auVar51._12_4_;
            auVar71._12_4_ = fVar81;
            pfVar1 = (float *)(lVar20 + uVar26 * 4);
            *pfVar1 = fVar31;
            pfVar1[1] = auVar101._0_4_;
            pfVar1[2] = auVar51._0_4_;
            pfVar1[3] = fVar75;
            puVar7 = (undefined8 *)(lVar20 + 0x10 + uVar26 * 4);
            *puVar7 = auVar60._8_8_;
            puVar7[1] = auVar63._8_8_;
            puVar7 = (undefined8 *)(lVar20 + 0x20 + uVar26 * 4);
            *puVar7 = auVar76._0_8_;
            puVar7[1] = auVar71._0_8_;
            auVar52._8_8_ = auVar71._8_8_;
            auVar52._0_8_ = auVar76._8_8_;
            *(undefined1 (*) [16])(lVar20 + 0x30 + uVar26 * 4) = auVar52;
          }
          else {
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + uVar26 * 4) = fVar31;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar108,1);
              *(undefined8 *)(lVar20 + 0x10 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar108,2);
              *(undefined8 *)(lVar20 + 0x20 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar108,3);
              *(undefined8 *)(lVar20 + 0x30 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + 4 + uVar26 * 4) = auVar101._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar101,1);
              *(undefined8 *)(lVar20 + 0x14 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar101,2);
              *(undefined8 *)(lVar20 + 0x24 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar101,3);
              *(undefined8 *)(lVar20 + 0x34 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              *(float *)(lVar20 + 8 + uVar26 * 4) = auVar51._0_4_;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar51,1);
              *(undefined8 *)(lVar20 + 0x18 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar51,2);
              *(undefined8 *)(lVar20 + 0x28 + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar51,3);
              *(undefined8 *)(lVar20 + 0x38 + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 1) != 0) {
              uVar8 = extractps(auVar52,3);
              *(undefined8 *)(lVar20 + 0xc + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 2) != 0) {
              uVar8 = extractps(auVar60,3);
              *(undefined8 *)(lVar20 + 0x1c + uVar26 * 4) = uVar8;
            }
            if ((bVar19 & 4) != 0) {
              uVar8 = extractps(auVar63,3);
              *(undefined8 *)(lVar20 + 0x2c + uVar26 * 4) = uVar8;
            }
            if ((char)bVar19 < '\0') {
              uVar8 = extractps(auVar71,3);
              *(undefined8 *)(lVar20 + 0x3c + uVar26 * 4) = uVar8;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      uVar26 = uVar26 + 0x10;
      unaff_RBX = unaff_RBX + 0x30;
    } while (uVar14 < (uVar27 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar14) {
      return;
    }
  }
  uVar27 = (uint)uVar14;
  bVar9 = (int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  uVar28 = -(uint)bVar9;
  bVar10 = (int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  uVar29 = -(uint)bVar10;
  bVar11 = (int)(uVar27 | _UNK_150631e08) < (int)param_9;
  uVar30 = -(uint)bVar11;
  bVar12 = (int)(uVar27 | _UNK_150631e0c) < (int)param_9;
  uVar84 = -(uint)bVar12;
  lVar20 = (longlong)(int)(param_8 + uVar27);
  uVar14 = lVar20 * 0x10;
  pauVar25 = (undefined1 (*) [16])(param_1 + uVar14);
  auVar82._4_4_ = uVar29;
  auVar82._0_4_ = uVar28;
  auVar82._8_4_ = uVar30;
  auVar82._12_4_ = uVar84;
  uVar15 = movmskps((int)unaff_RBX,auVar82);
  if (uVar15 == 0xf) {
    auVar60 = *pauVar25;
    auVar63 = pauVar25[2];
    auVar53._8_4_ = auVar60._4_4_;
    auVar53._0_8_ = auVar60._0_8_;
    auVar53._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar34._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar60._8_4_);
    auVar34._8_4_ = auVar60._12_4_;
    auVar34._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar69._0_8_ = auVar63._0_8_;
    auVar69._8_4_ = auVar63._4_4_;
    auVar69._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar68._8_8_ = auVar69._8_8_;
    auVar61._12_4_ = *(undefined4 *)pauVar25[3];
    auVar61._8_4_ = auVar63._0_4_;
    auVar78._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar63._8_4_);
    auVar78._8_4_ = auVar63._12_4_;
    auVar78._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar61._4_4_ = *(undefined4 *)pauVar25[1];
    auVar61._0_4_ = auVar60._0_4_;
    auVar68._0_8_ = auVar53._8_8_;
    auVar114._8_8_ = auVar78._0_8_;
    auVar114._0_8_ = auVar34._0_8_;
    auVar77._8_8_ = auVar78._8_8_;
    auVar77._0_8_ = auVar34._8_8_;
  }
  else {
    auVar33._0_4_ = ___xmm_00000030000000200000001000000000 & uVar28;
    auVar33._4_4_ = _UNK_150b511c4 & uVar29;
    auVar33._8_4_ = _UNK_150b511c8 & uVar30;
    auVar33._12_4_ = _UNK_150b511cc & uVar84;
    lVar18 = extractps(auVar33,1);
    lVar22 = extractps(auVar33,2);
    lVar24 = extractps(auVar33,3);
    auVar60 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar18),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar22),0x20);
    auVar61 = insertps(auVar60,*(undefined4 *)(*pauVar25 + lVar24),0x30);
    auVar60 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000034000000240000001400000004 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511d4 & uVar29)),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511d8 & uVar30)),0x20);
    auVar68 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511dc & uVar84)),0x30);
    auVar60 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_00000038000000280000001800000008 & uVar28))),
                       *(undefined4 *)(*pauVar25 + (_UNK_150b511e4 & uVar29)),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511e8 & uVar30)),0x20);
    auVar114 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511ec & uVar84)),0x30);
    uVar14 = (ulonglong)(_UNK_150b511f4 & uVar29);
    auVar60 = insertps(ZEXT416(*(uint *)(*pauVar25 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar28))),
                       *(undefined4 *)(*pauVar25 + uVar14),0x10);
    auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511f8 & uVar30)),0x20);
    auVar77 = insertps(auVar60,*(undefined4 *)(*pauVar25 + (_UNK_150b511fc & uVar84)),0x30);
  }
  fVar75 = auVar77._0_4_;
  fVar79 = auVar77._4_4_;
  fVar80 = auVar77._8_4_;
  fVar81 = auVar77._12_4_;
  auVar35._0_4_ = -(uint)(fVar75 != 0.0 && bVar9);
  auVar35._4_4_ = -(uint)(fVar79 != 0.0 && bVar10);
  auVar35._8_4_ = -(uint)(fVar80 != 0.0 && bVar11);
  auVar35._12_4_ = -(uint)(fVar81 != 0.0 && bVar12);
  iVar16 = movmskps((int)uVar14,auVar35);
  if (iVar16 != 0) {
    bVar19 = ~((char)((char)uVar15 << 4) >> 4);
    pauVar4 = (undefined1 (*) [16])(param_2 + lVar20 * 0xc);
    if ((bVar19 & 0xf) == 0) {
      auVar60 = *pauVar4;
      auVar63 = pauVar4[1];
      auVar57._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar63,auVar60,0x8c);
      auVar57._4_4_ = auVar60._12_4_;
      auVar57._8_4_ = auVar63._8_4_;
      auVar57._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar86._4_4_ = auVar63._0_4_;
      auVar86._0_4_ = auVar60._4_4_;
      auVar86._8_4_ = auVar63._12_4_;
      auVar86._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar89._0_8_ = auVar71._0_8_;
      auVar89._8_4_ = *(undefined4 *)pauVar4[2];
      auVar89._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar60 = *(undefined1 (*) [16])(param_3 + lVar20 * 0xc);
      auVar63 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar20 * 0xc);
      auVar37 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar20 * 0xc);
      auVar109._0_4_ = auVar60._0_4_;
      auVar71 = insertps(auVar63,auVar60,0x8c);
      auVar109._4_4_ = auVar60._12_4_;
      auVar109._8_4_ = auVar63._8_4_;
      auVar109._12_4_ = auVar37._4_4_;
      auVar95._4_4_ = auVar63._0_4_;
      auVar95._0_4_ = auVar60._4_4_;
      auVar95._8_4_ = auVar63._12_4_;
      auVar95._12_4_ = auVar37._8_4_;
      auVar102._0_8_ = auVar71._0_8_;
      auVar102._8_4_ = auVar37._0_4_;
      auVar102._12_4_ = auVar37._12_4_;
    }
    else {
      auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar28;
      auVar36._4_4_ = _UNK_150b50da4 & uVar29;
      auVar36._8_4_ = _UNK_150b50da8 & uVar30;
      auVar36._12_4_ = _UNK_150b50dac & uVar84;
      lVar22 = extractps(auVar36,1);
      lVar23 = extractps(auVar36,2);
      lVar24 = extractps(auVar36,3);
      auVar60 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar22),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar4 + lVar23),0x20);
      auVar57 = insertps(auVar60,*(undefined4 *)(*pauVar4 + lVar24),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_000000280000001c0000001000000004 & uVar28))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50db4 & uVar29)),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar4 + (_UNK_150b50db8 & uVar30)),0x20);
      auVar86 = insertps(auVar60,*(undefined4 *)(*pauVar4 + (_UNK_150b50dbc & uVar84)),0x30);
      auVar37._4_4_ = uVar29;
      auVar37._0_4_ = uVar28;
      auVar37._8_4_ = uVar30;
      auVar37._12_4_ = uVar84;
      auVar37 = ___xmm_0000002c000000200000001400000008 & auVar37;
      auVar60 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar37._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar37._4_4_),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(*pauVar4 + auVar37._8_4_),0x20);
      auVar89 = insertps(auVar60,*(undefined4 *)(*pauVar4 + auVar37._12_4_),0x30);
      lVar18 = param_3 + lVar20 * 0xc;
      auVar60 = insertps(ZEXT416(*(uint *)(param_3 + lVar20 * 0xc)),*(undefined4 *)(lVar22 + lVar18)
                         ,0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)(lVar23 + lVar18),0x20);
      auVar109 = insertps(auVar60,*(undefined4 *)(lVar24 + lVar18),0x30);
      auVar60 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar28) +
                                          lVar18)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar29) + lVar18),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar30) + lVar18),0x20
                        );
      auVar95 = insertps(auVar60,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar84) + lVar18),0x30
                        );
      auVar60 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar18)),
                         *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar18),0x10);
      auVar60 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar18),0x20);
      auVar102 = insertps(auVar60,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar18),0x30);
    }
    iVar16 = uVar27 << 2;
    if ((bVar19 & 9) == 0) {
      auVar37 = *(undefined1 (*) [16])(param_4 + iVar16);
    }
    else {
      puVar21 = (uint *)(param_4 + iVar16);
      if ((uVar15 & 1) != 0) {
        auVar37 = ZEXT416(*puVar21);
      }
      if ((uVar15 & 2) != 0) {
        auVar37 = insertps(auVar37,puVar21[1],0x10);
      }
      if ((uVar15 & 4) != 0) {
        auVar37 = insertps(auVar37,puVar21[2],0x20);
      }
      if ((uVar15 & 8) != 0) {
        auVar37 = insertps(auVar37,puVar21[3],0x30);
      }
    }
    fVar88 = param_6 + param_7 * auVar37._0_4_;
    fVar91 = param_6 + param_7 * auVar37._4_4_;
    auVar115._4_4_ = fVar91;
    auVar115._0_4_ = fVar88;
    fVar92 = param_6 + param_7 * auVar37._8_4_;
    param_6 = param_6 + param_7 * auVar37._12_4_;
    fVar31 = param_5 + fVar88;
    fVar41 = param_5 + fVar91;
    fVar42 = param_5 + fVar92;
    fVar43 = param_5 + param_6;
    fVar93 = auVar57._0_4_ - auVar109._0_4_ * fVar31;
    fVar94 = auVar57._4_4_ - auVar109._4_4_ * fVar41;
    fVar96 = auVar57._8_4_ - auVar109._8_4_ * fVar42;
    fVar97 = auVar57._12_4_ - auVar109._12_4_ * fVar43;
    fVar46 = auVar86._0_4_ - auVar95._0_4_ * fVar31;
    fVar47 = auVar86._4_4_ - auVar95._4_4_ * fVar41;
    fVar48 = auVar86._8_4_ - auVar95._8_4_ * fVar42;
    fVar49 = auVar86._12_4_ - auVar95._12_4_ * fVar43;
    fVar31 = auVar89._0_4_ - fVar31 * auVar102._0_4_;
    fVar41 = auVar89._4_4_ - fVar41 * auVar102._4_4_;
    fVar42 = auVar89._8_4_ - fVar42 * auVar102._8_4_;
    fVar43 = auVar89._12_4_ - fVar43 * auVar102._12_4_;
    fVar59 = auVar61._0_4_ - fVar93;
    fVar64 = auVar61._4_4_ - fVar94;
    fVar65 = auVar61._8_4_ - fVar96;
    fVar66 = auVar61._12_4_ - fVar97;
    fVar67 = auVar68._0_4_ - fVar46;
    fVar72 = auVar68._4_4_ - fVar47;
    fVar73 = auVar68._8_4_ - fVar48;
    fVar74 = auVar68._12_4_ - fVar49;
    fVar98 = auVar114._0_4_ - fVar31;
    fVar103 = auVar114._4_4_ - fVar41;
    fVar105 = auVar114._8_4_ - fVar42;
    fVar110 = auVar114._12_4_ - fVar43;
    auVar54._0_4_ = fVar67 * fVar67 + fVar59 * fVar59;
    auVar54._4_4_ = fVar72 * fVar72 + fVar64 * fVar64;
    auVar54._8_4_ = fVar73 * fVar73 + fVar65 * fVar65;
    auVar54._12_4_ = fVar74 * fVar74 + fVar66 * fVar66;
    auVar38._0_4_ = fVar98 * fVar98 + auVar54._0_4_;
    auVar38._4_4_ = fVar103 * fVar103 + auVar54._4_4_;
    auVar38._8_4_ = fVar105 * fVar105 + auVar54._8_4_;
    auVar38._12_4_ = fVar110 * fVar110 + auVar54._12_4_;
    auVar60 = sqrtps(auVar54,auVar38);
    auVar115._8_4_ = fVar92;
    auVar115._12_4_ = param_6;
    auVar60 = divps(auVar115,auVar60);
    fVar99 = auVar60._0_4_;
    fVar104 = auVar60._4_4_;
    fVar106 = auVar60._8_4_;
    fVar111 = auVar60._12_4_;
    auVar58._0_4_ = auVar57._0_4_ - auVar109._0_4_ * param_5;
    auVar58._4_4_ = auVar57._4_4_ - auVar109._4_4_ * param_5;
    auVar58._8_4_ = auVar57._8_4_ - auVar109._8_4_ * param_5;
    auVar58._12_4_ = auVar57._12_4_ - auVar109._12_4_ * param_5;
    uVar27 = -(uint)(auVar38._0_4_ < fVar88 * fVar88);
    uVar15 = -(uint)(auVar38._4_4_ < fVar91 * fVar91);
    uVar28 = -(uint)(auVar38._8_4_ < fVar92 * fVar92);
    uVar29 = -(uint)(auVar38._12_4_ < param_6 * param_6);
    auVar39._4_4_ = -(uint)(auVar38._4_4_ < _UNK_1506895d4);
    auVar39._0_4_ = -(uint)(auVar38._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar39._8_4_ = -(uint)(auVar38._8_4_ < _UNK_1506895d8);
    auVar39._12_4_ = -(uint)(auVar38._12_4_ < _UNK_1506895dc);
    auVar62._0_4_ = (uint)(fVar59 * fVar99 + fVar93) & uVar27;
    auVar62._4_4_ = (uint)(fVar64 * fVar104 + fVar94) & uVar15;
    auVar62._8_4_ = (uint)(fVar65 * fVar106 + fVar96) & uVar28;
    auVar62._12_4_ = (uint)(fVar66 * fVar111 + fVar97) & uVar29;
    auVar63 = blendvps(auVar62,auVar58,auVar39);
    auVar87._0_4_ = auVar86._0_4_ - auVar95._0_4_ * param_5;
    auVar87._4_4_ = auVar86._4_4_ - auVar95._4_4_ * param_5;
    auVar87._8_4_ = auVar86._8_4_ - auVar95._8_4_ * param_5;
    auVar87._12_4_ = auVar86._12_4_ - auVar95._12_4_ * param_5;
    auVar70._0_4_ = (uint)(fVar67 * fVar99 + fVar46) & uVar27;
    auVar70._4_4_ = (uint)(fVar72 * fVar104 + fVar47) & uVar15;
    auVar70._8_4_ = (uint)(fVar73 * fVar106 + fVar48) & uVar28;
    auVar70._12_4_ = (uint)(fVar74 * fVar111 + fVar49) & uVar29;
    auVar71 = blendvps(auVar70,auVar87,auVar39);
    auVar90._0_4_ = auVar89._0_4_ - param_5 * auVar102._0_4_;
    auVar90._4_4_ = auVar89._4_4_ - param_5 * auVar102._4_4_;
    auVar90._8_4_ = auVar89._8_4_ - param_5 * auVar102._8_4_;
    auVar90._12_4_ = auVar89._12_4_ - param_5 * auVar102._12_4_;
    auVar55._0_4_ = uVar27 & (uint)(fVar99 * fVar98 + fVar31);
    auVar55._4_4_ = uVar15 & (uint)(fVar104 * fVar103 + fVar41);
    auVar55._8_4_ = uVar28 & (uint)(fVar106 * fVar105 + fVar42);
    auVar55._12_4_ = uVar29 & (uint)(fVar111 * fVar110 + fVar43);
    auVar60 = blendvps(auVar55,auVar90,auVar39);
    fVar31 = auVar63._0_4_;
    auVar44._0_4_ = -(uint)((fVar75 != 0.0 && bVar9) && fVar31 != 0.0);
    auVar44._4_4_ = -(uint)((fVar79 != 0.0 && bVar10) && auVar63._4_4_ != 0.0);
    auVar44._8_4_ = -(uint)((fVar80 != 0.0 && bVar11) && auVar63._8_4_ != 0.0);
    auVar44._12_4_ = -(uint)((fVar81 != 0.0 && bVar12) && auVar63._12_4_ != 0.0);
    iVar16 = movmskps(iVar16,auVar44);
    if (iVar16 != 0) {
      bVar19 = (char)((char)iVar16 << 4) >> 4;
      if ((~bVar19 & 0xf) == 0) {
        auVar40._0_8_ = auVar63._0_8_;
        auVar40._8_4_ = auVar63._4_4_;
        auVar40._12_4_ = auVar71._4_4_;
        auVar45._0_8_ = auVar60._0_8_;
        auVar45._8_4_ = auVar60._4_4_;
        auVar45._12_4_ = fVar79;
        *(float *)*pauVar25 = fVar31;
        *(int *)(*pauVar25 + 4) = auVar71._0_4_;
        *(int *)(*pauVar25 + 8) = auVar60._0_4_;
        *(float *)(*pauVar25 + 0xc) = fVar75;
        *(longlong *)pauVar25[1] = auVar40._8_8_;
        *(longlong *)(pauVar25[1] + 8) = auVar45._8_8_;
        *(float *)pauVar25[2] = auVar63._8_4_;
        *(int *)(pauVar25[2] + 4) = auVar71._8_4_;
        *(int *)(pauVar25[2] + 8) = auVar60._8_4_;
        *(float *)(pauVar25[2] + 0xc) = fVar80;
        *(float *)pauVar25[3] = auVar63._12_4_;
        *(int *)(pauVar25[3] + 4) = auVar71._12_4_;
        *(int *)(pauVar25[3] + 8) = auVar60._12_4_;
        *(float *)(pauVar25[3] + 0xc) = fVar81;
      }
      else {
        if ((bVar19 & 1) != 0) {
          *(float *)*pauVar25 = fVar31;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar63,1);
          *(undefined8 *)pauVar25[1] = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar63,2);
          *(undefined8 *)pauVar25[2] = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar63,3);
          *(undefined8 *)pauVar25[3] = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 4) = auVar71._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar71,1);
          *(undefined8 *)(pauVar25[1] + 4) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar71,2);
          *(undefined8 *)(pauVar25[2] + 4) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar71,3);
          *(undefined8 *)(pauVar25[3] + 4) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(int *)(*pauVar25 + 8) = auVar60._0_4_;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar60,1);
          *(undefined8 *)(pauVar25[1] + 8) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar60,2);
          *(undefined8 *)(pauVar25[2] + 8) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar60,3);
          *(undefined8 *)(pauVar25[3] + 8) = uVar8;
        }
        if ((bVar19 & 1) != 0) {
          *(float *)(*pauVar25 + 0xc) = fVar75;
        }
        if ((bVar19 & 2) != 0) {
          uVar8 = extractps(auVar77,1);
          *(undefined8 *)(pauVar25[1] + 0xc) = uVar8;
        }
        if ((bVar19 & 4) != 0) {
          uVar8 = extractps(auVar77,2);
          *(undefined8 *)(pauVar25[2] + 0xc) = uVar8;
        }
        if ((char)bVar19 < '\0') {
          uVar8 = extractps(auVar77,3);
          *(undefined8 *)(pauVar25[3] + 0xc) = uVar8;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithoutMaps_sse4 @ 140357490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithoutMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
               int param_6,uint param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  byte bVar9;
  undefined4 unaff_EBX;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar81;
  undefined1 auVar77 [16];
  float fVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  float fVar93;
  float fVar94;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  
  uVar20 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar20 = param_7;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar14 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar34 = param_4 + param_5;
    fVar24 = param_5 * param_5;
    pauVar16 = (undefined1 (*) [16])((longlong)param_6 * 0x10 + param_1);
    lVar12 = (longlong)param_6 * 0xc + 0x20;
    uVar14 = 0;
    do {
      fVar57 = *(float *)(*pauVar16 + 0xc);
      auVar30 = *pauVar16;
      fVar25 = *(float *)(pauVar16[1] + 0xc);
      auVar80 = pauVar16[1];
      auVar44 = pauVar16[2];
      fVar56 = auVar44._12_4_;
      fVar47 = *(float *)(pauVar16[3] + 0xc);
      auVar97 = pauVar16[3];
      auVar36._4_4_ = -(uint)(fVar25 != 0.0);
      auVar36._0_4_ = -(uint)(fVar57 != 0.0);
      auVar36._8_4_ = -(uint)(fVar56 != 0.0);
      auVar36._12_4_ = -(uint)(fVar47 != 0.0);
      iVar10 = movmskps(unaff_EBX,auVar36);
      unaff_EBX = 0;
      if (iVar10 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar12);
        auVar26 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar12);
        pfVar8 = (float *)(param_2 + lVar12);
        auVar42 = insertps(auVar26,auVar36,0x8c);
        auVar35 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar12);
        auVar43 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar12);
        pfVar1 = (float *)(param_3 + lVar12);
        auVar48 = insertps(auVar43,auVar35,0x8c);
        fVar58 = auVar36._0_4_ - fVar34 * auVar35._0_4_;
        fVar59 = auVar36._12_4_ - fVar34 * auVar35._12_4_;
        fVar60 = auVar26._8_4_ - fVar34 * auVar43._8_4_;
        fVar61 = pfVar8[1] - fVar34 * pfVar1[1];
        fVar71 = auVar36._4_4_ - fVar34 * auVar35._4_4_;
        fVar74 = auVar26._0_4_ - fVar34 * auVar43._0_4_;
        fVar75 = auVar26._12_4_ - fVar34 * auVar43._12_4_;
        fVar76 = pfVar8[2] - fVar34 * pfVar1[2];
        fVar65 = auVar42._0_4_ - fVar34 * auVar48._0_4_;
        fVar68 = auVar42._4_4_ - fVar34 * auVar48._4_4_;
        fVar69 = *pfVar8 - fVar34 * *pfVar1;
        fVar70 = pfVar8[3] - fVar34 * pfVar1[3];
        fVar94 = *(float *)*pauVar16 - fVar58;
        fVar99 = *(float *)pauVar16[1] - fVar59;
        fVar100 = auVar44._0_4_ - fVar60;
        fVar101 = *(float *)pauVar16[3] - fVar61;
        fVar87 = *(float *)(*pauVar16 + 4) - fVar71;
        fVar89 = *(float *)(pauVar16[1] + 4) - fVar74;
        fVar90 = auVar44._4_4_ - fVar75;
        fVar92 = *(float *)(pauVar16[3] + 4) - fVar76;
        fVar83 = *(float *)(*pauVar16 + 8) - fVar65;
        fVar84 = *(float *)(pauVar16[1] + 8) - fVar68;
        fVar85 = auVar44._8_4_ - fVar69;
        fVar86 = *(float *)(pauVar16[3] + 8) - fVar70;
        auVar96._0_4_ = fVar83 * fVar83 + fVar87 * fVar87 + fVar94 * fVar94;
        auVar96._4_4_ = fVar84 * fVar84 + fVar89 * fVar89 + fVar99 * fVar99;
        auVar96._8_4_ = fVar85 * fVar85 + fVar90 * fVar90 + fVar100 * fVar100;
        auVar96._12_4_ = fVar86 * fVar86 + fVar92 * fVar92 + fVar101 * fVar101;
        auVar41 = sqrtps(auVar44,auVar96);
        auVar77._4_4_ = param_5;
        auVar77._0_4_ = param_5;
        auVar77._8_4_ = param_5;
        auVar77._12_4_ = param_5;
        auVar77 = divps(auVar77,auVar41);
        fVar91 = auVar77._0_4_;
        fVar93 = auVar77._4_4_;
        fVar81 = auVar77._8_4_;
        fVar82 = auVar77._12_4_;
        auVar62._0_4_ = auVar36._0_4_ - auVar35._0_4_ * param_4;
        auVar62._4_4_ = auVar36._12_4_ - auVar35._12_4_ * param_4;
        auVar62._8_4_ = auVar26._8_4_ - auVar43._8_4_ * param_4;
        auVar62._12_4_ = pfVar8[1] - pfVar1[1] * param_4;
        uVar19 = -(uint)(auVar96._0_4_ < fVar24);
        uVar21 = -(uint)(auVar96._4_4_ < fVar24);
        uVar22 = -(uint)(auVar96._8_4_ < fVar24);
        uVar23 = -(uint)(auVar96._12_4_ < fVar24);
        auVar95._0_4_ = (uint)(fVar94 * fVar91 + fVar58) & uVar19;
        auVar95._4_4_ = (uint)(fVar99 * fVar93 + fVar59) & uVar21;
        auVar95._8_4_ = (uint)(fVar100 * fVar81 + fVar60) & uVar22;
        auVar95._12_4_ = (uint)(fVar101 * fVar82 + fVar61) & uVar23;
        auVar41._4_4_ = -(uint)(auVar96._4_4_ < _UNK_1506895d4);
        auVar41._0_4_ = -(uint)(auVar96._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
        auVar41._8_4_ = -(uint)(auVar96._8_4_ < _UNK_1506895d8);
        auVar41._12_4_ = -(uint)(auVar96._12_4_ < _UNK_1506895dc);
        auVar96 = blendvps(auVar95,auVar62,auVar41);
        auVar52._0_4_ = auVar36._4_4_ - auVar35._4_4_ * param_4;
        auVar52._4_4_ = auVar26._0_4_ - auVar43._0_4_ * param_4;
        auVar52._8_4_ = auVar26._12_4_ - auVar43._12_4_ * param_4;
        auVar52._12_4_ = pfVar8[2] - pfVar1[2] * param_4;
        auVar88._0_4_ = (uint)(fVar87 * fVar91 + fVar71) & uVar19;
        auVar88._4_4_ = (uint)(fVar89 * fVar93 + fVar74) & uVar21;
        auVar88._8_4_ = (uint)(fVar90 * fVar81 + fVar75) & uVar22;
        auVar88._12_4_ = (uint)(fVar92 * fVar82 + fVar76) & uVar23;
        auVar77 = blendvps(auVar88,auVar52,auVar41);
        auVar43._0_4_ = auVar42._0_4_ - auVar48._0_4_ * param_4;
        auVar43._4_4_ = auVar42._4_4_ - auVar48._4_4_ * param_4;
        auVar43._8_4_ = *pfVar8 - *pfVar1 * param_4;
        auVar43._12_4_ = pfVar8[3] - pfVar1[3] * param_4;
        auVar35._0_4_ = uVar19 & (uint)(fVar91 * fVar83 + fVar65);
        auVar35._4_4_ = uVar21 & (uint)(fVar93 * fVar84 + fVar68);
        auVar35._8_4_ = uVar22 & (uint)(fVar81 * fVar85 + fVar69);
        auVar35._12_4_ = uVar23 & (uint)(fVar82 * fVar86 + fVar70);
        auVar36 = blendvps(auVar35,auVar43,auVar41);
        fVar58 = auVar96._0_4_;
        auVar26._0_4_ = -(uint)(fVar58 != 0.0 && fVar57 != 0.0);
        auVar26._4_4_ = -(uint)(auVar96._4_4_ != 0.0 && fVar25 != 0.0);
        auVar26._8_4_ = -(uint)(auVar96._8_4_ != 0.0 && fVar56 != 0.0);
        auVar26._12_4_ = -(uint)(auVar96._12_4_ != 0.0 && fVar47 != 0.0);
        iVar10 = movmskps(iVar10,auVar26);
        unaff_EBX = 0;
        if (iVar10 != 0) {
          bVar9 = (char)((char)iVar10 << 4) >> 4;
          unaff_EBX = CONCAT31((int3)((uint)iVar10 >> 8),bVar9);
          if ((~bVar9 & 0xf) == 0) {
            auVar44._0_8_ = auVar96._0_8_;
            auVar44._8_4_ = auVar96._4_4_;
            auVar44._12_4_ = auVar77._4_4_;
            auVar80._0_8_ = auVar36._0_8_;
            auVar80._8_4_ = auVar36._4_4_;
            auVar80._12_4_ = fVar25;
            auVar97._0_8_ = CONCAT44(auVar77._8_4_,auVar96._8_4_);
            auVar97._8_4_ = auVar96._12_4_;
            auVar97._12_4_ = auVar77._12_4_;
            *(ulonglong *)*pauVar16 = CONCAT44(auVar77._0_4_,fVar58);
            *(ulonglong *)(*pauVar16 + 8) = CONCAT44(fVar57,auVar36._0_4_);
            *(longlong *)pauVar16[1] = auVar44._8_8_;
            *(longlong *)(pauVar16[1] + 8) = auVar80._8_8_;
            *(undefined8 *)pauVar16[2] = auVar97._0_8_;
            *(int *)(pauVar16[2] + 8) = auVar36._8_4_;
            *(float *)(pauVar16[2] + 0xc) = fVar56;
            *(longlong *)pauVar16[3] = auVar97._8_8_;
            *(int *)(pauVar16[3] + 8) = auVar36._12_4_;
            *(float *)(pauVar16[3] + 0xc) = fVar47;
          }
          else {
            if ((bVar9 & 1) != 0) {
              *(float *)*pauVar16 = fVar58;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar96,1);
              *(undefined8 *)pauVar16[1] = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar96,2);
              *(undefined8 *)pauVar16[2] = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar96,3);
              *(undefined8 *)pauVar16[3] = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 4) = auVar77._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar77,1);
              *(undefined8 *)(pauVar16[1] + 4) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar77,2);
              *(undefined8 *)(pauVar16[2] + 4) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar77,3);
              *(undefined8 *)(pauVar16[3] + 4) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              *(int *)(*pauVar16 + 8) = auVar36._0_4_;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar36,1);
              *(undefined8 *)(pauVar16[1] + 8) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar36,2);
              *(undefined8 *)(pauVar16[2] + 8) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar36,3);
              *(undefined8 *)(pauVar16[3] + 8) = uVar3;
            }
            if ((bVar9 & 1) != 0) {
              uVar3 = extractps(auVar30,3);
              *(undefined8 *)(*pauVar16 + 0xc) = uVar3;
            }
            if ((bVar9 & 2) != 0) {
              uVar3 = extractps(auVar80,3);
              *(undefined8 *)(pauVar16[1] + 0xc) = uVar3;
            }
            if ((bVar9 & 4) != 0) {
              uVar3 = extractps(auVar44,3);
              *(undefined8 *)(pauVar16[2] + 0xc) = uVar3;
            }
            if ((char)bVar9 < '\0') {
              uVar3 = extractps(auVar97,3);
              *(undefined8 *)(pauVar16[3] + 0xc) = uVar3;
            }
          }
        }
      }
      uVar14 = uVar14 + 4;
      pauVar16 = pauVar16 + 4;
      lVar12 = lVar12 + 0x30;
    } while (uVar14 < (uVar20 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar14) {
      return;
    }
  }
  uVar20 = (uint)uVar14;
  bVar4 = (int)(uVar20 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar30._0_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar20 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar30._4_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar20 | _UNK_150631e08) < (int)param_7;
  auVar30._8_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar20 | _UNK_150631e0c) < (int)param_7;
  auVar30._12_4_ = -(uint)bVar7;
  param_6 = param_6 + uVar20;
  lVar12 = (longlong)param_6;
  pfVar8 = (float *)(param_1 + lVar12 * 0x10);
  iVar10 = movmskps((int)(lVar12 * 0x10),auVar30);
  if (iVar10 == 0xf) {
    auVar44 = *(undefined1 (*) [16])(pfVar8 + 8);
    auVar42._0_8_ = CONCAT44(pfVar8[6],pfVar8[2]);
    auVar42._8_4_ = pfVar8[3];
    auVar42._12_4_ = pfVar8[7];
    auVar50._0_8_ = auVar44._0_8_;
    auVar50._8_4_ = auVar44._4_4_;
    auVar50._12_4_ = pfVar8[0xd];
    auVar49._8_8_ = auVar50._8_8_;
    auVar45._12_4_ = pfVar8[0xc];
    auVar45._8_4_ = auVar44._0_4_;
    auVar54._0_8_ = CONCAT44(pfVar8[0xe],auVar44._8_4_);
    auVar54._8_4_ = auVar44._12_4_;
    auVar54._12_4_ = pfVar8[0xf];
    auVar45._4_4_ = pfVar8[4];
    auVar45._0_4_ = *pfVar8;
    auVar49._4_4_ = pfVar8[5];
    auVar49._0_4_ = pfVar8[1];
    auVar48._8_8_ = auVar54._0_8_;
    auVar48._0_8_ = auVar42._0_8_;
    auVar53._8_8_ = auVar54._8_8_;
    auVar53._0_8_ = auVar42._8_8_;
  }
  else {
    auVar27._0_4_ = ___xmm_00000030000000200000001000000000 & auVar30._0_4_;
    auVar27._4_4_ = _UNK_150b511c4 & auVar30._4_4_;
    auVar27._8_4_ = _UNK_150b511c8 & auVar30._8_4_;
    auVar27._12_4_ = _UNK_150b511cc & auVar30._12_4_;
    lVar15 = extractps(auVar27,1);
    lVar17 = extractps(auVar27,2);
    lVar11 = extractps(auVar27,3);
    auVar44 = insertps(ZEXT416((uint)*pfVar8),*(undefined4 *)((longlong)pfVar8 + lVar15),0x10);
    auVar44 = insertps(auVar44,*(undefined4 *)((longlong)pfVar8 + lVar17),0x20);
    auVar45 = insertps(auVar44,*(undefined4 *)((longlong)pfVar8 + lVar11),0x30);
    auVar44 = ___xmm_00000034000000240000001400000004 & auVar30;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar44._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._4_4_),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._8_4_),0x20);
    auVar49 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._12_4_),0x30);
    auVar44 = ___xmm_00000038000000280000001800000008 & auVar30;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar44._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._4_4_),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._8_4_),0x20);
    auVar48 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._12_4_),0x30);
    auVar44 = ___xmm_0000003c0000002c0000001c0000000c & auVar30;
    uVar20 = auVar44._4_4_;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)pfVar8 + (ulonglong)auVar44._0_4_)),
                       *(undefined4 *)((longlong)pfVar8 + (ulonglong)uVar20),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._8_4_),0x20);
    auVar53 = insertps(auVar36,*(undefined4 *)((longlong)pfVar8 + (ulonglong)auVar44._12_4_),0x30);
  }
  fVar24 = auVar53._0_4_;
  fVar34 = auVar53._4_4_;
  fVar56 = auVar53._8_4_;
  fVar57 = auVar53._12_4_;
  auVar28._0_4_ = -(uint)(fVar24 != 0.0 && bVar4);
  auVar28._4_4_ = -(uint)(fVar34 != 0.0 && bVar5);
  auVar28._8_4_ = -(uint)(fVar56 != 0.0 && bVar6);
  auVar28._12_4_ = -(uint)(fVar57 != 0.0 && bVar7);
  iVar13 = movmskps(uVar20,auVar28);
  if (iVar13 != 0) {
    pauVar16 = (undefined1 (*) [16])(param_2 + lVar12 * 0xc);
    if ((~((char)((char)iVar10 << 4) >> 4) & 0xfU) == 0) {
      auVar44 = *pauVar16;
      auVar36 = pauVar16[1];
      auVar63._0_4_ = auVar44._0_4_;
      auVar80 = insertps(auVar36,auVar44,0x8c);
      auVar63._4_4_ = auVar44._12_4_;
      auVar63._8_4_ = auVar36._8_4_;
      auVar63._12_4_ = *(undefined4 *)(pauVar16[2] + 4);
      auVar66._4_4_ = auVar36._0_4_;
      auVar66._0_4_ = auVar44._4_4_;
      auVar66._8_4_ = auVar36._12_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar16[2] + 8);
      auVar72._0_8_ = auVar80._0_8_;
      auVar72._8_4_ = *(undefined4 *)pauVar16[2];
      auVar72._12_4_ = *(undefined4 *)(pauVar16[2] + 0xc);
      auVar44 = *(undefined1 (*) [16])(param_3 + lVar12 * 0xc);
      auVar36 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar12 * 0xc);
      puVar2 = (undefined4 *)(param_3 + 0x20 + lVar12 * 0xc);
      auVar78._0_4_ = auVar44._0_4_;
      auVar80 = insertps(auVar36,auVar44,0x8c);
      auVar78._4_4_ = auVar44._12_4_;
      auVar78._8_4_ = auVar36._8_4_;
      auVar78._12_4_ = puVar2[1];
      auVar37._4_4_ = auVar36._0_4_;
      auVar37._0_4_ = auVar44._4_4_;
      auVar37._8_4_ = auVar36._12_4_;
      auVar37._12_4_ = puVar2[2];
      auVar55._0_8_ = auVar80._0_8_;
      auVar55._8_4_ = *puVar2;
      auVar55._12_4_ = puVar2[3];
    }
    else {
      auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar30._0_4_;
      auVar29._4_4_ = _UNK_150b50da4 & auVar30._4_4_;
      auVar29._8_4_ = _UNK_150b50da8 & auVar30._8_4_;
      auVar29._12_4_ = _UNK_150b50dac & auVar30._12_4_;
      lVar15 = extractps(auVar29,1);
      lVar17 = extractps(auVar29,2);
      lVar18 = extractps(auVar29,3);
      auVar44 = insertps(ZEXT416(*(uint *)*pauVar16),*(undefined4 *)(*pauVar16 + lVar15),0x10);
      auVar44 = insertps(auVar44,*(undefined4 *)(*pauVar16 + lVar17),0x20);
      auVar63 = insertps(auVar44,*(undefined4 *)(*pauVar16 + lVar18),0x30);
      auVar44 = ___xmm_000000280000001c0000001000000004 & auVar30;
      auVar36 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar44._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar44._4_4_),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar44._8_4_),0x20);
      auVar66 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar44._12_4_),0x30);
      auVar30 = ___xmm_0000002c000000200000001400000008 & auVar30;
      auVar36 = insertps(ZEXT416(*(uint *)(*pauVar16 + auVar30._0_4_)),
                         *(undefined4 *)(*pauVar16 + auVar30._4_4_),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar30._8_4_),0x20);
      auVar72 = insertps(auVar36,*(undefined4 *)(*pauVar16 + auVar30._12_4_),0x30);
      lVar11 = param_3 + lVar12 * 0xc;
      auVar36 = insertps(ZEXT416(*(uint *)(param_3 + lVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar11)
                         ,0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)(lVar17 + lVar11),0x20);
      auVar78 = insertps(auVar36,*(undefined4 *)(lVar18 + lVar11),0x30);
      auVar36 = insertps(ZEXT416(*(uint *)((ulonglong)auVar44._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar44._4_4_ + lVar11),0x10);
      auVar36 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar44._8_4_ + lVar11),0x20);
      auVar37 = insertps(auVar36,*(undefined4 *)((ulonglong)auVar44._12_4_ + lVar11),0x30);
      auVar44 = insertps(ZEXT416(*(uint *)((ulonglong)auVar30._0_4_ + lVar11)),
                         *(undefined4 *)((ulonglong)auVar30._4_4_ + lVar11),0x10);
      auVar44 = insertps(auVar44,*(undefined4 *)((ulonglong)auVar30._8_4_ + lVar11),0x20);
      auVar55 = insertps(auVar44,*(undefined4 *)((ulonglong)auVar30._12_4_ + lVar11),0x30);
    }
    fVar25 = param_4 + param_5;
    fVar85 = auVar63._0_4_ - fVar25 * auVar78._0_4_;
    fVar86 = auVar63._4_4_ - fVar25 * auVar78._4_4_;
    fVar87 = auVar63._8_4_ - fVar25 * auVar78._8_4_;
    fVar89 = auVar63._12_4_ - fVar25 * auVar78._12_4_;
    fVar75 = auVar66._0_4_ - fVar25 * auVar37._0_4_;
    fVar76 = auVar66._4_4_ - fVar25 * auVar37._4_4_;
    fVar91 = auVar66._8_4_ - fVar25 * auVar37._8_4_;
    fVar93 = auVar66._12_4_ - fVar25 * auVar37._12_4_;
    fVar69 = auVar72._0_4_ - fVar25 * auVar55._0_4_;
    fVar70 = auVar72._4_4_ - fVar25 * auVar55._4_4_;
    fVar71 = auVar72._8_4_ - fVar25 * auVar55._8_4_;
    fVar74 = auVar72._12_4_ - fVar25 * auVar55._12_4_;
    fVar25 = auVar45._0_4_ - fVar85;
    fVar47 = auVar45._4_4_ - fVar86;
    fVar58 = auVar45._8_4_ - fVar87;
    fVar59 = auVar45._12_4_ - fVar89;
    fVar60 = auVar49._0_4_ - fVar75;
    fVar61 = auVar49._4_4_ - fVar76;
    fVar65 = auVar49._8_4_ - fVar91;
    fVar68 = auVar49._12_4_ - fVar93;
    auVar40._0_4_ = auVar48._0_4_ - fVar69;
    auVar40._4_4_ = auVar48._4_4_ - fVar70;
    auVar40._8_4_ = auVar48._8_4_ - fVar71;
    auVar40._12_4_ = auVar48._12_4_ - fVar74;
    auVar31._0_4_ = auVar40._0_4_ * auVar40._0_4_ + fVar60 * fVar60 + fVar25 * fVar25;
    auVar31._4_4_ = auVar40._4_4_ * auVar40._4_4_ + fVar61 * fVar61 + fVar47 * fVar47;
    auVar31._8_4_ = auVar40._8_4_ * auVar40._8_4_ + fVar65 * fVar65 + fVar58 * fVar58;
    auVar31._12_4_ = auVar40._12_4_ * auVar40._12_4_ + fVar68 * fVar68 + fVar59 * fVar59;
    auVar98._4_4_ = param_5;
    auVar98._0_4_ = param_5;
    auVar98._8_4_ = param_5;
    auVar98._12_4_ = param_5;
    auVar44 = sqrtps(auVar40,auVar31);
    auVar44 = divps(auVar98,auVar44);
    fVar81 = auVar44._0_4_;
    fVar82 = auVar44._4_4_;
    fVar83 = auVar44._8_4_;
    fVar84 = auVar44._12_4_;
    auVar64._0_4_ = auVar63._0_4_ - auVar78._0_4_ * param_4;
    auVar64._4_4_ = auVar63._4_4_ - auVar78._4_4_ * param_4;
    auVar64._8_4_ = auVar63._8_4_ - auVar78._8_4_ * param_4;
    auVar64._12_4_ = auVar63._12_4_ - auVar78._12_4_ * param_4;
    param_5 = param_5 * param_5;
    uVar20 = -(uint)(auVar31._0_4_ < param_5);
    uVar19 = -(uint)(auVar31._4_4_ < param_5);
    uVar21 = -(uint)(auVar31._8_4_ < param_5);
    uVar22 = -(uint)(auVar31._12_4_ < param_5);
    auVar32._4_4_ = -(uint)(auVar31._4_4_ < _UNK_1506895d4);
    auVar32._0_4_ = -(uint)(auVar31._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
    auVar32._8_4_ = -(uint)(auVar31._8_4_ < _UNK_1506895d8);
    auVar32._12_4_ = -(uint)(auVar31._12_4_ < _UNK_1506895dc);
    auVar46._0_4_ = (uint)(fVar25 * fVar81 + fVar85) & uVar20;
    auVar46._4_4_ = (uint)(fVar47 * fVar82 + fVar86) & uVar19;
    auVar46._8_4_ = (uint)(fVar58 * fVar83 + fVar87) & uVar21;
    auVar46._12_4_ = (uint)(fVar59 * fVar84 + fVar89) & uVar22;
    auVar44 = blendvps(auVar46,auVar64,auVar32);
    auVar67._0_4_ = auVar66._0_4_ - auVar37._0_4_ * param_4;
    auVar67._4_4_ = auVar66._4_4_ - auVar37._4_4_ * param_4;
    auVar67._8_4_ = auVar66._8_4_ - auVar37._8_4_ * param_4;
    auVar67._12_4_ = auVar66._12_4_ - auVar37._12_4_ * param_4;
    auVar51._0_4_ = (uint)(fVar60 * fVar81 + fVar75) & uVar20;
    auVar51._4_4_ = (uint)(fVar61 * fVar82 + fVar76) & uVar19;
    auVar51._8_4_ = (uint)(fVar65 * fVar83 + fVar91) & uVar21;
    auVar51._12_4_ = (uint)(fVar68 * fVar84 + fVar93) & uVar22;
    auVar36 = blendvps(auVar51,auVar67,auVar32);
    auVar73._0_4_ = auVar72._0_4_ - param_4 * auVar55._0_4_;
    auVar73._4_4_ = auVar72._4_4_ - param_4 * auVar55._4_4_;
    auVar73._8_4_ = auVar72._8_4_ - param_4 * auVar55._8_4_;
    auVar73._12_4_ = auVar72._12_4_ - param_4 * auVar55._12_4_;
    auVar79._0_4_ = uVar20 & (uint)(fVar81 * auVar40._0_4_ + fVar69);
    auVar79._4_4_ = uVar19 & (uint)(fVar82 * auVar40._4_4_ + fVar70);
    auVar79._8_4_ = uVar21 & (uint)(fVar83 * auVar40._8_4_ + fVar71);
    auVar79._12_4_ = uVar22 & (uint)(fVar84 * auVar40._12_4_ + fVar74);
    auVar80 = blendvps(auVar79,auVar73,auVar32);
    fVar25 = auVar44._0_4_;
    auVar38._0_4_ = -(uint)((fVar24 != 0.0 && bVar4) && fVar25 != 0.0);
    auVar38._4_4_ = -(uint)((fVar34 != 0.0 && bVar5) && auVar44._4_4_ != 0.0);
    auVar38._8_4_ = -(uint)((fVar56 != 0.0 && bVar6) && auVar44._8_4_ != 0.0);
    auVar38._12_4_ = -(uint)((fVar57 != 0.0 && bVar7) && auVar44._12_4_ != 0.0);
    iVar10 = movmskps(param_6 * 3,auVar38);
    if (iVar10 != 0) {
      bVar9 = (char)((char)iVar10 << 4) >> 4;
      if ((~bVar9 & 0xf) == 0) {
        auVar33._0_8_ = auVar44._0_8_;
        auVar33._8_4_ = auVar44._4_4_;
        auVar33._12_4_ = auVar36._4_4_;
        auVar39._0_8_ = auVar80._0_8_;
        auVar39._8_4_ = auVar80._4_4_;
        auVar39._12_4_ = fVar34;
        *(ulonglong *)pfVar8 = CONCAT44(auVar36._0_4_,fVar25);
        *(ulonglong *)(pfVar8 + 2) = CONCAT44(fVar24,auVar80._0_4_);
        *(longlong *)(pfVar8 + 4) = auVar33._8_8_;
        *(longlong *)(pfVar8 + 6) = auVar39._8_8_;
        pfVar8[8] = auVar44._8_4_;
        pfVar8[9] = auVar36._8_4_;
        pfVar8[10] = auVar80._8_4_;
        pfVar8[0xb] = fVar56;
        pfVar8[0xc] = auVar44._12_4_;
        pfVar8[0xd] = auVar36._12_4_;
        pfVar8[0xe] = auVar80._12_4_;
        pfVar8[0xf] = fVar57;
      }
      else {
        if ((bVar9 & 1) != 0) {
          *pfVar8 = fVar25;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar44,1);
          *(undefined8 *)(pfVar8 + 4) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar44,2);
          *(undefined8 *)(pfVar8 + 8) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar44,3);
          *(undefined8 *)(pfVar8 + 0xc) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[1] = auVar36._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar36,1);
          *(undefined8 *)(pfVar8 + 5) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar36,2);
          *(undefined8 *)(pfVar8 + 9) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar36,3);
          *(undefined8 *)(pfVar8 + 0xd) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[2] = auVar80._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar80,1);
          *(undefined8 *)(pfVar8 + 6) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar80,2);
          *(undefined8 *)(pfVar8 + 10) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar80,3);
          *(undefined8 *)(pfVar8 + 0xe) = uVar3;
        }
        if ((bVar9 & 1) != 0) {
          pfVar8[3] = fVar24;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar53,1);
          *(undefined8 *)(pfVar8 + 7) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar53,2);
          *(undefined8 *)(pfVar8 + 0xb) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar53,3);
          *(undefined8 *)(pfVar8 + 0xf) = uVar3;
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraints_sse4 @ 140358040

void ApplySphericalBackstopConstraints_sse4(void)

{
  ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_sse4
            ();
  return;
}

