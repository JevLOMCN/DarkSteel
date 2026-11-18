// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// op_pvq_search_sse2 @ 14f88971c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void op_pvq_search_sse2(void *param_1,uint *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 (*_Dst) [16];
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  size_t _Size;
  int iVar21;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar31;
  uint uVar38;
  uint uVar40;
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  uint uVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined8 auStack_d0 [5];
  float local_a8 [2];
  undefined8 local_a0;
  ulonglong local_98;
  short sVar30;
  short sVar36;
  short sVar37;
  short sVar39;
  
  uVar41 = _UNK_15065157c;
  uVar40 = _UNK_150651578;
  uVar38 = _UNK_150651574;
  uVar31 = __xmm_80000000800000008000000080000000;
  local_98 = __security_cookie.value ^ (ulonglong)local_a8;
  lVar17 = (longlong)param_4;
  lVar4 = lVar17 * 4;
  uVar19 = lVar4 + 0xc;
  uVar14 = lVar4 + 0x1b;
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14f8897a8;
  lVar7 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = lVar4 + 0x1b;
  pfVar5 = (float *)((longlong)local_a8 + lVar7);
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x14f8897c5;
  lVar8 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = lVar4 + 0x1b;
  _Dst = (undefined1 (*) [16])((longlong)local_a8 + lVar8 + lVar7);
  if (uVar14 <= uVar19) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7) = 0x14f8897e2;
  lVar4 = -(uVar14 & 0xfffffffffffffff0);
  _Size = lVar17 * 4;
  local_a0 = (longlong)local_a8 + lVar4 + lVar8 + lVar7;
  *(undefined8 *)((longlong)auStack_d0 + lVar4 + lVar8 + lVar7) = 0x14f889803;
  memcpy(_Dst,param_1,_Size);
  *(undefined4 *)((longlong)&local_a0 + lVar17 * 4 + lVar8 + lVar7) = 0;
  *(undefined4 *)((longlong)local_a8 + lVar17 * 4 + lVar8 + lVar7 + 4) = 0;
  fVar44 = 0.0;
  fVar47 = 0.0;
  fVar50 = 0.0;
  fVar53 = 0.0;
  *(undefined4 *)((longlong)*_Dst + _Size) = 0;
  lVar16 = local_a0;
  if (0 < param_4) {
    lVar20 = local_a0 - (longlong)_Dst;
    uVar14 = (ulonglong)((param_4 - 1U >> 2) + 1);
    pauVar15 = _Dst;
    do {
      fVar45 = *(float *)*pauVar15;
      fVar48 = *(float *)((longlong)*pauVar15 + 4);
      fVar51 = *(float *)((longlong)*pauVar15 + 8);
      fVar55 = *(float *)((longlong)*pauVar15 + 0xc);
      puVar1 = (undefined8 *)(((longlong)pfVar5 - (longlong)_Dst) + (longlong)pauVar15);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)_Dst) + (longlong)pauVar15);
      *puVar1 = 0;
      puVar1[1] = 0;
      in_XMM1._0_4_ = (float)(~uVar31 & (uint)fVar45);
      in_XMM1._4_4_ = (float)(~uVar38 & (uint)fVar48);
      in_XMM1._8_4_ = (float)(~uVar40 & (uint)fVar51);
      in_XMM1._12_4_ = (float)(~uVar41 & (uint)fVar55);
      *pauVar15 = in_XMM1;
      piVar2 = (int *)(lVar20 + (longlong)pauVar15);
      *piVar2 = -(uint)(fVar45 < 0.0);
      piVar2[1] = -(uint)(fVar48 < 0.0);
      piVar2[2] = -(uint)(fVar51 < 0.0);
      piVar2[3] = -(uint)(fVar55 < 0.0);
      pauVar15 = pauVar15 + 1;
      fVar44 = fVar44 + in_XMM1._0_4_;
      fVar47 = fVar47 + in_XMM1._4_4_;
      fVar50 = fVar50 + in_XMM1._8_4_;
      fVar53 = fVar53 + in_XMM1._12_4_;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  local_a8[0] = 0.0;
  auVar32 = ZEXT816(0);
  fVar45 = fVar44 + fVar50 + fVar47 + fVar53;
  if (param_4 >> 1 < (int)param_3) {
    if ((fVar45 <= __real_26901d7d) ||
       (fVar48 = fVar47 + fVar53 + fVar44 + fVar50, fVar51 = fVar50 + fVar44 + fVar53 + fVar47,
       fVar44 = fVar53 + fVar47 + fVar50 + fVar44, __real_42800000 <= fVar45)) {
      *(undefined4 *)*_Dst = 0x3f800000;
      lVar20 = 1;
      do {
        *(undefined4 *)((longlong)*_Dst + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
        fVar45 = ___xmm_3f8000003f8000003f8000003f800000;
        fVar48 = _UNK_15076b1f4;
        fVar51 = _UNK_15076b1f8;
        fVar44 = _UNK_15076b1fc;
      } while (lVar20 < lVar17);
    }
    fVar47 = 0.0;
    fVar50 = 0.0;
    fVar53 = 0.0;
    fVar55 = 0.0;
    fVar56 = 0.0;
    fVar58 = 0.0;
    fVar59 = 0.0;
    fVar60 = 0.0;
    iVar21 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    auVar57._4_4_ = fVar48;
    auVar57._0_4_ = fVar45;
    auVar57._8_4_ = fVar51;
    auVar57._12_4_ = fVar44;
    auVar32 = rcpps(in_XMM1,auVar57);
    fVar44 = (float)((double)(int)param_3 + __real_3fe999999999999a);
    if (0 < param_4) {
      uVar14 = (ulonglong)((param_4 - 1U >> 2) + 1);
      puVar18 = param_2;
      do {
        pfVar3 = (float *)(((longlong)_Dst - (longlong)param_2) + (longlong)puVar18);
        fVar45 = *pfVar3;
        fVar48 = pfVar3[1];
        fVar51 = pfVar3[2];
        fVar9 = pfVar3[3];
        uVar31 = (uint)(fVar45 * fVar44 * auVar32._0_4_);
        uVar38 = (uint)(fVar48 * fVar44 * auVar32._4_4_);
        uVar40 = (uint)(fVar51 * fVar44 * auVar32._8_4_);
        uVar41 = (uint)(fVar9 * fVar44 * auVar32._12_4_);
        fVar46 = (float)(int)uVar31;
        fVar49 = (float)(int)uVar38;
        fVar52 = (float)(int)uVar40;
        fVar54 = (float)(int)uVar41;
        *puVar18 = uVar31;
        puVar18[1] = uVar38;
        puVar18[2] = uVar40;
        puVar18[3] = uVar41;
        iVar21 = uVar31 + iVar21;
        iVar27 = uVar38 + iVar27;
        iVar28 = uVar40 + iVar28;
        iVar29 = uVar41 + iVar29;
        fVar56 = fVar56 + fVar46 * fVar45;
        fVar58 = fVar58 + fVar49 * fVar48;
        fVar59 = fVar59 + fVar52 * fVar51;
        fVar60 = fVar60 + fVar54 * fVar9;
        pfVar3 = (float *)(((longlong)pfVar5 - (longlong)param_2) + (longlong)puVar18);
        *pfVar3 = fVar46 + fVar46;
        pfVar3[1] = fVar49 + fVar49;
        pfVar3[2] = fVar52 + fVar52;
        pfVar3[3] = fVar54 + fVar54;
        puVar18 = puVar18 + 4;
        fVar47 = fVar47 + fVar46 * fVar46;
        fVar50 = fVar50 + fVar49 * fVar49;
        fVar53 = fVar53 + fVar52 * fVar52;
        fVar55 = fVar55 + fVar54 * fVar54;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    param_3 = param_3 - (iVar29 + iVar27 + iVar28 + iVar21);
    local_a8[0] = fVar58 + fVar60 + fVar56 + fVar59;
    auVar32._4_4_ = fVar47 + fVar53 + fVar50 + fVar55;
    auVar32._0_4_ = fVar50 + fVar55 + fVar47 + fVar53;
    auVar32._8_4_ = fVar55 + fVar50 + fVar53 + fVar47;
    auVar32._12_4_ = fVar53 + fVar47 + fVar55 + fVar50;
  }
  fVar44 = local_a8[0];
  *(undefined4 *)((longlong)&local_a0 + lVar17 * 4 + lVar8 + lVar7) = 0xc2c80000;
  *(undefined4 *)((longlong)local_a8 + lVar17 * 4 + lVar8 + lVar7 + 4) = 0xc2c80000;
  *(undefined4 *)((longlong)*_Dst + _Size) = 0xc2c80000;
  *(undefined4 *)((longlong)&local_a0 + lVar17 * 4 + lVar7) = 0x42c80000;
  *(undefined4 *)((longlong)local_a8 + lVar17 * 4 + lVar7 + 4) = 0x42c80000;
  pfVar5[lVar17] = 100.0;
  if (param_4 + 3 < (int)param_3) {
    fVar50 = (float)(int)param_3;
    fVar47 = *pfVar5;
    *param_2 = *param_2 + param_3;
    param_3 = 0;
    auVar32 = ZEXT416((uint)(fVar50 * fVar50 + auVar32._0_4_ + fVar50 * fVar47));
  }
  if (0 < (int)param_3) {
    uVar14 = (ulonglong)param_3;
    do {
      auVar57 = ZEXT816(0);
      auVar43 = ZEXT816(0);
      auVar42._4_12_ = auVar32._4_12_;
      auVar42._0_4_ = auVar32._0_4_ + __real_3f800000;
      local_a0 = CONCAT44(local_a0._4_4_,auVar42._0_4_);
      if (0 < param_4) {
        uVar19 = (ulonglong)((param_4 - 1U >> 2) + 1);
        pauVar15 = _Dst;
        auVar33 = auVar42;
        auVar24 = ___xmm_00000003000000020000000100000000;
        auVar25 = auVar43;
        do {
          pfVar3 = (float *)((longlong)pauVar15 + ((longlong)pfVar5 - (longlong)_Dst));
          pvVar10 = *pauVar15;
          pvVar11 = *pauVar15;
          pvVar12 = *pauVar15;
          pvVar13 = *pauVar15;
          pauVar15 = pauVar15 + 1;
          auVar22._0_4_ = *pfVar3 + auVar42._0_4_;
          auVar22._4_4_ = pfVar3[1] + auVar42._0_4_;
          auVar22._8_4_ = pfVar3[2] + auVar42._0_4_;
          auVar22._12_4_ = pfVar3[3] + auVar42._0_4_;
          auVar43 = rsqrtps(auVar33,auVar22);
          auVar33._0_4_ = auVar43._0_4_ * (*(float *)pvVar10 + local_a8[0]);
          auVar33._4_4_ = auVar43._4_4_ * (*(float *)((longlong)pvVar11 + 4) + local_a8[0]);
          auVar33._8_4_ = auVar43._8_4_ * (*(float *)((longlong)pvVar12 + 8) + local_a8[0]);
          auVar33._12_4_ = auVar43._12_4_ * (*(float *)((longlong)pvVar13 + 0xc) + local_a8[0]);
          auVar23._4_4_ = -(uint)(auVar57._4_4_ < auVar33._4_4_);
          auVar23._0_4_ = -(uint)(auVar57._0_4_ < auVar33._0_4_);
          auVar23._8_4_ = -(uint)(auVar57._8_4_ < auVar33._8_4_);
          auVar23._12_4_ = -(uint)(auVar57._12_4_ < auVar33._12_4_);
          auVar23 = auVar23 & auVar24;
          auVar61._0_4_ = auVar24._0_4_ + ___xmm_00000004000000040000000400000004;
          auVar61._4_4_ = auVar24._4_4_ + _UNK_150b50dd4;
          auVar61._8_4_ = auVar24._8_4_ + _UNK_150b50dd8;
          auVar61._12_4_ = auVar24._12_4_ + _UNK_150b50ddc;
          sVar6 = auVar23._0_2_;
          sVar30 = auVar25._0_2_;
          auVar43._0_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._2_2_;
          sVar30 = auVar25._2_2_;
          auVar43._2_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._4_2_;
          sVar30 = auVar25._4_2_;
          auVar43._4_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._6_2_;
          sVar30 = auVar25._6_2_;
          auVar43._6_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._8_2_;
          sVar30 = auVar25._8_2_;
          auVar43._8_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._10_2_;
          sVar30 = auVar25._10_2_;
          auVar43._10_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._12_2_;
          sVar30 = auVar25._12_2_;
          sVar36 = auVar25._14_2_;
          auVar43._12_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
          sVar6 = auVar23._14_2_;
          auVar43._14_2_ = (ushort)(sVar36 < sVar6) * sVar6 | (ushort)(sVar36 >= sVar6) * sVar36;
          auVar57 = maxps(auVar57,auVar33);
          uVar19 = uVar19 - 1;
          auVar24 = auVar61;
          auVar25 = auVar43;
        } while (uVar19 != 0);
      }
      auVar24._0_8_ = auVar57._8_8_;
      auVar24._8_4_ = auVar57._0_4_;
      auVar24._12_4_ = auVar57._4_4_;
      auVar33 = maxps(auVar57,auVar24);
      auVar25._4_4_ = auVar33._0_4_;
      auVar25._0_4_ = auVar33._4_4_;
      auVar25._8_4_ = auVar33._12_4_;
      auVar25._12_4_ = auVar33._8_4_;
      auVar33 = maxps(auVar33,auVar25);
      auVar34._4_4_ = -(uint)(auVar33._4_4_ == auVar57._4_4_);
      auVar34._0_4_ = -(uint)(auVar33._0_4_ == auVar57._0_4_);
      auVar34._8_4_ = -(uint)(auVar33._8_4_ == auVar57._8_4_);
      auVar34._12_4_ = -(uint)(auVar33._12_4_ == auVar57._12_4_);
      auVar34 = auVar34 & auVar43;
      auVar26._8_8_ = auVar34._8_8_;
      auVar26._0_8_ = auVar26._8_8_;
      sVar6 = auVar34._8_2_;
      sVar30 = auVar34._0_2_;
      auVar35._0_2_ = (ushort)(sVar30 < sVar6) * sVar6 | (ushort)(sVar30 >= sVar6) * sVar30;
      sVar30 = auVar34._10_2_;
      sVar36 = auVar34._2_2_;
      auVar35._2_2_ = (ushort)(sVar36 < sVar30) * sVar30 | (ushort)(sVar36 >= sVar30) * sVar36;
      sVar36 = auVar34._12_2_;
      sVar37 = auVar34._4_2_;
      auVar35._4_2_ = (ushort)(sVar37 < sVar36) * sVar36 | (ushort)(sVar37 >= sVar36) * sVar37;
      sVar37 = auVar34._14_2_;
      sVar39 = auVar34._6_2_;
      auVar35._6_2_ = (ushort)(sVar39 < sVar37) * sVar37 | (ushort)(sVar39 >= sVar37) * sVar39;
      auVar35._8_2_ = sVar6;
      auVar35._10_2_ = sVar30;
      auVar35._12_2_ = sVar36;
      auVar35._14_2_ = sVar37;
      auVar57 = pshuflw(auVar26,auVar35,0x4e);
      sVar6 = auVar57._0_2_;
      sVar30 = auVar57._2_2_;
      lVar17 = (longlong)
               CONCAT22((ushort)((short)auVar35._2_2_ < sVar30) * sVar30 |
                        ((short)auVar35._2_2_ >= sVar30) * auVar35._2_2_,
                        (ushort)((short)auVar35._0_2_ < sVar6) * sVar6 |
                        ((short)auVar35._0_2_ >= sVar6) * auVar35._0_2_);
      fVar44 = fVar44 + *(float *)((longlong)*_Dst + lVar17 * 4);
      local_a8[0] = fVar44;
      auVar32._0_4_ = auVar42._0_4_ + pfVar5[lVar17];
      pfVar5[lVar17] = pfVar5[lVar17] + __real_40000000;
      param_2[lVar17] = param_2[lVar17] + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (0 < param_4) {
    lVar16 = lVar16 - (longlong)param_2;
    uVar14 = (ulonglong)((param_4 - 1U >> 2) + 1);
    do {
      puVar18 = (uint *)(lVar16 + (longlong)param_2);
      uVar31 = puVar18[1];
      uVar38 = puVar18[2];
      uVar40 = puVar18[3];
      *param_2 = *param_2 + *puVar18 ^ *puVar18;
      param_2[1] = param_2[1] + uVar31 ^ uVar31;
      param_2[2] = param_2[2] + uVar38 ^ uVar38;
      param_2[3] = param_2[3] + uVar40 ^ uVar40;
      param_2 = param_2 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar4 + lVar8 + lVar7) = 0x14f889b46;
  return;
}

