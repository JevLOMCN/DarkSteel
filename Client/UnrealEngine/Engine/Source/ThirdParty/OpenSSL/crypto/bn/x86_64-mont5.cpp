// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 19

// bn_mul_mont_gather5 @ 140e2e540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
bn_mul_mont_gather5(longlong param_1,ulonglong *param_2,undefined1 (*param_3) [16],
                   ulonglong *param_4,longlong *param_5,uint param_6,int param_7)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 *puVar42;
  ulonglong *puVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  bool bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar50;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar51 [16];
  int iVar55;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar56 [16];
  int iVar60;
  int iVar61;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  undefined1 auVar62 [16];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [280];
  
  uVar46 = (ulonglong)param_6;
  if ((param_6 & 7) != 0) {
    puVar43 = (ulonglong *)((ulonglong)(auStack_148 + uVar46 * -8) & 0xfffffffffffffc00);
    for (puVar2 = (ulonglong *)
                  ((longlong)puVar43 +
                  ((ulonglong)(&stack0xffffffffffffffd0 + -(longlong)puVar43) & 0xfffffffffffff000))
        ; puVar43 < puVar2; puVar2 = puVar2 + -0x200) {
    }
    puVar2[uVar46 + 1] = (ulonglong)register0x00000020;
    iVar34 = _UNK_140e3171c;
    iVar33 = _UNK_140e31718;
    iVar32 = _UNK_140e31714;
    iVar31 = _DAT_140e31710;
    uVar44 = (ulonglong)(puVar2 + (uVar46 - 0xb)) & 0xfffffffffffffff0;
    iVar50 = _DAT_140e31710 + _L_inc;
    iVar52 = _UNK_140e31714 + _UNK_140e31704;
    iVar53 = _UNK_140e31718 + _UNK_140e31708;
    iVar54 = _UNK_140e3171c + _UNK_140e3170c;
    bVar47 = _UNK_140e31704 == param_7;
    bVar18 = _UNK_140e31708 == param_7;
    bVar19 = _UNK_140e3170c == param_7;
    iVar55 = _DAT_140e31710 + iVar50;
    iVar57 = _UNK_140e31714 + iVar52;
    iVar58 = _UNK_140e31718 + iVar53;
    iVar59 = _UNK_140e3171c + iVar54;
    *(uint *)(uVar44 + 0x70) = -(uint)(_L_inc == param_7);
    *(uint *)(uVar44 + 0x74) = -(uint)bVar47;
    *(uint *)(uVar44 + 0x78) = -(uint)bVar18;
    *(uint *)(uVar44 + 0x7c) = -(uint)bVar19;
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0x80) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0x84) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0x88) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0x8c) = -(uint)(iVar54 == param_7);
    iVar50 = iVar31 + iVar60;
    iVar52 = iVar32 + iVar63;
    iVar53 = iVar33 + iVar65;
    iVar54 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0x90) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0x94) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 0x98) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0x9c) = -(uint)(iVar59 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    *(uint *)(uVar44 + 0xa0) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0xa4) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0xa8) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0xac) = -(uint)(iVar67 == param_7);
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0xb0) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0xb4) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0xb8) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0xbc) = -(uint)(iVar54 == param_7);
    iVar61 = iVar31 + iVar60;
    iVar64 = iVar32 + iVar63;
    iVar66 = iVar33 + iVar65;
    iVar68 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0xc0) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0xc4) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 200) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0xcc) = -(uint)(iVar59 == param_7);
    iVar50 = iVar31 + iVar61;
    iVar52 = iVar32 + iVar64;
    iVar53 = iVar33 + iVar66;
    iVar54 = iVar34 + iVar68;
    *(uint *)(uVar44 + 0xd0) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0xd4) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0xd8) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0xdc) = -(uint)(iVar67 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    *(uint *)(uVar44 + 0xe0) = -(uint)(iVar61 == param_7);
    *(uint *)(uVar44 + 0xe4) = -(uint)(iVar64 == param_7);
    *(uint *)(uVar44 + 0xe8) = -(uint)(iVar66 == param_7);
    *(uint *)(uVar44 + 0xec) = -(uint)(iVar68 == param_7);
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0xf0) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0xf4) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0xf8) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0xfc) = -(uint)(iVar54 == param_7);
    iVar61 = iVar31 + iVar60;
    iVar64 = iVar32 + iVar63;
    iVar66 = iVar33 + iVar65;
    iVar68 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0x100) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0x104) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 0x108) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0x10c) = -(uint)(iVar59 == param_7);
    iVar50 = iVar31 + iVar61;
    iVar52 = iVar32 + iVar64;
    iVar53 = iVar33 + iVar66;
    iVar54 = iVar34 + iVar68;
    *(uint *)(uVar44 + 0x110) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0x114) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0x118) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0x11c) = -(uint)(iVar67 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    auVar48._0_4_ = -(uint)(iVar50 == param_7);
    auVar48._4_4_ = -(uint)(iVar52 == param_7);
    auVar48._8_4_ = -(uint)(iVar53 == param_7);
    auVar48._12_4_ = -(uint)(iVar54 == param_7);
    *(uint *)(uVar44 + 0x120) = -(uint)(iVar61 == param_7);
    *(uint *)(uVar44 + 0x124) = -(uint)(iVar64 == param_7);
    *(uint *)(uVar44 + 0x128) = -(uint)(iVar66 == param_7);
    *(uint *)(uVar44 + 300) = -(uint)(iVar68 == param_7);
    iVar50 = iVar31 + iVar55;
    iVar52 = iVar32 + iVar57;
    iVar53 = iVar33 + iVar58;
    iVar54 = iVar34 + iVar59;
    auVar51._0_4_ = -(uint)(iVar55 == param_7);
    auVar51._4_4_ = -(uint)(iVar57 == param_7);
    auVar51._8_4_ = -(uint)(iVar58 == param_7);
    auVar51._12_4_ = -(uint)(iVar59 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x130) = auVar48;
    auVar56._0_4_ = -(uint)(iVar50 == param_7);
    auVar56._4_4_ = -(uint)(iVar52 == param_7);
    auVar56._8_4_ = -(uint)(iVar53 == param_7);
    auVar56._12_4_ = -(uint)(iVar54 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x140) = auVar51;
    auVar62._0_4_ = -(uint)(iVar31 + iVar50 == param_7);
    auVar62._4_4_ = -(uint)(iVar32 + iVar52 == param_7);
    auVar62._8_4_ = -(uint)(iVar33 + iVar53 == param_7);
    auVar62._12_4_ = -(uint)(iVar34 + iVar54 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x150) = auVar56;
    auVar49 = param_3[0xc];
    auVar3 = param_3[0xd];
    auVar4 = param_3[0xe];
    *(undefined1 (*) [16])(uVar44 + 0x160) = auVar62;
    auVar49 = auVar48 & auVar49 | auVar56 & auVar4 |
              *param_3 & *(undefined1 (*) [16])(uVar44 + 0x70) |
              param_3[2] & *(undefined1 (*) [16])(uVar44 + 0x90) |
              param_3[4] & *(undefined1 (*) [16])(uVar44 + 0xb0) |
              param_3[6] & *(undefined1 (*) [16])(uVar44 + 0xd0) |
              param_3[8] & *(undefined1 (*) [16])(uVar44 + 0xf0) |
              param_3[10] & *(undefined1 (*) [16])(uVar44 + 0x110) |
              auVar51 & auVar3 | auVar62 & param_3[0xf] |
              param_3[1] & *(undefined1 (*) [16])(uVar44 + 0x80) |
              param_3[3] & *(undefined1 (*) [16])(uVar44 + 0xa0) |
              param_3[5] & *(undefined1 (*) [16])(uVar44 + 0xc0) |
              param_3[7] & *(undefined1 (*) [16])(uVar44 + 0xe0) |
              param_3[9] & *(undefined1 (*) [16])(uVar44 + 0x100) |
              param_3[0xb] & *(undefined1 (*) [16])(uVar44 + 0x120);
    uVar37 = auVar49._0_8_ | auVar49._8_8_;
    param_3 = param_3 + 0x18;
    lVar45 = *param_5;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *param_2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar37;
    uVar35 = SUB168(auVar49 * auVar4,8);
    uVar41 = SUB168(auVar49 * auVar4,0);
    uVar39 = lVar45 * uVar41;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *param_4;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar39;
    uVar44 = param_2[1];
    uVar36 = SUB168(auVar3 * auVar11,8) + (ulonglong)CARRY8(uVar41,SUB168(auVar3 * auVar11,0));
    uVar41 = 1;
    while( true ) {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar36;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar35;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar36;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar44;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar37;
      auVar23 = auVar5 * auVar12 + auVar23;
      uVar44 = auVar23._0_8_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar44;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar44;
      uVar35 = auVar23._8_8_;
      uVar38 = uVar41 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4[uVar41];
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar39;
      if (uVar38 == uVar46) break;
      uVar44 = param_2[uVar38];
      auVar22 = auVar6 * auVar13 + auVar20 + auVar22;
      uVar36 = auVar22._8_8_;
      puVar2[uVar41 - 1] = auVar22._0_8_;
      uVar41 = uVar38;
    }
    auVar25 = auVar6 * auVar13 + auVar24 + auVar25;
    uVar44 = auVar25._8_8_;
    puVar2[uVar46 - 2] = auVar25._0_8_;
    puVar2[uVar46 - 1] = uVar44 + uVar35;
    puVar2[uVar46] = (ulonglong)CARRY8(uVar44,uVar35);
    uVar44 = 1;
    do {
      puVar43 = (ulonglong *)((ulonglong)(puVar2 + uVar46 + 0x13) & 0xfffffffffffffff0);
      uVar38 = *(ulonglong *)(param_3[-8] + 8) & puVar43[-0xf] |
               *(ulonglong *)(param_3[-6] + 8) & puVar43[-0xb] |
               *(ulonglong *)(param_3[-4] + 8) & puVar43[-7] |
               *(ulonglong *)(param_3[-2] + 8) & puVar43[-3] |
               *(ulonglong *)(*param_3 + 8) & puVar43[1] |
               *(ulonglong *)(param_3[2] + 8) & puVar43[5] |
               *(ulonglong *)(param_3[4] + 8) & puVar43[9] |
               *(ulonglong *)(param_3[6] + 8) & puVar43[0xd] |
               *(ulonglong *)(param_3[-7] + 8) & puVar43[-0xd] |
               *(ulonglong *)(param_3[-5] + 8) & puVar43[-9] |
               *(ulonglong *)(param_3[-3] + 8) & puVar43[-5] |
               *(ulonglong *)(param_3[-1] + 8) & puVar43[-1] |
               *(ulonglong *)(param_3[1] + 8) & puVar43[3] |
               *(ulonglong *)(param_3[3] + 8) & puVar43[7] |
               *(ulonglong *)(param_3[5] + 8) & puVar43[0xb] |
               *(ulonglong *)(param_3[7] + 8) & puVar43[0xf] |
               *(ulonglong *)param_3[-8] & puVar43[-0x10] |
               *(ulonglong *)param_3[-6] & puVar43[-0xc] | *(ulonglong *)param_3[-4] & puVar43[-8] |
               *(ulonglong *)param_3[-2] & puVar43[-4] | *(ulonglong *)*param_3 & *puVar43 |
               *(ulonglong *)param_3[2] & puVar43[4] | *(ulonglong *)param_3[4] & puVar43[8] |
               *(ulonglong *)param_3[6] & puVar43[0xc] |
               *(ulonglong *)param_3[-7] & puVar43[-0xe] | *(ulonglong *)param_3[-5] & puVar43[-10]
               | *(ulonglong *)param_3[-3] & puVar43[-6] | *(ulonglong *)param_3[-1] & puVar43[-2] |
               *(ulonglong *)param_3[1] & puVar43[2] | *(ulonglong *)param_3[3] & puVar43[6] |
               *(ulonglong *)param_3[5] & puVar43[10] | *(ulonglong *)param_3[7] & puVar43[0xe];
      param_3 = param_3 + 0x10;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = *puVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *param_2;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar38;
      auVar26 = auVar7 * auVar14 + auVar26;
      uVar35 = auVar26._0_8_;
      uVar37 = auVar26._8_8_;
      uVar40 = lVar45 * uVar35;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *param_4;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar40;
      uVar41 = param_2[1];
      uVar39 = SUB168(auVar8 * auVar15,8) + (ulonglong)CARRY8(uVar35,SUB168(auVar8 * auVar15,0));
      uVar35 = puVar2[1];
      uVar36 = 1;
      while( true ) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar39;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar35;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar37;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar41;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar38;
        auVar29 = auVar9 * auVar16 + auVar28 + auVar29;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = auVar29._0_8_;
        uVar37 = auVar29._8_8_;
        uVar1 = uVar36 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4[uVar36];
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar40;
        auVar10 = auVar10 * auVar17;
        if (uVar1 == uVar46) break;
        uVar41 = param_2[uVar1];
        auVar27 = auVar10 + auVar21 + auVar27;
        uVar35 = puVar2[uVar1];
        uVar39 = auVar27._8_8_;
        puVar2[uVar36 - 1] = auVar27._0_8_;
        uVar36 = uVar1;
      }
      auVar49 = auVar29 + auVar10 + auVar30;
      uVar41 = puVar2[uVar46];
      puVar2[uVar46 - 2] = auVar49._0_8_;
      uVar35 = auVar49._8_8_;
      puVar2[uVar46 - 1] = uVar35 + uVar41;
      puVar2[uVar46] =
           (ulonglong)
           CARRY8(auVar10._8_8_ + (ulonglong)CARRY8(uVar39,auVar10._0_8_) +
                  (ulonglong)CARRY8(uVar39 + auVar10._0_8_,auVar29._0_8_),uVar37) +
           (ulonglong)CARRY8(uVar35,uVar41);
      uVar44 = uVar44 + 1;
    } while (uVar44 < uVar46);
    bVar47 = false;
    lVar45 = 0;
    uVar44 = *puVar2;
    uVar41 = uVar46;
    do {
      uVar35 = (ulonglong)bVar47;
      uVar36 = uVar44 - param_4[lVar45];
      bVar47 = uVar44 < param_4[lVar45] || uVar36 < uVar35;
      *(ulonglong *)(param_1 + lVar45 * 8) = uVar36 - uVar35;
      uVar44 = puVar2[lVar45 + 1];
      lVar45 = lVar45 + 1;
      uVar41 = uVar41 - 1;
    } while (uVar41 != 0);
    uVar41 = 0;
    do {
      uVar35 = *(ulonglong *)(param_1 + uVar41 * 8);
      uVar36 = puVar2[uVar41];
      puVar2[uVar41] = uVar41;
      *(ulonglong *)(param_1 + uVar41 * 8) =
           uVar36 & uVar44 - bVar47 | uVar35 & (uVar44 - bVar47 ^ 0xffffffffffffffff);
      uVar41 = uVar41 + 1;
      uVar46 = uVar46 - 1;
    } while (uVar46 != 0);
    return 1;
  }
  if ((_DAT_15540a9f8 & 0x80108) != 0x80108) {
    uVar46 = (ulonglong)(param_6 << 3);
    uVar44 = (ulonglong)(auStack_170 + (uVar46 * -2 - param_1)) & 0xfff;
    if (uVar46 * 3 < uVar44) {
      uVar41 = uVar46 * -2 + 0xec0;
      lVar45 = uVar44 - uVar41;
      if (uVar44 < uVar41) {
        lVar45 = 0;
      }
      puVar42 = auStack_170 + (uVar46 * -2 - lVar45);
    }
    else {
      puVar42 = auStack_170 + (uVar46 * -2 - uVar44);
    }
    uVar41 = (ulonglong)puVar42 & 0xffffffffffffffc0;
    for (uVar44 = uVar41 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar41) & 0xfffffffffffff000);
        uVar41 < uVar44; uVar44 = uVar44 - 0x1000) {
    }
    *(BADSPACEBASE **)(uVar44 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar44 - 8) = 0x140e2ec9e;
    mul4x_internal(param_4,param_3,param_5,uVar46);
    return 1;
  }
  uVar46 = (ulonglong)(param_6 << 3);
  uVar44 = (ulonglong)(auStack_170 + (uVar46 * -2 - param_1)) & 0xfff;
  if (uVar46 * 3 < uVar44) {
    uVar41 = uVar46 * -2 + 0xec0;
    lVar45 = uVar44 - uVar41;
    if (uVar44 < uVar41) {
      lVar45 = 0;
    }
    puVar42 = auStack_170 + (uVar46 * -2 - lVar45);
  }
  else {
    puVar42 = auStack_170 + (uVar46 * -2 - uVar44);
  }
  uVar44 = (ulonglong)puVar42 & 0xffffffffffffffc0;
  for (uVar46 = uVar44 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar44) & 0xfffffffffffff000);
      uVar44 < uVar46; uVar46 = uVar46 - 0x1000) {
  }
  *(longlong *)(uVar46 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar46 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar46 - 8) = 0x140e30065;
  mulx4x_internal();
  return 1;
}

