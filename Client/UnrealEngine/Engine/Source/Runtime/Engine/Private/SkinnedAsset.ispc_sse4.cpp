// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FillComponentSpaceTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunS_3E_un_3C_CunT_3E_CuniCuniCuni_sse4 @ 140a9e400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FillComponentSpaceTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunS_3E_un_3C_CunT_3E_CuniCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               int param_6,uint param_7,undefined1 (*param_8) [16])

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  undefined4 unaff_ESI;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  double dVar24;
  double dVar25;
  double dVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong uVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  int iVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  double dVar59;
  double dVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar64;
  undefined1 auVar62 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar75;
  double dVar76;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  undefined1 auVar77 [16];
  double dVar81;
  double dVar83;
  undefined1 auVar84 [16];
  double dVar82;
  double dVar87;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar88;
  double dVar90;
  undefined1 auVar89 [16];
  double dVar91;
  double dVar92;
  undefined1 auVar93 [16];
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  double dStack_320;
  double local_308;
  double dStack_300;
  double local_2e8;
  undefined1 local_2d8 [128];
  double local_258 [4];
  undefined1 local_238 [16];
  double local_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8 [4];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  ulonglong local_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_120;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  
  auVar70 = *param_8;
  iVar20 = movmskps(unaff_ESI,auVar70);
  if (iVar20 == 0xf) {
    if (1 < (int)param_7) {
      uVar22 = 1;
      do {
        uVar3 = *(ushort *)(param_3 + uVar22 * 2);
        lVar9 = (ulonglong)uVar3 * 0x60;
        iVar20 = *(int *)(param_4 + (int)((uint)uVar3 * param_5 + param_6));
        lVar19 = (longlong)iVar20 * 0x60;
        dVar71 = *(double *)(param_1 + lVar19);
        dVar34 = *(double *)(param_1 + 8 + lVar19);
        dVar25 = *(double *)(param_1 + 0x10 + lVar19);
        dVar33 = *(double *)(param_1 + 0x18 + lVar19);
        dVar88 = *(double *)(param_1 + 0x20 + lVar19);
        local_1f0 = *(double *)(param_1 + 0x28 + lVar19);
        local_2d8._0_8_ = *(double *)(param_1 + 0x30 + lVar19);
        local_2d8._8_8_ = 0;
        dVar36 = *(double *)(param_2 + lVar9);
        dVar43 = *(double *)(param_2 + 8 + lVar9);
        pdVar2 = (double *)(param_2 + 0x40 + lVar9);
        dVar10 = *pdVar2;
        dVar11 = pdVar2[1];
        pdVar2 = (double *)(param_2 + 0x50 + lVar9);
        dVar12 = *pdVar2;
        dVar13 = pdVar2[1];
        pdVar2 = (double *)(param_1 + 0x40 + lVar19);
        dVar14 = *pdVar2;
        dVar15 = pdVar2[1];
        pdVar2 = (double *)(param_1 + 0x50 + lVar19);
        dVar59 = *pdVar2;
        dVar90 = pdVar2[1];
        auVar70._4_4_ = -(uint)(dVar11 < 0.0);
        auVar70._0_4_ = -(uint)(dVar10 < 0.0);
        auVar70._8_4_ = -(uint)(dVar12 < 0.0);
        auVar70._12_4_ = -(uint)(dVar13 < 0.0);
        auVar53._4_4_ = -(uint)(dVar15 < 0.0);
        auVar53._0_4_ = -(uint)(dVar14 < 0.0);
        auVar53._8_4_ = -(uint)(dVar59 < 0.0);
        auVar53._12_4_ = -(uint)(dVar90 < 0.0);
        dVar76 = *(double *)(param_2 + 0x10 + lVar9);
        dVar45 = *(double *)(param_2 + 0x18 + lVar9);
        iVar20 = movmskps(iVar20,auVar53 | auVar70);
        local_108 = *(double *)(param_2 + 0x20 + lVar9);
        local_100 = *(double *)(param_2 + 0x28 + lVar9);
        local_f8 = *(double *)(param_2 + 0x30 + lVar9);
        if (iVar20 == 0) {
          dVar58 = dVar43 * dVar25 * ___xmm_3ff0000000000000bff0000000000000 +
                   dVar76 * dVar34 +
                   dVar71 * dVar45 * ___xmm_bff00000000000003ff0000000000000 + dVar33 * dVar36;
          dVar24 = dVar36 * dVar25 * _UNK_15076b868 +
                   dVar45 * dVar34 + dVar71 * dVar76 * _UNK_15076c6f8 + dVar33 * dVar43;
          dVar35 = dVar45 * dVar25 * ___xmm_bff00000000000003ff0000000000000 +
                   ((dVar71 * dVar43 * ___xmm_bff00000000000003ff0000000000000 + dVar33 * dVar76) -
                   dVar36 * dVar34);
          dVar45 = dVar76 * dVar25 * _UNK_15076c6f8 +
                   ((dVar71 * dVar36 * _UNK_15076c6f8 + dVar33 * dVar45) - dVar43 * dVar34);
          auVar68._0_8_ = local_108 * dVar14;
          auVar68._8_8_ = local_100 * dVar15;
          local_f8 = local_f8 * dVar59;
          dVar44 = *(double *)(param_2 + lVar9 + 0x38) * dVar90;
          auVar96._8_8_ = dVar44;
          auVar96._0_8_ = local_f8;
          auVar70 = blendpd(auVar96,auVar68,1);
          dVar43 = auVar68._8_8_ * dVar71 - dVar34 * auVar68._0_8_;
          dVar39 = local_f8 * dVar34 - dVar25 * auVar68._8_8_;
          dVar36 = auVar70._0_8_ * dVar25 - dVar71 * local_f8;
          dVar76 = auVar70._8_8_ * dVar33 - dVar33 * dVar44;
          auVar61._0_8_ = dVar43 + dVar43;
          auVar61._8_8_ = dVar39 + dVar39;
          dVar36 = dVar36 + dVar36;
          dVar76 = dVar76 + dVar76;
          auVar46._8_8_ = dVar76;
          auVar46._0_8_ = dVar36;
          auVar70 = blendpd(auVar46,auVar61,1);
          dVar43 = auVar61._8_8_ * dVar25 - auVar70._0_8_ * dVar71;
          auVar74._0_8_ = dVar36 * dVar71 - auVar61._8_8_ * dVar34;
          auVar74._8_8_ = auVar61._0_8_ * dVar34 - dVar36 * dVar25;
          auVar47._8_8_ = dVar76 * dVar33 - auVar70._8_8_ * dVar33;
          auVar47._0_8_ = dVar43;
          auVar53 = blendpd(auVar47,auVar74,1);
          dStack_1f8 = dVar88 + auVar74._8_8_ + dVar33 * auVar61._8_8_ + auVar68._0_8_;
          local_1f0 = local_1f0 + dVar43 + dVar33 * dVar36 + auVar68._8_8_;
          dStack_1e8 = (double)local_2d8._0_8_ + auVar53._0_8_ + dVar33 * auVar70._0_8_ + local_f8;
          dVar71 = *(double *)(param_1 + lVar19 + 0x38) +
                   auVar53._8_8_ + dVar33 * auVar70._8_8_ + dVar44;
        }
        else {
          dVar44 = dVar76 + dVar76;
          dVar39 = dVar43 + dVar43;
          dVar91 = dVar36 * (dVar36 + dVar36);
          dVar64 = dVar45 * (dVar36 + dVar36);
          dVar24 = *(double *)(param_2 + 0x50 + lVar9);
          local_1b8 = *(double *)(param_2 + 0x48 + lVar9) * (dVar39 * dVar36 - dVar45 * dVar44);
          dStack_1b0 = dVar24 * (dVar44 * dVar43 - dVar64);
          dVar65 = dVar25 + dVar25;
          dVar58 = dVar71 + dVar71;
          dVar81 = dVar34 + dVar34;
          dVar82 = (dVar71 * dVar65 - dVar81 * dVar33) * *(double *)(param_1 + 0x40 + lVar19);
          dVar35 = *(double *)(param_1 + 0x50 + lVar19);
          dVar87 = (__real_3ff0000000000000 - (dVar34 * dVar81 + dVar71 * dVar58)) * dVar35;
          auVar69._0_8_ = (dVar71 * dVar65 + dVar81 * dVar33) * dVar35;
          auVar69._8_8_ = (dVar71 * dVar58 + dVar58 * dVar33) * 0.0;
          auVar93._0_8_ = *(double *)(param_1 + 0x48 + lVar19) * (dVar81 * dVar71 - dVar65 * dVar33)
          ;
          auVar93._8_8_ = dVar35 * (dVar65 * dVar34 - dVar58 * dVar33);
          dVar63 = (dVar44 * dVar36 - dVar39 * dVar45) * *(double *)(param_2 + 0x40 + lVar9);
          dVar35 = (___xmm_3ff00000000000003ff0000000000000 - (dVar76 * dVar44 + dVar43 * dVar39)) *
                   dVar10;
          dVar76 = (_UNK_150689688 - (dVar76 * dVar44 + dVar91)) * dVar11;
          auVar97._0_8_ =
               (___xmm_3ff00000000000003ff0000000000000 - (dVar25 * dVar65 + dVar34 * dVar81)) *
               dVar14;
          auVar97._8_8_ = (_UNK_150689688 - (dVar25 * dVar65 + dVar71 * dVar58)) * dVar15;
          dVar81 = (dVar81 * dVar71 + dVar65 * dVar33) * dVar14;
          dVar33 = (dVar65 * dVar34 + dVar58 * dVar33) * dVar15;
          auVar70 = blendpd(auVar69,auVar93,2);
          auVar53 = blendpd(auVar93,auVar97,2);
          dVar58 = auVar70._0_8_;
          dVar65 = auVar70._8_8_;
          dVar83 = (dVar39 * dVar36 + dVar45 * dVar44) * dVar10;
          dVar64 = (dVar44 * dVar43 + dVar64) * dVar11;
          dVar92 = auVar53._0_8_;
          dVar94 = auVar53._8_8_;
          local_1a8 = local_1b8;
          dStack_1a0 = local_1b8;
          auVar5._8_4_ = SUB84(dVar76,0);
          auVar5._0_8_ = dVar76;
          auVar5._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
          dVar71 = (dVar39 * dVar45 + dVar44 * dVar36) * dVar24;
          dVar24 = (__real_3ff0000000000000 - (dVar43 * dVar39 + dVar91)) * dVar24;
          local_120 = dStack_1b0;
          auVar17._8_8_ = _UNK_15061cbc8;
          auVar17._0_8_ = ___xmm_3ff00000000000000000000000000000;
          auVar70 = blendpd(local_2d8._0_16_,auVar17,2);
          dVar25 = auVar70._0_8_ * ___xmm_00000000000000000000000000000000;
          dVar34 = auVar70._8_8_ * DAT_150aa8f68;
          dVar36 = dVar33 * dVar83 + dVar63 * dVar87 + dVar35 * dVar82 + dVar25;
          dVar44 = dVar33 * dVar76 + dVar87 * dVar64 + dVar82 * local_1b8 + dVar25;
          dVar25 = dVar33 * dStack_1b0 + dVar87 * dVar24 + dVar82 * dVar71 + dVar25;
          local_110 = 0;
          auVar7._8_4_ = SUB84(dVar81,0);
          auVar7._0_8_ = auVar97._0_8_;
          auVar7._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
          local_258[3] = DAT_150aa8f68 * dVar83 + dVar63 * 0.0 + dVar35 * 0.0 + dVar34;
          local_220 = DAT_150aa8f68 * dVar76 + dVar64 * 0.0 + local_1b8 * 0.0 + dVar34;
          local_200 = DAT_150aa8f68 * dStack_1b0 + dVar24 * 0.0 + dVar71 * 0.0 + dVar34;
          dStack_1f8 = local_100 * dVar92 + local_f8 * dVar58 + auVar97._0_8_ * local_108 + dVar88;
          dVar88 = dVar88 * ___xmm_00000000000000000000000000000000;
          dVar39 = local_1f0 * DAT_150aa8f68;
          dVar43 = dVar83 * dVar92 + dVar58 * dVar63 + auVar97._0_8_ * dVar35 + dVar88;
          dVar45 = dVar83 * dVar94 + dVar65 * dVar63 + dVar81 * dVar35 + dVar39;
          local_1f0 = local_100 * dVar94 + local_f8 * dVar65 + dVar81 * local_108 + local_1f0;
          dStack_1e8 = dVar33 * local_100 + dVar87 * local_f8 + dVar82 * local_108 + auVar70._0_8_;
          local_1e0 = DAT_150aa8f68 * local_100 + local_f8 * 0.0 + local_108 * 0.0 + auVar70._8_8_;
          dVar33 = dVar36 * dVar36 + dVar45 * dVar45 + dVar43 * dVar43;
          local_f0 = 0x3ff0000000000000;
          dVar34 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= dVar33 + __real_be45798ee2308c3a) {
            dVar34 = __real_3ff0000000000000 / SQRT(dVar33);
          }
          local_2d8._8_8_ = auVar7._8_8_;
          dStack_300 = auVar5._8_8_;
          dVar76 = dVar76 * dVar92 + dVar64 * dVar58 + local_1b8 * auVar97._0_8_ + dVar88;
          dVar63 = dStack_300 * dVar94 + dVar64 * dVar65 + local_1b8 * (double)local_2d8._8_8_ +
                   dVar39;
          dVar35 = dVar44 * dVar44 + dVar63 * dVar63 + dVar76 * dVar76;
          dVar33 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= dVar35 + __real_be45798ee2308c3a) {
            dVar33 = __real_3ff0000000000000 / SQRT(dVar35);
          }
          dVar88 = dVar92 * dStack_1b0 + dVar58 * dVar24 + auVar97._0_8_ * dVar71 + dVar88;
          dVar39 = dVar94 * dStack_1b0 + dVar65 * dVar24 + (double)local_2d8._8_8_ * dVar71 + dVar39
          ;
          dVar24 = dVar25 * dVar25 + dVar39 * dVar39 + dVar88 * dVar88;
          dVar71 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= dVar24 + __real_be45798ee2308c3a) {
            dVar71 = __real_3ff0000000000000 / SQRT(dVar24);
          }
          iVar49 = -(uint)(0.0 <= dVar59 * dVar12);
          iVar57 = -(uint)(0.0 <= dVar90 * dVar13);
          auVar30._0_4_ = -(uint)(0.0 <= dVar14 * dVar10);
          auVar30._8_4_ = -(uint)(0.0 <= dVar15 * dVar11);
          auVar30._4_4_ = auVar30._0_4_;
          auVar30._12_4_ = auVar30._8_4_;
          auVar62._8_4_ = 0xffffffff;
          auVar62._0_8_ = 0xffffffffffffffff;
          auVar62._12_4_ = 0xffffffff;
          auVar53 = blendvps(ZEXT816(0),auVar62,auVar30);
          auVar31._4_4_ = iVar49;
          auVar31._0_4_ = iVar49;
          auVar31._8_4_ = iVar57;
          auVar31._12_4_ = iVar57;
          auVar70 = blendvps(ZEXT816(0),auVar62,auVar31);
          uVar75 = auVar53._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
                   ___xmm_bff0000000000000bff0000000000000;
          uVar78 = auVar53._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
          uVar79 = auVar53._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
          uVar80 = auVar53._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
          auVar70 = ZEXT816(0xbff0000000000000) ^ ZEXT816(0x8000000000000000) & auVar70;
          auVar32._0_8_ = (double)CONCAT44(uVar78,uVar75);
          auVar32._8_4_ = uVar75;
          auVar32._12_4_ = uVar78;
          local_258[0] = auVar32._0_8_ * dVar43 * dVar34;
          local_258[1] = auVar32._8_8_ * dVar45 * dVar34;
          local_258[2] = dVar36 * dVar34 * (double)CONCAT44(uVar78,uVar75);
          auVar37._0_8_ = (double)CONCAT44(uVar80,uVar79);
          auVar37._8_4_ = uVar79;
          auVar37._12_4_ = uVar80;
          local_228 = dVar44 * dVar33 * auVar37._0_8_;
          dVar34 = dVar76 * dVar33 * auVar37._0_8_;
          dVar33 = dVar63 * dVar33 * auVar37._8_8_;
          auVar42._0_8_ = auVar70._0_8_;
          auVar42._8_4_ = 0;
          auVar42._12_4_ = auVar70._4_4_;
          local_218 = auVar42._0_8_ * dVar71 * dVar88;
          dStack_210 = auVar42._8_8_ * dVar39 * dVar71;
          local_208 = auVar42._0_8_ * dVar25 * dVar71;
          auVar48._4_4_ =
               -(uint)(_UNK_150b53828 < (double)((ulonglong)local_258[1] & _UNK_15061cc88));
          auVar48._0_4_ =
               -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                      (double)((ulonglong)local_258[0] & __xmm_7fffffffffffffff7fffffffffffffff));
          auVar48._8_4_ =
               -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                      (double)((ulonglong)local_258[2] & __xmm_7fffffffffffffff7fffffffffffffff));
          auVar48._12_4_ =
               -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
          local_238._8_4_ = SUB84(dVar33,0);
          local_238._0_8_ = dVar34;
          local_238._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
          iVar20 = movmskps(iVar20,auVar48);
          dVar71 = 0.0;
          dVar25 = __real_3ff0000000000000;
          if (iVar20 == 0) {
            dVar33 = 0.0;
            dVar34 = 0.0;
            dVar88 = 0.0;
          }
          else {
            auVar55._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)dVar33 & _UNK_15061cc88));
            auVar55._0_4_ =
                 -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                        (double)((ulonglong)dVar34 & __xmm_7fffffffffffffff7fffffffffffffff));
            auVar55._8_4_ =
                 -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                        (double)((ulonglong)local_228 & __xmm_7fffffffffffffff7fffffffffffffff));
            auVar55._12_4_ =
                 -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
            iVar20 = movmskps(iVar20,auVar55);
            if (iVar20 == 0) {
              dVar33 = 0.0;
              dVar88 = 0.0;
              dVar34 = 0.0;
            }
            else {
              auVar56._4_4_ =
                   -(uint)(_UNK_150b53828 < (double)((ulonglong)dStack_210 & _UNK_15061cc88));
              auVar56._0_4_ =
                   -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                          (double)((ulonglong)local_218 & __xmm_7fffffffffffffff7fffffffffffffff));
              auVar56._8_4_ =
                   -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                          (double)((ulonglong)local_208 & __xmm_7fffffffffffffff7fffffffffffffff));
              auVar56._12_4_ =
                   -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
              iVar20 = movmskps(iVar20,auVar56);
              if (iVar20 == 0) {
                dVar33 = 0.0;
                dVar88 = 0.0;
                dVar34 = 0.0;
              }
              else {
                dVar25 = local_258[0] + dVar33 + local_208;
                if (dVar25 <= __real_0000000000000000) {
                  bVar8 = local_258[0] < dVar33;
                  uVar21 = (ulonglong)bVar8;
                  pdVar2 = (double *)
                           ((longlong)local_258 + (ulonglong)((uint)bVar8 * 0x20 + (uint)bVar8 * 8))
                  ;
                  if (*pdVar2 <= local_208 && local_208 != *pdVar2) {
                    uVar21 = 2;
                  }
                  iVar20 = *(int *)(&DAT_151c6afac + uVar21 * 4);
                  lVar19 = (longlong)iVar20;
                  iVar49 = *(int *)(&DAT_151c6afac + lVar19 * 4);
                  iVar57 = (int)uVar21;
                  dVar34 = __real_3ff0000000000000 /
                           SQRT(((*(double *)
                                   ((longlong)local_258 + (ulonglong)(uint)(iVar57 * 0x28)) -
                                 local_258[lVar19 * 5]) - local_258[(longlong)iVar49 * 5]) +
                                __real_3ff0000000000000);
                  dVar25 = dVar34 * __real_3fe0000000000000;
                  *(double *)((longlong)local_1d8 + (ulonglong)(uint)(iVar57 * 8)) =
                       (__real_3ff0000000000000 / dVar34) * __real_3fe0000000000000;
                  local_1d8[lVar19] =
                       (local_258[iVar20 + iVar57 * 4] + local_258[iVar57 + iVar20 * 4]) * dVar25;
                  local_1d8[iVar49] =
                       (local_258[iVar49 + iVar57 * 4] + local_258[iVar57 + iVar49 * 4]) * dVar25;
                  dVar33 = local_1d8[0];
                  dVar34 = local_1d8[2];
                  dVar88 = local_1d8[1];
                  dVar25 = (local_258[iVar49 + iVar20 * 4] - local_258[iVar20 + iVar49 * 4]) *
                           dVar25;
                }
                else {
                  dVar25 = __real_3ff0000000000000 / SQRT(dVar25 + __real_3ff0000000000000);
                  dVar88 = dVar25 * __real_3fe0000000000000;
                  dVar33 = (local_228 - dStack_210) * dVar88;
                  dVar34 = (local_258[1] - dVar34) * dVar88;
                  dVar88 = (local_218 - local_258[2]) * dVar88;
                  dVar25 = (__real_3ff0000000000000 / dVar25) * __real_3fe0000000000000;
                }
              }
            }
          }
          dVar36 = dVar25 * dVar25 + dVar88 * dVar88 + dVar34 * dVar34 + dVar33 * dVar33;
          uVar21 = ~-(ulonglong)(dVar36 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
          dVar36 = __real_3ff0000000000000 / SQRT(dVar36);
          dVar58 = (double)((ulonglong)(dVar33 * dVar36) & uVar21);
          dVar24 = (double)((ulonglong)(dVar88 * dVar36) & uVar21);
          dVar35 = (double)(~uVar21 & ___xmm_3ff00000000000000000000000000000 |
                           (ulonglong)(dVar34 * dVar36) & uVar21);
          dVar45 = (double)(~uVar21 & _UNK_15061cbc8 | (ulonglong)(dVar25 * dVar36) & uVar21);
        }
        dVar34 = dVar24 * dVar24 + dVar45 * dVar45 + dVar58 * dVar58 + dVar35 * dVar35;
        dVar25 = __real_3ff0000000000000 / SQRT(dVar34);
        uVar38 = ~-(ulonglong)(dVar34 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        uVar21 = ~uVar38 & ___xmm_3ff00000000000000000000000000000;
        uVar50 = ~uVar38 & _UNK_15061cbc8;
        puVar23 = (ulonglong *)(lVar9 + param_1);
        *puVar23 = (ulonglong)(dVar58 * dVar25) & uVar38;
        puVar23[1] = (ulonglong)(dVar24 * dVar25) & uVar38;
        puVar23[2] = uVar21 | (ulonglong)(dVar35 * dVar25) & uVar38;
        puVar23[3] = uVar50 | (ulonglong)(dVar45 * dVar25) & uVar38;
        uVar21 = (ulonglong)((uint)uVar3 * 0x60);
        *(double *)(param_1 + 0x20 + uVar21) = dStack_1f8;
        *(double *)(param_1 + 0x28 + uVar21) = local_1f0;
        *(double *)(param_1 + 0x30 + uVar21) = dStack_1e8;
        *(double *)(param_1 + 0x38 + uVar21) = dVar71;
        *(double *)(param_1 + 0x40 + uVar21) = dVar14 * dVar10;
        *(double *)(param_1 + 0x48 + uVar21) = dVar15 * dVar11;
        *(double *)(param_1 + 0x50 + uVar21) = dVar59 * dVar12;
        *(double *)(param_1 + 0x58 + uVar21) = dVar90 * dVar13;
        uVar22 = uVar22 + 1;
      } while (param_7 != uVar22);
    }
  }
  else if (1 < (int)param_7) {
    uVar22 = (ulonglong)param_7;
    uVar21 = 1;
    local_190 = uVar22;
    do {
      uVar3 = *(ushort *)(param_3 + uVar21 * 2);
      lVar9 = (ulonglong)uVar3 * 0x60;
      iVar20 = *(int *)(param_4 + (int)((uint)uVar3 * param_5 + param_6));
      lVar19 = (longlong)iVar20 * 0x60;
      dVar71 = *(double *)(param_1 + lVar19);
      dVar34 = *(double *)(param_1 + 8 + lVar19);
      dVar25 = *(double *)(param_1 + 0x10 + lVar19);
      dVar33 = *(double *)(param_1 + 0x18 + lVar19);
      dVar88 = *(double *)(param_1 + 0x20 + lVar19);
      local_1f0 = *(double *)(param_1 + 0x28 + lVar19);
      local_2e8 = *(double *)(param_1 + 0x30 + lVar19);
      dVar36 = *(double *)(param_2 + lVar9);
      dVar43 = *(double *)(param_2 + 8 + lVar9);
      pauVar1 = (undefined1 (*) [16])(param_2 + 0x40 + lVar9);
      pdVar2 = (double *)(param_2 + 0x50 + lVar9);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x40 + lVar19);
      dVar12 = *pdVar2;
      dVar13 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x50 + lVar19);
      dVar14 = *pdVar2;
      dVar15 = pdVar2[1];
      dVar76 = *(double *)(param_2 + 0x10 + lVar9);
      dVar45 = *(double *)(param_2 + 0x18 + lVar9);
      auVar84._0_4_ = -(uint)(dVar12 < 0.0 || *(double *)*pauVar1 < 0.0) & auVar70._0_4_;
      auVar84._4_4_ = -(uint)(dVar13 < 0.0 || *(double *)(*pauVar1 + 8) < 0.0) & auVar70._4_4_;
      auVar84._8_4_ = -(uint)(dVar14 < 0.0 || dVar10 < 0.0) & auVar70._8_4_;
      auVar84._12_4_ = -(uint)(dVar15 < 0.0 || dVar11 < 0.0) & auVar70._12_4_;
      iVar20 = movmskps(iVar20,auVar84);
      local_108 = *(double *)(param_2 + 0x20 + lVar9);
      local_100 = *(double *)(param_2 + 0x28 + lVar9);
      local_f8 = *(double *)(param_2 + 0x30 + lVar9);
      local_308 = SUB168(*pauVar1,0);
      dStack_300 = SUB168(*pauVar1,8);
      if (iVar20 == 0) {
        dVar90 = dVar43 * dVar25 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar76 * dVar34 +
                 dVar71 * dVar45 * ___xmm_bff00000000000003ff0000000000000 + dVar33 * dVar36;
        dVar59 = dVar36 * dVar25 * _UNK_15076b868 +
                 dVar45 * dVar34 + dVar71 * dVar76 * _UNK_15076c6f8 + dVar33 * dVar43;
        dVar39 = dVar45 * dVar25 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar71 * dVar43 * ___xmm_bff00000000000003ff0000000000000 + dVar33 * dVar76) -
                 dVar36 * dVar34);
        dVar24 = dVar76 * dVar25 * _UNK_15076c6f8 +
                 ((dVar71 * dVar36 * _UNK_15076c6f8 + dVar33 * dVar45) - dVar43 * dVar34);
        auVar73._0_8_ = local_108 * dVar12;
        auVar73._8_8_ = local_100 * dVar13;
        local_f8 = local_f8 * dVar14;
        dVar36 = *(double *)(param_2 + lVar9 + 0x38) * dVar15;
        auVar29._8_8_ = dVar36;
        auVar29._0_8_ = local_f8;
        auVar53 = blendpd(auVar29,auVar73,1);
        dVar76 = auVar73._8_8_ * dVar71 - dVar34 * auVar73._0_8_;
        dVar35 = local_f8 * dVar34 - dVar25 * auVar73._8_8_;
        dVar43 = auVar53._0_8_ * dVar25 - dVar71 * local_f8;
        dVar45 = auVar53._8_8_ * dVar33 - dVar33 * dVar36;
        auVar67._0_8_ = dVar76 + dVar76;
        auVar67._8_8_ = dVar35 + dVar35;
        dVar43 = dVar43 + dVar43;
        dVar45 = dVar45 + dVar45;
        auVar89._8_8_ = dVar45;
        auVar89._0_8_ = dVar43;
        auVar96 = blendpd(auVar89,auVar67,1);
        dVar76 = auVar67._8_8_ * dVar25 - auVar96._0_8_ * dVar71;
        dVar25 = auVar67._0_8_ * dVar34 - dVar43 * dVar25;
        auVar41._8_8_ = dVar45 * dVar33 - auVar96._8_8_ * dVar33;
        auVar41._0_8_ = dVar76;
        auVar4._8_4_ = SUB84(dVar25,0);
        auVar4._0_8_ = dVar43 * dVar71 - auVar67._8_8_ * dVar34;
        auVar4._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        auVar53 = blendpd(auVar41,auVar4,1);
        dStack_1f8 = dVar88 + dVar25 + dVar33 * auVar67._8_8_ + auVar73._0_8_;
        local_1f0 = local_1f0 + dVar76 + dVar33 * dVar43 + auVar73._8_8_;
        local_2e8 = local_2e8 + auVar53._0_8_ + dVar33 * auVar96._0_8_ + local_f8;
        dVar71 = *(double *)(param_1 + lVar19 + 0x38) +
                 auVar53._8_8_ + dVar33 * auVar96._8_8_ + dVar36;
      }
      else {
        local_1a8 = dVar10;
        dStack_1a0 = dVar11;
        dVar24 = dVar76 + dVar76;
        dVar90 = dVar43 + dVar43;
        dVar81 = dVar36 * (dVar36 + dVar36);
        dStack_1b0 = dVar43 * dVar90;
        local_1b8 = dStack_1b0 + dVar81;
        dVar87 = dVar45 * (dVar36 + dVar36);
        local_178 = *(double *)(param_2 + 0x50 + lVar9);
        uStack_170 = 0;
        local_188 = *(double *)(param_2 + 0x48 + lVar9) * (dVar90 * dVar36 - dVar45 * dVar24);
        dStack_180 = local_178 * (dVar24 * dVar43 - dVar87);
        dVar82 = dVar25 + dVar25;
        dVar58 = dVar71 + dVar71;
        dVar63 = dVar34 + dVar34;
        dVar35 = (dVar71 * dVar82 - dVar63 * dVar33) * *(double *)(param_1 + 0x40 + lVar19);
        dVar59 = *(double *)(param_1 + 0x50 + lVar19);
        dVar39 = (__real_3ff0000000000000 - (dVar34 * dVar63 + dVar71 * dVar58)) * dVar59;
        auVar95._0_8_ = (dVar71 * dVar82 + dVar63 * dVar33) * dVar59;
        auVar95._8_8_ = (dVar71 * dVar58 + dVar58 * dVar33) * 0.0;
        auVar52._0_8_ = *(double *)(param_1 + 0x48 + lVar19) * (dVar63 * dVar71 - dVar82 * dVar33);
        auVar52._8_8_ = dVar59 * (dVar82 * dVar34 - dVar58 * dVar33);
        dVar44 = (dVar24 * dVar36 - dVar90 * dVar45) * *(double *)(param_2 + 0x40 + lVar9);
        dVar59 = (___xmm_3ff00000000000003ff0000000000000 - (dVar76 * dVar24 + dStack_1b0)) *
                 local_308;
        dVar76 = (_UNK_150689688 - (dVar76 * dVar24 + dVar81)) * dStack_300;
        auVar66._0_8_ =
             (___xmm_3ff00000000000003ff0000000000000 - (dVar25 * dVar82 + dVar34 * dVar63)) *
             dVar12;
        auVar66._8_8_ = (_UNK_150689688 - (dVar25 * dVar82 + dVar71 * dVar58)) * dVar13;
        dVar81 = (dVar63 * dVar71 + dVar82 * dVar33) * dVar12;
        dVar82 = (dVar82 * dVar34 + dVar58 * dVar33) * dVar13;
        auVar96 = blendpd(auVar95,auVar52,2);
        auVar53 = blendpd(auVar52,auVar66,2);
        dVar64 = auVar96._0_8_;
        dVar65 = auVar96._8_8_;
        dVar71 = (dVar90 * dVar36 + dVar45 * dVar24) * local_308;
        dVar34 = (dVar24 * dVar43 + dVar87) * dStack_300;
        dVar58 = auVar53._0_8_;
        dVar63 = auVar53._8_8_;
        auVar6._8_4_ = SUB84(dVar76,0);
        auVar6._0_8_ = dVar76;
        auVar6._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
        dVar24 = (dVar90 * dVar45 + dVar24 * dVar36) * local_178;
        local_178 = (__real_3ff0000000000000 - local_1b8) * local_178;
        local_120 = dStack_180;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_2e8;
        auVar16._8_8_ = _UNK_15061cbc8;
        auVar16._0_8_ = ___xmm_3ff00000000000000000000000000000;
        auVar53 = blendpd(auVar18,auVar16,2);
        dVar25 = auVar53._0_8_ * ___xmm_00000000000000000000000000000000;
        dVar33 = auVar53._8_8_ * DAT_150aa8f68;
        dVar36 = dVar82 * dVar71 + dVar44 * dVar39 + dVar59 * dVar35 + dVar25;
        dVar45 = dVar82 * dVar76 + dVar39 * dVar34 + dVar35 * local_188 + dVar25;
        dVar25 = dVar82 * dStack_180 + dVar39 * local_178 + dVar35 * dVar24 + dVar25;
        local_110 = 0;
        local_2e8 = dVar82 * local_100 + dVar39 * local_f8 + dVar35 * local_108 + auVar53._0_8_;
        local_258[3] = DAT_150aa8f68 * dVar71 + dVar44 * 0.0 + dVar59 * 0.0 + dVar33;
        local_220 = DAT_150aa8f68 * dVar76 + dVar34 * 0.0 + local_188 * 0.0 + dVar33;
        local_200 = DAT_150aa8f68 * dStack_180 + local_178 * 0.0 + dVar24 * 0.0 + dVar33;
        dStack_1f8 = local_100 * dVar58 + local_f8 * dVar64 + auVar66._0_8_ * local_108 + dVar88;
        dVar88 = dVar88 * 0.0;
        dVar90 = local_1f0 * 0.0;
        dVar33 = dVar71 * dVar58 + dVar64 * dVar44 + auVar66._0_8_ * dVar59 + dVar88;
        dVar43 = dVar71 * dVar63 + dVar65 * dVar44 + dVar81 * dVar59 + dVar90;
        local_1f0 = local_100 * dVar63 + local_f8 * dVar65 + dVar81 * local_108 + local_1f0;
        dStack_1e8 = local_2e8;
        local_1e0 = DAT_150aa8f68 * local_100 + local_f8 * 0.0 + local_108 * 0.0 + auVar53._8_8_;
        dVar59 = dVar36 * dVar36 + dVar43 * dVar43 + dVar33 * dVar33;
        local_f0 = 0x3ff0000000000000;
        dVar71 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar59 + __real_be45798ee2308c3a) {
          dVar71 = __real_3ff0000000000000 / SQRT(dVar59);
        }
        dStack_320 = auVar6._8_8_;
        dVar76 = dVar76 * dVar58 + dVar34 * dVar64 + local_188 * auVar66._0_8_ + dVar88;
        dVar35 = dStack_320 * dVar63 + dVar34 * dVar65 + local_188 * dVar81 + dVar90;
        dVar59 = dVar45 * dVar45 + dVar35 * dVar35 + dVar76 * dVar76;
        dVar34 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar59 + __real_be45798ee2308c3a) {
          dVar34 = __real_3ff0000000000000 / SQRT(dVar59);
        }
        dVar88 = dVar58 * dStack_180 + dVar64 * local_178 + auVar66._0_8_ * dVar24 + dVar88;
        dVar90 = dVar63 * dStack_180 + dVar65 * local_178 + dVar81 * dVar24 + dVar90;
        dVar59 = dVar25 * dVar25 + dVar90 * dVar90 + dVar88 * dVar88;
        dVar24 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar59 + __real_be45798ee2308c3a) {
          dVar24 = __real_3ff0000000000000 / SQRT(dVar59);
        }
        iVar49 = -(uint)(0.0 <= dVar14 * dVar10);
        iVar57 = -(uint)(0.0 <= dVar15 * dVar11);
        auVar26._0_4_ = -(uint)(0.0 <= dVar12 * local_308);
        auVar26._8_4_ = -(uint)(0.0 <= dVar13 * dStack_300);
        auVar26._4_4_ = auVar26._0_4_;
        auVar26._12_4_ = auVar26._8_4_;
        auVar60._8_4_ = 0xffffffff;
        auVar60._0_8_ = 0xffffffffffffffff;
        auVar60._12_4_ = 0xffffffff;
        auVar96 = blendvps(ZEXT816(0),auVar60,auVar26);
        auVar27._4_4_ = iVar49;
        auVar27._0_4_ = iVar49;
        auVar27._8_4_ = iVar57;
        auVar27._12_4_ = iVar57;
        auVar53 = blendvps(ZEXT816(0),auVar60,auVar27);
        uVar75 = auVar96._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
                 ___xmm_bff0000000000000bff0000000000000;
        uVar78 = auVar96._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
        uVar79 = auVar96._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
        uVar80 = auVar96._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
        auVar53 = ZEXT816(0xbff0000000000000) ^ ZEXT816(0x8000000000000000) & auVar53;
        auVar28._0_8_ = (double)CONCAT44(uVar78,uVar75);
        auVar28._8_4_ = uVar75;
        auVar28._12_4_ = uVar78;
        local_258[0] = auVar28._0_8_ * dVar33 * dVar71;
        local_258[1] = auVar28._8_8_ * dVar43 * dVar71;
        auVar72._0_4_ = -(uint)(auVar70._0_4_ == 0);
        auVar72._4_4_ = -(uint)(auVar70._4_4_ == 0);
        auVar72._8_4_ = -(uint)(auVar70._8_4_ == 0);
        auVar72._12_4_ = -(uint)(auVar70._12_4_ == 0);
        local_258[2] = dVar36 * dVar71 * (double)CONCAT44(uVar78,uVar75);
        auVar40._0_8_ = (double)CONCAT44(uVar80,uVar79);
        auVar40._8_4_ = uVar79;
        auVar40._12_4_ = uVar80;
        local_228 = dVar45 * dVar34 * auVar40._0_8_;
        local_238._0_8_ = dVar76 * dVar34 * auVar40._0_8_;
        local_238._8_8_ = dVar35 * dVar34 * auVar40._8_8_;
        auVar54._0_8_ = auVar53._0_8_;
        auVar54._8_4_ = 0;
        auVar54._12_4_ = auVar53._4_4_;
        local_218 = auVar54._0_8_ * dVar24 * dVar88;
        dStack_210 = auVar54._8_8_ * dVar90 * dVar24;
        local_208 = auVar54._0_8_ * dVar25 * dVar24;
        auVar77._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_258[1] & _UNK_15061cc88))
        ;
        auVar77._0_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_258[0] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar77._8_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_258[2] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar77._12_4_ =
             -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
        iVar20 = movmskps(iVar20,~auVar72 & auVar77);
        dVar71 = __real_3ff0000000000000;
        if (iVar20 == 0) {
          dVar34 = 0.0;
          dVar33 = 0.0;
          dVar25 = 0.0;
        }
        else {
          auVar85._4_4_ = -(uint)(_UNK_150b53828 < (double)(local_238._8_8_ & _UNK_15061cc88));
          auVar85._0_4_ =
               -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                      (double)(local_238._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
          auVar85._8_4_ =
               -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                      (double)((ulonglong)local_228 & __xmm_7fffffffffffffff7fffffffffffffff));
          auVar85._12_4_ =
               -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
          iVar20 = movmskps(iVar20,~auVar72 & auVar85);
          if ((iVar20 == 0) ||
             (auVar86._4_4_ =
                   -(uint)(_UNK_150b53828 < (double)((ulonglong)dStack_210 & _UNK_15061cc88)),
             auVar86._0_4_ =
                  -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                         (double)((ulonglong)local_218 & __xmm_7fffffffffffffff7fffffffffffffff)),
             auVar86._8_4_ =
                  -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                         (double)((ulonglong)local_208 & __xmm_7fffffffffffffff7fffffffffffffff)),
             auVar86._12_4_ =
                  -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
             iVar20 = movmskps(iVar20,~auVar72 & auVar86), iVar20 == 0)) {
            dVar34 = 0.0;
            dVar33 = 0.0;
            dVar25 = 0.0;
          }
          else {
            dVar71 = local_258[0] + (double)local_238._8_8_ + local_208;
            if (dVar71 <= __real_0000000000000000) {
              bVar8 = local_258[0] < (double)local_238._8_8_;
              uVar22 = (ulonglong)bVar8;
              pdVar2 = (double *)
                       ((longlong)local_258 + (ulonglong)((uint)bVar8 * 0x20 + (uint)bVar8 * 8));
              if (*pdVar2 <= local_208 && local_208 != *pdVar2) {
                uVar22 = 2;
              }
              iVar20 = *(int *)(&DAT_151c6afac + uVar22 * 4);
              lVar19 = (longlong)iVar20;
              iVar49 = *(int *)(&DAT_151c6afac + lVar19 * 4);
              iVar57 = (int)uVar22;
              dVar71 = __real_3ff0000000000000 /
                       SQRT(((*(double *)((longlong)local_258 + (ulonglong)(uint)(iVar57 * 0x28)) -
                             local_258[lVar19 * 5]) - local_258[(longlong)iVar49 * 5]) +
                            __real_3ff0000000000000);
              dVar88 = dVar71 * __real_3fe0000000000000;
              *(double *)((longlong)local_1d8 + (ulonglong)(uint)(iVar57 * 8)) =
                   (__real_3ff0000000000000 / dVar71) * __real_3fe0000000000000;
              local_1d8[lVar19] =
                   (local_258[iVar20 + iVar57 * 4] + local_258[iVar57 + iVar20 * 4]) * dVar88;
              local_1d8[iVar49] =
                   (local_258[iVar49 + iVar57 * 4] + local_258[iVar57 + iVar49 * 4]) * dVar88;
              uVar22 = local_190;
              dVar34 = local_1d8[0];
              dVar25 = local_1d8[2];
              dVar33 = local_1d8[1];
              dVar71 = (local_258[iVar49 + iVar20 * 4] - local_258[iVar20 + iVar49 * 4]) * dVar88;
            }
            else {
              dVar71 = __real_3ff0000000000000 / SQRT(dVar71 + __real_3ff0000000000000);
              dVar33 = dVar71 * __real_3fe0000000000000;
              dVar34 = (local_228 - dStack_210) * dVar33;
              dVar25 = (local_258[1] - (double)local_238._0_8_) * dVar33;
              dVar33 = (local_218 - local_258[2]) * dVar33;
              dVar71 = (__real_3ff0000000000000 / dVar71) * __real_3fe0000000000000;
            }
          }
        }
        dVar88 = dVar71 * dVar71 + dVar33 * dVar33 + dVar25 * dVar25 + dVar34 * dVar34;
        uVar50 = ~-(ulonglong)(dVar88 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar88 = __real_3ff0000000000000 / SQRT(dVar88);
        dVar90 = (double)((ulonglong)(dVar34 * dVar88) & uVar50);
        dVar59 = (double)((ulonglong)(dVar33 * dVar88) & uVar50);
        dVar39 = (double)(~uVar50 & ___xmm_3ff00000000000000000000000000000 |
                         (ulonglong)(dVar25 * dVar88) & uVar50);
        dVar24 = (double)(~uVar50 & _UNK_15061cbc8 | (ulonglong)(dVar71 * dVar88) & uVar50);
        dVar71 = 0.0;
      }
      dVar34 = dVar59 * dVar59 + dVar24 * dVar24 + dVar90 * dVar90 + dVar39 * dVar39;
      dVar25 = __real_3ff0000000000000 / SQRT(dVar34);
      uVar51 = ~-(ulonglong)(dVar34 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      uVar50 = ~uVar51 & ___xmm_3ff00000000000000000000000000000;
      uVar38 = ~uVar51 & _UNK_15061cbc8;
      puVar23 = (ulonglong *)(lVar9 + param_1);
      *puVar23 = (ulonglong)(dVar90 * dVar25) & uVar51;
      puVar23[1] = (ulonglong)(dVar59 * dVar25) & uVar51;
      puVar23[2] = uVar50 | (ulonglong)(dVar39 * dVar25) & uVar51;
      puVar23[3] = uVar38 | (ulonglong)(dVar24 * dVar25) & uVar51;
      uVar50 = (ulonglong)((uint)uVar3 * 0x60);
      *(double *)(param_1 + 0x20 + uVar50) = dStack_1f8;
      *(double *)(param_1 + 0x28 + uVar50) = local_1f0;
      *(double *)(param_1 + 0x30 + uVar50) = local_2e8;
      *(double *)(param_1 + 0x38 + uVar50) = dVar71;
      *(double *)(param_1 + 0x40 + uVar50) = dVar12 * local_308;
      *(double *)(param_1 + 0x48 + uVar50) = dVar13 * dStack_300;
      *(double *)(param_1 + 0x50 + uVar50) = dVar14 * dVar10;
      *(double *)(param_1 + 0x58 + uVar50) = dVar15 * dVar11;
      uVar21 = uVar21 + 1;
    } while (uVar22 != uVar21);
  }
  return;
}

