// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// MinEvolutionIntegrate___undREFs_5B_unFPBDRigidArrays_5D_REFs_5B_unFSimulationSpace_5D_REFs_5B_unFSimulationSpaceSettings_5D_REFs_5B__c_unFVector_5D_CundCund_avx2 @ 1409d0650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MinEvolutionIntegrate___undREFs_5B_unFPBDRigidArrays_5D_REFs_5B_unFSimulationSpace_5D_REFs_5B_unFSimulationSpaceSettings_5D_REFs_5B__c_unFVector_5D_CundCund_avx2
               (double param_1,uint *param_2,double *param_3,double *param_4,double *param_5,
               double param_6,double param_7,undefined1 (*param_8) [32])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [24];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar23;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar77 [16];
  undefined1 auVar37 [32];
  undefined1 auVar39 [32];
  double dVar76;
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar78 [16];
  undefined1 auVar59 [32];
  undefined1 auVar61 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar106;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 in_ZMM1 [64];
  double dVar107;
  undefined1 auVar108 [16];
  undefined1 auVar110 [16];
  double dVar154;
  double dVar155;
  double dVar156;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar109 [16];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar111 [16];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  double dVar157;
  double dVar158;
  double dVar159;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  double dVar200;
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  double dVar207;
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar163 [16];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  double dVar197;
  double dVar198;
  double dVar201;
  double dVar202;
  double dVar208;
  double dVar209;
  undefined1 auVar179 [32];
  double dVar199;
  double dVar203;
  double dVar210;
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar206 [16];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar166 [16];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar217 [32];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar214 [16];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  double dVar231;
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  double dVar248;
  undefined1 auVar237 [32];
  undefined1 auVar250 [16];
  undefined1 auVar238 [32];
  undefined1 auVar240 [32];
  double dVar247;
  double dVar249;
  double dVar252;
  double dVar253;
  double dVar254;
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
  undefined1 auVar251 [16];
  undefined1 auVar243 [32];
  undefined1 auVar245 [32];
  undefined1 auVar246 [32];
  undefined1 auVar255 [16];
  undefined1 auVar256 [32];
  undefined1 auVar257 [32];
  undefined1 auVar258 [32];
  undefined1 auVar259 [32];
  undefined1 auVar260 [32];
  undefined1 auVar261 [32];
  double dVar262;
  double dVar263;
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  double dVar269;
  double dVar270;
  double dVar271;
  double dVar272;
  double dVar273;
  double dVar274;
  undefined1 auVar267 [32];
  undefined1 auVar268 [32];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [32];
  undefined1 auVar280 [32];
  undefined1 auVar281 [32];
  undefined1 auVar282 [32];
  undefined1 auVar283 [32];
  undefined1 auVar284 [32];
  double dVar285;
  double dVar293;
  undefined1 auVar286 [32];
  undefined1 auVar287 [32];
  undefined1 auVar288 [32];
  undefined1 auVar289 [32];
  undefined1 auVar290 [32];
  undefined1 auVar291 [32];
  undefined1 auVar292 [32];
  undefined1 auVar294 [16];
  undefined1 auVar295 [32];
  undefined1 auVar296 [32];
  undefined1 auVar297 [32];
  undefined1 auVar298 [32];
  undefined1 auVar299 [32];
  undefined1 auVar300 [32];
  undefined1 auVar301 [32];
  undefined1 auVar302 [32];
  undefined1 auVar303 [32];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [32];
  undefined1 auVar308 [32];
  undefined1 auVar309 [32];
  undefined1 auVar310 [32];
  undefined1 auVar311 [32];
  undefined1 auVar312 [32];
  double dVar313;
  double dVar316;
  double dVar317;
  double dVar318;
  undefined1 auVar314 [32];
  undefined1 auVar315 [32];
  double dVar319;
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  double dVar324;
  double dVar325;
  double dVar326;
  undefined1 auVar322 [32];
  undefined1 auVar323 [32];
  undefined1 auVar327 [32];
  undefined1 auVar328 [32];
  undefined1 auVar329 [32];
  undefined1 auVar330 [32];
  undefined1 auVar331 [32];
  undefined1 auVar332 [32];
  undefined1 local_318 [16];
  double local_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double dStack_210;
  double local_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined1 auVar38 [32];
  undefined1 auVar40 [32];
  undefined1 auVar51 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar75 [32];
  undefined1 auVar86 [32];
  undefined1 auVar92 [32];
  undefined1 auVar97 [32];
  undefined1 auVar103 [32];
  undefined1 auVar118 [32];
  undefined1 auVar121 [32];
  undefined1 auVar136 [32];
  undefined1 auVar139 [32];
  undefined1 auVar169 [32];
  undefined1 auVar184 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar224 [32];
  undefined1 auVar239 [32];
  undefined1 auVar244 [32];
  
  auVar59 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar59 = auVar59 & ~*param_8;
  auVar160 = ZEXT816(0);
  if ((((((((SUB321(auVar59 >> 0x1f,0) & 1) == 0 && (SUB321(auVar59 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar59 >> 0x5f,0) & 1) == 0) && SUB321(auVar59 >> 0x7f,0) == '\0') &&
        (SUB321(auVar59 >> 0x9f,0) & 1) == 0) && SUB321(auVar59 >> 0xbf,0) == '\0') &&
      (SUB321(auVar59 >> 0xdf,0) & 1) == 0) && -1 < auVar59[0x1f]) {
    auVar294 = ZEXT816(0);
    auVar204 = ZEXT816(0);
    auVar206 = ZEXT816(0);
    auVar304 = ZEXT816(0);
    auVar205 = ZEXT816(0);
    auVar77 = ZEXT816(0);
    auVar79 = ZEXT816(0) << 0x20;
    auVar78 = ZEXT816(0);
    auVar250 = ZEXT816(0);
    auVar264 = ZEXT816(0);
    auVar251 = ZEXT816(0);
    if (0.0 < *param_4) {
      auVar182._0_8_ =
           *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar182._8_8_ = param_3[1] * _UNK_150b543c8;
      auVar182._16_8_ = param_3[2] * _UNK_150b543d0;
      auVar182._24_8_ = param_3[3] * _UNK_150b543d8;
      auVar59 = vpermpd_avx2(auVar182,0xc9);
      dVar106 = auVar59._0_8_;
      dVar200 = auVar59._8_8_;
      dVar207 = auVar59._16_8_;
      dVar252 = auVar59._24_8_;
      dVar107 = auVar182._0_8_ * param_3[0x13] - dVar106 * param_3[0x12];
      dVar154 = auVar182._8_8_ * param_3[0x14] - dVar200 * param_3[0x13];
      dVar155 = auVar182._16_8_ * param_3[0x12] - dVar207 * param_3[0x14];
      dVar156 = auVar182._24_8_ * 0.0 - dVar252 * 0.0;
      auVar52._0_8_ = dVar107 + dVar107;
      auVar52._8_8_ = dVar154 + dVar154;
      auVar52._16_8_ = dVar155 + dVar155;
      auVar52._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar52,0xc9);
      auVar97 = vpermpd_avx2(auVar182,0xff);
      dVar249 = auVar97._0_8_;
      dVar254 = auVar97._8_8_;
      dVar23 = auVar97._16_8_;
      dVar76 = auVar97._24_8_;
      auVar97 = vpermpd_avx2(auVar52,0xd2);
      auVar53._0_8_ = auVar182._0_8_ * auVar52._0_8_;
      auVar53._8_8_ = auVar182._8_8_ * auVar52._8_8_;
      auVar53._16_8_ = auVar182._16_8_ * auVar52._16_8_;
      auVar53._24_8_ = auVar182._24_8_ * auVar52._24_8_;
      auVar52 = vpermpd_avx2(auVar53,0xc9);
      auVar54._0_8_ = auVar182._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar54._8_8_ = auVar182._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar54._16_8_ = auVar182._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar54._24_8_ = auVar182._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar54,0xc9);
      auVar250._0_8_ = dVar249 * auVar59._0_8_ + param_3[0x12] + auVar97._0_8_;
      auVar250._8_8_ = dVar254 * auVar59._8_8_ + param_3[0x13] + auVar97._8_8_;
      auVar242._16_8_ = dVar23 * auVar59._16_8_ + param_3[0x14] + auVar97._16_8_;
      auVar242._0_16_ = auVar250;
      auVar242._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar264 = vshufpd_avx(auVar250,auVar250,1);
      auVar251 = auVar242._16_16_;
      dVar107 = auVar182._0_8_ * param_3[0x16] - dVar106 * param_3[0x15];
      dVar154 = auVar182._8_8_ * param_3[0x17] - dVar200 * param_3[0x16];
      dVar155 = auVar182._16_8_ * param_3[0x15] - dVar207 * param_3[0x17];
      dVar156 = auVar182._24_8_ * 0.0 - dVar252 * 0.0;
      auVar55._0_8_ = dVar107 + dVar107;
      auVar55._8_8_ = dVar154 + dVar154;
      auVar55._16_8_ = dVar155 + dVar155;
      auVar55._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar55,0xc9);
      auVar97 = vpermpd_avx2(auVar55,0xd2);
      auVar56._0_8_ = auVar182._0_8_ * auVar55._0_8_;
      auVar56._8_8_ = auVar182._8_8_ * auVar55._8_8_;
      auVar56._16_8_ = auVar182._16_8_ * auVar55._16_8_;
      auVar56._24_8_ = auVar182._24_8_ * auVar55._24_8_;
      auVar52 = vpermpd_avx2(auVar56,0xc9);
      auVar57._0_8_ = auVar182._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar57._8_8_ = auVar182._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar57._16_8_ = auVar182._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar57._24_8_ = auVar182._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar57,0xc9);
      auVar77._0_8_ = dVar249 * auVar59._0_8_ + param_3[0x15] + auVar97._0_8_;
      auVar77._8_8_ = dVar254 * auVar59._8_8_ + param_3[0x16] + auVar97._8_8_;
      auVar58._16_8_ = dVar23 * auVar59._16_8_ + param_3[0x17] + auVar97._16_8_;
      auVar58._0_16_ = auVar77;
      auVar58._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar79 = vshufpd_avx(auVar77,auVar77,1);
      auVar78 = auVar58._16_16_;
      dVar107 = auVar182._0_8_ * param_3[0xd] - dVar106 * param_3[0xc];
      dVar154 = auVar182._8_8_ * param_3[0xe] - dVar200 * param_3[0xd];
      dVar155 = auVar182._16_8_ * param_3[0xc] - dVar207 * param_3[0xe];
      dVar156 = auVar182._24_8_ * 0.0 - dVar252 * 0.0;
      auVar288._0_8_ = dVar107 + dVar107;
      auVar288._8_8_ = dVar154 + dVar154;
      auVar288._16_8_ = dVar155 + dVar155;
      auVar288._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar288,0xc9);
      auVar97 = vpermpd_avx2(auVar288,0xd2);
      auVar289._0_8_ = auVar288._0_8_ * auVar182._0_8_;
      auVar289._8_8_ = auVar288._8_8_ * auVar182._8_8_;
      auVar289._16_8_ = auVar288._16_8_ * auVar182._16_8_;
      auVar289._24_8_ = auVar288._24_8_ * auVar182._24_8_;
      auVar52 = vpermpd_avx2(auVar289,0xc9);
      auVar290._0_8_ = auVar182._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar290._8_8_ = auVar182._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar290._16_8_ = auVar182._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar290._24_8_ = auVar182._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar290,0xc9);
      auVar206._0_8_ = dVar249 * auVar59._0_8_ + param_3[0xc] + auVar97._0_8_;
      auVar206._8_8_ = dVar254 * auVar59._8_8_ + param_3[0xd] + auVar97._8_8_;
      auVar291._16_8_ = dVar23 * auVar59._16_8_ + param_3[0xe] + auVar97._16_8_;
      auVar291._0_16_ = auVar206;
      auVar291._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar304 = vshufpd_avx(auVar206,auVar206,1);
      auVar205 = auVar291._16_16_;
      dVar107 = auVar182._0_8_ * param_3[0x10] - dVar106 * param_3[0xf];
      dVar154 = auVar182._8_8_ * param_3[0x11] - dVar200 * param_3[0x10];
      dVar155 = auVar182._16_8_ * param_3[0xf] - dVar207 * param_3[0x11];
      dVar156 = auVar182._24_8_ * 0.0 - dVar252 * 0.0;
      auVar298._0_8_ = dVar107 + dVar107;
      auVar298._8_8_ = dVar154 + dVar154;
      auVar298._16_8_ = dVar155 + dVar155;
      auVar298._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar298,0xc9);
      auVar97 = vpermpd_avx2(auVar298,0xd2);
      auVar299._0_8_ = auVar298._0_8_ * auVar182._0_8_;
      auVar299._8_8_ = auVar298._8_8_ * auVar182._8_8_;
      auVar299._16_8_ = auVar298._16_8_ * auVar182._16_8_;
      auVar299._24_8_ = auVar298._24_8_ * auVar182._24_8_;
      auVar52 = vpermpd_avx2(auVar299,0xc9);
      auVar300._0_8_ = auVar182._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar300._8_8_ = auVar182._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar300._16_8_ = auVar182._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar300._24_8_ = auVar182._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar300,0xc9);
      auVar160._0_8_ = dVar249 * auVar59._0_8_ + param_3[0xf] + auVar97._0_8_;
      auVar160._8_8_ = dVar254 * auVar59._8_8_ + param_3[0x10] + auVar97._8_8_;
      auVar183._16_8_ = dVar23 * auVar59._16_8_ + param_3[0x11] + auVar97._16_8_;
      auVar183._0_16_ = auVar160;
      auVar183._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar294 = vshufpd_avx(auVar160,auVar160,1);
      auVar204 = auVar183._16_16_;
    }
    uVar6 = *param_2;
    if (0 < (int)uVar6) {
      lVar7 = *(longlong *)(param_2 + 2);
      lVar8 = *(longlong *)(param_2 + 0x24);
      auVar12 = vunpcklpd_avx(auVar79,auVar78);
      auVar13 = vunpcklpd_avx(auVar78,auVar77);
      auVar14 = vunpcklpd_avx(auVar77,auVar79);
      auVar15 = vunpcklpd_avx(auVar160,auVar294);
      auVar294 = vunpcklpd_avx(auVar294,auVar204);
      auVar304 = vunpcklpd_avx(auVar206,auVar304);
      auVar264 = vunpcklpd_avx(auVar250,auVar264);
      dVar107 = param_1 * __real_3fe0000000000000;
      auVar59._8_8_ = param_7;
      auVar59._0_8_ = param_7;
      auVar59._16_8_ = param_7;
      auVar59._24_8_ = param_7;
      lVar22 = 0;
      lVar20 = 0;
      lVar21 = 0;
      do {
        if ((*(char *)(lVar8 + lVar21) == '\0') && (*(char *)(lVar7 + lVar21) == '\x04')) {
          lVar9 = *(longlong *)(param_2 + 0xe);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xc) + lVar20);
          uVar17 = puVar1[1];
          uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0xc) + 0x10 + lVar20);
          puVar2 = (undefined8 *)(lVar9 + lVar20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar17;
          *(undefined8 *)(lVar9 + 0x10 + lVar20) = uVar5;
          lVar9 = *(longlong *)(param_2 + 0x12);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar20);
          uVar17 = puVar1[1];
          uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar20);
          puVar2 = (undefined8 *)(lVar9 + lVar20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar17;
          *(undefined8 *)(lVar9 + 0x10 + lVar20) = uVar5;
          lVar9 = *(longlong *)(param_2 + 8);
          dVar154 = *(double *)(lVar9 + 0x10 + lVar22);
          auVar83._8_8_ = dVar154;
          auVar83._0_8_ = dVar154;
          auVar97._16_8_ = dVar154;
          auVar97._0_16_ = auVar83;
          auVar97._24_8_ = dVar154;
          dVar155 = *(double *)(lVar9 + 8 + lVar22);
          auVar110._8_8_ = dVar155;
          auVar110._0_8_ = dVar155;
          auVar136._16_8_ = dVar155;
          auVar136._0_16_ = auVar110;
          auVar136._24_8_ = dVar155;
          dVar156 = *(double *)(lVar9 + lVar22);
          auVar163._8_8_ = dVar156;
          auVar163._0_8_ = dVar156;
          auVar223._16_8_ = dVar156;
          auVar223._0_16_ = auVar163;
          auVar223._24_8_ = dVar156;
          dVar106 = *(double *)(lVar9 + 0x18 + lVar22);
          lVar9 = *(longlong *)(param_2 + 0x16);
          pdVar3 = (double *)(lVar9 + lVar22);
          auVar166._8_8_ = 0;
          auVar166._0_8_ = *(ulonglong *)(lVar9 + 0x18 + lVar22);
          auVar250 = vmovhpd_avx(auVar166,*(undefined8 *)(lVar9 + 0x10 + lVar22));
          auVar214._8_8_ = 0;
          auVar214._0_8_ = *(ulonglong *)(lVar9 + 8 + lVar22);
          auVar206 = vmovhpd_avx(auVar214,*(undefined8 *)(lVar9 + lVar22));
          pdVar4 = (double *)(lVar9 + 0x10 + lVar22);
          auVar259._0_8_ =
               dVar154 * auVar206._0_8_ *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
               dVar155 * *pdVar4 *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
               dVar106 * *pdVar3 +
               dVar156 * auVar250._0_8_ *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
          auVar259._8_8_ =
               dVar154 * auVar206._8_8_ * _UNK_150b54428 +
               dVar155 * pdVar4[1] * _UNK_150b54408 +
               dVar106 * pdVar3[1] + dVar156 * auVar250._8_8_ * _UNK_150b543e8;
          auVar259._16_8_ =
               dVar154 * auVar250._0_8_ * _UNK_150b54430 +
               dVar155 * *pdVar3 * _UNK_150b54410 +
               dVar106 * pdVar3[2] + dVar156 * auVar206._0_8_ * _UNK_150b543f0;
          auVar259._24_8_ =
               dVar154 * auVar250._8_8_ * _UNK_150b54438 +
               dVar155 * pdVar3[1] * _UNK_150b54418 +
               dVar106 * pdVar3[3] + dVar156 * auVar206._8_8_ * _UNK_150b543f8;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1c) + lVar20);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x20) + lVar20);
          dVar154 = *(double *)(*(longlong *)(param_2 + 0x18) + lVar21 * 8);
          auVar164._0_8_ = dVar154 * (param_1 * *pdVar3 + *pdVar4);
          auVar164._8_8_ = dVar154 * (param_1 * pdVar3[1] + pdVar4[1]);
          auVar301._16_8_ =
               dVar154 * (param_1 * *(double *)(*(longlong *)(param_2 + 0x1c) + 0x10 + lVar20) +
                         *(double *)(*(longlong *)(param_2 + 0x20) + 0x10 + lVar20));
          auVar301._0_16_ = auVar164;
          auVar301._24_8_ = dVar154 * (param_1 * 0.0 + 0.0);
          if (*(char *)(*(longlong *)(param_2 + 0x26) + lVar21) == '\0') {
            auVar250 = vshufpd_avx(auVar164,auVar164,1);
            auVar206 = auVar301._16_16_;
          }
          else {
            auVar164._0_8_ = param_1 * *param_5 + auVar164._0_8_;
            auVar164._8_8_ = param_1 * param_5[1] + auVar164._8_8_;
            auVar184._16_8_ = param_1 * param_5[2] + auVar301._16_8_;
            auVar184._0_16_ = auVar164;
            auVar184._24_8_ = param_1 * 0.0 + auVar301._24_8_;
            auVar250 = vshufpd_avx(auVar164,auVar164,1);
            auVar206 = auVar184._16_16_;
          }
          lVar9 = *(longlong *)(param_2 + 0x14);
          auVar165._8_8_ = 0;
          auVar165._0_8_ = *(double *)(lVar9 + lVar20);
          dVar154 = *(double *)(lVar9 + 0x10 + lVar20);
          auVar235._8_8_ = 0;
          auVar235._0_8_ = dVar154;
          auVar166 = vunpcklpd_avx(auVar235,auVar165);
          auVar214 = vunpcklpd_avx(auVar110,auVar83);
          auVar52 = vblendpd_avx(ZEXT1632(auVar214),auVar223,0xc);
          auVar83 = vunpcklpd_avx(auVar83,auVar163);
          auVar53 = vblendpd_avx(ZEXT1632(auVar83),auVar136,0xc);
          auVar83 = *(undefined1 (*) [16])(lVar9 + 8 + lVar20);
          dVar155 = auVar52._0_8_ * auVar166._0_8_ - auVar53._0_8_ * auVar83._0_8_;
          dVar156 = auVar52._8_8_ * auVar166._8_8_ - auVar53._8_8_ * auVar83._8_8_;
          dVar200 = auVar52._16_8_ * *(double *)(lVar9 + 8 + lVar20) -
                    auVar53._16_8_ * *(double *)(lVar9 + lVar20);
          dVar207 = auVar52._24_8_ * 0.0 - auVar53._24_8_ * 0.0;
          auVar185._0_8_ = dVar155 + dVar155;
          auVar185._8_8_ = dVar156 + dVar156;
          auVar185._16_8_ = dVar200 + dVar200;
          auVar185._24_8_ = dVar207 + dVar207;
          auVar53 = vpermpd_avx2(auVar185,0xc9);
          auVar83 = vunpcklpd_avx(auVar163,auVar110);
          auVar97 = vblendpd_avx(ZEXT1632(auVar83),auVar97,0xc);
          auVar137._0_8_ = auVar53._0_8_ * auVar97._0_8_ - auVar52._0_8_ * auVar185._0_8_;
          auVar137._8_8_ = auVar53._8_8_ * auVar97._8_8_ - auVar52._8_8_ * auVar185._8_8_;
          auVar137._16_8_ = auVar53._16_8_ * auVar97._16_8_ - auVar52._16_8_ * auVar185._16_8_;
          auVar137._24_8_ = auVar53._24_8_ * auVar97._24_8_ - auVar52._24_8_ * auVar185._24_8_;
          auVar97 = vpermpd_avx2(auVar137,0xc9);
          pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar20);
          auVar330._0_8_ =
               *pdVar3 + auVar185._0_8_ * dVar106 + SUB168(*(undefined1 (*) [16])(lVar9 + lVar20),0)
                         + auVar97._0_8_;
          auVar330._8_8_ =
               pdVar3[1] +
               auVar185._8_8_ * dVar106 + SUB168(*(undefined1 (*) [16])(lVar9 + lVar20),8) +
               auVar97._8_8_;
          auVar330._16_8_ =
               *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar20) +
               auVar185._16_8_ * dVar106 + dVar154 + auVar97._16_8_;
          auVar330._24_8_ = auVar185._24_8_ * dVar106 + 0.0 + auVar97._24_8_ + 0.0;
          lVar9 = *(longlong *)(param_2 + 0x1a);
          dVar154 = auVar259._0_8_ + auVar259._0_8_;
          dVar155 = auVar259._8_8_ + auVar259._8_8_;
          dVar156 = auVar259._16_8_ + auVar259._16_8_;
          dVar106 = auVar259._24_8_ + auVar259._24_8_;
          auVar186._0_8_ = dVar154 * auVar259._0_8_;
          auVar186._8_8_ = dVar155 * auVar259._0_8_;
          auVar186._16_8_ = dVar156 * auVar259._0_8_;
          auVar186._24_8_ = dVar106 * auVar259._0_8_;
          auVar97 = vpermpd_avx2(auVar259,0x55);
          auVar213._0_8_ = dVar154 * auVar97._0_8_;
          auVar213._8_8_ = dVar155 * auVar97._8_8_;
          auVar224._16_8_ = dVar156 * auVar97._16_8_;
          auVar224._0_16_ = auVar213;
          auVar224._24_8_ = dVar106 * auVar97._24_8_;
          auVar97 = vpermpd_avx2(auVar259,0xff);
          auVar98._0_8_ = dVar154 * auVar97._0_8_;
          auVar98._8_8_ = dVar155 * auVar97._8_8_;
          auVar98._16_8_ = dVar156 * auVar97._16_8_;
          auVar98._24_8_ = dVar106 * auVar97._24_8_;
          auVar97 = vperm2f128_avx(auVar224,auVar186,0x21);
          auVar97 = vshufpd_avx(auVar97,ZEXT1632(auVar186._16_16_),4);
          auVar27._0_8_ = auVar98._0_8_ + auVar97._0_8_;
          auVar27._8_8_ = auVar98._8_8_ + auVar97._8_8_;
          auVar60._16_8_ = auVar98._16_8_ + auVar97._16_8_;
          auVar60._0_16_ = auVar27;
          auVar60._24_8_ = auVar98._24_8_ + auVar97._24_8_;
          auVar53 = vsubpd_avx(auVar97,auVar98);
          auVar83 = vshufpd_avx(auVar213,auVar213,1);
          auVar187._8_8_ = auVar186._0_8_;
          auVar187._0_8_ = auVar186._0_8_;
          auVar187._16_8_ = auVar186._0_8_;
          auVar187._24_8_ = auVar186._0_8_;
          auVar97 = vblendpd_avx(auVar187,ZEXT1632(auVar83),1);
          auVar52 = vpermpd_avx2(auVar224,0x55);
          auVar52 = vblendpd_avx(ZEXT1632(CONCAT88(auVar259._16_8_ * dVar156,
                                                   auVar259._16_8_ * dVar156)),auVar52,0xc);
          auVar138._0_8_ = auVar97._0_8_ + auVar52._0_8_;
          auVar138._8_8_ = auVar97._8_8_ + auVar52._8_8_;
          auVar138._16_8_ = auVar97._16_8_ + auVar52._16_8_;
          auVar138._24_8_ = auVar97._24_8_ + auVar52._24_8_;
          auVar188._8_8_ = __real_3ff0000000000000;
          auVar188._0_8_ = __real_3ff0000000000000;
          auVar188._16_8_ = __real_3ff0000000000000;
          auVar188._24_8_ = __real_3ff0000000000000;
          auVar52 = vsubpd_avx(auVar188,auVar138);
          dVar23 = auVar52._0_8_;
          dVar154 = *(double *)(lVar9 + 0x10 + lVar22 * 4);
          pdVar3 = (double *)(lVar9 + lVar22 * 4);
          dVar106 = *pdVar3;
          dVar200 = pdVar3[1];
          auVar97 = vpermpd_avx2(auVar53,0xaa);
          dVar155 = *(double *)(lVar9 + 0x30 + lVar22 * 4);
          pdVar3 = (double *)(lVar9 + 0x20 + lVar22 * 4);
          dVar207 = *pdVar3;
          dVar252 = pdVar3[1];
          auVar54 = vpermpd_avx2(auVar60,0x55);
          dVar156 = *(double *)(lVar9 + 0x50 + lVar22 * 4);
          pdVar3 = (double *)(lVar9 + 0x40 + lVar22 * 4);
          dVar249 = *pdVar3;
          dVar254 = pdVar3[1];
          auVar189._0_8_ = dVar249 * auVar54._0_8_ + dVar207 * auVar97._0_8_ + dVar106 * dVar23;
          auVar189._8_8_ = dVar254 * auVar54._8_8_ + dVar252 * auVar97._8_8_ + dVar200 * dVar23;
          auVar189._16_8_ = dVar156 * auVar54._16_8_ + dVar155 * auVar97._16_8_ + dVar154 * dVar23;
          auVar189._24_8_ = auVar54._24_8_ * 0.0 + auVar97._24_8_ * 0.0 + dVar23 * 0.0;
          auVar97 = vpermpd_avx2(auVar60,0xaa);
          auVar54 = vpermpd_avx2(auVar52,0x55);
          dVar23 = auVar53._0_8_;
          auVar225._0_8_ = dVar249 * dVar23 + dVar106 * auVar97._0_8_ + dVar207 * auVar54._0_8_;
          auVar225._8_8_ = dVar254 * dVar23 + dVar200 * auVar97._8_8_ + dVar252 * auVar54._8_8_;
          auVar225._16_8_ = dVar156 * dVar23 + dVar154 * auVar97._16_8_ + dVar155 * auVar54._16_8_;
          auVar225._24_8_ = dVar23 * 0.0 + auVar97._24_8_ * 0.0 + auVar54._24_8_ * 0.0;
          auVar97 = vpermpd_avx2(auVar53,0x55);
          auVar54 = vpermpd_avx2(auVar52,0xaa);
          auVar243._0_8_ =
               dVar249 * auVar54._0_8_ + auVar97._0_8_ * dVar106 + dVar207 * auVar27._0_8_;
          auVar243._8_8_ =
               dVar254 * auVar54._8_8_ + auVar97._8_8_ * dVar200 + dVar252 * auVar27._0_8_;
          auVar243._16_8_ =
               dVar156 * auVar54._16_8_ + auVar97._16_8_ * dVar154 + dVar155 * auVar27._0_8_;
          auVar243._24_8_ = auVar54._24_8_ * 0.0 + auVar97._24_8_ * 0.0 + auVar27._0_8_ * 0.0;
          auVar83 = vunpcklpd_avx(auVar52._0_16_,auVar60._16_16_);
          auVar97 = vblendpd_avx(ZEXT1632(auVar83),auVar97,0xc);
          auVar54 = vpermpd_avx2(auVar189,0x55);
          auVar83 = vblendpd_avx(auVar52._0_16_,auVar53._16_16_,1);
          dVar254 = auVar83._0_8_;
          dVar23 = auVar83._8_8_;
          dVar200 = auVar97._0_8_;
          dVar207 = auVar97._8_8_;
          dVar252 = auVar97._16_8_;
          dVar249 = auVar97._24_8_;
          auVar55 = vpermpd_avx2(auVar189,0xaa);
          auVar83 = vshufpd_avx(auVar27,auVar53._0_16_,1);
          auVar97 = vblendpd_avx(auVar52,ZEXT1632(auVar83),3);
          dVar154 = auVar97._0_8_;
          dVar155 = auVar97._8_8_;
          dVar156 = auVar97._16_8_;
          dVar106 = auVar97._24_8_;
          auVar97 = vpermpd_avx2(auVar225,0x55);
          auVar52 = vpermpd_avx2(auVar225,0xaa);
          auVar53 = vpermpd_avx2(auVar243,0x55);
          auVar56 = vpermpd_avx2(auVar243,0xaa);
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1e) + lVar20);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x22) + lVar20);
          auVar226._0_8_ = param_1 * *pdVar3 + *pdVar4;
          auVar226._8_8_ = param_1 * pdVar3[1] + pdVar4[1];
          auVar226._16_8_ =
               param_1 * *(double *)(*(longlong *)(param_2 + 0x1e) + 0x10 + lVar20) +
               *(double *)(*(longlong *)(param_2 + 0x22) + 0x10 + lVar20);
          auVar226._24_8_ = param_1 * 0.0 + 0.0;
          auVar57 = vpermpd_avx2(auVar226,0x55);
          auVar58 = vpermpd_avx2(auVar226,0xaa);
          auVar111._0_8_ =
               (dVar154 * auVar56._0_8_ + dVar200 * auVar243._0_8_ + dVar254 * auVar53._0_8_) *
               auVar58._0_8_ +
               (dVar154 * auVar55._0_8_ + dVar200 * auVar189._0_8_ + dVar254 * auVar54._0_8_) *
               auVar226._0_8_ +
               (dVar154 * auVar52._0_8_ + dVar200 * auVar225._0_8_ + dVar254 * auVar97._0_8_) *
               auVar57._0_8_;
          auVar111._8_8_ =
               (dVar155 * auVar56._8_8_ + dVar207 * auVar243._0_8_ + dVar23 * auVar53._8_8_) *
               auVar58._8_8_ +
               (dVar155 * auVar55._8_8_ + dVar207 * auVar189._0_8_ + dVar23 * auVar54._8_8_) *
               auVar226._0_8_ +
               (dVar155 * auVar52._8_8_ + dVar207 * auVar225._0_8_ + dVar23 * auVar97._8_8_) *
               auVar57._8_8_;
          auVar311._16_8_ =
               (dVar156 * auVar56._16_8_ + dVar252 * auVar243._0_8_ + auVar27._0_8_ * auVar53._16_8_
               ) * auVar58._16_8_ +
               (dVar156 * auVar55._16_8_ + dVar252 * auVar189._0_8_ + auVar27._0_8_ * auVar54._16_8_
               ) * auVar226._0_8_ +
               (dVar156 * auVar52._16_8_ + dVar252 * auVar225._0_8_ + auVar27._0_8_ * auVar97._16_8_
               ) * auVar57._16_8_;
          auVar311._0_16_ = auVar111;
          auVar311._24_8_ =
               (dVar106 * auVar56._24_8_ + dVar249 * auVar243._0_8_ + auVar27._8_8_ * auVar53._24_8_
               ) * auVar58._24_8_ +
               (dVar106 * auVar55._24_8_ + dVar249 * auVar189._0_8_ + auVar27._8_8_ * auVar54._24_8_
               ) * auVar226._0_8_ +
               (dVar106 * auVar52._24_8_ + dVar249 * auVar225._0_8_ + auVar27._8_8_ * auVar97._24_8_
               ) * auVar57._24_8_;
          dVar154 = *param_4;
          lVar9 = *(longlong *)(param_2 + 0xc);
          if (dVar154 <= __real_0000000000000000) {
            auVar163 = vshufpd_avx(auVar111,auVar111,1);
            local_318 = auVar311._16_16_;
            auVar321._8_8_ = 0;
            auVar321._0_8_ = *(ulonglong *)(lVar9 + lVar20);
            dVar155 = *(double *)(lVar9 + 8 + lVar20);
            auVar84._8_8_ = 0;
            auVar84._0_8_ = *(ulonglong *)(lVar9 + 0x10 + lVar20);
            auVar236 = ZEXT816(0) << 0x40;
            auVar110 = ZEXT816(0) << 0x40;
            auVar166 = ZEXT816(0) << 0x40;
            auVar306 = ZEXT816(0) << 0x40;
            auVar83 = ZEXT816(0) << 0x40;
            auVar214 = ZEXT816(0) << 0x40;
          }
          else {
            dVar252 = param_4[2] + param_4[2];
            auVar321._8_8_ = 0;
            auVar321._0_8_ = *(double *)(lVar9 + lVar20);
            dVar155 = *(double *)(lVar9 + 8 + lVar20);
            auVar84._8_8_ = 0;
            auVar84._0_8_ = *(ulonglong *)(lVar9 + 0x10 + lVar20);
            auVar110 = vunpcklpd_avx(auVar84,auVar321);
            auVar83 = *(undefined1 (*) [16])(lVar9 + 8 + lVar20);
            local_1a8 = auVar13._0_8_;
            dStack_1a0 = auVar13._8_8_;
            dStack_198 = auVar79._0_8_;
            dStack_190 = auVar79._8_8_;
            local_188 = auVar12._0_8_;
            dStack_180 = auVar12._8_8_;
            dStack_178 = auVar77._0_8_;
            dStack_170 = auVar77._8_8_;
            auVar97 = vpermpd_avx2(auVar330,0xc9);
            local_1c8 = auVar14._0_8_;
            dStack_1c0 = auVar14._8_8_;
            dStack_1b8 = auVar78._0_8_;
            dStack_1b0 = auVar78._8_8_;
            auVar227._0_8_ = local_1c8 * auVar97._0_8_ - local_188 * auVar330._0_8_;
            auVar227._8_8_ = dStack_1c0 * auVar97._8_8_ - dStack_180 * auVar330._8_8_;
            auVar227._16_8_ = dStack_1b8 * auVar97._16_8_ - dStack_178 * auVar330._16_8_;
            auVar227._24_8_ = dStack_1b0 * auVar97._24_8_ - dStack_170 * auVar330._24_8_;
            auVar52 = vpermpd_avx2(auVar227,0xd2);
            auVar53 = vpermpd_avx2(auVar227,0xc9);
            auVar228._0_8_ = local_1c8 * auVar52._0_8_ - local_188 * auVar53._0_8_;
            auVar228._8_8_ = dStack_1c0 * auVar52._8_8_ - dStack_180 * auVar53._8_8_;
            auVar228._16_8_ = dStack_1b8 * auVar52._16_8_ - dStack_178 * auVar53._16_8_;
            auVar228._24_8_ = dStack_1b0 * auVar52._24_8_ - dStack_170 * auVar53._24_8_;
            dVar156 = param_4[3];
            auVar52 = vpermpd_avx2(auVar228,0xc9);
            local_208 = auVar294._0_8_;
            dStack_200 = auVar294._8_8_;
            dStack_1f8 = auVar160._0_8_;
            dStack_1f0 = auVar160._8_8_;
            local_1e8 = auVar15._0_8_;
            dStack_1e0 = auVar15._8_8_;
            dStack_1d8 = auVar204._0_8_;
            dStack_1d0 = auVar204._8_8_;
            auVar282._0_8_ = local_1e8 * auVar97._0_8_ - auVar330._0_8_ * local_208;
            auVar282._8_8_ = dStack_1e0 * auVar97._8_8_ - auVar330._8_8_ * dStack_200;
            auVar282._16_8_ = dStack_1d8 * auVar97._16_8_ - auVar330._16_8_ * dStack_1f8;
            auVar282._24_8_ = dStack_1d0 * auVar97._24_8_ - auVar330._24_8_ * dStack_1f0;
            dVar106 = param_4[1];
            local_248 = auVar264._0_8_;
            dStack_240 = auVar264._8_8_;
            dStack_238 = auVar251._0_8_;
            dStack_230 = auVar251._8_8_;
            local_228 = auVar304._0_8_;
            dStack_220 = auVar304._8_8_;
            dStack_210 = auVar205._8_8_;
            dVar200 = param_4[4];
            auVar97 = vpermpd_avx2(auVar282,0xc9);
            dVar207 = param_4[5];
            auVar250 = vunpcklpd_avx(auVar164,auVar250);
            auVar164._0_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar97._0_8_ +
                            dVar156 * auVar52._0_8_ +
                            (local_188 * auVar110._0_8_ - auVar83._0_8_ * local_1a8) * dVar252 +
                            dVar106 * local_228 + local_248 * param_4[8])) + auVar250._0_8_;
            auVar164._8_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar97._8_8_ +
                            dVar156 * auVar52._8_8_ +
                            (dStack_180 * auVar110._8_8_ - auVar83._8_8_ * dStack_1a0) * dVar252 +
                            dVar106 * dStack_220 + dStack_240 * param_4[9])) + auVar250._8_8_;
            auVar302._16_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar97._16_8_ +
                            dVar156 * auVar52._16_8_ +
                            (dStack_178 * dVar155 - *(double *)(lVar9 + lVar20) * dStack_198) *
                            dVar252 + dVar106 * auVar205._0_8_ + dStack_238 * param_4[10])) +
                 auVar206._0_8_;
            auVar302._0_16_ = auVar164;
            auVar302._24_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar97._24_8_ +
                            dVar156 * auVar52._24_8_ +
                            (dStack_170 * 0.0 - dStack_190 * 0.0) * dVar252 +
                            dVar106 * dStack_210 + dStack_230 * 0.0)) + auVar206._8_8_;
            auVar250 = vshufpd_avx(auVar164,auVar164,1);
            auVar206 = auVar302._16_16_;
            auVar111._0_8_ = -(param_1 * dVar154 * local_1e8 * dVar207) + auVar111._0_8_;
            auVar111._8_8_ = -(param_1 * dVar154 * dStack_1e0 * dVar207) + auVar111._8_8_;
            auVar139._16_8_ = -(param_1 * dVar154 * dStack_1d8 * dVar207) + auVar311._16_8_;
            auVar139._0_16_ = auVar111;
            auVar139._24_8_ = -(param_1 * dVar154 * dStack_1d0 * dVar207) + auVar311._24_8_;
            auVar163 = vshufpd_avx(auVar111,auVar111,1);
            local_318 = auVar139._16_16_;
            dVar156 = (double)((ulonglong)dVar154 ^ __xmm_80000000000000008000000000000000) *
                      param_4[6];
            auVar306._0_8_ = local_248 * dVar156;
            auVar306._8_8_ = dStack_240 * dVar156;
            auVar308._16_8_ = dStack_238 * dVar156;
            auVar308._0_16_ = auVar306;
            auVar308._24_8_ = dStack_230 * dVar156;
            auVar83 = vshufpd_avx(auVar306,auVar306,1);
            auVar214 = auVar308._16_16_;
            dVar154 = (double)((ulonglong)dVar154 ^ __xmm_80000000000000008000000000000000) *
                      param_4[7];
            auVar236._0_8_ = local_1c8 * dVar154;
            auVar236._8_8_ = dStack_1c0 * dVar154;
            auVar244._16_8_ = dStack_1b8 * dVar154;
            auVar244._0_16_ = auVar236;
            auVar244._24_8_ = dStack_1b0 * dVar154;
            auVar110 = vshufpd_avx(auVar236,auVar236,1);
            auVar166 = auVar244._16_16_;
          }
          auVar19._8_8_ = 0;
          auVar19._0_8_ = dVar155;
          auVar110 = vunpcklpd_avx(auVar236,auVar110);
          auVar163 = vunpcklpd_avx(auVar111,auVar163);
          auVar83 = vunpcklpd_avx(auVar306,auVar83);
          auVar250 = vunpcklpd_avx(auVar164,auVar250);
          auVar164 = vunpcklpd_avx(auVar321,auVar19);
          auVar140._0_8_ = auVar164._0_8_ + auVar250._0_8_;
          auVar140._8_8_ = auVar164._8_8_ + auVar250._8_8_;
          auVar140._16_8_ = auVar84._0_8_ + auVar206._0_8_;
          auVar140._24_8_ = auVar84._8_8_ + auVar206._8_8_;
          auVar99._16_16_ = auVar214;
          auVar99._0_16_ = auVar83;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x10) + lVar20);
          auVar266._8_8_ = 0;
          auVar266._0_8_ = __real_3ff0000000000000;
          auVar277._8_8_ = 0;
          auVar277._0_8_ = param_1 * *(double *)(*(longlong *)(param_2 + 0x2a) + lVar21 * 8);
          auVar250 = vminsd_avx(auVar266,auVar277);
          auVar229._0_8_ = auVar163._0_8_ + *pdVar3;
          auVar229._8_8_ = auVar163._8_8_ + pdVar3[1];
          auVar229._16_8_ =
               local_318._0_8_ + *(double *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar20);
          auVar229._24_8_ = local_318._8_8_ + 0.0;
          auVar61._16_16_ = auVar166;
          auVar61._0_16_ = auVar110;
          auVar97 = vsubpd_avx(auVar61,auVar229);
          dVar154 = auVar250._0_8_;
          auVar28._0_8_ = auVar97._0_8_ * dVar154 + auVar229._0_8_;
          auVar28._8_8_ = auVar97._8_8_ * dVar154 + auVar229._8_8_;
          auVar62._16_8_ = auVar97._16_8_ * dVar154 + auVar229._16_8_;
          auVar62._0_16_ = auVar28;
          auVar62._24_8_ = auVar97._24_8_ * dVar154 + auVar229._24_8_;
          auVar52 = vpermpd_avx2(auVar259,0x1b);
          auVar54 = vpermpd_avx2(auVar62,0x55);
          auVar55 = vpermpd_avx2(auVar259,0x4e);
          auVar56 = vpermpd_avx2(auVar62,0xaa);
          auVar97 = vshufpd_avx(auVar259,auVar259,5);
          auVar278._8_8_ = 0;
          auVar278._0_8_ = param_1 * *(double *)(*(longlong *)(param_2 + 0x28) + lVar21 * 8);
          auVar250 = vminsd_avx(auVar266,auVar278);
          auVar53 = vsubpd_avx(auVar99,auVar140);
          dVar154 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                     auVar97._0_8_ * auVar56._0_8_ +
                    ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                    auVar55._0_8_ * auVar54._0_8_ +
                    auVar259._0_8_ * 0.0 +
                    auVar52._0_8_ * auVar28._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                    dVar107 + auVar259._0_8_;
          dVar155 = (_UNK_150b54428 * auVar97._8_8_ * auVar56._8_8_ +
                    _UNK_150b54408 * auVar55._8_8_ * auVar54._8_8_ +
                    auVar259._8_8_ * 0.0 + auVar52._8_8_ * auVar28._0_8_ * _UNK_15076c6f8) * dVar107
                    + auVar259._8_8_;
          dVar156 = (_UNK_150b54430 * auVar97._16_8_ * auVar56._16_8_ +
                    _UNK_150b54410 * auVar55._16_8_ * auVar54._16_8_ +
                    auVar259._16_8_ * 0.0 +
                    auVar52._16_8_ * auVar28._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                    dVar107 + auVar259._16_8_;
          dVar106 = (_UNK_150b54438 * auVar97._24_8_ * auVar56._24_8_ +
                    _UNK_150b54418 * auVar55._24_8_ * auVar54._24_8_ +
                    auVar259._24_8_ * 0.0 + auVar52._24_8_ * auVar28._0_8_ * _UNK_15076c6f8) *
                    dVar107 + auVar259._24_8_;
          auVar100._0_8_ = dVar154 * dVar154;
          auVar100._8_8_ = dVar155 * dVar155;
          auVar100._16_8_ = dVar156 * dVar156;
          auVar100._24_8_ = dVar106 * dVar106;
          auVar97 = vpermpd_avx2(auVar100,0x4e);
          auVar101._0_8_ = auVar100._0_8_ + auVar97._0_8_;
          auVar101._8_8_ = auVar100._8_8_ + auVar97._8_8_;
          auVar101._16_8_ = auVar100._16_8_ + auVar97._16_8_;
          auVar101._24_8_ = auVar100._24_8_ + auVar97._24_8_;
          auVar97 = vpermpd_avx2(auVar101,0x39);
          auVar245._0_8_ = auVar101._0_8_ + auVar97._0_8_;
          auVar245._8_8_ = auVar101._8_8_ + auVar97._8_8_;
          auVar245._16_8_ = auVar101._16_8_ + auVar97._16_8_;
          auVar245._24_8_ = auVar101._24_8_ + auVar97._24_8_;
          auVar102._8_8_ = __real_3e45798ee2308c3a;
          auVar102._0_8_ = __real_3e45798ee2308c3a;
          auVar102._16_8_ = __real_3e45798ee2308c3a;
          auVar102._24_8_ = __real_3e45798ee2308c3a;
          auVar97 = vcmppd_avx(auVar102,auVar245,2);
          auVar97 = vpshufb_avx2(auVar97,
                                 ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                                );
          auVar97 = vblendvps_avx(ZEXT832(0) << 0x40,
                                  ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                  ,auVar97);
          dVar200 = auVar250._0_8_;
          auVar52 = vsqrtpd_avx(auVar245);
          auVar85._0_8_ = auVar53._0_8_ * dVar200 + auVar140._0_8_;
          auVar85._8_8_ = auVar53._8_8_ * dVar200 + auVar140._8_8_;
          auVar103._16_8_ = auVar53._16_8_ * dVar200 + auVar140._16_8_;
          auVar103._0_16_ = auVar85;
          auVar103._24_8_ = auVar53._24_8_ * dVar200 + auVar140._24_8_;
          auVar52 = vdivpd_avx(auVar188,auVar52);
          dVar154 = dVar154 * auVar52._0_8_;
          dVar155 = dVar155 * auVar52._8_8_;
          dVar156 = dVar156 * auVar52._16_8_;
          dVar106 = dVar106 * auVar52._24_8_;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + lVar22);
          auVar230._0_8_ =
               ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar3;
          auVar230._8_8_ = _UNK_150b543c8 * pdVar3[1];
          auVar230._16_8_ = _UNK_150b543d0 * pdVar3[2];
          auVar230._24_8_ = _UNK_150b543d8 * pdVar3[3];
          auVar141._0_8_ =
               (double)CONCAT44(auVar97._4_4_ & (uint)((ulonglong)dVar154 >> 0x20),
                                auVar97._0_4_ & SUB84(dVar154,0));
          auVar141._8_4_ = auVar97._8_4_ & SUB84(dVar155,0);
          auVar141._12_4_ = auVar97._12_4_ & (uint)((ulonglong)dVar155 >> 0x20);
          auVar141._16_4_ = auVar97._16_4_ & SUB84(dVar156,0);
          auVar141._20_4_ = auVar97._20_4_ & (uint)((ulonglong)dVar156 >> 0x20);
          auVar141._24_4_ = auVar97._24_4_ & SUB84(dVar106,0);
          auVar141._28_4_ = auVar97._28_4_ & (uint)((ulonglong)dVar106 >> 0x20);
          auVar52 = vpermpd_avx2(auVar230,0x1b);
          auVar53 = vpermpd_avx2(auVar141,0xff);
          auVar54 = vpermpd_avx2(auVar141,0x55);
          auVar55 = vpermpd_avx2(auVar230,0x4e);
          auVar56 = vpermpd_avx2(auVar141,0xaa);
          auVar97 = vshufpd_avx(auVar230,auVar230,5);
          auVar142._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar97._0_8_ * auVar56._0_8_ +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar55._0_8_ * auVar54._0_8_ +
               auVar230._0_8_ * auVar53._0_8_ +
               auVar52._0_8_ * auVar141._0_8_ * ___xmm_bff00000000000003ff0000000000000;
          auVar142._8_8_ =
               _UNK_150b54428 * auVar97._8_8_ * auVar56._8_8_ +
               _UNK_150b54408 * auVar55._8_8_ * auVar54._8_8_ +
               auVar230._8_8_ * auVar53._8_8_ + auVar52._8_8_ * auVar141._0_8_ * _UNK_15076c6f8;
          auVar142._16_8_ =
               _UNK_150b54430 * auVar97._16_8_ * auVar56._16_8_ +
               _UNK_150b54410 * auVar55._16_8_ * auVar54._16_8_ +
               auVar230._16_8_ * auVar53._16_8_ +
               auVar52._16_8_ * auVar141._0_8_ * ___xmm_bff00000000000003ff0000000000000;
          auVar142._24_8_ =
               _UNK_150b54438 * auVar97._24_8_ * auVar56._24_8_ +
               _UNK_150b54418 * auVar55._24_8_ * auVar54._24_8_ +
               auVar230._24_8_ * auVar53._24_8_ + auVar52._24_8_ * auVar141._0_8_ * _UNK_15076c6f8;
          lVar9 = *(longlong *)(param_2 + 0x14);
          dVar155 = *(double *)(lVar9 + lVar20);
          dVar156 = ((double *)(lVar9 + lVar20))[1];
          pdVar3 = (double *)(lVar9 + 8 + lVar20);
          auVar97 = vpermpd_avx2(auVar142,0xc9);
          dVar154 = *(double *)(lVar9 + 0x10 + lVar20);
          dVar106 = auVar142._0_8_ * *pdVar3 - dVar155 * auVar97._0_8_;
          dVar200 = auVar142._8_8_ * pdVar3[1] - dVar156 * auVar97._8_8_;
          dVar207 = auVar142._16_8_ * *(double *)(lVar9 + lVar20) - dVar154 * auVar97._16_8_;
          dVar252 = auVar142._24_8_ * 0.0 - auVar97._24_8_ * 0.0;
          auVar190._0_8_ = dVar106 + dVar106;
          auVar190._8_8_ = dVar200 + dVar200;
          auVar190._16_8_ = dVar207 + dVar207;
          auVar190._24_8_ = dVar252 + dVar252;
          auVar97 = vpermpd_avx2(auVar190,0xc9);
          auVar52 = vpermpd_avx2(auVar142,0xff);
          auVar53 = vpermpd_avx2(auVar190,0xd2);
          auVar191._0_8_ = auVar142._0_8_ * auVar190._0_8_;
          auVar191._8_8_ = auVar142._8_8_ * auVar190._8_8_;
          auVar191._16_8_ = auVar142._16_8_ * auVar190._16_8_;
          auVar191._24_8_ = auVar142._24_8_ * auVar190._24_8_;
          auVar54 = vpermpd_avx2(auVar191,0xc9);
          auVar192._0_8_ = auVar142._0_8_ * auVar53._0_8_ - auVar54._0_8_;
          auVar192._8_8_ = auVar142._8_8_ * auVar53._8_8_ - auVar54._8_8_;
          auVar192._16_8_ = auVar142._16_8_ * auVar53._16_8_ - auVar54._16_8_;
          auVar192._24_8_ = auVar142._24_8_ * auVar53._24_8_ - auVar54._24_8_;
          auVar53 = vpermpd_avx2(auVar192,0xc9);
          auVar193._0_8_ = auVar97._0_8_ * auVar52._0_8_ + dVar155 + auVar53._0_8_;
          auVar193._8_8_ = auVar97._8_8_ * auVar52._8_8_ + dVar156 + auVar53._8_8_;
          auVar193._16_8_ = auVar97._16_8_ * auVar52._16_8_ + dVar154 + auVar53._16_8_;
          auVar193._24_8_ = auVar97._24_8_ * auVar52._24_8_ + 0.0 + auVar53._24_8_;
          auVar331._0_8_ = auVar85._0_8_ * param_1 + auVar330._0_8_;
          auVar331._8_8_ = auVar85._8_8_ * param_1 + auVar330._8_8_;
          auVar331._16_8_ = auVar103._16_8_ * param_1 + auVar330._16_8_;
          auVar331._24_8_ = auVar103._24_8_ * param_1 + auVar330._24_8_;
          auVar97 = vsubpd_avx(auVar331,auVar193);
          lVar9 = *(longlong *)(param_2 + 6);
          *(undefined1 (*) [16])(lVar9 + lVar20) = auVar97._0_16_;
          uVar5 = vmovlpd_avx(auVar97._16_16_);
          *(undefined8 *)(lVar9 + 0x10 + lVar20) = uVar5;
          lVar10 = *(longlong *)(param_2 + 10);
          *(undefined1 (*) [32])(lVar10 + lVar22) = auVar142;
          lVar11 = *(longlong *)(param_2 + 0xc);
          *(undefined1 (*) [16])(lVar11 + lVar20) = auVar85;
          uVar5 = vmovlpd_avx(auVar103._16_16_);
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = uVar5;
          lVar11 = *(longlong *)(param_2 + 0x10);
          *(undefined1 (*) [16])(lVar11 + lVar20) = auVar28;
          uVar5 = vmovlpd_avx(auVar62._16_16_);
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = uVar5;
          lVar11 = *(longlong *)(param_2 + 0x20);
          puVar1 = (undefined8 *)(lVar11 + lVar20);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = 0;
          lVar11 = *(longlong *)(param_2 + 0x22);
          puVar1 = (undefined8 *)(lVar11 + lVar20);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = 0;
          if (*(char *)(*(longlong *)(param_2 + 0x2c) + lVar21) != '\0') {
            lVar11 = *(longlong *)(param_2 + 0x2e);
            auVar250 = *(undefined1 (*) [16])(lVar11 + 0x18 + lVar20 * 2);
            dVar154 = *(double *)(lVar11 + 0x28 + lVar20 * 2);
            auVar283._16_8_ = dVar154;
            auVar283._0_16_ = auVar250;
            auVar283._24_8_ = 0;
            auVar206 = *(undefined1 (*) [16])(lVar11 + lVar20 * 2);
            dVar155 = *(double *)(lVar11 + 0x10 + lVar20 * 2);
            auVar292._16_8_ = dVar155;
            auVar292._0_16_ = auVar206;
            auVar292._24_8_ = 0;
            auVar53 = vsubpd_avx(auVar283,auVar292);
            auVar54 = vpermpd_avx2(auVar292,0xc9);
            dVar156 = *(double *)(lVar10 + 0x10 + lVar22);
            auVar83 = *(undefined1 (*) [16])(lVar10 + lVar22);
            auVar110 = *(undefined1 (*) [16])(lVar10 + 8 + lVar22);
            auVar260._16_8_ = dVar156;
            auVar260._0_16_ = auVar83;
            auVar260._24_8_ = 0;
            dVar106 = *(double *)(lVar10 + 0x18 + lVar22);
            auVar312._8_8_ = dVar106;
            auVar312._0_8_ = dVar106;
            auVar312._16_8_ = dVar106;
            auVar312._24_8_ = dVar106;
            auVar97 = vblendpd_avx(auVar260,auVar312,8);
            dVar200 = *(double *)(lVar10 + lVar22);
            auVar332._16_8_ = dVar200;
            auVar332._0_16_ = auVar110;
            auVar332._24_8_ = 0;
            auVar52 = vblendpd_avx(auVar332,auVar312,8);
            dVar207 = auVar52._0_8_;
            dVar285 = auVar206._0_8_;
            dVar252 = auVar52._8_8_;
            dVar293 = auVar206._8_8_;
            dVar249 = auVar52._16_8_;
            dVar254 = auVar52._24_8_;
            dVar319 = auVar97._0_8_;
            dVar157 = dVar319 * auVar54._0_8_ - dVar285 * dVar207;
            dVar324 = auVar97._8_8_;
            dVar197 = dVar324 * auVar54._8_8_ - dVar293 * dVar252;
            dVar325 = auVar97._16_8_;
            dVar201 = dVar325 * auVar54._16_8_ - dVar155 * dVar249;
            dVar326 = auVar97._24_8_;
            dVar208 = dVar326 * auVar54._24_8_ - dVar254 * 0.0;
            auVar97 = vpermpd_avx2(auVar283,0xc9);
            dVar158 = dVar319 * auVar97._0_8_ - auVar250._0_8_ * dVar207;
            dVar198 = dVar324 * auVar97._8_8_ - auVar250._8_8_ * dVar252;
            dVar202 = dVar325 * auVar97._16_8_ - dVar154 * dVar249;
            dVar209 = dVar326 * auVar97._24_8_ - dVar254 * 0.0;
            dVar23 = auVar53._0_8_;
            auVar63._0_8_ = dVar23 * __real_3ff0000000000000;
            dVar76 = auVar53._8_8_;
            auVar63._8_8_ = dVar76 * 0.0;
            dVar263 = auVar53._16_8_;
            auVar63._16_8_ = dVar263 * 0.0;
            dVar270 = auVar53._24_8_;
            auVar63._24_8_ = dVar270 * 0.0;
            auVar194._0_8_ = dVar285 + auVar63._0_8_;
            auVar194._8_8_ = dVar293 + auVar63._8_8_;
            auVar194._16_8_ = dVar155 + auVar63._16_8_;
            auVar194._24_8_ = auVar63._24_8_ + 0.0;
            auVar97 = vblendpd_avx(auVar194,ZEXT832(0) << 0x40,8);
            auVar52 = vpermpd_avx2(auVar97,0xc9);
            dVar262 = dVar319 * auVar52._0_8_ - dVar207 * auVar97._0_8_;
            dVar269 = dVar324 * auVar52._8_8_ - dVar252 * auVar97._8_8_;
            dVar271 = dVar325 * auVar52._16_8_ - dVar249 * auVar97._16_8_;
            dVar273 = dVar326 * auVar52._24_8_ - dVar254 * auVar97._24_8_;
            auVar52 = vsubpd_avx(auVar283,auVar63);
            auVar52 = vblendpd_avx(auVar52,ZEXT832(0) << 0x40,8);
            auVar53 = vpermpd_avx2(auVar52,0xc9);
            dVar159 = dVar319 * auVar53._0_8_ - dVar207 * auVar52._0_8_;
            dVar199 = dVar324 * auVar53._8_8_ - dVar252 * auVar52._8_8_;
            dVar203 = dVar325 * auVar53._16_8_ - dVar249 * auVar52._16_8_;
            dVar210 = dVar326 * auVar53._24_8_ - dVar254 * auVar52._24_8_;
            auVar64._0_8_ =
                 dVar23 * ___ymm_000000000000000000000000000000003ff00000000000000000000000000000;
            auVar64._8_8_ = dVar76 * _UNK_150aa8e68;
            auVar64._16_8_ = dVar263 * _UNK_150aa8e70;
            auVar64._24_8_ = dVar270 * _UNK_150aa8e78;
            auVar195._0_8_ = dVar285 + auVar64._0_8_;
            auVar195._8_8_ = dVar293 + auVar64._8_8_;
            auVar195._16_8_ = dVar155 + auVar64._16_8_;
            auVar195._24_8_ = auVar64._24_8_ + 0.0;
            auVar57 = ZEXT832(0) << 0x40;
            auVar53 = vblendpd_avx(auVar195,auVar57,8);
            auVar54 = vpermpd_avx2(auVar53,0xc9);
            dVar231 = dVar319 * auVar54._0_8_ - dVar207 * auVar53._0_8_;
            dVar247 = dVar324 * auVar54._8_8_ - dVar252 * auVar53._8_8_;
            dVar248 = dVar325 * auVar54._16_8_ - dVar249 * auVar53._16_8_;
            dVar253 = dVar326 * auVar54._24_8_ - dVar254 * auVar53._24_8_;
            auVar54 = vsubpd_avx(auVar283,auVar64);
            auVar54 = vblendpd_avx(auVar54,auVar57,8);
            auVar55 = vpermpd_avx2(auVar54,0xc9);
            dVar313 = dVar319 * auVar55._0_8_ - dVar207 * auVar54._0_8_;
            dVar316 = dVar324 * auVar55._8_8_ - dVar252 * auVar54._8_8_;
            dVar317 = dVar325 * auVar55._16_8_ - dVar249 * auVar54._16_8_;
            dVar318 = dVar326 * auVar55._24_8_ - dVar254 * auVar54._24_8_;
            auVar65._0_8_ =
                 dVar23 * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
            auVar65._8_8_ = dVar76 * _UNK_150aa8e88;
            auVar65._16_8_ = dVar263 * _DAT_150aa8e90;
            auVar65._24_8_ = dVar270 * _UNK_150aa8e98;
            auVar104._0_8_ = dVar285 + auVar65._0_8_;
            auVar104._8_8_ = dVar293 + auVar65._8_8_;
            auVar104._16_8_ = dVar155 + auVar65._16_8_;
            auVar104._24_8_ = auVar65._24_8_ + 0.0;
            auVar55 = vblendpd_avx(auVar104,auVar57,8);
            auVar56 = vpermpd_avx2(auVar55,0xc9);
            dVar263 = dVar319 * auVar56._0_8_ - dVar207 * auVar55._0_8_;
            dVar270 = dVar324 * auVar56._8_8_ - dVar252 * auVar55._8_8_;
            dVar272 = dVar325 * auVar56._16_8_ - dVar249 * auVar55._16_8_;
            dVar274 = dVar326 * auVar56._24_8_ - dVar254 * auVar55._24_8_;
            auVar56 = vsubpd_avx(auVar283,auVar65);
            auVar56 = vblendpd_avx(auVar56,auVar57,8);
            auVar57 = vpermpd_avx2(auVar56,0xc9);
            dVar207 = dVar319 * auVar57._0_8_ - auVar56._0_8_ * dVar207;
            dVar252 = dVar324 * auVar57._8_8_ - auVar56._8_8_ * dVar252;
            dVar249 = dVar325 * auVar57._16_8_ - auVar56._16_8_ * dVar249;
            dVar254 = dVar326 * auVar57._24_8_ - auVar56._24_8_ * dVar254;
            auVar66._0_8_ = dVar157 + dVar157;
            auVar66._8_8_ = dVar197 + dVar197;
            auVar66._16_8_ = dVar201 + dVar201;
            auVar66._24_8_ = dVar208 + dVar208;
            auVar57 = vpermpd_avx2(auVar66,0xc9);
            dVar157 = auVar110._0_8_;
            dVar197 = auVar110._8_8_;
            auVar58 = vpermpd_avx2(auVar66,0xd2);
            dVar23 = auVar83._0_8_;
            auVar323._0_8_ = dVar23 * auVar58._0_8_ - dVar157 * auVar57._0_8_;
            dVar76 = auVar83._8_8_;
            auVar323._8_8_ = dVar76 * auVar58._8_8_ - dVar197 * auVar57._8_8_;
            auVar323._16_8_ = dVar156 * auVar58._16_8_ - dVar200 * auVar57._16_8_;
            auVar323._24_8_ = auVar58._24_8_ * 0.0 - auVar57._24_8_ * 0.0;
            auVar67._0_8_ = dVar158 + dVar158;
            auVar67._8_8_ = dVar198 + dVar198;
            auVar67._16_8_ = dVar202 + dVar202;
            auVar67._24_8_ = dVar209 + dVar209;
            auVar58 = vpermpd_avx2(auVar67,0xc9);
            auVar182 = vpermpd_avx2(auVar67,0xd2);
            auVar261._0_8_ = dVar23 * auVar182._0_8_ - dVar157 * auVar58._0_8_;
            auVar261._8_8_ = dVar76 * auVar182._8_8_ - dVar197 * auVar58._8_8_;
            auVar261._16_8_ = dVar156 * auVar182._16_8_ - dVar200 * auVar58._16_8_;
            auVar261._24_8_ = auVar182._24_8_ * 0.0 - auVar58._24_8_ * 0.0;
            auVar68._0_8_ = dVar262 + dVar262;
            auVar68._8_8_ = dVar269 + dVar269;
            auVar68._16_8_ = dVar271 + dVar271;
            auVar68._24_8_ = dVar273 + dVar273;
            auVar182 = vpermpd_avx2(auVar68,0xc9);
            auVar183 = vpermpd_avx2(auVar68,0xd2);
            auVar303._0_8_ = dVar23 * auVar183._0_8_ - dVar157 * auVar182._0_8_;
            auVar303._8_8_ = dVar76 * auVar183._8_8_ - dVar197 * auVar182._8_8_;
            auVar303._16_8_ = dVar156 * auVar183._16_8_ - dVar200 * auVar182._16_8_;
            auVar303._24_8_ = auVar183._24_8_ * 0.0 - auVar182._24_8_ * 0.0;
            auVar69._0_8_ = dVar159 + dVar159;
            auVar69._8_8_ = dVar199 + dVar199;
            auVar69._16_8_ = dVar203 + dVar203;
            auVar69._24_8_ = dVar210 + dVar210;
            auVar183 = vpermpd_avx2(auVar69,0xc9);
            auVar242 = vpermpd_avx2(auVar69,0xd2);
            auVar284._0_8_ = dVar23 * auVar242._0_8_ - dVar157 * auVar183._0_8_;
            auVar284._8_8_ = dVar76 * auVar242._8_8_ - dVar197 * auVar183._8_8_;
            auVar284._16_8_ = dVar156 * auVar242._16_8_ - dVar200 * auVar183._16_8_;
            auVar284._24_8_ = auVar242._24_8_ * 0.0 - auVar183._24_8_ * 0.0;
            auVar70._0_8_ = dVar231 + dVar231;
            auVar70._8_8_ = dVar247 + dVar247;
            auVar70._16_8_ = dVar248 + dVar248;
            auVar70._24_8_ = dVar253 + dVar253;
            auVar242 = vpermpd_avx2(auVar70,0xc9);
            auVar288 = vpermpd_avx2(auVar70,0xd2);
            auVar196._0_8_ = dVar23 * auVar288._0_8_ - dVar157 * auVar242._0_8_;
            auVar196._8_8_ = dVar76 * auVar288._8_8_ - dVar197 * auVar242._8_8_;
            auVar196._16_8_ = dVar156 * auVar288._16_8_ - dVar200 * auVar242._16_8_;
            auVar196._24_8_ = auVar288._24_8_ * 0.0 - auVar242._24_8_ * 0.0;
            auVar71._0_8_ = dVar313 + dVar313;
            auVar71._8_8_ = dVar316 + dVar316;
            auVar71._16_8_ = dVar317 + dVar317;
            auVar71._24_8_ = dVar318 + dVar318;
            auVar288 = vpermpd_avx2(auVar71,0xc9);
            auVar289 = vpermpd_avx2(auVar71,0xd2);
            auVar315._0_8_ = dVar23 * auVar289._0_8_ - dVar157 * auVar288._0_8_;
            auVar315._8_8_ = dVar76 * auVar289._8_8_ - dVar197 * auVar288._8_8_;
            auVar315._16_8_ = dVar156 * auVar289._16_8_ - dVar200 * auVar288._16_8_;
            auVar315._24_8_ = auVar289._24_8_ * 0.0 - auVar288._24_8_ * 0.0;
            auVar72._0_8_ = dVar263 + dVar263;
            auVar72._8_8_ = dVar270 + dVar270;
            auVar72._16_8_ = dVar272 + dVar272;
            auVar72._24_8_ = dVar274 + dVar274;
            auVar289 = vpermpd_avx2(auVar72,0xc9);
            auVar290 = vpermpd_avx2(auVar72,0xd2);
            auVar268._0_8_ = dVar23 * auVar290._0_8_ - dVar157 * auVar289._0_8_;
            auVar268._8_8_ = dVar76 * auVar290._8_8_ - dVar197 * auVar289._8_8_;
            auVar268._16_8_ = dVar156 * auVar290._16_8_ - dVar200 * auVar289._16_8_;
            auVar268._24_8_ = auVar290._24_8_ * 0.0 - auVar289._24_8_ * 0.0;
            auVar73._0_8_ = dVar207 + dVar207;
            auVar73._8_8_ = dVar252 + dVar252;
            auVar73._16_8_ = dVar249 + dVar249;
            auVar73._24_8_ = dVar254 + dVar254;
            auVar290 = vpermpd_avx2(auVar73,0xc9);
            auVar291 = vpermpd_avx2(auVar73,0xd2);
            auVar246._0_8_ = dVar23 * auVar291._0_8_ - dVar157 * auVar290._0_8_;
            auVar246._8_8_ = dVar76 * auVar291._8_8_ - dVar197 * auVar290._8_8_;
            auVar246._16_8_ = dVar156 * auVar291._16_8_ - dVar200 * auVar290._16_8_;
            auVar246._24_8_ = auVar291._24_8_ * 0.0 - auVar290._24_8_ * 0.0;
            auVar291 = vpermpd_avx2(auVar323,0xc9);
            dVar156 = *(double *)(lVar9 + 0x10 + lVar20);
            auVar206 = *(undefined1 (*) [16])(lVar9 + lVar20);
            auVar105._16_8_ = dVar156;
            auVar105._0_16_ = auVar206;
            auVar105._24_8_ = 0;
            dVar200 = auVar206._0_8_;
            auVar74._0_8_ = dVar200 + dVar106 * auVar57._0_8_ + dVar285 + auVar291._0_8_;
            dVar207 = auVar206._8_8_;
            auVar74._8_8_ = dVar207 + dVar106 * auVar57._8_8_ + dVar293 + auVar291._8_8_;
            auVar74._16_8_ = dVar156 + dVar106 * auVar57._16_8_ + dVar155 + auVar291._16_8_;
            auVar74._24_8_ = dVar106 * auVar57._24_8_ + 0.0 + auVar291._24_8_ + 0.0;
            auVar57 = vpermpd_avx2(auVar261,0xc9);
            auVar143._0_8_ = dVar200 + dVar106 * auVar58._0_8_ + auVar250._0_8_ + auVar57._0_8_;
            auVar143._8_8_ = dVar207 + dVar106 * auVar58._8_8_ + auVar250._8_8_ + auVar57._8_8_;
            auVar143._16_8_ = dVar156 + dVar106 * auVar58._16_8_ + dVar154 + auVar57._16_8_;
            auVar143._24_8_ = dVar106 * auVar58._24_8_ + 0.0 + auVar57._24_8_ + 0.0;
            auVar58 = vminpd_avx(auVar74,auVar143);
            auVar57 = vmaxpd_avx(auVar74,auVar143);
            auVar291 = vpermpd_avx2(auVar303,0xc9);
            auVar144._0_8_ = dVar200 + auVar291._0_8_ + dVar106 * auVar182._0_8_ + auVar97._0_8_;
            auVar144._8_8_ = dVar207 + auVar291._8_8_ + dVar106 * auVar182._8_8_ + auVar97._8_8_;
            auVar144._16_8_ = dVar156 + auVar291._16_8_ + dVar106 * auVar182._16_8_ + auVar97._16_8_
            ;
            auVar144._24_8_ = auVar291._24_8_ + dVar106 * auVar182._24_8_ + auVar97._24_8_ + 0.0;
            auVar58 = vminpd_avx(auVar58,auVar144);
            auVar97 = vmaxpd_avx(auVar57,auVar144);
            auVar57 = vpermpd_avx2(auVar284,0xc9);
            auVar145._0_8_ = dVar200 + auVar57._0_8_ + dVar106 * auVar183._0_8_ + auVar52._0_8_;
            auVar145._8_8_ = dVar207 + auVar57._8_8_ + dVar106 * auVar183._8_8_ + auVar52._8_8_;
            auVar145._16_8_ = dVar156 + auVar57._16_8_ + dVar106 * auVar183._16_8_ + auVar52._16_8_;
            auVar145._24_8_ = auVar57._24_8_ + dVar106 * auVar183._24_8_ + auVar52._24_8_ + 0.0;
            auVar52 = vminpd_avx(auVar58,auVar145);
            auVar97 = vmaxpd_avx(auVar97,auVar145);
            auVar57 = vpermpd_avx2(auVar196,0xc9);
            auVar146._0_8_ = dVar200 + auVar57._0_8_ + dVar106 * auVar242._0_8_ + auVar53._0_8_;
            auVar146._8_8_ = dVar207 + auVar57._8_8_ + dVar106 * auVar242._8_8_ + auVar53._8_8_;
            auVar146._16_8_ = dVar156 + auVar57._16_8_ + dVar106 * auVar242._16_8_ + auVar53._16_8_;
            auVar146._24_8_ = auVar57._24_8_ + dVar106 * auVar242._24_8_ + auVar53._24_8_ + 0.0;
            auVar52 = vminpd_avx(auVar52,auVar146);
            auVar97 = vmaxpd_avx(auVar97,auVar146);
            auVar53 = vpermpd_avx2(auVar315,0xc9);
            auVar147._0_8_ = dVar200 + auVar53._0_8_ + dVar106 * auVar288._0_8_ + auVar54._0_8_;
            auVar147._8_8_ = dVar207 + auVar53._8_8_ + dVar106 * auVar288._8_8_ + auVar54._8_8_;
            auVar147._16_8_ = dVar156 + auVar53._16_8_ + dVar106 * auVar288._16_8_ + auVar54._16_8_;
            auVar147._24_8_ = auVar53._24_8_ + dVar106 * auVar288._24_8_ + auVar54._24_8_ + 0.0;
            auVar52 = vminpd_avx(auVar52,auVar147);
            auVar97 = vmaxpd_avx(auVar97,auVar147);
            auVar53 = vpermpd_avx2(auVar268,0xc9);
            auVar148._0_8_ = dVar200 + auVar53._0_8_ + dVar106 * auVar289._0_8_ + auVar55._0_8_;
            auVar148._8_8_ = dVar207 + auVar53._8_8_ + dVar106 * auVar289._8_8_ + auVar55._8_8_;
            auVar148._16_8_ = dVar156 + auVar53._16_8_ + dVar106 * auVar289._16_8_ + auVar55._16_8_;
            auVar148._24_8_ = auVar53._24_8_ + dVar106 * auVar289._24_8_ + auVar55._24_8_ + 0.0;
            auVar52 = vminpd_avx(auVar52,auVar148);
            auVar97 = vmaxpd_avx(auVar97,auVar148);
            auVar53 = vpermpd_avx2(auVar246,0xc9);
            auVar149._0_8_ = dVar200 + auVar290._0_8_ * dVar106 + auVar56._0_8_ + auVar53._0_8_;
            auVar149._8_8_ = dVar207 + auVar290._8_8_ * dVar106 + auVar56._8_8_ + auVar53._8_8_;
            auVar149._16_8_ = dVar156 + auVar290._16_8_ * dVar106 + auVar56._16_8_ + auVar53._16_8_;
            auVar149._24_8_ = auVar290._24_8_ * dVar106 + auVar56._24_8_ + auVar53._24_8_ + 0.0;
            auVar52 = vminpd_avx(auVar52,auVar149);
            auVar97 = vmaxpd_avx(auVar97,auVar149);
            auVar53 = vsubpd_avx(auVar97,auVar52);
            auVar150._0_8_ = auVar53._0_8_ * param_6;
            auVar150._8_8_ = auVar53._8_8_ * param_6;
            auVar150._16_8_ = auVar53._16_8_ * param_6;
            auVar150._24_8_ = auVar53._24_8_ * param_6;
            auVar53 = vsubpd_avx(auVar52,auVar150);
            auVar151._16_8_ = *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10 + lVar20);
            auVar151._0_16_ = *(undefined1 (*) [16])(*(longlong *)(param_2 + 4) + lVar20);
            auVar151._24_8_ = 0;
            auVar54 = vsubpd_avx(auVar151,auVar105);
            auVar52 = vminpd_avx(auVar54,ZEXT832(0) << 0x40);
            auVar152._0_8_ = auVar53._0_8_ + auVar52._0_8_;
            auVar152._8_8_ = auVar53._8_8_ + auVar52._8_8_;
            auVar152._16_8_ = auVar53._16_8_ + auVar52._16_8_;
            auVar152._24_8_ = auVar53._24_8_ + auVar52._24_8_;
            auVar52 = vmaxpd_avx(auVar54,ZEXT832(0) << 0x40);
            auVar53 = vsubpd_avx(auVar152,auVar59);
            auVar29._0_8_ = param_7 + auVar97._0_8_ + auVar150._0_8_ + auVar52._0_8_;
            auVar29._8_8_ = param_7 + auVar97._8_8_ + auVar150._8_8_ + auVar52._8_8_;
            auVar75._16_8_ = param_7 + auVar97._16_8_ + auVar150._16_8_ + auVar52._16_8_;
            auVar75._0_16_ = auVar29;
            auVar75._24_8_ = param_7 + auVar97._24_8_ + auVar150._24_8_ + auVar52._24_8_;
            auVar153._16_16_ = auVar29;
            auVar153._0_16_ = auVar53._0_16_;
            auVar97 = vshufpd_avx(auVar53,auVar153,2);
            lVar9 = *(longlong *)(param_2 + 0x30);
            *(undefined1 (*) [32])(lVar9 + lVar20 * 2) = auVar97;
            auVar97 = vpermpd_avx2(auVar75,0xe9);
            *(undefined1 (*) [16])(lVar9 + 0x20 + lVar20 * 2) = auVar97._0_16_;
          }
        }
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x18;
        lVar22 = lVar22 + 0x20;
      } while ((ulonglong)uVar6 * 0x18 != lVar20);
    }
  }
  else {
    auVar294 = ZEXT816(0);
    auVar204 = ZEXT816(0);
    auVar205 = ZEXT816(0);
    auVar304 = ZEXT816(0);
    auVar206 = ZEXT816(0);
    auVar78 = ZEXT816(0);
    auVar79 = ZEXT816(0) << 0x20;
    auVar77 = ZEXT816(0);
    auVar251 = ZEXT816(0);
    auVar264 = ZEXT816(0);
    auVar250 = ZEXT816(0);
    if (0.0 < *param_4) {
      auVar167._0_8_ =
           *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar167._8_8_ = param_3[1] * _UNK_150b543c8;
      auVar167._16_8_ = param_3[2] * _UNK_150b543d0;
      auVar167._24_8_ = param_3[3] * _UNK_150b543d8;
      auVar59 = vpermpd_avx2(auVar167,0xc9);
      dVar106 = auVar59._0_8_;
      dVar200 = auVar59._8_8_;
      dVar207 = auVar59._16_8_;
      dVar252 = auVar59._24_8_;
      dVar107 = auVar167._0_8_ * param_3[0x13] - dVar106 * param_3[0x12];
      dVar154 = auVar167._8_8_ * param_3[0x14] - dVar200 * param_3[0x13];
      dVar155 = auVar167._16_8_ * param_3[0x12] - dVar207 * param_3[0x14];
      dVar156 = auVar167._24_8_ * 0.0 - dVar252 * 0.0;
      auVar30._0_8_ = dVar107 + dVar107;
      auVar30._8_8_ = dVar154 + dVar154;
      auVar30._16_8_ = dVar155 + dVar155;
      auVar30._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar30,0xc9);
      auVar97 = vpermpd_avx2(auVar167,0xff);
      dVar249 = auVar97._0_8_;
      dVar254 = auVar97._8_8_;
      dVar23 = auVar97._16_8_;
      dVar76 = auVar97._24_8_;
      auVar97 = vpermpd_avx2(auVar30,0xd2);
      auVar31._0_8_ = auVar167._0_8_ * auVar30._0_8_;
      auVar31._8_8_ = auVar167._8_8_ * auVar30._8_8_;
      auVar31._16_8_ = auVar167._16_8_ * auVar30._16_8_;
      auVar31._24_8_ = auVar167._24_8_ * auVar30._24_8_;
      auVar52 = vpermpd_avx2(auVar31,0xc9);
      auVar32._0_8_ = auVar167._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar32._8_8_ = auVar167._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar32._16_8_ = auVar167._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar32._24_8_ = auVar167._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar32,0xc9);
      auVar251._0_8_ = dVar249 * auVar59._0_8_ + param_3[0x12] + auVar97._0_8_;
      auVar251._8_8_ = dVar254 * auVar59._8_8_ + param_3[0x13] + auVar97._8_8_;
      auVar237._16_8_ = dVar23 * auVar59._16_8_ + param_3[0x14] + auVar97._16_8_;
      auVar237._0_16_ = auVar251;
      auVar237._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar264 = vshufpd_avx(auVar251,auVar251,1);
      auVar250 = auVar237._16_16_;
      dVar107 = auVar167._0_8_ * param_3[0x16] - dVar106 * param_3[0x15];
      dVar154 = auVar167._8_8_ * param_3[0x17] - dVar200 * param_3[0x16];
      dVar155 = auVar167._16_8_ * param_3[0x15] - dVar207 * param_3[0x17];
      dVar156 = auVar167._24_8_ * 0.0 - dVar252 * 0.0;
      auVar33._0_8_ = dVar107 + dVar107;
      auVar33._8_8_ = dVar154 + dVar154;
      auVar33._16_8_ = dVar155 + dVar155;
      auVar33._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar33,0xc9);
      auVar97 = vpermpd_avx2(auVar33,0xd2);
      auVar34._0_8_ = auVar167._0_8_ * auVar33._0_8_;
      auVar34._8_8_ = auVar167._8_8_ * auVar33._8_8_;
      auVar34._16_8_ = auVar167._16_8_ * auVar33._16_8_;
      auVar34._24_8_ = auVar167._24_8_ * auVar33._24_8_;
      auVar52 = vpermpd_avx2(auVar34,0xc9);
      auVar35._0_8_ = auVar167._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar35._8_8_ = auVar167._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar35._16_8_ = auVar167._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar35._24_8_ = auVar167._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar35,0xc9);
      auVar78._0_8_ = dVar249 * auVar59._0_8_ + param_3[0x15] + auVar97._0_8_;
      auVar78._8_8_ = dVar254 * auVar59._8_8_ + param_3[0x16] + auVar97._8_8_;
      auVar36._16_8_ = dVar23 * auVar59._16_8_ + param_3[0x17] + auVar97._16_8_;
      auVar36._0_16_ = auVar78;
      auVar36._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar79 = vshufpd_avx(auVar78,auVar78,1);
      auVar77 = auVar36._16_16_;
      dVar107 = auVar167._0_8_ * param_3[0xd] - dVar106 * param_3[0xc];
      dVar154 = auVar167._8_8_ * param_3[0xe] - dVar200 * param_3[0xd];
      dVar155 = auVar167._16_8_ * param_3[0xc] - dVar207 * param_3[0xe];
      dVar156 = auVar167._24_8_ * 0.0 - dVar252 * 0.0;
      auVar112._0_8_ = dVar107 + dVar107;
      auVar112._8_8_ = dVar154 + dVar154;
      auVar112._16_8_ = dVar155 + dVar155;
      auVar112._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar112,0xc9);
      auVar97 = vpermpd_avx2(auVar112,0xd2);
      auVar113._0_8_ = auVar167._0_8_ * auVar112._0_8_;
      auVar113._8_8_ = auVar167._8_8_ * auVar112._8_8_;
      auVar113._16_8_ = auVar167._16_8_ * auVar112._16_8_;
      auVar113._24_8_ = auVar167._24_8_ * auVar112._24_8_;
      auVar52 = vpermpd_avx2(auVar113,0xc9);
      auVar114._0_8_ = auVar167._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar114._8_8_ = auVar167._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar114._16_8_ = auVar167._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar114._24_8_ = auVar167._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar114,0xc9);
      auVar205._0_8_ = dVar249 * auVar59._0_8_ + param_3[0xc] + auVar97._0_8_;
      auVar205._8_8_ = dVar254 * auVar59._8_8_ + param_3[0xd] + auVar97._8_8_;
      auVar286._16_8_ = dVar23 * auVar59._16_8_ + param_3[0xe] + auVar97._16_8_;
      auVar286._0_16_ = auVar205;
      auVar286._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar304 = vshufpd_avx(auVar205,auVar205,1);
      auVar206 = auVar286._16_16_;
      auVar16 = *(undefined1 (*) [24])(param_3 + 0xf);
      dVar107 = auVar167._0_8_ * param_3[0x10] - dVar106 * auVar16._0_8_;
      dVar154 = auVar167._8_8_ * param_3[0x11] - dVar200 * auVar16._8_8_;
      dVar155 = auVar167._16_8_ * param_3[0xf] - dVar207 * auVar16._16_8_;
      dVar156 = auVar167._24_8_ * 0.0 - dVar252 * 0.0;
      auVar115._0_8_ = dVar107 + dVar107;
      auVar115._8_8_ = dVar154 + dVar154;
      auVar115._16_8_ = dVar155 + dVar155;
      auVar115._24_8_ = dVar156 + dVar156;
      auVar59 = vpermpd_avx2(auVar115,0xc9);
      auVar97 = vpermpd_avx2(auVar115,0xd2);
      auVar116._0_8_ = auVar167._0_8_ * auVar115._0_8_;
      auVar116._8_8_ = auVar167._8_8_ * auVar115._8_8_;
      auVar116._16_8_ = auVar167._16_8_ * auVar115._16_8_;
      auVar116._24_8_ = auVar167._24_8_ * auVar115._24_8_;
      auVar52 = vpermpd_avx2(auVar116,0xc9);
      auVar117._0_8_ = auVar167._0_8_ * auVar97._0_8_ - auVar52._0_8_;
      auVar117._8_8_ = auVar167._8_8_ * auVar97._8_8_ - auVar52._8_8_;
      auVar117._16_8_ = auVar167._16_8_ * auVar97._16_8_ - auVar52._16_8_;
      auVar117._24_8_ = auVar167._24_8_ * auVar97._24_8_ - auVar52._24_8_;
      auVar97 = vpermpd_avx2(auVar117,0xc9);
      auVar160._0_8_ = dVar249 * auVar59._0_8_ + auVar16._0_8_ + auVar97._0_8_;
      auVar160._8_8_ = dVar254 * auVar59._8_8_ + auVar16._8_8_ + auVar97._8_8_;
      auVar168._16_8_ = dVar23 * auVar59._16_8_ + auVar16._16_8_ + auVar97._16_8_;
      auVar168._0_16_ = auVar160;
      auVar168._24_8_ = dVar76 * auVar59._24_8_ + 0.0 + auVar97._24_8_;
      auVar294 = vshufpd_avx(auVar160,auVar160,1);
      auVar204 = auVar168._16_16_;
    }
    uVar6 = *param_2;
    if (0 < (int)uVar6) {
      lVar7 = *(longlong *)(param_2 + 2);
      lVar8 = *(longlong *)(param_2 + 0x24);
      auVar12 = vunpcklpd_avx(auVar79,auVar77);
      auVar13 = vunpcklpd_avx(auVar77,auVar78);
      auVar14 = vunpcklpd_avx(auVar78,auVar79);
      auVar15 = vunpcklpd_avx(auVar160,auVar294);
      auVar294 = vunpcklpd_avx(auVar294,auVar204);
      auVar304 = vunpcklpd_avx(auVar205,auVar304);
      auVar264 = vunpcklpd_avx(auVar251,auVar264);
      dVar107 = param_1 * __real_3fe0000000000000;
      auVar37._8_8_ = param_7;
      auVar37._0_8_ = param_7;
      auVar37._16_8_ = param_7;
      auVar37._24_8_ = param_7;
      lVar22 = 0;
      lVar20 = 0;
      lVar21 = 0;
      do {
        if ((*(char *)(lVar8 + lVar21) == '\0') && (*(char *)(lVar7 + lVar21) == '\x04')) {
          lVar9 = *(longlong *)(param_2 + 0xe);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xc) + lVar20);
          uVar17 = puVar1[1];
          uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0xc) + 0x10 + lVar20);
          puVar2 = (undefined8 *)(lVar9 + lVar20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar17;
          *(undefined8 *)(lVar9 + 0x10 + lVar20) = uVar5;
          lVar9 = *(longlong *)(param_2 + 0x12);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar20);
          uVar17 = puVar1[1];
          uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar20);
          puVar2 = (undefined8 *)(lVar9 + lVar20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar17;
          *(undefined8 *)(lVar9 + 0x10 + lVar20) = uVar5;
          lVar9 = *(longlong *)(param_2 + 8);
          dVar154 = *(double *)(lVar9 + 0x10 + lVar22);
          auVar80._8_8_ = dVar154;
          auVar80._0_8_ = dVar154;
          auVar86._16_8_ = dVar154;
          auVar86._0_16_ = auVar80;
          auVar86._24_8_ = dVar154;
          dVar155 = *(double *)(lVar9 + 8 + lVar22);
          auVar108._8_8_ = dVar155;
          auVar108._0_8_ = dVar155;
          auVar118._16_8_ = dVar155;
          auVar118._0_16_ = auVar108;
          auVar118._24_8_ = dVar155;
          dVar156 = *(double *)(lVar9 + lVar22);
          auVar211._8_8_ = dVar156;
          auVar211._0_8_ = dVar156;
          auVar215._16_8_ = dVar156;
          auVar215._0_16_ = auVar211;
          auVar215._24_8_ = dVar156;
          dVar106 = *(double *)(lVar9 + 0x18 + lVar22);
          lVar9 = *(longlong *)(param_2 + 0x16);
          pdVar3 = (double *)(lVar9 + lVar22);
          auVar232._8_8_ = 0;
          auVar232._0_8_ = *(ulonglong *)(lVar9 + 0x18 + lVar22);
          auVar251 = vmovhpd_avx(auVar232,*(undefined8 *)(lVar9 + 0x10 + lVar22));
          auVar255._8_8_ = 0;
          auVar255._0_8_ = *(ulonglong *)(lVar9 + 8 + lVar22);
          auVar205 = vmovhpd_avx(auVar255,*(undefined8 *)(lVar9 + lVar22));
          pdVar4 = (double *)(lVar9 + 0x10 + lVar22);
          auVar256._0_8_ =
               dVar154 * auVar205._0_8_ *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
               dVar155 * *pdVar4 *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
               dVar106 * *pdVar3 +
               dVar156 * auVar251._0_8_ *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
          auVar256._8_8_ =
               dVar154 * auVar205._8_8_ * _UNK_150b54428 +
               dVar155 * pdVar4[1] * _UNK_150b54408 +
               dVar106 * pdVar3[1] + dVar156 * auVar251._8_8_ * _UNK_150b543e8;
          auVar256._16_8_ =
               dVar154 * auVar251._0_8_ * _UNK_150b54430 +
               dVar155 * *pdVar3 * _UNK_150b54410 +
               dVar106 * pdVar3[2] + dVar156 * auVar205._0_8_ * _UNK_150b543f0;
          auVar256._24_8_ =
               dVar154 * auVar251._8_8_ * _UNK_150b54438 +
               dVar155 * pdVar3[1] * _UNK_150b54418 +
               dVar106 * pdVar3[3] + dVar156 * auVar205._8_8_ * _UNK_150b543f8;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1c) + lVar20);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x20) + lVar20);
          dVar154 = *(double *)(*(longlong *)(param_2 + 0x18) + lVar21 * 8);
          auVar161._0_8_ = dVar154 * (param_1 * *pdVar3 + *pdVar4);
          auVar161._8_8_ = dVar154 * (param_1 * pdVar3[1] + pdVar4[1]);
          auVar295._16_8_ =
               dVar154 * (param_1 * *(double *)(*(longlong *)(param_2 + 0x1c) + 0x10 + lVar20) +
                         *(double *)(*(longlong *)(param_2 + 0x20) + 0x10 + lVar20));
          auVar295._0_16_ = auVar161;
          auVar295._24_8_ = dVar154 * (param_1 * 0.0 + 0.0);
          if (*(char *)(*(longlong *)(param_2 + 0x26) + lVar21) == '\0') {
            auVar251 = vshufpd_avx(auVar161,auVar161,1);
            auVar205 = auVar295._16_16_;
          }
          else {
            auVar161._0_8_ = param_1 * *param_5 + auVar161._0_8_;
            auVar161._8_8_ = param_1 * param_5[1] + auVar161._8_8_;
            auVar169._16_8_ = param_1 * param_5[2] + auVar295._16_8_;
            auVar169._0_16_ = auVar161;
            auVar169._24_8_ = param_1 * 0.0 + auVar295._24_8_;
            auVar251 = vshufpd_avx(auVar161,auVar161,1);
            auVar205 = auVar169._16_16_;
          }
          lVar9 = *(longlong *)(param_2 + 0x14);
          auVar162._8_8_ = 0;
          auVar162._0_8_ = *(double *)(lVar9 + lVar20);
          dVar154 = *(double *)(lVar9 + 0x10 + lVar20);
          auVar233._8_8_ = 0;
          auVar233._0_8_ = dVar154;
          auVar110 = vunpcklpd_avx(auVar233,auVar162);
          auVar83 = vunpcklpd_avx(auVar108,auVar80);
          auVar59 = vblendpd_avx(ZEXT1632(auVar83),auVar215,0xc);
          auVar83 = vunpcklpd_avx(auVar80,auVar211);
          auVar97 = vblendpd_avx(ZEXT1632(auVar83),auVar118,0xc);
          auVar83 = *(undefined1 (*) [16])(lVar9 + 8 + lVar20);
          dVar155 = auVar59._0_8_ * auVar110._0_8_ - auVar97._0_8_ * auVar83._0_8_;
          dVar156 = auVar59._8_8_ * auVar110._8_8_ - auVar97._8_8_ * auVar83._8_8_;
          dVar200 = auVar59._16_8_ * *(double *)(lVar9 + 8 + lVar20) -
                    auVar97._16_8_ * *(double *)(lVar9 + lVar20);
          dVar207 = auVar59._24_8_ * 0.0 - auVar97._24_8_ * 0.0;
          auVar170._0_8_ = dVar155 + dVar155;
          auVar170._8_8_ = dVar156 + dVar156;
          auVar170._16_8_ = dVar200 + dVar200;
          auVar170._24_8_ = dVar207 + dVar207;
          auVar52 = vpermpd_avx2(auVar170,0xc9);
          auVar83 = vunpcklpd_avx(auVar211,auVar108);
          auVar97 = vblendpd_avx(ZEXT1632(auVar83),auVar86,0xc);
          auVar119._0_8_ = auVar52._0_8_ * auVar97._0_8_ - auVar59._0_8_ * auVar170._0_8_;
          auVar119._8_8_ = auVar52._8_8_ * auVar97._8_8_ - auVar59._8_8_ * auVar170._8_8_;
          auVar119._16_8_ = auVar52._16_8_ * auVar97._16_8_ - auVar59._16_8_ * auVar170._16_8_;
          auVar119._24_8_ = auVar52._24_8_ * auVar97._24_8_ - auVar59._24_8_ * auVar170._24_8_;
          auVar59 = vpermpd_avx2(auVar119,0xc9);
          pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar20);
          auVar327._0_8_ =
               *pdVar3 + auVar170._0_8_ * dVar106 + SUB168(*(undefined1 (*) [16])(lVar9 + lVar20),0)
                         + auVar59._0_8_;
          auVar327._8_8_ =
               pdVar3[1] +
               auVar170._8_8_ * dVar106 + SUB168(*(undefined1 (*) [16])(lVar9 + lVar20),8) +
               auVar59._8_8_;
          auVar327._16_8_ =
               *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar20) +
               auVar170._16_8_ * dVar106 + dVar154 + auVar59._16_8_;
          auVar327._24_8_ = auVar170._24_8_ * dVar106 + 0.0 + auVar59._24_8_ + 0.0;
          lVar9 = *(longlong *)(param_2 + 0x1a);
          dVar154 = auVar256._0_8_ + auVar256._0_8_;
          dVar155 = auVar256._8_8_ + auVar256._8_8_;
          dVar156 = auVar256._16_8_ + auVar256._16_8_;
          dVar106 = auVar256._24_8_ + auVar256._24_8_;
          auVar171._0_8_ = dVar154 * auVar256._0_8_;
          auVar171._8_8_ = dVar155 * auVar256._0_8_;
          auVar171._16_8_ = dVar156 * auVar256._0_8_;
          auVar171._24_8_ = dVar106 * auVar256._0_8_;
          auVar59 = vpermpd_avx2(auVar256,0x55);
          auVar212._0_8_ = dVar154 * auVar59._0_8_;
          auVar212._8_8_ = dVar155 * auVar59._8_8_;
          auVar216._16_8_ = dVar156 * auVar59._16_8_;
          auVar216._0_16_ = auVar212;
          auVar216._24_8_ = dVar106 * auVar59._24_8_;
          auVar59 = vpermpd_avx2(auVar256,0xff);
          auVar87._0_8_ = dVar154 * auVar59._0_8_;
          auVar87._8_8_ = dVar155 * auVar59._8_8_;
          auVar87._16_8_ = dVar156 * auVar59._16_8_;
          auVar87._24_8_ = dVar106 * auVar59._24_8_;
          auVar59 = vperm2f128_avx(auVar216,auVar171,0x21);
          auVar59 = vshufpd_avx(auVar59,ZEXT1632(auVar171._16_16_),4);
          auVar24._0_8_ = auVar87._0_8_ + auVar59._0_8_;
          auVar24._8_8_ = auVar87._8_8_ + auVar59._8_8_;
          auVar38._16_8_ = auVar87._16_8_ + auVar59._16_8_;
          auVar38._0_16_ = auVar24;
          auVar38._24_8_ = auVar87._24_8_ + auVar59._24_8_;
          auVar52 = vsubpd_avx(auVar59,auVar87);
          auVar83 = vshufpd_avx(auVar212,auVar212,1);
          auVar172._8_8_ = auVar171._0_8_;
          auVar172._0_8_ = auVar171._0_8_;
          auVar172._16_8_ = auVar171._0_8_;
          auVar172._24_8_ = auVar171._0_8_;
          auVar59 = vblendpd_avx(auVar172,ZEXT1632(auVar83),1);
          auVar97 = vpermpd_avx2(auVar216,0x55);
          auVar97 = vblendpd_avx(ZEXT1632(CONCAT88(auVar256._16_8_ * dVar156,
                                                   auVar256._16_8_ * dVar156)),auVar97,0xc);
          auVar120._0_8_ = auVar59._0_8_ + auVar97._0_8_;
          auVar120._8_8_ = auVar59._8_8_ + auVar97._8_8_;
          auVar120._16_8_ = auVar59._16_8_ + auVar97._16_8_;
          auVar120._24_8_ = auVar59._24_8_ + auVar97._24_8_;
          auVar173._8_8_ = __real_3ff0000000000000;
          auVar173._0_8_ = __real_3ff0000000000000;
          auVar173._16_8_ = __real_3ff0000000000000;
          auVar173._24_8_ = __real_3ff0000000000000;
          auVar97 = vsubpd_avx(auVar173,auVar120);
          dVar23 = auVar97._0_8_;
          dVar154 = *(double *)(lVar9 + 0x10 + lVar22 * 4);
          pdVar3 = (double *)(lVar9 + lVar22 * 4);
          dVar106 = *pdVar3;
          dVar200 = pdVar3[1];
          auVar59 = vpermpd_avx2(auVar52,0xaa);
          dVar155 = *(double *)(lVar9 + 0x30 + lVar22 * 4);
          pdVar3 = (double *)(lVar9 + 0x20 + lVar22 * 4);
          dVar207 = *pdVar3;
          dVar252 = pdVar3[1];
          auVar53 = vpermpd_avx2(auVar38,0x55);
          dVar156 = *(double *)(lVar9 + 0x50 + lVar22 * 4);
          pdVar3 = (double *)(lVar9 + 0x40 + lVar22 * 4);
          dVar249 = *pdVar3;
          dVar254 = pdVar3[1];
          auVar174._0_8_ = dVar249 * auVar53._0_8_ + dVar207 * auVar59._0_8_ + dVar106 * dVar23;
          auVar174._8_8_ = dVar254 * auVar53._8_8_ + dVar252 * auVar59._8_8_ + dVar200 * dVar23;
          auVar174._16_8_ = dVar156 * auVar53._16_8_ + dVar155 * auVar59._16_8_ + dVar154 * dVar23;
          auVar174._24_8_ = auVar53._24_8_ * 0.0 + auVar59._24_8_ * 0.0 + dVar23 * 0.0;
          auVar59 = vpermpd_avx2(auVar38,0xaa);
          auVar53 = vpermpd_avx2(auVar97,0x55);
          dVar23 = auVar52._0_8_;
          auVar217._0_8_ = dVar249 * dVar23 + dVar106 * auVar59._0_8_ + dVar207 * auVar53._0_8_;
          auVar217._8_8_ = dVar254 * dVar23 + dVar200 * auVar59._8_8_ + dVar252 * auVar53._8_8_;
          auVar217._16_8_ = dVar156 * dVar23 + dVar154 * auVar59._16_8_ + dVar155 * auVar53._16_8_;
          auVar217._24_8_ = dVar23 * 0.0 + auVar59._24_8_ * 0.0 + auVar53._24_8_ * 0.0;
          auVar59 = vpermpd_avx2(auVar52,0x55);
          auVar53 = vpermpd_avx2(auVar97,0xaa);
          auVar238._0_8_ =
               dVar249 * auVar53._0_8_ + auVar59._0_8_ * dVar106 + dVar207 * auVar24._0_8_;
          auVar238._8_8_ =
               dVar254 * auVar53._8_8_ + auVar59._8_8_ * dVar200 + dVar252 * auVar24._0_8_;
          auVar238._16_8_ =
               dVar156 * auVar53._16_8_ + auVar59._16_8_ * dVar154 + dVar155 * auVar24._0_8_;
          auVar238._24_8_ = auVar53._24_8_ * 0.0 + auVar59._24_8_ * 0.0 + auVar24._0_8_ * 0.0;
          auVar83 = vunpcklpd_avx(auVar97._0_16_,auVar38._16_16_);
          auVar59 = vblendpd_avx(ZEXT1632(auVar83),auVar59,0xc);
          auVar53 = vpermpd_avx2(auVar174,0x55);
          auVar83 = vblendpd_avx(auVar97._0_16_,auVar52._16_16_,1);
          dVar254 = auVar83._0_8_;
          dVar23 = auVar83._8_8_;
          dVar200 = auVar59._0_8_;
          dVar207 = auVar59._8_8_;
          dVar252 = auVar59._16_8_;
          dVar249 = auVar59._24_8_;
          auVar54 = vpermpd_avx2(auVar174,0xaa);
          auVar83 = vshufpd_avx(auVar24,auVar52._0_16_,1);
          auVar59 = vblendpd_avx(auVar97,ZEXT1632(auVar83),3);
          dVar154 = auVar59._0_8_;
          dVar155 = auVar59._8_8_;
          dVar156 = auVar59._16_8_;
          dVar106 = auVar59._24_8_;
          auVar59 = vpermpd_avx2(auVar217,0x55);
          auVar97 = vpermpd_avx2(auVar217,0xaa);
          auVar52 = vpermpd_avx2(auVar238,0x55);
          auVar55 = vpermpd_avx2(auVar238,0xaa);
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1e) + lVar20);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x22) + lVar20);
          auVar218._0_8_ = param_1 * *pdVar3 + *pdVar4;
          auVar218._8_8_ = param_1 * pdVar3[1] + pdVar4[1];
          auVar218._16_8_ =
               param_1 * *(double *)(*(longlong *)(param_2 + 0x1e) + 0x10 + lVar20) +
               *(double *)(*(longlong *)(param_2 + 0x22) + 0x10 + lVar20);
          auVar218._24_8_ = param_1 * 0.0 + 0.0;
          auVar56 = vpermpd_avx2(auVar218,0x55);
          auVar57 = vpermpd_avx2(auVar218,0xaa);
          auVar109._0_8_ =
               (dVar154 * auVar55._0_8_ + dVar200 * auVar238._0_8_ + dVar254 * auVar52._0_8_) *
               auVar57._0_8_ +
               (dVar154 * auVar54._0_8_ + dVar200 * auVar174._0_8_ + dVar254 * auVar53._0_8_) *
               auVar218._0_8_ +
               (dVar154 * auVar97._0_8_ + dVar200 * auVar217._0_8_ + dVar254 * auVar59._0_8_) *
               auVar56._0_8_;
          auVar109._8_8_ =
               (dVar155 * auVar55._8_8_ + dVar207 * auVar238._0_8_ + dVar23 * auVar52._8_8_) *
               auVar57._8_8_ +
               (dVar155 * auVar54._8_8_ + dVar207 * auVar174._0_8_ + dVar23 * auVar53._8_8_) *
               auVar218._0_8_ +
               (dVar155 * auVar97._8_8_ + dVar207 * auVar217._0_8_ + dVar23 * auVar59._8_8_) *
               auVar56._8_8_;
          auVar309._16_8_ =
               (dVar156 * auVar55._16_8_ + dVar252 * auVar238._0_8_ + auVar24._0_8_ * auVar52._16_8_
               ) * auVar57._16_8_ +
               (dVar156 * auVar54._16_8_ + dVar252 * auVar174._0_8_ + auVar24._0_8_ * auVar53._16_8_
               ) * auVar218._0_8_ +
               (dVar156 * auVar97._16_8_ + dVar252 * auVar217._0_8_ + auVar24._0_8_ * auVar59._16_8_
               ) * auVar56._16_8_;
          auVar309._0_16_ = auVar109;
          auVar309._24_8_ =
               (dVar106 * auVar55._24_8_ + dVar249 * auVar238._0_8_ + auVar24._8_8_ * auVar52._24_8_
               ) * auVar57._24_8_ +
               (dVar106 * auVar54._24_8_ + dVar249 * auVar174._0_8_ + auVar24._8_8_ * auVar53._24_8_
               ) * auVar218._0_8_ +
               (dVar106 * auVar97._24_8_ + dVar249 * auVar217._0_8_ + auVar24._8_8_ * auVar59._24_8_
               ) * auVar56._24_8_;
          dVar154 = *param_4;
          lVar9 = *(longlong *)(param_2 + 0xc);
          if (dVar154 <= __real_0000000000000000) {
            auVar164 = vshufpd_avx(auVar109,auVar109,1);
            local_318 = auVar309._16_16_;
            auVar320._8_8_ = 0;
            auVar320._0_8_ = *(ulonglong *)(lVar9 + lVar20);
            dVar155 = *(double *)(lVar9 + 8 + lVar20);
            auVar81._8_8_ = 0;
            auVar81._0_8_ = *(ulonglong *)(lVar9 + 0x10 + lVar20);
            auVar234 = ZEXT816(0) << 0x40;
            auVar110 = ZEXT816(0) << 0x40;
            auVar163 = ZEXT816(0) << 0x40;
            auVar305 = ZEXT816(0) << 0x40;
            auVar83 = ZEXT816(0) << 0x40;
            auVar166 = ZEXT816(0) << 0x40;
          }
          else {
            dVar252 = param_4[2] + param_4[2];
            auVar320._8_8_ = 0;
            auVar320._0_8_ = *(double *)(lVar9 + lVar20);
            dVar155 = *(double *)(lVar9 + 8 + lVar20);
            auVar81._8_8_ = 0;
            auVar81._0_8_ = *(ulonglong *)(lVar9 + 0x10 + lVar20);
            auVar110 = vunpcklpd_avx(auVar81,auVar320);
            auVar83 = *(undefined1 (*) [16])(lVar9 + 8 + lVar20);
            local_1a8 = auVar13._0_8_;
            dStack_1a0 = auVar13._8_8_;
            dStack_198 = auVar79._0_8_;
            dStack_190 = auVar79._8_8_;
            local_188 = auVar12._0_8_;
            dStack_180 = auVar12._8_8_;
            dStack_178 = auVar78._0_8_;
            dStack_170 = auVar78._8_8_;
            auVar59 = vpermpd_avx2(auVar327,0xc9);
            local_1c8 = auVar14._0_8_;
            dStack_1c0 = auVar14._8_8_;
            dStack_1b8 = auVar77._0_8_;
            dStack_1b0 = auVar77._8_8_;
            auVar219._0_8_ = local_1c8 * auVar59._0_8_ - local_188 * auVar327._0_8_;
            auVar219._8_8_ = dStack_1c0 * auVar59._8_8_ - dStack_180 * auVar327._8_8_;
            auVar219._16_8_ = dStack_1b8 * auVar59._16_8_ - dStack_178 * auVar327._16_8_;
            auVar219._24_8_ = dStack_1b0 * auVar59._24_8_ - dStack_170 * auVar327._24_8_;
            auVar97 = vpermpd_avx2(auVar219,0xd2);
            auVar52 = vpermpd_avx2(auVar219,0xc9);
            auVar220._0_8_ = local_1c8 * auVar97._0_8_ - local_188 * auVar52._0_8_;
            auVar220._8_8_ = dStack_1c0 * auVar97._8_8_ - dStack_180 * auVar52._8_8_;
            auVar220._16_8_ = dStack_1b8 * auVar97._16_8_ - dStack_178 * auVar52._16_8_;
            auVar220._24_8_ = dStack_1b0 * auVar97._24_8_ - dStack_170 * auVar52._24_8_;
            dVar156 = param_4[3];
            auVar97 = vpermpd_avx2(auVar220,0xc9);
            local_208 = auVar294._0_8_;
            dStack_200 = auVar294._8_8_;
            dStack_1f8 = auVar160._0_8_;
            dStack_1f0 = auVar160._8_8_;
            local_1e8 = auVar15._0_8_;
            dStack_1e0 = auVar15._8_8_;
            dStack_1d8 = auVar204._0_8_;
            dStack_1d0 = auVar204._8_8_;
            auVar279._0_8_ = local_1e8 * auVar59._0_8_ - auVar327._0_8_ * local_208;
            auVar279._8_8_ = dStack_1e0 * auVar59._8_8_ - auVar327._8_8_ * dStack_200;
            auVar279._16_8_ = dStack_1d8 * auVar59._16_8_ - auVar327._16_8_ * dStack_1f8;
            auVar279._24_8_ = dStack_1d0 * auVar59._24_8_ - auVar327._24_8_ * dStack_1f0;
            dVar106 = param_4[1];
            local_248 = auVar264._0_8_;
            dStack_240 = auVar264._8_8_;
            dStack_238 = auVar250._0_8_;
            dStack_230 = auVar250._8_8_;
            local_228 = auVar304._0_8_;
            dStack_220 = auVar304._8_8_;
            dStack_210 = auVar206._8_8_;
            dVar200 = param_4[4];
            auVar59 = vpermpd_avx2(auVar279,0xc9);
            dVar207 = param_4[5];
            auVar251 = vunpcklpd_avx(auVar161,auVar251);
            auVar161._0_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar59._0_8_ +
                            dVar156 * auVar97._0_8_ +
                            (local_188 * auVar110._0_8_ - auVar83._0_8_ * local_1a8) * dVar252 +
                            dVar106 * local_228 + local_248 * param_4[8])) + auVar251._0_8_;
            auVar161._8_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar59._8_8_ +
                            dVar156 * auVar97._8_8_ +
                            (dStack_180 * auVar110._8_8_ - auVar83._8_8_ * dStack_1a0) * dVar252 +
                            dVar106 * dStack_220 + dStack_240 * param_4[9])) + auVar251._8_8_;
            auVar296._16_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar59._16_8_ +
                            dVar156 * auVar97._16_8_ +
                            (dStack_178 * dVar155 - *(double *)(lVar9 + lVar20) * dStack_198) *
                            dVar252 + dVar106 * auVar206._0_8_ + dStack_238 * param_4[10])) +
                 auVar205._0_8_;
            auVar296._0_16_ = auVar161;
            auVar296._24_8_ =
                 -(param_1 *
                  dVar154 * (dVar200 * auVar59._24_8_ +
                            dVar156 * auVar97._24_8_ +
                            (dStack_170 * 0.0 - dStack_190 * 0.0) * dVar252 +
                            dVar106 * dStack_210 + dStack_230 * 0.0)) + auVar205._8_8_;
            auVar251 = vshufpd_avx(auVar161,auVar161,1);
            auVar205 = auVar296._16_16_;
            auVar109._0_8_ = -(param_1 * dVar154 * local_1e8 * dVar207) + auVar109._0_8_;
            auVar109._8_8_ = -(param_1 * dVar154 * dStack_1e0 * dVar207) + auVar109._8_8_;
            auVar121._16_8_ = -(param_1 * dVar154 * dStack_1d8 * dVar207) + auVar309._16_8_;
            auVar121._0_16_ = auVar109;
            auVar121._24_8_ = -(param_1 * dVar154 * dStack_1d0 * dVar207) + auVar309._24_8_;
            auVar164 = vshufpd_avx(auVar109,auVar109,1);
            local_318 = auVar121._16_16_;
            dVar156 = (double)((ulonglong)dVar154 ^ __xmm_80000000000000008000000000000000) *
                      param_4[6];
            auVar305._0_8_ = local_248 * dVar156;
            auVar305._8_8_ = dStack_240 * dVar156;
            auVar307._16_8_ = dStack_238 * dVar156;
            auVar307._0_16_ = auVar305;
            auVar307._24_8_ = dStack_230 * dVar156;
            auVar83 = vshufpd_avx(auVar305,auVar305,1);
            auVar166 = auVar307._16_16_;
            dVar154 = (double)((ulonglong)dVar154 ^ __xmm_80000000000000008000000000000000) *
                      param_4[7];
            auVar234._0_8_ = local_1c8 * dVar154;
            auVar234._8_8_ = dStack_1c0 * dVar154;
            auVar239._16_8_ = dStack_1b8 * dVar154;
            auVar239._0_16_ = auVar234;
            auVar239._24_8_ = dStack_1b0 * dVar154;
            auVar110 = vshufpd_avx(auVar234,auVar234,1);
            auVar163 = auVar239._16_16_;
          }
          auVar18._8_8_ = 0;
          auVar18._0_8_ = dVar155;
          auVar110 = vunpcklpd_avx(auVar234,auVar110);
          auVar164 = vunpcklpd_avx(auVar109,auVar164);
          auVar83 = vunpcklpd_avx(auVar305,auVar83);
          auVar251 = vunpcklpd_avx(auVar161,auVar251);
          auVar214 = vunpcklpd_avx(auVar320,auVar18);
          auVar122._0_8_ = auVar214._0_8_ + auVar251._0_8_;
          auVar122._8_8_ = auVar214._8_8_ + auVar251._8_8_;
          auVar122._16_8_ = auVar81._0_8_ + auVar205._0_8_;
          auVar122._24_8_ = auVar81._8_8_ + auVar205._8_8_;
          auVar88._16_16_ = auVar166;
          auVar88._0_16_ = auVar83;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x10) + lVar20);
          auVar265._8_8_ = 0;
          auVar265._0_8_ = __real_3ff0000000000000;
          auVar275._8_8_ = 0;
          auVar275._0_8_ = param_1 * *(double *)(*(longlong *)(param_2 + 0x2a) + lVar21 * 8);
          auVar251 = vminsd_avx(auVar265,auVar275);
          auVar221._0_8_ = auVar164._0_8_ + *pdVar3;
          auVar221._8_8_ = auVar164._8_8_ + pdVar3[1];
          auVar221._16_8_ =
               local_318._0_8_ + *(double *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar20);
          auVar221._24_8_ = local_318._8_8_ + 0.0;
          auVar39._16_16_ = auVar163;
          auVar39._0_16_ = auVar110;
          auVar59 = vsubpd_avx(auVar39,auVar221);
          dVar154 = auVar251._0_8_;
          auVar25._0_8_ = auVar59._0_8_ * dVar154 + auVar221._0_8_;
          auVar25._8_8_ = auVar59._8_8_ * dVar154 + auVar221._8_8_;
          auVar40._16_8_ = auVar59._16_8_ * dVar154 + auVar221._16_8_;
          auVar40._0_16_ = auVar25;
          auVar40._24_8_ = auVar59._24_8_ * dVar154 + auVar221._24_8_;
          auVar97 = vpermpd_avx2(auVar256,0x1b);
          auVar53 = vpermpd_avx2(auVar40,0x55);
          auVar54 = vpermpd_avx2(auVar256,0x4e);
          auVar55 = vpermpd_avx2(auVar40,0xaa);
          auVar59 = vshufpd_avx(auVar256,auVar256,5);
          auVar276._8_8_ = 0;
          auVar276._0_8_ = param_1 * *(double *)(*(longlong *)(param_2 + 0x28) + lVar21 * 8);
          auVar251 = vminsd_avx(auVar265,auVar276);
          auVar52 = vsubpd_avx(auVar88,auVar122);
          dVar154 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                     auVar59._0_8_ * auVar55._0_8_ +
                    ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                    auVar54._0_8_ * auVar53._0_8_ +
                    auVar256._0_8_ * 0.0 +
                    auVar97._0_8_ * auVar25._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                    dVar107 + auVar256._0_8_;
          dVar155 = (_UNK_150b54428 * auVar59._8_8_ * auVar55._8_8_ +
                    _UNK_150b54408 * auVar54._8_8_ * auVar53._8_8_ +
                    auVar256._8_8_ * 0.0 + auVar97._8_8_ * auVar25._0_8_ * _UNK_15076c6f8) * dVar107
                    + auVar256._8_8_;
          dVar156 = (_UNK_150b54430 * auVar59._16_8_ * auVar55._16_8_ +
                    _UNK_150b54410 * auVar54._16_8_ * auVar53._16_8_ +
                    auVar256._16_8_ * 0.0 +
                    auVar97._16_8_ * auVar25._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                    dVar107 + auVar256._16_8_;
          dVar106 = (_UNK_150b54438 * auVar59._24_8_ * auVar55._24_8_ +
                    _UNK_150b54418 * auVar54._24_8_ * auVar53._24_8_ +
                    auVar256._24_8_ * 0.0 + auVar97._24_8_ * auVar25._0_8_ * _UNK_15076c6f8) *
                    dVar107 + auVar256._24_8_;
          auVar89._0_8_ = dVar154 * dVar154;
          auVar89._8_8_ = dVar155 * dVar155;
          auVar89._16_8_ = dVar156 * dVar156;
          auVar89._24_8_ = dVar106 * dVar106;
          auVar59 = vpermpd_avx2(auVar89,0x4e);
          auVar90._0_8_ = auVar89._0_8_ + auVar59._0_8_;
          auVar90._8_8_ = auVar89._8_8_ + auVar59._8_8_;
          auVar90._16_8_ = auVar89._16_8_ + auVar59._16_8_;
          auVar90._24_8_ = auVar89._24_8_ + auVar59._24_8_;
          auVar59 = vpermpd_avx2(auVar90,0x39);
          auVar240._0_8_ = auVar90._0_8_ + auVar59._0_8_;
          auVar240._8_8_ = auVar90._8_8_ + auVar59._8_8_;
          auVar240._16_8_ = auVar90._16_8_ + auVar59._16_8_;
          auVar240._24_8_ = auVar90._24_8_ + auVar59._24_8_;
          auVar91._8_8_ = __real_3e45798ee2308c3a;
          auVar91._0_8_ = __real_3e45798ee2308c3a;
          auVar91._16_8_ = __real_3e45798ee2308c3a;
          auVar91._24_8_ = __real_3e45798ee2308c3a;
          auVar59 = vcmppd_avx(auVar91,auVar240,2);
          auVar59 = vpshufb_avx2(auVar59,
                                 ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                                );
          auVar59 = vblendvps_avx(ZEXT832(0) << 0x40,
                                  ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                  ,auVar59);
          dVar200 = auVar251._0_8_;
          auVar97 = vsqrtpd_avx(auVar240);
          auVar82._0_8_ = auVar52._0_8_ * dVar200 + auVar122._0_8_;
          auVar82._8_8_ = auVar52._8_8_ * dVar200 + auVar122._8_8_;
          auVar92._16_8_ = auVar52._16_8_ * dVar200 + auVar122._16_8_;
          auVar92._0_16_ = auVar82;
          auVar92._24_8_ = auVar52._24_8_ * dVar200 + auVar122._24_8_;
          auVar97 = vdivpd_avx(auVar173,auVar97);
          dVar154 = dVar154 * auVar97._0_8_;
          dVar155 = dVar155 * auVar97._8_8_;
          dVar156 = dVar156 * auVar97._16_8_;
          dVar106 = dVar106 * auVar97._24_8_;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + lVar22);
          auVar222._0_8_ =
               ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar3;
          auVar222._8_8_ = _UNK_150b543c8 * pdVar3[1];
          auVar222._16_8_ = _UNK_150b543d0 * pdVar3[2];
          auVar222._24_8_ = _UNK_150b543d8 * pdVar3[3];
          auVar123._0_8_ =
               (double)CONCAT44(auVar59._4_4_ & (uint)((ulonglong)dVar154 >> 0x20),
                                auVar59._0_4_ & SUB84(dVar154,0));
          auVar123._8_4_ = auVar59._8_4_ & SUB84(dVar155,0);
          auVar123._12_4_ = auVar59._12_4_ & (uint)((ulonglong)dVar155 >> 0x20);
          auVar123._16_4_ = auVar59._16_4_ & SUB84(dVar156,0);
          auVar123._20_4_ = auVar59._20_4_ & (uint)((ulonglong)dVar156 >> 0x20);
          auVar123._24_4_ = auVar59._24_4_ & SUB84(dVar106,0);
          auVar123._28_4_ = auVar59._28_4_ & (uint)((ulonglong)dVar106 >> 0x20);
          auVar97 = vpermpd_avx2(auVar222,0x1b);
          auVar52 = vpermpd_avx2(auVar123,0xff);
          auVar53 = vpermpd_avx2(auVar123,0x55);
          auVar54 = vpermpd_avx2(auVar222,0x4e);
          auVar55 = vpermpd_avx2(auVar123,0xaa);
          auVar59 = vshufpd_avx(auVar222,auVar222,5);
          auVar124._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar59._0_8_ * auVar55._0_8_ +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar54._0_8_ * auVar53._0_8_ +
               auVar222._0_8_ * auVar52._0_8_ +
               auVar97._0_8_ * auVar123._0_8_ * ___xmm_bff00000000000003ff0000000000000;
          auVar124._8_8_ =
               _UNK_150b54428 * auVar59._8_8_ * auVar55._8_8_ +
               _UNK_150b54408 * auVar54._8_8_ * auVar53._8_8_ +
               auVar222._8_8_ * auVar52._8_8_ + auVar97._8_8_ * auVar123._0_8_ * _UNK_15076c6f8;
          auVar124._16_8_ =
               _UNK_150b54430 * auVar59._16_8_ * auVar55._16_8_ +
               _UNK_150b54410 * auVar54._16_8_ * auVar53._16_8_ +
               auVar222._16_8_ * auVar52._16_8_ +
               auVar97._16_8_ * auVar123._0_8_ * ___xmm_bff00000000000003ff0000000000000;
          auVar124._24_8_ =
               _UNK_150b54438 * auVar59._24_8_ * auVar55._24_8_ +
               _UNK_150b54418 * auVar54._24_8_ * auVar53._24_8_ +
               auVar222._24_8_ * auVar52._24_8_ + auVar97._24_8_ * auVar123._0_8_ * _UNK_15076c6f8;
          lVar9 = *(longlong *)(param_2 + 0x14);
          dVar155 = *(double *)(lVar9 + lVar20);
          dVar156 = ((double *)(lVar9 + lVar20))[1];
          pdVar3 = (double *)(lVar9 + 8 + lVar20);
          auVar59 = vpermpd_avx2(auVar124,0xc9);
          dVar154 = *(double *)(lVar9 + 0x10 + lVar20);
          dVar106 = auVar124._0_8_ * *pdVar3 - dVar155 * auVar59._0_8_;
          dVar200 = auVar124._8_8_ * pdVar3[1] - dVar156 * auVar59._8_8_;
          dVar207 = auVar124._16_8_ * *(double *)(lVar9 + lVar20) - dVar154 * auVar59._16_8_;
          dVar252 = auVar124._24_8_ * 0.0 - auVar59._24_8_ * 0.0;
          auVar175._0_8_ = dVar106 + dVar106;
          auVar175._8_8_ = dVar200 + dVar200;
          auVar175._16_8_ = dVar207 + dVar207;
          auVar175._24_8_ = dVar252 + dVar252;
          auVar59 = vpermpd_avx2(auVar175,0xc9);
          auVar97 = vpermpd_avx2(auVar124,0xff);
          auVar52 = vpermpd_avx2(auVar175,0xd2);
          auVar176._0_8_ = auVar124._0_8_ * auVar175._0_8_;
          auVar176._8_8_ = auVar124._8_8_ * auVar175._8_8_;
          auVar176._16_8_ = auVar124._16_8_ * auVar175._16_8_;
          auVar176._24_8_ = auVar124._24_8_ * auVar175._24_8_;
          auVar53 = vpermpd_avx2(auVar176,0xc9);
          auVar177._0_8_ = auVar124._0_8_ * auVar52._0_8_ - auVar53._0_8_;
          auVar177._8_8_ = auVar124._8_8_ * auVar52._8_8_ - auVar53._8_8_;
          auVar177._16_8_ = auVar124._16_8_ * auVar52._16_8_ - auVar53._16_8_;
          auVar177._24_8_ = auVar124._24_8_ * auVar52._24_8_ - auVar53._24_8_;
          auVar52 = vpermpd_avx2(auVar177,0xc9);
          auVar178._0_8_ = auVar59._0_8_ * auVar97._0_8_ + dVar155 + auVar52._0_8_;
          auVar178._8_8_ = auVar59._8_8_ * auVar97._8_8_ + dVar156 + auVar52._8_8_;
          auVar178._16_8_ = auVar59._16_8_ * auVar97._16_8_ + dVar154 + auVar52._16_8_;
          auVar178._24_8_ = auVar59._24_8_ * auVar97._24_8_ + 0.0 + auVar52._24_8_;
          auVar328._0_8_ = auVar82._0_8_ * param_1 + auVar327._0_8_;
          auVar328._8_8_ = auVar82._8_8_ * param_1 + auVar327._8_8_;
          auVar328._16_8_ = auVar92._16_8_ * param_1 + auVar327._16_8_;
          auVar328._24_8_ = auVar92._24_8_ * param_1 + auVar327._24_8_;
          auVar59 = vsubpd_avx(auVar328,auVar178);
          lVar9 = *(longlong *)(param_2 + 6);
          *(undefined1 (*) [16])(lVar9 + lVar20) = auVar59._0_16_;
          uVar5 = vmovlpd_avx(auVar59._16_16_);
          *(undefined8 *)(lVar9 + 0x10 + lVar20) = uVar5;
          lVar10 = *(longlong *)(param_2 + 10);
          *(undefined1 (*) [32])(lVar10 + lVar22) = auVar124;
          lVar11 = *(longlong *)(param_2 + 0xc);
          *(undefined1 (*) [16])(lVar11 + lVar20) = auVar82;
          uVar5 = vmovlpd_avx(auVar92._16_16_);
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = uVar5;
          lVar11 = *(longlong *)(param_2 + 0x10);
          *(undefined1 (*) [16])(lVar11 + lVar20) = auVar25;
          uVar5 = vmovlpd_avx(auVar40._16_16_);
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = uVar5;
          lVar11 = *(longlong *)(param_2 + 0x20);
          puVar1 = (undefined8 *)(lVar11 + lVar20);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = 0;
          lVar11 = *(longlong *)(param_2 + 0x22);
          puVar1 = (undefined8 *)(lVar11 + lVar20);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar20) = 0;
          if (*(char *)(*(longlong *)(param_2 + 0x2c) + lVar21) != '\0') {
            lVar11 = *(longlong *)(param_2 + 0x2e);
            auVar251 = *(undefined1 (*) [16])(lVar11 + 0x18 + lVar20 * 2);
            dVar154 = *(double *)(lVar11 + 0x28 + lVar20 * 2);
            auVar280._16_8_ = dVar154;
            auVar280._0_16_ = auVar251;
            auVar280._24_8_ = 0;
            auVar205 = *(undefined1 (*) [16])(lVar11 + lVar20 * 2);
            dVar155 = *(double *)(lVar11 + 0x10 + lVar20 * 2);
            auVar287._16_8_ = dVar155;
            auVar287._0_16_ = auVar205;
            auVar287._24_8_ = 0;
            auVar52 = vsubpd_avx(auVar280,auVar287);
            auVar53 = vpermpd_avx2(auVar287,0xc9);
            dVar156 = *(double *)(lVar10 + 0x10 + lVar22);
            auVar83 = *(undefined1 (*) [16])(lVar10 + lVar22);
            auVar110 = *(undefined1 (*) [16])(lVar10 + 8 + lVar22);
            auVar257._16_8_ = dVar156;
            auVar257._0_16_ = auVar83;
            auVar257._24_8_ = 0;
            dVar106 = *(double *)(lVar10 + 0x18 + lVar22);
            auVar310._8_8_ = dVar106;
            auVar310._0_8_ = dVar106;
            auVar310._16_8_ = dVar106;
            auVar310._24_8_ = dVar106;
            auVar59 = vblendpd_avx(auVar257,auVar310,8);
            dVar200 = *(double *)(lVar10 + lVar22);
            auVar329._16_8_ = dVar200;
            auVar329._0_16_ = auVar110;
            auVar329._24_8_ = 0;
            auVar97 = vblendpd_avx(auVar329,auVar310,8);
            dVar207 = auVar97._0_8_;
            dVar285 = auVar205._0_8_;
            dVar252 = auVar97._8_8_;
            dVar293 = auVar205._8_8_;
            dVar249 = auVar97._16_8_;
            dVar254 = auVar97._24_8_;
            dVar319 = auVar59._0_8_;
            dVar157 = dVar319 * auVar53._0_8_ - dVar285 * dVar207;
            dVar324 = auVar59._8_8_;
            dVar197 = dVar324 * auVar53._8_8_ - dVar293 * dVar252;
            dVar325 = auVar59._16_8_;
            dVar201 = dVar325 * auVar53._16_8_ - dVar155 * dVar249;
            dVar326 = auVar59._24_8_;
            dVar208 = dVar326 * auVar53._24_8_ - dVar254 * 0.0;
            auVar59 = vpermpd_avx2(auVar280,0xc9);
            dVar158 = dVar319 * auVar59._0_8_ - auVar251._0_8_ * dVar207;
            dVar198 = dVar324 * auVar59._8_8_ - auVar251._8_8_ * dVar252;
            dVar202 = dVar325 * auVar59._16_8_ - dVar154 * dVar249;
            dVar209 = dVar326 * auVar59._24_8_ - dVar254 * 0.0;
            dVar23 = auVar52._0_8_;
            auVar93._0_8_ = dVar23 * __real_3ff0000000000000;
            dVar76 = auVar52._8_8_;
            auVar93._8_8_ = dVar76 * 0.0;
            dVar263 = auVar52._16_8_;
            auVar93._16_8_ = dVar263 * 0.0;
            dVar270 = auVar52._24_8_;
            auVar93._24_8_ = dVar270 * 0.0;
            auVar179._0_8_ = dVar285 + auVar93._0_8_;
            auVar179._8_8_ = dVar293 + auVar93._8_8_;
            auVar179._16_8_ = dVar155 + auVar93._16_8_;
            auVar179._24_8_ = auVar93._24_8_ + 0.0;
            auVar59 = vblendpd_avx(auVar179,ZEXT832(0) << 0x40,8);
            auVar97 = vpermpd_avx2(auVar59,0xc9);
            dVar262 = dVar319 * auVar97._0_8_ - dVar207 * auVar59._0_8_;
            dVar269 = dVar324 * auVar97._8_8_ - dVar252 * auVar59._8_8_;
            dVar271 = dVar325 * auVar97._16_8_ - dVar249 * auVar59._16_8_;
            dVar273 = dVar326 * auVar97._24_8_ - dVar254 * auVar59._24_8_;
            auVar97 = vsubpd_avx(auVar280,auVar93);
            auVar97 = vblendpd_avx(auVar97,ZEXT832(0) << 0x40,8);
            auVar52 = vpermpd_avx2(auVar97,0xc9);
            dVar159 = dVar319 * auVar52._0_8_ - dVar207 * auVar97._0_8_;
            dVar199 = dVar324 * auVar52._8_8_ - dVar252 * auVar97._8_8_;
            dVar203 = dVar325 * auVar52._16_8_ - dVar249 * auVar97._16_8_;
            dVar210 = dVar326 * auVar52._24_8_ - dVar254 * auVar97._24_8_;
            auVar94._0_8_ =
                 dVar23 * ___ymm_000000000000000000000000000000003ff00000000000000000000000000000;
            auVar94._8_8_ = dVar76 * _UNK_150aa8e68;
            auVar94._16_8_ = dVar263 * _UNK_150aa8e70;
            auVar94._24_8_ = dVar270 * _UNK_150aa8e78;
            auVar180._0_8_ = dVar285 + auVar94._0_8_;
            auVar180._8_8_ = dVar293 + auVar94._8_8_;
            auVar180._16_8_ = dVar155 + auVar94._16_8_;
            auVar180._24_8_ = auVar94._24_8_ + 0.0;
            auVar56 = ZEXT832(0) << 0x40;
            auVar52 = vblendpd_avx(auVar180,auVar56,8);
            auVar53 = vpermpd_avx2(auVar52,0xc9);
            dVar231 = dVar319 * auVar53._0_8_ - dVar207 * auVar52._0_8_;
            dVar247 = dVar324 * auVar53._8_8_ - dVar252 * auVar52._8_8_;
            dVar248 = dVar325 * auVar53._16_8_ - dVar249 * auVar52._16_8_;
            dVar253 = dVar326 * auVar53._24_8_ - dVar254 * auVar52._24_8_;
            auVar53 = vsubpd_avx(auVar280,auVar94);
            auVar53 = vblendpd_avx(auVar53,auVar56,8);
            auVar54 = vpermpd_avx2(auVar53,0xc9);
            dVar313 = dVar319 * auVar54._0_8_ - dVar207 * auVar53._0_8_;
            dVar316 = dVar324 * auVar54._8_8_ - dVar252 * auVar53._8_8_;
            dVar317 = dVar325 * auVar54._16_8_ - dVar249 * auVar53._16_8_;
            dVar318 = dVar326 * auVar54._24_8_ - dVar254 * auVar53._24_8_;
            auVar41._0_8_ =
                 dVar23 * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
            auVar41._8_8_ = dVar76 * _UNK_150aa8e88;
            auVar41._16_8_ = dVar263 * _DAT_150aa8e90;
            auVar41._24_8_ = dVar270 * _UNK_150aa8e98;
            auVar95._0_8_ = dVar285 + auVar41._0_8_;
            auVar95._8_8_ = dVar293 + auVar41._8_8_;
            auVar95._16_8_ = dVar155 + auVar41._16_8_;
            auVar95._24_8_ = auVar41._24_8_ + 0.0;
            auVar54 = vblendpd_avx(auVar95,auVar56,8);
            auVar55 = vpermpd_avx2(auVar54,0xc9);
            dVar263 = dVar319 * auVar55._0_8_ - dVar207 * auVar54._0_8_;
            dVar270 = dVar324 * auVar55._8_8_ - dVar252 * auVar54._8_8_;
            dVar272 = dVar325 * auVar55._16_8_ - dVar249 * auVar54._16_8_;
            dVar274 = dVar326 * auVar55._24_8_ - dVar254 * auVar54._24_8_;
            auVar55 = vsubpd_avx(auVar280,auVar41);
            auVar55 = vblendpd_avx(auVar55,auVar56,8);
            auVar56 = vpermpd_avx2(auVar55,0xc9);
            dVar207 = dVar319 * auVar56._0_8_ - auVar55._0_8_ * dVar207;
            dVar252 = dVar324 * auVar56._8_8_ - auVar55._8_8_ * dVar252;
            dVar249 = dVar325 * auVar56._16_8_ - auVar55._16_8_ * dVar249;
            dVar254 = dVar326 * auVar56._24_8_ - auVar55._24_8_ * dVar254;
            auVar42._0_8_ = dVar157 + dVar157;
            auVar42._8_8_ = dVar197 + dVar197;
            auVar42._16_8_ = dVar201 + dVar201;
            auVar42._24_8_ = dVar208 + dVar208;
            auVar56 = vpermpd_avx2(auVar42,0xc9);
            dVar157 = auVar110._0_8_;
            dVar197 = auVar110._8_8_;
            auVar57 = vpermpd_avx2(auVar42,0xd2);
            dVar23 = auVar83._0_8_;
            auVar322._0_8_ = dVar23 * auVar57._0_8_ - dVar157 * auVar56._0_8_;
            dVar76 = auVar83._8_8_;
            auVar322._8_8_ = dVar76 * auVar57._8_8_ - dVar197 * auVar56._8_8_;
            auVar322._16_8_ = dVar156 * auVar57._16_8_ - dVar200 * auVar56._16_8_;
            auVar322._24_8_ = auVar57._24_8_ * 0.0 - auVar56._24_8_ * 0.0;
            auVar43._0_8_ = dVar158 + dVar158;
            auVar43._8_8_ = dVar198 + dVar198;
            auVar43._16_8_ = dVar202 + dVar202;
            auVar43._24_8_ = dVar209 + dVar209;
            auVar57 = vpermpd_avx2(auVar43,0xc9);
            auVar58 = vpermpd_avx2(auVar43,0xd2);
            auVar258._0_8_ = dVar23 * auVar58._0_8_ - dVar157 * auVar57._0_8_;
            auVar258._8_8_ = dVar76 * auVar58._8_8_ - dVar197 * auVar57._8_8_;
            auVar258._16_8_ = dVar156 * auVar58._16_8_ - dVar200 * auVar57._16_8_;
            auVar258._24_8_ = auVar58._24_8_ * 0.0 - auVar57._24_8_ * 0.0;
            auVar44._0_8_ = dVar262 + dVar262;
            auVar44._8_8_ = dVar269 + dVar269;
            auVar44._16_8_ = dVar271 + dVar271;
            auVar44._24_8_ = dVar273 + dVar273;
            auVar58 = vpermpd_avx2(auVar44,0xc9);
            auVar182 = vpermpd_avx2(auVar44,0xd2);
            auVar297._0_8_ = dVar23 * auVar182._0_8_ - dVar157 * auVar58._0_8_;
            auVar297._8_8_ = dVar76 * auVar182._8_8_ - dVar197 * auVar58._8_8_;
            auVar297._16_8_ = dVar156 * auVar182._16_8_ - dVar200 * auVar58._16_8_;
            auVar297._24_8_ = auVar182._24_8_ * 0.0 - auVar58._24_8_ * 0.0;
            auVar45._0_8_ = dVar159 + dVar159;
            auVar45._8_8_ = dVar199 + dVar199;
            auVar45._16_8_ = dVar203 + dVar203;
            auVar45._24_8_ = dVar210 + dVar210;
            auVar182 = vpermpd_avx2(auVar45,0xc9);
            auVar183 = vpermpd_avx2(auVar45,0xd2);
            auVar281._0_8_ = dVar23 * auVar183._0_8_ - dVar157 * auVar182._0_8_;
            auVar281._8_8_ = dVar76 * auVar183._8_8_ - dVar197 * auVar182._8_8_;
            auVar281._16_8_ = dVar156 * auVar183._16_8_ - dVar200 * auVar182._16_8_;
            auVar281._24_8_ = auVar183._24_8_ * 0.0 - auVar182._24_8_ * 0.0;
            auVar46._0_8_ = dVar231 + dVar231;
            auVar46._8_8_ = dVar247 + dVar247;
            auVar46._16_8_ = dVar248 + dVar248;
            auVar46._24_8_ = dVar253 + dVar253;
            auVar183 = vpermpd_avx2(auVar46,0xc9);
            auVar242 = vpermpd_avx2(auVar46,0xd2);
            auVar181._0_8_ = dVar23 * auVar242._0_8_ - dVar157 * auVar183._0_8_;
            auVar181._8_8_ = dVar76 * auVar242._8_8_ - dVar197 * auVar183._8_8_;
            auVar181._16_8_ = dVar156 * auVar242._16_8_ - dVar200 * auVar183._16_8_;
            auVar181._24_8_ = auVar242._24_8_ * 0.0 - auVar183._24_8_ * 0.0;
            auVar47._0_8_ = dVar313 + dVar313;
            auVar47._8_8_ = dVar316 + dVar316;
            auVar47._16_8_ = dVar317 + dVar317;
            auVar47._24_8_ = dVar318 + dVar318;
            auVar242 = vpermpd_avx2(auVar47,0xc9);
            auVar288 = vpermpd_avx2(auVar47,0xd2);
            auVar314._0_8_ = dVar23 * auVar288._0_8_ - dVar157 * auVar242._0_8_;
            auVar314._8_8_ = dVar76 * auVar288._8_8_ - dVar197 * auVar242._8_8_;
            auVar314._16_8_ = dVar156 * auVar288._16_8_ - dVar200 * auVar242._16_8_;
            auVar314._24_8_ = auVar288._24_8_ * 0.0 - auVar242._24_8_ * 0.0;
            auVar48._0_8_ = dVar263 + dVar263;
            auVar48._8_8_ = dVar270 + dVar270;
            auVar48._16_8_ = dVar272 + dVar272;
            auVar48._24_8_ = dVar274 + dVar274;
            auVar288 = vpermpd_avx2(auVar48,0xc9);
            auVar289 = vpermpd_avx2(auVar48,0xd2);
            auVar267._0_8_ = dVar23 * auVar289._0_8_ - dVar157 * auVar288._0_8_;
            auVar267._8_8_ = dVar76 * auVar289._8_8_ - dVar197 * auVar288._8_8_;
            auVar267._16_8_ = dVar156 * auVar289._16_8_ - dVar200 * auVar288._16_8_;
            auVar267._24_8_ = auVar289._24_8_ * 0.0 - auVar288._24_8_ * 0.0;
            auVar49._0_8_ = dVar207 + dVar207;
            auVar49._8_8_ = dVar252 + dVar252;
            auVar49._16_8_ = dVar249 + dVar249;
            auVar49._24_8_ = dVar254 + dVar254;
            auVar289 = vpermpd_avx2(auVar49,0xc9);
            auVar290 = vpermpd_avx2(auVar49,0xd2);
            auVar241._0_8_ = dVar23 * auVar290._0_8_ - dVar157 * auVar289._0_8_;
            auVar241._8_8_ = dVar76 * auVar290._8_8_ - dVar197 * auVar289._8_8_;
            auVar241._16_8_ = dVar156 * auVar290._16_8_ - dVar200 * auVar289._16_8_;
            auVar241._24_8_ = auVar290._24_8_ * 0.0 - auVar289._24_8_ * 0.0;
            auVar290 = vpermpd_avx2(auVar322,0xc9);
            dVar156 = *(double *)(lVar9 + 0x10 + lVar20);
            auVar205 = *(undefined1 (*) [16])(lVar9 + lVar20);
            auVar96._16_8_ = dVar156;
            auVar96._0_16_ = auVar205;
            auVar96._24_8_ = 0;
            dVar200 = auVar205._0_8_;
            auVar50._0_8_ = dVar200 + dVar106 * auVar56._0_8_ + dVar285 + auVar290._0_8_;
            dVar207 = auVar205._8_8_;
            auVar50._8_8_ = dVar207 + dVar106 * auVar56._8_8_ + dVar293 + auVar290._8_8_;
            auVar50._16_8_ = dVar156 + dVar106 * auVar56._16_8_ + dVar155 + auVar290._16_8_;
            auVar50._24_8_ = dVar106 * auVar56._24_8_ + 0.0 + auVar290._24_8_ + 0.0;
            auVar56 = vpermpd_avx2(auVar258,0xc9);
            auVar125._0_8_ = dVar200 + dVar106 * auVar57._0_8_ + auVar251._0_8_ + auVar56._0_8_;
            auVar125._8_8_ = dVar207 + dVar106 * auVar57._8_8_ + auVar251._8_8_ + auVar56._8_8_;
            auVar125._16_8_ = dVar156 + dVar106 * auVar57._16_8_ + dVar154 + auVar56._16_8_;
            auVar125._24_8_ = dVar106 * auVar57._24_8_ + 0.0 + auVar56._24_8_ + 0.0;
            auVar57 = vminpd_avx(auVar50,auVar125);
            auVar56 = vmaxpd_avx(auVar50,auVar125);
            auVar290 = vpermpd_avx2(auVar297,0xc9);
            auVar126._0_8_ = dVar200 + auVar290._0_8_ + dVar106 * auVar58._0_8_ + auVar59._0_8_;
            auVar126._8_8_ = dVar207 + auVar290._8_8_ + dVar106 * auVar58._8_8_ + auVar59._8_8_;
            auVar126._16_8_ = dVar156 + auVar290._16_8_ + dVar106 * auVar58._16_8_ + auVar59._16_8_;
            auVar126._24_8_ = auVar290._24_8_ + dVar106 * auVar58._24_8_ + auVar59._24_8_ + 0.0;
            auVar57 = vminpd_avx(auVar57,auVar126);
            auVar59 = vmaxpd_avx(auVar56,auVar126);
            auVar56 = vpermpd_avx2(auVar281,0xc9);
            auVar127._0_8_ = dVar200 + auVar56._0_8_ + dVar106 * auVar182._0_8_ + auVar97._0_8_;
            auVar127._8_8_ = dVar207 + auVar56._8_8_ + dVar106 * auVar182._8_8_ + auVar97._8_8_;
            auVar127._16_8_ = dVar156 + auVar56._16_8_ + dVar106 * auVar182._16_8_ + auVar97._16_8_;
            auVar127._24_8_ = auVar56._24_8_ + dVar106 * auVar182._24_8_ + auVar97._24_8_ + 0.0;
            auVar97 = vminpd_avx(auVar57,auVar127);
            auVar59 = vmaxpd_avx(auVar59,auVar127);
            auVar56 = vpermpd_avx2(auVar181,0xc9);
            auVar128._0_8_ = dVar200 + auVar56._0_8_ + dVar106 * auVar183._0_8_ + auVar52._0_8_;
            auVar128._8_8_ = dVar207 + auVar56._8_8_ + dVar106 * auVar183._8_8_ + auVar52._8_8_;
            auVar128._16_8_ = dVar156 + auVar56._16_8_ + dVar106 * auVar183._16_8_ + auVar52._16_8_;
            auVar128._24_8_ = auVar56._24_8_ + dVar106 * auVar183._24_8_ + auVar52._24_8_ + 0.0;
            auVar97 = vminpd_avx(auVar97,auVar128);
            auVar59 = vmaxpd_avx(auVar59,auVar128);
            auVar52 = vpermpd_avx2(auVar314,0xc9);
            auVar129._0_8_ = dVar200 + auVar52._0_8_ + dVar106 * auVar242._0_8_ + auVar53._0_8_;
            auVar129._8_8_ = dVar207 + auVar52._8_8_ + dVar106 * auVar242._8_8_ + auVar53._8_8_;
            auVar129._16_8_ = dVar156 + auVar52._16_8_ + dVar106 * auVar242._16_8_ + auVar53._16_8_;
            auVar129._24_8_ = auVar52._24_8_ + dVar106 * auVar242._24_8_ + auVar53._24_8_ + 0.0;
            auVar97 = vminpd_avx(auVar97,auVar129);
            auVar59 = vmaxpd_avx(auVar59,auVar129);
            auVar52 = vpermpd_avx2(auVar267,0xc9);
            auVar130._0_8_ = dVar200 + auVar52._0_8_ + dVar106 * auVar288._0_8_ + auVar54._0_8_;
            auVar130._8_8_ = dVar207 + auVar52._8_8_ + dVar106 * auVar288._8_8_ + auVar54._8_8_;
            auVar130._16_8_ = dVar156 + auVar52._16_8_ + dVar106 * auVar288._16_8_ + auVar54._16_8_;
            auVar130._24_8_ = auVar52._24_8_ + dVar106 * auVar288._24_8_ + auVar54._24_8_ + 0.0;
            auVar97 = vminpd_avx(auVar97,auVar130);
            auVar59 = vmaxpd_avx(auVar59,auVar130);
            auVar52 = vpermpd_avx2(auVar241,0xc9);
            auVar131._0_8_ = dVar200 + auVar289._0_8_ * dVar106 + auVar55._0_8_ + auVar52._0_8_;
            auVar131._8_8_ = dVar207 + auVar289._8_8_ * dVar106 + auVar55._8_8_ + auVar52._8_8_;
            auVar131._16_8_ = dVar156 + auVar289._16_8_ * dVar106 + auVar55._16_8_ + auVar52._16_8_;
            auVar131._24_8_ = auVar289._24_8_ * dVar106 + auVar55._24_8_ + auVar52._24_8_ + 0.0;
            auVar97 = vminpd_avx(auVar97,auVar131);
            auVar59 = vmaxpd_avx(auVar59,auVar131);
            auVar52 = vsubpd_avx(auVar59,auVar97);
            auVar132._0_8_ = auVar52._0_8_ * param_6;
            auVar132._8_8_ = auVar52._8_8_ * param_6;
            auVar132._16_8_ = auVar52._16_8_ * param_6;
            auVar132._24_8_ = auVar52._24_8_ * param_6;
            auVar52 = vsubpd_avx(auVar97,auVar132);
            auVar133._16_8_ = *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10 + lVar20);
            auVar133._0_16_ = *(undefined1 (*) [16])(*(longlong *)(param_2 + 4) + lVar20);
            auVar133._24_8_ = 0;
            auVar53 = vsubpd_avx(auVar133,auVar96);
            auVar97 = vminpd_avx(auVar53,ZEXT832(0) << 0x40);
            auVar134._0_8_ = auVar52._0_8_ + auVar97._0_8_;
            auVar134._8_8_ = auVar52._8_8_ + auVar97._8_8_;
            auVar134._16_8_ = auVar52._16_8_ + auVar97._16_8_;
            auVar134._24_8_ = auVar52._24_8_ + auVar97._24_8_;
            auVar97 = vmaxpd_avx(auVar53,ZEXT832(0) << 0x40);
            auVar52 = vsubpd_avx(auVar134,auVar37);
            auVar26._0_8_ = param_7 + auVar59._0_8_ + auVar132._0_8_ + auVar97._0_8_;
            auVar26._8_8_ = param_7 + auVar59._8_8_ + auVar132._8_8_ + auVar97._8_8_;
            auVar51._16_8_ = param_7 + auVar59._16_8_ + auVar132._16_8_ + auVar97._16_8_;
            auVar51._0_16_ = auVar26;
            auVar51._24_8_ = param_7 + auVar59._24_8_ + auVar132._24_8_ + auVar97._24_8_;
            auVar135._16_16_ = auVar26;
            auVar135._0_16_ = auVar52._0_16_;
            auVar59 = vshufpd_avx(auVar52,auVar135,2);
            lVar9 = *(longlong *)(param_2 + 0x30);
            *(undefined1 (*) [32])(lVar9 + lVar20 * 2) = auVar59;
            auVar59 = vpermpd_avx2(auVar51,0xe9);
            *(undefined1 (*) [16])(lVar9 + 0x20 + lVar20 * 2) = auVar59._0_16_;
          }
        }
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x18;
        lVar22 = lVar22 + 0x20;
      } while ((ulonglong)uVar6 * 0x18 != lVar20);
    }
  }
  return;
}