// L$SEH_begin_bn_mul_mont_gather5 @ 140e2e54d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
L_SEH_begin_bn_mul_mont_gather5
          (longlong param_1,ulonglong *param_2,undefined1 (*param_3) [16],ulonglong *param_4,
          longlong *param_5,uint param_6,int param_7)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 *puVar42;
  ulonglong *puVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  bool bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar50;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar51 [16];
  int iVar55;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar56 [16];
  int iVar60;
  int iVar61;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  undefined1 auVar62 [16];
  undefined1 auStack_170 [40];
  undefined1 auStack_148 [280];
  
  uVar46 = (ulonglong)param_6;
  if ((param_6 & 7) != 0) {
    puVar43 = (ulonglong *)((ulonglong)(auStack_148 + uVar46 * -8) & 0xfffffffffffffc00);
    for (puVar2 = (ulonglong *)
                  ((longlong)puVar43 +
                  ((ulonglong)(&stack0xffffffffffffffd0 + -(longlong)puVar43) & 0xfffffffffffff000))
        ; puVar43 < puVar2; puVar2 = puVar2 + -0x200) {
    }
    puVar2[uVar46 + 1] = (ulonglong)register0x00000020;
    iVar34 = _UNK_140e3171c;
    iVar33 = _UNK_140e31718;
    iVar32 = _UNK_140e31714;
    iVar31 = _DAT_140e31710;
    uVar44 = (ulonglong)(puVar2 + (uVar46 - 0xb)) & 0xfffffffffffffff0;
    iVar50 = _DAT_140e31710 + _L_inc;
    iVar52 = _UNK_140e31714 + _UNK_140e31704;
    iVar53 = _UNK_140e31718 + _UNK_140e31708;
    iVar54 = _UNK_140e3171c + _UNK_140e3170c;
    bVar47 = _UNK_140e31704 == param_7;
    bVar18 = _UNK_140e31708 == param_7;
    bVar19 = _UNK_140e3170c == param_7;
    iVar55 = _DAT_140e31710 + iVar50;
    iVar57 = _UNK_140e31714 + iVar52;
    iVar58 = _UNK_140e31718 + iVar53;
    iVar59 = _UNK_140e3171c + iVar54;
    *(uint *)(uVar44 + 0x70) = -(uint)(_L_inc == param_7);
    *(uint *)(uVar44 + 0x74) = -(uint)bVar47;
    *(uint *)(uVar44 + 0x78) = -(uint)bVar18;
    *(uint *)(uVar44 + 0x7c) = -(uint)bVar19;
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0x80) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0x84) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0x88) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0x8c) = -(uint)(iVar54 == param_7);
    iVar50 = iVar31 + iVar60;
    iVar52 = iVar32 + iVar63;
    iVar53 = iVar33 + iVar65;
    iVar54 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0x90) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0x94) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 0x98) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0x9c) = -(uint)(iVar59 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    *(uint *)(uVar44 + 0xa0) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0xa4) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0xa8) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0xac) = -(uint)(iVar67 == param_7);
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0xb0) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0xb4) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0xb8) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0xbc) = -(uint)(iVar54 == param_7);
    iVar61 = iVar31 + iVar60;
    iVar64 = iVar32 + iVar63;
    iVar66 = iVar33 + iVar65;
    iVar68 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0xc0) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0xc4) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 200) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0xcc) = -(uint)(iVar59 == param_7);
    iVar50 = iVar31 + iVar61;
    iVar52 = iVar32 + iVar64;
    iVar53 = iVar33 + iVar66;
    iVar54 = iVar34 + iVar68;
    *(uint *)(uVar44 + 0xd0) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0xd4) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0xd8) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0xdc) = -(uint)(iVar67 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    *(uint *)(uVar44 + 0xe0) = -(uint)(iVar61 == param_7);
    *(uint *)(uVar44 + 0xe4) = -(uint)(iVar64 == param_7);
    *(uint *)(uVar44 + 0xe8) = -(uint)(iVar66 == param_7);
    *(uint *)(uVar44 + 0xec) = -(uint)(iVar68 == param_7);
    iVar60 = iVar31 + iVar55;
    iVar63 = iVar32 + iVar57;
    iVar65 = iVar33 + iVar58;
    iVar67 = iVar34 + iVar59;
    *(uint *)(uVar44 + 0xf0) = -(uint)(iVar50 == param_7);
    *(uint *)(uVar44 + 0xf4) = -(uint)(iVar52 == param_7);
    *(uint *)(uVar44 + 0xf8) = -(uint)(iVar53 == param_7);
    *(uint *)(uVar44 + 0xfc) = -(uint)(iVar54 == param_7);
    iVar61 = iVar31 + iVar60;
    iVar64 = iVar32 + iVar63;
    iVar66 = iVar33 + iVar65;
    iVar68 = iVar34 + iVar67;
    *(uint *)(uVar44 + 0x100) = -(uint)(iVar55 == param_7);
    *(uint *)(uVar44 + 0x104) = -(uint)(iVar57 == param_7);
    *(uint *)(uVar44 + 0x108) = -(uint)(iVar58 == param_7);
    *(uint *)(uVar44 + 0x10c) = -(uint)(iVar59 == param_7);
    iVar50 = iVar31 + iVar61;
    iVar52 = iVar32 + iVar64;
    iVar53 = iVar33 + iVar66;
    iVar54 = iVar34 + iVar68;
    *(uint *)(uVar44 + 0x110) = -(uint)(iVar60 == param_7);
    *(uint *)(uVar44 + 0x114) = -(uint)(iVar63 == param_7);
    *(uint *)(uVar44 + 0x118) = -(uint)(iVar65 == param_7);
    *(uint *)(uVar44 + 0x11c) = -(uint)(iVar67 == param_7);
    iVar55 = iVar31 + iVar50;
    iVar57 = iVar32 + iVar52;
    iVar58 = iVar33 + iVar53;
    iVar59 = iVar34 + iVar54;
    auVar48._0_4_ = -(uint)(iVar50 == param_7);
    auVar48._4_4_ = -(uint)(iVar52 == param_7);
    auVar48._8_4_ = -(uint)(iVar53 == param_7);
    auVar48._12_4_ = -(uint)(iVar54 == param_7);
    *(uint *)(uVar44 + 0x120) = -(uint)(iVar61 == param_7);
    *(uint *)(uVar44 + 0x124) = -(uint)(iVar64 == param_7);
    *(uint *)(uVar44 + 0x128) = -(uint)(iVar66 == param_7);
    *(uint *)(uVar44 + 300) = -(uint)(iVar68 == param_7);
    iVar50 = iVar31 + iVar55;
    iVar52 = iVar32 + iVar57;
    iVar53 = iVar33 + iVar58;
    iVar54 = iVar34 + iVar59;
    auVar51._0_4_ = -(uint)(iVar55 == param_7);
    auVar51._4_4_ = -(uint)(iVar57 == param_7);
    auVar51._8_4_ = -(uint)(iVar58 == param_7);
    auVar51._12_4_ = -(uint)(iVar59 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x130) = auVar48;
    auVar56._0_4_ = -(uint)(iVar50 == param_7);
    auVar56._4_4_ = -(uint)(iVar52 == param_7);
    auVar56._8_4_ = -(uint)(iVar53 == param_7);
    auVar56._12_4_ = -(uint)(iVar54 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x140) = auVar51;
    auVar62._0_4_ = -(uint)(iVar31 + iVar50 == param_7);
    auVar62._4_4_ = -(uint)(iVar32 + iVar52 == param_7);
    auVar62._8_4_ = -(uint)(iVar33 + iVar53 == param_7);
    auVar62._12_4_ = -(uint)(iVar34 + iVar54 == param_7);
    *(undefined1 (*) [16])(uVar44 + 0x150) = auVar56;
    auVar49 = param_3[0xc];
    auVar3 = param_3[0xd];
    auVar4 = param_3[0xe];
    *(undefined1 (*) [16])(uVar44 + 0x160) = auVar62;
    auVar49 = auVar48 & auVar49 | auVar56 & auVar4 |
              *param_3 & *(undefined1 (*) [16])(uVar44 + 0x70) |
              param_3[2] & *(undefined1 (*) [16])(uVar44 + 0x90) |
              param_3[4] & *(undefined1 (*) [16])(uVar44 + 0xb0) |
              param_3[6] & *(undefined1 (*) [16])(uVar44 + 0xd0) |
              param_3[8] & *(undefined1 (*) [16])(uVar44 + 0xf0) |
              param_3[10] & *(undefined1 (*) [16])(uVar44 + 0x110) |
              auVar51 & auVar3 | auVar62 & param_3[0xf] |
              param_3[1] & *(undefined1 (*) [16])(uVar44 + 0x80) |
              param_3[3] & *(undefined1 (*) [16])(uVar44 + 0xa0) |
              param_3[5] & *(undefined1 (*) [16])(uVar44 + 0xc0) |
              param_3[7] & *(undefined1 (*) [16])(uVar44 + 0xe0) |
              param_3[9] & *(undefined1 (*) [16])(uVar44 + 0x100) |
              param_3[0xb] & *(undefined1 (*) [16])(uVar44 + 0x120);
    uVar37 = auVar49._0_8_ | auVar49._8_8_;
    param_3 = param_3 + 0x18;
    lVar45 = *param_5;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *param_2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar37;
    uVar35 = SUB168(auVar49 * auVar4,8);
    uVar41 = SUB168(auVar49 * auVar4,0);
    uVar39 = lVar45 * uVar41;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *param_4;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar39;
    uVar44 = param_2[1];
    uVar36 = SUB168(auVar3 * auVar11,8) + (ulonglong)CARRY8(uVar41,SUB168(auVar3 * auVar11,0));
    uVar41 = 1;
    while( true ) {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar36;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar35;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar36;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar44;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar37;
      auVar23 = auVar5 * auVar12 + auVar23;
      uVar44 = auVar23._0_8_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar44;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar44;
      uVar35 = auVar23._8_8_;
      uVar38 = uVar41 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4[uVar41];
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar39;
      if (uVar38 == uVar46) break;
      uVar44 = param_2[uVar38];
      auVar22 = auVar6 * auVar13 + auVar20 + auVar22;
      uVar36 = auVar22._8_8_;
      puVar2[uVar41 - 1] = auVar22._0_8_;
      uVar41 = uVar38;
    }
    auVar25 = auVar6 * auVar13 + auVar24 + auVar25;
    uVar44 = auVar25._8_8_;
    puVar2[uVar46 - 2] = auVar25._0_8_;
    puVar2[uVar46 - 1] = uVar44 + uVar35;
    puVar2[uVar46] = (ulonglong)CARRY8(uVar44,uVar35);
    uVar44 = 1;
    do {
      puVar43 = (ulonglong *)((ulonglong)(puVar2 + uVar46 + 0x13) & 0xfffffffffffffff0);
      uVar38 = *(ulonglong *)(param_3[-8] + 8) & puVar43[-0xf] |
               *(ulonglong *)(param_3[-6] + 8) & puVar43[-0xb] |
               *(ulonglong *)(param_3[-4] + 8) & puVar43[-7] |
               *(ulonglong *)(param_3[-2] + 8) & puVar43[-3] |
               *(ulonglong *)(*param_3 + 8) & puVar43[1] |
               *(ulonglong *)(param_3[2] + 8) & puVar43[5] |
               *(ulonglong *)(param_3[4] + 8) & puVar43[9] |
               *(ulonglong *)(param_3[6] + 8) & puVar43[0xd] |
               *(ulonglong *)(param_3[-7] + 8) & puVar43[-0xd] |
               *(ulonglong *)(param_3[-5] + 8) & puVar43[-9] |
               *(ulonglong *)(param_3[-3] + 8) & puVar43[-5] |
               *(ulonglong *)(param_3[-1] + 8) & puVar43[-1] |
               *(ulonglong *)(param_3[1] + 8) & puVar43[3] |
               *(ulonglong *)(param_3[3] + 8) & puVar43[7] |
               *(ulonglong *)(param_3[5] + 8) & puVar43[0xb] |
               *(ulonglong *)(param_3[7] + 8) & puVar43[0xf] |
               *(ulonglong *)param_3[-8] & puVar43[-0x10] |
               *(ulonglong *)param_3[-6] & puVar43[-0xc] | *(ulonglong *)param_3[-4] & puVar43[-8] |
               *(ulonglong *)param_3[-2] & puVar43[-4] | *(ulonglong *)*param_3 & *puVar43 |
               *(ulonglong *)param_3[2] & puVar43[4] | *(ulonglong *)param_3[4] & puVar43[8] |
               *(ulonglong *)param_3[6] & puVar43[0xc] |
               *(ulonglong *)param_3[-7] & puVar43[-0xe] | *(ulonglong *)param_3[-5] & puVar43[-10]
               | *(ulonglong *)param_3[-3] & puVar43[-6] | *(ulonglong *)param_3[-1] & puVar43[-2] |
               *(ulonglong *)param_3[1] & puVar43[2] | *(ulonglong *)param_3[3] & puVar43[6] |
               *(ulonglong *)param_3[5] & puVar43[10] | *(ulonglong *)param_3[7] & puVar43[0xe];
      param_3 = param_3 + 0x10;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = *puVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *param_2;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar38;
      auVar26 = auVar7 * auVar14 + auVar26;
      uVar35 = auVar26._0_8_;
      uVar37 = auVar26._8_8_;
      uVar40 = lVar45 * uVar35;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *param_4;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar40;
      uVar41 = param_2[1];
      uVar39 = SUB168(auVar8 * auVar15,8) + (ulonglong)CARRY8(uVar35,SUB168(auVar8 * auVar15,0));
      uVar35 = puVar2[1];
      uVar36 = 1;
      while( true ) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar39;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar35;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar37;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar41;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar38;
        auVar29 = auVar9 * auVar16 + auVar28 + auVar29;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = auVar29._0_8_;
        uVar37 = auVar29._8_8_;
        uVar1 = uVar36 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4[uVar36];
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar40;
        auVar10 = auVar10 * auVar17;
        if (uVar1 == uVar46) break;
        uVar41 = param_2[uVar1];
        auVar27 = auVar10 + auVar21 + auVar27;
        uVar35 = puVar2[uVar1];
        uVar39 = auVar27._8_8_;
        puVar2[uVar36 - 1] = auVar27._0_8_;
        uVar36 = uVar1;
      }
      auVar49 = auVar29 + auVar10 + auVar30;
      uVar41 = puVar2[uVar46];
      puVar2[uVar46 - 2] = auVar49._0_8_;
      uVar35 = auVar49._8_8_;
      puVar2[uVar46 - 1] = uVar35 + uVar41;
      puVar2[uVar46] =
           (ulonglong)
           CARRY8(auVar10._8_8_ + (ulonglong)CARRY8(uVar39,auVar10._0_8_) +
                  (ulonglong)CARRY8(uVar39 + auVar10._0_8_,auVar29._0_8_),uVar37) +
           (ulonglong)CARRY8(uVar35,uVar41);
      uVar44 = uVar44 + 1;
    } while (uVar44 < uVar46);
    bVar47 = false;
    lVar45 = 0;
    uVar44 = *puVar2;
    uVar41 = uVar46;
    do {
      uVar35 = (ulonglong)bVar47;
      uVar36 = uVar44 - param_4[lVar45];
      bVar47 = uVar44 < param_4[lVar45] || uVar36 < uVar35;
      *(ulonglong *)(param_1 + lVar45 * 8) = uVar36 - uVar35;
      uVar44 = puVar2[lVar45 + 1];
      lVar45 = lVar45 + 1;
      uVar41 = uVar41 - 1;
    } while (uVar41 != 0);
    uVar41 = 0;
    do {
      uVar35 = *(ulonglong *)(param_1 + uVar41 * 8);
      uVar36 = puVar2[uVar41];
      puVar2[uVar41] = uVar41;
      *(ulonglong *)(param_1 + uVar41 * 8) =
           uVar36 & uVar44 - bVar47 | uVar35 & (uVar44 - bVar47 ^ 0xffffffffffffffff);
      uVar41 = uVar41 + 1;
      uVar46 = uVar46 - 1;
    } while (uVar46 != 0);
    return 1;
  }
  if ((_DAT_15540a9f8 & 0x80108) != 0x80108) {
    uVar46 = (ulonglong)(param_6 << 3);
    uVar44 = (ulonglong)(auStack_170 + (uVar46 * -2 - param_1)) & 0xfff;
    if (uVar46 * 3 < uVar44) {
      uVar41 = uVar46 * -2 + 0xec0;
      lVar45 = uVar44 - uVar41;
      if (uVar44 < uVar41) {
        lVar45 = 0;
      }
      puVar42 = auStack_170 + (uVar46 * -2 - lVar45);
    }
    else {
      puVar42 = auStack_170 + (uVar46 * -2 - uVar44);
    }
    uVar41 = (ulonglong)puVar42 & 0xffffffffffffffc0;
    for (uVar44 = uVar41 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar41) & 0xfffffffffffff000);
        uVar41 < uVar44; uVar44 = uVar44 - 0x1000) {
    }
    *(BADSPACEBASE **)(uVar44 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar44 - 8) = 0x140e2ec9e;
    mul4x_internal(param_4,param_3,param_5,uVar46);
    return 1;
  }
  uVar46 = (ulonglong)(param_6 << 3);
  uVar44 = (ulonglong)(auStack_170 + (uVar46 * -2 - param_1)) & 0xfff;
  if (uVar46 * 3 < uVar44) {
    uVar41 = uVar46 * -2 + 0xec0;
    lVar45 = uVar44 - uVar41;
    if (uVar44 < uVar41) {
      lVar45 = 0;
    }
    puVar42 = auStack_170 + (uVar46 * -2 - lVar45);
  }
  else {
    puVar42 = auStack_170 + (uVar46 * -2 - uVar44);
  }
  uVar44 = (ulonglong)puVar42 & 0xffffffffffffffc0;
  for (uVar46 = uVar44 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar44) & 0xfffffffffffff000);
      uVar44 < uVar46; uVar46 = uVar46 - 0x1000) {
  }
  *(longlong *)(uVar46 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar46 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar46 - 8) = 0x140e30065;
  mulx4x_internal();
  return 1;
}

// bn_mul4x_mont_gather5 @ 140e2ebc0

undefined8
bn_mul4x_mont_gather5
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint in_R11D;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  
  if ((in_R11D & 0x80108) != 0x80108) {
    uVar3 = (ulonglong)(uint)(param_6 << 3);
    uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
    if (uVar3 * 3 < uVar4) {
      uVar1 = uVar3 * -2 + 0xec0;
      lVar5 = uVar4 - uVar1;
      if (uVar4 < uVar1) {
        lVar5 = 0;
      }
      puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
    }
    else {
      puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
    }
    uVar4 = (ulonglong)puVar2 & 0xffffffffffffffc0;
    for (uVar3 = uVar4 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
        uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
    }
    *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar3 - 8) = 0x140e2ec9e;
    mul4x_internal();
    return 1;
  }
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar3 = uVar4 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
      uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
  }
  *(undefined8 *)(uVar3 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar3 - 8) = 0x140e30065;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// L$SEH_begin_bn_mul4x_mont_gather5 @ 140e2ebcd