// FillComponentSpaceTransforms_sse4 @ 140aa0410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FillComponentSpaceTransforms_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               int param_6,uint param_7)

{
  double *pdVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 (*pauVar24) [16];
  double dVar25;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar26;
  double dVar27;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  int iVar40;
  ulonglong uVar41;
  double dVar42;
  undefined1 auVar39 [16];
  uint uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  ulonglong uVar47;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  undefined1 auVar48 [16];
  double dVar52;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar53;
  double dVar57;
  undefined1 auVar56 [16];
  ulonglong uVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auVar63 [16];
  double dVar65;
  undefined1 auVar64 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  double dStack_300;
  undefined1 local_2e8 [72];
  double dStack_2a0;
  double dStack_290;
  double local_238 [4];
  undefined1 local_218 [16];
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8 [4];
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_120;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  
  if (1 < (int)param_7) {
    uVar22 = 1;
    do {
      uVar2 = *(ushort *)(param_3 + uVar22 * 2);
      lVar11 = (ulonglong)uVar2 * 0x60;
      iVar23 = *(int *)(param_4 + (int)((uint)uVar2 * param_5 + param_6));
      lVar21 = (longlong)iVar23 * 0x60;
      dVar46 = *(double *)(param_1 + lVar21);
      dVar62 = *(double *)(param_1 + 8 + lVar21);
      dVar59 = *(double *)(param_1 + 0x10 + lVar21);
      dVar28 = *(double *)(param_1 + 0x18 + lVar21);
      dVar71 = *(double *)(param_1 + 0x20 + lVar21);
      local_1d0 = *(double *)(param_1 + 0x28 + lVar21);
      local_2e8._0_8_ = *(double *)(param_1 + 0x30 + lVar21);
      local_2e8._8_8_ = 0;
      dVar37 = *(double *)(param_2 + lVar11);
      dVar42 = *(double *)(param_2 + 8 + lVar11);
      pdVar1 = (double *)(param_2 + 0x40 + lVar11);
      dVar12 = *pdVar1;
      dVar13 = pdVar1[1];
      pdVar1 = (double *)(param_2 + 0x50 + lVar11);
      dVar14 = *pdVar1;
      dVar15 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x40 + lVar21);
      dVar16 = *pdVar1;
      dVar17 = pdVar1[1];
      pdVar1 = (double *)(param_1 + 0x50 + lVar21);
      dVar18 = *pdVar1;
      dVar19 = pdVar1[1];
      auVar69._4_4_ = -(uint)(dVar13 < 0.0);
      auVar69._0_4_ = -(uint)(dVar12 < 0.0);
      auVar69._8_4_ = -(uint)(dVar14 < 0.0);
      auVar69._12_4_ = -(uint)(dVar15 < 0.0);
      auVar75._4_4_ = -(uint)(dVar17 < 0.0);
      auVar75._0_4_ = -(uint)(dVar16 < 0.0);
      auVar75._8_4_ = -(uint)(dVar18 < 0.0);
      auVar75._12_4_ = -(uint)(dVar19 < 0.0);
      dVar38 = *(double *)(param_2 + 0x10 + lVar11);
      dVar45 = *(double *)(param_2 + 0x18 + lVar11);
      iVar23 = movmskps(iVar23,auVar75 | auVar69);
      local_108 = *(double *)(param_2 + 0x20 + lVar11);
      local_100 = *(double *)(param_2 + 0x28 + lVar11);
      local_f8 = *(double *)(param_2 + 0x30 + lVar11);
      if (iVar23 == 0) {
        dVar57 = dVar42 * dVar59 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar38 * dVar62 +
                 dVar46 * dVar45 * ___xmm_bff00000000000003ff0000000000000 + dVar28 * dVar37;
        dVar53 = dVar37 * dVar59 * _UNK_15076b868 +
                 dVar45 * dVar62 + dVar46 * dVar38 * _UNK_15076c6f8 + dVar28 * dVar42;
        dVar44 = dVar45 * dVar59 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar46 * dVar42 * ___xmm_bff00000000000003ff0000000000000 + dVar28 * dVar38) -
                 dVar37 * dVar62);
        dVar45 = dVar38 * dVar59 * _UNK_15076c6f8 +
                 ((dVar46 * dVar37 * _UNK_15076c6f8 + dVar28 * dVar45) - dVar42 * dVar62);
        auVar67._0_8_ = local_108 * dVar16;
        auVar67._8_8_ = local_100 * dVar17;
        local_f8 = local_f8 * dVar18;
        dVar26 = *(double *)(param_2 + lVar11 + 0x38) * dVar19;
        auVar29._8_8_ = dVar26;
        auVar29._0_8_ = local_f8;
        auVar69 = blendpd(auVar29,auVar67,1);
        dVar42 = auVar67._8_8_ * dVar46 - dVar62 * auVar67._0_8_;
        dVar25 = local_f8 * dVar62 - dVar59 * auVar67._8_8_;
        dVar37 = auVar69._0_8_ * dVar59 - dVar46 * local_f8;
        dVar38 = auVar69._8_8_ * dVar28 - dVar28 * dVar26;
        auVar63._0_8_ = dVar42 + dVar42;
        auVar63._8_8_ = dVar25 + dVar25;
        dVar37 = dVar37 + dVar37;
        dVar38 = dVar38 + dVar38;
        auVar54._8_8_ = dVar38;
        auVar54._0_8_ = dVar37;
        auVar69 = blendpd(auVar54,auVar63,1);
        dVar42 = auVar63._8_8_ * dVar59 - auVar69._0_8_ * dVar46;
        auVar72._0_8_ = dVar37 * dVar46 - auVar63._8_8_ * dVar62;
        auVar72._8_8_ = auVar63._0_8_ * dVar62 - dVar37 * dVar59;
        auVar55._8_8_ = dVar38 * dVar28 - auVar69._8_8_ * dVar28;
        auVar55._0_8_ = dVar42;
        auVar75 = blendpd(auVar55,auVar72,1);
        dStack_1d8 = dVar71 + auVar72._8_8_ + dVar28 * auVar63._8_8_ + auVar67._0_8_;
        local_1d0 = local_1d0 + dVar42 + dVar28 * dVar37 + auVar67._8_8_;
        dStack_1c8 = (double)local_2e8._0_8_ + auVar75._0_8_ + dVar28 * auVar69._0_8_ + local_f8;
        dVar46 = *(double *)(param_1 + lVar21 + 0x38) +
                 auVar75._8_8_ + dVar28 * auVar69._8_8_ + dVar26;
      }
      else {
        dVar25 = dVar38 + dVar38;
        dVar53 = dVar42 + dVar42;
        dVar73 = dVar37 * (dVar37 + dVar37);
        dVar65 = dVar45 * (dVar37 + dVar37);
        local_188 = *(double *)(param_2 + 0x50 + lVar11);
        uStack_180 = 0;
        local_198 = *(double *)(param_2 + 0x48 + lVar11) * (dVar53 * dVar37 - dVar45 * dVar25);
        dStack_190 = local_188 * (dVar25 * dVar42 - dVar65);
        dVar66 = dVar59 + dVar59;
        dVar26 = dVar46 + dVar46;
        dVar33 = dVar62 + dVar62;
        dVar36 = (dVar46 * dVar66 - dVar33 * dVar28) * *(double *)(param_1 + 0x40 + lVar21);
        dVar57 = *(double *)(param_1 + 0x50 + lVar21);
        dVar52 = (__real_3ff0000000000000 - (dVar62 * dVar33 + dVar46 * dVar26)) * dVar57;
        auVar68._0_8_ = (dVar46 * dVar66 + dVar33 * dVar28) * dVar57;
        auVar68._8_8_ = (dVar46 * dVar26 + dVar26 * dVar28) * 0.0;
        auVar74._0_8_ = *(double *)(param_1 + 0x48 + lVar21) * (dVar33 * dVar46 - dVar66 * dVar28);
        auVar74._8_8_ = dVar57 * (dVar66 * dVar62 - dVar26 * dVar28);
        dVar27 = (dVar25 * dVar37 - dVar53 * dVar45) * *(double *)(param_2 + 0x40 + lVar11);
        dVar57 = (___xmm_3ff00000000000003ff0000000000000 - (dVar38 * dVar25 + dVar42 * dVar53)) *
                 dVar12;
        dVar38 = (_UNK_150689688 - (dVar38 * dVar25 + dVar73)) * dVar13;
        dVar44 = (___xmm_3ff00000000000003ff0000000000000 - (dVar59 * dVar66 + dVar62 * dVar33)) *
                 dVar16;
        dVar59 = (_UNK_150689688 - (dVar59 * dVar66 + dVar46 * dVar26)) * dVar17;
        dVar33 = (dVar33 * dVar46 + dVar66 * dVar28) * dVar16;
        dVar26 = (dVar66 * dVar62 + dVar26 * dVar28) * dVar17;
        auVar69 = blendpd(auVar68,auVar74,2);
        auVar6._8_4_ = SUB84(dVar59,0);
        auVar6._0_8_ = dVar44;
        auVar6._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
        auVar75 = blendpd(auVar74,auVar6,2);
        dVar66 = auVar69._0_8_;
        dVar70 = auVar69._8_8_;
        dVar46 = (dVar53 * dVar37 + dVar45 * dVar25) * dVar12;
        dVar62 = (dVar25 * dVar42 + dVar65) * dVar13;
        dVar65 = auVar75._0_8_;
        dVar76 = auVar75._8_8_;
        local_178 = local_198;
        dStack_170 = local_198;
        auVar3._8_4_ = SUB84(dVar62,0);
        auVar3._0_8_ = dVar62;
        auVar3._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
        auVar5._8_4_ = SUB84(dVar38,0);
        auVar5._0_8_ = dVar38;
        auVar5._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        dVar59 = (dVar53 * dVar45 + dVar25 * dVar37) * local_188;
        local_188 = (__real_3ff0000000000000 - (dVar42 * dVar53 + dVar73)) * local_188;
        auVar4._8_4_ = SUB84(local_188,0);
        auVar4._0_8_ = local_188;
        auVar4._12_4_ = (int)((ulonglong)local_188 >> 0x20);
        local_120 = dStack_190;
        auVar20._8_8_ = _UNK_15061cbc8;
        auVar20._0_8_ = ___xmm_3ff00000000000000000000000000000;
        auVar69 = blendpd(local_2e8._0_16_,auVar20,2);
        dVar37 = auVar69._0_8_ * ___xmm_00000000000000000000000000000000;
        dVar42 = auVar69._8_8_ * DAT_150aa8f68;
        dVar45 = dVar26 * dVar46 + dVar27 * dVar52 + dVar57 * dVar36 + dVar37;
        dVar28 = dVar26 * dVar38 + dVar52 * dVar62 + dVar36 * local_198 + dVar37;
        dVar37 = dVar26 * dStack_190 + dVar52 * local_188 + dVar36 * dVar59 + dVar37;
        local_110 = 0;
        auVar9._8_4_ = SUB84(dVar33,0);
        auVar9._0_8_ = dVar44;
        auVar9._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        local_238[3] = DAT_150aa8f68 * dVar46 + dVar27 * 0.0 + dVar57 * 0.0 + dVar42;
        local_200 = DAT_150aa8f68 * dVar38 + dVar62 * 0.0 + local_198 * 0.0 + dVar42;
        local_1e0 = DAT_150aa8f68 * dStack_190 + local_188 * 0.0 + dVar59 * 0.0 + dVar42;
        dStack_1d8 = local_100 * dVar65 + local_f8 * dVar66 + dVar44 * local_108 + dVar71;
        dVar71 = dVar71 * ___xmm_00000000000000000000000000000000;
        dVar25 = local_1d0 * DAT_150aa8f68;
        dVar53 = dVar46 * dVar65 + dVar66 * dVar27 + dVar44 * dVar57 + dVar71;
        dVar57 = dVar46 * dVar76 + dVar70 * dVar27 + dVar33 * dVar57 + dVar25;
        local_1d0 = local_100 * dVar76 + local_f8 * dVar70 + dVar33 * local_108 + local_1d0;
        dStack_1c8 = dVar26 * local_100 + dVar52 * local_f8 + dVar36 * local_108 + auVar69._0_8_;
        local_1c0 = DAT_150aa8f68 * local_100 + local_f8 * 0.0 + local_108 * 0.0 + auVar69._8_8_;
        dVar42 = dVar45 * dVar45 + dVar57 * dVar57 + dVar53 * dVar53;
        local_f0 = 0x3ff0000000000000;
        dVar46 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar42 + __real_be45798ee2308c3a) {
          dVar46 = __real_3ff0000000000000 / SQRT(dVar42);
        }
        local_2e8._8_8_ = auVar9._8_8_;
        dStack_290 = auVar3._8_8_;
        dStack_300 = auVar5._8_8_;
        dVar42 = dVar38 * dVar65 + dVar62 * dVar66 + local_198 * dVar44 + dVar71;
        dVar26 = dStack_300 * dVar76 + dStack_290 * dVar70 + local_198 * (double)local_2e8._8_8_ +
                 dVar25;
        dVar38 = dVar28 * dVar28 + dVar26 * dVar26 + dVar42 * dVar42;
        dVar62 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar38 + __real_be45798ee2308c3a) {
          dVar62 = __real_3ff0000000000000 / SQRT(dVar38);
        }
        dStack_2a0 = auVar4._8_8_;
        dVar71 = dVar65 * dStack_190 + dVar66 * local_188 + dVar44 * dVar59 + dVar71;
        dVar25 = dVar76 * dStack_190 + dVar70 * dStack_2a0 + (double)local_2e8._8_8_ * dVar59 +
                 dVar25;
        dVar38 = dVar37 * dVar37 + dVar25 * dVar25 + dVar71 * dVar71;
        dVar59 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar38 + __real_be45798ee2308c3a) {
          dVar59 = __real_3ff0000000000000 / SQRT(dVar38);
        }
        iVar34 = -(uint)(0.0 <= dVar18 * dVar14);
        iVar40 = -(uint)(0.0 <= dVar19 * dVar15);
        auVar30._0_4_ = -(uint)(0.0 <= dVar16 * dVar12);
        auVar30._8_4_ = -(uint)(0.0 <= dVar17 * dVar13);
        auVar30._4_4_ = auVar30._0_4_;
        auVar30._12_4_ = auVar30._8_4_;
        auVar64._8_4_ = 0xffffffff;
        auVar64._0_8_ = 0xffffffffffffffff;
        auVar64._12_4_ = 0xffffffff;
        auVar75 = blendvps(ZEXT816(0),auVar64,auVar30);
        auVar31._4_4_ = iVar34;
        auVar31._0_4_ = iVar34;
        auVar31._8_4_ = iVar40;
        auVar31._12_4_ = iVar40;
        auVar69 = blendvps(ZEXT816(0),auVar64,auVar31);
        uVar43 = auVar75._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
                 ___xmm_bff0000000000000bff0000000000000;
        uVar49 = auVar75._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
        uVar50 = auVar75._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
        uVar51 = auVar75._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
        auVar69 = ZEXT816(0xbff0000000000000) ^ ZEXT816(0x8000000000000000) & auVar69;
        auVar32._0_8_ = (double)CONCAT44(uVar49,uVar43);
        auVar32._8_4_ = uVar43;
        auVar32._12_4_ = uVar49;
        local_238[0] = auVar32._0_8_ * dVar53 * dVar46;
        local_238[1] = auVar32._8_8_ * dVar57 * dVar46;
        local_238[2] = dVar45 * dVar46 * (double)CONCAT44(uVar49,uVar43);
        auVar39._0_8_ = (double)CONCAT44(uVar51,uVar50);
        auVar39._8_4_ = uVar50;
        auVar39._12_4_ = uVar51;
        local_208 = dVar28 * dVar62 * auVar39._0_8_;
        dVar28 = dVar42 * dVar62 * auVar39._0_8_;
        dVar62 = dVar26 * dVar62 * auVar39._8_8_;
        auVar48._0_8_ = auVar69._0_8_;
        auVar48._8_4_ = 0;
        auVar48._12_4_ = auVar69._4_4_;
        local_1f8 = auVar48._0_8_ * dVar59 * dVar71;
        dStack_1f0 = auVar48._8_8_ * dVar25 * dVar59;
        local_1e8 = auVar48._0_8_ * dVar37 * dVar59;
        auVar56._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_238[1] & _UNK_15061cc88))
        ;
        auVar56._0_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_238[0] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar56._8_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_238[2] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar56._12_4_ =
             -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
        local_218._8_4_ = SUB84(dVar62,0);
        local_218._0_8_ = dVar28;
        local_218._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
        iVar23 = movmskps(iVar23,auVar56);
        dVar46 = 0.0;
        dVar59 = __real_3ff0000000000000;
        if (iVar23 == 0) {
          dVar28 = 0.0;
          dVar62 = 0.0;
          dVar71 = 0.0;
        }
        else {
          auVar60._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)dVar62 & _UNK_15061cc88));
          auVar60._0_4_ =
               -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                      (double)((ulonglong)dVar28 & __xmm_7fffffffffffffff7fffffffffffffff));
          auVar60._8_4_ =
               -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                      (double)((ulonglong)local_208 & __xmm_7fffffffffffffff7fffffffffffffff));
          auVar60._12_4_ =
               -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
          iVar23 = movmskps(iVar23,auVar60);
          if (iVar23 == 0) {
            dVar62 = 0.0;
            dVar71 = 0.0;
            dVar28 = 0.0;
          }
          else {
            auVar61._4_4_ =
                 -(uint)(_UNK_150b53828 < (double)((ulonglong)dStack_1f0 & _UNK_15061cc88));
            auVar61._0_4_ =
                 -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                        (double)((ulonglong)local_1f8 & __xmm_7fffffffffffffff7fffffffffffffff));
            auVar61._8_4_ =
                 -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                        (double)((ulonglong)local_1e8 & __xmm_7fffffffffffffff7fffffffffffffff));
            auVar61._12_4_ =
                 -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
            iVar23 = movmskps(iVar23,auVar61);
            if (iVar23 == 0) {
              dVar62 = 0.0;
              dVar71 = 0.0;
              dVar28 = 0.0;
            }
            else {
              dVar59 = local_238[0] + dVar62 + local_1e8;
              if (dVar59 <= __real_0000000000000000) {
                bVar10 = local_238[0] < dVar62;
                uVar47 = (ulonglong)bVar10;
                pdVar1 = (double *)
                         ((longlong)local_238 + (ulonglong)((uint)bVar10 * 0x20 + (uint)bVar10 * 8))
                ;
                if (*pdVar1 <= local_1e8 && local_1e8 != *pdVar1) {
                  uVar47 = 2;
                }
                iVar23 = *(int *)(&DAT_151c6afac + uVar47 * 4);
                lVar21 = (longlong)iVar23;
                iVar34 = *(int *)(&DAT_151c6afac + lVar21 * 4);
                iVar40 = (int)uVar47;
                dVar62 = __real_3ff0000000000000 /
                         SQRT(((*(double *)((longlong)local_238 + (ulonglong)(uint)(iVar40 * 0x28))
                               - local_238[lVar21 * 5]) - local_238[(longlong)iVar34 * 5]) +
                              __real_3ff0000000000000);
                dVar59 = dVar62 * __real_3fe0000000000000;
                *(double *)((longlong)local_1b8 + (ulonglong)(uint)(iVar40 * 8)) =
                     (__real_3ff0000000000000 / dVar62) * __real_3fe0000000000000;
                local_1b8[lVar21] =
                     (local_238[iVar23 + iVar40 * 4] + local_238[iVar40 + iVar23 * 4]) * dVar59;
                local_1b8[iVar34] =
                     (local_238[iVar34 + iVar40 * 4] + local_238[iVar40 + iVar34 * 4]) * dVar59;
                dVar28 = local_1b8[2];
                dVar62 = local_1b8[0];
                dVar71 = local_1b8[1];
                dVar59 = (local_238[iVar34 + iVar23 * 4] - local_238[iVar23 + iVar34 * 4]) * dVar59;
              }
              else {
                dVar59 = __real_3ff0000000000000 / SQRT(dVar59 + __real_3ff0000000000000);
                dVar71 = dVar59 * __real_3fe0000000000000;
                dVar28 = (local_238[1] - dVar28) * dVar71;
                dVar62 = (local_208 - dStack_1f0) * dVar71;
                dVar71 = (local_1f8 - local_238[2]) * dVar71;
                dVar59 = (__real_3ff0000000000000 / dVar59) * __real_3fe0000000000000;
              }
            }
          }
        }
        dVar37 = dVar59 * dVar59 + dVar71 * dVar71 + dVar28 * dVar28 + dVar62 * dVar62;
        uVar47 = ~-(ulonglong)(dVar37 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
        dVar37 = __real_3ff0000000000000 / SQRT(dVar37);
        dVar57 = (double)((ulonglong)(dVar62 * dVar37) & uVar47);
        dVar53 = (double)((ulonglong)(dVar71 * dVar37) & uVar47);
        dVar44 = (double)(~uVar47 & ___xmm_3ff00000000000000000000000000000 |
                         (ulonglong)(dVar28 * dVar37) & uVar47);
        dVar45 = (double)(~uVar47 & _UNK_15061cbc8 | (ulonglong)(dVar59 * dVar37) & uVar47);
      }
      auVar7._8_4_ = SUB84(dVar53,0);
      auVar7._0_8_ = dVar57;
      auVar7._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      dVar62 = auVar7._8_8_ * dVar53 + dVar45 * dVar45 + dVar57 * dVar57 + dVar44 * dVar44;
      dVar59 = __real_3ff0000000000000 / SQRT(dVar62);
      uVar58 = ~-(ulonglong)(dVar62 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      uVar47 = (ulonglong)(dVar53 * dVar59) & uVar58;
      uVar35 = ~uVar58 & ___xmm_3ff00000000000000000000000000000;
      uVar41 = ~uVar58 & _UNK_15061cbc8;
      pauVar24 = (undefined1 (*) [16])(lVar11 + param_1);
      auVar8._8_4_ = (int)uVar47;
      auVar8._0_8_ = (ulonglong)(dVar57 * dVar59) & uVar58;
      auVar8._12_4_ = (int)(uVar47 >> 0x20);
      *pauVar24 = auVar8;
      *(ulonglong *)pauVar24[1] = uVar35 | (ulonglong)(dVar44 * dVar59) & uVar58;
      *(ulonglong *)(pauVar24[1] + 8) = uVar41 | (ulonglong)(dVar45 * dVar59) & uVar58;
      uVar47 = (ulonglong)((uint)uVar2 * 0x60);
      *(double *)(param_1 + 0x20 + uVar47) = dStack_1d8;
      *(double *)(param_1 + 0x28 + uVar47) = local_1d0;
      *(double *)(param_1 + 0x30 + uVar47) = dStack_1c8;
      *(double *)(param_1 + 0x38 + uVar47) = dVar46;
      *(double *)(param_1 + 0x40 + uVar47) = dVar16 * dVar12;
      *(double *)(param_1 + 0x48 + uVar47) = dVar17 * dVar13;
      *(double *)(param_1 + 0x50 + uVar47) = dVar18 * dVar14;
      *(double *)(param_1 + 0x58 + uVar47) = dVar19 * dVar15;
      uVar22 = uVar22 + 1;
    } while (param_7 != uVar22);
  }
  return;
}