// SizeofFTransform_avx2 @ 1409d27e0

undefined8 SizeofFTransform_avx2(void)

{
  return 0x60;
}

// SizeofFAABB_avx2 @ 1409d27f0

undefined8 SizeofFAABB_avx2(void)

{
  return 0x30;
}

// SizeofFPBDRigidArrays_avx2 @ 1409d2800

undefined8 SizeofFPBDRigidArrays_avx2(void)

{
  return 200;
}

// SizeofFSimulationSpace_avx2 @ 1409d2810

undefined8 SizeofFSimulationSpace_avx2(void)

{
  return 0xc0;
}

// SizeofFSimulationSpaceSettings_avx2 @ 1409d2820

undefined8 SizeofFSimulationSpaceSettings_avx2(void)

{
  return 0x58;
}

// ValueOfEObjectStateTypeDynamic_avx2 @ 1409d2830

undefined8 ValueOfEObjectStateTypeDynamic_avx2(void)

{
  return 4;
}

// MinEvolutionIntegrate_avx2 @ 1409d2840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MinEvolutionIntegrate_avx2
               (double param_1,uint *param_2,double *param_3,double *param_4,double *param_5,
               double param_6,double param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar21 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar35 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar68;
  undefined1 auVar58 [32];
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auVar59 [32];
  double dVar65;
  double dVar66;
  double dVar69;
  double dVar73;
  double dVar74;
  undefined1 auVar61 [32];
  double dVar67;
  double dVar70;
  double dVar75;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  double dVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar99;
  double dVar100;
  double dVar103;
  undefined1 auVar80 [32];
  undefined1 auVar101 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar79 [16];
  undefined1 auVar102 [16];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar121;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar124;
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar107 [16];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  double dVar135;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  double dVar146;
  undefined1 auVar139 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  double dVar145;
  double dVar147;
  double dVar148;
  double dVar149;
  double dVar150;
  undefined1 auVar144 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar157 [16];
  double dVar155;
  double dVar156;
  double dVar165;
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  double dVar163;
  double dVar164;
  double dVar166;
  undefined1 auVar167 [16];
  double dVar168;
  double dVar169;
  undefined1 auVar162 [32];
  undefined1 auVar170 [16];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  double dVar175;
  undefined1 auVar176 [16];
  double dVar181;
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [16];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  double dVar189;
  double dVar191;
  double dVar192;
  double dVar193;
  undefined1 auVar190 [32];
  double dVar194;
  double dVar196;
  double dVar197;
  double dVar198;
  undefined1 auVar195 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 local_338 [16];
  double local_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double dStack_230;
  double local_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar49 [32];
  undefined1 auVar60 [32];
  undefined1 auVar81 [32];
  undefined1 auVar84 [32];
  undefined1 auVar110 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar140 [32];
  
  auVar104 = ZEXT816(0);
  auVar176 = ZEXT816(0);
  auVar122 = ZEXT816(0);
  auVar123 = ZEXT816(0);
  auVar170 = ZEXT816(0);
  auVar167 = ZEXT816(0);
  auVar53 = ZEXT816(0);
  auVar21 = ZEXT816(0);
  auVar71 = ZEXT816(0);
  auVar77 = ZEXT816(0);
  auVar136 = ZEXT816(0);
  auVar101 = ZEXT816(0);
  if (0.0 < *param_4) {
    auVar108._0_8_ =
         *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar108._8_8_ = param_3[1] * _UNK_150b543c8;
    auVar108._16_8_ = param_3[2] * _UNK_150b543d0;
    auVar108._24_8_ = param_3[3] * _UNK_150b543d8;
    auVar32 = vpermpd_avx2(auVar108,0xc9);
    dVar72 = auVar32._0_8_;
    dVar121 = auVar32._8_8_;
    dVar124 = auVar32._16_8_;
    dVar148 = auVar32._24_8_;
    dVar76 = auVar108._0_8_ * param_3[0x13] - dVar72 * param_3[0x12];
    dVar99 = auVar108._8_8_ * param_3[0x14] - dVar121 * param_3[0x13];
    dVar100 = auVar108._16_8_ * param_3[0x12] - dVar124 * param_3[0x14];
    dVar103 = auVar108._24_8_ * 0.0 - dVar148 * 0.0;
    auVar26._0_8_ = dVar76 + dVar76;
    auVar26._8_8_ = dVar99 + dVar99;
    auVar26._16_8_ = dVar100 + dVar100;
    auVar26._24_8_ = dVar103 + dVar103;
    auVar32 = vpermpd_avx2(auVar26,0xc9);
    auVar33 = vpermpd_avx2(auVar108,0xff);
    dVar147 = auVar33._0_8_;
    dVar150 = auVar33._8_8_;
    dVar50 = auVar33._16_8_;
    dVar51 = auVar33._24_8_;
    auVar33 = vpermpd_avx2(auVar26,0xd2);
    auVar27._0_8_ = auVar108._0_8_ * auVar26._0_8_;
    auVar27._8_8_ = auVar108._8_8_ * auVar26._8_8_;
    auVar27._16_8_ = auVar108._16_8_ * auVar26._16_8_;
    auVar27._24_8_ = auVar108._24_8_ * auVar26._24_8_;
    auVar26 = vpermpd_avx2(auVar27,0xc9);
    auVar28._0_8_ = auVar108._0_8_ * auVar33._0_8_ - auVar26._0_8_;
    auVar28._8_8_ = auVar108._8_8_ * auVar33._8_8_ - auVar26._8_8_;
    auVar28._16_8_ = auVar108._16_8_ * auVar33._16_8_ - auVar26._16_8_;
    auVar28._24_8_ = auVar108._24_8_ * auVar33._24_8_ - auVar26._24_8_;
    auVar33 = vpermpd_avx2(auVar28,0xc9);
    auVar77._0_8_ = dVar147 * auVar32._0_8_ + param_3[0x12] + auVar33._0_8_;
    auVar77._8_8_ = dVar150 * auVar32._8_8_ + param_3[0x13] + auVar33._8_8_;
    auVar80._16_8_ = dVar50 * auVar32._16_8_ + param_3[0x14] + auVar33._16_8_;
    auVar80._0_16_ = auVar77;
    auVar80._24_8_ = dVar51 * auVar32._24_8_ + 0.0 + auVar33._24_8_;
    auVar136 = vshufpd_avx(auVar77,auVar77,1);
    auVar101 = auVar80._16_16_;
    dVar76 = auVar108._0_8_ * param_3[0x16] - dVar72 * param_3[0x15];
    dVar99 = auVar108._8_8_ * param_3[0x17] - dVar121 * param_3[0x16];
    dVar100 = auVar108._16_8_ * param_3[0x15] - dVar124 * param_3[0x17];
    dVar103 = auVar108._24_8_ * 0.0 - dVar148 * 0.0;
    auVar29._0_8_ = dVar76 + dVar76;
    auVar29._8_8_ = dVar99 + dVar99;
    auVar29._16_8_ = dVar100 + dVar100;
    auVar29._24_8_ = dVar103 + dVar103;
    auVar32 = vpermpd_avx2(auVar29,0xc9);
    auVar33 = vpermpd_avx2(auVar29,0xd2);
    auVar30._0_8_ = auVar108._0_8_ * auVar29._0_8_;
    auVar30._8_8_ = auVar108._8_8_ * auVar29._8_8_;
    auVar30._16_8_ = auVar108._16_8_ * auVar29._16_8_;
    auVar30._24_8_ = auVar108._24_8_ * auVar29._24_8_;
    auVar26 = vpermpd_avx2(auVar30,0xc9);
    auVar31._0_8_ = auVar108._0_8_ * auVar33._0_8_ - auVar26._0_8_;
    auVar31._8_8_ = auVar108._8_8_ * auVar33._8_8_ - auVar26._8_8_;
    auVar31._16_8_ = auVar108._16_8_ * auVar33._16_8_ - auVar26._16_8_;
    auVar31._24_8_ = auVar108._24_8_ * auVar33._24_8_ - auVar26._24_8_;
    auVar33 = vpermpd_avx2(auVar31,0xc9);
    auVar53._0_8_ = dVar147 * auVar32._0_8_ + param_3[0x15] + auVar33._0_8_;
    auVar53._8_8_ = dVar150 * auVar32._8_8_ + param_3[0x16] + auVar33._8_8_;
    auVar58._16_8_ = dVar50 * auVar32._16_8_ + param_3[0x17] + auVar33._16_8_;
    auVar58._0_16_ = auVar53;
    auVar58._24_8_ = dVar51 * auVar32._24_8_ + 0.0 + auVar33._24_8_;
    auVar21 = vshufpd_avx(auVar53,auVar53,1);
    auVar71 = auVar58._16_16_;
    dVar76 = auVar108._0_8_ * param_3[0xd] - dVar72 * param_3[0xc];
    dVar99 = auVar108._8_8_ * param_3[0xe] - dVar121 * param_3[0xd];
    dVar100 = auVar108._16_8_ * param_3[0xc] - dVar124 * param_3[0xe];
    dVar103 = auVar108._24_8_ * 0.0 - dVar148 * 0.0;
    auVar158._0_8_ = dVar76 + dVar76;
    auVar158._8_8_ = dVar99 + dVar99;
    auVar158._16_8_ = dVar100 + dVar100;
    auVar158._24_8_ = dVar103 + dVar103;
    auVar32 = vpermpd_avx2(auVar158,0xc9);
    auVar33 = vpermpd_avx2(auVar158,0xd2);
    auVar159._0_8_ = auVar108._0_8_ * auVar158._0_8_;
    auVar159._8_8_ = auVar108._8_8_ * auVar158._8_8_;
    auVar159._16_8_ = auVar108._16_8_ * auVar158._16_8_;
    auVar159._24_8_ = auVar108._24_8_ * auVar158._24_8_;
    auVar26 = vpermpd_avx2(auVar159,0xc9);
    auVar160._0_8_ = auVar108._0_8_ * auVar33._0_8_ - auVar26._0_8_;
    auVar160._8_8_ = auVar108._8_8_ * auVar33._8_8_ - auVar26._8_8_;
    auVar160._16_8_ = auVar108._16_8_ * auVar33._16_8_ - auVar26._16_8_;
    auVar160._24_8_ = auVar108._24_8_ * auVar33._24_8_ - auVar26._24_8_;
    auVar33 = vpermpd_avx2(auVar160,0xc9);
    auVar123._0_8_ = dVar147 * auVar32._0_8_ + param_3[0xc] + auVar33._0_8_;
    auVar123._8_8_ = dVar150 * auVar32._8_8_ + param_3[0xd] + auVar33._8_8_;
    auVar161._16_8_ = dVar50 * auVar32._16_8_ + param_3[0xe] + auVar33._16_8_;
    auVar161._0_16_ = auVar123;
    auVar161._24_8_ = dVar51 * auVar32._24_8_ + 0.0 + auVar33._24_8_;
    auVar170 = vshufpd_avx(auVar123,auVar123,1);
    auVar167 = auVar161._16_16_;
    dVar76 = auVar108._0_8_ * param_3[0x10] - dVar72 * param_3[0xf];
    dVar99 = auVar108._8_8_ * param_3[0x11] - dVar121 * param_3[0x10];
    dVar100 = auVar108._16_8_ * param_3[0xf] - dVar124 * param_3[0x11];
    dVar103 = auVar108._24_8_ * 0.0 - dVar148 * 0.0;
    auVar177._0_8_ = dVar76 + dVar76;
    auVar177._8_8_ = dVar99 + dVar99;
    auVar177._16_8_ = dVar100 + dVar100;
    auVar177._24_8_ = dVar103 + dVar103;
    auVar32 = vpermpd_avx2(auVar177,0xc9);
    auVar33 = vpermpd_avx2(auVar177,0xd2);
    auVar178._0_8_ = auVar177._0_8_ * auVar108._0_8_;
    auVar178._8_8_ = auVar177._8_8_ * auVar108._8_8_;
    auVar178._16_8_ = auVar177._16_8_ * auVar108._16_8_;
    auVar178._24_8_ = auVar177._24_8_ * auVar108._24_8_;
    auVar26 = vpermpd_avx2(auVar178,0xc9);
    auVar179._0_8_ = auVar108._0_8_ * auVar33._0_8_ - auVar26._0_8_;
    auVar179._8_8_ = auVar108._8_8_ * auVar33._8_8_ - auVar26._8_8_;
    auVar179._16_8_ = auVar108._16_8_ * auVar33._16_8_ - auVar26._16_8_;
    auVar179._24_8_ = auVar108._24_8_ * auVar33._24_8_ - auVar26._24_8_;
    auVar33 = vpermpd_avx2(auVar179,0xc9);
    auVar104._0_8_ = dVar147 * auVar32._0_8_ + param_3[0xf] + auVar33._0_8_;
    auVar104._8_8_ = dVar150 * auVar32._8_8_ + param_3[0x10] + auVar33._8_8_;
    auVar109._16_8_ = dVar50 * auVar32._16_8_ + param_3[0x11] + auVar33._16_8_;
    auVar109._0_16_ = auVar104;
    auVar109._24_8_ = dVar51 * auVar32._24_8_ + 0.0 + auVar33._24_8_;
    auVar176 = vshufpd_avx(auVar104,auVar104,1);
    auVar122 = auVar109._16_16_;
  }
  uVar6 = *param_2;
  if (0 < (int)uVar6) {
    lVar7 = *(longlong *)(param_2 + 2);
    lVar8 = *(longlong *)(param_2 + 0x24);
    auVar12 = vunpcklpd_avx(auVar21,auVar71);
    auVar13 = vunpcklpd_avx(auVar71,auVar53);
    auVar14 = vunpcklpd_avx(auVar53,auVar21);
    auVar15 = vunpcklpd_avx(auVar104,auVar176);
    auVar176 = vunpcklpd_avx(auVar176,auVar122);
    auVar170 = vunpcklpd_avx(auVar123,auVar170);
    auVar136 = vunpcklpd_avx(auVar77,auVar136);
    dVar76 = param_1 * __real_3fe0000000000000;
    auVar32._8_8_ = param_7;
    auVar32._0_8_ = param_7;
    auVar32._16_8_ = param_7;
    auVar32._24_8_ = param_7;
    lVar20 = 0;
    lVar18 = 0;
    lVar19 = 0;
    do {
      if ((*(char *)(lVar8 + lVar19) == '\0') && (*(char *)(lVar7 + lVar19) == '\x04')) {
        lVar9 = *(longlong *)(param_2 + 0xe);
        puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xc) + lVar18);
        uVar16 = puVar1[1];
        uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0xc) + 0x10 + lVar18);
        puVar2 = (undefined8 *)(lVar9 + lVar18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar16;
        *(undefined8 *)(lVar9 + 0x10 + lVar18) = uVar5;
        lVar9 = *(longlong *)(param_2 + 0x12);
        puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar18);
        uVar16 = puVar1[1];
        uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar18);
        puVar2 = (undefined8 *)(lVar9 + lVar18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar16;
        *(undefined8 *)(lVar9 + 0x10 + lVar18) = uVar5;
        lVar9 = *(longlong *)(param_2 + 8);
        dVar99 = *(double *)(lVar9 + 0x10 + lVar20);
        auVar78._8_8_ = dVar99;
        auVar78._0_8_ = dVar99;
        auVar81._16_8_ = dVar99;
        auVar81._0_16_ = auVar78;
        auVar81._24_8_ = dVar99;
        dVar100 = *(double *)(lVar9 + 8 + lVar20);
        auVar22._8_8_ = dVar100;
        auVar22._0_8_ = dVar100;
        auVar33._16_8_ = dVar100;
        auVar33._0_16_ = auVar22;
        auVar33._24_8_ = dVar100;
        dVar103 = *(double *)(lVar9 + lVar20);
        auVar125._8_8_ = dVar103;
        auVar125._0_8_ = dVar103;
        auVar127._16_8_ = dVar103;
        auVar127._0_16_ = auVar125;
        auVar127._24_8_ = dVar103;
        dVar72 = *(double *)(lVar9 + 0x18 + lVar20);
        lVar9 = *(longlong *)(param_2 + 0x16);
        pdVar3 = (double *)(lVar9 + lVar20);
        auVar102._8_8_ = 0;
        auVar102._0_8_ = *(ulonglong *)(lVar9 + 0x18 + lVar20);
        auVar77 = vmovhpd_avx(auVar102,*(undefined8 *)(lVar9 + 0x10 + lVar20));
        auVar107._8_8_ = 0;
        auVar107._0_8_ = *(ulonglong *)(lVar9 + 8 + lVar20);
        auVar123 = vmovhpd_avx(auVar107,*(undefined8 *)(lVar9 + lVar20));
        pdVar4 = (double *)(lVar9 + 0x10 + lVar20);
        auVar151._0_8_ =
             dVar99 * auVar123._0_8_ *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
             dVar100 * *pdVar4 *
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
             dVar72 * *pdVar3 +
             dVar103 * auVar77._0_8_ *
             ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        auVar151._8_8_ =
             dVar99 * auVar123._8_8_ * _UNK_150b54428 +
             dVar100 * pdVar4[1] * _UNK_150b54408 +
             dVar72 * pdVar3[1] + dVar103 * auVar77._8_8_ * _UNK_150b543e8;
        auVar151._16_8_ =
             dVar99 * auVar77._0_8_ * _UNK_150b54430 +
             dVar100 * *pdVar3 * _UNK_150b54410 +
             dVar72 * pdVar3[2] + dVar103 * auVar123._0_8_ * _UNK_150b543f0;
        auVar151._24_8_ =
             dVar99 * auVar77._8_8_ * _UNK_150b54438 +
             dVar100 * pdVar3[1] * _UNK_150b54418 +
             dVar72 * pdVar3[3] + dVar103 * auVar123._8_8_ * _UNK_150b543f8;
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x1c) + lVar18);
        pdVar4 = (double *)(*(longlong *)(param_2 + 0x20) + lVar18);
        dVar99 = *(double *)(*(longlong *)(param_2 + 0x18) + lVar19 * 8);
        auVar105._0_8_ = dVar99 * (param_1 * *pdVar3 + *pdVar4);
        auVar105._8_8_ = dVar99 * (param_1 * pdVar3[1] + pdVar4[1]);
        auVar182._16_8_ =
             dVar99 * (param_1 * *(double *)(*(longlong *)(param_2 + 0x1c) + 0x10 + lVar18) +
                      *(double *)(*(longlong *)(param_2 + 0x20) + 0x10 + lVar18));
        auVar182._0_16_ = auVar105;
        auVar182._24_8_ = dVar99 * (param_1 * 0.0 + 0.0);
        if (*(char *)(*(longlong *)(param_2 + 0x26) + lVar19) == '\0') {
          auVar77 = vshufpd_avx(auVar105,auVar105,1);
          auVar123 = auVar182._16_16_;
        }
        else {
          auVar105._0_8_ = param_1 * *param_5 + auVar105._0_8_;
          auVar105._8_8_ = param_1 * param_5[1] + auVar105._8_8_;
          auVar110._16_8_ = param_1 * param_5[2] + auVar182._16_8_;
          auVar110._0_16_ = auVar105;
          auVar110._24_8_ = param_1 * 0.0 + auVar182._24_8_;
          auVar77 = vshufpd_avx(auVar105,auVar105,1);
          auVar123 = auVar110._16_16_;
        }
        lVar9 = *(longlong *)(param_2 + 0x14);
        auVar106._8_8_ = 0;
        auVar106._0_8_ = *(double *)(lVar9 + lVar18);
        dVar99 = *(double *)(lVar9 + 0x10 + lVar18);
        auVar137._8_8_ = 0;
        auVar137._0_8_ = dVar99;
        auVar102 = vunpcklpd_avx(auVar137,auVar106);
        auVar107 = vunpcklpd_avx(auVar22,auVar78);
        auVar26 = vblendpd_avx(ZEXT1632(auVar107),auVar127,0xc);
        auVar78 = vunpcklpd_avx(auVar78,auVar125);
        auVar33 = vblendpd_avx(ZEXT1632(auVar78),auVar33,0xc);
        auVar78 = *(undefined1 (*) [16])(lVar9 + 8 + lVar18);
        dVar100 = auVar26._0_8_ * auVar102._0_8_ - auVar33._0_8_ * auVar78._0_8_;
        dVar103 = auVar26._8_8_ * auVar102._8_8_ - auVar33._8_8_ * auVar78._8_8_;
        dVar121 = auVar26._16_8_ * *(double *)(lVar9 + 8 + lVar18) -
                  auVar33._16_8_ * *(double *)(lVar9 + lVar18);
        dVar124 = auVar26._24_8_ * 0.0 - auVar33._24_8_ * 0.0;
        auVar111._0_8_ = dVar100 + dVar100;
        auVar111._8_8_ = dVar103 + dVar103;
        auVar111._16_8_ = dVar121 + dVar121;
        auVar111._24_8_ = dVar124 + dVar124;
        auVar27 = vpermpd_avx2(auVar111,0xc9);
        auVar22 = vunpcklpd_avx(auVar125,auVar22);
        auVar33 = vblendpd_avx(ZEXT1632(auVar22),auVar81,0xc);
        auVar82._0_8_ = auVar27._0_8_ * auVar33._0_8_ - auVar26._0_8_ * auVar111._0_8_;
        auVar82._8_8_ = auVar27._8_8_ * auVar33._8_8_ - auVar26._8_8_ * auVar111._8_8_;
        auVar82._16_8_ = auVar27._16_8_ * auVar33._16_8_ - auVar26._16_8_ * auVar111._16_8_;
        auVar82._24_8_ = auVar27._24_8_ * auVar33._24_8_ - auVar26._24_8_ * auVar111._24_8_;
        auVar33 = vpermpd_avx2(auVar82,0xc9);
        pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar18);
        auVar199._0_8_ =
             *pdVar3 + auVar111._0_8_ * dVar72 + SUB168(*(undefined1 (*) [16])(lVar9 + lVar18),0) +
                       auVar33._0_8_;
        auVar199._8_8_ =
             pdVar3[1] +
             auVar111._8_8_ * dVar72 + SUB168(*(undefined1 (*) [16])(lVar9 + lVar18),8) +
             auVar33._8_8_;
        auVar199._16_8_ =
             *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar18) +
             auVar111._16_8_ * dVar72 + dVar99 + auVar33._16_8_;
        auVar199._24_8_ = auVar111._24_8_ * dVar72 + 0.0 + auVar33._24_8_ + 0.0;
        lVar9 = *(longlong *)(param_2 + 0x1a);
        dVar99 = auVar151._0_8_ + auVar151._0_8_;
        dVar100 = auVar151._8_8_ + auVar151._8_8_;
        dVar103 = auVar151._16_8_ + auVar151._16_8_;
        dVar72 = auVar151._24_8_ + auVar151._24_8_;
        auVar112._0_8_ = dVar99 * auVar151._0_8_;
        auVar112._8_8_ = dVar100 * auVar151._0_8_;
        auVar112._16_8_ = dVar103 * auVar151._0_8_;
        auVar112._24_8_ = dVar72 * auVar151._0_8_;
        auVar33 = vpermpd_avx2(auVar151,0x55);
        auVar126._0_8_ = dVar99 * auVar33._0_8_;
        auVar126._8_8_ = dVar100 * auVar33._8_8_;
        auVar128._16_8_ = dVar103 * auVar33._16_8_;
        auVar128._0_16_ = auVar126;
        auVar128._24_8_ = dVar72 * auVar33._24_8_;
        auVar33 = vpermpd_avx2(auVar151,0xff);
        auVar59._0_8_ = dVar99 * auVar33._0_8_;
        auVar59._8_8_ = dVar100 * auVar33._8_8_;
        auVar59._16_8_ = dVar103 * auVar33._16_8_;
        auVar59._24_8_ = dVar72 * auVar33._24_8_;
        auVar33 = vperm2f128_avx(auVar128,auVar112,0x21);
        auVar33 = vshufpd_avx(auVar33,ZEXT1632(auVar112._16_16_),4);
        auVar23._0_8_ = auVar59._0_8_ + auVar33._0_8_;
        auVar23._8_8_ = auVar59._8_8_ + auVar33._8_8_;
        auVar34._16_8_ = auVar59._16_8_ + auVar33._16_8_;
        auVar34._0_16_ = auVar23;
        auVar34._24_8_ = auVar59._24_8_ + auVar33._24_8_;
        auVar27 = vsubpd_avx(auVar33,auVar59);
        auVar22 = vshufpd_avx(auVar126,auVar126,1);
        auVar113._8_8_ = auVar112._0_8_;
        auVar113._0_8_ = auVar112._0_8_;
        auVar113._16_8_ = auVar112._0_8_;
        auVar113._24_8_ = auVar112._0_8_;
        auVar33 = vblendpd_avx(auVar113,ZEXT1632(auVar22),1);
        auVar26 = vpermpd_avx2(auVar128,0x55);
        auVar26 = vblendpd_avx(ZEXT1632(CONCAT88(auVar151._16_8_ * dVar103,auVar151._16_8_ * dVar103
                                                )),auVar26,0xc);
        auVar83._0_8_ = auVar33._0_8_ + auVar26._0_8_;
        auVar83._8_8_ = auVar33._8_8_ + auVar26._8_8_;
        auVar83._16_8_ = auVar33._16_8_ + auVar26._16_8_;
        auVar83._24_8_ = auVar33._24_8_ + auVar26._24_8_;
        auVar114._8_8_ = __real_3ff0000000000000;
        auVar114._0_8_ = __real_3ff0000000000000;
        auVar114._16_8_ = __real_3ff0000000000000;
        auVar114._24_8_ = __real_3ff0000000000000;
        auVar26 = vsubpd_avx(auVar114,auVar83);
        dVar50 = auVar26._0_8_;
        dVar99 = *(double *)(lVar9 + 0x10 + lVar20 * 4);
        pdVar3 = (double *)(lVar9 + lVar20 * 4);
        dVar72 = *pdVar3;
        dVar121 = pdVar3[1];
        auVar33 = vpermpd_avx2(auVar27,0xaa);
        dVar100 = *(double *)(lVar9 + 0x30 + lVar20 * 4);
        pdVar3 = (double *)(lVar9 + 0x20 + lVar20 * 4);
        dVar124 = *pdVar3;
        dVar148 = pdVar3[1];
        auVar28 = vpermpd_avx2(auVar34,0x55);
        dVar103 = *(double *)(lVar9 + 0x50 + lVar20 * 4);
        pdVar3 = (double *)(lVar9 + 0x40 + lVar20 * 4);
        dVar147 = *pdVar3;
        dVar150 = pdVar3[1];
        auVar115._0_8_ = dVar147 * auVar28._0_8_ + dVar124 * auVar33._0_8_ + dVar72 * dVar50;
        auVar115._8_8_ = dVar150 * auVar28._8_8_ + dVar148 * auVar33._8_8_ + dVar121 * dVar50;
        auVar115._16_8_ = dVar103 * auVar28._16_8_ + dVar100 * auVar33._16_8_ + dVar99 * dVar50;
        auVar115._24_8_ = auVar28._24_8_ * 0.0 + auVar33._24_8_ * 0.0 + dVar50 * 0.0;
        auVar33 = vpermpd_avx2(auVar34,0xaa);
        auVar28 = vpermpd_avx2(auVar26,0x55);
        dVar50 = auVar27._0_8_;
        auVar129._0_8_ = dVar147 * dVar50 + dVar72 * auVar33._0_8_ + dVar124 * auVar28._0_8_;
        auVar129._8_8_ = dVar150 * dVar50 + dVar121 * auVar33._8_8_ + dVar148 * auVar28._8_8_;
        auVar129._16_8_ = dVar103 * dVar50 + dVar99 * auVar33._16_8_ + dVar100 * auVar28._16_8_;
        auVar129._24_8_ = dVar50 * 0.0 + auVar33._24_8_ * 0.0 + auVar28._24_8_ * 0.0;
        auVar33 = vpermpd_avx2(auVar27,0x55);
        auVar28 = vpermpd_avx2(auVar26,0xaa);
        auVar139._0_8_ = dVar147 * auVar28._0_8_ + auVar33._0_8_ * dVar72 + dVar124 * auVar23._0_8_;
        auVar139._8_8_ = dVar150 * auVar28._8_8_ + auVar33._8_8_ * dVar121 + dVar148 * auVar23._0_8_
        ;
        auVar139._16_8_ =
             dVar103 * auVar28._16_8_ + auVar33._16_8_ * dVar99 + dVar100 * auVar23._0_8_;
        auVar139._24_8_ = auVar28._24_8_ * 0.0 + auVar33._24_8_ * 0.0 + auVar23._0_8_ * 0.0;
        auVar22 = vunpcklpd_avx(auVar26._0_16_,auVar34._16_16_);
        auVar33 = vblendpd_avx(ZEXT1632(auVar22),auVar33,0xc);
        auVar28 = vpermpd_avx2(auVar115,0x55);
        auVar22 = vblendpd_avx(auVar26._0_16_,auVar27._16_16_,1);
        dVar150 = auVar22._0_8_;
        dVar50 = auVar22._8_8_;
        dVar121 = auVar33._0_8_;
        dVar124 = auVar33._8_8_;
        dVar148 = auVar33._16_8_;
        dVar147 = auVar33._24_8_;
        auVar29 = vpermpd_avx2(auVar115,0xaa);
        auVar22 = vshufpd_avx(auVar23,auVar27._0_16_,1);
        auVar33 = vblendpd_avx(auVar26,ZEXT1632(auVar22),3);
        dVar99 = auVar33._0_8_;
        dVar100 = auVar33._8_8_;
        dVar103 = auVar33._16_8_;
        dVar72 = auVar33._24_8_;
        auVar33 = vpermpd_avx2(auVar129,0x55);
        auVar26 = vpermpd_avx2(auVar129,0xaa);
        auVar27 = vpermpd_avx2(auVar139,0x55);
        auVar30 = vpermpd_avx2(auVar139,0xaa);
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x1e) + lVar18);
        pdVar4 = (double *)(*(longlong *)(param_2 + 0x22) + lVar18);
        auVar130._0_8_ = param_1 * *pdVar3 + *pdVar4;
        auVar130._8_8_ = param_1 * pdVar3[1] + pdVar4[1];
        auVar130._16_8_ =
             param_1 * *(double *)(*(longlong *)(param_2 + 0x1e) + 0x10 + lVar18) +
             *(double *)(*(longlong *)(param_2 + 0x22) + 0x10 + lVar18);
        auVar130._24_8_ = param_1 * 0.0 + 0.0;
        auVar31 = vpermpd_avx2(auVar130,0x55);
        auVar58 = vpermpd_avx2(auVar130,0xaa);
        auVar79._0_8_ =
             (dVar99 * auVar30._0_8_ + dVar121 * auVar139._0_8_ + dVar150 * auVar27._0_8_) *
             auVar58._0_8_ +
             (dVar99 * auVar29._0_8_ + dVar121 * auVar115._0_8_ + dVar150 * auVar28._0_8_) *
             auVar130._0_8_ +
             (dVar99 * auVar26._0_8_ + dVar121 * auVar129._0_8_ + dVar150 * auVar33._0_8_) *
             auVar31._0_8_;
        auVar79._8_8_ =
             (dVar100 * auVar30._8_8_ + dVar124 * auVar139._0_8_ + dVar50 * auVar27._8_8_) *
             auVar58._8_8_ +
             (dVar100 * auVar29._8_8_ + dVar124 * auVar115._0_8_ + dVar50 * auVar28._8_8_) *
             auVar130._0_8_ +
             (dVar100 * auVar26._8_8_ + dVar124 * auVar129._0_8_ + dVar50 * auVar33._8_8_) *
             auVar31._8_8_;
        auVar187._16_8_ =
             (dVar103 * auVar30._16_8_ + dVar148 * auVar139._0_8_ + auVar23._0_8_ * auVar27._16_8_)
             * auVar58._16_8_ +
             (dVar103 * auVar29._16_8_ + dVar148 * auVar115._0_8_ + auVar23._0_8_ * auVar28._16_8_)
             * auVar130._0_8_ +
             (dVar103 * auVar26._16_8_ + dVar148 * auVar129._0_8_ + auVar23._0_8_ * auVar33._16_8_)
             * auVar31._16_8_;
        auVar187._0_16_ = auVar79;
        auVar187._24_8_ =
             (dVar72 * auVar30._24_8_ + dVar147 * auVar139._0_8_ + auVar23._8_8_ * auVar27._24_8_) *
             auVar58._24_8_ +
             (dVar72 * auVar29._24_8_ + dVar147 * auVar115._0_8_ + auVar23._8_8_ * auVar28._24_8_) *
             auVar130._0_8_ +
             (dVar72 * auVar26._24_8_ + dVar147 * auVar129._0_8_ + auVar23._8_8_ * auVar33._24_8_) *
             auVar31._24_8_;
        dVar99 = *param_4;
        lVar9 = *(longlong *)(param_2 + 0xc);
        if (dVar99 <= __real_0000000000000000) {
          auVar125 = vshufpd_avx(auVar79,auVar79,1);
          auVar102 = auVar187._16_16_;
          local_338._8_8_ = 0;
          local_338._0_8_ = *(ulonglong *)(lVar9 + lVar18);
          dVar100 = *(double *)(lVar9 + 8 + lVar18);
          auVar54._8_8_ = 0;
          auVar54._0_8_ = *(ulonglong *)(lVar9 + 0x10 + lVar18);
          auVar138 = ZEXT816(0) << 0x40;
          auVar78 = ZEXT816(0) << 0x40;
          auVar107 = ZEXT816(0) << 0x40;
          auVar185 = ZEXT816(0) << 0x40;
          auVar22 = ZEXT816(0) << 0x40;
          auVar23 = ZEXT816(0) << 0x40;
        }
        else {
          dVar148 = param_4[2] + param_4[2];
          local_338._8_8_ = 0;
          local_338._0_8_ = *(double *)(lVar9 + lVar18);
          dVar100 = *(double *)(lVar9 + 8 + lVar18);
          auVar54._8_8_ = 0;
          auVar54._0_8_ = *(ulonglong *)(lVar9 + 0x10 + lVar18);
          auVar78 = vunpcklpd_avx(auVar54,local_338);
          auVar22 = *(undefined1 (*) [16])(lVar9 + 8 + lVar18);
          local_1c8 = auVar13._0_8_;
          dStack_1c0 = auVar13._8_8_;
          dStack_1b8 = auVar21._0_8_;
          dStack_1b0 = auVar21._8_8_;
          local_1a8 = auVar12._0_8_;
          dStack_1a0 = auVar12._8_8_;
          dStack_198 = auVar53._0_8_;
          dStack_190 = auVar53._8_8_;
          auVar33 = vpermpd_avx2(auVar199,0xc9);
          local_1e8 = auVar14._0_8_;
          dStack_1e0 = auVar14._8_8_;
          dStack_1d8 = auVar71._0_8_;
          dStack_1d0 = auVar71._8_8_;
          auVar131._0_8_ = local_1e8 * auVar33._0_8_ - local_1a8 * auVar199._0_8_;
          auVar131._8_8_ = dStack_1e0 * auVar33._8_8_ - dStack_1a0 * auVar199._8_8_;
          auVar131._16_8_ = dStack_1d8 * auVar33._16_8_ - dStack_198 * auVar199._16_8_;
          auVar131._24_8_ = dStack_1d0 * auVar33._24_8_ - dStack_190 * auVar199._24_8_;
          auVar26 = vpermpd_avx2(auVar131,0xd2);
          auVar27 = vpermpd_avx2(auVar131,0xc9);
          auVar132._0_8_ = local_1e8 * auVar26._0_8_ - local_1a8 * auVar27._0_8_;
          auVar132._8_8_ = dStack_1e0 * auVar26._8_8_ - dStack_1a0 * auVar27._8_8_;
          auVar132._16_8_ = dStack_1d8 * auVar26._16_8_ - dStack_198 * auVar27._16_8_;
          auVar132._24_8_ = dStack_1d0 * auVar26._24_8_ - dStack_190 * auVar27._24_8_;
          dVar103 = param_4[3];
          auVar26 = vpermpd_avx2(auVar132,0xc9);
          local_228 = auVar176._0_8_;
          dStack_220 = auVar176._8_8_;
          dStack_218 = auVar104._0_8_;
          dStack_210 = auVar104._8_8_;
          local_208 = auVar15._0_8_;
          dStack_200 = auVar15._8_8_;
          dStack_1f8 = auVar122._0_8_;
          dStack_1f0 = auVar122._8_8_;
          auVar171._0_8_ = local_208 * auVar33._0_8_ - auVar199._0_8_ * local_228;
          auVar171._8_8_ = dStack_200 * auVar33._8_8_ - auVar199._8_8_ * dStack_220;
          auVar171._16_8_ = dStack_1f8 * auVar33._16_8_ - auVar199._16_8_ * dStack_218;
          auVar171._24_8_ = dStack_1f0 * auVar33._24_8_ - auVar199._24_8_ * dStack_210;
          dVar72 = param_4[1];
          local_268 = auVar136._0_8_;
          dStack_260 = auVar136._8_8_;
          dStack_258 = auVar101._0_8_;
          dStack_250 = auVar101._8_8_;
          local_248 = auVar170._0_8_;
          dStack_240 = auVar170._8_8_;
          dStack_230 = auVar167._8_8_;
          dVar121 = param_4[4];
          auVar33 = vpermpd_avx2(auVar171,0xc9);
          dVar124 = param_4[5];
          auVar77 = vunpcklpd_avx(auVar105,auVar77);
          auVar105._0_8_ =
               -(param_1 *
                dVar99 * (dVar121 * auVar33._0_8_ +
                         dVar103 * auVar26._0_8_ +
                         (local_1a8 * auVar78._0_8_ - auVar22._0_8_ * local_1c8) * dVar148 +
                         dVar72 * local_248 + local_268 * param_4[8])) + auVar77._0_8_;
          auVar105._8_8_ =
               -(param_1 *
                dVar99 * (dVar121 * auVar33._8_8_ +
                         dVar103 * auVar26._8_8_ +
                         (dStack_1a0 * auVar78._8_8_ - auVar22._8_8_ * dStack_1c0) * dVar148 +
                         dVar72 * dStack_240 + dStack_260 * param_4[9])) + auVar77._8_8_;
          auVar183._16_8_ =
               -(param_1 *
                dVar99 * (dVar121 * auVar33._16_8_ +
                         dVar103 * auVar26._16_8_ +
                         (dStack_198 * dVar100 - *(double *)(lVar9 + lVar18) * dStack_1b8) * dVar148
                         + dVar72 * auVar167._0_8_ + dStack_258 * param_4[10])) + auVar123._0_8_;
          auVar183._0_16_ = auVar105;
          auVar183._24_8_ =
               -(param_1 *
                dVar99 * (dVar121 * auVar33._24_8_ +
                         dVar103 * auVar26._24_8_ +
                         (dStack_190 * 0.0 - dStack_1b0 * 0.0) * dVar148 +
                         dVar72 * dStack_230 + dStack_250 * 0.0)) + auVar123._8_8_;
          auVar77 = vshufpd_avx(auVar105,auVar105,1);
          auVar123 = auVar183._16_16_;
          auVar79._0_8_ = -(param_1 * dVar99 * local_208 * dVar124) + auVar79._0_8_;
          auVar79._8_8_ = -(param_1 * dVar99 * dStack_200 * dVar124) + auVar79._8_8_;
          auVar84._16_8_ = -(param_1 * dVar99 * dStack_1f8 * dVar124) + auVar187._16_8_;
          auVar84._0_16_ = auVar79;
          auVar84._24_8_ = -(param_1 * dVar99 * dStack_1f0 * dVar124) + auVar187._24_8_;
          auVar125 = vshufpd_avx(auVar79,auVar79,1);
          auVar102 = auVar84._16_16_;
          dVar103 = (double)((ulonglong)dVar99 ^ __xmm_80000000000000008000000000000000) *
                    param_4[6];
          auVar185._0_8_ = local_268 * dVar103;
          auVar185._8_8_ = dStack_260 * dVar103;
          auVar186._16_8_ = dStack_258 * dVar103;
          auVar186._0_16_ = auVar185;
          auVar186._24_8_ = dStack_250 * dVar103;
          auVar22 = vshufpd_avx(auVar185,auVar185,1);
          auVar23 = auVar186._16_16_;
          dVar99 = (double)((ulonglong)dVar99 ^ __xmm_80000000000000008000000000000000) * param_4[7]
          ;
          auVar138._0_8_ = local_1e8 * dVar99;
          auVar138._8_8_ = dStack_1e0 * dVar99;
          auVar140._16_8_ = dStack_1d8 * dVar99;
          auVar140._0_16_ = auVar138;
          auVar140._24_8_ = dStack_1d0 * dVar99;
          auVar78 = vshufpd_avx(auVar138,auVar138,1);
          auVar107 = auVar140._16_16_;
        }
        auVar17._8_8_ = 0;
        auVar17._0_8_ = dVar100;
        auVar78 = vunpcklpd_avx(auVar138,auVar78);
        auVar125 = vunpcklpd_avx(auVar79,auVar125);
        auVar22 = vunpcklpd_avx(auVar185,auVar22);
        auVar77 = vunpcklpd_avx(auVar105,auVar77);
        auVar105 = vunpcklpd_avx(local_338,auVar17);
        auVar85._0_8_ = auVar105._0_8_ + auVar77._0_8_;
        auVar85._8_8_ = auVar105._8_8_ + auVar77._8_8_;
        auVar85._16_8_ = auVar54._0_8_ + auVar123._0_8_;
        auVar85._24_8_ = auVar54._8_8_ + auVar123._8_8_;
        auVar133._16_16_ = auVar23;
        auVar133._0_16_ = auVar22;
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x10) + lVar18);
        auVar157._8_8_ = 0;
        auVar157._0_8_ = __real_3ff0000000000000;
        auVar55._8_8_ = 0;
        auVar55._0_8_ = param_1 * *(double *)(*(longlong *)(param_2 + 0x2a) + lVar19 * 8);
        auVar77 = vminsd_avx(auVar157,auVar55);
        auVar172._0_8_ = *pdVar3 + auVar125._0_8_;
        auVar172._8_8_ = pdVar3[1] + auVar125._8_8_;
        auVar172._16_8_ =
             *(double *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar18) + auVar102._0_8_;
        auVar172._24_8_ = auVar102._8_8_ + 0.0;
        auVar35._16_16_ = auVar107;
        auVar35._0_16_ = auVar78;
        auVar33 = vsubpd_avx(auVar35,auVar172);
        dVar99 = auVar77._0_8_;
        auVar24._0_8_ = auVar33._0_8_ * dVar99 + auVar172._0_8_;
        auVar24._8_8_ = auVar33._8_8_ * dVar99 + auVar172._8_8_;
        auVar36._16_8_ = auVar33._16_8_ * dVar99 + auVar172._16_8_;
        auVar36._0_16_ = auVar24;
        auVar36._24_8_ = auVar33._24_8_ * dVar99 + auVar172._24_8_;
        auVar26 = vpermpd_avx2(auVar151,0x1b);
        auVar28 = vpermpd_avx2(auVar36,0x55);
        auVar29 = vpermpd_avx2(auVar151,0x4e);
        auVar30 = vpermpd_avx2(auVar36,0xaa);
        auVar33 = vshufpd_avx(auVar151,auVar151,5);
        auVar56._8_8_ = 0;
        auVar56._0_8_ = param_1 * *(double *)(*(longlong *)(param_2 + 0x28) + lVar19 * 8);
        auVar77 = vminsd_avx(auVar157,auVar56);
        auVar27 = vsubpd_avx(auVar133,auVar85);
        dVar100 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                   auVar33._0_8_ * auVar30._0_8_ +
                  ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                  auVar29._0_8_ * auVar28._0_8_ +
                  auVar151._0_8_ * 0.0 +
                  auVar26._0_8_ * auVar24._0_8_ * ___xmm_bff00000000000003ff0000000000000) * dVar76
                  + auVar151._0_8_;
        dVar103 = (_UNK_150b54428 * auVar33._8_8_ * auVar30._8_8_ +
                  _UNK_150b54408 * auVar29._8_8_ * auVar28._8_8_ +
                  auVar151._8_8_ * 0.0 + auVar26._8_8_ * auVar24._0_8_ * _UNK_15076c6f8) * dVar76 +
                  auVar151._8_8_;
        dVar72 = (_UNK_150b54430 * auVar33._16_8_ * auVar30._16_8_ +
                 _UNK_150b54410 * auVar29._16_8_ * auVar28._16_8_ +
                 auVar151._16_8_ * 0.0 +
                 auVar26._16_8_ * auVar24._0_8_ * ___xmm_bff00000000000003ff0000000000000) * dVar76
                 + auVar151._16_8_;
        dVar121 = (_UNK_150b54438 * auVar33._24_8_ * auVar30._24_8_ +
                  _UNK_150b54418 * auVar29._24_8_ * auVar28._24_8_ +
                  auVar151._24_8_ * 0.0 + auVar26._24_8_ * auVar24._0_8_ * _UNK_15076c6f8) * dVar76
                  + auVar151._24_8_;
        auVar141._0_8_ = dVar100 * dVar100;
        auVar141._8_8_ = dVar103 * dVar103;
        auVar141._16_8_ = dVar72 * dVar72;
        auVar141._24_8_ = dVar121 * dVar121;
        auVar33 = vpermpd_avx2(auVar141,0x4e);
        auVar142._0_8_ = auVar141._0_8_ + auVar33._0_8_;
        auVar142._8_8_ = auVar141._8_8_ + auVar33._8_8_;
        auVar142._16_8_ = auVar141._16_8_ + auVar33._16_8_;
        auVar142._24_8_ = auVar141._24_8_ + auVar33._24_8_;
        auVar33 = vpermpd_avx2(auVar142,0x39);
        auVar143._0_8_ = auVar142._0_8_ + auVar33._0_8_;
        auVar143._8_8_ = auVar142._8_8_ + auVar33._8_8_;
        auVar143._16_8_ = auVar142._16_8_ + auVar33._16_8_;
        auVar143._24_8_ = auVar142._24_8_ + auVar33._24_8_;
        auVar152._8_8_ = __real_3e45798ee2308c3a;
        auVar152._0_8_ = __real_3e45798ee2308c3a;
        auVar152._16_8_ = __real_3e45798ee2308c3a;
        auVar152._24_8_ = __real_3e45798ee2308c3a;
        auVar33 = vcmppd_avx(auVar152,auVar143,2);
        auVar33 = vpshufb_avx2(auVar33,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar33 = vblendvps_avx(ZEXT832(0) << 0x40,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar33);
        dVar99 = auVar77._0_8_;
        auVar26 = vsqrtpd_avx(auVar143);
        auVar57._0_8_ = auVar27._0_8_ * dVar99 + auVar85._0_8_;
        auVar57._8_8_ = auVar27._8_8_ * dVar99 + auVar85._8_8_;
        auVar60._16_8_ = auVar27._16_8_ * dVar99 + auVar85._16_8_;
        auVar60._0_16_ = auVar57;
        auVar60._24_8_ = auVar27._24_8_ * dVar99 + auVar85._24_8_;
        auVar26 = vdivpd_avx(auVar114,auVar26);
        dVar100 = dVar100 * auVar26._0_8_;
        dVar103 = dVar103 * auVar26._8_8_;
        dVar72 = dVar72 * auVar26._16_8_;
        dVar121 = dVar121 * auVar26._24_8_;
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + lVar20);
        auVar134._0_8_ =
             ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar3;
        auVar134._8_8_ = _UNK_150b543c8 * pdVar3[1];
        auVar134._16_8_ = _UNK_150b543d0 * pdVar3[2];
        auVar134._24_8_ = _UNK_150b543d8 * pdVar3[3];
        auVar86._0_8_ =
             (double)CONCAT44(auVar33._4_4_ & (uint)((ulonglong)dVar100 >> 0x20),
                              auVar33._0_4_ & SUB84(dVar100,0));
        auVar86._8_4_ = auVar33._8_4_ & SUB84(dVar103,0);
        auVar86._12_4_ = auVar33._12_4_ & (uint)((ulonglong)dVar103 >> 0x20);
        auVar86._16_4_ = auVar33._16_4_ & SUB84(dVar72,0);
        auVar86._20_4_ = auVar33._20_4_ & (uint)((ulonglong)dVar72 >> 0x20);
        auVar86._24_4_ = auVar33._24_4_ & SUB84(dVar121,0);
        auVar86._28_4_ = auVar33._28_4_ & (uint)((ulonglong)dVar121 >> 0x20);
        auVar26 = vpermpd_avx2(auVar134,0x1b);
        auVar27 = vpermpd_avx2(auVar86,0xff);
        auVar28 = vpermpd_avx2(auVar86,0x55);
        auVar29 = vpermpd_avx2(auVar134,0x4e);
        auVar30 = vpermpd_avx2(auVar86,0xaa);
        auVar33 = vshufpd_avx(auVar134,auVar134,5);
        auVar87._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar33._0_8_ * auVar30._0_8_ +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar29._0_8_ * auVar28._0_8_ +
             auVar134._0_8_ * auVar27._0_8_ +
             auVar26._0_8_ * auVar86._0_8_ * ___xmm_bff00000000000003ff0000000000000;
        auVar87._8_8_ =
             _UNK_150b54428 * auVar33._8_8_ * auVar30._8_8_ +
             _UNK_150b54408 * auVar29._8_8_ * auVar28._8_8_ +
             auVar134._8_8_ * auVar27._8_8_ + auVar26._8_8_ * auVar86._0_8_ * _UNK_15076c6f8;
        auVar87._16_8_ =
             _UNK_150b54430 * auVar33._16_8_ * auVar30._16_8_ +
             _UNK_150b54410 * auVar29._16_8_ * auVar28._16_8_ +
             auVar134._16_8_ * auVar27._16_8_ +
             auVar26._16_8_ * auVar86._0_8_ * ___xmm_bff00000000000003ff0000000000000;
        auVar87._24_8_ =
             _UNK_150b54438 * auVar33._24_8_ * auVar30._24_8_ +
             _UNK_150b54418 * auVar29._24_8_ * auVar28._24_8_ +
             auVar134._24_8_ * auVar27._24_8_ + auVar26._24_8_ * auVar86._0_8_ * _UNK_15076c6f8;
        lVar9 = *(longlong *)(param_2 + 0x14);
        dVar100 = *(double *)(lVar9 + lVar18);
        dVar103 = ((double *)(lVar9 + lVar18))[1];
        pdVar3 = (double *)(lVar9 + 8 + lVar18);
        auVar33 = vpermpd_avx2(auVar87,0xc9);
        dVar99 = *(double *)(lVar9 + 0x10 + lVar18);
        dVar72 = auVar87._0_8_ * *pdVar3 - dVar100 * auVar33._0_8_;
        dVar121 = auVar87._8_8_ * pdVar3[1] - dVar103 * auVar33._8_8_;
        dVar124 = auVar87._16_8_ * *(double *)(lVar9 + lVar18) - dVar99 * auVar33._16_8_;
        dVar148 = auVar87._24_8_ * 0.0 - auVar33._24_8_ * 0.0;
        auVar116._0_8_ = dVar72 + dVar72;
        auVar116._8_8_ = dVar121 + dVar121;
        auVar116._16_8_ = dVar124 + dVar124;
        auVar116._24_8_ = dVar148 + dVar148;
        auVar33 = vpermpd_avx2(auVar116,0xc9);
        auVar26 = vpermpd_avx2(auVar87,0xff);
        auVar27 = vpermpd_avx2(auVar116,0xd2);
        auVar117._0_8_ = auVar87._0_8_ * auVar116._0_8_;
        auVar117._8_8_ = auVar87._8_8_ * auVar116._8_8_;
        auVar117._16_8_ = auVar87._16_8_ * auVar116._16_8_;
        auVar117._24_8_ = auVar87._24_8_ * auVar116._24_8_;
        auVar28 = vpermpd_avx2(auVar117,0xc9);
        auVar118._0_8_ = auVar87._0_8_ * auVar27._0_8_ - auVar28._0_8_;
        auVar118._8_8_ = auVar87._8_8_ * auVar27._8_8_ - auVar28._8_8_;
        auVar118._16_8_ = auVar87._16_8_ * auVar27._16_8_ - auVar28._16_8_;
        auVar118._24_8_ = auVar87._24_8_ * auVar27._24_8_ - auVar28._24_8_;
        auVar27 = vpermpd_avx2(auVar118,0xc9);
        auVar119._0_8_ = auVar33._0_8_ * auVar26._0_8_ + dVar100 + auVar27._0_8_;
        auVar119._8_8_ = auVar33._8_8_ * auVar26._8_8_ + dVar103 + auVar27._8_8_;
        auVar119._16_8_ = auVar33._16_8_ * auVar26._16_8_ + dVar99 + auVar27._16_8_;
        auVar119._24_8_ = auVar33._24_8_ * auVar26._24_8_ + 0.0 + auVar27._24_8_;
        auVar200._0_8_ = auVar57._0_8_ * param_1 + auVar199._0_8_;
        auVar200._8_8_ = auVar57._8_8_ * param_1 + auVar199._8_8_;
        auVar200._16_8_ = auVar60._16_8_ * param_1 + auVar199._16_8_;
        auVar200._24_8_ = auVar60._24_8_ * param_1 + auVar199._24_8_;
        auVar33 = vsubpd_avx(auVar200,auVar119);
        lVar9 = *(longlong *)(param_2 + 6);
        *(undefined1 (*) [16])(lVar9 + lVar18) = auVar33._0_16_;
        uVar5 = vmovlpd_avx(auVar33._16_16_);
        *(undefined8 *)(lVar9 + 0x10 + lVar18) = uVar5;
        lVar10 = *(longlong *)(param_2 + 10);
        *(undefined1 (*) [32])(lVar10 + lVar20) = auVar87;
        lVar11 = *(longlong *)(param_2 + 0xc);
        *(undefined1 (*) [16])(lVar11 + lVar18) = auVar57;
        uVar5 = vmovlpd_avx(auVar60._16_16_);
        *(undefined8 *)(lVar11 + 0x10 + lVar18) = uVar5;
        lVar11 = *(longlong *)(param_2 + 0x10);
        *(undefined1 (*) [16])(lVar11 + lVar18) = auVar24;
        uVar5 = vmovlpd_avx(auVar36._16_16_);
        *(undefined8 *)(lVar11 + 0x10 + lVar18) = uVar5;
        lVar11 = *(longlong *)(param_2 + 0x20);
        puVar1 = (undefined8 *)(lVar11 + lVar18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar11 + 0x10 + lVar18) = 0;
        lVar11 = *(longlong *)(param_2 + 0x22);
        puVar1 = (undefined8 *)(lVar11 + lVar18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar11 + 0x10 + lVar18) = 0;
        if (*(char *)(*(longlong *)(param_2 + 0x2c) + lVar19) != '\0') {
          lVar11 = *(longlong *)(param_2 + 0x2e);
          auVar77 = *(undefined1 (*) [16])(lVar11 + 0x18 + lVar18 * 2);
          dVar99 = *(double *)(lVar11 + 0x28 + lVar18 * 2);
          auVar173._16_8_ = dVar99;
          auVar173._0_16_ = auVar77;
          auVar173._24_8_ = 0;
          auVar123 = *(undefined1 (*) [16])(lVar11 + lVar18 * 2);
          dVar100 = *(double *)(lVar11 + 0x10 + lVar18 * 2);
          auVar180._16_8_ = dVar100;
          auVar180._0_16_ = auVar123;
          auVar180._24_8_ = 0;
          auVar27 = vsubpd_avx(auVar173,auVar180);
          auVar28 = vpermpd_avx2(auVar180,0xc9);
          dVar103 = *(double *)(lVar10 + 0x10 + lVar20);
          auVar22 = *(undefined1 (*) [16])(lVar10 + lVar20);
          auVar78 = *(undefined1 (*) [16])(lVar10 + 8 + lVar20);
          auVar153._16_8_ = dVar103;
          auVar153._0_16_ = auVar22;
          auVar153._24_8_ = 0;
          dVar72 = *(double *)(lVar10 + 0x18 + lVar20);
          auVar188._8_8_ = dVar72;
          auVar188._0_8_ = dVar72;
          auVar188._16_8_ = dVar72;
          auVar188._24_8_ = dVar72;
          auVar33 = vblendpd_avx(auVar153,auVar188,8);
          dVar121 = *(double *)(lVar10 + lVar20);
          auVar201._16_8_ = dVar121;
          auVar201._0_16_ = auVar78;
          auVar201._24_8_ = 0;
          auVar26 = vblendpd_avx(auVar201,auVar188,8);
          dVar124 = auVar26._0_8_;
          dVar175 = auVar123._0_8_;
          dVar148 = auVar26._8_8_;
          dVar181 = auVar123._8_8_;
          dVar147 = auVar26._16_8_;
          dVar150 = auVar26._24_8_;
          dVar194 = auVar33._0_8_;
          dVar50 = dVar194 * auVar28._0_8_ - dVar175 * dVar124;
          dVar196 = auVar33._8_8_;
          dVar65 = dVar196 * auVar28._8_8_ - dVar181 * dVar148;
          dVar197 = auVar33._16_8_;
          dVar68 = dVar197 * auVar28._16_8_ - dVar100 * dVar147;
          dVar198 = auVar33._24_8_;
          dVar73 = dVar198 * auVar28._24_8_ - dVar150 * 0.0;
          auVar33 = vpermpd_avx2(auVar173,0xc9);
          dVar51 = dVar194 * auVar33._0_8_ - auVar77._0_8_ * dVar124;
          dVar66 = dVar196 * auVar33._8_8_ - auVar77._8_8_ * dVar148;
          dVar69 = dVar197 * auVar33._16_8_ - dVar99 * dVar147;
          dVar74 = dVar198 * auVar33._24_8_ - dVar150 * 0.0;
          dVar156 = auVar27._0_8_;
          auVar37._0_8_ = dVar156 * __real_3ff0000000000000;
          dVar164 = auVar27._8_8_;
          auVar37._8_8_ = dVar164 * 0.0;
          dVar166 = auVar27._16_8_;
          auVar37._16_8_ = dVar166 * 0.0;
          dVar169 = auVar27._24_8_;
          auVar37._24_8_ = dVar169 * 0.0;
          auVar61._0_8_ = dVar175 + auVar37._0_8_;
          auVar61._8_8_ = dVar181 + auVar37._8_8_;
          auVar61._16_8_ = dVar100 + auVar37._16_8_;
          auVar61._24_8_ = auVar37._24_8_ + 0.0;
          auVar33 = vblendpd_avx(auVar61,ZEXT832(0) << 0x40,8);
          auVar26 = vpermpd_avx2(auVar33,0xc9);
          dVar155 = dVar194 * auVar26._0_8_ - dVar124 * auVar33._0_8_;
          dVar163 = dVar196 * auVar26._8_8_ - dVar148 * auVar33._8_8_;
          dVar165 = dVar197 * auVar26._16_8_ - dVar147 * auVar33._16_8_;
          dVar168 = dVar198 * auVar26._24_8_ - dVar150 * auVar33._24_8_;
          auVar26 = vsubpd_avx(auVar173,auVar37);
          auVar26 = vblendpd_avx(auVar26,ZEXT832(0) << 0x40,8);
          auVar27 = vpermpd_avx2(auVar26,0xc9);
          dVar52 = dVar194 * auVar27._0_8_ - dVar124 * auVar26._0_8_;
          dVar67 = dVar196 * auVar27._8_8_ - dVar148 * auVar26._8_8_;
          dVar70 = dVar197 * auVar27._16_8_ - dVar147 * auVar26._16_8_;
          dVar75 = dVar198 * auVar27._24_8_ - dVar150 * auVar26._24_8_;
          auVar38._0_8_ =
               dVar156 * ___ymm_000000000000000000000000000000003ff00000000000000000000000000000;
          auVar38._8_8_ = dVar164 * _UNK_150aa8e68;
          auVar38._16_8_ = dVar166 * _UNK_150aa8e70;
          auVar38._24_8_ = dVar169 * _UNK_150aa8e78;
          auVar62._0_8_ = dVar175 + auVar38._0_8_;
          auVar62._8_8_ = dVar181 + auVar38._8_8_;
          auVar62._16_8_ = dVar100 + auVar38._16_8_;
          auVar62._24_8_ = auVar38._24_8_ + 0.0;
          auVar31 = ZEXT832(0) << 0x40;
          auVar27 = vblendpd_avx(auVar62,auVar31,8);
          auVar28 = vpermpd_avx2(auVar27,0xc9);
          dVar135 = dVar194 * auVar28._0_8_ - dVar124 * auVar27._0_8_;
          dVar145 = dVar196 * auVar28._8_8_ - dVar148 * auVar27._8_8_;
          dVar146 = dVar197 * auVar28._16_8_ - dVar147 * auVar27._16_8_;
          dVar149 = dVar198 * auVar28._24_8_ - dVar150 * auVar27._24_8_;
          auVar28 = vsubpd_avx(auVar173,auVar38);
          auVar28 = vblendpd_avx(auVar28,auVar31,8);
          auVar29 = vpermpd_avx2(auVar28,0xc9);
          dVar189 = dVar194 * auVar29._0_8_ - dVar124 * auVar28._0_8_;
          dVar191 = dVar196 * auVar29._8_8_ - dVar148 * auVar28._8_8_;
          dVar192 = dVar197 * auVar29._16_8_ - dVar147 * auVar28._16_8_;
          dVar193 = dVar198 * auVar29._24_8_ - dVar150 * auVar28._24_8_;
          auVar39._0_8_ =
               dVar156 * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
          auVar39._8_8_ = dVar164 * _UNK_150aa8e88;
          auVar39._16_8_ = dVar166 * _DAT_150aa8e90;
          auVar39._24_8_ = dVar169 * _UNK_150aa8e98;
          auVar63._0_8_ = dVar175 + auVar39._0_8_;
          auVar63._8_8_ = dVar181 + auVar39._8_8_;
          auVar63._16_8_ = dVar100 + auVar39._16_8_;
          auVar63._24_8_ = auVar39._24_8_ + 0.0;
          auVar29 = vblendpd_avx(auVar63,auVar31,8);
          auVar30 = vpermpd_avx2(auVar29,0xc9);
          dVar156 = dVar194 * auVar30._0_8_ - dVar124 * auVar29._0_8_;
          dVar164 = dVar196 * auVar30._8_8_ - dVar148 * auVar29._8_8_;
          dVar166 = dVar197 * auVar30._16_8_ - dVar147 * auVar29._16_8_;
          dVar169 = dVar198 * auVar30._24_8_ - dVar150 * auVar29._24_8_;
          auVar30 = vsubpd_avx(auVar173,auVar39);
          auVar30 = vblendpd_avx(auVar30,auVar31,8);
          auVar31 = vpermpd_avx2(auVar30,0xc9);
          dVar124 = dVar194 * auVar31._0_8_ - auVar30._0_8_ * dVar124;
          dVar148 = dVar196 * auVar31._8_8_ - auVar30._8_8_ * dVar148;
          dVar147 = dVar197 * auVar31._16_8_ - auVar30._16_8_ * dVar147;
          dVar150 = dVar198 * auVar31._24_8_ - auVar30._24_8_ * dVar150;
          auVar40._0_8_ = dVar50 + dVar50;
          auVar40._8_8_ = dVar65 + dVar65;
          auVar40._16_8_ = dVar68 + dVar68;
          auVar40._24_8_ = dVar73 + dVar73;
          auVar31 = vpermpd_avx2(auVar40,0xc9);
          dVar68 = auVar78._0_8_;
          dVar73 = auVar78._8_8_;
          auVar58 = vpermpd_avx2(auVar40,0xd2);
          dVar50 = auVar22._0_8_;
          auVar195._0_8_ = dVar50 * auVar58._0_8_ - dVar68 * auVar31._0_8_;
          dVar65 = auVar22._8_8_;
          auVar195._8_8_ = dVar65 * auVar58._8_8_ - dVar73 * auVar31._8_8_;
          auVar195._16_8_ = dVar103 * auVar58._16_8_ - dVar121 * auVar31._16_8_;
          auVar195._24_8_ = auVar58._24_8_ * 0.0 - auVar31._24_8_ * 0.0;
          auVar41._0_8_ = dVar51 + dVar51;
          auVar41._8_8_ = dVar66 + dVar66;
          auVar41._16_8_ = dVar69 + dVar69;
          auVar41._24_8_ = dVar74 + dVar74;
          auVar58 = vpermpd_avx2(auVar41,0xc9);
          auVar80 = vpermpd_avx2(auVar41,0xd2);
          auVar154._0_8_ = dVar50 * auVar80._0_8_ - dVar68 * auVar58._0_8_;
          auVar154._8_8_ = dVar65 * auVar80._8_8_ - dVar73 * auVar58._8_8_;
          auVar154._16_8_ = dVar103 * auVar80._16_8_ - dVar121 * auVar58._16_8_;
          auVar154._24_8_ = auVar80._24_8_ * 0.0 - auVar58._24_8_ * 0.0;
          auVar42._0_8_ = dVar155 + dVar155;
          auVar42._8_8_ = dVar163 + dVar163;
          auVar42._16_8_ = dVar165 + dVar165;
          auVar42._24_8_ = dVar168 + dVar168;
          auVar80 = vpermpd_avx2(auVar42,0xc9);
          auVar108 = vpermpd_avx2(auVar42,0xd2);
          auVar184._0_8_ = dVar50 * auVar108._0_8_ - dVar68 * auVar80._0_8_;
          auVar184._8_8_ = dVar65 * auVar108._8_8_ - dVar73 * auVar80._8_8_;
          auVar184._16_8_ = dVar103 * auVar108._16_8_ - dVar121 * auVar80._16_8_;
          auVar184._24_8_ = auVar108._24_8_ * 0.0 - auVar80._24_8_ * 0.0;
          auVar43._0_8_ = dVar52 + dVar52;
          auVar43._8_8_ = dVar67 + dVar67;
          auVar43._16_8_ = dVar70 + dVar70;
          auVar43._24_8_ = dVar75 + dVar75;
          auVar108 = vpermpd_avx2(auVar43,0xc9);
          auVar109 = vpermpd_avx2(auVar43,0xd2);
          auVar174._0_8_ = dVar50 * auVar109._0_8_ - dVar68 * auVar108._0_8_;
          auVar174._8_8_ = dVar65 * auVar109._8_8_ - dVar73 * auVar108._8_8_;
          auVar174._16_8_ = dVar103 * auVar109._16_8_ - dVar121 * auVar108._16_8_;
          auVar174._24_8_ = auVar109._24_8_ * 0.0 - auVar108._24_8_ * 0.0;
          auVar44._0_8_ = dVar135 + dVar135;
          auVar44._8_8_ = dVar145 + dVar145;
          auVar44._16_8_ = dVar146 + dVar146;
          auVar44._24_8_ = dVar149 + dVar149;
          auVar109 = vpermpd_avx2(auVar44,0xc9);
          auVar158 = vpermpd_avx2(auVar44,0xd2);
          auVar120._0_8_ = dVar50 * auVar158._0_8_ - dVar68 * auVar109._0_8_;
          auVar120._8_8_ = dVar65 * auVar158._8_8_ - dVar73 * auVar109._8_8_;
          auVar120._16_8_ = dVar103 * auVar158._16_8_ - dVar121 * auVar109._16_8_;
          auVar120._24_8_ = auVar158._24_8_ * 0.0 - auVar109._24_8_ * 0.0;
          auVar45._0_8_ = dVar189 + dVar189;
          auVar45._8_8_ = dVar191 + dVar191;
          auVar45._16_8_ = dVar192 + dVar192;
          auVar45._24_8_ = dVar193 + dVar193;
          auVar158 = vpermpd_avx2(auVar45,0xc9);
          auVar159 = vpermpd_avx2(auVar45,0xd2);
          auVar190._0_8_ = dVar50 * auVar159._0_8_ - dVar68 * auVar158._0_8_;
          auVar190._8_8_ = dVar65 * auVar159._8_8_ - dVar73 * auVar158._8_8_;
          auVar190._16_8_ = dVar103 * auVar159._16_8_ - dVar121 * auVar158._16_8_;
          auVar190._24_8_ = auVar159._24_8_ * 0.0 - auVar158._24_8_ * 0.0;
          auVar46._0_8_ = dVar156 + dVar156;
          auVar46._8_8_ = dVar164 + dVar164;
          auVar46._16_8_ = dVar166 + dVar166;
          auVar46._24_8_ = dVar169 + dVar169;
          auVar159 = vpermpd_avx2(auVar46,0xc9);
          auVar160 = vpermpd_avx2(auVar46,0xd2);
          auVar162._0_8_ = dVar50 * auVar160._0_8_ - dVar68 * auVar159._0_8_;
          auVar162._8_8_ = dVar65 * auVar160._8_8_ - dVar73 * auVar159._8_8_;
          auVar162._16_8_ = dVar103 * auVar160._16_8_ - dVar121 * auVar159._16_8_;
          auVar162._24_8_ = auVar160._24_8_ * 0.0 - auVar159._24_8_ * 0.0;
          auVar47._0_8_ = dVar124 + dVar124;
          auVar47._8_8_ = dVar148 + dVar148;
          auVar47._16_8_ = dVar147 + dVar147;
          auVar47._24_8_ = dVar150 + dVar150;
          auVar160 = vpermpd_avx2(auVar47,0xc9);
          auVar161 = vpermpd_avx2(auVar47,0xd2);
          auVar144._0_8_ = dVar50 * auVar161._0_8_ - dVar68 * auVar160._0_8_;
          auVar144._8_8_ = dVar65 * auVar161._8_8_ - dVar73 * auVar160._8_8_;
          auVar144._16_8_ = dVar103 * auVar161._16_8_ - dVar121 * auVar160._16_8_;
          auVar144._24_8_ = auVar161._24_8_ * 0.0 - auVar160._24_8_ * 0.0;
          auVar161 = vpermpd_avx2(auVar195,0xc9);
          dVar103 = *(double *)(lVar9 + 0x10 + lVar18);
          auVar123 = *(undefined1 (*) [16])(lVar9 + lVar18);
          auVar64._16_8_ = dVar103;
          auVar64._0_16_ = auVar123;
          auVar64._24_8_ = 0;
          dVar121 = auVar123._0_8_;
          auVar48._0_8_ = dVar121 + dVar72 * auVar31._0_8_ + dVar175 + auVar161._0_8_;
          dVar124 = auVar123._8_8_;
          auVar48._8_8_ = dVar124 + dVar72 * auVar31._8_8_ + dVar181 + auVar161._8_8_;
          auVar48._16_8_ = dVar103 + dVar72 * auVar31._16_8_ + dVar100 + auVar161._16_8_;
          auVar48._24_8_ = dVar72 * auVar31._24_8_ + 0.0 + auVar161._24_8_ + 0.0;
          auVar31 = vpermpd_avx2(auVar154,0xc9);
          auVar88._0_8_ = dVar121 + dVar72 * auVar58._0_8_ + auVar77._0_8_ + auVar31._0_8_;
          auVar88._8_8_ = dVar124 + dVar72 * auVar58._8_8_ + auVar77._8_8_ + auVar31._8_8_;
          auVar88._16_8_ = dVar103 + dVar72 * auVar58._16_8_ + dVar99 + auVar31._16_8_;
          auVar88._24_8_ = dVar72 * auVar58._24_8_ + 0.0 + auVar31._24_8_ + 0.0;
          auVar58 = vminpd_avx(auVar48,auVar88);
          auVar31 = vmaxpd_avx(auVar48,auVar88);
          auVar161 = vpermpd_avx2(auVar184,0xc9);
          auVar89._0_8_ = dVar121 + auVar161._0_8_ + dVar72 * auVar80._0_8_ + auVar33._0_8_;
          auVar89._8_8_ = dVar124 + auVar161._8_8_ + dVar72 * auVar80._8_8_ + auVar33._8_8_;
          auVar89._16_8_ = dVar103 + auVar161._16_8_ + dVar72 * auVar80._16_8_ + auVar33._16_8_;
          auVar89._24_8_ = auVar161._24_8_ + dVar72 * auVar80._24_8_ + auVar33._24_8_ + 0.0;
          auVar58 = vminpd_avx(auVar58,auVar89);
          auVar33 = vmaxpd_avx(auVar31,auVar89);
          auVar31 = vpermpd_avx2(auVar174,0xc9);
          auVar90._0_8_ = dVar121 + auVar31._0_8_ + dVar72 * auVar108._0_8_ + auVar26._0_8_;
          auVar90._8_8_ = dVar124 + auVar31._8_8_ + dVar72 * auVar108._8_8_ + auVar26._8_8_;
          auVar90._16_8_ = dVar103 + auVar31._16_8_ + dVar72 * auVar108._16_8_ + auVar26._16_8_;
          auVar90._24_8_ = auVar31._24_8_ + dVar72 * auVar108._24_8_ + auVar26._24_8_ + 0.0;
          auVar26 = vminpd_avx(auVar58,auVar90);
          auVar33 = vmaxpd_avx(auVar33,auVar90);
          auVar31 = vpermpd_avx2(auVar120,0xc9);
          auVar91._0_8_ = dVar121 + auVar31._0_8_ + dVar72 * auVar109._0_8_ + auVar27._0_8_;
          auVar91._8_8_ = dVar124 + auVar31._8_8_ + dVar72 * auVar109._8_8_ + auVar27._8_8_;
          auVar91._16_8_ = dVar103 + auVar31._16_8_ + dVar72 * auVar109._16_8_ + auVar27._16_8_;
          auVar91._24_8_ = auVar31._24_8_ + dVar72 * auVar109._24_8_ + auVar27._24_8_ + 0.0;
          auVar26 = vminpd_avx(auVar26,auVar91);
          auVar33 = vmaxpd_avx(auVar33,auVar91);
          auVar27 = vpermpd_avx2(auVar190,0xc9);
          auVar92._0_8_ = dVar121 + auVar27._0_8_ + dVar72 * auVar158._0_8_ + auVar28._0_8_;
          auVar92._8_8_ = dVar124 + auVar27._8_8_ + dVar72 * auVar158._8_8_ + auVar28._8_8_;
          auVar92._16_8_ = dVar103 + auVar27._16_8_ + dVar72 * auVar158._16_8_ + auVar28._16_8_;
          auVar92._24_8_ = auVar27._24_8_ + dVar72 * auVar158._24_8_ + auVar28._24_8_ + 0.0;
          auVar26 = vminpd_avx(auVar26,auVar92);
          auVar33 = vmaxpd_avx(auVar33,auVar92);
          auVar27 = vpermpd_avx2(auVar162,0xc9);
          auVar93._0_8_ = dVar121 + auVar27._0_8_ + dVar72 * auVar159._0_8_ + auVar29._0_8_;
          auVar93._8_8_ = dVar124 + auVar27._8_8_ + dVar72 * auVar159._8_8_ + auVar29._8_8_;
          auVar93._16_8_ = dVar103 + auVar27._16_8_ + dVar72 * auVar159._16_8_ + auVar29._16_8_;
          auVar93._24_8_ = auVar27._24_8_ + dVar72 * auVar159._24_8_ + auVar29._24_8_ + 0.0;
          auVar26 = vminpd_avx(auVar26,auVar93);
          auVar33 = vmaxpd_avx(auVar33,auVar93);
          auVar27 = vpermpd_avx2(auVar144,0xc9);
          auVar94._0_8_ = dVar121 + auVar160._0_8_ * dVar72 + auVar30._0_8_ + auVar27._0_8_;
          auVar94._8_8_ = dVar124 + auVar160._8_8_ * dVar72 + auVar30._8_8_ + auVar27._8_8_;
          auVar94._16_8_ = dVar103 + auVar160._16_8_ * dVar72 + auVar30._16_8_ + auVar27._16_8_;
          auVar94._24_8_ = auVar160._24_8_ * dVar72 + auVar30._24_8_ + auVar27._24_8_ + 0.0;
          auVar26 = vminpd_avx(auVar26,auVar94);
          auVar33 = vmaxpd_avx(auVar33,auVar94);
          auVar27 = vsubpd_avx(auVar33,auVar26);
          auVar95._0_8_ = auVar27._0_8_ * param_6;
          auVar95._8_8_ = auVar27._8_8_ * param_6;
          auVar95._16_8_ = auVar27._16_8_ * param_6;
          auVar95._24_8_ = auVar27._24_8_ * param_6;
          auVar27 = vsubpd_avx(auVar26,auVar95);
          auVar96._16_8_ = *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x10 + lVar18);
          auVar96._0_16_ = *(undefined1 (*) [16])(*(longlong *)(param_2 + 4) + lVar18);
          auVar96._24_8_ = 0;
          auVar28 = vsubpd_avx(auVar96,auVar64);
          auVar26 = vminpd_avx(auVar28,ZEXT832(0) << 0x40);
          auVar97._0_8_ = auVar27._0_8_ + auVar26._0_8_;
          auVar97._8_8_ = auVar27._8_8_ + auVar26._8_8_;
          auVar97._16_8_ = auVar27._16_8_ + auVar26._16_8_;
          auVar97._24_8_ = auVar27._24_8_ + auVar26._24_8_;
          auVar26 = vmaxpd_avx(auVar28,ZEXT832(0) << 0x40);
          auVar27 = vsubpd_avx(auVar97,auVar32);
          auVar25._0_8_ = param_7 + auVar33._0_8_ + auVar95._0_8_ + auVar26._0_8_;
          auVar25._8_8_ = param_7 + auVar33._8_8_ + auVar95._8_8_ + auVar26._8_8_;
          auVar49._16_8_ = param_7 + auVar33._16_8_ + auVar95._16_8_ + auVar26._16_8_;
          auVar49._0_16_ = auVar25;
          auVar49._24_8_ = param_7 + auVar33._24_8_ + auVar95._24_8_ + auVar26._24_8_;
          auVar98._16_16_ = auVar25;
          auVar98._0_16_ = auVar27._0_16_;
          auVar33 = vshufpd_avx(auVar27,auVar98,2);
          lVar9 = *(longlong *)(param_2 + 0x30);
          *(undefined1 (*) [32])(lVar9 + lVar18 * 2) = auVar33;
          auVar33 = vpermpd_avx2(auVar49,0xe9);
          *(undefined1 (*) [16])(lVar9 + 0x20 + lVar18 * 2) = auVar33._0_16_;
        }
      }
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x18;
      lVar20 = lVar20 + 0x20;
    } while ((ulonglong)uVar6 * 0x18 != lVar18);
  }
  return;
}