undefined8
L_SEH_begin_bn_mul4x_mont_gather5
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint in_R11D;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  
  if ((in_R11D & 0x80108) != 0x80108) {
    uVar3 = (ulonglong)(uint)(param_6 << 3);
    uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
    if (uVar3 * 3 < uVar4) {
      uVar1 = uVar3 * -2 + 0xec0;
      lVar5 = uVar4 - uVar1;
      if (uVar4 < uVar1) {
        lVar5 = 0;
      }
      puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
    }
    else {
      puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
    }
    uVar4 = (ulonglong)puVar2 & 0xffffffffffffffc0;
    for (uVar3 = uVar4 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
        uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
    }
    *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar3 - 8) = 0x140e2ec9e;
    mul4x_internal();
    return 1;
  }
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar3 = uVar4 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
      uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
  }
  *(undefined8 *)(uVar3 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar3 - 8) = 0x140e30065;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// mul4x_internal @ 140e2ece0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mul4x_internal(ulonglong *param_1,undefined1 (*param_2) [16],longlong *param_3,
                   ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined8 *puVar112;
  longlong in_RAX;
  ulonglong uVar113;
  ulonglong *puVar114;
  ulonglong *puVar115;
  ulonglong uVar116;
  ulonglong uVar117;
  ulonglong uVar118;
  ulonglong *puVar119;
  ulonglong uVar120;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar121;
  longlong lVar122;
  undefined1 (*pauVar123) [16];
  ulonglong uVar124;
  undefined8 *puVar125;
  ulonglong *puVar126;
  longlong lVar127;
  int iVar128;
  int iVar131;
  int iVar132;
  int iVar133;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar134 [16];
  int iVar135;
  int iVar137;
  int iVar138;
  int iVar139;
  undefined1 auVar136 [16];
  int iVar140;
  int iVar141;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  undefined1 auVar142 [16];
  undefined8 uStack0000000000000048;
  
  iVar3 = *(int *)(in_RAX + 0x38);
  uVar121 = param_4 & 0x7ffffffffffffff;
  iVar135 = _DAT_140e31710 + _DAT_140e31710 + _L_inc;
  iVar137 = _UNK_140e31714 + _UNK_140e31714 + _UNK_140e31704;
  iVar138 = _UNK_140e31718 + _UNK_140e31718 + _UNK_140e31708;
  iVar139 = _UNK_140e3171c + _UNK_140e3171c + _UNK_140e3170c;
  *(uint *)(&stack0x00000058 + uVar121) = -(uint)(_L_inc == iVar3);
  *(uint *)(&stack0x0000005c + uVar121) = -(uint)(_UNK_140e31704 == iVar3);
  *(uint *)(&stack0x00000060 + uVar121) = -(uint)(_UNK_140e31708 == iVar3);
  *(uint *)(&stack0x00000064 + uVar121) = -(uint)(_UNK_140e3170c == iVar3);
  iVar140 = _DAT_140e31710 + iVar135;
  iVar143 = _UNK_140e31714 + iVar137;
  iVar145 = _UNK_140e31718 + iVar138;
  iVar147 = _UNK_140e3171c + iVar139;
  *(uint *)(&stack0x00000068 + uVar121) = -(uint)(_DAT_140e31710 + _L_inc == iVar3);
  *(uint *)(&stack0x0000006c + uVar121) = -(uint)(_UNK_140e31714 + _UNK_140e31704 == iVar3);
  *(uint *)(&stack0x00000070 + uVar121) = -(uint)(_UNK_140e31718 + _UNK_140e31708 == iVar3);
  *(uint *)(&stack0x00000074 + uVar121) = -(uint)(_UNK_140e3171c + _UNK_140e3170c == iVar3);
  iVar128 = _DAT_140e31710 + iVar140;
  iVar131 = _UNK_140e31714 + iVar143;
  iVar132 = _UNK_140e31718 + iVar145;
  iVar133 = _UNK_140e3171c + iVar147;
  *(uint *)(&stack0x00000078 + uVar121) = -(uint)(iVar135 == iVar3);
  *(uint *)(&stack0x0000007c + uVar121) = -(uint)(iVar137 == iVar3);
  *(uint *)(&stack0x00000080 + uVar121) = -(uint)(iVar138 == iVar3);
  *(uint *)(&stack0x00000084 + uVar121) = -(uint)(iVar139 == iVar3);
  iVar135 = _DAT_140e31710 + iVar128;
  iVar137 = _UNK_140e31714 + iVar131;
  iVar138 = _UNK_140e31718 + iVar132;
  iVar139 = _UNK_140e3171c + iVar133;
  *(uint *)(&stack0x00000088 + uVar121) = -(uint)(iVar140 == iVar3);
  *(uint *)(&stack0x0000008c + uVar121) = -(uint)(iVar143 == iVar3);
  *(uint *)(&stack0x00000090 + uVar121) = -(uint)(iVar145 == iVar3);
  *(uint *)(&stack0x00000094 + uVar121) = -(uint)(iVar147 == iVar3);
  iVar140 = _DAT_140e31710 + iVar135;
  iVar143 = _UNK_140e31714 + iVar137;
  iVar145 = _UNK_140e31718 + iVar138;
  iVar147 = _UNK_140e3171c + iVar139;
  *(uint *)(&stack0x00000098 + uVar121) = -(uint)(iVar128 == iVar3);
  *(uint *)(&stack0x0000009c + uVar121) = -(uint)(iVar131 == iVar3);
  *(uint *)(&stack0x000000a0 + uVar121) = -(uint)(iVar132 == iVar3);
  *(uint *)(&stack0x000000a4 + uVar121) = -(uint)(iVar133 == iVar3);
  iVar141 = _DAT_140e31710 + iVar140;
  iVar144 = _UNK_140e31714 + iVar143;
  iVar146 = _UNK_140e31718 + iVar145;
  iVar148 = _UNK_140e3171c + iVar147;
  *(uint *)(&stack0x000000a8 + uVar121) = -(uint)(iVar135 == iVar3);
  *(uint *)(&stack0x000000ac + uVar121) = -(uint)(iVar137 == iVar3);
  *(uint *)(&stack0x000000b0 + uVar121) = -(uint)(iVar138 == iVar3);
  *(uint *)(&stack0x000000b4 + uVar121) = -(uint)(iVar139 == iVar3);
  iVar128 = _DAT_140e31710 + iVar141;
  iVar131 = _UNK_140e31714 + iVar144;
  iVar132 = _UNK_140e31718 + iVar146;
  iVar133 = _UNK_140e3171c + iVar148;
  *(uint *)(&stack0x000000b8 + uVar121) = -(uint)(iVar140 == iVar3);
  *(uint *)(&stack0x000000bc + uVar121) = -(uint)(iVar143 == iVar3);
  *(uint *)(&stack0x000000c0 + uVar121) = -(uint)(iVar145 == iVar3);
  *(uint *)(&stack0x000000c4 + uVar121) = -(uint)(iVar147 == iVar3);
  iVar135 = _DAT_140e31710 + iVar128;
  iVar137 = _UNK_140e31714 + iVar131;
  iVar138 = _UNK_140e31718 + iVar132;
  iVar139 = _UNK_140e3171c + iVar133;
  *(uint *)(&stack0x000000c8 + uVar121) = -(uint)(iVar141 == iVar3);
  *(uint *)(&stack0x000000cc + uVar121) = -(uint)(iVar144 == iVar3);
  *(uint *)(&stack0x000000d0 + uVar121) = -(uint)(iVar146 == iVar3);
  *(uint *)(&stack0x000000d4 + uVar121) = -(uint)(iVar148 == iVar3);
  iVar140 = _DAT_140e31710 + iVar135;
  iVar143 = _UNK_140e31714 + iVar137;
  iVar145 = _UNK_140e31718 + iVar138;
  iVar147 = _UNK_140e3171c + iVar139;
  *(uint *)(&stack0x000000d8 + uVar121) = -(uint)(iVar128 == iVar3);
  *(uint *)(&stack0x000000dc + uVar121) = -(uint)(iVar131 == iVar3);
  *(uint *)(&stack0x000000e0 + uVar121) = -(uint)(iVar132 == iVar3);
  *(uint *)(&stack0x000000e4 + uVar121) = -(uint)(iVar133 == iVar3);
  iVar141 = _DAT_140e31710 + iVar140;
  iVar144 = _UNK_140e31714 + iVar143;
  iVar146 = _UNK_140e31718 + iVar145;
  iVar148 = _UNK_140e3171c + iVar147;
  *(uint *)(&stack0x000000e8 + uVar121) = -(uint)(iVar135 == iVar3);
  *(uint *)(&stack0x000000ec + uVar121) = -(uint)(iVar137 == iVar3);
  *(uint *)(&stack0x000000f0 + uVar121) = -(uint)(iVar138 == iVar3);
  *(uint *)(&stack0x000000f4 + uVar121) = -(uint)(iVar139 == iVar3);
  iVar128 = _DAT_140e31710 + iVar141;
  iVar131 = _UNK_140e31714 + iVar144;
  iVar132 = _UNK_140e31718 + iVar146;
  iVar133 = _UNK_140e3171c + iVar148;
  *(uint *)(&stack0x000000f8 + uVar121) = -(uint)(iVar140 == iVar3);
  *(uint *)(&stack0x000000fc + uVar121) = -(uint)(iVar143 == iVar3);
  *(uint *)(&stack0x00000100 + uVar121) = -(uint)(iVar145 == iVar3);
  *(uint *)(&stack0x00000104 + uVar121) = -(uint)(iVar147 == iVar3);
  iVar135 = _DAT_140e31710 + iVar128;
  iVar137 = _UNK_140e31714 + iVar131;
  iVar138 = _UNK_140e31718 + iVar132;
  iVar139 = _UNK_140e3171c + iVar133;
  auVar129._0_4_ = -(uint)(iVar128 == iVar3);
  auVar129._4_4_ = -(uint)(iVar131 == iVar3);
  auVar129._8_4_ = -(uint)(iVar132 == iVar3);
  auVar129._12_4_ = -(uint)(iVar133 == iVar3);
  *(uint *)(&stack0x00000108 + uVar121) = -(uint)(iVar141 == iVar3);
  *(uint *)(&stack0x0000010c + uVar121) = -(uint)(iVar144 == iVar3);
  *(uint *)(&stack0x00000110 + uVar121) = -(uint)(iVar146 == iVar3);
  *(uint *)(&stack0x00000114 + uVar121) = -(uint)(iVar148 == iVar3);
  iVar128 = _DAT_140e31710 + iVar135;
  iVar131 = _UNK_140e31714 + iVar137;
  iVar132 = _UNK_140e31718 + iVar138;
  iVar133 = _UNK_140e3171c + iVar139;
  auVar134._0_4_ = -(uint)(iVar135 == iVar3);
  auVar134._4_4_ = -(uint)(iVar137 == iVar3);
  auVar134._8_4_ = -(uint)(iVar138 == iVar3);
  auVar134._12_4_ = -(uint)(iVar139 == iVar3);
  *(undefined1 (*) [16])(&stack0x00000118 + uVar121) = auVar129;
  auVar136._0_4_ = -(uint)(iVar128 == iVar3);
  auVar136._4_4_ = -(uint)(iVar131 == iVar3);
  auVar136._8_4_ = -(uint)(iVar132 == iVar3);
  auVar136._12_4_ = -(uint)(iVar133 == iVar3);
  *(undefined1 (*) [16])(&stack0x00000128 + uVar121) = auVar134;
  auVar142._0_4_ = -(uint)(_DAT_140e31710 + iVar128 == iVar3);
  auVar142._4_4_ = -(uint)(_UNK_140e31714 + iVar131 == iVar3);
  auVar142._8_4_ = -(uint)(_UNK_140e31718 + iVar132 == iVar3);
  auVar142._12_4_ = -(uint)(_UNK_140e3171c + iVar133 == iVar3);
  *(undefined1 (*) [16])(&stack0x00000138 + uVar121) = auVar136;
  auVar130 = param_2[0xc];
  auVar1 = param_2[0xd];
  auVar2 = param_2[0xe];
  *(undefined1 (*) [16])(&stack0x00000148 + uVar121) = auVar142;
  auVar130 = auVar129 & auVar130 | auVar136 & auVar2 |
             *param_2 & *(undefined1 (*) [16])(&stack0x00000058 + uVar121) |
             param_2[2] & *(undefined1 (*) [16])(&stack0x00000078 + uVar121) |
             param_2[4] & *(undefined1 (*) [16])(&stack0x00000098 + uVar121) |
             param_2[6] & *(undefined1 (*) [16])(&stack0x000000b8 + uVar121) |
             param_2[8] & *(undefined1 (*) [16])(&stack0x000000d8 + uVar121) |
             param_2[10] & *(undefined1 (*) [16])(&stack0x000000f8 + uVar121) |
             auVar134 & auVar1 | auVar142 & param_2[0xf] |
             param_2[1] & *(undefined1 (*) [16])(&stack0x00000068 + uVar121) |
             param_2[3] & *(undefined1 (*) [16])(&stack0x00000088 + uVar121) |
             param_2[5] & *(undefined1 (*) [16])(&stack0x000000a8 + uVar121) |
             param_2[7] & *(undefined1 (*) [16])(&stack0x000000c8 + uVar121) |
             param_2[9] & *(undefined1 (*) [16])(&stack0x000000e8 + uVar121) |
             param_2[0xb] & *(undefined1 (*) [16])(&stack0x00000108 + uVar121);
  uVar118 = auVar130._0_8_ | auVar130._8_8_;
  pauVar123 = param_2 + 0x18;
  lVar4 = *param_3;
  lVar122 = -uVar121;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = *unaff_RSI;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar118;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = SUB168(auVar130 * auVar37,8);
  uVar113 = SUB168(auVar130 * auVar37,0);
  uVar120 = lVar4 * uVar113;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_1;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar120;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = SUB168(auVar1 * auVar38,8) + (ulonglong)CARRY8(uVar113,SUB168(auVar1 * auVar38,0))
  ;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = unaff_RSI[1];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar118;
  auVar69 = auVar2 * auVar39 + auVar69;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = auVar69._0_8_;
  uVar116 = auVar69._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1[1];
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar120;
  uVar113 = unaff_RSI[2];
  auVar71 = auVar8 * auVar40 + auVar70 + auVar71;
  lVar127 = lVar122 + 0x20;
  uVar117 = auVar71._8_8_;
  uStack0000000000000048 = auVar71._0_8_;
  puVar119 = param_1 + 4;
  puVar112 = &stack0x00000048;
  do {
    puVar125 = puVar112;
    puVar114 = puVar119;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar117;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar116;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar113;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar118;
    auVar72 = auVar9 * auVar41 + auVar72;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = auVar72._0_8_;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = auVar72._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = puVar114[-2];
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar120;
    uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + (uVar121 - 8));
    auVar74 = auVar10 * auVar42 + auVar73 + auVar74;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = auVar74._8_8_;
    puVar125[1] = auVar74._0_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar113;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar118;
    auVar75 = auVar11 * auVar43 + auVar75;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = auVar75._0_8_;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = auVar75._8_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = puVar114[-1];
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar120;
    uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + uVar121);
    auVar77 = auVar12 * auVar44 + auVar76 + auVar77;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = auVar77._8_8_;
    puVar125[2] = auVar77._0_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar113;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar118;
    auVar78 = auVar13 * auVar45 + auVar78;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = auVar78._0_8_;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = auVar78._8_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *puVar114;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar120;
    uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + uVar121 + 8);
    auVar80 = auVar14 * auVar46 + auVar79 + auVar80;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = auVar80._8_8_;
    puVar125[3] = auVar80._0_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar113;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar118;
    auVar81 = auVar15 * auVar47 + auVar81;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = auVar81._0_8_;
    uVar116 = auVar81._8_8_;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar116;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = puVar114[1];
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar120;
    uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + uVar121 + 0x10);
    auVar83 = auVar16 * auVar48 + auVar82 + auVar83;
    uVar117 = auVar83._8_8_;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar117;
    puVar125[4] = auVar83._0_8_;
    lVar127 = lVar127 + 0x20;
    puVar119 = puVar114 + 4;
    puVar112 = puVar125 + 4;
  } while (lVar127 != 0);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar113;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar118;
  auVar84 = auVar17 * auVar49 + auVar84;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = auVar84._0_8_;
  puVar119 = puVar125 + 8;
  auVar87._8_8_ = 0;
  auVar87._0_8_ = auVar84._8_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = puVar114[2];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar120;
  uVar113 = *(ulonglong *)((longlong)unaff_RSI + (uVar121 - 8));
  auVar86 = auVar18 * auVar50 + auVar85 + auVar86;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = auVar86._8_8_;
  puVar125[5] = auVar86._0_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar113;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar118;
  auVar87 = auVar19 * auVar51 + auVar87;
  auVar89._8_8_ = 0;
  auVar89._0_8_ = auVar87._0_8_;
  uVar117 = auVar87._8_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = puVar114[3];
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar120;
  uVar113 = *unaff_RSI;
  auVar89 = auVar20 * auVar52 + auVar88 + auVar89;
  uVar118 = auVar89._8_8_;
  puVar125[6] = auVar89._0_8_;
  puVar114 = (ulonglong *)((longlong)(puVar114 + 4) + lVar122);
  uVar116 = (ulonglong)CARRY8(uVar118,uVar117);
  puVar125[7] = uVar118 + uVar117;
  do {
    uVar117 = *(ulonglong *)(pauVar123[-8] + 8) & puVar119[3] |
              *(ulonglong *)(pauVar123[-6] + 8) & puVar119[7] |
              *(ulonglong *)(pauVar123[-4] + 8) & puVar119[0xb] |
              *(ulonglong *)(pauVar123[-2] + 8) & puVar119[0xf] |
              *(ulonglong *)(*pauVar123 + 8) & puVar119[0x13] |
              *(ulonglong *)(pauVar123[2] + 8) & puVar119[0x17] |
              *(ulonglong *)(pauVar123[4] + 8) & puVar119[0x1b] |
              *(ulonglong *)(pauVar123[6] + 8) & puVar119[0x1f] |
              *(ulonglong *)(pauVar123[-7] + 8) & puVar119[5] |
              *(ulonglong *)(pauVar123[-5] + 8) & puVar119[9] |
              *(ulonglong *)(pauVar123[-3] + 8) & puVar119[0xd] |
              *(ulonglong *)(pauVar123[-1] + 8) & puVar119[0x11] |
              *(ulonglong *)(pauVar123[1] + 8) & puVar119[0x15] |
              *(ulonglong *)(pauVar123[3] + 8) & puVar119[0x19] |
              *(ulonglong *)(pauVar123[5] + 8) & puVar119[0x1d] |
              *(ulonglong *)(pauVar123[7] + 8) & puVar119[0x21] |
              *(ulonglong *)pauVar123[-8] & puVar119[2] | *(ulonglong *)pauVar123[-6] & puVar119[6]
              | *(ulonglong *)pauVar123[-4] & puVar119[10] |
              *(ulonglong *)pauVar123[-2] & puVar119[0xe] |
              *(ulonglong *)*pauVar123 & puVar119[0x12] |
              *(ulonglong *)pauVar123[2] & puVar119[0x16] |
              *(ulonglong *)pauVar123[4] & puVar119[0x1a] |
              *(ulonglong *)pauVar123[6] & puVar119[0x1e] |
              *(ulonglong *)pauVar123[-7] & puVar119[4] | *(ulonglong *)pauVar123[-5] & puVar119[8]
              | *(ulonglong *)pauVar123[-3] & puVar119[0xc] |
              *(ulonglong *)pauVar123[-1] & puVar119[0x10] |
              *(ulonglong *)pauVar123[1] & puVar119[0x14] |
              *(ulonglong *)pauVar123[3] & puVar119[0x18] |
              *(ulonglong *)pauVar123[5] & puVar119[0x1c] |
              *(ulonglong *)pauVar123[7] & puVar119[0x20];
    pauVar123 = pauVar123 + 0x10;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = *(ulonglong *)((longlong)puVar119 + lVar122);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar113;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar117;
    auVar90 = auVar21 * auVar53 + auVar90;
    uVar120 = auVar90._0_8_;
    uVar113 = *puVar114;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = auVar90._8_8_;
    uVar118 = lVar4 * uVar120;
    *puVar119 = uVar116;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar113;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar118;
    auVar92._8_8_ = 0;
    auVar92._0_8_ =
         SUB168(auVar22 * auVar54,8) + (ulonglong)CARRY8(uVar120,SUB168(auVar22 * auVar54,0));
    auVar23._8_8_ = 0;
    auVar23._0_8_ = unaff_RSI[1];
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar117;
    auVar91 = auVar23 * auVar55 + auVar91;
    uVar113 = auVar91._0_8_;
    puVar115 = (ulonglong *)((longlong)puVar119 + lVar122) + 1;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar113 + *puVar115;
    uVar116 = auVar91._8_8_ + (ulonglong)CARRY8(uVar113,*puVar115);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = puVar114[1];
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar118;
    uVar113 = unaff_RSI[2];
    auVar93 = auVar24 * auVar56 + auVar92 + auVar93;
    lVar127 = lVar122 + 0x20;
    puVar114 = puVar114 + 4;
    puVar119 = (ulonglong *)((longlong)puVar119 + lVar122);
    do {
      puVar126 = puVar119;
      puVar115 = puVar114;
      auVar94._8_8_ = 0;
      auVar94._0_8_ = uVar116;
      auVar95._8_8_ = 0;
      auVar95._0_8_ = auVar93._8_8_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar113;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar117;
      auVar94 = auVar25 * auVar57 + auVar94;
      uVar113 = auVar94._0_8_;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar113 + puVar126[2];
      puVar119 = puVar126 + 4;
      auVar97._8_8_ = 0;
      auVar97._0_8_ = auVar94._8_8_ + (ulonglong)CARRY8(uVar113,puVar126[2]);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = puVar115[-2];
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar118;
      uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + (uVar121 - 8));
      auVar96 = auVar26 * auVar58 + auVar95 + auVar96;
      auVar98._8_8_ = 0;
      auVar98._0_8_ = auVar96._8_8_;
      *puVar126 = auVar93._0_8_;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar113;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar117;
      auVar97 = auVar27 * auVar59 + auVar97;
      uVar113 = auVar97._0_8_;
      auVar99._8_8_ = 0;
      auVar99._0_8_ = uVar113 + puVar126[3];
      auVar100._8_8_ = 0;
      auVar100._0_8_ = auVar97._8_8_ + (ulonglong)CARRY8(uVar113,puVar126[3]);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = puVar115[-1];
      auVar60._8_8_ = 0;
      auVar60._0_8_ = uVar118;
      uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + uVar121);
      auVar99 = auVar28 * auVar60 + auVar98 + auVar99;
      auVar101._8_8_ = 0;
      auVar101._0_8_ = auVar99._8_8_;
      puVar126[1] = auVar96._0_8_;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar113;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = uVar117;
      auVar100 = auVar29 * auVar61 + auVar100;
      uVar113 = auVar100._0_8_;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = uVar113 + *puVar119;
      auVar103._8_8_ = 0;
      auVar103._0_8_ = auVar100._8_8_ + (ulonglong)CARRY8(uVar113,*puVar119);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = *puVar115;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = uVar118;
      uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + uVar121 + 8);
      auVar102 = auVar30 * auVar62 + auVar101 + auVar102;
      auVar104._8_8_ = 0;
      auVar104._0_8_ = auVar102._8_8_;
      puVar126[2] = auVar99._0_8_;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar113;
      auVar63._8_8_ = 0;
      auVar63._0_8_ = uVar117;
      auVar103 = auVar31 * auVar63 + auVar103;
      uVar113 = auVar103._0_8_;
      auVar105._8_8_ = 0;
      auVar105._0_8_ = uVar113 + puVar126[5];
      uVar116 = auVar103._8_8_ + (ulonglong)CARRY8(uVar113,puVar126[5]);
      auVar106._8_8_ = 0;
      auVar106._0_8_ = uVar116;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = puVar115[1];
      auVar64._8_8_ = 0;
      auVar64._0_8_ = uVar118;
      uVar113 = *(ulonglong *)((longlong)unaff_RSI + lVar127 + uVar121 + 0x10);
      auVar93 = auVar32 * auVar64 + auVar104 + auVar105;
      auVar107._8_8_ = 0;
      auVar107._0_8_ = auVar93._8_8_;
      puVar126[3] = auVar102._0_8_;
      lVar127 = lVar127 + 0x20;
      puVar114 = puVar115 + 4;
    } while (lVar127 != 0);
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar113;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar117;
    auVar106 = auVar33 * auVar65 + auVar106;
    uVar113 = auVar106._0_8_;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar113 + puVar126[6];
    puVar119 = puVar126 + 8;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = auVar106._8_8_ + (ulonglong)CARRY8(uVar113,puVar126[6]);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = puVar115[2];
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar118;
    uVar113 = *(ulonglong *)((longlong)unaff_RSI + (uVar121 - 8));
    auVar108 = auVar34 * auVar66 + auVar107 + auVar108;
    auVar110._8_8_ = 0;
    auVar110._0_8_ = auVar108._8_8_;
    puVar126[4] = auVar93._0_8_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar113;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar117;
    auVar109 = auVar35 * auVar67 + auVar109;
    uVar113 = auVar109._0_8_;
    uVar117 = puVar115[3];
    auVar111._8_8_ = 0;
    auVar111._0_8_ = uVar113 + puVar126[7];
    uVar116 = auVar109._8_8_ + (ulonglong)CARRY8(uVar113,puVar126[7]);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar118;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar117;
    uVar113 = *unaff_RSI;
    auVar111 = auVar36 * auVar68 + auVar110 + auVar111;
    uVar118 = auVar111._8_8_;
    puVar126[5] = auVar108._0_8_;
    puVar126[6] = auVar111._0_8_;
    puVar114 = (ulonglong *)((longlong)(puVar115 + 4) + lVar122);
    uVar120 = uVar118 + uVar116;
    uVar124 = uVar120 + *puVar119;
    uVar116 = (ulonglong)CARRY8(uVar118,uVar116) + (ulonglong)CARRY8(uVar120,*puVar119);
    puVar126[7] = uVar124;
  } while (pauVar123 < param_2 + param_4 * 2 + 8);
  uVar120 = -(uVar116 | uVar117 < uVar124);
  puVar119 = (ulonglong *)((longlong)puVar119 + lVar122);
  lVar122 = lVar122 >> 5;
  uVar118 = *puVar114 - 1;
  lVar127 = 0;
  uVar113 = puVar114[1];
  uVar116 = puVar114[2];
  uVar117 = puVar114[3];
  while( true ) {
    uVar124 = (~uVar118 & uVar120) + *puVar119;
    uVar118 = (ulonglong)
              (CARRY8(~uVar118 & uVar120,*puVar119) || CARRY8(uVar124,(ulonglong)(lVar127 != 0)));
    uVar5 = (~uVar113 & uVar120) + puVar119[1];
    uVar121 = (ulonglong)(CARRY8(~uVar113 & uVar120,puVar119[1]) || CARRY8(uVar5,uVar118));
    uVar6 = (~uVar116 & uVar120) + puVar119[2];
    uVar116 = (ulonglong)(CARRY8(~uVar116 & uVar120,puVar119[2]) || CARRY8(uVar6,uVar121));
    uVar113 = puVar119[3];
    uVar7 = (~uVar117 & uVar120) + puVar119[3];
    *unaff_RDI = uVar124 + (lVar127 != 0);
    puVar119 = puVar119 + 4;
    unaff_RDI[1] = uVar5 + uVar118;
    lVar127 = -(ulonglong)(CARRY8(~uVar117 & uVar120,uVar113) || CARRY8(uVar7,uVar116));
    unaff_RDI[2] = uVar6 + uVar121;
    unaff_RDI[3] = uVar7 + uVar116;
    unaff_RDI = unaff_RDI + 4;
    lVar122 = lVar122 + 1;
    if (lVar122 == 0) break;
    uVar118 = puVar114[4];
    uVar113 = puVar114[5];
    uVar116 = puVar114[6];
    uVar117 = puVar114[7];
    puVar114 = puVar114 + 4;
  }
  return;
}

// bn_power5 @ 140e2f4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
bn_power5(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  
  if ((_DAT_15540a9f8 & 0x80108) != 0x80108) {
    uVar3 = (ulonglong)(uint)(param_6 * 8);
    uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
    if ((uint)(param_6 * 0x18) < uVar4) {
      uVar1 = uVar3 * -2 + 0xec0;
      lVar5 = uVar4 - uVar1;
      if (uVar4 < uVar1) {
        lVar5 = 0;
      }
      puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
    }
    else {
      puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
    }
    uVar1 = (ulonglong)puVar2 & 0xffffffffffffffc0;
    for (uVar4 = uVar1 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar1) & 0xfffffffffffff000);
        uVar1 < uVar4; uVar4 = uVar4 - 0x1000) {
    }
    *(undefined8 *)(uVar4 + 0x20) = *param_5;
    *(BADSPACEBASE **)(uVar4 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5ba;
    bn_sqr8x_internal(param_4,param_1,param_4,uVar3);
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5bf;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5c4;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5c9;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5ce;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5d3;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5d8;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5dd;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5e2;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5e7;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f603;
    mul4x_internal(param_4,param_3,uVar4 + 0x20);
    return 1;
  }
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar1 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar4 = uVar1 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar1) & 0xfffffffffffff000);
      uVar1 < uVar4; uVar4 = uVar4 - 0x1000) {
  }
  *(undefined8 *)(uVar4 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar4 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar4 - 8) = 0x140e3097e;
  bn_sqrx8x_internal(0,param_3,param_4,uVar3);
  *(undefined8 *)(uVar4 - 8) = 0x140e30983;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30988;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3098d;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30992;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30997;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3099c;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a1;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a6;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309ab;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309c5;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// L$SEH_begin_bn_power5 @ 140e2f4cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
L_SEH_begin_bn_power5
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  
  if ((_DAT_15540a9f8 & 0x80108) != 0x80108) {
    uVar3 = (ulonglong)(uint)(param_6 * 8);
    uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
    if ((uint)(param_6 * 0x18) < uVar4) {
      uVar1 = uVar3 * -2 + 0xec0;
      lVar5 = uVar4 - uVar1;
      if (uVar4 < uVar1) {
        lVar5 = 0;
      }
      puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
    }
    else {
      puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
    }
    uVar1 = (ulonglong)puVar2 & 0xffffffffffffffc0;
    for (uVar4 = uVar1 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar1) & 0xfffffffffffff000);
        uVar1 < uVar4; uVar4 = uVar4 - 0x1000) {
    }
    *(undefined8 *)(uVar4 + 0x20) = *param_5;
    *(BADSPACEBASE **)(uVar4 + 0x28) = register0x00000020;
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5ba;
    bn_sqr8x_internal(param_4,param_1,param_4,uVar3);
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5bf;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5c4;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5c9;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5ce;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5d3;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5d8;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5dd;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5e2;
    bn_sqr8x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f5e7;
    __bn_post4x_internal();
    *(undefined8 *)(uVar4 - 8) = 0x140e2f603;
    mul4x_internal(param_4,param_3,uVar4 + 0x20);
    return 1;
  }
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar1 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar4 = uVar1 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar1) & 0xfffffffffffff000);
      uVar1 < uVar4; uVar4 = uVar4 - 0x1000) {
  }
  *(undefined8 *)(uVar4 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar4 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar4 - 8) = 0x140e3097e;
  bn_sqrx8x_internal(0,param_3,param_4,uVar3);
  *(undefined8 *)(uVar4 - 8) = 0x140e30983;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30988;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3098d;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30992;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30997;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3099c;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a1;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a6;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309ab;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309c5;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// bn_sqr8x_internal @ 140e2f640

