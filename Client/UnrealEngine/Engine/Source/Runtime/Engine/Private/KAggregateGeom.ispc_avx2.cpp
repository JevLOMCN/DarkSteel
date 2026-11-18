// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// BoxCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunfCunf_avx2 @ 140c7b150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void BoxCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunfCunf_avx2
               (undefined1 (*param_1) [32],undefined1 (*param_2) [16],float param_3,
               undefined1 (*param_4) [24],double *param_5,uint param_6,uint param_7,uint param_8,
               undefined1 (*param_9) [32])

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auVar7 [24];
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
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
  undefined1 auVar31 [32];
  double dVar66;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar12 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar41 [32];
  undefined1 auVar15 [16];
  undefined1 auVar64 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar51 [32];
  undefined1 auVar53 [32];
  undefined1 auVar65 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  ulonglong uVar67;
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar89 [16];
  undefined1 auVar85 [32];
  undefined1 auVar90 [16];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
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
  double dVar122;
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  double dVar123;
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar112 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar121 [32];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar138 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar161 [32];
  undefined1 auVar164 [32];
  undefined1 auVar166 [32];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar182 [32];
  undefined1 auVar184 [16];
  undefined1 auVar185 [32];
  undefined1 auVar187 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar188 [16];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [16];
  undefined1 auVar209 [32];
  undefined1 auVar210 [32];
  undefined1 auVar211 [32];
  undefined1 auVar212 [32];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar217 [16];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  undefined1 auVar221 [16];
  double adStack_2b8 [3];
  undefined1 local_2a0 [8];
  double adStack_298 [3];
  undefined1 local_280 [16];
  double local_270;
  undefined8 local_268;
  undefined1 local_260 [16];
  double local_250;
  undefined8 local_248;
  ulonglong uStack_240;
  ulonglong uStack_238;
  ulonglong uStack_230;
  undefined8 local_228;
  double local_210;
  ulonglong local_208;
  ulonglong local_200;
  double dStack_1f8;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  double local_1d0 [2];
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [32];
  ulonglong local_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  undefined1 local_120 [16];
  ulonglong uStack_110;
  ulonglong uStack_108;
  double local_f0;
  double dStack_e8;
  undefined1 local_e0 [32];
  undefined1 local_a8 [16];
  undefined1 auVar40 [32];
  undefined1 auVar47 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar57 [32];
  undefined1 auVar61 [32];
  undefined1 auVar63 [32];
  undefined1 auVar84 [32];
  undefined1 auVar86 [32];
  undefined1 auVar111 [32];
  undefined1 auVar113 [32];
  undefined1 auVar116 [32];
  undefined1 auVar120 [32];
  undefined1 auVar134 [32];
  undefined1 auVar137 [32];
  undefined1 auVar139 [32];
  undefined1 auVar142 [32];
  undefined1 auVar156 [32];
  undefined1 auVar160 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar165 [32];
  undefined1 auVar167 [32];
  undefined1 auVar181 [32];
  undefined1 auVar183 [32];
  undefined1 auVar186 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  
  local_a8 = in_ZMM6._0_16_;
  auVar44 = *param_9;
  auVar53 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
  auVar7 = *param_4;
  auVar31._24_8_ = 0;
  auVar31._0_24_ = auVar7;
  auVar72._8_8_ = __real_4076800000000000;
  auVar72._0_8_ = __real_4076800000000000;
  auVar72._16_8_ = __real_4076800000000000;
  auVar72._24_8_ = __real_4076800000000000;
  auVar32 = vdivpd_avx(auVar31,auVar72);
  auVar132._0_8_ = __real_7fffffffffffffff & auVar32._0_8_;
  auVar132._8_8_ = __real_7fffffffffffffff & auVar32._8_8_;
  auVar132._16_8_ = __real_7fffffffffffffff & auVar32._16_8_;
  auVar132._24_8_ = __real_7fffffffffffffff & auVar32._24_8_;
  auVar154._8_8_ = __real_4330000000000000;
  auVar154._0_8_ = __real_4330000000000000;
  auVar154._16_8_ = __real_4330000000000000;
  auVar154._24_8_ = __real_4330000000000000;
  auVar31 = vcmppd_avx(auVar154,auVar132,2);
  auVar31 = vpshufb_avx2(auVar31,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar213._0_12_ = ZEXT812(0);
  auVar213._12_4_ = 0;
  auVar31 = vblendvps_avx(ZEXT1632(auVar213),auVar53,auVar31);
  auVar33 = vroundpd_avx(auVar32,0xb);
  auVar175._0_4_ = ~auVar31._0_4_ & auVar33._0_4_;
  auVar175._4_4_ = ~auVar31._4_4_ & auVar33._4_4_;
  auVar175._8_4_ = ~auVar31._8_4_ & auVar33._8_4_;
  auVar175._12_4_ = ~auVar31._12_4_ & auVar33._12_4_;
  auVar175._16_4_ = ~auVar31._16_4_ & auVar33._16_4_;
  auVar175._20_4_ = ~auVar31._20_4_ & auVar33._20_4_;
  auVar175._24_4_ = ~auVar31._24_4_ & auVar33._24_4_;
  auVar175._28_4_ = ~auVar31._28_4_ & auVar33._28_4_;
  auVar102._0_8_ = auVar32._0_8_ & auVar31._0_8_;
  auVar102._8_8_ = auVar32._8_8_ & auVar31._8_8_;
  auVar102._16_8_ = auVar32._16_8_ & auVar31._16_8_;
  auVar102._24_8_ = auVar32._24_8_ & auVar31._24_8_;
  auVar102 = auVar102 | auVar175;
  auVar103._0_8_ = -(__real_4076800000000000 * auVar102._0_8_) + auVar7._0_8_;
  auVar103._8_8_ = -(__real_4076800000000000 * auVar102._8_8_) + auVar7._8_8_;
  auVar103._16_8_ = -(__real_4076800000000000 * auVar102._16_8_) + auVar7._16_8_;
  auVar103._24_8_ = -(__real_4076800000000000 * auVar102._24_8_) + 0.0;
  auVar31 = vminpd_avx(auVar103,auVar72);
  auVar73._8_8_ = __real_c076800000000000;
  auVar73._0_8_ = __real_c076800000000000;
  auVar73._16_8_ = __real_c076800000000000;
  auVar73._24_8_ = __real_c076800000000000;
  auVar31 = vmaxpd_avx(auVar73,auVar31);
  dVar11 = auVar31._0_8_ * __real_3f81df46a2529d39;
  auVar200._0_8_ = auVar31._8_8_ * __real_3f81df46a2529d39;
  auVar199._0_8_ = auVar31._16_8_ * __real_3f81df46a2529d39;
  dVar66 = auVar31._24_8_ * __real_3f81df46a2529d39;
  auVar74._0_8_ = dVar11 * __real_3fc45f306dc9c883;
  auVar74._8_8_ = auVar200._0_8_ * __real_3fc45f306dc9c883;
  auVar74._16_8_ = auVar199._0_8_ * __real_3fc45f306dc9c883;
  auVar74._24_8_ = dVar66 * __real_3fc45f306dc9c883;
  auVar31 = vroundpd_avx(auVar74,0xb);
  auVar104._0_8_ = auVar31._0_8_ * __real_c01921fb54442d18 + dVar11;
  auVar104._8_8_ = auVar31._8_8_ * __real_c01921fb54442d18 + auVar200._0_8_;
  auVar104._16_8_ = auVar31._16_8_ * __real_c01921fb54442d18 + auVar199._0_8_;
  auVar104._24_8_ = auVar31._24_8_ * __real_c01921fb54442d18 + dVar66;
  auVar32._0_8_ = (ulonglong)auVar104._0_8_ & __real_8000000000000000;
  auVar32._8_8_ = (ulonglong)auVar104._8_8_ & __real_8000000000000000;
  auVar32._16_8_ = (ulonglong)auVar104._16_8_ & __real_8000000000000000;
  auVar32._24_8_ = (ulonglong)auVar104._24_8_ & __real_8000000000000000;
  auVar75._8_8_ = __real_400921fb54442d18;
  auVar75._0_8_ = __real_400921fb54442d18;
  auVar75._16_8_ = __real_400921fb54442d18;
  auVar75._24_8_ = __real_400921fb54442d18;
  auVar32 = vsubpd_avx(auVar32 | auVar75,auVar104);
  auVar76._0_8_ = __real_7fffffffffffffff & (ulonglong)auVar104._0_8_;
  auVar76._8_8_ = __real_7fffffffffffffff & (ulonglong)auVar104._8_8_;
  auVar76._16_8_ = __real_7fffffffffffffff & (ulonglong)auVar104._16_8_;
  auVar76._24_8_ = __real_7fffffffffffffff & (ulonglong)auVar104._24_8_;
  auVar133._8_8_ = __real_3ff921fb54442d18;
  auVar133._0_8_ = __real_3ff921fb54442d18;
  auVar133._16_8_ = __real_3ff921fb54442d18;
  auVar133._24_8_ = __real_3ff921fb54442d18;
  auVar31 = vcmppd_avx(auVar133,auVar76,1);
  auVar31 = vpshufb_avx2(auVar31,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar31 = vblendvps_avx(ZEXT1632(auVar213),auVar53,auVar31);
  auVar105._0_4_ = ~auVar31._0_4_ & SUB84(auVar104._0_8_,0);
  auVar105._4_4_ = ~auVar31._4_4_ & (uint)((ulonglong)auVar104._0_8_ >> 0x20);
  auVar105._8_4_ = ~auVar31._8_4_ & SUB84(auVar104._8_8_,0);
  auVar105._12_4_ = ~auVar31._12_4_ & (uint)((ulonglong)auVar104._8_8_ >> 0x20);
  auVar105._16_4_ = ~auVar31._16_4_ & SUB84(auVar104._16_8_,0);
  auVar105._20_4_ = ~auVar31._20_4_ & (uint)((ulonglong)auVar104._16_8_ >> 0x20);
  auVar105._24_4_ = ~auVar31._24_4_ & SUB84(auVar104._24_8_,0);
  auVar105._28_4_ = ~auVar31._28_4_ & (uint)((ulonglong)auVar104._24_8_ >> 0x20);
  auVar33._0_8_ = auVar32._0_8_ & auVar31._0_8_;
  auVar33._8_8_ = auVar32._8_8_ & auVar31._8_8_;
  auVar33._16_8_ = auVar32._16_8_ & auVar31._16_8_;
  auVar33._24_8_ = auVar32._24_8_ & auVar31._24_8_;
  auVar33 = auVar33 | auVar105;
  dVar11 = auVar33._0_8_;
  auVar202._16_8_ = dVar11 * dVar11;
  auVar200._0_8_ = auVar33._8_8_;
  auVar201._16_8_ = auVar200._0_8_ * auVar200._0_8_;
  auVar199._0_8_ = auVar33._16_8_;
  dVar122 = auVar199._0_8_ * auVar199._0_8_;
  dVar66 = auVar33._24_8_;
  dVar123 = dVar66 * dVar66;
  local_e0._8_8_ = __real_3ff0000000000000;
  local_e0._0_8_ = __real_3ff0000000000000;
  local_e0._16_8_ = __real_3ff0000000000000;
  local_e0._24_8_ = __real_3ff0000000000000;
  auVar65._0_8_ =
       (auVar202._16_8_ *
        (auVar202._16_8_ *
         (auVar202._16_8_ *
          (auVar202._16_8_ * (auVar202._16_8_ * __real_be59a6cb605c806f + __real_3ec71711c625173e) +
          __real_bf2a017e195d6197) + __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar11;
  auVar65._8_8_ =
       (auVar201._16_8_ *
        (auVar201._16_8_ *
         (auVar201._16_8_ *
          (auVar201._16_8_ * (auVar201._16_8_ * __real_be59a6cb605c806f + __real_3ec71711c625173e) +
          __real_bf2a017e195d6197) + __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * auVar200._0_8_;
  auVar34._16_8_ =
       (dVar122 * (dVar122 * (dVar122 * (dVar122 * (dVar122 * __real_be59a6cb605c806f +
                                                   __real_3ec71711c625173e) +
                                        __real_bf2a017e195d6197) + __real_3f811110c0e4d980) +
                  __real_bfc555555c7dda4b) + __real_3ff0000000000000) * auVar199._0_8_;
  auVar34._0_16_ = auVar65;
  auVar34._24_8_ =
       (dVar123 * (dVar123 * (dVar123 * (dVar123 * (dVar123 * __real_be59a6cb605c806f +
                                                   __real_3ec71711c625173e) +
                                        __real_bf2a017e195d6197) + __real_3f811110c0e4d980) +
                  __real_bfc555555c7dda4b) + __real_3ff0000000000000) * dVar66;
  auVar15._0_8_ =
       (auVar202._16_8_ *
        (auVar202._16_8_ *
         (auVar202._16_8_ *
          (auVar202._16_8_ * (auVar202._16_8_ * __real_be917ba225041884 + __real_3ef9f69842978250) +
          __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar31._0_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar15._8_8_ =
       (auVar201._16_8_ *
        (auVar201._16_8_ *
         (auVar201._16_8_ *
          (auVar201._16_8_ * (auVar201._16_8_ * __real_be917ba225041884 + __real_3ef9f69842978250) +
          __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar31._8_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar77._16_8_ =
       (dVar122 * (dVar122 * (dVar122 * (dVar122 * (dVar122 * __real_be917ba225041884 +
                                                   __real_3ef9f69842978250) +
                                        __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) +
                  __real_bfe0000000000000) + __real_3ff0000000000000) *
       (double)(auVar31._16_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar77._0_16_ = auVar15;
  auVar77._24_8_ =
       (dVar123 * (dVar123 * (dVar123 * (dVar123 * (dVar123 * __real_be917ba225041884 +
                                                   __real_3ef9f69842978250) +
                                        __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) +
                  __real_bfe0000000000000) + __real_3ff0000000000000) *
       (double)(auVar31._24_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar12 = vunpcklpd_avx(auVar65,auVar15);
  auVar31 = vpermpd_avx2(ZEXT1632(auVar12),0x50);
  auVar12 = vunpckhpd_avx(auVar65,auVar15);
  auVar32 = vpermpd_avx2(ZEXT1632(auVar12),0x44);
  auVar33 = vpermpd_avx2(auVar77,0xaa);
  auVar53 = auVar53 & ~auVar44;
  auVar12 = vunpcklpd_avx(auVar15,auVar65);
  auVar72 = vpermpd_avx2(ZEXT1632(auVar12),0x50);
  auVar12 = vunpckhpd_avx(auVar15,auVar65);
  auVar73 = vpermpd_avx2(ZEXT1632(auVar12),0x44);
  auVar34 = vpermpd_avx2(auVar34,0xaa);
  auVar12._0_8_ = (double)param_3;
  auVar218._0_8_ =
       (double)((ulonglong)(auVar33._0_8_ * auVar31._0_8_ * auVar32._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar34._0_8_ * auVar72._0_8_ * auVar73._0_8_) ^
               ___ymm_0000000000000000800000000000000080000000000000008000000000000000);
  auVar218._8_8_ =
       (double)((ulonglong)(auVar33._8_8_ * auVar31._8_8_ * auVar32._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar34._8_8_ * auVar72._8_8_ * auVar73._8_8_) ^ _UNK_151c6af68);
  auVar218._16_8_ =
       (double)((ulonglong)(auVar33._16_8_ * auVar31._16_8_ * auVar32._16_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar34._16_8_ * auVar72._16_8_ * auVar73._16_8_) ^ _UNK_151c6af70);
  auVar218._24_8_ =
       (double)((ulonglong)(auVar33._24_8_ * auVar31._24_8_ * auVar32._24_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar34._24_8_ * auVar72._24_8_ * auVar73._24_8_) ^ _UNK_151c6af78);
  auVar12._8_8_ = auVar12._0_8_;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = auVar12._0_8_;
  auVar12 = ZEXT116(0) * auVar64 | ZEXT116(1) * auVar12;
  local_180._0_8_ = auVar12._0_8_ * *param_5;
  local_180._8_8_ = auVar12._8_8_ * param_5[1];
  auVar209._16_8_ = SUB168(ZEXT116(1) * auVar64,0) * param_5[2];
  auVar209._0_16_ = local_180;
  auVar209._24_8_ = SUB168(ZEXT116(1) * auVar64,8) * 0.0;
  auVar31 = ZEXT1632(auVar213);
  local_120._0_4_ = (undefined4)__real_8000000000000000;
  uVar8 = local_120._0_4_;
  local_120._4_4_ = (undefined4)(__real_8000000000000000 >> 0x20);
  uVar9 = local_120._4_4_;
  local_140 = __real_7fffffffffffffff;
  uStack_138 = __real_7fffffffffffffff;
  uStack_130 = __real_7fffffffffffffff;
  uStack_128 = __real_7fffffffffffffff;
  if ((((((((SUB321(auVar53 >> 0x1f,0) & 1) == 0 && (SUB321(auVar53 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar53 >> 0x5f,0) & 1) == 0) && SUB321(auVar53 >> 0x7f,0) == '\0') &&
        (SUB321(auVar53 >> 0x9f,0) & 1) == 0) && SUB321(auVar53 >> 0xbf,0) == '\0') &&
      (SUB321(auVar53 >> 0xdf,0) & 1) == 0) && -1 < auVar53[0x1f]) {
    auVar170._8_8_ = 0.0;
    auVar170._0_8_ = *(double *)param_2[4];
    local_1f0._8_8_ = 0;
    local_1f0._0_8_ = *(ulonglong *)(param_2[4] + 8);
    dVar11 = *(double *)param_2[5];
    auVar221._8_8_ = 0;
    auVar221._0_8_ = dVar11;
    auVar44 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar31,1);
    auVar44 = vpackssdw_avx2(auVar44,auVar31);
    if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) == 0 && (SUB321(auVar44 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar44 >> 0x5f,0) & 1) == 0) && SUB321(auVar44 >> 0x7f,0) == '\0') &&
          (SUB321(auVar44 >> 0x9f,0) & 1) == 0) && SUB321(auVar44 >> 0xbf,0) == '\0') &&
        (SUB321(auVar44 >> 0xdf,0) & 1) == 0) && -1 < auVar44[0x1f]) {
      auVar130._8_8_ = 0;
      auVar130._0_8_ = *(ulonglong *)(param_2[5] + 8);
      dVar11 = *(double *)*param_2;
      auVar97._8_8_ = dVar11;
      auVar97._0_8_ = dVar11;
      auVar113._16_8_ = dVar11;
      auVar113._0_16_ = auVar97;
      auVar113._24_8_ = dVar11;
      auVar31 = vpermpd_avx2(auVar218,0x1b);
      auVar200._0_8_ = *(double *)(param_2[1] + 8);
      auVar85._8_8_ = auVar200._0_8_;
      auVar85._0_8_ = auVar200._0_8_;
      auVar85._16_8_ = auVar200._0_8_;
      auVar85._24_8_ = auVar200._0_8_;
      auVar199._0_8_ = *(double *)(*param_2 + 8);
      auVar19._8_8_ = auVar199._0_8_;
      auVar19._0_8_ = auVar199._0_8_;
      auVar52._16_8_ = auVar199._0_8_;
      auVar52._0_16_ = auVar19;
      auVar52._24_8_ = auVar199._0_8_;
      auVar32 = vpermpd_avx2(auVar218,0x4e);
      dVar66 = *(double *)param_2[1];
      auVar151._8_8_ = dVar66;
      auVar151._0_8_ = dVar66;
      auVar163._16_8_ = dVar66;
      auVar163._0_16_ = auVar151;
      auVar163._24_8_ = dVar66;
      auVar44 = vshufpd_avx(auVar218,auVar218,5);
      auVar198._0_8_ =
           auVar44._0_8_ * dVar66 *
           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
           auVar32._0_8_ * auVar199._0_8_ *
           ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
           auVar218._0_8_ * auVar200._0_8_ +
           auVar31._0_8_ * dVar11 *
           ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
      auVar198._8_8_ =
           auVar44._8_8_ * dVar66 * _UNK_150b54428 +
           auVar32._8_8_ * auVar199._0_8_ * _UNK_150b54408 +
           auVar218._8_8_ * auVar200._0_8_ + auVar31._8_8_ * dVar11 * _UNK_150b543e8;
      auVar202._16_8_ =
           auVar44._16_8_ * dVar66 * _UNK_150b54430 +
           auVar32._16_8_ * auVar199._0_8_ * _UNK_150b54410 +
           auVar218._16_8_ * auVar200._0_8_ + auVar31._16_8_ * dVar11 * _UNK_150b543f0;
      auVar202._0_16_ = auVar198;
      auVar202._24_8_ =
           auVar44._24_8_ * dVar66 * _UNK_150b54438 +
           auVar32._24_8_ * auVar199._0_8_ * _UNK_150b54418 +
           auVar218._24_8_ * auVar200._0_8_ + auVar31._24_8_ * dVar11 * _UNK_150b543f8;
      auVar12 = vshufpd_avx(auVar198,auVar198,1);
      auVar65 = vshufpd_avx(auVar202._16_16_,auVar202._16_16_,1);
      dVar11 = auVar65._0_8_;
      auVar65 = vunpcklpd_avx(auVar221,auVar130);
      auVar15 = vunpcklpd_avx(auVar170,local_1f0);
      auVar145._0_8_ = local_180._0_8_ * auVar15._0_8_;
      auVar145._8_8_ = local_180._8_8_ * auVar15._8_8_;
      auVar145._16_8_ = auVar209._16_8_ * auVar65._0_8_;
      auVar145._24_8_ = auVar209._24_8_ * auVar65._8_8_;
      auVar53 = vpermpd_avx2(auVar145,0xc9);
      auVar65 = vunpcklpd_avx(auVar97,auVar19);
      auVar44 = vblendpd_avx(auVar113,ZEXT1632(auVar65),3);
      auVar44 = vblendpd_avx(auVar44,auVar163,4);
      auVar31 = vblendpd_avx(auVar44,auVar85,8);
      auVar65 = vunpcklpd_avx(auVar19,auVar151);
      auVar32 = vblendpd_avx(auVar52,ZEXT1632(auVar65),3);
      auVar32 = vblendpd_avx(auVar32,auVar113,4);
      auVar33 = vblendpd_avx(auVar32,auVar85,8);
      auVar199._0_8_ = auVar53._0_8_ * auVar31._0_8_ - auVar145._0_8_ * auVar33._0_8_;
      dVar66 = auVar53._8_8_ * auVar31._8_8_ - auVar145._8_8_ * auVar33._8_8_;
      auVar201._16_8_ = auVar53._16_8_ * auVar31._16_8_ - auVar145._16_8_ * auVar33._16_8_;
      dVar122 = auVar53._24_8_ * auVar31._24_8_ - auVar145._24_8_ * auVar33._24_8_;
      auVar114._0_8_ = auVar199._0_8_ + auVar199._0_8_;
      auVar114._8_8_ = dVar66 + dVar66;
      auVar114._16_8_ = auVar201._16_8_ + auVar201._16_8_;
      auVar114._24_8_ = dVar122 + dVar122;
      auVar31 = vpermpd_avx2(auVar114,0xc9);
      auVar33 = vpermpd_avx2(auVar114,0xd2);
      auVar53._0_8_ = auVar44._0_8_ * auVar33._0_8_ - auVar32._0_8_ * auVar31._0_8_;
      auVar53._8_8_ = auVar44._8_8_ * auVar33._8_8_ - auVar32._8_8_ * auVar31._8_8_;
      auVar53._16_8_ = auVar44._16_8_ * auVar33._16_8_ - auVar32._16_8_ * auVar31._16_8_;
      auVar53._24_8_ = auVar44._24_8_ * auVar33._24_8_ - auVar32._24_8_ * auVar31._24_8_;
      auVar44 = vpermpd_avx2(auVar53,0xc9);
      auVar69._0_8_ =
           *(double *)param_2[2] + auVar31._0_8_ * auVar200._0_8_ + auVar145._0_8_ + auVar44._0_8_;
      auVar69._8_8_ =
           *(double *)(param_2[2] + 8) +
           auVar31._8_8_ * auVar200._0_8_ + auVar145._8_8_ + auVar44._8_8_;
      auVar86._16_8_ =
           *(double *)param_2[3] +
           auVar31._16_8_ * auVar200._0_8_ + auVar145._16_8_ + auVar44._16_8_;
      auVar86._0_16_ = auVar69;
      auVar86._24_8_ = auVar31._24_8_ * auVar200._0_8_ + auVar145._24_8_ + auVar44._24_8_ + 0.0;
      auVar100 = vshufpd_avx(auVar69,auVar69,1);
      auVar90 = auVar86._16_16_;
      auVar200._0_8_ = auVar198._0_8_;
    }
    else {
      local_120._8_8_ = __real_8000000000000000;
      local_120._0_8_ = __real_8000000000000000;
      uStack_110 = __real_8000000000000000;
      uStack_108 = __real_8000000000000000;
      auVar42._0_8_ = auVar218._0_8_ + auVar218._0_8_;
      auVar42._8_8_ = auVar218._8_8_ + auVar218._8_8_;
      auVar42._16_8_ = auVar218._16_8_ + auVar218._16_8_;
      auVar42._24_8_ = auVar218._24_8_ + auVar218._24_8_;
      auVar81._0_8_ = auVar218._0_8_ * auVar42._0_8_;
      auVar81._8_8_ = auVar218._8_8_ * auVar42._8_8_;
      auVar81._16_8_ = auVar218._16_8_ * auVar42._16_8_;
      auVar81._24_8_ = auVar218._24_8_ * auVar42._24_8_;
      auVar44 = vpermpd_avx2(auVar81,0xc1);
      auVar31 = vpermpd_avx2(auVar81,0xda);
      auVar82._0_8_ = auVar44._0_8_ + auVar31._0_8_;
      auVar82._8_8_ = auVar44._8_8_ + auVar31._8_8_;
      auVar82._16_8_ = auVar44._16_8_ + auVar31._16_8_;
      auVar82._24_8_ = auVar44._24_8_ + auVar31._24_8_;
      auVar44 = vsubpd_avx(local_e0,auVar82);
      auVar31 = vpermpd_avx2(auVar218,4);
      auVar32 = vpermpd_avx2(auVar42,0x29);
      auVar108._0_8_ = auVar31._0_8_ * auVar32._0_8_;
      auVar108._8_8_ = auVar31._8_8_ * auVar32._8_8_;
      auVar108._16_8_ = auVar31._16_8_ * auVar32._16_8_;
      auVar108._24_8_ = auVar31._24_8_ * auVar32._24_8_;
      auVar31 = vpermpd_avx2(auVar218,0xff);
      auVar32 = vpermpd_avx2(auVar42,0x12);
      auVar43._0_8_ = auVar31._0_8_ * auVar32._0_8_;
      auVar43._8_8_ = auVar31._8_8_ * auVar32._8_8_;
      auVar43._16_8_ = auVar31._16_8_ * auVar32._16_8_;
      auVar43._24_8_ = auVar31._24_8_ * auVar32._24_8_;
      auVar126._0_8_ = auVar108._0_8_ + auVar43._0_8_;
      auVar126._8_8_ = auVar108._8_8_ + auVar43._8_8_;
      auVar139._16_8_ = auVar108._16_8_ + auVar43._16_8_;
      auVar139._0_16_ = auVar126;
      auVar139._24_8_ = auVar108._24_8_ + auVar43._24_8_;
      auVar31 = vsubpd_avx(auVar108,auVar43);
      local_1e0 = vunpcklpd_avx(auVar44._0_16_,auVar126);
      local_1d0[0] = (double)vmovlpd_avx(auVar31._16_16_);
      local_1d0[1] = 0.0;
      local_1c0 = vblendpd_avx(auVar44._0_16_,auVar31._0_16_,1);
      local_1b0 = vmovhpd_avx(auVar126);
      local_1a8 = 0;
      local_1a0 = vblendpd_avx(auVar31._0_16_,auVar139._16_16_,1);
      local_190 = vmovlpd_avx(auVar44._16_16_);
      local_188 = 0;
      local_170 = vmovlpd_avx(auVar209._16_16_);
      local_168 = 0x3ff0000000000000;
      auVar12 = param_2[2];
      uVar1 = *(undefined8 *)param_2[1];
      auVar44._8_8_ = uVar1;
      auVar44._0_8_ = uVar1;
      auVar44._16_8_ = uVar1;
      auVar44._24_8_ = uVar1;
      auVar44 = vblendpd_avx(ZEXT1632(*param_2),auVar44,4);
      auVar200._0_8_ = *(double *)(param_2[1] + 8);
      auVar140._8_8_ = auVar200._0_8_;
      auVar140._0_8_ = auVar200._0_8_;
      auVar140._16_8_ = auVar200._0_8_;
      auVar140._24_8_ = auVar200._0_8_;
      auVar31 = vblendpd_avx(auVar44,auVar140,8);
      auVar159._0_8_ = auVar31._0_8_ + auVar31._0_8_;
      auVar159._8_8_ = auVar31._8_8_ + auVar31._8_8_;
      auVar159._16_8_ = auVar31._16_8_ + auVar31._16_8_;
      auVar159._24_8_ = auVar31._24_8_ + auVar31._24_8_;
      auVar45._0_8_ = auVar44._0_8_ * auVar159._0_8_;
      auVar45._8_8_ = auVar44._8_8_ * auVar159._8_8_;
      auVar45._16_8_ = auVar44._16_8_ * auVar159._16_8_;
      auVar45._24_8_ = auVar44._24_8_ * auVar159._24_8_;
      auVar44 = vpermpd_avx2(auVar45,0xc1);
      auVar31 = vpermpd_avx2(auVar45,0xda);
      auVar46._0_8_ = auVar44._0_8_ + auVar31._0_8_;
      auVar46._8_8_ = auVar44._8_8_ + auVar31._8_8_;
      auVar46._16_8_ = auVar44._16_8_ + auVar31._16_8_;
      auVar46._24_8_ = auVar44._24_8_ + auVar31._24_8_;
      auVar44 = vsubpd_avx(local_e0,auVar46);
      auVar65 = vunpcklpd_avx(auVar170,local_1f0);
      auVar178._16_8_ = dVar11;
      auVar178._0_16_ = auVar65;
      auVar178._24_8_ = 0;
      auVar16._0_8_ = auVar65._0_8_ * auVar44._0_8_;
      auVar16._8_8_ = auVar65._8_8_ * auVar44._8_8_;
      auVar47._16_8_ = dVar11 * auVar44._16_8_;
      auVar47._0_16_ = auVar16;
      auVar47._24_8_ = auVar44._24_8_ * 0.0;
      uVar1 = *(undefined8 *)*param_2;
      auVar190._8_8_ = uVar1;
      auVar190._0_8_ = uVar1;
      auVar190._16_8_ = uVar1;
      auVar190._24_8_ = uVar1;
      auVar44 = vblendpd_avx(ZEXT1632(*param_2),auVar190,0xc);
      auVar31 = vpermpd_avx2(auVar159,0x29);
      auVar109._0_8_ = auVar44._0_8_ * auVar31._0_8_;
      auVar109._8_8_ = auVar44._8_8_ * auVar31._8_8_;
      auVar109._16_8_ = auVar44._16_8_ * auVar31._16_8_;
      auVar109._24_8_ = auVar44._24_8_ * auVar31._24_8_;
      auVar44 = vpermpd_avx2(auVar159,0x12);
      auVar141._0_8_ = auVar200._0_8_ * auVar44._0_8_;
      auVar141._8_8_ = auVar200._0_8_ * auVar44._8_8_;
      auVar141._16_8_ = auVar200._0_8_ * auVar44._16_8_;
      auVar141._24_8_ = auVar200._0_8_ * auVar44._24_8_;
      auVar148._0_8_ = auVar65._0_8_ * (auVar109._0_8_ + auVar141._0_8_);
      auVar148._8_8_ = auVar65._8_8_ * (auVar109._8_8_ + auVar141._8_8_);
      auVar160._16_8_ = dVar11 * (auVar109._16_8_ + auVar141._16_8_);
      auVar160._0_16_ = auVar148;
      auVar160._24_8_ = (auVar109._24_8_ + auVar141._24_8_) * 0.0;
      auVar31 = vsubpd_avx(auVar109,auVar141);
      auVar65 = vunpcklpd_avx(local_1f0,auVar221);
      uVar1 = *(undefined8 *)(param_2[5] + 8);
      auVar187._8_8_ = uVar1;
      auVar187._0_8_ = uVar1;
      auVar187._16_8_ = uVar1;
      auVar187._24_8_ = uVar1;
      auVar44 = vblendpd_avx(auVar178,auVar187,8);
      auVar170._0_8_ =
           auVar44._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
      auVar170._8_8_ = auVar44._8_8_ * _UNK_150b54508;
      local_160._16_8_ = auVar44._16_8_ * _UNK_150b54510;
      local_160._0_16_ = auVar170;
      local_160._24_8_ = auVar44._24_8_ * _UNK_150b54518;
      auVar127._0_8_ = auVar31._0_8_ * auVar65._0_8_;
      auVar127._8_8_ = auVar31._8_8_ * auVar65._8_8_;
      auVar142._16_8_ = auVar31._16_8_ * *(double *)param_2[4];
      auVar142._0_16_ = auVar127;
      auVar142._24_8_ = auVar31._24_8_ * 0.0;
      local_1f0 = vshufpd_avx(auVar170,auVar170,1);
      auVar171._8_8_ = 0;
      auVar171._0_8_ = *(ulonglong *)param_2[3];
      auVar65 = CONCAT88(auVar148._0_8_,auVar148._0_8_);
      auVar44 = vblendpd_avx(ZEXT1632(auVar16),ZEXT1632(auVar65),2);
      auVar44 = vblendpd_avx(auVar44,auVar142,4);
      auVar31 = vblendpd_avx(ZEXT1632(auVar160._16_16_),auVar142,2);
      auVar31 = vblendpd_avx(auVar31,auVar47,4);
      auVar143._16_16_ = auVar148;
      auVar143._0_16_ = auVar127;
      auVar32 = vshufpd_avx(auVar143,ZEXT1632(auVar16),0xe);
      auVar65 = vmovhpd_avx(auVar171,__real_3ff0000000000000);
      lVar10 = 0x18;
      do {
        dVar11 = *(double *)((longlong)&dStack_1f8 + lVar10);
        auVar200._0_8_ = *(double *)(local_1f0 + lVar10 + 8);
        auVar199._0_8_ = *(double *)(local_1f0 + lVar10);
        dVar66 = *(double *)(local_1e0 + lVar10);
        *(double *)((longlong)adStack_2b8 + lVar10) =
             auVar12._0_8_ * dVar66 +
             auVar32._0_8_ * auVar199._0_8_ +
             auVar44._0_8_ * dVar11 + auVar31._0_8_ * auVar200._0_8_;
        *(double *)((longlong)adStack_2b8 + lVar10 + 8) =
             auVar12._8_8_ * dVar66 +
             auVar32._8_8_ * auVar199._0_8_ +
             auVar44._8_8_ * dVar11 + auVar31._8_8_ * auVar200._0_8_;
        *(double *)((longlong)adStack_2b8 + lVar10 + 0x10) =
             auVar65._0_8_ * dVar66 +
             auVar32._16_8_ * auVar199._0_8_ +
             auVar44._16_8_ * dVar11 + auVar31._16_8_ * auVar200._0_8_;
        *(double *)(local_2a0 + lVar10) =
             auVar65._8_8_ * dVar66 +
             auVar32._24_8_ * auVar199._0_8_ +
             auVar44._24_8_ * dVar11 + auVar31._24_8_ * auVar200._0_8_;
        lVar10 = lVar10 + 0x20;
      } while (lVar10 != 0x98);
      auVar200._0_8_ =
           adStack_298[1] * adStack_298[1] +
           (double)local_2a0 * (double)local_2a0 + adStack_298[0] * adStack_298[0];
      auVar199._0_8_ =
           local_270 * local_270 +
           (double)local_280._0_8_ * (double)local_280._0_8_ +
           (double)local_280._8_8_ * (double)local_280._8_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = __real_3ff0000000000000;
      dVar11 = __real_3ff0000000000000;
      if (0.0 <= auVar200._0_8_ + __real_be45798ee2308c3a) {
        dVar11 = __real_3ff0000000000000 / SQRT(auVar200._0_8_);
      }
      dVar66 = local_250 * local_250 +
               (double)local_260._0_8_ * (double)local_260._0_8_ +
               (double)local_260._8_8_ * (double)local_260._8_8_;
      auVar200._0_8_ = __real_3ff0000000000000;
      if (0.0 <= auVar199._0_8_ + __real_be45798ee2308c3a) {
        auVar200._0_8_ = __real_3ff0000000000000 / SQRT(auVar199._0_8_);
      }
      local_f0 = local_160._16_8_;
      dStack_e8 = local_160._24_8_;
      auVar208 = ZEXT816(0) << 0x40;
      auVar199._0_8_ = __real_3ff0000000000000;
      if (0.0 <= dVar66 + __real_be45798ee2308c3a) {
        auVar199._0_8_ = __real_3ff0000000000000 / SQRT(dVar66);
      }
      auVar149._8_8_ = 0;
      auVar149._0_8_ = (double)local_2a0 * dVar11;
      auVar217._8_8_ = 0;
      auVar217._0_8_ = adStack_298[0] * dVar11;
      auVar12 = vunpcklpd_avx(auVar149,auVar217);
      auVar128._8_8_ = 0;
      auVar128._0_8_ = (double)local_280._0_8_ * auVar200._0_8_;
      auVar172._8_8_ = 0;
      auVar172._0_8_ = auVar200._0_8_ * (double)local_280._8_8_;
      auVar65 = vunpcklpd_avx(auVar128,auVar172);
      auVar94._8_8_ = 0;
      auVar94._0_8_ = auVar199._0_8_ * (double)local_260._8_8_;
      auVar188._8_8_ = 0;
      auVar188._0_8_ = auVar199._0_8_ * (double)local_260._0_8_;
      auVar15 = vunpcklpd_avx(auVar188,auVar94);
      auVar64 = ZEXT816(0);
      auVar44 = vcmppd_avx(ZEXT1632(auVar64),local_160,2);
      auVar31 = vpcmpeqd_avx2(ZEXT832((ulonglong)local_270),ZEXT832((ulonglong)local_270));
      auVar44 = vblendvps_avx(ZEXT1632(auVar64),auVar31,auVar44);
      auVar215._0_8_ =
           (double)CONCAT44(auVar44._4_4_ & uVar9 ^ __real_bff0000000000000._4_4_,
                            auVar44._0_4_ & uVar8 ^ (uint)__real_bff0000000000000);
      auVar215._8_4_ = auVar44._8_4_ & uVar8 ^ (uint)__real_bff0000000000000;
      auVar215._12_4_ = auVar44._12_4_ & uVar9 ^ __real_bff0000000000000._4_4_;
      auVar215._16_4_ = auVar44._16_4_ & uVar8 ^ (uint)__real_bff0000000000000;
      auVar215._20_4_ = auVar44._20_4_ & uVar9 ^ __real_bff0000000000000._4_4_;
      auVar215._24_4_ = auVar44._24_4_ & uVar8 ^ (uint)__real_bff0000000000000;
      auVar215._28_4_ = auVar44._28_4_ & uVar9 ^ __real_bff0000000000000._4_4_;
      local_2a0 = (undefined1  [8])(auVar12._0_8_ * auVar215._0_8_);
      adStack_298[0] = auVar12._8_8_ * auVar215._0_8_;
      auVar161._16_8_ = dVar11 * adStack_298[1] * auVar215._0_8_;
      auVar161._0_16_ = _local_2a0;
      auVar161._24_8_ = auVar215._0_8_ * 0.0;
      adStack_298[1] = (double)vmovlpd_avx(auVar161._16_16_);
      auVar44 = vpermpd_avx2(auVar215,0x55);
      local_280._0_8_ = auVar44._0_8_ * auVar65._0_8_;
      local_280._8_8_ = auVar44._8_8_ * auVar65._8_8_;
      auVar110._16_8_ = auVar44._16_8_ * local_270 * auVar200._0_8_;
      auVar110._0_16_ = local_280;
      auVar110._24_8_ = auVar44._24_8_ * 0.0;
      local_270 = (double)vmovlpd_avx(auVar110._16_16_);
      auVar44 = vpermpd_avx2(auVar215,0xaa);
      local_260._0_8_ = auVar44._0_8_ * auVar15._0_8_;
      local_260._8_8_ = auVar44._8_8_ * auVar15._8_8_;
      auVar179._16_8_ = auVar44._16_8_ * auVar199._0_8_ * local_250;
      auVar179._0_16_ = local_260;
      auVar179._24_8_ = auVar44._24_8_ * 0.0;
      local_250 = (double)vmovlpd_avx(auVar179._16_16_);
      auVar48._8_8_ = __real_0010000000000000;
      auVar48._0_8_ = __real_0010000000000000;
      auVar48._16_8_ = __real_0010000000000000;
      auVar48._24_8_ = __real_0010000000000000;
      auVar44 = vblendpd_avx(auVar161,auVar48,8);
      auVar216._0_8_ = __real_7fffffffffffffff & auVar44._0_8_;
      auVar216._8_8_ = __real_7fffffffffffffff & auVar44._8_8_;
      auVar216._16_8_ = __real_7fffffffffffffff & auVar44._16_8_;
      auVar216._24_8_ = __real_7fffffffffffffff & auVar44._24_8_;
      auVar191._8_8_ = __real_3f1a36e2eb1c432d;
      auVar191._0_8_ = __real_3f1a36e2eb1c432d;
      auVar191._16_8_ = __real_3f1a36e2eb1c432d;
      auVar191._24_8_ = __real_3f1a36e2eb1c432d;
      auVar44 = vcmppd_avx(auVar216,auVar191,6);
      auVar44 = vpackssdw_avx2(auVar44,ZEXT1632(auVar64));
      if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) == 0 && (SUB321(auVar44 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar44 >> 0x5f,0) & 1) == 0) && SUB321(auVar44 >> 0x7f,0) == '\0') &&
            (SUB321(auVar44 >> 0x9f,0) & 1) == 0) && SUB321(auVar44 >> 0xbf,0) == '\0') &&
          (SUB321(auVar44 >> 0xdf,0) & 1) == 0) && -1 < auVar44[0x1f]) {
        auVar131 = SUB6416(ZEXT864(0),0) << 0x40;
        auVar20 = ZEXT816(0) << 0x40;
      }
      else {
        auVar44 = vblendpd_avx(auVar110,auVar48,8);
        auVar212._0_8_ = auVar44._0_8_ & __real_7fffffffffffffff;
        auVar212._8_8_ = auVar44._8_8_ & __real_7fffffffffffffff;
        auVar212._16_8_ = auVar44._16_8_ & __real_7fffffffffffffff;
        auVar212._24_8_ = auVar44._24_8_ & __real_7fffffffffffffff;
        auVar44 = vcmppd_avx(auVar212,auVar191,6);
        auVar44 = vpackssdw_avx2(auVar44,ZEXT1632(auVar64));
        if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) != 0 || (SUB321(auVar44 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar44 >> 0x5f,0) & 1) != 0) || SUB321(auVar44 >> 0x7f,0) != '\0') ||
              (SUB321(auVar44 >> 0x9f,0) & 1) != 0) || SUB321(auVar44 >> 0xbf,0) != '\0') ||
            (SUB321(auVar44 >> 0xdf,0) & 1) != 0) || auVar44[0x1f] < '\0') {
          auVar44 = vblendpd_avx(auVar179,auVar48,8);
          auVar49._0_8_ = __real_7fffffffffffffff & auVar44._0_8_;
          auVar49._8_8_ = __real_7fffffffffffffff & auVar44._8_8_;
          auVar49._16_8_ = __real_7fffffffffffffff & auVar44._16_8_;
          auVar49._24_8_ = __real_7fffffffffffffff & auVar44._24_8_;
          auVar44 = vcmppd_avx(auVar49,auVar191,6);
          auVar44 = vpackssdw_avx2(auVar44,ZEXT832(0) << 0x40);
          if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) != 0 || (SUB321(auVar44 >> 0x3f,0) & 1) != 0) ||
                  (SUB321(auVar44 >> 0x5f,0) & 1) != 0) || SUB321(auVar44 >> 0x7f,0) != '\0') ||
                (SUB321(auVar44 >> 0x9f,0) & 1) != 0) || SUB321(auVar44 >> 0xbf,0) != '\0') ||
              (SUB321(auVar44 >> 0xdf,0) & 1) != 0) || auVar44[0x1f] < '\0') {
            auVar12 = vshufpd_avx(local_280,local_280,1);
            dVar11 = auVar179._16_8_ + (double)local_2a0 + auVar12._0_8_;
            if (dVar11 <= 0.0) {
              bVar6 = (double)local_2a0 < auVar12._0_8_;
              uVar67 = 2;
              if (auVar179._16_8_ <= *(double *)(local_2a0 + ((uint)bVar6 * 0x20 + (uint)bVar6 * 8))
                 ) {
                uVar67 = (ulonglong)bVar6;
              }
              iVar2 = *(int *)(&DAT_151c6ce40 + uVar67 * 4);
              lVar10 = (longlong)iVar2;
              iVar3 = *(int *)(&DAT_151c6ce40 + lVar10 * 4);
              iVar5 = (int)uVar67;
              dVar11 = __real_3ff0000000000000 /
                       SQRT(((*(double *)(local_2a0 + (uint)(iVar5 * 0x28)) -
                             *(double *)(local_2a0 + lVar10 * 0x28)) -
                            *(double *)(local_2a0 + (longlong)iVar3 * 0x28)) +
                            __real_3ff0000000000000);
              *(double *)((longlong)&local_210 + (ulonglong)(uint)(iVar5 * 8)) =
                   (__real_3ff0000000000000 / dVar11) * __real_3fe0000000000000;
              dVar11 = dVar11 * __real_3fe0000000000000;
              (&local_210)[lVar10] =
                   (*(double *)(local_2a0 + (longlong)(iVar2 + iVar5 * 4) * 8) +
                   *(double *)(local_2a0 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar11;
              (&local_210)[iVar3] =
                   dVar11 * (*(double *)(local_2a0 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                            *(double *)(local_2a0 + (longlong)(iVar5 + iVar3 * 4) * 8));
              auVar17._8_8_ = 0;
              auVar17._0_8_ =
                   dVar11 * (*(double *)(local_2a0 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                            *(double *)(local_2a0 + (longlong)(iVar2 + iVar3 * 4) * 8));
              auVar131._8_8_ = 0;
              auVar131._0_8_ = local_210;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = local_208;
              auVar208._8_8_ = 0;
              auVar208._0_8_ = local_200;
            }
            else {
              auVar12 = vshufpd_avx(_local_2a0,_local_2a0,1);
              auVar65 = vshufpd_avx(local_260,local_260,1);
              auVar200._0_8_ = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + dVar11);
              dVar11 = auVar200._0_8_ * __real_3fe0000000000000;
              auVar131._8_8_ = 0;
              auVar131._0_8_ = dVar11 * (auVar110._16_8_ - auVar65._0_8_);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = dVar11 * ((double)local_260._0_8_ - auVar161._16_8_);
              auVar208._8_8_ = 0;
              auVar208._0_8_ = dVar11 * (auVar12._0_8_ - (double)local_280._0_8_);
              auVar17._8_8_ = 0;
              auVar17._0_8_ = __real_3fe0000000000000 * (__real_3ff0000000000000 / auVar200._0_8_);
            }
            goto LAB_140c7c639;
          }
        }
        auVar131 = SUB6416(ZEXT864(0),0) << 0x40;
        auVar20 = ZEXT816(0);
        auVar208 = SUB6416(ZEXT864(0),0) << 0x40;
      }
LAB_140c7c639:
      auVar12 = vunpcklpd_avx(auVar208,auVar17);
      auVar65 = vunpcklpd_avx(auVar131,auVar20);
      auVar200._0_8_ = auVar65._0_8_;
      auVar199._0_8_ = auVar65._8_8_;
      dVar66 = auVar12._0_8_;
      auVar26._0_8_ = dVar66 * dVar66 + auVar200._0_8_ * auVar200._0_8_;
      auVar202._16_8_ = auVar12._8_8_;
      auVar26._8_8_ = auVar202._16_8_ * auVar202._16_8_ + auVar199._0_8_ * auVar199._0_8_;
      auVar12 = vshufpd_avx(auVar26,auVar26,1);
      dVar11 = auVar26._0_8_ + auVar12._0_8_;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = __real_3e45798ee2308c3a;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = dVar11;
      auVar12 = vcmpsd_avx(auVar71,auVar27,6);
      uVar67 = ~auVar12._0_8_ & __real_ffffffffffffffff;
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      auVar119._0_8_ =
           ~uVar67 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar119._8_8_ = ~uVar67 & _UNK_150b54548;
      auVar119._16_8_ = ~uVar67 & _UNK_150b54550;
      auVar119._24_8_ = ~uVar67 & _UNK_150b54558;
      auVar200._0_8_ = (double)((ulonglong)(auVar200._0_8_ * dVar11) & uVar67);
      auVar200._8_8_ = (ulonglong)(auVar199._0_8_ * dVar11) & uVar67;
      auVar204._16_8_ = (ulonglong)(dVar66 * dVar11) & uVar67;
      auVar204._0_16_ = auVar200;
      auVar204._24_8_ = (ulonglong)(auVar202._16_8_ * dVar11) & uVar67;
      auVar65 = auVar204._16_16_ | auVar119._16_16_;
      auVar12 = vshufps_avx(auVar200,auVar200,0x4e);
      auVar202._16_8_ = auVar65._0_8_;
      auVar65 = vshufps_avx(auVar65,auVar65,0x4e);
      dVar11 = auVar65._0_8_;
      auVar69._8_8_ = 0.0;
      auVar69._0_8_ = (double)uStack_240;
      auVar100._8_8_ = 0;
      auVar100._0_8_ = uStack_238;
      auVar90._8_8_ = 0;
      auVar90._0_8_ = uStack_230;
      auVar221._8_8_ = dStack_e8;
      auVar221._0_8_ = local_f0;
    }
    param_3 = param_3 * __real_3f000000;
    auVar65 = vinsertps_avx(ZEXT416(param_6),ZEXT416(param_7),0x1c);
    auVar65 = vinsertps_avx(auVar65,ZEXT416(param_8),0x28);
    auVar28._0_4_ = param_3 * auVar65._0_4_;
    auVar28._4_4_ = param_3 * auVar65._4_4_;
    auVar28._8_4_ = param_3 * auVar65._8_4_;
    auVar28._12_4_ = param_3 * auVar65._12_4_;
    auVar32 = vcvtps2pd_avx(auVar28);
    auVar65 = vunpcklpd_avx(auVar69,auVar100);
    auVar101._8_8_ = auVar200._0_8_;
    auVar101._0_8_ = auVar200._0_8_;
    auVar120._16_8_ = auVar200._0_8_;
    auVar120._0_16_ = auVar101;
    auVar120._24_8_ = auVar200._0_8_;
    auVar12 = vunpcklpd_avx(auVar101,auVar12);
    auVar58._8_8_ = auVar202._16_8_;
    auVar58._0_8_ = auVar202._16_8_;
    auVar58._16_8_ = auVar202._16_8_;
    auVar58._24_8_ = auVar202._16_8_;
    auVar44 = vblendpd_avx(ZEXT1632(auVar12),auVar58,4);
    auVar182._8_8_ = dVar11;
    auVar182._0_8_ = dVar11;
    auVar182._16_8_ = dVar11;
    auVar182._24_8_ = dVar11;
    auVar31 = vblendpd_avx(auVar44,auVar182,8);
    auVar194._0_8_ = auVar31._0_8_ + auVar31._0_8_;
    auVar194._8_8_ = auVar31._8_8_ + auVar31._8_8_;
    auVar194._16_8_ = auVar31._16_8_ + auVar31._16_8_;
    auVar194._24_8_ = auVar31._24_8_ + auVar31._24_8_;
    auVar59._0_8_ = auVar44._0_8_ * auVar194._0_8_;
    auVar59._8_8_ = auVar44._8_8_ * auVar194._8_8_;
    auVar59._16_8_ = auVar44._16_8_ * auVar194._16_8_;
    auVar59._24_8_ = auVar44._24_8_ * auVar194._24_8_;
    auVar44 = vpermpd_avx2(auVar59,0xc1);
    auVar31 = vpermpd_avx2(auVar59,0xda);
    auVar60._0_8_ = auVar44._0_8_ + auVar31._0_8_;
    auVar60._8_8_ = auVar44._8_8_ + auVar31._8_8_;
    auVar60._16_8_ = auVar44._16_8_ + auVar31._16_8_;
    auVar60._24_8_ = auVar44._24_8_ + auVar31._24_8_;
    auVar44 = vsubpd_avx(local_e0,auVar60);
    auVar15 = vunpcklpd_avx(auVar170,local_1f0);
    auVar29._0_8_ = auVar15._0_8_ * auVar44._0_8_;
    auVar29._8_8_ = auVar15._8_8_ * auVar44._8_8_;
    auVar61._16_8_ = auVar221._0_8_ * auVar44._16_8_;
    auVar61._0_16_ = auVar29;
    auVar61._24_8_ = auVar221._8_8_ * auVar44._24_8_;
    auVar44 = vblendpd_avx(ZEXT1632(auVar12),auVar120,0xc);
    auVar31 = vpermpd_avx2(auVar194,0x29);
    auVar121._0_8_ = auVar44._0_8_ * auVar31._0_8_;
    auVar121._8_8_ = auVar44._8_8_ * auVar31._8_8_;
    auVar121._16_8_ = auVar44._16_8_ * auVar31._16_8_;
    auVar121._24_8_ = auVar44._24_8_ * auVar31._24_8_;
    auVar44 = vpermpd_avx2(auVar194,0x12);
    auVar166._0_8_ = dVar11 * auVar44._0_8_;
    auVar166._8_8_ = dVar11 * auVar44._8_8_;
    auVar166._16_8_ = dVar11 * auVar44._16_8_;
    auVar166._24_8_ = dVar11 * auVar44._24_8_;
    auVar174._0_8_ = auVar15._0_8_ * (auVar121._0_8_ + auVar166._0_8_);
    auVar174._8_8_ = auVar15._8_8_ * (auVar121._8_8_ + auVar166._8_8_);
    auVar183._16_8_ = auVar221._0_8_ * (auVar121._16_8_ + auVar166._16_8_);
    auVar183._0_16_ = auVar174;
    auVar183._24_8_ = auVar221._8_8_ * (auVar121._24_8_ + auVar166._24_8_);
    auVar44 = vsubpd_avx(auVar121,auVar166);
    auVar12 = vunpcklpd_avx(local_1f0,auVar221);
    auVar153._0_8_ = auVar44._0_8_ * auVar12._0_8_;
    auVar153._8_8_ = auVar44._8_8_ * auVar12._8_8_;
    auVar167._16_8_ = auVar44._16_8_ * auVar170._0_8_;
    auVar167._0_16_ = auVar153;
    auVar167._24_8_ = auVar44._24_8_ * auVar170._8_8_;
    auVar44 = vsubpd_avx(auVar32,auVar32);
    auVar195._0_8_ = auVar44._0_8_ * __real_3fe0000000000000;
    auVar195._8_8_ = auVar44._8_8_ * __real_3fe0000000000000;
    auVar195._16_8_ = auVar44._16_8_ * __real_3fe0000000000000;
    auVar195._24_8_ = auVar44._24_8_ * __real_3fe0000000000000;
    auVar118._0_8_ = (auVar32._0_8_ + auVar32._0_8_) * __real_3fe0000000000000;
    auVar118._8_8_ = (auVar32._8_8_ + auVar32._8_8_) * __real_3fe0000000000000;
    auVar118._16_8_ = (auVar32._16_8_ + auVar32._16_8_) * __real_3fe0000000000000;
    auVar118._24_8_ = (auVar32._24_8_ + auVar32._24_8_) * __real_3fe0000000000000;
    auVar12 = CONCAT88(auVar174._0_8_,auVar174._0_8_);
    auVar44 = vblendpd_avx(ZEXT1632(auVar29),ZEXT1632(auVar12),2);
    auVar44 = vblendpd_avx(auVar44,auVar167,4);
    auVar33 = vpermpd_avx2(auVar195,0x55);
    auVar207._16_16_ = auVar174;
    auVar207._0_16_ = auVar153;
    auVar32 = vshufpd_avx(auVar207,ZEXT1632(auVar29),0xe);
    auVar53 = vpermpd_avx2(auVar195,0xaa);
    auVar31 = vblendpd_avx(ZEXT1632(auVar183._16_16_),auVar167,2);
    auVar31 = vblendpd_avx(auVar31,auVar61,4);
    auVar12 = vmovhpd_avx(auVar90,__real_3ff0000000000000);
    auVar87._0_8_ =
         auVar65._0_8_ +
         auVar31._0_8_ * auVar53._0_8_ +
         auVar44._0_8_ * auVar195._0_8_ + auVar33._0_8_ * auVar32._0_8_;
    auVar87._8_8_ =
         auVar65._8_8_ +
         auVar31._8_8_ * auVar53._8_8_ +
         auVar44._8_8_ * auVar195._0_8_ + auVar33._8_8_ * auVar32._8_8_;
    auVar87._16_8_ =
         auVar12._0_8_ +
         auVar31._16_8_ * auVar53._16_8_ +
         auVar44._16_8_ * auVar195._0_8_ + auVar33._16_8_ * auVar32._16_8_;
    auVar87._24_8_ =
         auVar12._8_8_ +
         auVar31._24_8_ * auVar53._24_8_ +
         auVar44._24_8_ * auVar195._0_8_ + auVar33._24_8_ * auVar32._24_8_;
    auVar33 = vpermpd_avx2(auVar118,0x55);
    dVar11 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar118._0_8_ * auVar44._0_8_)) +
             (double)(__real_7fffffffffffffff & (ulonglong)(auVar32._0_8_ * auVar33._0_8_));
    auVar200._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(auVar118._0_8_ * auVar44._8_8_)) +
         (double)(__real_7fffffffffffffff & (ulonglong)(auVar32._8_8_ * auVar33._8_8_));
    auVar199._0_8_ =
         (double)(__real_7fffffffffffffff & (ulonglong)(auVar118._0_8_ * auVar44._16_8_)) +
         (double)(__real_7fffffffffffffff & (ulonglong)(auVar32._16_8_ * auVar33._16_8_));
    dVar66 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar118._0_8_ * auVar44._24_8_)) +
             (double)(__real_7fffffffffffffff & (ulonglong)(auVar32._24_8_ * auVar33._24_8_));
    goto LAB_140c7c83f;
  }
  auVar184._8_8_ = 0.0;
  auVar184._0_8_ = *(double *)param_2[4];
  auVar205._8_8_ = 0;
  auVar205._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar11 = *(double *)param_2[5];
  local_1f0._8_8_ = 0;
  local_1f0._0_8_ = dVar11;
  auVar32 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar31,1);
  auVar32 = vpackssdw_avx2(auVar32,auVar31);
  auVar12 = vpackssdw_avx(auVar32._0_16_,auVar32._16_16_);
  auVar65 = vpshufd_avx(auVar12,0xd8);
  auVar31 = vpcmpgtd_avx2(auVar31,auVar44);
  auVar12 = vpackssdw_avx(auVar31._0_16_,auVar31._16_16_);
  auVar12 = vpand_avx(auVar65,auVar12);
  auVar12 = vpsllw_avx(auVar12,0xf);
  if ((((((((SUB161(auVar12 >> 0xf,0) & 1) == 0 && (SUB161(auVar12 >> 0x1f,0) & 1) == 0) &&
          (SUB161(auVar12 >> 0x2f,0) & 1) == 0) && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar12 >> 0x4f,0) & 1) == 0) && (SUB161(auVar12 >> 0x5f,0) & 1) == 0) &&
      (SUB161(auVar12 >> 0x6f,0) & 1) == 0) && -1 < auVar12[0xf]) {
    auVar129._8_8_ = 0;
    auVar129._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar11 = *(double *)*param_2;
    auVar95._8_8_ = dVar11;
    auVar95._0_8_ = dVar11;
    auVar111._16_8_ = dVar11;
    auVar111._0_16_ = auVar95;
    auVar111._24_8_ = dVar11;
    auVar31 = vpermpd_avx2(auVar218,0x1b);
    auVar200._0_8_ = *(double *)(param_2[1] + 8);
    auVar83._8_8_ = auVar200._0_8_;
    auVar83._0_8_ = auVar200._0_8_;
    auVar83._16_8_ = auVar200._0_8_;
    auVar83._24_8_ = auVar200._0_8_;
    auVar199._0_8_ = *(double *)(*param_2 + 8);
    auVar18._8_8_ = auVar199._0_8_;
    auVar18._0_8_ = auVar199._0_8_;
    auVar50._16_8_ = auVar199._0_8_;
    auVar50._0_16_ = auVar18;
    auVar50._24_8_ = auVar199._0_8_;
    auVar32 = vpermpd_avx2(auVar218,0x4e);
    dVar66 = *(double *)param_2[1];
    auVar150._8_8_ = dVar66;
    auVar150._0_8_ = dVar66;
    auVar162._16_8_ = dVar66;
    auVar162._0_16_ = auVar150;
    auVar162._24_8_ = dVar66;
    auVar44 = vshufpd_avx(auVar218,auVar218,5);
    auVar196._0_8_ =
         auVar44._0_8_ * dVar66 *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         auVar32._0_8_ * auVar199._0_8_ *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
         auVar218._0_8_ * auVar200._0_8_ +
         auVar31._0_8_ * dVar11 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
    auVar196._8_8_ =
         auVar44._8_8_ * dVar66 * _UNK_150b54428 +
         auVar32._8_8_ * auVar199._0_8_ * _UNK_150b54408 +
         auVar218._8_8_ * auVar200._0_8_ + auVar31._8_8_ * dVar11 * _UNK_150b543e8;
    auVar201._16_8_ =
         auVar44._16_8_ * dVar66 * _UNK_150b54430 +
         auVar32._16_8_ * auVar199._0_8_ * _UNK_150b54410 +
         auVar218._16_8_ * auVar200._0_8_ + auVar31._16_8_ * dVar11 * _UNK_150b543f0;
    auVar201._0_16_ = auVar196;
    auVar201._24_8_ =
         auVar44._24_8_ * dVar66 * _UNK_150b54438 +
         auVar32._24_8_ * auVar199._0_8_ * _UNK_150b54418 +
         auVar218._24_8_ * auVar200._0_8_ + auVar31._24_8_ * dVar11 * _UNK_150b543f8;
    auVar12 = vshufpd_avx(auVar196,auVar196,1);
    auVar65 = vshufpd_avx(auVar201._16_16_,auVar201._16_16_,1);
    dVar11 = auVar65._0_8_;
    auVar65 = vunpcklpd_avx(local_1f0,auVar129);
    auVar15 = vunpcklpd_avx(auVar184,auVar205);
    auVar144._0_8_ = local_180._0_8_ * auVar15._0_8_;
    auVar144._8_8_ = local_180._8_8_ * auVar15._8_8_;
    auVar144._16_8_ = auVar209._16_8_ * auVar65._0_8_;
    auVar144._24_8_ = auVar209._24_8_ * auVar65._8_8_;
    auVar53 = vpermpd_avx2(auVar144,0xc9);
    auVar65 = vunpcklpd_avx(auVar95,auVar18);
    auVar44 = vblendpd_avx(auVar111,ZEXT1632(auVar65),3);
    auVar44 = vblendpd_avx(auVar44,auVar162,4);
    auVar31 = vblendpd_avx(auVar44,auVar83,8);
    auVar65 = vunpcklpd_avx(auVar18,auVar150);
    auVar32 = vblendpd_avx(auVar50,ZEXT1632(auVar65),3);
    auVar32 = vblendpd_avx(auVar32,auVar111,4);
    auVar33 = vblendpd_avx(auVar32,auVar83,8);
    auVar199._0_8_ = auVar53._0_8_ * auVar31._0_8_ - auVar144._0_8_ * auVar33._0_8_;
    dVar66 = auVar53._8_8_ * auVar31._8_8_ - auVar144._8_8_ * auVar33._8_8_;
    auVar202._16_8_ = auVar53._16_8_ * auVar31._16_8_ - auVar144._16_8_ * auVar33._16_8_;
    dVar122 = auVar53._24_8_ * auVar31._24_8_ - auVar144._24_8_ * auVar33._24_8_;
    auVar112._0_8_ = auVar199._0_8_ + auVar199._0_8_;
    auVar112._8_8_ = dVar66 + dVar66;
    auVar112._16_8_ = auVar202._16_8_ + auVar202._16_8_;
    auVar112._24_8_ = dVar122 + dVar122;
    auVar31 = vpermpd_avx2(auVar112,0xc9);
    auVar33 = vpermpd_avx2(auVar112,0xd2);
    auVar51._0_8_ = auVar44._0_8_ * auVar33._0_8_ - auVar32._0_8_ * auVar31._0_8_;
    auVar51._8_8_ = auVar44._8_8_ * auVar33._8_8_ - auVar32._8_8_ * auVar31._8_8_;
    auVar51._16_8_ = auVar44._16_8_ * auVar33._16_8_ - auVar32._16_8_ * auVar31._16_8_;
    auVar51._24_8_ = auVar44._24_8_ * auVar33._24_8_ - auVar32._24_8_ * auVar31._24_8_;
    auVar44 = vpermpd_avx2(auVar51,0xc9);
    auVar68._0_8_ =
         *(double *)param_2[2] + auVar31._0_8_ * auVar200._0_8_ + auVar144._0_8_ + auVar44._0_8_;
    auVar68._8_8_ =
         *(double *)(param_2[2] + 8) +
         auVar31._8_8_ * auVar200._0_8_ + auVar144._8_8_ + auVar44._8_8_;
    auVar84._16_8_ =
         *(double *)param_2[3] + auVar31._16_8_ * auVar200._0_8_ + auVar144._16_8_ + auVar44._16_8_;
    auVar84._0_16_ = auVar68;
    auVar84._24_8_ = auVar31._24_8_ * auVar200._0_8_ + auVar144._24_8_ + auVar44._24_8_ + 0.0;
    auVar98 = vshufpd_avx(auVar68,auVar68,1);
    auVar89 = auVar84._16_16_;
    auVar199._0_8_ = auVar196._0_8_;
  }
  else {
    local_120._8_8_ = __real_8000000000000000;
    local_120._0_8_ = __real_8000000000000000;
    uStack_110 = __real_8000000000000000;
    uStack_108 = __real_8000000000000000;
    auVar35._0_8_ = auVar218._0_8_ + auVar218._0_8_;
    auVar35._8_8_ = auVar218._8_8_ + auVar218._8_8_;
    auVar35._16_8_ = auVar218._16_8_ + auVar218._16_8_;
    auVar35._24_8_ = auVar218._24_8_ + auVar218._24_8_;
    auVar78._0_8_ = auVar218._0_8_ * auVar35._0_8_;
    auVar78._8_8_ = auVar218._8_8_ * auVar35._8_8_;
    auVar78._16_8_ = auVar218._16_8_ * auVar35._16_8_;
    auVar78._24_8_ = auVar218._24_8_ * auVar35._24_8_;
    auVar31 = vpermpd_avx2(auVar78,0xc1);
    auVar32 = vpermpd_avx2(auVar78,0xda);
    auVar79._0_8_ = auVar31._0_8_ + auVar32._0_8_;
    auVar79._8_8_ = auVar31._8_8_ + auVar32._8_8_;
    auVar79._16_8_ = auVar31._16_8_ + auVar32._16_8_;
    auVar79._24_8_ = auVar31._24_8_ + auVar32._24_8_;
    auVar31 = vsubpd_avx(local_e0,auVar79);
    auVar32 = vpermpd_avx2(auVar218,4);
    auVar33 = vpermpd_avx2(auVar35,0x29);
    auVar106._0_8_ = auVar32._0_8_ * auVar33._0_8_;
    auVar106._8_8_ = auVar32._8_8_ * auVar33._8_8_;
    auVar106._16_8_ = auVar32._16_8_ * auVar33._16_8_;
    auVar106._24_8_ = auVar32._24_8_ * auVar33._24_8_;
    auVar32 = vpermpd_avx2(auVar218,0xff);
    auVar33 = vpermpd_avx2(auVar35,0x12);
    auVar36._0_8_ = auVar32._0_8_ * auVar33._0_8_;
    auVar36._8_8_ = auVar32._8_8_ * auVar33._8_8_;
    auVar36._16_8_ = auVar32._16_8_ * auVar33._16_8_;
    auVar36._24_8_ = auVar32._24_8_ * auVar33._24_8_;
    auVar124._0_8_ = auVar106._0_8_ + auVar36._0_8_;
    auVar124._8_8_ = auVar106._8_8_ + auVar36._8_8_;
    auVar134._16_8_ = auVar106._16_8_ + auVar36._16_8_;
    auVar134._0_16_ = auVar124;
    auVar134._24_8_ = auVar106._24_8_ + auVar36._24_8_;
    auVar32 = vsubpd_avx(auVar106,auVar36);
    local_1e0 = vunpcklpd_avx(auVar31._0_16_,auVar124);
    local_1d0[0] = (double)vmovlpd_avx(auVar32._16_16_);
    local_1d0[1] = 0.0;
    local_1c0 = vblendpd_avx(auVar31._0_16_,auVar32._0_16_,1);
    local_1b0 = vmovhpd_avx(auVar124);
    local_1a8 = 0;
    local_1a0 = vblendpd_avx(auVar32._0_16_,auVar134._16_16_,1);
    local_190 = vmovlpd_avx(auVar31._16_16_);
    local_188 = 0;
    local_170 = vmovlpd_avx(auVar209._16_16_);
    local_168 = 0x3ff0000000000000;
    auVar12 = param_2[2];
    uVar1 = *(undefined8 *)param_2[1];
    auVar37._8_8_ = uVar1;
    auVar37._0_8_ = uVar1;
    auVar37._16_8_ = uVar1;
    auVar37._24_8_ = uVar1;
    auVar31 = vblendpd_avx(ZEXT1632(*param_2),auVar37,4);
    auVar200._0_8_ = *(double *)(param_2[1] + 8);
    auVar135._8_8_ = auVar200._0_8_;
    auVar135._0_8_ = auVar200._0_8_;
    auVar135._16_8_ = auVar200._0_8_;
    auVar135._24_8_ = auVar200._0_8_;
    auVar32 = vblendpd_avx(auVar31,auVar135,8);
    auVar155._0_8_ = auVar32._0_8_ + auVar32._0_8_;
    auVar155._8_8_ = auVar32._8_8_ + auVar32._8_8_;
    auVar155._16_8_ = auVar32._16_8_ + auVar32._16_8_;
    auVar155._24_8_ = auVar32._24_8_ + auVar32._24_8_;
    auVar38._0_8_ = auVar31._0_8_ * auVar155._0_8_;
    auVar38._8_8_ = auVar31._8_8_ * auVar155._8_8_;
    auVar38._16_8_ = auVar31._16_8_ * auVar155._16_8_;
    auVar38._24_8_ = auVar31._24_8_ * auVar155._24_8_;
    auVar31 = vpermpd_avx2(auVar38,0xc1);
    auVar32 = vpermpd_avx2(auVar38,0xda);
    auVar39._0_8_ = auVar31._0_8_ + auVar32._0_8_;
    auVar39._8_8_ = auVar31._8_8_ + auVar32._8_8_;
    auVar39._16_8_ = auVar31._16_8_ + auVar32._16_8_;
    auVar39._24_8_ = auVar31._24_8_ + auVar32._24_8_;
    auVar31 = vsubpd_avx(local_e0,auVar39);
    auVar65 = vunpcklpd_avx(auVar184,auVar205);
    auVar176._16_8_ = dVar11;
    auVar176._0_16_ = auVar65;
    auVar176._24_8_ = 0;
    auVar13._0_8_ = auVar65._0_8_ * auVar31._0_8_;
    auVar13._8_8_ = auVar65._8_8_ * auVar31._8_8_;
    auVar40._16_8_ = dVar11 * auVar31._16_8_;
    auVar40._0_16_ = auVar13;
    auVar40._24_8_ = auVar31._24_8_ * 0.0;
    uVar1 = *(undefined8 *)*param_2;
    auVar189._8_8_ = uVar1;
    auVar189._0_8_ = uVar1;
    auVar189._16_8_ = uVar1;
    auVar189._24_8_ = uVar1;
    auVar31 = vblendpd_avx(ZEXT1632(*param_2),auVar189,0xc);
    auVar32 = vpermpd_avx2(auVar155,0x29);
    auVar107._0_8_ = auVar31._0_8_ * auVar32._0_8_;
    auVar107._8_8_ = auVar31._8_8_ * auVar32._8_8_;
    auVar107._16_8_ = auVar31._16_8_ * auVar32._16_8_;
    auVar107._24_8_ = auVar31._24_8_ * auVar32._24_8_;
    auVar31 = vpermpd_avx2(auVar155,0x12);
    auVar136._0_8_ = auVar200._0_8_ * auVar31._0_8_;
    auVar136._8_8_ = auVar200._0_8_ * auVar31._8_8_;
    auVar136._16_8_ = auVar200._0_8_ * auVar31._16_8_;
    auVar136._24_8_ = auVar200._0_8_ * auVar31._24_8_;
    auVar146._0_8_ = auVar65._0_8_ * (auVar107._0_8_ + auVar136._0_8_);
    auVar146._8_8_ = auVar65._8_8_ * (auVar107._8_8_ + auVar136._8_8_);
    auVar156._16_8_ = dVar11 * (auVar107._16_8_ + auVar136._16_8_);
    auVar156._0_16_ = auVar146;
    auVar156._24_8_ = (auVar107._24_8_ + auVar136._24_8_) * 0.0;
    auVar32 = vsubpd_avx(auVar107,auVar136);
    auVar65 = vunpcklpd_avx(auVar205,local_1f0);
    uVar1 = *(undefined8 *)(param_2[5] + 8);
    auVar185._8_8_ = uVar1;
    auVar185._0_8_ = uVar1;
    auVar185._16_8_ = uVar1;
    auVar185._24_8_ = uVar1;
    auVar31 = vblendpd_avx(auVar176,auVar185,8);
    auVar184._0_8_ =
         auVar31._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    auVar184._8_8_ = auVar31._8_8_ * _UNK_150b54508;
    auVar186._16_8_ = auVar31._16_8_ * _UNK_150b54510;
    auVar186._0_16_ = auVar184;
    auVar186._24_8_ = auVar31._24_8_ * _UNK_150b54518;
    auVar125._0_8_ = auVar32._0_8_ * auVar65._0_8_;
    auVar125._8_8_ = auVar32._8_8_ * auVar65._8_8_;
    auVar137._16_8_ = auVar32._16_8_ * *(double *)param_2[4];
    auVar137._0_16_ = auVar125;
    auVar137._24_8_ = auVar32._24_8_ * 0.0;
    auVar205 = vshufpd_avx(auVar184,auVar184,1);
    local_160._0_16_ = auVar205;
    auVar168._8_8_ = 0;
    auVar168._0_8_ = *(ulonglong *)param_2[3];
    auVar65 = CONCAT88(auVar146._0_8_,auVar146._0_8_);
    auVar31 = vblendpd_avx(ZEXT1632(auVar13),ZEXT1632(auVar65),2);
    auVar31 = vblendpd_avx(auVar31,auVar137,4);
    auVar32 = vblendpd_avx(ZEXT1632(auVar156._16_16_),auVar137,2);
    auVar32 = vblendpd_avx(auVar32,auVar40,4);
    auVar138._16_16_ = auVar146;
    auVar138._0_16_ = auVar125;
    auVar33 = vshufpd_avx(auVar138,ZEXT1632(auVar13),0xe);
    auVar65 = vmovhpd_avx(auVar168,__real_3ff0000000000000);
    lVar10 = 0x18;
    do {
      dVar11 = *(double *)((longlong)&dStack_1f8 + lVar10);
      auVar200._0_8_ = *(double *)(local_1f0 + lVar10 + 8);
      auVar199._0_8_ = *(double *)(local_1f0 + lVar10);
      dVar66 = *(double *)(local_1e0 + lVar10);
      *(double *)((longlong)adStack_2b8 + lVar10) =
           auVar12._0_8_ * dVar66 +
           auVar33._0_8_ * auVar199._0_8_ + auVar31._0_8_ * dVar11 + auVar32._0_8_ * auVar200._0_8_;
      *(double *)((longlong)adStack_2b8 + lVar10 + 8) =
           auVar12._8_8_ * dVar66 +
           auVar33._8_8_ * auVar199._0_8_ + auVar31._8_8_ * dVar11 + auVar32._8_8_ * auVar200._0_8_;
      *(double *)((longlong)adStack_2b8 + lVar10 + 0x10) =
           auVar65._0_8_ * dVar66 +
           auVar33._16_8_ * auVar199._0_8_ +
           auVar31._16_8_ * dVar11 + auVar32._16_8_ * auVar200._0_8_;
      *(double *)(local_2a0 + lVar10) =
           auVar65._8_8_ * dVar66 +
           auVar33._24_8_ * auVar199._0_8_ +
           auVar31._24_8_ * dVar11 + auVar32._24_8_ * auVar200._0_8_;
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != 0x98);
    auVar200._0_8_ =
         adStack_298[1] * adStack_298[1] +
         (double)local_2a0 * (double)local_2a0 + adStack_298[0] * adStack_298[0];
    auVar199._0_8_ =
         local_270 * local_270 +
         (double)local_280._0_8_ * (double)local_280._0_8_ +
         (double)local_280._8_8_ * (double)local_280._8_8_;
    auVar214 = ZEXT816(0) << 0x40;
    dVar11 = __real_3ff0000000000000;
    if (0.0 <= auVar200._0_8_ + __real_be45798ee2308c3a) {
      dVar11 = __real_3ff0000000000000 / SQRT(auVar200._0_8_);
    }
    dVar66 = local_250 * local_250 +
             (double)local_260._0_8_ * (double)local_260._0_8_ +
             (double)local_260._8_8_ * (double)local_260._8_8_;
    auVar200._0_8_ = __real_3ff0000000000000;
    if (0.0 <= auVar199._0_8_ + __real_be45798ee2308c3a) {
      auVar200._0_8_ = __real_3ff0000000000000 / SQRT(auVar199._0_8_);
    }
    local_1f0 = auVar186._16_16_;
    auVar199._0_8_ = __real_3ff0000000000000;
    if (0.0 <= dVar66 + __real_be45798ee2308c3a) {
      auVar199._0_8_ = __real_3ff0000000000000 / SQRT(dVar66);
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (double)local_2a0 * dVar11;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = dVar11 * adStack_298[0];
    auVar12 = vunpcklpd_avx(auVar14,auVar91);
    auVar92._8_8_ = 0;
    auVar92._0_8_ = auVar200._0_8_ * (double)local_280._0_8_;
    auVar169._8_8_ = 0;
    auVar169._0_8_ = auVar200._0_8_ * (double)local_280._8_8_;
    auVar65 = vunpcklpd_avx(auVar92,auVar169);
    local_260._8_8_ = auVar199._0_8_ * (double)local_260._8_8_;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = auVar199._0_8_ * (double)local_260._0_8_;
    auVar147._8_8_ = 0;
    auVar147._0_8_ = local_260._8_8_;
    auVar15 = vunpcklpd_avx(auVar93,auVar147);
    auVar64 = ZEXT816(0);
    auVar31 = vcmppd_avx(ZEXT1632(auVar64),auVar186,2);
    auVar32 = vpcmpeqd_avx2(ZEXT832((ulonglong)local_260._8_8_),ZEXT832((ulonglong)local_260._8_8_))
    ;
    auVar31 = vblendvps_avx(ZEXT1632(auVar64),auVar32,auVar31);
    auVar210._0_8_ =
         (double)CONCAT44(auVar31._4_4_ & uVar9 ^ __real_bff0000000000000._4_4_,
                          auVar31._0_4_ & uVar8 ^ (uint)__real_bff0000000000000);
    auVar210._8_4_ = auVar31._8_4_ & uVar8 ^ (uint)__real_bff0000000000000;
    auVar210._12_4_ = auVar31._12_4_ & uVar9 ^ __real_bff0000000000000._4_4_;
    auVar210._16_4_ = auVar31._16_4_ & uVar8 ^ (uint)__real_bff0000000000000;
    auVar210._20_4_ = auVar31._20_4_ & uVar9 ^ __real_bff0000000000000._4_4_;
    auVar210._24_4_ = auVar31._24_4_ & uVar8 ^ (uint)__real_bff0000000000000;
    auVar210._28_4_ = auVar31._28_4_ & uVar9 ^ __real_bff0000000000000._4_4_;
    local_2a0 = (undefined1  [8])(auVar12._0_8_ * auVar210._0_8_);
    adStack_298[0] = auVar12._8_8_ * auVar210._0_8_;
    auVar220._16_8_ = dVar11 * adStack_298[1] * auVar210._0_8_;
    auVar220._0_16_ = _local_2a0;
    auVar220._24_8_ = auVar210._0_8_ * 0.0;
    local_120 = auVar220._16_16_;
    adStack_298[1] = (double)vmovlpd_avx(auVar220._16_16_);
    auVar31 = vpermpd_avx2(auVar210,0x55);
    local_280._0_8_ = auVar31._0_8_ * auVar65._0_8_;
    local_280._8_8_ = auVar31._8_8_ * auVar65._8_8_;
    auVar219._16_8_ = auVar31._16_8_ * auVar200._0_8_ * local_270;
    auVar219._0_16_ = local_280;
    auVar219._24_8_ = auVar31._24_8_ * 0.0;
    local_270 = (double)vmovlpd_avx(auVar219._16_16_);
    auVar31 = vpermpd_avx2(auVar210,0xaa);
    local_260._0_8_ = auVar31._0_8_ * auVar15._0_8_;
    local_260._8_8_ = auVar31._8_8_ * auVar15._8_8_;
    auVar80._16_8_ = auVar31._16_8_ * auVar199._0_8_ * local_250;
    auVar80._0_16_ = local_260;
    auVar80._24_8_ = auVar31._24_8_ * 0.0;
    local_250 = (double)vmovlpd_avx(auVar80._16_16_);
    auVar177._8_8_ = __real_0010000000000000;
    auVar177._0_8_ = __real_0010000000000000;
    auVar177._16_8_ = __real_0010000000000000;
    auVar177._24_8_ = __real_0010000000000000;
    auVar31 = vblendpd_avx(auVar220,auVar177,8);
    auVar41._0_8_ = __real_7fffffffffffffff & auVar31._0_8_;
    auVar41._8_8_ = __real_7fffffffffffffff & auVar31._8_8_;
    auVar41._16_8_ = __real_7fffffffffffffff & auVar31._16_8_;
    auVar41._24_8_ = __real_7fffffffffffffff & auVar31._24_8_;
    auVar211._8_8_ = __real_3f1a36e2eb1c432d;
    auVar211._0_8_ = __real_3f1a36e2eb1c432d;
    auVar211._16_8_ = __real_3f1a36e2eb1c432d;
    auVar211._24_8_ = __real_3f1a36e2eb1c432d;
    auVar31 = vcmppd_avx(auVar41,auVar211,6);
    auVar33 = ZEXT1632(auVar64);
    auVar31 = vpackssdw_avx2(auVar31,auVar33);
    auVar12 = vpackssdw_avx(auVar31._0_16_,auVar31._16_16_);
    auVar65 = vpshufd_avx(auVar12,0xd8);
    auVar31 = vpcmpeqd_avx2(auVar44,auVar33);
    auVar15 = SUB3216(auVar31 ^ auVar32,0);
    auVar64 = SUB3216(auVar31 ^ auVar32,0x10);
    auVar12 = vpackssdw_avx(auVar15,auVar64);
    auVar12 = vpand_avx(auVar12,auVar65);
    auVar12 = vpsllw_avx(auVar12,0xf);
    if ((((((((SUB161(auVar12 >> 0xf,0) & 1) == 0 && (SUB161(auVar12 >> 0x1f,0) & 1) == 0) &&
            (SUB161(auVar12 >> 0x2f,0) & 1) == 0) && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar12 >> 0x4f,0) & 1) == 0) && (SUB161(auVar12 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar12 >> 0x6f,0) & 1) == 0) && -1 < auVar12[0xf]) {
      auVar96 = ZEXT816(0);
      auVar21 = (undefined1  [16])0x0;
      auVar197._8_8_ = 0;
      auVar197._0_8_ = __real_3ff0000000000000;
    }
    else {
      auVar12 = vpackssdw_avx(auVar15,auVar64);
      auVar31 = vblendpd_avx(auVar219,auVar177,8);
      auVar157._0_8_ = __real_7fffffffffffffff & auVar31._0_8_;
      auVar157._8_8_ = __real_7fffffffffffffff & auVar31._8_8_;
      auVar157._16_8_ = __real_7fffffffffffffff & auVar31._16_8_;
      auVar157._24_8_ = __real_7fffffffffffffff & auVar31._24_8_;
      auVar31 = vcmppd_avx(auVar157,auVar211,6);
      auVar31 = vpackssdw_avx2(auVar31,auVar33);
      auVar15 = auVar31._16_16_;
      auVar65 = vpackssdw_avx(auVar31._0_16_,auVar15);
      auVar65 = vpshufd_avx(auVar65,0xd8);
      auVar12 = vpand_avx(auVar65,auVar12);
      auVar12 = vpsllw_avx(auVar12,0xf);
      if ((((((((SUB161(auVar12 >> 0xf,0) & 1) != 0 || (SUB161(auVar12 >> 0x1f,0) & 1) != 0) ||
              (SUB161(auVar12 >> 0x2f,0) & 1) != 0) || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || auVar12[0xf] < '\0') {
        auVar44 = vpcmpeqd_avx2(auVar44,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
        auVar31 = vpcmpeqd_avx2(ZEXT1632(auVar15),ZEXT1632(auVar15));
        auVar12 = vpackssdw_avx(SUB3216(auVar44 ^ auVar31,0),SUB3216(auVar44 ^ auVar31,0x10));
        auVar44 = vblendpd_avx(auVar80,auVar177,8);
        auVar158._0_8_ = __real_7fffffffffffffff & auVar44._0_8_;
        auVar158._8_8_ = __real_7fffffffffffffff & auVar44._8_8_;
        auVar158._16_8_ = __real_7fffffffffffffff & auVar44._16_8_;
        auVar158._24_8_ = __real_7fffffffffffffff & auVar44._24_8_;
        auVar44 = vcmppd_avx(auVar158,auVar211,6);
        auVar44 = vpackssdw_avx2(auVar44,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
        auVar65 = vpackssdw_avx(auVar44._0_16_,auVar44._16_16_);
        auVar65 = vpshufd_avx(auVar65,0xd8);
        auVar12 = vpand_avx(auVar65,auVar12);
        auVar12 = vpsllw_avx(auVar12,0xf);
        if ((((((((SUB161(auVar12 >> 0xf,0) & 1) != 0 || (SUB161(auVar12 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar12 >> 0x2f,0) & 1) != 0) || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || auVar12[0xf] < '\0') {
          auVar12 = vshufpd_avx(local_280,local_280,1);
          dVar11 = auVar80._16_8_ + (double)local_2a0 + auVar12._0_8_;
          if (dVar11 <= 0.0) {
            uVar4 = (uint)((double)local_2a0 < auVar12._0_8_);
            uVar67 = 2;
            if (auVar80._16_8_ <= *(double *)(local_2a0 + uVar4 * 0x28)) {
              uVar67 = (ulonglong)uVar4;
            }
            iVar2 = *(int *)(&DAT_151c6ce40 + uVar67 * 4);
            lVar10 = (longlong)iVar2;
            iVar3 = *(int *)(&DAT_151c6ce40 + lVar10 * 4);
            iVar5 = (int)uVar67;
            dVar11 = __real_3ff0000000000000 /
                     SQRT(((*(double *)(local_2a0 + (uint)(iVar5 * 0x28)) -
                           *(double *)(local_2a0 + lVar10 * 0x28)) -
                          *(double *)(local_2a0 + (longlong)iVar3 * 0x28)) + __real_3ff0000000000000
                         );
            *(double *)((longlong)&local_210 + (ulonglong)(uint)(iVar5 * 8)) =
                 (__real_3ff0000000000000 / dVar11) * __real_3fe0000000000000;
            dVar11 = dVar11 * __real_3fe0000000000000;
            (&local_210)[lVar10] =
                 (*(double *)(local_2a0 + (longlong)(iVar2 + iVar5 * 4) * 8) +
                 *(double *)(local_2a0 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar11;
            (&local_210)[iVar3] =
                 dVar11 * (*(double *)(local_2a0 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                          *(double *)(local_2a0 + (longlong)(iVar5 + iVar3 * 4) * 8));
            auVar197._8_8_ = 0;
            auVar197._0_8_ =
                 dVar11 * (*(double *)(local_2a0 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                          *(double *)(local_2a0 + (longlong)(iVar2 + iVar3 * 4) * 8));
            auVar96._8_8_ = 0;
            auVar96._0_8_ = local_210;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = local_208;
            auVar214._8_8_ = 0;
            auVar214._0_8_ = local_200;
          }
          else {
            auVar12 = vshufpd_avx(_local_2a0,_local_2a0,1);
            auVar65 = vshufpd_avx(local_260,local_260,1);
            auVar200._0_8_ = __real_3ff0000000000000 / SQRT(dVar11 + __real_3ff0000000000000);
            dVar11 = auVar200._0_8_ * __real_3fe0000000000000;
            auVar96._8_8_ = 0;
            auVar96._0_8_ = dVar11 * (auVar219._16_8_ - auVar65._0_8_);
            auVar21._8_8_ = 0;
            auVar21._0_8_ = dVar11 * ((double)local_260._0_8_ - auVar220._16_8_);
            auVar214._8_8_ = 0;
            auVar214._0_8_ = dVar11 * (auVar12._0_8_ - (double)local_280._0_8_);
            auVar197._8_8_ = 0;
            auVar197._0_8_ = (__real_3ff0000000000000 / auVar200._0_8_) * __real_3fe0000000000000;
          }
          goto LAB_140c7c318;
        }
      }
      auVar96 = (undefined1  [16])0x0;
      auVar21 = (undefined1  [16])0x0;
      auVar197._8_8_ = 0;
      auVar197._0_8_ = __real_3ff0000000000000;
    }
LAB_140c7c318:
    auVar12 = vunpcklpd_avx(auVar214,auVar197);
    auVar65 = vunpcklpd_avx(auVar96,auVar21);
    auVar200._0_8_ = auVar65._0_8_;
    dVar66 = auVar65._8_8_;
    auVar202._16_8_ = auVar12._0_8_;
    auVar22._0_8_ = auVar202._16_8_ * auVar202._16_8_ + auVar200._0_8_ * auVar200._0_8_;
    auVar201._16_8_ = auVar12._8_8_;
    auVar22._8_8_ = auVar201._16_8_ * auVar201._16_8_ + dVar66 * dVar66;
    auVar12 = vshufpd_avx(auVar22,auVar22,1);
    dVar11 = auVar22._0_8_ + auVar12._0_8_;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = __real_3e45798ee2308c3a;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar11;
    auVar12 = vcmpsd_avx(auVar70,auVar23,6);
    uVar67 = ~auVar12._0_8_ & __real_ffffffffffffffff;
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    auVar115._0_8_ =
         ~uVar67 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar115._8_8_ = ~uVar67 & _UNK_150b54548;
    auVar115._16_8_ = ~uVar67 & _UNK_150b54550;
    auVar115._24_8_ = ~uVar67 & _UNK_150b54558;
    auVar199._0_8_ = (double)((ulonglong)(auVar200._0_8_ * dVar11) & uVar67);
    auVar199._8_8_ = (ulonglong)(dVar66 * dVar11) & uVar67;
    auVar203._16_8_ = (ulonglong)(auVar202._16_8_ * dVar11) & uVar67;
    auVar203._0_16_ = auVar199;
    auVar203._24_8_ = (ulonglong)(auVar201._16_8_ * dVar11) & uVar67;
    auVar65 = auVar203._16_16_ | auVar115._16_16_;
    auVar12 = vshufps_avx(auVar199,auVar199,0x4e);
    auVar201._16_8_ = auVar65._0_8_;
    auVar65 = vshufps_avx(auVar65,auVar65,0x4e);
    dVar11 = auVar65._0_8_;
    auVar68._8_8_ = 0.0;
    auVar68._0_8_ = (double)uStack_240;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = uStack_238;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = uStack_230;
  }
  param_3 = param_3 * __real_3f000000;
  auVar65 = vinsertps_avx(ZEXT416(param_6),ZEXT416(param_7),0x1c);
  auVar65 = vinsertps_avx(auVar65,ZEXT416(param_8),0x28);
  auVar24._0_4_ = param_3 * auVar65._0_4_;
  auVar24._4_4_ = param_3 * auVar65._4_4_;
  auVar24._8_4_ = param_3 * auVar65._8_4_;
  auVar24._12_4_ = param_3 * auVar65._12_4_;
  auVar32 = vcvtps2pd_avx(auVar24);
  auVar65 = vunpcklpd_avx(auVar68,auVar98);
  auVar99._8_8_ = auVar199._0_8_;
  auVar99._0_8_ = auVar199._0_8_;
  auVar116._16_8_ = auVar199._0_8_;
  auVar116._0_16_ = auVar99;
  auVar116._24_8_ = auVar199._0_8_;
  auVar12 = vunpcklpd_avx(auVar99,auVar12);
  auVar54._8_8_ = auVar201._16_8_;
  auVar54._0_8_ = auVar201._16_8_;
  auVar54._16_8_ = auVar201._16_8_;
  auVar54._24_8_ = auVar201._16_8_;
  auVar44 = vblendpd_avx(ZEXT1632(auVar12),auVar54,4);
  auVar180._8_8_ = dVar11;
  auVar180._0_8_ = dVar11;
  auVar180._16_8_ = dVar11;
  auVar180._24_8_ = dVar11;
  auVar31 = vblendpd_avx(auVar44,auVar180,8);
  auVar192._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar192._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar192._16_8_ = auVar31._16_8_ + auVar31._16_8_;
  auVar192._24_8_ = auVar31._24_8_ + auVar31._24_8_;
  auVar55._0_8_ = auVar44._0_8_ * auVar192._0_8_;
  auVar55._8_8_ = auVar44._8_8_ * auVar192._8_8_;
  auVar55._16_8_ = auVar44._16_8_ * auVar192._16_8_;
  auVar55._24_8_ = auVar44._24_8_ * auVar192._24_8_;
  auVar44 = vpermpd_avx2(auVar55,0xc1);
  auVar31 = vpermpd_avx2(auVar55,0xda);
  auVar56._0_8_ = auVar44._0_8_ + auVar31._0_8_;
  auVar56._8_8_ = auVar44._8_8_ + auVar31._8_8_;
  auVar56._16_8_ = auVar44._16_8_ + auVar31._16_8_;
  auVar56._24_8_ = auVar44._24_8_ + auVar31._24_8_;
  auVar44 = vsubpd_avx(local_e0,auVar56);
  auVar15 = vunpcklpd_avx(auVar184,auVar205);
  auVar25._0_8_ = auVar15._0_8_ * auVar44._0_8_;
  auVar25._8_8_ = auVar15._8_8_ * auVar44._8_8_;
  auVar57._16_8_ = local_1f0._0_8_ * auVar44._16_8_;
  auVar57._0_16_ = auVar25;
  auVar57._24_8_ = local_1f0._8_8_ * auVar44._24_8_;
  auVar44 = vblendpd_avx(ZEXT1632(auVar12),auVar116,0xc);
  auVar31 = vpermpd_avx2(auVar192,0x29);
  auVar117._0_8_ = auVar44._0_8_ * auVar31._0_8_;
  auVar117._8_8_ = auVar44._8_8_ * auVar31._8_8_;
  auVar117._16_8_ = auVar44._16_8_ * auVar31._16_8_;
  auVar117._24_8_ = auVar44._24_8_ * auVar31._24_8_;
  auVar44 = vpermpd_avx2(auVar192,0x12);
  auVar164._0_8_ = dVar11 * auVar44._0_8_;
  auVar164._8_8_ = dVar11 * auVar44._8_8_;
  auVar164._16_8_ = dVar11 * auVar44._16_8_;
  auVar164._24_8_ = dVar11 * auVar44._24_8_;
  auVar173._0_8_ = auVar15._0_8_ * (auVar117._0_8_ + auVar164._0_8_);
  auVar173._8_8_ = auVar15._8_8_ * (auVar117._8_8_ + auVar164._8_8_);
  auVar181._16_8_ = local_1f0._0_8_ * (auVar117._16_8_ + auVar164._16_8_);
  auVar181._0_16_ = auVar173;
  auVar181._24_8_ = local_1f0._8_8_ * (auVar117._24_8_ + auVar164._24_8_);
  auVar44 = vsubpd_avx(auVar117,auVar164);
  auVar12 = vunpcklpd_avx(auVar205,local_1f0);
  auVar152._0_8_ = auVar12._0_8_ * auVar44._0_8_;
  auVar152._8_8_ = auVar12._8_8_ * auVar44._8_8_;
  auVar165._16_8_ = auVar184._0_8_ * auVar44._16_8_;
  auVar165._0_16_ = auVar152;
  auVar165._24_8_ = auVar184._8_8_ * auVar44._24_8_;
  auVar44 = vsubpd_avx(auVar32,auVar32);
  auVar193._0_8_ = auVar44._0_8_ * __real_3fe0000000000000;
  auVar193._8_8_ = auVar44._8_8_ * __real_3fe0000000000000;
  auVar193._16_8_ = auVar44._16_8_ * __real_3fe0000000000000;
  auVar193._24_8_ = auVar44._24_8_ * __real_3fe0000000000000;
  auVar118._0_8_ = (auVar32._0_8_ + auVar32._0_8_) * __real_3fe0000000000000;
  auVar118._8_8_ = (auVar32._8_8_ + auVar32._8_8_) * __real_3fe0000000000000;
  auVar118._16_8_ = (auVar32._16_8_ + auVar32._16_8_) * __real_3fe0000000000000;
  auVar118._24_8_ = (auVar32._24_8_ + auVar32._24_8_) * __real_3fe0000000000000;
  auVar12 = CONCAT88(auVar173._0_8_,auVar173._0_8_);
  auVar44 = vblendpd_avx(ZEXT1632(auVar25),ZEXT1632(auVar12),2);
  auVar44 = vblendpd_avx(auVar44,auVar165,4);
  auVar33 = vpermpd_avx2(auVar193,0x55);
  auVar206._16_16_ = auVar173;
  auVar206._0_16_ = auVar152;
  auVar32 = vshufpd_avx(auVar206,ZEXT1632(auVar25),0xe);
  auVar53 = vpermpd_avx2(auVar193,0xaa);
  auVar31 = vblendpd_avx(ZEXT1632(auVar181._16_16_),auVar165,2);
  auVar31 = vblendpd_avx(auVar31,auVar57,4);
  auVar12 = vmovhpd_avx(auVar89,__real_3ff0000000000000);
  auVar87._0_8_ =
       auVar65._0_8_ +
       auVar31._0_8_ * auVar53._0_8_ +
       auVar32._0_8_ * auVar33._0_8_ + auVar193._0_8_ * auVar44._0_8_;
  auVar87._8_8_ =
       auVar65._8_8_ +
       auVar31._8_8_ * auVar53._8_8_ +
       auVar32._8_8_ * auVar33._8_8_ + auVar193._0_8_ * auVar44._8_8_;
  auVar87._16_8_ =
       auVar12._0_8_ +
       auVar31._16_8_ * auVar53._16_8_ +
       auVar32._16_8_ * auVar33._16_8_ + auVar193._0_8_ * auVar44._16_8_;
  auVar87._24_8_ =
       auVar12._8_8_ +
       auVar31._24_8_ * auVar53._24_8_ +
       auVar32._24_8_ * auVar33._24_8_ + auVar193._0_8_ * auVar44._24_8_;
  auVar33 = vpermpd_avx2(auVar118,0x55);
  dVar11 = (double)(local_140 & (ulonglong)(auVar32._0_8_ * auVar33._0_8_)) +
           (double)(local_140 & (ulonglong)(auVar118._0_8_ * auVar44._0_8_));
  auVar200._0_8_ =
       (double)(uStack_138 & (ulonglong)(auVar32._8_8_ * auVar33._8_8_)) +
       (double)(uStack_138 & (ulonglong)(auVar118._0_8_ * auVar44._8_8_));
  auVar199._0_8_ =
       (double)(uStack_130 & (ulonglong)(auVar32._16_8_ * auVar33._16_8_)) +
       (double)(uStack_130 & (ulonglong)(auVar118._0_8_ * auVar44._16_8_));
  dVar66 = (double)(uStack_128 & (ulonglong)(auVar32._24_8_ * auVar33._24_8_)) +
           (double)(uStack_128 & (ulonglong)(auVar118._0_8_ * auVar44._24_8_));
LAB_140c7c83f:
  auVar44 = vpermpd_avx2(auVar118,0xaa);
  auVar62._0_8_ = (double)(local_140 & (ulonglong)(auVar44._0_8_ * auVar31._0_8_)) + dVar11;
  auVar62._8_8_ = (double)(uStack_138 & (ulonglong)(auVar44._8_8_ * auVar31._8_8_)) + auVar200._0_8_
  ;
  auVar62._16_8_ =
       (double)(uStack_130 & (ulonglong)(auVar44._16_8_ * auVar31._16_8_)) + auVar199._0_8_;
  auVar62._24_8_ = (double)(uStack_128 & (ulonglong)(auVar44._24_8_ * auVar31._24_8_)) + dVar66;
  auVar44 = vsubpd_avx(auVar87,auVar62);
  auVar30._0_8_ = auVar87._0_8_ + auVar62._0_8_;
  auVar30._8_8_ = auVar87._8_8_ + auVar62._8_8_;
  auVar63._16_8_ = auVar87._16_8_ + auVar62._16_8_;
  auVar63._0_16_ = auVar30;
  auVar63._24_8_ = auVar87._24_8_ + auVar62._24_8_;
  auVar88._16_16_ = auVar30;
  auVar88._0_16_ = auVar44._0_16_;
  auVar44 = vshufpd_avx(auVar44,auVar88,2);
  *param_1 = auVar44;
  auVar44 = vpermpd_avx2(auVar63,0xe9);
  *(undefined1 (*) [16])param_1[1] = auVar44._0_16_;
  param_1[1][0x10] = 1;
  return;
}

// SPhylCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunf_avx2 @ 140c7c8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SPhylCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunf_avx2
               (undefined1 (*param_1) [32],undefined1 (*param_2) [16],float param_3,
               undefined1 (*param_4) [24],double *param_5,float param_6,float param_7,
               undefined1 (*param_8) [32])

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auVar8 [24];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
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
  double dVar56;
  undefined1 auVar29 [32];
  double dVar55;
  double dVar58;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar15 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar39 [32];
  undefined1 auVar17 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar52 [32];
  undefined1 auVar57 [16];
  undefined1 auVar53 [32];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar83 [16];
  undefined1 auVar77 [32];
  undefined1 auVar84 [16];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  double dVar85;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  ulonglong uVar86;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar112;
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  double dVar111;
  double dVar113;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar105 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
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
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar170 [32];
  undefined1 auVar172 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [32];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [32];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  double adStack_278 [3];
  undefined1 local_260 [8];
  double adStack_258 [3];
  undefined1 local_240 [16];
  double local_230;
  undefined8 local_228;
  undefined1 local_220 [16];
  double local_210;
  undefined8 local_208;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  undefined1 local_1d0 [16];
  double local_1c0 [4];
  undefined1 local_1a0 [16];
  undefined1 local_190 [8];
  double dStack_188;
  undefined1 local_180 [16];
  double local_170 [2];
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  undefined1 local_a8 [16];
  undefined1 auVar32 [32];
  undefined1 auVar38 [32];
  undefined1 auVar45 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar54 [32];
  undefined1 auVar70 [32];
  undefined1 auVar76 [32];
  undefined1 auVar78 [32];
  undefined1 auVar104 [32];
  undefined1 auVar106 [32];
  undefined1 auVar127 [32];
  undefined1 auVar130 [32];
  undefined1 auVar134 [32];
  undefined1 auVar137 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar160 [32];
  undefined1 auVar169 [32];
  undefined1 auVar171 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  
  local_a8 = in_ZMM6._0_16_;
  auVar163 = *param_8;
  auVar52 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
  auVar8 = *param_4;
  auVar29._24_8_ = 0;
  auVar29._0_24_ = auVar8;
  auVar65._8_8_ = __real_4076800000000000;
  auVar65._0_8_ = __real_4076800000000000;
  auVar65._16_8_ = __real_4076800000000000;
  auVar65._24_8_ = __real_4076800000000000;
  auVar30 = vdivpd_avx(auVar29,auVar65);
  auVar125._0_8_ = __real_7fffffffffffffff & auVar30._0_8_;
  auVar125._8_8_ = __real_7fffffffffffffff & auVar30._8_8_;
  auVar125._16_8_ = __real_7fffffffffffffff & auVar30._16_8_;
  auVar125._24_8_ = __real_7fffffffffffffff & auVar30._24_8_;
  auVar146._8_8_ = __real_4330000000000000;
  auVar146._0_8_ = __real_4330000000000000;
  auVar146._16_8_ = __real_4330000000000000;
  auVar146._24_8_ = __real_4330000000000000;
  auVar29 = vcmppd_avx(auVar146,auVar125,2);
  auVar29 = vpshufb_avx2(auVar29,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar57._0_12_ = ZEXT812(0);
  auVar57._12_4_ = 0;
  auVar29 = vblendvps_avx(ZEXT1632(auVar57),auVar52,auVar29);
  auVar31 = vroundpd_avx(auVar30,0xb);
  auVar147._0_4_ = ~auVar29._0_4_ & auVar31._0_4_;
  auVar147._4_4_ = ~auVar29._4_4_ & auVar31._4_4_;
  auVar147._8_4_ = ~auVar29._8_4_ & auVar31._8_4_;
  auVar147._12_4_ = ~auVar29._12_4_ & auVar31._12_4_;
  auVar147._16_4_ = ~auVar29._16_4_ & auVar31._16_4_;
  auVar147._20_4_ = ~auVar29._20_4_ & auVar31._20_4_;
  auVar147._24_4_ = ~auVar29._24_4_ & auVar31._24_4_;
  auVar147._28_4_ = ~auVar29._28_4_ & auVar31._28_4_;
  auVar95._0_8_ = auVar30._0_8_ & auVar29._0_8_;
  auVar95._8_8_ = auVar30._8_8_ & auVar29._8_8_;
  auVar95._16_8_ = auVar30._16_8_ & auVar29._16_8_;
  auVar95._24_8_ = auVar30._24_8_ & auVar29._24_8_;
  auVar95 = auVar95 | auVar147;
  auVar96._0_8_ = -(__real_4076800000000000 * auVar95._0_8_) + auVar8._0_8_;
  auVar96._8_8_ = -(__real_4076800000000000 * auVar95._8_8_) + auVar8._8_8_;
  auVar96._16_8_ = -(__real_4076800000000000 * auVar95._16_8_) + auVar8._16_8_;
  auVar96._24_8_ = -(__real_4076800000000000 * auVar95._24_8_) + 0.0;
  auVar29 = vminpd_avx(auVar96,auVar65);
  auVar66._8_8_ = __real_c076800000000000;
  auVar66._0_8_ = __real_c076800000000000;
  auVar66._16_8_ = __real_c076800000000000;
  auVar66._24_8_ = __real_c076800000000000;
  auVar29 = vmaxpd_avx(auVar66,auVar29);
  dVar13 = auVar29._0_8_ * __real_3f81df46a2529d39;
  dVar55 = auVar29._8_8_ * __real_3f81df46a2529d39;
  dVar56 = auVar29._16_8_ * __real_3f81df46a2529d39;
  dVar58 = auVar29._24_8_ * __real_3f81df46a2529d39;
  auVar67._0_8_ = dVar13 * __real_3fc45f306dc9c883;
  auVar67._8_8_ = dVar55 * __real_3fc45f306dc9c883;
  auVar67._16_8_ = dVar56 * __real_3fc45f306dc9c883;
  auVar67._24_8_ = dVar58 * __real_3fc45f306dc9c883;
  auVar29 = vroundpd_avx(auVar67,0xb);
  auVar97._0_8_ = auVar29._0_8_ * __real_c01921fb54442d18 + dVar13;
  auVar97._8_8_ = auVar29._8_8_ * __real_c01921fb54442d18 + dVar55;
  auVar97._16_8_ = auVar29._16_8_ * __real_c01921fb54442d18 + dVar56;
  auVar97._24_8_ = auVar29._24_8_ * __real_c01921fb54442d18 + dVar58;
  auVar30._0_8_ = (ulonglong)auVar97._0_8_ & __real_8000000000000000;
  auVar30._8_8_ = (ulonglong)auVar97._8_8_ & __real_8000000000000000;
  auVar30._16_8_ = (ulonglong)auVar97._16_8_ & __real_8000000000000000;
  auVar30._24_8_ = (ulonglong)auVar97._24_8_ & __real_8000000000000000;
  auVar68._8_8_ = __real_400921fb54442d18;
  auVar68._0_8_ = __real_400921fb54442d18;
  auVar68._16_8_ = __real_400921fb54442d18;
  auVar68._24_8_ = __real_400921fb54442d18;
  auVar30 = vsubpd_avx(auVar30 | auVar68,auVar97);
  auVar69._0_8_ = __real_7fffffffffffffff & (ulonglong)auVar97._0_8_;
  auVar69._8_8_ = __real_7fffffffffffffff & (ulonglong)auVar97._8_8_;
  auVar69._16_8_ = __real_7fffffffffffffff & (ulonglong)auVar97._16_8_;
  auVar69._24_8_ = __real_7fffffffffffffff & (ulonglong)auVar97._24_8_;
  auVar126._8_8_ = __real_3ff921fb54442d18;
  auVar126._0_8_ = __real_3ff921fb54442d18;
  auVar126._16_8_ = __real_3ff921fb54442d18;
  auVar126._24_8_ = __real_3ff921fb54442d18;
  auVar29 = vcmppd_avx(auVar126,auVar69,1);
  auVar29 = vpshufb_avx2(auVar29,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar29 = vblendvps_avx(ZEXT1632(auVar57),auVar52,auVar29);
  auVar98._0_4_ = ~auVar29._0_4_ & SUB84(auVar97._0_8_,0);
  auVar98._4_4_ = ~auVar29._4_4_ & (uint)((ulonglong)auVar97._0_8_ >> 0x20);
  auVar98._8_4_ = ~auVar29._8_4_ & SUB84(auVar97._8_8_,0);
  auVar98._12_4_ = ~auVar29._12_4_ & (uint)((ulonglong)auVar97._8_8_ >> 0x20);
  auVar98._16_4_ = ~auVar29._16_4_ & SUB84(auVar97._16_8_,0);
  auVar98._20_4_ = ~auVar29._20_4_ & (uint)((ulonglong)auVar97._16_8_ >> 0x20);
  auVar98._24_4_ = ~auVar29._24_4_ & SUB84(auVar97._24_8_,0);
  auVar98._28_4_ = ~auVar29._28_4_ & (uint)((ulonglong)auVar97._24_8_ >> 0x20);
  auVar31._0_8_ = auVar30._0_8_ & auVar29._0_8_;
  auVar31._8_8_ = auVar30._8_8_ & auVar29._8_8_;
  auVar31._16_8_ = auVar30._16_8_ & auVar29._16_8_;
  auVar31._24_8_ = auVar30._24_8_ & auVar29._24_8_;
  auVar31 = auVar31 | auVar98;
  dVar13 = auVar31._0_8_;
  dVar85 = dVar13 * dVar13;
  dVar55 = auVar31._8_8_;
  dVar111 = dVar55 * dVar55;
  dVar56 = auVar31._16_8_;
  dVar112 = dVar56 * dVar56;
  dVar58 = auVar31._24_8_;
  dVar113 = dVar58 * dVar58;
  auVar157._8_8_ = __real_3ff0000000000000;
  auVar157._0_8_ = __real_3ff0000000000000;
  auVar157._16_8_ = __real_3ff0000000000000;
  auVar157._24_8_ = __real_3ff0000000000000;
  auVar14._0_8_ =
       (dVar85 * (dVar85 * (dVar85 * (dVar85 * (dVar85 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar13;
  auVar14._8_8_ =
       (dVar111 * (dVar111 * (dVar111 * (dVar111 * (dVar111 * __real_be59a6cb605c806f +
                                                   __real_3ec71711c625173e) +
                                        __real_bf2a017e195d6197) + __real_3f811110c0e4d980) +
                  __real_bfc555555c7dda4b) + __real_3ff0000000000000) * dVar55;
  auVar32._16_8_ =
       (dVar112 * (dVar112 * (dVar112 * (dVar112 * (dVar112 * __real_be59a6cb605c806f +
                                                   __real_3ec71711c625173e) +
                                        __real_bf2a017e195d6197) + __real_3f811110c0e4d980) +
                  __real_bfc555555c7dda4b) + __real_3ff0000000000000) * dVar56;
  auVar32._0_16_ = auVar14;
  auVar32._24_8_ =
       (dVar113 * (dVar113 * (dVar113 * (dVar113 * (dVar113 * __real_be59a6cb605c806f +
                                                   __real_3ec71711c625173e) +
                                        __real_bf2a017e195d6197) + __real_3f811110c0e4d980) +
                  __real_bfc555555c7dda4b) + __real_3ff0000000000000) * dVar58;
  auVar59._0_8_ =
       (dVar85 * (dVar85 * (dVar85 * (dVar85 * (dVar85 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar29._0_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar59._8_8_ =
       (dVar111 * (dVar111 * (dVar111 * (dVar111 * (dVar111 * __real_be917ba225041884 +
                                                   __real_3ef9f69842978250) +
                                        __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) +
                  __real_bfe0000000000000) + __real_3ff0000000000000) *
       (double)(auVar29._8_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar70._16_8_ =
       (dVar112 * (dVar112 * (dVar112 * (dVar112 * (dVar112 * __real_be917ba225041884 +
                                                   __real_3ef9f69842978250) +
                                        __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) +
                  __real_bfe0000000000000) + __real_3ff0000000000000) *
       (double)(auVar29._16_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar70._0_16_ = auVar59;
  auVar70._24_8_ =
       (dVar113 * (dVar113 * (dVar113 * (dVar113 * (dVar113 * __real_be917ba225041884 +
                                                   __real_3ef9f69842978250) +
                                        __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) +
                  __real_bfe0000000000000) + __real_3ff0000000000000) *
       (double)(auVar29._24_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar15 = vunpcklpd_avx(auVar14,auVar59);
  auVar29 = vpermpd_avx2(ZEXT1632(auVar15),0x50);
  auVar15 = vunpckhpd_avx(auVar14,auVar59);
  auVar30 = vpermpd_avx2(ZEXT1632(auVar15),0x44);
  auVar31 = vpermpd_avx2(auVar70,0xaa);
  auVar52 = auVar52 & ~auVar163;
  auVar15 = vunpcklpd_avx(auVar59,auVar14);
  auVar65 = vpermpd_avx2(ZEXT1632(auVar15),0x50);
  auVar15 = vunpckhpd_avx(auVar59,auVar14);
  auVar66 = vpermpd_avx2(ZEXT1632(auVar15),0x44);
  auVar32 = vpermpd_avx2(auVar32,0xaa);
  auVar15._0_8_ = (double)param_3;
  auVar196._0_8_ =
       (double)((ulonglong)(auVar31._0_8_ * auVar29._0_8_ * auVar30._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar32._0_8_ * auVar65._0_8_ * auVar66._0_8_) ^
               ___ymm_0000000000000000800000000000000080000000000000008000000000000000);
  auVar196._8_8_ =
       (double)((ulonglong)(auVar31._8_8_ * auVar29._8_8_ * auVar30._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar32._8_8_ * auVar65._8_8_ * auVar66._8_8_) ^ _UNK_151c6af68);
  auVar196._16_8_ =
       (double)((ulonglong)(auVar31._16_8_ * auVar29._16_8_ * auVar30._16_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar32._16_8_ * auVar65._16_8_ * auVar66._16_8_) ^ _UNK_151c6af70);
  auVar196._24_8_ =
       (double)((ulonglong)(auVar31._24_8_ * auVar29._24_8_ * auVar30._24_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar32._24_8_ * auVar65._24_8_ * auVar66._24_8_) ^ _UNK_151c6af78);
  auVar15._8_8_ = auVar15._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar15._0_8_;
  auVar15 = ZEXT116(0) * auVar17 | ZEXT116(1) * auVar15;
  local_120._0_8_ = auVar15._0_8_ * *param_5;
  local_120._8_8_ = auVar15._8_8_ * param_5[1];
  auVar167._16_8_ = SUB168(ZEXT116(1) * auVar17,0) * param_5[2];
  auVar167._0_16_ = local_120;
  auVar167._24_8_ = SUB168(ZEXT116(1) * auVar17,8) * 0.0;
  auVar29 = ZEXT1632(auVar57);
  uVar5 = (uint)__real_8000000000000000;
  uVar4 = (uint)(__real_8000000000000000 >> 0x20);
  if ((((((((SUB321(auVar52 >> 0x1f,0) & 1) == 0 && (SUB321(auVar52 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar52 >> 0x5f,0) & 1) == 0) && SUB321(auVar52 >> 0x7f,0) == '\0') &&
        (SUB321(auVar52 >> 0x9f,0) & 1) == 0) && SUB321(auVar52 >> 0xbf,0) == '\0') &&
      (SUB321(auVar52 >> 0xdf,0) & 1) == 0) && -1 < auVar52[0x1f]) {
    auVar173._8_8_ = 0;
    auVar173._0_8_ = *(double *)param_2[4];
    auVar200._8_8_ = 0;
    auVar200._0_8_ = *(ulonglong *)(param_2[4] + 8);
    dVar13 = *(double *)param_2[5];
    auVar202._8_8_ = 0;
    auVar202._0_8_ = dVar13;
    auVar163 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar29,1);
    auVar163 = vpackssdw_avx2(auVar163,auVar29);
    if ((((((((SUB321(auVar163 >> 0x1f,0) & 1) == 0 && (SUB321(auVar163 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar163 >> 0x5f,0) & 1) == 0) && SUB321(auVar163 >> 0x7f,0) == '\0') &&
          (SUB321(auVar163 >> 0x9f,0) & 1) == 0) && SUB321(auVar163 >> 0xbf,0) == '\0') &&
        (SUB321(auVar163 >> 0xdf,0) & 1) == 0) && -1 < auVar163[0x1f]) {
      auVar123._8_8_ = 0;
      auVar123._0_8_ = *(ulonglong *)(param_2[5] + 8);
      dVar13 = *(double *)*param_2;
      auVar91._8_8_ = dVar13;
      auVar91._0_8_ = dVar13;
      auVar106._16_8_ = dVar13;
      auVar106._0_16_ = auVar91;
      auVar106._24_8_ = dVar13;
      auVar29 = vpermpd_avx2(auVar196,0x1b);
      dVar55 = *(double *)(param_2[1] + 8);
      auVar77._8_8_ = dVar55;
      auVar77._0_8_ = dVar55;
      auVar77._16_8_ = dVar55;
      auVar77._24_8_ = dVar55;
      dVar56 = *(double *)(*param_2 + 8);
      auVar21._8_8_ = dVar56;
      auVar21._0_8_ = dVar56;
      auVar51._16_8_ = dVar56;
      auVar51._0_16_ = auVar21;
      auVar51._24_8_ = dVar56;
      auVar30 = vpermpd_avx2(auVar196,0x4e);
      dVar58 = *(double *)param_2[1];
      auVar180._8_8_ = dVar58;
      auVar180._0_8_ = dVar58;
      auVar187._16_8_ = dVar58;
      auVar187._0_16_ = auVar180;
      auVar187._24_8_ = dVar58;
      auVar163 = vshufpd_avx(auVar196,auVar196,5);
      auVar144._0_8_ =
           dVar58 * auVar163._0_8_ *
           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
           auVar30._0_8_ * dVar56 *
           ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
           auVar196._0_8_ * dVar55 +
           auVar29._0_8_ * dVar13 *
           ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
      auVar144._8_8_ =
           dVar58 * auVar163._8_8_ * _UNK_150b54428 +
           auVar30._8_8_ * dVar56 * _UNK_150b54408 +
           auVar196._8_8_ * dVar55 + auVar29._8_8_ * dVar13 * _UNK_150b543e8;
      auVar150._16_8_ =
           dVar58 * auVar163._16_8_ * _UNK_150b54430 +
           auVar30._16_8_ * dVar56 * _UNK_150b54410 +
           auVar196._16_8_ * dVar55 + auVar29._16_8_ * dVar13 * _UNK_150b543f0;
      auVar150._0_16_ = auVar144;
      auVar150._24_8_ =
           dVar58 * auVar163._24_8_ * _UNK_150b54438 +
           auVar30._24_8_ * dVar56 * _UNK_150b54418 +
           auVar196._24_8_ * dVar55 + auVar29._24_8_ * dVar13 * _UNK_150b543f8;
      auVar15 = vshufpd_avx(auVar144,auVar144,1);
      auVar57 = auVar150._16_16_;
      auVar14 = vshufpd_avx(auVar57,auVar57,1);
      dVar13 = auVar14._0_8_;
      auVar14 = vunpcklpd_avx(auVar202,auVar123);
      auVar59 = vunpcklpd_avx(auVar173,auVar200);
      auVar162._0_8_ = local_120._0_8_ * auVar59._0_8_;
      auVar162._8_8_ = local_120._8_8_ * auVar59._8_8_;
      auVar162._16_8_ = auVar167._16_8_ * auVar14._0_8_;
      auVar162._24_8_ = auVar167._24_8_ * auVar14._8_8_;
      auVar52 = vpermpd_avx2(auVar162,0xc9);
      auVar17 = vunpcklpd_avx(auVar91,auVar21);
      auVar163 = vblendpd_avx(auVar106,ZEXT1632(auVar17),3);
      auVar163 = vblendpd_avx(auVar163,auVar187,4);
      auVar29 = vblendpd_avx(auVar163,auVar77,8);
      auVar17 = vunpcklpd_avx(auVar21,auVar180);
      auVar30 = vblendpd_avx(auVar51,ZEXT1632(auVar17),3);
      auVar30 = vblendpd_avx(auVar30,auVar106,4);
      auVar31 = vblendpd_avx(auVar30,auVar77,8);
      dVar56 = auVar52._0_8_ * auVar29._0_8_ - auVar162._0_8_ * auVar31._0_8_;
      dVar58 = auVar52._8_8_ * auVar29._8_8_ - auVar162._8_8_ * auVar31._8_8_;
      dVar85 = auVar52._16_8_ * auVar29._16_8_ - auVar162._16_8_ * auVar31._16_8_;
      dVar111 = auVar52._24_8_ * auVar29._24_8_ - auVar162._24_8_ * auVar31._24_8_;
      auVar107._0_8_ = dVar56 + dVar56;
      auVar107._8_8_ = dVar58 + dVar58;
      auVar107._16_8_ = dVar85 + dVar85;
      auVar107._24_8_ = dVar111 + dVar111;
      auVar29 = vpermpd_avx2(auVar107,0xc9);
      auVar31 = vpermpd_avx2(auVar107,0xd2);
      auVar52._0_8_ = auVar163._0_8_ * auVar31._0_8_ - auVar30._0_8_ * auVar29._0_8_;
      auVar52._8_8_ = auVar163._8_8_ * auVar31._8_8_ - auVar30._8_8_ * auVar29._8_8_;
      auVar52._16_8_ = auVar163._16_8_ * auVar31._16_8_ - auVar30._16_8_ * auVar29._16_8_;
      auVar52._24_8_ = auVar163._24_8_ * auVar31._24_8_ - auVar30._24_8_ * auVar29._24_8_;
      auVar163 = vpermpd_avx2(auVar52,0xc9);
      auVar63._0_8_ =
           *(double *)param_2[2] + auVar29._0_8_ * dVar55 + auVar162._0_8_ + auVar163._0_8_;
      auVar63._8_8_ =
           *(double *)(param_2[2] + 8) + auVar29._8_8_ * dVar55 + auVar162._8_8_ + auVar163._8_8_;
      auVar78._16_8_ =
           *(double *)param_2[3] + auVar29._16_8_ * dVar55 + auVar162._16_8_ + auVar163._16_8_;
      auVar78._0_16_ = auVar63;
      auVar78._24_8_ = auVar29._24_8_ * dVar55 + auVar162._24_8_ + auVar163._24_8_ + 0.0;
      auVar94 = vshufpd_avx(auVar63,auVar63,1);
      auVar154._0_8_ =
           auVar59._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
      auVar154._8_8_ = auVar59._8_8_ * _UNK_150b54508;
      auVar163._16_8_ = auVar14._0_8_ * _UNK_150b54510;
      auVar163._0_16_ = auVar154;
      auVar163._24_8_ = auVar14._8_8_ * _UNK_150b54518;
      auVar84 = auVar78._16_16_;
      _local_190 = vshufpd_avx(auVar154,auVar154,1);
      auVar164 = auVar163._16_16_;
      local_1d0 = vshufpd_avx(auVar164,auVar164,1);
    }
    else {
      local_e0 = __real_7fffffffffffffff;
      uStack_d8 = __real_7fffffffffffffff;
      uStack_d0 = __real_7fffffffffffffff;
      uStack_c8 = __real_7fffffffffffffff;
      auVar40._0_8_ = auVar196._0_8_ + auVar196._0_8_;
      auVar40._8_8_ = auVar196._8_8_ + auVar196._8_8_;
      auVar40._16_8_ = auVar196._16_8_ + auVar196._16_8_;
      auVar40._24_8_ = auVar196._24_8_ + auVar196._24_8_;
      auVar73._0_8_ = auVar196._0_8_ * auVar40._0_8_;
      auVar73._8_8_ = auVar196._8_8_ * auVar40._8_8_;
      auVar73._16_8_ = auVar196._16_8_ * auVar40._16_8_;
      auVar73._24_8_ = auVar196._24_8_ * auVar40._24_8_;
      auVar163 = vpermpd_avx2(auVar73,0xc1);
      auVar29 = vpermpd_avx2(auVar73,0xda);
      auVar74._0_8_ = auVar163._0_8_ + auVar29._0_8_;
      auVar74._8_8_ = auVar163._8_8_ + auVar29._8_8_;
      auVar74._16_8_ = auVar163._16_8_ + auVar29._16_8_;
      auVar74._24_8_ = auVar163._24_8_ + auVar29._24_8_;
      auVar163 = vsubpd_avx(auVar157,auVar74);
      auVar29 = vpermpd_avx2(auVar196,4);
      auVar30 = vpermpd_avx2(auVar40,0x29);
      auVar101._0_8_ = auVar29._0_8_ * auVar30._0_8_;
      auVar101._8_8_ = auVar29._8_8_ * auVar30._8_8_;
      auVar101._16_8_ = auVar29._16_8_ * auVar30._16_8_;
      auVar101._24_8_ = auVar29._24_8_ * auVar30._24_8_;
      auVar29 = vpermpd_avx2(auVar196,0xff);
      auVar30 = vpermpd_avx2(auVar40,0x12);
      auVar41._0_8_ = auVar29._0_8_ * auVar30._0_8_;
      auVar41._8_8_ = auVar29._8_8_ * auVar30._8_8_;
      auVar41._16_8_ = auVar29._16_8_ * auVar30._16_8_;
      auVar41._24_8_ = auVar29._24_8_ * auVar30._24_8_;
      auVar119._0_8_ = auVar101._0_8_ + auVar41._0_8_;
      auVar119._8_8_ = auVar101._8_8_ + auVar41._8_8_;
      auVar134._16_8_ = auVar101._16_8_ + auVar41._16_8_;
      auVar134._0_16_ = auVar119;
      auVar134._24_8_ = auVar101._24_8_ + auVar41._24_8_;
      auVar29 = vsubpd_avx(auVar101,auVar41);
      local_180 = vunpcklpd_avx(auVar163._0_16_,auVar119);
      local_170[0] = (double)vmovlpd_avx(auVar29._16_16_);
      local_170[1] = 0.0;
      local_160 = vblendpd_avx(auVar163._0_16_,auVar29._0_16_,1);
      local_150 = vmovhpd_avx(auVar119);
      local_148 = 0;
      local_140 = vblendpd_avx(auVar29._0_16_,auVar134._16_16_,1);
      local_130 = vmovlpd_avx(auVar163._16_16_);
      local_128 = 0;
      local_110 = vmovlpd_avx(auVar167._16_16_);
      local_108 = 0x3ff0000000000000;
      auVar15 = param_2[2];
      uVar1 = *(undefined8 *)param_2[1];
      auVar42._8_8_ = uVar1;
      auVar42._0_8_ = uVar1;
      auVar42._16_8_ = uVar1;
      auVar42._24_8_ = uVar1;
      auVar163 = vblendpd_avx(ZEXT1632(*param_2),auVar42,4);
      dVar55 = *(double *)(param_2[1] + 8);
      auVar135._8_8_ = dVar55;
      auVar135._0_8_ = dVar55;
      auVar135._16_8_ = dVar55;
      auVar135._24_8_ = dVar55;
      auVar29 = vblendpd_avx(auVar163,auVar135,8);
      auVar170._0_8_ = auVar29._0_8_ + auVar29._0_8_;
      auVar170._8_8_ = auVar29._8_8_ + auVar29._8_8_;
      auVar170._16_8_ = auVar29._16_8_ + auVar29._16_8_;
      auVar170._24_8_ = auVar29._24_8_ + auVar29._24_8_;
      auVar43._0_8_ = auVar163._0_8_ * auVar170._0_8_;
      auVar43._8_8_ = auVar163._8_8_ * auVar170._8_8_;
      auVar43._16_8_ = auVar163._16_8_ * auVar170._16_8_;
      auVar43._24_8_ = auVar163._24_8_ * auVar170._24_8_;
      auVar163 = vpermpd_avx2(auVar43,0xc1);
      auVar29 = vpermpd_avx2(auVar43,0xda);
      auVar44._0_8_ = auVar163._0_8_ + auVar29._0_8_;
      auVar44._8_8_ = auVar163._8_8_ + auVar29._8_8_;
      auVar44._16_8_ = auVar163._16_8_ + auVar29._16_8_;
      auVar44._24_8_ = auVar163._24_8_ + auVar29._24_8_;
      auVar163 = vsubpd_avx(auVar157,auVar44);
      auVar14 = vunpcklpd_avx(auVar173,auVar200);
      auVar159._16_8_ = dVar13;
      auVar159._0_16_ = auVar14;
      auVar159._24_8_ = 0;
      auVar18._0_8_ = auVar14._0_8_ * auVar163._0_8_;
      auVar18._8_8_ = auVar14._8_8_ * auVar163._8_8_;
      auVar45._16_8_ = dVar13 * auVar163._16_8_;
      auVar45._0_16_ = auVar18;
      auVar45._24_8_ = auVar163._24_8_ * 0.0;
      uVar1 = *(undefined8 *)*param_2;
      auVar184._8_8_ = uVar1;
      auVar184._0_8_ = uVar1;
      auVar184._16_8_ = uVar1;
      auVar184._24_8_ = uVar1;
      auVar163 = vblendpd_avx(ZEXT1632(*param_2),auVar184,0xc);
      auVar29 = vpermpd_avx2(auVar170,0x29);
      auVar102._0_8_ = auVar29._0_8_ * auVar163._0_8_;
      auVar102._8_8_ = auVar29._8_8_ * auVar163._8_8_;
      auVar102._16_8_ = auVar29._16_8_ * auVar163._16_8_;
      auVar102._24_8_ = auVar29._24_8_ * auVar163._24_8_;
      auVar163 = vpermpd_avx2(auVar170,0x12);
      auVar136._0_8_ = dVar55 * auVar163._0_8_;
      auVar136._8_8_ = dVar55 * auVar163._8_8_;
      auVar136._16_8_ = dVar55 * auVar163._16_8_;
      auVar136._24_8_ = dVar55 * auVar163._24_8_;
      auVar166._0_8_ = auVar14._0_8_ * (auVar102._0_8_ + auVar136._0_8_);
      auVar166._8_8_ = auVar14._8_8_ * (auVar102._8_8_ + auVar136._8_8_);
      auVar171._16_8_ = dVar13 * (auVar102._16_8_ + auVar136._16_8_);
      auVar171._0_16_ = auVar166;
      auVar171._24_8_ = (auVar102._24_8_ + auVar136._24_8_) * 0.0;
      auVar29 = vsubpd_avx(auVar102,auVar136);
      auVar14 = vunpcklpd_avx(auVar200,auVar202);
      uVar1 = *(undefined8 *)(param_2[5] + 8);
      auVar176._8_8_ = uVar1;
      auVar176._0_8_ = uVar1;
      auVar176._16_8_ = uVar1;
      auVar176._24_8_ = uVar1;
      auVar163 = vblendpd_avx(auVar159,auVar176,8);
      auVar154._0_8_ =
           auVar163._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
      auVar154._8_8_ = auVar163._8_8_ * _UNK_150b54508;
      auVar160._16_8_ = auVar163._16_8_ * _UNK_150b54510;
      auVar160._0_16_ = auVar154;
      auVar160._24_8_ = auVar163._24_8_ * _UNK_150b54518;
      auVar120._0_8_ = auVar29._0_8_ * auVar14._0_8_;
      auVar120._8_8_ = auVar29._8_8_ * auVar14._8_8_;
      auVar137._16_8_ = auVar29._16_8_ * *(double *)param_2[4];
      auVar137._0_16_ = auVar120;
      auVar137._24_8_ = auVar29._24_8_ * 0.0;
      local_100 = auVar160._16_8_;
      dStack_f8 = auVar160._24_8_;
      auVar174._8_8_ = 0;
      auVar174._0_8_ = *(ulonglong *)param_2[3];
      auVar14 = CONCAT88(auVar166._0_8_,auVar166._0_8_);
      auVar163 = vblendpd_avx(ZEXT1632(auVar18),ZEXT1632(auVar14),2);
      auVar163 = vblendpd_avx(auVar163,auVar137,4);
      auVar29 = vblendpd_avx(ZEXT1632(auVar171._16_16_),auVar137,2);
      auVar29 = vblendpd_avx(auVar29,auVar45,4);
      auVar138._16_16_ = auVar166;
      auVar138._0_16_ = auVar120;
      auVar30 = vshufpd_avx(auVar138,ZEXT1632(auVar18),0xe);
      auVar14 = vmovhpd_avx(auVar174,__real_3ff0000000000000);
      lVar12 = 0x18;
      do {
        dVar13 = *(double *)(local_1a0 + lVar12 + 8);
        dVar55 = *(double *)(local_190 + lVar12 + 8);
        dVar56 = *(double *)(local_190 + lVar12);
        dVar58 = *(double *)(local_180 + lVar12);
        *(double *)((longlong)adStack_278 + lVar12) =
             auVar15._0_8_ * dVar58 +
             auVar30._0_8_ * dVar56 + auVar163._0_8_ * dVar13 + auVar29._0_8_ * dVar55;
        *(double *)((longlong)adStack_278 + lVar12 + 8) =
             auVar15._8_8_ * dVar58 +
             auVar30._8_8_ * dVar56 + auVar163._8_8_ * dVar13 + auVar29._8_8_ * dVar55;
        *(double *)((longlong)adStack_278 + lVar12 + 0x10) =
             auVar14._0_8_ * dVar58 +
             auVar30._16_8_ * dVar56 + auVar163._16_8_ * dVar13 + auVar29._16_8_ * dVar55;
        *(double *)(local_260 + lVar12) =
             auVar14._8_8_ * dVar58 +
             auVar30._24_8_ * dVar56 + auVar163._24_8_ * dVar13 + auVar29._24_8_ * dVar55;
        lVar12 = lVar12 + 0x20;
      } while (lVar12 != 0x98);
      dVar56 = adStack_258[1] * adStack_258[1] +
               (double)local_260 * (double)local_260 + adStack_258[0] * adStack_258[0];
      dVar55 = local_230 * local_230 +
               (double)local_240._0_8_ * (double)local_240._0_8_ +
               (double)local_240._8_8_ * (double)local_240._8_8_;
      auVar195 = ZEXT816(0) << 0x40;
      dVar13 = __real_3ff0000000000000;
      if (0.0 <= dVar56 + __real_be45798ee2308c3a) {
        dVar13 = __real_3ff0000000000000 / SQRT(dVar56);
      }
      dVar58 = local_210 * local_210 +
               (double)local_220._0_8_ * (double)local_220._0_8_ +
               (double)local_220._8_8_ * (double)local_220._8_8_;
      dVar56 = __real_3ff0000000000000;
      if (0.0 <= dVar55 + __real_be45798ee2308c3a) {
        dVar56 = __real_3ff0000000000000 / SQRT(dVar55);
      }
      _local_190 = vshufpd_avx(auVar154,auVar154,1);
      auVar10._8_8_ = auVar160._24_8_;
      auVar10._0_8_ = auVar160._16_8_;
      local_1d0 = vpermilpd_avx(auVar10,1);
      dVar55 = __real_3ff0000000000000;
      if (0.0 <= dVar58 + __real_be45798ee2308c3a) {
        dVar55 = __real_3ff0000000000000 / SQRT(dVar58);
      }
      auVar89._8_8_ = 0;
      auVar89._0_8_ = (double)local_260 * dVar13;
      auVar203._8_8_ = 0;
      auVar203._0_8_ = dVar13 * adStack_258[0];
      auVar15 = vunpcklpd_avx(auVar89,auVar203);
      local_240._0_8_ = (double)local_240._0_8_ * dVar56;
      auVar121._8_8_ = 0;
      auVar121._0_8_ = dVar56 * (double)local_240._8_8_;
      auVar189._8_8_ = 0;
      auVar189._0_8_ = local_240._0_8_;
      auVar14 = vunpcklpd_avx(auVar189,auVar121);
      auVar175._8_8_ = 0;
      auVar175._0_8_ = dVar55 * (double)local_220._0_8_;
      auVar178._8_8_ = 0;
      auVar178._0_8_ = (double)local_220._8_8_ * dVar55;
      auVar59 = vunpcklpd_avx(auVar175,auVar178);
      auVar17 = ZEXT816(0);
      auVar163 = vcmppd_avx(ZEXT1632(auVar17),auVar160,2);
      auVar29 = vpcmpeqd_avx2(ZEXT832((ulonglong)local_240._0_8_),
                              ZEXT832((ulonglong)local_240._0_8_));
      auVar163 = vblendvps_avx(ZEXT1632(auVar17),auVar29,auVar163);
      auVar185._0_8_ =
           (double)CONCAT44(__real_bff0000000000000._4_4_ ^ auVar163._4_4_ & uVar4,
                            (uint)__real_bff0000000000000 ^ auVar163._0_4_ & uVar5);
      auVar185._8_4_ = (uint)__real_bff0000000000000 ^ auVar163._8_4_ & uVar5;
      auVar185._12_4_ = __real_bff0000000000000._4_4_ ^ auVar163._12_4_ & uVar4;
      auVar185._16_4_ = (uint)__real_bff0000000000000 ^ auVar163._16_4_ & uVar5;
      auVar185._20_4_ = __real_bff0000000000000._4_4_ ^ auVar163._20_4_ & uVar4;
      auVar185._24_4_ = (uint)__real_bff0000000000000 ^ auVar163._24_4_ & uVar5;
      auVar185._28_4_ = __real_bff0000000000000._4_4_ ^ auVar163._28_4_ & uVar4;
      local_260 = (undefined1  [8])(auVar15._0_8_ * auVar185._0_8_);
      adStack_258[0] = auVar15._8_8_ * auVar185._0_8_;
      auVar148._16_8_ = dVar13 * adStack_258[1] * auVar185._0_8_;
      auVar148._0_16_ = _local_260;
      auVar148._24_8_ = auVar185._0_8_ * 0.0;
      adStack_258[1] = (double)vmovlpd_avx(auVar148._16_16_);
      auVar163 = vpermpd_avx2(auVar185,0x55);
      local_240._0_8_ = auVar163._0_8_ * auVar14._0_8_;
      local_240._8_8_ = auVar163._8_8_ * auVar14._8_8_;
      auVar103._16_8_ = auVar163._16_8_ * local_230 * dVar56;
      auVar103._0_16_ = local_240;
      auVar103._24_8_ = auVar163._24_8_ * 0.0;
      local_230 = (double)vmovlpd_avx(auVar103._16_16_);
      auVar163 = vpermpd_avx2(auVar185,0xaa);
      local_220._0_8_ = auVar163._0_8_ * auVar59._0_8_;
      local_220._8_8_ = auVar163._8_8_ * auVar59._8_8_;
      auVar177._16_8_ = auVar163._16_8_ * local_210 * dVar55;
      auVar177._0_16_ = local_220;
      auVar177._24_8_ = auVar163._24_8_ * 0.0;
      local_210 = (double)vmovlpd_avx(auVar177._16_16_);
      auVar46._8_8_ = __real_0010000000000000;
      auVar46._0_8_ = __real_0010000000000000;
      auVar46._16_8_ = __real_0010000000000000;
      auVar46._24_8_ = __real_0010000000000000;
      auVar163 = vblendpd_avx(auVar148,auVar46,8);
      auVar192._0_8_ = __real_7fffffffffffffff & auVar163._0_8_;
      auVar192._8_8_ = __real_7fffffffffffffff & auVar163._8_8_;
      auVar192._16_8_ = __real_7fffffffffffffff & auVar163._16_8_;
      auVar192._24_8_ = __real_7fffffffffffffff & auVar163._24_8_;
      auVar172._8_8_ = __real_3f1a36e2eb1c432d;
      auVar172._0_8_ = __real_3f1a36e2eb1c432d;
      auVar172._16_8_ = __real_3f1a36e2eb1c432d;
      auVar172._24_8_ = __real_3f1a36e2eb1c432d;
      auVar163 = vcmppd_avx(auVar192,auVar172,6);
      auVar163 = vpackssdw_avx2(auVar163,ZEXT1632(auVar17));
      if ((((((((SUB321(auVar163 >> 0x1f,0) & 1) == 0 && (SUB321(auVar163 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar163 >> 0x5f,0) & 1) == 0) && SUB321(auVar163 >> 0x7f,0) == '\0') &&
            (SUB321(auVar163 >> 0x9f,0) & 1) == 0) && SUB321(auVar163 >> 0xbf,0) == '\0') &&
          (SUB321(auVar163 >> 0xdf,0) & 1) == 0) && -1 < auVar163[0x1f]) {
        auVar124 = SUB6416(ZEXT864(0),0) << 0x40;
        auVar22 = ZEXT816(0) << 0x40;
        auVar145._8_8_ = 0;
        auVar145._0_8_ = __real_3ff0000000000000;
      }
      else {
        auVar163 = vblendpd_avx(auVar103,auVar46,8);
        auVar193._0_8_ = auVar163._0_8_ & __real_7fffffffffffffff;
        auVar193._8_8_ = auVar163._8_8_ & __real_7fffffffffffffff;
        auVar193._16_8_ = auVar163._16_8_ & __real_7fffffffffffffff;
        auVar193._24_8_ = auVar163._24_8_ & __real_7fffffffffffffff;
        auVar163 = vcmppd_avx(auVar193,auVar172,6);
        auVar163 = vpackssdw_avx2(auVar163,ZEXT1632(auVar17));
        if ((((((((SUB321(auVar163 >> 0x1f,0) & 1) != 0 || (SUB321(auVar163 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar163 >> 0x5f,0) & 1) != 0) || SUB321(auVar163 >> 0x7f,0) != '\0') ||
              (SUB321(auVar163 >> 0x9f,0) & 1) != 0) || SUB321(auVar163 >> 0xbf,0) != '\0') ||
            (SUB321(auVar163 >> 0xdf,0) & 1) != 0) || auVar163[0x1f] < '\0') {
          auVar163 = vblendpd_avx(auVar177,auVar46,8);
          auVar47._0_8_ = __real_7fffffffffffffff & auVar163._0_8_;
          auVar47._8_8_ = __real_7fffffffffffffff & auVar163._8_8_;
          auVar47._16_8_ = __real_7fffffffffffffff & auVar163._16_8_;
          auVar47._24_8_ = __real_7fffffffffffffff & auVar163._24_8_;
          auVar163 = vcmppd_avx(auVar47,auVar172,6);
          auVar163 = vpackssdw_avx2(auVar163,ZEXT832(0) << 0x40);
          if ((((((((SUB321(auVar163 >> 0x1f,0) & 1) != 0 || (SUB321(auVar163 >> 0x3f,0) & 1) != 0)
                  || (SUB321(auVar163 >> 0x5f,0) & 1) != 0) || SUB321(auVar163 >> 0x7f,0) != '\0')
                || (SUB321(auVar163 >> 0x9f,0) & 1) != 0) || SUB321(auVar163 >> 0xbf,0) != '\0') ||
              (SUB321(auVar163 >> 0xdf,0) & 1) != 0) || auVar163[0x1f] < '\0') {
            auVar15 = vshufpd_avx(local_240,local_240,1);
            dVar13 = auVar177._16_8_ + (double)local_260 + auVar15._0_8_;
            if (dVar13 <= 0.0) {
              bVar7 = (double)local_260 < auVar15._0_8_;
              uVar86 = 2;
              if (auVar177._16_8_ <= *(double *)(local_260 + ((uint)bVar7 * 0x20 + (uint)bVar7 * 8))
                 ) {
                uVar86 = (ulonglong)bVar7;
              }
              iVar2 = *(int *)(&DAT_151c6ce40 + uVar86 * 4);
              lVar12 = (longlong)iVar2;
              iVar3 = *(int *)(&DAT_151c6ce40 + lVar12 * 4);
              iVar6 = (int)uVar86;
              dVar13 = __real_3ff0000000000000 /
                       SQRT(((*(double *)(local_260 + (uint)(iVar6 * 0x28)) -
                             *(double *)(local_260 + lVar12 * 0x28)) -
                            *(double *)(local_260 + (longlong)iVar3 * 0x28)) +
                            __real_3ff0000000000000);
              *(double *)((longlong)local_1c0 + (ulonglong)(uint)(iVar6 * 8)) =
                   (__real_3ff0000000000000 / dVar13) * __real_3fe0000000000000;
              dVar13 = dVar13 * __real_3fe0000000000000;
              local_1c0[lVar12] =
                   (*(double *)(local_260 + (longlong)(iVar2 + iVar6 * 4) * 8) +
                   *(double *)(local_260 + (longlong)(iVar6 + iVar2 * 4) * 8)) * dVar13;
              local_1c0[iVar3] =
                   dVar13 * (*(double *)(local_260 + (longlong)(iVar3 + iVar6 * 4) * 8) +
                            *(double *)(local_260 + (longlong)(iVar6 + iVar3 * 4) * 8));
              dVar13 = dVar13 * (*(double *)(local_260 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                                *(double *)(local_260 + (longlong)(iVar2 + iVar3 * 4) * 8));
            }
            else {
              auVar15 = vshufpd_avx(_local_260,_local_260,1);
              auVar14 = vshufpd_avx(local_220,local_220,1);
              dVar55 = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + dVar13);
              dVar13 = dVar55 * __real_3fe0000000000000;
              local_1c0[0] = dVar13 * (auVar103._16_8_ - auVar14._0_8_);
              local_1c0[1] = dVar13 * ((double)local_220._0_8_ - auVar148._16_8_);
              local_1c0[2] = dVar13 * (auVar15._0_8_ - (double)local_240._0_8_);
              dVar13 = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar55);
            }
            auVar195._8_8_ = 0;
            auVar195._0_8_ = local_1c0[2];
            auVar124._8_8_ = 0;
            auVar124._0_8_ = local_1c0[0];
            auVar22._8_8_ = 0;
            auVar22._0_8_ = local_1c0[1];
            auVar145._8_8_ = 0;
            auVar145._0_8_ = dVar13;
            goto LAB_140c7dd0d;
          }
        }
        auVar124 = SUB6416(ZEXT864(0),0) << 0x40;
        auVar22 = ZEXT816(0);
        auVar145._8_8_ = 0;
        auVar145._0_8_ = __real_3ff0000000000000;
      }
LAB_140c7dd0d:
      auVar15 = vunpcklpd_avx(auVar195,auVar145);
      auVar14 = vunpcklpd_avx(auVar124,auVar22);
      dVar55 = auVar14._0_8_;
      dVar56 = auVar14._8_8_;
      dVar58 = auVar15._0_8_;
      auVar26._0_8_ = dVar58 * dVar58 + dVar55 * dVar55;
      dVar85 = auVar15._8_8_;
      auVar26._8_8_ = dVar85 * dVar85 + dVar56 * dVar56;
      auVar15 = vshufpd_avx(auVar26,auVar26,1);
      dVar13 = auVar26._0_8_ + auVar15._0_8_;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = __real_3e45798ee2308c3a;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = dVar13;
      auVar15 = vcmpsd_avx(auVar64,auVar27,6);
      uVar86 = ~auVar15._0_8_ & __real_ffffffffffffffff;
      dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
      auVar109._0_8_ =
           ~uVar86 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar109._8_8_ = ~uVar86 & _UNK_150b54548;
      auVar109._16_8_ = ~uVar86 & _UNK_150b54550;
      auVar109._24_8_ = ~uVar86 & _UNK_150b54558;
      auVar144._0_8_ = (double)((ulonglong)(dVar55 * dVar13) & uVar86);
      auVar144._8_8_ = (double)((ulonglong)(dVar56 * dVar13) & uVar86);
      auVar152._16_8_ = (ulonglong)(dVar58 * dVar13) & uVar86;
      auVar152._0_16_ = auVar144;
      auVar152._24_8_ = (ulonglong)(dVar85 * dVar13) & uVar86;
      auVar57 = auVar152._16_16_ | auVar109._16_16_;
      auVar15 = vshufps_avx(auVar144,auVar144,0x4e);
      auVar14 = vshufps_avx(auVar57,auVar57,0x4e);
      dVar13 = auVar14._0_8_;
      auVar63._8_8_ = 0.0;
      auVar63._0_8_ = (double)uStack_200;
      auVar94._8_8_ = 0;
      auVar94._0_8_ = uStack_1f8;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = uStack_1f0;
      auVar164._8_8_ = dStack_f8;
      auVar164._0_8_ = local_100;
    }
    auVar14 = vunpcklpd_avx(auVar154,_local_190);
    auVar59 = vunpcklpd_avx(auVar164,local_1d0);
    auVar141._0_8_ =
         auVar14._0_8_ * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
    auVar141._8_8_ = auVar14._8_8_ * _UNK_150aa8e88;
    auVar141._16_8_ = auVar59._0_8_ * _DAT_150aa8e90;
    auVar141._24_8_ = auVar59._8_8_ * _UNK_150aa8e98;
    auVar14 = vunpcklpd_avx(auVar63,auVar94);
    auVar163 = vpermpd_avx2(auVar141,0xc9);
    auVar59 = vunpcklpd_avx(auVar144,auVar15);
    auVar156._8_8_ = dVar13;
    auVar156._0_8_ = dVar13;
    auVar17 = vunpcklpd_avx(auVar57,auVar156);
    auVar15 = vunpcklpd_avx(auVar15,auVar57);
    auVar57 = vunpcklpd_avx(auVar144,auVar156);
    dVar55 = auVar59._0_8_ * auVar163._0_8_ - auVar15._0_8_ * auVar141._0_8_;
    dVar56 = auVar59._8_8_ * auVar163._8_8_ - auVar15._8_8_ * auVar141._8_8_;
    dVar58 = auVar17._0_8_ * auVar163._16_8_ - auVar57._0_8_ * auVar141._16_8_;
    dVar85 = auVar17._8_8_ * auVar163._24_8_ - auVar57._8_8_ * auVar141._24_8_;
    auVar81._0_8_ = dVar55 + dVar55;
    auVar81._8_8_ = dVar56 + dVar56;
    auVar81._16_8_ = dVar58 + dVar58;
    auVar81._24_8_ = dVar85 + dVar85;
    auVar163 = vpermpd_avx2(auVar81,0xc9);
    auVar29 = vpermpd_avx2(auVar81,0xd2);
    auVar142._0_8_ = auVar59._0_8_ * auVar29._0_8_ - auVar15._0_8_ * auVar163._0_8_;
    auVar142._8_8_ = auVar59._8_8_ * auVar29._8_8_ - auVar15._8_8_ * auVar163._8_8_;
    auVar142._16_8_ = auVar17._0_8_ * auVar29._16_8_ - auVar57._0_8_ * auVar163._16_8_;
    auVar142._24_8_ = auVar17._8_8_ * auVar29._24_8_ - auVar57._8_8_ * auVar163._24_8_;
    auVar29 = vpermpd_avx2(auVar142,0xc9);
    dVar55 = (double)(param_3 * __real_3f000000 * param_7);
    auVar80._0_8_ =
         dVar55 * (double)(__real_7fffffffffffffff &
                          (ulonglong)(auVar163._0_8_ * dVar13 + auVar141._0_8_ + auVar29._0_8_));
    auVar80._8_8_ =
         dVar55 * (double)(__real_7fffffffffffffff &
                          (ulonglong)(auVar163._8_8_ * dVar13 + auVar141._8_8_ + auVar29._8_8_));
    auVar80._16_8_ =
         dVar55 * (double)(__real_7fffffffffffffff &
                          (ulonglong)(auVar163._16_8_ * dVar13 + auVar141._16_8_ + auVar29._16_8_));
    auVar80._24_8_ =
         dVar55 * (double)(__real_7fffffffffffffff &
                          (ulonglong)(auVar163._24_8_ * dVar13 + auVar141._24_8_ + auVar29._24_8_));
    auVar53._16_16_ = auVar84;
    auVar53._0_16_ = auVar14;
    goto LAB_140c7de56;
  }
  auVar188._8_8_ = 0;
  auVar188._0_8_ = *(double *)param_2[4];
  auVar197._8_8_ = 0;
  auVar197._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar13 = *(double *)param_2[5];
  auVar199._8_8_ = 0;
  auVar199._0_8_ = dVar13;
  auVar30 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar29,1);
  auVar30 = vpackssdw_avx2(auVar30,auVar29);
  auVar15 = vpackssdw_avx(auVar30._0_16_,auVar30._16_16_);
  auVar14 = vpshufd_avx(auVar15,0xd8);
  auVar29 = vpcmpgtd_avx2(auVar29,auVar163);
  auVar15 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
  auVar15 = vpand_avx(auVar14,auVar15);
  auVar15 = vpsllw_avx(auVar15,0xf);
  if ((((((((SUB161(auVar15 >> 0xf,0) & 1) == 0 && (SUB161(auVar15 >> 0x1f,0) & 1) == 0) &&
          (SUB161(auVar15 >> 0x2f,0) & 1) == 0) && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar15 >> 0x4f,0) & 1) == 0) && (SUB161(auVar15 >> 0x5f,0) & 1) == 0) &&
      (SUB161(auVar15 >> 0x6f,0) & 1) == 0) && -1 < auVar15[0xf]) {
    auVar122._8_8_ = 0;
    auVar122._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar13 = *(double *)*param_2;
    auVar90._8_8_ = dVar13;
    auVar90._0_8_ = dVar13;
    auVar104._16_8_ = dVar13;
    auVar104._0_16_ = auVar90;
    auVar104._24_8_ = dVar13;
    auVar29 = vpermpd_avx2(auVar196,0x1b);
    dVar55 = *(double *)(param_2[1] + 8);
    auVar75._8_8_ = dVar55;
    auVar75._0_8_ = dVar55;
    auVar75._16_8_ = dVar55;
    auVar75._24_8_ = dVar55;
    dVar56 = *(double *)(*param_2 + 8);
    auVar19._8_8_ = dVar56;
    auVar19._0_8_ = dVar56;
    auVar48._16_8_ = dVar56;
    auVar48._0_16_ = auVar19;
    auVar48._24_8_ = dVar56;
    auVar30 = vpermpd_avx2(auVar196,0x4e);
    dVar58 = *(double *)param_2[1];
    auVar179._8_8_ = dVar58;
    auVar179._0_8_ = dVar58;
    auVar186._16_8_ = dVar58;
    auVar186._0_16_ = auVar179;
    auVar186._24_8_ = dVar58;
    auVar163 = vshufpd_avx(auVar196,auVar196,5);
    auVar143._0_8_ =
         dVar58 * auVar163._0_8_ *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         auVar30._0_8_ * dVar56 *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
         auVar196._0_8_ * dVar55 +
         auVar29._0_8_ * dVar13 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
    auVar143._8_8_ =
         dVar58 * auVar163._8_8_ * _UNK_150b54428 +
         auVar30._8_8_ * dVar56 * _UNK_150b54408 +
         auVar196._8_8_ * dVar55 + auVar29._8_8_ * dVar13 * _UNK_150b543e8;
    auVar149._16_8_ =
         dVar58 * auVar163._16_8_ * _UNK_150b54430 +
         auVar30._16_8_ * dVar56 * _UNK_150b54410 +
         auVar196._16_8_ * dVar55 + auVar29._16_8_ * dVar13 * _UNK_150b543f0;
    auVar149._0_16_ = auVar143;
    auVar149._24_8_ =
         dVar58 * auVar163._24_8_ * _UNK_150b54438 +
         auVar30._24_8_ * dVar56 * _UNK_150b54418 +
         auVar196._24_8_ * dVar55 + auVar29._24_8_ * dVar13 * _UNK_150b543f8;
    auVar15 = vshufpd_avx(auVar143,auVar143,1);
    auVar57 = auVar149._16_16_;
    auVar14 = vshufpd_avx(auVar57,auVar57,1);
    dVar13 = auVar14._0_8_;
    auVar14 = vunpcklpd_avx(auVar199,auVar122);
    auVar59 = vunpcklpd_avx(auVar188,auVar197);
    auVar161._0_8_ = local_120._0_8_ * auVar59._0_8_;
    auVar161._8_8_ = local_120._8_8_ * auVar59._8_8_;
    auVar161._16_8_ = auVar167._16_8_ * auVar14._0_8_;
    auVar161._24_8_ = auVar167._24_8_ * auVar14._8_8_;
    auVar52 = vpermpd_avx2(auVar161,0xc9);
    auVar17 = vunpcklpd_avx(auVar90,auVar19);
    auVar163 = vblendpd_avx(auVar104,ZEXT1632(auVar17),3);
    auVar163 = vblendpd_avx(auVar163,auVar186,4);
    auVar29 = vblendpd_avx(auVar163,auVar75,8);
    auVar17 = vunpcklpd_avx(auVar19,auVar179);
    auVar30 = vblendpd_avx(auVar48,ZEXT1632(auVar17),3);
    auVar30 = vblendpd_avx(auVar30,auVar104,4);
    auVar31 = vblendpd_avx(auVar30,auVar75,8);
    dVar56 = auVar52._0_8_ * auVar29._0_8_ - auVar161._0_8_ * auVar31._0_8_;
    dVar58 = auVar52._8_8_ * auVar29._8_8_ - auVar161._8_8_ * auVar31._8_8_;
    dVar85 = auVar52._16_8_ * auVar29._16_8_ - auVar161._16_8_ * auVar31._16_8_;
    dVar111 = auVar52._24_8_ * auVar29._24_8_ - auVar161._24_8_ * auVar31._24_8_;
    auVar105._0_8_ = dVar56 + dVar56;
    auVar105._8_8_ = dVar58 + dVar58;
    auVar105._16_8_ = dVar85 + dVar85;
    auVar105._24_8_ = dVar111 + dVar111;
    auVar29 = vpermpd_avx2(auVar105,0xc9);
    auVar31 = vpermpd_avx2(auVar105,0xd2);
    auVar49._0_8_ = auVar163._0_8_ * auVar31._0_8_ - auVar30._0_8_ * auVar29._0_8_;
    auVar49._8_8_ = auVar163._8_8_ * auVar31._8_8_ - auVar30._8_8_ * auVar29._8_8_;
    auVar49._16_8_ = auVar163._16_8_ * auVar31._16_8_ - auVar30._16_8_ * auVar29._16_8_;
    auVar49._24_8_ = auVar163._24_8_ * auVar31._24_8_ - auVar30._24_8_ * auVar29._24_8_;
    auVar163 = vpermpd_avx2(auVar49,0xc9);
    auVar62._0_8_ = *(double *)param_2[2] + auVar29._0_8_ * dVar55 + auVar161._0_8_ + auVar163._0_8_
    ;
    auVar62._8_8_ =
         *(double *)(param_2[2] + 8) + auVar29._8_8_ * dVar55 + auVar161._8_8_ + auVar163._8_8_;
    auVar76._16_8_ =
         *(double *)param_2[3] + auVar29._16_8_ * dVar55 + auVar161._16_8_ + auVar163._16_8_;
    auVar76._0_16_ = auVar62;
    auVar76._24_8_ = auVar29._24_8_ * dVar55 + auVar161._24_8_ + auVar163._24_8_ + 0.0;
    auVar93 = vshufpd_avx(auVar62,auVar62,1);
    auVar20._0_8_ =
         auVar59._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    auVar20._8_8_ = auVar59._8_8_ * _UNK_150b54508;
    auVar50._16_8_ = auVar14._0_8_ * _UNK_150b54510;
    auVar50._0_16_ = auVar20;
    auVar50._24_8_ = auVar14._8_8_ * _UNK_150b54518;
    auVar83 = auVar76._16_16_;
    local_1d0 = vshufpd_avx(auVar20,auVar20,1);
    _local_190 = auVar50._16_16_;
    auVar14 = vshufpd_avx(_local_190,_local_190,1);
    local_e0 = __real_7fffffffffffffff;
    uStack_d8 = __real_7fffffffffffffff;
    uStack_d0 = __real_7fffffffffffffff;
    uStack_c8 = __real_7fffffffffffffff;
  }
  else {
    local_e0 = __real_7fffffffffffffff;
    uStack_d8 = __real_7fffffffffffffff;
    uStack_d0 = __real_7fffffffffffffff;
    uStack_c8 = __real_7fffffffffffffff;
    auVar33._0_8_ = auVar196._0_8_ + auVar196._0_8_;
    auVar33._8_8_ = auVar196._8_8_ + auVar196._8_8_;
    auVar33._16_8_ = auVar196._16_8_ + auVar196._16_8_;
    auVar33._24_8_ = auVar196._24_8_ + auVar196._24_8_;
    auVar71._0_8_ = auVar196._0_8_ * auVar33._0_8_;
    auVar71._8_8_ = auVar196._8_8_ * auVar33._8_8_;
    auVar71._16_8_ = auVar196._16_8_ * auVar33._16_8_;
    auVar71._24_8_ = auVar196._24_8_ * auVar33._24_8_;
    auVar29 = vpermpd_avx2(auVar71,0xc1);
    auVar30 = vpermpd_avx2(auVar71,0xda);
    auVar72._0_8_ = auVar29._0_8_ + auVar30._0_8_;
    auVar72._8_8_ = auVar29._8_8_ + auVar30._8_8_;
    auVar72._16_8_ = auVar29._16_8_ + auVar30._16_8_;
    auVar72._24_8_ = auVar29._24_8_ + auVar30._24_8_;
    auVar29 = vsubpd_avx(auVar157,auVar72);
    auVar30 = vpermpd_avx2(auVar196,4);
    auVar31 = vpermpd_avx2(auVar33,0x29);
    auVar99._0_8_ = auVar30._0_8_ * auVar31._0_8_;
    auVar99._8_8_ = auVar30._8_8_ * auVar31._8_8_;
    auVar99._16_8_ = auVar30._16_8_ * auVar31._16_8_;
    auVar99._24_8_ = auVar30._24_8_ * auVar31._24_8_;
    auVar30 = vpermpd_avx2(auVar196,0xff);
    auVar31 = vpermpd_avx2(auVar33,0x12);
    auVar34._0_8_ = auVar30._0_8_ * auVar31._0_8_;
    auVar34._8_8_ = auVar30._8_8_ * auVar31._8_8_;
    auVar34._16_8_ = auVar30._16_8_ * auVar31._16_8_;
    auVar34._24_8_ = auVar30._24_8_ * auVar31._24_8_;
    auVar114._0_8_ = auVar99._0_8_ + auVar34._0_8_;
    auVar114._8_8_ = auVar99._8_8_ + auVar34._8_8_;
    auVar127._16_8_ = auVar99._16_8_ + auVar34._16_8_;
    auVar127._0_16_ = auVar114;
    auVar127._24_8_ = auVar99._24_8_ + auVar34._24_8_;
    auVar30 = vsubpd_avx(auVar99,auVar34);
    local_180 = vunpcklpd_avx(auVar29._0_16_,auVar114);
    local_170[0] = (double)vmovlpd_avx(auVar30._16_16_);
    local_170[1] = 0.0;
    local_160 = vblendpd_avx(auVar29._0_16_,auVar30._0_16_,1);
    local_150 = vmovhpd_avx(auVar114);
    local_148 = 0;
    local_140 = vblendpd_avx(auVar30._0_16_,auVar127._16_16_,1);
    local_130 = vmovlpd_avx(auVar29._16_16_);
    local_128 = 0;
    local_110 = vmovlpd_avx(auVar167._16_16_);
    local_108 = 0x3ff0000000000000;
    auVar15 = param_2[2];
    uVar1 = *(undefined8 *)param_2[1];
    auVar35._8_8_ = uVar1;
    auVar35._0_8_ = uVar1;
    auVar35._16_8_ = uVar1;
    auVar35._24_8_ = uVar1;
    auVar29 = vblendpd_avx(ZEXT1632(*param_2),auVar35,4);
    dVar55 = *(double *)(param_2[1] + 8);
    auVar128._8_8_ = dVar55;
    auVar128._0_8_ = dVar55;
    auVar128._16_8_ = dVar55;
    auVar128._24_8_ = dVar55;
    auVar30 = vblendpd_avx(auVar29,auVar128,8);
    auVar168._0_8_ = auVar30._0_8_ + auVar30._0_8_;
    auVar168._8_8_ = auVar30._8_8_ + auVar30._8_8_;
    auVar168._16_8_ = auVar30._16_8_ + auVar30._16_8_;
    auVar168._24_8_ = auVar30._24_8_ + auVar30._24_8_;
    auVar36._0_8_ = auVar29._0_8_ * auVar168._0_8_;
    auVar36._8_8_ = auVar29._8_8_ * auVar168._8_8_;
    auVar36._16_8_ = auVar29._16_8_ * auVar168._16_8_;
    auVar36._24_8_ = auVar29._24_8_ * auVar168._24_8_;
    auVar29 = vpermpd_avx2(auVar36,0xc1);
    auVar30 = vpermpd_avx2(auVar36,0xda);
    auVar37._0_8_ = auVar29._0_8_ + auVar30._0_8_;
    auVar37._8_8_ = auVar29._8_8_ + auVar30._8_8_;
    auVar37._16_8_ = auVar29._16_8_ + auVar30._16_8_;
    auVar37._24_8_ = auVar29._24_8_ + auVar30._24_8_;
    auVar29 = vsubpd_avx(auVar157,auVar37);
    auVar14 = vunpcklpd_avx(auVar188,auVar197);
    auVar158._16_8_ = dVar13;
    auVar158._0_16_ = auVar14;
    auVar158._24_8_ = 0;
    auVar16._0_8_ = auVar14._0_8_ * auVar29._0_8_;
    auVar16._8_8_ = auVar14._8_8_ * auVar29._8_8_;
    auVar38._16_8_ = dVar13 * auVar29._16_8_;
    auVar38._0_16_ = auVar16;
    auVar38._24_8_ = auVar29._24_8_ * 0.0;
    uVar1 = *(undefined8 *)*param_2;
    auVar181._8_8_ = uVar1;
    auVar181._0_8_ = uVar1;
    auVar181._16_8_ = uVar1;
    auVar181._24_8_ = uVar1;
    auVar29 = vblendpd_avx(ZEXT1632(*param_2),auVar181,0xc);
    auVar30 = vpermpd_avx2(auVar168,0x29);
    auVar100._0_8_ = auVar30._0_8_ * auVar29._0_8_;
    auVar100._8_8_ = auVar30._8_8_ * auVar29._8_8_;
    auVar100._16_8_ = auVar30._16_8_ * auVar29._16_8_;
    auVar100._24_8_ = auVar30._24_8_ * auVar29._24_8_;
    auVar29 = vpermpd_avx2(auVar168,0x12);
    auVar129._0_8_ = dVar55 * auVar29._0_8_;
    auVar129._8_8_ = dVar55 * auVar29._8_8_;
    auVar129._16_8_ = dVar55 * auVar29._16_8_;
    auVar129._24_8_ = dVar55 * auVar29._24_8_;
    auVar165._0_8_ = auVar14._0_8_ * (auVar100._0_8_ + auVar129._0_8_);
    auVar165._8_8_ = auVar14._8_8_ * (auVar100._8_8_ + auVar129._8_8_);
    auVar169._16_8_ = dVar13 * (auVar100._16_8_ + auVar129._16_8_);
    auVar169._0_16_ = auVar165;
    auVar169._24_8_ = (auVar100._24_8_ + auVar129._24_8_) * 0.0;
    auVar30 = vsubpd_avx(auVar100,auVar129);
    auVar14 = vunpcklpd_avx(auVar197,auVar199);
    uVar1 = *(undefined8 *)(param_2[5] + 8);
    auVar182._8_8_ = uVar1;
    auVar182._0_8_ = uVar1;
    auVar182._16_8_ = uVar1;
    auVar182._24_8_ = uVar1;
    auVar29 = vblendpd_avx(auVar158,auVar182,8);
    local_100 = auVar29._0_8_ *
                ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    dStack_f8 = auVar29._8_8_ * _UNK_150b54508;
    dStack_f0 = auVar29._16_8_ * _UNK_150b54510;
    dStack_e8 = auVar29._24_8_ * _UNK_150b54518;
    auVar115._0_8_ = auVar30._0_8_ * auVar14._0_8_;
    auVar115._8_8_ = auVar30._8_8_ * auVar14._8_8_;
    auVar130._16_8_ = auVar30._16_8_ * *(double *)param_2[4];
    auVar130._0_16_ = auVar115;
    auVar130._24_8_ = auVar30._24_8_ * 0.0;
    dStack_188 = dStack_e8;
    local_190 = (undefined1  [8])dStack_f0;
    auVar153._8_8_ = 0;
    auVar153._0_8_ = *(ulonglong *)param_2[3];
    auVar14 = CONCAT88(auVar165._0_8_,auVar165._0_8_);
    auVar29 = vblendpd_avx(ZEXT1632(auVar16),ZEXT1632(auVar14),2);
    auVar29 = vblendpd_avx(auVar29,auVar130,4);
    auVar30 = vblendpd_avx(ZEXT1632(auVar169._16_16_),auVar130,2);
    auVar30 = vblendpd_avx(auVar30,auVar38,4);
    auVar131._16_16_ = auVar165;
    auVar131._0_16_ = auVar115;
    auVar31 = vshufpd_avx(auVar131,ZEXT1632(auVar16),0xe);
    auVar14 = vmovhpd_avx(auVar153,__real_3ff0000000000000);
    lVar12 = 0x18;
    do {
      dVar13 = *(double *)(local_1a0 + lVar12 + 8);
      dVar55 = *(double *)(local_190 + lVar12 + 8);
      dVar56 = *(double *)(local_190 + lVar12);
      dVar58 = *(double *)(local_180 + lVar12);
      *(double *)((longlong)adStack_278 + lVar12) =
           auVar15._0_8_ * dVar58 +
           auVar31._0_8_ * dVar56 + auVar29._0_8_ * dVar13 + auVar30._0_8_ * dVar55;
      *(double *)((longlong)adStack_278 + lVar12 + 8) =
           auVar15._8_8_ * dVar58 +
           auVar31._8_8_ * dVar56 + auVar29._8_8_ * dVar13 + auVar30._8_8_ * dVar55;
      *(double *)((longlong)adStack_278 + lVar12 + 0x10) =
           auVar14._0_8_ * dVar58 +
           auVar31._16_8_ * dVar56 + auVar29._16_8_ * dVar13 + auVar30._16_8_ * dVar55;
      *(double *)(local_260 + lVar12) =
           auVar14._8_8_ * dVar58 +
           auVar31._24_8_ * dVar56 + auVar29._24_8_ * dVar13 + auVar30._24_8_ * dVar55;
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != 0x98);
    dVar55 = adStack_258[1] * adStack_258[1] +
             (double)local_260 * (double)local_260 + adStack_258[0] * adStack_258[0];
    dVar56 = local_230 * local_230 +
             (double)local_240._0_8_ * (double)local_240._0_8_ +
             (double)local_240._8_8_ * (double)local_240._8_8_;
    dVar13 = __real_3ff0000000000000;
    if (0.0 <= dVar55 + __real_be45798ee2308c3a) {
      dVar13 = __real_3ff0000000000000 / SQRT(dVar55);
    }
    dVar58 = local_210 * local_210 +
             (double)local_220._0_8_ * (double)local_220._0_8_ +
             (double)local_220._8_8_ * (double)local_220._8_8_;
    dVar55 = __real_3ff0000000000000;
    if (0.0 <= dVar56 + __real_be45798ee2308c3a) {
      dVar55 = __real_3ff0000000000000 / SQRT(dVar56);
    }
    auVar9._8_8_ = dStack_f8;
    auVar9._0_8_ = local_100;
    local_1d0 = vpermilpd_avx(auVar9,1);
    auVar14 = vpermilpd_avx(_local_190,1);
    local_1a0 = auVar14;
    auVar198 = SUB6416(ZEXT864(0),0) << 0x40;
    dVar56 = __real_3ff0000000000000;
    if (0.0 <= dVar58 + __real_be45798ee2308c3a) {
      dVar56 = __real_3ff0000000000000 / SQRT(dVar58);
    }
    auVar116._8_8_ = 0;
    auVar116._0_8_ = (double)local_260 * dVar13;
    auVar194._8_8_ = 0;
    auVar194._0_8_ = adStack_258[0] * dVar13;
    auVar15 = vunpcklpd_avx(auVar116,auVar194);
    auVar60._8_8_ = 0;
    auVar60._0_8_ = (double)local_240._0_8_ * dVar55;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = (double)local_240._8_8_ * dVar55;
    auVar59 = vunpcklpd_avx(auVar60,auVar117);
    local_220._8_8_ = (double)local_220._8_8_ * dVar56;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = dVar56 * (double)local_220._0_8_;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = local_220._8_8_;
    auVar17 = vunpcklpd_avx(auVar87,auVar118);
    auVar57 = ZEXT816(0);
    auVar11._8_8_ = dStack_f8;
    auVar11._0_8_ = local_100;
    auVar11._16_8_ = dStack_f0;
    auVar11._24_8_ = dStack_e8;
    auVar29 = vcmppd_avx(ZEXT1632(auVar57),auVar11,2);
    auVar30 = vpcmpeqd_avx2(ZEXT832((ulonglong)local_220._8_8_),ZEXT832((ulonglong)local_220._8_8_))
    ;
    auVar29 = vblendvps_avx(ZEXT1632(auVar57),auVar30,auVar29);
    auVar190._0_8_ =
         (double)CONCAT44(__real_bff0000000000000._4_4_ ^ auVar29._4_4_ & uVar4,
                          (uint)__real_bff0000000000000 ^ auVar29._0_4_ & uVar5);
    auVar190._8_4_ = (uint)__real_bff0000000000000 ^ auVar29._8_4_ & uVar5;
    auVar190._12_4_ = __real_bff0000000000000._4_4_ ^ auVar29._12_4_ & uVar4;
    auVar190._16_4_ = (uint)__real_bff0000000000000 ^ auVar29._16_4_ & uVar5;
    auVar190._20_4_ = __real_bff0000000000000._4_4_ ^ auVar29._20_4_ & uVar4;
    auVar190._24_4_ = (uint)__real_bff0000000000000 ^ auVar29._24_4_ & uVar5;
    auVar190._28_4_ = __real_bff0000000000000._4_4_ ^ auVar29._28_4_ & uVar4;
    local_260 = (undefined1  [8])(auVar15._0_8_ * auVar190._0_8_);
    adStack_258[0] = auVar15._8_8_ * auVar190._0_8_;
    auVar204._16_8_ = dVar13 * adStack_258[1] * auVar190._0_8_;
    auVar204._0_16_ = _local_260;
    auVar204._24_8_ = auVar190._0_8_ * 0.0;
    adStack_258[1] = (double)vmovlpd_avx(auVar204._16_16_);
    auVar29 = vpermpd_avx2(auVar190,0x55);
    local_240._0_8_ = auVar29._0_8_ * auVar59._0_8_;
    local_240._8_8_ = auVar29._8_8_ * auVar59._8_8_;
    auVar201._16_8_ = auVar29._16_8_ * local_230 * dVar55;
    auVar201._0_16_ = local_240;
    auVar201._24_8_ = auVar29._24_8_ * 0.0;
    local_230 = (double)vmovlpd_avx(auVar201._16_16_);
    auVar29 = vpermpd_avx2(auVar190,0xaa);
    local_220._0_8_ = auVar29._0_8_ * auVar17._0_8_;
    local_220._8_8_ = auVar29._8_8_ * auVar17._8_8_;
    auVar205._16_8_ = auVar29._16_8_ * local_210 * dVar56;
    auVar205._0_16_ = local_220;
    auVar205._24_8_ = auVar29._24_8_ * 0.0;
    local_210 = (double)vmovlpd_avx(auVar205._16_16_);
    auVar183._8_8_ = __real_0010000000000000;
    auVar183._0_8_ = __real_0010000000000000;
    auVar183._16_8_ = __real_0010000000000000;
    auVar183._24_8_ = __real_0010000000000000;
    auVar29 = vblendpd_avx(auVar204,auVar183,8);
    auVar39._0_8_ = __real_7fffffffffffffff & auVar29._0_8_;
    auVar39._8_8_ = __real_7fffffffffffffff & auVar29._8_8_;
    auVar39._16_8_ = __real_7fffffffffffffff & auVar29._16_8_;
    auVar39._24_8_ = __real_7fffffffffffffff & auVar29._24_8_;
    auVar191._8_8_ = __real_3f1a36e2eb1c432d;
    auVar191._0_8_ = __real_3f1a36e2eb1c432d;
    auVar191._16_8_ = __real_3f1a36e2eb1c432d;
    auVar191._24_8_ = __real_3f1a36e2eb1c432d;
    auVar29 = vcmppd_avx(auVar39,auVar191,6);
    auVar31 = ZEXT1632(auVar57);
    auVar29 = vpackssdw_avx2(auVar29,auVar31);
    auVar15 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
    auVar59 = vpshufd_avx(auVar15,0xd8);
    auVar29 = vpcmpeqd_avx2(auVar163,auVar31);
    auVar17 = SUB3216(auVar29 ^ auVar30,0);
    auVar57 = SUB3216(auVar29 ^ auVar30,0x10);
    auVar15 = vpackssdw_avx(auVar17,auVar57);
    auVar15 = vpand_avx(auVar59,auVar15);
    auVar15 = vpsllw_avx(auVar15,0xf);
    if ((((((((SUB161(auVar15 >> 0xf,0) & 1) == 0 && (SUB161(auVar15 >> 0x1f,0) & 1) == 0) &&
            (SUB161(auVar15 >> 0x2f,0) & 1) == 0) && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar15 >> 0x4f,0) & 1) == 0) && (SUB161(auVar15 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar15 >> 0x6f,0) & 1) == 0) && -1 < auVar15[0xf]) {
LAB_140c7d6e0:
      auVar61 = SUB6416(ZEXT864(0),0) << 0x40;
      auVar23 = (undefined1  [16])0x0;
      dVar13 = __real_3ff0000000000000;
    }
    else {
      auVar15 = vpackssdw_avx(auVar17,auVar57);
      auVar29 = vblendpd_avx(auVar201,auVar183,8);
      auVar132._0_8_ = __real_7fffffffffffffff & auVar29._0_8_;
      auVar132._8_8_ = __real_7fffffffffffffff & auVar29._8_8_;
      auVar132._16_8_ = __real_7fffffffffffffff & auVar29._16_8_;
      auVar132._24_8_ = __real_7fffffffffffffff & auVar29._24_8_;
      auVar29 = vcmppd_avx(auVar132,auVar191,6);
      auVar29 = vpackssdw_avx2(auVar29,auVar31);
      auVar17 = auVar29._16_16_;
      auVar59 = vpackssdw_avx(auVar29._0_16_,auVar17);
      auVar59 = vpshufd_avx(auVar59,0xd8);
      auVar15 = vpand_avx(auVar59,auVar15);
      auVar15 = vpsllw_avx(auVar15,0xf);
      if ((((((((SUB161(auVar15 >> 0xf,0) & 1) == 0 && (SUB161(auVar15 >> 0x1f,0) & 1) == 0) &&
              (SUB161(auVar15 >> 0x2f,0) & 1) == 0) && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar15 >> 0x4f,0) & 1) == 0) && (SUB161(auVar15 >> 0x5f,0) & 1) == 0) &&
          (SUB161(auVar15 >> 0x6f,0) & 1) == 0) && -1 < auVar15[0xf]) goto LAB_140c7d6e0;
      auVar163 = vpcmpeqd_avx2(auVar163,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      auVar29 = vpcmpeqd_avx2(ZEXT1632(auVar17),ZEXT1632(auVar17));
      auVar15 = vpackssdw_avx(SUB3216(auVar163 ^ auVar29,0),SUB3216(auVar163 ^ auVar29,0x10));
      auVar163 = vblendpd_avx(auVar205,auVar183,8);
      auVar133._0_8_ = __real_7fffffffffffffff & auVar163._0_8_;
      auVar133._8_8_ = __real_7fffffffffffffff & auVar163._8_8_;
      auVar133._16_8_ = __real_7fffffffffffffff & auVar163._16_8_;
      auVar133._24_8_ = __real_7fffffffffffffff & auVar163._24_8_;
      auVar163 = vcmppd_avx(auVar133,auVar191,6);
      auVar163 = vpackssdw_avx2(auVar163,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      auVar59 = vpackssdw_avx(auVar163._0_16_,auVar163._16_16_);
      auVar59 = vpshufd_avx(auVar59,0xd8);
      auVar15 = vpand_avx(auVar59,auVar15);
      auVar15 = vpsllw_avx(auVar15,0xf);
      if ((((((((SUB161(auVar15 >> 0xf,0) & 1) == 0 && (SUB161(auVar15 >> 0x1f,0) & 1) == 0) &&
              (SUB161(auVar15 >> 0x2f,0) & 1) == 0) && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar15 >> 0x4f,0) & 1) == 0) && (SUB161(auVar15 >> 0x5f,0) & 1) == 0) &&
          (SUB161(auVar15 >> 0x6f,0) & 1) == 0) && -1 < auVar15[0xf]) goto LAB_140c7d6e0;
      auVar15 = vshufpd_avx(local_240,local_240,1);
      dVar13 = auVar205._16_8_ + (double)local_260 + auVar15._0_8_;
      if (dVar13 <= 0.0) {
        uVar5 = (uint)((double)local_260 < auVar15._0_8_);
        uVar86 = 2;
        if (auVar205._16_8_ <= *(double *)(local_260 + uVar5 * 0x28)) {
          uVar86 = (ulonglong)uVar5;
        }
        iVar2 = *(int *)(&DAT_151c6ce40 + uVar86 * 4);
        lVar12 = (longlong)iVar2;
        iVar3 = *(int *)(&DAT_151c6ce40 + lVar12 * 4);
        iVar6 = (int)uVar86;
        dVar13 = __real_3ff0000000000000 /
                 SQRT(((*(double *)(local_260 + (uint)(iVar6 * 0x28)) -
                       *(double *)(local_260 + lVar12 * 0x28)) -
                      *(double *)(local_260 + (longlong)iVar3 * 0x28)) + __real_3ff0000000000000);
        *(double *)((longlong)local_1c0 + (ulonglong)(uint)(iVar6 * 8)) =
             (__real_3ff0000000000000 / dVar13) * __real_3fe0000000000000;
        dVar13 = dVar13 * __real_3fe0000000000000;
        local_1c0[lVar12] =
             (*(double *)(local_260 + (longlong)(iVar2 + iVar6 * 4) * 8) +
             *(double *)(local_260 + (longlong)(iVar6 + iVar2 * 4) * 8)) * dVar13;
        local_1c0[iVar3] =
             dVar13 * (*(double *)(local_260 + (longlong)(iVar3 + iVar6 * 4) * 8) +
                      *(double *)(local_260 + (longlong)(iVar6 + iVar3 * 4) * 8));
        dVar13 = dVar13 * (*(double *)(local_260 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                          *(double *)(local_260 + (longlong)(iVar2 + iVar3 * 4) * 8));
      }
      else {
        auVar15 = vshufpd_avx(_local_260,_local_260,1);
        auVar59 = vshufpd_avx(local_220,local_220,1);
        dVar55 = __real_3ff0000000000000 / SQRT(dVar13 + __real_3ff0000000000000);
        dVar13 = dVar55 * __real_3fe0000000000000;
        local_1c0[0] = (auVar201._16_8_ - auVar59._0_8_) * dVar13;
        local_1c0[1] = ((double)local_220._0_8_ - auVar204._16_8_) * dVar13;
        local_1c0[2] = (auVar15._0_8_ - (double)local_240._0_8_) * dVar13;
        dVar13 = (__real_3ff0000000000000 / dVar55) * __real_3fe0000000000000;
      }
      auVar198._8_8_ = 0;
      auVar198._0_8_ = local_1c0[2];
      auVar61._8_8_ = 0;
      auVar61._0_8_ = local_1c0[0];
      auVar23._8_8_ = 0;
      auVar23._0_8_ = local_1c0[1];
    }
    auVar88._8_8_ = 0;
    auVar88._0_8_ = dVar13;
    auVar15 = vunpcklpd_avx(auVar198,auVar88);
    auVar59 = vunpcklpd_avx(auVar61,auVar23);
    dVar55 = auVar59._0_8_;
    dVar56 = auVar59._8_8_;
    dVar58 = auVar15._0_8_;
    auVar24._0_8_ = dVar58 * dVar58 + dVar55 * dVar55;
    dVar85 = auVar15._8_8_;
    auVar24._8_8_ = dVar85 * dVar85 + dVar56 * dVar56;
    auVar15 = vshufpd_avx(auVar24,auVar24,1);
    dVar13 = auVar24._0_8_ + auVar15._0_8_;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = __real_3e45798ee2308c3a;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar13;
    auVar15 = vcmpsd_avx(auVar92,auVar25,6);
    uVar86 = ~auVar15._0_8_ & __real_ffffffffffffffff;
    dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
    auVar108._0_8_ =
         ~uVar86 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar108._8_8_ = ~uVar86 & _UNK_150b54548;
    auVar108._16_8_ = ~uVar86 & _UNK_150b54550;
    auVar108._24_8_ = ~uVar86 & _UNK_150b54558;
    auVar143._0_8_ = (double)((ulonglong)(dVar55 * dVar13) & uVar86);
    auVar143._8_8_ = (double)((ulonglong)(dVar56 * dVar13) & uVar86);
    auVar151._16_8_ = (ulonglong)(dVar58 * dVar13) & uVar86;
    auVar151._0_16_ = auVar143;
    auVar151._24_8_ = (ulonglong)(dVar85 * dVar13) & uVar86;
    auVar57 = auVar151._16_16_ | auVar108._16_16_;
    auVar15 = vshufps_avx(auVar143,auVar143,0x4e);
    auVar59 = vshufps_avx(auVar57,auVar57,0x4e);
    dVar13 = auVar59._0_8_;
    auVar62._8_8_ = 0.0;
    auVar62._0_8_ = (double)uStack_200;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uStack_1f8;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = uStack_1f0;
    auVar20._8_8_ = dStack_f8;
    auVar20._0_8_ = local_100;
  }
  auVar59 = vunpcklpd_avx(auVar20,local_1d0);
  auVar14 = vunpcklpd_avx(_local_190,auVar14);
  auVar139._0_8_ =
       auVar59._0_8_ * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
  auVar139._8_8_ = auVar59._8_8_ * _UNK_150aa8e88;
  auVar139._16_8_ = auVar14._0_8_ * _DAT_150aa8e90;
  auVar139._24_8_ = auVar14._8_8_ * _UNK_150aa8e98;
  auVar14 = vunpcklpd_avx(auVar62,auVar93);
  auVar163 = vpermpd_avx2(auVar139,0xc9);
  auVar59 = vunpcklpd_avx(auVar143,auVar15);
  auVar155._8_8_ = dVar13;
  auVar155._0_8_ = dVar13;
  auVar17 = vunpcklpd_avx(auVar57,auVar155);
  auVar15 = vunpcklpd_avx(auVar15,auVar57);
  auVar57 = vunpcklpd_avx(auVar143,auVar155);
  dVar55 = auVar59._0_8_ * auVar163._0_8_ - auVar15._0_8_ * auVar139._0_8_;
  dVar56 = auVar59._8_8_ * auVar163._8_8_ - auVar15._8_8_ * auVar139._8_8_;
  dVar58 = auVar17._0_8_ * auVar163._16_8_ - auVar57._0_8_ * auVar139._16_8_;
  dVar85 = auVar17._8_8_ * auVar163._24_8_ - auVar57._8_8_ * auVar139._24_8_;
  auVar79._0_8_ = dVar55 + dVar55;
  auVar79._8_8_ = dVar56 + dVar56;
  auVar79._16_8_ = dVar58 + dVar58;
  auVar79._24_8_ = dVar85 + dVar85;
  auVar163 = vpermpd_avx2(auVar79,0xc9);
  auVar29 = vpermpd_avx2(auVar79,0xd2);
  auVar140._0_8_ = auVar59._0_8_ * auVar29._0_8_ - auVar15._0_8_ * auVar163._0_8_;
  auVar140._8_8_ = auVar59._8_8_ * auVar29._8_8_ - auVar15._8_8_ * auVar163._8_8_;
  auVar140._16_8_ = auVar17._0_8_ * auVar29._16_8_ - auVar57._0_8_ * auVar163._16_8_;
  auVar140._24_8_ = auVar17._8_8_ * auVar29._24_8_ - auVar57._8_8_ * auVar163._24_8_;
  auVar29 = vpermpd_avx2(auVar140,0xc9);
  dVar55 = (double)(param_3 * __real_3f000000 * param_7);
  auVar80._0_8_ =
       dVar55 * (double)(local_e0 &
                        (ulonglong)(auVar163._0_8_ * dVar13 + auVar139._0_8_ + auVar29._0_8_));
  auVar80._8_8_ =
       dVar55 * (double)(uStack_d8 &
                        (ulonglong)(auVar163._8_8_ * dVar13 + auVar139._8_8_ + auVar29._8_8_));
  auVar80._16_8_ =
       dVar55 * (double)(uStack_d0 &
                        (ulonglong)(auVar163._16_8_ * dVar13 + auVar139._16_8_ + auVar29._16_8_));
  auVar80._24_8_ =
       dVar55 * (double)(uStack_c8 &
                        (ulonglong)(auVar163._24_8_ * dVar13 + auVar139._24_8_ + auVar29._24_8_));
  auVar53._16_16_ = auVar83;
  auVar53._0_16_ = auVar14;
LAB_140c7de56:
  auVar163 = vsubpd_avx(auVar53,auVar80);
  auVar110._0_8_ = (double)(param_3 * param_6);
  auVar110._8_8_ = auVar110._0_8_;
  auVar110._16_8_ = auVar110._0_8_;
  auVar110._24_8_ = auVar110._0_8_;
  auVar163 = vsubpd_avx(auVar163,auVar110);
  auVar28._0_8_ = auVar110._0_8_ + auVar53._0_8_ + auVar80._0_8_;
  auVar28._8_8_ = auVar110._0_8_ + auVar53._8_8_ + auVar80._8_8_;
  auVar54._16_8_ = auVar110._0_8_ + auVar53._16_8_ + auVar80._16_8_;
  auVar54._0_16_ = auVar28;
  auVar54._24_8_ = auVar110._0_8_ + auVar53._24_8_ + auVar80._24_8_;
  auVar82._16_16_ = auVar28;
  auVar82._0_16_ = auVar163._0_16_;
  auVar163 = vshufpd_avx(auVar163,auVar82,2);
  *param_1 = auVar163;
  auVar163 = vpermpd_avx2(auVar54,0xe9);
  *(undefined1 (*) [16])param_1[1] = auVar163._0_16_;
  param_1[1][0x10] = 1;
  return;
}

// BoxCalcAABB_avx2 @ 140c7def0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcAABB_avx2(undefined1 (*param_1) [32],undefined1 (*param_2) [16],float param_3,
                     undefined1 (*param_4) [24],double *param_5,uint param_6,uint param_7,
                     uint param_8)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [24];
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar32;
  undefined1 auVar17 [32];
  double dVar34;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar33 [16];
  undefined1 auVar28 [32];
  undefined1 auVar30 [32];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulonglong uVar35;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar38 [16];
  undefined1 auVar50 [32];
  undefined1 auVar54 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  double dVar90;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar91;
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  double dVar92;
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [32];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar100 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [32];
  undefined1 auVar110 [32];
  undefined1 auVar112 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar114 [16];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  uint uVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  uint uVar130;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar131 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [16];
  undefined1 auVar134 [32];
  double adStack_258 [3];
  undefined1 local_240 [8];
  double adStack_238 [3];
  undefined1 local_220 [16];
  double local_210;
  undefined8 local_208;
  undefined1 local_200 [16];
  double local_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  double local_1c0 [4];
  ulonglong local_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  double local_150 [2];
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [32];
  undefined1 auVar27 [32];
  undefined1 auVar29 [32];
  undefined1 auVar31 [32];
  undefined1 auVar47 [32];
  undefined1 auVar51 [32];
  undefined1 auVar65 [32];
  undefined1 auVar69 [32];
  undefined1 auVar78 [32];
  undefined1 auVar88 [32];
  undefined1 auVar99 [32];
  undefined1 auVar101 [32];
  undefined1 auVar109 [32];
  undefined1 auVar111 [32];
  undefined1 auVar113 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  
  auVar6 = *param_4;
  auVar17._24_8_ = 0;
  auVar17._0_24_ = auVar6;
  auVar42._8_8_ = __real_4076800000000000;
  auVar42._0_8_ = __real_4076800000000000;
  auVar42._16_8_ = __real_4076800000000000;
  auVar42._24_8_ = __real_4076800000000000;
  auVar18 = vdivpd_avx(auVar17,auVar42);
  auVar83._0_8_ = __real_7fffffffffffffff & auVar18._0_8_;
  auVar83._8_8_ = __real_7fffffffffffffff & auVar18._8_8_;
  auVar83._16_8_ = __real_7fffffffffffffff & auVar18._16_8_;
  auVar83._24_8_ = __real_7fffffffffffffff & auVar18._24_8_;
  auVar97._8_8_ = __real_4330000000000000;
  auVar97._0_8_ = __real_4330000000000000;
  auVar97._16_8_ = __real_4330000000000000;
  auVar97._24_8_ = __real_4330000000000000;
  auVar17 = vcmppd_avx(auVar97,auVar83,2);
  auVar17 = vpshufb_avx2(auVar17,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar20 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
  auVar131._0_12_ = ZEXT812(0);
  auVar131._12_4_ = 0;
  auVar17 = vblendvps_avx(ZEXT1632(auVar131),auVar20,auVar17);
  auVar19 = vroundpd_avx(auVar18,0xb);
  auVar115._0_4_ = ~auVar17._0_4_ & auVar19._0_4_;
  auVar115._4_4_ = ~auVar17._4_4_ & auVar19._4_4_;
  auVar115._8_4_ = ~auVar17._8_4_ & auVar19._8_4_;
  auVar115._12_4_ = ~auVar17._12_4_ & auVar19._12_4_;
  auVar115._16_4_ = ~auVar17._16_4_ & auVar19._16_4_;
  auVar115._20_4_ = ~auVar17._20_4_ & auVar19._20_4_;
  auVar115._24_4_ = ~auVar17._24_4_ & auVar19._24_4_;
  auVar115._28_4_ = ~auVar17._28_4_ & auVar19._28_4_;
  auVar60._0_8_ = auVar18._0_8_ & auVar17._0_8_;
  auVar60._8_8_ = auVar18._8_8_ & auVar17._8_8_;
  auVar60._16_8_ = auVar18._16_8_ & auVar17._16_8_;
  auVar60._24_8_ = auVar18._24_8_ & auVar17._24_8_;
  auVar60 = auVar60 | auVar115;
  auVar61._0_8_ = -(__real_4076800000000000 * auVar60._0_8_) + auVar6._0_8_;
  auVar61._8_8_ = -(__real_4076800000000000 * auVar60._8_8_) + auVar6._8_8_;
  auVar61._16_8_ = -(__real_4076800000000000 * auVar60._16_8_) + auVar6._16_8_;
  auVar61._24_8_ = -(__real_4076800000000000 * auVar60._24_8_) + 0.0;
  auVar17 = vminpd_avx(auVar61,auVar42);
  auVar43._8_8_ = __real_c076800000000000;
  auVar43._0_8_ = __real_c076800000000000;
  auVar43._16_8_ = __real_c076800000000000;
  auVar43._24_8_ = __real_c076800000000000;
  auVar17 = vmaxpd_avx(auVar43,auVar17);
  dVar8 = auVar17._0_8_ * __real_3f81df46a2529d39;
  auVar125._0_8_ = auVar17._8_8_ * __real_3f81df46a2529d39;
  dVar32 = auVar17._16_8_ * __real_3f81df46a2529d39;
  dVar34 = auVar17._24_8_ * __real_3f81df46a2529d39;
  auVar44._0_8_ = dVar8 * __real_3fc45f306dc9c883;
  auVar44._8_8_ = auVar125._0_8_ * __real_3fc45f306dc9c883;
  auVar44._16_8_ = dVar32 * __real_3fc45f306dc9c883;
  auVar44._24_8_ = dVar34 * __real_3fc45f306dc9c883;
  auVar17 = vroundpd_avx(auVar44,0xb);
  auVar62._0_8_ = auVar17._0_8_ * __real_c01921fb54442d18 + dVar8;
  auVar62._8_8_ = auVar17._8_8_ * __real_c01921fb54442d18 + auVar125._0_8_;
  auVar62._16_8_ = auVar17._16_8_ * __real_c01921fb54442d18 + dVar32;
  auVar62._24_8_ = auVar17._24_8_ * __real_c01921fb54442d18 + dVar34;
  auVar18._0_8_ = __real_8000000000000000 & (ulonglong)auVar62._0_8_;
  auVar18._8_8_ = __real_8000000000000000 & (ulonglong)auVar62._8_8_;
  auVar18._16_8_ = __real_8000000000000000 & (ulonglong)auVar62._16_8_;
  auVar18._24_8_ = __real_8000000000000000 & (ulonglong)auVar62._24_8_;
  auVar45._8_8_ = __real_400921fb54442d18;
  auVar45._0_8_ = __real_400921fb54442d18;
  auVar45._16_8_ = __real_400921fb54442d18;
  auVar45._24_8_ = __real_400921fb54442d18;
  auVar18 = vsubpd_avx(auVar18 | auVar45,auVar62);
  auVar46._0_8_ = __real_7fffffffffffffff & (ulonglong)auVar62._0_8_;
  auVar46._8_8_ = __real_7fffffffffffffff & (ulonglong)auVar62._8_8_;
  auVar46._16_8_ = __real_7fffffffffffffff & (ulonglong)auVar62._16_8_;
  auVar46._24_8_ = __real_7fffffffffffffff & (ulonglong)auVar62._24_8_;
  auVar84._8_8_ = __real_3ff921fb54442d18;
  auVar84._0_8_ = __real_3ff921fb54442d18;
  auVar84._16_8_ = __real_3ff921fb54442d18;
  auVar84._24_8_ = __real_3ff921fb54442d18;
  auVar17 = vcmppd_avx(auVar84,auVar46,1);
  auVar17 = vpshufb_avx2(auVar17,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar17 = vblendvps_avx(ZEXT1632(auVar131),auVar20,auVar17);
  auVar63._0_4_ = ~auVar17._0_4_ & SUB84(auVar62._0_8_,0);
  auVar63._4_4_ = ~auVar17._4_4_ & (uint)((ulonglong)auVar62._0_8_ >> 0x20);
  auVar63._8_4_ = ~auVar17._8_4_ & SUB84(auVar62._8_8_,0);
  auVar63._12_4_ = ~auVar17._12_4_ & (uint)((ulonglong)auVar62._8_8_ >> 0x20);
  auVar63._16_4_ = ~auVar17._16_4_ & SUB84(auVar62._16_8_,0);
  auVar63._20_4_ = ~auVar17._20_4_ & (uint)((ulonglong)auVar62._16_8_ >> 0x20);
  auVar63._24_4_ = ~auVar17._24_4_ & SUB84(auVar62._24_8_,0);
  auVar63._28_4_ = ~auVar17._28_4_ & (uint)((ulonglong)auVar62._24_8_ >> 0x20);
  auVar19._0_8_ = auVar18._0_8_ & auVar17._0_8_;
  auVar19._8_8_ = auVar18._8_8_ & auVar17._8_8_;
  auVar19._16_8_ = auVar18._16_8_ & auVar17._16_8_;
  auVar19._24_8_ = auVar18._24_8_ & auVar17._24_8_;
  auVar19 = auVar19 | auVar63;
  dVar8 = auVar19._0_8_;
  auVar128._16_8_ = dVar8 * dVar8;
  auVar125._0_8_ = auVar19._8_8_;
  dVar90 = auVar125._0_8_ * auVar125._0_8_;
  dVar32 = auVar19._16_8_;
  dVar91 = dVar32 * dVar32;
  dVar34 = auVar19._24_8_;
  dVar92 = dVar34 * dVar34;
  local_e0._8_8_ = __real_3ff0000000000000;
  local_e0._0_8_ = __real_3ff0000000000000;
  local_e0._16_8_ = __real_3ff0000000000000;
  local_e0._24_8_ = __real_3ff0000000000000;
  auVar36._0_8_ =
       (auVar128._16_8_ *
        (auVar128._16_8_ *
         (auVar128._16_8_ *
          (auVar128._16_8_ * (auVar128._16_8_ * __real_be59a6cb605c806f + __real_3ec71711c625173e) +
          __real_bf2a017e195d6197) + __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar8;
  auVar36._8_8_ =
       (dVar90 * (dVar90 * (dVar90 * (dVar90 * (dVar90 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * auVar125._0_8_;
  auVar47._16_8_ =
       (dVar91 * (dVar91 * (dVar91 * (dVar91 * (dVar91 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar32;
  auVar47._0_16_ = auVar36;
  auVar47._24_8_ =
       (dVar92 * (dVar92 * (dVar92 * (dVar92 * (dVar92 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar34;
  auVar33._0_8_ =
       (auVar128._16_8_ *
        (auVar128._16_8_ *
         (auVar128._16_8_ *
          (auVar128._16_8_ * (auVar128._16_8_ * __real_be917ba225041884 + __real_3ef9f69842978250) +
          __real_bf56c1353b8c783d) + __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(__real_8000000000000000 & auVar17._0_8_ | (ulonglong)__real_3ff0000000000000);
  auVar33._8_8_ =
       (dVar90 * (dVar90 * (dVar90 * (dVar90 * (dVar90 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(__real_8000000000000000 & auVar17._8_8_ | (ulonglong)__real_3ff0000000000000);
  auVar20._16_8_ =
       (dVar91 * (dVar91 * (dVar91 * (dVar91 * (dVar91 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(__real_8000000000000000 & auVar17._16_8_ | (ulonglong)__real_3ff0000000000000);
  auVar20._0_16_ = auVar33;
  auVar20._24_8_ =
       (dVar92 * (dVar92 * (dVar92 * (dVar92 * (dVar92 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(__real_8000000000000000 & auVar17._24_8_ | (ulonglong)__real_3ff0000000000000);
  auVar9 = vunpcklpd_avx(auVar36,auVar33);
  auVar17 = vpermpd_avx2(ZEXT1632(auVar9),0x50);
  auVar9 = vunpckhpd_avx(auVar36,auVar33);
  auVar18 = vpermpd_avx2(ZEXT1632(auVar9),0x44);
  auVar19 = vpermpd_avx2(auVar20,0xaa);
  auVar9 = vunpcklpd_avx(auVar33,auVar36);
  auVar20 = vpermpd_avx2(ZEXT1632(auVar9),0x50);
  auVar9 = vunpckhpd_avx(auVar33,auVar36);
  auVar42 = vpermpd_avx2(ZEXT1632(auVar9),0x44);
  auVar43 = vpermpd_avx2(auVar47,0xaa);
  auVar64._0_8_ =
       (double)((ulonglong)(auVar19._0_8_ * auVar17._0_8_ * auVar18._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar43._0_8_ * auVar20._0_8_ * auVar42._0_8_) ^
               ___ymm_0000000000000000800000000000000080000000000000008000000000000000);
  auVar64._8_8_ =
       (double)((ulonglong)(auVar19._8_8_ * auVar17._8_8_ * auVar18._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar43._8_8_ * auVar20._8_8_ * auVar42._8_8_) ^ _UNK_151c6af68);
  auVar64._16_8_ =
       (double)((ulonglong)(auVar19._16_8_ * auVar17._16_8_ * auVar18._16_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar43._16_8_ * auVar20._16_8_ * auVar42._16_8_) ^ _UNK_151c6af70);
  auVar64._24_8_ =
       (double)((ulonglong)(auVar19._24_8_ * auVar17._24_8_ * auVar18._24_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar43._24_8_ * auVar20._24_8_ * auVar42._24_8_) ^ _UNK_151c6af78);
  auVar9._0_8_ = (double)param_3;
  auVar9._8_8_ = auVar9._0_8_;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = auVar9._0_8_;
  auVar9 = ZEXT116(0) * auVar79 | ZEXT116(1) * auVar9;
  local_100._0_8_ = auVar9._0_8_ * *param_5;
  local_100._8_8_ = auVar9._8_8_ * param_5[1];
  auVar134._16_8_ = SUB168(ZEXT116(1) * auVar79,0) * param_5[2];
  auVar134._0_16_ = local_100;
  auVar134._24_8_ = SUB168(ZEXT116(1) * auVar79,8) * 0.0;
  auVar114._8_8_ = 0.0;
  auVar114._0_8_ = *(double *)param_2[4];
  local_170._8_8_ = 0;
  local_170._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar8 = *(double *)param_2[5];
  local_180._8_8_ = 0;
  local_180._0_8_ = dVar8;
  auVar17 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),ZEXT1632(auVar131),1);
  auVar17 = vpackssdw_avx2(auVar17,ZEXT1632(auVar131));
  if ((((((((SUB321(auVar17 >> 0x1f,0) & 1) == 0 && (SUB321(auVar17 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar17 >> 0x5f,0) & 1) == 0) && SUB321(auVar17 >> 0x7f,0) == '\0') &&
        (SUB321(auVar17 >> 0x9f,0) & 1) == 0) && SUB321(auVar17 >> 0xbf,0) == '\0') &&
      (SUB321(auVar17 >> 0xdf,0) & 1) == 0) && -1 < auVar17[0x1f]) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar8 = *(double *)*param_2;
    auVar82._8_8_ = dVar8;
    auVar82._0_8_ = dVar8;
    auVar88._16_8_ = dVar8;
    auVar88._0_16_ = auVar82;
    auVar88._24_8_ = dVar8;
    auVar18 = vpermpd_avx2(auVar64,0x1b);
    auVar125._0_8_ = *(double *)(param_2[1] + 8);
    auVar50._8_8_ = auVar125._0_8_;
    auVar50._0_8_ = auVar125._0_8_;
    auVar50._16_8_ = auVar125._0_8_;
    auVar50._24_8_ = auVar125._0_8_;
    dVar32 = *(double *)(*param_2 + 8);
    auVar96._8_8_ = dVar32;
    auVar96._0_8_ = dVar32;
    auVar101._16_8_ = dVar32;
    auVar101._0_16_ = auVar96;
    auVar101._24_8_ = dVar32;
    auVar19 = vpermpd_avx2(auVar64,0x4e);
    dVar34 = *(double *)param_2[1];
    auVar106._8_8_ = dVar34;
    auVar106._0_8_ = dVar34;
    auVar111._16_8_ = dVar34;
    auVar111._0_16_ = auVar106;
    auVar111._24_8_ = dVar34;
    auVar17 = vshufpd_avx(auVar64,auVar64,5);
    auVar124._0_8_ =
         auVar17._0_8_ * dVar34 *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         auVar19._0_8_ * dVar32 *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
         auVar64._0_8_ * auVar125._0_8_ +
         auVar18._0_8_ * dVar8 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
    auVar124._8_8_ =
         auVar17._8_8_ * dVar34 * _UNK_150b54428 +
         auVar19._8_8_ * dVar32 * _UNK_150b54408 +
         auVar64._8_8_ * auVar125._0_8_ + auVar18._8_8_ * dVar8 * _UNK_150b543e8;
    auVar128._16_8_ =
         auVar17._16_8_ * dVar34 * _UNK_150b54430 +
         auVar19._16_8_ * dVar32 * _UNK_150b54410 +
         auVar64._16_8_ * auVar125._0_8_ + auVar18._16_8_ * dVar8 * _UNK_150b543f0;
    auVar128._0_16_ = auVar124;
    auVar128._24_8_ =
         auVar17._24_8_ * dVar34 * _UNK_150b54438 +
         auVar19._24_8_ * dVar32 * _UNK_150b54418 +
         auVar64._24_8_ * auVar125._0_8_ + auVar18._24_8_ * dVar8 * _UNK_150b543f8;
    auVar9 = vshufpd_avx(auVar124,auVar124,1);
    auVar33 = vshufpd_avx(auVar128._16_16_,auVar128._16_16_,1);
    dVar8 = auVar33._0_8_;
    auVar33 = vunpcklpd_avx(local_180,auVar11);
    auVar36 = vunpcklpd_avx(auVar114,local_170);
    auVar26._0_8_ = local_100._0_8_ * auVar36._0_8_;
    auVar26._8_8_ = local_100._8_8_ * auVar36._8_8_;
    auVar26._16_8_ = auVar134._16_8_ * auVar33._0_8_;
    auVar26._24_8_ = auVar134._24_8_ * auVar33._8_8_;
    auVar42 = vpermpd_avx2(auVar26,0xc9);
    auVar33 = vunpcklpd_avx(auVar82,auVar96);
    auVar17 = vblendpd_avx(auVar88,ZEXT1632(auVar33),3);
    auVar17 = vblendpd_avx(auVar17,auVar111,4);
    auVar18 = vblendpd_avx(auVar17,auVar50,8);
    auVar33 = vunpcklpd_avx(auVar96,auVar106);
    auVar19 = vblendpd_avx(auVar101,ZEXT1632(auVar33),3);
    auVar19 = vblendpd_avx(auVar19,auVar88,4);
    auVar20 = vblendpd_avx(auVar19,auVar50,8);
    dVar32 = auVar42._0_8_ * auVar18._0_8_ - auVar26._0_8_ * auVar20._0_8_;
    dVar34 = auVar42._8_8_ * auVar18._8_8_ - auVar26._8_8_ * auVar20._8_8_;
    dVar90 = auVar42._16_8_ * auVar18._16_8_ - auVar26._16_8_ * auVar20._16_8_;
    dVar91 = auVar42._24_8_ * auVar18._24_8_ - auVar26._24_8_ * auVar20._24_8_;
    auVar72._0_8_ = dVar32 + dVar32;
    auVar72._8_8_ = dVar34 + dVar34;
    auVar72._16_8_ = dVar90 + dVar90;
    auVar72._24_8_ = dVar91 + dVar91;
    auVar18 = vpermpd_avx2(auVar72,0xc9);
    auVar20 = vpermpd_avx2(auVar72,0xd2);
    auVar73._0_8_ = auVar17._0_8_ * auVar20._0_8_ - auVar19._0_8_ * auVar18._0_8_;
    auVar73._8_8_ = auVar17._8_8_ * auVar20._8_8_ - auVar19._8_8_ * auVar18._8_8_;
    auVar73._16_8_ = auVar17._16_8_ * auVar20._16_8_ - auVar19._16_8_ * auVar18._16_8_;
    auVar73._24_8_ = auVar17._24_8_ * auVar20._24_8_ - auVar19._24_8_ * auVar18._24_8_;
    auVar17 = vpermpd_avx2(auVar73,0xc9);
    auVar39._0_8_ =
         *(double *)param_2[2] + auVar18._0_8_ * auVar125._0_8_ + auVar26._0_8_ + auVar17._0_8_;
    auVar39._8_8_ =
         *(double *)(param_2[2] + 8) +
         auVar18._8_8_ * auVar125._0_8_ + auVar26._8_8_ + auVar17._8_8_;
    auVar51._16_8_ =
         *(double *)param_2[3] + auVar18._16_8_ * auVar125._0_8_ + auVar26._16_8_ + auVar17._16_8_;
    auVar51._0_16_ = auVar39;
    auVar51._24_8_ = auVar18._24_8_ * auVar125._0_8_ + auVar26._24_8_ + auVar17._24_8_ + 0.0;
    auVar58 = vshufpd_avx(auVar39,auVar39,1);
    auVar54 = auVar51._16_16_;
    auVar125._0_8_ = auVar124._0_8_;
    goto LAB_140c7e9ab;
  }
  local_1a0 = __real_7fffffffffffffff;
  uStack_198 = __real_7fffffffffffffff;
  uStack_190 = __real_7fffffffffffffff;
  uStack_188 = __real_7fffffffffffffff;
  auVar21._0_8_ = auVar64._0_8_ + auVar64._0_8_;
  auVar21._8_8_ = auVar64._8_8_ + auVar64._8_8_;
  auVar21._16_8_ = auVar64._16_8_ + auVar64._16_8_;
  auVar21._24_8_ = auVar64._24_8_ + auVar64._24_8_;
  auVar48._0_8_ = auVar64._0_8_ * auVar21._0_8_;
  auVar48._8_8_ = auVar64._8_8_ * auVar21._8_8_;
  auVar48._16_8_ = auVar64._16_8_ * auVar21._16_8_;
  auVar48._24_8_ = auVar64._24_8_ * auVar21._24_8_;
  auVar17 = vpermpd_avx2(auVar48,0xc1);
  auVar18 = vpermpd_avx2(auVar48,0xda);
  auVar49._0_8_ = auVar17._0_8_ + auVar18._0_8_;
  auVar49._8_8_ = auVar17._8_8_ + auVar18._8_8_;
  auVar49._16_8_ = auVar17._16_8_ + auVar18._16_8_;
  auVar49._24_8_ = auVar17._24_8_ + auVar18._24_8_;
  auVar17 = vsubpd_avx(local_e0,auVar49);
  auVar18 = vpermpd_avx2(auVar64,4);
  auVar19 = vpermpd_avx2(auVar21,0x29);
  auVar85._0_8_ = auVar18._0_8_ * auVar19._0_8_;
  auVar85._8_8_ = auVar18._8_8_ * auVar19._8_8_;
  auVar85._16_8_ = auVar18._16_8_ * auVar19._16_8_;
  auVar85._24_8_ = auVar18._24_8_ * auVar19._24_8_;
  auVar18 = vpermpd_avx2(auVar64,0xff);
  auVar19 = vpermpd_avx2(auVar21,0x12);
  auVar22._0_8_ = auVar18._0_8_ * auVar19._0_8_;
  auVar22._8_8_ = auVar18._8_8_ * auVar19._8_8_;
  auVar22._16_8_ = auVar18._16_8_ * auVar19._16_8_;
  auVar22._24_8_ = auVar18._24_8_ * auVar19._24_8_;
  auVar55._0_8_ = auVar85._0_8_ + auVar22._0_8_;
  auVar55._8_8_ = auVar85._8_8_ + auVar22._8_8_;
  auVar65._16_8_ = auVar85._16_8_ + auVar22._16_8_;
  auVar65._0_16_ = auVar55;
  auVar65._24_8_ = auVar85._24_8_ + auVar22._24_8_;
  auVar18 = vsubpd_avx(auVar85,auVar22);
  local_160 = vunpcklpd_avx(auVar17._0_16_,auVar55);
  local_150[0] = (double)vmovlpd_avx(auVar18._16_16_);
  local_150[1] = 0.0;
  local_140 = vblendpd_avx(auVar17._0_16_,auVar18._0_16_,1);
  local_130 = vmovhpd_avx(auVar55);
  local_128 = 0;
  local_120 = vblendpd_avx(auVar18._0_16_,auVar65._16_16_,1);
  local_110 = vmovlpd_avx(auVar17._16_16_);
  local_108 = 0;
  local_f0 = vmovlpd_avx(auVar134._16_16_);
  local_e8 = 0x3ff0000000000000;
  auVar9 = param_2[2];
  uVar1 = *(undefined8 *)param_2[1];
  auVar66._8_8_ = uVar1;
  auVar66._0_8_ = uVar1;
  auVar66._16_8_ = uVar1;
  auVar66._24_8_ = uVar1;
  auVar17 = vblendpd_avx(ZEXT1632(*param_2),auVar66,4);
  auVar125._0_8_ = *(double *)(param_2[1] + 8);
  auVar86._8_8_ = auVar125._0_8_;
  auVar86._0_8_ = auVar125._0_8_;
  auVar86._16_8_ = auVar125._0_8_;
  auVar86._24_8_ = auVar125._0_8_;
  auVar18 = vblendpd_avx(auVar17,auVar86,8);
  auVar98._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar98._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar98._16_8_ = auVar18._16_8_ + auVar18._16_8_;
  auVar98._24_8_ = auVar18._24_8_ + auVar18._24_8_;
  auVar67._0_8_ = auVar17._0_8_ * auVar98._0_8_;
  auVar67._8_8_ = auVar17._8_8_ * auVar98._8_8_;
  auVar67._16_8_ = auVar17._16_8_ * auVar98._16_8_;
  auVar67._24_8_ = auVar17._24_8_ * auVar98._24_8_;
  auVar17 = vpermpd_avx2(auVar67,0xc1);
  auVar18 = vpermpd_avx2(auVar67,0xda);
  auVar68._0_8_ = auVar17._0_8_ + auVar18._0_8_;
  auVar68._8_8_ = auVar17._8_8_ + auVar18._8_8_;
  auVar68._16_8_ = auVar17._16_8_ + auVar18._16_8_;
  auVar68._24_8_ = auVar17._24_8_ + auVar18._24_8_;
  auVar17 = vsubpd_avx(local_e0,auVar68);
  auVar33 = vunpcklpd_avx(auVar114,local_170);
  auVar108._16_8_ = dVar8;
  auVar108._0_16_ = auVar33;
  auVar108._24_8_ = 0;
  auVar56._0_8_ = auVar33._0_8_ * auVar17._0_8_;
  auVar56._8_8_ = auVar33._8_8_ * auVar17._8_8_;
  auVar69._16_8_ = dVar8 * auVar17._16_8_;
  auVar69._0_16_ = auVar56;
  auVar69._24_8_ = auVar17._24_8_ * 0.0;
  uVar1 = *(undefined8 *)*param_2;
  auVar119._8_8_ = uVar1;
  auVar119._0_8_ = uVar1;
  auVar119._16_8_ = uVar1;
  auVar119._24_8_ = uVar1;
  auVar17 = vblendpd_avx(ZEXT1632(*param_2),auVar119,0xc);
  auVar18 = vpermpd_avx2(auVar98,0x29);
  auVar23._0_8_ = auVar17._0_8_ * auVar18._0_8_;
  auVar23._8_8_ = auVar17._8_8_ * auVar18._8_8_;
  auVar23._16_8_ = auVar17._16_8_ * auVar18._16_8_;
  auVar23._24_8_ = auVar17._24_8_ * auVar18._24_8_;
  auVar17 = vpermpd_avx2(auVar98,0x12);
  auVar87._0_8_ = auVar125._0_8_ * auVar17._0_8_;
  auVar87._8_8_ = auVar125._0_8_ * auVar17._8_8_;
  auVar87._16_8_ = auVar125._0_8_ * auVar17._16_8_;
  auVar87._24_8_ = auVar125._0_8_ * auVar17._24_8_;
  auVar93._0_8_ = auVar33._0_8_ * (auVar23._0_8_ + auVar87._0_8_);
  auVar93._8_8_ = auVar33._8_8_ * (auVar23._8_8_ + auVar87._8_8_);
  auVar99._16_8_ = dVar8 * (auVar23._16_8_ + auVar87._16_8_);
  auVar99._0_16_ = auVar93;
  auVar99._24_8_ = (auVar23._24_8_ + auVar87._24_8_) * 0.0;
  auVar18 = vsubpd_avx(auVar23,auVar87);
  auVar33 = vunpcklpd_avx(local_170,local_180);
  uVar1 = *(undefined8 *)(param_2[5] + 8);
  auVar116._8_8_ = uVar1;
  auVar116._0_8_ = uVar1;
  auVar116._16_8_ = uVar1;
  auVar116._24_8_ = uVar1;
  auVar17 = vblendpd_avx(auVar108,auVar116,8);
  auVar114._0_8_ =
       auVar17._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  auVar114._8_8_ = auVar17._8_8_ * _UNK_150b54508;
  auVar117._16_8_ = auVar17._16_8_ * _UNK_150b54510;
  auVar117._0_16_ = auVar114;
  auVar117._24_8_ = auVar17._24_8_ * _UNK_150b54518;
  auVar104._0_8_ = auVar18._0_8_ * auVar33._0_8_;
  auVar104._8_8_ = auVar18._8_8_ * auVar33._8_8_;
  auVar109._16_8_ = auVar18._16_8_ * *(double *)param_2[4];
  auVar109._0_16_ = auVar104;
  auVar109._24_8_ = auVar18._24_8_ * 0.0;
  local_170 = vshufpd_avx(auVar114,auVar114,1);
  auVar118._8_8_ = 0;
  auVar118._0_8_ = *(ulonglong *)param_2[3];
  auVar33 = CONCAT88(auVar93._0_8_,auVar93._0_8_);
  auVar17 = vblendpd_avx(ZEXT1632(auVar56),ZEXT1632(auVar33),2);
  auVar17 = vblendpd_avx(auVar17,auVar109,4);
  auVar18 = vblendpd_avx(ZEXT1632(auVar99._16_16_),auVar109,2);
  auVar18 = vblendpd_avx(auVar18,auVar69,4);
  auVar70._16_16_ = auVar93;
  auVar70._0_16_ = auVar104;
  auVar19 = vshufpd_avx(auVar70,ZEXT1632(auVar56),0xe);
  auVar33 = vmovhpd_avx(auVar118,__real_3ff0000000000000);
  lVar7 = 0x18;
  do {
    dVar8 = *(double *)(local_180 + lVar7 + 8);
    auVar125._0_8_ = *(double *)(local_170 + lVar7 + 8);
    dVar32 = *(double *)(local_170 + lVar7);
    dVar34 = *(double *)(local_160 + lVar7);
    *(double *)((longlong)adStack_258 + lVar7) =
         auVar9._0_8_ * dVar34 +
         auVar19._0_8_ * dVar32 + auVar17._0_8_ * dVar8 + auVar18._0_8_ * auVar125._0_8_;
    *(double *)((longlong)adStack_258 + lVar7 + 8) =
         auVar9._8_8_ * dVar34 +
         auVar19._8_8_ * dVar32 + auVar17._8_8_ * dVar8 + auVar18._8_8_ * auVar125._0_8_;
    *(double *)((longlong)adStack_258 + lVar7 + 0x10) =
         auVar33._0_8_ * dVar34 +
         auVar19._16_8_ * dVar32 + auVar17._16_8_ * dVar8 + auVar18._16_8_ * auVar125._0_8_;
    *(double *)(local_240 + lVar7) =
         auVar33._8_8_ * dVar34 +
         auVar19._24_8_ * dVar32 + auVar17._24_8_ * dVar8 + auVar18._24_8_ * auVar125._0_8_;
    lVar7 = lVar7 + 0x20;
  } while (lVar7 != 0x98);
  auVar125._0_8_ =
       adStack_238[1] * adStack_238[1] +
       (double)local_240 * (double)local_240 + adStack_238[0] * adStack_238[0];
  dVar32 = local_210 * local_210 +
           (double)local_220._0_8_ * (double)local_220._0_8_ +
           (double)local_220._8_8_ * (double)local_220._8_8_;
  auVar133 = ZEXT816(0) << 0x20;
  dVar8 = __real_3ff0000000000000;
  if (0.0 <= auVar125._0_8_ + __real_be45798ee2308c3a) {
    dVar8 = __real_3ff0000000000000 / SQRT(auVar125._0_8_);
  }
  dVar34 = local_1f0 * local_1f0 +
           (double)local_200._0_8_ * (double)local_200._0_8_ +
           (double)local_200._8_8_ * (double)local_200._8_8_;
  auVar125._0_8_ = __real_3ff0000000000000;
  if (0.0 <= dVar32 + __real_be45798ee2308c3a) {
    auVar125._0_8_ = __real_3ff0000000000000 / SQRT(dVar32);
  }
  local_180 = auVar117._16_16_;
  dVar32 = __real_3ff0000000000000;
  if (0.0 <= dVar34 + __real_be45798ee2308c3a) {
    dVar32 = __real_3ff0000000000000 / SQRT(dVar34);
  }
  auVar37._8_8_ = 0;
  auVar37._0_8_ = dVar8 * adStack_238[0];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = (double)local_240 * dVar8;
  auVar9 = vunpcklpd_avx(auVar105,auVar37);
  auVar80._8_8_ = 0;
  auVar80._0_8_ = auVar125._0_8_ * (double)local_220._0_8_;
  auVar94._8_8_ = 0;
  auVar94._0_8_ = auVar125._0_8_ * (double)local_220._8_8_;
  auVar33 = vunpcklpd_avx(auVar80,auVar94);
  local_200._0_8_ = dVar32 * (double)local_200._0_8_;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = dVar32 * (double)local_200._8_8_;
  auVar95._8_8_ = 0;
  auVar95._0_8_ = local_200._0_8_;
  auVar36 = vunpcklpd_avx(auVar95,auVar57);
  auVar79 = ZEXT816(0);
  auVar17 = vcmppd_avx(ZEXT1632(auVar79),auVar117,2);
  auVar18 = vpcmpeqd_avx2(ZEXT832((ulonglong)local_200._0_8_),ZEXT832((ulonglong)local_200._0_8_));
  auVar17 = vblendvps_avx(ZEXT1632(auVar79),auVar18,auVar17);
  uVar123 = (uint)__real_8000000000000000;
  uVar130 = (uint)(__real_8000000000000000 >> 0x20);
  auVar126._0_8_ =
       (double)CONCAT44(uVar130 & auVar17._4_4_ ^ __real_bff0000000000000._4_4_,
                        uVar123 & auVar17._0_4_ ^ (uint)__real_bff0000000000000);
  auVar126._8_4_ = uVar123 & auVar17._8_4_ ^ (uint)__real_bff0000000000000;
  auVar126._12_4_ = uVar130 & auVar17._12_4_ ^ __real_bff0000000000000._4_4_;
  auVar126._16_4_ = uVar123 & auVar17._16_4_ ^ (uint)__real_bff0000000000000;
  auVar126._20_4_ = uVar130 & auVar17._20_4_ ^ __real_bff0000000000000._4_4_;
  auVar126._24_4_ = uVar123 & auVar17._24_4_ ^ (uint)__real_bff0000000000000;
  auVar126._28_4_ = uVar130 & auVar17._28_4_ ^ __real_bff0000000000000._4_4_;
  local_240 = (undefined1  [8])(auVar9._0_8_ * auVar126._0_8_);
  adStack_238[0] = auVar9._8_8_ * auVar126._0_8_;
  auVar100._16_8_ = adStack_238[1] * dVar8 * auVar126._0_8_;
  auVar100._0_16_ = _local_240;
  auVar100._24_8_ = auVar126._0_8_ * 0.0;
  adStack_238[1] = (double)vmovlpd_avx(auVar100._16_16_);
  auVar17 = vpermpd_avx2(auVar126,0x55);
  local_220._0_8_ = auVar17._0_8_ * auVar33._0_8_;
  local_220._8_8_ = auVar17._8_8_ * auVar33._8_8_;
  auVar71._16_8_ = auVar17._16_8_ * local_210 * auVar125._0_8_;
  auVar71._0_16_ = local_220;
  auVar71._24_8_ = auVar17._24_8_ * 0.0;
  local_210 = (double)vmovlpd_avx(auVar71._16_16_);
  auVar17 = vpermpd_avx2(auVar126,0xaa);
  local_200._0_8_ = auVar17._0_8_ * auVar36._0_8_;
  local_200._8_8_ = auVar17._8_8_ * auVar36._8_8_;
  auVar127._16_8_ = auVar17._16_8_ * dVar32 * local_1f0;
  auVar127._0_16_ = local_200;
  auVar127._24_8_ = auVar17._24_8_ * 0.0;
  local_1f0 = (double)vmovlpd_avx(auVar127._16_16_);
  auVar24._8_8_ = __real_0010000000000000;
  auVar24._0_8_ = __real_0010000000000000;
  auVar24._16_8_ = __real_0010000000000000;
  auVar24._24_8_ = __real_0010000000000000;
  auVar17 = vblendpd_avx(auVar100,auVar24,8);
  auVar120._0_8_ = __real_7fffffffffffffff & auVar17._0_8_;
  auVar120._8_8_ = __real_7fffffffffffffff & auVar17._8_8_;
  auVar120._16_8_ = __real_7fffffffffffffff & auVar17._16_8_;
  auVar120._24_8_ = __real_7fffffffffffffff & auVar17._24_8_;
  auVar110._8_8_ = __real_3f1a36e2eb1c432d;
  auVar110._0_8_ = __real_3f1a36e2eb1c432d;
  auVar110._16_8_ = __real_3f1a36e2eb1c432d;
  auVar110._24_8_ = __real_3f1a36e2eb1c432d;
  auVar17 = vcmppd_avx(auVar120,auVar110,6);
  auVar17 = vpackssdw_avx2(auVar17,ZEXT1632(auVar79));
  if ((((((((SUB321(auVar17 >> 0x1f,0) & 1) == 0 && (SUB321(auVar17 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar17 >> 0x5f,0) & 1) == 0) && SUB321(auVar17 >> 0x7f,0) == '\0') &&
        (SUB321(auVar17 >> 0x9f,0) & 1) == 0) && SUB321(auVar17 >> 0xbf,0) == '\0') &&
      (SUB321(auVar17 >> 0xdf,0) & 1) == 0) && -1 < auVar17[0x1f]) {
LAB_140c7e6ab:
    auVar81 = SUB6416(ZEXT864(0),0) << 0x40;
    auVar38 = ZEXT816(0) << 0x40;
    dVar8 = __real_3ff0000000000000;
  }
  else {
    auVar17 = vblendpd_avx(auVar71,auVar24,8);
    auVar121._0_8_ = __real_7fffffffffffffff & auVar17._0_8_;
    auVar121._8_8_ = __real_7fffffffffffffff & auVar17._8_8_;
    auVar121._16_8_ = __real_7fffffffffffffff & auVar17._16_8_;
    auVar121._24_8_ = __real_7fffffffffffffff & auVar17._24_8_;
    auVar17 = vcmppd_avx(auVar121,auVar110,6);
    auVar17 = vpackssdw_avx2(auVar17,ZEXT1632(auVar79));
    if ((((((((SUB321(auVar17 >> 0x1f,0) & 1) == 0 && (SUB321(auVar17 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar17 >> 0x5f,0) & 1) == 0) && SUB321(auVar17 >> 0x7f,0) == '\0') &&
          (SUB321(auVar17 >> 0x9f,0) & 1) == 0) && SUB321(auVar17 >> 0xbf,0) == '\0') &&
        (SUB321(auVar17 >> 0xdf,0) & 1) == 0) && -1 < auVar17[0x1f]) goto LAB_140c7e6ab;
    auVar17 = vblendpd_avx(auVar127,auVar24,8);
    auVar25._0_8_ = __real_7fffffffffffffff & auVar17._0_8_;
    auVar25._8_8_ = __real_7fffffffffffffff & auVar17._8_8_;
    auVar25._16_8_ = __real_7fffffffffffffff & auVar17._16_8_;
    auVar25._24_8_ = __real_7fffffffffffffff & auVar17._24_8_;
    auVar17 = vcmppd_avx(auVar25,auVar110,6);
    auVar17 = vpackssdw_avx2(auVar17,ZEXT832(0) << 0x40);
    if ((((((((SUB321(auVar17 >> 0x1f,0) & 1) == 0 && (SUB321(auVar17 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar17 >> 0x5f,0) & 1) == 0) && SUB321(auVar17 >> 0x7f,0) == '\0') &&
          (SUB321(auVar17 >> 0x9f,0) & 1) == 0) && SUB321(auVar17 >> 0xbf,0) == '\0') &&
        (SUB321(auVar17 >> 0xdf,0) & 1) == 0) && -1 < auVar17[0x1f]) goto LAB_140c7e6ab;
    auVar9 = vshufpd_avx(local_220,local_220,1);
    dVar8 = auVar127._16_8_ + (double)local_240 + auVar9._0_8_;
    if (dVar8 <= 0.0) {
      bVar4 = (double)local_240 < auVar9._0_8_;
      uVar35 = 2;
      if (auVar127._16_8_ <= *(double *)(local_240 + ((uint)bVar4 * 0x20 + (uint)bVar4 * 8))) {
        uVar35 = (ulonglong)bVar4;
      }
      iVar2 = *(int *)(&DAT_151c6ce40 + uVar35 * 4);
      lVar7 = (longlong)iVar2;
      iVar3 = *(int *)(&DAT_151c6ce40 + lVar7 * 4);
      iVar5 = (int)uVar35;
      dVar8 = __real_3ff0000000000000 /
              SQRT(((*(double *)(local_240 + (uint)(iVar5 * 0x28)) -
                    *(double *)(local_240 + lVar7 * 0x28)) -
                   *(double *)(local_240 + (longlong)iVar3 * 0x28)) + __real_3ff0000000000000);
      *(double *)((longlong)local_1c0 + (ulonglong)(uint)(iVar5 * 8)) =
           (__real_3ff0000000000000 / dVar8) * __real_3fe0000000000000;
      dVar8 = dVar8 * __real_3fe0000000000000;
      local_1c0[lVar7] =
           (*(double *)(local_240 + (longlong)(iVar2 + iVar5 * 4) * 8) +
           *(double *)(local_240 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar8;
      local_1c0[iVar3] =
           dVar8 * (*(double *)(local_240 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                   *(double *)(local_240 + (longlong)(iVar5 + iVar3 * 4) * 8));
      dVar8 = dVar8 * (*(double *)(local_240 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                      *(double *)(local_240 + (longlong)(iVar2 + iVar3 * 4) * 8));
    }
    else {
      auVar9 = vshufpd_avx(_local_240,_local_240,1);
      auVar33 = vshufpd_avx(local_200,local_200,1);
      auVar125._0_8_ = __real_3ff0000000000000 / SQRT(dVar8 + __real_3ff0000000000000);
      dVar8 = auVar125._0_8_ * __real_3fe0000000000000;
      local_1c0[0] = dVar8 * (auVar71._16_8_ - auVar33._0_8_);
      local_1c0[1] = dVar8 * ((double)local_200._0_8_ - auVar100._16_8_);
      local_1c0[2] = dVar8 * (auVar9._0_8_ - (double)local_220._0_8_);
      dVar8 = (__real_3ff0000000000000 / auVar125._0_8_) * __real_3fe0000000000000;
    }
    auVar133._8_8_ = 0;
    auVar133._0_8_ = local_1c0[2];
    auVar81._8_8_ = 0;
    auVar81._0_8_ = local_1c0[0];
    auVar38._8_8_ = 0;
    auVar38._0_8_ = local_1c0[1];
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar8;
  auVar9 = vunpcklpd_avx(auVar133,auVar10);
  auVar33 = vunpcklpd_avx(auVar81,auVar38);
  auVar125._0_8_ = auVar33._0_8_;
  dVar32 = auVar33._8_8_;
  dVar34 = auVar9._0_8_;
  auVar40._0_8_ = dVar34 * dVar34 + auVar125._0_8_ * auVar125._0_8_;
  auVar128._16_8_ = auVar9._8_8_;
  auVar40._8_8_ = auVar128._16_8_ * auVar128._16_8_ + dVar32 * dVar32;
  auVar9 = vshufpd_avx(auVar40,auVar40,1);
  dVar8 = auVar40._0_8_ + auVar9._0_8_;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = __real_3e45798ee2308c3a;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar8;
  auVar9 = vcmpsd_avx(auVar41,auVar12,6);
  uVar35 = ~auVar9._0_8_ & __real_ffffffffffffffff;
  dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
  auVar74._0_8_ = ~uVar35 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar74._8_8_ = ~uVar35 & _UNK_150b54548;
  auVar74._16_8_ = ~uVar35 & _UNK_150b54550;
  auVar74._24_8_ = ~uVar35 & _UNK_150b54558;
  auVar125._0_8_ = (double)((ulonglong)(auVar125._0_8_ * dVar8) & uVar35);
  auVar125._8_8_ = (ulonglong)(dVar32 * dVar8) & uVar35;
  auVar129._16_8_ = (ulonglong)(dVar34 * dVar8) & uVar35;
  auVar129._0_16_ = auVar125;
  auVar129._24_8_ = (ulonglong)(auVar128._16_8_ * dVar8) & uVar35;
  auVar33 = auVar129._16_16_ | auVar74._16_16_;
  auVar9 = vshufps_avx(auVar125,auVar125,0x4e);
  auVar128._16_8_ = auVar33._0_8_;
  auVar33 = vshufps_avx(auVar33,auVar33,0x4e);
  dVar8 = auVar33._0_8_;
  auVar39._8_8_ = 0.0;
  auVar39._0_8_ = (double)uStack_1e0;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uStack_1d8;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uStack_1d0;
LAB_140c7e9ab:
  param_3 = param_3 * __real_3f000000;
  auVar33 = vinsertps_avx(ZEXT416(param_6),ZEXT416(param_7),0x1c);
  auVar33 = vinsertps_avx(auVar33,ZEXT416(param_8),0x28);
  auVar13._0_4_ = param_3 * auVar33._0_4_;
  auVar13._4_4_ = param_3 * auVar33._4_4_;
  auVar13._8_4_ = param_3 * auVar33._8_4_;
  auVar13._12_4_ = param_3 * auVar33._12_4_;
  auVar19 = vcvtps2pd_avx(auVar13);
  auVar33 = vunpcklpd_avx(auVar39,auVar58);
  auVar14._8_8_ = auVar125._0_8_;
  auVar14._0_8_ = auVar125._0_8_;
  auVar27._16_8_ = auVar125._0_8_;
  auVar27._0_16_ = auVar14;
  auVar27._24_8_ = auVar125._0_8_;
  auVar9 = vunpcklpd_avx(auVar14,auVar9);
  auVar75._8_8_ = auVar128._16_8_;
  auVar75._0_8_ = auVar128._16_8_;
  auVar75._16_8_ = auVar128._16_8_;
  auVar75._24_8_ = auVar128._16_8_;
  auVar17 = vblendpd_avx(ZEXT1632(auVar9),auVar75,4);
  auVar112._8_8_ = dVar8;
  auVar112._0_8_ = dVar8;
  auVar112._16_8_ = dVar8;
  auVar112._24_8_ = dVar8;
  auVar18 = vblendpd_avx(auVar17,auVar112,8);
  auVar122._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar122._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar122._16_8_ = auVar18._16_8_ + auVar18._16_8_;
  auVar122._24_8_ = auVar18._24_8_ + auVar18._24_8_;
  auVar76._0_8_ = auVar17._0_8_ * auVar122._0_8_;
  auVar76._8_8_ = auVar17._8_8_ * auVar122._8_8_;
  auVar76._16_8_ = auVar17._16_8_ * auVar122._16_8_;
  auVar76._24_8_ = auVar17._24_8_ * auVar122._24_8_;
  auVar17 = vpermpd_avx2(auVar76,0xc1);
  auVar18 = vpermpd_avx2(auVar76,0xda);
  auVar77._0_8_ = auVar17._0_8_ + auVar18._0_8_;
  auVar77._8_8_ = auVar17._8_8_ + auVar18._8_8_;
  auVar77._16_8_ = auVar17._16_8_ + auVar18._16_8_;
  auVar77._24_8_ = auVar17._24_8_ + auVar18._24_8_;
  auVar17 = vsubpd_avx(local_e0,auVar77);
  auVar36 = vunpcklpd_avx(auVar114,local_170);
  auVar59._0_8_ = auVar36._0_8_ * auVar17._0_8_;
  auVar59._8_8_ = auVar36._8_8_ * auVar17._8_8_;
  auVar78._16_8_ = local_180._0_8_ * auVar17._16_8_;
  auVar78._0_16_ = auVar59;
  auVar78._24_8_ = local_180._8_8_ * auVar17._24_8_;
  auVar17 = vblendpd_avx(ZEXT1632(auVar9),auVar27,0xc);
  auVar18 = vpermpd_avx2(auVar122,0x29);
  auVar28._0_8_ = auVar17._0_8_ * auVar18._0_8_;
  auVar28._8_8_ = auVar17._8_8_ * auVar18._8_8_;
  auVar28._16_8_ = auVar17._16_8_ * auVar18._16_8_;
  auVar28._24_8_ = auVar17._24_8_ * auVar18._24_8_;
  auVar17 = vpermpd_avx2(auVar122,0x12);
  auVar102._0_8_ = dVar8 * auVar17._0_8_;
  auVar102._8_8_ = dVar8 * auVar17._8_8_;
  auVar102._16_8_ = dVar8 * auVar17._16_8_;
  auVar102._24_8_ = dVar8 * auVar17._24_8_;
  auVar107._0_8_ = auVar36._0_8_ * (auVar28._0_8_ + auVar102._0_8_);
  auVar107._8_8_ = auVar36._8_8_ * (auVar28._8_8_ + auVar102._8_8_);
  auVar113._16_8_ = local_180._0_8_ * (auVar28._16_8_ + auVar102._16_8_);
  auVar113._0_16_ = auVar107;
  auVar113._24_8_ = local_180._8_8_ * (auVar28._24_8_ + auVar102._24_8_);
  auVar17 = vsubpd_avx(auVar28,auVar102);
  auVar9 = vunpcklpd_avx(local_170,local_180);
  auVar15._0_8_ = auVar17._0_8_ * auVar9._0_8_;
  auVar15._8_8_ = auVar17._8_8_ * auVar9._8_8_;
  auVar29._16_8_ = auVar17._16_8_ * auVar114._0_8_;
  auVar29._0_16_ = auVar15;
  auVar29._24_8_ = auVar17._24_8_ * auVar114._8_8_;
  auVar17 = vsubpd_avx(auVar19,auVar19);
  auVar103._0_8_ = auVar17._0_8_ * __real_3fe0000000000000;
  auVar103._8_8_ = auVar17._8_8_ * __real_3fe0000000000000;
  auVar103._16_8_ = auVar17._16_8_ * __real_3fe0000000000000;
  auVar103._24_8_ = auVar17._24_8_ * __real_3fe0000000000000;
  auVar89._0_8_ = (auVar19._0_8_ + auVar19._0_8_) * __real_3fe0000000000000;
  auVar89._8_8_ = (auVar19._8_8_ + auVar19._8_8_) * __real_3fe0000000000000;
  auVar89._16_8_ = (auVar19._16_8_ + auVar19._16_8_) * __real_3fe0000000000000;
  auVar89._24_8_ = (auVar19._24_8_ + auVar19._24_8_) * __real_3fe0000000000000;
  auVar9 = CONCAT88(auVar107._0_8_,auVar107._0_8_);
  auVar17 = vblendpd_avx(ZEXT1632(auVar59),ZEXT1632(auVar9),2);
  auVar17 = vblendpd_avx(auVar17,auVar29,4);
  auVar20 = vpermpd_avx2(auVar103,0x55);
  auVar132._16_16_ = auVar107;
  auVar132._0_16_ = auVar15;
  auVar19 = vshufpd_avx(auVar132,ZEXT1632(auVar59),0xe);
  auVar42 = vpermpd_avx2(auVar103,0xaa);
  auVar18 = vblendpd_avx(ZEXT1632(auVar113._16_16_),auVar29,2);
  auVar18 = vblendpd_avx(auVar18,auVar78,4);
  auVar9 = vmovhpd_avx(auVar54,__real_3ff0000000000000);
  auVar52._0_8_ =
       auVar33._0_8_ +
       auVar18._0_8_ * auVar42._0_8_ +
       auVar19._0_8_ * auVar20._0_8_ + auVar103._0_8_ * auVar17._0_8_;
  auVar52._8_8_ =
       auVar33._8_8_ +
       auVar18._8_8_ * auVar42._8_8_ +
       auVar19._8_8_ * auVar20._8_8_ + auVar103._0_8_ * auVar17._8_8_;
  auVar52._16_8_ =
       auVar9._0_8_ +
       auVar18._16_8_ * auVar42._16_8_ +
       auVar19._16_8_ * auVar20._16_8_ + auVar103._0_8_ * auVar17._16_8_;
  auVar52._24_8_ =
       auVar9._8_8_ +
       auVar18._24_8_ * auVar42._24_8_ +
       auVar19._24_8_ * auVar20._24_8_ + auVar103._0_8_ * auVar17._24_8_;
  auVar20 = vpermpd_avx2(auVar89,0x55);
  auVar42 = vpermpd_avx2(auVar89,0xaa);
  auVar30._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar42._0_8_ * auVar18._0_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar89._0_8_ * auVar17._0_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar19._0_8_ * auVar20._0_8_));
  auVar30._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar42._8_8_ * auVar18._8_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar89._0_8_ * auVar17._8_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar19._8_8_ * auVar20._8_8_));
  auVar30._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar42._16_8_ * auVar18._16_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar89._0_8_ * auVar17._16_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar19._16_8_ * auVar20._16_8_));
  auVar30._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar42._24_8_ * auVar18._24_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar89._0_8_ * auVar17._24_8_)) +
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar19._24_8_ * auVar20._24_8_));
  auVar17 = vsubpd_avx(auVar52,auVar30);
  auVar16._0_8_ = auVar52._0_8_ + auVar30._0_8_;
  auVar16._8_8_ = auVar52._8_8_ + auVar30._8_8_;
  auVar31._16_8_ = auVar52._16_8_ + auVar30._16_8_;
  auVar31._0_16_ = auVar16;
  auVar31._24_8_ = auVar52._24_8_ + auVar30._24_8_;
  auVar53._16_16_ = auVar16;
  auVar53._0_16_ = auVar17._0_16_;
  auVar17 = vshufpd_avx(auVar17,auVar53,2);
  *param_1 = auVar17;
  auVar17 = vpermpd_avx2(auVar31,0xe9);
  *(undefined1 (*) [16])param_1[1] = auVar17._0_16_;
  param_1[1][0x10] = 1;
  return;
}

// SPhylCalcAABB_avx2 @ 140c7ebb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SPhylCalcAABB_avx2(undefined1 (*param_1) [32],undefined1 (*param_2) [16],float param_3,
                       undefined1 (*param_4) [24],double *param_5,float param_6,float param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined1 auVar8 [24];
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar31;
  undefined1 auVar20 [32];
  double dVar30;
  double dVar34;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar28 [32];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulonglong uVar35;
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar77;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  double dVar76;
  double dVar78;
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [32];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  double adStack_258 [3];
  undefined1 local_240 [8];
  double adStack_238 [3];
  undefined1 local_220 [16];
  double local_210;
  undefined8 local_208;
  undefined1 local_200 [16];
  double local_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1b0 [16];
  double local_1a0 [4];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  double local_150 [2];
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  undefined1 auVar23 [32];
  undefined1 auVar27 [32];
  undefined1 auVar29 [32];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar53 [32];
  undefined1 auVar70 [32];
  undefined1 auVar87 [32];
  undefined1 auVar97 [32];
  undefined1 auVar110 [32];
  undefined1 auVar116 [32];
  undefined1 auVar119 [32];
  undefined1 auVar126 [32];
  
  auVar8 = *param_4;
  auVar20._24_8_ = 0;
  auVar20._0_24_ = auVar8;
  auVar42._8_8_ = __real_4076800000000000;
  auVar42._0_8_ = __real_4076800000000000;
  auVar42._16_8_ = __real_4076800000000000;
  auVar42._24_8_ = __real_4076800000000000;
  auVar21 = vdivpd_avx(auVar20,auVar42);
  auVar82._0_8_ = __real_7fffffffffffffff & auVar21._0_8_;
  auVar82._8_8_ = __real_7fffffffffffffff & auVar21._8_8_;
  auVar82._16_8_ = __real_7fffffffffffffff & auVar21._16_8_;
  auVar82._24_8_ = __real_7fffffffffffffff & auVar21._24_8_;
  auVar94._8_8_ = __real_4330000000000000;
  auVar94._0_8_ = __real_4330000000000000;
  auVar94._16_8_ = __real_4330000000000000;
  auVar94._24_8_ = __real_4330000000000000;
  auVar20 = vcmppd_avx(auVar94,auVar82,2);
  auVar20 = vpshufb_avx2(auVar20,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar47 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
  auVar33._0_12_ = ZEXT812(0);
  auVar33._12_4_ = 0;
  auVar20 = vblendvps_avx(ZEXT1632(auVar33),auVar47,auVar20);
  auVar22 = vroundpd_avx(auVar21,0xb);
  auVar105._0_4_ = ~auVar20._0_4_ & auVar22._0_4_;
  auVar105._4_4_ = ~auVar20._4_4_ & auVar22._4_4_;
  auVar105._8_4_ = ~auVar20._8_4_ & auVar22._8_4_;
  auVar105._12_4_ = ~auVar20._12_4_ & auVar22._12_4_;
  auVar105._16_4_ = ~auVar20._16_4_ & auVar22._16_4_;
  auVar105._20_4_ = ~auVar20._20_4_ & auVar22._20_4_;
  auVar105._24_4_ = ~auVar20._24_4_ & auVar22._24_4_;
  auVar105._28_4_ = ~auVar20._28_4_ & auVar22._28_4_;
  auVar63._0_8_ = auVar21._0_8_ & auVar20._0_8_;
  auVar63._8_8_ = auVar21._8_8_ & auVar20._8_8_;
  auVar63._16_8_ = auVar21._16_8_ & auVar20._16_8_;
  auVar63._24_8_ = auVar21._24_8_ & auVar20._24_8_;
  auVar63 = auVar63 | auVar105;
  auVar64._0_8_ = -(__real_4076800000000000 * auVar63._0_8_) + auVar8._0_8_;
  auVar64._8_8_ = -(__real_4076800000000000 * auVar63._8_8_) + auVar8._8_8_;
  auVar64._16_8_ = -(__real_4076800000000000 * auVar63._16_8_) + auVar8._16_8_;
  auVar64._24_8_ = -(__real_4076800000000000 * auVar63._24_8_) + 0.0;
  auVar20 = vminpd_avx(auVar64,auVar42);
  auVar43._8_8_ = __real_c076800000000000;
  auVar43._0_8_ = __real_c076800000000000;
  auVar43._16_8_ = __real_c076800000000000;
  auVar43._24_8_ = __real_c076800000000000;
  auVar20 = vmaxpd_avx(auVar43,auVar20);
  dVar10 = auVar20._0_8_ * __real_3f81df46a2529d39;
  dVar30 = auVar20._8_8_ * __real_3f81df46a2529d39;
  dVar31 = auVar20._16_8_ * __real_3f81df46a2529d39;
  dVar34 = auVar20._24_8_ * __real_3f81df46a2529d39;
  auVar44._0_8_ = dVar10 * __real_3fc45f306dc9c883;
  auVar44._8_8_ = dVar30 * __real_3fc45f306dc9c883;
  auVar44._16_8_ = dVar31 * __real_3fc45f306dc9c883;
  auVar44._24_8_ = dVar34 * __real_3fc45f306dc9c883;
  auVar20 = vroundpd_avx(auVar44,0xb);
  auVar65._0_8_ = auVar20._0_8_ * __real_c01921fb54442d18 + dVar10;
  auVar65._8_8_ = auVar20._8_8_ * __real_c01921fb54442d18 + dVar30;
  auVar65._16_8_ = auVar20._16_8_ * __real_c01921fb54442d18 + dVar31;
  auVar65._24_8_ = auVar20._24_8_ * __real_c01921fb54442d18 + dVar34;
  auVar21._0_8_ = (ulonglong)auVar65._0_8_ & __real_8000000000000000;
  auVar21._8_8_ = (ulonglong)auVar65._8_8_ & __real_8000000000000000;
  auVar21._16_8_ = (ulonglong)auVar65._16_8_ & __real_8000000000000000;
  auVar21._24_8_ = (ulonglong)auVar65._24_8_ & __real_8000000000000000;
  auVar45._8_8_ = __real_400921fb54442d18;
  auVar45._0_8_ = __real_400921fb54442d18;
  auVar45._16_8_ = __real_400921fb54442d18;
  auVar45._24_8_ = __real_400921fb54442d18;
  auVar21 = vsubpd_avx(auVar21 | auVar45,auVar65);
  local_e0 = __real_7fffffffffffffff;
  uStack_d8 = __real_7fffffffffffffff;
  uStack_d0 = __real_7fffffffffffffff;
  uStack_c8 = __real_7fffffffffffffff;
  auVar46._0_8_ = __real_7fffffffffffffff & (ulonglong)auVar65._0_8_;
  auVar46._8_8_ = __real_7fffffffffffffff & (ulonglong)auVar65._8_8_;
  auVar46._16_8_ = __real_7fffffffffffffff & (ulonglong)auVar65._16_8_;
  auVar46._24_8_ = __real_7fffffffffffffff & (ulonglong)auVar65._24_8_;
  auVar83._8_8_ = __real_3ff921fb54442d18;
  auVar83._0_8_ = __real_3ff921fb54442d18;
  auVar83._16_8_ = __real_3ff921fb54442d18;
  auVar83._24_8_ = __real_3ff921fb54442d18;
  auVar20 = vcmppd_avx(auVar83,auVar46,1);
  auVar20 = vpshufb_avx2(auVar20,
                         ___ymm_1d1c19181d1c191815141110151411100d0c09080d0c09080504010005040100);
  auVar20 = vblendvps_avx(ZEXT1632(auVar33),auVar47,auVar20);
  auVar66._0_4_ = ~auVar20._0_4_ & SUB84(auVar65._0_8_,0);
  auVar66._4_4_ = ~auVar20._4_4_ & (uint)((ulonglong)auVar65._0_8_ >> 0x20);
  auVar66._8_4_ = ~auVar20._8_4_ & SUB84(auVar65._8_8_,0);
  auVar66._12_4_ = ~auVar20._12_4_ & (uint)((ulonglong)auVar65._8_8_ >> 0x20);
  auVar66._16_4_ = ~auVar20._16_4_ & SUB84(auVar65._16_8_,0);
  auVar66._20_4_ = ~auVar20._20_4_ & (uint)((ulonglong)auVar65._16_8_ >> 0x20);
  auVar66._24_4_ = ~auVar20._24_4_ & SUB84(auVar65._24_8_,0);
  auVar66._28_4_ = ~auVar20._28_4_ & (uint)((ulonglong)auVar65._24_8_ >> 0x20);
  auVar22._0_8_ = auVar21._0_8_ & auVar20._0_8_;
  auVar22._8_8_ = auVar21._8_8_ & auVar20._8_8_;
  auVar22._16_8_ = auVar21._16_8_ & auVar20._16_8_;
  auVar22._24_8_ = auVar21._24_8_ & auVar20._24_8_;
  auVar22 = auVar22 | auVar66;
  dVar10 = auVar22._0_8_;
  dVar59 = dVar10 * dVar10;
  dVar30 = auVar22._8_8_;
  dVar76 = dVar30 * dVar30;
  dVar31 = auVar22._16_8_;
  dVar77 = dVar31 * dVar31;
  dVar34 = auVar22._24_8_;
  dVar78 = dVar34 * dVar34;
  auVar95._8_8_ = __real_3ff0000000000000;
  auVar95._0_8_ = __real_3ff0000000000000;
  auVar95._16_8_ = __real_3ff0000000000000;
  auVar95._24_8_ = __real_3ff0000000000000;
  auVar11._0_8_ =
       (dVar59 * (dVar59 * (dVar59 * (dVar59 * (dVar59 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar10;
  auVar11._8_8_ =
       (dVar76 * (dVar76 * (dVar76 * (dVar76 * (dVar76 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar30;
  auVar23._16_8_ =
       (dVar77 * (dVar77 * (dVar77 * (dVar77 * (dVar77 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar31;
  auVar23._0_16_ = auVar11;
  auVar23._24_8_ =
       (dVar78 * (dVar78 * (dVar78 * (dVar78 * (dVar78 * __real_be59a6cb605c806f +
                                               __real_3ec71711c625173e) + __real_bf2a017e195d6197) +
                           __real_3f811110c0e4d980) + __real_bfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar34;
  auVar36._0_8_ =
       (dVar59 * (dVar59 * (dVar59 * (dVar59 * (dVar59 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar20._0_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar36._8_8_ =
       (dVar76 * (dVar76 * (dVar76 * (dVar76 * (dVar76 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar20._8_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar47._16_8_ =
       (dVar77 * (dVar77 * (dVar77 * (dVar77 * (dVar77 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar20._16_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar47._0_16_ = auVar36;
  auVar47._24_8_ =
       (dVar78 * (dVar78 * (dVar78 * (dVar78 * (dVar78 * __real_be917ba225041884 +
                                               __real_3ef9f69842978250) + __real_bf56c1353b8c783d) +
                           __real_3fa555545f16aaab) + __real_bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar20._24_8_ & __real_8000000000000000 | (ulonglong)__real_3ff0000000000000);
  auVar12 = vunpcklpd_avx(auVar11,auVar36);
  auVar20 = vpermpd_avx2(ZEXT1632(auVar12),0x50);
  auVar12 = vunpckhpd_avx(auVar11,auVar36);
  auVar21 = vpermpd_avx2(ZEXT1632(auVar12),0x44);
  auVar22 = vpermpd_avx2(auVar47,0xaa);
  auVar12 = vunpcklpd_avx(auVar36,auVar11);
  auVar47 = vpermpd_avx2(ZEXT1632(auVar12),0x50);
  auVar12 = vunpckhpd_avx(auVar36,auVar11);
  auVar42 = vpermpd_avx2(ZEXT1632(auVar12),0x44);
  auVar23 = vpermpd_avx2(auVar23,0xaa);
  auVar48._0_8_ =
       (double)((ulonglong)(auVar22._0_8_ * auVar20._0_8_ * auVar21._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar23._0_8_ * auVar47._0_8_ * auVar42._0_8_) ^
               ___ymm_0000000000000000800000000000000080000000000000008000000000000000);
  auVar48._8_8_ =
       (double)((ulonglong)(auVar22._8_8_ * auVar20._8_8_ * auVar21._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar23._8_8_ * auVar47._8_8_ * auVar42._8_8_) ^ _UNK_151c6af68);
  auVar48._16_8_ =
       (double)((ulonglong)(auVar22._16_8_ * auVar20._16_8_ * auVar21._16_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar23._16_8_ * auVar47._16_8_ * auVar42._16_8_) ^ _UNK_151c6af70);
  auVar48._24_8_ =
       (double)((ulonglong)(auVar22._24_8_ * auVar20._24_8_ * auVar21._24_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar23._24_8_ * auVar47._24_8_ * auVar42._24_8_) ^ _UNK_151c6af78);
  auVar12._0_8_ = (double)param_3;
  auVar12._8_8_ = auVar12._0_8_;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = auVar12._0_8_;
  auVar12 = ZEXT116(0) * auVar79 | ZEXT116(1) * auVar12;
  local_100._0_8_ = auVar12._0_8_ * *param_5;
  local_100._8_8_ = auVar12._8_8_ * param_5[1];
  auVar123._16_8_ = SUB168(ZEXT116(1) * auVar79,0) * param_5[2];
  auVar123._0_16_ = local_100;
  auVar123._24_8_ = SUB168(ZEXT116(1) * auVar79,8) * 0.0;
  auVar99._8_8_ = 0;
  auVar99._0_8_ = *(double *)param_2[4];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar10 = *(double *)param_2[5];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = dVar10;
  auVar20 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),ZEXT1632(auVar33),1);
  auVar20 = vpackssdw_avx2(auVar20,ZEXT1632(auVar33));
  if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) == 0 && (SUB321(auVar20 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar20 >> 0x5f,0) & 1) == 0) && SUB321(auVar20 >> 0x7f,0) == '\0') &&
        (SUB321(auVar20 >> 0x9f,0) & 1) == 0) && SUB321(auVar20 >> 0xbf,0) == '\0') &&
      (SUB321(auVar20 >> 0xdf,0) & 1) == 0) && -1 < auVar20[0x1f]) {
    auVar81._8_8_ = 0;
    auVar81._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar10 = *(double *)*param_2;
    auVar61._8_8_ = dVar10;
    auVar61._0_8_ = dVar10;
    auVar70._16_8_ = dVar10;
    auVar70._0_16_ = auVar61;
    auVar70._24_8_ = dVar10;
    auVar21 = vpermpd_avx2(auVar48,0x1b);
    dVar30 = *(double *)(param_2[1] + 8);
    auVar26._8_8_ = dVar30;
    auVar26._0_8_ = dVar30;
    auVar26._16_8_ = dVar30;
    auVar26._24_8_ = dVar30;
    dVar31 = *(double *)(*param_2 + 8);
    auVar114._8_8_ = dVar31;
    auVar114._0_8_ = dVar31;
    auVar119._16_8_ = dVar31;
    auVar119._0_16_ = auVar114;
    auVar119._24_8_ = dVar31;
    auVar22 = vpermpd_avx2(auVar48,0x4e);
    dVar34 = *(double *)param_2[1];
    auVar125._8_8_ = dVar34;
    auVar125._0_8_ = dVar34;
    auVar126._16_8_ = dVar34;
    auVar126._0_16_ = auVar125;
    auVar126._24_8_ = dVar34;
    auVar20 = vshufpd_avx(auVar48,auVar48,5);
    auVar107._0_8_ =
         dVar34 * auVar20._0_8_ *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         dVar31 * auVar22._0_8_ *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
         auVar48._0_8_ * dVar30 +
         auVar21._0_8_ * dVar10 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
    auVar107._8_8_ =
         dVar34 * auVar20._8_8_ * _UNK_150b54428 +
         dVar31 * auVar22._8_8_ * _UNK_150b54408 +
         auVar48._8_8_ * dVar30 + auVar21._8_8_ * dVar10 * _UNK_150b543e8;
    auVar110._16_8_ =
         dVar34 * auVar20._16_8_ * _UNK_150b54430 +
         dVar31 * auVar22._16_8_ * _UNK_150b54410 +
         auVar48._16_8_ * dVar30 + auVar21._16_8_ * dVar10 * _UNK_150b543f0;
    auVar110._0_16_ = auVar107;
    auVar110._24_8_ =
         dVar34 * auVar20._24_8_ * _UNK_150b54438 +
         dVar31 * auVar22._24_8_ * _UNK_150b54418 +
         auVar48._24_8_ * dVar30 + auVar21._24_8_ * dVar10 * _UNK_150b543f8;
    auVar12 = vshufpd_avx(auVar107,auVar107,1);
    auVar33 = auVar110._16_16_;
    auVar11 = vshufpd_avx(auVar33,auVar33,1);
    dVar10 = auVar11._0_8_;
    auVar11 = vunpcklpd_avx(auVar122,auVar81);
    auVar36 = vunpcklpd_avx(auVar99,auVar103);
    auVar55._0_8_ = local_100._0_8_ * auVar36._0_8_;
    auVar55._8_8_ = local_100._8_8_ * auVar36._8_8_;
    auVar55._16_8_ = auVar123._16_8_ * auVar11._0_8_;
    auVar55._24_8_ = auVar123._24_8_ * auVar11._8_8_;
    auVar42 = vpermpd_avx2(auVar55,0xc9);
    auVar79 = vunpcklpd_avx(auVar61,auVar114);
    auVar20 = vblendpd_avx(auVar70,ZEXT1632(auVar79),3);
    auVar20 = vblendpd_avx(auVar20,auVar126,4);
    auVar21 = vblendpd_avx(auVar20,auVar26,8);
    auVar79 = vunpcklpd_avx(auVar114,auVar125);
    auVar22 = vblendpd_avx(auVar119,ZEXT1632(auVar79),3);
    auVar22 = vblendpd_avx(auVar22,auVar70,4);
    auVar47 = vblendpd_avx(auVar22,auVar26,8);
    dVar31 = auVar42._0_8_ * auVar21._0_8_ - auVar47._0_8_ * auVar55._0_8_;
    dVar34 = auVar42._8_8_ * auVar21._8_8_ - auVar47._8_8_ * auVar55._8_8_;
    dVar59 = auVar42._16_8_ * auVar21._16_8_ - auVar47._16_8_ * auVar55._16_8_;
    dVar76 = auVar42._24_8_ * auVar21._24_8_ - auVar47._24_8_ * auVar55._24_8_;
    auVar91._0_8_ = dVar31 + dVar31;
    auVar91._8_8_ = dVar34 + dVar34;
    auVar91._16_8_ = dVar59 + dVar59;
    auVar91._24_8_ = dVar76 + dVar76;
    auVar21 = vpermpd_avx2(auVar91,0xc9);
    auVar47 = vpermpd_avx2(auVar91,0xd2);
    auVar71._0_8_ = auVar20._0_8_ * auVar47._0_8_ - auVar22._0_8_ * auVar21._0_8_;
    auVar71._8_8_ = auVar20._8_8_ * auVar47._8_8_ - auVar22._8_8_ * auVar21._8_8_;
    auVar71._16_8_ = auVar20._16_8_ * auVar47._16_8_ - auVar22._16_8_ * auVar21._16_8_;
    auVar71._24_8_ = auVar20._24_8_ * auVar47._24_8_ - auVar22._24_8_ * auVar21._24_8_;
    auVar20 = vpermpd_avx2(auVar71,0xc9);
    auVar15._0_8_ = *(double *)param_2[2] + auVar21._0_8_ * dVar30 + auVar55._0_8_ + auVar20._0_8_;
    auVar15._8_8_ =
         *(double *)(param_2[2] + 8) + auVar21._8_8_ * dVar30 + auVar55._8_8_ + auVar20._8_8_;
    auVar27._16_8_ =
         *(double *)param_2[3] + auVar21._16_8_ * dVar30 + auVar55._16_8_ + auVar20._16_8_;
    auVar27._0_16_ = auVar15;
    auVar27._24_8_ = auVar21._24_8_ * dVar30 + auVar55._24_8_ + auVar20._24_8_ + 0.0;
    auVar41 = vshufpd_avx(auVar15,auVar15,1);
    auVar92._0_8_ =
         auVar36._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    auVar92._8_8_ = auVar36._8_8_ * _UNK_150b54508;
    auVar98._16_8_ = auVar11._0_8_ * _UNK_150b54510;
    auVar98._0_16_ = auVar92;
    auVar98._24_8_ = auVar11._8_8_ * _UNK_150b54518;
    auVar32 = auVar27._16_16_;
    local_170 = vshufpd_avx(auVar92,auVar92,1);
    local_1b0 = auVar98._16_16_;
    local_180 = vshufpd_avx(local_1b0,local_1b0,1);
    goto LAB_140c7f6b1;
  }
  auVar24._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar24._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar24._16_8_ = auVar48._16_8_ + auVar48._16_8_;
  auVar24._24_8_ = auVar48._24_8_ + auVar48._24_8_;
  auVar67._0_8_ = auVar48._0_8_ * auVar24._0_8_;
  auVar67._8_8_ = auVar48._8_8_ * auVar24._8_8_;
  auVar67._16_8_ = auVar48._16_8_ * auVar24._16_8_;
  auVar67._24_8_ = auVar48._24_8_ * auVar24._24_8_;
  auVar20 = vpermpd_avx2(auVar67,0xc1);
  auVar21 = vpermpd_avx2(auVar67,0xda);
  auVar68._0_8_ = auVar20._0_8_ + auVar21._0_8_;
  auVar68._8_8_ = auVar20._8_8_ + auVar21._8_8_;
  auVar68._16_8_ = auVar20._16_8_ + auVar21._16_8_;
  auVar68._24_8_ = auVar20._24_8_ + auVar21._24_8_;
  auVar20 = vsubpd_avx(auVar95,auVar68);
  auVar21 = vpermpd_avx2(auVar48,4);
  auVar22 = vpermpd_avx2(auVar24,0x29);
  auVar84._0_8_ = auVar22._0_8_ * auVar21._0_8_;
  auVar84._8_8_ = auVar22._8_8_ * auVar21._8_8_;
  auVar84._16_8_ = auVar22._16_8_ * auVar21._16_8_;
  auVar84._24_8_ = auVar22._24_8_ * auVar21._24_8_;
  auVar21 = vpermpd_avx2(auVar48,0xff);
  auVar22 = vpermpd_avx2(auVar24,0x12);
  auVar25._0_8_ = auVar21._0_8_ * auVar22._0_8_;
  auVar25._8_8_ = auVar21._8_8_ * auVar22._8_8_;
  auVar25._16_8_ = auVar21._16_8_ * auVar22._16_8_;
  auVar25._24_8_ = auVar21._24_8_ * auVar22._24_8_;
  auVar37._0_8_ = auVar84._0_8_ + auVar25._0_8_;
  auVar37._8_8_ = auVar84._8_8_ + auVar25._8_8_;
  auVar49._16_8_ = auVar84._16_8_ + auVar25._16_8_;
  auVar49._0_16_ = auVar37;
  auVar49._24_8_ = auVar84._24_8_ + auVar25._24_8_;
  auVar21 = vsubpd_avx(auVar84,auVar25);
  local_160 = vunpcklpd_avx(auVar20._0_16_,auVar37);
  local_150[0] = (double)vmovlpd_avx(auVar21._16_16_);
  local_150[1] = 0.0;
  local_140 = vblendpd_avx(auVar20._0_16_,auVar21._0_16_,1);
  local_130 = vmovhpd_avx(auVar37);
  local_128 = 0;
  local_120 = vblendpd_avx(auVar21._0_16_,auVar49._16_16_,1);
  local_110 = vmovlpd_avx(auVar20._16_16_);
  local_108 = 0;
  local_f0 = vmovlpd_avx(auVar123._16_16_);
  local_e8 = 0x3ff0000000000000;
  auVar12 = param_2[2];
  uVar1 = *(undefined8 *)param_2[1];
  auVar50._8_8_ = uVar1;
  auVar50._0_8_ = uVar1;
  auVar50._16_8_ = uVar1;
  auVar50._24_8_ = uVar1;
  auVar20 = vblendpd_avx(ZEXT1632(*param_2),auVar50,4);
  dVar30 = *(double *)(param_2[1] + 8);
  auVar85._8_8_ = dVar30;
  auVar85._0_8_ = dVar30;
  auVar85._16_8_ = dVar30;
  auVar85._24_8_ = dVar30;
  auVar21 = vblendpd_avx(auVar20,auVar85,8);
  auVar115._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar115._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar115._16_8_ = auVar21._16_8_ + auVar21._16_8_;
  auVar115._24_8_ = auVar21._24_8_ + auVar21._24_8_;
  auVar51._0_8_ = auVar115._0_8_ * auVar20._0_8_;
  auVar51._8_8_ = auVar115._8_8_ * auVar20._8_8_;
  auVar51._16_8_ = auVar115._16_8_ * auVar20._16_8_;
  auVar51._24_8_ = auVar115._24_8_ * auVar20._24_8_;
  auVar20 = vpermpd_avx2(auVar51,0xc1);
  auVar21 = vpermpd_avx2(auVar51,0xda);
  auVar52._0_8_ = auVar20._0_8_ + auVar21._0_8_;
  auVar52._8_8_ = auVar20._8_8_ + auVar21._8_8_;
  auVar52._16_8_ = auVar20._16_8_ + auVar21._16_8_;
  auVar52._24_8_ = auVar20._24_8_ + auVar21._24_8_;
  auVar20 = vsubpd_avx(auVar95,auVar52);
  auVar11 = vunpcklpd_avx(auVar99,auVar103);
  auVar96._16_8_ = dVar10;
  auVar96._0_16_ = auVar11;
  auVar96._24_8_ = 0;
  auVar38._0_8_ = auVar11._0_8_ * auVar20._0_8_;
  auVar38._8_8_ = auVar11._8_8_ * auVar20._8_8_;
  auVar53._16_8_ = dVar10 * auVar20._16_8_;
  auVar53._0_16_ = auVar38;
  auVar53._24_8_ = auVar20._24_8_ * 0.0;
  uVar1 = *(undefined8 *)*param_2;
  auVar120._8_8_ = uVar1;
  auVar120._0_8_ = uVar1;
  auVar120._16_8_ = uVar1;
  auVar120._24_8_ = uVar1;
  auVar20 = vblendpd_avx(ZEXT1632(*param_2),auVar120,0xc);
  auVar21 = vpermpd_avx2(auVar115,0x29);
  auVar69._0_8_ = auVar21._0_8_ * auVar20._0_8_;
  auVar69._8_8_ = auVar21._8_8_ * auVar20._8_8_;
  auVar69._16_8_ = auVar21._16_8_ * auVar20._16_8_;
  auVar69._24_8_ = auVar21._24_8_ * auVar20._24_8_;
  auVar20 = vpermpd_avx2(auVar115,0x12);
  auVar86._0_8_ = auVar20._0_8_ * dVar30;
  auVar86._8_8_ = auVar20._8_8_ * dVar30;
  auVar86._16_8_ = auVar20._16_8_ * dVar30;
  auVar86._24_8_ = auVar20._24_8_ * dVar30;
  auVar112._0_8_ = (auVar69._0_8_ + auVar86._0_8_) * auVar11._0_8_;
  auVar112._8_8_ = (auVar69._8_8_ + auVar86._8_8_) * auVar11._8_8_;
  auVar116._16_8_ = (auVar69._16_8_ + auVar86._16_8_) * dVar10;
  auVar116._0_16_ = auVar112;
  auVar116._24_8_ = (auVar69._24_8_ + auVar86._24_8_) * 0.0;
  auVar21 = vsubpd_avx(auVar69,auVar86);
  auVar11 = vunpcklpd_avx(auVar103,auVar122);
  uVar1 = *(undefined8 *)(param_2[5] + 8);
  auVar101._8_8_ = uVar1;
  auVar101._0_8_ = uVar1;
  auVar101._16_8_ = uVar1;
  auVar101._24_8_ = uVar1;
  auVar20 = vblendpd_avx(auVar96,auVar101,8);
  auVar92._0_8_ =
       auVar20._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  auVar92._8_8_ = auVar20._8_8_ * _UNK_150b54508;
  auVar97._16_8_ = auVar20._16_8_ * _UNK_150b54510;
  auVar97._0_16_ = auVar92;
  auVar97._24_8_ = auVar20._24_8_ * _UNK_150b54518;
  auVar80._0_8_ = auVar21._0_8_ * auVar11._0_8_;
  auVar80._8_8_ = auVar21._8_8_ * auVar11._8_8_;
  auVar87._16_8_ = auVar21._16_8_ * *(double *)param_2[4];
  auVar87._0_16_ = auVar80;
  auVar87._24_8_ = auVar21._24_8_ * 0.0;
  local_1b0 = auVar97._16_16_;
  auVar104._8_8_ = 0;
  auVar104._0_8_ = *(ulonglong *)param_2[3];
  auVar11 = CONCAT88(auVar112._0_8_,auVar112._0_8_);
  auVar20 = vblendpd_avx(ZEXT1632(auVar38),ZEXT1632(auVar11),2);
  auVar20 = vblendpd_avx(auVar20,auVar87,4);
  auVar21 = vblendpd_avx(ZEXT1632(auVar116._16_16_),auVar87,2);
  auVar21 = vblendpd_avx(auVar21,auVar53,4);
  auVar88._16_16_ = auVar112;
  auVar88._0_16_ = auVar80;
  auVar22 = vshufpd_avx(auVar88,ZEXT1632(auVar38),0xe);
  auVar11 = vmovhpd_avx(auVar104,__real_3ff0000000000000);
  lVar9 = 0x18;
  do {
    dVar10 = *(double *)(local_180 + lVar9 + 8);
    dVar30 = *(double *)(local_170 + lVar9 + 8);
    dVar31 = *(double *)(local_170 + lVar9);
    dVar34 = *(double *)(local_160 + lVar9);
    *(double *)((longlong)adStack_258 + lVar9) =
         auVar12._0_8_ * dVar34 +
         auVar22._0_8_ * dVar31 + auVar20._0_8_ * dVar10 + auVar21._0_8_ * dVar30;
    *(double *)((longlong)adStack_258 + lVar9 + 8) =
         auVar12._8_8_ * dVar34 +
         auVar22._8_8_ * dVar31 + auVar20._8_8_ * dVar10 + auVar21._8_8_ * dVar30;
    *(double *)((longlong)adStack_258 + lVar9 + 0x10) =
         auVar11._0_8_ * dVar34 +
         auVar22._16_8_ * dVar31 + auVar20._16_8_ * dVar10 + auVar21._16_8_ * dVar30;
    *(double *)(local_240 + lVar9) =
         auVar11._8_8_ * dVar34 +
         auVar22._24_8_ * dVar31 + auVar20._24_8_ * dVar10 + auVar21._24_8_ * dVar30;
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x98);
  dVar30 = adStack_238[1] * adStack_238[1] +
           (double)local_240 * (double)local_240 + adStack_238[0] * adStack_238[0];
  dVar31 = local_210 * local_210 +
           (double)local_220._0_8_ * (double)local_220._0_8_ +
           (double)local_220._8_8_ * (double)local_220._8_8_;
  dVar10 = __real_3ff0000000000000;
  if (0.0 <= dVar30 + __real_be45798ee2308c3a) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar30);
  }
  dVar34 = local_1f0 * local_1f0 +
           (double)local_200._0_8_ * (double)local_200._0_8_ +
           (double)local_200._8_8_ * (double)local_200._8_8_;
  dVar30 = __real_3ff0000000000000;
  if (0.0 <= dVar31 + __real_be45798ee2308c3a) {
    dVar30 = __real_3ff0000000000000 / SQRT(dVar31);
  }
  local_170 = vshufpd_avx(auVar92,auVar92,1);
  local_180 = vpermilpd_avx(local_1b0,1);
  auVar121 = SUB6416(ZEXT864(0),0) << 0x40;
  dVar31 = __real_3ff0000000000000;
  if (0.0 <= dVar34 + __real_be45798ee2308c3a) {
    dVar31 = __real_3ff0000000000000 / SQRT(dVar34);
  }
  auVar113._8_8_ = 0;
  auVar113._0_8_ = (double)local_240 * dVar10;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = dVar10 * adStack_238[0];
  auVar12 = vunpcklpd_avx(auVar113,auVar124);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar30 * (double)local_220._0_8_;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = dVar30 * (double)local_220._8_8_;
  auVar11 = vunpcklpd_avx(auVar13,auVar39);
  local_200._8_8_ = dVar31 * (double)local_200._8_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar31 * (double)local_200._0_8_;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = local_200._8_8_;
  auVar36 = vunpcklpd_avx(auVar14,auVar60);
  auVar79 = ZEXT816(0);
  auVar20 = vcmppd_avx(ZEXT1632(auVar79),auVar97,2);
  auVar21 = vpcmpeqd_avx2(ZEXT832((ulonglong)local_200._8_8_),ZEXT832((ulonglong)local_200._8_8_));
  auVar20 = vblendvps_avx(ZEXT1632(auVar79),auVar21,auVar20);
  uVar4 = (uint)__real_8000000000000000;
  uVar5 = (uint)(__real_8000000000000000 >> 0x20);
  auVar108._0_8_ =
       (double)CONCAT44(auVar20._4_4_ & uVar5 ^ __real_bff0000000000000._4_4_,
                        auVar20._0_4_ & uVar4 ^ (uint)__real_bff0000000000000);
  auVar108._8_4_ = auVar20._8_4_ & uVar4 ^ (uint)__real_bff0000000000000;
  auVar108._12_4_ = auVar20._12_4_ & uVar5 ^ __real_bff0000000000000._4_4_;
  auVar108._16_4_ = auVar20._16_4_ & uVar4 ^ (uint)__real_bff0000000000000;
  auVar108._20_4_ = auVar20._20_4_ & uVar5 ^ __real_bff0000000000000._4_4_;
  auVar108._24_4_ = auVar20._24_4_ & uVar4 ^ (uint)__real_bff0000000000000;
  auVar108._28_4_ = auVar20._28_4_ & uVar5 ^ __real_bff0000000000000._4_4_;
  local_240 = (undefined1  [8])(auVar12._0_8_ * auVar108._0_8_);
  adStack_238[0] = auVar12._8_8_ * auVar108._0_8_;
  auVar106._16_8_ = dVar10 * adStack_238[1] * auVar108._0_8_;
  auVar106._0_16_ = _local_240;
  auVar106._24_8_ = auVar108._0_8_ * 0.0;
  adStack_238[1] = (double)vmovlpd_avx(auVar106._16_16_);
  auVar20 = vpermpd_avx2(auVar108,0x55);
  local_220._0_8_ = auVar20._0_8_ * auVar11._0_8_;
  local_220._8_8_ = auVar20._8_8_ * auVar11._8_8_;
  auVar54._16_8_ = auVar20._16_8_ * local_210 * dVar30;
  auVar54._0_16_ = local_220;
  auVar54._24_8_ = auVar20._24_8_ * 0.0;
  local_210 = (double)vmovlpd_avx(auVar54._16_16_);
  auVar20 = vpermpd_avx2(auVar108,0xaa);
  local_200._0_8_ = auVar20._0_8_ * auVar36._0_8_;
  local_200._8_8_ = auVar20._8_8_ * auVar36._8_8_;
  auVar109._16_8_ = auVar20._16_8_ * local_1f0 * dVar31;
  auVar109._0_16_ = local_200;
  auVar109._24_8_ = auVar20._24_8_ * 0.0;
  local_1f0 = (double)vmovlpd_avx(auVar109._16_16_);
  auVar89._8_8_ = __real_0010000000000000;
  auVar89._0_8_ = __real_0010000000000000;
  auVar89._16_8_ = __real_0010000000000000;
  auVar89._24_8_ = __real_0010000000000000;
  auVar20 = vblendpd_avx(auVar106,auVar89,8);
  auVar117._0_8_ = __real_7fffffffffffffff & auVar20._0_8_;
  auVar117._8_8_ = __real_7fffffffffffffff & auVar20._8_8_;
  auVar117._16_8_ = __real_7fffffffffffffff & auVar20._16_8_;
  auVar117._24_8_ = __real_7fffffffffffffff & auVar20._24_8_;
  auVar102._8_8_ = __real_3f1a36e2eb1c432d;
  auVar102._0_8_ = __real_3f1a36e2eb1c432d;
  auVar102._16_8_ = __real_3f1a36e2eb1c432d;
  auVar102._24_8_ = __real_3f1a36e2eb1c432d;
  auVar20 = vcmppd_avx(auVar117,auVar102,6);
  auVar20 = vpackssdw_avx2(auVar20,ZEXT1632(auVar79));
  if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) == 0 && (SUB321(auVar20 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar20 >> 0x5f,0) & 1) == 0) && SUB321(auVar20 >> 0x7f,0) == '\0') &&
        (SUB321(auVar20 >> 0x9f,0) & 1) == 0) && SUB321(auVar20 >> 0xbf,0) == '\0') &&
      (SUB321(auVar20 >> 0xdf,0) & 1) == 0) && -1 < auVar20[0x1f]) {
    auVar62 = SUB6416(ZEXT864(0),0) << 0x40;
    auVar16 = ZEXT816(0) << 0x40;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = __real_3ff0000000000000;
  }
  else {
    auVar20 = vblendpd_avx(auVar54,auVar89,8);
    auVar118._0_8_ = auVar20._0_8_ & __real_7fffffffffffffff;
    auVar118._8_8_ = auVar20._8_8_ & __real_7fffffffffffffff;
    auVar118._16_8_ = auVar20._16_8_ & __real_7fffffffffffffff;
    auVar118._24_8_ = auVar20._24_8_ & __real_7fffffffffffffff;
    auVar20 = vcmppd_avx(auVar118,auVar102,6);
    auVar20 = vpackssdw_avx2(auVar20,ZEXT1632(auVar79));
    if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) != 0 || (SUB321(auVar20 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar20 >> 0x5f,0) & 1) != 0) || SUB321(auVar20 >> 0x7f,0) != '\0') ||
          (SUB321(auVar20 >> 0x9f,0) & 1) != 0) || SUB321(auVar20 >> 0xbf,0) != '\0') ||
        (SUB321(auVar20 >> 0xdf,0) & 1) != 0) || auVar20[0x1f] < '\0') {
      auVar20 = vblendpd_avx(auVar109,auVar89,8);
      auVar90._0_8_ = __real_7fffffffffffffff & auVar20._0_8_;
      auVar90._8_8_ = __real_7fffffffffffffff & auVar20._8_8_;
      auVar90._16_8_ = __real_7fffffffffffffff & auVar20._16_8_;
      auVar90._24_8_ = __real_7fffffffffffffff & auVar20._24_8_;
      auVar20 = vcmppd_avx(auVar90,auVar102,6);
      auVar20 = vpackssdw_avx2(auVar20,ZEXT832(0) << 0x40);
      if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) != 0 || (SUB321(auVar20 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar20 >> 0x5f,0) & 1) != 0) || SUB321(auVar20 >> 0x7f,0) != '\0') ||
            (SUB321(auVar20 >> 0x9f,0) & 1) != 0) || SUB321(auVar20 >> 0xbf,0) != '\0') ||
          (SUB321(auVar20 >> 0xdf,0) & 1) != 0) || auVar20[0x1f] < '\0') {
        auVar12 = vshufpd_avx(local_220,local_220,1);
        dVar10 = auVar109._16_8_ + (double)local_240 + auVar12._0_8_;
        if (dVar10 <= 0.0) {
          bVar6 = (double)local_240 < auVar12._0_8_;
          uVar35 = 2;
          if (auVar109._16_8_ <= *(double *)(local_240 + ((uint)bVar6 * 0x20 + (uint)bVar6 * 8))) {
            uVar35 = (ulonglong)bVar6;
          }
          iVar2 = *(int *)(&DAT_151c6ce40 + uVar35 * 4);
          lVar9 = (longlong)iVar2;
          iVar3 = *(int *)(&DAT_151c6ce40 + lVar9 * 4);
          iVar7 = (int)uVar35;
          dVar10 = __real_3ff0000000000000 /
                   SQRT(((*(double *)(local_240 + (uint)(iVar7 * 0x28)) -
                         *(double *)(local_240 + lVar9 * 0x28)) -
                        *(double *)(local_240 + (longlong)iVar3 * 0x28)) + __real_3ff0000000000000);
          *(double *)((longlong)local_1a0 + (ulonglong)(uint)(iVar7 * 8)) =
               (__real_3ff0000000000000 / dVar10) * __real_3fe0000000000000;
          dVar10 = dVar10 * __real_3fe0000000000000;
          local_1a0[lVar9] =
               (*(double *)(local_240 + (longlong)(iVar2 + iVar7 * 4) * 8) +
               *(double *)(local_240 + (longlong)(iVar7 + iVar2 * 4) * 8)) * dVar10;
          local_1a0[iVar3] =
               dVar10 * (*(double *)(local_240 + (longlong)(iVar3 + iVar7 * 4) * 8) +
                        *(double *)(local_240 + (longlong)(iVar7 + iVar3 * 4) * 8));
          dVar10 = dVar10 * (*(double *)(local_240 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                            *(double *)(local_240 + (longlong)(iVar2 + iVar3 * 4) * 8));
        }
        else {
          auVar12 = vshufpd_avx(_local_240,_local_240,1);
          auVar11 = vshufpd_avx(local_200,local_200,1);
          dVar30 = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + dVar10);
          dVar10 = __real_3fe0000000000000 * dVar30;
          local_1a0[0] = dVar10 * (auVar54._16_8_ - auVar11._0_8_);
          local_1a0[1] = dVar10 * ((double)local_200._0_8_ - auVar106._16_8_);
          local_1a0[2] = dVar10 * (auVar12._0_8_ - (double)local_220._0_8_);
          dVar10 = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar30);
        }
        auVar121._8_8_ = 0;
        auVar121._0_8_ = local_1a0[2];
        auVar62._8_8_ = 0;
        auVar62._0_8_ = local_1a0[0];
        auVar16._8_8_ = 0;
        auVar16._0_8_ = local_1a0[1];
        auVar100._8_8_ = 0;
        auVar100._0_8_ = dVar10;
        goto LAB_140c7f60b;
      }
    }
    auVar62 = SUB6416(ZEXT864(0),0) << 0x40;
    auVar16 = ZEXT816(0) << 0x40;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = __real_3ff0000000000000;
  }
LAB_140c7f60b:
  auVar12 = vunpcklpd_avx(auVar121,auVar100);
  auVar11 = vunpcklpd_avx(auVar62,auVar16);
  dVar30 = auVar11._0_8_;
  dVar31 = auVar11._8_8_;
  dVar34 = auVar12._0_8_;
  auVar17._0_8_ = dVar34 * dVar34 + dVar30 * dVar30;
  dVar59 = auVar12._8_8_;
  auVar17._8_8_ = dVar59 * dVar59 + dVar31 * dVar31;
  auVar12 = vshufpd_avx(auVar17,auVar17,1);
  dVar10 = auVar17._0_8_ + auVar12._0_8_;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = __real_3e45798ee2308c3a;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar10;
  auVar12 = vcmpsd_avx(auVar40,auVar18,6);
  uVar35 = ~auVar12._0_8_ & __real_ffffffffffffffff;
  dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
  auVar72._0_8_ = ~uVar35 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar72._8_8_ = ~uVar35 & _UNK_150b54548;
  auVar72._16_8_ = ~uVar35 & _UNK_150b54550;
  auVar72._24_8_ = ~uVar35 & _UNK_150b54558;
  auVar107._0_8_ = (double)((ulonglong)(dVar30 * dVar10) & uVar35);
  auVar107._8_8_ = (double)((ulonglong)(dVar31 * dVar10) & uVar35);
  auVar111._16_8_ = (ulonglong)(dVar34 * dVar10) & uVar35;
  auVar111._0_16_ = auVar107;
  auVar111._24_8_ = (ulonglong)(dVar59 * dVar10) & uVar35;
  auVar33 = auVar111._16_16_ | auVar72._16_16_;
  auVar12 = vshufps_avx(auVar107,auVar107,0x4e);
  auVar11 = vshufps_avx(auVar33,auVar33,0x4e);
  dVar10 = auVar11._0_8_;
  auVar15._8_8_ = 0.0;
  auVar15._0_8_ = (double)uStack_1e0;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uStack_1d8;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uStack_1d0;
LAB_140c7f6b1:
  auVar11 = vunpcklpd_avx(auVar92,local_170);
  auVar36 = vunpcklpd_avx(local_1b0,local_180);
  auVar73._0_8_ =
       auVar11._0_8_ * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
  auVar73._8_8_ = auVar11._8_8_ * _UNK_150aa8e88;
  auVar73._16_8_ = auVar36._0_8_ * _DAT_150aa8e90;
  auVar73._24_8_ = auVar36._8_8_ * _UNK_150aa8e98;
  auVar11 = vunpcklpd_avx(auVar15,auVar41);
  auVar20 = vpermpd_avx2(auVar73,0xc9);
  auVar36 = vunpcklpd_avx(auVar107,auVar12);
  auVar93._8_8_ = dVar10;
  auVar93._0_8_ = dVar10;
  auVar79 = vunpcklpd_avx(auVar33,auVar93);
  auVar12 = vunpcklpd_avx(auVar12,auVar33);
  auVar99 = vunpcklpd_avx(auVar107,auVar93);
  dVar30 = auVar36._0_8_ * auVar20._0_8_ - auVar12._0_8_ * auVar73._0_8_;
  dVar31 = auVar36._8_8_ * auVar20._8_8_ - auVar12._8_8_ * auVar73._8_8_;
  dVar34 = auVar79._0_8_ * auVar20._16_8_ - auVar99._0_8_ * auVar73._16_8_;
  dVar59 = auVar79._8_8_ * auVar20._24_8_ - auVar99._8_8_ * auVar73._24_8_;
  auVar56._0_8_ = dVar30 + dVar30;
  auVar56._8_8_ = dVar31 + dVar31;
  auVar56._16_8_ = dVar34 + dVar34;
  auVar56._24_8_ = dVar59 + dVar59;
  auVar20 = vpermpd_avx2(auVar56,0xc9);
  auVar21 = vpermpd_avx2(auVar56,0xd2);
  auVar74._0_8_ = auVar36._0_8_ * auVar21._0_8_ - auVar12._0_8_ * auVar20._0_8_;
  auVar74._8_8_ = auVar36._8_8_ * auVar21._8_8_ - auVar12._8_8_ * auVar20._8_8_;
  auVar74._16_8_ = auVar79._0_8_ * auVar21._16_8_ - auVar99._0_8_ * auVar20._16_8_;
  auVar74._24_8_ = auVar79._8_8_ * auVar21._24_8_ - auVar99._8_8_ * auVar20._24_8_;
  auVar21 = vpermpd_avx2(auVar74,0xc9);
  dVar30 = (double)(param_3 * __real_3f000000 * param_7);
  auVar57._0_8_ =
       dVar30 * (double)(__real_7fffffffffffffff &
                        (ulonglong)(auVar20._0_8_ * dVar10 + auVar73._0_8_ + auVar21._0_8_));
  auVar57._8_8_ =
       dVar30 * (double)(__real_7fffffffffffffff &
                        (ulonglong)(auVar20._8_8_ * dVar10 + auVar73._8_8_ + auVar21._8_8_));
  auVar57._16_8_ =
       dVar30 * (double)(__real_7fffffffffffffff &
                        (ulonglong)(auVar20._16_8_ * dVar10 + auVar73._16_8_ + auVar21._16_8_));
  auVar57._24_8_ =
       dVar30 * (double)(__real_7fffffffffffffff &
                        (ulonglong)(auVar20._24_8_ * dVar10 + auVar73._24_8_ + auVar21._24_8_));
  auVar28._16_16_ = auVar32;
  auVar28._0_16_ = auVar11;
  auVar20 = vsubpd_avx(auVar28,auVar57);
  auVar75._0_8_ = (double)(param_3 * param_6);
  auVar75._8_8_ = auVar75._0_8_;
  auVar75._16_8_ = auVar75._0_8_;
  auVar75._24_8_ = auVar75._0_8_;
  auVar20 = vsubpd_avx(auVar20,auVar75);
  auVar19._0_8_ = auVar75._0_8_ + auVar11._0_8_ + auVar57._0_8_;
  auVar19._8_8_ = auVar75._0_8_ + auVar11._8_8_ + auVar57._8_8_;
  auVar29._16_8_ = auVar75._0_8_ + auVar32._0_8_ + auVar57._16_8_;
  auVar29._0_16_ = auVar19;
  auVar29._24_8_ = auVar75._0_8_ + auVar32._8_8_ + auVar57._24_8_;
  auVar58._16_16_ = auVar19;
  auVar58._0_16_ = auVar20._0_16_;
  auVar20 = vshufpd_avx(auVar20,auVar58,2);
  *param_1 = auVar20;
  auVar20 = vpermpd_avx2(auVar29,0xe9);
  *(undefined1 (*) [16])param_1[1] = auVar20._0_16_;
  param_1[1][0x10] = 1;
  return;
}

