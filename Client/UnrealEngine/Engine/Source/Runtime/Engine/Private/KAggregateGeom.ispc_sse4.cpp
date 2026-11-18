// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// BoxCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunfCunf_sse4 @ 140c845e0

/* WARNING: Removing unreachable block (ram,0x000140c8493d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunfCunf_sse4
               (double *param_1,double *param_2,float param_3,undefined1 (*param_4) [16],
               double *param_5,uint param_6,uint param_7,uint param_8,undefined1 (*param_9) [16])

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar18;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar45;
  undefined1 auVar41 [16];
  double dVar40;
  double dVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  undefined1 auVar60 [16];
  int iVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  int iVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar73;
  int iVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar80;
  uint uVar84;
  uint uVar85;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint uVar86;
  undefined1 auVar83 [16];
  double dVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined4 uVar93;
  uint uVar94;
  double dVar95;
  double dVar96;
  uint uVar98;
  uint uVar99;
  double dVar100;
  uint uVar101;
  undefined1 auVar97 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double local_268;
  double dStack_260;
  double local_208 [11];
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178 [4];
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_118 [16];
  double local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double dStack_b0;
  
  auVar22 = *param_4;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = *(double *)param_4[1];
  auVar59 = divpd(auVar58,___xmm_40768000000000004076800000000000);
  auVar48 = divpd(auVar22,___xmm_40768000000000004076800000000000);
  iVar73 = -(uint)(___xmm_43300000000000004330000000000000 <=
                  (double)(auVar59._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar79 = -(uint)(_UNK_151c6d0b8 <= (double)(auVar59._8_8_ & _UNK_15061cc88));
  iVar62 = -(uint)(___xmm_43300000000000004330000000000000 <=
                  (double)(auVar48._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar71 = -(uint)(_UNK_151c6d0b8 <= (double)(auVar48._8_8_ & _UNK_15061cc88));
  auVar9._4_4_ = iVar62;
  auVar9._0_4_ = iVar62;
  auVar9._8_4_ = iVar71;
  auVar9._12_4_ = iVar71;
  auVar36._8_4_ = 0xffffffff;
  auVar36._0_8_ = 0xffffffffffffffff;
  auVar36._12_4_ = 0xffffffff;
  auVar66 = blendvps(ZEXT816(0),auVar36,auVar9);
  auVar81._4_4_ = iVar73;
  auVar81._0_4_ = iVar73;
  auVar81._8_4_ = iVar79;
  auVar81._12_4_ = iVar79;
  auVar74 = blendvps(ZEXT816(0),auVar36,auVar81);
  auVar9 = roundpd(auVar81,auVar48,0xb);
  auVar81 = roundpd(unaff_XMM9,auVar59,0xb);
  auVar49._0_8_ = auVar48._0_8_ & auVar66._0_8_;
  auVar49._8_8_ = auVar48._8_8_ & auVar66._8_8_;
  auVar67._0_8_ = ~auVar66._0_8_ & auVar9._0_8_;
  auVar67._8_8_ = ~auVar66._8_8_ & auVar9._8_8_;
  auVar75._0_8_ =
       (double)(~auVar74._0_8_ & auVar81._0_8_ | auVar59._0_8_ & auVar74._0_8_) *
       (double)__xmm_40768000000000004076800000000000;
  auVar75._8_8_ =
       (double)(~auVar74._8_8_ & auVar81._8_8_ | auVar59._8_8_ & auVar74._8_8_) *
       __xmm_40768000000000004076800000000000._8_8_;
  auVar66._0_8_ = *(double *)param_4[1] - auVar75._0_8_;
  auVar66._8_8_ = 0.0 - auVar75._8_8_;
  auVar25._0_8_ =
       auVar22._0_8_ - SUB168(auVar67 | auVar49,0) * (double)__xmm_40768000000000004076800000000000;
  auVar25._8_8_ =
       auVar22._8_8_ - SUB168(auVar67 | auVar49,8) * __xmm_40768000000000004076800000000000._8_8_;
  auVar9 = minpd(auVar25,___xmm_40768000000000004076800000000000);
  auVar22 = minpd(auVar66,___xmm_40768000000000004076800000000000);
  auVar9 = maxpd(___xmm_c076800000000000c076800000000000,auVar9);
  auVar22 = maxpd(___xmm_c076800000000000c076800000000000,auVar22);
  dVar8 = auVar22._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar18 = auVar22._8_8_ * _UNK_151c6d0d8;
  dVar39 = auVar9._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar45 = auVar9._8_8_ * _UNK_151c6d0d8;
  auVar26._0_8_ = dVar39 * ___xmm_3fc45f306dc9c8833fc45f306dc9c883;
  auVar26._8_8_ = dVar45 * _UNK_151c6d0e8;
  auVar74._0_8_ = ___xmm_3fc45f306dc9c8833fc45f306dc9c883 * dVar8;
  auVar74._8_8_ = _UNK_151c6d0e8 * dVar18;
  auVar9 = roundpd(auVar75,auVar74,0xb);
  auVar22 = roundpd(auVar49,auVar26,0xb);
  dVar8 = auVar9._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar8;
  dVar39 = auVar22._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar39;
  dVar45 = auVar22._8_8_ * _UNK_151c6d0f8 + dVar45;
  uVar20 = CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                    (uint)__xmm_80000000000000008000000000000000);
  iVar73 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 <
                  (double)((ulonglong)dVar8 & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar79 = -(uint)(_UNK_151c6d118 <
                  (double)((ulonglong)(auVar9._8_8_ * _UNK_151c6d0f8 + dVar18) & _UNK_15061cc88));
  iVar62 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 <
                  (double)((ulonglong)dVar39 & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar71 = -(uint)(_UNK_151c6d118 < (double)((ulonglong)dVar45 & _UNK_15061cc88));
  auVar22._4_4_ = iVar62;
  auVar22._0_4_ = iVar62;
  auVar22._8_4_ = iVar71;
  auVar22._12_4_ = iVar71;
  auVar9 = blendvps(ZEXT816(0),auVar36,auVar22);
  auVar48._4_4_ = iVar73;
  auVar48._0_4_ = iVar73;
  auVar48._8_4_ = iVar79;
  auVar48._12_4_ = iVar79;
  auVar22 = blendvps(ZEXT816(0),auVar36,auVar48);
  dVar19 = (double)((ulonglong)
                    ((double)((ulonglong)dVar8 & uVar20 | ___xmm_400921fb54442d18400921fb54442d18) -
                    dVar8) & auVar22._0_8_ |
                   CONCAT44(~auVar22._4_4_ & (uint)((ulonglong)dVar8 >> 0x20),
                            ~auVar22._0_4_ & SUB84(dVar8,0)));
  auVar59._0_4_ = ~auVar9._0_4_ & SUB84(dVar39,0);
  auVar59._4_4_ = ~auVar9._4_4_ & (uint)((ulonglong)dVar39 >> 0x20);
  auVar59._8_4_ = ~auVar9._8_4_ & SUB84(dVar45,0);
  auVar59._12_4_ = ~auVar9._12_4_ & (uint)((ulonglong)dVar45 >> 0x20);
  auVar41._0_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar39 & uVar20 | ___xmm_400921fb54442d18400921fb54442d18) - dVar39) &
       auVar9._0_8_;
  auVar41._8_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar45 & CONCAT44(_UNK_15066df7c,_UNK_15066df78) | _UNK_151c6d108) -
       dVar45) & auVar9._8_8_;
  dVar39 = SUB168(auVar41 | auVar59,0);
  dVar57 = SUB168(auVar41 | auVar59,8);
  dVar8 = dVar39 * dVar39;
  dVar18 = dVar57 * dVar57;
  dVar39 = (((((___xmm_be59a6cb605c806fbe59a6cb605c806f * dVar8 +
               ___xmm_3ec71711c625173e3ec71711c625173e) * dVar8 +
              ___xmm_bf2a017e195d6197bf2a017e195d6197) * dVar8 +
             ___xmm_3f811110c0e4d9803f811110c0e4d980) * dVar8 +
            ___xmm_bfc555555c7dda4bbfc555555c7dda4b) * dVar8 +
           ___xmm_3ff00000000000003ff0000000000000) * dVar39;
  dVar57 = (((((_UNK_151c6d128 * dVar18 + _UNK_151c6d138) * dVar18 + _UNK_151c6d148) * dVar18 +
             _UNK_151c6d158) * dVar18 + _UNK_151c6d168) * dVar18 + _UNK_150689688) * dVar57;
  dVar8 = (((((___xmm_be917ba225041884be917ba225041884 * dVar8 +
              ___xmm_3ef9f698429782503ef9f69842978250) * dVar8 +
             ___xmm_bf56c1353b8c783dbf56c1353b8c783d) * dVar8 +
            ___xmm_3fa555545f16aaab3fa555545f16aaab) * dVar8 +
           ___xmm_bfe0000000000000bfe0000000000000) * dVar8 +
          ___xmm_3ff00000000000003ff0000000000000) *
          (double)(auVar9._0_8_ & uVar20 | (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  dVar18 = (((((_UNK_151c6d178 * dVar18 + _UNK_151c6d188) * dVar18 + _UNK_151c6d198) * dVar18 +
             _UNK_151c6d1a8) * dVar18 + _UNK_150689738) * dVar18 + _UNK_150689688) *
           (double)(auVar9._8_8_ & CONCAT44(_UNK_15066df7c,_UNK_15066df78) |
                   (ulonglong)_UNK_150689688);
  dVar63 = dVar19 * dVar19;
  dVar45 = (((((__real_be917ba225041884 * dVar63 + __real_3ef9f69842978250) * dVar63 +
              __real_bf56c1353b8c783d) * dVar63 + __real_3fa555545f16aaab) * dVar63 +
            __real_bfe0000000000000) * dVar63 + __real_3ff0000000000000) *
           (double)(auVar22._0_8_ & 0x8000000000000000 |
                   (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  auVar22 = *param_9;
  uVar80 = auVar22._12_4_;
  dVar19 = (((((__real_be59a6cb605c806f * dVar63 + __real_3ec71711c625173e) * dVar63 +
              __real_bf2a017e195d6197) * dVar63 + __real_3f811110c0e4d980) * dVar63 +
            __real_bfc555555c7dda4b) * dVar63 + __real_3ff0000000000000) * dVar19;
  iVar62 = movmskps(0,auVar22);
  dVar63 = dVar39 * dVar57 * dVar45 - dVar18 * dVar8 * dVar19;
  dVar46 = -(dVar39 * dVar18 * dVar45) - dVar57 * dVar8 * dVar19;
  dVar95 = (double)((ulonglong)(dVar39 * dVar18 * dVar19) ^ ___xmm_00000000000000008000000000000000)
           + dVar57 * dVar8 * dVar45;
  dVar19 = (double)((ulonglong)(dVar39 * dVar57 * dVar19) ^ _UNK_150689528) +
           dVar18 * dVar8 * dVar45;
  local_c8 = (double)param_3;
  dVar8 = local_c8 * *param_5;
  dVar18 = local_c8 * param_5[1];
  uVar93 = (undefined4)((ulonglong)dVar18 >> 0x20);
  local_c8 = local_c8 * param_5[2];
  if (iVar62 == 0xf) {
    local_268 = param_2[10];
    dVar39 = param_2[8];
    dVar45 = param_2[9];
    auVar31._4_4_ = -(uint)(dVar45 < 0.0);
    auVar31._0_4_ = -(uint)(dVar39 < 0.0);
    auVar31._8_4_ = -(uint)(param_2[10] < 0.0);
    auVar31._12_4_ = -(uint)(param_2[0xb] < 0.0);
    iVar62 = movmskps((int)param_5,auVar31);
    dStack_260 = 0.0;
    if (iVar62 == 0) {
      dVar57 = param_2[3];
      dVar47 = *param_2;
      dVar34 = param_2[1];
      dVar24 = param_2[1];
      dVar35 = param_2[2];
      dVar61 = dVar46 * dVar35 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar95 * dVar34 +
               dVar47 * dVar19 * ___xmm_bff00000000000003ff0000000000000 + dVar63 * dVar57;
      dVar40 = dVar63 * dVar35 * _UNK_15076b868 +
               dVar19 * dVar24 + dVar47 * dVar95 * _UNK_15076c6f8 + dVar46 * dVar57;
      dVar34 = dVar19 * dVar35 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar46 * dVar47 * ___xmm_bff00000000000003ff0000000000000 + dVar95 * dVar57) -
               dVar63 * dVar34);
      dVar19 = dVar95 * dVar35 * _UNK_15076c6f8 +
               ((dVar63 * dVar47 * _UNK_15076c6f8 + dVar19 * dVar57) - dVar46 * dVar24);
      dVar8 = dVar8 * dVar39;
      dVar18 = dVar18 * dVar45;
      local_c8 = local_c8 * param_2[10];
      auVar92._8_8_ = param_2[0xb] * 0.0;
      auVar92._0_8_ = local_c8;
      auVar4._8_4_ = SUB84(dVar18,0);
      auVar4._0_8_ = dVar8;
      auVar4._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      auVar22 = blendpd(auVar92,auVar4,1);
      dVar95 = param_2[2] * auVar22._0_8_ - dVar47 * local_c8;
      dVar63 = dVar18 * *param_2 - dVar8 * param_2[1];
      dVar46 = local_c8 * param_2[1] - dVar18 * param_2[2];
      dVar95 = dVar95 + dVar95;
      dVar63 = dVar63 + dVar63;
      auVar56._8_8_ = dVar46 + dVar46;
      dStack_1a8 = param_2[4] +
                   (dVar63 * param_2[1] - dVar95 * param_2[2]) + dVar57 * auVar56._8_8_ + dVar8;
      local_1a0 = param_2[5] + (auVar56._8_8_ * dVar35 - dVar47 * dVar63) + dVar57 * dVar95 + dVar18
      ;
      auVar56._0_8_ =
           dVar63 * dVar57 + local_c8 + (dVar95 * *param_2 - auVar56._8_8_ * param_2[1]) +
           param_2[6];
    }
    else {
      local_148 = 0x8000000000000000;
      uStack_140 = 0;
      dVar35 = dVar95 + dVar95;
      dVar57 = dVar63 + dVar63;
      dVar34 = dVar46 + dVar46;
      local_e8 = __real_3ff0000000000000 - (dVar46 * dVar34 + dVar63 * dVar57);
      auVar69._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar95 * dVar35 + dVar46 * dVar34);
      auVar69._8_8_ = _UNK_150689688 - (dVar95 * dVar35 + dVar63 * dVar57);
      auVar78._0_8_ = dVar63 * dVar35 + dVar34 * dVar19;
      auVar78._8_8_ = dVar63 * dVar57 + dVar57 * dVar19;
      dVar40 = dVar34 * dVar63 + dVar35 * dVar19;
      local_108 = dVar35 * dVar46 + dVar57 * dVar19;
      auVar32._0_8_ = dVar34 * dVar63 - dVar35 * dVar19;
      auVar32._8_8_ = dVar35 * dVar46 - dVar57 * dVar19;
      local_118 = blendpd(auVar69,auVar32,1);
      local_100 = 0;
      local_f8 = blendpd(auVar32,auVar78,1);
      dVar95 = *param_2;
      dVar47 = param_2[1];
      dVar61 = param_2[2] + param_2[2];
      dVar65 = dVar95 + dVar95;
      dVar87 = dVar47 + dVar47;
      dVar57 = param_2[3];
      dVar46 = param_2[3];
      dVar72 = dVar87 * dVar57;
      dVar57 = dVar61 * dVar57;
      dVar64 = dVar65 * dVar46;
      local_e0 = 0;
      local_d8._8_4_ = SUB84(dVar18,0);
      local_d8._0_8_ = dVar8;
      local_d8._12_4_ = uVar93;
      local_c0 = 0x3ff0000000000000;
      dVar24 = (__real_3ff0000000000000 - (dVar47 * dVar87 + dVar95 * dVar65)) * local_268;
      auVar82._0_8_ =
           (___xmm_3ff00000000000003ff0000000000000 - (param_2[2] * dVar61 + dVar47 * dVar87)) *
           dVar39;
      auVar82._8_8_ = (_UNK_150689688 - (param_2[2] * dVar61 + dVar95 * dVar65)) * dVar45;
      auVar88._0_8_ = (*param_2 * dVar61 + dVar72) * local_268;
      auVar88._8_8_ = (*param_2 * dVar65 + dVar65 * dVar46) * 0.0;
      dVar96 = (dVar87 * dVar95 + dVar57) * dVar39;
      local_188 = (dVar61 * dVar47 + dVar64) * dVar45;
      dVar65 = (*param_2 * dVar61 - dVar72) * param_2[8];
      auVar97._0_8_ = param_2[9] * (dVar87 * dVar95 - dVar57);
      auVar97._8_8_ = local_268 * (dVar61 * dVar47 - dVar64);
      auVar22 = blendpd(auVar88,auVar97,2);
      auVar9 = blendpd(auVar97,auVar82,2);
      dVar34 = dVar63 * dVar35 - dVar34 * dVar19;
      dVar47 = auVar22._0_8_;
      dVar64 = auVar22._8_8_;
      dVar72 = auVar9._0_8_;
      dVar87 = auVar9._8_8_;
      dStack_180 = 0.0;
      dStack_198 = param_2[6];
      dVar95 = dStack_198 * 0.0 +
               (double)local_118._8_8_ * local_188 +
               local_108 * dVar24 + (double)local_118._0_8_ * dVar65;
      dVar19 = param_2[4];
      dVar63 = param_2[5];
      dVar35 = dVar19 * 0.0 +
               dVar72 * (double)local_118._8_8_ +
               dVar47 * local_108 + auVar82._0_8_ * (double)local_118._0_8_;
      dVar61 = dVar63 * 0.0 +
               dVar87 * (double)local_118._8_8_ +
               dVar64 * local_108 + dVar96 * (double)local_118._0_8_;
      dStack_1a8 = dVar72 * dVar18 + dVar47 * local_c8 + auVar82._0_8_ * dVar8 + dVar19;
      local_1a0 = dVar87 * dVar18 + dVar64 * local_c8 + dVar96 * dVar8 + dVar63;
      dVar57 = dVar40 * dVar72 + dVar47 * dVar34 + auVar82._0_8_ * auVar69._0_8_ + dVar19 * 0.0;
      dVar46 = dVar40 * dVar87 + dVar64 * dVar34 + dVar96 * auVar69._0_8_ + dVar63 * 0.0;
      dVar47 = dVar72 * (double)local_f8._8_8_ +
               local_e8 * dVar47 + auVar82._0_8_ * (double)local_f8._0_8_ + dVar19 * 0.0;
      dVar63 = dVar87 * (double)local_f8._8_8_ + local_e8 * dVar64 + dVar96 * (double)local_f8._0_8_
               + dVar63 * 0.0;
      dVar64 = local_188 * dVar40 + dVar34 * dVar24 + auVar69._0_8_ * dVar65 + dStack_198 * 0.0;
      dVar19 = (double)local_f8._8_8_ * local_188 +
               dVar24 * local_e8 + (double)local_f8._0_8_ * dVar65 + dStack_198 * 0.0;
      dStack_198 = dVar18 * local_188 + dVar24 * local_c8 + dVar65 * dVar8 + dStack_198;
      local_208[3] = dVar40 * 0.0 + dVar34 * 0.0 + auVar69._0_8_ * 0.0 + _UNK_15061cbc8 * 0.0;
      local_208[7] = _UNK_15061cbc8 * 0.0 +
                     (double)local_118._8_8_ * 0.0 + local_108 * 0.0 + (double)local_118._0_8_ * 0.0
      ;
      local_1b0 = (double)local_f8._8_8_ * 0.0 + local_e8 * 0.0 + (double)local_f8._0_8_ * 0.0 +
                  _UNK_15061cbc8 * 0.0;
      local_190 = dVar18 * 0.0 + local_c8 * 0.0 + dVar8 * 0.0 + _UNK_15061cbc8;
      dVar18 = dVar64 * dVar64 + dVar46 * dVar46 + dVar57 * dVar57;
      dVar24 = dVar95 * dVar95 + dVar61 * dVar61 + dVar35 * dVar35;
      dVar8 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar18) {
        dVar8 = __real_3ff0000000000000 / SQRT(dVar18);
      }
      dVar34 = dVar63 * dVar63 + dVar47 * dVar47 + dVar19 * dVar19;
      dVar18 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar24) {
        dVar18 = __real_3ff0000000000000 / SQRT(dVar24);
      }
      local_268 = local_268 * __real_3ff0000000000000;
      dStack_260 = param_2[0xb] * 0.0;
      dVar24 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar34) {
        dVar24 = __real_3ff0000000000000 / SQRT(dVar34);
      }
      auVar14._0_4_ = -(uint)(0.0 <= dVar39);
      auVar14._8_4_ = -(uint)(0.0 <= dVar45);
      auVar14._4_4_ = auVar14._0_4_;
      auVar14._12_4_ = auVar14._8_4_;
      auVar70._8_4_ = 0xffffffff;
      auVar70._0_8_ = 0xffffffffffffffff;
      auVar70._12_4_ = 0xffffffff;
      auVar9 = blendvps(ZEXT816(0),auVar70,auVar14);
      auVar15._4_4_ = -(uint)(0.0 <= local_268);
      auVar15._0_4_ = -(uint)(0.0 <= local_268);
      auVar15._8_4_ = -(uint)(0.0 <= dStack_260);
      auVar15._12_4_ = -(uint)(0.0 <= dStack_260);
      auVar22 = blendvps(ZEXT816(0),auVar70,auVar15);
      uVar80 = auVar9._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
               ___xmm_bff0000000000000bff0000000000000;
      uVar84 = auVar9._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
      uVar85 = auVar9._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
      uVar86 = auVar9._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
      auVar22 = ZEXT816(0xbff0000000000000) ^ ZEXT416(auVar22._4_4_ & 0x80000000) << 0x20;
      auVar33._0_8_ = (double)CONCAT44(uVar84,uVar80);
      auVar33._8_4_ = uVar80;
      auVar33._12_4_ = uVar84;
      local_208[0] = auVar33._0_8_ * dVar57 * dVar8;
      local_208[1] = auVar33._8_8_ * dVar46 * dVar8;
      local_208[2] = dVar64 * dVar8 * (double)CONCAT44(uVar84,uVar80);
      auVar16._0_8_ = (double)CONCAT44(uVar86,uVar85);
      auVar16._8_4_ = uVar85;
      auVar16._12_4_ = uVar86;
      local_208[6] = dVar95 * dVar18 * auVar16._0_8_;
      local_208[4] = dVar35 * dVar18 * auVar16._0_8_;
      local_208[5] = dVar61 * dVar18 * auVar16._8_8_;
      auVar17._0_8_ = auVar22._0_8_;
      auVar17._8_4_ = 0;
      auVar17._12_4_ = auVar22._4_4_;
      local_208[8] = auVar17._0_8_ * dVar47 * dVar24;
      local_208[9] = auVar17._8_8_ * dVar63 * dVar24;
      local_208[10] = auVar17._0_8_ * dVar19 * dVar24;
      auVar52._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_208[1] & _UNK_15061cc88));
      auVar52._0_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_208[0] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar52._8_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_208[2] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar52._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
      iVar62 = movmskps(0,auVar52);
      dVar8 = __real_3ff0000000000000;
      if (iVar62 == 0) {
        local_178[0] = 0.0;
        local_178[1] = 0.0;
        local_178[2] = 0.0;
      }
      else {
        auVar53._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_208[5] & _UNK_15061cc88))
        ;
        auVar53._0_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_208[4] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar53._8_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_208[6] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar53._12_4_ =
             -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
        iVar62 = movmskps(iVar62,auVar53);
        if ((iVar62 == 0) ||
           (auVar54._4_4_ =
                 -(uint)(_UNK_150b53828 < (double)((ulonglong)local_208[9] & _UNK_15061cc88)),
           auVar54._0_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_208[8] & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar54._8_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_208[10] & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar54._12_4_ =
                -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
           iVar62 = movmskps(iVar62,auVar54), iVar62 == 0)) {
          local_178[0] = 0.0;
          local_178[1] = 0.0;
          local_178[2] = 0.0;
        }
        else {
          dVar8 = local_208[0] + local_208[5] + local_208[10];
          if (dVar8 <= 0.0) {
            pdVar1 = (double *)
                     ((longlong)local_208 + (ulonglong)((uint)(local_208[0] < local_208[5]) * 0x28))
            ;
            uVar20 = 2;
            if (local_208[10] < *pdVar1 || local_208[10] == *pdVar1) {
              uVar20 = (ulonglong)(uint)(local_208[0] < local_208[5]);
            }
            iVar62 = *(int *)(&DAT_151c6d1b0 + uVar20 * 4);
            lVar7 = (longlong)iVar62;
            iVar73 = (int)uVar20;
            iVar71 = *(int *)(&DAT_151c6d1b0 + lVar7 * 4);
            dVar18 = __real_3ff0000000000000 /
                     SQRT(((*(double *)((longlong)local_208 + (ulonglong)(uint)(iVar73 * 0x28)) -
                           local_208[lVar7 * 5]) - local_208[(longlong)iVar71 * 5]) +
                          __real_3ff0000000000000);
            dVar8 = dVar18 * __real_3fe0000000000000;
            *(double *)((longlong)local_178 + (ulonglong)(uint)(iVar73 * 8)) =
                 (__real_3ff0000000000000 / dVar18) * __real_3fe0000000000000;
            local_178[lVar7] =
                 (local_208[iVar62 + iVar73 * 4] + local_208[iVar73 + iVar62 * 4]) * dVar8;
            local_178[iVar71] =
                 (local_208[iVar71 + iVar73 * 4] + local_208[iVar73 + iVar71 * 4]) * dVar8;
            dVar8 = (local_208[iVar71 + iVar62 * 4] - local_208[iVar62 + iVar71 * 4]) * dVar8;
          }
          else {
            dVar8 = __real_3ff0000000000000 / SQRT(dVar8 + __real_3ff0000000000000);
            dVar18 = dVar8 * __real_3fe0000000000000;
            local_178[0] = (local_208[6] - local_208[9]) * dVar18;
            local_178[1] = (local_208[8] - local_208[2]) * dVar18;
            local_178[2] = (local_208[1] - local_208[4]) * dVar18;
            dVar8 = (__real_3ff0000000000000 / dVar8) * __real_3fe0000000000000;
          }
        }
      }
      dVar18 = dVar8 * dVar8 + local_178[1] * local_178[1] +
               local_178[2] * local_178[2] + local_178[0] * local_178[0];
      uVar21 = ~-(ulonglong)(dVar18 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
      uVar20 = (ulonglong)(dVar8 * dVar18) & uVar21;
      dVar61 = (double)((ulonglong)(local_178[0] * dVar18) & uVar21);
      dVar40 = (double)((ulonglong)(local_178[1] * dVar18) & uVar21);
      auVar23._0_8_ = ~uVar21 & ___xmm_3ff00000000000000000000000000000;
      auVar23._8_8_ = ~uVar21 & (ulonglong)_UNK_15061cbc8;
      auVar3._8_4_ = (int)uVar20;
      auVar3._0_8_ = (ulonglong)(local_178[2] * dVar18) & uVar21;
      auVar3._12_4_ = (int)(uVar20 >> 0x20);
      dVar34 = SUB168(auVar23 | auVar3,0);
      dVar19 = SUB168(auVar23 | auVar3,8);
      auVar56._8_8_ = 0.0;
      auVar56._0_8_ = dStack_198;
    }
    param_3 = param_3 * __real_3f000000;
    auVar22 = insertps(ZEXT416(param_6),ZEXT416(param_7),0x1c);
    auVar22 = insertps(auVar22,ZEXT416(param_8),0x28);
    dVar47 = dVar34 + dVar34;
    dVar24 = dVar61 + dVar61;
    dVar35 = dVar40 + dVar40;
    dVar18 = (double)(param_3 * auVar22._0_4_);
    dVar57 = (double)(param_3 * auVar22._4_4_);
    dVar46 = (double)(param_3 * auVar22._8_4_);
    dVar95 = (__real_3ff0000000000000 - (dVar40 * dVar35 + dVar61 * dVar24)) * local_268;
    auVar38._0_8_ =
         (___xmm_3ff00000000000003ff0000000000000 - (dVar34 * dVar47 + dVar40 * dVar35)) * dVar39;
    auVar38._8_8_ = (_UNK_150689688 - (dVar34 * dVar47 + dVar61 * dVar24)) * dVar45;
    dVar8 = (dVar35 * dVar61 + dVar47 * dVar19) * dVar39;
    dVar63 = (dVar47 * dVar40 + dVar24 * dVar19) * dVar45;
    auVar44._0_8_ = (dVar61 * dVar47 + dVar35 * dVar19) * local_268;
    auVar44._8_8_ = (dVar61 * dVar24 + dVar24 * dVar19) * dStack_260;
    auVar91._0_8_ = dVar45 * (dVar35 * dVar61 - dVar47 * dVar19);
    auVar91._8_8_ = local_268 * (dVar47 * dVar40 - dVar24 * dVar19);
    dVar39 = (dVar61 * dVar47 - dVar35 * dVar19) * dVar39;
    dVar47 = (dVar18 - dVar18) * ___xmm_3fe00000000000003fe0000000000000;
    dVar24 = (dVar57 - dVar57) * _UNK_150689678;
    dVar19 = (dVar18 + dVar18) * ___xmm_3fe00000000000003fe0000000000000;
    dVar45 = (dVar57 + dVar57) * _UNK_150689678;
    auVar22 = blendpd(auVar38,auVar91,1);
    dVar18 = (dVar46 - dVar46) * __real_3fe0000000000000;
    auVar81 = blendpd(auVar91,auVar44,1);
    dStack_1a8 = dVar18 * auVar81._0_8_ + dVar24 * auVar22._0_8_ + dVar47 * auVar38._0_8_ +
                 dStack_1a8;
    local_1a0 = dVar18 * auVar81._8_8_ + dVar24 * auVar22._8_8_ + dVar47 * dVar8 + local_1a0;
    auVar6._8_8_ = _UNK_15061cbc8;
    auVar6._0_8_ = ___xmm_3ff00000000000000000000000000000;
    auVar9 = blendpd(auVar56,auVar6,2);
    dVar57 = auVar9._0_8_ + dVar18 * dVar95 + dVar24 * dVar63 + dVar47 * dVar39;
    dVar18 = (dVar46 + dVar46) * __real_3fe0000000000000;
    dVar39 = (double)((ulonglong)(dVar18 * dVar95) & __xmm_7fffffffffffffff7fffffffffffffff) +
             (double)((ulonglong)(dVar45 * dVar63) & __xmm_7fffffffffffffff7fffffffffffffff) +
             (double)((ulonglong)(dVar19 * dVar39) & __xmm_7fffffffffffffff7fffffffffffffff);
    dVar63 = (double)((ulonglong)(auVar81._0_8_ * dVar18) & __xmm_7fffffffffffffff7fffffffffffffff)
             + (double)((ulonglong)(auVar22._0_8_ * dVar45) & __xmm_7fffffffffffffff7fffffffffffffff
                       ) +
               (double)((ulonglong)(auVar38._0_8_ * dVar19) & __xmm_7fffffffffffffff7fffffffffffffff
                       );
    dVar45 = (double)((ulonglong)(auVar81._8_8_ * dVar18) & _UNK_15061cc88) +
             (double)((ulonglong)(auVar22._8_8_ * dVar45) & _UNK_15061cc88) +
             (double)((ulonglong)(dVar8 * dVar19) & _UNK_15061cc88);
    dVar8 = dVar57 - dVar39;
    dVar39 = dVar39 + dVar57;
    dVar18 = dStack_1a8 - dVar63;
    dVar19 = local_1a0 - dVar45;
    dVar63 = dVar63 + dStack_1a8;
    dVar45 = dVar45 + local_1a0;
  }
  else {
    local_268 = param_2[10];
    dVar39 = param_2[8];
    dVar45 = param_2[9];
    uVar84 = auVar22._0_4_;
    auVar27._0_4_ = -(uint)(dVar39 < 0.0) & uVar84;
    uVar85 = auVar22._4_4_;
    auVar27._4_4_ = -(uint)(dVar45 < 0.0) & uVar85;
    uVar86 = auVar22._8_4_;
    auVar27._8_4_ = -(uint)(param_2[10] < 0.0) & uVar86;
    auVar27._12_4_ = -(uint)(param_2[0xb] < 0.0) & uVar80;
    iVar62 = movmskps((int)param_5,auVar27);
    dStack_260 = 0.0;
    if (iVar62 == 0) {
      dVar57 = param_2[3];
      dVar47 = *param_2;
      dVar24 = param_2[1];
      dVar34 = param_2[1];
      dVar35 = param_2[2];
      dVar40 = dVar46 * dVar35 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar95 * dVar24 +
               dVar47 * dVar19 * ___xmm_bff00000000000003ff0000000000000 + dVar63 * dVar57;
      dVar61 = dVar63 * dVar35 * _UNK_15076b868 +
               dVar19 * dVar34 + dVar47 * dVar95 * _UNK_15076c6f8 + dVar46 * dVar57;
      dVar24 = dVar19 * dVar35 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar46 * dVar47 * ___xmm_bff00000000000003ff0000000000000 + dVar95 * dVar57) -
               dVar63 * dVar24);
      dVar19 = dVar95 * dVar35 * _UNK_15076c6f8 +
               ((dVar63 * dVar47 * _UNK_15076c6f8 + dVar19 * dVar57) - dVar46 * dVar34);
      dVar8 = dVar8 * dVar39;
      dVar18 = dVar18 * dVar45;
      local_c8 = local_c8 * param_2[10];
      auVar89._8_8_ = param_2[0xb] * 0.0;
      auVar89._0_8_ = local_c8;
      auVar2._8_4_ = SUB84(dVar18,0);
      auVar2._0_8_ = dVar8;
      auVar2._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      auVar22 = blendpd(auVar89,auVar2,1);
      dVar63 = param_2[2] * auVar22._0_8_ - dVar47 * local_c8;
      dVar46 = dVar18 * *param_2 - dVar8 * param_2[1];
      dVar95 = local_c8 * param_2[1] - dVar18 * param_2[2];
      dVar63 = dVar63 + dVar63;
      dVar46 = dVar46 + dVar46;
      auVar55._8_8_ = dVar95 + dVar95;
      dStack_1a8 = param_2[4] +
                   (dVar46 * param_2[1] - dVar63 * param_2[2]) + dVar57 * auVar55._8_8_ + dVar8;
      local_1a0 = param_2[5] + (auVar55._8_8_ * dVar35 - dVar47 * dVar46) + dVar57 * dVar63 + dVar18
      ;
      auVar55._0_8_ =
           dVar46 * dVar57 + local_c8 + (dVar63 * *param_2 - auVar55._8_8_ * param_2[1]) +
           param_2[6];
    }
    else {
      local_148 = 0x8000000000000000;
      uStack_140 = 0;
      dVar35 = dVar95 + dVar95;
      dVar57 = dVar63 + dVar63;
      dVar61 = dVar46 + dVar46;
      local_e8 = __real_3ff0000000000000 - (dVar46 * dVar61 + dVar63 * dVar57);
      auVar68._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar95 * dVar35 + dVar46 * dVar61);
      auVar68._8_8_ = _UNK_150689688 - (dVar95 * dVar35 + dVar63 * dVar57);
      auVar76._0_8_ = dVar63 * dVar35 + dVar61 * dVar19;
      auVar76._8_8_ = dVar63 * dVar57 + dVar57 * dVar19;
      dVar40 = dVar61 * dVar63 + dVar35 * dVar19;
      local_108 = dVar35 * dVar46 + dVar57 * dVar19;
      auVar28._0_8_ = dVar61 * dVar63 - dVar35 * dVar19;
      auVar28._8_8_ = dVar35 * dVar46 - dVar57 * dVar19;
      local_118 = blendpd(auVar68,auVar28,1);
      local_100 = 0;
      local_f8 = blendpd(auVar28,auVar76,1);
      local_e0 = 0;
      local_d8._8_4_ = SUB84(dVar18,0);
      local_d8._0_8_ = dVar8;
      local_d8._12_4_ = uVar93;
      local_c0 = 0x3ff0000000000000;
      dVar95 = *param_2;
      dVar47 = param_2[1];
      dVar24 = param_2[2] + param_2[2];
      dVar64 = dVar95 + dVar95;
      dVar72 = dVar47 + dVar47;
      dVar87 = (__real_3ff0000000000000 - (dVar47 * dVar72 + dVar95 * dVar64)) * local_268;
      auVar77._0_8_ =
           (___xmm_3ff00000000000003ff0000000000000 - (param_2[2] * dVar24 + dVar47 * dVar72)) *
           dVar39;
      auVar77._8_8_ = (_UNK_150689688 - (param_2[2] * dVar24 + dVar95 * dVar64)) * dVar45;
      dVar57 = param_2[3];
      dVar46 = param_2[3];
      dVar65 = dVar72 * dVar57;
      dVar57 = dVar24 * dVar57;
      dVar34 = dVar64 * dVar46;
      auVar29._0_8_ = (*param_2 * dVar24 + dVar65) * local_268;
      auVar29._8_8_ = (*param_2 * dVar64 + dVar64 * dVar46) * 0.0;
      dVar96 = (dVar72 * dVar95 + dVar57) * dVar39;
      dVar100 = (dVar24 * dVar47 + dVar34) * dVar45;
      dVar64 = (*param_2 * dVar24 - dVar65) * param_2[8];
      auVar102._0_8_ = param_2[9] * (dVar72 * dVar95 - dVar57);
      auVar102._8_8_ = local_268 * (dVar24 * dVar47 - dVar34);
      auVar22 = blendpd(auVar29,auVar102,2);
      auVar9 = blendpd(auVar102,auVar77,2);
      dVar47 = dVar63 * dVar35 - dVar61 * dVar19;
      dVar46 = auVar22._0_8_;
      dVar95 = auVar22._8_8_;
      dVar34 = auVar9._0_8_;
      dVar35 = auVar9._8_8_;
      dStack_198 = param_2[6];
      dVar24 = dStack_198 * 0.0 +
               (double)local_118._8_8_ * dVar100 +
               local_108 * dVar87 + (double)local_118._0_8_ * dVar64;
      dVar19 = param_2[4];
      dVar63 = param_2[5];
      local_158 = dVar19 * 0.0 +
                  dVar34 * (double)local_118._8_8_ +
                  dVar46 * local_108 + auVar77._0_8_ * (double)local_118._0_8_;
      dStack_150 = dVar63 * 0.0 +
                   dVar35 * (double)local_118._8_8_ +
                   dVar95 * local_108 + dVar96 * (double)local_118._0_8_;
      dStack_1a8 = dVar34 * dVar18 + dVar46 * local_c8 + auVar77._0_8_ * dVar8 + dVar19;
      local_1a0 = dVar35 * dVar18 + dVar95 * local_c8 + dVar96 * dVar8 + dVar63;
      dVar57 = dVar40 * dVar34 + dVar46 * dVar47 + auVar77._0_8_ * auVar68._0_8_ + dVar19 * 0.0;
      local_b8 = dVar40 * dVar35 + dVar95 * dVar47 + dVar96 * auVar68._0_8_ + dVar63 * 0.0;
      dVar46 = dVar34 * (double)local_f8._8_8_ +
               local_e8 * dVar46 + auVar77._0_8_ * (double)local_f8._0_8_ + dVar19 * 0.0;
      dVar95 = dVar35 * (double)local_f8._8_8_ + local_e8 * dVar95 + dVar96 * (double)local_f8._0_8_
               + dVar63 * 0.0;
      local_188 = dVar100 * dVar40 + dVar47 * dVar87 + auVar68._0_8_ * dVar64 + dStack_198 * 0.0;
      local_208[3] = dVar40 * 0.0 + dVar47 * 0.0 + auVar68._0_8_ * 0.0 + _UNK_15061cbc8 * 0.0;
      dVar19 = (double)local_f8._8_8_ * dVar100 +
               dVar87 * local_e8 + (double)local_f8._0_8_ * dVar64 + dStack_198 * 0.0;
      dStack_198 = dVar18 * dVar100 + dVar87 * local_c8 + dVar64 * dVar8 + dStack_198;
      local_208[7] = _UNK_15061cbc8 * 0.0 +
                     (double)local_118._8_8_ * 0.0 + local_108 * 0.0 + (double)local_118._0_8_ * 0.0
      ;
      local_1b0 = (double)local_f8._8_8_ * 0.0 + local_e8 * 0.0 + (double)local_f8._0_8_ * 0.0 +
                  _UNK_15061cbc8 * 0.0;
      local_190 = dVar18 * 0.0 + local_c8 * 0.0 + dVar8 * 0.0 + _UNK_15061cbc8;
      dStack_b0 = local_b8;
      dStack_180 = local_208[3];
      dVar18 = local_188 * local_188 + local_b8 * local_b8 + dVar57 * dVar57;
      dVar63 = dVar24 * dVar24 + dStack_150 * dStack_150 + local_158 * local_158;
      dVar8 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar18) {
        dVar8 = __real_3ff0000000000000 / SQRT(dVar18);
      }
      dVar47 = dVar95 * dVar95 + dVar46 * dVar46 + dVar19 * dVar19;
      dVar18 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar63) {
        dVar18 = __real_3ff0000000000000 / SQRT(dVar63);
      }
      local_268 = local_268 * __real_3ff0000000000000;
      dStack_260 = param_2[0xb] * 0.0;
      dVar34 = 0.0;
      dVar63 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar47) {
        dVar63 = __real_3ff0000000000000 / SQRT(dVar47);
      }
      auVar10._0_4_ = -(uint)(0.0 <= dVar39);
      auVar10._8_4_ = -(uint)(0.0 <= dVar45);
      auVar10._4_4_ = auVar10._0_4_;
      auVar10._12_4_ = auVar10._8_4_;
      auVar103._8_4_ = 0xffffffff;
      auVar103._0_8_ = 0xffffffffffffffff;
      auVar103._12_4_ = 0xffffffff;
      auVar9 = blendvps(ZEXT816(0),auVar103,auVar10);
      auVar11._4_4_ = -(uint)(0.0 <= local_268);
      auVar11._0_4_ = -(uint)(0.0 <= local_268);
      auVar11._8_4_ = -(uint)(0.0 <= dStack_260);
      auVar11._12_4_ = -(uint)(0.0 <= dStack_260);
      auVar22 = blendvps(ZEXT816(0),auVar103,auVar11);
      auVar22 = ZEXT816(0xbff0000000000000) ^ ZEXT416(auVar22._4_4_ & 0x80000000) << 0x20;
      uVar94 = auVar9._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
               ___xmm_bff0000000000000bff0000000000000;
      uVar98 = auVar9._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
      uVar99 = auVar9._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
      uVar101 = auVar9._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
      auVar30._0_8_ = (double)CONCAT44(uVar98,uVar94);
      auVar30._8_4_ = uVar94;
      auVar30._12_4_ = uVar98;
      local_208[0] = auVar30._0_8_ * dVar57 * dVar8;
      local_208[1] = auVar30._8_8_ * local_b8 * dVar8;
      local_208[2] = local_188 * dVar8 * (double)CONCAT44(uVar98,uVar94);
      auVar12._0_8_ = (double)CONCAT44(uVar101,uVar99);
      auVar12._8_4_ = uVar99;
      auVar12._12_4_ = uVar101;
      local_208[6] = dVar24 * dVar18 * auVar12._0_8_;
      local_208[4] = local_158 * dVar18 * auVar12._0_8_;
      local_208[5] = dStack_150 * dVar18 * auVar12._8_8_;
      auVar13._0_8_ = auVar22._0_8_;
      auVar13._8_4_ = 0;
      auVar13._12_4_ = auVar22._4_4_;
      local_208[8] = auVar13._0_8_ * dVar46 * dVar63;
      local_208[9] = auVar13._8_8_ * dVar95 * dVar63;
      local_208[10] = auVar13._0_8_ * dVar19 * dVar63;
      auVar60._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_208[1] & _UNK_15061cc88));
      auVar60._0_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_208[0] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar60._8_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_208[2] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar60._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
      auVar37._0_4_ = -(uint)(uVar84 == 0);
      auVar37._4_4_ = -(uint)(uVar85 == 0);
      auVar37._8_4_ = -(uint)(uVar86 == 0);
      auVar37._12_4_ = -(uint)(uVar80 == 0);
      iVar62 = movmskps(0,~auVar37 & auVar60);
      dVar8 = __real_3ff0000000000000;
      if (iVar62 == 0) {
        local_178[0] = 0.0;
        local_178[1] = 0.0;
      }
      else {
        auVar50._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_208[5] & _UNK_15061cc88))
        ;
        auVar50._0_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_208[4] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar50._8_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_208[6] & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar50._12_4_ =
             -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
        iVar62 = movmskps(iVar62,~auVar37 & auVar50);
        if ((iVar62 == 0) ||
           (auVar51._0_4_ = -(uint)(uVar84 == 0), auVar51._4_4_ = -(uint)(uVar85 == 0),
           auVar51._8_4_ = -(uint)(uVar86 == 0), auVar51._12_4_ = -(uint)(uVar80 == 0),
           auVar42._4_4_ =
                -(uint)(_UNK_150b53828 < (double)((ulonglong)local_208[9] & _UNK_15061cc88)),
           auVar42._0_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_208[8] & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar42._8_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_208[10] & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar42._12_4_ =
                -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
           iVar62 = movmskps(iVar62,~auVar51 & auVar42), iVar62 == 0)) {
          local_178[0] = 0.0;
          local_178[1] = 0.0;
          dVar34 = 0.0;
        }
        else {
          dVar8 = local_208[0] + local_208[5] + local_208[10];
          if (dVar8 <= 0.0) {
            pdVar1 = (double *)
                     ((longlong)local_208 + (ulonglong)((uint)(local_208[0] < local_208[5]) * 0x28))
            ;
            uVar20 = 2;
            if (local_208[10] < *pdVar1 || local_208[10] == *pdVar1) {
              uVar20 = (ulonglong)(uint)(local_208[0] < local_208[5]);
            }
            iVar62 = *(int *)(&DAT_151c6d1b0 + uVar20 * 4);
            lVar7 = (longlong)iVar62;
            iVar73 = (int)uVar20;
            iVar71 = *(int *)(&DAT_151c6d1b0 + lVar7 * 4);
            dVar8 = __real_3ff0000000000000 /
                    SQRT(((*(double *)((longlong)local_208 + (ulonglong)(uint)(iVar73 * 0x28)) -
                          local_208[lVar7 * 5]) - local_208[(longlong)iVar71 * 5]) +
                         __real_3ff0000000000000);
            dVar18 = dVar8 * __real_3fe0000000000000;
            *(double *)((longlong)local_178 + (ulonglong)(uint)(iVar73 * 8)) =
                 (__real_3ff0000000000000 / dVar8) * __real_3fe0000000000000;
            local_178[lVar7] =
                 (local_208[iVar62 + iVar73 * 4] + local_208[iVar73 + iVar62 * 4]) * dVar18;
            local_178[iVar71] =
                 (local_208[iVar71 + iVar73 * 4] + local_208[iVar73 + iVar71 * 4]) * dVar18;
            dVar34 = local_178[2];
            dVar8 = (local_208[iVar71 + iVar62 * 4] - local_208[iVar62 + iVar71 * 4]) * dVar18;
          }
          else {
            dVar8 = __real_3ff0000000000000 / SQRT(dVar8 + __real_3ff0000000000000);
            dVar18 = dVar8 * __real_3fe0000000000000;
            local_178[0] = (local_208[6] - local_208[9]) * dVar18;
            local_178[1] = (local_208[8] - local_208[2]) * dVar18;
            dVar34 = (local_208[1] - local_208[4]) * dVar18;
            dVar8 = (__real_3ff0000000000000 / dVar8) * __real_3fe0000000000000;
          }
        }
      }
      dVar18 = dVar8 * dVar8 + local_178[1] * local_178[1] +
               dVar34 * dVar34 + local_178[0] * local_178[0];
      uVar20 = ~-(ulonglong)(dVar18 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
      dVar40 = (double)((ulonglong)(local_178[0] * dVar18) & uVar20);
      dVar61 = (double)((ulonglong)(local_178[1] * dVar18) & uVar20);
      dVar24 = (double)(~uVar20 & ___xmm_3ff00000000000000000000000000000 |
                       (ulonglong)(dVar34 * dVar18) & uVar20);
      dVar19 = (double)(~uVar20 & (ulonglong)_UNK_15061cbc8 | (ulonglong)(dVar8 * dVar18) & uVar20);
      auVar55._8_8_ = 0.0;
      auVar55._0_8_ = dStack_198;
    }
    param_3 = param_3 * __real_3f000000;
    auVar22 = insertps(ZEXT416(param_6),ZEXT416(param_7),0x1c);
    auVar22 = insertps(auVar22,ZEXT416(param_8),0x28);
    dVar47 = dVar24 + dVar24;
    dVar34 = dVar40 + dVar40;
    dVar35 = dVar61 + dVar61;
    dVar63 = (double)(param_3 * auVar22._0_4_);
    dVar57 = (double)(param_3 * auVar22._4_4_);
    dVar46 = (double)(param_3 * auVar22._8_4_);
    dVar95 = (__real_3ff0000000000000 - (dVar61 * dVar35 + dVar40 * dVar34)) * local_268;
    auVar43._0_8_ =
         (___xmm_3ff00000000000003ff0000000000000 - (dVar24 * dVar47 + dVar61 * dVar35)) * dVar39;
    auVar43._8_8_ = (_UNK_150689688 - (dVar24 * dVar47 + dVar40 * dVar34)) * dVar45;
    dVar8 = (dVar35 * dVar40 + dVar47 * dVar19) * dVar39;
    dVar18 = (dVar47 * dVar61 + dVar34 * dVar19) * dVar45;
    auVar83._0_8_ = (dVar40 * dVar47 + dVar35 * dVar19) * local_268;
    auVar83._8_8_ = (dVar40 * dVar34 + dVar34 * dVar19) * dStack_260;
    auVar90._0_8_ = dVar45 * (dVar35 * dVar40 - dVar47 * dVar19);
    auVar90._8_8_ = local_268 * (dVar47 * dVar61 - dVar34 * dVar19);
    dVar39 = (dVar40 * dVar47 - dVar35 * dVar19) * dVar39;
    dVar47 = (dVar63 - dVar63) * ___xmm_3fe00000000000003fe0000000000000;
    dVar24 = (dVar57 - dVar57) * _UNK_150689678;
    dVar19 = (dVar63 + dVar63) * ___xmm_3fe00000000000003fe0000000000000;
    dVar45 = (dVar57 + dVar57) * _UNK_150689678;
    auVar22 = blendpd(auVar43,auVar90,1);
    dVar63 = (dVar46 - dVar46) * __real_3fe0000000000000;
    auVar81 = blendpd(auVar90,auVar83,1);
    dStack_1a8 = dVar63 * auVar81._0_8_ + dVar24 * auVar22._0_8_ + dVar47 * auVar43._0_8_ +
                 dStack_1a8;
    local_1a0 = dVar63 * auVar81._8_8_ + dVar24 * auVar22._8_8_ + dVar47 * dVar8 + local_1a0;
    auVar5._8_8_ = _UNK_15061cbc8;
    auVar5._0_8_ = ___xmm_3ff00000000000000000000000000000;
    auVar9 = blendpd(auVar55,auVar5,2);
    dVar47 = auVar9._0_8_ + dVar63 * dVar95 + dVar24 * dVar18 + dVar47 * dVar39;
    dVar57 = (dVar46 + dVar46) * __real_3fe0000000000000;
    dVar39 = (double)((ulonglong)(dVar57 * dVar95) & __xmm_7fffffffffffffff7fffffffffffffff) +
             (double)((ulonglong)(dVar45 * dVar18) & __xmm_7fffffffffffffff7fffffffffffffff) +
             (double)((ulonglong)(dVar19 * dVar39) & __xmm_7fffffffffffffff7fffffffffffffff);
    dVar63 = (double)((ulonglong)(auVar81._0_8_ * dVar57) & __xmm_7fffffffffffffff7fffffffffffffff)
             + (double)((ulonglong)(auVar22._0_8_ * dVar45) & __xmm_7fffffffffffffff7fffffffffffffff
                       ) +
               (double)((ulonglong)(auVar43._0_8_ * dVar19) & __xmm_7fffffffffffffff7fffffffffffffff
                       );
    dVar45 = (double)((ulonglong)(auVar81._8_8_ * dVar57) & _UNK_15061cc88) +
             (double)((ulonglong)(auVar22._8_8_ * dVar45) & _UNK_15061cc88) +
             (double)((ulonglong)(dVar8 * dVar19) & _UNK_15061cc88);
    dVar8 = dVar47 - dVar39;
    dVar39 = dVar39 + dVar47;
    dVar18 = dStack_1a8 - dVar63;
    dVar19 = local_1a0 - dVar45;
    dVar63 = dVar63 + dStack_1a8;
    dVar45 = dVar45 + local_1a0;
  }
  *param_1 = dVar18;
  param_1[1] = dVar19;
  param_1[2] = dVar8;
  param_1[3] = dVar63;
  param_1[4] = dVar45;
  param_1[5] = dVar39;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

// SPhylCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunf_sse4 @ 140c86790

/* WARNING: Removing unreachable block (ram,0x000140c86aed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SPhylCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunf_sse4
               (double *param_1,double *param_2,float param_3,undefined1 (*param_4) [16],
               double *param_5,float param_6,float param_7,undefined1 (*param_8) [16])

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined4 in_R8D;
  double dVar7;
  undefined1 auVar9 [16];
  double dVar8;
  double dVar20;
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
  ulonglong uVar21;
  undefined1 auVar22 [16];
  double dVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  double dVar48;
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
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int iVar64;
  int iVar70;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar71;
  uint uVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  uint uVar81;
  int iVar82;
  uint uVar83;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar84;
  undefined1 auVar80 [16];
  uint uVar85;
  double dVar86;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  uint uVar90;
  double dVar91;
  uint uVar98;
  undefined1 auVar93 [16];
  double dVar92;
  uint uVar97;
  uint uVar99;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar100;
  undefined4 uVar101;
  double dVar102;
  double dVar104;
  undefined1 auVar103 [16];
  double dStack_240;
  double local_1f8 [4];
  undefined1 local_1d8 [16];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158 [4];
  double local_138;
  double dStack_130;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_b0;
  
  auVar22 = *param_4;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = *(double *)param_4[1];
  auVar59 = divpd(auVar58,___xmm_40768000000000004076800000000000);
  auVar50 = divpd(auVar22,___xmm_40768000000000004076800000000000);
  iVar71 = -(uint)(___xmm_43300000000000004330000000000000 <=
                  (double)(auVar59._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar82 = -(uint)(_UNK_151c6d0b8 <= (double)(auVar59._8_8_ & _UNK_15061cc88));
  iVar64 = -(uint)(___xmm_43300000000000004330000000000000 <=
                  (double)(auVar50._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar70 = -(uint)(_UNK_151c6d0b8 <= (double)(auVar50._8_8_ & _UNK_15061cc88));
  auVar9._4_4_ = iVar64;
  auVar9._0_4_ = iVar64;
  auVar9._8_4_ = iVar70;
  auVar9._12_4_ = iVar70;
  auVar37._8_4_ = 0xffffffff;
  auVar37._0_8_ = 0xffffffffffffffff;
  auVar37._12_4_ = 0xffffffff;
  auVar65 = blendvps(ZEXT816(0),auVar37,auVar9);
  auVar87._4_4_ = iVar71;
  auVar87._0_4_ = iVar71;
  auVar87._8_4_ = iVar82;
  auVar87._12_4_ = iVar82;
  auVar76 = blendvps(ZEXT816(0),auVar37,auVar87);
  auVar9 = roundpd(auVar87,auVar50,0xb);
  auVar87 = roundpd(unaff_XMM9,auVar59,0xb);
  auVar60._0_8_ = auVar59._0_8_ & auVar76._0_8_;
  auVar60._8_8_ = auVar59._8_8_ & auVar76._8_8_;
  auVar77._0_8_ = ~auVar76._0_8_ & auVar87._0_8_;
  auVar77._8_8_ = ~auVar76._8_8_ & auVar87._8_8_;
  auVar78._0_8_ = SUB168(auVar77 | auVar60,0) * (double)__xmm_40768000000000004076800000000000;
  auVar78._8_8_ = SUB168(auVar77 | auVar60,8) * __xmm_40768000000000004076800000000000._8_8_;
  auVar76._0_8_ = *(double *)param_4[1] - auVar78._0_8_;
  auVar76._8_8_ = 0.0 - auVar78._8_8_;
  auVar93._0_8_ =
       auVar22._0_8_ -
       (double)(~auVar65._0_8_ & auVar9._0_8_ | auVar50._0_8_ & auVar65._0_8_) *
       (double)__xmm_40768000000000004076800000000000;
  auVar93._8_8_ =
       auVar22._8_8_ -
       (double)(~auVar65._8_8_ & auVar9._8_8_ | auVar50._8_8_ & auVar65._8_8_) *
       __xmm_40768000000000004076800000000000._8_8_;
  auVar9 = minpd(auVar93,___xmm_40768000000000004076800000000000);
  auVar22 = minpd(auVar76,___xmm_40768000000000004076800000000000);
  auVar9 = maxpd(___xmm_c076800000000000c076800000000000,auVar9);
  auVar22 = maxpd(___xmm_c076800000000000c076800000000000,auVar22);
  dVar7 = auVar22._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar20 = auVar22._8_8_ * _UNK_151c6d0d8;
  dVar31 = auVar9._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar35 = auVar9._8_8_ * _UNK_151c6d0d8;
  auVar51._0_8_ = dVar31 * ___xmm_3fc45f306dc9c8833fc45f306dc9c883;
  auVar51._8_8_ = dVar35 * _UNK_151c6d0e8;
  auVar65._0_8_ = ___xmm_3fc45f306dc9c8833fc45f306dc9c883 * dVar7;
  auVar65._8_8_ = _UNK_151c6d0e8 * dVar20;
  auVar9 = roundpd(auVar78,auVar65,0xb);
  auVar22 = roundpd(auVar60,auVar51,0xb);
  dVar7 = auVar9._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar7;
  dVar31 = auVar22._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar31;
  dVar35 = auVar22._8_8_ * _UNK_151c6d0f8 + dVar35;
  uVar21 = CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                    (uint)__xmm_80000000000000008000000000000000);
  iVar71 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 <
                  (double)((ulonglong)dVar7 & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar82 = -(uint)(_UNK_151c6d118 <
                  (double)((ulonglong)(auVar9._8_8_ * _UNK_151c6d0f8 + dVar20) & _UNK_15061cc88));
  iVar64 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 <
                  (double)((ulonglong)dVar31 & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar70 = -(uint)(_UNK_151c6d118 < (double)((ulonglong)dVar35 & _UNK_15061cc88));
  auVar22._4_4_ = iVar64;
  auVar22._0_4_ = iVar64;
  auVar22._8_4_ = iVar70;
  auVar22._12_4_ = iVar70;
  auVar9 = blendvps(ZEXT816(0),auVar37,auVar22);
  auVar50._4_4_ = iVar71;
  auVar50._0_4_ = iVar71;
  auVar50._8_4_ = iVar82;
  auVar50._12_4_ = iVar82;
  auVar22 = blendvps(ZEXT816(0),auVar37,auVar50);
  dVar100 = (double)((ulonglong)
                     ((double)((ulonglong)dVar7 & uVar21 | ___xmm_400921fb54442d18400921fb54442d18)
                     - dVar7) & auVar22._0_8_ |
                    CONCAT44(~auVar22._4_4_ & (uint)((ulonglong)dVar7 >> 0x20),
                             ~auVar22._0_4_ & SUB84(dVar7,0)));
  auVar59._0_4_ = ~auVar9._0_4_ & SUB84(dVar31,0);
  auVar59._4_4_ = ~auVar9._4_4_ & (uint)((ulonglong)dVar31 >> 0x20);
  auVar59._8_4_ = ~auVar9._8_4_ & SUB84(dVar35,0);
  auVar59._12_4_ = ~auVar9._12_4_ & (uint)((ulonglong)dVar35 >> 0x20);
  auVar33._0_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar31 & uVar21 | ___xmm_400921fb54442d18400921fb54442d18) - dVar31) &
       auVar9._0_8_;
  auVar33._8_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar35 & CONCAT44(_UNK_15066df7c,_UNK_15066df78) | _UNK_151c6d108) -
       dVar35) & auVar9._8_8_;
  dVar31 = SUB168(auVar33 | auVar59,0);
  dVar48 = SUB168(auVar33 | auVar59,8);
  dVar7 = dVar31 * dVar31;
  dVar20 = dVar48 * dVar48;
  dVar31 = (((((___xmm_be59a6cb605c806fbe59a6cb605c806f * dVar7 +
               ___xmm_3ec71711c625173e3ec71711c625173e) * dVar7 +
              ___xmm_bf2a017e195d6197bf2a017e195d6197) * dVar7 +
             ___xmm_3f811110c0e4d9803f811110c0e4d980) * dVar7 +
            ___xmm_bfc555555c7dda4bbfc555555c7dda4b) * dVar7 +
           ___xmm_3ff00000000000003ff0000000000000) * dVar31;
  dVar48 = (((((_UNK_151c6d128 * dVar20 + _UNK_151c6d138) * dVar20 + _UNK_151c6d148) * dVar20 +
             _UNK_151c6d158) * dVar20 + _UNK_151c6d168) * dVar20 + _UNK_150689688) * dVar48;
  dVar7 = (((((___xmm_be917ba225041884be917ba225041884 * dVar7 +
              ___xmm_3ef9f698429782503ef9f69842978250) * dVar7 +
             ___xmm_bf56c1353b8c783dbf56c1353b8c783d) * dVar7 +
            ___xmm_3fa555545f16aaab3fa555545f16aaab) * dVar7 +
           ___xmm_bfe0000000000000bfe0000000000000) * dVar7 +
          ___xmm_3ff00000000000003ff0000000000000) *
          (double)(auVar9._0_8_ & uVar21 | (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  dVar20 = (((((_UNK_151c6d178 * dVar20 + _UNK_151c6d188) * dVar20 + _UNK_151c6d198) * dVar20 +
             _UNK_151c6d1a8) * dVar20 + _UNK_150689738) * dVar20 + _UNK_150689688) *
           (double)(auVar9._8_8_ & CONCAT44(_UNK_15066df7c,_UNK_15066df78) |
                   (ulonglong)_UNK_150689688);
  dVar73 = dVar100 * dVar100;
  dVar35 = (((((__real_be917ba225041884 * dVar73 + __real_3ef9f69842978250) * dVar73 +
              __real_bf56c1353b8c783d) * dVar73 + __real_3fa555545f16aaab) * dVar73 +
            __real_bfe0000000000000) * dVar73 + __real_3ff0000000000000) *
           (double)(auVar22._0_8_ & 0x8000000000000000 |
                   (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  local_178 = *param_8;
  uVar72 = local_178._12_4_;
  dVar100 = (((((__real_be59a6cb605c806f * dVar73 + __real_3ec71711c625173e) * dVar73 +
               __real_bf2a017e195d6197) * dVar73 + __real_3f811110c0e4d980) * dVar73 +
             __real_bfc555555c7dda4b) * dVar73 + __real_3ff0000000000000) * dVar100;
  iVar64 = movmskps(in_R8D,local_178);
  dVar73 = dVar31 * dVar48 * dVar35 - dVar20 * dVar7 * dVar100;
  dVar36 = -(dVar31 * dVar20 * dVar35) - dVar48 * dVar7 * dVar100;
  dVar91 = (double)((ulonglong)(dVar31 * dVar20 * dVar100) ^ ___xmm_00000000000000008000000000000000
                   ) + dVar48 * dVar7 * dVar35;
  dVar20 = (double)((ulonglong)(dVar31 * dVar48 * dVar100) ^ _UNK_150689528) +
           dVar20 * dVar7 * dVar35;
  local_b8 = (double)param_3;
  local_c8 = local_b8 * *param_5;
  dVar7 = local_b8 * param_5[1];
  uVar101 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_b8 = local_b8 * param_5[2];
  if (iVar64 == 0xf) {
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = local_c8;
    auVar5._12_4_ = uVar101;
    dVar31 = *(double *)*(undefined1 (*) [16])(param_2 + 8);
    dVar35 = param_2[9];
    dVar7 = param_2[10];
    dVar100 = param_2[0xb];
    auVar42._4_4_ = -(uint)(dVar35 < 0.0);
    auVar42._0_4_ = -(uint)(dVar31 < 0.0);
    auVar42._8_4_ = -(uint)(dVar7 < 0.0);
    auVar42._12_4_ = -(uint)(dVar100 < 0.0);
    iVar64 = movmskps((int)param_5,auVar42);
    dStack_240 = auVar5._8_8_;
    if (iVar64 == 0) {
      dVar48 = param_2[3];
      dVar8 = *param_2;
      dVar32 = param_2[1];
      dVar26 = param_2[1];
      dVar49 = param_2[2];
      dVar74 = dVar36 * dVar49 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar91 * dVar32 +
               dVar8 * dVar20 * ___xmm_bff00000000000003ff0000000000000 + dVar73 * dVar48;
      dVar57 = dVar73 * dVar49 * _UNK_15076b868 +
               dVar20 * dVar26 + dVar8 * dVar91 * _UNK_15076c6f8 + dVar36 * dVar48;
      dVar32 = dVar20 * dVar49 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar36 * dVar8 * ___xmm_bff00000000000003ff0000000000000 + dVar91 * dVar48) -
               dVar73 * dVar32);
      dVar36 = dVar91 * dVar49 * _UNK_15076c6f8 +
               ((dVar73 * dVar8 * _UNK_15076c6f8 + dVar20 * dVar48) - dVar36 * dVar26);
      auVar34._0_8_ = local_c8 * dVar31;
      auVar34._8_8_ = dStack_240 * dVar35;
      local_b8 = local_b8 * dVar7;
      auVar19._8_8_ = dVar100 * 0.0;
      auVar19._0_8_ = local_b8;
      auVar22 = blendpd(auVar19,auVar34,1);
      dVar91 = param_2[2] * auVar22._0_8_ - dVar8 * local_b8;
      dVar20 = auVar34._8_8_ * *param_2 - auVar34._0_8_ * param_2[1];
      dVar73 = local_b8 * param_2[1] - auVar34._8_8_ * param_2[2];
      dVar91 = dVar91 + dVar91;
      dVar20 = dVar20 + dVar20;
      dVar73 = dVar73 + dVar73;
      dStack_198 = param_2[4] +
                   (dVar20 * param_2[1] - dVar91 * param_2[2]) + dVar48 * dVar73 + auVar34._0_8_;
      local_190 = param_2[5] + (dVar73 * dVar49 - dVar8 * dVar20) + dVar48 * dVar91 + auVar34._8_8_;
      dStack_188 = dVar20 * dVar48 + local_b8 + (dVar91 * *param_2 - dVar73 * param_2[1]) +
                   param_2[6];
      dVar7 = __real_3ff0000000000000 * dVar7;
      dVar100 = dVar100 * 0.0;
    }
    else {
      local_168 = 0x8000000000000000;
      uStack_160 = 0;
      dVar102 = dVar91 + dVar91;
      dVar7 = dVar73 + dVar73;
      dVar57 = dVar36 + dVar36;
      local_d8 = __real_3ff0000000000000 - (dVar36 * dVar57 + dVar73 * dVar7);
      auVar55._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar91 * dVar102 + dVar36 * dVar57)
      ;
      auVar55._8_8_ = _UNK_150689688 - (dVar91 * dVar102 + dVar73 * dVar7);
      auVar62._0_8_ = dVar73 * dVar102 + dVar57 * dVar20;
      auVar62._8_8_ = dVar73 * dVar7 + dVar7 * dVar20;
      dVar49 = dVar57 * dVar73 + dVar102 * dVar20;
      local_f8 = dVar102 * dVar36 + dVar7 * dVar20;
      auVar23._0_8_ = dVar57 * dVar73 - dVar102 * dVar20;
      auVar23._8_8_ = dVar102 * dVar36 - dVar7 * dVar20;
      local_108 = blendpd(auVar55,auVar23,1);
      local_f0 = 0;
      local_e8 = blendpd(auVar23,auVar62,1);
      dVar8 = *param_2;
      dVar26 = param_2[1];
      dVar74 = param_2[2] + param_2[2];
      dVar84 = dVar8 + dVar8;
      dVar92 = dVar26 + dVar26;
      dVar48 = param_2[3];
      dVar100 = param_2[3];
      dVar86 = dVar92 * dVar48;
      dVar48 = dVar74 * dVar48;
      dVar75 = dVar84 * dVar100;
      local_138 = (*param_2 * dVar74 - dVar86) * param_2[8];
      dVar7 = param_2[10];
      local_d0 = 0;
      dStack_c0 = dStack_240;
      local_b0 = 0x3ff0000000000000;
      dVar32 = (__real_3ff0000000000000 - (dVar26 * dVar92 + dVar8 * dVar84)) * dVar7;
      dVar36 = (___xmm_3ff00000000000003ff0000000000000 - (param_2[2] * dVar74 + dVar26 * dVar92)) *
               dVar31;
      dVar91 = (_UNK_150689688 - (param_2[2] * dVar74 + dVar8 * dVar84)) * dVar35;
      auVar80._0_8_ = (*param_2 * dVar74 + dVar86) * dVar7;
      auVar80._8_8_ = (*param_2 * dVar84 + dVar84 * dVar100) * 0.0;
      local_178 = *(undefined1 (*) [16])(param_2 + 8);
      dVar84 = (dVar92 * dVar8 + dVar48) * dVar31;
      dVar86 = (dVar74 * dVar26 + dVar75) * dVar35;
      auVar103._0_8_ = param_2[9] * (dVar92 * dVar8 - dVar48);
      auVar103._8_8_ = dVar7 * (dVar74 * dVar26 - dVar75);
      auVar22 = blendpd(auVar80,auVar103,2);
      auVar2._8_4_ = SUB84(dVar91,0);
      auVar2._0_8_ = dVar36;
      auVar2._12_4_ = (int)((ulonglong)dVar91 >> 0x20);
      auVar9 = blendpd(auVar103,auVar2,2);
      dVar91 = dVar73 * dVar102 - dVar57 * dVar20;
      dVar73 = auVar22._0_8_;
      dVar8 = auVar22._8_8_;
      dVar92 = auVar9._0_8_;
      dVar102 = auVar9._8_8_;
      dStack_130 = 0.0;
      dStack_188 = param_2[6];
      dVar48 = dStack_188 * 0.0 +
               (double)local_108._8_8_ * dVar86 +
               local_f8 * dVar32 + (double)local_108._0_8_ * local_138;
      dVar20 = param_2[4];
      dVar100 = param_2[5];
      dVar26 = dVar20 * 0.0 +
               dVar92 * (double)local_108._8_8_ +
               dVar73 * local_f8 + dVar36 * (double)local_108._0_8_;
      dVar57 = dVar100 * 0.0 +
               dVar102 * (double)local_108._8_8_ +
               dVar8 * local_f8 + dVar84 * (double)local_108._0_8_;
      dStack_198 = dVar92 * dStack_240 + dVar73 * local_b8 + dVar36 * local_c8 + dVar20;
      local_190 = dVar102 * dStack_240 + dVar8 * local_b8 + dVar84 * local_c8 + dVar100;
      dVar74 = dVar49 * dVar92 + dVar73 * dVar91 + dVar36 * auVar55._0_8_ + dVar20 * 0.0;
      dVar75 = dVar49 * dVar102 + dVar8 * dVar91 + dVar84 * auVar55._0_8_ + dVar100 * 0.0;
      dVar36 = dVar92 * (double)local_e8._8_8_ + local_d8 * dVar73 + dVar36 * (double)local_e8._0_8_
               + dVar20 * 0.0;
      dVar8 = dVar102 * (double)local_e8._8_8_ + local_d8 * dVar8 + dVar84 * (double)local_e8._0_8_
              + dVar100 * 0.0;
      dVar20 = dVar86 * dVar49 + dVar91 * dVar32 + auVar55._0_8_ * local_138 + dStack_188 * 0.0;
      dVar84 = (double)local_e8._8_8_ * dVar86 +
               dVar32 * local_d8 + (double)local_e8._0_8_ * local_138 + dStack_188 * 0.0;
      dStack_188 = dStack_240 * dVar86 + dVar32 * local_b8 + local_138 * local_c8 + dStack_188;
      local_1c0 = _UNK_15061cbc8 * 0.0 +
                  (double)local_108._8_8_ * 0.0 + local_f8 * 0.0 + (double)local_108._0_8_ * 0.0;
      local_1a0 = (double)local_e8._8_8_ * 0.0 + local_d8 * 0.0 + (double)local_e8._0_8_ * 0.0 +
                  _UNK_15061cbc8 * 0.0;
      local_180 = dStack_240 * 0.0 + local_b8 * 0.0 + local_c8 * 0.0 + _UNK_15061cbc8;
      dVar100 = dVar20 * dVar20 + dVar75 * dVar75 + dVar74 * dVar74;
      dVar32 = dVar48 * dVar48 + dVar57 * dVar57 + dVar26 * dVar26;
      dVar73 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar100) {
        dVar73 = __real_3ff0000000000000 / SQRT(dVar100);
      }
      dVar7 = dVar7 * __real_3ff0000000000000;
      dVar100 = param_2[0xb] * 0.0;
      dVar86 = dVar8 * dVar8 + dVar36 * dVar36 + dVar84 * dVar84;
      dVar92 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar32) {
        dVar92 = __real_3ff0000000000000 / SQRT(dVar32);
      }
      dVar32 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar86) {
        dVar32 = __real_3ff0000000000000 / SQRT(dVar86);
      }
      auVar14._0_4_ = -(uint)(0.0 <= dVar31);
      auVar14._8_4_ = -(uint)(0.0 <= dVar35);
      auVar14._4_4_ = auVar14._0_4_;
      auVar14._12_4_ = auVar14._8_4_;
      auVar63._8_4_ = 0xffffffff;
      auVar63._0_8_ = 0xffffffffffffffff;
      auVar63._12_4_ = 0xffffffff;
      auVar9 = blendvps(ZEXT816(0),auVar63,auVar14);
      auVar15._4_4_ = -(uint)(0.0 <= dVar7);
      auVar15._0_4_ = -(uint)(0.0 <= dVar7);
      auVar15._8_4_ = -(uint)(0.0 <= dVar100);
      auVar15._12_4_ = -(uint)(0.0 <= dVar100);
      auVar22 = blendvps(ZEXT816(0),auVar63,auVar15);
      uVar72 = auVar9._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
               ___xmm_bff0000000000000bff0000000000000;
      uVar81 = auVar9._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
      uVar83 = auVar9._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
      uVar85 = auVar9._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
      auVar22 = ZEXT816(0xbff0000000000000) ^ ZEXT416(auVar22._4_4_ & 0x80000000) << 0x20;
      auVar56._0_8_ = (double)CONCAT44(uVar81,uVar72);
      auVar56._8_4_ = uVar72;
      auVar56._12_4_ = uVar81;
      local_1f8[0] = auVar56._0_8_ * dVar74 * dVar73;
      local_1f8[1] = auVar56._8_8_ * dVar75 * dVar73;
      local_1f8[2] = dVar20 * dVar73 * (double)CONCAT44(uVar81,uVar72);
      local_1f8[3] = dVar49 * 0.0 + dVar91 * 0.0 + auVar55._0_8_ * 0.0 + _UNK_15061cbc8 * 0.0;
      auVar16._0_8_ = (double)CONCAT44(uVar85,uVar83);
      auVar16._8_4_ = uVar83;
      auVar16._12_4_ = uVar85;
      local_1c8 = dVar48 * dVar92 * auVar16._0_8_;
      dVar20 = dVar26 * dVar92 * auVar16._0_8_;
      dVar73 = dVar57 * dVar92 * auVar16._8_8_;
      local_1d8._8_4_ = SUB84(dVar73,0);
      local_1d8._0_8_ = dVar20;
      local_1d8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
      auVar17._0_8_ = auVar22._0_8_;
      auVar17._8_4_ = 0;
      auVar17._12_4_ = auVar22._4_4_;
      local_1b8 = auVar17._0_8_ * dVar36 * dVar32;
      dStack_1b0 = auVar17._8_8_ * dVar8 * dVar32;
      local_1a8 = auVar17._0_8_ * dVar84 * dVar32;
      auVar43._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1f8[1] & _UNK_15061cc88));
      auVar43._0_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_1f8[0] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar43._8_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_1f8[2] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar43._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
      iVar64 = movmskps(0,auVar43);
      dVar48 = __real_3ff0000000000000;
      if (iVar64 == 0) {
        local_158[0] = 0.0;
        local_158[1] = 0.0;
        local_158[2] = 0.0;
      }
      else {
        auVar29._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)dVar73 & _UNK_15061cc88));
        auVar29._0_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)dVar20 & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar29._8_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_1c8 & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar29._12_4_ =
             -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
        iVar64 = movmskps(iVar64,auVar29);
        if ((iVar64 == 0) ||
           (auVar30._4_4_ =
                 -(uint)(_UNK_150b53828 < (double)((ulonglong)dStack_1b0 & _UNK_15061cc88)),
           auVar30._0_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_1b8 & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar30._8_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_1a8 & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar30._12_4_ =
                -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
           iVar64 = movmskps(iVar64,auVar30), iVar64 == 0)) {
          local_158[0] = 0.0;
          local_158[1] = 0.0;
          local_158[2] = 0.0;
        }
        else {
          dVar48 = local_1f8[0] + dVar73 + local_1a8;
          if (dVar48 <= 0.0) {
            pdVar1 = (double *)
                     ((longlong)local_1f8 + (ulonglong)((uint)(local_1f8[0] < dVar73) * 0x28));
            uVar21 = 2;
            if (local_1a8 < *pdVar1 || local_1a8 == *pdVar1) {
              uVar21 = (ulonglong)(uint)(local_1f8[0] < dVar73);
            }
            iVar64 = *(int *)(&DAT_151c6d1b0 + uVar21 * 4);
            lVar6 = (longlong)iVar64;
            iVar71 = (int)uVar21;
            iVar70 = *(int *)(&DAT_151c6d1b0 + lVar6 * 4);
            dVar20 = __real_3ff0000000000000 /
                     SQRT(((*(double *)((longlong)local_1f8 + (ulonglong)(uint)(iVar71 * 0x28)) -
                           local_1f8[lVar6 * 5]) - local_1f8[(longlong)iVar70 * 5]) +
                          __real_3ff0000000000000);
            dVar48 = dVar20 * __real_3fe0000000000000;
            *(double *)((longlong)local_158 + (ulonglong)(uint)(iVar71 * 8)) =
                 (__real_3ff0000000000000 / dVar20) * __real_3fe0000000000000;
            local_158[lVar6] =
                 (local_1f8[iVar64 + iVar71 * 4] + local_1f8[iVar71 + iVar64 * 4]) * dVar48;
            local_158[iVar70] =
                 (local_1f8[iVar70 + iVar71 * 4] + local_1f8[iVar71 + iVar70 * 4]) * dVar48;
            dVar48 = (local_1f8[iVar70 + iVar64 * 4] - local_1f8[iVar64 + iVar70 * 4]) * dVar48;
          }
          else {
            dVar73 = __real_3ff0000000000000 / SQRT(dVar48 + __real_3ff0000000000000);
            dVar48 = dVar73 * __real_3fe0000000000000;
            local_158[0] = (local_1c8 - dStack_1b0) * dVar48;
            local_158[1] = (local_1b8 - local_1f8[2]) * dVar48;
            local_158[2] = (local_1f8[1] - dVar20) * dVar48;
            dVar48 = (__real_3ff0000000000000 / dVar73) * __real_3fe0000000000000;
          }
        }
      }
      dVar20 = dVar48 * dVar48 + local_158[1] * local_158[1] +
               local_158[2] * local_158[2] + local_158[0] * local_158[0];
      uVar21 = ~-(ulonglong)(dVar20 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar20 = __real_3ff0000000000000 / SQRT(dVar20);
      dVar74 = (double)((ulonglong)(local_158[0] * dVar20) & uVar21);
      dVar57 = (double)((ulonglong)(local_158[1] * dVar20) & uVar21);
      dVar32 = (double)(~uVar21 & ___xmm_3ff00000000000000000000000000000 |
                       (ulonglong)(local_158[2] * dVar20) & uVar21);
      dVar36 = (double)(~uVar21 & (ulonglong)_UNK_15061cbc8 | (ulonglong)(dVar48 * dVar20) & uVar21)
      ;
    }
    dVar7 = __real_3ff0000000000000 * dVar7;
    auVar88._0_8_ = dVar31 * 0.0;
    auVar88._8_8_ = dVar35 * 0.0;
    auVar46._8_8_ = dVar100 * 0.0;
    auVar46._0_8_ = dVar7;
    auVar22 = blendpd(auVar46,auVar88,1);
    dVar35 = auVar22._0_8_ * dVar32 - dVar74 * dVar7;
    dVar20 = auVar22._8_8_ * dVar36 - dVar36 * dVar100 * 0.0;
    dVar100 = auVar88._8_8_ * dVar74 - dVar57 * auVar88._0_8_;
    dVar31 = dVar7 * dVar57 - dVar32 * auVar88._8_8_;
    dVar35 = dVar35 + dVar35;
    dVar20 = dVar20 + dVar20;
    auVar69._0_8_ = dVar100 + dVar100;
    auVar69._8_8_ = dVar31 + dVar31;
    auVar89._8_8_ = dVar20;
    auVar89._0_8_ = dVar35;
    auVar9 = blendpd(auVar89,auVar69,1);
    auVar47._0_8_ = dVar35 * dVar74 - auVar69._8_8_ * dVar57;
    auVar47._8_8_ = auVar69._0_8_ * dVar57 - dVar35 * dVar32;
    auVar25._0_8_ = auVar69._8_8_ * dVar32 - auVar9._0_8_ * dVar74;
    auVar25._8_8_ = dVar20 * dVar36 - auVar9._8_8_ * dVar36;
    auVar22 = blendpd(auVar25,auVar47,1);
    dVar31 = (double)(__real_3f000000 * param_3 * param_7);
    dVar20 = (double)((ulonglong)(auVar22._0_8_ + dVar36 * auVar9._0_8_ + dVar7) &
                     __xmm_7fffffffffffffff7fffffffffffffff) * dVar31;
    dVar100 = (double)((ulonglong)(auVar47._8_8_ + dVar36 * auVar69._8_8_ + auVar88._0_8_) &
                      __xmm_7fffffffffffffff7fffffffffffffff) * dVar31;
    dVar31 = (double)((ulonglong)(auVar25._0_8_ + dVar36 * dVar35 + auVar88._8_8_) & _UNK_15061cc88)
             * dVar31;
    dVar35 = dStack_198 - dVar100;
    dVar73 = local_190 - dVar31;
    dVar100 = dVar100 + dStack_198;
    dVar31 = dVar31 + local_190;
    dVar7 = dStack_188 - dVar20;
    dVar20 = dVar20 + dStack_188;
  }
  else {
    dVar31 = SUB168(*(undefined1 (*) [16])(param_2 + 8),0);
    dVar35 = SUB168(*(undefined1 (*) [16])(param_2 + 8),8);
    dVar100 = param_2[10];
    dVar48 = param_2[0xb];
    uVar81 = local_178._0_4_;
    auVar38._0_4_ = -(uint)(dVar31 < 0.0) & uVar81;
    uVar83 = local_178._4_4_;
    auVar38._4_4_ = -(uint)(dVar35 < 0.0) & uVar83;
    uVar85 = local_178._8_4_;
    auVar38._8_4_ = -(uint)(dVar100 < 0.0) & uVar85;
    auVar38._12_4_ = -(uint)(dVar48 < 0.0) & uVar72;
    iVar64 = movmskps((int)param_5,auVar38);
    if (iVar64 == 0) {
      dVar8 = param_2[3];
      dVar26 = *param_2;
      dVar49 = param_2[1];
      dVar32 = param_2[1];
      dVar57 = param_2[2];
      dVar75 = dVar36 * dVar57 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar91 * dVar49 +
               dVar26 * dVar20 * ___xmm_bff00000000000003ff0000000000000 + dVar73 * dVar8;
      dVar74 = dVar73 * dVar57 * _UNK_15076b868 +
               dVar20 * dVar32 + dVar26 * dVar91 * _UNK_15076c6f8 + dVar36 * dVar8;
      dVar49 = dVar20 * dVar57 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar36 * dVar26 * ___xmm_bff00000000000003ff0000000000000 + dVar91 * dVar8) -
               dVar73 * dVar49);
      dVar36 = dVar91 * dVar57 * _UNK_15076c6f8 +
               ((dVar73 * dVar26 * _UNK_15076c6f8 + dVar20 * dVar8) - dVar36 * dVar32);
      local_c8 = local_c8 * dVar31;
      dVar7 = dVar7 * dVar35;
      local_b8 = local_b8 * dVar100;
      auVar18._8_8_ = dVar48 * 0.0;
      auVar18._0_8_ = local_b8;
      auVar4._8_4_ = SUB84(dVar7,0);
      auVar4._0_8_ = local_c8;
      auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar22 = blendpd(auVar18,auVar4,1);
      dVar91 = param_2[2] * auVar22._0_8_ - dVar26 * local_b8;
      dVar20 = dVar7 * *param_2 - local_c8 * param_2[1];
      dVar73 = local_b8 * param_2[1] - dVar7 * param_2[2];
      dVar91 = dVar91 + dVar91;
      dVar20 = dVar20 + dVar20;
      dVar73 = dVar73 + dVar73;
      dStack_198 = param_2[4] +
                   (dVar20 * param_2[1] - dVar91 * param_2[2]) + dVar8 * dVar73 + local_c8;
      local_190 = param_2[5] + (dVar73 * dVar57 - dVar26 * dVar20) + dVar8 * dVar91 + dVar7;
      dStack_188 = dVar20 * dVar8 + local_b8 + (dVar91 * *param_2 - dVar73 * param_2[1]) +
                   param_2[6];
      dVar100 = __real_3ff0000000000000 * dVar100;
      dVar48 = dVar48 * 0.0;
    }
    else {
      local_168 = 0x8000000000000000;
      uStack_160 = 0;
      auVar3._8_4_ = SUB84(dVar7,0);
      auVar3._0_8_ = local_c8;
      auVar3._12_4_ = uVar101;
      dVar86 = dVar91 + dVar91;
      dVar7 = dVar73 + dVar73;
      dVar26 = dVar36 + dVar36;
      local_d8 = __real_3ff0000000000000 - (dVar36 * dVar26 + dVar73 * dVar7);
      auVar61._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar91 * dVar86 + dVar36 * dVar26);
      auVar61._8_8_ = _UNK_150689688 - (dVar91 * dVar86 + dVar73 * dVar7);
      auVar79._0_8_ = dVar73 * dVar86 + dVar26 * dVar20;
      auVar79._8_8_ = dVar73 * dVar7 + dVar7 * dVar20;
      dVar32 = dVar26 * dVar73 + dVar86 * dVar20;
      local_f8 = dVar86 * dVar36 + dVar7 * dVar20;
      auVar52._0_8_ = dVar26 * dVar73 - dVar86 * dVar20;
      auVar52._8_8_ = dVar86 * dVar36 - dVar7 * dVar20;
      local_108 = blendpd(auVar61,auVar52,1);
      local_f0 = 0;
      local_e8 = blendpd(auVar52,auVar79,1);
      dVar36 = *param_2;
      dVar91 = param_2[1];
      dVar49 = param_2[2] + param_2[2];
      dVar74 = dVar36 + dVar36;
      dVar84 = dVar91 + dVar91;
      dVar7 = param_2[3];
      dVar48 = param_2[3];
      dVar75 = dVar84 * dVar7;
      dVar7 = dVar49 * dVar7;
      dVar57 = dVar74 * dVar48;
      dVar100 = param_2[10];
      local_d0 = 0;
      dStack_240 = auVar3._8_8_;
      dStack_c0 = dStack_240;
      local_b0 = 0x3ff0000000000000;
      dVar8 = (__real_3ff0000000000000 - (dVar91 * dVar84 + dVar36 * dVar74)) * dVar100;
      auVar66._0_8_ =
           (___xmm_3ff00000000000003ff0000000000000 - (param_2[2] * dVar49 + dVar91 * dVar84)) *
           dVar31;
      auVar66._8_8_ = (_UNK_150689688 - (param_2[2] * dVar49 + dVar36 * dVar74)) * dVar35;
      auVar53._0_8_ = (*param_2 * dVar49 + dVar75) * dVar100;
      auVar53._8_8_ = (*param_2 * dVar74 + dVar74 * dVar48) * 0.0;
      dVar102 = (dVar84 * dVar36 + dVar7) * dVar31;
      dVar104 = (dVar49 * dVar91 + dVar57) * dVar35;
      dVar92 = (*param_2 * dVar49 - dVar75) * param_2[8];
      auVar39._0_8_ = param_2[9] * (dVar84 * dVar36 - dVar7);
      auVar39._8_8_ = dVar100 * (dVar49 * dVar91 - dVar57);
      auVar9 = blendpd(auVar53,auVar39,2);
      auVar22 = blendpd(auVar39,auVar66,2);
      dVar91 = dVar73 * dVar86 - dVar26 * dVar20;
      dVar36 = auVar9._0_8_;
      dVar49 = auVar9._8_8_;
      dVar73 = auVar22._0_8_;
      dVar48 = auVar22._8_8_;
      dStack_188 = param_2[6];
      dVar26 = dStack_188 * 0.0 +
               (double)local_108._8_8_ * dVar104 +
               local_f8 * dVar8 + (double)local_108._0_8_ * dVar92;
      dVar7 = param_2[4];
      dVar20 = param_2[5];
      dVar57 = dVar7 * 0.0 +
               dVar73 * (double)local_108._8_8_ +
               dVar36 * local_f8 + auVar66._0_8_ * (double)local_108._0_8_;
      dVar74 = dVar20 * 0.0 +
               dVar48 * (double)local_108._8_8_ +
               dVar49 * local_f8 + dVar102 * (double)local_108._0_8_;
      dStack_198 = dVar73 * dStack_240 + dVar36 * local_b8 + auVar66._0_8_ * local_c8 + dVar7;
      local_190 = dVar48 * dStack_240 + dVar49 * local_b8 + dVar102 * local_c8 + dVar20;
      dVar75 = dVar32 * dVar73 + dVar36 * dVar91 + auVar66._0_8_ * auVar61._0_8_ + dVar7 * 0.0;
      local_138 = dVar32 * dVar48 + dVar49 * dVar91 + dVar102 * auVar61._0_8_ + dVar20 * 0.0;
      dVar7 = dVar73 * (double)local_e8._8_8_ +
              local_d8 * dVar36 + auVar66._0_8_ * (double)local_e8._0_8_ + dVar7 * 0.0;
      dVar20 = dVar48 * (double)local_e8._8_8_ +
               local_d8 * dVar49 + dVar102 * (double)local_e8._0_8_ + dVar20 * 0.0;
      dVar73 = dVar104 * dVar32 + dVar91 * dVar8 + auVar61._0_8_ * dVar92 + dStack_188 * 0.0;
      dVar49 = (double)local_e8._8_8_ * dVar104 + dVar8 * local_d8 + (double)local_e8._0_8_ * dVar92
               + dStack_188 * 0.0;
      dStack_188 = dStack_240 * dVar104 + dVar8 * local_b8 + dVar92 * local_c8 + dStack_188;
      local_1c0 = _UNK_15061cbc8 * 0.0 +
                  (double)local_108._8_8_ * 0.0 + local_f8 * 0.0 + (double)local_108._0_8_ * 0.0;
      local_1a0 = (double)local_e8._8_8_ * 0.0 + local_d8 * 0.0 + (double)local_e8._0_8_ * 0.0 +
                  _UNK_15061cbc8 * 0.0;
      local_180 = dStack_240 * 0.0 + local_b8 * 0.0 + local_c8 * 0.0 + _UNK_15061cbc8;
      dStack_130 = local_138;
      dVar48 = dVar73 * dVar73 + local_138 * local_138 + dVar75 * dVar75;
      dVar8 = dVar26 * dVar26 + dVar74 * dVar74 + dVar57 * dVar57;
      dVar36 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar48) {
        dVar36 = __real_3ff0000000000000 / SQRT(dVar48);
      }
      dVar100 = dVar100 * __real_3ff0000000000000;
      dVar48 = param_2[0xb] * 0.0;
      dVar86 = dVar20 * dVar20 + dVar7 * dVar7 + dVar49 * dVar49;
      dVar84 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar8) {
        dVar84 = __real_3ff0000000000000 / SQRT(dVar8);
      }
      dVar92 = 0.0;
      dVar8 = __real_3ff0000000000000;
      if (0.0 <= __real_be45798ee2308c3a + dVar86) {
        dVar8 = __real_3ff0000000000000 / SQRT(dVar86);
      }
      auVar10._0_4_ = -(uint)(0.0 <= dVar31);
      auVar10._8_4_ = -(uint)(0.0 <= dVar35);
      auVar10._4_4_ = auVar10._0_4_;
      auVar10._12_4_ = auVar10._8_4_;
      auVar40._8_4_ = 0xffffffff;
      auVar40._0_8_ = 0xffffffffffffffff;
      auVar40._12_4_ = 0xffffffff;
      auVar9 = blendvps(ZEXT816(0),auVar40,auVar10);
      auVar11._4_4_ = -(uint)(0.0 <= dVar100);
      auVar11._0_4_ = -(uint)(0.0 <= dVar100);
      auVar11._8_4_ = -(uint)(0.0 <= dVar48);
      auVar11._12_4_ = -(uint)(0.0 <= dVar48);
      auVar22 = blendvps(ZEXT816(0),auVar40,auVar11);
      auVar22 = ZEXT816(0xbff0000000000000) ^ ZEXT416(auVar22._4_4_ & 0x80000000) << 0x20;
      uVar90 = auVar9._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
               ___xmm_bff0000000000000bff0000000000000;
      uVar97 = auVar9._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
      uVar98 = auVar9._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
      uVar99 = auVar9._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
      auVar54._0_8_ = (double)CONCAT44(uVar97,uVar90);
      auVar54._8_4_ = uVar90;
      auVar54._12_4_ = uVar97;
      local_1f8[0] = auVar54._0_8_ * dVar75 * dVar36;
      local_1f8[1] = auVar54._8_8_ * local_138 * dVar36;
      local_1f8[2] = dVar73 * dVar36 * (double)CONCAT44(uVar97,uVar90);
      auVar12._0_8_ = (double)CONCAT44(uVar99,uVar98);
      auVar12._8_4_ = uVar98;
      auVar12._12_4_ = uVar99;
      local_1c8 = dVar26 * dVar84 * auVar12._0_8_;
      local_1d8._0_8_ = dVar57 * dVar84 * auVar12._0_8_;
      local_1d8._8_8_ = dVar74 * dVar84 * auVar12._8_8_;
      auVar13._0_8_ = auVar22._0_8_;
      auVar13._8_4_ = 0;
      auVar13._12_4_ = auVar22._4_4_;
      local_1b8 = auVar13._0_8_ * dVar7 * dVar8;
      dStack_1b0 = auVar13._8_8_ * dVar20 * dVar8;
      local_1a8 = auVar13._0_8_ * dVar49 * dVar8;
      auVar41._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1f8[1] & _UNK_15061cc88));
      auVar41._0_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_1f8[0] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar41._8_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_1f8[2] & __xmm_7fffffffffffffff7fffffffffffffff));
      auVar41._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
      auVar67._0_4_ = -(uint)(uVar81 == 0);
      auVar67._4_4_ = -(uint)(uVar83 == 0);
      auVar67._8_4_ = -(uint)(uVar85 == 0);
      auVar67._12_4_ = -(uint)(uVar72 == 0);
      iVar64 = movmskps(0,~auVar67 & auVar41);
      local_1f8[3] = dVar32 * 0.0 + dVar91 * 0.0 + auVar61._0_8_ * 0.0 + _UNK_15061cbc8 * 0.0;
      dVar7 = __real_3ff0000000000000;
      if (iVar64 == 0) {
        local_158[0] = 0.0;
        local_158[1] = 0.0;
      }
      else {
        auVar27._4_4_ = -(uint)(_UNK_150b53828 < (double)(local_1d8._8_8_ & _UNK_15061cc88));
        auVar27._0_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)(local_1d8._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar27._8_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_1c8 & __xmm_7fffffffffffffff7fffffffffffffff));
        auVar27._12_4_ =
             -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
        iVar64 = movmskps(iVar64,~auVar67 & auVar27);
        if ((iVar64 == 0) ||
           (auVar94._0_4_ = -(uint)(uVar81 == 0), auVar94._4_4_ = -(uint)(uVar83 == 0),
           auVar94._8_4_ = -(uint)(uVar85 == 0), auVar94._12_4_ = -(uint)(uVar72 == 0),
           auVar28._4_4_ =
                -(uint)(_UNK_150b53828 < (double)((ulonglong)dStack_1b0 & _UNK_15061cc88)),
           auVar28._0_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_1b8 & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar28._8_4_ =
                -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                       (double)((ulonglong)local_1a8 & __xmm_7fffffffffffffff7fffffffffffffff)),
           auVar28._12_4_ =
                -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
           iVar64 = movmskps(iVar64,~auVar94 & auVar28), iVar64 == 0)) {
          local_158[0] = 0.0;
          local_158[1] = 0.0;
          dVar92 = 0.0;
        }
        else {
          dVar7 = local_1f8[0] + (double)local_1d8._8_8_ + local_1a8;
          if (dVar7 <= 0.0) {
            pdVar1 = (double *)
                     ((longlong)local_1f8 +
                     (ulonglong)((uint)(local_1f8[0] < (double)local_1d8._8_8_) * 0x28));
            uVar21 = 2;
            if (local_1a8 < *pdVar1 || local_1a8 == *pdVar1) {
              uVar21 = (ulonglong)(uint)(local_1f8[0] < (double)local_1d8._8_8_);
            }
            iVar64 = *(int *)(&DAT_151c6d1b0 + uVar21 * 4);
            lVar6 = (longlong)iVar64;
            iVar71 = (int)uVar21;
            iVar70 = *(int *)(&DAT_151c6d1b0 + lVar6 * 4);
            dVar7 = __real_3ff0000000000000 /
                    SQRT(((*(double *)((longlong)local_1f8 + (ulonglong)(uint)(iVar71 * 0x28)) -
                          local_1f8[lVar6 * 5]) - local_1f8[(longlong)iVar70 * 5]) +
                         __real_3ff0000000000000);
            dVar20 = dVar7 * __real_3fe0000000000000;
            *(double *)((longlong)local_158 + (ulonglong)(uint)(iVar71 * 8)) =
                 (__real_3ff0000000000000 / dVar7) * __real_3fe0000000000000;
            local_158[lVar6] =
                 (local_1f8[iVar64 + iVar71 * 4] + local_1f8[iVar71 + iVar64 * 4]) * dVar20;
            local_158[iVar70] =
                 (local_1f8[iVar70 + iVar71 * 4] + local_1f8[iVar71 + iVar70 * 4]) * dVar20;
            dVar92 = local_158[2];
            dVar7 = (local_1f8[iVar70 + iVar64 * 4] - local_1f8[iVar64 + iVar70 * 4]) * dVar20;
          }
          else {
            dVar7 = __real_3ff0000000000000 / SQRT(dVar7 + __real_3ff0000000000000);
            dVar20 = dVar7 * __real_3fe0000000000000;
            local_158[0] = (local_1c8 - dStack_1b0) * dVar20;
            local_158[1] = (local_1b8 - local_1f8[2]) * dVar20;
            dVar92 = (local_1f8[1] - (double)local_1d8._0_8_) * dVar20;
            dVar7 = (__real_3ff0000000000000 / dVar7) * __real_3fe0000000000000;
          }
        }
      }
      dVar20 = dVar7 * dVar7 + local_158[1] * local_158[1] +
               dVar92 * dVar92 + local_158[0] * local_158[0];
      uVar21 = ~-(ulonglong)(dVar20 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar20 = __real_3ff0000000000000 / SQRT(dVar20);
      dVar75 = (double)((ulonglong)(local_158[0] * dVar20) & uVar21);
      dVar74 = (double)((ulonglong)(local_158[1] * dVar20) & uVar21);
      dVar49 = (double)(~uVar21 & ___xmm_3ff00000000000000000000000000000 |
                       (ulonglong)(dVar92 * dVar20) & uVar21);
      dVar36 = (double)(~uVar21 & (ulonglong)_UNK_15061cbc8 | (ulonglong)(dVar7 * dVar20) & uVar21);
    }
    dVar100 = __real_3ff0000000000000 * dVar100;
    auVar95._0_8_ = dVar31 * 0.0;
    auVar95._8_8_ = dVar35 * 0.0;
    auVar44._8_8_ = dVar48 * 0.0;
    auVar44._0_8_ = dVar100;
    auVar22 = blendpd(auVar44,auVar95,1);
    dVar7 = auVar22._0_8_ * dVar49 - dVar75 * dVar100;
    dVar20 = auVar22._8_8_ * dVar36 - dVar36 * dVar48 * 0.0;
    dVar31 = auVar95._8_8_ * dVar75 - dVar74 * auVar95._0_8_;
    dVar35 = dVar100 * dVar74 - dVar49 * auVar95._8_8_;
    dVar7 = dVar7 + dVar7;
    dVar20 = dVar20 + dVar20;
    auVar68._0_8_ = dVar31 + dVar31;
    auVar68._8_8_ = dVar35 + dVar35;
    auVar96._8_8_ = dVar20;
    auVar96._0_8_ = dVar7;
    auVar9 = blendpd(auVar96,auVar68,1);
    auVar45._0_8_ = dVar7 * dVar75 - auVar68._8_8_ * dVar74;
    auVar45._8_8_ = auVar68._0_8_ * dVar74 - dVar7 * dVar49;
    auVar24._0_8_ = auVar68._8_8_ * dVar49 - auVar9._0_8_ * dVar75;
    auVar24._8_8_ = dVar20 * dVar36 - auVar9._8_8_ * dVar36;
    auVar22 = blendpd(auVar24,auVar45,1);
    dVar31 = (double)(__real_3f000000 * param_3 * param_7);
    dVar20 = (double)((ulonglong)(auVar22._0_8_ + dVar36 * auVar9._0_8_ + dVar100) &
                     __xmm_7fffffffffffffff7fffffffffffffff) * dVar31;
    dVar100 = (double)((ulonglong)(auVar45._8_8_ + dVar36 * auVar68._8_8_ + auVar95._0_8_) &
                      __xmm_7fffffffffffffff7fffffffffffffff) * dVar31;
    dVar31 = (double)((ulonglong)(auVar24._0_8_ + dVar36 * dVar7 + auVar95._8_8_) & _UNK_15061cc88)
             * dVar31;
    dVar35 = dStack_198 - dVar100;
    dVar73 = local_190 - dVar31;
    dVar100 = dVar100 + dStack_198;
    dVar31 = dVar31 + local_190;
    dVar7 = dStack_188 - dVar20;
    dVar20 = dVar20 + dStack_188;
  }
  dVar48 = (double)(param_6 * param_3);
  *param_1 = dVar35 - dVar48;
  param_1[1] = dVar73 - dVar48;
  param_1[2] = dVar7 - dVar48;
  param_1[3] = dVar100 + dVar48;
  param_1[4] = dVar31 + dVar48;
  param_1[5] = dVar20 + dVar48;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

// BoxCalcAABB_sse4 @ 140c887d0

/* WARNING: Removing unreachable block (ram,0x000140c88b2d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcAABB_sse4(double *param_1,double *param_2,float param_3,undefined1 (*param_4) [16],
                     double *param_5,uint param_6,uint param_7,uint param_8)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar15;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar39;
  undefined1 auVar35 [16];
  double dVar40;
  undefined1 auVar36 [16];
  double dVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar42;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar43;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar49;
  uint uVar50;
  uint uVar54;
  int iVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  uint uVar56;
  uint uVar57;
  undefined1 auVar53 [16];
  int iVar58;
  double dVar59;
  double dVar60;
  int iVar63;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  double dVar68;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  double local_238;
  double dStack_230;
  double local_1d8 [11];
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_b0;
  
  auVar18 = *param_4;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = *(double *)param_4[1];
  auVar45 = divpd(auVar44,___xmm_40768000000000004076800000000000);
  auVar34 = divpd(auVar18,___xmm_40768000000000004076800000000000);
  iVar58 = -(uint)(___xmm_43300000000000004330000000000000 <=
                  (double)(auVar45._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar63 = -(uint)(_UNK_151c6d0b8 <= (double)(auVar45._8_8_ & _UNK_15061cc88));
  iVar49 = -(uint)(___xmm_43300000000000004330000000000000 <=
                  (double)(auVar34._0_8_ & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar55 = -(uint)(_UNK_151c6d0b8 <= (double)(auVar34._8_8_ & _UNK_15061cc88));
  auVar51._4_4_ = iVar49;
  auVar51._0_4_ = iVar49;
  auVar51._8_4_ = iVar55;
  auVar51._12_4_ = iVar55;
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  auVar51 = blendvps(ZEXT816(0),auVar7,auVar51);
  auVar64._4_4_ = iVar58;
  auVar64._0_4_ = iVar58;
  auVar64._8_4_ = iVar63;
  auVar64._12_4_ = iVar63;
  auVar61._8_4_ = 0xffffffff;
  auVar61._0_8_ = 0xffffffffffffffff;
  auVar61._12_4_ = 0xffffffff;
  auVar61 = blendvps(ZEXT816(0),auVar61,auVar64);
  auVar7 = roundpd(auVar64,auVar34,0xb);
  auVar64 = roundpd(unaff_XMM9,auVar45,0xb);
  auVar62._0_8_ =
       (double)(~auVar61._0_8_ & auVar64._0_8_ | auVar45._0_8_ & auVar61._0_8_) *
       (double)__xmm_40768000000000004076800000000000;
  auVar62._8_8_ =
       (double)(~auVar61._8_8_ & auVar64._8_8_ | auVar45._8_8_ & auVar61._8_8_) *
       __xmm_40768000000000004076800000000000._8_8_;
  auVar17._0_8_ = *(double *)param_4[1] - auVar62._0_8_;
  auVar17._8_8_ = 0.0 - auVar62._8_8_;
  auVar23._0_8_ =
       auVar18._0_8_ -
       (double)(~auVar51._0_8_ & auVar7._0_8_ | auVar34._0_8_ & auVar51._0_8_) *
       (double)__xmm_40768000000000004076800000000000;
  auVar23._8_8_ =
       auVar18._8_8_ -
       (double)(~auVar51._8_8_ & auVar7._8_8_ | auVar34._8_8_ & auVar51._8_8_) *
       __xmm_40768000000000004076800000000000._8_8_;
  auVar7 = minpd(auVar23,___xmm_40768000000000004076800000000000);
  auVar18 = minpd(auVar17,___xmm_40768000000000004076800000000000);
  auVar7 = maxpd(___xmm_c076800000000000c076800000000000,auVar7);
  auVar18 = maxpd(___xmm_c076800000000000c076800000000000,auVar18);
  dVar6 = auVar18._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar15 = auVar18._8_8_ * _UNK_151c6d0d8;
  dVar30 = auVar7._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar39 = auVar7._8_8_ * _UNK_151c6d0d8;
  auVar24._0_8_ = dVar30 * ___xmm_3fc45f306dc9c8833fc45f306dc9c883;
  auVar24._8_8_ = dVar39 * _UNK_151c6d0e8;
  auVar19._0_8_ = ___xmm_3fc45f306dc9c8833fc45f306dc9c883 * dVar6;
  auVar19._8_8_ = _UNK_151c6d0e8 * dVar15;
  auVar7 = roundpd(auVar62,auVar19,0xb);
  auVar18 = roundpd(___xmm_40768000000000004076800000000000,auVar24,0xb);
  dVar6 = auVar7._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar6;
  dVar30 = auVar18._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar30;
  dVar39 = auVar18._8_8_ * _UNK_151c6d0f8 + dVar39;
  uVar22 = CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                    (uint)__xmm_80000000000000008000000000000000);
  iVar58 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 <
                  (double)((ulonglong)dVar6 & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar63 = -(uint)(_UNK_151c6d118 <
                  (double)((ulonglong)(auVar7._8_8_ * _UNK_151c6d0f8 + dVar15) & _UNK_15061cc88));
  iVar49 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 <
                  (double)((ulonglong)dVar30 & __xmm_7fffffffffffffff7fffffffffffffff));
  iVar55 = -(uint)(_UNK_151c6d118 < (double)((ulonglong)dVar39 & _UNK_15061cc88));
  auVar45._4_4_ = iVar49;
  auVar45._0_4_ = iVar49;
  auVar45._8_4_ = iVar55;
  auVar45._12_4_ = iVar55;
  auVar18._8_4_ = 0xffffffff;
  auVar18._0_8_ = 0xffffffffffffffff;
  auVar18._12_4_ = 0xffffffff;
  auVar7 = blendvps(ZEXT816(0),auVar18,auVar45);
  auVar8._4_4_ = iVar58;
  auVar8._0_4_ = iVar58;
  auVar8._8_4_ = iVar63;
  auVar8._12_4_ = iVar63;
  auVar34._8_4_ = 0xffffffff;
  auVar34._0_8_ = 0xffffffffffffffff;
  auVar34._12_4_ = 0xffffffff;
  auVar18 = blendvps(ZEXT816(0),auVar34,auVar8);
  dVar16 = (double)((ulonglong)
                    ((double)((ulonglong)dVar6 & uVar22 | ___xmm_400921fb54442d18400921fb54442d18) -
                    dVar6) & auVar18._0_8_ |
                   CONCAT44(~auVar18._4_4_ & (uint)((ulonglong)dVar6 >> 0x20),
                            ~auVar18._0_4_ & SUB84(dVar6,0)));
  auVar9._0_4_ = ~auVar7._0_4_ & SUB84(dVar30,0);
  auVar9._4_4_ = ~auVar7._4_4_ & (uint)((ulonglong)dVar30 >> 0x20);
  auVar9._8_4_ = ~auVar7._8_4_ & SUB84(dVar39,0);
  auVar9._12_4_ = ~auVar7._12_4_ & (uint)((ulonglong)dVar39 >> 0x20);
  auVar35._0_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar30 & uVar22 | ___xmm_400921fb54442d18400921fb54442d18) - dVar30) &
       auVar7._0_8_;
  auVar35._8_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar39 & CONCAT44(_UNK_15066df7c,_UNK_15066df78) | _UNK_151c6d108) -
       dVar39) & auVar7._8_8_;
  dVar39 = SUB168(auVar35 | auVar9,0);
  dVar28 = SUB168(auVar35 | auVar9,8);
  dVar6 = dVar39 * dVar39;
  dVar15 = dVar28 * dVar28;
  dVar39 = (((((___xmm_be59a6cb605c806fbe59a6cb605c806f * dVar6 +
               ___xmm_3ec71711c625173e3ec71711c625173e) * dVar6 +
              ___xmm_bf2a017e195d6197bf2a017e195d6197) * dVar6 +
             ___xmm_3f811110c0e4d9803f811110c0e4d980) * dVar6 +
            ___xmm_bfc555555c7dda4bbfc555555c7dda4b) * dVar6 +
           ___xmm_3ff00000000000003ff0000000000000) * dVar39;
  dVar28 = (((((_UNK_151c6d128 * dVar15 + _UNK_151c6d138) * dVar15 + _UNK_151c6d148) * dVar15 +
             _UNK_151c6d158) * dVar15 + _UNK_151c6d168) * dVar15 + _UNK_150689688) * dVar28;
  dVar6 = (((((___xmm_be917ba225041884be917ba225041884 * dVar6 +
              ___xmm_3ef9f698429782503ef9f69842978250) * dVar6 +
             ___xmm_bf56c1353b8c783dbf56c1353b8c783d) * dVar6 +
            ___xmm_3fa555545f16aaab3fa555545f16aaab) * dVar6 +
           ___xmm_bfe0000000000000bfe0000000000000) * dVar6 +
          ___xmm_3ff00000000000003ff0000000000000) *
          (double)(auVar7._0_8_ & uVar22 | (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  dVar30 = (((((_UNK_151c6d178 * dVar15 + _UNK_151c6d188) * dVar15 + _UNK_151c6d198) * dVar15 +
             _UNK_151c6d1a8) * dVar15 + _UNK_150689738) * dVar15 + _UNK_150689688) *
           (double)(auVar7._8_8_ & CONCAT44(_UNK_15066df7c,_UNK_15066df78) |
                   (ulonglong)_UNK_150689688);
  dVar15 = dVar16 * dVar16;
  dVar31 = (((((__real_be917ba225041884 * dVar15 + __real_3ef9f69842978250) * dVar15 +
              __real_bf56c1353b8c783d) * dVar15 + __real_3fa555545f16aaab) * dVar15 +
            __real_bfe0000000000000) * dVar15 + __real_3ff0000000000000) *
           (double)(auVar18._0_8_ & 0x8000000000000000 |
                   (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  dVar16 = (((((__real_be59a6cb605c806f * dVar15 + __real_3ec71711c625173e) * dVar15 +
              __real_bf2a017e195d6197) * dVar15 + __real_3f811110c0e4d980) * dVar15 +
            __real_bfc555555c7dda4b) * dVar15 + __real_3ff0000000000000) * dVar16;
  dVar32 = dVar39 * dVar28 * dVar31 - dVar30 * dVar6 * dVar16;
  dVar40 = -(dVar39 * dVar30 * dVar31) - dVar28 * dVar6 * dVar16;
  dVar15 = (double)((ulonglong)(dVar39 * dVar30 * dVar16) ^ ___xmm_00000000000000008000000000000000)
           + dVar28 * dVar6 * dVar31;
  dVar30 = (double)((ulonglong)(dVar39 * dVar28 * dVar16) ^ _UNK_150689528) +
           dVar30 * dVar6 * dVar31;
  local_b8 = (double)param_3;
  local_c8 = local_b8 * *param_5;
  dStack_c0 = local_b8 * param_5[1];
  local_b8 = local_b8 * param_5[2];
  dVar6 = param_2[8];
  dVar16 = param_2[9];
  auVar25._4_4_ = -(uint)(dVar16 < 0.0);
  auVar25._0_4_ = -(uint)(dVar6 < 0.0);
  auVar25._8_4_ = -(uint)(param_2[10] < 0.0);
  auVar25._12_4_ = -(uint)(param_2[0xb] < 0.0);
  iVar49 = movmskps((int)param_5,auVar25);
  local_238 = param_2[10];
  dStack_230 = 0.0;
  if (iVar49 == 0) {
    dVar39 = param_2[3];
    dVar28 = *param_2;
    dVar60 = param_2[1];
    dVar31 = param_2[1];
    dVar43 = param_2[2];
    dVar27 = dVar40 * dVar43 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar15 * dVar60 +
             dVar28 * dVar30 * ___xmm_bff00000000000003ff0000000000000 + dVar32 * dVar39;
    dVar29 = dVar32 * dVar43 * _UNK_15076b868 +
             dVar30 * dVar31 + dVar28 * dVar15 * _UNK_15076c6f8 + dVar40 * dVar39;
    dVar60 = dVar30 * dVar43 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar40 * dVar28 * ___xmm_bff00000000000003ff0000000000000 + dVar15 * dVar39) -
             dVar32 * dVar60);
    dVar15 = dVar15 * dVar43 * _UNK_15076c6f8 +
             ((dVar32 * dVar28 * _UNK_15076c6f8 + dVar30 * dVar39) - dVar40 * dVar31);
    local_c8 = local_c8 * dVar6;
    dStack_c0 = dStack_c0 * dVar16;
    local_b8 = local_b8 * param_2[10];
    auVar14._8_8_ = param_2[0xb] * 0.0;
    auVar14._0_8_ = local_b8;
    auVar3._8_4_ = SUB84(dStack_c0,0);
    auVar3._0_8_ = local_c8;
    auVar3._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
    auVar18 = blendpd(auVar14,auVar3,1);
    dVar30 = param_2[2] * auVar18._0_8_ - dVar28 * local_b8;
    dVar31 = dStack_c0 * *param_2 - local_c8 * param_2[1];
    dVar32 = local_b8 * param_2[1] - dStack_c0 * param_2[2];
    dVar30 = dVar30 + dVar30;
    dVar31 = dVar31 + dVar31;
    auVar65._8_8_ = dVar32 + dVar32;
    dStack_178 = param_2[4] +
                 (dVar31 * param_2[1] - dVar30 * param_2[2]) + dVar39 * auVar65._8_8_ + local_c8;
    local_170 = param_2[5] +
                (auVar65._8_8_ * dVar43 - dVar28 * dVar31) + dVar39 * dVar30 + dStack_c0;
    auVar65._0_8_ =
         dVar31 * dVar39 + local_b8 + (dVar30 * *param_2 - auVar65._8_8_ * param_2[1]) + param_2[6];
  }
  else {
    local_138 = 0x8000000000000000;
    uStack_130 = 0;
    dVar28 = dVar15 + dVar15;
    dVar39 = dVar32 + dVar32;
    dVar31 = dVar40 + dVar40;
    local_d8 = __real_3ff0000000000000 - (dVar40 * dVar31 + dVar32 * dVar39);
    auVar26._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar15 * dVar28 + dVar40 * dVar31);
    auVar26._8_8_ = _UNK_150689688 - (dVar15 * dVar28 + dVar32 * dVar39);
    auVar36._0_8_ = dVar32 * dVar28 + dVar31 * dVar30;
    auVar36._8_8_ = dVar32 * dVar39 + dVar39 * dVar30;
    dVar59 = dVar31 * dVar32 + dVar28 * dVar30;
    local_f8 = dVar28 * dVar40 + dVar39 * dVar30;
    auVar20._0_8_ = dVar31 * dVar32 - dVar28 * dVar30;
    auVar20._8_8_ = dVar28 * dVar40 - dVar39 * dVar30;
    local_108 = blendpd(auVar26,auVar20,1);
    local_f0 = 0;
    local_e8 = blendpd(auVar20,auVar36,1);
    dVar27 = *param_2;
    dVar29 = param_2[1];
    dVar33 = param_2[2] + param_2[2];
    dVar40 = dVar27 + dVar27;
    dVar68 = dVar29 + dVar29;
    dVar39 = param_2[3];
    dVar15 = param_2[3];
    dVar66 = dVar68 * dVar39;
    dVar39 = dVar33 * dVar39;
    dVar41 = dVar40 * dVar15;
    local_d0 = 0;
    local_b0 = 0x3ff0000000000000;
    dVar42 = (__real_3ff0000000000000 - (dVar29 * dVar68 + dVar27 * dVar40)) * local_238;
    auVar52._0_8_ =
         (___xmm_3ff00000000000003ff0000000000000 - (param_2[2] * dVar33 + dVar29 * dVar68)) * dVar6
    ;
    auVar52._8_8_ = (_UNK_150689688 - (param_2[2] * dVar33 + dVar27 * dVar40)) * dVar16;
    auVar37._0_8_ = (*param_2 * dVar33 + dVar66) * local_238;
    auVar37._8_8_ = (*param_2 * dVar40 + dVar40 * dVar15) * 0.0;
    dVar60 = (dVar68 * dVar27 + dVar39) * dVar6;
    dVar43 = (dVar33 * dVar29 + dVar41) * dVar16;
    dVar40 = (*param_2 * dVar33 - dVar66) * param_2[8];
    auVar21._0_8_ = param_2[9] * (dVar68 * dVar27 - dVar39);
    auVar21._8_8_ = local_238 * (dVar33 * dVar29 - dVar41);
    auVar7 = blendpd(auVar37,auVar21,2);
    auVar18 = blendpd(auVar21,auVar52,2);
    dVar15 = dVar32 * dVar28 - dVar31 * dVar30;
    dVar33 = auVar7._0_8_;
    dVar41 = auVar7._8_8_;
    dVar31 = auVar18._0_8_;
    dVar32 = auVar18._8_8_;
    dStack_168 = param_2[6];
    dVar30 = dStack_168 * 0.0 +
             (double)local_108._8_8_ * dVar43 + local_f8 * dVar42 + (double)local_108._0_8_ * dVar40
    ;
    dVar39 = param_2[4];
    dVar28 = param_2[5];
    dVar66 = dVar39 * 0.0 +
             dVar31 * (double)local_108._8_8_ +
             dVar33 * local_f8 + auVar52._0_8_ * (double)local_108._0_8_;
    dVar68 = dVar28 * 0.0 +
             dVar32 * (double)local_108._8_8_ + dVar41 * local_f8 + dVar60 * (double)local_108._0_8_
    ;
    dStack_178 = dVar31 * dStack_c0 + dVar33 * local_b8 + auVar52._0_8_ * local_c8 + dVar39;
    local_170 = dVar32 * dStack_c0 + dVar41 * local_b8 + dVar60 * local_c8 + dVar28;
    dVar27 = dVar59 * dVar31 + dVar33 * dVar15 + auVar52._0_8_ * auVar26._0_8_ + dVar39 * 0.0;
    dVar29 = dVar59 * dVar32 + dVar41 * dVar15 + dVar60 * auVar26._0_8_ + dVar28 * 0.0;
    dVar39 = dVar31 * (double)local_e8._8_8_ +
             local_d8 * dVar33 + auVar52._0_8_ * (double)local_e8._0_8_ + dVar39 * 0.0;
    dVar28 = dVar32 * (double)local_e8._8_8_ + local_d8 * dVar41 + dVar60 * (double)local_e8._0_8_ +
             dVar28 * 0.0;
    dVar32 = dVar43 * dVar59 + dVar15 * dVar42 + auVar26._0_8_ * dVar40 + dStack_168 * 0.0;
    dVar60 = (double)local_e8._8_8_ * dVar43 + dVar42 * local_d8 + (double)local_e8._0_8_ * dVar40 +
             dStack_168 * 0.0;
    dStack_168 = dStack_c0 * dVar43 + dVar42 * local_b8 + dVar40 * local_c8 + dStack_168;
    local_1d8[3] = DAT_150aa8f68 * dVar59 + dVar15 * 0.0 + auVar26._0_8_ * 0.0 +
                   _UNK_15061cbc8 * 0.0;
    local_1d8[7] = _UNK_15061cbc8 * 0.0 +
                   (double)local_108._8_8_ * DAT_150aa8f68 +
                   local_f8 * 0.0 + (double)local_108._0_8_ * 0.0;
    local_180 = (double)local_e8._8_8_ * DAT_150aa8f68 +
                local_d8 * 0.0 + (double)local_e8._0_8_ * 0.0 + _UNK_15061cbc8 * 0.0;
    local_160 = dStack_c0 * DAT_150aa8f68 + local_b8 * 0.0 + local_c8 * 0.0 + _UNK_15061cbc8;
    dVar40 = dVar32 * dVar32 + dVar29 * dVar29 + dVar27 * dVar27;
    dVar31 = dVar30 * dVar30 + dVar68 * dVar68 + dVar66 * dVar66;
    dVar15 = __real_3ff0000000000000;
    if (0.0 <= __real_be45798ee2308c3a + dVar40) {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar40);
    }
    dVar43 = dVar28 * dVar28 + dVar39 * dVar39 + dVar60 * dVar60;
    dVar40 = __real_3ff0000000000000;
    if (0.0 <= __real_be45798ee2308c3a + dVar31) {
      dVar40 = __real_3ff0000000000000 / SQRT(dVar31);
    }
    local_238 = local_238 * __real_3ff0000000000000;
    dStack_230 = param_2[0xb] * 0.0;
    dVar31 = __real_3ff0000000000000;
    if (0.0 <= __real_be45798ee2308c3a + dVar43) {
      dVar31 = __real_3ff0000000000000 / SQRT(dVar43);
    }
    auVar10._0_4_ = -(uint)(0.0 <= dVar6);
    auVar10._8_4_ = -(uint)(0.0 <= dVar16);
    auVar10._4_4_ = auVar10._0_4_;
    auVar10._12_4_ = auVar10._8_4_;
    auVar46._8_4_ = 0xffffffff;
    auVar46._0_8_ = 0xffffffffffffffff;
    auVar46._12_4_ = 0xffffffff;
    auVar7 = blendvps(ZEXT816(0),auVar46,auVar10);
    auVar11._4_4_ = -(uint)(0.0 <= local_238);
    auVar11._0_4_ = -(uint)(0.0 <= local_238);
    auVar11._8_4_ = -(uint)(0.0 <= dStack_230);
    auVar11._12_4_ = -(uint)(0.0 <= dStack_230);
    auVar18 = blendvps(ZEXT816(0),auVar46,auVar11);
    uVar50 = auVar7._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
             ___xmm_bff0000000000000bff0000000000000;
    uVar54 = auVar7._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
    uVar56 = auVar7._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
    uVar57 = auVar7._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
    auVar18 = ZEXT816(0xbff0000000000000) ^ ZEXT416(auVar18._4_4_ & 0x80000000) << 0x20;
    auVar38._0_8_ = (double)CONCAT44(uVar54,uVar50);
    auVar38._8_4_ = uVar50;
    auVar38._12_4_ = uVar54;
    local_1d8[0] = auVar38._0_8_ * dVar27 * dVar15;
    local_1d8[1] = auVar38._8_8_ * dVar29 * dVar15;
    local_1d8[2] = dVar32 * dVar15 * (double)CONCAT44(uVar54,uVar50);
    auVar12._0_8_ = (double)CONCAT44(uVar57,uVar56);
    auVar12._8_4_ = uVar56;
    auVar12._12_4_ = uVar57;
    local_1d8[6] = dVar30 * dVar40 * auVar12._0_8_;
    local_1d8[4] = dVar66 * dVar40 * auVar12._0_8_;
    local_1d8[5] = dVar68 * dVar40 * auVar12._8_8_;
    auVar13._0_8_ = auVar18._0_8_;
    auVar13._8_4_ = 0;
    auVar13._12_4_ = auVar18._4_4_;
    local_1d8[8] = auVar13._0_8_ * dVar39 * dVar31;
    local_1d8[9] = auVar13._8_8_ * dVar28 * dVar31;
    local_1d8[10] = auVar13._0_8_ * dVar60 * dVar31;
    auVar53._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1d8[1] & _UNK_15061cc88));
    auVar53._0_4_ =
         -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                (double)((ulonglong)local_1d8[0] & __xmm_7fffffffffffffff7fffffffffffffff));
    auVar53._8_4_ =
         -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                (double)((ulonglong)local_1d8[2] & __xmm_7fffffffffffffff7fffffffffffffff));
    auVar53._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88));
    iVar49 = movmskps(0,auVar53);
    if (((iVar49 == 0) ||
        (auVar47._4_4_ =
              -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1d8[5] & _UNK_15061cc88)),
        auVar47._0_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_1d8[4] & __xmm_7fffffffffffffff7fffffffffffffff)),
        auVar47._8_4_ =
             -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                    (double)((ulonglong)local_1d8[6] & __xmm_7fffffffffffffff7fffffffffffffff)),
        auVar47._12_4_ =
             -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
        iVar49 = movmskps(iVar49,auVar47), iVar49 == 0)) ||
       (auVar48._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1d8[9] & _UNK_15061cc88))
       , auVar48._0_4_ =
              -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                     (double)((ulonglong)local_1d8[8] & __xmm_7fffffffffffffff7fffffffffffffff)),
       auVar48._8_4_ =
            -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                   (double)((ulonglong)local_1d8[10] & __xmm_7fffffffffffffff7fffffffffffffff)),
       auVar48._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & _UNK_15061cc88))
       , iVar49 = movmskps(iVar49,auVar48), iVar49 == 0)) {
      local_158[0] = 0.0;
      local_158[2] = 0.0;
      local_158[1] = 0.0;
      dVar15 = __real_3ff0000000000000;
    }
    else {
      dVar15 = local_1d8[0] + local_1d8[5] + local_1d8[10];
      if (dVar15 <= 0.0) {
        pdVar1 = (double *)
                 ((longlong)local_1d8 + (ulonglong)((uint)(local_1d8[0] < local_1d8[5]) * 0x28));
        uVar22 = 2;
        if (local_1d8[10] < *pdVar1 || local_1d8[10] == *pdVar1) {
          uVar22 = (ulonglong)(uint)(local_1d8[0] < local_1d8[5]);
        }
        iVar49 = *(int *)(&DAT_151c6d1b0 + uVar22 * 4);
        lVar5 = (longlong)iVar49;
        iVar58 = (int)uVar22;
        iVar55 = *(int *)(&DAT_151c6d1b0 + lVar5 * 4);
        dVar30 = __real_3ff0000000000000 /
                 SQRT(((*(double *)((longlong)local_1d8 + (ulonglong)(uint)(iVar58 * 0x28)) -
                       local_1d8[lVar5 * 5]) - local_1d8[(longlong)iVar55 * 5]) +
                      __real_3ff0000000000000);
        dVar15 = dVar30 * __real_3fe0000000000000;
        *(double *)((longlong)local_158 + (ulonglong)(uint)(iVar58 * 8)) =
             (__real_3ff0000000000000 / dVar30) * __real_3fe0000000000000;
        local_158[lVar5] =
             (local_1d8[iVar49 + iVar58 * 4] + local_1d8[iVar58 + iVar49 * 4]) * dVar15;
        local_158[iVar55] =
             (local_1d8[iVar55 + iVar58 * 4] + local_1d8[iVar58 + iVar55 * 4]) * dVar15;
        dVar15 = (local_1d8[iVar55 + iVar49 * 4] - local_1d8[iVar49 + iVar55 * 4]) * dVar15;
      }
      else {
        dVar15 = __real_3ff0000000000000 / SQRT(dVar15 + __real_3ff0000000000000);
        dVar30 = dVar15 * __real_3fe0000000000000;
        local_158[0] = (local_1d8[6] - local_1d8[9]) * dVar30;
        local_158[1] = (local_1d8[8] - local_1d8[2]) * dVar30;
        local_158[2] = (local_1d8[1] - local_1d8[4]) * dVar30;
        dVar15 = (__real_3ff0000000000000 / dVar15) * __real_3fe0000000000000;
      }
    }
    dVar30 = dVar15 * dVar15 + local_158[1] * local_158[1] +
             local_158[2] * local_158[2] + local_158[0] * local_158[0];
    uVar22 = ~-(ulonglong)(dVar30 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar30 = __real_3ff0000000000000 / SQRT(dVar30);
    dVar27 = (double)((ulonglong)(local_158[0] * dVar30) & uVar22);
    dVar29 = (double)((ulonglong)(local_158[1] * dVar30) & uVar22);
    dVar60 = (double)(~uVar22 & ___xmm_3ff00000000000000000000000000000 |
                     (ulonglong)(local_158[2] * dVar30) & uVar22);
    dVar15 = (double)(~uVar22 & (ulonglong)_UNK_15061cbc8 | (ulonglong)(dVar15 * dVar30) & uVar22);
    auVar65._8_8_ = 0.0;
    auVar65._0_8_ = dStack_168;
  }
  param_3 = param_3 * __real_3f000000;
  auVar18 = insertps(ZEXT416(param_6),ZEXT416(param_7),0x1c);
  auVar18 = insertps(auVar18,ZEXT416(param_8),0x28);
  dVar41 = dVar60 + dVar60;
  dVar30 = dVar27 + dVar27;
  dVar42 = dVar29 + dVar29;
  dVar28 = (double)(param_3 * auVar18._0_4_);
  dVar40 = (double)(param_3 * auVar18._4_4_);
  dVar43 = (double)(param_3 * auVar18._8_4_);
  dVar33 = (__real_3ff0000000000000 - (dVar29 * dVar42 + dVar27 * dVar30)) * local_238;
  auVar69._0_8_ =
       (___xmm_3ff00000000000003ff0000000000000 - (dVar60 * dVar41 + dVar29 * dVar42)) * dVar6;
  auVar69._8_8_ = (_UNK_150689688 - (dVar60 * dVar41 + dVar27 * dVar30)) * dVar16;
  dVar39 = (dVar42 * dVar27 + dVar41 * dVar15) * dVar6;
  dVar31 = (dVar41 * dVar29 + dVar30 * dVar15) * dVar16;
  dStack_230 = (dVar27 * dVar30 + dVar30 * dVar15) * dStack_230;
  auVar67._0_8_ = dVar16 * (dVar42 * dVar27 - dVar41 * dVar15);
  auVar67._8_8_ = local_238 * (dVar41 * dVar29 - dVar30 * dVar15);
  dVar6 = (dVar27 * dVar41 - dVar42 * dVar15) * dVar6;
  dVar30 = (dVar28 - dVar28) * ___xmm_3fe00000000000003fe0000000000000;
  dVar16 = (dVar40 - dVar40) * _UNK_150689678;
  dVar32 = (dVar28 + dVar28) * ___xmm_3fe00000000000003fe0000000000000;
  dVar40 = (dVar40 + dVar40) * _UNK_150689678;
  auVar61 = blendpd(auVar69,auVar67,1);
  dVar28 = (dVar43 - dVar43) * __real_3fe0000000000000;
  auVar2._8_4_ = SUB84(dStack_230,0);
  auVar2._0_8_ = (dVar27 * dVar41 + dVar42 * dVar15) * local_238;
  auVar2._12_4_ = (int)((ulonglong)dStack_230 >> 0x20);
  auVar7 = blendpd(auVar67,auVar2,1);
  dStack_178 = dVar28 * auVar7._0_8_ + dVar16 * auVar61._0_8_ + dVar30 * auVar69._0_8_ + dStack_178;
  local_170 = dVar28 * auVar7._8_8_ + dVar16 * auVar61._8_8_ + dVar30 * dVar39 + local_170;
  auVar4._8_8_ = _UNK_15061cbc8;
  auVar4._0_8_ = ___xmm_3ff00000000000000000000000000000;
  auVar18 = blendpd(auVar65,auVar4,2);
  dVar30 = auVar18._0_8_ + dVar28 * dVar33 + dVar16 * dVar31 + dVar30 * dVar6;
  dVar15 = (dVar43 + dVar43) * __real_3fe0000000000000;
  dVar6 = (double)((ulonglong)(dVar15 * dVar33) & __xmm_7fffffffffffffff7fffffffffffffff) +
          (double)((ulonglong)(dVar40 * dVar31) & __xmm_7fffffffffffffff7fffffffffffffff) +
          (double)((ulonglong)(dVar32 * dVar6) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar16 = (double)((ulonglong)(auVar7._0_8_ * dVar15) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(auVar61._0_8_ * dVar40) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(auVar69._0_8_ * dVar32) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar15 = (double)((ulonglong)(auVar7._8_8_ * dVar15) & _UNK_15061cc88) +
           (double)((ulonglong)(auVar61._8_8_ * dVar40) & _UNK_15061cc88) +
           (double)((ulonglong)(dVar39 * dVar32) & _UNK_15061cc88);
  *param_1 = dStack_178 - dVar16;
  param_1[1] = local_170 - dVar15;
  param_1[2] = dVar30 - dVar6;
  param_1[3] = dVar16 + dStack_178;
  param_1[4] = dVar15 + local_170;
  param_1[5] = dVar6 + dVar30;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

// SPhylCalcAABB_sse4 @ 140c89a40

/* WARNING: Removing unreachable block (ram,0x000140c89db2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SPhylCalcAABB_sse4(double *param_1,double *param_2,float param_3,undefined1 (*param_4) [16],
                       double *param_5,float param_6,float param_7)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar15;
  undefined1 auVar16 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar17 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar33;
  undefined1 auVar28 [16];
  double dVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar48;
  double dVar49;
  double dVar50;
  int iVar52;
  undefined1 auVar51 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar61;
  double dVar62;
  int iVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  uint uVar68;
  uint uVar70;
  uint uVar71;
  undefined1 auVar69 [16];
  double dVar72;
  uint uVar73;
  double dVar74;
  double local_1f8 [11];
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined1 local_178 [16];
  double local_168 [4];
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_b0;
  
  auVar16 = *param_4;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *(double *)param_4[1];
  auVar44 = divpd(auVar43,___xmm_40768000000000004076800000000000);
  auVar37 = divpd(auVar16,___xmm_40768000000000004076800000000000);
  uVar15 = CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                    (undefined4)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar4 = CONCAT44(_UNK_15061cc8c,_UNK_15061cc88);
  auVar63._0_8_ = (double)(auVar44._0_8_ & uVar15);
  auVar63._8_8_ = (double)(auVar44._8_8_ & uVar4);
  iVar48 = -(uint)(___xmm_43300000000000004330000000000000 <= (double)(auVar37._0_8_ & uVar15));
  iVar52 = -(uint)(_UNK_151c6d0b8 <= (double)(auVar37._8_8_ & uVar4));
  auVar8._4_4_ = iVar48;
  auVar8._0_4_ = iVar48;
  auVar8._8_4_ = iVar52;
  auVar8._12_4_ = iVar52;
  auVar69._8_4_ = 0xffffffff;
  auVar69._0_8_ = 0xffffffffffffffff;
  auVar69._12_4_ = 0xffffffff;
  auVar51 = blendvps(ZEXT816(0),auVar69,auVar8);
  auVar64._4_4_ = -(uint)(___xmm_43300000000000004330000000000000 <= auVar63._0_8_);
  auVar64._0_4_ = -(uint)(___xmm_43300000000000004330000000000000 <= auVar63._0_8_);
  auVar64._8_4_ = -(uint)(_UNK_151c6d0b8 <= auVar63._8_8_);
  auVar64._12_4_ = -(uint)(_UNK_151c6d0b8 <= auVar63._8_8_);
  auVar57 = blendvps(ZEXT816(0),auVar69,auVar64);
  auVar8 = roundpd(auVar64,auVar37,0xb);
  auVar64 = roundpd(auVar63,auVar44,0xb);
  auVar45._0_8_ = auVar44._0_8_ & auVar57._0_8_;
  auVar45._8_8_ = auVar44._8_8_ & auVar57._8_8_;
  auVar58._0_8_ = ~auVar57._0_8_ & auVar64._0_8_;
  auVar58._8_8_ = ~auVar57._8_8_ & auVar64._8_8_;
  auVar59._0_8_ = SUB168(auVar58 | auVar45,0) * (double)__xmm_40768000000000004076800000000000;
  auVar59._8_8_ = SUB168(auVar58 | auVar45,8) * __xmm_40768000000000004076800000000000._8_8_;
  auVar57._0_8_ = *(double *)param_4[1] - auVar59._0_8_;
  auVar57._8_8_ = 0.0 - auVar59._8_8_;
  auVar21._0_8_ =
       auVar16._0_8_ -
       (double)(~auVar51._0_8_ & auVar8._0_8_ | auVar37._0_8_ & auVar51._0_8_) *
       (double)__xmm_40768000000000004076800000000000;
  auVar21._8_8_ =
       auVar16._8_8_ -
       (double)(~auVar51._8_8_ & auVar8._8_8_ | auVar37._8_8_ & auVar51._8_8_) *
       __xmm_40768000000000004076800000000000._8_8_;
  auVar8 = minpd(auVar21,___xmm_40768000000000004076800000000000);
  auVar16 = minpd(auVar57,___xmm_40768000000000004076800000000000);
  auVar8 = maxpd(___xmm_c076800000000000c076800000000000,auVar8);
  auVar16 = maxpd(___xmm_c076800000000000c076800000000000,auVar16);
  dVar7 = auVar16._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar14 = auVar16._8_8_ * _UNK_151c6d0d8;
  dVar27 = auVar8._0_8_ * ___xmm_3f81df46a2529d393f81df46a2529d39;
  dVar33 = auVar8._8_8_ * _UNK_151c6d0d8;
  auVar22._0_8_ = dVar27 * ___xmm_3fc45f306dc9c8833fc45f306dc9c883;
  auVar22._8_8_ = dVar33 * _UNK_151c6d0e8;
  auVar51._0_8_ = ___xmm_3fc45f306dc9c8833fc45f306dc9c883 * dVar7;
  auVar51._8_8_ = _UNK_151c6d0e8 * dVar14;
  auVar8 = roundpd(auVar59,auVar51,0xb);
  auVar16 = roundpd(auVar45,auVar22,0xb);
  dVar7 = auVar8._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar7;
  dVar27 = auVar16._0_8_ * ___xmm_c01921fb54442d18c01921fb54442d18 + dVar27;
  dVar33 = auVar16._8_8_ * _UNK_151c6d0f8 + dVar33;
  uVar5 = CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                   (uint)__xmm_80000000000000008000000000000000);
  iVar61 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 < (double)((ulonglong)dVar7 & uVar15));
  iVar67 = -(uint)(_UNK_151c6d118 <
                  (double)((ulonglong)(auVar8._8_8_ * _UNK_151c6d0f8 + dVar14) & uVar4));
  iVar48 = -(uint)(___xmm_3ff921fb54442d183ff921fb54442d18 < (double)((ulonglong)dVar27 & uVar15));
  iVar52 = -(uint)(_UNK_151c6d118 < (double)((ulonglong)dVar33 & uVar4));
  auVar16._4_4_ = iVar48;
  auVar16._0_4_ = iVar48;
  auVar16._8_4_ = iVar52;
  auVar16._12_4_ = iVar52;
  auVar8 = blendvps(ZEXT816(0),auVar69,auVar16);
  auVar37._4_4_ = iVar61;
  auVar37._0_4_ = iVar61;
  auVar37._8_4_ = iVar67;
  auVar37._12_4_ = iVar67;
  auVar16 = blendvps(ZEXT816(0),auVar69,auVar37);
  dVar20 = (double)((ulonglong)
                    ((double)((ulonglong)dVar7 & uVar5 | ___xmm_400921fb54442d18400921fb54442d18) -
                    dVar7) & auVar16._0_8_ |
                   CONCAT44(~auVar16._4_4_ & (uint)((ulonglong)dVar7 >> 0x20),
                            ~auVar16._0_4_ & SUB84(dVar7,0)));
  auVar44._0_4_ = ~auVar8._0_4_ & SUB84(dVar27,0);
  auVar44._4_4_ = ~auVar8._4_4_ & (uint)((ulonglong)dVar27 >> 0x20);
  auVar44._8_4_ = ~auVar8._8_4_ & SUB84(dVar33,0);
  auVar44._12_4_ = ~auVar8._12_4_ & (uint)((ulonglong)dVar33 >> 0x20);
  auVar28._0_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar27 & uVar5 | ___xmm_400921fb54442d18400921fb54442d18) - dVar27) &
       auVar8._0_8_;
  auVar28._8_8_ =
       (ulonglong)
       ((double)((ulonglong)dVar33 & CONCAT44(_UNK_15066df7c,_UNK_15066df78) | _UNK_151c6d108) -
       dVar33) & auVar8._8_8_;
  dVar27 = SUB168(auVar28 | auVar44,0);
  dVar72 = SUB168(auVar28 | auVar44,8);
  dVar7 = dVar27 * dVar27;
  dVar14 = dVar72 * dVar72;
  dVar27 = (((((___xmm_be59a6cb605c806fbe59a6cb605c806f * dVar7 +
               ___xmm_3ec71711c625173e3ec71711c625173e) * dVar7 +
              ___xmm_bf2a017e195d6197bf2a017e195d6197) * dVar7 +
             ___xmm_3f811110c0e4d9803f811110c0e4d980) * dVar7 +
            ___xmm_bfc555555c7dda4bbfc555555c7dda4b) * dVar7 +
           ___xmm_3ff00000000000003ff0000000000000) * dVar27;
  dVar72 = (((((_UNK_151c6d128 * dVar14 + _UNK_151c6d138) * dVar14 + _UNK_151c6d148) * dVar14 +
             _UNK_151c6d158) * dVar14 + _UNK_151c6d168) * dVar14 + _UNK_150689688) * dVar72;
  dVar7 = (((((___xmm_be917ba225041884be917ba225041884 * dVar7 +
              ___xmm_3ef9f698429782503ef9f69842978250) * dVar7 +
             ___xmm_bf56c1353b8c783dbf56c1353b8c783d) * dVar7 +
            ___xmm_3fa555545f16aaab3fa555545f16aaab) * dVar7 +
           ___xmm_bfe0000000000000bfe0000000000000) * dVar7 +
          ___xmm_3ff00000000000003ff0000000000000) *
          (double)(auVar8._0_8_ & uVar5 | (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  dVar14 = (((((_UNK_151c6d178 * dVar14 + _UNK_151c6d188) * dVar14 + _UNK_151c6d198) * dVar14 +
             _UNK_151c6d1a8) * dVar14 + _UNK_150689738) * dVar14 + _UNK_150689688) *
           (double)(auVar8._8_8_ & CONCAT44(_UNK_15066df7c,_UNK_15066df78) |
                   (ulonglong)_UNK_150689688);
  dVar54 = dVar20 * dVar20;
  dVar33 = (((((__real_be917ba225041884 * dVar54 + __real_3ef9f69842978250) * dVar54 +
              __real_bf56c1353b8c783d) * dVar54 + __real_3fa555545f16aaab) * dVar54 +
            __real_bfe0000000000000) * dVar54 + __real_3ff0000000000000) *
           (double)(auVar16._0_8_ & 0x8000000000000000 |
                   (ulonglong)___xmm_3ff00000000000003ff0000000000000);
  dVar20 = (((((__real_be59a6cb605c806f * dVar54 + __real_3ec71711c625173e) * dVar54 +
              __real_bf2a017e195d6197) * dVar54 + __real_3f811110c0e4d980) * dVar54 +
            __real_bfc555555c7dda4b) * dVar54 + __real_3ff0000000000000) * dVar20;
  dVar54 = dVar27 * dVar72 * dVar33 - dVar14 * dVar7 * dVar20;
  dVar34 = -(dVar27 * dVar14 * dVar33) - dVar72 * dVar7 * dVar20;
  dVar62 = (double)((ulonglong)(dVar27 * dVar14 * dVar20) ^ ___xmm_00000000000000008000000000000000)
           + dVar72 * dVar7 * dVar33;
  dVar33 = (double)((ulonglong)(dVar27 * dVar72 * dVar20) ^ _UNK_150689528) +
           dVar14 * dVar7 * dVar33;
  local_b8 = (double)param_3;
  local_c8 = local_b8 * *param_5;
  dStack_c0 = local_b8 * param_5[1];
  local_b8 = local_b8 * param_5[2];
  local_178 = *(undefined1 (*) [16])(param_2 + 8);
  dVar14 = local_178._0_8_;
  dVar20 = local_178._8_8_;
  dVar7 = param_2[10];
  dVar27 = param_2[0xb];
  auVar23._4_4_ = -(uint)(dVar20 < 0.0);
  auVar23._0_4_ = -(uint)(dVar14 < 0.0);
  auVar23._8_4_ = -(uint)(dVar7 < 0.0);
  auVar23._12_4_ = -(uint)(dVar27 < 0.0);
  iVar48 = movmskps((int)param_5,auVar23);
  if (iVar48 == 0) {
    dVar72 = param_2[3];
    dVar19 = *param_2;
    dVar56 = param_2[1];
    dVar36 = param_2[1];
    dVar18 = param_2[2];
    dVar42 = dVar34 * dVar18 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar62 * dVar56 +
             dVar19 * dVar33 * ___xmm_bff00000000000003ff0000000000000 + dVar54 * dVar72;
    dVar35 = dVar54 * dVar18 * _UNK_15076b868 +
             dVar33 * dVar36 + dVar19 * dVar62 * _UNK_15076c6f8 + dVar34 * dVar72;
    dVar56 = dVar33 * dVar18 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar34 * dVar19 * ___xmm_bff00000000000003ff0000000000000 + dVar62 * dVar72) -
             dVar54 * dVar56);
    dVar33 = dVar62 * dVar18 * _UNK_15076c6f8 +
             ((dVar54 * dVar19 * _UNK_15076c6f8 + dVar33 * dVar72) - dVar34 * dVar36);
    auVar60._0_8_ = local_c8 * dVar14;
    auVar60._8_8_ = dStack_c0 * dVar20;
    local_b8 = local_b8 * dVar7;
    auVar13._8_8_ = dVar27 * 0.0;
    auVar13._0_8_ = local_b8;
    auVar16 = blendpd(auVar13,auVar60,1);
    dVar54 = param_2[2] * auVar16._0_8_ - dVar19 * local_b8;
    dVar34 = auVar60._8_8_ * *param_2 - auVar60._0_8_ * param_2[1];
    dVar62 = local_b8 * param_2[1] - auVar60._8_8_ * param_2[2];
    dVar54 = dVar54 + dVar54;
    dVar34 = dVar34 + dVar34;
    dVar62 = dVar62 + dVar62;
    dStack_198 = param_2[4] +
                 (dVar34 * param_2[1] - dVar54 * param_2[2]) + dVar72 * dVar62 + auVar60._0_8_;
    local_190 = param_2[5] + (dVar62 * dVar18 - dVar19 * dVar34) + dVar72 * dVar54 + auVar60._8_8_;
    dStack_188 = dVar34 * dVar72 + local_b8 + (dVar54 * *param_2 - dVar62 * param_2[1]) + param_2[6]
    ;
    dVar7 = __real_3ff0000000000000 * dVar7;
    dVar27 = dVar27 * 0.0;
  }
  else {
    local_138 = 0x8000000000000000;
    uStack_130 = 0;
    dVar49 = dVar62 + dVar62;
    dVar7 = dVar54 + dVar54;
    dVar18 = dVar34 + dVar34;
    local_d8 = __real_3ff0000000000000 - (dVar34 * dVar18 + dVar54 * dVar7);
    auVar38._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar62 * dVar49 + dVar34 * dVar18);
    auVar38._8_8_ = _UNK_150689688 - (dVar62 * dVar49 + dVar54 * dVar7);
    auVar29._0_8_ = dVar54 * dVar49 + dVar18 * dVar33;
    auVar29._8_8_ = dVar54 * dVar7 + dVar7 * dVar33;
    dVar74 = dVar18 * dVar54 + dVar49 * dVar33;
    local_f8 = dVar49 * dVar34 + dVar7 * dVar33;
    auVar24._0_8_ = dVar18 * dVar54 - dVar49 * dVar33;
    auVar24._8_8_ = dVar49 * dVar34 - dVar7 * dVar33;
    local_108 = blendpd(auVar38,auVar24,1);
    local_f0 = 0;
    local_e8 = blendpd(auVar24,auVar29,1);
    dVar36 = *param_2;
    dVar56 = param_2[1];
    dVar35 = param_2[2] + param_2[2];
    dVar34 = dVar36 + dVar36;
    dVar53 = dVar56 + dVar56;
    dVar27 = param_2[3];
    dVar72 = param_2[3];
    dVar50 = dVar53 * dVar27;
    dVar27 = dVar35 * dVar27;
    dVar42 = dVar34 * dVar72;
    local_148 = (*param_2 * dVar35 - dVar50) * param_2[8];
    dVar7 = param_2[10];
    local_d0 = 0;
    local_b0 = 0x3ff0000000000000;
    dVar55 = (__real_3ff0000000000000 - (dVar56 * dVar53 + dVar36 * dVar34)) * dVar7;
    dVar62 = (___xmm_3ff00000000000003ff0000000000000 - (param_2[2] * dVar35 + dVar56 * dVar53)) *
             dVar14;
    dVar19 = (_UNK_150689688 - (param_2[2] * dVar35 + dVar36 * dVar34)) * dVar20;
    auVar39._0_8_ = (*param_2 * dVar35 + dVar50) * dVar7;
    auVar39._8_8_ = (*param_2 * dVar34 + dVar34 * dVar72) * 0.0;
    dVar72 = (dVar53 * dVar36 + dVar27) * dVar14;
    dVar34 = (dVar35 * dVar56 + dVar42) * dVar20;
    auVar30._0_8_ = param_2[9] * (dVar53 * dVar36 - dVar27);
    auVar30._8_8_ = dVar7 * (dVar35 * dVar56 - dVar42);
    auVar8 = blendpd(auVar39,auVar30,2);
    auVar2._8_4_ = SUB84(dVar19,0);
    auVar2._0_8_ = dVar62;
    auVar2._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar16 = blendpd(auVar30,auVar2,2);
    dVar42 = dVar54 * dVar49 - dVar18 * dVar33;
    dVar36 = auVar8._0_8_;
    dVar56 = auVar8._8_8_;
    dVar54 = auVar16._0_8_;
    dVar19 = auVar16._8_8_;
    uStack_140 = 0;
    dStack_188 = param_2[6];
    dVar49 = dStack_188 * 0.0 +
             (double)local_108._8_8_ * dVar34 +
             local_f8 * dVar55 + (double)local_108._0_8_ * local_148;
    dVar27 = param_2[4];
    dVar33 = param_2[5];
    dVar18 = dVar27 * 0.0 +
             dVar54 * (double)local_108._8_8_ + dVar36 * local_f8 + dVar62 * (double)local_108._0_8_
    ;
    dVar35 = dVar33 * 0.0 +
             dVar19 * (double)local_108._8_8_ + dVar56 * local_f8 + dVar72 * (double)local_108._0_8_
    ;
    dStack_198 = dVar54 * dStack_c0 + dVar36 * local_b8 + dVar62 * local_c8 + dVar27;
    local_190 = dVar19 * dStack_c0 + dVar56 * local_b8 + dVar72 * local_c8 + dVar33;
    dVar50 = dVar74 * dVar54 + dVar36 * dVar42 + dVar62 * auVar38._0_8_ + dVar27 * 0.0;
    dVar53 = dVar74 * dVar19 + dVar56 * dVar42 + dVar72 * auVar38._0_8_ + dVar33 * 0.0;
    dVar62 = dVar54 * (double)local_e8._8_8_ + local_d8 * dVar36 + dVar62 * (double)local_e8._0_8_ +
             dVar27 * 0.0;
    dVar19 = dVar19 * (double)local_e8._8_8_ + local_d8 * dVar56 + dVar72 * (double)local_e8._0_8_ +
             dVar33 * 0.0;
    dVar54 = dVar34 * dVar74 + dVar42 * dVar55 + auVar38._0_8_ * local_148 + dStack_188 * 0.0;
    dVar33 = (double)local_e8._8_8_ * dVar34 +
             dVar55 * local_d8 + (double)local_e8._0_8_ * local_148 + dStack_188 * 0.0;
    dStack_188 = dStack_c0 * dVar34 + dVar55 * local_b8 + local_148 * local_c8 + dStack_188;
    local_1f8[7] = _UNK_15061cbc8 * 0.0 +
                   (double)local_108._8_8_ * DAT_150aa8f68 +
                   local_f8 * 0.0 + (double)local_108._0_8_ * 0.0;
    local_1a0 = (double)local_e8._8_8_ * DAT_150aa8f68 +
                local_d8 * 0.0 + (double)local_e8._0_8_ * 0.0 + _UNK_15061cbc8 * 0.0;
    local_180 = dStack_c0 * DAT_150aa8f68 + local_b8 * 0.0 + local_c8 * 0.0 + _UNK_15061cbc8;
    dVar27 = dVar54 * dVar54 + dVar53 * dVar53 + dVar50 * dVar50;
    dVar34 = dVar49 * dVar49 + dVar35 * dVar35 + dVar18 * dVar18;
    dVar72 = __real_3ff0000000000000;
    if (0.0 <= __real_be45798ee2308c3a + dVar27) {
      dVar72 = __real_3ff0000000000000 / SQRT(dVar27);
    }
    dVar7 = dVar7 * __real_3ff0000000000000;
    dVar27 = param_2[0xb] * 0.0;
    dVar56 = dVar19 * dVar19 + dVar62 * dVar62 + dVar33 * dVar33;
    dVar36 = __real_3ff0000000000000;
    if (0.0 <= __real_be45798ee2308c3a + dVar34) {
      dVar36 = __real_3ff0000000000000 / SQRT(dVar34);
    }
    dVar55 = 0.0;
    dVar34 = __real_3ff0000000000000;
    if (0.0 <= __real_be45798ee2308c3a + dVar56) {
      dVar34 = __real_3ff0000000000000 / SQRT(dVar56);
    }
    auVar9._0_4_ = -(uint)(0.0 <= dVar14);
    auVar9._8_4_ = -(uint)(0.0 <= dVar20);
    auVar9._4_4_ = auVar9._0_4_;
    auVar9._12_4_ = auVar9._8_4_;
    auVar46._8_4_ = 0xffffffff;
    auVar46._0_8_ = 0xffffffffffffffff;
    auVar46._12_4_ = 0xffffffff;
    auVar8 = blendvps(ZEXT816(0),auVar46,auVar9);
    auVar10._4_4_ = -(uint)(0.0 <= dVar7);
    auVar10._0_4_ = -(uint)(0.0 <= dVar7);
    auVar10._8_4_ = -(uint)(0.0 <= dVar27);
    auVar10._12_4_ = -(uint)(0.0 <= dVar27);
    auVar16 = blendvps(ZEXT816(0),auVar46,auVar10);
    uVar68 = auVar8._0_4_ & (uint)__xmm_80000000000000008000000000000000 ^
             ___xmm_bff0000000000000bff0000000000000;
    uVar70 = auVar8._4_4_ & __xmm_80000000000000008000000000000000._4_4_ ^ _UNK_15076c714;
    uVar71 = auVar8._8_4_ & _UNK_15066df78 ^ _UNK_15076c718;
    uVar73 = auVar8._12_4_ & _UNK_15066df7c ^ _UNK_15076c71c;
    auVar16 = ZEXT816(0xbff0000000000000) ^ ZEXT416(auVar16._4_4_ & 0x80000000) << 0x20;
    auVar40._0_8_ = (double)CONCAT44(uVar70,uVar68);
    auVar40._8_4_ = uVar68;
    auVar40._12_4_ = uVar70;
    local_1f8[0] = auVar40._0_8_ * dVar50 * dVar72;
    local_1f8[1] = auVar40._8_8_ * dVar53 * dVar72;
    local_1f8[2] = dVar54 * dVar72 * (double)CONCAT44(uVar70,uVar68);
    local_1f8[3] = DAT_150aa8f68 * dVar74 + dVar42 * 0.0 + auVar38._0_8_ * 0.0 +
                   _UNK_15061cbc8 * 0.0;
    auVar11._0_8_ = (double)CONCAT44(uVar73,uVar71);
    auVar11._8_4_ = uVar71;
    auVar11._12_4_ = uVar73;
    local_1f8[6] = dVar49 * dVar36 * auVar11._0_8_;
    local_1f8[4] = dVar18 * dVar36 * auVar11._0_8_;
    local_1f8[5] = dVar35 * dVar36 * auVar11._8_8_;
    auVar12._0_8_ = auVar16._0_8_;
    auVar12._8_4_ = 0;
    auVar12._12_4_ = auVar16._4_4_;
    local_1f8[8] = auVar12._0_8_ * dVar62 * dVar34;
    local_1f8[9] = auVar12._8_8_ * dVar19 * dVar34;
    local_1f8[10] = auVar12._0_8_ * dVar33 * dVar34;
    uVar4 = CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                     (undefined4)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar3._8_4_ = _UNK_15061cc88;
    auVar3._0_8_ = uVar4;
    auVar3._12_4_ = _UNK_15061cc8c;
    uVar15 = auVar3._8_8_;
    auVar47._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1f8[1] & uVar15));
    auVar47._0_4_ =
         -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d < (double)((ulonglong)local_1f8[0] & uVar4)
                );
    auVar47._8_4_ =
         -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d < (double)((ulonglong)local_1f8[2] & uVar4)
                );
    auVar47._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & uVar15));
    iVar48 = movmskps(0,auVar47);
    dVar33 = __real_3ff0000000000000;
    if (iVar48 == 0) {
      local_168[0] = 0.0;
      local_168[1] = 0.0;
    }
    else {
      auVar31._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1f8[5] & uVar15));
      auVar31._0_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_1f8[4] & uVar4));
      auVar31._8_4_ =
           -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                  (double)((ulonglong)local_1f8[6] & uVar4));
      auVar31._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & uVar15));
      iVar48 = movmskps(iVar48,auVar31);
      if ((iVar48 == 0) ||
         (auVar32._4_4_ = -(uint)(_UNK_150b53828 < (double)((ulonglong)local_1f8[9] & uVar15)),
         auVar32._0_4_ =
              -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                     (double)((ulonglong)local_1f8[8] & uVar4)),
         auVar32._8_4_ =
              -(uint)(___xmm_3f1a36e2eb1c432d3f1a36e2eb1c432d <
                     (double)((ulonglong)local_1f8[10] & uVar4)),
         auVar32._12_4_ = -(uint)(_UNK_150b53828 < (double)(__real_0010000000000000 & uVar15)),
         iVar48 = movmskps(iVar48,auVar32), iVar48 == 0)) {
        local_168[0] = 0.0;
        local_168[1] = 0.0;
        dVar55 = 0.0;
      }
      else {
        dVar33 = local_1f8[0] + local_1f8[5] + local_1f8[10];
        if (dVar33 <= 0.0) {
          pdVar1 = (double *)
                   ((longlong)local_1f8 + (ulonglong)((uint)(local_1f8[0] < local_1f8[5]) * 0x28));
          uVar15 = 2;
          if (local_1f8[10] < *pdVar1 || local_1f8[10] == *pdVar1) {
            uVar15 = (ulonglong)(uint)(local_1f8[0] < local_1f8[5]);
          }
          iVar48 = *(int *)(&DAT_151c6d1b0 + uVar15 * 4);
          lVar6 = (longlong)iVar48;
          iVar61 = (int)uVar15;
          iVar52 = *(int *)(&DAT_151c6d1b0 + lVar6 * 4);
          dVar33 = __real_3ff0000000000000 /
                   SQRT(((*(double *)((longlong)local_1f8 + (ulonglong)(uint)(iVar61 * 0x28)) -
                         local_1f8[lVar6 * 5]) - local_1f8[(longlong)iVar52 * 5]) +
                        __real_3ff0000000000000);
          dVar54 = dVar33 * __real_3fe0000000000000;
          *(double *)((longlong)local_168 + (ulonglong)(uint)(iVar61 * 8)) =
               (__real_3ff0000000000000 / dVar33) * __real_3fe0000000000000;
          local_168[lVar6] =
               (local_1f8[iVar48 + iVar61 * 4] + local_1f8[iVar61 + iVar48 * 4]) * dVar54;
          local_168[iVar52] =
               (local_1f8[iVar52 + iVar61 * 4] + local_1f8[iVar61 + iVar52 * 4]) * dVar54;
          dVar55 = local_168[2];
          dVar33 = (local_1f8[iVar52 + iVar48 * 4] - local_1f8[iVar48 + iVar52 * 4]) * dVar54;
        }
        else {
          dVar33 = __real_3ff0000000000000 / SQRT(dVar33 + __real_3ff0000000000000);
          dVar54 = dVar33 * __real_3fe0000000000000;
          local_168[0] = (local_1f8[6] - local_1f8[9]) * dVar54;
          local_168[1] = (local_1f8[8] - local_1f8[2]) * dVar54;
          dVar55 = (local_1f8[1] - local_1f8[4]) * dVar54;
          dVar33 = (__real_3ff0000000000000 / dVar33) * __real_3fe0000000000000;
        }
      }
    }
    dVar54 = dVar33 * dVar33 + local_168[1] * local_168[1] +
             dVar55 * dVar55 + local_168[0] * local_168[0];
    uVar15 = ~-(ulonglong)(dVar54 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar54 = __real_3ff0000000000000 / SQRT(dVar54);
    dVar42 = (double)((ulonglong)(local_168[0] * dVar54) & uVar15);
    dVar35 = (double)((ulonglong)(local_168[1] * dVar54) & uVar15);
    dVar56 = (double)(~uVar15 & ___xmm_3ff00000000000000000000000000000 |
                     (ulonglong)(dVar55 * dVar54) & uVar15);
    dVar33 = (double)(~uVar15 & (ulonglong)_UNK_15061cbc8 | (ulonglong)(dVar33 * dVar54) & uVar15);
  }
  dVar7 = __real_3ff0000000000000 * dVar7;
  auVar65._0_8_ = dVar14 * 0.0;
  auVar65._8_8_ = dVar20 * 0.0;
  auVar25._8_8_ = dVar27 * 0.0;
  auVar25._0_8_ = dVar7;
  auVar16 = blendpd(auVar25,auVar65,1);
  dVar54 = auVar16._0_8_ * dVar56 - dVar42 * dVar7;
  dVar14 = auVar16._8_8_ * dVar33 - dVar33 * dVar27 * 0.0;
  dVar20 = auVar65._8_8_ * dVar42 - dVar35 * auVar65._0_8_;
  dVar27 = dVar7 * dVar35 - dVar56 * auVar65._8_8_;
  dVar54 = dVar54 + dVar54;
  dVar14 = dVar14 + dVar14;
  auVar41._0_8_ = dVar20 + dVar20;
  auVar41._8_8_ = dVar27 + dVar27;
  auVar66._8_8_ = dVar14;
  auVar66._0_8_ = dVar54;
  auVar8 = blendpd(auVar66,auVar41,1);
  auVar26._0_8_ = dVar54 * dVar42 - auVar41._8_8_ * dVar35;
  auVar26._8_8_ = auVar41._0_8_ * dVar35 - dVar54 * dVar56;
  auVar17._0_8_ = auVar41._8_8_ * dVar56 - auVar8._0_8_ * dVar42;
  auVar17._8_8_ = dVar14 * dVar33 - auVar8._8_8_ * dVar33;
  auVar16 = blendpd(auVar17,auVar26,1);
  dVar20 = (double)(__real_3f000000 * param_3 * param_7);
  dVar7 = (double)((ulonglong)(auVar16._0_8_ + dVar33 * auVar8._0_8_ + dVar7) &
                  CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (undefined4)__xmm_7fffffffffffffff7fffffffffffffff)) * dVar20;
  dVar14 = (double)((ulonglong)(auVar26._8_8_ + dVar33 * auVar41._8_8_ + auVar65._0_8_) &
                   CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (undefined4)__xmm_7fffffffffffffff7fffffffffffffff)) * dVar20;
  dVar20 = (double)((ulonglong)(auVar17._0_8_ + dVar33 * dVar54 + auVar65._8_8_) &
                   CONCAT44(_UNK_15061cc8c,_UNK_15061cc88)) * dVar20;
  dVar27 = (double)(param_6 * param_3);
  *param_1 = (dStack_198 - dVar14) - dVar27;
  param_1[1] = (local_190 - dVar20) - dVar27;
  param_1[2] = (dStack_188 - dVar7) - dVar27;
  param_1[3] = dVar14 + dStack_198 + dVar27;
  param_1[4] = dVar20 + local_190 + dVar27;
  param_1[5] = dVar7 + dStack_188 + dVar27;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