void bn_sqr8x_internal(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4,
                      longlong param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                      ulonglong param_9,ulonglong param_10,ulonglong param_11,ulonglong param_12,
                      undefined8 param_13,ulonglong param_14)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  ulonglong uVar178;
  uint uVar179;
  ulonglong uVar180;
  ulonglong uVar181;
  ulonglong *puVar182;
  longlong lVar183;
  ulonglong *puVar184;
  longlong unaff_RSI;
  ulonglong *puVar185;
  ulonglong *puVar186;
  ulonglong uVar187;
  ulonglong uVar188;
  ulonglong uVar189;
  longlong in_R10;
  ulonglong uVar190;
  ulonglong uVar191;
  ulonglong uVar192;
  ulonglong uVar193;
  ulonglong uVar194;
  ulonglong uVar195;
  ulonglong uVar196;
  ulonglong uVar197;
  longlong lVar198;
  ulonglong uVar199;
  bool bVar200;
  longlong in_XMM3_Qa;
  ulonglong *local_res8 [2];
  ulonglong uStackX_18;
  ulonglong uStackX_20;
  
  lVar183 = in_R10 + 0x20;
  lVar2 = unaff_RSI + param_4;
  uVar178 = *(ulonglong *)(lVar2 + -0x20 + lVar183);
  uVar189 = *(ulonglong *)(lVar2 + -0x18 + lVar183);
  pauVar3 = (undefined1 (*) [16])((longlong)&param_7 + lVar183 + param_4 * 2 + -0x20);
  uVar180 = *(ulonglong *)(lVar2 + -0x10 + lVar183);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar189;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar178;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = SUB168(auVar5 * auVar57,8);
  *(longlong *)(*pauVar3 + in_R10 + 8) = SUB168(auVar5 * auVar57,0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar180;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar178;
  auVar109 = auVar6 * auVar58 + auVar109;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = auVar109._8_8_;
  *(longlong *)(pauVar3[1] + in_R10) = auVar109._0_8_;
  uVar192 = *(ulonglong *)(lVar2 + -8 + lVar183);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar180;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar189;
  uVar180 = SUB168(auVar7 * auVar59,8);
  auVar111._8_8_ = 0;
  auVar111._0_8_ = SUB168(auVar7 * auVar59,0);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar192;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar178;
  auVar111 = auVar8 * auVar60 + auVar110 + auVar111;
  uVar191 = auVar111._8_8_;
  *(longlong *)(pauVar3[1] + in_R10 + 8) = auVar111._0_8_;
  do {
    auVar113._8_8_ = 0;
    auVar113._0_8_ = uVar191;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = uVar180;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar192;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar189;
    auVar112 = auVar9 * auVar61 + auVar112;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = auVar112._0_8_;
    auVar115._8_8_ = 0;
    auVar115._0_8_ = auVar112._8_8_;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(lVar2 + lVar183);
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar178;
    uVar180 = *(ulonglong *)(lVar2 + 8 + lVar183);
    auVar114 = auVar10 * auVar62 + auVar113 + auVar114;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = auVar114._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(lVar2 + lVar183);
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar189;
    auVar115 = auVar11 * auVar63 + auVar115;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = auVar115._0_8_;
    *(longlong *)(*pauVar3 + lVar183) = auVar114._0_8_;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = auVar115._8_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar180;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar178;
    uVar191 = *(ulonglong *)(lVar2 + 0x10 + lVar183);
    auVar117 = auVar12 * auVar64 + auVar116 + auVar117;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = auVar117._8_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar180;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar189;
    auVar118 = auVar13 * auVar65 + auVar118;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = auVar118._0_8_;
    *(longlong *)(*pauVar3 + lVar183 + 8) = auVar117._0_8_;
    auVar121._8_8_ = 0;
    auVar121._0_8_ = auVar118._8_8_;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar191;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar178;
    uVar192 = *(ulonglong *)(lVar2 + 0x18 + lVar183);
    auVar120 = auVar14 * auVar66 + auVar119 + auVar120;
    auVar122._8_8_ = 0;
    auVar122._0_8_ = auVar120._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar191;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar189;
    auVar121 = auVar15 * auVar67 + auVar121;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = auVar121._0_8_;
    *(longlong *)(pauVar3[1] + lVar183) = auVar120._0_8_;
    uVar180 = auVar121._8_8_;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = uVar180;
    lVar198 = lVar183 + 0x20;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar192;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar178;
    auVar123 = auVar16 * auVar68 + auVar122 + auVar123;
    uVar191 = auVar123._8_8_;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = uVar191;
    *(longlong *)(pauVar3[1] + lVar183 + 8) = auVar123._0_8_;
    lVar183 = lVar198;
  } while (lVar198 != 0);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar192;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = uVar189;
  *pauVar3 = auVar17 * auVar69 + auVar124 + auVar125;
  lVar183 = in_R10 + 0x30;
  do {
    lVar198 = lVar183;
    uVar178 = *(ulonglong *)(lVar2 + -0x20 + lVar198);
    uVar189 = *(ulonglong *)(lVar2 + -0x18 + lVar198);
    pauVar3 = (undefined1 (*) [16])((longlong)&uStackX_18 + lVar198 + param_4 * 2);
    uVar180 = *(ulonglong *)(lVar2 + -0x10 + lVar198);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar189;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar178;
    auVar126._8_8_ = 0;
    auVar126._0_8_ = *(ulonglong *)(pauVar3[-2] + lVar198 + 8);
    auVar126 = auVar18 * auVar70 + auVar126;
    auVar127._8_8_ = 0;
    auVar127._0_8_ = auVar126._8_8_;
    *(longlong *)(pauVar3[-2] + lVar198 + 8) = auVar126._0_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar180;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar178;
    auVar127 = auVar19 * auVar71 + auVar127;
    uVar192 = auVar127._0_8_;
    auVar128._8_8_ = 0;
    auVar128._0_8_ =
         auVar127._8_8_ + (ulonglong)CARRY8(uVar192,*(ulonglong *)(pauVar3[-1] + lVar198));
    *(ulonglong *)(pauVar3[-1] + lVar198) = uVar192 + *(ulonglong *)(pauVar3[-1] + lVar198);
    uVar192 = *(ulonglong *)(lVar2 + -8 + lVar198);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar180;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar189;
    uVar180 = SUB168(auVar20 * auVar72,0);
    auVar129._8_8_ = 0;
    auVar129._0_8_ = uVar180 + *(ulonglong *)(pauVar3[-1] + lVar198 + 8);
    uVar191 = SUB168(auVar20 * auVar72,8) +
              (ulonglong)CARRY8(uVar180,*(ulonglong *)(pauVar3[-1] + lVar198 + 8));
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar192;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar178;
    auVar129 = auVar21 * auVar73 + auVar128 + auVar129;
    uVar180 = auVar129._8_8_;
    *(longlong *)(pauVar3[-1] + lVar198 + 8) = auVar129._0_8_;
    lVar183 = lVar198;
    do {
      auVar131._8_8_ = 0;
      auVar131._0_8_ = uVar180;
      auVar130._8_8_ = 0;
      auVar130._0_8_ = uVar191;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar192;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uVar189;
      auVar130 = auVar22 * auVar74 + auVar130;
      uVar180 = auVar130._0_8_;
      auVar132._8_8_ = 0;
      auVar132._0_8_ = uVar180 + *(ulonglong *)(*pauVar3 + lVar183);
      auVar133._8_8_ = 0;
      auVar133._0_8_ =
           auVar130._8_8_ + (ulonglong)CARRY8(uVar180,*(ulonglong *)(*pauVar3 + lVar183));
      auVar23._8_8_ = 0;
      auVar23._0_8_ = *(ulonglong *)(lVar2 + lVar183);
      auVar75._8_8_ = 0;
      auVar75._0_8_ = uVar178;
      uVar192 = *(ulonglong *)(lVar2 + 8 + lVar183);
      auVar132 = auVar23 * auVar75 + auVar131 + auVar132;
      auVar134._8_8_ = 0;
      auVar134._0_8_ = auVar132._8_8_;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(ulonglong *)(lVar2 + lVar183);
      auVar76._8_8_ = 0;
      auVar76._0_8_ = uVar189;
      auVar133 = auVar24 * auVar76 + auVar133;
      uVar180 = auVar133._0_8_;
      *(longlong *)(*pauVar3 + lVar183) = auVar132._0_8_;
      auVar135._8_8_ = 0;
      auVar135._0_8_ = uVar180 + *(ulonglong *)(*pauVar3 + lVar183 + 8);
      lVar1 = lVar183 + 0x10;
      uVar191 = auVar133._8_8_ + (ulonglong)CARRY8(uVar180,*(ulonglong *)(*pauVar3 + lVar183 + 8));
      auVar136._8_8_ = 0;
      auVar136._0_8_ = uVar191;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar192;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = uVar178;
      auVar135 = auVar25 * auVar77 + auVar134 + auVar135;
      uVar190 = auVar135._0_8_;
      auVar138._8_8_ = 0;
      auVar138._0_8_ = uVar190;
      uVar180 = auVar135._8_8_;
      auVar137._8_8_ = 0;
      auVar137._0_8_ = uVar180;
      *(ulonglong *)(*pauVar3 + lVar183 + 8) = uVar190;
      lVar183 = lVar1;
    } while (lVar1 != 0);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar192;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar189;
    auVar137 = auVar26 * auVar78 + auVar136 + auVar137;
    auVar140._8_8_ = 0;
    auVar140._0_8_ = auVar137._0_8_;
    auVar141._8_8_ = 0;
    auVar141._0_8_ = auVar137._8_8_;
    *pauVar3 = auVar137;
    lVar183 = lVar198 + 0x10;
  } while (lVar198 + 0x10 != 0);
  uVar178 = *(ulonglong *)(lVar2 + -0x20);
  lVar1 = param_4 * 2;
  uVar189 = *(ulonglong *)(lVar2 + -0x18);
  uVar180 = *(ulonglong *)(lVar2 + -0x10);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar189;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = uVar178;
  auVar138 = auVar27 * auVar79 + auVar138;
  auVar139._8_8_ = 0;
  auVar139._0_8_ = auVar138._8_8_;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar180;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = uVar178;
  *(longlong *)(&stack0x00000000 + lVar1) = auVar138._0_8_;
  auVar140 = auVar28 * auVar80 + auVar139 + auVar140;
  uVar192 = *(ulonglong *)(lVar2 + -8);
  auVar142._8_8_ = 0;
  auVar142._0_8_ = auVar140._8_8_;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar180;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = uVar189;
  auVar141 = auVar29 * auVar81 + auVar141;
  auVar143._8_8_ = 0;
  auVar143._0_8_ = auVar141._0_8_;
  *(longlong *)((longlong)local_res8 + lVar1) = auVar140._0_8_;
  auVar144._8_8_ = 0;
  auVar144._0_8_ = auVar141._8_8_;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar192;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = uVar178;
  auVar143 = auVar30 * auVar82 + auVar142 + auVar143;
  auVar145._8_8_ = 0;
  auVar145._0_8_ = auVar143._8_8_;
  *(longlong *)((longlong)local_res8 + lVar1 + 8) = auVar143._0_8_;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar192;
  auVar83._8_8_ = 0;
  auVar83._0_8_ = uVar189;
  uVar178 = *(ulonglong *)(lVar2 + -0x10);
  auVar145 = auVar31 * auVar83 + auVar144 + auVar145;
  auVar146._8_8_ = 0;
  auVar146._0_8_ = auVar145._8_8_;
  *(undefined1 (*) [16])((longlong)&uStackX_18 + lVar1) = auVar145;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar178;
  auVar84._8_8_ = 0;
  auVar84._0_8_ = uVar192;
  lVar183 = (lVar198 + 0x20) - param_4;
  *(undefined1 (*) [16])((longlong)&uStackX_20 + lVar1) = auVar32 * auVar84 + auVar146;
  *(undefined8 *)((longlong)&param_6 + lVar1) = 0;
  uVar189 = *(ulonglong *)(lVar2 + -0x10 + lVar183);
  uVar178 = param_8 * 2;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar189;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = uVar189;
  uVar191 = SUB168(auVar33 * auVar85,8);
  uVar192 = *(ulonglong *)(lVar2 + -8 + lVar183);
  param_7 = SUB168(auVar33 * auVar85,0);
  uVar189 = param_9 * 2 - (param_8 >> 0x3f);
  param_8 = uVar178 + uVar191;
  uVar180 = param_10 >> 0x3f;
  uVar187 = param_10 * 2 | param_9 >> 0x3f;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar192;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = uVar192;
  uVar181 = SUB168(auVar34 * auVar86,8);
  uVar190 = SUB168(auVar34 * auVar86,0);
  uVar192 = (ulonglong)CARRY8(uVar178,uVar191);
  uVar191 = uVar189 + uVar190;
  uVar178 = *(ulonglong *)(lVar2 + lVar183);
  param_9 = uVar191 + uVar192;
  uVar189 = (ulonglong)(CARRY8(uVar189,uVar190) || CARRY8(uVar191,uVar192));
  uVar192 = uVar187 + uVar181;
  lVar183 = lVar183 + 0x10;
  param_10 = uVar192 + uVar189;
  lVar198 = -(ulonglong)(CARRY8(uVar187,uVar181) || CARRY8(uVar192,uVar189));
  puVar185 = (ulonglong *)&stack0x00000078;
  do {
    puVar182 = puVar185;
    uVar180 = uVar180 + param_11 * 2;
    uVar187 = param_12 * 2 | param_11 >> 0x3f;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar178;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar178;
    uVar190 = SUB168(auVar35 * auVar87,8);
    uVar192 = SUB168(auVar35 * auVar87,0);
    uVar178 = uVar180 + uVar192;
    uVar189 = *(ulonglong *)(lVar2 + -8 + lVar183);
    puVar182[-4] = uVar178 + (lVar198 != 0);
    uVar180 = (ulonglong)(CARRY8(uVar180,uVar192) || CARRY8(uVar178,(ulonglong)(lVar198 != 0)));
    uVar192 = uVar187 + uVar190;
    uVar178 = puVar182[-2] * 2 - ((longlong)param_12 >> 0x3f);
    puVar182[-3] = uVar192 + uVar180;
    uVar188 = puVar182[-1] * 2 | puVar182[-2] >> 0x3f;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar189;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = uVar189;
    uVar181 = SUB168(auVar36 * auVar88,8);
    uVar191 = SUB168(auVar36 * auVar88,0);
    uVar180 = (ulonglong)(CARRY8(uVar187,uVar190) || CARRY8(uVar192,uVar180));
    uVar192 = uVar178 + uVar191;
    uVar189 = *(ulonglong *)(lVar2 + lVar183);
    puVar182[-2] = uVar192 + uVar180;
    uVar180 = (ulonglong)(CARRY8(uVar178,uVar191) || CARRY8(uVar192,uVar180));
    uVar192 = uVar188 + uVar181;
    uVar178 = *puVar182 * 2 - ((longlong)puVar182[-1] >> 0x3f);
    puVar182[-1] = uVar192 + uVar180;
    uVar195 = puVar182[1] * 2 | *puVar182 >> 0x3f;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar189;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = uVar189;
    uVar187 = SUB168(auVar37 * auVar89,8);
    uVar191 = SUB168(auVar37 * auVar89,0);
    uVar189 = (ulonglong)(CARRY8(uVar188,uVar181) || CARRY8(uVar192,uVar180));
    uVar180 = uVar178 + uVar191;
    uVar192 = *(ulonglong *)(lVar2 + 8 + lVar183);
    *puVar182 = uVar180 + uVar189;
    uVar178 = (ulonglong)(CARRY8(uVar178,uVar191) || CARRY8(uVar180,uVar189));
    uVar191 = uVar195 + uVar187;
    uVar189 = puVar182[2] * 2 - ((longlong)puVar182[1] >> 0x3f);
    puVar182[1] = uVar191 + uVar178;
    uVar180 = -((longlong)puVar182[3] >> 0x3f);
    uVar188 = puVar182[3] * 2 | puVar182[2] >> 0x3f;
    param_11 = puVar182[4];
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar192;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = uVar192;
    uVar181 = SUB168(auVar38 * auVar90,8);
    uVar190 = SUB168(auVar38 * auVar90,0);
    param_12 = puVar182[5];
    uVar192 = (ulonglong)(CARRY8(uVar195,uVar187) || CARRY8(uVar191,uVar178));
    uVar191 = uVar189 + uVar190;
    uVar178 = *(ulonglong *)(lVar2 + 0x10 + lVar183);
    puVar182[2] = uVar191 + uVar192;
    uVar189 = (ulonglong)(CARRY8(uVar189,uVar190) || CARRY8(uVar191,uVar192));
    uVar192 = uVar188 + uVar181;
    puVar182[3] = uVar192 + uVar189;
    lVar198 = -(ulonglong)(CARRY8(uVar188,uVar181) || CARRY8(uVar192,uVar189));
    lVar183 = lVar183 + 0x20;
    puVar185 = puVar182 + 8;
  } while (lVar183 != 0);
  uVar180 = uVar180 + param_11 * 2;
  uVar187 = param_12 * 2 | param_11 >> 0x3f;
  uVar189 = puVar182[6];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar178;
  auVar91._8_8_ = 0;
  auVar91._0_8_ = uVar178;
  uVar181 = SUB168(auVar39 * auVar91,8);
  uVar191 = SUB168(auVar39 * auVar91,0);
  uVar178 = uVar180 + uVar191;
  uVar192 = *(ulonglong *)(lVar2 + -8);
  puVar182[4] = uVar178 + (lVar198 != 0);
  uVar180 = (ulonglong)(CARRY8(uVar180,uVar191) || CARRY8(uVar178,(ulonglong)(lVar198 != 0)));
  uVar191 = uVar187 + uVar181;
  uVar178 = uVar189 * 2 - ((longlong)param_12 >> 0x3f);
  puVar182[5] = uVar191 + uVar180;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar192;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = uVar192;
  uVar190 = SUB168(auVar40 * auVar92,0);
  uVar180 = (ulonglong)(CARRY8(uVar187,uVar181) || CARRY8(uVar191,uVar180));
  uVar192 = uVar178 + uVar190;
  puVar182[6] = uVar192 + uVar180;
  puVar182[7] = (puVar182[7] * 2 | uVar189 >> 0x3f) + SUB168(auVar40 * auVar92,8) +
                (ulonglong)(CARRY8(uVar178,uVar190) || CARRY8(uVar192,uVar180));
  uVar178 = 0;
  local_res8[0] = (ulonglong *)(param_4 + (longlong)param_3);
  local_res8[1] = (ulonglong *)((longlong)&param_7 + param_4 * 2);
  puVar185 = (ulonglong *)((longlong)&param_7 + param_4);
  puVar182 = local_res8[1];
  lVar183 = -param_4;
  do {
    puVar185 = (ulonglong *)((longlong)puVar185 + lVar183);
    uVar189 = *puVar185;
    uVar180 = puVar185[1];
    uVar192 = puVar185[2];
    uVar191 = puVar185[3];
    uVar190 = puVar185[4];
    uVar181 = puVar185[5];
    auVar160 = *(undefined1 (*) [16])(puVar185 + 6);
    *puVar182 = uVar178;
    puVar182 = puVar185 + 8;
    uVar178 = *param_3;
    uVar187 = 8;
    do {
      uVar188 = uVar189 * param_5;
      auVar159._8_8_ = 0;
      auVar159._0_8_ = auVar160._8_8_;
      auVar157._8_8_ = 0;
      auVar157._0_8_ = auVar160._0_8_;
      auVar155._8_8_ = 0;
      auVar155._0_8_ = uVar181;
      auVar153._8_8_ = 0;
      auVar153._0_8_ = uVar190;
      auVar151._8_8_ = 0;
      auVar151._0_8_ = uVar191;
      auVar149._8_8_ = 0;
      auVar149._0_8_ = uVar192;
      auVar147._8_8_ = 0;
      auVar147._0_8_ = uVar180;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar178;
      auVar93._8_8_ = 0;
      auVar93._0_8_ = uVar188;
      auVar148._8_8_ = 0;
      auVar148._0_8_ = SUB168(auVar41 * auVar93,8) + (ulonglong)(uVar189 != 0);
      auVar42._8_8_ = 0;
      auVar42._0_8_ = param_3[1];
      auVar94._8_8_ = 0;
      auVar94._0_8_ = uVar188;
      uVar178 = param_3[2];
      auVar148 = auVar42 * auVar94 + auVar147 + auVar148;
      uVar189 = auVar148._0_8_;
      *(ulonglong *)((longlong)&param_6 + uVar187 * 8) = uVar188;
      auVar150._8_8_ = 0;
      auVar150._0_8_ = auVar148._8_8_;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar178;
      auVar95._8_8_ = 0;
      auVar95._0_8_ = uVar188;
      auVar150 = auVar43 * auVar95 + auVar149 + auVar150;
      uVar180 = auVar150._0_8_;
      auVar152._8_8_ = 0;
      auVar152._0_8_ = auVar150._8_8_;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = param_3[3];
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar188;
      auVar152 = auVar44 * auVar96 + auVar151 + auVar152;
      uVar192 = auVar152._0_8_;
      auVar154._8_8_ = 0;
      auVar154._0_8_ = auVar152._8_8_;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = param_3[4];
      auVar97._8_8_ = 0;
      auVar97._0_8_ = uVar188;
      auVar154 = auVar45 * auVar97 + auVar153 + auVar154;
      uVar191 = auVar154._0_8_;
      auVar156._8_8_ = 0;
      auVar156._0_8_ = auVar154._8_8_;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = param_3[5];
      auVar98._8_8_ = 0;
      auVar98._0_8_ = uVar188;
      auVar156 = auVar46 * auVar98 + auVar155 + auVar156;
      uVar190 = auVar156._0_8_;
      auVar158._8_8_ = 0;
      auVar158._0_8_ = auVar156._8_8_;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = param_3[6];
      auVar99._8_8_ = 0;
      auVar99._0_8_ = uVar188;
      auVar158 = auVar47 * auVar99 + auVar157 + auVar158;
      uVar181 = auVar158._0_8_;
      auVar160._8_8_ = 0;
      auVar160._0_8_ = auVar158._8_8_;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = param_3[7];
      auVar100._8_8_ = 0;
      auVar100._0_8_ = uVar188;
      uVar178 = *param_3;
      auVar160 = auVar48 * auVar100 + auVar159 + auVar160;
      uVar179 = (int)uVar187 - 1;
      uVar187 = (ulonglong)uVar179;
    } while (uVar179 != 0);
    puVar184 = param_3 + 8;
    uVar178 = 0;
    bVar200 = false;
    if (puVar184 < local_res8[0]) {
      uVar187 = uVar189 + *puVar182;
      uVar178 = uVar180 + puVar185[9];
      uVar188 = uVar178 + CARRY8(uVar189,*puVar182);
      uVar178 = (ulonglong)
                (CARRY8(uVar180,puVar185[9]) || CARRY8(uVar178,(ulonglong)CARRY8(uVar189,*puVar182))
                );
      uVar189 = uVar192 + puVar185[10];
      uVar195 = uVar189 + uVar178;
      uVar178 = (ulonglong)(CARRY8(uVar192,puVar185[10]) || CARRY8(uVar189,uVar178));
      uVar189 = uVar191 + puVar185[0xb];
      uVar193 = uVar189 + uVar178;
      uVar178 = (ulonglong)(CARRY8(uVar191,puVar185[0xb]) || CARRY8(uVar189,uVar178));
      uVar189 = uVar190 + puVar185[0xc];
      uVar194 = uVar189 + uVar178;
      uVar178 = (ulonglong)(CARRY8(uVar190,puVar185[0xc]) || CARRY8(uVar189,uVar178));
      uVar189 = uVar181 + puVar185[0xd];
      uVar196 = uVar189 + uVar178;
      uVar178 = (ulonglong)(CARRY8(uVar181,puVar185[0xd]) || CARRY8(uVar189,uVar178));
      uVar180 = auVar160._0_8_ + puVar185[0xe];
      uVar189 = (ulonglong)(CARRY8(auVar160._0_8_,puVar185[0xe]) || CARRY8(uVar180,uVar178));
      uVar192 = auVar160._8_8_ + puVar185[0xf];
      auVar175._8_8_ = uVar192 + uVar189;
      auVar175._0_8_ = uVar180 + uVar178;
      lVar183 = -(ulonglong)(CARRY8(auVar160._8_8_,puVar185[0xf]) || CARRY8(uVar192,uVar189));
      uVar180 = 8;
      uVar178 = *puVar184;
      uVar189 = param_14;
      while( true ) {
        do {
          puVar186 = puVar182;
          auVar174._8_8_ = 0;
          auVar174._0_8_ = auVar175._8_8_;
          auVar172._8_8_ = 0;
          auVar172._0_8_ = auVar175._0_8_;
          auVar170._8_8_ = 0;
          auVar170._0_8_ = uVar196;
          auVar168._8_8_ = 0;
          auVar168._0_8_ = uVar194;
          auVar166._8_8_ = 0;
          auVar166._0_8_ = uVar193;
          auVar164._8_8_ = 0;
          auVar164._0_8_ = uVar195;
          auVar162._8_8_ = 0;
          auVar162._0_8_ = uVar188;
          auVar161._8_8_ = 0;
          auVar161._0_8_ = uVar187;
          auVar49._8_8_ = 0;
          auVar49._0_8_ = uVar178;
          auVar101._8_8_ = 0;
          auVar101._0_8_ = uVar189;
          auVar161 = auVar49 * auVar101 + auVar161;
          uVar178 = puVar184[1];
          *puVar186 = auVar161._0_8_;
          auVar163._8_8_ = 0;
          auVar163._0_8_ = auVar161._8_8_;
          auVar50._8_8_ = 0;
          auVar50._0_8_ = uVar178;
          auVar102._8_8_ = 0;
          auVar102._0_8_ = uVar189;
          auVar163 = auVar50 * auVar102 + auVar162 + auVar163;
          uVar187 = auVar163._0_8_;
          puVar182 = puVar186 + 1;
          auVar165._8_8_ = 0;
          auVar165._0_8_ = auVar163._8_8_;
          auVar51._8_8_ = 0;
          auVar51._0_8_ = puVar184[2];
          auVar103._8_8_ = 0;
          auVar103._0_8_ = uVar189;
          auVar165 = auVar51 * auVar103 + auVar164 + auVar165;
          uVar188 = auVar165._0_8_;
          auVar167._8_8_ = 0;
          auVar167._0_8_ = auVar165._8_8_;
          auVar52._8_8_ = 0;
          auVar52._0_8_ = puVar184[3];
          auVar104._8_8_ = 0;
          auVar104._0_8_ = uVar189;
          auVar167 = auVar52 * auVar104 + auVar166 + auVar167;
          uVar195 = auVar167._0_8_;
          auVar169._8_8_ = 0;
          auVar169._0_8_ = auVar167._8_8_;
          auVar53._8_8_ = 0;
          auVar53._0_8_ = puVar184[4];
          auVar105._8_8_ = 0;
          auVar105._0_8_ = uVar189;
          auVar169 = auVar53 * auVar105 + auVar168 + auVar169;
          uVar193 = auVar169._0_8_;
          auVar171._8_8_ = 0;
          auVar171._0_8_ = auVar169._8_8_;
          auVar54._8_8_ = 0;
          auVar54._0_8_ = puVar184[5];
          auVar106._8_8_ = 0;
          auVar106._0_8_ = uVar189;
          auVar171 = auVar54 * auVar106 + auVar170 + auVar171;
          uVar194 = auVar171._0_8_;
          auVar173._8_8_ = 0;
          auVar173._0_8_ = auVar171._8_8_;
          auVar55._8_8_ = 0;
          auVar55._0_8_ = puVar184[6];
          auVar107._8_8_ = 0;
          auVar107._0_8_ = uVar189;
          auVar173 = auVar55 * auVar107 + auVar172 + auVar173;
          uVar196 = auVar173._0_8_;
          auVar176._8_8_ = 0;
          auVar176._0_8_ = auVar173._8_8_;
          auVar56._8_8_ = 0;
          auVar56._0_8_ = puVar184[7];
          auVar108._8_8_ = 0;
          auVar108._0_8_ = uVar189;
          puVar185 = (ulonglong *)(&param_5 + uVar180);
          auVar175 = auVar56 * auVar108 + auVar174 + auVar176;
          uVar197 = auVar175._0_8_;
          uVar178 = *puVar184;
          uVar199 = auVar175._8_8_;
          uVar179 = (int)uVar180 - 1;
          uVar180 = (ulonglong)uVar179;
          uVar189 = *puVar185;
        } while (uVar179 != 0);
        puVar184 = puVar184 + 8;
        if (local_res8[0] <= puVar184) break;
        uVar178 = *puVar184;
        bVar200 = CARRY8(uVar187,*puVar182);
        uVar189 = uVar187 + *puVar182;
        uVar187 = uVar189 + (lVar183 != 0);
        uVar189 = (ulonglong)(bVar200 || CARRY8(uVar189,(ulonglong)(lVar183 != 0)));
        bVar200 = CARRY8(uVar188,puVar186[2]);
        uVar180 = uVar188 + puVar186[2];
        uVar188 = uVar180 + uVar189;
        uVar189 = (ulonglong)(bVar200 || CARRY8(uVar180,uVar189));
        bVar200 = CARRY8(uVar195,puVar186[3]);
        uVar180 = uVar195 + puVar186[3];
        uVar195 = uVar180 + uVar189;
        uVar189 = (ulonglong)(bVar200 || CARRY8(uVar180,uVar189));
        bVar200 = CARRY8(uVar193,puVar186[4]);
        uVar180 = uVar193 + puVar186[4];
        uVar193 = uVar180 + uVar189;
        uVar189 = (ulonglong)(bVar200 || CARRY8(uVar180,uVar189));
        bVar200 = CARRY8(uVar194,puVar186[5]);
        uVar180 = uVar194 + puVar186[5];
        uVar194 = uVar180 + uVar189;
        uVar189 = (ulonglong)(bVar200 || CARRY8(uVar180,uVar189));
        bVar200 = CARRY8(uVar196,puVar186[6]);
        uVar180 = uVar196 + puVar186[6];
        uVar196 = uVar180 + uVar189;
        uVar189 = (ulonglong)(bVar200 || CARRY8(uVar180,uVar189));
        uVar192 = uVar197 + puVar186[7];
        uVar180 = (ulonglong)(CARRY8(uVar197,puVar186[7]) || CARRY8(uVar192,uVar189));
        uVar191 = uVar199 + puVar186[8];
        auVar175._8_8_ = uVar191 + uVar180;
        auVar175._0_8_ = uVar192 + uVar189;
        lVar183 = -(ulonglong)(CARRY8(uVar199,puVar186[8]) || CARRY8(uVar191,uVar180));
        uVar180 = 8;
        uVar189 = param_14;
      }
      uVar189 = uVar187 + *local_res8[1];
      uVar180 = uVar188 + CARRY8(uVar187,*local_res8[1]);
      uVar178 = (ulonglong)CARRY8(uVar188,(ulonglong)CARRY8(uVar187,*local_res8[1]));
      uVar192 = uVar195 + uVar178;
      uVar178 = (ulonglong)CARRY8(uVar195,uVar178);
      uVar191 = uVar193 + uVar178;
      uVar178 = (ulonglong)CARRY8(uVar193,uVar178);
      uVar190 = uVar194 + uVar178;
      uVar178 = (ulonglong)CARRY8(uVar194,uVar178);
      uVar181 = uVar196 + uVar178;
      uVar178 = CONCAT71(0,CARRY8(uVar196,uVar178));
      auVar177._8_8_ = 0;
      auVar177._0_8_ = uVar178;
      auVar160 = auVar175 + auVar177;
      uVar178 = (ulonglong)CARRY8(uVar199,(ulonglong)CARRY8(uVar197,uVar178));
      bVar200 = lVar183 != 0;
    }
    uVar187 = (ulonglong)
              (CARRY8(uVar189,*puVar182) || CARRY8(uVar189 + *puVar182,(ulonglong)bVar200));
    uVar195 = uVar180 + puVar182[1];
    uVar180 = (ulonglong)(CARRY8(uVar180,puVar182[1]) || CARRY8(uVar195,uVar187));
    uVar193 = uVar192 + puVar182[2];
    uVar192 = (ulonglong)(CARRY8(uVar192,puVar182[2]) || CARRY8(uVar193,uVar180));
    uVar194 = uVar191 + puVar182[3];
    uVar191 = (ulonglong)(CARRY8(uVar191,puVar182[3]) || CARRY8(uVar194,uVar192));
    uVar196 = uVar190 + puVar182[4];
    uVar190 = (ulonglong)(CARRY8(uVar190,puVar182[4]) || CARRY8(uVar196,uVar191));
    uVar197 = uVar181 + puVar182[5];
    uVar181 = (ulonglong)(CARRY8(uVar181,puVar182[5]) || CARRY8(uVar197,uVar190));
    uVar199 = auVar160._0_8_ + puVar182[6];
    uVar188 = (ulonglong)(CARRY8(auVar160._0_8_,puVar182[6]) || CARRY8(uVar199,uVar181));
    uVar4 = auVar160._8_8_ + puVar182[7];
    uVar178 = uVar178 + (CARRY8(auVar160._8_8_,puVar182[7]) || CARRY8(uVar4,uVar188));
    *puVar182 = uVar189 + *puVar182 + (ulonglong)bVar200;
    puVar182[1] = uVar195 + uVar187;
    puVar182[2] = uVar193 + uVar180;
    puVar182[3] = uVar194 + uVar192;
    puVar182[4] = uVar196 + uVar191;
    puVar182[5] = uVar197 + uVar190;
    puVar182[6] = uVar199 + uVar181;
    puVar182[7] = uVar4 + uVar188;
    puVar185 = puVar182 + 8;
    puVar182 = local_res8[1];
    lVar183 = in_XMM3_Qa;
  } while (puVar185 < local_res8[1]);
  return;
}

