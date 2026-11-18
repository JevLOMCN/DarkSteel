// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// BoxCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunfCunf_avx @ 140c7f7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void BoxCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunfCunf_avx
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],float param_3,
               undefined1 (*param_4) [24],double *param_5,uint param_6,uint param_7,uint param_8,
               undefined1 (*param_9) [32])

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
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
  undefined1 auVar30 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar34 [32];
  undefined1 auVar44 [16];
  undefined1 auVar37 [32];
  undefined1 auVar39 [32];
  double dVar45;
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
  double dVar89;
  undefined1 auVar62 [32];
  double dVar88;
  double dVar90;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar72 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar79 [32];
  undefined1 auVar81 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  ulonglong uVar91;
  undefined1 auVar104 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar146 [32];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  double dVar148;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  double dVar176;
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  double dVar175;
  double dVar177;
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar171 [32];
  undefined1 auVar173 [32];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [32];
  undefined1 auVar193 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar199 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [32];
  undefined1 auVar211 [32];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar215 [32];
  undefined1 auVar217 [32];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [32];
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [32];
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
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
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1b0 [16];
  double local_1a0 [4];
  undefined1 local_180 [16];
  undefined1 auStack_170 [16];
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
  undefined1 local_e0 [16];
  double dStack_d0;
  double dStack_c8;
  undefined1 local_c0 [16];
  undefined1 auVar29 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar38 [32];
  undefined1 auVar40 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar73 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar80 [32];
  undefined1 auVar82 [32];
  undefined1 auVar85 [32];
  undefined1 auVar109 [32];
  undefined1 auVar113 [32];
  undefined1 auVar123 [32];
  undefined1 auVar136 [32];
  undefined1 auVar140 [32];
  undefined1 auVar145 [32];
  undefined1 auVar147 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar172 [32];
  undefined1 auVar174 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar194 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar200 [32];
  undefined1 auVar205 [32];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  undefined1 auVar214 [32];
  undefined1 auVar216 [32];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  
  auVar62._24_8_ = 0;
  auVar62._0_24_ = *param_4;
  auVar105._8_8_ = __real_4076800000000000;
  auVar105._0_8_ = __real_4076800000000000;
  auVar105._16_8_ = __real_4076800000000000;
  auVar105._24_8_ = __real_4076800000000000;
  auVar66 = vdivpd_avx(auVar62,auVar105);
  auVar160._0_8_ = __real_7fffffffffffffff & auVar66._0_8_;
  auVar160._8_8_ = __real_7fffffffffffffff & auVar66._8_8_;
  auVar160._16_8_ = __real_7fffffffffffffff & auVar66._16_8_;
  auVar160._24_8_ = __real_7fffffffffffffff & auVar66._24_8_;
  auVar190._8_8_ = __real_4330000000000000;
  auVar190._0_8_ = __real_4330000000000000;
  auVar190._16_8_ = __real_4330000000000000;
  auVar190._24_8_ = __real_4330000000000000;
  auVar107 = vcmppd_avx(auVar190,auVar160,2);
  auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
  auVar231 = vpshufd_avx(auVar93,0x50);
  auVar93 = vpshufd_avx(auVar93,0xfa);
  auVar161._16_16_ = auVar93;
  auVar161._0_16_ = auVar231;
  auVar231._0_12_ = ZEXT812(0);
  auVar231._12_4_ = 0;
  auVar29 = vcmpps_avx(ZEXT1632(auVar231),ZEXT1632(auVar231),0xf);
  auVar160 = ZEXT1632(auVar231);
  auVar107 = vblendvps_avx(auVar160,auVar29,auVar161);
  auVar63 = vroundpd_avx(auVar66,0xb);
  auVar209._0_4_ = ~auVar107._0_4_ & auVar63._0_4_;
  auVar209._4_4_ = ~auVar107._4_4_ & auVar63._4_4_;
  auVar209._8_4_ = ~auVar107._8_4_ & auVar63._8_4_;
  auVar209._12_4_ = ~auVar107._12_4_ & auVar63._12_4_;
  auVar209._16_4_ = ~auVar107._16_4_ & auVar63._16_4_;
  auVar209._20_4_ = ~auVar107._20_4_ & auVar63._20_4_;
  auVar209._24_4_ = ~auVar107._24_4_ & auVar63._24_4_;
  auVar209._28_4_ = ~auVar107._28_4_ & auVar63._28_4_;
  auVar133._0_8_ = auVar66._0_8_ & auVar107._0_8_;
  auVar133._8_8_ = auVar66._8_8_ & auVar107._8_8_;
  auVar133._16_8_ = auVar66._16_8_ & auVar107._16_8_;
  auVar133._24_8_ = auVar66._24_8_ & auVar107._24_8_;
  auVar133 = auVar133 | auVar209;
  auVar93._0_8_ = auVar133._0_8_ * __real_4076800000000000;
  auVar93._8_8_ = auVar133._8_8_ * __real_4076800000000000;
  auVar134._16_8_ = auVar133._16_8_ * __real_4076800000000000;
  auVar134._0_16_ = auVar93;
  auVar134._24_8_ = auVar133._24_8_ * __real_4076800000000000;
  auVar107 = vsubpd_avx(auVar62,auVar134);
  auVar107 = vminpd_avx(auVar107,auVar105);
  auVar106._8_8_ = __real_c076800000000000;
  auVar106._0_8_ = __real_c076800000000000;
  auVar106._16_8_ = __real_c076800000000000;
  auVar106._24_8_ = __real_c076800000000000;
  auVar107 = vmaxpd_avx(auVar106,auVar107);
  dVar45 = auVar107._0_8_ * ___ymm_3f81df46a2529d393f81df46a2529d393f81df46a2529d393f81df46a2529d39;
  dVar88 = auVar107._8_8_ * _UNK_151c6cec8;
  dVar89 = auVar107._16_8_ * _UNK_151c6ced0;
  dVar90 = auVar107._24_8_ * _UNK_151c6ced8;
  auVar107._0_8_ = dVar45 * ___ymm_3fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c883;
  auVar107._8_8_ = dVar88 * _UNK_151c6cee8;
  auVar107._16_8_ = dVar89 * _UNK_151c6cef0;
  auVar107._24_8_ = dVar90 * _UNK_151c6cef8;
  auVar107 = vroundpd_avx(auVar107,0xb);
  auVar63._0_8_ =
       dVar45 + auVar107._0_8_ *
                ___ymm_c01921fb54442d18c01921fb54442d18c01921fb54442d18c01921fb54442d18;
  auVar63._8_8_ = dVar88 + auVar107._8_8_ * _UNK_151c6cf08;
  auVar63._16_8_ = dVar89 + auVar107._16_8_ * _UNK_151c6cf10;
  auVar63._24_8_ = dVar90 + auVar107._24_8_ * _UNK_151c6cf18;
  auVar108._0_8_ =
       (ulonglong)auVar63._0_8_ &
       ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
  auVar108._8_8_ = (ulonglong)auVar63._8_8_ & _UNK_150b513e8;
  auVar108._16_8_ = (ulonglong)auVar63._16_8_ & _UNK_150b513f0;
  auVar108._24_8_ = (ulonglong)auVar63._24_8_ & _UNK_150b513f8;
  auVar231 = vpcmpeqd_avx(auVar93,auVar93);
  auVar66 = vsubpd_avx(auVar108 |
                       ___ymm_400921fb54442d18400921fb54442d18400921fb54442d18400921fb54442d18,
                       auVar63);
  auVar162._0_8_ = __real_7fffffffffffffff & (ulonglong)auVar63._0_8_;
  auVar162._8_8_ = __real_7fffffffffffffff & (ulonglong)auVar63._8_8_;
  auVar162._16_8_ = __real_7fffffffffffffff & (ulonglong)auVar63._16_8_;
  auVar162._24_8_ = __real_7fffffffffffffff & (ulonglong)auVar63._24_8_;
  auVar210._8_8_ = __real_3ff921fb54442d18;
  auVar210._0_8_ = __real_3ff921fb54442d18;
  auVar210._16_8_ = __real_3ff921fb54442d18;
  auVar210._24_8_ = __real_3ff921fb54442d18;
  auVar107 = vcmppd_avx(auVar210,auVar162,1);
  auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
  auVar236 = vpshufd_avx(auVar93,0x50);
  auVar93 = vpshufd_avx(auVar93,0xfa);
  auVar163._16_16_ = auVar93;
  auVar163._0_16_ = auVar236;
  auVar107 = vblendvps_avx(auVar160,auVar29,auVar163);
  auVar64._0_4_ = ~auVar107._0_4_ & SUB84(auVar63._0_8_,0);
  auVar64._4_4_ = ~auVar107._4_4_ & (uint)((ulonglong)auVar63._0_8_ >> 0x20);
  auVar64._8_4_ = ~auVar107._8_4_ & SUB84(auVar63._8_8_,0);
  auVar64._12_4_ = ~auVar107._12_4_ & (uint)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar64._16_4_ = ~auVar107._16_4_ & SUB84(auVar63._16_8_,0);
  auVar64._20_4_ = ~auVar107._20_4_ & (uint)((ulonglong)auVar63._16_8_ >> 0x20);
  auVar64._24_4_ = ~auVar107._24_4_ & SUB84(auVar63._24_8_,0);
  auVar64._28_4_ = ~auVar107._28_4_ & (uint)((ulonglong)auVar63._24_8_ >> 0x20);
  auVar65._0_8_ = auVar66._0_8_ & auVar107._0_8_;
  auVar65._8_8_ = auVar66._8_8_ & auVar107._8_8_;
  auVar65._16_8_ = auVar66._16_8_ & auVar107._16_8_;
  auVar65._24_8_ = auVar66._24_8_ & auVar107._24_8_;
  auVar65 = auVar65 | auVar64;
  dVar45 = auVar65._0_8_;
  dVar148 = dVar45 * dVar45;
  dVar88 = auVar65._8_8_;
  dVar175 = dVar88 * dVar88;
  dVar89 = auVar65._16_8_;
  dVar176 = dVar89 * dVar89;
  dVar90 = auVar65._24_8_;
  dVar177 = dVar90 * dVar90;
  auVar93 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_9 + 0x10),auVar231);
  auVar12 = SUB3216(*param_9,0);
  auVar231 = vpcmpgtd_avx(auVar12,auVar231);
  auVar93 = vpor_avx(auVar231,auVar93);
  auVar220._8_8_ = __real_3ff0000000000000;
  auVar220._0_8_ = __real_3ff0000000000000;
  auVar220._16_8_ = __real_3ff0000000000000;
  auVar220._24_8_ = __real_3ff0000000000000;
  auVar7._0_8_ = (__real_3ff0000000000000 +
                 dVar148 * (dVar148 * (dVar148 * (dVar148 * (dVar148 * 
                                                  ___ymm_be59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806f
                                                  + 
                                                  ___ymm_00000000000000003ec71711c625173e3ec71711c625173e3ec71711c625173e
                                                  ) + 
                                                 ___ymm_0000000000000000bf2a017e195d6197bf2a017e195d6197bf2a017e195d6197
                                                 ) +
                                      ___ymm_00000000000000003f811110c0e4d9803f811110c0e4d9803f811110c0e4d980
                                      ) +
                           ___ymm_0000000000000000bfc555555c7dda4bbfc555555c7dda4bbfc555555c7dda4b))
                 * dVar45;
  auVar7._8_8_ = (__real_3ff0000000000000 +
                 dVar175 * (dVar175 * (dVar175 * (dVar175 * (dVar175 * _UNK_151c6cf68 +
                                                            _UNK_151c6cf88) + _UNK_151c6cfa8) +
                                      _UNK_151c6cfc8) + _UNK_151c6cfe8)) * dVar88;
  auVar29._16_8_ =
       (__real_3ff0000000000000 +
       dVar176 * (dVar176 * (dVar176 * (dVar176 * (dVar176 * _UNK_151c6cf70 + _UNK_151c6cf90) +
                                       _UNK_151c6cfb0) + _UNK_151c6cfd0) + _UNK_151c6cff0)) * dVar89
  ;
  auVar29._0_16_ = auVar7;
  auVar29._24_8_ =
       (__real_3ff0000000000000 +
       dVar177 * (dVar177 * (dVar177 * (dVar177 * (dVar177 * _UNK_151c6cf78 + _UNK_151c6cf98) +
                                       _UNK_151c6cfb8) + _UNK_151c6cfd8) + _UNK_151c6cff8)) * dVar90
  ;
  auVar46._0_8_ =
       (__real_3ff0000000000000 +
       dVar148 * (dVar148 * (dVar148 * (dVar148 * (dVar148 * 
                                                  ___ymm_be917ba225041884be917ba225041884be917ba225041884be917ba225041884
                                                  + 
                                                  ___ymm_00000000000000003ef9f698429782503ef9f698429782503ef9f69842978250
                                                  ) +
                                       ___ymm_0000000000000000bf56c1353b8c783dbf56c1353b8c783dbf56c1353b8c783d
                                       ) +
                            ___ymm_00000000000000003fa555545f16aaab3fa555545f16aaab3fa555545f16aaab)
                 + ___ymm_0000000000000000bfe0000000000000bfe0000000000000bfe0000000000000)) *
       (double)(auVar107._0_8_ &
                CONCAT44(_UNK_151c6af64,
                         ___ymm_0000000000000000800000000000000080000000000000008000000000000000) |
               (ulonglong)___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000);
  auVar46._8_8_ =
       (__real_3ff0000000000000 +
       dVar175 * (dVar175 * (dVar175 * (dVar175 * (dVar175 * _UNK_151c6d008 + _UNK_151c6d028) +
                                       _UNK_151c6d048) + _UNK_151c6d068) + _UNK_151c6d088)) *
       (double)(auVar107._8_8_ & CONCAT44(_UNK_151c6af6c,_UNK_151c6af68) | (ulonglong)_UNK_150b54508
               );
  auVar66._16_8_ =
       (__real_3ff0000000000000 +
       dVar176 * (dVar176 * (dVar176 * (dVar176 * (dVar176 * _UNK_151c6d010 + _UNK_151c6d030) +
                                       _UNK_151c6d050) + _UNK_151c6d070) + _UNK_151c6d090)) *
       (double)(auVar107._16_8_ & CONCAT44(_UNK_151c6af74,_UNK_151c6af70) |
               (ulonglong)_UNK_150b54510);
  auVar66._0_16_ = auVar46;
  auVar66._24_8_ =
       (__real_3ff0000000000000 +
       dVar177 * (dVar177 * (dVar177 * (dVar177 * (dVar177 * _UNK_151c6d018 + _UNK_151c6d038) +
                                       _UNK_151c6d058) + _UNK_151c6d078) + _UNK_151c6d098)) *
       (double)(auVar107._24_8_ & CONCAT44(_UNK_151c6af7c,_UNK_151c6af78) |
               (ulonglong)_UNK_150b54518);
  auVar231 = vunpckhpd_avx(auVar7,auVar46);
  auVar107 = vperm2f128_avx(auVar66,auVar66,0x11);
  auVar236 = vunpckhpd_avx(auVar46,auVar7);
  auVar29 = vperm2f128_avx(auVar29,auVar29,0x11);
  auVar240._0_8_ =
       (double)((ulonglong)(auVar107._0_8_ * auVar7._0_8_ * auVar231._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar29._0_8_ * auVar46._0_8_ * auVar236._0_8_) ^
               CONCAT44(_UNK_151c6af64,
                        ___ymm_0000000000000000800000000000000080000000000000008000000000000000));
  auVar240._8_8_ =
       (double)((ulonglong)(auVar107._0_8_ * auVar7._0_8_ * auVar231._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar29._0_8_ * auVar46._0_8_ * auVar236._8_8_) ^
               CONCAT44(_UNK_151c6af6c,_UNK_151c6af68));
  auVar240._16_8_ =
       (double)((ulonglong)(auVar107._16_8_ * auVar46._0_8_ * auVar231._0_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar29._16_8_ * auVar7._0_8_ * auVar236._0_8_) ^
               CONCAT44(_UNK_151c6af74,_UNK_151c6af70));
  auVar240._24_8_ =
       (double)((ulonglong)(auVar107._16_8_ * auVar46._0_8_ * auVar231._8_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar29._16_8_ * auVar7._0_8_ * auVar236._8_8_) ^
               CONCAT44(_UNK_151c6af7c,_UNK_151c6af78));
  dVar45 = (double)param_3;
  local_100._0_8_ = dVar45 * *param_5;
  local_100._8_8_ = dVar45 * param_5[1];
  auVar236._0_8_ = dVar45 * param_5[2];
  auVar236._8_8_ = 0;
  if ((((SUB161(auVar93 >> 0x1f,0) & 1) == 0 && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar93 >> 0x5f,0) & 1) == 0) && -1 < auVar93[0xf]) {
    local_180._8_8_ = 0.0;
    local_180._0_8_ = *(double *)param_2[4];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(param_2[4] + 8);
    dVar45 = *(double *)param_2[5];
    local_e0._8_8_ = 0;
    local_e0._0_8_ = dVar45;
    auVar107 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar160,1);
    auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
    if ((((SUB161(auVar93 >> 0x1f,0) & 1) == 0 && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar93 >> 0x5f,0) & 1) == 0) && -1 < auVar93[0xf]) {
      auVar153._8_8_ = 0;
      auVar153._0_8_ = *(ulonglong *)(param_2[5] + 8);
      dVar45 = *(double *)(param_2[1] + 8);
      auVar16._8_8_ = dVar45;
      auVar16._0_8_ = dVar45;
      dVar88 = *(double *)*param_2;
      auVar57._8_8_ = dVar88;
      auVar57._0_8_ = dVar88;
      auVar66 = vperm2f128_avx(auVar240,auVar240,1);
      auVar107 = vshufpd_avx(auVar66,auVar66,5);
      dVar89 = *(double *)(*param_2 + 8);
      auVar100._8_8_ = dVar89;
      auVar100._0_8_ = dVar89;
      dVar90 = *(double *)param_2[1];
      auVar130._8_8_ = dVar90;
      auVar130._0_8_ = dVar90;
      auVar29 = vshufpd_avx(auVar240,auVar240,5);
      auVar226._0_8_ =
           auVar29._0_8_ * dVar90 *
           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
           auVar66._0_8_ * dVar89 *
           ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
           auVar240._0_8_ * dVar45 +
           auVar107._0_8_ * dVar88 *
           ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
      auVar226._8_8_ =
           auVar29._8_8_ * dVar90 * _UNK_150b54428 +
           auVar66._8_8_ * dVar89 * _UNK_150b54408 +
           auVar240._8_8_ * dVar45 + auVar107._8_8_ * dVar88 * _UNK_150b543e8;
      auVar228._16_8_ =
           auVar29._16_8_ * dVar90 * _UNK_150b54430 +
           auVar66._16_8_ * dVar89 * _UNK_150b54410 +
           auVar240._16_8_ * dVar45 + auVar107._16_8_ * dVar88 * _UNK_150b543f0;
      auVar228._0_16_ = auVar226;
      auVar228._24_8_ =
           auVar29._24_8_ * dVar90 * _UNK_150b54438 +
           auVar66._24_8_ * dVar89 * _UNK_150b54418 +
           auVar240._24_8_ * dVar45 + auVar107._24_8_ * dVar88 * _UNK_150b543f8;
      auVar7 = vshufpd_avx(auVar226,auVar226,1);
      auVar44 = auVar228._16_16_;
      auVar46 = vshufpd_avx(auVar44,auVar44,1);
      auVar93 = vunpcklpd_avx(local_e0,auVar153);
      auVar231 = vunpcklpd_avx(local_180,auVar12);
      auVar154._0_8_ = local_100._0_8_ * auVar231._0_8_;
      auVar154._8_8_ = local_100._8_8_ * auVar231._8_8_;
      auVar170._16_8_ = auVar236._0_8_ * auVar93._0_8_;
      auVar170._0_16_ = auVar154;
      auVar170._24_8_ = auVar93._8_8_ * 0.0;
      auVar203._16_16_ = auVar154;
      auVar203._0_16_ = auVar154;
      auVar107 = vperm2f128_avx(auVar170,auVar170,0x11);
      auVar107 = vshufpd_avx(auVar203,auVar107,9);
      auVar236 = vunpcklpd_avx(auVar57,auVar100);
      auVar93 = vblendpd_avx(auVar57,auVar130,1);
      auVar231 = vunpcklpd_avx(auVar130,auVar16);
      auVar204._0_8_ = auVar107._0_8_ * auVar236._0_8_;
      auVar204._8_8_ = auVar107._8_8_ * auVar236._8_8_;
      auVar204._16_8_ = auVar107._16_8_ * auVar231._0_8_;
      auVar204._24_8_ = auVar107._24_8_ * auVar231._8_8_;
      auVar43 = vunpcklpd_avx(auVar100,auVar130);
      auVar231 = vblendpd_avx(auVar100,auVar57,1);
      auVar16 = vunpcklpd_avx(auVar57,auVar16);
      auVar84._0_8_ = auVar154._0_8_ * auVar43._0_8_;
      auVar84._8_8_ = auVar154._8_8_ * auVar43._8_8_;
      auVar84._16_8_ = auVar170._16_8_ * auVar16._0_8_;
      auVar84._24_8_ = auVar170._24_8_ * auVar16._8_8_;
      auVar107 = vsubpd_avx(auVar204,auVar84);
      auVar58._0_8_ = auVar107._0_8_ + auVar107._0_8_;
      auVar58._8_8_ = auVar107._8_8_ + auVar107._8_8_;
      auVar85._16_8_ = auVar107._16_8_ + auVar107._16_8_;
      auVar85._0_16_ = auVar58;
      auVar85._24_8_ = auVar107._24_8_ + auVar107._24_8_;
      auVar143._16_16_ = auVar58;
      auVar143._0_16_ = auVar58;
      auVar107 = vshufpd_avx(auVar143,ZEXT1632(auVar85._16_16_),1);
      local_1b0._0_8_ = auVar46._0_8_;
      auVar29 = vperm2f128_avx(auVar85,auVar85,1);
      auVar29 = vshufpd_avx(auVar29,auVar85,4);
      dStack_d0 = auVar93._0_8_;
      dStack_c8 = auVar93._8_8_;
      auVar86._0_8_ = auVar29._0_8_ * auVar236._0_8_;
      auVar86._8_8_ = auVar29._8_8_ * auVar236._8_8_;
      auVar86._16_8_ = auVar29._16_8_ * dStack_d0;
      auVar86._24_8_ = auVar29._24_8_ * dStack_c8;
      auVar120._0_8_ = auVar43._0_8_ * auVar107._0_8_;
      auVar120._8_8_ = auVar43._8_8_ * auVar107._8_8_;
      auVar120._16_8_ = auVar231._0_8_ * auVar107._16_8_;
      auVar120._24_8_ = auVar231._8_8_ * auVar107._24_8_;
      auVar29 = vsubpd_avx(auVar86,auVar120);
      auVar121._16_16_ = auVar29._0_16_;
      auVar121._0_16_ = auVar29._0_16_;
      auVar29 = vshufpd_avx(auVar121,ZEXT1632(auVar29._16_16_),1);
      auVar17._0_8_ =
           *(double *)param_2[2] + auVar154._0_8_ + dVar45 * auVar107._0_8_ + auVar29._0_8_;
      auVar17._8_8_ =
           *(double *)(param_2[2] + 8) + auVar154._8_8_ + dVar45 * auVar107._8_8_ + auVar29._8_8_;
      auVar32._16_8_ =
           *(double *)param_2[3] + auVar170._16_8_ + dVar45 * auVar107._16_8_ + auVar29._16_8_;
      auVar32._0_16_ = auVar17;
      auVar32._24_8_ = auVar170._24_8_ + dVar45 * auVar107._24_8_ + auVar29._24_8_ + 0.0;
      auVar43 = vshufpd_avx(auVar17,auVar17,1);
      auVar42 = auVar32._16_16_;
    }
    else {
      auVar44._0_8_ = auVar240._0_8_ + auVar240._0_8_;
      auVar44._8_8_ = auVar240._8_8_ + auVar240._8_8_;
      auVar74._16_8_ = auVar240._16_8_ + auVar240._16_8_;
      auVar74._0_16_ = auVar44;
      auVar74._24_8_ = auVar240._24_8_ + auVar240._24_8_;
      auVar96._0_8_ = auVar240._0_8_ * auVar44._0_8_;
      auVar96._8_8_ = auVar240._8_8_ * auVar44._8_8_;
      auVar113._16_8_ = auVar240._16_8_ * auVar74._16_8_;
      auVar113._0_16_ = auVar96;
      auVar113._24_8_ = auVar240._24_8_ * auVar74._24_8_;
      auVar93 = vshufpd_avx(auVar96,auVar96,1);
      auVar107 = vperm2f128_avx(auVar113,auVar113,1);
      auVar107 = vshufpd_avx(auVar107,auVar107,4);
      auVar114._0_8_ = auVar93._0_8_ + auVar107._0_8_;
      auVar114._8_8_ = auVar93._8_8_ + auVar107._8_8_;
      auVar114._16_8_ = auVar96._0_8_ + auVar107._16_8_;
      auVar114._24_8_ = auVar96._8_8_ + auVar107._24_8_;
      auVar66 = vsubpd_avx(auVar220,auVar114);
      auVar29 = vperm2f128_avx(auVar74,auVar74,1);
      auVar107 = vshufpd_avx(auVar74,auVar29,1);
      auVar166._0_8_ = auVar240._0_8_ * auVar107._0_8_;
      auVar166._8_8_ = auVar240._8_8_ * auVar107._8_8_;
      auVar166._16_8_ = auVar240._0_8_ * auVar107._16_8_;
      auVar166._24_8_ = auVar240._0_8_ * auVar107._24_8_;
      auVar107 = vperm2f128_avx(auVar240,auVar240,0x11);
      auVar107 = vshufpd_avx(auVar107,auVar107,0xf);
      auVar75._16_16_ = auVar44;
      auVar75._0_16_ = auVar44;
      auVar29 = vshufpd_avx(auVar29,auVar75,4);
      auVar76._0_8_ = auVar107._0_8_ * auVar29._0_8_;
      auVar76._8_8_ = auVar107._8_8_ * auVar29._8_8_;
      auVar76._16_8_ = auVar107._16_8_ * auVar29._16_8_;
      auVar76._24_8_ = auVar107._24_8_ * auVar29._24_8_;
      auVar182._0_8_ = auVar166._0_8_ + auVar76._0_8_;
      auVar182._8_8_ = auVar166._8_8_ + auVar76._8_8_;
      auVar197._16_8_ = auVar166._16_8_ + auVar76._16_8_;
      auVar197._0_16_ = auVar182;
      auVar197._24_8_ = auVar166._24_8_ + auVar76._24_8_;
      auVar107 = vsubpd_avx(auVar166,auVar76);
      local_160 = vunpcklpd_avx(auVar66._0_16_,auVar182);
      local_150[0] = (double)vmovlps_avx(auVar107._16_16_);
      local_150[1] = 0.0;
      local_140 = vblendpd_avx(auVar66._0_16_,auVar107._0_16_,1);
      local_130 = vmovhpd_avx(auVar182);
      local_128 = 0;
      local_120 = vblendpd_avx(auVar107._0_16_,auVar197._16_16_,1);
      local_110 = vmovlps_avx(auVar66._16_16_);
      local_108 = 0;
      local_f0 = vmovlpd_avx(auVar236);
      local_e8 = 0x3ff0000000000000;
      auVar93 = *param_2;
      auVar231 = param_2[2];
      uVar1 = *(undefined8 *)param_2[1];
      auVar51._8_8_ = uVar1;
      auVar51._0_8_ = uVar1;
      auVar77._16_8_ = uVar1;
      auVar77._0_16_ = auVar51;
      auVar77._24_8_ = uVar1;
      dVar88 = *(double *)(param_2[1] + 8);
      auVar127._8_8_ = dVar88;
      auVar127._0_8_ = dVar88;
      auVar107 = vblendpd_avx(ZEXT1632(auVar93),auVar77,4);
      auVar236 = vunpcklpd_avx(auVar51,auVar127);
      dVar89 = auVar93._0_8_;
      auVar183._0_8_ = dVar89 + dVar89;
      dVar90 = auVar93._8_8_;
      auVar183._8_8_ = dVar90 + dVar90;
      auVar198._16_8_ = auVar236._0_8_ + auVar236._0_8_;
      auVar198._0_16_ = auVar183;
      auVar198._24_8_ = auVar236._8_8_ + auVar236._8_8_;
      auVar52._0_8_ = auVar107._0_8_ * auVar183._0_8_;
      auVar52._8_8_ = auVar107._8_8_ * auVar183._8_8_;
      auVar78._16_8_ = auVar107._16_8_ * auVar198._16_8_;
      auVar78._0_16_ = auVar52;
      auVar78._24_8_ = auVar107._24_8_ * auVar198._24_8_;
      auVar93 = vshufpd_avx(auVar52,auVar52,1);
      auVar107 = vperm2f128_avx(auVar78,auVar78,1);
      auVar107 = vshufpd_avx(auVar107,auVar107,4);
      auVar79._0_8_ = auVar93._0_8_ + auVar107._0_8_;
      auVar79._8_8_ = auVar93._8_8_ + auVar107._8_8_;
      auVar79._16_8_ = auVar52._0_8_ + auVar107._16_8_;
      auVar79._24_8_ = auVar52._8_8_ + auVar107._24_8_;
      auVar107 = vsubpd_avx(auVar220,auVar79);
      auVar93 = vunpcklpd_avx(local_180,auVar12);
      auVar167._16_8_ = dVar45;
      auVar167._0_16_ = auVar93;
      auVar167._24_8_ = 0;
      auVar53._0_8_ = auVar93._0_8_ * auVar107._0_8_;
      auVar53._8_8_ = auVar93._8_8_ * auVar107._8_8_;
      auVar80._16_8_ = dVar45 * auVar107._16_8_;
      auVar80._0_16_ = auVar53;
      auVar80._24_8_ = auVar107._24_8_ * 0.0;
      auVar29 = vperm2f128_avx(auVar198,auVar198,1);
      auVar107 = vshufpd_avx(auVar198,auVar29,1);
      auVar115._0_8_ = auVar107._0_8_ * dVar89;
      auVar115._8_8_ = auVar107._8_8_ * dVar90;
      auVar115._16_8_ = auVar107._16_8_ * *(double *)*param_2;
      auVar115._24_8_ = auVar107._24_8_ * *(double *)*param_2;
      auVar199._16_16_ = auVar183;
      auVar199._0_16_ = auVar183;
      auVar107 = vshufpd_avx(auVar29,auVar199,4);
      auVar139._0_8_ = dVar88 * auVar107._0_8_;
      auVar139._8_8_ = dVar88 * auVar107._8_8_;
      auVar139._16_8_ = dVar88 * auVar107._16_8_;
      auVar139._24_8_ = dVar88 * auVar107._24_8_;
      auVar184._0_8_ = auVar93._0_8_ * (auVar115._0_8_ + auVar139._0_8_);
      auVar184._8_8_ = auVar93._8_8_ * (auVar115._8_8_ + auVar139._8_8_);
      auVar200._16_8_ = dVar45 * (auVar115._16_8_ + auVar139._16_8_);
      auVar200._0_16_ = auVar184;
      auVar200._24_8_ = (auVar115._24_8_ + auVar139._24_8_) * 0.0;
      auVar29 = vsubpd_avx(auVar115,auVar139);
      auVar93 = vunpcklpd_avx(auVar12,local_e0);
      uVar1 = *(undefined8 *)(param_2[5] + 8);
      auVar215._8_8_ = uVar1;
      auVar215._0_8_ = uVar1;
      auVar215._16_8_ = uVar1;
      auVar215._24_8_ = uVar1;
      auVar107 = vblendpd_avx(auVar167,auVar215,8);
      local_180._0_8_ =
           auVar107._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
      local_180._8_8_ = auVar107._8_8_ * _UNK_150b54508;
      register0x00001310 = auVar107._16_8_ * _UNK_150b54510;
      register0x00001318 = auVar107._24_8_ * _UNK_150b54518;
      auVar128._0_8_ = auVar29._0_8_ * auVar93._0_8_;
      auVar128._8_8_ = auVar29._8_8_ * auVar93._8_8_;
      auVar140._16_8_ = auVar29._16_8_ * *(double *)param_2[4];
      auVar140._0_16_ = auVar128;
      auVar140._24_8_ = auVar29._24_8_ * 0.0;
      local_1b0 = vshufpd_avx(local_180,local_180,1);
      auVar150._8_8_ = 0;
      auVar150._0_8_ = *(ulonglong *)param_2[3];
      auVar93 = CONCAT88(auVar184._0_8_,auVar184._0_8_);
      auVar107 = vblendpd_avx(ZEXT1632(auVar53),ZEXT1632(auVar93),2);
      auVar107 = vblendpd_avx(auVar107,auVar140,4);
      auVar29 = vblendpd_avx(ZEXT1632(auVar200._16_16_),auVar140,2);
      auVar29 = vblendpd_avx(auVar29,auVar80,4);
      auVar141._16_16_ = auVar184;
      auVar141._0_16_ = auVar128;
      auVar66 = vshufpd_avx(auVar141,ZEXT1632(auVar53),0xe);
      auVar93 = vmovhpd_avx(auVar150,__real_3ff0000000000000);
      lVar6 = 0x18;
      do {
        dVar45 = *(double *)(local_180 + lVar6 + 8);
        dVar88 = *(double *)(auStack_170 + lVar6 + 8);
        dVar89 = *(double *)(local_180 + lVar6 + 0x10);
        dVar90 = *(double *)(local_160 + lVar6);
        *(double *)((longlong)adStack_258 + lVar6) =
             auVar107._0_8_ * dVar45 + auVar29._0_8_ * dVar88 + auVar66._0_8_ * dVar89 +
             auVar231._0_8_ * dVar90;
        *(double *)((longlong)adStack_258 + lVar6 + 8) =
             auVar107._8_8_ * dVar45 + auVar29._8_8_ * dVar88 + auVar66._8_8_ * dVar89 +
             auVar231._8_8_ * dVar90;
        *(double *)((longlong)adStack_258 + lVar6 + 0x10) =
             auVar107._16_8_ * dVar45 + auVar29._16_8_ * dVar88 + auVar66._16_8_ * dVar89 +
             auVar93._0_8_ * dVar90;
        *(double *)(local_240 + lVar6) =
             auVar107._24_8_ * dVar45 + auVar29._24_8_ * dVar88 + auVar66._24_8_ * dVar89 +
             auVar93._8_8_ * dVar90;
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != 0x98);
      dVar45 = (double)local_240 * (double)local_240 + adStack_238[0] * adStack_238[0] +
               adStack_238[1] * adStack_238[1];
      dVar88 = (double)local_220._0_8_ * (double)local_220._0_8_ +
               (double)local_220._8_8_ * (double)local_220._8_8_ + local_210 * local_210;
      auVar232 = ZEXT816(0) << 0x40;
      dVar89 = __real_3ff0000000000000;
      if (0.0 <= dVar45 + __real_be45798ee2308c3a) {
        dVar89 = __real_3ff0000000000000 / SQRT(dVar45);
      }
      dVar45 = local_1f0 * local_1f0 +
               (double)local_200._0_8_ * (double)local_200._0_8_ +
               (double)local_200._8_8_ * (double)local_200._8_8_;
      dVar90 = __real_3ff0000000000000;
      if (0.0 <= dVar88 + __real_be45798ee2308c3a) {
        dVar90 = __real_3ff0000000000000 / SQRT(dVar88);
      }
      local_e0 = local_180._16_16_;
      dVar88 = __real_3ff0000000000000;
      if (0.0 <= dVar45 + __real_be45798ee2308c3a) {
        dVar88 = __real_3ff0000000000000 / SQRT(dVar45);
      }
      auVar224._8_8_ = 0;
      auVar224._0_8_ = (double)local_240 * dVar89;
      auVar238._8_8_ = 0;
      auVar238._0_8_ = adStack_238[0] * dVar89;
      auVar236 = vunpcklpd_avx(auVar224,auVar238);
      auVar97._8_8_ = 0;
      auVar97._0_8_ = (double)local_220._0_8_ * dVar90;
      auVar239._8_8_ = 0;
      auVar239._0_8_ = (double)local_220._8_8_ * dVar90;
      auVar7 = vunpcklpd_avx(auVar97,auVar239);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar88 * (double)local_200._8_8_;
      auVar98._8_8_ = 0;
      auVar98._0_8_ = dVar88 * (double)local_200._0_8_;
      auVar46 = vunpcklpd_avx(auVar98,auVar11);
      auVar12 = ZEXT816(0);
      auVar107 = vcmppd_avx(ZEXT1632(auVar12),_local_180,2);
      auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
      auVar231 = vpshufd_avx(auVar93,0x50);
      auVar93 = vpshufd_avx(auVar93,0xfa);
      auVar116._16_16_ = auVar93;
      auVar116._0_16_ = auVar231;
      auVar107 = vcmpps_avx(ZEXT1632(auVar12),ZEXT1632(auVar12),0xf);
      auVar107 = vblendvps_avx(ZEXT1632(auVar12),auVar107,auVar116);
      auVar213._0_4_ =
           auVar107._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000
           ^ ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar213._4_4_ = auVar107._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
      auVar213._8_4_ = auVar107._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
      auVar213._12_4_ = auVar107._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
      auVar216._16_4_ = auVar107._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
      auVar216._0_16_ = auVar213;
      auVar216._20_4_ = auVar107._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
      auVar216._24_4_ = auVar107._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
      auVar216._28_4_ = auVar107._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
      auVar93 = vshufps_avx(auVar213,auVar213,0x44);
      local_240 = (undefined1  [8])(auVar236._0_8_ * auVar93._0_8_);
      adStack_238[0] = auVar236._8_8_ * auVar93._8_8_;
      auVar117._16_8_ = dVar89 * adStack_238[1] * auVar93._0_8_;
      auVar117._0_16_ = _local_240;
      auVar117._24_8_ = auVar93._8_8_ * 0.0;
      adStack_238[1] = (double)vmovlpd_avx(auVar117._16_16_);
      auVar93 = vshufps_avx(auVar213,auVar213,0xee);
      local_220._0_8_ = auVar93._0_8_ * auVar7._0_8_;
      local_220._8_8_ = auVar93._8_8_ * auVar7._8_8_;
      auVar30._16_8_ = auVar93._0_8_ * dVar90 * local_210;
      auVar30._0_16_ = local_220;
      auVar30._24_8_ = auVar93._8_8_ * 0.0;
      local_210 = (double)vmovlpd_avx(auVar30._16_16_);
      auVar107 = vperm2f128_avx(auVar216,auVar216,0x11);
      local_200._0_8_ = auVar107._0_8_ * auVar46._0_8_;
      local_200._8_8_ = auVar107._0_8_ * auVar46._8_8_;
      auVar168._16_8_ = auVar107._16_8_ * local_1f0 * dVar88;
      auVar168._0_16_ = local_200;
      auVar168._24_8_ = auVar107._16_8_ * 0.0;
      auVar107 = vblendpd_avx(auVar117,
                              ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                              ,8);
      auVar217._0_8_ =
           auVar107._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar217._8_8_ = auVar107._8_8_ & _UNK_150aa8f48;
      auVar217._16_8_ = auVar107._16_8_ & _UNK_150aa8f50;
      auVar217._24_8_ = auVar107._24_8_ & _UNK_150aa8f58;
      auVar107 = vcmppd_avx(auVar217,
                            ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,
                            6);
      local_1f0 = (double)vmovlpd_avx(auVar168._16_16_);
      auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
      if ((((SUB161(auVar93 >> 0x1f,0) & 1) == 0 && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar93 >> 0x5f,0) & 1) == 0) && -1 < auVar93[0xf]) {
        auVar103 = SUB6416(ZEXT864(0),0) << 0x40;
        auVar60 = ZEXT816(0) << 0x40;
        auVar155._8_8_ = 0;
        auVar155._0_8_ = __real_3ff0000000000000;
      }
      else {
        auVar107 = vblendpd_avx(auVar30,
                                ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                                ,8);
        auVar218._0_8_ =
             auVar107._0_8_ &
             ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
        auVar218._8_8_ = auVar107._8_8_ & _UNK_150aa8f48;
        auVar218._16_8_ = auVar107._16_8_ & _UNK_150aa8f50;
        auVar218._24_8_ = auVar107._24_8_ & _UNK_150aa8f58;
        auVar107 = vcmppd_avx(auVar218,
                              ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d
                              ,6);
        auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
        if ((((SUB161(auVar93 >> 0x1f,0) & 1) == 0 && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar93 >> 0x5f,0) & 1) == 0) && -1 < auVar93[0xf]) {
          auVar103 = SUB6416(ZEXT864(0),0) << 0x40;
          auVar60 = ZEXT816(0) << 0x40;
          auVar155._8_8_ = 0;
          auVar155._0_8_ = __real_3ff0000000000000;
        }
        else {
          auVar107 = vblendpd_avx(auVar168,
                                  ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                                  ,8);
          auVar219._0_8_ =
               auVar107._0_8_ &
               ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
          auVar219._8_8_ = auVar107._8_8_ & _UNK_150aa8f48;
          auVar219._16_8_ = auVar107._16_8_ & _UNK_150aa8f50;
          auVar219._24_8_ = auVar107._24_8_ & _UNK_150aa8f58;
          auVar107 = vcmppd_avx(auVar219,
                                ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d
                                ,6);
          auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
          if ((((SUB161(auVar93 >> 0x1f,0) & 1) == 0 && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar93 >> 0x5f,0) & 1) == 0) && -1 < auVar93[0xf]) {
            auVar103 = SUB6416(ZEXT864(0),0) << 0x40;
            auVar60 = SUB6416(ZEXT864(0),0) << 0x40;
            dVar45 = __real_3ff0000000000000;
          }
          else {
            auVar93 = vshufpd_avx(local_220,local_220,1);
            dVar45 = auVar168._16_8_ + auVar93._0_8_ + (double)local_240;
            if (dVar45 <= 0.0) {
              bVar4 = (double)local_240 < auVar93._0_8_;
              uVar91 = 2;
              if (auVar168._16_8_ <= *(double *)(local_240 + ((uint)bVar4 * 0x20 + (uint)bVar4 * 8))
                 ) {
                uVar91 = (ulonglong)bVar4;
              }
              iVar2 = *(int *)(&DAT_151c6d0a0 + uVar91 * 4);
              lVar6 = (longlong)iVar2;
              iVar3 = *(int *)(&DAT_151c6d0a0 + lVar6 * 4);
              iVar5 = (int)uVar91;
              dVar88 = __real_3ff0000000000000 /
                       SQRT(((*(double *)(local_240 + (uint)(iVar5 * 0x28)) -
                             *(double *)(local_240 + lVar6 * 0x28)) -
                            *(double *)(local_240 + (longlong)iVar3 * 0x28)) +
                            __real_3ff0000000000000);
              dVar45 = dVar88 * __real_3fe0000000000000;
              *(double *)((longlong)local_1a0 + (ulonglong)(uint)(iVar5 * 8)) =
                   (__real_3ff0000000000000 / dVar88) * __real_3fe0000000000000;
              local_1a0[lVar6] =
                   (*(double *)(local_240 + (longlong)(iVar2 + iVar5 * 4) * 8) +
                   *(double *)(local_240 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar45;
              local_1a0[iVar3] =
                   dVar45 * (*(double *)(local_240 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                            *(double *)(local_240 + (longlong)(iVar5 + iVar3 * 4) * 8));
              dVar45 = dVar45 * (*(double *)(local_240 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                                *(double *)(local_240 + (longlong)(iVar2 + iVar3 * 4) * 8));
            }
            else {
              auVar93 = vshufpd_avx(_local_240,_local_240,1);
              auVar231 = vshufpd_avx(local_200,local_200,1);
              dVar88 = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + dVar45);
              dVar45 = __real_3fe0000000000000 * dVar88;
              local_1a0[0] = dVar45 * (auVar30._16_8_ - auVar231._0_8_);
              local_1a0[1] = dVar45 * ((double)local_200._0_8_ - auVar117._16_8_);
              local_1a0[2] = dVar45 * (auVar93._0_8_ - (double)local_220._0_8_);
              dVar45 = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar88);
            }
            auVar232._8_8_ = 0;
            auVar232._0_8_ = local_1a0[2];
            auVar103._8_8_ = 0;
            auVar103._0_8_ = local_1a0[0];
            auVar60._8_8_ = 0;
            auVar60._0_8_ = local_1a0[1];
          }
          auVar155._8_8_ = 0;
          auVar155._0_8_ = dVar45;
        }
      }
      auVar93 = vunpcklpd_avx(auVar232,auVar155);
      auVar231 = vunpcklpd_avx(auVar103,auVar60);
      dVar88 = auVar93._0_8_;
      dVar90 = auVar93._8_8_;
      dVar89 = auVar231._0_8_;
      dVar148 = auVar231._8_8_;
      auVar23._0_8_ = dVar89 * dVar89 + dVar88 * dVar88;
      auVar23._8_8_ = dVar148 * dVar148 + dVar90 * dVar90;
      auVar93 = vshufpd_avx(auVar23,auVar23,1);
      dVar45 = auVar23._0_8_ + auVar93._0_8_;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = __real_3e45798ee2308c3a;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar45;
      auVar93 = vcmpsd_avx(auVar61,auVar24,6);
      uVar91 = ~auVar93._0_8_ & __real_ffffffffffffffff;
      dVar45 = __real_3ff0000000000000 / SQRT(dVar45);
      auVar124._0_8_ =
           ~uVar91 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar124._8_8_ = ~uVar91 & _UNK_150b54548;
      auVar124._16_8_ = ~uVar91 & _UNK_150b54550;
      auVar124._24_8_ = ~uVar91 & _UNK_150b54558;
      auVar226._0_8_ = (double)((ulonglong)(dVar89 * dVar45) & uVar91);
      auVar226._8_8_ = (double)((ulonglong)(dVar148 * dVar45) & uVar91);
      auVar230._16_8_ = (ulonglong)(dVar88 * dVar45) & uVar91;
      auVar230._0_16_ = auVar226;
      auVar230._24_8_ = (ulonglong)(dVar90 * dVar45) & uVar91;
      auVar44 = auVar230._16_16_ | auVar124._16_16_;
      auVar7 = vshufps_avx(auVar226,auVar226,0x4e);
      auVar93 = vshufps_avx(auVar44,auVar44,0x4e);
      auVar17._8_8_ = 0.0;
      auVar17._0_8_ = (double)uStack_1e0;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = local_1d8;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uStack_1d0;
      auVar12 = local_1b0;
      local_1b0._0_8_ = auVar93._0_8_;
    }
    auVar236 = vunpcklpd_avx(auVar17,auVar43);
    auVar93 = vinsertps_avx(ZEXT416(param_6),ZEXT416(param_7),0x1c);
    auVar93 = vinsertps_avx(auVar93,ZEXT416(param_8),0x28);
    auVar231 = vshufps_avx(ZEXT416((uint)(param_3 * __real_3f000000)),
                           ZEXT416((uint)(param_3 * __real_3f000000)),0);
    auVar25._0_4_ = auVar231._0_4_ * auVar93._0_4_;
    auVar25._4_4_ = auVar231._4_4_ * auVar93._4_4_;
    auVar25._8_4_ = auVar231._8_4_ * auVar93._8_4_;
    auVar25._12_4_ = auVar231._12_4_ * auVar93._12_4_;
    auVar107 = vcvtps2pd_avx(auVar25);
    auVar93 = vunpcklpd_avx(auVar226,auVar7);
    auVar158._8_8_ = local_1b0._0_8_;
    auVar158._0_8_ = local_1b0._0_8_;
    auVar231 = vunpcklpd_avx(auVar44,auVar158);
    dVar45 = auVar93._0_8_;
    auVar188._0_8_ = dVar45 + dVar45;
    dVar88 = auVar93._8_8_;
    auVar188._8_8_ = dVar88 + dVar88;
    auVar207._16_8_ = auVar231._0_8_ + auVar231._0_8_;
    auVar207._0_16_ = auVar188;
    auVar207._24_8_ = auVar231._8_8_ + auVar231._8_8_;
    auVar26._0_8_ = dVar45 * auVar188._0_8_;
    auVar26._8_8_ = dVar88 * auVar188._8_8_;
    auVar36._16_8_ = auVar44._0_8_ * auVar207._16_8_;
    auVar36._0_16_ = auVar26;
    auVar36._24_8_ = auVar44._8_8_ * auVar207._24_8_;
    auVar93 = vshufpd_avx(auVar26,auVar26,1);
    auVar29 = vperm2f128_avx(auVar36,auVar36,1);
    auVar29 = vshufpd_avx(auVar29,auVar29,4);
    auVar37._0_8_ = auVar93._0_8_ + auVar29._0_8_;
    auVar37._8_8_ = auVar93._8_8_ + auVar29._8_8_;
    auVar37._16_8_ = auVar26._0_8_ + auVar29._16_8_;
    auVar37._24_8_ = auVar26._8_8_ + auVar29._24_8_;
    auVar29 = vsubpd_avx(auVar220,auVar37);
    auVar93 = vunpcklpd_avx(local_180,auVar12);
    auVar27._0_8_ = auVar29._0_8_ * auVar93._0_8_;
    auVar27._8_8_ = auVar29._8_8_ * auVar93._8_8_;
    auVar38._16_8_ = auVar29._16_8_ * local_e0._0_8_;
    auVar38._0_16_ = auVar27;
    auVar38._24_8_ = auVar29._24_8_ * local_e0._8_8_;
    auVar66 = vperm2f128_avx(auVar207,auVar207,1);
    auVar29 = vshufpd_avx(auVar207,auVar66,1);
    auVar234._0_8_ = auVar29._0_8_ * dVar45;
    auVar234._8_8_ = auVar29._8_8_ * dVar88;
    auVar234._16_8_ = auVar29._16_8_ * auVar226._0_8_;
    auVar234._24_8_ = auVar29._24_8_ * auVar226._0_8_;
    auVar146._16_16_ = auVar188;
    auVar146._0_16_ = auVar188;
    auVar29 = vshufpd_avx(auVar66,auVar146,4);
    auVar173._0_8_ = (double)local_1b0._0_8_ * auVar29._0_8_;
    auVar173._8_8_ = (double)local_1b0._0_8_ * auVar29._8_8_;
    auVar173._16_8_ = (double)local_1b0._0_8_ * auVar29._16_8_;
    auVar173._24_8_ = (double)local_1b0._0_8_ * auVar29._24_8_;
    auVar132._0_8_ = (auVar234._0_8_ + auVar173._0_8_) * auVar93._0_8_;
    auVar132._8_8_ = (auVar234._8_8_ + auVar173._8_8_) * auVar93._8_8_;
    auVar147._16_8_ = (auVar234._16_8_ + auVar173._16_8_) * local_e0._0_8_;
    auVar147._0_16_ = auVar132;
    auVar147._24_8_ = (auVar234._24_8_ + auVar173._24_8_) * local_e0._8_8_;
    auVar29 = vsubpd_avx(auVar234,auVar173);
    auVar93 = vunpcklpd_avx(auVar12,local_e0);
    auVar159._0_8_ = auVar29._0_8_ * auVar93._0_8_;
    auVar159._8_8_ = auVar29._8_8_ * auVar93._8_8_;
    auVar174._16_8_ = auVar29._16_8_ * local_180._0_8_;
    auVar174._0_16_ = auVar159;
    auVar174._24_8_ = auVar29._24_8_ * local_180._8_8_;
    auVar29 = vsubpd_avx(auVar107,auVar107);
    auVar189._0_8_ = auVar29._0_8_ * __real_3fe0000000000000;
    auVar189._8_8_ = auVar29._8_8_ * __real_3fe0000000000000;
    auVar208._16_8_ = auVar29._16_8_ * __real_3fe0000000000000;
    auVar208._0_16_ = auVar189;
    auVar208._24_8_ = auVar29._24_8_ * __real_3fe0000000000000;
    auVar104._0_8_ = (auVar107._0_8_ + auVar107._0_8_) * __real_3fe0000000000000;
    auVar104._8_8_ = (auVar107._8_8_ + auVar107._8_8_) * __real_3fe0000000000000;
    auVar123._16_8_ = (auVar107._16_8_ + auVar107._16_8_) * __real_3fe0000000000000;
    auVar123._0_16_ = auVar104;
    auVar123._24_8_ = (auVar107._24_8_ + auVar107._24_8_) * __real_3fe0000000000000;
    auVar93 = CONCAT88(auVar132._0_8_,auVar132._0_8_);
    auVar107 = vblendpd_avx(ZEXT1632(auVar27),ZEXT1632(auVar93),2);
    auVar107 = vblendpd_avx(auVar107,auVar174,4);
    auVar231 = vshufpd_avx(auVar189,auVar189,3);
    auVar235._16_16_ = auVar132;
    auVar235._0_16_ = auVar159;
    auVar66 = vshufpd_avx(auVar235,ZEXT1632(auVar27),0xe);
    auVar63 = vperm2f128_avx(auVar208,auVar208,0x11);
    auVar29 = vblendpd_avx(ZEXT1632(auVar147._16_16_),auVar174,2);
    auVar29 = vblendpd_avx(auVar29,auVar38,4);
    auVar93 = vmovhpd_avx(auVar42,__real_3ff0000000000000);
    auVar87._0_8_ =
         auVar236._0_8_ +
         auVar63._0_8_ * auVar29._0_8_ +
         auVar231._0_8_ * auVar66._0_8_ + auVar189._0_8_ * auVar107._0_8_;
    auVar87._8_8_ =
         auVar236._8_8_ +
         auVar63._0_8_ * auVar29._8_8_ +
         auVar231._8_8_ * auVar66._8_8_ + auVar189._0_8_ * auVar107._8_8_;
    auVar87._16_8_ =
         auVar93._0_8_ +
         auVar63._16_8_ * auVar29._16_8_ +
         auVar231._0_8_ * auVar66._16_8_ + auVar189._0_8_ * auVar107._16_8_;
    auVar87._24_8_ =
         auVar93._8_8_ +
         auVar63._16_8_ * auVar29._24_8_ +
         auVar231._8_8_ * auVar66._24_8_ + auVar189._0_8_ * auVar107._24_8_;
    auVar93 = vshufpd_avx(auVar104,auVar104,3);
    dVar45 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar104._0_8_ * auVar107._0_8_)) +
             (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._0_8_ * auVar93._0_8_));
    dVar88 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar104._0_8_ * auVar107._8_8_)) +
             (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._8_8_ * auVar93._8_8_));
    dVar89 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar104._0_8_ * auVar107._16_8_)) +
             (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._16_8_ * auVar93._0_8_));
    dVar90 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar104._0_8_ * auVar107._24_8_)) +
             (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._24_8_ * auVar93._8_8_));
    goto LAB_140c811aa;
  }
  local_180._8_8_ = 0.0;
  local_180._0_8_ = *(double *)param_2[4];
  local_1b0._8_8_ = 0;
  local_1b0._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar45 = *(double *)param_2[5];
  local_e0._8_8_ = 0;
  local_e0._0_8_ = dVar45;
  auVar107 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar160,1);
  auVar93 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
  auVar93 = vpackssdw_avx(auVar93,(undefined1  [16])0x0);
  local_c0 = SUB3216(*param_9,0x10);
  auVar231 = vpackssdw_avx(auVar12,local_c0);
  auVar93 = vpand_avx(auVar93,auVar231);
  if ((((((((SUB161(auVar93 >> 0xf,0) & 1) == 0 && (SUB161(auVar93 >> 0x1f,0) & 1) == 0) &&
          (SUB161(auVar93 >> 0x2f,0) & 1) == 0) && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar93 >> 0x4f,0) & 1) == 0) && (SUB161(auVar93 >> 0x5f,0) & 1) == 0) &&
      (SUB161(auVar93 >> 0x6f,0) & 1) == 0) && -1 < auVar93[0xf]) {
    auVar151._8_8_ = 0;
    auVar151._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar45 = *(double *)(param_2[1] + 8);
    auVar13._8_8_ = dVar45;
    auVar13._0_8_ = dVar45;
    dVar88 = *(double *)*param_2;
    auVar54._8_8_ = dVar88;
    auVar54._0_8_ = dVar88;
    auVar66 = vperm2f128_avx(auVar240,auVar240,1);
    auVar107 = vshufpd_avx(auVar66,auVar66,5);
    dVar89 = *(double *)(*param_2 + 8);
    auVar99._8_8_ = dVar89;
    auVar99._0_8_ = dVar89;
    dVar90 = *(double *)param_2[1];
    auVar129._8_8_ = dVar90;
    auVar129._0_8_ = dVar90;
    auVar29 = vshufpd_avx(auVar240,auVar240,5);
    auVar225._0_8_ =
         auVar29._0_8_ * dVar90 *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         auVar66._0_8_ * dVar89 *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
         auVar240._0_8_ * dVar45 +
         auVar107._0_8_ * dVar88 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
    auVar225._8_8_ =
         auVar29._8_8_ * dVar90 * _UNK_150b54428 +
         auVar66._8_8_ * dVar89 * _UNK_150b54408 +
         auVar240._8_8_ * dVar45 + auVar107._8_8_ * dVar88 * _UNK_150b543e8;
    auVar227._16_8_ =
         auVar29._16_8_ * dVar90 * _UNK_150b54430 +
         auVar66._16_8_ * dVar89 * _UNK_150b54410 +
         auVar240._16_8_ * dVar45 + auVar107._16_8_ * dVar88 * _UNK_150b543f0;
    auVar227._0_16_ = auVar225;
    auVar227._24_8_ =
         auVar29._24_8_ * dVar90 * _UNK_150b54438 +
         auVar66._24_8_ * dVar89 * _UNK_150b54418 +
         auVar240._24_8_ * dVar45 + auVar107._24_8_ * dVar88 * _UNK_150b543f8;
    auVar7 = vshufpd_avx(auVar225,auVar225,1);
    auVar43 = auVar227._16_16_;
    auVar93 = vshufpd_avx(auVar43,auVar43,1);
    dVar88 = auVar93._0_8_;
    auVar93 = vunpcklpd_avx(local_e0,auVar151);
    auVar231 = vunpcklpd_avx(local_180,local_1b0);
    auVar152._0_8_ = local_100._0_8_ * auVar231._0_8_;
    auVar152._8_8_ = local_100._8_8_ * auVar231._8_8_;
    auVar169._16_8_ = auVar236._0_8_ * auVar93._0_8_;
    auVar169._0_16_ = auVar152;
    auVar169._24_8_ = auVar93._8_8_ * 0.0;
    auVar201._16_16_ = auVar152;
    auVar201._0_16_ = auVar152;
    auVar107 = vperm2f128_avx(auVar169,auVar169,0x11);
    auVar107 = vshufpd_avx(auVar201,auVar107,9);
    auVar236 = vunpcklpd_avx(auVar54,auVar99);
    auVar93 = vblendpd_avx(auVar54,auVar129,1);
    auVar231 = vunpcklpd_avx(auVar129,auVar13);
    auVar222._8_8_ = __real_3ff0000000000000;
    auVar222._0_8_ = __real_3ff0000000000000;
    auVar222._16_8_ = __real_3ff0000000000000;
    auVar222._24_8_ = __real_3ff0000000000000;
    auVar202._0_8_ = auVar107._0_8_ * auVar236._0_8_;
    auVar202._8_8_ = auVar107._8_8_ * auVar236._8_8_;
    auVar202._16_8_ = auVar107._16_8_ * auVar231._0_8_;
    auVar202._24_8_ = auVar107._24_8_ * auVar231._8_8_;
    auVar46 = vunpcklpd_avx(auVar99,auVar129);
    auVar231 = vblendpd_avx(auVar99,auVar54,1);
    auVar12 = vunpcklpd_avx(auVar54,auVar13);
    auVar81._0_8_ = auVar152._0_8_ * auVar46._0_8_;
    auVar81._8_8_ = auVar152._8_8_ * auVar46._8_8_;
    auVar81._16_8_ = auVar169._16_8_ * auVar12._0_8_;
    auVar81._24_8_ = auVar169._24_8_ * auVar12._8_8_;
    auVar107 = vsubpd_avx(auVar202,auVar81);
    auVar55._0_8_ = auVar107._0_8_ + auVar107._0_8_;
    auVar55._8_8_ = auVar107._8_8_ + auVar107._8_8_;
    auVar82._16_8_ = auVar107._16_8_ + auVar107._16_8_;
    auVar82._0_16_ = auVar55;
    auVar82._24_8_ = auVar107._24_8_ + auVar107._24_8_;
    auVar142._16_16_ = auVar55;
    auVar142._0_16_ = auVar55;
    auVar107 = vshufpd_avx(auVar142,ZEXT1632(auVar82._16_16_),1);
    auVar29 = vperm2f128_avx(auVar82,auVar82,1);
    auVar29 = vshufpd_avx(auVar29,auVar82,4);
    auVar83._0_8_ = auVar236._0_8_ * auVar29._0_8_;
    auVar83._8_8_ = auVar236._8_8_ * auVar29._8_8_;
    auVar83._16_8_ = auVar93._0_8_ * auVar29._16_8_;
    auVar83._24_8_ = auVar93._8_8_ * auVar29._24_8_;
    auVar118._0_8_ = auVar46._0_8_ * auVar107._0_8_;
    auVar118._8_8_ = auVar46._8_8_ * auVar107._8_8_;
    auVar118._16_8_ = auVar231._0_8_ * auVar107._16_8_;
    auVar118._24_8_ = auVar231._8_8_ * auVar107._24_8_;
    auVar29 = vsubpd_avx(auVar83,auVar118);
    auVar119._16_16_ = auVar29._0_16_;
    auVar119._0_16_ = auVar29._0_16_;
    auVar29 = vshufpd_avx(auVar119,ZEXT1632(auVar29._16_16_),1);
    auVar14._0_8_ = *(double *)param_2[2] + auVar152._0_8_ + dVar45 * auVar107._0_8_ + auVar29._0_8_
    ;
    auVar14._8_8_ =
         *(double *)(param_2[2] + 8) + auVar152._8_8_ + dVar45 * auVar107._8_8_ + auVar29._8_8_;
    auVar31._16_8_ =
         *(double *)param_2[3] + auVar169._16_8_ + dVar45 * auVar107._16_8_ + auVar29._16_8_;
    auVar31._0_16_ = auVar14;
    auVar31._24_8_ = auVar169._24_8_ + dVar45 * auVar107._24_8_ + auVar29._24_8_ + 0.0;
    auVar59 = vshufpd_avx(auVar14,auVar14,1);
    auVar41 = auVar31._16_16_;
  }
  else {
    auVar47._0_8_ = auVar240._0_8_ + auVar240._0_8_;
    auVar47._8_8_ = auVar240._8_8_ + auVar240._8_8_;
    auVar67._16_8_ = auVar240._16_8_ + auVar240._16_8_;
    auVar67._0_16_ = auVar47;
    auVar67._24_8_ = auVar240._24_8_ + auVar240._24_8_;
    auVar92._0_8_ = auVar240._0_8_ * auVar47._0_8_;
    auVar92._8_8_ = auVar240._8_8_ * auVar47._8_8_;
    auVar109._16_8_ = auVar240._16_8_ * auVar67._16_8_;
    auVar109._0_16_ = auVar92;
    auVar109._24_8_ = auVar240._24_8_ * auVar67._24_8_;
    auVar93 = vshufpd_avx(auVar92,auVar92,1);
    auVar107 = vperm2f128_avx(auVar109,auVar109,1);
    auVar107 = vshufpd_avx(auVar107,auVar107,4);
    auVar110._0_8_ = auVar93._0_8_ + auVar107._0_8_;
    auVar110._8_8_ = auVar93._8_8_ + auVar107._8_8_;
    auVar110._16_8_ = auVar92._0_8_ + auVar107._16_8_;
    auVar110._24_8_ = auVar92._8_8_ + auVar107._24_8_;
    auVar66 = vsubpd_avx(auVar220,auVar110);
    auVar29 = vperm2f128_avx(auVar67,auVar67,1);
    auVar107 = vshufpd_avx(auVar67,auVar29,1);
    auVar164._0_8_ = auVar240._0_8_ * auVar107._0_8_;
    auVar164._8_8_ = auVar240._8_8_ * auVar107._8_8_;
    auVar164._16_8_ = auVar240._0_8_ * auVar107._16_8_;
    auVar164._24_8_ = auVar240._0_8_ * auVar107._24_8_;
    auVar107 = vperm2f128_avx(auVar240,auVar240,0x11);
    auVar107 = vshufpd_avx(auVar107,auVar107,0xf);
    auVar68._16_16_ = auVar47;
    auVar68._0_16_ = auVar47;
    auVar29 = vshufpd_avx(auVar29,auVar68,4);
    auVar69._0_8_ = auVar107._0_8_ * auVar29._0_8_;
    auVar69._8_8_ = auVar107._8_8_ * auVar29._8_8_;
    auVar69._16_8_ = auVar107._16_8_ * auVar29._16_8_;
    auVar69._24_8_ = auVar107._24_8_ * auVar29._24_8_;
    auVar178._0_8_ = auVar164._0_8_ + auVar69._0_8_;
    auVar178._8_8_ = auVar164._8_8_ + auVar69._8_8_;
    auVar191._16_8_ = auVar164._16_8_ + auVar69._16_8_;
    auVar191._0_16_ = auVar178;
    auVar191._24_8_ = auVar164._24_8_ + auVar69._24_8_;
    auVar107 = vsubpd_avx(auVar164,auVar69);
    local_160 = vunpcklpd_avx(auVar66._0_16_,auVar178);
    local_150[0] = (double)vmovlps_avx(auVar107._16_16_);
    local_150[1] = 0.0;
    local_140 = vblendpd_avx(auVar66._0_16_,auVar107._0_16_,1);
    local_130 = vmovhpd_avx(auVar178);
    local_128 = 0;
    local_120 = vblendpd_avx(auVar107._0_16_,auVar191._16_16_,1);
    local_110 = vmovlps_avx(auVar66._16_16_);
    local_108 = 0;
    local_f0 = vmovlpd_avx(auVar236);
    local_e8 = 0x3ff0000000000000;
    auVar93 = *param_2;
    auVar231 = param_2[2];
    uVar1 = *(undefined8 *)param_2[1];
    auVar48._8_8_ = uVar1;
    auVar48._0_8_ = uVar1;
    auVar70._16_8_ = uVar1;
    auVar70._0_16_ = auVar48;
    auVar70._24_8_ = uVar1;
    dVar88 = *(double *)(param_2[1] + 8);
    auVar125._8_8_ = dVar88;
    auVar125._0_8_ = dVar88;
    auVar107 = vblendpd_avx(ZEXT1632(auVar93),auVar70,4);
    auVar236 = vunpcklpd_avx(auVar48,auVar125);
    dVar89 = auVar93._0_8_;
    auVar179._0_8_ = dVar89 + dVar89;
    dVar90 = auVar93._8_8_;
    auVar179._8_8_ = dVar90 + dVar90;
    auVar192._16_8_ = auVar236._0_8_ + auVar236._0_8_;
    auVar192._0_16_ = auVar179;
    auVar192._24_8_ = auVar236._8_8_ + auVar236._8_8_;
    auVar49._0_8_ = auVar107._0_8_ * auVar179._0_8_;
    auVar49._8_8_ = auVar107._8_8_ * auVar179._8_8_;
    auVar71._16_8_ = auVar107._16_8_ * auVar192._16_8_;
    auVar71._0_16_ = auVar49;
    auVar71._24_8_ = auVar107._24_8_ * auVar192._24_8_;
    auVar93 = vshufpd_avx(auVar49,auVar49,1);
    auVar107 = vperm2f128_avx(auVar71,auVar71,1);
    auVar107 = vshufpd_avx(auVar107,auVar107,4);
    auVar72._0_8_ = auVar93._0_8_ + auVar107._0_8_;
    auVar72._8_8_ = auVar93._8_8_ + auVar107._8_8_;
    auVar72._16_8_ = auVar49._0_8_ + auVar107._16_8_;
    auVar72._24_8_ = auVar49._8_8_ + auVar107._24_8_;
    auVar107 = vsubpd_avx(auVar220,auVar72);
    auVar93 = vunpcklpd_avx(local_180,local_1b0);
    auVar165._16_8_ = dVar45;
    auVar165._0_16_ = auVar93;
    auVar165._24_8_ = 0;
    auVar50._0_8_ = auVar93._0_8_ * auVar107._0_8_;
    auVar50._8_8_ = auVar93._8_8_ * auVar107._8_8_;
    auVar73._16_8_ = dVar45 * auVar107._16_8_;
    auVar73._0_16_ = auVar50;
    auVar73._24_8_ = auVar107._24_8_ * 0.0;
    auVar29 = vperm2f128_avx(auVar192,auVar192,1);
    auVar107 = vshufpd_avx(auVar192,auVar29,1);
    auVar111._0_8_ = dVar89 * auVar107._0_8_;
    auVar111._8_8_ = dVar90 * auVar107._8_8_;
    auVar111._16_8_ = *(double *)*param_2 * auVar107._16_8_;
    auVar111._24_8_ = *(double *)*param_2 * auVar107._24_8_;
    auVar193._16_16_ = auVar179;
    auVar193._0_16_ = auVar179;
    auVar107 = vshufpd_avx(auVar29,auVar193,4);
    auVar135._0_8_ = dVar88 * auVar107._0_8_;
    auVar135._8_8_ = dVar88 * auVar107._8_8_;
    auVar135._16_8_ = dVar88 * auVar107._16_8_;
    auVar135._24_8_ = dVar88 * auVar107._24_8_;
    auVar180._0_8_ = auVar93._0_8_ * (auVar111._0_8_ + auVar135._0_8_);
    auVar180._8_8_ = auVar93._8_8_ * (auVar111._8_8_ + auVar135._8_8_);
    auVar194._16_8_ = dVar45 * (auVar111._16_8_ + auVar135._16_8_);
    auVar194._0_16_ = auVar180;
    auVar194._24_8_ = (auVar111._24_8_ + auVar135._24_8_) * 0.0;
    auVar29 = vsubpd_avx(auVar111,auVar135);
    auVar93 = vunpcklpd_avx(local_1b0,local_e0);
    uVar1 = *(undefined8 *)(param_2[5] + 8);
    auVar211._8_8_ = uVar1;
    auVar211._0_8_ = uVar1;
    auVar211._16_8_ = uVar1;
    auVar211._24_8_ = uVar1;
    auVar107 = vblendpd_avx(auVar165,auVar211,8);
    local_180._0_8_ =
         auVar107._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    local_180._8_8_ = auVar107._8_8_ * _UNK_150b54508;
    register0x00001310 = auVar107._16_8_ * _UNK_150b54510;
    register0x00001318 = auVar107._24_8_ * _UNK_150b54518;
    auVar126._0_8_ = auVar29._0_8_ * auVar93._0_8_;
    auVar126._8_8_ = auVar29._8_8_ * auVar93._8_8_;
    auVar136._16_8_ = auVar29._16_8_ * *(double *)param_2[4];
    auVar136._0_16_ = auVar126;
    auVar136._24_8_ = auVar29._24_8_ * 0.0;
    auVar63 = _local_180;
    local_1b0 = vshufpd_avx(local_180,local_180,1);
    auVar149._8_8_ = 0;
    auVar149._0_8_ = *(ulonglong *)param_2[3];
    auVar93 = CONCAT88(auVar180._0_8_,auVar180._0_8_);
    auVar107 = vblendpd_avx(ZEXT1632(auVar50),ZEXT1632(auVar93),2);
    auVar107 = vblendpd_avx(auVar107,auVar136,4);
    auVar29 = vblendpd_avx(ZEXT1632(auVar194._16_16_),auVar136,2);
    auVar29 = vblendpd_avx(auVar29,auVar73,4);
    auVar137._16_16_ = auVar180;
    auVar137._0_16_ = auVar126;
    auVar66 = vshufpd_avx(auVar137,ZEXT1632(auVar50),0xe);
    auVar93 = vmovhpd_avx(auVar149,__real_3ff0000000000000);
    lVar6 = 0x18;
    do {
      dVar45 = *(double *)(local_180 + lVar6 + 8);
      dVar88 = *(double *)(auStack_170 + lVar6 + 8);
      dVar89 = *(double *)(local_180 + lVar6 + 0x10);
      dVar90 = *(double *)(local_160 + lVar6);
      *(double *)((longlong)adStack_258 + lVar6) =
           auVar107._0_8_ * dVar45 + auVar29._0_8_ * dVar88 + auVar66._0_8_ * dVar89 +
           auVar231._0_8_ * dVar90;
      *(double *)((longlong)adStack_258 + lVar6 + 8) =
           auVar107._8_8_ * dVar45 + auVar29._8_8_ * dVar88 + auVar66._8_8_ * dVar89 +
           auVar231._8_8_ * dVar90;
      *(double *)((longlong)adStack_258 + lVar6 + 0x10) =
           auVar107._16_8_ * dVar45 + auVar29._16_8_ * dVar88 + auVar66._16_8_ * dVar89 +
           auVar93._0_8_ * dVar90;
      *(double *)(local_240 + lVar6) =
           auVar107._24_8_ * dVar45 + auVar29._24_8_ * dVar88 + auVar66._24_8_ * dVar89 +
           auVar93._8_8_ * dVar90;
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != 0x98);
    dVar45 = (double)local_240 * (double)local_240 + adStack_238[0] * adStack_238[0] +
             adStack_238[1] * adStack_238[1];
    dVar88 = (double)local_220._0_8_ * (double)local_220._0_8_ +
             (double)local_220._8_8_ * (double)local_220._8_8_ + local_210 * local_210;
    dVar89 = __real_3ff0000000000000;
    if (0.0 <= dVar45 + __real_be45798ee2308c3a) {
      dVar89 = __real_3ff0000000000000 / SQRT(dVar45);
    }
    dVar45 = (double)local_200._0_8_ * (double)local_200._0_8_ +
             (double)local_200._8_8_ * (double)local_200._8_8_ + local_1f0 * local_1f0;
    dVar90 = __real_3ff0000000000000;
    if (0.0 <= dVar88 + __real_be45798ee2308c3a) {
      dVar90 = __real_3ff0000000000000 / SQRT(dVar88);
    }
    local_e0 = auStack_170;
    auVar107 = _local_e0;
    local_e0 = auStack_170;
    auVar237 = ZEXT816(0);
    dVar88 = __real_3ff0000000000000;
    if (0.0 <= dVar45 + __real_be45798ee2308c3a) {
      dVar88 = __real_3ff0000000000000 / SQRT(dVar45);
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_240 * dVar89;
    auVar181._8_8_ = 0;
    auVar181._0_8_ = dVar89 * adStack_238[0];
    auVar236 = vunpcklpd_avx(auVar8,auVar181);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)local_220._0_8_ * dVar90;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = (double)local_220._8_8_ * dVar90;
    auVar7 = vunpcklpd_avx(auVar9,auVar94);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar88 * (double)local_200._0_8_;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = dVar88 * (double)local_200._8_8_;
    auVar46 = vunpcklpd_avx(auVar10,auVar95);
    auVar29 = vcmppd_avx(ZEXT832(0) << 0x40,_local_180,2);
    auVar93 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
    auVar231 = vpshufd_avx(auVar93,0x50);
    auVar93 = vpshufd_avx(auVar93,0xfa);
    auVar221._16_16_ = auVar93;
    auVar221._0_16_ = auVar231;
    auVar29 = vcmpps_avx(ZEXT832(0) << 0x40,ZEXT832(0) << 0x40,0xf);
    auVar29 = vblendvps_avx(ZEXT832(0) << 0x40,auVar29,auVar221);
    auVar212._0_4_ =
         auVar29._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000 ^
         ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar212._4_4_ = auVar29._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
    auVar212._8_4_ = auVar29._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
    auVar212._12_4_ = auVar29._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
    auVar214._16_4_ = auVar29._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
    auVar214._0_16_ = auVar212;
    auVar214._20_4_ = auVar29._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
    auVar214._24_4_ = auVar29._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
    auVar214._28_4_ = auVar29._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
    auVar93 = vshufps_avx(auVar212,auVar212,0x44);
    local_240 = (undefined1  [8])(auVar236._0_8_ * auVar93._0_8_);
    adStack_238[0] = auVar236._8_8_ * auVar93._8_8_;
    auVar242._16_8_ = dVar89 * adStack_238[1] * auVar93._0_8_;
    auVar242._0_16_ = _local_240;
    auVar242._24_8_ = auVar93._8_8_ * 0.0;
    adStack_238[1] = (double)vmovlpd_avx(auVar242._16_16_);
    auVar93 = vshufps_avx(auVar212,auVar212,0xee);
    local_220._0_8_ = auVar93._0_8_ * auVar7._0_8_;
    local_220._8_8_ = auVar93._8_8_ * auVar7._8_8_;
    auVar241._16_8_ = auVar93._0_8_ * dVar90 * local_210;
    auVar241._0_16_ = local_220;
    auVar241._24_8_ = auVar93._8_8_ * 0.0;
    local_210 = (double)vmovlpd_avx(auVar241._16_16_);
    auVar29 = vperm2f128_avx(auVar214,auVar214,0x11);
    local_200._0_8_ = auVar29._0_8_ * auVar46._0_8_;
    local_200._8_8_ = auVar29._0_8_ * auVar46._8_8_;
    auVar138._16_8_ = auVar29._16_8_ * dVar88 * local_1f0;
    auVar138._0_16_ = local_200;
    auVar138._24_8_ = auVar29._16_8_ * 0.0;
    auVar29 = vblendpd_avx(auVar242,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar112._0_8_ =
         auVar29._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar112._8_8_ = auVar29._8_8_ & _UNK_150aa8f48;
    auVar112._16_8_ = auVar29._16_8_ & _UNK_150aa8f50;
    auVar112._24_8_ = auVar29._24_8_ & _UNK_150aa8f58;
    local_1f0 = (double)vmovlpd_avx(auVar138._16_16_);
    auVar29 = vcmppd_avx(auVar112,
                         ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6);
    auVar93 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
    auVar93 = vpackssdw_avx(auVar93,(undefined1  [16])0x0);
    auVar236 = vpcmpeqd_avx(local_c0,(undefined1  [16])0x0);
    auVar231 = vpcmpeqd_avx(auVar12,(undefined1  [16])0x0);
    auVar231 = vpackssdw_avx(auVar231,auVar236);
    auVar93 = vpandn_avx(auVar231,auVar93);
    if ((((((((((((((((SUB161(auVar93 >> 7,0) & 1) == 0 && (SUB161(auVar93 >> 0xf,0) & 1) == 0) &&
                    (SUB161(auVar93 >> 0x17,0) & 1) == 0) && (SUB161(auVar93 >> 0x1f,0) & 1) == 0)
                  && (SUB161(auVar93 >> 0x27,0) & 1) == 0) && (SUB161(auVar93 >> 0x2f,0) & 1) == 0)
                && (SUB161(auVar93 >> 0x37,0) & 1) == 0) && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar93 >> 0x47,0) & 1) == 0) && (SUB161(auVar93 >> 0x4f,0) & 1) == 0) &&
            (SUB161(auVar93 >> 0x57,0) & 1) == 0) && (SUB161(auVar93 >> 0x5f,0) & 1) == 0) &&
          (SUB161(auVar93 >> 0x67,0) & 1) == 0) && (SUB161(auVar93 >> 0x6f,0) & 1) == 0) &&
        (SUB161(auVar93 >> 0x77,0) & 1) == 0) && -1 < auVar93[0xf]) {
      auVar15 = ZEXT816(0) << 0x40;
      auVar56 = SUB6416(ZEXT864(0),0) << 0x40;
      auVar185._8_8_ = 0;
      auVar185._0_8_ = __real_3ff0000000000000;
      auVar222._8_8_ = __real_3ff0000000000000;
      auVar222._0_8_ = __real_3ff0000000000000;
      auVar222._16_8_ = __real_3ff0000000000000;
      auVar222._24_8_ = __real_3ff0000000000000;
    }
    else {
      auVar93 = vpcmpeqd_avx(auVar12,(undefined1  [16])0x0);
      auVar93 = vpackssdw_avx(auVar93,auVar236);
      auVar29 = vblendpd_avx(auVar241,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar195._0_8_ =
           auVar29._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar195._8_8_ = auVar29._8_8_ & _UNK_150aa8f48;
      auVar195._16_8_ = auVar29._16_8_ & _UNK_150aa8f50;
      auVar195._24_8_ = auVar29._24_8_ & _UNK_150aa8f58;
      auVar29 = vcmppd_avx(auVar195,
                           ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6
                          );
      auVar231 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
      auVar231 = vpackssdw_avx(auVar231,(undefined1  [16])0x0);
      auVar93 = vpandn_avx(auVar93,auVar231);
      auVar222._8_8_ = __real_3ff0000000000000;
      auVar222._0_8_ = __real_3ff0000000000000;
      auVar222._16_8_ = __real_3ff0000000000000;
      auVar222._24_8_ = __real_3ff0000000000000;
      if ((((((((((((((((SUB161(auVar93 >> 7,0) & 1) != 0 || (SUB161(auVar93 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar93 >> 0x17,0) & 1) != 0) || (SUB161(auVar93 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar93 >> 0x27,0) & 1) != 0) || (SUB161(auVar93 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar93 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar93 >> 0x3f,0) & 1) != 0) || (SUB161(auVar93 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar93 >> 0x4f,0) & 1) != 0) || (SUB161(auVar93 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar93 >> 0x5f,0) & 1) != 0) || (SUB161(auVar93 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar93 >> 0x6f,0) & 1) != 0) || (SUB161(auVar93 >> 0x77,0) & 1) != 0) ||
          auVar93[0xf] < '\0') {
        auVar93 = vpcmpeqd_avx(local_c0,(undefined1  [16])0x0);
        auVar231 = vpcmpeqd_avx(auVar12,(undefined1  [16])0x0);
        auVar93 = vpackssdw_avx(auVar231,auVar93);
        auVar29 = vblendpd_avx(auVar138,
                               ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                               ,8);
        auVar196._0_8_ =
             auVar29._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff
        ;
        auVar196._8_8_ = auVar29._8_8_ & _UNK_150aa8f48;
        auVar196._16_8_ = auVar29._16_8_ & _UNK_150aa8f50;
        auVar196._24_8_ = auVar29._24_8_ & _UNK_150aa8f58;
        auVar29 = vcmppd_avx(auVar196,
                             ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d
                             ,6);
        auVar231 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
        auVar231 = vpackssdw_avx(auVar231,(undefined1  [16])0x0);
        auVar93 = vpandn_avx(auVar93,auVar231);
        if ((((((((((((((((SUB161(auVar93 >> 7,0) & 1) != 0 || (SUB161(auVar93 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar93 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar93 >> 0x1f,0) & 1) != 0) || (SUB161(auVar93 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar93 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar93 >> 0x37,0) & 1) != 0) || (SUB161(auVar93 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar93 >> 0x47,0) & 1) != 0) || (SUB161(auVar93 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar93 >> 0x57,0) & 1) != 0) || (SUB161(auVar93 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar93 >> 0x67,0) & 1) != 0) || (SUB161(auVar93 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar93 >> 0x77,0) & 1) != 0) || auVar93[0xf] < '\0') {
          auVar93 = vshufpd_avx(local_220,local_220,1);
          dVar45 = auVar138._16_8_ + (double)local_240 + auVar93._0_8_;
          if (dVar45 <= 0.0) {
            bVar4 = (double)local_240 < auVar93._0_8_;
            uVar91 = 2;
            if (auVar138._16_8_ <= *(double *)(local_240 + ((uint)bVar4 * 0x20 + (uint)bVar4 * 8)))
            {
              uVar91 = (ulonglong)bVar4;
            }
            iVar2 = *(int *)(&DAT_151c6d0a0 + uVar91 * 4);
            lVar6 = (longlong)iVar2;
            iVar3 = *(int *)(&DAT_151c6d0a0 + lVar6 * 4);
            iVar5 = (int)uVar91;
            dVar88 = __real_3ff0000000000000 /
                     SQRT(((*(double *)(local_240 + (uint)(iVar5 * 0x28)) -
                           *(double *)(local_240 + lVar6 * 0x28)) -
                          *(double *)(local_240 + (longlong)iVar3 * 0x28)) + __real_3ff0000000000000
                         );
            dVar45 = dVar88 * __real_3fe0000000000000;
            *(double *)((longlong)local_1a0 + (ulonglong)(uint)(iVar5 * 8)) =
                 (__real_3ff0000000000000 / dVar88) * __real_3fe0000000000000;
            _local_180 = auVar63;
            _local_e0 = auVar107;
            local_1a0[lVar6] =
                 (*(double *)(local_240 + (longlong)(iVar2 + iVar5 * 4) * 8) +
                 *(double *)(local_240 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar45;
            local_1a0[iVar3] =
                 dVar45 * (*(double *)(local_240 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                          *(double *)(local_240 + (longlong)(iVar5 + iVar3 * 4) * 8));
            dVar45 = dVar45 * (*(double *)(local_240 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                              *(double *)(local_240 + (longlong)(iVar2 + iVar3 * 4) * 8));
          }
          else {
            auVar93 = vshufpd_avx(_local_240,_local_240,1);
            auVar231 = vshufpd_avx(local_200,local_200,1);
            dVar88 = __real_3ff0000000000000 / SQRT(dVar45 + __real_3ff0000000000000);
            dVar45 = dVar88 * __real_3fe0000000000000;
            local_1a0[0] = (auVar241._16_8_ - auVar231._0_8_) * dVar45;
            local_1a0[1] = ((double)local_200._0_8_ - auVar242._16_8_) * dVar45;
            local_1a0[2] = (auVar93._0_8_ - (double)local_220._0_8_) * dVar45;
            dVar45 = (__real_3ff0000000000000 / dVar88) * __real_3fe0000000000000;
          }
          auVar237._8_8_ = 0;
          auVar237._0_8_ = local_1a0[2];
          auVar56._8_8_ = 0;
          auVar56._0_8_ = local_1a0[1];
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_1a0[0];
          auVar185._8_8_ = 0;
          auVar185._0_8_ = dVar45;
          goto LAB_140c80be3;
        }
      }
      auVar15 = ZEXT816(0) << 0x40;
      auVar56 = SUB6416(ZEXT864(0),0) << 0x40;
      auVar185._8_8_ = 0;
      auVar185._0_8_ = __real_3ff0000000000000;
    }
LAB_140c80be3:
    auVar93 = vunpcklpd_avx(auVar237,auVar185);
    auVar231 = vunpcklpd_avx(auVar15,auVar56);
    dVar88 = auVar93._0_8_;
    dVar90 = auVar93._8_8_;
    dVar89 = auVar231._0_8_;
    dVar148 = auVar231._8_8_;
    auVar18._0_8_ = dVar89 * dVar89 + dVar88 * dVar88;
    auVar18._8_8_ = dVar148 * dVar148 + dVar90 * dVar90;
    auVar93 = vshufpd_avx(auVar18,auVar18,1);
    dVar45 = auVar18._0_8_ + auVar93._0_8_;
    auVar101._8_8_ = 0;
    auVar101._0_8_ = __real_3e45798ee2308c3a;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar45;
    auVar93 = vcmpsd_avx(auVar101,auVar19,6);
    uVar91 = ~auVar93._0_8_ & __real_ffffffffffffffff;
    dVar45 = __real_3ff0000000000000 / SQRT(dVar45);
    auVar122._0_8_ =
         ~uVar91 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar122._8_8_ = ~uVar91 & _UNK_150b54548;
    auVar122._16_8_ = ~uVar91 & _UNK_150b54550;
    auVar122._24_8_ = ~uVar91 & _UNK_150b54558;
    auVar225._0_8_ = (double)((ulonglong)(dVar89 * dVar45) & uVar91);
    auVar225._8_8_ = (double)((ulonglong)(dVar148 * dVar45) & uVar91);
    auVar229._16_8_ = (ulonglong)(dVar88 * dVar45) & uVar91;
    auVar229._0_16_ = auVar225;
    auVar229._24_8_ = (ulonglong)(dVar90 * dVar45) & uVar91;
    auVar43 = auVar229._16_16_ | auVar122._16_16_;
    auVar7 = vshufps_avx(auVar225,auVar225,0x4e);
    auVar93 = vshufps_avx(auVar43,auVar43,0x4e);
    dVar88 = auVar93._0_8_;
    auVar14._8_8_ = 0.0;
    auVar14._0_8_ = (double)uStack_1e0;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = local_1d8;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uStack_1d0;
  }
  auVar236 = vunpcklpd_avx(auVar14,auVar59);
  auVar93 = vinsertps_avx(ZEXT416(param_6),ZEXT416(param_7),0x1c);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(param_8),0x28);
  auVar231 = vshufps_avx(ZEXT416((uint)(param_3 * __real_3f000000)),
                         ZEXT416((uint)(param_3 * __real_3f000000)),0);
  auVar20._0_4_ = auVar231._0_4_ * auVar93._0_4_;
  auVar20._4_4_ = auVar231._4_4_ * auVar93._4_4_;
  auVar20._8_4_ = auVar231._8_4_ * auVar93._8_4_;
  auVar20._12_4_ = auVar231._12_4_ * auVar93._12_4_;
  auVar107 = vcvtps2pd_avx(auVar20);
  auVar93 = vunpcklpd_avx(auVar225,auVar7);
  auVar156._8_8_ = dVar88;
  auVar156._0_8_ = dVar88;
  auVar231 = vunpcklpd_avx(auVar43,auVar156);
  dVar45 = auVar93._0_8_;
  auVar186._0_8_ = dVar45 + dVar45;
  dVar89 = auVar93._8_8_;
  auVar186._8_8_ = dVar89 + dVar89;
  auVar205._16_8_ = auVar231._0_8_ + auVar231._0_8_;
  auVar205._0_16_ = auVar186;
  auVar205._24_8_ = auVar231._8_8_ + auVar231._8_8_;
  auVar21._0_8_ = dVar45 * auVar186._0_8_;
  auVar21._8_8_ = dVar89 * auVar186._8_8_;
  auVar33._16_8_ = auVar43._0_8_ * auVar205._16_8_;
  auVar33._0_16_ = auVar21;
  auVar33._24_8_ = auVar43._8_8_ * auVar205._24_8_;
  auVar93 = vshufpd_avx(auVar21,auVar21,1);
  auVar29 = vperm2f128_avx(auVar33,auVar33,1);
  auVar29 = vshufpd_avx(auVar29,auVar29,4);
  auVar34._0_8_ = auVar93._0_8_ + auVar29._0_8_;
  auVar34._8_8_ = auVar93._8_8_ + auVar29._8_8_;
  auVar34._16_8_ = auVar21._0_8_ + auVar29._16_8_;
  auVar34._24_8_ = auVar21._8_8_ + auVar29._24_8_;
  auVar29 = vsubpd_avx(auVar222,auVar34);
  auVar93 = vunpcklpd_avx(local_180,local_1b0);
  auVar22._0_8_ = auVar93._0_8_ * auVar29._0_8_;
  auVar22._8_8_ = auVar93._8_8_ * auVar29._8_8_;
  auVar35._16_8_ = local_e0._0_8_ * auVar29._16_8_;
  auVar35._0_16_ = auVar22;
  auVar35._24_8_ = local_e0._8_8_ * auVar29._24_8_;
  auVar66 = vperm2f128_avx(auVar205,auVar205,1);
  auVar29 = vshufpd_avx(auVar205,auVar66,1);
  auVar223._0_8_ = auVar29._0_8_ * dVar45;
  auVar223._8_8_ = auVar29._8_8_ * dVar89;
  auVar223._16_8_ = auVar29._16_8_ * auVar225._0_8_;
  auVar223._24_8_ = auVar29._24_8_ * auVar225._0_8_;
  auVar144._16_16_ = auVar186;
  auVar144._0_16_ = auVar186;
  auVar29 = vshufpd_avx(auVar66,auVar144,4);
  auVar171._0_8_ = dVar88 * auVar29._0_8_;
  auVar171._8_8_ = dVar88 * auVar29._8_8_;
  auVar171._16_8_ = dVar88 * auVar29._16_8_;
  auVar171._24_8_ = dVar88 * auVar29._24_8_;
  auVar131._0_8_ = auVar93._0_8_ * (auVar223._0_8_ + auVar171._0_8_);
  auVar131._8_8_ = auVar93._8_8_ * (auVar223._8_8_ + auVar171._8_8_);
  auVar145._16_8_ = local_e0._0_8_ * (auVar223._16_8_ + auVar171._16_8_);
  auVar145._0_16_ = auVar131;
  auVar145._24_8_ = local_e0._8_8_ * (auVar223._24_8_ + auVar171._24_8_);
  auVar29 = vsubpd_avx(auVar223,auVar171);
  auVar93 = vunpcklpd_avx(local_1b0,local_e0);
  auVar157._0_8_ = auVar93._0_8_ * auVar29._0_8_;
  auVar157._8_8_ = auVar93._8_8_ * auVar29._8_8_;
  auVar172._16_8_ = local_180._0_8_ * auVar29._16_8_;
  auVar172._0_16_ = auVar157;
  auVar172._24_8_ = local_180._8_8_ * auVar29._24_8_;
  auVar29 = vsubpd_avx(auVar107,auVar107);
  auVar187._0_8_ = auVar29._0_8_ * __real_3fe0000000000000;
  auVar187._8_8_ = auVar29._8_8_ * __real_3fe0000000000000;
  auVar206._16_8_ = auVar29._16_8_ * __real_3fe0000000000000;
  auVar206._0_16_ = auVar187;
  auVar206._24_8_ = auVar29._24_8_ * __real_3fe0000000000000;
  auVar102._0_8_ = (auVar107._0_8_ + auVar107._0_8_) * __real_3fe0000000000000;
  auVar102._8_8_ = (auVar107._8_8_ + auVar107._8_8_) * __real_3fe0000000000000;
  auVar123._16_8_ = (auVar107._16_8_ + auVar107._16_8_) * __real_3fe0000000000000;
  auVar123._0_16_ = auVar102;
  auVar123._24_8_ = (auVar107._24_8_ + auVar107._24_8_) * __real_3fe0000000000000;
  auVar93 = CONCAT88(auVar131._0_8_,auVar131._0_8_);
  auVar107 = vblendpd_avx(ZEXT1632(auVar22),ZEXT1632(auVar93),2);
  auVar107 = vblendpd_avx(auVar107,auVar172,4);
  auVar231 = vshufpd_avx(auVar187,auVar187,3);
  auVar233._16_16_ = auVar131;
  auVar233._0_16_ = auVar157;
  auVar66 = vshufpd_avx(auVar233,ZEXT1632(auVar22),0xe);
  auVar63 = vperm2f128_avx(auVar206,auVar206,0x11);
  auVar29 = vblendpd_avx(ZEXT1632(auVar145._16_16_),auVar172,2);
  auVar29 = vblendpd_avx(auVar29,auVar35,4);
  auVar93 = vmovhpd_avx(auVar41,__real_3ff0000000000000);
  auVar87._0_8_ =
       auVar236._0_8_ +
       auVar63._0_8_ * auVar29._0_8_ +
       auVar231._0_8_ * auVar66._0_8_ + auVar187._0_8_ * auVar107._0_8_;
  auVar87._8_8_ =
       auVar236._8_8_ +
       auVar63._0_8_ * auVar29._8_8_ +
       auVar231._8_8_ * auVar66._8_8_ + auVar187._0_8_ * auVar107._8_8_;
  auVar87._16_8_ =
       auVar93._0_8_ +
       auVar63._16_8_ * auVar29._16_8_ +
       auVar231._0_8_ * auVar66._16_8_ + auVar187._0_8_ * auVar107._16_8_;
  auVar87._24_8_ =
       auVar93._8_8_ +
       auVar63._16_8_ * auVar29._24_8_ +
       auVar231._8_8_ * auVar66._24_8_ + auVar187._0_8_ * auVar107._24_8_;
  auVar93 = vshufpd_avx(auVar102,auVar102,3);
  dVar45 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._0_8_ * auVar93._0_8_)) +
           (double)(__real_7fffffffffffffff & (ulonglong)(auVar102._0_8_ * auVar107._0_8_));
  dVar88 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._8_8_ * auVar93._8_8_)) +
           (double)(__real_7fffffffffffffff & (ulonglong)(auVar102._0_8_ * auVar107._8_8_));
  dVar89 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._16_8_ * auVar93._0_8_)) +
           (double)(__real_7fffffffffffffff & (ulonglong)(auVar102._0_8_ * auVar107._16_8_));
  dVar90 = (double)(__real_7fffffffffffffff & (ulonglong)(auVar66._24_8_ * auVar93._8_8_)) +
           (double)(__real_7fffffffffffffff & (ulonglong)(auVar102._0_8_ * auVar107._24_8_));
LAB_140c811aa:
  auVar107 = vperm2f128_avx(auVar123,auVar123,0x11);
  auVar39._0_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar107._0_8_ * auVar29._0_8_)) + dVar45;
  auVar39._8_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar107._0_8_ * auVar29._8_8_)) + dVar88;
  auVar39._16_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar107._16_8_ * auVar29._16_8_)) + dVar89;
  auVar39._24_8_ =
       (double)(__real_7fffffffffffffff & (ulonglong)(auVar107._16_8_ * auVar29._24_8_)) + dVar90;
  auVar107 = vsubpd_avx(auVar87,auVar39);
  auVar28._0_8_ = auVar87._0_8_ + auVar39._0_8_;
  auVar28._8_8_ = auVar87._8_8_ + auVar39._8_8_;
  auVar40._16_8_ = auVar87._16_8_ + auVar39._16_8_;
  auVar40._0_16_ = auVar28;
  auVar40._24_8_ = auVar87._24_8_ + auVar39._24_8_;
  *param_1 = auVar107._0_16_;
  auVar93 = vunpcklpd_avx(auVar107._16_16_,auVar28);
  param_1[1] = auVar93;
  auVar93 = vshufpd_avx(auVar28,auVar40._16_16_,1);
  param_1[2] = auVar93;
  param_1[3][0] = 1;
  return;
}

// SPhylCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunf_avx @ 140c81250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SPhylCalcAABB___REFs_5B_unFBox_5D_REFs_5B__c_unFTransform_5D_CunfREFs_5B__c_unFRotator_5D_REFs_5B__c_unFVector_5D_CunfCunf_avx
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],float param_3,
               undefined1 (*param_4) [24],double *param_5,float param_6,float param_7,
               undefined1 (*param_8) [32])

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  longlong lVar9;
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
  undefined1 auVar25 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar28 [32];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar64 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar71 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar88 [32];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  ulonglong uVar89;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar92 [16];
  undefined1 auVar109 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar114 [32];
  undefined1 auVar116 [32];
  undefined1 auVar118 [32];
  double dVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar142;
  undefined1 auVar124 [32];
  double dVar141;
  double dVar143;
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar157 [32];
  double dVar177;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  double dVar158;
  undefined1 auVar166 [16];
  double dVar178;
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  double dVar180;
  undefined1 auVar179 [16];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar189 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  undefined1 auVar216 [32];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [32];
  undefined1 auVar224 [32];
  undefined1 in_ZMM9 [64];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [32];
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
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
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
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
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_78 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar29 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar65 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar72 [32];
  undefined1 auVar76 [32];
  undefined1 auVar79 [32];
  undefined1 auVar83 [32];
  undefined1 auVar87 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar110 [32];
  undefined1 auVar113 [32];
  undefined1 auVar115 [32];
  undefined1 auVar117 [32];
  undefined1 auVar128 [32];
  undefined1 auVar133 [32];
  undefined1 auVar150 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar173 [32];
  undefined1 auVar188 [32];
  undefined1 auVar190 [32];
  undefined1 auVar205 [32];
  undefined1 auVar206 [32];
  undefined1 auVar212 [32];
  undefined1 auVar215 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar225 [32];
  
  local_78 = in_ZMM9._0_16_;
  auVar124._24_8_ = 0;
  auVar124._0_24_ = *param_4;
  auVar167._8_8_ = __real_4076800000000000;
  auVar167._0_8_ = __real_4076800000000000;
  auVar167._16_8_ = __real_4076800000000000;
  auVar167._24_8_ = __real_4076800000000000;
  auVar105 = vdivpd_avx(auVar124,auVar167);
  auVar102._0_8_ = auVar105._0_8_ & __real_7fffffffffffffff;
  auVar102._8_8_ = auVar105._8_8_ & __real_7fffffffffffffff;
  auVar102._16_8_ = auVar105._16_8_ & __real_7fffffffffffffff;
  auVar102._24_8_ = auVar105._24_8_ & __real_7fffffffffffffff;
  auVar185._8_8_ = __real_4330000000000000;
  auVar185._0_8_ = __real_4330000000000000;
  auVar185._16_8_ = __real_4330000000000000;
  auVar185._24_8_ = __real_4330000000000000;
  auVar56 = vcmppd_avx(auVar185,auVar102,2);
  auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
  auVar179 = vpshufd_avx(auVar92,0x50);
  auVar92 = vpshufd_avx(auVar92,0xfa);
  auVar186._16_16_ = auVar92;
  auVar186._0_16_ = auVar179;
  auVar92._0_12_ = ZEXT812(0);
  auVar92._12_4_ = 0;
  auVar58 = vcmpps_avx(ZEXT1632(auVar92),ZEXT1632(auVar92),0xf);
  auVar102 = ZEXT1632(auVar92);
  auVar56 = vblendvps_avx(auVar102,auVar58,auVar186);
  auVar202 = vroundpd_avx(auVar105,0xb);
  auVar201._0_4_ = ~auVar56._0_4_ & auVar202._0_4_;
  auVar201._4_4_ = ~auVar56._4_4_ & auVar202._4_4_;
  auVar201._8_4_ = ~auVar56._8_4_ & auVar202._8_4_;
  auVar201._12_4_ = ~auVar56._12_4_ & auVar202._12_4_;
  auVar201._16_4_ = ~auVar56._16_4_ & auVar202._16_4_;
  auVar201._20_4_ = ~auVar56._20_4_ & auVar202._20_4_;
  auVar201._24_4_ = ~auVar56._24_4_ & auVar202._24_4_;
  auVar201._28_4_ = ~auVar56._28_4_ & auVar202._28_4_;
  auVar202._0_8_ = auVar105._0_8_ & auVar56._0_8_;
  auVar202._8_8_ = auVar105._8_8_ & auVar56._8_8_;
  auVar202._16_8_ = auVar105._16_8_ & auVar56._16_8_;
  auVar202._24_8_ = auVar105._24_8_ & auVar56._24_8_;
  auVar202 = auVar202 | auVar201;
  auVar92 = vpcmpeqd_avx(local_78,local_78);
  auVar179 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_8 + 0x10),auVar92);
  auVar187._0_8_ = auVar202._0_8_ * __real_4076800000000000;
  auVar187._8_8_ = auVar202._8_8_ * __real_4076800000000000;
  auVar187._16_8_ = auVar202._16_8_ * __real_4076800000000000;
  auVar187._24_8_ = auVar202._24_8_ * __real_4076800000000000;
  auVar56 = vsubpd_avx(auVar124,auVar187);
  auVar56 = vminpd_avx(auVar56,auVar167);
  auVar168._8_8_ = __real_c076800000000000;
  auVar168._0_8_ = __real_c076800000000000;
  auVar168._16_8_ = __real_c076800000000000;
  auVar168._24_8_ = __real_c076800000000000;
  auVar56 = vmaxpd_avx(auVar168,auVar56);
  dVar119 = auVar56._0_8_ * ___ymm_3f81df46a2529d393f81df46a2529d393f81df46a2529d393f81df46a2529d39;
  dVar141 = auVar56._8_8_ * _UNK_151c6cec8;
  dVar142 = auVar56._16_8_ * _UNK_151c6ced0;
  dVar143 = auVar56._24_8_ * _UNK_151c6ced8;
  auVar169._0_8_ = dVar119 * ___ymm_3fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c883
  ;
  auVar169._8_8_ = dVar141 * _UNK_151c6cee8;
  auVar169._16_8_ = dVar142 * _UNK_151c6cef0;
  auVar169._24_8_ = dVar143 * _UNK_151c6cef8;
  auVar56 = vroundpd_avx(auVar169,0xb);
  auVar125._0_8_ =
       dVar119 + auVar56._0_8_ *
                 ___ymm_c01921fb54442d18c01921fb54442d18c01921fb54442d18c01921fb54442d18;
  auVar125._8_8_ = dVar141 + auVar56._8_8_ * _UNK_151c6cf08;
  auVar125._16_8_ = dVar142 + auVar56._16_8_ * _UNK_151c6cf10;
  auVar125._24_8_ = dVar143 + auVar56._24_8_ * _UNK_151c6cf18;
  auVar170._0_8_ =
       (ulonglong)auVar125._0_8_ &
       ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
  auVar170._8_8_ = (ulonglong)auVar125._8_8_ & _UNK_150b513e8;
  auVar170._16_8_ = (ulonglong)auVar125._16_8_ & _UNK_150b513f0;
  auVar170._24_8_ = (ulonglong)auVar125._24_8_ & _UNK_150b513f8;
  auVar14 = SUB3216(*param_8,0);
  auVar144 = vpcmpgtd_avx(auVar14,auVar92);
  auVar105 = vsubpd_avx(auVar170 |
                        ___ymm_400921fb54442d18400921fb54442d18400921fb54442d18400921fb54442d18,
                        auVar125);
  auVar56._0_8_ = (ulonglong)auVar125._0_8_ & __real_7fffffffffffffff;
  auVar56._8_8_ = (ulonglong)auVar125._8_8_ & __real_7fffffffffffffff;
  auVar56._16_8_ = (ulonglong)auVar125._16_8_ & __real_7fffffffffffffff;
  auVar56._24_8_ = (ulonglong)auVar125._24_8_ & __real_7fffffffffffffff;
  auVar203._8_8_ = __real_3ff921fb54442d18;
  auVar203._0_8_ = __real_3ff921fb54442d18;
  auVar203._16_8_ = __real_3ff921fb54442d18;
  auVar203._24_8_ = __real_3ff921fb54442d18;
  auVar56 = vcmppd_avx(auVar203,auVar56,1);
  auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
  auVar33 = vpshufd_avx(auVar92,0x50);
  auVar92 = vpshufd_avx(auVar92,0xfa);
  auVar57._16_16_ = auVar92;
  auVar57._0_16_ = auVar33;
  auVar56 = vblendvps_avx(auVar102,auVar58,auVar57);
  auVar103._0_4_ = ~auVar56._0_4_ & SUB84(auVar125._0_8_,0);
  auVar103._4_4_ = ~auVar56._4_4_ & (uint)((ulonglong)auVar125._0_8_ >> 0x20);
  auVar103._8_4_ = ~auVar56._8_4_ & SUB84(auVar125._8_8_,0);
  auVar103._12_4_ = ~auVar56._12_4_ & (uint)((ulonglong)auVar125._8_8_ >> 0x20);
  auVar103._16_4_ = ~auVar56._16_4_ & SUB84(auVar125._16_8_,0);
  auVar103._20_4_ = ~auVar56._20_4_ & (uint)((ulonglong)auVar125._16_8_ >> 0x20);
  auVar103._24_4_ = ~auVar56._24_4_ & SUB84(auVar125._24_8_,0);
  auVar103._28_4_ = ~auVar56._28_4_ & (uint)((ulonglong)auVar125._24_8_ >> 0x20);
  auVar104._0_8_ = auVar105._0_8_ & auVar56._0_8_;
  auVar104._8_8_ = auVar105._8_8_ & auVar56._8_8_;
  auVar104._16_8_ = auVar105._16_8_ & auVar56._16_8_;
  auVar104._24_8_ = auVar105._24_8_ & auVar56._24_8_;
  auVar104 = auVar104 | auVar103;
  dVar119 = auVar104._0_8_;
  dVar158 = dVar119 * dVar119;
  dVar141 = auVar104._8_8_;
  dVar177 = dVar141 * dVar141;
  dVar142 = auVar104._16_8_;
  dVar178 = dVar142 * dVar142;
  dVar143 = auVar104._24_8_;
  dVar180 = dVar143 * dVar143;
  auVar92 = vpor_avx(auVar144,auVar179);
  auVar126._8_8_ = __real_3ff0000000000000;
  auVar126._0_8_ = __real_3ff0000000000000;
  auVar126._16_8_ = __real_3ff0000000000000;
  auVar126._24_8_ = __real_3ff0000000000000;
  auVar90._0_8_ =
       (dVar158 * (dVar158 * (dVar158 * (dVar158 * (dVar158 * 
                                                  ___ymm_be59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806f
                                                  + 
                                                  ___ymm_00000000000000003ec71711c625173e3ec71711c625173e3ec71711c625173e
                                                  ) +
                                        ___ymm_0000000000000000bf2a017e195d6197bf2a017e195d6197bf2a017e195d6197
                                        ) +
                             ___ymm_00000000000000003f811110c0e4d9803f811110c0e4d9803f811110c0e4d980
                             ) +
                  ___ymm_0000000000000000bfc555555c7dda4bbfc555555c7dda4bbfc555555c7dda4b) +
       __real_3ff0000000000000) * dVar119;
  auVar90._8_8_ =
       (dVar177 * (dVar177 * (dVar177 * (dVar177 * (dVar177 * _UNK_151c6cf68 + _UNK_151c6cf88) +
                                        _UNK_151c6cfa8) + _UNK_151c6cfc8) + _UNK_151c6cfe8) +
       __real_3ff0000000000000) * dVar141;
  auVar105._16_8_ =
       (dVar178 * (dVar178 * (dVar178 * (dVar178 * (dVar178 * _UNK_151c6cf70 + _UNK_151c6cf90) +
                                        _UNK_151c6cfb0) + _UNK_151c6cfd0) + _UNK_151c6cff0) +
       __real_3ff0000000000000) * dVar142;
  auVar105._0_16_ = auVar90;
  auVar105._24_8_ =
       (dVar180 * (dVar180 * (dVar180 * (dVar180 * (dVar180 * _UNK_151c6cf78 + _UNK_151c6cf98) +
                                        _UNK_151c6cfb8) + _UNK_151c6cfd8) + _UNK_151c6cff8) +
       __real_3ff0000000000000) * dVar143;
  auVar33._0_8_ =
       (dVar158 * (dVar158 * (dVar158 * (dVar158 * (dVar158 * 
                                                  ___ymm_be917ba225041884be917ba225041884be917ba225041884be917ba225041884
                                                  + 
                                                  ___ymm_00000000000000003ef9f698429782503ef9f698429782503ef9f69842978250
                                                  ) +
                                        ___ymm_0000000000000000bf56c1353b8c783dbf56c1353b8c783dbf56c1353b8c783d
                                        ) +
                             ___ymm_00000000000000003fa555545f16aaab3fa555545f16aaab3fa555545f16aaab
                             ) +
                  ___ymm_0000000000000000bfe0000000000000bfe0000000000000bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar56._0_8_ &
                CONCAT44(_UNK_151c6af64,
                         ___ymm_0000000000000000800000000000000080000000000000008000000000000000) |
               (ulonglong)___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000);
  auVar33._8_8_ =
       (dVar177 * (dVar177 * (dVar177 * (dVar177 * (dVar177 * _UNK_151c6d008 + _UNK_151c6d028) +
                                        _UNK_151c6d048) + _UNK_151c6d068) + _UNK_151c6d088) +
       __real_3ff0000000000000) *
       (double)(auVar56._8_8_ & CONCAT44(_UNK_151c6af6c,_UNK_151c6af68) | (ulonglong)_UNK_150b54508)
  ;
  auVar58._16_8_ =
       (dVar178 * (dVar178 * (dVar178 * (dVar178 * (dVar178 * _UNK_151c6d010 + _UNK_151c6d030) +
                                        _UNK_151c6d050) + _UNK_151c6d070) + _UNK_151c6d090) +
       __real_3ff0000000000000) *
       (double)(auVar56._16_8_ & CONCAT44(_UNK_151c6af74,_UNK_151c6af70) | (ulonglong)_UNK_150b54510
               );
  auVar58._0_16_ = auVar33;
  auVar58._24_8_ =
       (dVar180 * (dVar180 * (dVar180 * (dVar180 * (dVar180 * _UNK_151c6d018 + _UNK_151c6d038) +
                                        _UNK_151c6d058) + _UNK_151c6d078) + _UNK_151c6d098) +
       __real_3ff0000000000000) *
       (double)(auVar56._24_8_ & CONCAT44(_UNK_151c6af7c,_UNK_151c6af78) | (ulonglong)_UNK_150b54518
               );
  auVar179 = vunpckhpd_avx(auVar90,auVar33);
  auVar56 = vperm2f128_avx(auVar58,auVar58,0x11);
  auVar144 = vunpckhpd_avx(auVar33,auVar90);
  auVar58 = vperm2f128_avx(auVar105,auVar105,0x11);
  auVar221._0_8_ =
       (double)((ulonglong)(auVar56._0_8_ * auVar90._0_8_ * auVar179._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar58._0_8_ * auVar33._0_8_ * auVar144._0_8_) ^
               CONCAT44(_UNK_151c6af64,
                        ___ymm_0000000000000000800000000000000080000000000000008000000000000000));
  auVar221._8_8_ =
       (double)((ulonglong)(auVar56._0_8_ * auVar90._0_8_ * auVar179._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar58._0_8_ * auVar33._0_8_ * auVar144._8_8_) ^
               CONCAT44(_UNK_151c6af6c,_UNK_151c6af68));
  auVar221._16_8_ =
       (double)((ulonglong)(auVar56._16_8_ * auVar33._0_8_ * auVar179._0_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar58._16_8_ * auVar90._0_8_ * auVar144._0_8_) ^
               CONCAT44(_UNK_151c6af74,_UNK_151c6af70));
  auVar221._24_8_ =
       (double)((ulonglong)(auVar56._16_8_ * auVar33._0_8_ * auVar179._8_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar58._16_8_ * auVar90._0_8_ * auVar144._8_8_) ^
               CONCAT44(_UNK_151c6af7c,_UNK_151c6af78));
  dVar119 = (double)param_3;
  local_120._0_8_ = dVar119 * *param_5;
  local_120._8_8_ = dVar119 * param_5[1];
  auVar179._0_8_ = dVar119 * param_5[2];
  auVar179._8_8_ = 0;
  if ((((SUB161(auVar92 >> 0x1f,0) & 1) == 0 && (SUB161(auVar92 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar92 >> 0x5f,0) & 1) == 0) && -1 < auVar92[0xf]) {
    auVar144._8_8_ = 0;
    auVar144._0_8_ = *(double *)param_2[4];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulonglong *)(param_2[4] + 8);
    dVar119 = *(double *)param_2[5];
    auVar228._8_8_ = 0;
    auVar228._0_8_ = dVar119;
    auVar56 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar102,1);
    auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
    if ((((SUB161(auVar92 >> 0x1f,0) & 1) == 0 && (SUB161(auVar92 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar92 >> 0x5f,0) & 1) == 0) && -1 < auVar92[0xf]) {
      dVar119 = *(double *)(param_2[1] + 8);
      auVar18._8_8_ = dVar119;
      auVar18._0_8_ = dVar119;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = *(ulonglong *)(param_2[5] + 8);
      dVar141 = *(double *)*param_2;
      auVar48._8_8_ = dVar141;
      auVar48._0_8_ = dVar141;
      auVar105 = vperm2f128_avx(auVar221,auVar221,1);
      auVar56 = vshufpd_avx(auVar105,auVar105,5);
      dVar142 = *(double *)(*param_2 + 8);
      auVar123._8_8_ = dVar142;
      auVar123._0_8_ = dVar142;
      dVar143 = *(double *)param_2[1];
      auVar232._8_8_ = dVar143;
      auVar232._0_8_ = dVar143;
      auVar58 = vshufpd_avx(auVar221,auVar221,5);
      auVar200._0_8_ =
           auVar58._0_8_ * dVar143 *
           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
           auVar221._0_8_ * dVar119 +
           auVar56._0_8_ * dVar141 *
           ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
           auVar105._0_8_ * dVar142 *
           ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
      auVar200._8_8_ =
           auVar58._8_8_ * dVar143 * _UNK_150b54428 +
           auVar221._8_8_ * dVar119 + auVar56._8_8_ * dVar141 * _UNK_150b543e8 +
           auVar105._8_8_ * dVar142 * _UNK_150b54408;
      auVar206._16_8_ =
           auVar58._16_8_ * dVar143 * _UNK_150b54430 +
           auVar221._16_8_ * dVar119 + auVar56._16_8_ * dVar141 * _UNK_150b543f0 +
           auVar105._16_8_ * dVar142 * _UNK_150b54410;
      auVar206._0_16_ = auVar200;
      auVar206._24_8_ =
           auVar58._24_8_ * dVar143 * _UNK_150b54438 +
           auVar221._24_8_ * dVar119 + auVar56._24_8_ * dVar141 * _UNK_150b543f8 +
           auVar105._24_8_ * dVar142 * _UNK_150b54418;
      auVar90 = vshufpd_avx(auVar200,auVar200,1);
      auVar32 = auVar206._16_16_;
      auVar92 = vshufpd_avx(auVar32,auVar32,1);
      dVar141 = auVar92._0_8_;
      auVar33 = vmovlhps_avx(auVar228,auVar96);
      auVar144 = vmovlhps_avx(auVar144,auVar14);
      auVar148._0_8_ = local_120._0_8_ * auVar144._0_8_;
      auVar148._8_8_ = local_120._8_8_ * auVar144._8_8_;
      auVar156._16_8_ = auVar179._0_8_ * auVar33._0_8_;
      auVar156._0_16_ = auVar148;
      auVar156._24_8_ = auVar33._8_8_ * 0.0;
      auVar174._16_16_ = auVar148;
      auVar174._0_16_ = auVar148;
      auVar56 = vperm2f128_avx(auVar156,auVar156,0x11);
      auVar56 = vshufpd_avx(auVar174,auVar56,9);
      auVar14 = vunpcklpd_avx(auVar48,auVar123);
      auVar92 = vblendpd_avx(auVar48,auVar232,1);
      auVar179 = vunpcklpd_avx(auVar232,auVar18);
      auVar175._0_8_ = auVar56._0_8_ * auVar14._0_8_;
      auVar175._8_8_ = auVar56._8_8_ * auVar14._8_8_;
      auVar175._16_8_ = auVar56._16_8_ * auVar179._0_8_;
      auVar175._24_8_ = auVar56._24_8_ * auVar179._8_8_;
      auVar228 = vunpcklpd_avx(auVar123,auVar232);
      auVar179 = vblendpd_avx(auVar123,auVar48,1);
      auVar54 = vunpcklpd_avx(auVar48,auVar18);
      auVar78._0_8_ = auVar148._0_8_ * auVar228._0_8_;
      auVar78._8_8_ = auVar148._8_8_ * auVar228._8_8_;
      auVar78._16_8_ = auVar156._16_8_ * auVar54._0_8_;
      auVar78._24_8_ = auVar156._24_8_ * auVar54._8_8_;
      auVar56 = vsubpd_avx(auVar175,auVar78);
      auVar49._0_8_ = auVar56._0_8_ + auVar56._0_8_;
      auVar49._8_8_ = auVar56._8_8_ + auVar56._8_8_;
      auVar79._16_8_ = auVar56._16_8_ + auVar56._16_8_;
      auVar79._0_16_ = auVar49;
      auVar79._24_8_ = auVar56._24_8_ + auVar56._24_8_;
      auVar176._16_16_ = auVar49;
      auVar176._0_16_ = auVar49;
      auVar56 = vshufpd_avx(auVar176,ZEXT1632(auVar79._16_16_),1);
      auVar58 = vperm2f128_avx(auVar79,auVar79,1);
      auVar58 = vshufpd_avx(auVar58,auVar79,4);
      auVar80._0_8_ = auVar14._0_8_ * auVar58._0_8_;
      auVar80._8_8_ = auVar14._8_8_ * auVar58._8_8_;
      auVar80._16_8_ = auVar92._0_8_ * auVar58._16_8_;
      auVar80._24_8_ = auVar92._8_8_ * auVar58._24_8_;
      auVar136._0_8_ = auVar228._0_8_ * auVar56._0_8_;
      auVar136._8_8_ = auVar228._8_8_ * auVar56._8_8_;
      auVar136._16_8_ = auVar179._0_8_ * auVar56._16_8_;
      auVar136._24_8_ = auVar179._8_8_ * auVar56._24_8_;
      auVar58 = vsubpd_avx(auVar80,auVar136);
      auVar137._16_16_ = auVar58._0_16_;
      auVar137._0_16_ = auVar58._0_16_;
      auVar58 = vshufpd_avx(auVar137,ZEXT1632(auVar58._16_16_),1);
      auVar19._0_8_ =
           *(double *)param_2[2] + auVar148._0_8_ + dVar119 * auVar56._0_8_ + auVar58._0_8_;
      auVar19._8_8_ =
           *(double *)(param_2[2] + 8) + auVar148._8_8_ + dVar119 * auVar56._8_8_ + auVar58._8_8_;
      auVar27._16_8_ =
           *(double *)param_2[3] + auVar156._16_8_ + dVar119 * auVar56._16_8_ + auVar58._16_8_;
      auVar27._0_16_ = auVar19;
      auVar27._24_8_ = auVar156._24_8_ + dVar119 * auVar56._24_8_ + auVar58._24_8_ + 0.0;
      auVar54 = vshufpd_avx(auVar19,auVar19,1);
      auVar121._0_8_ =
           auVar144._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
      auVar121._8_8_ = auVar144._8_8_ * _UNK_150b54508;
      auVar138._16_8_ = auVar33._0_8_ * _UNK_150b54510;
      auVar138._0_16_ = auVar121;
      auVar138._24_8_ = auVar33._8_8_ * _UNK_150b54518;
      auVar30 = auVar27._16_16_;
      _local_190 = vshufpd_avx(auVar121,auVar121,1);
      auVar31 = auVar138._16_16_;
      local_1a0 = vshufpd_avx(auVar31,auVar31,1);
    }
    else {
      auVar32._0_8_ = auVar221._0_8_ + auVar221._0_8_;
      auVar32._8_8_ = auVar221._8_8_ + auVar221._8_8_;
      auVar66._16_8_ = auVar221._16_8_ + auVar221._16_8_;
      auVar66._0_16_ = auVar32;
      auVar66._24_8_ = auVar221._24_8_ + auVar221._24_8_;
      auVar93._0_8_ = auVar221._0_8_ * auVar32._0_8_;
      auVar93._8_8_ = auVar221._8_8_ * auVar32._8_8_;
      auVar110._16_8_ = auVar221._16_8_ * auVar66._16_8_;
      auVar110._0_16_ = auVar93;
      auVar110._24_8_ = auVar221._24_8_ * auVar66._24_8_;
      auVar92 = vshufpd_avx(auVar93,auVar93,1);
      auVar56 = vperm2f128_avx(auVar110,auVar110,1);
      auVar56 = vshufpd_avx(auVar56,auVar56,4);
      auVar111._0_8_ = auVar92._0_8_ + auVar56._0_8_;
      auVar111._8_8_ = auVar92._8_8_ + auVar56._8_8_;
      auVar111._16_8_ = auVar93._0_8_ + auVar56._16_8_;
      auVar111._24_8_ = auVar93._8_8_ + auVar56._24_8_;
      auVar105 = vsubpd_avx(auVar126,auVar111);
      auVar58 = vperm2f128_avx(auVar66,auVar66,1);
      auVar56 = vshufpd_avx(auVar66,auVar58,1);
      auVar214._0_8_ = auVar221._0_8_ * auVar56._0_8_;
      auVar214._8_8_ = auVar221._8_8_ * auVar56._8_8_;
      auVar214._16_8_ = auVar221._0_8_ * auVar56._16_8_;
      auVar214._24_8_ = auVar221._0_8_ * auVar56._24_8_;
      auVar56 = vperm2f128_avx(auVar221,auVar221,0x11);
      auVar56 = vshufpd_avx(auVar56,auVar56,0xf);
      auVar67._16_16_ = auVar32;
      auVar67._0_16_ = auVar32;
      auVar58 = vshufpd_avx(auVar58,auVar67,4);
      auVar68._0_8_ = auVar56._0_8_ * auVar58._0_8_;
      auVar68._8_8_ = auVar56._8_8_ * auVar58._8_8_;
      auVar68._16_8_ = auVar56._16_8_ * auVar58._16_8_;
      auVar68._24_8_ = auVar56._24_8_ * auVar58._24_8_;
      auVar219._0_8_ = auVar214._0_8_ + auVar68._0_8_;
      auVar219._8_8_ = auVar214._8_8_ + auVar68._8_8_;
      auVar225._16_8_ = auVar214._16_8_ + auVar68._16_8_;
      auVar225._0_16_ = auVar219;
      auVar225._24_8_ = auVar214._24_8_ + auVar68._24_8_;
      auVar56 = vsubpd_avx(auVar214,auVar68);
      local_180 = vunpcklpd_avx(auVar105._0_16_,auVar219);
      local_170[0] = (double)vmovlps_avx(auVar56._16_16_);
      local_170[1] = 0.0;
      local_160 = vblendpd_avx(auVar105._0_16_,auVar56._0_16_,1);
      local_150 = vmovhpd_avx(auVar219);
      local_148 = 0;
      local_140 = vblendpd_avx(auVar56._0_16_,auVar225._16_16_,1);
      local_130 = vmovlps_avx(auVar105._16_16_);
      local_128 = 0;
      local_110 = vmovlpd_avx(auVar179);
      local_108 = 0x3ff0000000000000;
      auVar92 = *param_2;
      auVar179 = param_2[2];
      uVar1 = *(undefined8 *)param_2[1];
      auVar42._8_8_ = uVar1;
      auVar42._0_8_ = uVar1;
      auVar69._16_8_ = uVar1;
      auVar69._0_16_ = auVar42;
      auVar69._24_8_ = uVar1;
      dVar141 = *(double *)(param_2[1] + 8);
      auVar161._8_8_ = dVar141;
      auVar161._0_8_ = dVar141;
      auVar56 = vblendpd_avx(ZEXT1632(auVar92),auVar69,4);
      auVar33 = vunpcklpd_avx(auVar42,auVar161);
      dVar142 = auVar92._0_8_;
      auVar210._0_8_ = dVar142 + dVar142;
      dVar143 = auVar92._8_8_;
      auVar210._8_8_ = dVar143 + dVar143;
      auVar215._16_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar215._0_16_ = auVar210;
      auVar215._24_8_ = auVar33._8_8_ + auVar33._8_8_;
      auVar43._0_8_ = auVar210._0_8_ * auVar56._0_8_;
      auVar43._8_8_ = auVar210._8_8_ * auVar56._8_8_;
      auVar70._16_8_ = auVar215._16_8_ * auVar56._16_8_;
      auVar70._0_16_ = auVar43;
      auVar70._24_8_ = auVar215._24_8_ * auVar56._24_8_;
      auVar92 = vshufpd_avx(auVar43,auVar43,1);
      auVar56 = vperm2f128_avx(auVar70,auVar70,1);
      auVar56 = vshufpd_avx(auVar56,auVar56,4);
      auVar71._0_8_ = auVar92._0_8_ + auVar56._0_8_;
      auVar71._8_8_ = auVar92._8_8_ + auVar56._8_8_;
      auVar71._16_8_ = auVar43._0_8_ + auVar56._16_8_;
      auVar71._24_8_ = auVar43._8_8_ + auVar56._24_8_;
      auVar56 = vsubpd_avx(auVar126,auVar71);
      auVar92 = vmovlhps_avx(auVar144,auVar14);
      auVar132._16_8_ = dVar119;
      auVar132._0_16_ = auVar92;
      auVar132._24_8_ = 0;
      auVar44._0_8_ = auVar92._0_8_ * auVar56._0_8_;
      auVar44._8_8_ = auVar92._8_8_ * auVar56._8_8_;
      auVar72._16_8_ = dVar119 * auVar56._16_8_;
      auVar72._0_16_ = auVar44;
      auVar72._24_8_ = auVar56._24_8_ * 0.0;
      auVar58 = vperm2f128_avx(auVar215,auVar215,1);
      auVar56 = vshufpd_avx(auVar215,auVar58,1);
      auVar112._0_8_ = auVar56._0_8_ * dVar142;
      auVar112._8_8_ = auVar56._8_8_ * dVar143;
      auVar112._16_8_ = auVar56._16_8_ * *(double *)*param_2;
      auVar112._24_8_ = auVar56._24_8_ * *(double *)*param_2;
      auVar216._16_16_ = auVar210;
      auVar216._0_16_ = auVar210;
      auVar56 = vshufpd_avx(auVar58,auVar216,4);
      auVar172._0_8_ = dVar141 * auVar56._0_8_;
      auVar172._8_8_ = dVar141 * auVar56._8_8_;
      auVar172._16_8_ = dVar141 * auVar56._16_8_;
      auVar172._24_8_ = dVar141 * auVar56._24_8_;
      auVar199._0_8_ = auVar92._0_8_ * (auVar112._0_8_ + auVar172._0_8_);
      auVar199._8_8_ = auVar92._8_8_ * (auVar112._8_8_ + auVar172._8_8_);
      auVar205._16_8_ = dVar119 * (auVar112._16_8_ + auVar172._16_8_);
      auVar205._0_16_ = auVar199;
      auVar205._24_8_ = (auVar112._24_8_ + auVar172._24_8_) * 0.0;
      auVar58 = vsubpd_avx(auVar112,auVar172);
      auVar92 = vmovlhps_avx(auVar14,auVar228);
      uVar1 = *(undefined8 *)(param_2[5] + 8);
      auVar189._8_8_ = uVar1;
      auVar189._0_8_ = uVar1;
      auVar189._16_8_ = uVar1;
      auVar189._24_8_ = uVar1;
      auVar56 = vblendpd_avx(auVar132,auVar189,8);
      auVar121._0_8_ =
           auVar56._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
      auVar121._8_8_ = auVar56._8_8_ * _UNK_150b54508;
      auVar133._16_8_ = auVar56._16_8_ * _UNK_150b54510;
      auVar133._0_16_ = auVar121;
      auVar133._24_8_ = auVar56._24_8_ * _UNK_150b54518;
      auVar145._0_8_ = auVar58._0_8_ * auVar92._0_8_;
      auVar145._8_8_ = auVar58._8_8_ * auVar92._8_8_;
      auVar150._16_8_ = auVar58._16_8_ * *(double *)param_2[4];
      auVar150._0_16_ = auVar145;
      auVar150._24_8_ = auVar58._24_8_ * 0.0;
      local_100 = auVar133._16_8_;
      dStack_f8 = auVar133._24_8_;
      auVar183._8_8_ = 0;
      auVar183._0_8_ = *(ulonglong *)param_2[3];
      auVar92 = CONCAT88(auVar199._0_8_,auVar199._0_8_);
      auVar56 = vblendpd_avx(ZEXT1632(auVar44),ZEXT1632(auVar92),2);
      auVar56 = vblendpd_avx(auVar56,auVar150,4);
      auVar58 = vblendpd_avx(ZEXT1632(auVar205._16_16_),auVar150,2);
      auVar58 = vblendpd_avx(auVar58,auVar72,4);
      auVar151._16_16_ = auVar199;
      auVar151._0_16_ = auVar145;
      auVar105 = vshufpd_avx(auVar151,ZEXT1632(auVar44),0xe);
      auVar92 = vmovhpd_avx(auVar183,__real_3ff0000000000000);
      lVar9 = 0x18;
      do {
        dVar119 = *(double *)(local_1a0 + lVar9 + 8);
        dVar141 = *(double *)(local_190 + lVar9 + 8);
        dVar142 = *(double *)(local_190 + lVar9);
        dVar143 = *(double *)(local_180 + lVar9);
        *(double *)((longlong)adStack_258 + lVar9) =
             auVar56._0_8_ * dVar119 + auVar58._0_8_ * dVar141 + auVar105._0_8_ * dVar142 +
             auVar179._0_8_ * dVar143;
        *(double *)((longlong)adStack_258 + lVar9 + 8) =
             auVar56._8_8_ * dVar119 + auVar58._8_8_ * dVar141 + auVar105._8_8_ * dVar142 +
             auVar179._8_8_ * dVar143;
        *(double *)((longlong)adStack_258 + lVar9 + 0x10) =
             auVar56._16_8_ * dVar119 + auVar58._16_8_ * dVar141 + auVar105._16_8_ * dVar142 +
             auVar92._0_8_ * dVar143;
        *(double *)(local_240 + lVar9) =
             auVar56._24_8_ * dVar119 + auVar58._24_8_ * dVar141 + auVar105._24_8_ * dVar142 +
             auVar92._8_8_ * dVar143;
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != 0x98);
      dVar119 = (double)local_240 * (double)local_240 + adStack_238[0] * adStack_238[0] +
                adStack_238[1] * adStack_238[1];
      dVar141 = (double)local_220._0_8_ * (double)local_220._0_8_ +
                (double)local_220._8_8_ * (double)local_220._8_8_ + local_210 * local_210;
      dVar142 = __real_3ff0000000000000;
      if (0.0 <= dVar119 + __real_be45798ee2308c3a) {
        dVar142 = __real_3ff0000000000000 / SQRT(dVar119);
      }
      dVar119 = local_1f0 * local_1f0 +
                (double)local_200._0_8_ * (double)local_200._0_8_ +
                (double)local_200._8_8_ * (double)local_200._8_8_;
      dVar143 = __real_3ff0000000000000;
      if (0.0 <= dVar141 + __real_be45798ee2308c3a) {
        dVar143 = __real_3ff0000000000000 / SQRT(dVar141);
      }
      _local_190 = vshufpd_avx(auVar121,auVar121,1);
      auVar7._8_8_ = auVar133._24_8_;
      auVar7._0_8_ = auVar133._16_8_;
      local_1a0 = vpermilpd_avx(auVar7,1);
      auVar211 = ZEXT816(0);
      dVar141 = __real_3ff0000000000000;
      if (0.0 <= dVar119 + __real_be45798ee2308c3a) {
        dVar141 = __real_3ff0000000000000 / SQRT(dVar119);
      }
      auVar146._8_8_ = 0;
      auVar146._0_8_ = (double)local_240 * dVar142;
      auVar162._8_8_ = 0;
      auVar162._0_8_ = adStack_238[0] * dVar142;
      auVar144 = vunpcklpd_avx(auVar146,auVar162);
      auVar163._8_8_ = 0;
      auVar163._0_8_ = (double)local_220._0_8_ * dVar143;
      auVar220._8_8_ = 0;
      auVar220._0_8_ = (double)local_220._8_8_ * dVar143;
      auVar33 = vunpcklpd_avx(auVar163,auVar220);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar141 * (double)local_200._0_8_;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = dVar141 * (double)local_200._8_8_;
      auVar90 = vunpcklpd_avx(auVar13,auVar45);
      auVar14 = ZEXT816(0);
      auVar56 = vcmppd_avx(ZEXT1632(auVar14),auVar133,2);
      auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
      auVar179 = vpshufd_avx(auVar92,0x50);
      auVar92 = vpshufd_avx(auVar92,0xfa);
      auVar73._16_16_ = auVar92;
      auVar73._0_16_ = auVar179;
      auVar56 = vcmpps_avx(ZEXT1632(auVar14),ZEXT1632(auVar14),0xf);
      auVar56 = vblendvps_avx(ZEXT1632(auVar14),auVar56,auVar73);
      auVar184._0_4_ =
           auVar56._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000 ^
           ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar184._4_4_ = auVar56._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
      auVar184._8_4_ = auVar56._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
      auVar184._12_4_ = auVar56._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
      auVar190._16_4_ = auVar56._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
      auVar190._0_16_ = auVar184;
      auVar190._20_4_ = auVar56._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
      auVar190._24_4_ = auVar56._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
      auVar190._28_4_ = auVar56._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
      auVar92 = vshufps_avx(auVar184,auVar184,0x44);
      local_240 = (undefined1  [8])(auVar144._0_8_ * auVar92._0_8_);
      adStack_238[0] = auVar144._8_8_ * auVar92._8_8_;
      auVar74._16_8_ = adStack_238[1] * dVar142 * auVar92._0_8_;
      auVar74._0_16_ = _local_240;
      auVar74._24_8_ = auVar92._8_8_ * 0.0;
      adStack_238[1] = (double)vmovlpd_avx(auVar74._16_16_);
      auVar92 = vshufps_avx(auVar184,auVar184,0xee);
      local_220._0_8_ = auVar92._0_8_ * auVar33._0_8_;
      local_220._8_8_ = auVar92._8_8_ * auVar33._8_8_;
      auVar25._16_8_ = auVar92._0_8_ * local_210 * dVar143;
      auVar25._0_16_ = local_220;
      auVar25._24_8_ = auVar92._8_8_ * 0.0;
      local_210 = (double)vmovlpd_avx(auVar25._16_16_);
      auVar56 = vperm2f128_avx(auVar190,auVar190,0x11);
      local_200._0_8_ = auVar56._0_8_ * auVar90._0_8_;
      local_200._8_8_ = auVar56._0_8_ * auVar90._8_8_;
      auVar229._16_8_ = auVar56._16_8_ * local_1f0 * dVar141;
      auVar229._0_16_ = local_200;
      auVar229._24_8_ = auVar56._16_8_ * 0.0;
      auVar56 = vblendpd_avx(auVar74,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar152._0_8_ =
           auVar56._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar152._8_8_ = auVar56._8_8_ & _UNK_150aa8f48;
      auVar152._16_8_ = auVar56._16_8_ & _UNK_150aa8f50;
      auVar152._24_8_ = auVar56._24_8_ & _UNK_150aa8f58;
      auVar56 = vcmppd_avx(auVar152,
                           ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6
                          );
      local_1f0 = (double)vmovlpd_avx(auVar229._16_16_);
      auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
      if ((((SUB161(auVar92 >> 0x1f,0) & 1) == 0 && (SUB161(auVar92 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar92 >> 0x5f,0) & 1) == 0) && -1 < auVar92[0xf]) {
        auVar50 = ZEXT816(0) << 0x40;
        auVar97 = SUB6416(ZEXT864(0),0) << 0x40;
        auVar165._8_8_ = 0;
        auVar165._0_8_ = __real_3ff0000000000000;
      }
      else {
        auVar56 = vblendpd_avx(auVar25,
                               ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                               ,8);
        auVar153._0_8_ =
             auVar56._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff
        ;
        auVar153._8_8_ = auVar56._8_8_ & _UNK_150aa8f48;
        auVar153._16_8_ = auVar56._16_8_ & _UNK_150aa8f50;
        auVar153._24_8_ = auVar56._24_8_ & _UNK_150aa8f58;
        auVar56 = vcmppd_avx(auVar153,
                             ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d
                             ,6);
        auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
        if ((((SUB161(auVar92 >> 0x1f,0) & 1) != 0 || (SUB161(auVar92 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar92 >> 0x5f,0) & 1) != 0) || auVar92[0xf] < '\0') {
          auVar56 = vblendpd_avx(auVar229,
                                 ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                                 ,8);
          auVar154._0_8_ =
               auVar56._0_8_ &
               ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
          auVar154._8_8_ = auVar56._8_8_ & _UNK_150aa8f48;
          auVar154._16_8_ = auVar56._16_8_ & _UNK_150aa8f50;
          auVar154._24_8_ = auVar56._24_8_ & _UNK_150aa8f58;
          auVar56 = vcmppd_avx(auVar154,
                               ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d
                               ,6);
          auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
          if ((((SUB161(auVar92 >> 0x1f,0) & 1) != 0 || (SUB161(auVar92 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar92 >> 0x5f,0) & 1) != 0) || auVar92[0xf] < '\0') {
            auVar92 = vshufpd_avx(local_220,local_220,1);
            dVar119 = auVar229._16_8_ + (double)local_240 + auVar92._0_8_;
            if (dVar119 <= 0.0) {
              bVar4 = (double)local_240 < auVar92._0_8_;
              uVar89 = 2;
              if (auVar229._16_8_ <= *(double *)(local_240 + ((uint)bVar4 * 0x20 + (uint)bVar4 * 8))
                 ) {
                uVar89 = (ulonglong)bVar4;
              }
              iVar2 = *(int *)(&DAT_151c6d0a0 + uVar89 * 4);
              lVar9 = (longlong)iVar2;
              iVar3 = *(int *)(&DAT_151c6d0a0 + lVar9 * 4);
              iVar5 = (int)uVar89;
              dVar141 = __real_3ff0000000000000 /
                        SQRT(((*(double *)(local_240 + (uint)(iVar5 * 0x28)) -
                              *(double *)(local_240 + lVar9 * 0x28)) -
                             *(double *)(local_240 + (longlong)iVar3 * 0x28)) +
                             __real_3ff0000000000000);
              dVar119 = dVar141 * __real_3fe0000000000000;
              *(double *)((longlong)local_1c0 + (ulonglong)(uint)(iVar5 * 8)) =
                   (__real_3ff0000000000000 / dVar141) * __real_3fe0000000000000;
              local_1c0[lVar9] =
                   (*(double *)(local_240 + (longlong)(iVar2 + iVar5 * 4) * 8) +
                   *(double *)(local_240 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar119;
              local_1c0[iVar3] =
                   dVar119 * (*(double *)(local_240 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                             *(double *)(local_240 + (longlong)(iVar5 + iVar3 * 4) * 8));
              dVar119 = dVar119 * (*(double *)(local_240 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                                  *(double *)(local_240 + (longlong)(iVar2 + iVar3 * 4) * 8));
            }
            else {
              auVar92 = vshufpd_avx(_local_240,_local_240,1);
              auVar179 = vshufpd_avx(local_200,local_200,1);
              dVar141 = __real_3ff0000000000000 / SQRT(dVar119 + __real_3ff0000000000000);
              dVar119 = dVar141 * __real_3fe0000000000000;
              local_1c0[0] = dVar119 * (auVar25._16_8_ - auVar179._0_8_);
              local_1c0[1] = dVar119 * ((double)local_200._0_8_ - auVar74._16_8_);
              local_1c0[2] = dVar119 * (auVar92._0_8_ - (double)local_220._0_8_);
              dVar119 = (__real_3ff0000000000000 / dVar141) * __real_3fe0000000000000;
            }
            auVar211._8_8_ = 0;
            auVar211._0_8_ = local_1c0[2];
            auVar97._8_8_ = 0;
            auVar97._0_8_ = local_1c0[1];
            auVar50._8_8_ = 0;
            auVar50._0_8_ = local_1c0[0];
            auVar165._8_8_ = 0;
            auVar165._0_8_ = dVar119;
            goto LAB_140c82846;
          }
        }
        auVar50 = ZEXT816(0) << 0x40;
        auVar97 = SUB6416(ZEXT864(0),0) << 0x40;
        auVar165._8_8_ = 0;
        auVar165._0_8_ = __real_3ff0000000000000;
      }
LAB_140c82846:
      auVar92 = vunpcklpd_avx(auVar211,auVar165);
      auVar179 = vunpcklpd_avx(auVar50,auVar97);
      dVar141 = auVar92._0_8_;
      dVar143 = auVar92._8_8_;
      dVar142 = auVar179._0_8_;
      dVar158 = auVar179._8_8_;
      auVar22._0_8_ = dVar142 * dVar142 + dVar141 * dVar141;
      auVar22._8_8_ = dVar158 * dVar158 + dVar143 * dVar143;
      auVar92 = vshufpd_avx(auVar22,auVar22,1);
      dVar119 = auVar22._0_8_ + auVar92._0_8_;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = __real_3e45798ee2308c3a;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar119;
      auVar92 = vcmpsd_avx(auVar53,auVar23,6);
      uVar89 = ~auVar92._0_8_ & __real_ffffffffffffffff;
      dVar119 = __real_3ff0000000000000 / SQRT(dVar119);
      auVar116._0_8_ =
           ~uVar89 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar116._8_8_ = ~uVar89 & _UNK_150b54548;
      auVar116._16_8_ = ~uVar89 & _UNK_150b54550;
      auVar116._24_8_ = ~uVar89 & _UNK_150b54558;
      auVar200._0_8_ = (double)((ulonglong)(dVar142 * dVar119) & uVar89);
      auVar200._8_8_ = (double)((ulonglong)(dVar158 * dVar119) & uVar89);
      auVar207._16_8_ = (ulonglong)(dVar141 * dVar119) & uVar89;
      auVar207._0_16_ = auVar200;
      auVar207._24_8_ = (ulonglong)(dVar143 * dVar119) & uVar89;
      auVar32 = auVar207._16_16_ | auVar116._16_16_;
      auVar90 = vshufps_avx(auVar200,auVar200,0x4e);
      auVar92 = vshufps_avx(auVar32,auVar32,0x4e);
      dVar141 = auVar92._0_8_;
      auVar19._8_8_ = 0.0;
      auVar19._0_8_ = (double)uStack_1e0;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = local_1d8;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uStack_1d0;
      auVar31._8_8_ = dStack_f8;
      auVar31._0_8_ = local_100;
    }
    auVar92 = vunpcklpd_avx(auVar121,_local_190);
    auVar179 = vunpcklpd_avx(auVar31,local_1a0);
    auVar100._0_8_ =
         auVar92._0_8_ * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
    auVar100._8_8_ = auVar92._8_8_ * _UNK_150aa8e88;
    auVar117._16_8_ = auVar179._0_8_ * _DAT_150aa8e90;
    auVar117._0_16_ = auVar100;
    auVar117._24_8_ = auVar179._8_8_ * _UNK_150aa8e98;
    auVar14 = vunpcklpd_avx(auVar19,auVar54);
    auVar85._16_16_ = auVar100;
    auVar85._0_16_ = auVar100;
    auVar56 = vperm2f128_avx(auVar117,auVar117,0x11);
    auVar56 = vshufpd_avx(auVar85,auVar56,9);
    auVar92 = vunpcklpd_avx(auVar200,auVar90);
    auVar149._8_8_ = dVar141;
    auVar149._0_8_ = dVar141;
    auVar179 = vunpcklpd_avx(auVar32,auVar149);
    auVar86._0_8_ = auVar92._0_8_ * auVar56._0_8_;
    auVar86._8_8_ = auVar92._8_8_ * auVar56._8_8_;
    auVar86._16_8_ = auVar179._0_8_ * auVar56._16_8_;
    auVar86._24_8_ = auVar179._8_8_ * auVar56._24_8_;
    auVar144 = vunpcklpd_avx(auVar90,auVar32);
    auVar33 = vunpcklpd_avx(auVar200,auVar149);
    auVar196._0_8_ = auVar144._0_8_ * auVar100._0_8_;
    auVar196._8_8_ = auVar144._8_8_ * auVar100._8_8_;
    auVar196._16_8_ = auVar33._0_8_ * auVar117._16_8_;
    auVar196._24_8_ = auVar33._8_8_ * auVar117._24_8_;
    auVar56 = vsubpd_avx(auVar86,auVar196);
    auVar55._0_8_ = auVar56._0_8_ + auVar56._0_8_;
    auVar55._8_8_ = auVar56._8_8_ + auVar56._8_8_;
    auVar87._16_8_ = auVar56._16_8_ + auVar56._16_8_;
    auVar87._0_16_ = auVar55;
    auVar87._24_8_ = auVar56._24_8_ + auVar56._24_8_;
    auVar197._16_16_ = auVar55;
    auVar197._0_16_ = auVar55;
    auVar56 = vperm2f128_avx(auVar87,auVar87,0x11);
    auVar56 = vshufpd_avx(auVar197,auVar56,9);
    dVar119 = auVar100._0_8_ + dVar141 * auVar56._0_8_;
    dVar142 = auVar100._8_8_ + dVar141 * auVar56._8_8_;
    dVar143 = auVar117._16_8_ + dVar141 * auVar56._16_8_;
    dVar141 = auVar117._24_8_ + dVar141 * auVar56._24_8_;
    auVar58 = vperm2f128_avx(auVar87,auVar87,1);
    auVar58 = vshufpd_avx(auVar58,auVar87,0xc);
    auVar84._0_8_ = auVar92._0_8_ * auVar58._0_8_;
    auVar84._8_8_ = auVar92._8_8_ * auVar58._8_8_;
    auVar84._16_8_ = auVar179._0_8_ * auVar58._16_8_;
    auVar84._24_8_ = auVar179._8_8_ * auVar58._24_8_;
    auVar139._0_8_ = auVar144._0_8_ * auVar56._0_8_;
    auVar139._8_8_ = auVar144._8_8_ * auVar56._8_8_;
    auVar139._16_8_ = auVar33._0_8_ * auVar56._16_8_;
    auVar139._24_8_ = auVar33._8_8_ * auVar56._24_8_;
    goto LAB_140c82989;
  }
  auVar181._8_8_ = 0;
  auVar181._0_8_ = *(double *)param_2[4];
  auVar198._8_8_ = 0;
  auVar198._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar119 = *(double *)param_2[5];
  auVar226._8_8_ = 0;
  auVar226._0_8_ = dVar119;
  auVar56 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar102,1);
  auVar92 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
  auVar92 = vpackssdw_avx(auVar92,(undefined1  [16])0x0);
  local_d0 = SUB3216(*param_8,0x10);
  auVar144 = vpackssdw_avx(auVar14,local_d0);
  auVar92 = vpand_avx(auVar92,auVar144);
  if ((((((((SUB161(auVar92 >> 0xf,0) & 1) == 0 && (SUB161(auVar92 >> 0x1f,0) & 1) == 0) &&
          (SUB161(auVar92 >> 0x2f,0) & 1) == 0) && (SUB161(auVar92 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar92 >> 0x4f,0) & 1) == 0) && (SUB161(auVar92 >> 0x5f,0) & 1) == 0) &&
      (SUB161(auVar92 >> 0x6f,0) & 1) == 0) && -1 < auVar92[0xf]) {
    dVar119 = *(double *)(param_2[1] + 8);
    auVar15._8_8_ = dVar119;
    auVar15._0_8_ = dVar119;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar141 = *(double *)*param_2;
    auVar46._8_8_ = dVar141;
    auVar46._0_8_ = dVar141;
    auVar105 = vperm2f128_avx(auVar221,auVar221,1);
    auVar56 = vshufpd_avx(auVar105,auVar105,5);
    dVar142 = *(double *)(*param_2 + 8);
    auVar122._8_8_ = dVar142;
    auVar122._0_8_ = dVar142;
    dVar143 = *(double *)param_2[1];
    auVar231._8_8_ = dVar143;
    auVar231._0_8_ = dVar143;
    auVar58 = vshufpd_avx(auVar221,auVar221,5);
    auVar147._0_8_ =
         auVar58._0_8_ * dVar143 *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         auVar221._0_8_ * dVar119 +
         auVar56._0_8_ * dVar141 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
         auVar105._0_8_ * dVar142 *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    auVar147._8_8_ =
         auVar58._8_8_ * dVar143 * _UNK_150b54428 +
         auVar221._8_8_ * dVar119 + auVar56._8_8_ * dVar141 * _UNK_150b543e8 +
         auVar105._8_8_ * dVar142 * _UNK_150b54408;
    auVar155._16_8_ =
         auVar58._16_8_ * dVar143 * _UNK_150b54430 +
         auVar221._16_8_ * dVar119 + auVar56._16_8_ * dVar141 * _UNK_150b543f0 +
         auVar105._16_8_ * dVar142 * _UNK_150b54410;
    auVar155._0_16_ = auVar147;
    auVar155._24_8_ =
         auVar58._24_8_ * dVar143 * _UNK_150b54438 +
         auVar221._24_8_ * dVar119 + auVar56._24_8_ * dVar141 * _UNK_150b543f8 +
         auVar105._24_8_ * dVar142 * _UNK_150b54418;
    auVar90 = vshufpd_avx(auVar147,auVar147,1);
    auVar31 = auVar155._16_16_;
    auVar92 = vshufpd_avx(auVar31,auVar31,1);
    dVar141 = auVar92._0_8_;
    auVar144 = vmovlhps_avx(auVar226,auVar94);
    auVar33 = vmovlhps_avx(auVar181,auVar198);
    auVar164._0_8_ = local_120._0_8_ * auVar33._0_8_;
    auVar164._8_8_ = local_120._8_8_ * auVar33._8_8_;
    auVar173._16_8_ = auVar179._0_8_ * auVar144._0_8_;
    auVar173._0_16_ = auVar164;
    auVar173._24_8_ = auVar144._8_8_ * 0.0;
    auVar191._16_16_ = auVar164;
    auVar191._0_16_ = auVar164;
    auVar56 = vperm2f128_avx(auVar173,auVar173,0x11);
    auVar56 = vshufpd_avx(auVar191,auVar56,9);
    auVar14 = vunpcklpd_avx(auVar46,auVar122);
    auVar92 = vblendpd_avx(auVar46,auVar231,1);
    auVar179 = vunpcklpd_avx(auVar231,auVar15);
    auVar192._0_8_ = auVar56._0_8_ * auVar14._0_8_;
    auVar192._8_8_ = auVar56._8_8_ * auVar14._8_8_;
    auVar192._16_8_ = auVar56._16_8_ * auVar179._0_8_;
    auVar192._24_8_ = auVar56._24_8_ * auVar179._8_8_;
    auVar228 = vunpcklpd_avx(auVar122,auVar231);
    auVar179 = vblendpd_avx(auVar122,auVar46,1);
    auVar54 = vunpcklpd_avx(auVar46,auVar15);
    auVar75._0_8_ = auVar164._0_8_ * auVar228._0_8_;
    auVar75._8_8_ = auVar164._8_8_ * auVar228._8_8_;
    auVar75._16_8_ = auVar173._16_8_ * auVar54._0_8_;
    auVar75._24_8_ = auVar173._24_8_ * auVar54._8_8_;
    auVar56 = vsubpd_avx(auVar192,auVar75);
    auVar47._0_8_ = auVar56._0_8_ + auVar56._0_8_;
    auVar47._8_8_ = auVar56._8_8_ + auVar56._8_8_;
    auVar76._16_8_ = auVar56._16_8_ + auVar56._16_8_;
    auVar76._0_16_ = auVar47;
    auVar76._24_8_ = auVar56._24_8_ + auVar56._24_8_;
    auVar193._16_16_ = auVar47;
    auVar193._0_16_ = auVar47;
    auVar56 = vshufpd_avx(auVar193,ZEXT1632(auVar76._16_16_),1);
    auVar58 = vperm2f128_avx(auVar76,auVar76,1);
    auVar58 = vshufpd_avx(auVar58,auVar76,4);
    auVar77._0_8_ = auVar14._0_8_ * auVar58._0_8_;
    auVar77._8_8_ = auVar14._8_8_ * auVar58._8_8_;
    auVar77._16_8_ = auVar92._0_8_ * auVar58._16_8_;
    auVar77._24_8_ = auVar92._8_8_ * auVar58._24_8_;
    auVar134._0_8_ = auVar228._0_8_ * auVar56._0_8_;
    auVar134._8_8_ = auVar228._8_8_ * auVar56._8_8_;
    auVar134._16_8_ = auVar179._0_8_ * auVar56._16_8_;
    auVar134._24_8_ = auVar179._8_8_ * auVar56._24_8_;
    auVar58 = vsubpd_avx(auVar77,auVar134);
    auVar135._16_16_ = auVar58._0_16_;
    auVar135._0_16_ = auVar58._0_16_;
    auVar58 = vshufpd_avx(auVar135,ZEXT1632(auVar58._16_16_),1);
    auVar16._0_8_ = *(double *)param_2[2] + auVar164._0_8_ + dVar119 * auVar56._0_8_ + auVar58._0_8_
    ;
    auVar16._8_8_ =
         *(double *)(param_2[2] + 8) + auVar164._8_8_ + dVar119 * auVar56._8_8_ + auVar58._8_8_;
    auVar26._16_8_ =
         *(double *)param_2[3] + auVar173._16_8_ + dVar119 * auVar56._16_8_ + auVar58._16_8_;
    auVar26._0_16_ = auVar16;
    auVar26._24_8_ = auVar173._24_8_ + dVar119 * auVar56._24_8_ + auVar58._24_8_ + 0.0;
    auVar51 = vshufpd_avx(auVar16,auVar16,1);
    auVar95._0_8_ =
         auVar33._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    auVar95._8_8_ = auVar33._8_8_ * _UNK_150b54508;
    auVar113._16_8_ = auVar144._0_8_ * _UNK_150b54510;
    auVar113._0_16_ = auVar95;
    auVar113._24_8_ = auVar144._8_8_ * _UNK_150b54518;
    auVar30 = auVar26._16_16_;
    auVar92 = vshufpd_avx(auVar95,auVar95,1);
    _local_190 = auVar113._16_16_;
    local_c0 = vshufpd_avx(_local_190,_local_190,1);
  }
  else {
    auVar34._0_8_ = auVar221._0_8_ + auVar221._0_8_;
    auVar34._8_8_ = auVar221._8_8_ + auVar221._8_8_;
    auVar59._16_8_ = auVar221._16_8_ + auVar221._16_8_;
    auVar59._0_16_ = auVar34;
    auVar59._24_8_ = auVar221._24_8_ + auVar221._24_8_;
    auVar91._0_8_ = auVar221._0_8_ * auVar34._0_8_;
    auVar91._8_8_ = auVar221._8_8_ * auVar34._8_8_;
    auVar106._16_8_ = auVar221._16_8_ * auVar59._16_8_;
    auVar106._0_16_ = auVar91;
    auVar106._24_8_ = auVar221._24_8_ * auVar59._24_8_;
    auVar92 = vshufpd_avx(auVar91,auVar91,1);
    auVar56 = vperm2f128_avx(auVar106,auVar106,1);
    auVar56 = vshufpd_avx(auVar56,auVar56,4);
    auVar107._0_8_ = auVar92._0_8_ + auVar56._0_8_;
    auVar107._8_8_ = auVar92._8_8_ + auVar56._8_8_;
    auVar107._16_8_ = auVar91._0_8_ + auVar56._16_8_;
    auVar107._24_8_ = auVar91._8_8_ + auVar56._24_8_;
    auVar105 = vsubpd_avx(auVar126,auVar107);
    auVar58 = vperm2f128_avx(auVar59,auVar59,1);
    auVar56 = vshufpd_avx(auVar59,auVar58,1);
    auVar230._0_8_ = auVar221._0_8_ * auVar56._0_8_;
    auVar230._8_8_ = auVar221._8_8_ * auVar56._8_8_;
    auVar230._16_8_ = auVar221._0_8_ * auVar56._16_8_;
    auVar230._24_8_ = auVar221._0_8_ * auVar56._24_8_;
    auVar56 = vperm2f128_avx(auVar221,auVar221,0x11);
    auVar56 = vshufpd_avx(auVar56,auVar56,0xf);
    auVar60._16_16_ = auVar34;
    auVar60._0_16_ = auVar34;
    auVar58 = vshufpd_avx(auVar58,auVar60,4);
    auVar61._0_8_ = auVar56._0_8_ * auVar58._0_8_;
    auVar61._8_8_ = auVar56._8_8_ * auVar58._8_8_;
    auVar61._16_8_ = auVar56._16_8_ * auVar58._16_8_;
    auVar61._24_8_ = auVar56._24_8_ * auVar58._24_8_;
    auVar217._0_8_ = auVar230._0_8_ + auVar61._0_8_;
    auVar217._8_8_ = auVar230._8_8_ + auVar61._8_8_;
    auVar222._16_8_ = auVar230._16_8_ + auVar61._16_8_;
    auVar222._0_16_ = auVar217;
    auVar222._24_8_ = auVar230._24_8_ + auVar61._24_8_;
    auVar56 = vsubpd_avx(auVar230,auVar61);
    local_180 = vunpcklpd_avx(auVar105._0_16_,auVar217);
    local_170[0] = (double)vmovlps_avx(auVar56._16_16_);
    local_170[1] = 0.0;
    local_160 = vblendpd_avx(auVar105._0_16_,auVar56._0_16_,1);
    local_150 = vmovhpd_avx(auVar217);
    local_148 = 0;
    local_140 = vblendpd_avx(auVar56._0_16_,auVar222._16_16_,1);
    local_130 = vmovlps_avx(auVar105._16_16_);
    local_128 = 0;
    local_110 = vmovlpd_avx(auVar179);
    local_108 = 0x3ff0000000000000;
    auVar92 = *param_2;
    auVar179 = param_2[2];
    uVar1 = *(undefined8 *)param_2[1];
    auVar35._8_8_ = uVar1;
    auVar35._0_8_ = uVar1;
    auVar62._16_8_ = uVar1;
    auVar62._0_16_ = auVar35;
    auVar62._24_8_ = uVar1;
    dVar141 = *(double *)(param_2[1] + 8);
    auVar159._8_8_ = dVar141;
    auVar159._0_8_ = dVar141;
    auVar56 = vblendpd_avx(ZEXT1632(auVar92),auVar62,4);
    auVar144 = vunpcklpd_avx(auVar35,auVar159);
    dVar142 = auVar92._0_8_;
    auVar218._0_8_ = dVar142 + dVar142;
    dVar143 = auVar92._8_8_;
    auVar218._8_8_ = dVar143 + dVar143;
    auVar223._16_8_ = auVar144._0_8_ + auVar144._0_8_;
    auVar223._0_16_ = auVar218;
    auVar223._24_8_ = auVar144._8_8_ + auVar144._8_8_;
    auVar36._0_8_ = auVar56._0_8_ * auVar218._0_8_;
    auVar36._8_8_ = auVar56._8_8_ * auVar218._8_8_;
    auVar63._16_8_ = auVar56._16_8_ * auVar223._16_8_;
    auVar63._0_16_ = auVar36;
    auVar63._24_8_ = auVar56._24_8_ * auVar223._24_8_;
    auVar92 = vshufpd_avx(auVar36,auVar36,1);
    auVar56 = vperm2f128_avx(auVar63,auVar63,1);
    auVar56 = vshufpd_avx(auVar56,auVar56,4);
    auVar64._0_8_ = auVar92._0_8_ + auVar56._0_8_;
    auVar64._8_8_ = auVar92._8_8_ + auVar56._8_8_;
    auVar64._16_8_ = auVar36._0_8_ + auVar56._16_8_;
    auVar64._24_8_ = auVar36._8_8_ + auVar56._24_8_;
    auVar56 = vsubpd_avx(auVar126,auVar64);
    auVar92 = vmovlhps_avx(auVar181,auVar198);
    auVar127._16_8_ = dVar119;
    auVar127._0_16_ = auVar92;
    auVar127._24_8_ = 0;
    auVar37._0_8_ = auVar92._0_8_ * auVar56._0_8_;
    auVar37._8_8_ = auVar92._8_8_ * auVar56._8_8_;
    auVar65._16_8_ = dVar119 * auVar56._16_8_;
    auVar65._0_16_ = auVar37;
    auVar65._24_8_ = auVar56._24_8_ * 0.0;
    auVar58 = vperm2f128_avx(auVar223,auVar223,1);
    auVar56 = vshufpd_avx(auVar223,auVar58,1);
    auVar108._0_8_ = auVar56._0_8_ * dVar142;
    auVar108._8_8_ = auVar56._8_8_ * dVar143;
    auVar108._16_8_ = auVar56._16_8_ * *(double *)*param_2;
    auVar108._24_8_ = auVar56._24_8_ * *(double *)*param_2;
    auVar224._16_16_ = auVar218;
    auVar224._0_16_ = auVar218;
    auVar56 = vshufpd_avx(auVar58,auVar224,4);
    auVar171._0_8_ = auVar56._0_8_ * dVar141;
    auVar171._8_8_ = auVar56._8_8_ * dVar141;
    auVar171._16_8_ = auVar56._16_8_ * dVar141;
    auVar171._24_8_ = auVar56._24_8_ * dVar141;
    auVar208._0_8_ = (auVar108._0_8_ + auVar171._0_8_) * auVar92._0_8_;
    auVar208._8_8_ = (auVar108._8_8_ + auVar171._8_8_) * auVar92._8_8_;
    auVar212._16_8_ = (auVar108._16_8_ + auVar171._16_8_) * dVar119;
    auVar212._0_16_ = auVar208;
    auVar212._24_8_ = (auVar108._24_8_ + auVar171._24_8_) * 0.0;
    auVar58 = vsubpd_avx(auVar108,auVar171);
    auVar92 = vmovlhps_avx(auVar198,auVar226);
    uVar1 = *(undefined8 *)(param_2[5] + 8);
    auVar204._8_8_ = uVar1;
    auVar204._0_8_ = uVar1;
    auVar204._16_8_ = uVar1;
    auVar204._24_8_ = uVar1;
    auVar56 = vblendpd_avx(auVar127,auVar204,8);
    local_100 = auVar56._0_8_ *
                ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    dStack_f8 = auVar56._8_8_ * _UNK_150b54508;
    dStack_f0 = auVar56._16_8_ * _UNK_150b54510;
    dStack_e8 = auVar56._24_8_ * _UNK_150b54518;
    auVar120._0_8_ = auVar58._0_8_ * auVar92._0_8_;
    auVar120._8_8_ = auVar58._8_8_ * auVar92._8_8_;
    auVar128._16_8_ = auVar58._16_8_ * *(double *)param_2[4];
    auVar128._0_16_ = auVar120;
    auVar128._24_8_ = auVar58._24_8_ * 0.0;
    dStack_188 = dStack_e8;
    local_190 = (undefined1  [8])dStack_f0;
    auVar160._8_8_ = 0;
    auVar160._0_8_ = *(ulonglong *)param_2[3];
    auVar92 = CONCAT88(auVar208._0_8_,auVar208._0_8_);
    auVar56 = vblendpd_avx(ZEXT1632(auVar37),ZEXT1632(auVar92),2);
    auVar56 = vblendpd_avx(auVar56,auVar128,4);
    auVar58 = vblendpd_avx(ZEXT1632(auVar212._16_16_),auVar128,2);
    auVar58 = vblendpd_avx(auVar58,auVar65,4);
    auVar129._16_16_ = auVar208;
    auVar129._0_16_ = auVar120;
    auVar105 = vshufpd_avx(auVar129,ZEXT1632(auVar37),0xe);
    auVar92 = vmovhpd_avx(auVar160,__real_3ff0000000000000);
    lVar9 = 0x18;
    do {
      dVar119 = *(double *)(local_1a0 + lVar9 + 8);
      dVar141 = *(double *)(local_190 + lVar9 + 8);
      dVar142 = *(double *)(local_190 + lVar9);
      dVar143 = *(double *)(local_180 + lVar9);
      *(double *)((longlong)adStack_258 + lVar9) =
           auVar56._0_8_ * dVar119 + auVar58._0_8_ * dVar141 + auVar105._0_8_ * dVar142 +
           auVar179._0_8_ * dVar143;
      *(double *)((longlong)adStack_258 + lVar9 + 8) =
           auVar56._8_8_ * dVar119 + auVar58._8_8_ * dVar141 + auVar105._8_8_ * dVar142 +
           auVar179._8_8_ * dVar143;
      *(double *)((longlong)adStack_258 + lVar9 + 0x10) =
           auVar56._16_8_ * dVar119 + auVar58._16_8_ * dVar141 + auVar105._16_8_ * dVar142 +
           auVar92._0_8_ * dVar143;
      *(double *)(local_240 + lVar9) =
           auVar56._24_8_ * dVar119 + auVar58._24_8_ * dVar141 + auVar105._24_8_ * dVar142 +
           auVar92._8_8_ * dVar143;
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != 0x98);
    dVar119 = (double)local_240 * (double)local_240 + adStack_238[0] * adStack_238[0] +
              adStack_238[1] * adStack_238[1];
    dVar141 = (double)local_220._0_8_ * (double)local_220._0_8_ +
              (double)local_220._8_8_ * (double)local_220._8_8_ + local_210 * local_210;
    dVar142 = __real_3ff0000000000000;
    if (0.0 <= dVar119 + __real_be45798ee2308c3a) {
      dVar142 = __real_3ff0000000000000 / SQRT(dVar119);
    }
    dVar119 = local_1f0 * local_1f0 +
              (double)local_200._0_8_ * (double)local_200._0_8_ +
              (double)local_200._8_8_ * (double)local_200._8_8_;
    dVar143 = __real_3ff0000000000000;
    if (0.0 <= dVar141 + __real_be45798ee2308c3a) {
      dVar143 = __real_3ff0000000000000 / SQRT(dVar141);
    }
    auVar6._8_8_ = dStack_f8;
    auVar6._0_8_ = local_100;
    auVar92 = vpermilpd_avx(auVar6,1);
    local_1a0 = auVar92;
    local_c0 = vpermilpd_avx(_local_190,1);
    auVar227 = ZEXT816(0);
    dVar141 = __real_3ff0000000000000;
    if (0.0 <= dVar119 + __real_be45798ee2308c3a) {
      dVar141 = __real_3ff0000000000000 / SQRT(dVar119);
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar142 * (double)local_240;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = dVar142 * adStack_238[0];
    auVar33 = vunpcklpd_avx(auVar10,auVar38);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (double)local_220._0_8_ * dVar143;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = (double)local_220._8_8_ * dVar143;
    auVar90 = vunpcklpd_avx(auVar11,auVar39);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar141 * (double)local_200._0_8_;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = dVar141 * (double)local_200._8_8_;
    auVar228 = vunpcklpd_avx(auVar12,auVar40);
    auVar54 = ZEXT816(0);
    auVar8._8_8_ = dStack_f8;
    auVar8._0_8_ = local_100;
    auVar8._16_8_ = dStack_f0;
    auVar8._24_8_ = dStack_e8;
    auVar56 = vcmppd_avx(ZEXT1632(auVar54),auVar8,2);
    auVar179 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
    auVar144 = vpshufd_avx(auVar179,0x50);
    auVar179 = vpshufd_avx(auVar179,0xfa);
    auVar213._16_16_ = auVar179;
    auVar213._0_16_ = auVar144;
    auVar56 = vcmpps_avx(ZEXT1632(auVar54),ZEXT1632(auVar54),0xf);
    auVar56 = vblendvps_avx(ZEXT1632(auVar54),auVar56,auVar213);
    auVar182._0_4_ =
         auVar56._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000 ^
         ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar182._4_4_ = auVar56._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
    auVar182._8_4_ = auVar56._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
    auVar182._12_4_ = auVar56._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
    auVar188._16_4_ = auVar56._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
    auVar188._0_16_ = auVar182;
    auVar188._20_4_ = auVar56._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
    auVar188._24_4_ = auVar56._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
    auVar188._28_4_ = auVar56._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
    auVar179 = vshufps_avx(auVar182,auVar182,0x44);
    local_240 = (undefined1  [8])(auVar33._0_8_ * auVar179._0_8_);
    adStack_238[0] = auVar33._8_8_ * auVar179._8_8_;
    auVar234._16_8_ = dVar142 * adStack_238[1] * auVar179._0_8_;
    auVar234._0_16_ = _local_240;
    auVar234._24_8_ = auVar179._8_8_ * 0.0;
    adStack_238[1] = (double)vmovlpd_avx(auVar234._16_16_);
    auVar179 = vshufps_avx(auVar182,auVar182,0xee);
    local_220._0_8_ = auVar179._0_8_ * auVar90._0_8_;
    local_220._8_8_ = auVar179._8_8_ * auVar90._8_8_;
    auVar233._16_8_ = auVar179._0_8_ * local_210 * dVar143;
    auVar233._0_16_ = local_220;
    auVar233._24_8_ = auVar179._8_8_ * 0.0;
    local_210 = (double)vmovlpd_avx(auVar233._16_16_);
    auVar56 = vperm2f128_avx(auVar188,auVar188,0x11);
    local_200._0_8_ = auVar56._0_8_ * auVar228._0_8_;
    local_200._8_8_ = auVar56._0_8_ * auVar228._8_8_;
    auVar235._16_8_ = auVar56._16_8_ * dVar141 * local_1f0;
    auVar235._0_16_ = local_200;
    auVar235._24_8_ = auVar56._16_8_ * 0.0;
    auVar56 = vblendpd_avx(auVar234,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar109._0_8_ =
         auVar56._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar109._8_8_ = auVar56._8_8_ & _UNK_150aa8f48;
    auVar109._16_8_ = auVar56._16_8_ & _UNK_150aa8f50;
    auVar109._24_8_ = auVar56._24_8_ & _UNK_150aa8f58;
    local_1f0 = (double)vmovlpd_avx(auVar235._16_16_);
    auVar56 = vcmppd_avx(auVar109,
                         ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6);
    auVar179 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
    auVar179 = vpackssdw_avx(auVar179,(undefined1  [16])0x0);
    auVar33 = vpcmpeqd_avx(local_d0,(undefined1  [16])0x0);
    auVar144 = vpcmpeqd_avx(auVar14,(undefined1  [16])0x0);
    auVar144 = vpackssdw_avx(auVar144,auVar33);
    auVar179 = vpandn_avx(auVar144,auVar179);
    if ((((((((((((((((SUB161(auVar179 >> 7,0) & 1) == 0 && (SUB161(auVar179 >> 0xf,0) & 1) == 0) &&
                    (SUB161(auVar179 >> 0x17,0) & 1) == 0) && (SUB161(auVar179 >> 0x1f,0) & 1) == 0)
                  && (SUB161(auVar179 >> 0x27,0) & 1) == 0) && (SUB161(auVar179 >> 0x2f,0) & 1) == 0
                 ) && (SUB161(auVar179 >> 0x37,0) & 1) == 0) &&
               (SUB161(auVar179 >> 0x3f,0) & 1) == 0) && (SUB161(auVar179 >> 0x47,0) & 1) == 0) &&
             (SUB161(auVar179 >> 0x4f,0) & 1) == 0) && (SUB161(auVar179 >> 0x57,0) & 1) == 0) &&
           (SUB161(auVar179 >> 0x5f,0) & 1) == 0) && (SUB161(auVar179 >> 0x67,0) & 1) == 0) &&
         (SUB161(auVar179 >> 0x6f,0) & 1) == 0) && (SUB161(auVar179 >> 0x77,0) & 1) == 0) &&
        -1 < auVar179[0xf]) {
      auVar17 = ZEXT816(0) << 0x40;
      auVar41 = (undefined1  [16])0x0;
      auVar209._8_8_ = 0;
      auVar209._0_8_ = __real_3ff0000000000000;
    }
    else {
      auVar179 = vpcmpeqd_avx(auVar14,(undefined1  [16])0x0);
      auVar179 = vpackssdw_avx(auVar179,auVar33);
      auVar56 = vblendpd_avx(auVar233,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar130._0_8_ =
           auVar56._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar130._8_8_ = auVar56._8_8_ & _UNK_150aa8f48;
      auVar130._16_8_ = auVar56._16_8_ & _UNK_150aa8f50;
      auVar130._24_8_ = auVar56._24_8_ & _UNK_150aa8f58;
      auVar56 = vcmppd_avx(auVar130,
                           ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6
                          );
      auVar144 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
      auVar144 = vpackssdw_avx(auVar144,(undefined1  [16])0x0);
      auVar179 = vpandn_avx(auVar179,auVar144);
      auVar209._8_8_ = 0;
      auVar209._0_8_ = __real_3ff0000000000000;
      if ((((((((((((((((SUB161(auVar179 >> 7,0) & 1) != 0 || (SUB161(auVar179 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar179 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar179 >> 0x1f,0) & 1) != 0) || (SUB161(auVar179 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar179 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar179 >> 0x37,0) & 1) != 0) || (SUB161(auVar179 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar179 >> 0x47,0) & 1) != 0) || (SUB161(auVar179 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar179 >> 0x57,0) & 1) != 0) || (SUB161(auVar179 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar179 >> 0x67,0) & 1) != 0) || (SUB161(auVar179 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar179 >> 0x77,0) & 1) != 0) || auVar179[0xf] < '\0') {
        auVar179 = vpcmpeqd_avx(local_d0,(undefined1  [16])0x0);
        auVar144 = vpcmpeqd_avx(auVar14,(undefined1  [16])0x0);
        auVar179 = vpackssdw_avx(auVar144,auVar179);
        auVar56 = vblendpd_avx(auVar235,
                               ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                               ,8);
        auVar131._0_8_ =
             auVar56._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff
        ;
        auVar131._8_8_ = auVar56._8_8_ & _UNK_150aa8f48;
        auVar131._16_8_ = auVar56._16_8_ & _UNK_150aa8f50;
        auVar131._24_8_ = auVar56._24_8_ & _UNK_150aa8f58;
        auVar56 = vcmppd_avx(auVar131,
                             ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d
                             ,6);
        auVar144 = vpackssdw_avx(auVar56._0_16_,auVar56._16_16_);
        auVar144 = vpackssdw_avx(auVar144,(undefined1  [16])0x0);
        auVar179 = vpandn_avx(auVar179,auVar144);
        if ((((((((((((((((SUB161(auVar179 >> 7,0) & 1) != 0 || (SUB161(auVar179 >> 0xf,0) & 1) != 0
                         ) || (SUB161(auVar179 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar179 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar179 >> 0x27,0) & 1) != 0) ||
                     (SUB161(auVar179 >> 0x2f,0) & 1) != 0) || (SUB161(auVar179 >> 0x37,0) & 1) != 0
                    ) || (SUB161(auVar179 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar179 >> 0x47,0) & 1) != 0) || (SUB161(auVar179 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar179 >> 0x57,0) & 1) != 0) || (SUB161(auVar179 >> 0x5f,0) & 1) != 0)
              || (SUB161(auVar179 >> 0x67,0) & 1) != 0) || (SUB161(auVar179 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar179 >> 0x77,0) & 1) != 0) || auVar179[0xf] < '\0') {
          auVar179 = vshufpd_avx(local_220,local_220,1);
          dVar119 = auVar235._16_8_ + (double)local_240 + auVar179._0_8_;
          if (dVar119 <= 0.0) {
            bVar4 = (double)local_240 < auVar179._0_8_;
            uVar89 = 2;
            if (auVar235._16_8_ <= *(double *)(local_240 + ((uint)bVar4 * 0x20 + (uint)bVar4 * 8)))
            {
              uVar89 = (ulonglong)bVar4;
            }
            iVar2 = *(int *)(&DAT_151c6d0a0 + uVar89 * 4);
            lVar9 = (longlong)iVar2;
            iVar3 = *(int *)(&DAT_151c6d0a0 + lVar9 * 4);
            iVar5 = (int)uVar89;
            dVar141 = __real_3ff0000000000000 /
                      SQRT(((*(double *)(local_240 + (uint)(iVar5 * 0x28)) -
                            *(double *)(local_240 + lVar9 * 0x28)) -
                           *(double *)(local_240 + (longlong)iVar3 * 0x28)) +
                           __real_3ff0000000000000);
            dVar119 = dVar141 * __real_3fe0000000000000;
            *(double *)((longlong)local_1c0 + (ulonglong)(uint)(iVar5 * 8)) =
                 (__real_3ff0000000000000 / dVar141) * __real_3fe0000000000000;
            local_1c0[lVar9] =
                 (*(double *)(local_240 + (longlong)(iVar2 + iVar5 * 4) * 8) +
                 *(double *)(local_240 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar119;
            local_1c0[iVar3] =
                 dVar119 * (*(double *)(local_240 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                           *(double *)(local_240 + (longlong)(iVar5 + iVar3 * 4) * 8));
            auVar209._8_8_ = 0;
            auVar209._0_8_ =
                 dVar119 * (*(double *)(local_240 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                           *(double *)(local_240 + (longlong)(iVar2 + iVar3 * 4) * 8));
            auVar17._8_8_ = 0;
            auVar17._0_8_ = local_1c0[0];
            auVar41._8_8_ = 0;
            auVar41._0_8_ = local_1c0[1];
            auVar227._8_8_ = 0;
            auVar227._0_8_ = local_1c0[2];
          }
          else {
            auVar179 = vshufpd_avx(_local_240,_local_240,1);
            auVar144 = vshufpd_avx(local_200,local_200,1);
            dVar141 = __real_3ff0000000000000 / SQRT(dVar119 + __real_3ff0000000000000);
            dVar119 = dVar141 * __real_3fe0000000000000;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (auVar233._16_8_ - auVar144._0_8_) * dVar119;
            auVar41._8_8_ = 0;
            auVar41._0_8_ = ((double)local_200._0_8_ - auVar234._16_8_) * dVar119;
            auVar227._8_8_ = 0;
            auVar227._0_8_ = (auVar179._0_8_ - (double)local_220._0_8_) * dVar119;
            auVar209._8_8_ = 0;
            auVar209._0_8_ = (__real_3ff0000000000000 / dVar141) * __real_3fe0000000000000;
          }
          goto LAB_140c825d3;
        }
      }
      auVar17 = ZEXT816(0) << 0x40;
      auVar41 = (undefined1  [16])0x0;
    }
LAB_140c825d3:
    auVar179 = vunpcklpd_avx(auVar227,auVar209);
    auVar144 = vunpcklpd_avx(auVar17,auVar41);
    dVar141 = auVar179._0_8_;
    dVar143 = auVar179._8_8_;
    dVar142 = auVar144._0_8_;
    dVar158 = auVar144._8_8_;
    auVar20._0_8_ = dVar142 * dVar142 + dVar141 * dVar141;
    auVar20._8_8_ = dVar158 * dVar158 + dVar143 * dVar143;
    auVar179 = vshufpd_avx(auVar20,auVar20,1);
    dVar119 = auVar20._0_8_ + auVar179._0_8_;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = __real_3e45798ee2308c3a;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar119;
    auVar179 = vcmpsd_avx(auVar98,auVar21,6);
    uVar89 = ~auVar179._0_8_ & __real_ffffffffffffffff;
    dVar119 = __real_3ff0000000000000 / SQRT(dVar119);
    auVar114._0_8_ =
         ~uVar89 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar114._8_8_ = ~uVar89 & _UNK_150b54548;
    auVar114._16_8_ = ~uVar89 & _UNK_150b54550;
    auVar114._24_8_ = ~uVar89 & _UNK_150b54558;
    auVar147._0_8_ = (double)((ulonglong)(dVar142 * dVar119) & uVar89);
    auVar147._8_8_ = (double)((ulonglong)(dVar158 * dVar119) & uVar89);
    auVar157._16_8_ = (ulonglong)(dVar141 * dVar119) & uVar89;
    auVar157._0_16_ = auVar147;
    auVar157._24_8_ = (ulonglong)(dVar143 * dVar119) & uVar89;
    auVar31 = auVar157._16_16_ | auVar114._16_16_;
    auVar90 = vshufps_avx(auVar147,auVar147,0x4e);
    auVar179 = vshufps_avx(auVar31,auVar31,0x4e);
    dVar141 = auVar179._0_8_;
    auVar16._8_8_ = 0.0;
    auVar16._0_8_ = (double)uStack_1e0;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = local_1d8;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uStack_1d0;
    auVar95._8_8_ = dStack_f8;
    auVar95._0_8_ = local_100;
  }
  auVar92 = vunpcklpd_avx(auVar95,auVar92);
  auVar179 = vunpcklpd_avx(_local_190,local_c0);
  auVar99._0_8_ =
       auVar92._0_8_ * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
  auVar99._8_8_ = auVar92._8_8_ * _UNK_150aa8e88;
  auVar115._16_8_ = auVar179._0_8_ * _DAT_150aa8e90;
  auVar115._0_16_ = auVar99;
  auVar115._24_8_ = auVar179._8_8_ * _UNK_150aa8e98;
  auVar14 = vunpcklpd_avx(auVar16,auVar51);
  auVar81._16_16_ = auVar99;
  auVar81._0_16_ = auVar99;
  auVar56 = vperm2f128_avx(auVar115,auVar115,0x11);
  auVar56 = vshufpd_avx(auVar81,auVar56,9);
  auVar92 = vunpcklpd_avx(auVar147,auVar90);
  auVar166._8_8_ = dVar141;
  auVar166._0_8_ = dVar141;
  auVar179 = vunpcklpd_avx(auVar31,auVar166);
  auVar82._0_8_ = auVar92._0_8_ * auVar56._0_8_;
  auVar82._8_8_ = auVar92._8_8_ * auVar56._8_8_;
  auVar82._16_8_ = auVar179._0_8_ * auVar56._16_8_;
  auVar82._24_8_ = auVar179._8_8_ * auVar56._24_8_;
  auVar144 = vunpcklpd_avx(auVar90,auVar31);
  auVar33 = vunpcklpd_avx(auVar147,auVar166);
  auVar194._0_8_ = auVar144._0_8_ * auVar99._0_8_;
  auVar194._8_8_ = auVar144._8_8_ * auVar99._8_8_;
  auVar194._16_8_ = auVar33._0_8_ * auVar115._16_8_;
  auVar194._24_8_ = auVar33._8_8_ * auVar115._24_8_;
  auVar56 = vsubpd_avx(auVar82,auVar194);
  auVar52._0_8_ = auVar56._0_8_ + auVar56._0_8_;
  auVar52._8_8_ = auVar56._8_8_ + auVar56._8_8_;
  auVar83._16_8_ = auVar56._16_8_ + auVar56._16_8_;
  auVar83._0_16_ = auVar52;
  auVar83._24_8_ = auVar56._24_8_ + auVar56._24_8_;
  auVar195._16_16_ = auVar52;
  auVar195._0_16_ = auVar52;
  auVar56 = vperm2f128_avx(auVar83,auVar83,0x11);
  auVar56 = vshufpd_avx(auVar195,auVar56,9);
  dVar119 = auVar99._0_8_ + dVar141 * auVar56._0_8_;
  dVar142 = auVar99._8_8_ + dVar141 * auVar56._8_8_;
  dVar143 = auVar115._16_8_ + dVar141 * auVar56._16_8_;
  dVar141 = auVar115._24_8_ + dVar141 * auVar56._24_8_;
  auVar58 = vperm2f128_avx(auVar83,auVar83,1);
  auVar58 = vshufpd_avx(auVar58,auVar83,0xc);
  auVar84._0_8_ = auVar92._0_8_ * auVar58._0_8_;
  auVar84._8_8_ = auVar92._8_8_ * auVar58._8_8_;
  auVar84._16_8_ = auVar179._0_8_ * auVar58._16_8_;
  auVar84._24_8_ = auVar179._8_8_ * auVar58._24_8_;
  auVar139._0_8_ = auVar144._0_8_ * auVar56._0_8_;
  auVar139._8_8_ = auVar144._8_8_ * auVar56._8_8_;
  auVar139._16_8_ = auVar33._0_8_ * auVar56._16_8_;
  auVar139._24_8_ = auVar33._8_8_ * auVar56._24_8_;
LAB_140c82989:
  auVar56 = vsubpd_avx(auVar84,auVar139);
  auVar140._16_16_ = auVar56._0_16_;
  auVar140._0_16_ = auVar56._0_16_;
  auVar56 = vperm2f128_avx(auVar56,auVar56,0x11);
  auVar56 = vshufpd_avx(auVar140,auVar56,9);
  dVar158 = (double)(param_3 * __real_3f000000 * param_7);
  auVar88._0_8_ =
       dVar158 * (double)((ulonglong)(dVar119 + auVar56._0_8_) &
                         ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff);
  auVar88._8_8_ = dVar158 * (double)((ulonglong)(dVar142 + auVar56._8_8_) & _UNK_150aa8f48);
  auVar88._16_8_ = dVar158 * (double)((ulonglong)(dVar143 + auVar56._16_8_) & _UNK_150aa8f50);
  auVar88._24_8_ = dVar158 * (double)((ulonglong)(dVar141 + auVar56._24_8_) & _UNK_150aa8f58);
  auVar28._16_16_ = auVar30;
  auVar28._0_16_ = auVar14;
  auVar56 = vsubpd_avx(auVar28,auVar88);
  auVar101._0_8_ = (double)(param_3 * param_6);
  auVar101._8_8_ = auVar101._0_8_;
  auVar118._16_16_ = auVar101;
  auVar118._0_16_ = auVar101;
  auVar56 = vsubpd_avx(auVar56,auVar118);
  auVar24._0_8_ = auVar101._0_8_ + auVar14._0_8_ + auVar88._0_8_;
  auVar24._8_8_ = auVar101._0_8_ + auVar14._8_8_ + auVar88._8_8_;
  auVar29._16_8_ = auVar101._0_8_ + auVar30._0_8_ + auVar88._16_8_;
  auVar29._0_16_ = auVar24;
  auVar29._24_8_ = auVar101._0_8_ + auVar30._8_8_ + auVar88._24_8_;
  *param_1 = auVar56._0_16_;
  auVar92 = vunpcklpd_avx(auVar56._16_16_,auVar24);
  param_1[1] = auVar92;
  auVar92 = vshufpd_avx(auVar24,auVar29._16_16_,1);
  param_1[2] = auVar92;
  param_1[3][0] = 1;
  return;
}

// BoxCalcAABB_avx @ 140c82a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void BoxCalcAABB_avx(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float param_3,
                    undefined1 (*param_4) [24],double *param_5,uint param_6,uint param_7,
                    uint param_8)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar7;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar32;
  undefined1 auVar19 [32];
  double dVar31;
  double dVar35;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar33 [16];
  undefined1 auVar25 [32];
  undefined1 auVar34 [16];
  undefined1 auVar27 [32];
  undefined1 auVar29 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulonglong uVar36;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  double dVar65;
  double dVar86;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar87;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  double dVar88;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar126 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [32];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [16];
  undefined1 auVar142 [32];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  double adStack_238 [3];
  undefined1 local_220 [8];
  double adStack_218 [3];
  undefined1 local_200 [16];
  double local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  double local_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  double local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  double local_180;
  double dStack_178;
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
  undefined1 auVar23 [32];
  undefined1 auVar26 [32];
  undefined1 auVar28 [32];
  undefined1 auVar30 [32];
  undefined1 auVar49 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar56 [32];
  undefined1 auVar61 [32];
  undefined1 auVar64 [32];
  undefined1 auVar76 [32];
  undefined1 auVar79 [32];
  undefined1 auVar82 [32];
  undefined1 auVar99 [32];
  undefined1 auVar106 [32];
  undefined1 auVar116 [32];
  undefined1 auVar119 [32];
  undefined1 auVar125 [32];
  undefined1 auVar127 [32];
  undefined1 auVar132 [32];
  undefined1 auVar135 [32];
  undefined1 auVar138 [32];
  
  auVar19._24_8_ = 0;
  auVar19._0_24_ = *param_4;
  auVar45._8_8_ = __real_4076800000000000;
  auVar45._0_8_ = __real_4076800000000000;
  auVar45._16_8_ = __real_4076800000000000;
  auVar45._24_8_ = __real_4076800000000000;
  auVar23 = vdivpd_avx(auVar19,auVar45);
  auVar70._0_8_ = auVar23._0_8_ & __real_7fffffffffffffff;
  auVar70._8_8_ = auVar23._8_8_ & __real_7fffffffffffffff;
  auVar70._16_8_ = auVar23._16_8_ & __real_7fffffffffffffff;
  auVar70._24_8_ = auVar23._24_8_ & __real_7fffffffffffffff;
  auVar114._8_8_ = __real_4330000000000000;
  auVar114._0_8_ = __real_4330000000000000;
  auVar114._16_8_ = __real_4330000000000000;
  auVar114._24_8_ = __real_4330000000000000;
  auVar47 = vcmppd_avx(auVar114,auVar70,2);
  auVar91 = vpackssdw_avx(auVar47._0_16_,auVar47._16_16_);
  auVar130 = vpshufd_avx(auVar91,0x50);
  auVar91 = vpshufd_avx(auVar91,0xfa);
  auVar71._16_16_ = auVar91;
  auVar71._0_16_ = auVar130;
  auVar91._0_12_ = ZEXT812(0);
  auVar91._12_4_ = 0;
  auVar21 = vcmpps_avx(ZEXT1632(auVar91),ZEXT1632(auVar91),0xf);
  auVar70 = ZEXT1632(auVar91);
  auVar47 = vblendvps_avx(auVar70,auVar21,auVar71);
  auVar20 = vroundpd_avx(auVar23,0xb);
  auVar123._0_4_ = ~auVar47._0_4_ & auVar20._0_4_;
  auVar123._4_4_ = ~auVar47._4_4_ & auVar20._4_4_;
  auVar123._8_4_ = ~auVar47._8_4_ & auVar20._8_4_;
  auVar123._12_4_ = ~auVar47._12_4_ & auVar20._12_4_;
  auVar123._16_4_ = ~auVar47._16_4_ & auVar20._16_4_;
  auVar123._20_4_ = ~auVar47._20_4_ & auVar20._20_4_;
  auVar123._24_4_ = ~auVar47._24_4_ & auVar20._24_4_;
  auVar123._28_4_ = ~auVar47._28_4_ & auVar20._28_4_;
  auVar72._0_8_ = auVar23._0_8_ & auVar47._0_8_;
  auVar72._8_8_ = auVar23._8_8_ & auVar47._8_8_;
  auVar72._16_8_ = auVar23._16_8_ & auVar47._16_8_;
  auVar72._24_8_ = auVar23._24_8_ & auVar47._24_8_;
  auVar72 = auVar72 | auVar123;
  auVar73._0_8_ = auVar72._0_8_ * __real_4076800000000000;
  auVar73._8_8_ = auVar72._8_8_ * __real_4076800000000000;
  auVar73._16_8_ = auVar72._16_8_ * __real_4076800000000000;
  auVar73._24_8_ = auVar72._24_8_ * __real_4076800000000000;
  auVar47 = vsubpd_avx(auVar19,auVar73);
  auVar47 = vminpd_avx(auVar47,auVar45);
  auVar46._8_8_ = __real_c076800000000000;
  auVar46._0_8_ = __real_c076800000000000;
  auVar46._16_8_ = __real_c076800000000000;
  auVar46._24_8_ = __real_c076800000000000;
  auVar47 = vmaxpd_avx(auVar46,auVar47);
  dVar7 = auVar47._0_8_ * ___ymm_3f81df46a2529d393f81df46a2529d393f81df46a2529d393f81df46a2529d39;
  dVar31 = auVar47._8_8_ * _UNK_151c6cec8;
  dVar32 = auVar47._16_8_ * _UNK_151c6ced0;
  dVar35 = auVar47._24_8_ * _UNK_151c6ced8;
  auVar47._0_8_ = dVar7 * ___ymm_3fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c883;
  auVar47._8_8_ = dVar31 * _UNK_151c6cee8;
  auVar47._16_8_ = dVar32 * _UNK_151c6cef0;
  auVar47._24_8_ = dVar35 * _UNK_151c6cef8;
  auVar47 = vroundpd_avx(auVar47,0xb);
  auVar20._0_8_ =
       dVar7 + auVar47._0_8_ *
               ___ymm_c01921fb54442d18c01921fb54442d18c01921fb54442d18c01921fb54442d18;
  auVar20._8_8_ = dVar31 + auVar47._8_8_ * _UNK_151c6cf08;
  auVar20._16_8_ = dVar32 + auVar47._16_8_ * _UNK_151c6cf10;
  auVar20._24_8_ = dVar35 + auVar47._24_8_ * _UNK_151c6cf18;
  auVar48._0_8_ =
       (ulonglong)auVar20._0_8_ &
       ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
  auVar48._8_8_ = (ulonglong)auVar20._8_8_ & _UNK_150b513e8;
  auVar48._16_8_ = (ulonglong)auVar20._16_8_ & _UNK_150b513f0;
  auVar48._24_8_ = (ulonglong)auVar20._24_8_ & _UNK_150b513f8;
  auVar23 = vsubpd_avx(auVar48 | 
                       ___ymm_400921fb54442d18400921fb54442d18400921fb54442d18400921fb54442d18,
                       auVar20);
  auVar74._0_8_ = (ulonglong)auVar20._0_8_ & __real_7fffffffffffffff;
  auVar74._8_8_ = (ulonglong)auVar20._8_8_ & __real_7fffffffffffffff;
  auVar74._16_8_ = (ulonglong)auVar20._16_8_ & __real_7fffffffffffffff;
  auVar74._24_8_ = (ulonglong)auVar20._24_8_ & __real_7fffffffffffffff;
  auVar97._8_8_ = __real_3ff921fb54442d18;
  auVar97._0_8_ = __real_3ff921fb54442d18;
  auVar97._16_8_ = __real_3ff921fb54442d18;
  auVar97._24_8_ = __real_3ff921fb54442d18;
  auVar47 = vcmppd_avx(auVar97,auVar74,1);
  auVar91 = vpackssdw_avx(auVar47._0_16_,auVar47._16_16_);
  auVar130 = vpshufd_avx(auVar91,0x50);
  auVar91 = vpshufd_avx(auVar91,0xfa);
  auVar75._16_16_ = auVar91;
  auVar75._0_16_ = auVar130;
  auVar47 = vblendvps_avx(auVar70,auVar21,auVar75);
  auVar21._0_4_ = ~auVar47._0_4_ & SUB84(auVar20._0_8_,0);
  auVar21._4_4_ = ~auVar47._4_4_ & (uint)((ulonglong)auVar20._0_8_ >> 0x20);
  auVar21._8_4_ = ~auVar47._8_4_ & SUB84(auVar20._8_8_,0);
  auVar21._12_4_ = ~auVar47._12_4_ & (uint)((ulonglong)auVar20._8_8_ >> 0x20);
  auVar21._16_4_ = ~auVar47._16_4_ & SUB84(auVar20._16_8_,0);
  auVar21._20_4_ = ~auVar47._20_4_ & (uint)((ulonglong)auVar20._16_8_ >> 0x20);
  auVar21._24_4_ = ~auVar47._24_4_ & SUB84(auVar20._24_8_,0);
  auVar21._28_4_ = ~auVar47._28_4_ & (uint)((ulonglong)auVar20._24_8_ >> 0x20);
  auVar22._0_8_ = auVar23._0_8_ & auVar47._0_8_;
  auVar22._8_8_ = auVar23._8_8_ & auVar47._8_8_;
  auVar22._16_8_ = auVar23._16_8_ & auVar47._16_8_;
  auVar22._24_8_ = auVar23._24_8_ & auVar47._24_8_;
  auVar22 = auVar22 | auVar21;
  dVar7 = auVar22._0_8_;
  dVar65 = dVar7 * dVar7;
  dVar31 = auVar22._8_8_;
  dVar86 = dVar31 * dVar31;
  dVar32 = auVar22._16_8_;
  dVar87 = dVar32 * dVar32;
  dVar35 = auVar22._24_8_;
  dVar88 = dVar35 * dVar35;
  auVar142._8_8_ = __real_3ff0000000000000;
  auVar142._0_8_ = __real_3ff0000000000000;
  auVar142._16_8_ = __real_3ff0000000000000;
  auVar142._24_8_ = __real_3ff0000000000000;
  auVar8._0_8_ = (__real_3ff0000000000000 +
                 dVar65 * (dVar65 * (dVar65 * (dVar65 * (dVar65 * 
                                                  ___ymm_be59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806f
                                                  + 
                                                  ___ymm_00000000000000003ec71711c625173e3ec71711c625173e3ec71711c625173e
                                                  ) + 
                                              ___ymm_0000000000000000bf2a017e195d6197bf2a017e195d6197bf2a017e195d6197
                                              ) +
                                    ___ymm_00000000000000003f811110c0e4d9803f811110c0e4d9803f811110c0e4d980
                                    ) +
                          ___ymm_0000000000000000bfc555555c7dda4bbfc555555c7dda4bbfc555555c7dda4b))
                 * dVar7;
  auVar8._8_8_ = (__real_3ff0000000000000 +
                 dVar86 * (dVar86 * (dVar86 * (dVar86 * (dVar86 * _UNK_151c6cf68 + _UNK_151c6cf88) +
                                              _UNK_151c6cfa8) + _UNK_151c6cfc8) + _UNK_151c6cfe8)) *
                 dVar31;
  auVar23._16_8_ =
       (__real_3ff0000000000000 +
       dVar87 * (dVar87 * (dVar87 * (dVar87 * (dVar87 * _UNK_151c6cf70 + _UNK_151c6cf90) +
                                    _UNK_151c6cfb0) + _UNK_151c6cfd0) + _UNK_151c6cff0)) * dVar32;
  auVar23._0_16_ = auVar8;
  auVar23._24_8_ =
       (__real_3ff0000000000000 +
       dVar88 * (dVar88 * (dVar88 * (dVar88 * (dVar88 * _UNK_151c6cf78 + _UNK_151c6cf98) +
                                    _UNK_151c6cfb8) + _UNK_151c6cfd8) + _UNK_151c6cff8)) * dVar35;
  auVar37._0_8_ =
       (__real_3ff0000000000000 +
       dVar65 * (dVar65 * (dVar65 * (dVar65 * (dVar65 * 
                                               ___ymm_be917ba225041884be917ba225041884be917ba225041884be917ba225041884
                                              + 
                                              ___ymm_00000000000000003ef9f698429782503ef9f698429782503ef9f69842978250
                                              ) +
                                    ___ymm_0000000000000000bf56c1353b8c783dbf56c1353b8c783dbf56c1353b8c783d
                                    ) +
                          ___ymm_00000000000000003fa555545f16aaab3fa555545f16aaab3fa555545f16aaab) +
                ___ymm_0000000000000000bfe0000000000000bfe0000000000000bfe0000000000000)) *
       (double)(auVar47._0_8_ &
                CONCAT44(_UNK_151c6af64,
                         ___ymm_0000000000000000800000000000000080000000000000008000000000000000) |
               (ulonglong)___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000);
  auVar37._8_8_ =
       (__real_3ff0000000000000 +
       dVar86 * (dVar86 * (dVar86 * (dVar86 * (dVar86 * _UNK_151c6d008 + _UNK_151c6d028) +
                                    _UNK_151c6d048) + _UNK_151c6d068) + _UNK_151c6d088)) *
       (double)(auVar47._8_8_ & CONCAT44(_UNK_151c6af6c,_UNK_151c6af68) | (ulonglong)_UNK_150b54508)
  ;
  auVar49._16_8_ =
       (__real_3ff0000000000000 +
       dVar87 * (dVar87 * (dVar87 * (dVar87 * (dVar87 * _UNK_151c6d010 + _UNK_151c6d030) +
                                    _UNK_151c6d050) + _UNK_151c6d070) + _UNK_151c6d090)) *
       (double)(auVar47._16_8_ & CONCAT44(_UNK_151c6af74,_UNK_151c6af70) | (ulonglong)_UNK_150b54510
               );
  auVar49._0_16_ = auVar37;
  auVar49._24_8_ =
       (__real_3ff0000000000000 +
       dVar88 * (dVar88 * (dVar88 * (dVar88 * (dVar88 * _UNK_151c6d018 + _UNK_151c6d038) +
                                    _UNK_151c6d058) + _UNK_151c6d078) + _UNK_151c6d098)) *
       (double)(auVar47._24_8_ & CONCAT44(_UNK_151c6af7c,_UNK_151c6af78) | (ulonglong)_UNK_150b54518
               );
  auVar91 = vunpckhpd_avx(auVar8,auVar37);
  auVar47 = vperm2f128_avx(auVar49,auVar49,0x11);
  auVar130 = vunpckhpd_avx(auVar37,auVar8);
  auVar21 = vperm2f128_avx(auVar23,auVar23,0x11);
  auVar98._0_8_ =
       (double)((ulonglong)(auVar47._0_8_ * auVar8._0_8_ * auVar91._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar21._0_8_ * auVar37._0_8_ * auVar130._0_8_) ^
               CONCAT44(_UNK_151c6af64,
                        ___ymm_0000000000000000800000000000000080000000000000008000000000000000));
  auVar98._8_8_ =
       (double)((ulonglong)(auVar47._0_8_ * auVar8._0_8_ * auVar91._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar21._0_8_ * auVar37._0_8_ * auVar130._8_8_) ^
               CONCAT44(_UNK_151c6af6c,_UNK_151c6af68));
  auVar98._16_8_ =
       (double)((ulonglong)(auVar47._16_8_ * auVar37._0_8_ * auVar91._0_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar21._16_8_ * auVar8._0_8_ * auVar130._0_8_) ^
               CONCAT44(_UNK_151c6af74,_UNK_151c6af70));
  auVar98._24_8_ =
       (double)((ulonglong)(auVar47._16_8_ * auVar37._0_8_ * auVar91._8_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar21._16_8_ * auVar8._0_8_ * auVar130._8_8_) ^
               CONCAT44(_UNK_151c6af7c,_UNK_151c6af78));
  dVar7 = (double)param_3;
  local_100._0_8_ = dVar7 * *param_5;
  local_100._8_8_ = dVar7 * param_5[1];
  auVar143._0_8_ = dVar7 * param_5[2];
  auVar107._8_8_ = 0.0;
  auVar107._0_8_ = *(double *)param_2[4];
  local_170._8_8_ = 0;
  local_170._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar7 = *(double *)param_2[5];
  auVar130._8_8_ = 0;
  auVar130._0_8_ = dVar7;
  auVar47 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar70,1);
  auVar91 = vpackssdw_avx(auVar47._0_16_,auVar47._16_16_);
  if ((((SUB161(auVar91 >> 0x1f,0) & 1) == 0 && (SUB161(auVar91 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar91 >> 0x5f,0) & 1) == 0) && -1 < auVar91[0xf]) {
    auVar145._8_8_ = 0;
    auVar145._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar7 = *(double *)(param_2[1] + 8);
    auVar14._8_8_ = dVar7;
    auVar14._0_8_ = dVar7;
    dVar31 = *(double *)*param_2;
    auVar111._8_8_ = dVar31;
    auVar111._0_8_ = dVar31;
    auVar23 = vperm2f128_avx(auVar98,auVar98,1);
    auVar47 = vshufpd_avx(auVar23,auVar23,5);
    dVar32 = *(double *)(*param_2 + 8);
    auVar122._8_8_ = dVar32;
    auVar122._0_8_ = dVar32;
    dVar35 = *(double *)param_2[1];
    auVar42._8_8_ = dVar35;
    auVar42._0_8_ = dVar35;
    auVar21 = vshufpd_avx(auVar98,auVar98,5);
    auVar137._0_8_ =
         auVar21._0_8_ * dVar35 *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         auVar23._0_8_ * dVar32 *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
         auVar98._0_8_ * dVar7 +
         auVar47._0_8_ * dVar31 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
    auVar137._8_8_ =
         auVar21._8_8_ * dVar35 * _UNK_150b54428 +
         auVar23._8_8_ * dVar32 * _UNK_150b54408 +
         auVar98._8_8_ * dVar7 + auVar47._8_8_ * dVar31 * _UNK_150b543e8;
    auVar139._16_8_ =
         auVar21._16_8_ * dVar35 * _UNK_150b54430 +
         auVar23._16_8_ * dVar32 * _UNK_150b54410 +
         auVar98._16_8_ * dVar7 + auVar47._16_8_ * dVar31 * _UNK_150b543f0;
    auVar139._0_16_ = auVar137;
    auVar139._24_8_ =
         auVar21._24_8_ * dVar35 * _UNK_150b54438 +
         auVar23._24_8_ * dVar32 * _UNK_150b54418 +
         auVar98._24_8_ * dVar7 + auVar47._24_8_ * dVar31 * _UNK_150b543f8;
    auVar37 = vshufpd_avx(auVar137,auVar137,1);
    auVar33 = auVar139._16_16_;
    auVar91 = vshufpd_avx(auVar33,auVar33,1);
    dVar31 = auVar91._0_8_;
    auVar91 = vunpcklpd_avx(auVar130,auVar145);
    auVar8 = vunpcklpd_avx(auVar107,local_170);
    auVar69._0_8_ = local_100._0_8_ * auVar8._0_8_;
    auVar69._8_8_ = local_100._8_8_ * auVar8._8_8_;
    auVar82._16_8_ = auVar143._0_8_ * auVar91._0_8_;
    auVar82._0_16_ = auVar69;
    auVar82._24_8_ = auVar91._8_8_ * 0.0;
    auVar103._16_16_ = auVar69;
    auVar103._0_16_ = auVar69;
    auVar47 = vperm2f128_avx(auVar82,auVar82,0x11);
    auVar47 = vshufpd_avx(auVar103,auVar47,9);
    auVar143 = vunpcklpd_avx(auVar111,auVar122);
    auVar91 = vblendpd_avx(auVar111,auVar42,1);
    auVar8 = vunpcklpd_avx(auVar42,auVar14);
    auVar104._0_8_ = auVar47._0_8_ * auVar143._0_8_;
    auVar104._8_8_ = auVar47._8_8_ * auVar143._8_8_;
    auVar104._16_8_ = auVar47._16_8_ * auVar8._0_8_;
    auVar104._24_8_ = auVar47._24_8_ * auVar8._8_8_;
    auVar10 = vunpcklpd_avx(auVar122,auVar42);
    auVar8 = vblendpd_avx(auVar122,auVar111,1);
    auVar14 = vunpcklpd_avx(auVar111,auVar14);
    auVar60._0_8_ = auVar69._0_8_ * auVar10._0_8_;
    auVar60._8_8_ = auVar69._8_8_ * auVar10._8_8_;
    auVar60._16_8_ = auVar82._16_8_ * auVar14._0_8_;
    auVar60._24_8_ = auVar82._24_8_ * auVar14._8_8_;
    auVar47 = vsubpd_avx(auVar104,auVar60);
    auVar43._0_8_ = auVar47._0_8_ + auVar47._0_8_;
    auVar43._8_8_ = auVar47._8_8_ + auVar47._8_8_;
    auVar61._16_8_ = auVar47._16_8_ + auVar47._16_8_;
    auVar61._0_16_ = auVar43;
    auVar61._24_8_ = auVar47._24_8_ + auVar47._24_8_;
    auVar105._16_16_ = auVar43;
    auVar105._0_16_ = auVar43;
    auVar47 = vshufpd_avx(auVar105,ZEXT1632(auVar61._16_16_),1);
    auVar21 = vperm2f128_avx(auVar61,auVar61,1);
    auVar21 = vshufpd_avx(auVar21,auVar61,4);
    auVar62._0_8_ = auVar143._0_8_ * auVar21._0_8_;
    auVar62._8_8_ = auVar143._8_8_ * auVar21._8_8_;
    auVar62._16_8_ = auVar91._0_8_ * auVar21._16_8_;
    auVar62._24_8_ = auVar91._8_8_ * auVar21._24_8_;
    auVar83._0_8_ = auVar10._0_8_ * auVar47._0_8_;
    auVar83._8_8_ = auVar10._8_8_ * auVar47._8_8_;
    auVar83._16_8_ = auVar8._0_8_ * auVar47._16_8_;
    auVar83._24_8_ = auVar8._8_8_ * auVar47._24_8_;
    auVar21 = vsubpd_avx(auVar62,auVar83);
    auVar84._16_16_ = auVar21._0_16_;
    auVar84._0_16_ = auVar21._0_16_;
    auVar21 = vshufpd_avx(auVar84,ZEXT1632(auVar21._16_16_),1);
    auVar13._0_8_ = *(double *)param_2[2] + auVar69._0_8_ + dVar7 * auVar47._0_8_ + auVar21._0_8_;
    auVar13._8_8_ =
         *(double *)(param_2[2] + 8) + auVar69._8_8_ + dVar7 * auVar47._8_8_ + auVar21._8_8_;
    auVar25._16_8_ =
         *(double *)param_2[3] + auVar82._16_8_ + dVar7 * auVar47._16_8_ + auVar21._16_8_;
    auVar25._0_16_ = auVar13;
    auVar25._24_8_ = auVar82._24_8_ + dVar7 * auVar47._24_8_ + auVar21._24_8_ + 0.0;
    auVar10 = vshufpd_avx(auVar13,auVar13,1);
    auVar34 = auVar25._16_16_;
    goto LAB_140c834ef;
  }
  auVar143._8_8_ = 0;
  auVar33._0_8_ = auVar98._0_8_ + auVar98._0_8_;
  auVar33._8_8_ = auVar98._8_8_ + auVar98._8_8_;
  auVar50._16_8_ = auVar98._16_8_ + auVar98._16_8_;
  auVar50._0_16_ = auVar33;
  auVar50._24_8_ = auVar98._24_8_ + auVar98._24_8_;
  auVar66._0_8_ = auVar98._0_8_ * auVar33._0_8_;
  auVar66._8_8_ = auVar98._8_8_ * auVar33._8_8_;
  auVar76._16_8_ = auVar98._16_8_ * auVar50._16_8_;
  auVar76._0_16_ = auVar66;
  auVar76._24_8_ = auVar98._24_8_ * auVar50._24_8_;
  auVar91 = vshufpd_avx(auVar66,auVar66,1);
  auVar47 = vperm2f128_avx(auVar76,auVar76,1);
  auVar47 = vshufpd_avx(auVar47,auVar47,4);
  auVar77._0_8_ = auVar91._0_8_ + auVar47._0_8_;
  auVar77._8_8_ = auVar91._8_8_ + auVar47._8_8_;
  auVar77._16_8_ = auVar66._0_8_ + auVar47._16_8_;
  auVar77._24_8_ = auVar66._8_8_ + auVar47._24_8_;
  auVar23 = vsubpd_avx(auVar142,auVar77);
  auVar21 = vperm2f128_avx(auVar50,auVar50,1);
  auVar47 = vshufpd_avx(auVar50,auVar21,1);
  auVar124._0_8_ = auVar47._0_8_ * auVar98._0_8_;
  auVar124._8_8_ = auVar47._8_8_ * auVar98._8_8_;
  auVar124._16_8_ = auVar47._16_8_ * auVar98._0_8_;
  auVar124._24_8_ = auVar47._24_8_ * auVar98._0_8_;
  auVar47 = vperm2f128_avx(auVar98,auVar98,0x11);
  auVar47 = vshufpd_avx(auVar47,auVar47,0xf);
  auVar51._16_16_ = auVar33;
  auVar51._0_16_ = auVar33;
  auVar21 = vshufpd_avx(auVar21,auVar51,4);
  auVar52._0_8_ = auVar47._0_8_ * auVar21._0_8_;
  auVar52._8_8_ = auVar47._8_8_ * auVar21._8_8_;
  auVar52._16_8_ = auVar47._16_8_ * auVar21._16_8_;
  auVar52._24_8_ = auVar47._24_8_ * auVar21._24_8_;
  auVar89._0_8_ = auVar124._0_8_ + auVar52._0_8_;
  auVar89._8_8_ = auVar124._8_8_ + auVar52._8_8_;
  auVar99._16_8_ = auVar124._16_8_ + auVar52._16_8_;
  auVar99._0_16_ = auVar89;
  auVar99._24_8_ = auVar124._24_8_ + auVar52._24_8_;
  auVar47 = vsubpd_avx(auVar124,auVar52);
  local_160 = vunpcklpd_avx(auVar23._0_16_,auVar89);
  local_150[0] = (double)vmovlps_avx(auVar47._16_16_);
  local_150[1] = 0.0;
  local_140 = vblendpd_avx(auVar23._0_16_,auVar47._0_16_,1);
  local_130 = vmovhpd_avx(auVar89);
  local_128 = 0;
  local_120 = vblendpd_avx(auVar47._0_16_,auVar99._16_16_,1);
  local_110 = vmovlps_avx(auVar23._16_16_);
  local_108 = 0;
  local_f0 = vmovlpd_avx(auVar143);
  local_e8 = 0x3ff0000000000000;
  auVar91 = *param_2;
  auVar8 = param_2[2];
  uVar1 = *(undefined8 *)param_2[1];
  auVar38._8_8_ = uVar1;
  auVar38._0_8_ = uVar1;
  auVar53._16_8_ = uVar1;
  auVar53._0_16_ = auVar38;
  auVar53._24_8_ = uVar1;
  dVar31 = *(double *)(param_2[1] + 8);
  auVar90._8_8_ = dVar31;
  auVar90._0_8_ = dVar31;
  auVar47 = vblendpd_avx(ZEXT1632(auVar91),auVar53,4);
  auVar37 = vunpcklpd_avx(auVar38,auVar90);
  dVar32 = auVar91._0_8_;
  auVar120._0_8_ = dVar32 + dVar32;
  dVar35 = auVar91._8_8_;
  auVar120._8_8_ = dVar35 + dVar35;
  auVar125._16_8_ = auVar37._0_8_ + auVar37._0_8_;
  auVar125._0_16_ = auVar120;
  auVar125._24_8_ = auVar37._8_8_ + auVar37._8_8_;
  auVar39._0_8_ = auVar47._0_8_ * auVar120._0_8_;
  auVar39._8_8_ = auVar47._8_8_ * auVar120._8_8_;
  auVar54._16_8_ = auVar47._16_8_ * auVar125._16_8_;
  auVar54._0_16_ = auVar39;
  auVar54._24_8_ = auVar47._24_8_ * auVar125._24_8_;
  auVar91 = vshufpd_avx(auVar39,auVar39,1);
  auVar47 = vperm2f128_avx(auVar54,auVar54,1);
  auVar47 = vshufpd_avx(auVar47,auVar47,4);
  auVar55._0_8_ = auVar91._0_8_ + auVar47._0_8_;
  auVar55._8_8_ = auVar91._8_8_ + auVar47._8_8_;
  auVar55._16_8_ = auVar39._0_8_ + auVar47._16_8_;
  auVar55._24_8_ = auVar39._8_8_ + auVar47._24_8_;
  auVar47 = vsubpd_avx(auVar142,auVar55);
  auVar91 = vunpcklpd_avx(auVar107,local_170);
  auVar115._16_8_ = dVar7;
  auVar115._0_16_ = auVar91;
  auVar115._24_8_ = 0;
  auVar40._0_8_ = auVar91._0_8_ * auVar47._0_8_;
  auVar40._8_8_ = auVar91._8_8_ * auVar47._8_8_;
  auVar56._16_8_ = dVar7 * auVar47._16_8_;
  auVar56._0_16_ = auVar40;
  auVar56._24_8_ = auVar47._24_8_ * 0.0;
  auVar21 = vperm2f128_avx(auVar125,auVar125,1);
  auVar47 = vshufpd_avx(auVar125,auVar21,1);
  auVar78._0_8_ = auVar47._0_8_ * dVar32;
  auVar78._8_8_ = auVar47._8_8_ * dVar35;
  auVar78._16_8_ = auVar47._16_8_ * *(double *)*param_2;
  auVar78._24_8_ = auVar47._24_8_ * *(double *)*param_2;
  auVar126._16_16_ = auVar120;
  auVar126._0_16_ = auVar120;
  auVar47 = vshufpd_avx(auVar21,auVar126,4);
  auVar100._0_8_ = dVar31 * auVar47._0_8_;
  auVar100._8_8_ = dVar31 * auVar47._8_8_;
  auVar100._16_8_ = dVar31 * auVar47._16_8_;
  auVar100._24_8_ = dVar31 * auVar47._24_8_;
  auVar121._0_8_ = auVar91._0_8_ * (auVar78._0_8_ + auVar100._0_8_);
  auVar121._8_8_ = auVar91._8_8_ * (auVar78._8_8_ + auVar100._8_8_);
  auVar127._16_8_ = dVar7 * (auVar78._16_8_ + auVar100._16_8_);
  auVar127._0_16_ = auVar121;
  auVar127._24_8_ = (auVar78._24_8_ + auVar100._24_8_) * 0.0;
  auVar21 = vsubpd_avx(auVar78,auVar100);
  auVar91 = vunpcklpd_avx(local_170,auVar130);
  uVar1 = *(undefined8 *)(param_2[5] + 8);
  auVar134._8_8_ = uVar1;
  auVar134._0_8_ = uVar1;
  auVar134._16_8_ = uVar1;
  auVar134._24_8_ = uVar1;
  auVar47 = vblendpd_avx(auVar115,auVar134,8);
  auVar107._0_8_ =
       auVar47._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  auVar107._8_8_ = auVar47._8_8_ * _UNK_150b54508;
  local_e0._16_8_ = auVar47._16_8_ * _UNK_150b54510;
  local_e0._0_16_ = auVar107;
  local_e0._24_8_ = auVar47._24_8_ * _UNK_150b54518;
  auVar67._0_8_ = auVar21._0_8_ * auVar91._0_8_;
  auVar67._8_8_ = auVar21._8_8_ * auVar91._8_8_;
  auVar79._16_8_ = auVar21._16_8_ * *(double *)param_2[4];
  auVar79._0_16_ = auVar67;
  auVar79._24_8_ = auVar21._24_8_ * 0.0;
  local_170 = vshufpd_avx(auVar107,auVar107,1);
  auVar108._8_8_ = 0;
  auVar108._0_8_ = *(ulonglong *)param_2[3];
  auVar91 = CONCAT88(auVar121._0_8_,auVar121._0_8_);
  auVar47 = vblendpd_avx(ZEXT1632(auVar40),ZEXT1632(auVar91),2);
  auVar47 = vblendpd_avx(auVar47,auVar79,4);
  auVar21 = vblendpd_avx(ZEXT1632(auVar127._16_16_),auVar79,2);
  auVar21 = vblendpd_avx(auVar21,auVar56,4);
  auVar80._16_16_ = auVar121;
  auVar80._0_16_ = auVar67;
  auVar23 = vshufpd_avx(auVar80,ZEXT1632(auVar40),0xe);
  auVar91 = vmovhpd_avx(auVar108,__real_3ff0000000000000);
  lVar6 = 0x18;
  do {
    dVar7 = *(double *)(local_170 + lVar6 + -8);
    dVar31 = *(double *)(local_170 + lVar6 + 8);
    dVar32 = *(double *)(local_170 + lVar6);
    dVar35 = *(double *)(local_160 + lVar6);
    *(double *)((longlong)adStack_238 + lVar6) =
         auVar47._0_8_ * dVar7 + auVar21._0_8_ * dVar31 + auVar23._0_8_ * dVar32 +
         auVar8._0_8_ * dVar35;
    *(double *)((longlong)adStack_238 + lVar6 + 8) =
         auVar47._8_8_ * dVar7 + auVar21._8_8_ * dVar31 + auVar23._8_8_ * dVar32 +
         auVar8._8_8_ * dVar35;
    *(double *)((longlong)adStack_238 + lVar6 + 0x10) =
         auVar47._16_8_ * dVar7 + auVar21._16_8_ * dVar31 + auVar23._16_8_ * dVar32 +
         auVar91._0_8_ * dVar35;
    *(double *)(local_220 + lVar6) =
         auVar47._24_8_ * dVar7 + auVar21._24_8_ * dVar31 + auVar23._24_8_ * dVar32 +
         auVar91._8_8_ * dVar35;
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x98);
  dVar7 = (double)local_220 * (double)local_220 + adStack_218[0] * adStack_218[0] +
          adStack_218[1] * adStack_218[1];
  dVar31 = (double)local_200._0_8_ * (double)local_200._0_8_ +
           (double)local_200._8_8_ * (double)local_200._8_8_ + local_1f0 * local_1f0;
  auVar141 = ZEXT816(0) << 0x40;
  auVar136._8_8_ = 0;
  auVar136._0_8_ = __real_3ff0000000000000;
  dVar32 = __real_3ff0000000000000;
  if (0.0 <= dVar7 + __real_be45798ee2308c3a) {
    dVar32 = __real_3ff0000000000000 / SQRT(dVar7);
  }
  dVar7 = (double)local_1e0._0_8_ * (double)local_1e0._0_8_ +
          (double)local_1e0._8_8_ * (double)local_1e0._8_8_ + local_1d0 * local_1d0;
  dVar35 = __real_3ff0000000000000;
  if (0.0 <= dVar31 + __real_be45798ee2308c3a) {
    dVar35 = __real_3ff0000000000000 / SQRT(dVar31);
  }
  local_180 = local_e0._16_8_;
  dStack_178 = local_e0._24_8_;
  dVar31 = __real_3ff0000000000000;
  if (0.0 <= dVar7 + __real_be45798ee2308c3a) {
    dVar31 = __real_3ff0000000000000 / SQRT(dVar7);
  }
  auVar68._8_8_ = 0;
  auVar68._0_8_ = (double)local_220 * dVar32;
  auVar144._8_8_ = 0;
  auVar144._0_8_ = dVar32 * adStack_218[0];
  auVar8 = vunpcklpd_avx(auVar68,auVar144);
  auVar92._8_8_ = 0;
  auVar92._0_8_ = dVar35 * (double)local_200._0_8_;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = dVar35 * (double)local_200._8_8_;
  auVar37 = vunpcklpd_avx(auVar92,auVar109);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar31 * (double)local_1e0._8_8_;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = dVar31 * (double)local_1e0._0_8_;
  auVar143 = vunpcklpd_avx(auVar93,auVar9);
  auVar10 = ZEXT816(0);
  auVar47 = vcmppd_avx(ZEXT1632(auVar10),local_e0,2);
  auVar91 = vpackssdw_avx(auVar47._0_16_,auVar47._16_16_);
  auVar130 = vpshufd_avx(auVar91,0x50);
  auVar91 = vpshufd_avx(auVar91,0xfa);
  auVar101._16_16_ = auVar91;
  auVar101._0_16_ = auVar130;
  auVar47 = vcmpps_avx(ZEXT1632(auVar10),ZEXT1632(auVar10),0xf);
  auVar47 = vblendvps_avx(ZEXT1632(auVar10),auVar47,auVar101);
  auVar133._0_4_ =
       auVar47._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000 ^
       ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar133._4_4_ = auVar47._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
  auVar133._8_4_ = auVar47._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
  auVar133._12_4_ = auVar47._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
  auVar135._16_4_ = auVar47._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
  auVar135._0_16_ = auVar133;
  auVar135._20_4_ = auVar47._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
  auVar135._24_4_ = auVar47._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
  auVar135._28_4_ = auVar47._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
  auVar91 = vshufps_avx(auVar133,auVar133,0x44);
  local_220 = (undefined1  [8])(auVar8._0_8_ * auVar91._0_8_);
  adStack_218[0] = auVar8._8_8_ * auVar91._8_8_;
  auVar102._16_8_ = dVar32 * adStack_218[1] * auVar91._0_8_;
  auVar102._0_16_ = _local_220;
  auVar102._24_8_ = auVar91._8_8_ * 0.0;
  adStack_218[1] = (double)vmovlpd_avx(auVar102._16_16_);
  auVar91 = vshufps_avx(auVar133,auVar133,0xee);
  local_200._0_8_ = auVar91._0_8_ * auVar37._0_8_;
  local_200._8_8_ = auVar91._8_8_ * auVar37._8_8_;
  auVar24._16_8_ = auVar91._0_8_ * local_1f0 * dVar35;
  auVar24._0_16_ = local_200;
  auVar24._24_8_ = auVar91._8_8_ * 0.0;
  local_1f0 = (double)vmovlpd_avx(auVar24._16_16_);
  auVar47 = vperm2f128_avx(auVar135,auVar135,0x11);
  local_1e0._0_8_ = auVar47._0_8_ * auVar143._0_8_;
  local_1e0._8_8_ = auVar47._0_8_ * auVar143._8_8_;
  auVar128._16_8_ = auVar47._16_8_ * local_1d0 * dVar31;
  auVar128._0_16_ = local_1e0;
  auVar128._24_8_ = auVar47._16_8_ * 0.0;
  auVar47 = vblendpd_avx(auVar102,
                         ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8);
  auVar57._0_8_ =
       auVar47._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
  auVar57._8_8_ = auVar47._8_8_ & _UNK_150aa8f48;
  auVar57._16_8_ = auVar47._16_8_ & _UNK_150aa8f50;
  auVar57._24_8_ = auVar47._24_8_ & _UNK_150aa8f58;
  auVar47 = vcmppd_avx(auVar57,
                       ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6);
  local_1d0 = (double)vmovlpd_avx(auVar128._16_16_);
  auVar91 = vpackssdw_avx(auVar47._0_16_,auVar47._16_16_);
  if ((((SUB161(auVar91 >> 0x1f,0) & 1) == 0 && (SUB161(auVar91 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar91 >> 0x5f,0) & 1) == 0) && -1 < auVar91[0xf]) {
LAB_140c832f4:
    auVar94 = ZEXT816(0) << 0x40;
    auVar110 = ZEXT816(0) << 0x40;
  }
  else {
    auVar47 = vblendpd_avx(auVar24,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar58._0_8_ =
         auVar47._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar58._8_8_ = auVar47._8_8_ & _UNK_150aa8f48;
    auVar58._16_8_ = auVar47._16_8_ & _UNK_150aa8f50;
    auVar58._24_8_ = auVar47._24_8_ & _UNK_150aa8f58;
    auVar47 = vcmppd_avx(auVar58,
                         ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6);
    auVar91 = vpackssdw_avx(auVar47._0_16_,auVar47._16_16_);
    if ((((SUB161(auVar91 >> 0x1f,0) & 1) == 0 && (SUB161(auVar91 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar91 >> 0x5f,0) & 1) == 0) && -1 < auVar91[0xf]) goto LAB_140c832f4;
    auVar47 = vblendpd_avx(auVar128,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar59._0_8_ =
         auVar47._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar59._8_8_ = auVar47._8_8_ & _UNK_150aa8f48;
    auVar59._16_8_ = auVar47._16_8_ & _UNK_150aa8f50;
    auVar59._24_8_ = auVar47._24_8_ & _UNK_150aa8f58;
    auVar47 = vcmppd_avx(auVar59,
                         ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6);
    auVar91 = vpackssdw_avx(auVar47._0_16_,auVar47._16_16_);
    if ((((SUB161(auVar91 >> 0x1f,0) & 1) == 0 && (SUB161(auVar91 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar91 >> 0x5f,0) & 1) == 0) && -1 < auVar91[0xf]) goto LAB_140c832f4;
    auVar91 = vshufpd_avx(local_200,local_200,1);
    dVar7 = auVar128._16_8_ + (double)local_220 + auVar91._0_8_;
    if (dVar7 <= 0.0) {
      bVar4 = (double)local_220 < auVar91._0_8_;
      uVar36 = 2;
      if (auVar128._16_8_ <= *(double *)(local_220 + ((uint)bVar4 * 0x20 + (uint)bVar4 * 8))) {
        uVar36 = (ulonglong)bVar4;
      }
      iVar2 = *(int *)(&DAT_151c6d0a0 + uVar36 * 4);
      lVar6 = (longlong)iVar2;
      iVar3 = *(int *)(&DAT_151c6d0a0 + lVar6 * 4);
      iVar5 = (int)uVar36;
      dVar31 = __real_3ff0000000000000 /
               SQRT(((*(double *)(local_220 + (uint)(iVar5 * 0x28)) -
                     *(double *)(local_220 + lVar6 * 0x28)) -
                    *(double *)(local_220 + (longlong)iVar3 * 0x28)) + __real_3ff0000000000000);
      dVar7 = dVar31 * __real_3fe0000000000000;
      *(double *)((longlong)&local_1a0 + (ulonglong)(uint)(iVar5 * 8)) =
           (__real_3ff0000000000000 / dVar31) * __real_3fe0000000000000;
      (&local_1a0)[lVar6] =
           (*(double *)(local_220 + (longlong)(iVar2 + iVar5 * 4) * 8) +
           *(double *)(local_220 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar7;
      (&local_1a0)[iVar3] =
           dVar7 * (*(double *)(local_220 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                   *(double *)(local_220 + (longlong)(iVar5 + iVar3 * 4) * 8));
      auVar136._8_8_ = 0;
      auVar136._0_8_ =
           dVar7 * (*(double *)(local_220 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                   *(double *)(local_220 + (longlong)(iVar2 + iVar3 * 4) * 8));
      auVar94._8_8_ = 0;
      auVar94._0_8_ = local_1a0;
      auVar110._8_8_ = 0;
      auVar110._0_8_ = local_198;
      auVar141._8_8_ = 0;
      auVar141._0_8_ = local_190;
    }
    else {
      auVar91 = vshufpd_avx(_local_220,_local_220,1);
      auVar130 = vshufpd_avx(local_1e0,local_1e0,1);
      dVar31 = __real_3ff0000000000000 / SQRT(dVar7 + __real_3ff0000000000000);
      dVar7 = __real_3fe0000000000000 * dVar31;
      auVar94._8_8_ = 0;
      auVar94._0_8_ = dVar7 * (auVar24._16_8_ - auVar130._0_8_);
      auVar110._8_8_ = 0;
      auVar110._0_8_ = dVar7 * ((double)local_1e0._0_8_ - auVar102._16_8_);
      auVar141._8_8_ = 0;
      auVar141._0_8_ = dVar7 * (auVar91._0_8_ - (double)local_200._0_8_);
      auVar136._8_8_ = 0;
      auVar136._0_8_ = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar31);
    }
  }
  auVar91 = vunpcklpd_avx(auVar141,auVar136);
  auVar130 = vunpcklpd_avx(auVar94,auVar110);
  dVar31 = auVar91._0_8_;
  dVar35 = auVar91._8_8_;
  dVar32 = auVar130._0_8_;
  dVar65 = auVar130._8_8_;
  auVar11._0_8_ = dVar32 * dVar32 + dVar31 * dVar31;
  auVar11._8_8_ = dVar65 * dVar65 + dVar35 * dVar35;
  auVar91 = vshufpd_avx(auVar11,auVar11,1);
  dVar7 = auVar11._0_8_ + auVar91._0_8_;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = __real_3e45798ee2308c3a;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar7;
  auVar91 = vcmpsd_avx(auVar41,auVar12,6);
  uVar36 = ~auVar91._0_8_ & __real_ffffffffffffffff;
  dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
  auVar81._0_8_ = ~uVar36 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar81._8_8_ = ~uVar36 & _UNK_150b54548;
  auVar81._16_8_ = ~uVar36 & _UNK_150b54550;
  auVar81._24_8_ = ~uVar36 & _UNK_150b54558;
  auVar137._0_8_ = (double)((ulonglong)(dVar32 * dVar7) & uVar36);
  auVar137._8_8_ = (double)((ulonglong)(dVar65 * dVar7) & uVar36);
  auVar138._16_8_ = (ulonglong)(dVar31 * dVar7) & uVar36;
  auVar138._0_16_ = auVar137;
  auVar138._24_8_ = (ulonglong)(dVar35 * dVar7) & uVar36;
  auVar33 = auVar138._16_16_ | auVar81._16_16_;
  auVar37 = vshufps_avx(auVar137,auVar137,0x4e);
  auVar91 = vshufps_avx(auVar33,auVar33,0x4e);
  dVar31 = auVar91._0_8_;
  auVar13._8_8_ = 0.0;
  auVar13._0_8_ = (double)uStack_1c0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_1b8;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uStack_1b0;
  auVar130._8_8_ = dStack_178;
  auVar130._0_8_ = local_180;
LAB_140c834ef:
  auVar143 = vunpcklpd_avx(auVar13,auVar10);
  auVar91 = vinsertps_avx(ZEXT416(param_6),ZEXT416(param_7),0x1c);
  auVar91 = vinsertps_avx(auVar91,ZEXT416(param_8),0x28);
  auVar8 = vshufps_avx(ZEXT416((uint)(param_3 * __real_3f000000)),
                       ZEXT416((uint)(param_3 * __real_3f000000)),0);
  auVar15._0_4_ = auVar8._0_4_ * auVar91._0_4_;
  auVar15._4_4_ = auVar8._4_4_ * auVar91._4_4_;
  auVar15._8_4_ = auVar8._8_4_ * auVar91._8_4_;
  auVar15._12_4_ = auVar8._12_4_ * auVar91._12_4_;
  auVar47 = vcvtps2pd_avx(auVar15);
  auVar91 = vunpcklpd_avx(auVar137,auVar37);
  auVar95._8_8_ = dVar31;
  auVar95._0_8_ = dVar31;
  auVar8 = vunpcklpd_avx(auVar33,auVar95);
  dVar7 = auVar91._0_8_;
  auVar112._0_8_ = dVar7 + dVar7;
  dVar32 = auVar91._8_8_;
  auVar112._8_8_ = dVar32 + dVar32;
  auVar116._16_8_ = auVar8._0_8_ + auVar8._0_8_;
  auVar116._0_16_ = auVar112;
  auVar116._24_8_ = auVar8._8_8_ + auVar8._8_8_;
  auVar16._0_8_ = dVar7 * auVar112._0_8_;
  auVar16._8_8_ = dVar32 * auVar112._8_8_;
  auVar26._16_8_ = auVar33._0_8_ * auVar116._16_8_;
  auVar26._0_16_ = auVar16;
  auVar26._24_8_ = auVar33._8_8_ * auVar116._24_8_;
  auVar91 = vshufpd_avx(auVar16,auVar16,1);
  auVar21 = vperm2f128_avx(auVar26,auVar26,1);
  auVar21 = vshufpd_avx(auVar21,auVar21,4);
  auVar27._0_8_ = auVar91._0_8_ + auVar21._0_8_;
  auVar27._8_8_ = auVar91._8_8_ + auVar21._8_8_;
  auVar27._16_8_ = auVar16._0_8_ + auVar21._16_8_;
  auVar27._24_8_ = auVar16._8_8_ + auVar21._24_8_;
  auVar129._8_8_ = __real_3ff0000000000000;
  auVar129._0_8_ = __real_3ff0000000000000;
  auVar129._16_8_ = __real_3ff0000000000000;
  auVar129._24_8_ = __real_3ff0000000000000;
  auVar21 = vsubpd_avx(auVar129,auVar27);
  auVar91 = vunpcklpd_avx(auVar107,local_170);
  auVar17._0_8_ = auVar91._0_8_ * auVar21._0_8_;
  auVar17._8_8_ = auVar91._8_8_ * auVar21._8_8_;
  auVar28._16_8_ = auVar130._0_8_ * auVar21._16_8_;
  auVar28._0_16_ = auVar17;
  auVar28._24_8_ = auVar130._8_8_ * auVar21._24_8_;
  auVar23 = vperm2f128_avx(auVar116,auVar116,1);
  auVar21 = vshufpd_avx(auVar116,auVar23,1);
  auVar63._0_8_ = auVar21._0_8_ * dVar7;
  auVar63._8_8_ = auVar21._8_8_ * dVar32;
  auVar63._16_8_ = auVar21._16_8_ * auVar137._0_8_;
  auVar63._24_8_ = auVar21._24_8_ * auVar137._0_8_;
  auVar117._16_16_ = auVar112;
  auVar117._0_16_ = auVar112;
  auVar21 = vshufpd_avx(auVar23,auVar117,4);
  auVar118._0_8_ = dVar31 * auVar21._0_8_;
  auVar118._8_8_ = dVar31 * auVar21._8_8_;
  auVar118._16_8_ = dVar31 * auVar21._16_8_;
  auVar118._24_8_ = dVar31 * auVar21._24_8_;
  auVar96._0_8_ = (auVar63._0_8_ + auVar118._0_8_) * auVar91._0_8_;
  auVar96._8_8_ = (auVar63._8_8_ + auVar118._8_8_) * auVar91._8_8_;
  auVar106._16_8_ = (auVar63._16_8_ + auVar118._16_8_) * auVar130._0_8_;
  auVar106._0_16_ = auVar96;
  auVar106._24_8_ = (auVar63._24_8_ + auVar118._24_8_) * auVar130._8_8_;
  auVar21 = vsubpd_avx(auVar63,auVar118);
  auVar91 = vunpcklpd_avx(local_170,auVar130);
  auVar113._0_8_ = auVar21._0_8_ * auVar91._0_8_;
  auVar113._8_8_ = auVar21._8_8_ * auVar91._8_8_;
  auVar119._16_8_ = auVar21._16_8_ * auVar107._0_8_;
  auVar119._0_16_ = auVar113;
  auVar119._24_8_ = auVar21._24_8_ * auVar107._8_8_;
  auVar21 = vsubpd_avx(auVar47,auVar47);
  auVar131._0_8_ = auVar21._0_8_ * __real_3fe0000000000000;
  auVar131._8_8_ = auVar21._8_8_ * __real_3fe0000000000000;
  auVar132._16_8_ = auVar21._16_8_ * __real_3fe0000000000000;
  auVar132._0_16_ = auVar131;
  auVar132._24_8_ = auVar21._24_8_ * __real_3fe0000000000000;
  auVar44._0_8_ = (auVar47._0_8_ + auVar47._0_8_) * __real_3fe0000000000000;
  auVar44._8_8_ = (auVar47._8_8_ + auVar47._8_8_) * __real_3fe0000000000000;
  auVar64._16_8_ = (auVar47._16_8_ + auVar47._16_8_) * __real_3fe0000000000000;
  auVar64._0_16_ = auVar44;
  auVar64._24_8_ = (auVar47._24_8_ + auVar47._24_8_) * __real_3fe0000000000000;
  auVar91 = CONCAT88(auVar96._0_8_,auVar96._0_8_);
  auVar47 = vblendpd_avx(ZEXT1632(auVar17),ZEXT1632(auVar91),2);
  auVar47 = vblendpd_avx(auVar47,auVar119,4);
  auVar130 = vshufpd_avx(auVar131,auVar131,3);
  auVar140._16_16_ = auVar96;
  auVar140._0_16_ = auVar113;
  auVar23 = vshufpd_avx(auVar140,ZEXT1632(auVar17),0xe);
  auVar20 = vperm2f128_avx(auVar132,auVar132,0x11);
  auVar21 = vblendpd_avx(ZEXT1632(auVar106._16_16_),auVar119,2);
  auVar21 = vblendpd_avx(auVar21,auVar28,4);
  auVar91 = vmovhps_avx(auVar34,__real_3ff0000000000000);
  auVar85._0_8_ =
       auVar143._0_8_ +
       auVar20._0_8_ * auVar21._0_8_ +
       auVar130._0_8_ * auVar23._0_8_ + auVar131._0_8_ * auVar47._0_8_;
  auVar85._8_8_ =
       auVar143._8_8_ +
       auVar20._0_8_ * auVar21._8_8_ +
       auVar130._8_8_ * auVar23._8_8_ + auVar131._0_8_ * auVar47._8_8_;
  auVar85._16_8_ =
       auVar91._0_8_ +
       auVar20._16_8_ * auVar21._16_8_ +
       auVar130._0_8_ * auVar23._16_8_ + auVar131._0_8_ * auVar47._16_8_;
  auVar85._24_8_ =
       auVar91._8_8_ +
       auVar20._16_8_ * auVar21._24_8_ +
       auVar130._8_8_ * auVar23._24_8_ + auVar131._0_8_ * auVar47._24_8_;
  auVar91 = vshufpd_avx(auVar44,auVar44,3);
  auVar20 = vperm2f128_avx(auVar64,auVar64,0x11);
  auVar29._0_8_ =
       (double)((ulonglong)(auVar20._0_8_ * auVar21._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar44._0_8_ * auVar47._0_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar91._0_8_ * auVar23._0_8_) & __real_7fffffffffffffff);
  auVar29._8_8_ =
       (double)((ulonglong)(auVar20._0_8_ * auVar21._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar44._0_8_ * auVar47._8_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar91._8_8_ * auVar23._8_8_) & __real_7fffffffffffffff);
  auVar29._16_8_ =
       (double)((ulonglong)(auVar20._16_8_ * auVar21._16_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar44._0_8_ * auVar47._16_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar91._0_8_ * auVar23._16_8_) & __real_7fffffffffffffff);
  auVar29._24_8_ =
       (double)((ulonglong)(auVar20._16_8_ * auVar21._24_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar44._0_8_ * auVar47._24_8_) & __real_7fffffffffffffff) +
       (double)((ulonglong)(auVar91._8_8_ * auVar23._24_8_) & __real_7fffffffffffffff);
  auVar47 = vsubpd_avx(auVar85,auVar29);
  auVar18._0_8_ = auVar85._0_8_ + auVar29._0_8_;
  auVar18._8_8_ = auVar85._8_8_ + auVar29._8_8_;
  auVar30._16_8_ = auVar85._16_8_ + auVar29._16_8_;
  auVar30._0_16_ = auVar18;
  auVar30._24_8_ = auVar85._24_8_ + auVar29._24_8_;
  *param_1 = auVar47._0_16_;
  auVar91 = vunpcklpd_avx(auVar47._16_16_,auVar18);
  param_1[1] = auVar91;
  auVar91 = vshufpd_avx(auVar18,auVar30._16_16_,1);
  param_1[2] = auVar91;
  param_1[3][0] = 1;
  return;
}

// SPhylCalcAABB_avx @ 140c83850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SPhylCalcAABB_avx(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float param_3,
                      undefined1 (*param_4) [24],double *param_5,float param_6,float param_7)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar26;
  undefined1 auVar16 [32];
  double dVar25;
  double dVar29;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar21 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar23 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong uVar30;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  double dVar60;
  double dVar85;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar86;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  double dVar87;
  undefined1 auVar72 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar84 [32];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [16];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [32];
  undefined1 auVar137 [32];
  undefined1 auVar139 [16];
  undefined1 auVar138 [32];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  double adStack_218 [3];
  undefined1 local_200 [8];
  double adStack_1f8 [3];
  undefined1 local_1e0 [16];
  double local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  undefined1 local_180 [16];
  double local_170 [4];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  double local_120 [2];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auVar20 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar44 [32];
  undefined1 auVar47 [32];
  undefined1 auVar50 [32];
  undefined1 auVar53 [32];
  undefined1 auVar57 [32];
  undefined1 auVar71 [32];
  undefined1 auVar73 [32];
  undefined1 auVar79 [32];
  undefined1 auVar83 [32];
  undefined1 auVar93 [32];
  undefined1 auVar103 [32];
  undefined1 auVar117 [32];
  undefined1 auVar125 [32];
  undefined1 auVar128 [32];
  undefined1 auVar132 [32];
  undefined1 auVar136 [32];
  
  auVar16._24_8_ = 0;
  auVar16._0_24_ = *param_4;
  auVar40._8_8_ = __real_4076800000000000;
  auVar40._0_8_ = __real_4076800000000000;
  auVar40._16_8_ = __real_4076800000000000;
  auVar40._24_8_ = __real_4076800000000000;
  auVar20 = vdivpd_avx(auVar16,auVar40);
  auVar101._0_8_ = auVar20._0_8_ & __real_7fffffffffffffff;
  auVar101._8_8_ = auVar20._8_8_ & __real_7fffffffffffffff;
  auVar101._16_8_ = auVar20._16_8_ & __real_7fffffffffffffff;
  auVar101._24_8_ = auVar20._24_8_ & __real_7fffffffffffffff;
  auVar109._8_8_ = __real_4330000000000000;
  auVar109._0_8_ = __real_4330000000000000;
  auVar109._16_8_ = __real_4330000000000000;
  auVar109._24_8_ = __real_4330000000000000;
  auVar42 = vcmppd_avx(auVar109,auVar101,2);
  auVar63 = vpackssdw_avx(auVar42._0_16_,auVar42._16_16_);
  auVar88 = vpshufd_avx(auVar63,0x50);
  auVar63 = vpshufd_avx(auVar63,0xfa);
  auVar102._16_16_ = auVar63;
  auVar102._0_16_ = auVar88;
  auVar63._0_12_ = ZEXT812(0);
  auVar63._12_4_ = 0;
  auVar18 = vcmpps_avx(ZEXT1632(auVar63),ZEXT1632(auVar63),0xf);
  auVar101 = ZEXT1632(auVar63);
  auVar42 = vblendvps_avx(auVar101,auVar18,auVar102);
  auVar17 = vroundpd_avx(auVar20,0xb);
  auVar114._0_4_ = ~auVar42._0_4_ & auVar17._0_4_;
  auVar114._4_4_ = ~auVar42._4_4_ & auVar17._4_4_;
  auVar114._8_4_ = ~auVar42._8_4_ & auVar17._8_4_;
  auVar114._12_4_ = ~auVar42._12_4_ & auVar17._12_4_;
  auVar114._16_4_ = ~auVar42._16_4_ & auVar17._16_4_;
  auVar114._20_4_ = ~auVar42._20_4_ & auVar17._20_4_;
  auVar114._24_4_ = ~auVar42._24_4_ & auVar17._24_4_;
  auVar114._28_4_ = ~auVar42._28_4_ & auVar17._28_4_;
  auVar90._0_8_ = auVar20._0_8_ & auVar42._0_8_;
  auVar90._8_8_ = auVar20._8_8_ & auVar42._8_8_;
  auVar90._16_8_ = auVar20._16_8_ & auVar42._16_8_;
  auVar90._24_8_ = auVar20._24_8_ & auVar42._24_8_;
  auVar90 = auVar90 | auVar114;
  auVar91._0_8_ = auVar90._0_8_ * __real_4076800000000000;
  auVar91._8_8_ = auVar90._8_8_ * __real_4076800000000000;
  auVar91._16_8_ = auVar90._16_8_ * __real_4076800000000000;
  auVar91._24_8_ = auVar90._24_8_ * __real_4076800000000000;
  auVar42 = vsubpd_avx(auVar16,auVar91);
  auVar42 = vminpd_avx(auVar42,auVar40);
  auVar41._8_8_ = __real_c076800000000000;
  auVar41._0_8_ = __real_c076800000000000;
  auVar41._16_8_ = __real_c076800000000000;
  auVar41._24_8_ = __real_c076800000000000;
  auVar42 = vmaxpd_avx(auVar41,auVar42);
  dVar7 = auVar42._0_8_ * ___ymm_3f81df46a2529d393f81df46a2529d393f81df46a2529d393f81df46a2529d39;
  dVar25 = auVar42._8_8_ * _UNK_151c6cec8;
  dVar26 = auVar42._16_8_ * _UNK_151c6ced0;
  dVar29 = auVar42._24_8_ * _UNK_151c6ced8;
  auVar42._0_8_ = dVar7 * ___ymm_3fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c8833fc45f306dc9c883;
  auVar42._8_8_ = dVar25 * _UNK_151c6cee8;
  auVar42._16_8_ = dVar26 * _UNK_151c6cef0;
  auVar42._24_8_ = dVar29 * _UNK_151c6cef8;
  auVar42 = vroundpd_avx(auVar42,0xb);
  auVar17._0_8_ =
       dVar7 + auVar42._0_8_ *
               ___ymm_c01921fb54442d18c01921fb54442d18c01921fb54442d18c01921fb54442d18;
  auVar17._8_8_ = dVar25 + auVar42._8_8_ * _UNK_151c6cf08;
  auVar17._16_8_ = dVar26 + auVar42._16_8_ * _UNK_151c6cf10;
  auVar17._24_8_ = dVar29 + auVar42._24_8_ * _UNK_151c6cf18;
  auVar43._0_8_ =
       (ulonglong)auVar17._0_8_ &
       ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
  auVar43._8_8_ = (ulonglong)auVar17._8_8_ & _UNK_150b513e8;
  auVar43._16_8_ = (ulonglong)auVar17._16_8_ & _UNK_150b513f0;
  auVar43._24_8_ = (ulonglong)auVar17._24_8_ & _UNK_150b513f8;
  auVar20 = vsubpd_avx(auVar43 | 
                       ___ymm_400921fb54442d18400921fb54442d18400921fb54442d18400921fb54442d18,
                       auVar17);
  auVar69._0_8_ = (ulonglong)auVar17._0_8_ & __real_7fffffffffffffff;
  auVar69._8_8_ = (ulonglong)auVar17._8_8_ & __real_7fffffffffffffff;
  auVar69._16_8_ = (ulonglong)auVar17._16_8_ & __real_7fffffffffffffff;
  auVar69._24_8_ = (ulonglong)auVar17._24_8_ & __real_7fffffffffffffff;
  auVar92._8_8_ = __real_3ff921fb54442d18;
  auVar92._0_8_ = __real_3ff921fb54442d18;
  auVar92._16_8_ = __real_3ff921fb54442d18;
  auVar92._24_8_ = __real_3ff921fb54442d18;
  auVar42 = vcmppd_avx(auVar92,auVar69,1);
  auVar63 = vpackssdw_avx(auVar42._0_16_,auVar42._16_16_);
  auVar88 = vpshufd_avx(auVar63,0x50);
  auVar63 = vpshufd_avx(auVar63,0xfa);
  auVar70._16_16_ = auVar63;
  auVar70._0_16_ = auVar88;
  auVar42 = vblendvps_avx(auVar101,auVar18,auVar70);
  auVar18._0_4_ = ~auVar42._0_4_ & SUB84(auVar17._0_8_,0);
  auVar18._4_4_ = ~auVar42._4_4_ & (uint)((ulonglong)auVar17._0_8_ >> 0x20);
  auVar18._8_4_ = ~auVar42._8_4_ & SUB84(auVar17._8_8_,0);
  auVar18._12_4_ = ~auVar42._12_4_ & (uint)((ulonglong)auVar17._8_8_ >> 0x20);
  auVar18._16_4_ = ~auVar42._16_4_ & SUB84(auVar17._16_8_,0);
  auVar18._20_4_ = ~auVar42._20_4_ & (uint)((ulonglong)auVar17._16_8_ >> 0x20);
  auVar18._24_4_ = ~auVar42._24_4_ & SUB84(auVar17._24_8_,0);
  auVar18._28_4_ = ~auVar42._28_4_ & (uint)((ulonglong)auVar17._24_8_ >> 0x20);
  auVar19._0_8_ = auVar20._0_8_ & auVar42._0_8_;
  auVar19._8_8_ = auVar20._8_8_ & auVar42._8_8_;
  auVar19._16_8_ = auVar20._16_8_ & auVar42._16_8_;
  auVar19._24_8_ = auVar20._24_8_ & auVar42._24_8_;
  auVar19 = auVar19 | auVar18;
  dVar7 = auVar19._0_8_;
  dVar60 = dVar7 * dVar7;
  dVar25 = auVar19._8_8_;
  dVar85 = dVar25 * dVar25;
  dVar26 = auVar19._16_8_;
  dVar86 = dVar26 * dVar26;
  dVar29 = auVar19._24_8_;
  dVar87 = dVar29 * dVar29;
  auVar115._8_8_ = __real_3ff0000000000000;
  auVar115._0_8_ = __real_3ff0000000000000;
  auVar115._16_8_ = __real_3ff0000000000000;
  auVar115._24_8_ = __real_3ff0000000000000;
  auVar8._0_8_ = (dVar60 * (dVar60 * (dVar60 * (dVar60 * (dVar60 * 
                                                  ___ymm_be59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806fbe59a6cb605c806f
                                                  + 
                                                  ___ymm_00000000000000003ec71711c625173e3ec71711c625173e3ec71711c625173e
                                                  ) + 
                                               ___ymm_0000000000000000bf2a017e195d6197bf2a017e195d6197bf2a017e195d6197
                                               ) +
                                     ___ymm_00000000000000003f811110c0e4d9803f811110c0e4d9803f811110c0e4d980
                                     ) +
                           ___ymm_0000000000000000bfc555555c7dda4bbfc555555c7dda4bbfc555555c7dda4b)
                 + __real_3ff0000000000000) * dVar7;
  auVar8._8_8_ = (dVar85 * (dVar85 * (dVar85 * (dVar85 * (dVar85 * _UNK_151c6cf68 + _UNK_151c6cf88)
                                               + _UNK_151c6cfa8) + _UNK_151c6cfc8) + _UNK_151c6cfe8)
                 + __real_3ff0000000000000) * dVar25;
  auVar20._16_8_ =
       (dVar86 * (dVar86 * (dVar86 * (dVar86 * (dVar86 * _UNK_151c6cf70 + _UNK_151c6cf90) +
                                     _UNK_151c6cfb0) + _UNK_151c6cfd0) + _UNK_151c6cff0) +
       __real_3ff0000000000000) * dVar26;
  auVar20._0_16_ = auVar8;
  auVar20._24_8_ =
       (dVar87 * (dVar87 * (dVar87 * (dVar87 * (dVar87 * _UNK_151c6cf78 + _UNK_151c6cf98) +
                                     _UNK_151c6cfb8) + _UNK_151c6cfd8) + _UNK_151c6cff8) +
       __real_3ff0000000000000) * dVar29;
  auVar31._0_8_ =
       (dVar60 * (dVar60 * (dVar60 * (dVar60 * (dVar60 * 
                                                ___ymm_be917ba225041884be917ba225041884be917ba225041884be917ba225041884
                                               + 
                                               ___ymm_00000000000000003ef9f698429782503ef9f698429782503ef9f69842978250
                                               ) +
                                     ___ymm_0000000000000000bf56c1353b8c783dbf56c1353b8c783dbf56c1353b8c783d
                                     ) +
                           ___ymm_00000000000000003fa555545f16aaab3fa555545f16aaab3fa555545f16aaab)
                 + ___ymm_0000000000000000bfe0000000000000bfe0000000000000bfe0000000000000) +
       __real_3ff0000000000000) *
       (double)(auVar42._0_8_ &
                CONCAT44(_UNK_151c6af64,
                         ___ymm_0000000000000000800000000000000080000000000000008000000000000000) |
               (ulonglong)___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000);
  auVar31._8_8_ =
       (dVar85 * (dVar85 * (dVar85 * (dVar85 * (dVar85 * _UNK_151c6d008 + _UNK_151c6d028) +
                                     _UNK_151c6d048) + _UNK_151c6d068) + _UNK_151c6d088) +
       __real_3ff0000000000000) *
       (double)(auVar42._8_8_ & CONCAT44(_UNK_151c6af6c,_UNK_151c6af68) | (ulonglong)_UNK_150b54508)
  ;
  auVar44._16_8_ =
       (dVar86 * (dVar86 * (dVar86 * (dVar86 * (dVar86 * _UNK_151c6d010 + _UNK_151c6d030) +
                                     _UNK_151c6d050) + _UNK_151c6d070) + _UNK_151c6d090) +
       __real_3ff0000000000000) *
       (double)(auVar42._16_8_ & CONCAT44(_UNK_151c6af74,_UNK_151c6af70) | (ulonglong)_UNK_150b54510
               );
  auVar44._0_16_ = auVar31;
  auVar44._24_8_ =
       (dVar87 * (dVar87 * (dVar87 * (dVar87 * (dVar87 * _UNK_151c6d018 + _UNK_151c6d038) +
                                     _UNK_151c6d058) + _UNK_151c6d078) + _UNK_151c6d098) +
       __real_3ff0000000000000) *
       (double)(auVar42._24_8_ & CONCAT44(_UNK_151c6af7c,_UNK_151c6af78) | (ulonglong)_UNK_150b54518
               );
  auVar63 = vunpckhpd_avx(auVar8,auVar31);
  auVar42 = vperm2f128_avx(auVar44,auVar44,0x11);
  auVar88 = vunpckhpd_avx(auVar31,auVar8);
  auVar18 = vperm2f128_avx(auVar20,auVar20,0x11);
  auVar45._0_8_ =
       (double)((ulonglong)(auVar42._0_8_ * auVar8._0_8_ * auVar63._0_8_) ^
               ___ymm_0000000000000000000000000000000080000000000000000000000000000000) +
       (double)((ulonglong)(auVar18._0_8_ * auVar31._0_8_ * auVar88._0_8_) ^
               CONCAT44(_UNK_151c6af64,
                        ___ymm_0000000000000000800000000000000080000000000000008000000000000000));
  auVar45._8_8_ =
       (double)((ulonglong)(auVar42._0_8_ * auVar8._0_8_ * auVar63._8_8_) ^ _UNK_151c6cde8) +
       (double)((ulonglong)(auVar18._0_8_ * auVar31._0_8_ * auVar88._8_8_) ^
               CONCAT44(_UNK_151c6af6c,_UNK_151c6af68));
  auVar45._16_8_ =
       (double)((ulonglong)(auVar42._16_8_ * auVar31._0_8_ * auVar63._0_8_) ^ _UNK_151c6cdf0) +
       (double)((ulonglong)(auVar18._16_8_ * auVar8._0_8_ * auVar88._0_8_) ^
               CONCAT44(_UNK_151c6af74,_UNK_151c6af70));
  auVar45._24_8_ =
       (double)((ulonglong)(auVar42._16_8_ * auVar31._0_8_ * auVar63._8_8_) ^ _UNK_151c6cdf8) +
       (double)((ulonglong)(auVar18._16_8_ * auVar8._0_8_ * auVar88._8_8_) ^
               CONCAT44(_UNK_151c6af7c,_UNK_151c6af78));
  dVar7 = (double)param_3;
  local_d0._0_8_ = dVar7 * *param_5;
  local_d0._8_8_ = dVar7 * param_5[1];
  auVar139._0_8_ = dVar7 * param_5[2];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = *(double *)param_2[4];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = *(ulonglong *)(param_2[4] + 8);
  dVar7 = *(double *)param_2[5];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar7;
  auVar42 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 4),auVar101,1);
  auVar63 = vpackssdw_avx(auVar42._0_16_,auVar42._16_16_);
  if ((((SUB161(auVar63 >> 0x1f,0) & 1) == 0 && (SUB161(auVar63 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar63 >> 0x5f,0) & 1) == 0) && -1 < auVar63[0xf]) {
    dVar7 = *(double *)(param_2[1] + 8);
    auVar11._8_8_ = dVar7;
    auVar11._0_8_ = dVar7;
    auVar141._8_8_ = 0;
    auVar141._0_8_ = *(ulonglong *)(param_2[5] + 8);
    dVar25 = *(double *)*param_2;
    auVar113._8_8_ = dVar25;
    auVar113._0_8_ = dVar25;
    auVar20 = vperm2f128_avx(auVar45,auVar45,1);
    auVar42 = vshufpd_avx(auVar20,auVar20,5);
    dVar26 = *(double *)(*param_2 + 8);
    auVar140._8_8_ = dVar26;
    auVar140._0_8_ = dVar26;
    dVar29 = *(double *)param_2[1];
    auVar65._8_8_ = dVar29;
    auVar65._0_8_ = dVar29;
    auVar18 = vshufpd_avx(auVar45,auVar45,5);
    auVar123._0_8_ =
         auVar18._0_8_ * dVar29 *
         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
         dVar26 * auVar20._0_8_ *
         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
         auVar45._0_8_ * dVar7 +
         auVar42._0_8_ * dVar25 *
         ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
    auVar123._8_8_ =
         auVar18._8_8_ * dVar29 * _UNK_150b54428 +
         dVar26 * auVar20._8_8_ * _UNK_150b54408 +
         auVar45._8_8_ * dVar7 + auVar42._8_8_ * dVar25 * _UNK_150b543e8;
    auVar128._16_8_ =
         auVar18._16_8_ * dVar29 * _UNK_150b54430 +
         dVar26 * auVar20._16_8_ * _UNK_150b54410 +
         auVar45._16_8_ * dVar7 + auVar42._16_8_ * dVar25 * _UNK_150b543f0;
    auVar128._0_16_ = auVar123;
    auVar128._24_8_ =
         auVar18._24_8_ * dVar29 * _UNK_150b54438 +
         dVar26 * auVar20._24_8_ * _UNK_150b54418 +
         auVar45._24_8_ * dVar7 + auVar42._24_8_ * dVar25 * _UNK_150b543f8;
    auVar32 = vshufpd_avx(auVar123,auVar123,1);
    auVar28 = auVar128._16_16_;
    auVar63 = vshufpd_avx(auVar28,auVar28,1);
    dVar25 = auVar63._0_8_;
    auVar8 = vmovlhps_avx(auVar10,auVar141);
    auVar31 = vmovlhps_avx(auVar88,auVar97);
    auVar35._0_8_ = local_d0._0_8_ * auVar31._0_8_;
    auVar35._8_8_ = local_d0._8_8_ * auVar31._8_8_;
    auVar53._16_8_ = auVar139._0_8_ * auVar8._0_8_;
    auVar53._0_16_ = auVar35;
    auVar53._24_8_ = auVar8._8_8_ * 0.0;
    auVar105._16_16_ = auVar35;
    auVar105._0_16_ = auVar35;
    auVar42 = vperm2f128_avx(auVar53,auVar53,0x11);
    auVar42 = vshufpd_avx(auVar105,auVar42,9);
    auVar97 = vunpcklpd_avx(auVar113,auVar140);
    auVar63 = vblendpd_avx(auVar113,auVar65,1);
    auVar88 = vunpcklpd_avx(auVar65,auVar11);
    auVar106._0_8_ = auVar42._0_8_ * auVar97._0_8_;
    auVar106._8_8_ = auVar42._8_8_ * auVar97._8_8_;
    auVar106._16_8_ = auVar42._16_8_ * auVar88._0_8_;
    auVar106._24_8_ = auVar42._24_8_ * auVar88._8_8_;
    auVar10 = vunpcklpd_avx(auVar140,auVar65);
    auVar88 = vblendpd_avx(auVar140,auVar113,1);
    auVar139 = vunpcklpd_avx(auVar113,auVar11);
    auVar78._0_8_ = auVar35._0_8_ * auVar10._0_8_;
    auVar78._8_8_ = auVar35._8_8_ * auVar10._8_8_;
    auVar78._16_8_ = auVar53._16_8_ * auVar139._0_8_;
    auVar78._24_8_ = auVar53._24_8_ * auVar139._8_8_;
    auVar42 = vsubpd_avx(auVar106,auVar78);
    auVar66._0_8_ = auVar42._0_8_ + auVar42._0_8_;
    auVar66._8_8_ = auVar42._8_8_ + auVar42._8_8_;
    auVar79._16_8_ = auVar42._16_8_ + auVar42._16_8_;
    auVar79._0_16_ = auVar66;
    auVar79._24_8_ = auVar42._24_8_ + auVar42._24_8_;
    auVar107._16_16_ = auVar66;
    auVar107._0_16_ = auVar66;
    auVar42 = vshufpd_avx(auVar107,ZEXT1632(auVar79._16_16_),1);
    auVar18 = vperm2f128_avx(auVar79,auVar79,1);
    auVar18 = vshufpd_avx(auVar18,auVar79,4);
    auVar54._0_8_ = auVar97._0_8_ * auVar18._0_8_;
    auVar54._8_8_ = auVar97._8_8_ * auVar18._8_8_;
    auVar54._16_8_ = auVar63._0_8_ * auVar18._16_8_;
    auVar54._24_8_ = auVar63._8_8_ * auVar18._24_8_;
    auVar80._0_8_ = auVar10._0_8_ * auVar42._0_8_;
    auVar80._8_8_ = auVar10._8_8_ * auVar42._8_8_;
    auVar80._16_8_ = auVar88._0_8_ * auVar42._16_8_;
    auVar80._24_8_ = auVar88._8_8_ * auVar42._24_8_;
    auVar18 = vsubpd_avx(auVar54,auVar80);
    auVar81._16_16_ = auVar18._0_16_;
    auVar81._0_16_ = auVar18._0_16_;
    auVar18 = vshufpd_avx(auVar81,ZEXT1632(auVar18._16_16_),1);
    auVar12._0_8_ = *(double *)param_2[2] + auVar35._0_8_ + dVar7 * auVar42._0_8_ + auVar18._0_8_;
    auVar12._8_8_ =
         *(double *)(param_2[2] + 8) + auVar35._8_8_ + dVar7 * auVar42._8_8_ + auVar18._8_8_;
    auVar22._16_8_ =
         *(double *)param_2[3] + auVar53._16_8_ + dVar7 * auVar42._16_8_ + auVar18._16_8_;
    auVar22._0_16_ = auVar12;
    auVar22._24_8_ = auVar53._24_8_ + dVar7 * auVar42._24_8_ + auVar18._24_8_ + 0.0;
    auVar38 = vshufpd_avx(auVar12,auVar12,1);
    auVar89._0_8_ =
         auVar31._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
    auVar89._8_8_ = auVar31._8_8_ * _UNK_150b54508;
    auVar94._16_8_ = auVar8._0_8_ * _UNK_150b54510;
    auVar94._0_16_ = auVar89;
    auVar94._24_8_ = auVar8._8_8_ * _UNK_150b54518;
    auVar27 = auVar22._16_16_;
    local_140 = vshufpd_avx(auVar89,auVar89,1);
    local_180 = auVar94._16_16_;
    local_150 = vshufpd_avx(local_180,local_180,1);
    goto LAB_140c8444d;
  }
  auVar139._8_8_ = 0;
  auVar61._0_8_ = auVar45._0_8_ + auVar45._0_8_;
  auVar61._8_8_ = auVar45._8_8_ + auVar45._8_8_;
  auVar71._16_8_ = auVar45._16_8_ + auVar45._16_8_;
  auVar71._0_16_ = auVar61;
  auVar71._24_8_ = auVar45._24_8_ + auVar45._24_8_;
  auVar120._0_8_ = auVar45._0_8_ * auVar61._0_8_;
  auVar120._8_8_ = auVar45._8_8_ * auVar61._8_8_;
  auVar125._16_8_ = auVar45._16_8_ * auVar71._16_8_;
  auVar125._0_16_ = auVar120;
  auVar125._24_8_ = auVar45._24_8_ * auVar71._24_8_;
  auVar63 = vshufpd_avx(auVar120,auVar120,1);
  auVar42 = vperm2f128_avx(auVar125,auVar125,1);
  auVar42 = vshufpd_avx(auVar42,auVar42,4);
  auVar126._0_8_ = auVar63._0_8_ + auVar42._0_8_;
  auVar126._8_8_ = auVar63._8_8_ + auVar42._8_8_;
  auVar126._16_8_ = auVar120._0_8_ + auVar42._16_8_;
  auVar126._24_8_ = auVar120._8_8_ + auVar42._24_8_;
  auVar20 = vsubpd_avx(auVar115,auVar126);
  auVar18 = vperm2f128_avx(auVar71,auVar71,1);
  auVar42 = vshufpd_avx(auVar71,auVar18,1);
  auVar135._0_8_ = auVar45._0_8_ * auVar42._0_8_;
  auVar135._8_8_ = auVar45._8_8_ * auVar42._8_8_;
  auVar135._16_8_ = auVar45._0_8_ * auVar42._16_8_;
  auVar135._24_8_ = auVar45._0_8_ * auVar42._24_8_;
  auVar42 = vperm2f128_avx(auVar45,auVar45,0x11);
  auVar42 = vshufpd_avx(auVar42,auVar42,0xf);
  auVar72._16_16_ = auVar61;
  auVar72._0_16_ = auVar61;
  auVar18 = vshufpd_avx(auVar18,auVar72,4);
  auVar46._0_8_ = auVar42._0_8_ * auVar18._0_8_;
  auVar46._8_8_ = auVar42._8_8_ * auVar18._8_8_;
  auVar46._16_8_ = auVar42._16_8_ * auVar18._16_8_;
  auVar46._24_8_ = auVar42._24_8_ * auVar18._24_8_;
  auVar62._0_8_ = auVar135._0_8_ + auVar46._0_8_;
  auVar62._8_8_ = auVar135._8_8_ + auVar46._8_8_;
  auVar73._16_8_ = auVar135._16_8_ + auVar46._16_8_;
  auVar73._0_16_ = auVar62;
  auVar73._24_8_ = auVar135._24_8_ + auVar46._24_8_;
  auVar42 = vsubpd_avx(auVar135,auVar46);
  local_130 = vunpcklpd_avx(auVar20._0_16_,auVar62);
  local_120[0] = (double)vmovlps_avx(auVar42._16_16_);
  local_120[1] = 0.0;
  local_110 = vblendpd_avx(auVar20._0_16_,auVar42._0_16_,1);
  local_100 = vmovhpd_avx(auVar62);
  local_f8 = 0;
  local_f0 = vblendpd_avx(auVar42._0_16_,auVar73._16_16_,1);
  local_e0 = vmovlps_avx(auVar20._16_16_);
  local_d8 = 0;
  local_c0 = vmovlpd_avx(auVar139);
  local_b8 = 0x3ff0000000000000;
  auVar63 = *param_2;
  auVar8 = param_2[2];
  uVar1 = *(undefined8 *)param_2[1];
  auVar32._8_8_ = uVar1;
  auVar32._0_8_ = uVar1;
  auVar47._16_8_ = uVar1;
  auVar47._0_16_ = auVar32;
  auVar47._24_8_ = uVar1;
  dVar25 = *(double *)(param_2[1] + 8);
  auVar121._8_8_ = dVar25;
  auVar121._0_8_ = dVar25;
  auVar42 = vblendpd_avx(ZEXT1632(auVar63),auVar47,4);
  auVar31 = vunpcklpd_avx(auVar32,auVar121);
  dVar26 = auVar63._0_8_;
  auVar133._0_8_ = dVar26 + dVar26;
  dVar29 = auVar63._8_8_;
  auVar133._8_8_ = dVar29 + dVar29;
  auVar136._16_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar136._0_16_ = auVar133;
  auVar136._24_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar28._0_8_ = auVar42._0_8_ * auVar133._0_8_;
  auVar28._8_8_ = auVar42._8_8_ * auVar133._8_8_;
  auVar48._16_8_ = auVar42._16_8_ * auVar136._16_8_;
  auVar48._0_16_ = auVar28;
  auVar48._24_8_ = auVar42._24_8_ * auVar136._24_8_;
  auVar63 = vshufpd_avx(auVar28,auVar28,1);
  auVar42 = vperm2f128_avx(auVar48,auVar48,1);
  auVar42 = vshufpd_avx(auVar42,auVar42,4);
  auVar49._0_8_ = auVar63._0_8_ + auVar42._0_8_;
  auVar49._8_8_ = auVar63._8_8_ + auVar42._8_8_;
  auVar49._16_8_ = auVar28._0_8_ + auVar42._16_8_;
  auVar49._24_8_ = auVar28._8_8_ + auVar42._24_8_;
  auVar42 = vsubpd_avx(auVar115,auVar49);
  auVar63 = vmovlhps_avx(auVar88,auVar97);
  auVar116._16_8_ = dVar7;
  auVar116._0_16_ = auVar63;
  auVar116._24_8_ = 0;
  auVar33._0_8_ = auVar63._0_8_ * auVar42._0_8_;
  auVar33._8_8_ = auVar63._8_8_ * auVar42._8_8_;
  auVar50._16_8_ = dVar7 * auVar42._16_8_;
  auVar50._0_16_ = auVar33;
  auVar50._24_8_ = auVar42._24_8_ * 0.0;
  auVar18 = vperm2f128_avx(auVar136,auVar136,1);
  auVar42 = vshufpd_avx(auVar136,auVar18,1);
  auVar74._0_8_ = auVar42._0_8_ * dVar26;
  auVar74._8_8_ = auVar42._8_8_ * dVar29;
  auVar74._16_8_ = auVar42._16_8_ * *(double *)*param_2;
  auVar74._24_8_ = auVar42._24_8_ * *(double *)*param_2;
  auVar137._16_16_ = auVar133;
  auVar137._0_16_ = auVar133;
  auVar42 = vshufpd_avx(auVar18,auVar137,4);
  auVar127._0_8_ = auVar42._0_8_ * dVar25;
  auVar127._8_8_ = auVar42._8_8_ * dVar25;
  auVar127._16_8_ = auVar42._16_8_ * dVar25;
  auVar127._24_8_ = auVar42._24_8_ * dVar25;
  auVar130._0_8_ = (auVar74._0_8_ + auVar127._0_8_) * auVar63._0_8_;
  auVar130._8_8_ = (auVar74._8_8_ + auVar127._8_8_) * auVar63._8_8_;
  auVar132._16_8_ = (auVar74._16_8_ + auVar127._16_8_) * dVar7;
  auVar132._0_16_ = auVar130;
  auVar132._24_8_ = (auVar74._24_8_ + auVar127._24_8_) * 0.0;
  auVar18 = vsubpd_avx(auVar74,auVar127);
  auVar63 = vmovlhps_avx(auVar97,auVar10);
  uVar1 = *(undefined8 *)(param_2[5] + 8);
  auVar110._8_8_ = uVar1;
  auVar110._0_8_ = uVar1;
  auVar110._16_8_ = uVar1;
  auVar110._24_8_ = uVar1;
  auVar42 = vblendpd_avx(auVar116,auVar110,8);
  auVar89._0_8_ =
       auVar42._0_8_ * ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  auVar89._8_8_ = auVar42._8_8_ * _UNK_150b54508;
  auVar93._16_8_ = auVar42._16_8_ * _UNK_150b54510;
  auVar93._0_16_ = auVar89;
  auVar93._24_8_ = auVar42._24_8_ * _UNK_150b54518;
  auVar98._0_8_ = auVar18._0_8_ * auVar63._0_8_;
  auVar98._8_8_ = auVar18._8_8_ * auVar63._8_8_;
  auVar103._16_8_ = auVar18._16_8_ * *(double *)param_2[4];
  auVar103._0_16_ = auVar98;
  auVar103._24_8_ = auVar18._24_8_ * 0.0;
  local_180 = auVar93._16_16_;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = *(ulonglong *)param_2[3];
  auVar63 = CONCAT88(auVar130._0_8_,auVar130._0_8_);
  auVar42 = vblendpd_avx(ZEXT1632(auVar33),ZEXT1632(auVar63),2);
  auVar42 = vblendpd_avx(auVar42,auVar103,4);
  auVar18 = vblendpd_avx(ZEXT1632(auVar132._16_16_),auVar103,2);
  auVar18 = vblendpd_avx(auVar18,auVar50,4);
  auVar104._16_16_ = auVar130;
  auVar104._0_16_ = auVar98;
  auVar20 = vshufpd_avx(auVar104,ZEXT1632(auVar33),0xe);
  auVar63 = vmovhpd_avx(auVar111,__real_3ff0000000000000);
  lVar6 = 0x18;
  do {
    dVar7 = *(double *)(local_150 + lVar6 + 8);
    dVar25 = *(double *)(local_140 + lVar6 + 8);
    dVar26 = *(double *)(local_140 + lVar6);
    dVar29 = *(double *)(local_130 + lVar6);
    *(double *)((longlong)adStack_218 + lVar6) =
         auVar42._0_8_ * dVar7 + auVar18._0_8_ * dVar25 + auVar20._0_8_ * dVar26 +
         auVar8._0_8_ * dVar29;
    *(double *)((longlong)adStack_218 + lVar6 + 8) =
         auVar42._8_8_ * dVar7 + auVar18._8_8_ * dVar25 + auVar20._8_8_ * dVar26 +
         auVar8._8_8_ * dVar29;
    *(double *)((longlong)adStack_218 + lVar6 + 0x10) =
         auVar42._16_8_ * dVar7 + auVar18._16_8_ * dVar25 + auVar20._16_8_ * dVar26 +
         auVar63._0_8_ * dVar29;
    *(double *)(local_200 + lVar6) =
         auVar42._24_8_ * dVar7 + auVar18._24_8_ * dVar25 + auVar20._24_8_ * dVar26 +
         auVar63._8_8_ * dVar29;
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x98);
  dVar7 = (double)local_200 * (double)local_200 + adStack_1f8[0] * adStack_1f8[0] +
          adStack_1f8[1] * adStack_1f8[1];
  dVar25 = (double)local_1e0._0_8_ * (double)local_1e0._0_8_ +
           (double)local_1e0._8_8_ * (double)local_1e0._8_8_ + local_1d0 * local_1d0;
  dVar26 = __real_3ff0000000000000;
  if (0.0 <= dVar7 + __real_be45798ee2308c3a) {
    dVar26 = __real_3ff0000000000000 / SQRT(dVar7);
  }
  dVar7 = local_1b0 * local_1b0 +
          (double)local_1c0._0_8_ * (double)local_1c0._0_8_ +
          (double)local_1c0._8_8_ * (double)local_1c0._8_8_;
  dVar29 = __real_3ff0000000000000;
  if (0.0 <= dVar25 + __real_be45798ee2308c3a) {
    dVar29 = __real_3ff0000000000000 / SQRT(dVar25);
  }
  local_140 = vshufpd_avx(auVar89,auVar89,1);
  local_150 = vpermilpd_avx(local_180,1);
  auVar131 = ZEXT816(0);
  dVar25 = __real_3ff0000000000000;
  if (0.0 <= dVar7 + __real_be45798ee2308c3a) {
    dVar25 = __real_3ff0000000000000 / SQRT(dVar7);
  }
  auVar64._8_8_ = 0;
  auVar64._0_8_ = (double)local_200 * dVar26;
  auVar99._8_8_ = 0;
  auVar99._0_8_ = adStack_1f8[0] * dVar26;
  auVar8 = vunpcklpd_avx(auVar64,auVar99);
  auVar122._8_8_ = 0;
  auVar122._0_8_ = (double)local_1e0._0_8_ * dVar29;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = (double)local_1e0._8_8_ * dVar29;
  auVar31 = vunpcklpd_avx(auVar122,auVar134);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar25 * (double)local_1c0._0_8_;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = dVar25 * (double)local_1c0._8_8_;
  auVar97 = vunpcklpd_avx(auVar9,auVar34);
  auVar10 = ZEXT816(0);
  auVar42 = vcmppd_avx(ZEXT1632(auVar10),auVar93,2);
  auVar63 = vpackssdw_avx(auVar42._0_16_,auVar42._16_16_);
  auVar88 = vpshufd_avx(auVar63,0x50);
  auVar63 = vpshufd_avx(auVar63,0xfa);
  auVar51._16_16_ = auVar63;
  auVar51._0_16_ = auVar88;
  auVar42 = vcmpps_avx(ZEXT1632(auVar10),ZEXT1632(auVar10),0xf);
  auVar42 = vblendvps_avx(ZEXT1632(auVar10),auVar42,auVar51);
  auVar112._0_4_ =
       auVar42._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000 ^
       ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar112._4_4_ = auVar42._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
  auVar112._8_4_ = auVar42._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
  auVar112._12_4_ = auVar42._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
  auVar117._16_4_ = auVar42._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
  auVar117._0_16_ = auVar112;
  auVar117._20_4_ = auVar42._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
  auVar117._24_4_ = auVar42._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
  auVar117._28_4_ = auVar42._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
  auVar63 = vshufps_avx(auVar112,auVar112,0x44);
  local_200 = (undefined1  [8])(auVar8._0_8_ * auVar63._0_8_);
  adStack_1f8[0] = auVar8._8_8_ * auVar63._8_8_;
  auVar52._16_8_ = adStack_1f8[1] * dVar26 * auVar63._0_8_;
  auVar52._0_16_ = _local_200;
  auVar52._24_8_ = auVar63._8_8_ * 0.0;
  adStack_1f8[1] = (double)vmovlpd_avx(auVar52._16_16_);
  auVar63 = vshufps_avx(auVar112,auVar112,0xee);
  local_1e0._0_8_ = auVar63._0_8_ * auVar31._0_8_;
  local_1e0._8_8_ = auVar63._8_8_ * auVar31._8_8_;
  auVar21._16_8_ = auVar63._0_8_ * local_1d0 * dVar29;
  auVar21._0_16_ = local_1e0;
  auVar21._24_8_ = auVar63._8_8_ * 0.0;
  local_1d0 = (double)vmovlpd_avx(auVar21._16_16_);
  auVar42 = vperm2f128_avx(auVar117,auVar117,0x11);
  local_1c0._0_8_ = auVar42._0_8_ * auVar97._0_8_;
  local_1c0._8_8_ = auVar42._0_8_ * auVar97._8_8_;
  auVar138._16_8_ = auVar42._16_8_ * local_1b0 * dVar25;
  auVar138._0_16_ = local_1c0;
  auVar138._24_8_ = auVar42._16_8_ * 0.0;
  auVar42 = vblendpd_avx(auVar52,
                         ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8);
  auVar75._0_8_ =
       auVar42._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
  auVar75._8_8_ = auVar42._8_8_ & _UNK_150aa8f48;
  auVar75._16_8_ = auVar42._16_8_ & _UNK_150aa8f50;
  auVar75._24_8_ = auVar42._24_8_ & _UNK_150aa8f58;
  auVar42 = vcmppd_avx(auVar75,
                       ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6);
  local_1b0 = (double)vmovlpd_avx(auVar138._16_16_);
  auVar63 = vpackssdw_avx(auVar42._0_16_,auVar42._16_16_);
  if ((((SUB161(auVar63 >> 0x1f,0) & 1) == 0 && (SUB161(auVar63 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar63 >> 0x5f,0) & 1) == 0) && -1 < auVar63[0xf]) {
    auVar36 = ZEXT816(0) << 0x40;
    auVar124 = SUB6416(ZEXT864(0),0) << 0x40;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = __real_3ff0000000000000;
  }
  else {
    auVar42 = vblendpd_avx(auVar21,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar76._0_8_ =
         auVar42._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar76._8_8_ = auVar42._8_8_ & _UNK_150aa8f48;
    auVar76._16_8_ = auVar42._16_8_ & _UNK_150aa8f50;
    auVar76._24_8_ = auVar42._24_8_ & _UNK_150aa8f58;
    auVar42 = vcmppd_avx(auVar76,
                         ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6);
    auVar63 = vpackssdw_avx(auVar42._0_16_,auVar42._16_16_);
    if ((((SUB161(auVar63 >> 0x1f,0) & 1) != 0 || (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || auVar63[0xf] < '\0') {
      auVar42 = vblendpd_avx(auVar138,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar77._0_8_ =
           auVar42._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar77._8_8_ = auVar42._8_8_ & _UNK_150aa8f48;
      auVar77._16_8_ = auVar42._16_8_ & _UNK_150aa8f50;
      auVar77._24_8_ = auVar42._24_8_ & _UNK_150aa8f58;
      auVar42 = vcmppd_avx(auVar77,
                           ___ymm_3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d3f1a36e2eb1c432d,6
                          );
      auVar63 = vpackssdw_avx(auVar42._0_16_,auVar42._16_16_);
      if ((((SUB161(auVar63 >> 0x1f,0) & 1) != 0 || (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || auVar63[0xf] < '\0') {
        auVar63 = vshufpd_avx(local_1e0,local_1e0,1);
        dVar7 = auVar138._16_8_ + (double)local_200 + auVar63._0_8_;
        if (dVar7 <= 0.0) {
          bVar4 = (double)local_200 < auVar63._0_8_;
          uVar30 = 2;
          if (auVar138._16_8_ <= *(double *)(local_200 + ((uint)bVar4 * 0x20 + (uint)bVar4 * 8))) {
            uVar30 = (ulonglong)bVar4;
          }
          iVar2 = *(int *)(&DAT_151c6d0a0 + uVar30 * 4);
          lVar6 = (longlong)iVar2;
          iVar3 = *(int *)(&DAT_151c6d0a0 + lVar6 * 4);
          iVar5 = (int)uVar30;
          dVar25 = __real_3ff0000000000000 /
                   SQRT(((*(double *)(local_200 + (uint)(iVar5 * 0x28)) -
                         *(double *)(local_200 + lVar6 * 0x28)) -
                        *(double *)(local_200 + (longlong)iVar3 * 0x28)) + __real_3ff0000000000000);
          dVar7 = dVar25 * __real_3fe0000000000000;
          *(double *)((longlong)local_170 + (ulonglong)(uint)(iVar5 * 8)) =
               (__real_3ff0000000000000 / dVar25) * __real_3fe0000000000000;
          local_170[lVar6] =
               (*(double *)(local_200 + (longlong)(iVar2 + iVar5 * 4) * 8) +
               *(double *)(local_200 + (longlong)(iVar5 + iVar2 * 4) * 8)) * dVar7;
          local_170[iVar3] =
               dVar7 * (*(double *)(local_200 + (longlong)(iVar3 + iVar5 * 4) * 8) +
                       *(double *)(local_200 + (longlong)(iVar5 + iVar3 * 4) * 8));
          dVar7 = dVar7 * (*(double *)(local_200 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                          *(double *)(local_200 + (longlong)(iVar2 + iVar3 * 4) * 8));
        }
        else {
          auVar63 = vshufpd_avx(_local_200,_local_200,1);
          auVar88 = vshufpd_avx(local_1c0,local_1c0,1);
          dVar25 = __real_3ff0000000000000 / SQRT(dVar7 + __real_3ff0000000000000);
          dVar7 = dVar25 * __real_3fe0000000000000;
          local_170[0] = dVar7 * (auVar21._16_8_ - auVar88._0_8_);
          local_170[1] = dVar7 * ((double)local_1c0._0_8_ - auVar52._16_8_);
          local_170[2] = dVar7 * (auVar63._0_8_ - (double)local_1e0._0_8_);
          dVar7 = (__real_3ff0000000000000 / dVar25) * __real_3fe0000000000000;
        }
        auVar131._8_8_ = 0;
        auVar131._0_8_ = local_170[2];
        auVar124._8_8_ = 0;
        auVar124._0_8_ = local_170[1];
        auVar36._8_8_ = 0;
        auVar36._0_8_ = local_170[0];
        auVar108._8_8_ = 0;
        auVar108._0_8_ = dVar7;
        goto LAB_140c8439a;
      }
    }
    auVar36 = ZEXT816(0) << 0x40;
    auVar124 = SUB6416(ZEXT864(0),0) << 0x40;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = __real_3ff0000000000000;
  }
LAB_140c8439a:
  auVar63 = vunpcklpd_avx(auVar131,auVar108);
  auVar88 = vunpcklpd_avx(auVar36,auVar124);
  dVar25 = auVar63._0_8_;
  dVar29 = auVar63._8_8_;
  dVar26 = auVar88._0_8_;
  dVar60 = auVar88._8_8_;
  auVar13._0_8_ = dVar26 * dVar26 + dVar25 * dVar25;
  auVar13._8_8_ = dVar60 * dVar60 + dVar29 * dVar29;
  auVar63 = vshufpd_avx(auVar13,auVar13,1);
  dVar7 = auVar13._0_8_ + auVar63._0_8_;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = __real_3e45798ee2308c3a;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar7;
  auVar63 = vcmpsd_avx(auVar37,auVar14,6);
  uVar30 = ~auVar63._0_8_ & __real_ffffffffffffffff;
  dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
  auVar82._0_8_ = ~uVar30 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar82._8_8_ = ~uVar30 & _UNK_150b54548;
  auVar82._16_8_ = ~uVar30 & _UNK_150b54550;
  auVar82._24_8_ = ~uVar30 & _UNK_150b54558;
  auVar123._0_8_ = (double)((ulonglong)(dVar26 * dVar7) & uVar30);
  auVar123._8_8_ = (double)((ulonglong)(dVar60 * dVar7) & uVar30);
  auVar129._16_8_ = (ulonglong)(dVar25 * dVar7) & uVar30;
  auVar129._0_16_ = auVar123;
  auVar129._24_8_ = (ulonglong)(dVar29 * dVar7) & uVar30;
  auVar28 = auVar129._16_16_ | auVar82._16_16_;
  auVar32 = vshufps_avx(auVar123,auVar123,0x4e);
  auVar63 = vshufps_avx(auVar28,auVar28,0x4e);
  dVar25 = auVar63._0_8_;
  auVar12._8_8_ = 0.0;
  auVar12._0_8_ = (double)uStack_1a0;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = local_198;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uStack_190;
LAB_140c8444d:
  auVar63 = vunpcklpd_avx(auVar89,local_140);
  auVar88 = vunpcklpd_avx(local_180,local_150);
  auVar67._0_8_ =
       auVar63._0_8_ * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
  auVar67._8_8_ = auVar63._8_8_ * _UNK_150aa8e88;
  auVar83._16_8_ = auVar88._0_8_ * _DAT_150aa8e90;
  auVar83._0_16_ = auVar67;
  auVar83._24_8_ = auVar88._8_8_ * _UNK_150aa8e98;
  auVar63 = vunpcklpd_avx(auVar12,auVar38);
  auVar55._16_16_ = auVar67;
  auVar55._0_16_ = auVar67;
  auVar42 = vperm2f128_avx(auVar83,auVar83,0x11);
  auVar42 = vshufpd_avx(auVar55,auVar42,9);
  auVar88 = vunpcklpd_avx(auVar123,auVar32);
  auVar100._8_8_ = dVar25;
  auVar100._0_8_ = dVar25;
  auVar8 = vunpcklpd_avx(auVar28,auVar100);
  auVar56._0_8_ = auVar88._0_8_ * auVar42._0_8_;
  auVar56._8_8_ = auVar88._8_8_ * auVar42._8_8_;
  auVar56._16_8_ = auVar8._0_8_ * auVar42._16_8_;
  auVar56._24_8_ = auVar8._8_8_ * auVar42._24_8_;
  auVar31 = vunpcklpd_avx(auVar32,auVar28);
  auVar97 = vunpcklpd_avx(auVar123,auVar100);
  auVar118._0_8_ = auVar31._0_8_ * auVar67._0_8_;
  auVar118._8_8_ = auVar31._8_8_ * auVar67._8_8_;
  auVar118._16_8_ = auVar97._0_8_ * auVar83._16_8_;
  auVar118._24_8_ = auVar97._8_8_ * auVar83._24_8_;
  auVar42 = vsubpd_avx(auVar56,auVar118);
  auVar39._0_8_ = auVar42._0_8_ + auVar42._0_8_;
  auVar39._8_8_ = auVar42._8_8_ + auVar42._8_8_;
  auVar57._16_8_ = auVar42._16_8_ + auVar42._16_8_;
  auVar57._0_16_ = auVar39;
  auVar57._24_8_ = auVar42._24_8_ + auVar42._24_8_;
  auVar119._16_16_ = auVar39;
  auVar119._0_16_ = auVar39;
  auVar42 = vperm2f128_avx(auVar57,auVar57,0x11);
  auVar42 = vshufpd_avx(auVar119,auVar42,9);
  auVar18 = vperm2f128_avx(auVar57,auVar57,1);
  auVar18 = vshufpd_avx(auVar18,auVar57,0xc);
  auVar58._0_8_ = auVar88._0_8_ * auVar18._0_8_;
  auVar58._8_8_ = auVar88._8_8_ * auVar18._8_8_;
  auVar58._16_8_ = auVar8._0_8_ * auVar18._16_8_;
  auVar58._24_8_ = auVar8._8_8_ * auVar18._24_8_;
  auVar95._0_8_ = auVar31._0_8_ * auVar42._0_8_;
  auVar95._8_8_ = auVar31._8_8_ * auVar42._8_8_;
  auVar95._16_8_ = auVar97._0_8_ * auVar42._16_8_;
  auVar95._24_8_ = auVar97._8_8_ * auVar42._24_8_;
  auVar18 = vsubpd_avx(auVar58,auVar95);
  auVar96._16_16_ = auVar18._0_16_;
  auVar96._0_16_ = auVar18._0_16_;
  auVar18 = vperm2f128_avx(auVar18,auVar18,0x11);
  auVar18 = vshufpd_avx(auVar96,auVar18,9);
  dVar7 = (double)(param_3 * __real_3f000000 * param_7);
  auVar59._0_8_ =
       dVar7 * (double)((ulonglong)(auVar67._0_8_ + dVar25 * auVar42._0_8_ + auVar18._0_8_) &
                       ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff);
  auVar59._8_8_ =
       dVar7 * (double)((ulonglong)(auVar67._8_8_ + dVar25 * auVar42._8_8_ + auVar18._8_8_) &
                       _UNK_150aa8f48);
  auVar59._16_8_ =
       dVar7 * (double)((ulonglong)(auVar83._16_8_ + dVar25 * auVar42._16_8_ + auVar18._16_8_) &
                       _UNK_150aa8f50);
  auVar59._24_8_ =
       dVar7 * (double)((ulonglong)(auVar83._24_8_ + dVar25 * auVar42._24_8_ + auVar18._24_8_) &
                       _UNK_150aa8f58);
  auVar23._16_16_ = auVar27;
  auVar23._0_16_ = auVar63;
  auVar42 = vsubpd_avx(auVar23,auVar59);
  auVar68._0_8_ = (double)(param_3 * param_6);
  auVar68._8_8_ = auVar68._0_8_;
  auVar84._16_16_ = auVar68;
  auVar84._0_16_ = auVar68;
  auVar42 = vsubpd_avx(auVar42,auVar84);
  auVar15._0_8_ = auVar68._0_8_ + auVar63._0_8_ + auVar59._0_8_;
  auVar15._8_8_ = auVar68._0_8_ + auVar63._8_8_ + auVar59._8_8_;
  auVar24._16_8_ = auVar68._0_8_ + auVar27._0_8_ + auVar59._16_8_;
  auVar24._0_16_ = auVar15;
  auVar24._24_8_ = auVar68._0_8_ + auVar27._8_8_ + auVar59._24_8_;
  *param_1 = auVar42._0_16_;
  auVar63 = vunpcklpd_avx(auVar42._16_16_,auVar15);
  param_1[1] = auVar63;
  auVar63 = vshufpd_avx(auVar15,auVar24._16_16_,1);
  param_1[2] = auVar63;
  param_1[3][0] = 1;
  return;
}