// __bn_post4x_internal @ 140e2ff00

void __bn_post4x_internal(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong in_RAX;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *unaff_RBP;
  longlong unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar7 = (ulonglong *)(unaff_RDI + param_4);
  uVar6 = -in_RAX;
  param_4 = param_4 >> 5;
  uVar9 = *unaff_RBP - 1;
  lVar8 = 0;
  uVar10 = unaff_RBP[1];
  uVar11 = unaff_RBP[2];
  uVar12 = unaff_RBP[3];
  while( true ) {
    uVar2 = (~uVar9 & uVar6) + *puVar7;
    uVar9 = (ulonglong)(CARRY8(~uVar9 & uVar6,*puVar7) || CARRY8(uVar2,(ulonglong)(lVar8 != 0)));
    uVar3 = (~uVar10 & uVar6) + puVar7[1];
    uVar1 = (ulonglong)(CARRY8(~uVar10 & uVar6,puVar7[1]) || CARRY8(uVar3,uVar9));
    uVar4 = (~uVar11 & uVar6) + puVar7[2];
    uVar11 = (ulonglong)(CARRY8(~uVar11 & uVar6,puVar7[2]) || CARRY8(uVar4,uVar1));
    uVar10 = puVar7[3];
    uVar5 = (~uVar12 & uVar6) + puVar7[3];
    *param_2 = uVar2 + (lVar8 != 0);
    puVar7 = puVar7 + 4;
    param_2[1] = uVar3 + uVar9;
    lVar8 = -(ulonglong)(CARRY8(~uVar12 & uVar6,uVar10) || CARRY8(uVar5,uVar11));
    param_2[2] = uVar4 + uVar1;
    param_2[3] = uVar5 + uVar11;
    param_2 = param_2 + 4;
    param_4 = param_4 + 1;
    if (param_4 == 0) break;
    uVar9 = unaff_RBP[4];
    uVar10 = unaff_RBP[5];
    uVar11 = unaff_RBP[6];
    uVar12 = unaff_RBP[7];
    unaff_RBP = unaff_RBP + 4;
  }
  return;
}

// bn_mulx4x_mont_gather5 @ 140e2ffa0

undefined8
bn_mulx4x_mont_gather5
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar3 = uVar4 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
      uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
  }
  *(undefined8 *)(uVar3 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar3 - 8) = 0x140e30065;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// L$SEH_begin_bn_mulx4x_mont_gather5 @ 140e2ffad

undefined8
L_SEH_begin_bn_mulx4x_mont_gather5
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar3 = uVar4 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar4) & 0xfffffffffffff000);
      uVar4 < uVar3; uVar3 = uVar3 - 0x1000) {
  }
  *(undefined8 *)(uVar3 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar3 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar3 - 8) = 0x140e30065;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// mulx4x_internal @ 140e300a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mulx4x_internal(ulonglong *param_1,undefined1 (*param_2) [16],undefined8 param_3,
                    longlong param_4,longlong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulonglong uVar73;
  longlong in_RAX;
  ulonglong uVar74;
  ulonglong *puVar75;
  ulonglong uVar76;
  ulonglong uVar77;
  ulonglong *puVar78;
  ulonglong *puVar79;
  ulonglong *unaff_RSI;
  ulonglong *puVar80;
  longlong *unaff_RDI;
  undefined1 (*pauVar81) [16];
  ulonglong uVar82;
  ulonglong uVar83;
  longlong lVar84;
  longlong lVar85;
  ulonglong uVar86;
  ulonglong uVar87;
  ulonglong uVar88;
  bool bVar89;
  bool bVar90;
  int iVar91;
  int iVar94;
  int iVar95;
  int iVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  int iVar98;
  int iVar100;
  int iVar101;
  int iVar102;
  undefined1 auVar99 [16];
  int iVar103;
  int iVar104;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  undefined1 auVar105 [16];
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  lVar85 = -param_4;
  iVar3 = *(int *)(in_RAX + 0x38);
  lVar84 = ((ulonglong)(param_4 * -0x20) >> 10) - 1;
  iVar98 = _DAT_140e31710 + _DAT_140e31710 + _L_inc;
  iVar100 = _UNK_140e31714 + _UNK_140e31714 + _UNK_140e31704;
  iVar101 = _UNK_140e31718 + _UNK_140e31718 + _UNK_140e31708;
  iVar102 = _UNK_140e3171c + _UNK_140e3171c + _UNK_140e3170c;
  *(uint *)((longlong)&stack0x00000058 + lVar85) = -(uint)(_L_inc == iVar3);
  *(uint *)((undefined1 *)((longlong)register0x00000020 + 0x5c) + lVar85) =
       -(uint)(_UNK_140e31704 == iVar3);
  *(uint *)(&stack0x00000060 + lVar85) = -(uint)(_UNK_140e31708 == iVar3);
  *(uint *)(&stack0x00000064 + lVar85) = -(uint)(_UNK_140e3170c == iVar3);
  iVar103 = _DAT_140e31710 + iVar98;
  iVar106 = _UNK_140e31714 + iVar100;
  iVar108 = _UNK_140e31718 + iVar101;
  iVar110 = _UNK_140e3171c + iVar102;
  *(uint *)(&stack0x00000068 + lVar85) = -(uint)(_DAT_140e31710 + _L_inc == iVar3);
  *(uint *)(&stack0x0000006c + lVar85) = -(uint)(_UNK_140e31714 + _UNK_140e31704 == iVar3);
  *(uint *)(&stack0x00000070 + lVar85) = -(uint)(_UNK_140e31718 + _UNK_140e31708 == iVar3);
  *(uint *)(&stack0x00000074 + lVar85) = -(uint)(_UNK_140e3171c + _UNK_140e3170c == iVar3);
  iVar91 = _DAT_140e31710 + iVar103;
  iVar94 = _UNK_140e31714 + iVar106;
  iVar95 = _UNK_140e31718 + iVar108;
  iVar96 = _UNK_140e3171c + iVar110;
  *(uint *)(&stack0x00000078 + lVar85) = -(uint)(iVar98 == iVar3);
  *(uint *)(&stack0x0000007c + lVar85) = -(uint)(iVar100 == iVar3);
  *(uint *)(&stack0x00000080 + lVar85) = -(uint)(iVar101 == iVar3);
  *(uint *)(&stack0x00000084 + lVar85) = -(uint)(iVar102 == iVar3);
  iVar98 = _DAT_140e31710 + iVar91;
  iVar100 = _UNK_140e31714 + iVar94;
  iVar101 = _UNK_140e31718 + iVar95;
  iVar102 = _UNK_140e3171c + iVar96;
  *(uint *)(&stack0x00000088 + lVar85) = -(uint)(iVar103 == iVar3);
  *(uint *)(&stack0x0000008c + lVar85) = -(uint)(iVar106 == iVar3);
  *(uint *)(&stack0x00000090 + lVar85) = -(uint)(iVar108 == iVar3);
  *(uint *)(&stack0x00000094 + lVar85) = -(uint)(iVar110 == iVar3);
  iVar103 = _DAT_140e31710 + iVar98;
  iVar106 = _UNK_140e31714 + iVar100;
  iVar108 = _UNK_140e31718 + iVar101;
  iVar110 = _UNK_140e3171c + iVar102;
  *(uint *)(&stack0x00000098 + lVar85) = -(uint)(iVar91 == iVar3);
  *(uint *)(&stack0x0000009c + lVar85) = -(uint)(iVar94 == iVar3);
  *(uint *)(&stack0x000000a0 + lVar85) = -(uint)(iVar95 == iVar3);
  *(uint *)(&stack0x000000a4 + lVar85) = -(uint)(iVar96 == iVar3);
  iVar104 = _DAT_140e31710 + iVar103;
  iVar107 = _UNK_140e31714 + iVar106;
  iVar109 = _UNK_140e31718 + iVar108;
  iVar111 = _UNK_140e3171c + iVar110;
  *(uint *)(&stack0x000000a8 + lVar85) = -(uint)(iVar98 == iVar3);
  *(uint *)(&stack0x000000ac + lVar85) = -(uint)(iVar100 == iVar3);
  *(uint *)(&stack0x000000b0 + lVar85) = -(uint)(iVar101 == iVar3);
  *(uint *)(&stack0x000000b4 + lVar85) = -(uint)(iVar102 == iVar3);
  iVar91 = _DAT_140e31710 + iVar104;
  iVar94 = _UNK_140e31714 + iVar107;
  iVar95 = _UNK_140e31718 + iVar109;
  iVar96 = _UNK_140e3171c + iVar111;
  *(uint *)(&stack0x000000b8 + lVar85) = -(uint)(iVar103 == iVar3);
  *(uint *)(&stack0x000000bc + lVar85) = -(uint)(iVar106 == iVar3);
  *(uint *)(&stack0x000000c0 + lVar85) = -(uint)(iVar108 == iVar3);
  *(uint *)(&stack0x000000c4 + lVar85) = -(uint)(iVar110 == iVar3);
  iVar98 = _DAT_140e31710 + iVar91;
  iVar100 = _UNK_140e31714 + iVar94;
  iVar101 = _UNK_140e31718 + iVar95;
  iVar102 = _UNK_140e3171c + iVar96;
  *(uint *)(&stack0x000000c8 + lVar85) = -(uint)(iVar104 == iVar3);
  *(uint *)(&stack0x000000cc + lVar85) = -(uint)(iVar107 == iVar3);
  *(uint *)(&stack0x000000d0 + lVar85) = -(uint)(iVar109 == iVar3);
  *(uint *)(&stack0x000000d4 + lVar85) = -(uint)(iVar111 == iVar3);
  iVar103 = _DAT_140e31710 + iVar98;
  iVar106 = _UNK_140e31714 + iVar100;
  iVar108 = _UNK_140e31718 + iVar101;
  iVar110 = _UNK_140e3171c + iVar102;
  *(uint *)(&stack0x000000d8 + lVar85) = -(uint)(iVar91 == iVar3);
  *(uint *)(&stack0x000000dc + lVar85) = -(uint)(iVar94 == iVar3);
  *(uint *)(&stack0x000000e0 + lVar85) = -(uint)(iVar95 == iVar3);
  *(uint *)(&stack0x000000e4 + lVar85) = -(uint)(iVar96 == iVar3);
  iVar104 = _DAT_140e31710 + iVar103;
  iVar107 = _UNK_140e31714 + iVar106;
  iVar109 = _UNK_140e31718 + iVar108;
  iVar111 = _UNK_140e3171c + iVar110;
  *(uint *)(&stack0x000000e8 + lVar85) = -(uint)(iVar98 == iVar3);
  *(uint *)(&stack0x000000ec + lVar85) = -(uint)(iVar100 == iVar3);
  *(uint *)(&stack0x000000f0 + lVar85) = -(uint)(iVar101 == iVar3);
  *(uint *)(&stack0x000000f4 + lVar85) = -(uint)(iVar102 == iVar3);
  iVar91 = _DAT_140e31710 + iVar104;
  iVar94 = _UNK_140e31714 + iVar107;
  iVar95 = _UNK_140e31718 + iVar109;
  iVar96 = _UNK_140e3171c + iVar111;
  *(uint *)(&stack0x000000f8 + lVar85) = -(uint)(iVar103 == iVar3);
  *(uint *)(&stack0x000000fc + lVar85) = -(uint)(iVar106 == iVar3);
  *(uint *)(&stack0x00000100 + lVar85) = -(uint)(iVar108 == iVar3);
  *(uint *)(&stack0x00000104 + lVar85) = -(uint)(iVar110 == iVar3);
  iVar98 = _DAT_140e31710 + iVar91;
  iVar100 = _UNK_140e31714 + iVar94;
  iVar101 = _UNK_140e31718 + iVar95;
  iVar102 = _UNK_140e3171c + iVar96;
  auVar92._0_4_ = -(uint)(iVar91 == iVar3);
  auVar92._4_4_ = -(uint)(iVar94 == iVar3);
  auVar92._8_4_ = -(uint)(iVar95 == iVar3);
  auVar92._12_4_ = -(uint)(iVar96 == iVar3);
  *(uint *)(&stack0x00000108 + lVar85) = -(uint)(iVar104 == iVar3);
  *(uint *)(&stack0x0000010c + lVar85) = -(uint)(iVar107 == iVar3);
  *(uint *)(&stack0x00000110 + lVar85) = -(uint)(iVar109 == iVar3);
  *(uint *)(&stack0x00000114 + lVar85) = -(uint)(iVar111 == iVar3);
  iVar91 = _DAT_140e31710 + iVar98;
  iVar94 = _UNK_140e31714 + iVar100;
  iVar95 = _UNK_140e31718 + iVar101;
  iVar96 = _UNK_140e3171c + iVar102;
  auVar97._0_4_ = -(uint)(iVar98 == iVar3);
  auVar97._4_4_ = -(uint)(iVar100 == iVar3);
  auVar97._8_4_ = -(uint)(iVar101 == iVar3);
  auVar97._12_4_ = -(uint)(iVar102 == iVar3);
  *(undefined1 (*) [16])(&stack0x00000118 + lVar85) = auVar92;
  auVar99._0_4_ = -(uint)(iVar91 == iVar3);
  auVar99._4_4_ = -(uint)(iVar94 == iVar3);
  auVar99._8_4_ = -(uint)(iVar95 == iVar3);
  auVar99._12_4_ = -(uint)(iVar96 == iVar3);
  *(undefined1 (*) [16])(&stack0x00000128 + lVar85) = auVar97;
  auVar105._0_4_ = -(uint)(_DAT_140e31710 + iVar91 == iVar3);
  auVar105._4_4_ = -(uint)(_UNK_140e31714 + iVar94 == iVar3);
  auVar105._8_4_ = -(uint)(_UNK_140e31718 + iVar95 == iVar3);
  auVar105._12_4_ = -(uint)(_UNK_140e3171c + iVar96 == iVar3);
  *(undefined1 (*) [16])(&stack0x00000138 + lVar85) = auVar99;
  auVar93 = param_2[0xc];
  auVar1 = param_2[0xd];
  auVar2 = param_2[0xe];
  *(undefined1 (*) [16])(&stack0x00000148 + lVar85) = auVar105;
  auVar93 = (auVar92 & auVar93 | auVar99 & auVar2 |
             *param_2 & *(undefined1 (*) [16])((longlong)&stack0x00000058 + lVar85) |
             param_2[2] & *(undefined1 (*) [16])(&stack0x00000078 + lVar85) |
             param_2[4] & *(undefined1 (*) [16])(&stack0x00000098 + lVar85) |
             param_2[6] & *(undefined1 (*) [16])(&stack0x000000b8 + lVar85) |
             param_2[8] & *(undefined1 (*) [16])(&stack0x000000d8 + lVar85) |
            param_2[10] & *(undefined1 (*) [16])(&stack0x000000f8 + lVar85)) ^
            (auVar97 & auVar1 | auVar105 & param_2[0xf] |
             param_2[1] & *(undefined1 (*) [16])(&stack0x00000068 + lVar85) |
             param_2[3] & *(undefined1 (*) [16])(&stack0x00000088 + lVar85) |
             param_2[5] & *(undefined1 (*) [16])(&stack0x000000a8 + lVar85) |
             param_2[7] & *(undefined1 (*) [16])(&stack0x000000c8 + lVar85) |
             param_2[9] & *(undefined1 (*) [16])(&stack0x000000e8 + lVar85) |
            param_2[0xb] & *(undefined1 (*) [16])(&stack0x00000108 + lVar85));
  uVar76 = auVar93._0_8_ | auVar93._8_8_;
  pauVar81 = param_2 + 0x18;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = uVar76;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *unaff_RSI;
  uVar83 = SUB168(auVar93 * auVar41,0);
  uVar74 = SUB168(auVar93 * auVar41,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar76;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = unaff_RSI[1];
  uVar73 = SUB168(auVar1 * auVar42,0);
  uVar86 = SUB168(auVar1 * auVar42,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar76;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = unaff_RSI[2];
  uVar77 = SUB168(auVar2 * auVar43,0);
  uVar87 = (ulonglong)CARRY8(uVar73,uVar74);
  uVar88 = uVar86 + uVar77;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar76;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = unaff_RSI[3];
  uVar82 = uVar83 * param_5;
  puVar80 = unaff_RSI + 4;
  Var5 = (unkuint9)
         (SUB168(auVar2 * auVar43,8) + (ulonglong)(CARRY8(uVar86,uVar77) || CARRY8(uVar88,uVar87)))
         + (unkuint9)SUB168(auVar12 * auVar44,0) + (unkuint9)0;
  Var6 = (unkuint9)SUB168(auVar12 * auVar44,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulonglong)Var6;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar82;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *param_1;
  Var10 = (unkuint9)SUB168(auVar13 * auVar45,8) + (unkuint9)(uVar73 + uVar74) + (unkuint9)0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar82;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_1[1];
  Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar14 * auVar46,0) +
         (unkuint9)
         ((char)((unkuint9)uVar83 + (unkuint9)SUB168(auVar13 * auVar45,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0') >> 0x40) != '\0');
  Var10 = (unkuint9)SUB168(auVar14 * auVar46,8) + (unkuint9)(uVar88 + uVar87) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar82;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_1[2];
  uStack0000000000000048 = (longlong)Var6;
  Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar15 * auVar47,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)SUB168(auVar15 * auVar47,8) + (unkuint9)(ulonglong)Var5 +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar82;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_1[3];
  uStack0000000000000050 = (longlong)Var6;
  Var5 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar16 * auVar48,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
  Var6 = (unkuint9)SUB168(auVar16 * auVar48,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  bVar90 = (char)((unkuint9)Var6 >> 0x40) != '\0';
  uVar87 = (ulonglong)Var6;
  param_1 = param_1 + 4;
  uStack0000000000000058 = (longlong)Var5;
  puVar78 = (ulonglong *)&stack0x00000068;
  lVar85 = lVar84;
  do {
    puVar75 = puVar78;
    Var5 = (unkuint9)uVar87 + (unkuint9)0 + (unkuint9)bVar89;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar76;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *puVar80;
    Var6 = (unkuint9)SUB168(auVar17 * auVar49,0) + (unkuint9)uVar77 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar76;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = puVar80[1];
    Var10 = (unkuint9)SUB168(auVar18 * auVar50,0) + (unkuint9)SUB168(auVar17 * auVar49,8) +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar76;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = puVar80[2];
    Var7 = (unkuint9)SUB168(auVar19 * auVar51,0) + (unkuint9)SUB168(auVar18 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar76;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = puVar80[3];
    Var8 = (unkuint9)SUB168(auVar20 * auVar52,0) + (unkuint9)SUB168(auVar19 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar20 * auVar52,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar77 = (ulonglong)Var9;
    puVar80 = puVar80 + 4;
    puVar78 = puVar75 + 4;
    Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)(ulonglong)Var5 + (unkuint9)bVar90;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar82;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *param_1;
    Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar21 * auVar53,8) +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar82;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = param_1[1];
    Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar22 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var10 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar22 * auVar54,8) +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar82;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_1[2];
    puVar75[-1] = (ulonglong)Var5;
    Var5 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar23 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    *puVar75 = (ulonglong)Var6;
    Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar23 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar82;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = param_1[3];
    puVar75[1] = (ulonglong)Var5;
    Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar24 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
    uVar87 = SUB168(auVar24 * auVar56,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    param_1 = param_1 + 4;
    puVar75[2] = (ulonglong)Var5;
    bVar90 = SBORROW8(lVar85,1);
    lVar85 = lVar85 + -1;
  } while (lVar85 != 0);
  bVar90 = CARRY8(uVar77,uVar87 + bVar89);
  puVar75[3] = uVar77 + uVar87 + bVar89;
  do {
    puVar80 = (ulonglong *)((longlong)puVar80 + param_4);
    uVar77 = *(ulonglong *)(pauVar81[-8] + 8) & puVar78[3] |
             *(ulonglong *)(pauVar81[-6] + 8) & puVar78[7] |
             *(ulonglong *)(pauVar81[-4] + 8) & puVar78[0xb] |
             *(ulonglong *)(pauVar81[-2] + 8) & puVar78[0xf] |
             *(ulonglong *)(*pauVar81 + 8) & puVar78[0x13] |
             *(ulonglong *)(pauVar81[2] + 8) & puVar78[0x17] |
             *(ulonglong *)(pauVar81[4] + 8) & puVar78[0x1b] |
             *(ulonglong *)(pauVar81[6] + 8) & puVar78[0x1f] |
             *(ulonglong *)(pauVar81[-7] + 8) & puVar78[5] |
             *(ulonglong *)(pauVar81[-5] + 8) & puVar78[9] |
             *(ulonglong *)(pauVar81[-3] + 8) & puVar78[0xd] |
             *(ulonglong *)(pauVar81[-1] + 8) & puVar78[0x11] |
             *(ulonglong *)(pauVar81[1] + 8) & puVar78[0x15] |
             *(ulonglong *)(pauVar81[3] + 8) & puVar78[0x19] |
             *(ulonglong *)(pauVar81[5] + 8) & puVar78[0x1d] |
             *(ulonglong *)(pauVar81[7] + 8) & puVar78[0x21] |
             *(ulonglong *)pauVar81[-8] & puVar78[2] | *(ulonglong *)pauVar81[-6] & puVar78[6] |
             *(ulonglong *)pauVar81[-4] & puVar78[10] | *(ulonglong *)pauVar81[-2] & puVar78[0xe] |
             *(ulonglong *)*pauVar81 & puVar78[0x12] | *(ulonglong *)pauVar81[2] & puVar78[0x16] |
             *(ulonglong *)pauVar81[4] & puVar78[0x1a] | *(ulonglong *)pauVar81[6] & puVar78[0x1e] |
             *(ulonglong *)pauVar81[-7] & puVar78[4] | *(ulonglong *)pauVar81[-5] & puVar78[8] |
             *(ulonglong *)pauVar81[-3] & puVar78[0xc] | *(ulonglong *)pauVar81[-1] & puVar78[0x10]
             | *(ulonglong *)pauVar81[1] & puVar78[0x14] | *(ulonglong *)pauVar81[3] & puVar78[0x18]
             | *(ulonglong *)pauVar81[5] & puVar78[0x1c] | *(ulonglong *)pauVar81[7] & puVar78[0x20]
    ;
    pauVar81 = pauVar81 + 0x10;
    *puVar78 = (ulonglong)bVar90;
    puVar78 = (ulonglong *)((longlong)puVar78 + param_4 + 0x20);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar77;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *puVar80;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar77;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = puVar80[1];
    Var6 = (unkuint9)SUB168(auVar25 * auVar57,0) + (unkuint9)puVar78[-4] + (unkuint9)0;
    uVar88 = (ulonglong)Var6;
    Var5 = (unkuint9)SUB168(auVar25 * auVar57,8) + (unkuint9)SUB168(auVar26 * auVar58,0) +
           (unkuint9)0;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar77;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = puVar80[2];
    Var6 = (unkuint9)(ulonglong)Var5 + (unkuint9)puVar78[-3] +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar26 * auVar58,8) + (unkuint9)SUB168(auVar27 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar77;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = puVar80[3];
    Var10 = (unkuint9)(ulonglong)Var5 + (unkuint9)puVar78[-2] +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar27 * auVar59,8) + (unkuint9)SUB168(auVar28 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    param_1 = (ulonglong *)((longlong)param_1 + param_4);
    puVar80 = puVar80 + 4;
    Var7 = (unkuint9)(ulonglong)Var5 + (unkuint9)puVar78[-1] +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    uVar87 = SUB168(auVar28 * auVar60,8) + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
             (ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar83 = uVar88 * param_5;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar83;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *param_1;
    Var6 = (unkuint9)SUB168(auVar29 * auVar61,8) + (unkuint9)(ulonglong)Var6 + (unkuint9)0;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar83;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_1[1];
    Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
           (unkuint9)
           ((char)((unkuint9)uVar88 + (unkuint9)SUB168(auVar29 * auVar61,0) + (unkuint9)0 >> 0x40)
           != '\0');
    Var10 = (unkuint9)SUB168(auVar30 * auVar62,8) + (unkuint9)(ulonglong)Var10 +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar83;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_1[2];
    Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar31 * auVar63,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar31 * auVar63,8) + (unkuint9)(ulonglong)Var7 +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar83;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_1[3];
    puVar78[-4] = (ulonglong)Var5;
    Var5 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar32 * auVar64,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
    puVar78[-3] = (ulonglong)Var6;
    Var6 = (unkuint9)SUB168(auVar32 * auVar64,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    bVar90 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    uVar88 = (ulonglong)Var6;
    puVar78[-2] = (ulonglong)Var5;
    param_1 = param_1 + 4;
    lVar85 = lVar84;
    do {
      puVar79 = puVar78;
      puVar75 = param_1;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar77;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = *puVar80;
      Var5 = (unkuint9)uVar88 + (unkuint9)0 + (unkuint9)bVar89;
      Var10 = (unkuint9)SUB168(auVar33 * auVar65,0) + (unkuint9)uVar87 + (unkuint9)bVar90;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar77;
      auVar66._8_8_ = 0;
      auVar66._0_8_ = puVar80[1];
      Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)*puVar79 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      Var7 = (unkuint9)SUB168(auVar34 * auVar66,0) + (unkuint9)SUB168(auVar33 * auVar65,8) +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar77;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = puVar80[2];
      Var10 = (unkuint9)(ulonglong)Var7 + (unkuint9)puVar79[1] +
              (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var8 = (unkuint9)SUB168(auVar35 * auVar67,0) + (unkuint9)SUB168(auVar34 * auVar66,8) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar77;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = puVar80[3];
      Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)puVar79[2] +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      Var9 = (unkuint9)SUB168(auVar36 * auVar68,0) + (unkuint9)SUB168(auVar35 * auVar67,8) +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)puVar79[3] +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var11 = (unkuint9)SUB168(auVar36 * auVar68,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      puVar80 = puVar80 + 4;
      puVar78 = puVar79 + 4;
      Var9 = (unkuint9)(ulonglong)Var11 + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      uVar87 = (ulonglong)Var9;
      Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)(ulonglong)Var5 +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar83;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = *puVar75;
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar37 * auVar69,0) +
             (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      Var10 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar37 * auVar69,8) +
              (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar83;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = puVar75[1];
      Var6 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar38 * auVar70,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      Var10 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar38 * auVar70,8) +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar83;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = puVar75[2];
      puVar79[-1] = (ulonglong)Var5;
      Var5 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar39 * auVar71,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var10 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar39 * auVar71,8) +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      *puVar79 = (ulonglong)Var6;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar83;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = puVar75[3];
      param_1 = puVar75 + 4;
      puVar79[1] = (ulonglong)Var5;
      Var5 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar40 * auVar72,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
      uVar88 = SUB168(auVar40 * auVar72,8) + (ulonglong)((char)((unkuint9)Var10 >> 0x40) != '\0');
      puVar79[2] = (ulonglong)Var5;
      bVar90 = SBORROW8(lVar85,1);
      lVar85 = lVar85 + -1;
    } while (lVar85 != 0);
    uVar77 = uVar87 + uVar88 + bVar89;
    bVar90 = CARRY8(uVar87,uVar88 + bVar89) || CARRY8(uVar77,(ulonglong)(*puVar78 != 0));
    uVar77 = uVar77 + (*puVar78 != 0);
    puVar79[3] = uVar77;
  } while (pauVar81 < param_2 + param_4 * -2 + 8);
  puVar80 = (ulonglong *)((longlong)param_1 + param_4);
  puVar78 = (ulonglong *)((longlong)puVar78 + param_4);
  lVar84 = param_4 >> 5;
  uVar73 = -(ulonglong)(bVar90 || puVar75[3] < uVar77);
  uVar83 = *(longlong *)((longlong)param_1 + param_4) - 1;
  uVar87 = puVar80[1];
  lVar85 = 0;
  uVar88 = puVar80[2];
  uVar77 = puVar80[3];
  while( true ) {
    uVar76 = (~uVar83 & uVar73) + *puVar78;
    uVar83 = (ulonglong)
             (CARRY8(~uVar83 & uVar73,*puVar78) || CARRY8(uVar76,(ulonglong)(lVar85 != 0)));
    uVar82 = (~uVar87 & uVar73) + puVar78[1];
    uVar74 = (ulonglong)(CARRY8(~uVar87 & uVar73,puVar78[1]) || CARRY8(uVar82,uVar83));
    uVar86 = (~uVar88 & uVar73) + puVar78[2];
    uVar88 = (ulonglong)(CARRY8(~uVar88 & uVar73,puVar78[2]) || CARRY8(uVar86,uVar74));
    uVar87 = puVar78[3];
    uVar4 = (~uVar77 & uVar73) + puVar78[3];
    *unaff_RDI = uVar76 + (lVar85 != 0);
    puVar78 = puVar78 + 4;
    unaff_RDI[1] = uVar82 + uVar83;
    lVar85 = -(ulonglong)(CARRY8(~uVar77 & uVar73,uVar87) || CARRY8(uVar4,uVar88));
    unaff_RDI[2] = uVar86 + uVar74;
    unaff_RDI[3] = uVar4 + uVar88;
    unaff_RDI = unaff_RDI + 4;
    lVar84 = lVar84 + 1;
    if (lVar84 == 0) break;
    uVar83 = puVar80[4];
    uVar87 = puVar80[5];
    uVar88 = puVar80[6];
    uVar77 = puVar80[7];
    puVar80 = puVar80 + 4;
  }
  return;
}

// bn_powerx5 @ 140e30880

undefined8
bn_powerx5(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  undefined1 *puVar2;
  
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar1 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar4 = uVar1 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar1) & 0xfffffffffffff000);
      uVar1 < uVar4; uVar4 = uVar4 - 0x1000) {
  }
  *(undefined8 *)(uVar4 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar4 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar4 - 8) = 0x140e3097e;
  bn_sqrx8x_internal(0,param_3,param_4,uVar3);
  *(undefined8 *)(uVar4 - 8) = 0x140e30983;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30988;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3098d;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30992;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30997;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3099c;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a1;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a6;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309ab;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309c5;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// L$SEH_begin_bn_powerx5 @ 140e3088d

undefined8
L_SEH_begin_bn_powerx5
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_170 [320];
  undefined1 *puVar2;
  
  uVar3 = (ulonglong)(uint)(param_6 << 3);
  uVar4 = (ulonglong)(auStack_170 + (uVar3 * -2 - param_1)) & 0xfff;
  if (uVar3 * 3 < uVar4) {
    uVar1 = uVar3 * -2 + 0xec0;
    lVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      lVar5 = 0;
    }
    puVar2 = auStack_170 + (uVar3 * -2 - lVar5);
  }
  else {
    puVar2 = auStack_170 + (uVar3 * -2 - uVar4);
  }
  uVar1 = (ulonglong)puVar2 & 0xffffffffffffffc0;
  for (uVar4 = uVar1 + ((ulonglong)(&stack0xffffffffffffffd0 + -uVar1) & 0xfffffffffffff000);
      uVar1 < uVar4; uVar4 = uVar4 - 0x1000) {
  }
  *(undefined8 *)(uVar4 + 0x20) = *param_5;
  *(BADSPACEBASE **)(uVar4 + 0x28) = register0x00000020;
  *(undefined8 *)(uVar4 - 8) = 0x140e3097e;
  bn_sqrx8x_internal(0,param_3,param_4,uVar3);
  *(undefined8 *)(uVar4 - 8) = 0x140e30983;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30988;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3098d;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30992;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e30997;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e3099c;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a1;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309a6;
  bn_sqrx8x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309ab;
  __bn_postx4x_internal();
  *(undefined8 *)(uVar4 - 8) = 0x140e309c5;
  mulx4x_internal(param_4,param_3);
  return 1;
}

// bn_sqrx8x_internal @ 140e30a00

void bn_sqrx8x_internal(undefined8 param_1,undefined8 param_2,ulonglong *param_3,longlong param_4,
                       longlong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8,
                       ulonglong param_9,ulonglong param_10)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  unkint9 Var12;
  char cVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  ulonglong uVar126;
  longlong lVar127;
  ulonglong *puVar128;
  ulonglong *puVar129;
  ulonglong *unaff_RSI;
  ulonglong *puVar130;
  ulonglong *puVar131;
  ulonglong *puVar132;
  undefined8 *puVar133;
  undefined8 *puVar134;
  ulonglong uVar135;
  longlong lVar136;
  ulonglong uVar137;
  ulonglong uVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  ulonglong uVar141;
  ulonglong uVar142;
  ulonglong uVar143;
  ulonglong uVar144;
  ulonglong uVar145;
  ulonglong uVar146;
  ulonglong uVar147;
  ulonglong uVar148;
  ulonglong uVar149;
  ulonglong uVar150;
  ulonglong uVar151;
  bool bVar152;
  bool bVar153;
  undefined8 in_XMM0_Qb;
  longlong in_XMM3_Qa;
  longlong local_res18;
  
  puVar133 = &param_7;
  lVar136 = param_4;
  while( true ) {
    puVar133[8] = param_1;
    puVar133[9] = in_XMM0_Qb;
    puVar133[10] = param_1;
    puVar133[0xb] = in_XMM0_Qb;
    puVar133[0xc] = param_1;
    puVar133[0xd] = in_XMM0_Qb;
    puVar133[0xe] = param_1;
    puVar133[0xf] = in_XMM0_Qb;
    lVar136 = lVar136 + -0x40;
    if (lVar136 == 0) break;
    puVar133[0x10] = param_1;
    puVar133[0x11] = in_XMM0_Qb;
    puVar133[0x12] = param_1;
    puVar133[0x13] = in_XMM0_Qb;
    puVar133[0x14] = param_1;
    puVar133[0x15] = in_XMM0_Qb;
    puVar133[0x16] = param_1;
    puVar133[0x17] = in_XMM0_Qb;
    puVar133 = puVar133 + 0x10;
  }
  uVar135 = *unaff_RSI;
  uVar137 = 0;
  uVar139 = 0;
  uVar141 = 0;
  uVar144 = 0;
  uVar147 = 0;
  uVar150 = 0;
  bVar152 = false;
  bVar153 = false;
  uVar126 = 0;
  puVar130 = unaff_RSI;
  puVar132 = &param_7;
  while( true ) {
    puVar131 = puVar132;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar135;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = puVar130[1];
    Var5 = (unkuint9)SUB168(auVar14 * auVar70,0) + (unkuint9)uVar126 + (unkuint9)bVar152;
    Var7 = (unkuint9)uVar137 + (unkuint9)SUB168(auVar14 * auVar70,8) + (unkuint9)bVar153;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar135;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = puVar130[2];
    Var6 = (unkuint9)SUB168(auVar15 * auVar71,0) + (unkuint9)(ulonglong)Var7 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var8 = (unkuint9)uVar139 + (unkuint9)SUB168(auVar15 * auVar71,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar135;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = puVar130[3];
    Var7 = (unkuint9)SUB168(auVar16 * auVar72,0) + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var9 = (unkuint9)uVar141 + (unkuint9)SUB168(auVar16 * auVar72,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar135;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = puVar130[4];
    Var8 = (unkuint9)SUB168(auVar17 * auVar73,0) + (unkuint9)(ulonglong)Var9 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var10 = (unkuint9)uVar144 + (unkuint9)SUB168(auVar17 * auVar73,8) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar135;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = puVar130[5];
    Var9 = (unkuint9)SUB168(auVar18 * auVar74,0) + (unkuint9)(ulonglong)Var10 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var11 = (unkuint9)uVar147 + (unkuint9)SUB168(auVar18 * auVar74,8) +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar135;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = puVar130[6];
    Var10 = (unkuint9)SUB168(auVar19 * auVar75,0) + (unkuint9)(ulonglong)Var11 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var12 = (unkuint9)SUB168(auVar19 * auVar75,8) + (unkuint9)uVar150 +
            (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar135;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = puVar130[7];
    uVar135 = puVar130[1];
    Var11 = (unkuint9)SUB168(auVar20 * auVar76,0) + (unkuint9)(ulonglong)Var12 +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    uVar142 = SUB168(auVar20 * auVar76,8) + (ulonglong)((char)((unkuint9)Var12 >> 0x40) != '\0');
    uVar144 = (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
    uVar126 = puVar131[8];
    uVar147 = uVar142 + puVar131[8];
    puVar131[1] = (ulonglong)Var5;
    puVar131[2] = (ulonglong)Var6;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar135;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = puVar130[2];
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar135;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = puVar130[3];
    Var5 = (unkuint9)SUB168(auVar21 * auVar77,0) + (unkuint9)(ulonglong)Var7 + (unkuint9)0;
    Var7 = (unkuint9)SUB168(auVar22 * auVar78,0) + (unkuint9)SUB168(auVar21 * auVar77,8) +
           (unkuint9)0;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar135;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = puVar130[4];
    Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar23 * auVar79,0) + (unkuint9)SUB168(auVar22 * auVar78,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar135;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = puVar130[5];
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)(ulonglong)Var9 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar24 * auVar80,0) + (unkuint9)SUB168(auVar23 * auVar79,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar135;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = puVar130[6];
    Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)(ulonglong)Var10 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar25 * auVar81,0) + (unkuint9)(ulonglong)Var11 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar135;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = puVar130[7];
    uVar135 = puVar130[2];
    Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar24 * auVar80,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var11 = (unkuint9)SUB168(auVar26 * auVar82,0) + (unkuint9)SUB168(auVar25 * auVar81,8) +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var10 = (unkuint9)(ulonglong)Var11 + (unkuint9)(uVar147 + uVar144) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var12 = (unkuint9)SUB168(auVar26 * auVar82,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulonglong)Var12 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    puVar131[3] = (ulonglong)Var5;
    puVar131[4] = (ulonglong)Var6;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar135;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = puVar130[3];
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar135;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = puVar130[4];
    Var5 = (unkuint9)SUB168(auVar27 * auVar83,0) + (unkuint9)(ulonglong)Var7 +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar28 * auVar84,0) + (unkuint9)SUB168(auVar27 * auVar83,8) +
           (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar135;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = puVar130[5];
    Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar29 * auVar85,0) + (unkuint9)SUB168(auVar28 * auVar84,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar135;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = puVar130[6];
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)(ulonglong)Var9 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar30 * auVar86,0) + (unkuint9)(ulonglong)Var10 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar135;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = puVar130[7];
    uVar135 = puVar130[3];
    Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar29 * auVar85,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar31 * auVar87,0) + (unkuint9)SUB168(auVar30 * auVar86,8) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)(ulonglong)Var11 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    puVar131[5] = (ulonglong)Var5;
    puVar131[6] = (ulonglong)Var6;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar135;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = puVar130[4];
    Var10 = (unkuint9)SUB168(auVar31 * auVar87,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var10 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar135;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = puVar130[5];
    Var6 = (unkuint9)SUB168(auVar32 * auVar88,0) + (unkuint9)(ulonglong)Var7 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar33 * auVar89,0) + (unkuint9)SUB168(auVar32 * auVar88,8) +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar135;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = puVar130[6];
    Var7 = (unkuint9)(ulonglong)Var10 + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar34 * auVar90,0) + (unkuint9)(ulonglong)Var9 +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar135;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = puVar130[7];
    uVar135 = puVar130[4];
    uVar137 = puVar130[5];
    Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar33 * auVar89,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar35 * auVar91,0) + (unkuint9)SUB168(auVar34 * auVar90,8) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar139 = puVar130[6];
    Var5 = (unkuint9)(ulonglong)Var9 + (unkuint9)(ulonglong)Var5 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar35 * auVar91,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    puVar131[7] = (ulonglong)Var6;
    puVar131[8] = (ulonglong)Var7;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar135;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = uVar137;
    uVar141 = puVar130[7];
    Var6 = (unkuint9)SUB168(auVar36 * auVar92,0) + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar150 = (ulonglong)Var6;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar135;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar139;
    Var7 = (unkuint9)SUB168(auVar37 * auVar93,0) + (unkuint9)SUB168(auVar36 * auVar92,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)(ulonglong)Var5 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    uVar140 = (ulonglong)Var5;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar135;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = uVar141;
    Var7 = (unkuint9)SUB168(auVar38 * auVar94,0) + (unkuint9)SUB168(auVar37 * auVar93,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)(ulonglong)Var9 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar38 * auVar94,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar137;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = uVar139;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar137;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = uVar141;
    puVar129 = puVar130 + 8;
    Var5 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar39 * auVar95,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    uVar135 = (ulonglong)Var5;
    Var7 = (unkuint9)SUB168(auVar40 * auVar96,0) + (unkuint9)SUB168(auVar39 * auVar95,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)(ulonglong)Var6 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar137 = (ulonglong)Var5;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar139;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = uVar141;
    Var5 = (unkuint9)
           (SUB168(auVar40 * auVar96,8) + (ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar41 * auVar97,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar139 = (ulonglong)Var5;
    uVar141 = SUB168(auVar41 * auVar97,8) + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    if (puVar129 == (ulonglong *)((longlong)unaff_RSI + param_4)) break;
    lVar136 = -8;
    uVar138 = puVar131[8];
    Var5 = (unkuint9)uVar150 + (unkuint9)puVar131[9] +
           (unkuint9)(CARRY8(uVar142,uVar126) || CARRY8(uVar147,uVar144));
    uVar144 = (ulonglong)Var5;
    Var5 = (unkuint9)uVar140 + (unkuint9)puVar131[10] +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar147 = (ulonglong)Var5;
    Var5 = (unkuint9)uVar135 + (unkuint9)puVar131[0xb] +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar140 = (ulonglong)Var5;
    uVar135 = (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar126 = uVar137 + puVar131[0xc];
    uVar142 = uVar126 + uVar135;
    uVar135 = (ulonglong)(CARRY8(uVar137,puVar131[0xc]) || CARRY8(uVar126,uVar135));
    uVar126 = uVar139 + puVar131[0xd];
    uVar145 = uVar126 + uVar135;
    uVar135 = (ulonglong)(CARRY8(uVar139,puVar131[0xd]) || CARRY8(uVar126,uVar135));
    uVar126 = uVar141 + puVar131[0xe];
    uVar148 = uVar126 + uVar135;
    uVar135 = (ulonglong)(CARRY8(uVar141,puVar131[0xe]) || CARRY8(uVar126,uVar135));
    uVar150 = puVar131[0xf] + uVar135;
    puVar1 = puVar131 + 0x10;
    local_res18 = -(ulonglong)CARRY8(puVar131[0xf],uVar135);
    uVar135 = *puVar130;
    bVar152 = false;
    bVar153 = false;
    puVar128 = puVar129;
    puVar132 = puVar1;
    while( true ) {
      do {
        auVar42._8_8_ = 0;
        auVar42._0_8_ = uVar135;
        auVar98._8_8_ = 0;
        auVar98._0_8_ = *puVar128;
        Var5 = (unkuint9)uVar138 + (unkuint9)SUB168(auVar42 * auVar98,0) + (unkuint9)bVar152;
        Var7 = (unkuint9)SUB168(auVar42 * auVar98,8) + (unkuint9)uVar144 + (unkuint9)bVar153;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = uVar135;
        auVar99._8_8_ = 0;
        auVar99._0_8_ = puVar128[1];
        Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar43 * auVar99,0) +
               (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        uVar138 = (ulonglong)Var6;
        Var7 = (unkuint9)SUB168(auVar43 * auVar99,8) + (unkuint9)uVar147 +
               (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar135;
        auVar100._8_8_ = 0;
        auVar100._0_8_ = puVar128[2];
        Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar44 * auVar100,0) +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        uVar144 = (ulonglong)Var6;
        Var7 = (unkuint9)SUB168(auVar44 * auVar100,8) + (unkuint9)uVar140 +
               (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
        auVar45._8_8_ = 0;
        auVar45._0_8_ = uVar135;
        auVar101._8_8_ = 0;
        auVar101._0_8_ = puVar128[3];
        Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar45 * auVar101,0) +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        uVar147 = (ulonglong)Var6;
        Var7 = (unkuint9)SUB168(auVar45 * auVar101,8) + (unkuint9)uVar142 +
               (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
        auVar46._8_8_ = 0;
        auVar46._0_8_ = uVar135;
        auVar102._8_8_ = 0;
        auVar102._0_8_ = puVar128[4];
        Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar46 * auVar102,0) +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        uVar140 = (ulonglong)Var6;
        Var7 = (unkuint9)SUB168(auVar46 * auVar102,8) + (unkuint9)uVar145 +
               (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
        auVar47._8_8_ = 0;
        auVar47._0_8_ = uVar135;
        auVar103._8_8_ = 0;
        auVar103._0_8_ = puVar128[5];
        Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar47 * auVar103,0) +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        uVar142 = (ulonglong)Var6;
        Var7 = (unkuint9)SUB168(auVar47 * auVar103,8) + (unkuint9)uVar148 +
               (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
        auVar48._8_8_ = 0;
        auVar48._0_8_ = uVar135;
        auVar104._8_8_ = 0;
        auVar104._0_8_ = puVar128[6];
        puVar132[lVar136] = (ulonglong)Var5;
        Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar48 * auVar104,0) +
               (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
        uVar145 = (ulonglong)Var5;
        Var6 = (unkuint9)SUB168(auVar48 * auVar104,8) + (unkuint9)uVar150 +
               (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
        auVar49._8_8_ = 0;
        auVar49._0_8_ = uVar135;
        auVar105._8_8_ = 0;
        auVar105._0_8_ = puVar128[7];
        uVar135 = puVar130[lVar136 + 9];
        Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar49 * auVar105,0) +
               (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        uVar148 = (ulonglong)Var5;
        Var5 = (unkuint9)
               (SUB168(auVar49 * auVar105,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0'))
               + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
        bVar152 = (char)((unkuint9)Var5 >> 0x40) != '\0';
        uVar150 = (ulonglong)Var5;
        bVar153 = SCARRY8(lVar136,1);
        lVar136 = lVar136 + 1;
      } while (lVar136 != 0);
      puVar128 = puVar128 + 8;
      lVar136 = -8;
      if (puVar128 == (ulonglong *)((longlong)unaff_RSI + param_4)) break;
      uVar135 = *puVar130;
      Var5 = (unkuint9)uVar138 + (unkuint9)*puVar132 + (unkuint9)(local_res18 != 0);
      uVar138 = (ulonglong)Var5;
      Var5 = (unkuint9)uVar144 + (unkuint9)puVar132[1] +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar144 = (ulonglong)Var5;
      uVar126 = (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
      bVar152 = CARRY8(uVar147,puVar132[2]);
      uVar137 = uVar147 + puVar132[2];
      uVar147 = uVar137 + uVar126;
      uVar126 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar126));
      bVar152 = CARRY8(uVar140,puVar132[3]);
      uVar137 = uVar140 + puVar132[3];
      uVar140 = uVar137 + uVar126;
      uVar126 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar126));
      bVar152 = CARRY8(uVar142,puVar132[4]);
      uVar137 = uVar142 + puVar132[4];
      uVar142 = uVar137 + uVar126;
      uVar126 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar126));
      bVar152 = CARRY8(uVar145,puVar132[5]);
      uVar137 = uVar145 + puVar132[5];
      uVar145 = uVar137 + uVar126;
      uVar126 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar126));
      bVar152 = CARRY8(uVar148,puVar132[6]);
      uVar137 = uVar148 + puVar132[6];
      uVar148 = uVar137 + uVar126;
      uVar126 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar126));
      bVar152 = CARRY8(uVar150,puVar132[7]);
      uVar137 = uVar150 + puVar132[7];
      uVar150 = uVar137 + uVar126;
      puVar132 = puVar132 + 8;
      local_res18 = -(ulonglong)(bVar152 || CARRY8(uVar137,uVar126));
      bVar152 = false;
      bVar153 = false;
    }
    Var5 = (unkuint9)uVar138 + (unkuint9)0 + (unkuint9)(local_res18 != 0);
    Var6 = (unkuint9)uVar144 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar126 = (ulonglong)Var6;
    uVar135 = *puVar129;
    uVar139 = (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0');
    uVar137 = uVar147 + uVar139;
    *puVar132 = (ulonglong)Var5;
    uVar141 = (ulonglong)CARRY8(uVar147,uVar139);
    uVar139 = uVar140 + uVar141;
    uVar144 = (ulonglong)CARRY8(uVar140,uVar141);
    uVar141 = uVar142 + uVar144;
    uVar147 = (ulonglong)CARRY8(uVar142,uVar144);
    uVar144 = uVar145 + uVar147;
    uVar140 = (ulonglong)CARRY8(uVar145,uVar147);
    uVar147 = uVar148 + uVar140;
    uVar150 = uVar150 + CARRY8(uVar148,uVar140);
    bVar152 = puVar132 < puVar1;
    bVar153 = SBORROW8((longlong)puVar132,(longlong)puVar1);
    puVar130 = puVar129;
    if (puVar132 != puVar1) {
      puVar132[1] = uVar126;
      uVar126 = puVar131[0x11];
      puVar132[2] = uVar137;
      uVar137 = puVar131[0x12];
      puVar132[3] = uVar139;
      uVar139 = puVar131[0x13];
      puVar132[4] = uVar141;
      uVar141 = puVar131[0x14];
      puVar132[5] = uVar144;
      uVar144 = puVar131[0x15];
      puVar132[6] = uVar147;
      uVar147 = puVar131[0x16];
      puVar132[7] = uVar150;
      uVar150 = puVar131[0x17];
      puVar132 = puVar1;
    }
  }
  puVar131[9] = uVar150;
  puVar131[10] = uVar140;
  puVar131[0xb] = uVar135;
  puVar131[0xc] = uVar137;
  puVar131[0xd] = uVar139;
  puVar131[0xe] = uVar141;
  puVar133 = &param_7;
  uVar135 = *(ulonglong *)((longlong)puVar129 + in_XMM3_Qa);
  bVar152 = false;
  uVar137 = 0;
  Var5 = (unkuint9)param_8 + (unkuint9)param_8 + (unkuint9)0;
  cVar13 = (char)((unkuint9)Var5 >> 0x40);
  uVar126 = (ulonglong)Var5;
  lVar136 = in_XMM3_Qa;
  while( true ) {
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar135;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar135;
    Var7 = (unkuint9)param_9 + (unkuint9)param_9 + (unkuint9)(cVar13 != '\0');
    Var5 = (unkuint9)SUB168(auVar50 * auVar106,0) + (unkuint9)uVar137 + (unkuint9)bVar152;
    uVar135 = *(ulonglong *)((longlong)puVar130 + lVar136 + 0x48);
    Var8 = (unkuint9)param_10 + (unkuint9)param_10 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar50 * auVar106,8) + (unkuint9)uVar126 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    *puVar133 = (longlong)Var5;
    puVar133[1] = (longlong)Var6;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar135;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar135;
    Var9 = (unkuint9)(ulonglong)puVar133[4] + (unkuint9)(ulonglong)puVar133[4] +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar51 * auVar107,0) + (unkuint9)(ulonglong)Var7 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    uVar135 = *(ulonglong *)((longlong)puVar130 + lVar136 + 0x50);
    Var7 = (unkuint9)(ulonglong)puVar133[5] + (unkuint9)(ulonglong)puVar133[5] +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar51 * auVar107,8) + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    puVar133[2] = (longlong)Var5;
    puVar133[3] = (longlong)Var6;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar135;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar135;
    Var8 = (unkuint9)(ulonglong)puVar133[6] + (unkuint9)(ulonglong)puVar133[6] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar52 * auVar108,0) + (unkuint9)(ulonglong)Var9 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    uVar135 = *(ulonglong *)((longlong)puVar130 + lVar136 + 0x58);
    lVar136 = lVar136 + 0x20;
    Var9 = (unkuint9)(ulonglong)puVar133[7] + (unkuint9)(ulonglong)puVar133[7] +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar139 = (ulonglong)Var9;
    Var6 = (unkuint9)SUB168(auVar52 * auVar108,8) + (unkuint9)(ulonglong)Var7 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    puVar133[4] = (longlong)Var5;
    puVar133[5] = (longlong)Var6;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar135;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = uVar135;
    uVar141 = SUB168(auVar53 * auVar109,8);
    Var7 = (unkuint9)(ulonglong)puVar133[8] + (unkuint9)(ulonglong)puVar133[8] +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar137 = (ulonglong)Var7;
    Var5 = (unkuint9)SUB168(auVar53 * auVar109,0) + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar152 = (char)((unkuint9)Var5 >> 0x40) != '\0';
    uVar4 = (undefined8)Var5;
    if (lVar136 == 0) break;
    uVar135 = *(ulonglong *)((longlong)puVar129 + lVar136);
    Var5 = (unkuint9)(ulonglong)puVar133[9] + (unkuint9)(ulonglong)puVar133[9] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    cVar13 = (char)((unkuint9)Var5 >> 0x40);
    uVar126 = (ulonglong)Var5;
    Var5 = (unkuint9)uVar141 + (unkuint9)uVar139 + (unkuint9)bVar152;
    bVar152 = (char)((unkuint9)Var5 >> 0x40) != '\0';
    param_9 = puVar133[10];
    param_10 = puVar133[0xb];
    puVar133[6] = uVar4;
    puVar133[7] = (longlong)Var5;
    puVar133 = puVar133 + 8;
  }
  puVar133[6] = uVar4;
  puVar133[7] = uVar141 + uVar139 + (ulonglong)bVar152;
  uVar126 = 0;
  puVar132 = (ulonglong *)((longlong)param_3 + param_4 + -0x40);
  puVar134 = &param_7;
  uVar135 = param_7;
  do {
    uVar137 = puVar134[1];
    uVar139 = puVar134[2];
    uVar141 = puVar134[3];
    uVar144 = puVar134[4];
    uVar147 = puVar134[5];
    uVar150 = puVar134[6];
    uVar140 = puVar134[7];
    puVar130 = puVar134 + 8;
    bVar152 = false;
    bVar153 = false;
    lVar136 = -8;
    do {
      uVar142 = uVar135 * param_5;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = uVar142;
      auVar110._8_8_ = 0;
      auVar110._0_8_ = *param_3;
      Var6 = (unkuint9)SUB168(auVar54 * auVar110,8) + (unkuint9)uVar137 + (unkuint9)bVar153;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = uVar142;
      auVar111._8_8_ = 0;
      auVar111._0_8_ = param_3[1];
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar55 * auVar111,0) +
             (unkuint9)
             ((char)((unkuint9)SUB168(auVar54 * auVar110,0) + (unkuint9)uVar135 + (unkuint9)bVar152
                    >> 0x40) != '\0');
      uVar135 = (ulonglong)Var5;
      Var6 = (unkuint9)SUB168(auVar55 * auVar111,8) + (unkuint9)uVar139 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar142;
      auVar112._8_8_ = 0;
      auVar112._0_8_ = param_3[2];
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar56 * auVar112,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar137 = (ulonglong)Var5;
      Var6 = (unkuint9)SUB168(auVar56 * auVar112,8) + (unkuint9)uVar141 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar142;
      auVar113._8_8_ = 0;
      auVar113._0_8_ = param_3[3];
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar57 * auVar113,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar139 = (ulonglong)Var5;
      Var6 = (unkuint9)SUB168(auVar57 * auVar113,8) + (unkuint9)uVar144 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar58._8_8_ = 0;
      auVar58._0_8_ = uVar142;
      auVar114._8_8_ = 0;
      auVar114._0_8_ = param_3[4];
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar58 * auVar114,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar141 = (ulonglong)Var5;
      Var6 = (unkuint9)SUB168(auVar58 * auVar114,8) + (unkuint9)uVar147 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      *(ulonglong *)(&stack0x00000078 + lVar136 * 8) = uVar142;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar142;
      auVar115._8_8_ = 0;
      auVar115._0_8_ = param_3[5];
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar59 * auVar115,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar144 = (ulonglong)Var5;
      Var6 = (unkuint9)SUB168(auVar59 * auVar115,8) + (unkuint9)uVar150 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar60._8_8_ = 0;
      auVar60._0_8_ = uVar142;
      auVar116._8_8_ = 0;
      auVar116._0_8_ = param_3[6];
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar60 * auVar116,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar147 = (ulonglong)Var5;
      Var6 = (unkuint9)SUB168(auVar60 * auVar116,8) + (unkuint9)uVar140 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar61._8_8_ = 0;
      auVar61._0_8_ = uVar142;
      auVar117._8_8_ = 0;
      auVar117._0_8_ = param_3[7];
      Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar61 * auVar117,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar150 = (ulonglong)Var5;
      Var5 = (unkuint9)
             (SUB168(auVar61 * auVar117,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0')) +
             (unkuint9)0 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      bVar152 = (char)((unkuint9)Var5 >> 0x40) != '\0';
      uVar140 = (ulonglong)Var5;
      bVar153 = SCARRY8(lVar136,1);
      lVar136 = lVar136 + 1;
    } while (lVar136 != 0);
    uVar142 = 0;
    bVar152 = false;
    if (param_3 < puVar132) {
      uVar145 = uVar135 + *puVar130;
      puVar129 = param_3 + 8;
      Var5 = (unkuint9)uVar137 + (unkuint9)(ulonglong)puVar134[9] +
             (unkuint9)CARRY8(uVar135,*puVar130);
      uVar142 = (ulonglong)Var5;
      Var5 = (unkuint9)uVar139 + (unkuint9)(ulonglong)puVar134[10] +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar138 = (ulonglong)Var5;
      uVar135 = (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar137 = uVar141 + puVar134[0xb];
      uVar148 = uVar137 + uVar135;
      uVar135 = (ulonglong)(CARRY8(uVar141,puVar134[0xb]) || CARRY8(uVar137,uVar135));
      uVar137 = uVar144 + puVar134[0xc];
      uVar143 = uVar137 + uVar135;
      uVar135 = (ulonglong)(CARRY8(uVar144,puVar134[0xc]) || CARRY8(uVar137,uVar135));
      uVar137 = uVar147 + puVar134[0xd];
      uVar146 = uVar137 + uVar135;
      uVar135 = (ulonglong)(CARRY8(uVar147,puVar134[0xd]) || CARRY8(uVar137,uVar135));
      uVar137 = uVar150 + puVar134[0xe];
      uVar149 = uVar137 + uVar135;
      uVar135 = (ulonglong)(CARRY8(uVar150,puVar134[0xe]) || CARRY8(uVar137,uVar135));
      uVar137 = uVar140 + puVar134[0xf];
      uVar151 = uVar137 + uVar135;
      puVar130 = puVar134 + 0x10;
      local_res18 = -(ulonglong)(CARRY8(uVar140,puVar134[0xf]) || CARRY8(uVar137,uVar135));
      bVar152 = false;
      bVar153 = false;
      lVar136 = -8;
      uVar135 = param_7;
      while( true ) {
        do {
          lVar127 = lVar136;
          auVar62._8_8_ = 0;
          auVar62._0_8_ = uVar135;
          auVar118._8_8_ = 0;
          auVar118._0_8_ = *puVar129;
          Var5 = (unkuint9)uVar145 + (unkuint9)SUB168(auVar62 * auVar118,0) + (unkuint9)bVar152;
          Var7 = (unkuint9)SUB168(auVar62 * auVar118,8) + (unkuint9)uVar142 + (unkuint9)bVar153;
          auVar63._8_8_ = 0;
          auVar63._0_8_ = uVar135;
          auVar119._8_8_ = 0;
          auVar119._0_8_ = puVar129[1];
          Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar63 * auVar119,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar145 = (ulonglong)Var6;
          Var7 = (unkuint9)SUB168(auVar63 * auVar119,8) + (unkuint9)uVar138 +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
          auVar64._8_8_ = 0;
          auVar64._0_8_ = uVar135;
          auVar120._8_8_ = 0;
          auVar120._0_8_ = puVar129[2];
          Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar64 * auVar120,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          uVar142 = (ulonglong)Var6;
          Var7 = (unkuint9)SUB168(auVar64 * auVar120,8) + (unkuint9)uVar148 +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
          auVar65._8_8_ = 0;
          auVar65._0_8_ = uVar135;
          auVar121._8_8_ = 0;
          auVar121._0_8_ = puVar129[3];
          Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar65 * auVar121,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          uVar138 = (ulonglong)Var6;
          Var7 = (unkuint9)SUB168(auVar65 * auVar121,8) + (unkuint9)uVar143 +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
          auVar66._8_8_ = 0;
          auVar66._0_8_ = uVar135;
          auVar122._8_8_ = 0;
          auVar122._0_8_ = puVar129[4];
          Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar66 * auVar122,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          uVar148 = (ulonglong)Var6;
          Var7 = (unkuint9)SUB168(auVar66 * auVar122,8) + (unkuint9)uVar146 +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
          auVar67._8_8_ = 0;
          auVar67._0_8_ = uVar135;
          auVar123._8_8_ = 0;
          auVar123._0_8_ = puVar129[5];
          Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar67 * auVar123,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          uVar143 = (ulonglong)Var6;
          Var7 = (unkuint9)SUB168(auVar67 * auVar123,8) + (unkuint9)uVar149 +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
          auVar68._8_8_ = 0;
          auVar68._0_8_ = uVar135;
          auVar124._8_8_ = 0;
          auVar124._0_8_ = puVar129[6];
          Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar68 * auVar124,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          uVar146 = (ulonglong)Var6;
          Var7 = (unkuint9)SUB168(auVar68 * auVar124,8) + (unkuint9)uVar151 +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
          auVar69._8_8_ = 0;
          auVar69._0_8_ = uVar135;
          auVar125._8_8_ = 0;
          auVar125._0_8_ = puVar129[7];
          uVar135 = *(ulonglong *)(&stack0x00000080 + lVar127 * 8);
          Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar69 * auVar125,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          uVar149 = (ulonglong)Var6;
          puVar130[lVar127] = (ulonglong)Var5;
          Var5 = (unkuint9)
                 (SUB168(auVar69 * auVar125,8) + (ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0')
                 ) + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          bVar152 = (char)((unkuint9)Var5 >> 0x40) != '\0';
          uVar151 = (ulonglong)Var5;
          bVar153 = SCARRY8(lVar127,1);
          lVar136 = lVar127 + 1;
        } while (lVar127 + 1 != 0);
        if (puVar132 <= puVar129) break;
        puVar129 = puVar129 + 8;
        bVar152 = CARRY8(uVar145,*puVar130);
        uVar135 = uVar145 + *puVar130;
        uVar145 = uVar135 + (local_res18 != 0);
        uVar135 = (ulonglong)(bVar152 || CARRY8(uVar135,(ulonglong)(local_res18 != 0)));
        bVar152 = CARRY8(uVar142,puVar130[1]);
        uVar137 = uVar142 + puVar130[1];
        uVar142 = uVar137 + uVar135;
        uVar135 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar135));
        bVar152 = CARRY8(uVar138,puVar130[2]);
        uVar137 = uVar138 + puVar130[2];
        uVar138 = uVar137 + uVar135;
        uVar135 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar135));
        bVar152 = CARRY8(uVar148,puVar130[3]);
        uVar137 = uVar148 + puVar130[3];
        uVar148 = uVar137 + uVar135;
        uVar135 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar135));
        bVar152 = CARRY8(uVar143,puVar130[4]);
        uVar137 = uVar143 + puVar130[4];
        uVar143 = uVar137 + uVar135;
        uVar135 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar135));
        bVar152 = CARRY8(uVar146,puVar130[5]);
        uVar137 = uVar146 + puVar130[5];
        uVar146 = uVar137 + uVar135;
        uVar135 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar135));
        bVar152 = CARRY8(uVar149,puVar130[6]);
        uVar137 = uVar149 + puVar130[6];
        uVar149 = uVar137 + uVar135;
        uVar135 = (ulonglong)(bVar152 || CARRY8(uVar137,uVar135));
        bVar152 = CARRY8(uVar151,puVar130[7]);
        uVar137 = uVar151 + puVar130[7];
        uVar151 = uVar137 + uVar135;
        puVar130 = puVar130 + 8;
        local_res18 = -(ulonglong)(bVar152 || CARRY8(uVar137,uVar135));
        bVar152 = false;
        bVar153 = false;
        lVar136 = lVar127 + -7;
        uVar135 = param_7;
      }
      uVar135 = uVar145 + uVar126;
      uVar137 = uVar142 + CARRY8(uVar145,uVar126);
      uVar126 = (ulonglong)CARRY8(uVar142,(ulonglong)CARRY8(uVar145,uVar126));
      uVar139 = uVar138 + uVar126;
      uVar126 = (ulonglong)CARRY8(uVar138,uVar126);
      uVar141 = uVar148 + uVar126;
      uVar126 = (ulonglong)CARRY8(uVar148,uVar126);
      uVar144 = uVar143 + uVar126;
      uVar126 = (ulonglong)CARRY8(uVar143,uVar126);
      uVar147 = uVar146 + uVar126;
      uVar126 = (ulonglong)CARRY8(uVar146,uVar126);
      uVar150 = uVar149 + uVar126;
      uVar126 = (ulonglong)CARRY8(uVar149,uVar126);
      uVar140 = uVar151 + uVar126;
      uVar142 = (ulonglong)CARRY8(uVar151,uVar126);
      bVar152 = local_res18 != 0;
    }
    uVar145 = uVar135 + *puVar130;
    uVar138 = (ulonglong)(CARRY8(uVar135,*puVar130) || CARRY8(uVar145,(ulonglong)bVar152));
    uVar148 = uVar137 + puVar130[1];
    uVar137 = (ulonglong)(CARRY8(uVar137,puVar130[1]) || CARRY8(uVar148,uVar138));
    uVar143 = uVar139 + puVar130[2];
    uVar139 = (ulonglong)(CARRY8(uVar139,puVar130[2]) || CARRY8(uVar143,uVar137));
    uVar146 = uVar141 + puVar130[3];
    uVar141 = (ulonglong)(CARRY8(uVar141,puVar130[3]) || CARRY8(uVar146,uVar139));
    uVar149 = uVar144 + puVar130[4];
    uVar144 = (ulonglong)(CARRY8(uVar144,puVar130[4]) || CARRY8(uVar149,uVar141));
    uVar151 = uVar147 + puVar130[5];
    uVar147 = (ulonglong)(CARRY8(uVar147,puVar130[5]) || CARRY8(uVar151,uVar144));
    uVar2 = uVar150 + puVar130[6];
    uVar150 = (ulonglong)(CARRY8(uVar150,puVar130[6]) || CARRY8(uVar2,uVar147));
    uVar3 = uVar140 + puVar130[7];
    uVar126 = uVar142 + (CARRY8(uVar140,puVar130[7]) || CARRY8(uVar3,uVar150));
    uVar135 = *(ulonglong *)((longlong)puVar130 + in_XMM3_Qa + 0x40);
    *puVar130 = uVar145 + bVar152;
    puVar130[1] = uVar148 + uVar138;
    puVar130[2] = uVar143 + uVar137;
    puVar130[3] = uVar146 + uVar139;
    puVar130[4] = uVar149 + uVar141;
    puVar130[5] = uVar151 + uVar144;
    puVar130[6] = uVar2 + uVar147;
    puVar130[7] = uVar3 + uVar150;
    puVar134 = (undefined8 *)((longlong)puVar130 + in_XMM3_Qa + 0x40);
  } while (puVar130 + 8 < puVar133 + 8);
  return;
}

// __bn_postx4x_internal @ 140e31360

void __bn_postx4x_internal(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong in_RAX;
  ulonglong uVar6;
  ulonglong *unaff_RBP;
  ulonglong *unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar6 = -in_RAX;
  param_1 = param_1 >> 5;
  uVar8 = *unaff_RBP - 1;
  uVar9 = unaff_RBP[1];
  lVar7 = 0;
  uVar10 = unaff_RBP[2];
  uVar11 = unaff_RBP[3];
  while( true ) {
    uVar2 = (~uVar8 & uVar6) + *unaff_RDI;
    uVar8 = (ulonglong)(CARRY8(~uVar8 & uVar6,*unaff_RDI) || CARRY8(uVar2,(ulonglong)(lVar7 != 0)));
    uVar3 = (~uVar9 & uVar6) + unaff_RDI[1];
    uVar1 = (ulonglong)(CARRY8(~uVar9 & uVar6,unaff_RDI[1]) || CARRY8(uVar3,uVar8));
    uVar4 = (~uVar10 & uVar6) + unaff_RDI[2];
    uVar10 = (ulonglong)(CARRY8(~uVar10 & uVar6,unaff_RDI[2]) || CARRY8(uVar4,uVar1));
    uVar9 = unaff_RDI[3];
    uVar5 = (~uVar11 & uVar6) + unaff_RDI[3];
    *param_2 = uVar2 + (lVar7 != 0);
    unaff_RDI = unaff_RDI + 4;
    param_2[1] = uVar3 + uVar8;
    lVar7 = -(ulonglong)(CARRY8(~uVar11 & uVar6,uVar9) || CARRY8(uVar5,uVar10));
    param_2[2] = uVar4 + uVar1;
    param_2[3] = uVar5 + uVar10;
    param_2 = param_2 + 4;
    param_1 = param_1 + 1;
    if (param_1 == 0) break;
    uVar8 = unaff_RBP[4];
    uVar9 = unaff_RBP[5];
    uVar10 = unaff_RBP[6];
    uVar11 = unaff_RBP[7];
    unaff_RBP = unaff_RBP + 4;
  }
  return;
}

// bn_get_bits5 @ 140e313f0

ushort bn_get_bits5(longlong param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(param_2 & 0xf);
  if (0xb < (param_2 & 0xf)) {
    param_1 = param_1 + 1;
    bVar1 = bVar1 - 8;
  }
  return *(ushort *)(param_1 + (ulonglong)(param_2 >> 4) * 2) >> (bVar1 & 0x1f) & 0x1f;
}

// bn_scatter5 @ 140e31420

void bn_scatter5(undefined8 *param_1,int param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_3 + param_4 * 8);
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// bn_gather5 @ 140e31460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bn_gather5(ulonglong *param_1,int param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  ulonglong *puVar33;
  ulonglong *puVar34;
  ulonglong *puVar35;
  ulonglong *puVar36;
  ulonglong *puVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  
  puVar37 = (ulonglong *)(param_3 + 0x80);
  iVar50 = _DAT_140e31710 + _L_inc;
  iVar54 = _UNK_140e31714 + _UNK_140e31704;
  iVar58 = _UNK_140e31718 + _UNK_140e31708;
  iVar62 = _UNK_140e3171c + _UNK_140e3170c;
  bVar16 = _L_inc == param_4;
  bVar17 = _UNK_140e31704 == param_4;
  bVar18 = _UNK_140e31708 == param_4;
  bVar19 = _UNK_140e3170c == param_4;
  iVar66 = _DAT_140e31710 + iVar50;
  iVar70 = _UNK_140e31714 + iVar54;
  iVar74 = _UNK_140e31718 + iVar58;
  iVar78 = _UNK_140e3171c + iVar62;
  iVar82 = _DAT_140e31710 + iVar66;
  iVar86 = _UNK_140e31714 + iVar70;
  iVar90 = _UNK_140e31718 + iVar74;
  iVar94 = _UNK_140e3171c + iVar78;
  iVar38 = _DAT_140e31710 + iVar82;
  iVar41 = _UNK_140e31714 + iVar86;
  iVar44 = _UNK_140e31718 + iVar90;
  iVar47 = _UNK_140e3171c + iVar94;
  iVar51 = _DAT_140e31710 + iVar38;
  iVar55 = _UNK_140e31714 + iVar41;
  iVar59 = _UNK_140e31718 + iVar44;
  iVar63 = _UNK_140e3171c + iVar47;
  iVar67 = _DAT_140e31710 + iVar51;
  iVar71 = _UNK_140e31714 + iVar55;
  iVar75 = _UNK_140e31718 + iVar59;
  iVar79 = _UNK_140e3171c + iVar63;
  iVar83 = _DAT_140e31710 + iVar67;
  iVar87 = _UNK_140e31714 + iVar71;
  iVar91 = _UNK_140e31718 + iVar75;
  iVar95 = _UNK_140e3171c + iVar79;
  iVar39 = _DAT_140e31710 + iVar83;
  iVar42 = _UNK_140e31714 + iVar87;
  iVar45 = _UNK_140e31718 + iVar91;
  iVar48 = _UNK_140e3171c + iVar95;
  iVar52 = _DAT_140e31710 + iVar39;
  iVar56 = _UNK_140e31714 + iVar42;
  iVar60 = _UNK_140e31718 + iVar45;
  iVar64 = _UNK_140e3171c + iVar48;
  iVar68 = _DAT_140e31710 + iVar52;
  iVar72 = _UNK_140e31714 + iVar56;
  iVar76 = _UNK_140e31718 + iVar60;
  iVar80 = _UNK_140e3171c + iVar64;
  iVar84 = _DAT_140e31710 + iVar68;
  iVar88 = _UNK_140e31714 + iVar72;
  iVar92 = _UNK_140e31718 + iVar76;
  iVar96 = _UNK_140e3171c + iVar80;
  iVar40 = _DAT_140e31710 + iVar84;
  iVar43 = _UNK_140e31714 + iVar88;
  iVar46 = _UNK_140e31718 + iVar92;
  iVar49 = _UNK_140e3171c + iVar96;
  iVar53 = _DAT_140e31710 + iVar40;
  iVar57 = _UNK_140e31714 + iVar43;
  iVar61 = _UNK_140e31718 + iVar46;
  iVar65 = _UNK_140e3171c + iVar49;
  iVar69 = _DAT_140e31710 + iVar53;
  iVar73 = _UNK_140e31714 + iVar57;
  iVar77 = _UNK_140e31718 + iVar61;
  iVar81 = _UNK_140e3171c + iVar65;
  iVar85 = _DAT_140e31710 + iVar69;
  iVar89 = _UNK_140e31714 + iVar73;
  iVar93 = _UNK_140e31718 + iVar77;
  iVar97 = _UNK_140e3171c + iVar81;
  do {
    puVar1 = puVar37 + -0x10;
    puVar36 = puVar37 + -0xf;
    puVar2 = puVar37 + -0xe;
    puVar27 = puVar37 + -0xd;
    puVar3 = puVar37 + -0xc;
    puVar35 = puVar37 + -0xb;
    puVar4 = puVar37 + -10;
    puVar26 = puVar37 + -9;
    puVar5 = puVar37 + -8;
    puVar34 = puVar37 + -7;
    puVar6 = puVar37 + -6;
    puVar25 = puVar37 + -5;
    puVar7 = puVar37 + -4;
    puVar33 = puVar37 + -3;
    puVar8 = puVar37 + -2;
    puVar24 = puVar37 + -1;
    uVar31 = *puVar37;
    puVar32 = puVar37 + 1;
    puVar9 = puVar37 + 2;
    puVar23 = puVar37 + 3;
    puVar10 = puVar37 + 4;
    puVar30 = puVar37 + 5;
    puVar11 = puVar37 + 6;
    puVar22 = puVar37 + 7;
    puVar12 = puVar37 + 8;
    puVar29 = puVar37 + 9;
    puVar13 = puVar37 + 10;
    puVar21 = puVar37 + 0xb;
    puVar14 = puVar37 + 0xc;
    puVar28 = puVar37 + 0xd;
    puVar15 = puVar37 + 0xe;
    puVar20 = puVar37 + 0xf;
    puVar37 = puVar37 + 0x20;
    *param_1 = *puVar36 & CONCAT44(-(uint)bVar19,-(uint)bVar18) |
               *puVar35 & CONCAT44(-(uint)(iVar78 == param_4),-(uint)(iVar74 == param_4)) |
               *puVar34 & CONCAT44(-(uint)(iVar47 == param_4),-(uint)(iVar44 == param_4)) |
               *puVar33 & CONCAT44(-(uint)(iVar79 == param_4),-(uint)(iVar75 == param_4)) |
               *puVar32 & CONCAT44(-(uint)(iVar48 == param_4),-(uint)(iVar45 == param_4)) |
               *puVar30 & CONCAT44(-(uint)(iVar80 == param_4),-(uint)(iVar76 == param_4)) |
               *puVar29 & CONCAT44(-(uint)(iVar49 == param_4),-(uint)(iVar46 == param_4)) |
               *puVar28 & CONCAT44(-(uint)(iVar81 == param_4),-(uint)(iVar77 == param_4)) |
               *puVar27 & CONCAT44(-(uint)(iVar62 == param_4),-(uint)(iVar58 == param_4)) |
               *puVar26 & CONCAT44(-(uint)(iVar94 == param_4),-(uint)(iVar90 == param_4)) |
               *puVar25 & CONCAT44(-(uint)(iVar63 == param_4),-(uint)(iVar59 == param_4)) |
               *puVar24 & CONCAT44(-(uint)(iVar95 == param_4),-(uint)(iVar91 == param_4)) |
               *puVar23 & CONCAT44(-(uint)(iVar64 == param_4),-(uint)(iVar60 == param_4)) |
               *puVar22 & CONCAT44(-(uint)(iVar96 == param_4),-(uint)(iVar92 == param_4)) |
               *puVar21 & CONCAT44(-(uint)(iVar65 == param_4),-(uint)(iVar61 == param_4)) |
               *puVar20 & CONCAT44(-(uint)(iVar97 == param_4),-(uint)(iVar93 == param_4)) |
               *puVar1 & CONCAT44(-(uint)bVar17,-(uint)bVar16) |
               *puVar3 & CONCAT44(-(uint)(iVar70 == param_4),-(uint)(iVar66 == param_4)) |
               *puVar5 & CONCAT44(-(uint)(iVar41 == param_4),-(uint)(iVar38 == param_4)) |
               *puVar7 & CONCAT44(-(uint)(iVar71 == param_4),-(uint)(iVar67 == param_4)) |
               uVar31 & CONCAT44(-(uint)(iVar42 == param_4),-(uint)(iVar39 == param_4)) |
               *puVar10 & CONCAT44(-(uint)(iVar72 == param_4),-(uint)(iVar68 == param_4)) |
               *puVar12 & CONCAT44(-(uint)(iVar43 == param_4),-(uint)(iVar40 == param_4)) |
               *puVar14 & CONCAT44(-(uint)(iVar73 == param_4),-(uint)(iVar69 == param_4)) |
               *puVar2 & CONCAT44(-(uint)(iVar54 == param_4),-(uint)(iVar50 == param_4)) |
               *puVar4 & CONCAT44(-(uint)(iVar86 == param_4),-(uint)(iVar82 == param_4)) |
               *puVar6 & CONCAT44(-(uint)(iVar55 == param_4),-(uint)(iVar51 == param_4)) |
               *puVar8 & CONCAT44(-(uint)(iVar87 == param_4),-(uint)(iVar83 == param_4)) |
               *puVar9 & CONCAT44(-(uint)(iVar56 == param_4),-(uint)(iVar52 == param_4)) |
               *puVar11 & CONCAT44(-(uint)(iVar88 == param_4),-(uint)(iVar84 == param_4)) |
               *puVar13 & CONCAT44(-(uint)(iVar57 == param_4),-(uint)(iVar53 == param_4)) |
               *puVar15 & CONCAT44(-(uint)(iVar89 == param_4),-(uint)(iVar85 == param_4));
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

