// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetConstantKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_sse4 @ 140b01420

/* WARNING: Removing unreachable block (ram,0x000140b01995) */
/* WARNING: Removing unreachable block (ram,0x000140b04fba) */
/* WARNING: Removing unreachable block (ram,0x000140b034d1) */
/* WARNING: Removing unreachable block (ram,0x000140b04307) */
/* WARNING: Removing unreachable block (ram,0x000140b03c8b) */
/* WARNING: Removing unreachable block (ram,0x000140b02884) */
/* WARNING: Removing unreachable block (ram,0x000140b03837) */
/* WARNING: Removing unreachable block (ram,0x000140b02134) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  byte bVar30;
  uint unaff_EDI;
  uint uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  longlong lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  bool bVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  float fVar49;
  float fVar106;
  float fVar107;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  longlong lVar108;
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
  float fVar109;
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
  float fVar110;
  longlong lVar111;
  float fVar148;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  longlong lVar150;
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
  float fVar147;
  float fVar151;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  int iVar149;
  int iVar152;
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
  float fVar153;
  float fVar204;
  float fVar205;
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
  float fVar206;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
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
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  uint uVar207;
  uint uVar233;
  undefined1 in_XMM3 [16];
  int iVar234;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  longlong lVar263;
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  float fVar264;
  float fVar265;
  float fVar279;
  float fVar281;
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  float fVar280;
  float fVar282;
  float fVar283;
  float fVar284;
  undefined1 auVar278 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined4 uVar332;
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined4 uVar348;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar333 [16];
  undefined4 uVar349;
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  longlong local_2d8;
  longlong lStack_2d0;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [16];
  undefined1 local_298 [16];
  longlong local_288;
  longlong lStack_280;
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  longlong lStack_250;
  int local_228;
  int local_1f8;
  int local_1d8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168 [4];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  
  lVar26 = (longlong)(int)param_8;
  iVar23 = *(int *)(&DAT_151c6be00 + lVar26 * 4) * *(int *)(&DAT_151c6bde0 + lVar26 * 4);
  uVar39 = 0;
  uVar17 = 0x18;
  if (lVar26 != 3) {
    uVar17 = 0;
  }
  uVar45 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar45 = param_9;
  }
  if (0 < (int)(uVar45 & 0xfffffffc)) {
    auVar51._4_4_ = uVar17;
    auVar51._0_4_ = uVar17;
    auVar51._8_4_ = uVar17;
    auVar51._12_4_ = uVar17;
    auVar50._4_4_ = uVar17;
    auVar50._0_4_ = uVar17;
    auVar50._8_8_ = 0;
    auVar50 = pmovzxdq(auVar50,auVar50);
    auVar51 = pmovzxdq(auVar50,auVar51);
    uVar20 = 0;
    uVar43 = ___xmm_00000001000000010000000100000001;
    uVar44 = _UNK_150631da4;
    uVar46 = _UNK_150631da8;
    uVar47 = _UNK_150631dac;
    do {
      puVar1 = (undefined8 *)(param_2 + (uVar20 & 0xffffffff));
      iVar24 = *(int *)(puVar1 + 1);
      puVar2 = (undefined8 *)(param_2 + 0x10 + (uVar20 & 0xffffffff));
      uVar22 = *puVar2;
      iVar19 = *(int *)(puVar2 + 1);
      uVar48 = *(int *)((longlong)puVar1 + 4) << 4;
      lVar26 = (longlong)(*(int *)((longlong)puVar1 + 0xc) * 0x10);
      lVar27 = (longlong)(*(int *)((longlong)puVar2 + 4) << 4);
      uVar207 = *(uint *)(param_3 + 8 + lVar27);
      uVar28 = (ulonglong)uVar207;
      lVar36 = (longlong)(*(int *)((longlong)puVar2 + 0xc) << 4);
      uVar348 = *(undefined4 *)(param_3 + 8 + lVar36);
      unaff_XMM10._4_4_ = *(undefined4 *)(param_3 + 8 + lVar26);
      unaff_XMM10._0_4_ = *(undefined4 *)(param_3 + 8 + (longlong)(int)uVar48);
      unaff_XMM10._12_4_ = uVar348;
      unaff_XMM10._8_4_ = uVar207;
      uVar233 = *(uint *)(param_3 + 0xc + (longlong)(int)uVar48);
      uVar9 = *(uint *)(param_3 + 0xc + lVar26);
      uVar10 = *(uint *)(param_3 + 0xc + lVar27);
      uVar11 = *(uint *)(param_3 + 0xc + lVar36);
      auVar168._0_4_ = -(uint)(uVar233 == uVar43);
      auVar168._4_4_ = -(uint)(uVar9 == uVar44);
      auVar168._8_4_ = -(uint)(uVar10 == uVar46);
      auVar168._12_4_ = -(uint)(uVar11 == uVar47);
      uVar31 = movmskps(unaff_EDI,auVar168);
      if (uVar31 != 0) {
        bVar30 = (char)((char)uVar31 << 4) >> 4;
        auVar53 = auVar168 & unaff_XMM10;
        lVar36 = param_4 + auVar53._0_4_;
        lVar29 = param_4 + auVar53._4_4_;
        lVar26 = param_4 + auVar53._8_4_;
        lVar27 = param_4 + auVar53._12_4_;
        auVar266 = ZEXT416(*(uint *)(param_4 + auVar53._0_4_));
        bVar42 = (bVar30 & 1) != 0;
        if (bVar42) {
          unaff_XMM12 = blendps(unaff_XMM12,auVar266,1);
        }
        auVar114 = auVar168 & ___xmm_00000004000000040000000400000004;
        auVar115 = ZEXT416(*(uint *)((ulonglong)auVar114._0_4_ + lVar36));
        if (bVar42) {
          in_XMM3 = blendps(in_XMM3,auVar115,1);
        }
        auVar408 = ZEXT416(*(uint *)(param_4 + auVar53._4_4_));
        auVar266 = insertps(auVar266,auVar408,0x10);
        uVar43 = *(uint *)(param_4 + auVar53._8_4_);
        auVar266 = insertps(auVar266,ZEXT416(uVar43),0x20);
        uVar44 = *(uint *)(param_4 + auVar53._12_4_);
        auVar53 = insertps(auVar266,ZEXT416(uVar44),0x30);
        auVar267 = ZEXT416(*(uint *)((ulonglong)auVar114._4_4_ + lVar29));
        auVar266 = insertps(auVar115,auVar267,0x10);
        auVar115 = ZEXT416(*(uint *)((ulonglong)auVar114._8_4_ + lVar26));
        auVar266 = insertps(auVar266,auVar115,0x20);
        uVar46 = *(uint *)((ulonglong)auVar114._12_4_ + lVar27);
        auVar333 = insertps(auVar266,ZEXT416(uVar46),0x30);
        auVar266 = auVar168 & ___xmm_00000008000000080000000800000008;
        uVar48 = auVar266._4_4_;
        uVar47 = *(uint *)((ulonglong)auVar266._0_4_ + lVar36);
        auVar217 = ZEXT416(*(uint *)((ulonglong)uVar48 + lVar29));
        auVar114 = insertps(ZEXT416(uVar47),auVar217,0x10);
        auVar339._0_4_ = auVar53._0_4_ * auVar53._0_4_;
        auVar339._4_4_ = auVar53._4_4_ * auVar53._4_4_;
        auVar339._8_4_ = auVar53._8_4_ * auVar53._8_4_;
        auVar339._12_4_ = auVar53._12_4_ * auVar53._12_4_;
        auVar376 = ZEXT416(*(uint *)((ulonglong)auVar266._8_4_ + lVar26));
        auVar53 = insertps(auVar114,auVar376,0x20);
        unaff_XMM8 = ZEXT416(*(uint *)((ulonglong)auVar266._12_4_ + lVar27));
        auVar53 = insertps(auVar53,unaff_XMM8,0x30);
        auVar114._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar339._0_4_) -
             auVar333._0_4_ * auVar333._0_4_) - auVar53._0_4_ * auVar53._0_4_;
        auVar114._4_4_ =
             ((_UNK_15076b1f4 - auVar339._4_4_) - auVar333._4_4_ * auVar333._4_4_) -
             auVar53._4_4_ * auVar53._4_4_;
        auVar114._8_4_ =
             ((_UNK_15076b1f8 - auVar339._8_4_) - auVar333._8_4_ * auVar333._8_4_) -
             auVar53._8_4_ * auVar53._8_4_;
        auVar114._12_4_ =
             ((_UNK_15076b1fc - auVar339._12_4_) - auVar333._12_4_ * auVar333._12_4_) -
             auVar53._12_4_ * auVar53._12_4_;
        auVar266 = sqrtps(auVar339,auVar114);
        auVar53._0_8_ =
             CONCAT44(auVar266._4_4_ & -(uint)(0.0 < auVar114._4_4_),
                      auVar266._0_4_ & -(uint)(0.0 < auVar114._0_4_));
        auVar53._8_4_ = auVar266._8_4_ & -(uint)(0.0 < auVar114._8_4_);
        auVar53._12_4_ = auVar266._12_4_ & -(uint)(0.0 < auVar114._12_4_);
        auVar266 = unaff_XMM14;
        if (bVar42) {
          unaff_XMM7 = blendps(unaff_XMM7,ZEXT416(uVar47),1);
          auVar266._8_4_ = auVar53._8_4_;
          auVar266._0_8_ = auVar53._0_8_;
          auVar266._12_4_ = auVar53._12_4_;
        }
        bVar42 = (bVar30 & 2) == 0;
        if (!bVar42) {
          unaff_XMM12 = insertps(unaff_XMM12,auVar408,0x10);
          in_XMM3 = insertps(in_XMM3,auVar267,0x10);
          unaff_XMM7 = insertps(unaff_XMM7,auVar217,0x10);
        }
        auVar266 = blendps(unaff_XMM14,auVar266,1);
        if (bVar42) {
          auVar333 = auVar266;
          if ((bVar30 & 4) != 0) goto LAB_140b01a5f;
LAB_140b019ee:
          unaff_XMM6 = blendps(auVar266,auVar333,2);
          auVar266 = unaff_XMM6;
          if (-1 < (char)bVar30) goto LAB_140b01a8f;
LAB_140b01a15:
          unaff_XMM12 = insertps(unaff_XMM12,uVar44,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b01a27;
LAB_140b01a98:
          if (-1 < (char)bVar30) goto LAB_140b01a9a;
LAB_140b01a34:
          unaff_XMM7 = insertps(unaff_XMM7,unaff_XMM8,0x30);
          auVar266 = blendps(auVar266,unaff_XMM6,4);
        }
        else {
          auVar333._8_4_ = auVar53._8_4_;
          auVar333._0_8_ = auVar53._0_8_;
          auVar333._12_4_ = auVar53._12_4_;
          if ((bVar30 & 4) == 0) goto LAB_140b019ee;
LAB_140b01a5f:
          unaff_XMM12 = insertps(unaff_XMM12,uVar43,0x20);
          in_XMM3 = insertps(in_XMM3,auVar115,0x20);
          unaff_XMM7 = insertps(unaff_XMM7,auVar376,0x20);
          auVar266 = blendps(auVar266,auVar333,2);
          unaff_XMM6._8_4_ = (float)auVar53._8_4_;
          unaff_XMM6._0_8_ = auVar53._0_8_;
          unaff_XMM6._12_4_ = (float)auVar53._12_4_;
          if ((char)bVar30 < '\0') goto LAB_140b01a15;
LAB_140b01a8f:
          if (-1 < (char)bVar30) goto LAB_140b01a98;
LAB_140b01a27:
          in_XMM3 = insertps(in_XMM3,uVar46,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b01a34;
LAB_140b01a9a:
          auVar266 = blendps(auVar266,unaff_XMM6,4);
        }
        if (-1 < (char)bVar30) {
          auVar53 = auVar266;
        }
        unaff_XMM14 = blendps(auVar266,auVar53,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
      }
      unaff_EDI = 0;
      if ((uVar31 ^ 0xf) == 0) goto LAB_140b015aa;
      bVar30 = (char)((char)(uVar31 ^ 0xf) << 4) >> 4;
      unaff_EDI = CONCAT31((int3)(uVar31 >> 8),bVar30);
      auVar115._0_4_ = -(uint)((int)uVar233 < ___xmm_00000002000000020000000200000002);
      auVar115._4_4_ = -(uint)((int)uVar9 < _UNK_15066df64);
      auVar115._8_4_ = -(uint)((int)uVar10 < _UNK_15066df68);
      auVar115._12_4_ = -(uint)((int)uVar11 < _UNK_15066df6c);
      auVar115 = auVar115 ^ auVar168;
      iVar18 = movmskps(uVar48,auVar115);
      if (iVar18 == 0) {
        auVar115 = ZEXT816(0);
LAB_140b01b23:
        auVar217._8_4_ = 0xffffffff;
        auVar217._0_8_ = 0xffffffffffffffff;
        auVar217._12_4_ = 0xffffffff;
        auVar115 = auVar115 ^ auVar217;
        if (param_6 <= 0.0) {
          auVar267 = (undefined1  [16])0x0;
          auVar376 = blendvps(local_298,(undefined1  [16])0x0,~auVar168 & auVar115);
          unaff_XMM9 = blendvps(unaff_XMM9,(undefined1  [16])0x0,~auVar168 & auVar115);
          local_298 = auVar376;
        }
        else {
          auVar237._0_4_ = uVar233 - 1;
          auVar237._4_4_ = uVar9 - 1;
          auVar237._8_4_ = uVar10 - 1;
          auVar237._12_4_ = uVar11 - 1;
          if (__real_3f800000 <= param_6) {
            auVar376 = blendvps(local_298,auVar237,~auVar168 & auVar115);
            unaff_XMM9 = blendvps(unaff_XMM9,auVar237,~auVar168 & auVar115);
            auVar267 = (undefined1  [16])0x0;
            local_298 = auVar376;
          }
          else {
            unaff_XMM6._0_4_ = (float)auVar237._0_4_ * param_6;
            unaff_XMM6._4_4_ = (float)auVar237._4_4_ * param_6;
            unaff_XMM6._8_4_ = (float)auVar237._8_4_ * param_6;
            unaff_XMM6._12_4_ = (float)auVar237._12_4_ * param_6;
            auVar53 = roundps(unaff_XMM8,unaff_XMM6,9);
            iVar18 = (int)auVar53._0_4_;
            iVar149 = (int)auVar53._4_4_;
            iVar152 = (int)auVar53._8_4_;
            iVar234 = (int)auVar53._12_4_;
            auVar208._0_4_ =
                 (uint)(auVar237._0_4_ < iVar18) * auVar237._0_4_ |
                 (uint)(auVar237._0_4_ >= iVar18) * iVar18;
            auVar208._4_4_ =
                 (uint)(auVar237._4_4_ < iVar149) * auVar237._4_4_ |
                 (uint)(auVar237._4_4_ >= iVar149) * iVar149;
            auVar208._8_4_ =
                 (uint)(auVar237._8_4_ < iVar152) * auVar237._8_4_ |
                 (uint)(auVar237._8_4_ >= iVar152) * iVar152;
            auVar208._12_4_ =
                 (uint)(auVar237._12_4_ < iVar234) * auVar237._12_4_ |
                 (uint)(auVar237._12_4_ >= iVar234) * iVar234;
            local_298 = blendvps(local_298,auVar208,~auVar168 & auVar115);
            auVar267 = ZEXT816(0);
            if (param_7 != '\x01') {
              unaff_XMM6._0_8_ =
                   CONCAT44(unaff_XMM6._4_4_ - auVar53._4_4_,unaff_XMM6._0_4_ - auVar53._0_4_);
              unaff_XMM6._8_4_ = unaff_XMM6._8_4_ - auVar53._8_4_;
              unaff_XMM6._12_4_ = unaff_XMM6._12_4_ - auVar53._12_4_;
              auVar267._8_4_ = unaff_XMM6._8_4_;
              auVar267._0_8_ = unaff_XMM6._0_8_;
              auVar267._12_4_ = unaff_XMM6._12_4_;
            }
            iVar18 = local_298._0_4_ + 1;
            iVar149 = local_298._4_4_ + 1;
            iVar152 = local_298._8_4_ + 1;
            iVar234 = local_298._12_4_ + 1;
            auVar376._0_4_ =
                 (uint)(auVar237._0_4_ < iVar18) * auVar237._0_4_ |
                 (uint)(auVar237._0_4_ >= iVar18) * iVar18;
            auVar376._4_4_ =
                 (uint)(auVar237._4_4_ < iVar149) * auVar237._4_4_ |
                 (uint)(auVar237._4_4_ >= iVar149) * iVar149;
            auVar376._8_4_ =
                 (uint)(auVar237._8_4_ < iVar152) * auVar237._8_4_ |
                 (uint)(auVar237._8_4_ >= iVar152) * iVar152;
            auVar376._12_4_ =
                 (uint)(auVar237._12_4_ < iVar234) * auVar237._12_4_ |
                 (uint)(auVar237._12_4_ >= iVar234) * iVar234;
            unaff_XMM9 = blendvps(unaff_XMM9,auVar376,~auVar168 & auVar115);
          }
        }
        unaff_XMM11 = blendvps(unaff_XMM11,auVar267,auVar115);
      }
      else {
        auVar376._0_8_ =
             CONCAT44(~auVar115._4_4_ & unaff_XMM9._4_4_,~auVar115._0_4_ & unaff_XMM9._0_4_);
        auVar376._8_4_ = ~auVar115._8_4_ & unaff_XMM9._8_4_;
        auVar376._12_4_ = ~auVar115._12_4_ & unaff_XMM9._12_4_;
        auVar408._0_4_ = -(uint)((int)uVar43 < (int)uVar233);
        auVar408._4_4_ = -(uint)((int)uVar44 < (int)uVar9);
        auVar408._8_4_ = -(uint)((int)uVar46 < (int)uVar10);
        auVar408._12_4_ = -(uint)((int)uVar47 < (int)uVar11);
        unaff_XMM11 = unaff_XMM11 & auVar408;
        local_298._4_4_ = ~auVar115._4_4_ & local_298._4_4_;
        local_298._0_4_ = ~auVar115._0_4_ & local_298._0_4_;
        local_298._8_4_ = ~auVar115._8_4_ & local_298._8_4_;
        local_298._12_4_ = ~auVar115._12_4_ & local_298._12_4_;
        unaff_XMM9._8_4_ = auVar376._8_4_;
        unaff_XMM9._0_8_ = auVar376._0_8_;
        unaff_XMM9._12_4_ = auVar376._12_4_;
        if ((bVar30 & 0xf) != (byte)iVar18) goto LAB_140b01b23;
      }
      auVar54._4_4_ = uVar348;
      auVar54._0_4_ = uVar207;
      auVar54._8_8_ = 0;
      auVar53 = pmovsxdq(auVar376,auVar54);
      unaff_XMM6 = pmovsxdq(unaff_XMM6,unaff_XMM10);
      auVar55._8_4_ = 0xffffffff;
      auVar55._0_8_ = 0xffffffffffffffff;
      auVar55._12_4_ = 0xffffffff;
      unaff_XMM8 = auVar168 ^ auVar55;
      lVar29 = auVar53._8_8_;
      local_268 = auVar51._0_8_;
      lStack_260 = auVar51._8_8_;
      local_258 = auVar50._0_8_;
      lStack_250 = auVar50._8_8_;
      lVar36 = auVar53._0_8_;
      lVar26 = unaff_XMM6._0_8_;
      lVar27 = unaff_XMM6._8_8_;
      if (5 < param_8) {
        auVar64 = (undefined1  [16])0x0;
        if ((bVar30 & 1) != 0) {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,1);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,1);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,1);
          unaff_XMM14 = blendps(unaff_XMM14,ZEXT416((uint)__real_3f800000),1);
        }
        if ((bVar30 & 2) != 0) {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,2);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,2);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,2);
          unaff_XMM14 = insertps(unaff_XMM14,ZEXT416((uint)__real_3f800000),0x10);
        }
        if ((bVar30 & 4) != 0) {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,4);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,4);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,4);
          unaff_XMM14 = insertps(unaff_XMM14,ZEXT416((uint)__real_3f800000),0x20);
        }
        if ((char)bVar30 < '\0') {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,8);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,8);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,8);
          auVar64 = ZEXT416((uint)__real_3f800000);
          unaff_XMM14 = insertps(unaff_XMM14,auVar64,0x30);
        }
        goto LAB_140b02fc0;
      }
      auVar15._4_4_ = iVar23;
      auVar15._0_4_ = iVar23;
      auVar15._8_4_ = iVar23;
      auVar15._12_4_ = iVar23;
      auVar53 = pmulld(local_298,auVar15);
      auVar266 = pmovsxdq(auVar55,auVar53);
      auVar116._8_4_ = auVar53._8_4_;
      auVar116._12_4_ = auVar53._12_4_;
      auVar116._0_8_ = auVar53._8_8_;
      auVar114 = pmovsxdq(auVar116,auVar116);
      lVar111 = auVar114._0_8_;
      lVar150 = auVar114._8_8_;
      lVar263 = auVar266._0_8_;
      lVar108 = auVar266._8_8_;
      uVar348 = unaff_XMM8._8_4_;
      uVar349 = unaff_XMM8._12_4_;
      auVar269 = unaff_XMM14;
      auVar53 = unaff_XMM7;
      switch(param_8) {
      case 0:
        auVar209._0_8_ = lVar36 + local_258 + lVar111;
        auVar209._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar154._0_8_ = lVar26 + local_268 + lVar263;
        auVar154._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar114,unaff_XMM8);
        auVar53 = blendvps((undefined1  [16])0x0,auVar154,auVar168);
        auVar64._4_4_ = uVar348;
        auVar64._0_4_ = uVar348;
        auVar64._8_4_ = (float)uVar349;
        auVar64._12_4_ = (float)uVar349;
        auVar266 = blendvps((undefined1  [16])0x0,auVar209,auVar64);
        lVar150 = param_4 + auVar53._0_8_;
        lVar263 = param_4 + auVar53._8_8_;
        uVar28 = auVar266._8_8_;
        lVar108 = param_4 + auVar266._0_8_;
        lVar111 = param_4 + uVar28;
        auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar168);
        auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar64);
        auVar333 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar168);
        auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar64);
        auVar114 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar168);
        auVar168 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,auVar64);
        if ((bVar30 & 1) == 0) {
          if ((bVar30 & 2) != 0) goto LAB_140b01de2;
LAB_140b02c50:
          if ((bVar30 & 4) != 0) goto LAB_140b01e34;
LAB_140b02ca9:
          auVar53 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + uVar28),0x30);
        }
        else {
          unaff_XMM12 = blendps(unaff_XMM12,ZEXT416(*(uint *)(param_4 + auVar53._0_8_)),1);
          in_XMM3 = pblendw(in_XMM3,ZEXT416(*(uint *)(auVar376._0_8_ + lVar150)),3);
          unaff_XMM7 = blendps(unaff_XMM7,ZEXT416(*(uint *)(auVar333._0_8_ + lVar150)),1);
          auVar64 = ZEXT416(*(uint *)(auVar114._0_8_ + lVar150));
          unaff_XMM14 = pblendw(unaff_XMM14,auVar64,3);
          if ((bVar30 & 2) == 0) goto LAB_140b02c50;
LAB_140b01de2:
          unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + auVar53._8_8_),0x10);
          in_XMM3 = insertps(in_XMM3,*(undefined4 *)(auVar376._8_8_ + lVar263),0x10);
          unaff_XMM7 = insertps(unaff_XMM7,*(undefined4 *)(auVar333._8_8_ + lVar263),0x10);
          unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar114._8_8_ + lVar263),0x10);
          if ((bVar30 & 4) == 0) goto LAB_140b02ca9;
LAB_140b01e34:
          unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + auVar266._0_8_),0x20);
          in_XMM3 = insertps(in_XMM3,*(undefined4 *)(auVar115._0_8_ + lVar108),0x20);
          auVar53 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + uVar28),0x30);
          unaff_XMM7 = insertps(unaff_XMM7,*(undefined4 *)(auVar339._0_8_ + lVar108),0x20);
          unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar168._0_8_ + lVar108),0x20);
        }
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
        if ((char)bVar30 < '\0') {
          in_XMM3 = insertps(in_XMM3,*(undefined4 *)(auVar115._8_8_ + lVar111),0x30);
          unaff_XMM7 = insertps(unaff_XMM7,*(undefined4 *)(auVar339._8_8_ + lVar111),0x30);
          unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar168._8_8_ + lVar111),0x30);
          unaff_XMM12 = auVar53;
        }
        break;
      case 1:
        auVar213._0_8_ = lVar36 + local_258 + lVar111;
        auVar213._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar162._0_8_ = lVar26 + local_268 + lVar263;
        auVar162._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar114,unaff_XMM8);
        auVar53 = blendvps((undefined1  [16])0x0,auVar162,auVar168);
        auVar163._4_4_ = uVar348;
        auVar163._0_4_ = uVar348;
        auVar163._8_4_ = uVar349;
        auVar163._12_4_ = uVar349;
        auVar114 = blendvps((undefined1  [16])0x0,auVar213,auVar163);
        lVar111 = param_4 + auVar53._0_8_;
        uVar28 = param_4 + auVar53._8_8_;
        lVar263 = param_4 + auVar114._0_8_;
        lVar108 = param_4 + auVar114._8_8_;
        auVar115 = ZEXT416(*(uint *)(param_4 + auVar53._0_8_));
        auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar168);
        auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar163);
        auVar168 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar168);
        auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar163);
        bVar42 = (bVar30 & 1) != 0;
        if (bVar42) {
          unaff_XMM12 = blendps(unaff_XMM12,auVar115,1);
        }
        auVar333 = ZEXT416(*(uint *)(auVar376._0_8_ + lVar111));
        local_2e8 = in_XMM3;
        if (bVar42) {
          local_2e8 = blendps(in_XMM3,auVar333,1);
        }
        auVar217 = ZEXT416(*(uint *)(param_4 + auVar53._8_8_));
        auVar53 = insertps(auVar115,auVar217,0x10);
        auVar408 = ZEXT416(*(uint *)(param_4 + auVar114._0_8_));
        auVar53 = insertps(auVar53,auVar408,0x20);
        uVar43 = *(uint *)(param_4 + auVar114._8_8_);
        auVar115 = insertps(auVar53,ZEXT416(uVar43),0x30);
        auVar53 = ZEXT416(*(uint *)(auVar376._8_8_ + uVar28));
        auVar114 = insertps(auVar333,auVar53,0x10);
        auVar333 = ZEXT416(*(uint *)(auVar266._0_8_ + lVar263));
        auVar114 = insertps(auVar114,auVar333,0x20);
        uVar44 = *(uint *)(auVar266._8_8_ + lVar108);
        auVar266 = insertps(auVar114,ZEXT416(uVar44),0x30);
        uVar46 = *(uint *)(auVar168._0_8_ + lVar111);
        auVar376 = ZEXT416(*(uint *)(auVar168._8_8_ + uVar28));
        auVar168 = insertps(ZEXT416(uVar46),auVar376,0x10);
        auVar114 = ZEXT416(*(uint *)(auVar339._0_8_ + lVar263));
        auVar168 = insertps(auVar168,auVar114,0x20);
        uVar47 = *(uint *)(auVar339._8_8_ + lVar108);
        auVar168 = insertps(auVar168,ZEXT416(uVar47),0x30);
        auVar361._0_4_ = auVar115._0_4_ * auVar115._0_4_;
        auVar361._4_4_ = auVar115._4_4_ * auVar115._4_4_;
        auVar361._8_4_ = auVar115._8_4_ * auVar115._8_4_;
        auVar361._12_4_ = auVar115._12_4_ * auVar115._12_4_;
        auVar350._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar361._0_4_) -
             auVar266._0_4_ * auVar266._0_4_) - auVar168._0_4_ * auVar168._0_4_;
        auVar350._4_4_ =
             ((_UNK_15076b1f4 - auVar361._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
             auVar168._4_4_ * auVar168._4_4_;
        auVar350._8_4_ =
             ((_UNK_15076b1f8 - auVar361._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
             auVar168._8_4_ * auVar168._8_4_;
        auVar350._12_4_ =
             ((_UNK_15076b1fc - auVar361._12_4_) - auVar266._12_4_ * auVar266._12_4_) -
             auVar168._12_4_ * auVar168._12_4_;
        auVar168 = sqrtps(auVar361,auVar350);
        auVar357._0_8_ =
             CONCAT44(auVar168._4_4_ & -(uint)(0.0 < auVar350._4_4_),
                      auVar168._0_4_ & -(uint)(0.0 < auVar350._0_4_));
        auVar357._8_4_ = auVar168._8_4_ & -(uint)(0.0 < auVar350._8_4_);
        auVar357._12_4_ = auVar168._12_4_ & -(uint)(0.0 < auVar350._12_4_);
        auVar120 = unaff_XMM14;
        if (bVar42) {
          unaff_XMM7 = blendps(unaff_XMM7,ZEXT416(uVar46),1);
          auVar120._8_4_ = auVar357._8_4_;
          auVar120._0_8_ = auVar357._0_8_;
          auVar120._12_4_ = auVar357._12_4_;
        }
        if ((bVar30 & 2) == 0) {
          auVar412 = blendps(unaff_XMM14,auVar120,1);
          auVar168 = auVar412;
          in_XMM3 = local_2e8;
          if ((bVar30 & 4) != 0) goto LAB_140b04556;
LAB_140b0455f:
          auVar64 = blendps(auVar168,auVar412,2);
          auVar168 = auVar64;
          if (-1 < (char)bVar30) goto LAB_140b04591;
LAB_140b04601:
          unaff_XMM12 = insertps(unaff_XMM12,uVar43,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b0460f;
LAB_140b04593:
          if (-1 < (char)bVar30) goto LAB_140b04599;
LAB_140b04620:
          unaff_XMM7 = insertps(unaff_XMM7,uVar47,0x30);
          auVar53 = blendps(auVar168,auVar64,4);
        }
        else {
          unaff_XMM12 = insertps(unaff_XMM12,auVar217,0x10);
          local_2e8 = insertps(local_2e8,auVar53,0x10);
          unaff_XMM7 = insertps(unaff_XMM7,auVar376,0x10);
          auVar168 = blendps(unaff_XMM14,auVar120,1);
          auVar412._8_4_ = auVar357._8_4_;
          auVar412._0_8_ = auVar357._0_8_;
          auVar412._12_4_ = auVar357._12_4_;
          in_XMM3 = local_2e8;
          if ((bVar30 & 4) == 0) goto LAB_140b0455f;
LAB_140b04556:
          unaff_XMM12 = insertps(unaff_XMM12,auVar408,0x20);
          in_XMM3 = insertps(local_2e8,auVar333,0x20);
          unaff_XMM7 = insertps(unaff_XMM7,auVar114,0x20);
          auVar168 = blendps(auVar168,auVar412,2);
          auVar64._8_4_ = (float)auVar357._8_4_;
          auVar64._0_8_ = auVar357._0_8_;
          auVar64._12_4_ = (float)auVar357._12_4_;
          if ((char)bVar30 < '\0') goto LAB_140b04601;
LAB_140b04591:
          if (-1 < (char)bVar30) goto LAB_140b04593;
LAB_140b0460f:
          in_XMM3 = insertps(in_XMM3,uVar44,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b04620;
LAB_140b04599:
          auVar53 = blendps(auVar168,auVar64,4);
        }
        if (-1 < (char)bVar30) {
          auVar357 = auVar53;
        }
        goto LAB_140b02538;
      case 2:
        auVar211._0_8_ = lVar36 + local_258 + lVar111;
        auVar211._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar157._0_8_ = lVar26 + local_268 + lVar263;
        auVar157._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar114,unaff_XMM8);
        auVar114 = blendvps((undefined1  [16])0x0,auVar157,auVar168);
        auVar158._4_4_ = uVar348;
        auVar158._0_4_ = uVar348;
        auVar158._8_4_ = uVar349;
        auVar158._12_4_ = uVar349;
        auVar339 = blendvps((undefined1  [16])0x0,auVar211,auVar158);
        lVar263 = param_4 + auVar114._0_8_;
        lVar108 = param_4 + auVar114._8_8_;
        lVar111 = param_4 + auVar339._0_8_;
        lVar150 = param_4 + auVar339._8_8_;
        auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar168);
        auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,auVar158);
        auVar333 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar168);
        auVar266 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar158);
        auVar58._0_4_ =
             (float)(int)((uint)*(ushort *)(param_4 + auVar114._0_8_) +
                         ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar58._4_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar114._8_8_) + _UNK_151c6b8e4);
        auVar58._8_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar339._0_8_) + _UNK_151c6b8e8);
        auVar58._12_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar339._8_8_) + _UNK_151c6b8ec);
        auVar64 = divps(auVar58,___xmm_46fffe0046fffe0046fffe0046fffe00);
        bVar42 = (bVar30 & 1) != 0;
        auVar168 = unaff_XMM12;
        if (bVar42) {
          auVar168 = auVar64;
        }
        uVar8 = *(ushort *)(auVar333._0_8_ + lVar263);
        uVar28 = (ulonglong)uVar8;
        auVar118._0_4_ =
             (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar263) +
                         ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar118._4_4_ = (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar108) + _UNK_151c6b8e4);
        auVar118._8_4_ = (float)(int)((uint)*(ushort *)(auVar376._0_8_ + lVar111) + _UNK_151c6b8e8);
        auVar118._12_4_ = (float)(int)((uint)*(ushort *)(auVar376._8_8_ + lVar150) + _UNK_151c6b8ec)
        ;
        auVar123 = divps(auVar118,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar159._0_4_ = (float)(int)((uint)uVar8 + ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar159._4_4_ = (float)(int)((uint)*(ushort *)(auVar333._8_8_ + lVar108) + _UNK_151c6b8e4);
        auVar159._8_4_ = (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar111) + _UNK_151c6b8e8);
        auVar159._12_4_ = (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar150) + _UNK_151c6b8ec)
        ;
        auVar266 = divps(auVar159,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar268._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar64._0_4_ * auVar64._0_4_) -
             auVar123._0_4_ * auVar123._0_4_) - auVar266._0_4_ * auVar266._0_4_;
        auVar268._4_4_ =
             ((_UNK_15076b1f4 - auVar64._4_4_ * auVar64._4_4_) - auVar123._4_4_ * auVar123._4_4_) -
             auVar266._4_4_ * auVar266._4_4_;
        auVar268._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar123._8_4_ * auVar123._8_4_) -
             auVar266._8_4_ * auVar266._8_4_;
        auVar268._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar123._12_4_ * auVar123._12_4_
             ) - auVar266._12_4_ * auVar266._12_4_;
        auVar114 = sqrtps(auVar376,auVar268);
        auVar357._0_8_ =
             CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar268._4_4_),
                      auVar114._0_4_ & -(uint)(0.0 < auVar268._0_4_));
        auVar357._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar268._8_4_);
        auVar357._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar268._12_4_);
        auVar115 = in_XMM3;
        if (bVar42) {
          auVar269._8_4_ = auVar357._8_4_;
          auVar269._0_8_ = auVar357._0_8_;
          auVar269._12_4_ = auVar357._12_4_;
          auVar53 = auVar266;
          auVar115 = auVar123;
        }
        auVar168 = blendps(unaff_XMM12,auVar168,1);
        bVar42 = (bVar30 & 2) == 0;
        auVar114 = auVar168;
        if (!bVar42) {
          auVar114 = auVar64;
        }
        auVar115 = blendps(in_XMM3,auVar115,1);
        goto joined_r0x000140b02ef9;
      case 3:
        auVar114 = ~auVar168 & unaff_XMM10;
        lVar4 = param_4 + auVar114._0_4_;
        lVar5 = param_4 + auVar114._4_4_;
        uVar28 = param_4 + auVar114._8_4_;
        auVar270._0_8_ = lVar36 + local_258 + lVar111;
        auVar270._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar212._0_8_ = lVar26 + local_268 + lVar263;
        auVar212._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar53 = pmovsxdq(auVar266,unaff_XMM8);
        auVar376 = blendvps((undefined1  [16])0x0,auVar212,auVar53);
        auVar59._4_4_ = uVar348;
        auVar59._0_4_ = uVar348;
        auVar59._8_4_ = uVar349;
        auVar59._12_4_ = uVar349;
        auVar115 = blendvps(ZEXT816(0),auVar270,auVar59);
        auVar53 = insertps(ZEXT416(*(uint *)(param_4 + auVar114._0_4_)),
                           *(undefined4 *)(param_4 + auVar114._4_4_),0x10);
        auVar53 = insertps(auVar53,*(undefined4 *)(param_4 + auVar114._8_4_),0x20);
        auVar266 = insertps(auVar53,*(undefined4 *)(param_4 + auVar114._12_4_),0x30);
        auVar53 = ~auVar168 & ___xmm_0000000c0000000c0000000c0000000c;
        auVar339 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar5),0x10);
        auVar339 = insertps(auVar339,*(undefined4 *)(auVar53._8_4_ + uVar28),0x20);
        lVar263 = param_4 + auVar114._12_4_;
        auVar114 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar263),0x30);
        uVar43 = *(uint *)(param_4 + auVar376._0_8_);
        uVar44 = *(uint *)(param_4 + auVar376._8_8_);
        uVar46 = *(uint *)(param_4 + auVar115._0_8_);
        uVar47 = *(uint *)(param_4 + auVar115._8_8_);
        auVar60._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
        auVar60._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
        auVar60._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
        auVar60._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
        auVar53 = divps(auVar60,___xmm_447fc000447fc000447fc000447fc000);
        fVar49 = auVar53._0_4_ * auVar114._0_4_ + auVar266._0_4_;
        fVar106 = auVar53._4_4_ * auVar114._4_4_ + auVar266._4_4_;
        auVar64._0_8_ = CONCAT44(fVar106,fVar49);
        auVar64._8_4_ = auVar53._8_4_ * auVar114._8_4_ + auVar266._8_4_;
        auVar64._12_4_ = auVar53._12_4_ * auVar114._12_4_ + auVar266._12_4_;
        auVar287._0_4_ =
             (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                         ___xmm_fffffe01fffffe01fffffe01fffffe01);
        auVar287._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
        auVar287._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
        auVar287._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
        auVar53 = divps(auVar287,___xmm_43ff800043ff800043ff800043ff8000);
        bVar42 = (bVar30 & 1) != 0;
        auVar358 = unaff_XMM12;
        if (bVar42) {
          auVar358._8_4_ = auVar64._8_4_;
          auVar358._0_8_ = auVar64._0_8_;
          auVar358._12_4_ = auVar64._12_4_;
        }
        auVar266 = ~auVar168 & ___xmm_00000004000000040000000400000004;
        auVar114 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar114 = insertps(auVar114,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar115 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        auVar266 = ~auVar168 & ___xmm_00000008000000080000000800000008;
        auVar114 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar114 = insertps(auVar114,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        auVar266 = ~auVar168 & ___xmm_00000010000000100000001000000010;
        auVar339 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar339 = insertps(auVar339,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar339 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        auVar266 = ~auVar168 & ___xmm_00000014000000140000001400000014;
        auVar168 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar168 = insertps(auVar168,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar168 = insertps(auVar168,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        fVar107 = auVar168._0_4_ * auVar53._0_4_ + auVar114._0_4_;
        fVar109 = auVar168._4_4_ * auVar53._4_4_ + auVar114._4_4_;
        auVar119._0_8_ = CONCAT44(fVar109,fVar107);
        auVar119._8_4_ = auVar168._8_4_ * auVar53._8_4_ + auVar114._8_4_;
        auVar119._12_4_ = auVar168._12_4_ * auVar53._12_4_ + auVar114._12_4_;
        auVar369._0_4_ =
             (uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
             ___xmm_fffffc01fffffc01fffffc01fffffc01;
        auVar369._4_4_ = (uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864;
        auVar369._8_4_ = (uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868;
        auVar369._12_4_ = (uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c;
        auVar160._0_4_ = (float)auVar369._0_4_;
        auVar160._4_4_ = (float)auVar369._4_4_;
        auVar160._8_4_ = (float)auVar369._8_4_;
        auVar160._12_4_ = (float)auVar369._12_4_;
        auVar168 = divps(auVar160,___xmm_447fc000447fc000447fc000447fc000);
        fVar110 = auVar168._0_4_ * auVar339._0_4_ + auVar115._0_4_;
        fVar147 = auVar168._4_4_ * auVar339._4_4_ + auVar115._4_4_;
        auVar161._0_8_ = CONCAT44(fVar147,fVar110);
        auVar161._8_4_ = auVar168._8_4_ * auVar339._8_4_ + auVar115._8_4_;
        auVar161._12_4_ = auVar168._12_4_ * auVar339._12_4_ + auVar115._12_4_;
        auVar271._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - fVar49 * fVar49) - fVar110 * fVar110) -
             fVar107 * fVar107;
        auVar271._4_4_ =
             ((_UNK_15076b1f4 - fVar106 * fVar106) - fVar147 * fVar147) - fVar109 * fVar109;
        auVar271._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar161._8_4_ * auVar161._8_4_) -
             auVar119._8_4_ * auVar119._8_4_;
        auVar271._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar161._12_4_ * auVar161._12_4_
             ) - auVar119._12_4_ * auVar119._12_4_;
        auVar168 = sqrtps(auVar369,auVar271);
        auVar370._0_8_ =
             CONCAT44(auVar168._4_4_ & -(uint)(0.0 < auVar271._4_4_),
                      auVar168._0_4_ & -(uint)(0.0 < auVar271._0_4_));
        auVar370._8_4_ = auVar168._8_4_ & -(uint)(0.0 < auVar271._8_4_);
        auVar370._12_4_ = auVar168._12_4_ & -(uint)(0.0 < auVar271._12_4_);
        auVar272 = unaff_XMM14;
        auVar288 = in_XMM3;
        auVar394 = unaff_XMM7;
        if (bVar42) {
          auVar288._8_4_ = auVar161._8_4_;
          auVar288._0_8_ = auVar161._0_8_;
          auVar288._12_4_ = auVar161._12_4_;
          auVar394._8_4_ = auVar119._8_4_;
          auVar394._0_8_ = auVar119._0_8_;
          auVar394._12_4_ = auVar119._12_4_;
          auVar272._8_4_ = auVar370._8_4_;
          auVar272._0_8_ = auVar370._0_8_;
          auVar272._12_4_ = auVar370._12_4_;
        }
        auVar168 = blendps(unaff_XMM12,auVar358,1);
        if ((bVar30 & 2) == 0) {
          auVar266 = blendps(in_XMM3,auVar288,1);
          auVar114 = blendps(unaff_XMM7,auVar394,1);
          auVar409 = blendps(unaff_XMM14,auVar272,1);
          auVar289 = auVar266;
          auVar359 = auVar114;
          auVar387 = auVar168;
          auVar53 = auVar409;
        }
        else {
          auVar387._8_4_ = auVar64._8_4_;
          auVar387._0_8_ = auVar64._0_8_;
          auVar387._12_4_ = auVar64._12_4_;
          auVar266 = blendps(in_XMM3,auVar288,1);
          auVar289._8_4_ = auVar161._8_4_;
          auVar289._0_8_ = auVar161._0_8_;
          auVar289._12_4_ = auVar161._12_4_;
          auVar114 = blendps(unaff_XMM7,auVar394,1);
          auVar359._8_4_ = auVar119._8_4_;
          auVar359._0_8_ = auVar119._0_8_;
          auVar359._12_4_ = auVar119._12_4_;
          auVar53 = blendps(unaff_XMM14,auVar272,1);
          auVar409._8_4_ = auVar370._8_4_;
          auVar409._0_8_ = auVar370._0_8_;
          auVar409._12_4_ = auVar370._12_4_;
        }
        auVar168 = blendps(auVar168,auVar387,2);
        if ((bVar30 & 4) == 0) {
          auVar266 = blendps(auVar266,auVar289,2);
          auVar114 = blendps(auVar114,auVar359,2);
          auVar410 = blendps(auVar53,auVar409,2);
          auVar168 = blendps(auVar168,auVar168,4);
          auVar290 = auVar266;
          auVar360 = auVar114;
          auVar53 = auVar410;
          if (-1 < (char)bVar30) goto LAB_140b02913;
LAB_140b0298b:
          auVar266 = blendps(auVar266,auVar290,4);
          if (-1 < (char)bVar30) goto LAB_140b02993;
LAB_140b0291f:
          auVar114 = blendps(auVar114,auVar360,4);
          if (-1 < (char)bVar30) goto LAB_140b02931;
LAB_140b029a8:
          auVar53 = blendps(auVar53,auVar410,4);
        }
        else {
          auVar388._8_4_ = auVar64._8_4_;
          auVar388._0_8_ = auVar64._0_8_;
          auVar388._12_4_ = auVar64._12_4_;
          auVar266 = blendps(auVar266,auVar289,2);
          auVar290._8_4_ = auVar161._8_4_;
          auVar290._0_8_ = auVar161._0_8_;
          auVar290._12_4_ = auVar161._12_4_;
          auVar114 = blendps(auVar114,auVar359,2);
          auVar360._8_4_ = auVar119._8_4_;
          auVar360._0_8_ = auVar119._0_8_;
          auVar360._12_4_ = auVar119._12_4_;
          auVar53 = blendps(auVar53,auVar409,2);
          auVar410._8_4_ = auVar370._8_4_;
          auVar410._0_8_ = auVar370._0_8_;
          auVar410._12_4_ = auVar370._12_4_;
          auVar168 = blendps(auVar168,auVar388,4);
          if ((char)bVar30 < '\0') goto LAB_140b0298b;
LAB_140b02913:
          auVar64 = auVar168;
          auVar266 = blendps(auVar266,auVar290,4);
          auVar168 = auVar64;
          if ((char)bVar30 < '\0') goto LAB_140b0291f;
LAB_140b02993:
          auVar161 = auVar266;
          auVar114 = blendps(auVar114,auVar360,4);
          auVar266 = auVar161;
          if ((char)bVar30 < '\0') goto LAB_140b029a8;
LAB_140b02931:
          auVar53 = blendps(auVar53,auVar410,4);
          auVar119 = auVar114;
        }
        if (-1 < (char)bVar30) {
          auVar370 = auVar53;
        }
        unaff_XMM12 = blendps(auVar168,auVar64,8);
        in_XMM3 = blendps(auVar266,auVar161,8);
        unaff_XMM7 = blendps(auVar114,auVar119,8);
        unaff_XMM14 = blendps(auVar53,auVar370,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
        break;
      case 4:
        auVar210._0_8_ = lVar36 + local_258 + lVar111;
        auVar210._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar155._0_8_ = lVar26 + local_268 + lVar263;
        auVar155._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar266,unaff_XMM8);
        auVar168 = blendvps((undefined1  [16])0x0,auVar155,auVar168);
        auVar56._4_4_ = uVar348;
        auVar56._0_4_ = uVar348;
        auVar56._8_4_ = uVar349;
        auVar56._12_4_ = uVar349;
        auVar53 = blendvps(ZEXT816(0),auVar210,auVar56);
        uVar43 = *(uint *)(param_4 + auVar168._0_8_);
        uVar44 = *(uint *)(param_4 + auVar168._8_8_);
        uVar46 = *(uint *)(param_4 + auVar53._0_8_);
        uVar47 = *(uint *)(param_4 + auVar53._8_8_);
        auVar57._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
        auVar57._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
        auVar57._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
        auVar57._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
        auVar64 = divps(auVar57,___xmm_447fc000447fc000447fc000447fc000);
        auVar117._0_4_ =
             (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                         ___xmm_fffffe01fffffe01fffffe01fffffe01);
        auVar117._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
        auVar117._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
        auVar117._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
        auVar168 = divps(auVar117,___xmm_43ff800043ff800043ff800043ff8000);
        bVar42 = (bVar30 & 1) == 0;
        auVar53 = unaff_XMM12;
        if (!bVar42) {
          auVar53 = auVar64;
        }
        auVar156._0_4_ =
             (float)(int)((uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                         ___xmm_fffffc01fffffc01fffffc01fffffc01);
        auVar156._4_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
        auVar156._8_4_ = (float)(int)((uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
        auVar156._12_4_ = (float)(int)((uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
        auVar266 = divps(auVar156,___xmm_447fc000447fc000447fc000447fc000);
        auVar285._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar64._0_4_ * auVar64._0_4_) -
             auVar266._0_4_ * auVar266._0_4_) - auVar168._0_4_ * auVar168._0_4_;
        auVar285._4_4_ =
             ((_UNK_15076b1f4 - auVar64._4_4_ * auVar64._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
             auVar168._4_4_ * auVar168._4_4_;
        auVar285._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
             auVar168._8_4_ * auVar168._8_4_;
        auVar285._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar266._12_4_ * auVar266._12_4_
             ) - auVar168._12_4_ * auVar168._12_4_;
        auVar114 = sqrtps(unaff_XMM10,auVar285);
        auVar356._0_8_ =
             CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar285._4_4_),
                      auVar114._0_4_ & -(uint)(0.0 < auVar285._0_4_));
        auVar356._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar285._8_4_);
        auVar356._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar285._12_4_);
        if (bVar42) {
          auVar115 = blendps(unaff_XMM12,auVar53,1);
          auVar286 = unaff_XMM14;
          auVar53 = unaff_XMM7;
          auVar114 = in_XMM3;
          if ((bVar30 & 2) != 0) goto LAB_140b020f4;
LAB_140b01ffd:
          auVar333 = blendps(in_XMM3,auVar114,1);
          auVar408 = blendps(unaff_XMM7,auVar53,1);
          auVar406 = blendps(unaff_XMM14,auVar286,1);
          auVar53 = auVar333;
          auVar114 = auVar408;
          auVar339 = auVar115;
          auVar376 = auVar406;
        }
        else {
          auVar286._8_4_ = auVar356._8_4_;
          auVar286._0_8_ = auVar356._0_8_;
          auVar286._12_4_ = auVar356._12_4_;
          auVar115 = blendps(unaff_XMM12,auVar53,1);
          auVar53 = auVar168;
          auVar114 = auVar266;
          if ((bVar30 & 2) == 0) goto LAB_140b01ffd;
LAB_140b020f4:
          auVar333 = blendps(in_XMM3,auVar114,1);
          auVar408 = blendps(unaff_XMM7,auVar53,1);
          auVar376 = blendps(unaff_XMM14,auVar286,1);
          auVar406._8_4_ = auVar356._8_4_;
          auVar406._0_8_ = auVar356._0_8_;
          auVar406._12_4_ = auVar356._12_4_;
          auVar53 = auVar266;
          auVar114 = auVar168;
          auVar339 = auVar64;
        }
        auVar115 = blendps(auVar115,auVar339,2);
        if ((bVar30 & 4) == 0) {
          auVar333 = blendps(auVar333,auVar53,2);
          auVar408 = blendps(auVar408,auVar114,2);
          auVar407 = blendps(auVar376,auVar406,2);
          auVar53 = blendps(auVar115,auVar115,4);
          auVar114 = auVar333;
          auVar115 = auVar408;
          auVar339 = auVar407;
          if (-1 < (char)bVar30) goto LAB_140b020a7;
LAB_140b0218e:
          auVar114 = blendps(auVar333,auVar114,4);
          if (-1 < (char)bVar30) goto LAB_140b0219a;
LAB_140b020b7:
          auVar115 = blendps(auVar408,auVar115,4);
          if (-1 < (char)bVar30) goto LAB_140b020c4;
LAB_140b021aa:
          auVar339 = blendps(auVar339,auVar407,4);
        }
        else {
          auVar333 = blendps(auVar333,auVar53,2);
          auVar408 = blendps(auVar408,auVar114,2);
          auVar339 = blendps(auVar376,auVar406,2);
          auVar407._8_4_ = auVar356._8_4_;
          auVar407._0_8_ = auVar356._0_8_;
          auVar407._12_4_ = auVar356._12_4_;
          auVar53 = blendps(auVar115,auVar64,4);
          auVar114 = auVar266;
          auVar115 = auVar168;
          if ((char)bVar30 < '\0') goto LAB_140b0218e;
LAB_140b020a7:
          auVar64 = auVar53;
          auVar114 = blendps(auVar333,auVar114,4);
          auVar53 = auVar64;
          if ((char)bVar30 < '\0') goto LAB_140b020b7;
LAB_140b0219a:
          auVar266 = auVar114;
          auVar115 = blendps(auVar408,auVar115,4);
          auVar114 = auVar266;
          if ((char)bVar30 < '\0') goto LAB_140b021aa;
LAB_140b020c4:
          auVar339 = blendps(auVar339,auVar407,4);
          auVar168 = auVar115;
        }
        if (-1 < (char)bVar30) {
          auVar356 = auVar339;
        }
        unaff_XMM12 = blendps(auVar53,auVar64,8);
        in_XMM3 = blendps(auVar114,auVar266,8);
        unaff_XMM7 = blendps(auVar115,auVar168,8);
        unaff_XMM14 = blendps(auVar339,auVar356,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
        break;
      case 5:
        auVar214._0_8_ = lVar36 + local_258 + lVar111;
        auVar214._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar164._0_8_ = lVar26 + local_268 + lVar263;
        auVar164._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar266,unaff_XMM8);
        auVar168 = blendvps((undefined1  [16])0x0,auVar164,auVar168);
        auVar61._4_4_ = uVar348;
        auVar61._0_4_ = uVar348;
        auVar61._8_4_ = uVar349;
        auVar61._12_4_ = uVar349;
        auVar266 = blendvps(ZEXT816(0),auVar214,auVar61);
        uVar43 = *(uint *)(param_4 + auVar168._0_8_);
        uVar44 = *(uint *)(param_4 + auVar168._8_8_);
        auVar362._4_4_ = uVar44;
        auVar362._0_4_ = uVar43;
        uVar46 = *(uint *)(param_4 + auVar266._0_8_);
        uVar47 = *(uint *)(param_4 + auVar266._8_8_);
        auVar362._12_4_ = uVar47;
        auVar362._8_4_ = uVar46;
        auVar62._0_4_ = uVar43 >> 0x15;
        auVar62._4_4_ = uVar44 >> 0x15;
        auVar62._8_4_ = uVar46 >> 0x15;
        auVar62._12_4_ = uVar47 >> 0x15;
        auVar121._0_4_ = uVar43 >> 5;
        auVar121._4_4_ = uVar44 >> 5;
        auVar121._8_4_ = uVar46 >> 5;
        auVar121._12_4_ = uVar47 >> 5;
        auVar168 = auVar62 & ___xmm_00000380000003800000038000000380;
        auVar63._0_4_ = auVar168._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
        auVar63._4_4_ = auVar168._4_4_ + _UNK_151c6b7b4;
        auVar63._8_4_ = auVar168._8_4_ + _UNK_151c6b7b8;
        auVar63._12_4_ = auVar168._12_4_ + _UNK_151c6b7bc;
        auVar64 = auVar63 | auVar62 & ___xmm_00000400000004000000040000000400 |
                            auVar121 & ___xmm_007f0000007f0000007f0000007f0000;
        bVar42 = (bVar30 & 1) == 0;
        auVar168 = unaff_XMM12;
        if (!bVar42) {
          auVar168 = auVar64;
        }
        auVar122._0_4_ = uVar43 >> 10;
        auVar122._4_4_ = uVar44 >> 10;
        auVar122._8_4_ = uVar46 >> 10;
        auVar122._12_4_ = uVar47 >> 10;
        auVar165._0_4_ = uVar43 << 6;
        auVar165._4_4_ = uVar44 << 6;
        auVar165._8_4_ = uVar46 << 6;
        auVar165._12_4_ = uVar47 << 6;
        auVar266 = auVar122 & ___xmm_00000380000003800000038000000380;
        auVar123._0_4_ = auVar266._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
        auVar123._4_4_ = auVar266._4_4_ + _UNK_151c6b7b4;
        auVar123._8_4_ = auVar266._8_4_ + _UNK_151c6b7b8;
        auVar123._12_4_ = auVar266._12_4_ + _UNK_151c6b7bc;
        auVar123 = auVar123 |
                   auVar122 & ___xmm_00000400000004000000040000000400 |
                   auVar165 & ___xmm_007f0000007f0000007f0000007f0000;
        auVar266 = auVar362 & ___xmm_000001c0000001c0000001c0000001c0;
        auVar215._0_4_ = uVar43 << 0x11;
        auVar215._4_4_ = uVar44 << 0x11;
        auVar215._8_4_ = uVar46 << 0x11;
        auVar215._12_4_ = uVar47 << 0x11;
        auVar166._0_4_ = auVar266._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
        auVar166._4_4_ = auVar266._4_4_ + _UNK_151c6b824;
        auVar166._8_4_ = auVar266._8_4_ + _UNK_151c6b828;
        auVar166._12_4_ = auVar266._12_4_ + _UNK_151c6b82c;
        auVar266 = auVar166 | auVar362 & ___xmm_00000200000002000000020000000200 |
                   auVar215 & ___xmm_007e0000007e0000007e0000007e0000;
        auVar273._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar64._0_4_ * auVar64._0_4_) -
             auVar123._0_4_ * auVar123._0_4_) - auVar266._0_4_ * auVar266._0_4_;
        auVar273._4_4_ =
             ((_UNK_15076b1f4 - auVar64._4_4_ * auVar64._4_4_) - auVar123._4_4_ * auVar123._4_4_) -
             auVar266._4_4_ * auVar266._4_4_;
        auVar273._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar123._8_4_ * auVar123._8_4_) -
             auVar266._8_4_ * auVar266._8_4_;
        auVar273._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar123._12_4_ * auVar123._12_4_
             ) - auVar266._12_4_ * auVar266._12_4_;
        auVar114 = sqrtps(auVar362 & ___xmm_00000200000002000000020000000200,auVar273);
        auVar357._0_8_ =
             CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar273._4_4_),
                      auVar114._0_4_ & -(uint)(0.0 < auVar273._0_4_));
        auVar357._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar273._8_4_);
        auVar357._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar273._12_4_);
        if (bVar42) {
          auVar168 = blendps(unaff_XMM12,auVar168,1);
          auVar114 = in_XMM3;
        }
        else {
          auVar269._8_4_ = auVar357._8_4_;
          auVar269._0_8_ = auVar357._0_8_;
          auVar269._12_4_ = auVar357._12_4_;
          auVar168 = blendps(unaff_XMM12,auVar168,1);
          auVar114 = auVar123;
          auVar53 = auVar266;
        }
        bVar42 = (bVar30 & 2) == 0;
        if (bVar42) {
          auVar115 = blendps(in_XMM3,auVar114,1);
          auVar114 = auVar168;
        }
        else {
          auVar115 = blendps(in_XMM3,auVar114,1);
          auVar114 = auVar64;
        }
joined_r0x000140b02ef9:
        auVar339 = auVar115;
        if (!bVar42) {
          auVar339 = auVar123;
        }
        auVar376 = blendps(unaff_XMM7,auVar53,1);
        auVar53 = auVar376;
        if (!bVar42) {
          auVar53 = auVar266;
        }
        auVar408 = blendps(unaff_XMM14,auVar269,1);
        auVar333 = auVar408;
        if (!bVar42) {
          auVar333 = auVar357;
        }
        auVar168 = blendps(auVar168,auVar114,2);
        if ((bVar30 & 4) == 0) {
          auVar339 = blendps(auVar115,auVar339,2);
          auVar376 = blendps(auVar376,auVar53,2);
          auVar333 = blendps(auVar408,auVar333,2);
          auVar168 = blendps(auVar168,auVar168,4);
          auVar53 = auVar333;
          auVar114 = auVar339;
          auVar115 = auVar376;
          if (-1 < (char)bVar30) goto LAB_140b0247e;
LAB_140b024f5:
          auVar114 = blendps(auVar339,auVar114,4);
          if (-1 < (char)bVar30) goto LAB_140b024fd;
LAB_140b0248a:
          auVar115 = blendps(auVar376,auVar115,4);
          if (-1 < (char)bVar30) goto LAB_140b0249c;
LAB_140b02512:
          auVar53 = blendps(auVar333,auVar53,4);
        }
        else {
          auVar339 = blendps(auVar115,auVar339,2);
          auVar376 = blendps(auVar376,auVar53,2);
          auVar333 = blendps(auVar408,auVar333,2);
          auVar168 = blendps(auVar168,auVar64,4);
          auVar53 = auVar357;
          auVar114 = auVar123;
          auVar115 = auVar266;
          if ((char)bVar30 < '\0') goto LAB_140b024f5;
LAB_140b0247e:
          auVar64 = auVar168;
          auVar114 = blendps(auVar339,auVar114,4);
          auVar168 = auVar64;
          if ((char)bVar30 < '\0') goto LAB_140b0248a;
LAB_140b024fd:
          auVar123 = auVar114;
          auVar115 = blendps(auVar376,auVar115,4);
          auVar114 = auVar123;
          if ((char)bVar30 < '\0') goto LAB_140b02512;
LAB_140b0249c:
          auVar53 = blendps(auVar333,auVar53,4);
          auVar266 = auVar115;
        }
        if (-1 < (char)bVar30) {
          auVar357 = auVar53;
        }
        unaff_XMM12 = blendps(auVar168,auVar64,8);
        in_XMM3 = blendps(auVar114,auVar123,8);
        unaff_XMM7 = blendps(auVar115,auVar266,8);
LAB_140b02538:
        unaff_XMM14 = blendps(auVar53,auVar357,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
      }
LAB_140b02fc0:
      auVar167._0_4_ = -(uint)(local_298._0_4_ == unaff_XMM9._0_4_);
      auVar167._4_4_ = -(uint)(local_298._4_4_ == unaff_XMM9._4_4_);
      auVar167._8_4_ = -(uint)(local_298._8_4_ == unaff_XMM9._8_4_);
      auVar167._12_4_ = -(uint)(local_298._12_4_ == unaff_XMM9._12_4_);
      auVar168 = ~auVar167 & unaff_XMM8;
      iVar18 = movmskps((int)uVar28,auVar168);
      if (iVar18 != 0) {
        bVar30 = (char)((char)iVar18 << 4) >> 4;
        unaff_EDI = (uint)bVar30;
        if (param_8 < 6) {
          auVar16._4_4_ = iVar23;
          auVar16._0_4_ = iVar23;
          auVar16._8_4_ = iVar23;
          auVar16._12_4_ = iVar23;
          auVar266 = pmulld(unaff_XMM9,auVar16);
          auVar53 = pmovsxdq(auVar64,auVar266);
          auVar124._8_4_ = auVar266._8_4_;
          auVar124._12_4_ = auVar266._12_4_;
          auVar124._0_8_ = auVar266._8_8_;
          auVar266 = pmovsxdq(auVar124,auVar124);
          lVar111 = auVar266._0_8_;
          lVar150 = auVar266._8_8_;
          lVar263 = auVar53._0_8_;
          lVar108 = auVar53._8_8_;
          uVar348 = auVar168._8_4_;
          auVar169._12_4_ = auVar168._12_4_;
          switch(param_8) {
          case 0:
            auVar274._0_8_ = lVar36 + local_258 + lVar111;
            auVar274._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar291._0_8_ = lVar26 + local_268 + lVar263;
            auVar291._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar266,auVar168);
            auVar53 = blendvps(ZEXT816(0),auVar291,auVar168);
            auVar169._4_4_ = uVar348;
            auVar169._0_4_ = uVar348;
            auVar169._8_4_ = auVar169._12_4_;
            auVar266 = blendvps(ZEXT816(0),auVar274,auVar169);
            lVar29 = param_4 + auVar53._0_8_;
            lVar26 = param_4 + auVar53._8_8_;
            lVar27 = param_4 + auVar266._0_8_;
            lVar263 = auVar266._8_8_;
            lVar36 = param_4 + lVar263;
            auVar333 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar168);
            auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar169);
            auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,
                                auVar168);
            auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar169);
            auVar339 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar168);
            auVar168 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,
                                auVar169);
            if ((bVar30 & 1) != 0) {
              local_328 = pblendw(local_328,ZEXT416(*(uint *)(param_4 + auVar53._0_8_)),3);
              unaff_XMM13 = blendps(unaff_XMM13,ZEXT416(*(uint *)(auVar333._0_8_ + lVar29)),1);
              local_308 = pblendw(local_308,ZEXT416(*(uint *)(auVar376._0_8_ + lVar29)),3);
              local_2b8 = pblendw(local_2b8,ZEXT416(*(uint *)(auVar339._0_8_ + lVar29)),3);
            }
            if ((bVar30 & 2) != 0) {
              local_328 = insertps(local_328,*(undefined4 *)(param_4 + auVar53._8_8_),0x10);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar333._8_8_ + lVar26),0x10);
              local_308 = insertps(local_308,*(undefined4 *)(auVar376._8_8_ + lVar26),0x10);
              local_2b8 = insertps(local_2b8,*(undefined4 *)(auVar339._8_8_ + lVar26),0x10);
            }
            if ((bVar30 & 4) == 0) {
              auVar266 = insertps(local_328,*(undefined4 *)(param_4 + lVar263),0x30);
              auVar53 = local_328;
            }
            else {
              auVar53 = insertps(local_328,*(undefined4 *)(param_4 + auVar266._0_8_),0x20);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar115._0_8_ + lVar27),0x20);
              auVar266 = insertps(auVar53,*(undefined4 *)(param_4 + lVar263),0x30);
              local_308 = insertps(local_308,*(undefined4 *)(auVar114._0_8_ + lVar27),0x20);
              local_2b8 = insertps(local_2b8,*(undefined4 *)(auVar168._0_8_ + lVar27),0x20);
            }
            local_328 = auVar266;
            if (-1 < (char)bVar30) {
              local_328 = auVar53;
            }
            if ((char)bVar30 < '\0') {
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar115._8_8_ + lVar36),0x30);
              local_308 = insertps(local_308,*(undefined4 *)(auVar114._8_8_ + lVar36),0x30);
              local_2b8 = insertps(local_2b8,*(undefined4 *)(auVar168._8_8_ + lVar36),0x30);
            }
            break;
          case 1:
            auVar304._0_8_ = lVar36 + local_258 + lVar111;
            auVar304._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar244._0_8_ = lVar26 + local_268 + lVar263;
            auVar244._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar266,auVar168);
            auVar53 = blendvps(ZEXT816(0),auVar244,auVar168);
            auVar173._4_4_ = uVar348;
            auVar173._0_4_ = uVar348;
            auVar173._8_4_ = auVar169._12_4_;
            auVar173._12_4_ = auVar169._12_4_;
            auVar266 = blendvps(ZEXT816(0),auVar304,auVar173);
            lVar29 = param_4 + auVar53._0_8_;
            lVar26 = param_4 + auVar53._8_8_;
            lVar27 = param_4 + auVar266._0_8_;
            lVar36 = param_4 + auVar266._8_8_;
            auVar114 = ZEXT416(*(uint *)(param_4 + auVar53._0_8_));
            auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar168);
            auVar339 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar173);
            auVar168 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar168);
            auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar173);
            bVar42 = (bVar30 & 1) != 0;
            if (bVar42) {
              local_328 = pblendw(local_328,auVar114,3);
            }
            auVar333 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar29));
            local_2f8 = unaff_XMM13;
            if (bVar42) {
              local_2f8 = blendps(unaff_XMM13,auVar333,1);
            }
            auVar408 = ZEXT416(*(uint *)(param_4 + auVar53._8_8_));
            auVar53 = insertps(auVar114,auVar408,0x10);
            auVar114 = ZEXT416(*(uint *)(param_4 + auVar266._0_8_));
            auVar53 = insertps(auVar53,auVar114,0x20);
            uVar44 = *(uint *)(param_4 + auVar266._8_8_);
            auVar266 = insertps(auVar53,ZEXT416(uVar44),0x30);
            auVar217 = ZEXT416(*(uint *)(auVar115._8_8_ + lVar26));
            auVar53 = insertps(auVar333,auVar217,0x10);
            auVar333 = ZEXT416(*(uint *)(auVar339._0_8_ + lVar27));
            auVar53 = insertps(auVar53,auVar333,0x20);
            uVar46 = *(uint *)(auVar339._8_8_ + lVar36);
            auVar267 = insertps(auVar53,ZEXT416(uVar46),0x30);
            uVar43 = *(uint *)(auVar168._0_8_ + lVar29);
            auVar339 = ZEXT416(*(uint *)(auVar168._8_8_ + lVar26));
            auVar168 = insertps(ZEXT416(uVar43),auVar339,0x10);
            auVar115 = ZEXT416(*(uint *)(auVar376._0_8_ + lVar27));
            auVar53 = insertps(auVar168,auVar115,0x20);
            auVar168 = ZEXT416(*(uint *)(auVar376._8_8_ + lVar36));
            auVar53 = insertps(auVar53,auVar168,0x30);
            auVar245._0_4_ = auVar266._0_4_ * auVar266._0_4_;
            auVar245._4_4_ = auVar266._4_4_ * auVar266._4_4_;
            auVar245._8_4_ = auVar266._8_4_ * auVar266._8_4_;
            auVar245._12_4_ = auVar266._12_4_ * auVar266._12_4_;
            auVar411._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar245._0_4_) -
                 auVar267._0_4_ * auVar267._0_4_) - auVar53._0_4_ * auVar53._0_4_;
            auVar411._4_4_ =
                 ((_UNK_15076b1f4 - auVar245._4_4_) - auVar267._4_4_ * auVar267._4_4_) -
                 auVar53._4_4_ * auVar53._4_4_;
            auVar411._8_4_ =
                 ((_UNK_15076b1f8 - auVar245._8_4_) - auVar267._8_4_ * auVar267._8_4_) -
                 auVar53._8_4_ * auVar53._8_4_;
            auVar411._12_4_ =
                 ((_UNK_15076b1fc - auVar245._12_4_) - auVar267._12_4_ * auVar267._12_4_) -
                 auVar53._12_4_ * auVar53._12_4_;
            auVar53 = sqrtps(auVar245,auVar411);
            auVar246._0_8_ =
                 CONCAT44(auVar53._4_4_ & -(uint)(0.0 < auVar411._4_4_),
                          auVar53._0_4_ & -(uint)(0.0 < auVar411._0_4_));
            auVar246._8_4_ = auVar53._8_4_ & -(uint)(0.0 < auVar411._8_4_);
            auVar246._12_4_ = auVar53._12_4_ & -(uint)(0.0 < auVar411._12_4_);
            auVar389 = local_2b8;
            if (bVar42) {
              local_308 = blendps(local_308,ZEXT416(uVar43),1);
              auVar389._8_4_ = auVar246._8_4_;
              auVar389._0_8_ = auVar246._0_8_;
              auVar389._12_4_ = auVar246._12_4_;
            }
            bVar42 = (bVar30 & 2) == 0;
            unaff_XMM13 = local_2f8;
            uVar43 = ___xmm_00000001000000010000000100000001;
            if (!bVar42) {
              local_328 = insertps(local_328,auVar408,0x10);
              uVar43 = 0;
              unaff_XMM13 = insertps(local_2f8,auVar217,0x10);
              local_308 = insertps(local_308,auVar339,0x10);
            }
            auVar53 = blendps(local_2b8,auVar389,1);
            if (bVar42) {
              auVar353 = auVar53;
              if ((bVar30 & 4) != 0) goto LAB_140b04724;
LAB_140b046be:
              auVar309 = blendps(auVar53,auVar353,2);
              auVar53 = auVar309;
              if (-1 < (char)bVar30) goto LAB_140b04757;
LAB_140b046ee:
              local_328 = insertps(local_328,uVar44,0x30);
              if ((char)bVar30 < '\0') goto LAB_140b046f9;
LAB_140b04759:
              if (-1 < (char)bVar30) goto LAB_140b0475b;
LAB_140b04704:
              local_308 = insertps(local_308,auVar168,0x30);
              auVar168 = blendps(auVar53,auVar309,4);
            }
            else {
              auVar353._8_4_ = auVar246._8_4_;
              auVar353._0_8_ = auVar246._0_8_;
              auVar353._12_4_ = auVar246._12_4_;
              if ((bVar30 & 4) == 0) goto LAB_140b046be;
LAB_140b04724:
              local_328 = insertps(local_328,auVar114,0x20);
              unaff_XMM13 = insertps(unaff_XMM13,auVar333,0x20);
              local_308 = insertps(local_308,auVar115,0x20);
              auVar53 = blendps(auVar53,auVar353,2);
              auVar309._8_4_ = auVar246._8_4_;
              auVar309._0_8_ = auVar246._0_8_;
              auVar309._12_4_ = auVar246._12_4_;
              if ((char)bVar30 < '\0') goto LAB_140b046ee;
LAB_140b04757:
              if (-1 < (char)bVar30) goto LAB_140b04759;
LAB_140b046f9:
              unaff_XMM13 = insertps(unaff_XMM13,uVar46,0x30);
              if ((char)bVar30 < '\0') goto LAB_140b04704;
LAB_140b0475b:
              auVar168 = blendps(auVar53,auVar309,4);
            }
            if (-1 < (char)bVar30) {
              auVar246 = auVar168;
            }
            local_2b8 = blendps(auVar168,auVar246,8);
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 2:
            auVar275._0_8_ = lVar36 + local_258 + lVar111;
            auVar275._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar296._0_8_ = lVar26 + local_268 + lVar263;
            auVar296._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar266,auVar168);
            auVar53 = blendvps(ZEXT816(0),auVar296,auVar168);
            auVar170._4_4_ = uVar348;
            auVar170._0_4_ = uVar348;
            auVar170._8_4_ = auVar169._12_4_;
            auVar170._12_4_ = auVar169._12_4_;
            auVar114 = blendvps(ZEXT816(0),auVar275,auVar170);
            lVar26 = param_4 + auVar53._0_8_;
            lVar27 = param_4 + auVar53._8_8_;
            lVar36 = param_4 + auVar114._0_8_;
            auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar168);
            auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar170);
            auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar168);
            auVar266 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar170);
            lVar29 = param_4 + auVar114._8_8_;
            auVar67._0_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar53._0_8_) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar67._4_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar53._8_8_) + _UNK_151c6b8e4);
            auVar67._8_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar114._0_8_) + _UNK_151c6b8e8);
            auVar67._12_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar114._8_8_) + _UNK_151c6b8ec);
            auVar168 = divps(auVar67,___xmm_46fffe0046fffe0046fffe0046fffe00);
            bVar42 = (bVar30 & 1) != 0;
            auVar53 = local_328;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar396._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar396._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar27) + _UNK_151c6b8e4);
            auVar396._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar339._0_8_ + lVar36) + _UNK_151c6b8e8);
            auVar396._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar339._8_8_ + lVar29) + _UNK_151c6b8ec);
            auVar115 = divps(auVar396,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar171._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar376._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar171._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar376._8_8_ + lVar27) + _UNK_151c6b8e4);
            auVar171._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar36) + _UNK_151c6b8e8);
            auVar171._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar29) + _UNK_151c6b8ec);
            auVar339 = divps(auVar171,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar239._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar168._0_4_ * auVar168._0_4_) -
                 auVar115._0_4_ * auVar115._0_4_) - auVar339._0_4_ * auVar339._0_4_;
            auVar239._4_4_ =
                 ((_UNK_15076b1f4 - auVar168._4_4_ * auVar168._4_4_) -
                 auVar115._4_4_ * auVar115._4_4_) - auVar339._4_4_ * auVar339._4_4_;
            auVar239._8_4_ =
                 ((_UNK_15076b1f8 - auVar168._8_4_ * auVar168._8_4_) -
                 auVar115._8_4_ * auVar115._8_4_) - auVar339._8_4_ * auVar339._8_4_;
            auVar239._12_4_ =
                 ((_UNK_15076b1fc - auVar168._12_4_ * auVar168._12_4_) -
                 auVar115._12_4_ * auVar115._12_4_) - auVar339._12_4_ * auVar339._12_4_;
            auVar266 = sqrtps(auVar239,auVar239);
            auVar372._0_8_ =
                 CONCAT44(auVar266._4_4_ & -(uint)(0.0 < auVar239._4_4_),
                          auVar266._0_4_ & -(uint)(0.0 < auVar239._0_4_));
            auVar372._8_4_ = auVar266._8_4_ & -(uint)(0.0 < auVar239._8_4_);
            auVar372._12_4_ = auVar266._12_4_ & -(uint)(0.0 < auVar239._12_4_);
            auVar297 = local_2b8;
            auVar266 = local_308;
            auVar114 = unaff_XMM13;
            if (bVar42) {
              auVar297._8_4_ = auVar372._8_4_;
              auVar297._0_8_ = auVar372._0_8_;
              auVar297._12_4_ = auVar372._12_4_;
              auVar266 = auVar339;
              auVar114 = auVar115;
            }
            auVar376 = blendps(local_328,auVar53,1);
            bVar42 = (bVar30 & 2) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(unaff_XMM13,auVar114,1);
            auVar114 = auVar333;
            if (bVar42) {
              auVar114 = auVar115;
            }
            auVar408 = blendps(local_308,auVar266,1);
            auVar266 = auVar408;
            if (bVar42) {
              auVar266 = auVar339;
            }
            auVar217 = blendps(local_2b8,auVar297,1);
            auVar298 = auVar217;
            if (bVar42) {
              auVar298._8_4_ = auVar372._8_4_;
              auVar298._0_8_ = auVar372._0_8_;
              auVar298._12_4_ = auVar372._12_4_;
            }
            auVar376 = blendps(auVar376,auVar53,2);
            bVar42 = (bVar30 & 4) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(auVar333,auVar114,2);
            auVar114 = auVar333;
            if (bVar42) {
              auVar114 = auVar115;
            }
            auVar408 = blendps(auVar408,auVar266,2);
            auVar266 = auVar408;
            if (bVar42) {
              auVar266 = auVar339;
            }
            auVar217 = blendps(auVar217,auVar298,2);
            auVar299 = auVar217;
            if (bVar42) {
              auVar299._8_4_ = auVar372._8_4_;
              auVar299._0_8_ = auVar372._0_8_;
              auVar299._12_4_ = auVar372._12_4_;
            }
            auVar53 = blendps(auVar376,auVar53,4);
            if ((char)bVar30 < '\0') {
              auVar376 = blendps(auVar333,auVar114,4);
              auVar114 = blendps(auVar408,auVar266,4);
              auVar266 = blendps(auVar217,auVar299,4);
            }
            else {
              auVar376 = blendps(auVar333,auVar114,4);
              auVar339 = blendps(auVar408,auVar266,4);
              auVar372 = blendps(auVar217,auVar299,4);
              auVar168 = auVar53;
              auVar266 = auVar372;
              auVar114 = auVar339;
              auVar115 = auVar376;
            }
            local_328 = blendps(auVar53,auVar168,8);
            unaff_XMM13 = blendps(auVar376,auVar115,8);
            local_308 = blendps(auVar114,auVar339,8);
            local_2b8 = blendps(auVar266,auVar372,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 3:
            auVar114 = unaff_XMM10 & auVar168;
            lVar4 = param_4 + auVar114._0_4_;
            lVar5 = param_4 + auVar114._4_4_;
            lVar6 = param_4 + auVar114._8_4_;
            lVar7 = param_4 + auVar114._12_4_;
            auVar266 = insertps(ZEXT416(*(uint *)(param_4 + auVar114._0_4_)),
                                *(undefined4 *)(param_4 + auVar114._4_4_),0x10);
            auVar266 = insertps(auVar266,*(undefined4 *)(param_4 + auVar114._8_4_),0x20);
            auVar114 = insertps(auVar266,*(undefined4 *)(param_4 + auVar114._12_4_),0x30);
            auVar266 = auVar168 & ___xmm_0000000c0000000c0000000c0000000c;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar240._0_8_ = lVar36 + local_258 + lVar111;
            auVar240._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar276._0_8_ = lVar26 + local_268 + lVar263;
            auVar276._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar53 = pmovsxdq(auVar53,auVar168);
            auVar53 = blendvps((undefined1  [16])0x0,auVar276,auVar53);
            auVar68._4_4_ = uVar348;
            auVar68._0_4_ = uVar348;
            auVar68._8_4_ = auVar169._12_4_;
            auVar68._12_4_ = auVar169._12_4_;
            auVar266 = blendvps((undefined1  [16])0x0,auVar240,auVar68);
            uVar43 = *(uint *)(param_4 + auVar53._0_8_);
            uVar44 = *(uint *)(param_4 + auVar53._8_8_);
            uVar46 = *(uint *)(param_4 + auVar266._0_8_);
            uVar47 = *(uint *)(param_4 + auVar266._8_8_);
            auVar69._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01)
            ;
            auVar69._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
            auVar69._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
            auVar69._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
            auVar53 = divps(auVar69,___xmm_447fc000447fc000447fc000447fc000);
            fVar49 = auVar53._0_4_ * auVar115._0_4_ + auVar114._0_4_;
            fVar106 = auVar53._4_4_ * auVar115._4_4_ + auVar114._4_4_;
            auVar70._0_8_ = CONCAT44(fVar106,fVar49);
            auVar70._8_4_ = auVar53._8_4_ * auVar115._8_4_ + auVar114._8_4_;
            auVar70._12_4_ = auVar53._12_4_ * auVar115._12_4_ + auVar114._12_4_;
            auVar300._0_4_ =
                 (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar300._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar300._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar300._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar53 = divps(auVar300,___xmm_43ff800043ff800043ff800043ff8000);
            bVar42 = (bVar30 & 1) != 0;
            auVar241 = local_328;
            if (bVar42) {
              auVar241._8_4_ = auVar70._8_4_;
              auVar241._0_8_ = auVar70._0_8_;
              auVar241._12_4_ = auVar70._12_4_;
            }
            auVar266 = auVar168 & ___xmm_00000004000000040000000400000004;
            auVar114 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar266 = auVar168 & ___xmm_00000008000000080000000800000008;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar266 = auVar168 & ___xmm_00000010000000100000001000000010;
            auVar339 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar339 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar339 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar168 = auVar168 & ___xmm_00000014000000140000001400000014;
            auVar266 = insertps(ZEXT416(*(uint *)((ulonglong)auVar168._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar168._4_4_ + lVar5),0x10);
            auVar266 = insertps(auVar266,*(undefined4 *)((ulonglong)auVar168._8_4_ + lVar6),0x20);
            auVar168 = insertps(auVar266,*(undefined4 *)((ulonglong)auVar168._12_4_ + lVar7),0x30);
            fVar107 = auVar168._0_4_ * auVar53._0_4_ + auVar115._0_4_;
            fVar109 = auVar168._4_4_ * auVar53._4_4_ + auVar115._4_4_;
            auVar364._0_8_ = CONCAT44(fVar109,fVar107);
            auVar364._8_4_ = auVar168._8_4_ * auVar53._8_4_ + auVar115._8_4_;
            auVar364._12_4_ = auVar168._12_4_ * auVar53._12_4_ + auVar115._12_4_;
            auVar172._0_4_ =
                 (float)(int)((uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar172._4_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar172._8_4_ = (float)(int)((uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar172._12_4_ = (float)(int)((uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar168 = divps(auVar172,___xmm_447fc000447fc000447fc000447fc000);
            fVar110 = auVar168._0_4_ * auVar339._0_4_ + auVar114._0_4_;
            fVar147 = auVar168._4_4_ * auVar339._4_4_ + auVar114._4_4_;
            auVar397._0_8_ = CONCAT44(fVar147,fVar110);
            auVar397._8_4_ = auVar168._8_4_ * auVar339._8_4_ + auVar114._8_4_;
            auVar397._12_4_ = auVar168._12_4_ * auVar339._12_4_ + auVar114._12_4_;
            auVar277._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - fVar49 * fVar49) - fVar110 * fVar110) -
                 fVar107 * fVar107;
            auVar277._4_4_ =
                 ((_UNK_15076b1f4 - fVar106 * fVar106) - fVar147 * fVar147) - fVar109 * fVar109;
            auVar277._8_4_ =
                 ((_UNK_15076b1f8 - auVar70._8_4_ * auVar70._8_4_) - auVar397._8_4_ * auVar397._8_4_
                 ) - auVar364._8_4_ * auVar364._8_4_;
            auVar277._12_4_ =
                 ((_UNK_15076b1fc - auVar70._12_4_ * auVar70._12_4_) -
                 auVar397._12_4_ * auVar397._12_4_) - auVar364._12_4_ * auVar364._12_4_;
            auVar168 = sqrtps(auVar277,auVar277);
            auVar373._0_8_ =
                 CONCAT44(auVar168._4_4_ & -(uint)(0.0 < auVar277._4_4_),
                          auVar168._0_4_ & -(uint)(0.0 < auVar277._0_4_));
            auVar373._8_4_ = auVar168._8_4_ & -(uint)(0.0 < auVar277._8_4_);
            auVar373._12_4_ = auVar168._12_4_ & -(uint)(0.0 < auVar277._12_4_);
            auVar301 = local_2b8;
            auVar334 = local_308;
            auVar363 = unaff_XMM13;
            if (bVar42) {
              auVar363._8_4_ = auVar397._8_4_;
              auVar363._0_8_ = auVar397._0_8_;
              auVar363._12_4_ = auVar397._12_4_;
              auVar334._8_4_ = auVar364._8_4_;
              auVar334._0_8_ = auVar364._0_8_;
              auVar334._12_4_ = auVar364._12_4_;
              auVar301._8_4_ = auVar373._8_4_;
              auVar301._0_8_ = auVar373._0_8_;
              auVar301._12_4_ = auVar373._12_4_;
            }
            auVar168 = blendps(local_328,auVar241,1);
            bVar42 = (bVar30 & 2) != 0;
            auVar351 = auVar168;
            if (bVar42) {
              auVar351._8_4_ = auVar70._8_4_;
              auVar351._0_8_ = auVar70._0_8_;
              auVar351._12_4_ = auVar70._12_4_;
            }
            auVar53 = blendps(unaff_XMM13,auVar363,1);
            auVar242 = auVar53;
            if (bVar42) {
              auVar242._8_4_ = auVar397._8_4_;
              auVar242._0_8_ = auVar397._0_8_;
              auVar242._12_4_ = auVar397._12_4_;
            }
            auVar266 = blendps(local_308,auVar334,1);
            auVar335 = auVar266;
            if (bVar42) {
              auVar335._8_4_ = auVar364._8_4_;
              auVar335._0_8_ = auVar364._0_8_;
              auVar335._12_4_ = auVar364._12_4_;
            }
            auVar114 = blendps(local_2b8,auVar301,1);
            auVar302 = auVar114;
            if (bVar42) {
              auVar302._8_4_ = auVar373._8_4_;
              auVar302._0_8_ = auVar373._0_8_;
              auVar302._12_4_ = auVar373._12_4_;
            }
            auVar168 = blendps(auVar168,auVar351,2);
            bVar42 = (bVar30 & 4) != 0;
            auVar352 = auVar168;
            if (bVar42) {
              auVar352._8_4_ = auVar70._8_4_;
              auVar352._0_8_ = auVar70._0_8_;
              auVar352._12_4_ = auVar70._12_4_;
            }
            auVar53 = blendps(auVar53,auVar242,2);
            auVar243 = auVar53;
            if (bVar42) {
              auVar243._8_4_ = auVar397._8_4_;
              auVar243._0_8_ = auVar397._0_8_;
              auVar243._12_4_ = auVar397._12_4_;
            }
            auVar266 = blendps(auVar266,auVar335,2);
            auVar336 = auVar266;
            if (bVar42) {
              auVar336._8_4_ = auVar364._8_4_;
              auVar336._0_8_ = auVar364._0_8_;
              auVar336._12_4_ = auVar364._12_4_;
            }
            auVar114 = blendps(auVar114,auVar302,2);
            auVar303 = auVar114;
            if (bVar42) {
              auVar303._8_4_ = auVar373._8_4_;
              auVar303._0_8_ = auVar373._0_8_;
              auVar303._12_4_ = auVar373._12_4_;
            }
            auVar168 = blendps(auVar168,auVar352,4);
            if ((char)bVar30 < '\0') {
              auVar115 = blendps(auVar53,auVar243,4);
              auVar266 = blendps(auVar266,auVar336,4);
              auVar53 = blendps(auVar114,auVar303,4);
            }
            else {
              auVar397 = blendps(auVar53,auVar243,4);
              auVar364 = blendps(auVar266,auVar336,4);
              auVar373 = blendps(auVar114,auVar303,4);
              auVar70 = auVar168;
              auVar53 = auVar373;
              auVar266 = auVar364;
              auVar115 = auVar397;
            }
            local_328 = blendps(auVar168,auVar70,8);
            unaff_XMM13 = blendps(auVar115,auVar397,8);
            local_308 = blendps(auVar266,auVar364,8);
            local_2b8 = blendps(auVar53,auVar373,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 4:
            auVar216._0_8_ = lVar36 + local_258 + lVar111;
            auVar216._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar292._0_8_ = lVar26 + local_268 + lVar263;
            auVar292._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar53,auVar168);
            auVar168 = blendvps((undefined1  [16])0x0,auVar292,auVar168);
            auVar65._4_4_ = uVar348;
            auVar65._0_4_ = uVar348;
            auVar65._8_4_ = auVar169._12_4_;
            auVar65._12_4_ = auVar169._12_4_;
            auVar53 = blendvps(ZEXT816(0),auVar216,auVar65);
            uVar43 = *(uint *)(param_4 + auVar168._0_8_);
            uVar44 = *(uint *)(param_4 + auVar168._8_8_);
            uVar46 = *(uint *)(param_4 + auVar53._0_8_);
            uVar47 = *(uint *)(param_4 + auVar53._8_8_);
            auVar66._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01)
            ;
            auVar66._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
            auVar66._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
            auVar66._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
            auVar168 = divps(auVar66,___xmm_447fc000447fc000447fc000447fc000);
            auVar125._0_4_ =
                 (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar125._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar125._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar125._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar266 = divps(auVar125,___xmm_43ff800043ff800043ff800043ff8000);
            bVar42 = (bVar30 & 1) != 0;
            auVar53 = local_328;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar395._0_4_ =
                 (float)(int)((uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar395._4_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar395._8_4_ = (float)(int)((uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar395._12_4_ = (float)(int)((uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar339 = divps(auVar395,___xmm_447fc000447fc000447fc000447fc000);
            auVar238._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar168._0_4_ * auVar168._0_4_) -
                 auVar339._0_4_ * auVar339._0_4_) - auVar266._0_4_ * auVar266._0_4_;
            auVar238._4_4_ =
                 ((_UNK_15076b1f4 - auVar168._4_4_ * auVar168._4_4_) -
                 auVar339._4_4_ * auVar339._4_4_) - auVar266._4_4_ * auVar266._4_4_;
            auVar238._8_4_ =
                 ((_UNK_15076b1f8 - auVar168._8_4_ * auVar168._8_4_) -
                 auVar339._8_4_ * auVar339._8_4_) - auVar266._8_4_ * auVar266._8_4_;
            auVar238._12_4_ =
                 ((_UNK_15076b1fc - auVar168._12_4_ * auVar168._12_4_) -
                 auVar339._12_4_ * auVar339._12_4_) - auVar266._12_4_ * auVar266._12_4_;
            auVar114 = sqrtps(auVar238,auVar238);
            auVar371._0_8_ =
                 CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar238._4_4_),
                          auVar114._0_4_ & -(uint)(0.0 < auVar238._0_4_));
            auVar371._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar238._8_4_);
            auVar371._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar238._12_4_);
            auVar293 = local_2b8;
            auVar114 = local_308;
            auVar115 = unaff_XMM13;
            if (bVar42) {
              auVar293._8_4_ = auVar371._8_4_;
              auVar293._0_8_ = auVar371._0_8_;
              auVar293._12_4_ = auVar371._12_4_;
              auVar114 = auVar266;
              auVar115 = auVar339;
            }
            auVar376 = blendps(local_328,auVar53,1);
            bVar42 = (bVar30 & 2) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(unaff_XMM13,auVar115,1);
            auVar115 = auVar333;
            if (bVar42) {
              auVar115 = auVar339;
            }
            auVar408 = blendps(local_308,auVar114,1);
            auVar114 = auVar408;
            if (bVar42) {
              auVar114 = auVar266;
            }
            auVar217 = blendps(local_2b8,auVar293,1);
            auVar294 = auVar217;
            if (bVar42) {
              auVar294._8_4_ = auVar371._8_4_;
              auVar294._0_8_ = auVar371._0_8_;
              auVar294._12_4_ = auVar371._12_4_;
            }
            auVar376 = blendps(auVar376,auVar53,2);
            bVar42 = (bVar30 & 4) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(auVar333,auVar115,2);
            auVar115 = auVar333;
            if (bVar42) {
              auVar115 = auVar339;
            }
            auVar408 = blendps(auVar408,auVar114,2);
            auVar114 = auVar408;
            if (bVar42) {
              auVar114 = auVar266;
            }
            auVar217 = blendps(auVar217,auVar294,2);
            auVar295 = auVar217;
            if (bVar42) {
              auVar295._8_4_ = auVar371._8_4_;
              auVar295._0_8_ = auVar371._0_8_;
              auVar295._12_4_ = auVar371._12_4_;
            }
            auVar53 = blendps(auVar376,auVar53,4);
            if ((char)bVar30 < '\0') {
              auVar376 = blendps(auVar333,auVar115,4);
              auVar115 = blendps(auVar408,auVar114,4);
              auVar114 = blendps(auVar217,auVar295,4);
            }
            else {
              auVar376 = blendps(auVar333,auVar115,4);
              auVar266 = blendps(auVar408,auVar114,4);
              auVar371 = blendps(auVar217,auVar295,4);
              auVar168 = auVar53;
              auVar114 = auVar371;
              auVar115 = auVar266;
              auVar339 = auVar376;
            }
            local_328 = blendps(auVar53,auVar168,8);
            unaff_XMM13 = blendps(auVar376,auVar339,8);
            local_308 = blendps(auVar115,auVar266,8);
            local_2b8 = blendps(auVar114,auVar371,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 5:
            auVar218._0_8_ = lVar36 + local_258 + lVar111;
            auVar218._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar305._0_8_ = lVar26 + local_268 + lVar263;
            auVar305._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar53,auVar168);
            auVar168 = blendvps((undefined1  [16])0x0,auVar305,auVar168);
            auVar71._4_4_ = uVar348;
            auVar71._0_4_ = uVar348;
            auVar71._8_4_ = auVar169._12_4_;
            auVar71._12_4_ = auVar169._12_4_;
            auVar53 = blendvps(ZEXT816(0),auVar218,auVar71);
            uVar43 = *(uint *)(param_4 + auVar168._0_8_);
            uVar44 = *(uint *)(param_4 + auVar168._8_8_);
            auVar247._4_4_ = uVar44;
            auVar247._0_4_ = uVar43;
            uVar46 = *(uint *)(param_4 + auVar53._0_8_);
            uVar47 = *(uint *)(param_4 + auVar53._8_8_);
            auVar247._12_4_ = uVar47;
            auVar247._8_4_ = uVar46;
            auVar72._0_4_ = uVar43 >> 0x15;
            auVar72._4_4_ = uVar44 >> 0x15;
            auVar72._8_4_ = uVar46 >> 0x15;
            auVar72._12_4_ = uVar47 >> 0x15;
            auVar126._0_4_ = uVar43 >> 5;
            auVar126._4_4_ = uVar44 >> 5;
            auVar126._8_4_ = uVar46 >> 5;
            auVar126._12_4_ = uVar47 >> 5;
            auVar168 = auVar72 & ___xmm_00000380000003800000038000000380;
            auVar73._0_4_ = auVar168._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
            auVar73._4_4_ = auVar168._4_4_ + _UNK_151c6b7b4;
            auVar73._8_4_ = auVar168._8_4_ + _UNK_151c6b7b8;
            auVar73._12_4_ = auVar168._12_4_ + _UNK_151c6b7bc;
            auVar73 = auVar73 | auVar72 & ___xmm_00000400000004000000040000000400 |
                                auVar126 & ___xmm_007f0000007f0000007f0000007f0000;
            bVar42 = (bVar30 & 1) != 0;
            auVar168 = local_328;
            if (bVar42) {
              auVar168 = auVar73;
            }
            auVar127._0_4_ = uVar43 >> 10;
            auVar127._4_4_ = uVar44 >> 10;
            auVar127._8_4_ = uVar46 >> 10;
            auVar127._12_4_ = uVar47 >> 10;
            auVar174._0_4_ = uVar43 << 6;
            auVar174._4_4_ = uVar44 << 6;
            auVar174._8_4_ = uVar46 << 6;
            auVar174._12_4_ = uVar47 << 6;
            auVar53 = auVar127 & ___xmm_00000380000003800000038000000380;
            auVar128._0_4_ = auVar53._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
            auVar128._4_4_ = auVar53._4_4_ + _UNK_151c6b7b4;
            auVar128._8_4_ = auVar53._8_4_ + _UNK_151c6b7b8;
            auVar128._12_4_ = auVar53._12_4_ + _UNK_151c6b7bc;
            auVar128 = auVar128 |
                       auVar127 & ___xmm_00000400000004000000040000000400 |
                       auVar174 & ___xmm_007f0000007f0000007f0000007f0000;
            auVar53 = auVar247 & ___xmm_000001c0000001c0000001c0000001c0;
            auVar219._0_4_ = uVar43 << 0x11;
            auVar219._4_4_ = uVar44 << 0x11;
            auVar219._8_4_ = uVar46 << 0x11;
            auVar219._12_4_ = uVar47 << 0x11;
            auVar175._0_4_ = auVar53._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
            auVar175._4_4_ = auVar53._4_4_ + _UNK_151c6b824;
            auVar175._8_4_ = auVar53._8_4_ + _UNK_151c6b828;
            auVar175._12_4_ = auVar53._12_4_ + _UNK_151c6b82c;
            auVar114 = auVar175 | auVar247 & ___xmm_00000200000002000000020000000200 |
                       auVar219 & ___xmm_007e0000007e0000007e0000007e0000;
            auVar248._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar73._0_4_ * auVar73._0_4_) -
                 auVar128._0_4_ * auVar128._0_4_) - auVar114._0_4_ * auVar114._0_4_;
            auVar248._4_4_ =
                 ((_UNK_15076b1f4 - auVar73._4_4_ * auVar73._4_4_) - auVar128._4_4_ * auVar128._4_4_
                 ) - auVar114._4_4_ * auVar114._4_4_;
            auVar248._8_4_ =
                 ((_UNK_15076b1f8 - auVar73._8_4_ * auVar73._8_4_) - auVar128._8_4_ * auVar128._8_4_
                 ) - auVar114._8_4_ * auVar114._8_4_;
            auVar248._12_4_ =
                 ((_UNK_15076b1fc - auVar73._12_4_ * auVar73._12_4_) -
                 auVar128._12_4_ * auVar128._12_4_) - auVar114._12_4_ * auVar114._12_4_;
            auVar53 = sqrtps(auVar248,auVar248);
            auVar374._0_8_ =
                 CONCAT44(auVar53._4_4_ & -(uint)(0.0 < auVar248._4_4_),
                          auVar53._0_4_ & -(uint)(0.0 < auVar248._0_4_));
            auVar374._8_4_ = auVar53._8_4_ & -(uint)(0.0 < auVar248._8_4_);
            auVar374._12_4_ = auVar53._12_4_ & -(uint)(0.0 < auVar248._12_4_);
            auVar306 = local_2b8;
            auVar53 = local_308;
            auVar266 = unaff_XMM13;
            if (bVar42) {
              auVar306._8_4_ = auVar374._8_4_;
              auVar306._0_8_ = auVar374._0_8_;
              auVar306._12_4_ = auVar374._12_4_;
              auVar53 = auVar114;
              auVar266 = auVar128;
            }
            auVar115 = pblendw(local_328,auVar168,3);
            bVar42 = (bVar30 & 2) != 0;
            auVar168 = auVar115;
            if (bVar42) {
              auVar168 = auVar73;
            }
            auVar339 = blendps(unaff_XMM13,auVar266,1);
            auVar266 = auVar339;
            if (bVar42) {
              auVar266 = auVar128;
            }
            auVar376 = blendps(local_308,auVar53,1);
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar114;
            }
            auVar333 = blendps(local_2b8,auVar306,1);
            auVar307 = auVar333;
            if (bVar42) {
              auVar307._8_4_ = auVar374._8_4_;
              auVar307._0_8_ = auVar374._0_8_;
              auVar307._12_4_ = auVar374._12_4_;
            }
            auVar115 = pblendw(auVar115,auVar168,0xc);
            bVar42 = (bVar30 & 4) != 0;
            auVar168 = auVar115;
            if (bVar42) {
              auVar168 = auVar73;
            }
            auVar339 = blendps(auVar339,auVar266,2);
            auVar266 = auVar339;
            if (bVar42) {
              auVar266 = auVar128;
            }
            auVar376 = blendps(auVar376,auVar53,2);
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar114;
            }
            auVar333 = blendps(auVar333,auVar307,2);
            auVar308 = auVar333;
            if (bVar42) {
              auVar308._8_4_ = auVar374._8_4_;
              auVar308._0_8_ = auVar374._0_8_;
              auVar308._12_4_ = auVar374._12_4_;
            }
            auVar168 = pblendw(auVar115,auVar168,0x30);
            if ((char)bVar30 < '\0') {
              auVar115 = blendps(auVar339,auVar266,4);
              auVar266 = blendps(auVar376,auVar53,4);
              auVar53 = blendps(auVar333,auVar308,4);
            }
            else {
              auVar128 = blendps(auVar339,auVar266,4);
              auVar114 = blendps(auVar376,auVar53,4);
              auVar374 = blendps(auVar333,auVar308,4);
              auVar73 = auVar168;
              auVar53 = auVar374;
              auVar266 = auVar114;
              auVar115 = auVar128;
            }
            local_328 = pblendw(auVar168,auVar73,0xc0);
            unaff_XMM13 = blendps(auVar115,auVar128,8);
            local_308 = blendps(auVar266,auVar114,8);
            local_2b8 = blendps(auVar53,auVar374,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
          }
        }
        else {
          auVar168 = ZEXT816(0);
          if ((bVar30 & 1) != 0) {
            local_328 = blendps(local_328,auVar168,1);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,1);
            local_308 = blendps(local_308,auVar168,1);
            local_2b8 = blendps(local_2b8,ZEXT416((uint)__real_3f800000),1);
          }
          if ((bVar30 & 2) != 0) {
            local_328 = blendps(local_328,auVar168,2);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,2);
            local_308 = blendps(local_308,auVar168,2);
            local_2b8 = insertps(local_2b8,ZEXT416((uint)__real_3f800000),0x10);
          }
          if ((bVar30 & 4) != 0) {
            local_328 = blendps(local_328,auVar168,4);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,4);
            local_308 = blendps(local_308,auVar168,4);
            local_2b8 = insertps(local_2b8,ZEXT416((uint)__real_3f800000),0x20);
          }
          if ((char)bVar30 < '\0') {
            local_328 = blendps(local_328,auVar168,8);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,8);
            local_308 = blendps(local_308,auVar168,8);
            local_2b8 = insertps(local_2b8,ZEXT416((uint)__real_3f800000),0x30);
          }
        }
        fVar265 = unaff_XMM11._0_4_;
        fVar280 = unaff_XMM11._4_4_;
        fVar282 = unaff_XMM11._8_4_;
        fVar284 = unaff_XMM11._12_4_;
        fVar264 = (___xmm_3f8000003f8000003f8000003f800000 - fVar265) *
                  (float)(int)(-(uint)(unaff_XMM14._0_4_ * local_2b8._0_4_ +
                                       in_XMM3._0_4_ * unaff_XMM13._0_4_ +
                                       unaff_XMM7._0_4_ * local_308._0_4_ +
                                       unaff_XMM12._0_4_ * local_328._0_4_ < 0.0) | uVar43);
        fVar279 = (_UNK_15076b1f4 - fVar280) *
                  (float)(int)(-(uint)(unaff_XMM14._4_4_ * local_2b8._4_4_ +
                                       in_XMM3._4_4_ * unaff_XMM13._4_4_ +
                                       unaff_XMM7._4_4_ * local_308._4_4_ +
                                       unaff_XMM12._4_4_ * local_328._4_4_ < 0.0) | uVar44);
        fVar281 = (_UNK_15076b1f8 - fVar282) *
                  (float)(int)(-(uint)(unaff_XMM14._8_4_ * local_2b8._8_4_ +
                                       in_XMM3._8_4_ * unaff_XMM13._8_4_ +
                                       unaff_XMM7._8_4_ * local_308._8_4_ +
                                       unaff_XMM12._8_4_ * local_328._8_4_ < 0.0) | uVar46);
        fVar283 = (_UNK_15076b1fc - fVar284) *
                  (float)(int)(-(uint)(unaff_XMM14._12_4_ * local_2b8._12_4_ +
                                       in_XMM3._12_4_ * unaff_XMM13._12_4_ +
                                       unaff_XMM7._12_4_ * local_308._12_4_ +
                                       unaff_XMM12._12_4_ * local_328._12_4_ < 0.0) | uVar47);
        fVar49 = unaff_XMM12._0_4_ * fVar264 + fVar265 * local_328._0_4_;
        fVar106 = unaff_XMM12._4_4_ * fVar279 + fVar280 * local_328._4_4_;
        fVar107 = unaff_XMM12._8_4_ * fVar281 + fVar282 * local_328._8_4_;
        fVar109 = unaff_XMM12._12_4_ * fVar283 + fVar284 * local_328._12_4_;
        fVar110 = in_XMM3._0_4_ * fVar264 + fVar265 * unaff_XMM13._0_4_;
        fVar147 = in_XMM3._4_4_ * fVar279 + fVar280 * unaff_XMM13._4_4_;
        fVar148 = in_XMM3._8_4_ * fVar281 + fVar282 * unaff_XMM13._8_4_;
        fVar151 = in_XMM3._12_4_ * fVar283 + fVar284 * unaff_XMM13._12_4_;
        fVar153 = unaff_XMM7._0_4_ * fVar264 + fVar265 * local_308._0_4_;
        fVar204 = unaff_XMM7._4_4_ * fVar279 + fVar280 * local_308._4_4_;
        fVar205 = unaff_XMM7._8_4_ * fVar281 + fVar282 * local_308._8_4_;
        fVar206 = unaff_XMM7._12_4_ * fVar283 + fVar284 * local_308._12_4_;
        fVar265 = fVar264 * unaff_XMM14._0_4_ + fVar265 * local_2b8._0_4_;
        fVar280 = fVar279 * unaff_XMM14._4_4_ + fVar280 * local_2b8._4_4_;
        fVar282 = fVar281 * unaff_XMM14._8_4_ + fVar282 * local_2b8._8_4_;
        fVar284 = fVar283 * unaff_XMM14._12_4_ + fVar284 * local_2b8._12_4_;
        auVar249._0_4_ = fVar110 * fVar110;
        auVar249._4_4_ = fVar147 * fVar147;
        auVar249._8_4_ = fVar148 * fVar148;
        auVar249._12_4_ = fVar151 * fVar151;
        auVar310._0_4_ = fVar265 * fVar265 + auVar249._0_4_ + fVar153 * fVar153 + fVar49 * fVar49;
        auVar310._4_4_ = fVar280 * fVar280 + auVar249._4_4_ + fVar204 * fVar204 + fVar106 * fVar106;
        auVar310._8_4_ = fVar282 * fVar282 + auVar249._8_4_ + fVar205 * fVar205 + fVar107 * fVar107;
        auVar310._12_4_ =
             fVar284 * fVar284 + auVar249._12_4_ + fVar206 * fVar206 + fVar109 * fVar109;
        auVar168 = rsqrtps(auVar249,auVar310);
        fVar264 = auVar168._0_4_;
        fVar279 = auVar168._4_4_;
        fVar281 = auVar168._8_4_;
        fVar283 = auVar168._12_4_;
        fVar264 = (___xmm_3f0000003f0000003f0000003f000000 -
                  fVar264 * fVar264 * auVar310._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) *
                  fVar264 + fVar264;
        fVar279 = (_UNK_150689624 - fVar279 * fVar279 * auVar310._4_4_ * _UNK_150689624) * fVar279 +
                  fVar279;
        fVar281 = (_UNK_150689628 - fVar281 * fVar281 * auVar310._8_4_ * _UNK_150689628) * fVar281 +
                  fVar281;
        fVar283 = (_UNK_15068962c - fVar283 * fVar283 * auVar310._12_4_ * _UNK_15068962c) * fVar283
                  + fVar283;
        uVar43 = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar310._0_4_);
        uVar44 = -(uint)(_UNK_1506895d4 <= auVar310._4_4_);
        uVar46 = -(uint)(_UNK_1506895d8 <= auVar310._8_4_);
        uVar47 = -(uint)(_UNK_1506895dc <= auVar310._12_4_);
        fVar264 = (___xmm_3f0000003f0000003f0000003f000000 -
                  fVar264 * fVar264 * auVar310._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) *
                  fVar264 + fVar264;
        fVar279 = (_UNK_150689624 - fVar279 * fVar279 * auVar310._4_4_ * _UNK_150689624) * fVar279 +
                  fVar279;
        fVar281 = (_UNK_150689628 - fVar281 * fVar281 * auVar310._8_4_ * _UNK_150689628) * fVar281 +
                  fVar281;
        fVar283 = (_UNK_15068962c - fVar283 * fVar283 * auVar310._12_4_ * _UNK_15068962c) * fVar283
                  + fVar283;
        auVar74._0_8_ =
             CONCAT44((uint)(fVar106 * fVar279) & uVar44,(uint)(fVar49 * fVar264) & uVar43);
        auVar74._8_4_ = (uint)(fVar107 * fVar281) & uVar46;
        auVar74._12_4_ = (uint)(fVar109 * fVar283) & uVar47;
        bVar42 = (bVar30 & 1) != 0;
        auVar337 = unaff_XMM12;
        if (bVar42) {
          auVar337._8_4_ = auVar74._8_4_;
          auVar337._0_8_ = auVar74._0_8_;
          auVar337._12_4_ = auVar74._12_4_;
        }
        auVar129._0_8_ =
             CONCAT44((uint)(fVar147 * fVar279) & uVar44,(uint)(fVar110 * fVar264) & uVar43);
        auVar129._8_4_ = (uint)(fVar148 * fVar281) & uVar46;
        auVar129._12_4_ = (uint)(fVar151 * fVar283) & uVar47;
        auVar176._0_8_ =
             CONCAT44((uint)(fVar204 * fVar279) & uVar44,(uint)(fVar153 * fVar264) & uVar43);
        auVar176._8_4_ = (uint)(fVar205 * fVar281) & uVar46;
        auVar176._12_4_ = (uint)(fVar206 * fVar283) & uVar47;
        auVar278._0_4_ = (uint)(fVar265 * fVar264) & uVar43;
        auVar278._4_4_ = (uint)(fVar280 * fVar279) & uVar44;
        auVar278._8_4_ = (uint)(fVar282 * fVar281) & uVar46;
        auVar278._12_4_ = (uint)(fVar284 * fVar283) & uVar47;
        auVar250._0_4_ =
             -(uint)(auVar310._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77) &
             (uint)___xmm_3f8000003f8000003f8000003f800000;
        auVar250._4_4_ = -(uint)(auVar310._4_4_ < _UNK_1506895d4) & (uint)_UNK_15076b1f4;
        auVar250._8_4_ = -(uint)(auVar310._8_4_ < _UNK_1506895d8) & (uint)_UNK_15076b1f8;
        auVar250._12_4_ = -(uint)(auVar310._12_4_ < _UNK_1506895dc) & (uint)_UNK_15076b1fc;
        auVar250 = auVar250 | auVar278;
        auVar168 = unaff_XMM14;
        auVar311 = in_XMM3;
        unaff_XMM10 = unaff_XMM7;
        if (bVar42) {
          auVar311._8_4_ = auVar129._8_4_;
          auVar311._0_8_ = auVar129._0_8_;
          auVar311._12_4_ = auVar129._12_4_;
          unaff_XMM10._8_4_ = auVar176._8_4_;
          unaff_XMM10._0_8_ = auVar176._0_8_;
          unaff_XMM10._12_4_ = auVar176._12_4_;
          auVar168 = auVar250;
        }
        auVar53 = blendps(unaff_XMM12,auVar337,1);
        if ((bVar30 & 2) == 0) {
          auVar266 = blendps(in_XMM3,auVar311,1);
          auVar114 = blendps(unaff_XMM7,unaff_XMM10,1);
          auVar115 = blendps(unaff_XMM14,auVar168,1);
          auVar53 = blendps(auVar53,auVar53,2);
          auVar168 = auVar115;
          auVar312 = auVar266;
          auVar338 = auVar114;
          if ((bVar30 & 4) != 0) goto LAB_140b0496e;
LAB_140b04a56:
          auVar266 = blendps(auVar266,auVar312,2);
          auVar114 = blendps(auVar114,auVar338,2);
          auVar115 = blendps(auVar115,auVar168,2);
          auVar168 = blendps(auVar53,auVar53,4);
          auVar53 = auVar115;
          unaff_XMM6 = auVar266;
          unaff_XMM8 = auVar114;
          if (-1 < (char)bVar30) goto LAB_140b049b6;
LAB_140b04a9c:
          auVar266 = blendps(auVar266,unaff_XMM6,4);
          if (-1 < (char)bVar30) goto LAB_140b04ab1;
LAB_140b049cf:
          auVar114 = blendps(auVar114,unaff_XMM8,4);
          if (-1 < (char)bVar30) goto LAB_140b049dc;
LAB_140b04ac1:
          auVar53 = blendps(auVar115,auVar53,4);
        }
        else {
          auVar354._8_4_ = auVar74._8_4_;
          auVar354._0_8_ = auVar74._0_8_;
          auVar354._12_4_ = auVar74._12_4_;
          auVar266 = blendps(in_XMM3,auVar311,1);
          auVar312._8_4_ = auVar129._8_4_;
          auVar312._0_8_ = auVar129._0_8_;
          auVar312._12_4_ = auVar129._12_4_;
          auVar114 = blendps(unaff_XMM7,unaff_XMM10,1);
          auVar338._8_4_ = auVar176._8_4_;
          auVar338._0_8_ = auVar176._0_8_;
          auVar338._12_4_ = auVar176._12_4_;
          auVar115 = blendps(unaff_XMM14,auVar168,1);
          auVar53 = blendps(auVar53,auVar354,2);
          auVar168 = auVar250;
          if ((bVar30 & 4) == 0) goto LAB_140b04a56;
LAB_140b0496e:
          auVar355._8_4_ = auVar74._8_4_;
          auVar355._0_8_ = auVar74._0_8_;
          auVar355._12_4_ = auVar74._12_4_;
          auVar266 = blendps(auVar266,auVar312,2);
          unaff_XMM6._8_4_ = (float)auVar129._8_4_;
          unaff_XMM6._0_8_ = auVar129._0_8_;
          unaff_XMM6._12_4_ = (float)auVar129._12_4_;
          auVar114 = blendps(auVar114,auVar338,2);
          unaff_XMM8._8_4_ = auVar176._8_4_;
          unaff_XMM8._0_8_ = auVar176._0_8_;
          unaff_XMM8._12_4_ = auVar176._12_4_;
          auVar115 = blendps(auVar115,auVar168,2);
          auVar168 = blendps(auVar53,auVar355,4);
          auVar53 = auVar250;
          if ((char)bVar30 < '\0') goto LAB_140b04a9c;
LAB_140b049b6:
          auVar74 = auVar168;
          auVar266 = blendps(auVar266,unaff_XMM6,4);
          auVar168 = auVar74;
          if ((char)bVar30 < '\0') goto LAB_140b049cf;
LAB_140b04ab1:
          auVar129 = auVar266;
          auVar114 = blendps(auVar114,unaff_XMM8,4);
          auVar266 = auVar129;
          if ((char)bVar30 < '\0') goto LAB_140b04ac1;
LAB_140b049dc:
          auVar53 = blendps(auVar115,auVar53,4);
          auVar176 = auVar114;
        }
        if (-1 < (char)bVar30) {
          auVar250 = auVar53;
        }
        unaff_XMM12 = blendps(auVar168,auVar74,8);
        in_XMM3 = blendps(auVar266,auVar129,8);
        unaff_XMM7 = blendps(auVar114,auVar176,8);
        unaff_XMM14 = blendps(auVar53,auVar250,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
      }
LAB_140b015aa:
      auVar112._0_8_ = unaff_XMM7._0_8_;
      fStack_f0 = unaff_XMM7._12_4_;
      auVar112._8_4_ = unaff_XMM7._4_4_;
      auVar112._12_4_ = unaff_XMM14._4_4_;
      auVar235._0_8_ = unaff_XMM12._0_8_;
      auVar235._8_4_ = unaff_XMM12._4_4_;
      auVar235._12_4_ = in_XMM3._4_4_;
      auVar236._0_4_ = unaff_XMM12._0_4_;
      auVar236._4_4_ = in_XMM3._0_4_;
      auVar52._0_8_ = CONCAT44(in_XMM3._8_4_,unaff_XMM12._8_4_);
      auVar52._8_4_ = unaff_XMM12._12_4_;
      auVar52._12_4_ = in_XMM3._12_4_;
      local_128 = CONCAT44(in_XMM3._0_4_,auVar236._0_4_);
      uStack_120 = CONCAT44(unaff_XMM14._0_4_,unaff_XMM7._0_4_);
      local_118 = auVar235._8_8_;
      uStack_110 = auVar112._8_8_;
      local_108 = auVar52._0_8_;
      uStack_100 = unaff_XMM7._8_4_;
      uStack_fc = unaff_XMM14._8_4_;
      local_f8 = auVar52._8_8_;
      fStack_ec = unaff_XMM14._12_4_;
      local_1f8 = (int)*puVar1;
      auVar236._8_8_ = auVar112._0_8_;
      auVar168 = insertps(auVar236,unaff_XMM14,0x30);
      pdVar3 = (double *)(param_1 + (longlong)local_1f8 * 0x60);
      *pdVar3 = (double)auVar168._0_4_;
      pdVar3[1] = (double)auVar168._4_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)local_1f8 * 0x60);
      *pdVar3 = (double)auVar168._8_4_;
      pdVar3[1] = (double)auVar168._12_4_;
      auVar168 = insertps(in_XMM3,unaff_XMM12,0x4c);
      auVar113._0_8_ = auVar168._0_8_;
      auVar113._8_4_ = unaff_XMM7._4_4_;
      auVar113._12_4_ = fStack_f0;
      auVar168 = insertps(auVar113,unaff_XMM14,0x70);
      pdVar3 = (double *)(param_1 + (longlong)iVar24 * 0x60);
      *pdVar3 = (double)auVar168._0_4_;
      pdVar3[1] = (double)auVar168._4_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)iVar24 * 0x60);
      *pdVar3 = (double)auVar168._8_4_;
      pdVar3[1] = (double)auVar168._12_4_;
      local_228 = (int)uVar22;
      auVar168 = blendps(auVar52,unaff_XMM7,0xc);
      auVar168 = insertps(auVar168,unaff_XMM14,0xb0);
      pdVar3 = (double *)(param_1 + (longlong)local_228 * 0x60);
      *pdVar3 = (double)auVar168._0_4_;
      pdVar3[1] = (double)auVar168._4_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)local_228 * 0x60);
      *pdVar3 = (double)auVar168._8_4_;
      pdVar3[1] = (double)auVar168._12_4_;
      pdVar3 = (double *)(param_1 + (longlong)iVar19 * 0x60);
      *pdVar3 = (double)unaff_XMM12._12_4_;
      pdVar3[1] = (double)in_XMM3._12_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)iVar19 * 0x60);
      *pdVar3 = (double)fStack_f0;
      pdVar3[1] = (double)unaff_XMM14._12_4_;
      uVar20 = uVar20 + 0x20;
      uVar39 = uVar39 + 4;
    } while ((int)uVar39 < (int)(uVar45 & 0xfffffffc));
  }
  if ((int)param_9 <= (int)uVar39) {
    return;
  }
  auVar50 = ZEXT416(param_9);
  auVar413._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar39) < (int)param_9);
  auVar413._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar39) < (int)param_9);
  auVar413._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar39) < (int)param_9);
  auVar413._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar39) < (int)param_9);
  auVar75._0_4_ = uVar39 << 3;
  auVar75._4_4_ = uVar39 << 3;
  auVar75._8_4_ = uVar39 << 3;
  auVar75._12_4_ = uVar39 << 3;
  auVar75 = auVar75 & auVar413;
  auVar168 = ___xmm_00000018000000100000000800000000 & auVar413;
  lVar26 = auVar75._4_4_ + param_2;
  lVar27 = auVar75._8_4_ + param_2;
  uVar348 = *(undefined4 *)(param_2 + auVar75._0_4_);
  uVar349 = *(undefined4 *)((ulonglong)auVar168._4_4_ + lVar26);
  uVar12 = *(undefined4 *)((ulonglong)auVar168._8_4_ + lVar27);
  auVar51 = ___xmm_0000001c000000140000000c00000004 & auVar413;
  lVar36 = auVar75._12_4_ + param_2;
  auVar76._0_4_ = *(int *)((ulonglong)auVar51._0_4_ + param_2 + auVar75._0_4_) << 4;
  auVar76._4_4_ = *(int *)((ulonglong)auVar51._4_4_ + lVar26) << 4;
  auVar76._8_4_ = *(int *)((ulonglong)auVar51._8_4_ + lVar27) << 4;
  auVar76._12_4_ = *(int *)((ulonglong)auVar51._12_4_ + lVar36) << 4;
  auVar76 = auVar76 & auVar413;
  auVar51 = ___xmm_00000008000000080000000800000008 & auVar413;
  lVar26 = auVar76._0_4_ + param_3;
  lVar27 = auVar76._4_4_ + param_3;
  uVar20 = auVar76._8_4_ + param_3;
  uVar332 = *(undefined4 *)(auVar51._8_4_ + uVar20);
  param_3 = auVar76._12_4_ + param_3;
  uVar13 = *(undefined4 *)((ulonglong)auVar51._12_4_ + param_3);
  uVar22 = CONCAT44(*(undefined4 *)((ulonglong)auVar51._4_4_ + lVar27),
                    *(undefined4 *)((ulonglong)auVar51._0_4_ + lVar26));
  auVar130._12_4_ = uVar13;
  auVar130._8_4_ = uVar332;
  auVar130._0_8_ = uVar22;
  auVar51 = ___xmm_0000000c0000000c0000000c0000000c & auVar413;
  uVar39 = *(uint *)((ulonglong)auVar51._0_4_ + lVar26);
  uVar45 = *(uint *)((ulonglong)auVar51._4_4_ + lVar27);
  auVar251._4_4_ = uVar45;
  auVar251._0_4_ = uVar39;
  uVar43 = *(uint *)(auVar51._8_4_ + uVar20);
  uVar44 = *(uint *)((ulonglong)auVar51._12_4_ + param_3);
  auVar251._12_4_ = uVar44;
  auVar251._8_4_ = uVar43;
  auVar375._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 == uVar39);
  auVar375._4_4_ = -(uint)(_UNK_150631da4 == uVar45);
  auVar375._8_4_ = -(uint)(_UNK_150631da8 == uVar43);
  auVar375._12_4_ = -(uint)(_UNK_150631dac == uVar44);
  auVar51 = auVar375 & auVar413;
  iVar24 = movmskps((int)lVar27,auVar51);
  uVar46 = 0;
  if (iVar24 != 0) {
    bVar30 = (char)((char)iVar24 << 4) >> 4;
    uVar46 = CONCAT31((int3)((uint)iVar24 >> 8),bVar30);
    auVar50 = blendvps((undefined1  [16])0x0,auVar130,auVar51);
    uVar21 = extractps(auVar50,0);
    lVar26 = param_4 + (int)uVar21;
    uVar47 = *(uint *)(param_4 + (int)uVar21);
    uVar21 = extractps(auVar50,1);
    lVar27 = param_4 + (int)uVar21;
    auVar115 = insertps(ZEXT416(uVar47),*(undefined4 *)(param_4 + (int)uVar21),0x10);
    uVar21 = extractps(auVar50,2);
    lVar29 = param_4 + (int)uVar21;
    auVar408 = ZEXT416(*(uint *)(param_4 + (int)uVar21));
    uVar21 = extractps(auVar50,3);
    auVar114 = insertps(auVar115,auVar408,0x20);
    auVar53 = ZEXT416(*(uint *)(param_4 + (int)uVar21));
    auVar50 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar51);
    uVar32 = extractps(auVar50,0);
    uVar207 = *(uint *)((int)uVar32 + lVar26);
    uVar32 = extractps(auVar50,1);
    auVar339 = insertps(ZEXT416(uVar207),*(undefined4 *)((int)uVar32 + lVar27),0x10);
    uVar32 = extractps(auVar50,2);
    auVar333 = ZEXT416(*(uint *)((int)uVar32 + lVar29));
    uVar32 = extractps(auVar50,3);
    lVar263 = param_4 + (int)uVar21;
    auVar266 = ZEXT416(*(uint *)((int)uVar32 + lVar263));
    auVar50 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar51);
    uVar21 = extractps(auVar50,0);
    uVar233 = *(uint *)((int)uVar21 + lVar26);
    uVar21 = extractps(auVar50,1);
    auVar376 = insertps(ZEXT416(uVar233),*(undefined4 *)((int)uVar21 + lVar27),0x10);
    uVar21 = extractps(auVar50,2);
    auVar217 = ZEXT416(*(uint *)((int)uVar21 + lVar29));
    uVar21 = extractps(auVar50,3);
    auVar51 = ZEXT416(*(uint *)((int)uVar21 + lVar263));
    uVar20 = (ulonglong)uVar46 & 0xff;
    unaff_XMM10 = ZEXT416(uVar233);
    unaff_XMM12 = ZEXT416(uVar207);
    unaff_XMM9 = ZEXT416(uVar47);
    if ((bVar30 & 2) != 0) {
      unaff_XMM10 = auVar376;
      unaff_XMM12 = auVar339;
      unaff_XMM9 = auVar115;
    }
    auVar50 = insertps(auVar114,auVar53,0x30);
    auVar114 = insertps(auVar339,auVar333,0x20);
    bVar42 = (bVar30 & 4) != 0;
    if (bVar42) {
      unaff_XMM9 = insertps(unaff_XMM9,auVar408,0x20);
    }
    auVar114 = insertps(auVar114,auVar266,0x30);
    auVar115 = insertps(auVar376,auVar217,0x20);
    unaff_XMM6._0_4_ = auVar50._0_4_ * auVar50._0_4_;
    unaff_XMM6._4_4_ = auVar50._4_4_ * auVar50._4_4_;
    unaff_XMM6._8_4_ = auVar50._8_4_ * auVar50._8_4_;
    unaff_XMM6._12_4_ = auVar50._12_4_ * auVar50._12_4_;
    if (bVar42) {
      unaff_XMM12 = insertps(unaff_XMM12,auVar333,0x20);
    }
    auVar50 = insertps(auVar115,auVar51,0x30);
    if (bVar42) {
      unaff_XMM10 = insertps(unaff_XMM10,auVar217,0x20);
    }
    fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - unaff_XMM6._0_4_) -
             auVar114._0_4_ * auVar114._0_4_;
    fVar106 = (_UNK_15076b1f4 - unaff_XMM6._4_4_) - auVar114._4_4_ * auVar114._4_4_;
    fVar107 = (_UNK_15076b1f8 - unaff_XMM6._8_4_) - auVar114._8_4_ * auVar114._8_4_;
    fVar109 = (_UNK_15076b1fc - unaff_XMM6._12_4_) - auVar114._12_4_ * auVar114._12_4_;
    fVar110 = auVar50._0_4_ * auVar50._0_4_;
    fVar147 = auVar50._4_4_ * auVar50._4_4_;
    fVar148 = auVar50._8_4_ * auVar50._8_4_;
    fVar151 = auVar50._12_4_ * auVar50._12_4_;
    if ((char)bVar30 < '\0') {
      unaff_XMM9 = insertps(unaff_XMM9,auVar53,0x30);
      auVar323._0_4_ = fVar49 - fVar110;
      auVar323._4_4_ = fVar106 - fVar147;
      auVar323._8_4_ = fVar107 - fVar148;
      auVar323._12_4_ = fVar109 - fVar151;
      unaff_XMM12 = insertps(unaff_XMM12,auVar266,0x30);
      auVar50 = sqrtps(auVar53,auVar323);
      unaff_XMM10 = insertps(unaff_XMM10,auVar51,0x30);
    }
    else {
      auVar322._0_4_ = fVar49 - fVar110;
      auVar322._4_4_ = fVar106 - fVar147;
      auVar322._8_4_ = fVar107 - fVar148;
      auVar322._12_4_ = fVar109 - fVar151;
      auVar50 = sqrtps(auVar53,auVar322);
    }
    unaff_XMM13._0_4_ = -(uint)(0.0 < fVar49 - fVar110) & auVar50._0_4_;
    unaff_XMM13._4_4_ = -(uint)(0.0 < fVar106 - fVar147) & auVar50._4_4_;
    unaff_XMM13._8_4_ = -(uint)(0.0 < fVar107 - fVar148) & auVar50._8_4_;
    unaff_XMM13._12_4_ = -(uint)(0.0 < fVar109 - fVar151) & auVar50._12_4_;
  }
  uVar14 = *(undefined4 *)((ulonglong)auVar168._12_4_ + lVar36);
  auVar51 = ~auVar375 & auVar413;
  iVar24 = movmskps(uVar46,auVar51);
  uVar25 = 0;
  if (iVar24 == 0) goto LAB_140b077ba;
  auVar340._4_4_ = uVar13;
  auVar340._0_4_ = uVar332;
  auVar340._8_8_ = 0;
  bVar30 = (char)((char)iVar24 << 4) >> 4;
  auVar77._0_4_ = -(uint)((int)___xmm_00000001000000010000000100000001 < (int)uVar39);
  auVar77._4_4_ = -(uint)((int)_UNK_150631da4 < (int)uVar45);
  auVar77._8_4_ = -(uint)((int)_UNK_150631da8 < (int)uVar43);
  auVar77._12_4_ = -(uint)((int)_UNK_150631dac < (int)uVar44);
  auVar78 = ~auVar77 & auVar51;
  iVar19 = movmskps((int)uVar20,auVar78);
  uVar46 = auVar51._8_4_;
  uVar47 = auVar51._12_4_;
  auVar168 = ZEXT816(0);
  if ((iVar19 == 0) || (auVar168 = auVar78, (bVar30 & 0xf) != (byte)iVar19)) {
    local_318 = (undefined1  [16])0x0;
    uVar207 = auVar168._0_4_ ^ 0xffffffff;
    auVar78._0_8_ = auVar168._0_8_ ^ 0xffffffffffffffff;
    auVar78._8_4_ = auVar168._8_4_ ^ 0xffffffff;
    auVar78._12_4_ = auVar168._12_4_ ^ 0xffffffff;
    unaff_XMM6 = ZEXT416((uint)param_6);
    auVar168 = ZEXT816(0);
    auVar50 = ZEXT816(0);
    uVar233 = (uint)(auVar78._0_8_ >> 0x20);
    if (0.0 < param_6) {
      auVar251._0_4_ = uVar39 - 1;
      auVar251._4_4_ = uVar45 - 1;
      auVar251._8_4_ = uVar43 - 1;
      auVar251._12_4_ = uVar44 - 1;
      if (__real_3f800000 <= param_6) {
        auVar80._0_4_ = auVar51._0_4_ & uVar207;
        auVar80._4_4_ = auVar51._4_4_ & uVar233;
        auVar80._8_4_ = uVar46 & auVar78._8_4_;
        auVar80._12_4_ = uVar47 & auVar78._12_4_;
        auVar168 = blendvps(auVar168,auVar251,auVar80);
        local_318 = auVar168;
      }
      else {
        auVar313._0_4_ = (float)auVar251._0_4_ * param_6;
        auVar313._4_4_ = (float)auVar251._4_4_ * param_6;
        auVar313._8_4_ = (float)auVar251._8_4_ * param_6;
        auVar313._12_4_ = (float)auVar251._12_4_ * param_6;
        auVar79._0_4_ = auVar51._0_4_ & uVar207;
        auVar79._4_4_ = auVar51._4_4_ & uVar233;
        auVar79._8_4_ = uVar46 & auVar78._8_4_;
        auVar79._12_4_ = uVar47 & auVar78._12_4_;
        auVar53 = roundps(auVar168,auVar313,9);
        iVar19 = (int)auVar53._0_4_;
        iVar18 = (int)auVar53._4_4_;
        iVar149 = (int)auVar53._8_4_;
        iVar152 = (int)auVar53._12_4_;
        auVar131._0_4_ =
             (uint)(auVar251._0_4_ < iVar19) * auVar251._0_4_ |
             (uint)(auVar251._0_4_ >= iVar19) * iVar19;
        auVar131._4_4_ =
             (uint)(auVar251._4_4_ < iVar18) * auVar251._4_4_ |
             (uint)(auVar251._4_4_ >= iVar18) * iVar18;
        auVar131._8_4_ =
             (uint)(auVar251._8_4_ < iVar149) * auVar251._8_4_ |
             (uint)(auVar251._8_4_ >= iVar149) * iVar149;
        auVar131._12_4_ =
             (uint)(auVar251._12_4_ < iVar152) * auVar251._12_4_ |
             (uint)(auVar251._12_4_ >= iVar152) * iVar152;
        auVar168 = blendvps(ZEXT816(0),auVar131,auVar79);
        auVar177 = auVar50;
        if (param_7 != '\x01') {
          auVar177._4_4_ = auVar313._4_4_ - auVar53._4_4_;
          auVar177._0_4_ = auVar313._0_4_ - auVar53._0_4_;
          auVar177._8_4_ = auVar313._8_4_ - auVar53._8_4_;
          auVar177._12_4_ = auVar313._12_4_ - auVar53._12_4_;
        }
        iVar19 = auVar168._0_4_ + 1;
        iVar18 = auVar168._4_4_ + 1;
        iVar149 = auVar168._8_4_ + 1;
        iVar152 = auVar168._12_4_ + 1;
        unaff_XMM6._0_4_ =
             (float)((uint)(auVar251._0_4_ < iVar19) * auVar251._0_4_ |
                    (uint)(auVar251._0_4_ >= iVar19) * iVar19);
        unaff_XMM6._4_4_ =
             (float)((uint)(auVar251._4_4_ < iVar18) * auVar251._4_4_ |
                    (uint)(auVar251._4_4_ >= iVar18) * iVar18);
        unaff_XMM6._8_4_ =
             (float)((uint)(auVar251._8_4_ < iVar149) * auVar251._8_4_ |
                    (uint)(auVar251._8_4_ >= iVar149) * iVar149);
        unaff_XMM6._12_4_ =
             (float)((uint)(auVar251._12_4_ < iVar152) * auVar251._12_4_ |
                    (uint)(auVar251._12_4_ >= iVar152) * iVar152);
        local_318 = blendvps(auVar50,unaff_XMM6,auVar79);
        auVar50 = auVar177;
      }
    }
    auVar81._8_4_ = auVar78._8_4_;
    auVar81._0_8_ = auVar78._0_8_;
    auVar81._12_4_ = auVar78._12_4_;
    auVar53 = blendvps(ZEXT816(0),auVar50,auVar81);
  }
  else {
    auVar53 = ZEXT816(0);
    local_318 = ZEXT816(0);
    auVar168 = ZEXT816(0);
  }
  auVar115 = pmovsxdq(unaff_XMM6,auVar340);
  auVar114 = pmovsxdq(auVar50,uVar22);
  auVar132._4_4_ = uVar17;
  auVar132._0_4_ = uVar17;
  auVar132._8_4_ = uVar17;
  auVar132._12_4_ = uVar17;
  auVar82._4_4_ = uVar17;
  auVar82._0_4_ = uVar17;
  auVar82._8_8_ = 0;
  auVar50 = pmovzxdq(auVar82,auVar82);
  auVar266 = pmovzxdq(auVar50,auVar132);
  auVar133._4_4_ = iVar23;
  auVar133._0_4_ = iVar23;
  auVar133._8_4_ = iVar23;
  auVar133._12_4_ = iVar23;
  local_288 = auVar266._0_8_;
  lStack_280 = auVar266._8_8_;
  local_2d8 = auVar50._0_8_;
  lStack_2d0 = auVar50._8_8_;
  lVar26 = auVar114._0_8_;
  lVar27 = auVar114._8_8_;
  lVar36 = auVar115._0_8_;
  lVar29 = auVar115._8_8_;
  if (5 < param_8) {
    if ((bVar30 & 1) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,1);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,1);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,1);
      unaff_XMM13 = blendps(unaff_XMM13,ZEXT416((uint)__real_3f800000),1);
    }
    if ((bVar30 & 2) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,2);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,2);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,2);
      unaff_XMM13 = insertps(unaff_XMM13,ZEXT416((uint)__real_3f800000),0x10);
    }
    if ((bVar30 & 4) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,4);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,4);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,4);
      unaff_XMM13 = insertps(unaff_XMM13,ZEXT416((uint)__real_3f800000),0x20);
    }
    if ((char)bVar30 < '\0') {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,8);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,8);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,8);
      unaff_XMM13 = insertps(unaff_XMM13,ZEXT416((uint)__real_3f800000),0x30);
    }
    goto LAB_140b06684;
  }
  auVar50 = pmulld(auVar168,auVar133);
  auVar266 = pmovsxdq(auVar78,auVar50);
  auVar83._8_4_ = auVar50._8_4_;
  auVar83._12_4_ = auVar50._12_4_;
  auVar83._0_8_ = auVar50._8_8_;
  auVar50 = pmovsxdq(auVar251,auVar83);
  lVar111 = auVar50._0_8_;
  lVar150 = auVar50._8_8_;
  lVar263 = auVar266._0_8_;
  lVar108 = auVar266._8_8_;
  switch(param_8) {
  case 0:
    auVar178._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar178._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar134._0_8_ = lVar26 + local_288 + lVar263;
    auVar134._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar266 = pmovsxdq(auVar266,auVar51);
    auVar114 = blendvps((undefined1  [16])0x0,auVar134,auVar266);
    auVar252._4_4_ = uVar46;
    auVar252._0_4_ = uVar46;
    auVar252._8_4_ = uVar47;
    auVar252._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar178,auVar252);
    lVar263 = param_4 + auVar114._0_8_;
    lVar108 = param_4 + auVar114._8_8_;
    lVar111 = param_4 + auVar50._0_8_;
    auVar333 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar266);
    auVar408 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar252);
    lVar150 = param_4 + auVar50._8_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar266);
    auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar252);
    auVar266 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar266);
    auVar339 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,auVar252);
    if ((bVar30 & 1) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,ZEXT416(*(uint *)(param_4 + auVar114._0_8_)),1);
      unaff_XMM12 = blendps(unaff_XMM12,ZEXT416(*(uint *)(auVar333._0_8_ + lVar263)),1);
      unaff_XMM10 = blendps(unaff_XMM10,ZEXT416(*(uint *)(auVar115._0_8_ + lVar263)),1);
      unaff_XMM13 = blendps(unaff_XMM13,ZEXT416(*(uint *)(auVar266._0_8_ + lVar263)),1);
    }
    if ((bVar30 & 2) != 0) {
      unaff_XMM9 = insertps(unaff_XMM9,*(undefined4 *)(param_4 + auVar114._8_8_),0x10);
      unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(auVar333._8_8_ + lVar108),0x10);
      unaff_XMM10 = insertps(unaff_XMM10,*(undefined4 *)(auVar115._8_8_ + lVar108),0x10);
      unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar266._8_8_ + lVar108),0x10);
    }
    if ((bVar30 & 4) != 0) {
      unaff_XMM9 = insertps(unaff_XMM9,*(undefined4 *)(param_4 + auVar50._0_8_),0x20);
      unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(auVar408._0_8_ + lVar111),0x20);
      unaff_XMM10 = insertps(unaff_XMM10,*(undefined4 *)(auVar376._0_8_ + lVar111),0x20);
      unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar339._0_8_ + lVar111),0x20);
    }
    if ((char)bVar30 < '\0') {
      unaff_XMM9 = insertps(unaff_XMM9,*(undefined4 *)(param_4 + auVar50._8_8_),0x30);
      unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(auVar408._8_8_ + lVar150),0x30);
      unaff_XMM10 = insertps(unaff_XMM10,*(undefined4 *)(auVar376._8_8_ + lVar150),0x30);
      unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar339._8_8_ + lVar150),0x30);
    }
    break;
  case 1:
    auVar138._0_8_ = lVar26 + local_288 + lVar263;
    auVar138._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar114 = pmovsxdq(auVar266,auVar51);
    auVar266 = blendvps((undefined1  [16])0x0,auVar138,auVar114);
    auVar188._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar188._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar256._4_4_ = uVar46;
    auVar256._0_4_ = uVar46;
    auVar256._8_4_ = uVar47;
    auVar256._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar188,auVar256);
    lVar263 = param_4 + auVar266._0_8_;
    lVar108 = param_4 + auVar266._8_8_;
    lVar111 = param_4 + auVar50._0_8_;
    lVar150 = param_4 + auVar50._8_8_;
    uVar39 = *(uint *)(param_4 + auVar266._0_8_);
    uVar45 = *(uint *)(param_4 + auVar266._8_8_);
    auVar266 = insertps(ZEXT416(uVar39),ZEXT416(uVar45),0x10);
    uVar43 = *(uint *)(param_4 + auVar50._0_8_);
    auVar266 = insertps(auVar266,ZEXT416(uVar43),0x20);
    uVar44 = *(uint *)(param_4 + auVar50._8_8_);
    auVar50 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar114);
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar256);
    auVar333 = insertps(auVar266,ZEXT416(uVar44),0x30);
    uVar46 = *(uint *)(auVar50._0_8_ + lVar263);
    auVar266 = ZEXT416(*(uint *)(auVar50._8_8_ + lVar108));
    auVar50 = insertps(ZEXT416(uVar46),auVar266,0x10);
    uVar47 = *(uint *)(auVar115._0_8_ + lVar111);
    auVar50 = insertps(auVar50,ZEXT416(uVar47),0x20);
    uVar207 = *(uint *)(auVar115._8_8_ + lVar150);
    auVar376 = insertps(auVar50,ZEXT416(uVar207),0x30);
    auVar50 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar114);
    auVar114 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar256);
    uVar233 = *(uint *)(auVar50._0_8_ + lVar263);
    auVar339 = ZEXT416(*(uint *)(auVar50._8_8_ + lVar108));
    auVar50 = insertps(ZEXT416(uVar233),auVar339,0x10);
    auVar115 = ZEXT416(*(uint *)(auVar114._0_8_ + lVar111));
    auVar50 = insertps(auVar50,auVar115,0x20);
    auVar114 = ZEXT416(*(uint *)(auVar114._8_8_ + lVar150));
    auVar50 = insertps(auVar50,auVar114,0x30);
    auVar225._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar333._0_4_ * auVar333._0_4_) -
         auVar376._0_4_ * auVar376._0_4_) - auVar50._0_4_ * auVar50._0_4_;
    auVar225._4_4_ =
         ((_UNK_15076b1f4 - auVar333._4_4_ * auVar333._4_4_) - auVar376._4_4_ * auVar376._4_4_) -
         auVar50._4_4_ * auVar50._4_4_;
    auVar225._8_4_ =
         ((_UNK_15076b1f8 - auVar333._8_4_ * auVar333._8_4_) - auVar376._8_4_ * auVar376._8_4_) -
         auVar50._8_4_ * auVar50._8_4_;
    auVar225._12_4_ =
         ((_UNK_15076b1fc - auVar333._12_4_ * auVar333._12_4_) - auVar376._12_4_ * auVar376._12_4_)
         - auVar50._12_4_ * auVar50._12_4_;
    if ((bVar30 & 1) == 0) {
      auVar50 = sqrtps(auVar225,auVar225);
      auVar86._0_4_ = -(uint)(0.0 < auVar225._0_4_) & auVar50._0_4_;
      auVar86._4_4_ = -(uint)(0.0 < auVar225._4_4_) & auVar50._4_4_;
      auVar86._8_4_ = -(uint)(0.0 < auVar225._8_4_) & auVar50._8_4_;
      auVar86._12_4_ = -(uint)(0.0 < auVar225._12_4_) & auVar50._12_4_;
      auVar50 = unaff_XMM13;
      if ((bVar30 & 2) != 0) goto LAB_140b06323;
LAB_140b060fe:
      auVar50 = blendps(unaff_XMM13,auVar50,1);
      auVar266 = auVar50;
      if ((bVar30 & 4) != 0) goto LAB_140b06373;
LAB_140b06145:
      auVar50 = blendps(auVar266,auVar50,2);
      auVar266 = auVar50;
      if (-1 < (char)bVar30) goto LAB_140b063a8;
LAB_140b06179:
      unaff_XMM9 = insertps(unaff_XMM9,uVar44,0x30);
      if ((char)bVar30 < '\0') goto LAB_140b0618b;
LAB_140b063ae:
      if (-1 < (char)bVar30) goto LAB_140b063b4;
LAB_140b0619a:
      unaff_XMM10 = insertps(unaff_XMM10,auVar114,0x30);
      auVar333 = blendps(auVar266,auVar50,4);
    }
    else {
      unaff_XMM9 = blendps(unaff_XMM9,ZEXT416(uVar39),1);
      auVar50 = sqrtps(auVar225,auVar225);
      unaff_XMM12 = blendps(unaff_XMM12,ZEXT416(uVar46),1);
      auVar86._0_4_ = -(uint)(0.0 < auVar225._0_4_) & auVar50._0_4_;
      auVar86._4_4_ = -(uint)(0.0 < auVar225._4_4_) & auVar50._4_4_;
      auVar86._8_4_ = -(uint)(0.0 < auVar225._8_4_) & auVar50._8_4_;
      auVar86._12_4_ = -(uint)(0.0 < auVar225._12_4_) & auVar50._12_4_;
      unaff_XMM10 = blendps(unaff_XMM10,ZEXT416(uVar233),1);
      auVar50 = auVar86;
      if ((bVar30 & 2) == 0) goto LAB_140b060fe;
LAB_140b06323:
      unaff_XMM9 = insertps(unaff_XMM9,uVar45,0x10);
      unaff_XMM12 = insertps(unaff_XMM12,auVar266,0x10);
      unaff_XMM10 = insertps(unaff_XMM10,auVar339,0x10);
      auVar266 = blendps(unaff_XMM13,auVar50,1);
      auVar50 = auVar86;
      if ((bVar30 & 4) == 0) goto LAB_140b06145;
LAB_140b06373:
      unaff_XMM9 = insertps(unaff_XMM9,uVar43,0x20);
      unaff_XMM12 = insertps(unaff_XMM12,uVar47,0x20);
      unaff_XMM10 = insertps(unaff_XMM10,auVar115,0x20);
      auVar266 = blendps(auVar266,auVar50,2);
      auVar50 = auVar86;
      if ((char)bVar30 < '\0') goto LAB_140b06179;
LAB_140b063a8:
      if (-1 < (char)bVar30) goto LAB_140b063ae;
LAB_140b0618b:
      unaff_XMM12 = insertps(unaff_XMM12,uVar207,0x30);
      if ((char)bVar30 < '\0') goto LAB_140b0619a;
LAB_140b063b4:
      auVar333 = blendps(auVar266,auVar50,4);
    }
    if (-1 < (char)bVar30) {
      auVar86 = auVar333;
    }
    goto LAB_140b063c7;
  case 2:
    auVar182._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar182._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar136._0_8_ = lVar26 + local_288 + lVar263;
    auVar136._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar50,auVar51);
    auVar339 = blendvps(ZEXT816(0),auVar136,auVar50);
    auVar221._4_4_ = uVar46;
    auVar221._0_4_ = uVar46;
    auVar221._8_4_ = uVar47;
    auVar221._12_4_ = uVar47;
    auVar115 = blendvps((undefined1  [16])0x0,auVar182,auVar221);
    lVar263 = param_4 + auVar339._0_8_;
    lVar108 = param_4 + auVar339._8_8_;
    auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar50);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar221);
    auVar333 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar50);
    lVar111 = param_4 + auVar115._0_8_;
    auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar221);
    lVar150 = param_4 + auVar115._8_8_;
    auVar222._0_4_ =
         (float)(int)((uint)*(ushort *)(param_4 + auVar339._0_8_) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar222._4_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar339._8_8_) + _UNK_151c6b8e4);
    auVar222._8_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar115._0_8_) + _UNK_151c6b8e8);
    auVar222._12_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar115._8_8_) + _UNK_151c6b8ec);
    auVar50 = divps(auVar222,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar254._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar376._0_8_ + lVar263) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar254._4_4_ = (float)(int)((uint)*(ushort *)(auVar376._8_8_ + lVar108) + _UNK_151c6b8e4);
    auVar254._8_4_ = (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar111) + _UNK_151c6b8e8);
    auVar254._12_4_ = (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar150) + _UNK_151c6b8ec);
    auVar266 = divps(auVar254,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar342._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar333._0_8_ + lVar263) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar342._4_4_ = (float)(int)((uint)*(ushort *)(auVar333._8_8_ + lVar108) + _UNK_151c6b8e4);
    auVar342._8_4_ = (float)(int)((uint)*(ushort *)(auVar114._0_8_ + lVar111) + _UNK_151c6b8e8);
    auVar342._12_4_ = (float)(int)((uint)*(ushort *)(auVar114._8_8_ + lVar150) + _UNK_151c6b8ec);
    auVar114 = divps(auVar342,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar183._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar50._0_4_ * auVar50._0_4_) -
         auVar266._0_4_ * auVar266._0_4_) - auVar114._0_4_ * auVar114._0_4_;
    auVar183._4_4_ =
         ((_UNK_15076b1f4 - auVar50._4_4_ * auVar50._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
         auVar114._4_4_ * auVar114._4_4_;
    auVar183._8_4_ =
         ((_UNK_15076b1f8 - auVar50._8_4_ * auVar50._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
         auVar114._8_4_ * auVar114._8_4_;
    auVar183._12_4_ =
         ((_UNK_15076b1fc - auVar50._12_4_ * auVar50._12_4_) - auVar266._12_4_ * auVar266._12_4_) -
         auVar114._12_4_ * auVar114._12_4_;
    auVar339 = sqrtps(auVar183,auVar183);
    bVar42 = (bVar30 & 1) == 0;
    auVar115 = unaff_XMM9;
    if (!bVar42) {
      auVar115 = auVar50;
    }
    auVar86._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar183._4_4_) & auVar339._4_4_,
                  -(uint)(0.0 < auVar183._0_4_) & auVar339._0_4_);
    auVar86._8_4_ = -(uint)(0.0 < auVar183._8_4_) & auVar339._8_4_;
    auVar86._12_4_ = -(uint)(0.0 < auVar183._12_4_) & auVar339._12_4_;
    if (bVar42) {
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar184 = unaff_XMM13;
      auVar115 = unaff_XMM12;
      auVar339 = unaff_XMM10;
      if ((bVar30 & 2) != 0) goto LAB_140b0587c;
LAB_140b05777:
      auVar115 = blendps(unaff_XMM12,auVar115,1);
      auVar339 = blendps(unaff_XMM10,auVar339,1);
      auVar400 = blendps(unaff_XMM13,auVar184,1);
      auVar376 = blendps(auVar376,auVar376,2);
      auVar333 = auVar339;
      auVar408 = auVar115;
      auVar217 = auVar400;
      if ((bVar30 & 4) != 0) goto LAB_140b058cb;
LAB_140b057c4:
      auVar408 = blendps(auVar408,auVar115,2);
      auVar339 = blendps(auVar333,auVar339,2);
      auVar401 = blendps(auVar217,auVar400,2);
      auVar115 = blendps(auVar376,auVar376,4);
      auVar333 = auVar339;
      auVar267 = auVar408;
      auVar217 = auVar401;
      if (-1 < (char)bVar30) goto LAB_140b05915;
LAB_140b0580c:
      auVar376 = blendps(auVar267,auVar408,4);
      if (-1 < (char)bVar30) goto LAB_140b0581f;
LAB_140b0592c:
      auVar339 = blendps(auVar333,auVar339,4);
      if (-1 < (char)bVar30) goto LAB_140b05942;
LAB_140b05839:
      auVar333 = blendps(auVar217,auVar401,4);
    }
    else {
      auVar184._8_4_ = auVar86._8_4_;
      auVar184._0_8_ = auVar86._0_8_;
      auVar184._12_4_ = auVar86._12_4_;
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 2) == 0) goto LAB_140b05777;
LAB_140b0587c:
      auVar408 = blendps(unaff_XMM12,auVar115,1);
      auVar333 = blendps(unaff_XMM10,auVar339,1);
      auVar217 = blendps(unaff_XMM13,auVar184,1);
      auVar400._8_4_ = auVar86._8_4_;
      auVar400._0_8_ = auVar86._0_8_;
      auVar400._12_4_ = auVar86._12_4_;
      auVar376 = blendps(auVar376,auVar50,2);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 4) == 0) goto LAB_140b057c4;
LAB_140b058cb:
      auVar267 = blendps(auVar408,auVar115,2);
      auVar333 = blendps(auVar333,auVar339,2);
      auVar217 = blendps(auVar217,auVar400,2);
      auVar401._8_4_ = auVar86._8_4_;
      auVar401._0_8_ = auVar86._0_8_;
      auVar401._12_4_ = auVar86._12_4_;
      auVar115 = blendps(auVar376,auVar50,4);
      auVar408 = auVar266;
      auVar339 = auVar114;
      if ((char)bVar30 < '\0') goto LAB_140b0580c;
LAB_140b05915:
      auVar50 = auVar115;
      auVar376 = blendps(auVar267,auVar408,4);
      auVar115 = auVar50;
      if ((char)bVar30 < '\0') goto LAB_140b0592c;
LAB_140b0581f:
      auVar266 = auVar376;
      auVar339 = blendps(auVar333,auVar339,4);
      auVar376 = auVar266;
      if ((char)bVar30 < '\0') goto LAB_140b05839;
LAB_140b05942:
      auVar333 = blendps(auVar217,auVar401,4);
      auVar114 = auVar339;
    }
    if (-1 < (char)bVar30) {
      auVar86 = auVar333;
    }
    unaff_XMM9 = blendps(auVar115,auVar50,8);
    unaff_XMM12 = blendps(auVar376,auVar266,8);
    unaff_XMM10 = blendps(auVar339,auVar114,8);
LAB_140b063c7:
    unaff_XMM13 = blendps(auVar333,auVar86,8);
    break;
  case 3:
    auVar266 = blendvps((undefined1  [16])0x0,auVar130,auVar51);
    auVar339 = blendvps((undefined1  [16])0x0,___xmm_00000004000000040000000400000004,auVar51);
    auVar333 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar51);
    auVar267 = blendvps(ZEXT816(0),___xmm_0000000c0000000c0000000c0000000c,auVar51);
    auVar217 = blendvps((undefined1  [16])0x0,___xmm_00000010000000100000001000000010,auVar51);
    auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000014000000140000001400000014,auVar51);
    auVar137._0_8_ = lVar26 + local_288 + lVar263;
    auVar137._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar51,auVar51);
    auVar408 = blendvps(ZEXT816(0),auVar137,auVar50);
    auVar185._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar185._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar87._4_4_ = uVar46;
    auVar87._0_4_ = uVar46;
    auVar87._8_4_ = uVar47;
    auVar87._12_4_ = uVar47;
    auVar114 = blendvps((undefined1  [16])0x0,auVar185,auVar87);
    uVar22 = extractps(auVar266,0);
    lVar263 = param_4 + (int)uVar22;
    uVar21 = extractps(auVar266,1);
    lVar108 = param_4 + (int)uVar21;
    uVar33 = extractps(auVar266,2);
    lVar111 = param_4 + (int)uVar33;
    uVar32 = extractps(auVar266,3);
    auVar50 = insertps(ZEXT416(*(uint *)(param_4 + (int)uVar22)),
                       *(undefined4 *)(param_4 + (int)uVar21),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar33),0x20);
    auVar266 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar32),0x30);
    lVar150 = param_4 + (int)uVar32;
    uVar22 = extractps(auVar339,0);
    uVar21 = extractps(auVar339,1);
    uVar33 = extractps(auVar339,2);
    uVar32 = extractps(auVar339,3);
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar263)),
                       *(undefined4 *)((int)uVar21 + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar33 + lVar111),0x20);
    auVar376 = insertps(auVar50,*(undefined4 *)((int)uVar32 + lVar150),0x30);
    uVar22 = extractps(auVar333,0);
    uVar21 = extractps(auVar333,1);
    uVar33 = extractps(auVar333,2);
    uVar40 = extractps(auVar333,3);
    auVar333 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar263)),
                        *(undefined4 *)((int)uVar21 + lVar108),0x10);
    uVar22 = extractps(auVar267,0);
    uVar21 = extractps(auVar267,1);
    uVar34 = extractps(auVar267,2);
    uVar32 = extractps(auVar267,3);
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar263)),
                       *(undefined4 *)((int)uVar21 + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar34 + lVar111),0x20);
    auVar339 = insertps(auVar50,*(undefined4 *)((int)uVar32 + lVar150),0x30);
    uVar34 = extractps(auVar217,0);
    uVar38 = extractps(auVar217,1);
    uVar37 = extractps(auVar217,2);
    uVar41 = extractps(auVar217,3);
    uVar35 = extractps(auVar115,0);
    uVar22 = extractps(auVar115,1);
    uVar21 = extractps(auVar115,2);
    uVar39 = *(uint *)(param_4 + auVar408._0_8_);
    uVar45 = *(uint *)(param_4 + auVar408._8_8_);
    uVar43 = *(uint *)(param_4 + auVar114._0_8_);
    uVar44 = *(uint *)(param_4 + auVar114._8_8_);
    uVar32 = extractps(auVar115,3);
    auVar88._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar88._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar88._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar88._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar50 = divps(auVar88,___xmm_447fc000447fc000447fc000447fc000);
    auVar114 = insertps(auVar333,*(undefined4 *)((int)uVar33 + lVar111),0x20);
    auVar114 = insertps(auVar114,*(undefined4 *)((int)uVar40 + lVar150),0x30);
    fVar49 = auVar50._0_4_ * auVar339._0_4_ + auVar266._0_4_;
    fVar106 = auVar50._4_4_ * auVar339._4_4_ + auVar266._4_4_;
    auVar89._0_8_ = CONCAT44(fVar106,fVar49);
    auVar89._8_4_ = auVar50._8_4_ * auVar339._8_4_ + auVar266._8_4_;
    auVar89._12_4_ = auVar50._12_4_ * auVar339._12_4_ + auVar266._12_4_;
    auVar223._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar223._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar223._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar223._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar266 = divps(auVar223,___xmm_447fc000447fc000447fc000447fc000);
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar34 + lVar263)),
                       *(undefined4 *)((int)uVar38 + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar37 + lVar111),0x20);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar41 + lVar150),0x30);
    local_2b8._0_4_ = (undefined4)uVar22;
    local_1d8 = (int)uVar21;
    fVar107 = auVar266._0_4_ * auVar50._0_4_ + auVar376._0_4_;
    fVar109 = auVar266._4_4_ * auVar50._4_4_ + auVar376._4_4_;
    auVar224._0_8_ = CONCAT44(fVar109,fVar107);
    auVar224._8_4_ = auVar266._8_4_ * auVar50._8_4_ + auVar376._8_4_;
    auVar224._12_4_ = auVar266._12_4_ * auVar50._12_4_ + auVar376._12_4_;
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar35 + lVar263)),
                       *(undefined4 *)((int)local_2b8._0_4_ + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)(local_1d8 + lVar111),0x20);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar32 + lVar150),0x30);
    auVar343._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar343._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar343._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar343._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar266 = divps(auVar343,___xmm_43ff800043ff800043ff800043ff8000);
    fVar110 = auVar266._0_4_ * auVar50._0_4_ + auVar114._0_4_;
    fVar147 = auVar266._4_4_ * auVar50._4_4_ + auVar114._4_4_;
    auVar344._0_8_ = CONCAT44(fVar147,fVar110);
    auVar344._8_4_ = auVar266._8_4_ * auVar50._8_4_ + auVar114._8_4_;
    auVar344._12_4_ = auVar266._12_4_ * auVar50._12_4_ + auVar114._12_4_;
    auVar186._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - fVar49 * fVar49) - fVar107 * fVar107) -
         fVar110 * fVar110;
    auVar186._4_4_ = ((_UNK_15076b1f4 - fVar106 * fVar106) - fVar109 * fVar109) - fVar147 * fVar147;
    auVar186._8_4_ =
         ((_UNK_15076b1f8 - auVar89._8_4_ * auVar89._8_4_) - auVar224._8_4_ * auVar224._8_4_) -
         auVar344._8_4_ * auVar344._8_4_;
    auVar186._12_4_ =
         ((_UNK_15076b1fc - auVar89._12_4_ * auVar89._12_4_) - auVar224._12_4_ * auVar224._12_4_) -
         auVar344._12_4_ * auVar344._12_4_;
    auVar50 = sqrtps(auVar186,auVar186);
    bVar42 = (bVar30 & 1) != 0;
    auVar377 = unaff_XMM9;
    if (bVar42) {
      auVar377._8_4_ = auVar89._8_4_;
      auVar377._0_8_ = auVar89._0_8_;
      auVar377._12_4_ = auVar89._12_4_;
    }
    auVar255._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar186._4_4_) & auVar50._4_4_,
                  -(uint)(0.0 < auVar186._0_4_) & auVar50._0_4_);
    auVar255._8_4_ = -(uint)(0.0 < auVar186._8_4_) & auVar50._8_4_;
    auVar255._12_4_ = -(uint)(0.0 < auVar186._12_4_) & auVar50._12_4_;
    auVar187 = unaff_XMM13;
    auVar314 = unaff_XMM12;
    auVar324 = unaff_XMM10;
    if (bVar42) {
      auVar314._8_4_ = auVar224._8_4_;
      auVar314._0_8_ = auVar224._0_8_;
      auVar314._12_4_ = auVar224._12_4_;
      auVar324._8_4_ = auVar344._8_4_;
      auVar324._0_8_ = auVar344._0_8_;
      auVar324._12_4_ = auVar344._12_4_;
      auVar187._8_4_ = auVar255._8_4_;
      auVar187._0_8_ = auVar255._0_8_;
      auVar187._12_4_ = auVar255._12_4_;
    }
    auVar50 = blendps(unaff_XMM9,auVar377,1);
    if ((bVar30 & 2) == 0) {
      auVar390 = blendps(unaff_XMM12,auVar314,1);
      auVar365 = blendps(unaff_XMM10,auVar324,1);
      auVar402 = blendps(unaff_XMM13,auVar187,1);
      auVar50 = blendps(auVar50,auVar50,2);
      auVar266 = auVar365;
      auVar114 = auVar390;
      auVar115 = auVar402;
      if ((bVar30 & 4) != 0) goto LAB_140b05d5e;
LAB_140b05e40:
      auVar391 = blendps(auVar114,auVar390,2);
      auVar366 = blendps(auVar266,auVar365,2);
      auVar403 = blendps(auVar115,auVar402,2);
      auVar50 = blendps(auVar50,auVar50,4);
      auVar266 = auVar366;
      auVar114 = auVar391;
      auVar115 = auVar403;
      if (-1 < (char)bVar30) goto LAB_140b05da8;
LAB_140b05e88:
      auVar114 = blendps(auVar114,auVar391,4);
      if (-1 < (char)bVar30) goto LAB_140b05e9b;
LAB_140b05dbf:
      auVar266 = blendps(auVar266,auVar366,4);
      if (-1 < (char)bVar30) goto LAB_140b05dd5;
LAB_140b05eb5:
      auVar115 = blendps(auVar115,auVar403,4);
    }
    else {
      auVar378._8_4_ = auVar89._8_4_;
      auVar378._0_8_ = auVar89._0_8_;
      auVar378._12_4_ = auVar89._12_4_;
      auVar114 = blendps(unaff_XMM12,auVar314,1);
      auVar390._8_4_ = auVar224._8_4_;
      auVar390._0_8_ = auVar224._0_8_;
      auVar390._12_4_ = auVar224._12_4_;
      auVar266 = blendps(unaff_XMM10,auVar324,1);
      auVar365._8_4_ = auVar344._8_4_;
      auVar365._0_8_ = auVar344._0_8_;
      auVar365._12_4_ = auVar344._12_4_;
      auVar115 = blendps(unaff_XMM13,auVar187,1);
      auVar402._8_4_ = auVar255._8_4_;
      auVar402._0_8_ = auVar255._0_8_;
      auVar402._12_4_ = auVar255._12_4_;
      auVar50 = blendps(auVar50,auVar378,2);
      if ((bVar30 & 4) == 0) goto LAB_140b05e40;
LAB_140b05d5e:
      auVar379._8_4_ = auVar89._8_4_;
      auVar379._0_8_ = auVar89._0_8_;
      auVar379._12_4_ = auVar89._12_4_;
      auVar114 = blendps(auVar114,auVar390,2);
      auVar391._8_4_ = auVar224._8_4_;
      auVar391._0_8_ = auVar224._0_8_;
      auVar391._12_4_ = auVar224._12_4_;
      auVar266 = blendps(auVar266,auVar365,2);
      auVar366._8_4_ = auVar344._8_4_;
      auVar366._0_8_ = auVar344._0_8_;
      auVar366._12_4_ = auVar344._12_4_;
      auVar115 = blendps(auVar115,auVar402,2);
      auVar403._8_4_ = auVar255._8_4_;
      auVar403._0_8_ = auVar255._0_8_;
      auVar403._12_4_ = auVar255._12_4_;
      auVar50 = blendps(auVar50,auVar379,4);
      if ((char)bVar30 < '\0') goto LAB_140b05e88;
LAB_140b05da8:
      auVar89 = auVar50;
      auVar114 = blendps(auVar114,auVar391,4);
      auVar50 = auVar89;
      if ((char)bVar30 < '\0') goto LAB_140b05dbf;
LAB_140b05e9b:
      auVar224 = auVar114;
      auVar266 = blendps(auVar266,auVar366,4);
      auVar114 = auVar224;
      if ((char)bVar30 < '\0') goto LAB_140b05eb5;
LAB_140b05dd5:
      auVar115 = blendps(auVar115,auVar403,4);
      auVar344 = auVar266;
    }
    if (-1 < (char)bVar30) {
      auVar255 = auVar115;
    }
    unaff_XMM9 = blendps(auVar50,auVar89,8);
    unaff_XMM12 = blendps(auVar114,auVar224,8);
    unaff_XMM10 = blendps(auVar266,auVar344,8);
    unaff_XMM13 = blendps(auVar115,auVar255,8);
    break;
  case 4:
    auVar179._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar179._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar135._0_8_ = lVar26 + local_288 + lVar263;
    auVar135._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar83,auVar51);
    auVar266 = blendvps((undefined1  [16])0x0,auVar135,auVar50);
    auVar84._4_4_ = uVar46;
    auVar84._0_4_ = uVar46;
    auVar84._8_4_ = uVar47;
    auVar84._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar179,auVar84);
    uVar39 = *(uint *)(param_4 + auVar266._0_8_);
    uVar45 = *(uint *)(param_4 + auVar266._8_8_);
    uVar43 = *(uint *)(param_4 + auVar50._0_8_);
    uVar44 = *(uint *)(param_4 + auVar50._8_8_);
    auVar85._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar85._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar85._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar85._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar50 = divps(auVar85,___xmm_447fc000447fc000447fc000447fc000);
    auVar341._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar341._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar341._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar341._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar253._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar253._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar253._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar253._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar114 = divps(auVar253,___xmm_43ff800043ff800043ff800043ff8000);
    auVar266 = divps(auVar341,___xmm_447fc000447fc000447fc000447fc000);
    auVar180._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar50._0_4_ * auVar50._0_4_) -
         auVar266._0_4_ * auVar266._0_4_) - auVar114._0_4_ * auVar114._0_4_;
    auVar180._4_4_ =
         ((_UNK_15076b1f4 - auVar50._4_4_ * auVar50._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
         auVar114._4_4_ * auVar114._4_4_;
    auVar180._8_4_ =
         ((_UNK_15076b1f8 - auVar50._8_4_ * auVar50._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
         auVar114._8_4_ * auVar114._8_4_;
    auVar180._12_4_ =
         ((_UNK_15076b1fc - auVar50._12_4_ * auVar50._12_4_) - auVar266._12_4_ * auVar266._12_4_) -
         auVar114._12_4_ * auVar114._12_4_;
    auVar339 = sqrtps(auVar180,auVar180);
    bVar42 = (bVar30 & 1) == 0;
    auVar115 = unaff_XMM9;
    if (!bVar42) {
      auVar115 = auVar50;
    }
    auVar220._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar180._4_4_) & auVar339._4_4_,
                  -(uint)(0.0 < auVar180._0_4_) & auVar339._0_4_);
    auVar220._8_4_ = -(uint)(0.0 < auVar180._8_4_) & auVar339._8_4_;
    auVar220._12_4_ = -(uint)(0.0 < auVar180._12_4_) & auVar339._12_4_;
    if (bVar42) {
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar181 = unaff_XMM13;
      auVar115 = unaff_XMM12;
      auVar339 = unaff_XMM10;
      if ((bVar30 & 2) != 0) goto LAB_140b054a7;
LAB_140b053a0:
      auVar115 = blendps(unaff_XMM12,auVar115,1);
      auVar339 = blendps(unaff_XMM10,auVar339,1);
      auVar398 = blendps(unaff_XMM13,auVar181,1);
      auVar376 = blendps(auVar376,auVar376,2);
      auVar333 = auVar339;
      auVar408 = auVar115;
      auVar217 = auVar398;
      if ((bVar30 & 4) != 0) goto LAB_140b054f5;
LAB_140b053ee:
      auVar408 = blendps(auVar408,auVar115,2);
      auVar339 = blendps(auVar333,auVar339,2);
      auVar399 = blendps(auVar217,auVar398,2);
      auVar115 = blendps(auVar376,auVar376,4);
      auVar333 = auVar339;
      auVar267 = auVar408;
      auVar217 = auVar399;
      if (-1 < (char)bVar30) goto LAB_140b0553e;
LAB_140b05437:
      auVar376 = blendps(auVar267,auVar408,4);
      if (-1 < (char)bVar30) goto LAB_140b0544a;
LAB_140b05555:
      auVar333 = blendps(auVar333,auVar339,4);
      if (-1 < (char)bVar30) goto LAB_140b0556b;
LAB_140b05464:
      auVar339 = blendps(auVar217,auVar399,4);
    }
    else {
      auVar181._8_4_ = auVar220._8_4_;
      auVar181._0_8_ = auVar220._0_8_;
      auVar181._12_4_ = auVar220._12_4_;
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 2) == 0) goto LAB_140b053a0;
LAB_140b054a7:
      auVar408 = blendps(unaff_XMM12,auVar115,1);
      auVar333 = blendps(unaff_XMM10,auVar339,1);
      auVar217 = blendps(unaff_XMM13,auVar181,1);
      auVar398._8_4_ = auVar220._8_4_;
      auVar398._0_8_ = auVar220._0_8_;
      auVar398._12_4_ = auVar220._12_4_;
      auVar376 = blendps(auVar376,auVar50,2);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 4) == 0) goto LAB_140b053ee;
LAB_140b054f5:
      auVar267 = blendps(auVar408,auVar115,2);
      auVar333 = blendps(auVar333,auVar339,2);
      auVar217 = blendps(auVar217,auVar398,2);
      auVar399._8_4_ = auVar220._8_4_;
      auVar399._0_8_ = auVar220._0_8_;
      auVar399._12_4_ = auVar220._12_4_;
      auVar115 = blendps(auVar376,auVar50,4);
      auVar408 = auVar266;
      auVar339 = auVar114;
      if ((char)bVar30 < '\0') goto LAB_140b05437;
LAB_140b0553e:
      auVar50 = auVar115;
      auVar376 = blendps(auVar267,auVar408,4);
      auVar115 = auVar50;
      if ((char)bVar30 < '\0') goto LAB_140b05555;
LAB_140b0544a:
      auVar266 = auVar376;
      auVar333 = blendps(auVar333,auVar339,4);
      auVar376 = auVar266;
      if ((char)bVar30 < '\0') goto LAB_140b05464;
LAB_140b0556b:
      auVar339 = blendps(auVar217,auVar399,4);
      auVar114 = auVar333;
    }
    if (-1 < (char)bVar30) {
      auVar220 = auVar339;
    }
    unaff_XMM9 = blendps(auVar115,auVar50,8);
    unaff_XMM12 = blendps(auVar376,auVar266,8);
    unaff_XMM10 = blendps(auVar333,auVar114,8);
    goto LAB_140b06674;
  case 5:
    auVar189._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar189._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar139._0_8_ = lVar26 + local_288 + lVar263;
    auVar139._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar83,auVar51);
    auVar266 = blendvps((undefined1  [16])0x0,auVar139,auVar50);
    auVar90._4_4_ = uVar46;
    auVar90._0_4_ = uVar46;
    auVar90._8_4_ = uVar47;
    auVar90._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar189,auVar90);
    uVar39 = *(uint *)(param_4 + auVar266._0_8_);
    uVar45 = *(uint *)(param_4 + auVar266._8_8_);
    auVar190._4_4_ = uVar45;
    auVar190._0_4_ = uVar39;
    uVar43 = *(uint *)(param_4 + auVar50._0_8_);
    uVar44 = *(uint *)(param_4 + auVar50._8_8_);
    auVar190._12_4_ = uVar44;
    auVar190._8_4_ = uVar43;
    auVar91._0_4_ = uVar39 >> 0x15;
    auVar91._4_4_ = uVar45 >> 0x15;
    auVar91._8_4_ = uVar43 >> 0x15;
    auVar91._12_4_ = uVar44 >> 0x15;
    auVar257._0_4_ = uVar39 >> 10;
    auVar257._4_4_ = uVar45 >> 10;
    auVar257._8_4_ = uVar43 >> 10;
    auVar257._12_4_ = uVar44 >> 10;
    auVar140._0_4_ = uVar39 >> 5;
    auVar140._4_4_ = uVar45 >> 5;
    auVar140._8_4_ = uVar43 >> 5;
    auVar140._12_4_ = uVar44 >> 5;
    auVar50 = auVar91 & ___xmm_00000380000003800000038000000380;
    auVar92._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar92._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar92._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar92._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar92 = auVar92 | auVar91 & ___xmm_00000400000004000000040000000400 |
                        auVar140 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar345._0_4_ = uVar39 << 6;
    auVar345._4_4_ = uVar45 << 6;
    auVar345._8_4_ = uVar43 << 6;
    auVar345._12_4_ = uVar44 << 6;
    auVar50 = auVar257 & ___xmm_00000380000003800000038000000380;
    auVar258._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar258._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar258._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar258._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar50 = ___xmm_000001c0000001c0000001c0000001c0 & auVar190;
    auVar141._0_4_ = uVar39 << 0x11;
    auVar141._4_4_ = uVar45 << 0x11;
    auVar141._8_4_ = uVar43 << 0x11;
    auVar141._12_4_ = uVar44 << 0x11;
    auVar258 = auVar258 |
               ___xmm_00000400000004000000040000000400 & auVar257 |
               auVar345 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar346._0_4_ = auVar50._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
    auVar346._4_4_ = auVar50._4_4_ + _UNK_151c6b824;
    auVar346._8_4_ = auVar50._8_4_ + _UNK_151c6b828;
    auVar346._12_4_ = auVar50._12_4_ + _UNK_151c6b82c;
    auVar50 = auVar346 | auVar190 & ___xmm_00000200000002000000020000000200 |
              auVar141 & ___xmm_007e0000007e0000007e0000007e0000;
    auVar191._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar92._0_4_ * auVar92._0_4_) -
         auVar258._0_4_ * auVar258._0_4_) - auVar50._0_4_ * auVar50._0_4_;
    auVar191._4_4_ =
         ((_UNK_15076b1f4 - auVar92._4_4_ * auVar92._4_4_) - auVar258._4_4_ * auVar258._4_4_) -
         auVar50._4_4_ * auVar50._4_4_;
    auVar191._8_4_ =
         ((_UNK_15076b1f8 - auVar92._8_4_ * auVar92._8_4_) - auVar258._8_4_ * auVar258._8_4_) -
         auVar50._8_4_ * auVar50._8_4_;
    auVar191._12_4_ =
         ((_UNK_15076b1fc - auVar92._12_4_ * auVar92._12_4_) - auVar258._12_4_ * auVar258._12_4_) -
         auVar50._12_4_ * auVar50._12_4_;
    auVar114 = sqrtps(auVar191,auVar191);
    bVar42 = (bVar30 & 1) == 0;
    auVar266 = unaff_XMM9;
    if (!bVar42) {
      auVar266 = auVar92;
    }
    auVar220._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar191._4_4_) & auVar114._4_4_,
                  -(uint)(0.0 < auVar191._0_4_) & auVar114._0_4_);
    auVar220._8_4_ = -(uint)(0.0 < auVar191._8_4_) & auVar114._8_4_;
    auVar220._12_4_ = -(uint)(0.0 < auVar191._12_4_) & auVar114._12_4_;
    if (bVar42) {
      auVar115 = blendps(unaff_XMM9,auVar266,1);
      auVar192 = unaff_XMM13;
      auVar266 = unaff_XMM12;
      auVar114 = unaff_XMM10;
      if ((bVar30 & 2) != 0) goto LAB_140b0688c;
LAB_140b06588:
      auVar266 = blendps(unaff_XMM12,auVar266,1);
      auVar114 = blendps(unaff_XMM10,auVar114,1);
      auVar404 = blendps(unaff_XMM13,auVar192,1);
      auVar115 = blendps(auVar115,auVar115,2);
      auVar339 = auVar114;
      auVar376 = auVar266;
      auVar333 = auVar404;
      if ((bVar30 & 4) != 0) goto LAB_140b068db;
LAB_140b065d5:
      auVar376 = blendps(auVar376,auVar266,2);
      auVar114 = blendps(auVar339,auVar114,2);
      auVar405 = blendps(auVar333,auVar404,2);
      auVar266 = blendps(auVar115,auVar115,4);
      auVar339 = auVar114;
      auVar408 = auVar376;
      auVar333 = auVar405;
      if (-1 < (char)bVar30) goto LAB_140b06925;
LAB_140b0661d:
      auVar115 = blendps(auVar408,auVar376,4);
      if (-1 < (char)bVar30) goto LAB_140b06630;
LAB_140b0693c:
      auVar114 = blendps(auVar339,auVar114,4);
      if (-1 < (char)bVar30) goto LAB_140b06952;
LAB_140b0664a:
      auVar339 = blendps(auVar333,auVar405,4);
    }
    else {
      auVar192._8_4_ = auVar220._8_4_;
      auVar192._0_8_ = auVar220._0_8_;
      auVar192._12_4_ = auVar220._12_4_;
      auVar115 = blendps(unaff_XMM9,auVar266,1);
      auVar266 = auVar258;
      auVar114 = auVar50;
      if ((bVar30 & 2) == 0) goto LAB_140b06588;
LAB_140b0688c:
      auVar376 = blendps(unaff_XMM12,auVar266,1);
      auVar339 = blendps(unaff_XMM10,auVar114,1);
      auVar333 = blendps(unaff_XMM13,auVar192,1);
      auVar404._8_4_ = auVar220._8_4_;
      auVar404._0_8_ = auVar220._0_8_;
      auVar404._12_4_ = auVar220._12_4_;
      auVar115 = blendps(auVar115,auVar92,2);
      auVar266 = auVar258;
      auVar114 = auVar50;
      if ((bVar30 & 4) == 0) goto LAB_140b065d5;
LAB_140b068db:
      auVar408 = blendps(auVar376,auVar266,2);
      auVar339 = blendps(auVar339,auVar114,2);
      auVar333 = blendps(auVar333,auVar404,2);
      auVar405._8_4_ = auVar220._8_4_;
      auVar405._0_8_ = auVar220._0_8_;
      auVar405._12_4_ = auVar220._12_4_;
      auVar266 = blendps(auVar115,auVar92,4);
      auVar376 = auVar258;
      auVar114 = auVar50;
      if ((char)bVar30 < '\0') goto LAB_140b0661d;
LAB_140b06925:
      auVar92 = auVar266;
      auVar115 = blendps(auVar408,auVar376,4);
      auVar266 = auVar92;
      if ((char)bVar30 < '\0') goto LAB_140b0693c;
LAB_140b06630:
      auVar258 = auVar115;
      auVar114 = blendps(auVar339,auVar114,4);
      auVar115 = auVar258;
      if ((char)bVar30 < '\0') goto LAB_140b0664a;
LAB_140b06952:
      auVar339 = blendps(auVar333,auVar405,4);
      auVar50 = auVar114;
    }
    if (-1 < (char)bVar30) {
      auVar220 = auVar339;
    }
    unaff_XMM9 = blendps(auVar266,auVar92,8);
    unaff_XMM12 = blendps(auVar115,auVar258,8);
    unaff_XMM10 = blendps(auVar114,auVar50,8);
LAB_140b06674:
    unaff_XMM13 = blendps(auVar339,auVar220,8);
  }
LAB_140b06684:
  auVar325._0_4_ = -(uint)(auVar168._0_4_ == local_318._0_4_);
  auVar325._4_4_ = -(uint)(auVar168._4_4_ == local_318._4_4_);
  auVar325._8_4_ = -(uint)(auVar168._8_4_ == local_318._8_4_);
  auVar325._12_4_ = -(uint)(auVar168._12_4_ == local_318._12_4_);
  auVar51 = ~auVar325 & auVar51;
  iVar23 = movmskps(CONCAT31((int3)((uint)iVar24 >> 8),bVar30),auVar51);
  uVar25 = 0;
  if (iVar23 == 0) goto LAB_140b077ba;
  bVar30 = (char)((char)iVar23 << 4) >> 4;
  uVar25 = CONCAT31((int3)((uint)iVar23 >> 8),bVar30);
  auVar259._4_4_ = (uint)_UNK_15076b1f4;
  auVar259._0_4_ = (uint)___xmm_3f8000003f8000003f8000003f800000;
  auVar259._8_4_ = (uint)_UNK_15076b1f8;
  auVar259._12_4_ = (uint)_UNK_15076b1fc;
  auVar93 = (undefined1  [16])0x0;
  auVar385 = ZEXT816(0);
  auVar226 = (undefined1  [16])0x0;
  if (5 < param_8) goto LAB_140b074ac;
  auVar50 = pmulld(auVar133,local_318);
  auVar168 = pmovsxdq(local_318,auVar50);
  auVar94._8_4_ = auVar50._8_4_;
  auVar94._12_4_ = auVar50._12_4_;
  auVar94._0_8_ = auVar50._8_8_;
  auVar50 = pmovsxdq((undefined1  [16])0x0,auVar94);
  lVar111 = auVar50._0_8_;
  lVar150 = auVar50._8_8_;
  lVar263 = auVar168._0_8_;
  lVar108 = auVar168._8_8_;
  uVar17 = auVar51._8_4_;
  uVar332 = auVar51._12_4_;
  switch(param_8) {
  case 0:
    auVar315._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar315._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar193._0_8_ = lVar26 + local_288 + lVar263;
    auVar193._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar168,auVar51);
    auVar51 = blendvps((undefined1  [16])0x0,auVar193,auVar50);
    auVar194._4_4_ = uVar17;
    auVar194._0_4_ = uVar17;
    auVar194._8_4_ = uVar332;
    auVar194._12_4_ = uVar332;
    auVar168 = blendvps(ZEXT816(0),auVar315,auVar194);
    lVar26 = param_4 + auVar51._0_8_;
    lVar27 = param_4 + auVar51._8_8_;
    lVar36 = param_4 + auVar168._0_8_;
    lVar29 = param_4 + auVar168._8_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar50);
    auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar194);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar50);
    auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar194);
    auVar114 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar50);
    auVar50 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,auVar194);
    auVar226 = ZEXT416(*(uint *)(param_4 + auVar51._0_8_));
    if ((bVar30 & 2) == 0) {
      auVar385 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar26));
      auVar93 = ZEXT416(*(uint *)(auVar266._0_8_ + lVar26));
      auVar259 = ZEXT416(*(uint *)(auVar114._0_8_ + lVar26));
    }
    else {
      auVar226 = insertps(auVar226,*(undefined4 *)(param_4 + auVar51._8_8_),0x10);
      auVar385 = insertps(ZEXT416(*(uint *)(auVar115._0_8_ + lVar26)),
                          *(undefined4 *)(auVar115._8_8_ + lVar27),0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(auVar266._0_8_ + lVar26)),
                         *(undefined4 *)(auVar266._8_8_ + lVar27),0x10);
      auVar259 = insertps(ZEXT416(*(uint *)(auVar114._0_8_ + lVar26)),
                          *(undefined4 *)(auVar114._8_8_ + lVar27),0x10);
    }
    if ((bVar30 & 4) != 0) {
      auVar226 = insertps(auVar226,*(undefined4 *)(param_4 + auVar168._0_8_),0x20);
      auVar385 = insertps(auVar385,*(undefined4 *)(auVar339._0_8_ + lVar36),0x20);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar376._0_8_ + lVar36),0x20);
      auVar259 = insertps(auVar259,*(undefined4 *)(auVar50._0_8_ + lVar36),0x20);
    }
    if ((char)bVar30 < '\0') {
      auVar226 = insertps(auVar226,*(undefined4 *)(param_4 + auVar168._8_8_),0x30);
      auVar385 = insertps(auVar385,*(undefined4 *)(auVar339._8_8_ + lVar29),0x30);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar376._8_8_ + lVar29),0x30);
      auVar259 = insertps(auVar259,*(undefined4 *)(auVar50._8_8_ + lVar29),0x30);
    }
    goto LAB_140b074ac;
  case 1:
    auVar318._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar318._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar199._0_8_ = lVar26 + local_288 + lVar263;
    auVar199._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar168,auVar51);
    auVar51 = blendvps((undefined1  [16])0x0,auVar199,auVar50);
    auVar200._4_4_ = uVar17;
    auVar200._0_4_ = uVar17;
    auVar200._8_4_ = uVar332;
    auVar200._12_4_ = uVar332;
    auVar266 = blendvps(auVar385,auVar318,auVar200);
    lVar26 = param_4 + auVar51._0_8_;
    uVar39 = *(uint *)(param_4 + auVar51._0_8_);
    auVar168 = insertps(ZEXT416(uVar39),*(undefined4 *)(param_4 + auVar51._8_8_),0x10);
    lVar27 = param_4 + auVar51._8_8_;
    lVar36 = param_4 + auVar266._0_8_;
    uVar45 = *(uint *)(param_4 + auVar266._0_8_);
    auVar51 = insertps(auVar168,ZEXT416(uVar45),0x20);
    lVar29 = param_4 + auVar266._8_8_;
    uVar17 = *(undefined4 *)(param_4 + auVar266._8_8_);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar50);
    auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar200);
    uVar43 = *(uint *)(auVar266._0_8_ + lVar26);
    auVar266 = insertps(ZEXT416(uVar43),*(undefined4 *)(auVar266._8_8_ + lVar27),0x10);
    uVar332 = *(undefined4 *)(auVar114._0_8_ + lVar36);
    auVar50 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar50);
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar200);
    uVar44 = *(uint *)(auVar50._0_8_ + lVar26);
    auVar50 = insertps(ZEXT416(uVar44),*(undefined4 *)(auVar50._8_8_ + lVar27),0x10);
    auVar93 = ZEXT416(uVar44);
    auVar226 = ZEXT416(uVar39);
    auVar385 = ZEXT416(uVar43);
    if ((bVar30 & 2) != 0) {
      auVar93 = auVar50;
      auVar226 = auVar168;
      auVar385 = auVar266;
    }
    auVar168 = insertps(auVar51,uVar17,0x30);
    auVar266 = insertps(auVar266,uVar332,0x20);
    uVar39 = *(uint *)(auVar114._8_8_ + lVar29);
    auVar51 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar36));
    bVar42 = (bVar30 & 4) == 0;
    if (!bVar42) {
      auVar226 = insertps(auVar226,uVar45,0x20);
    }
    auVar266 = insertps(auVar266,ZEXT416(uVar39),0x30);
    auVar50 = insertps(auVar50,auVar51,0x20);
    auVar114 = ZEXT416(*(uint *)(auVar115._8_8_ + lVar29));
    fVar49 = auVar168._0_4_ * auVar168._0_4_;
    fVar106 = auVar168._4_4_ * auVar168._4_4_;
    fVar107 = auVar168._8_4_ * auVar168._8_4_;
    fVar109 = auVar168._12_4_ * auVar168._12_4_;
    fVar110 = auVar266._0_4_;
    fVar147 = auVar266._4_4_;
    fVar148 = auVar266._8_4_;
    fVar151 = auVar266._12_4_;
    if (bVar42) {
      auVar50 = insertps(auVar50,auVar114,0x30);
      fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - fVar49) - fVar110 * fVar110;
      fVar106 = (_UNK_15076b1f4 - fVar106) - fVar147 * fVar147;
      fVar107 = (_UNK_15076b1f8 - fVar107) - fVar148 * fVar148;
      fVar109 = (_UNK_15076b1fc - fVar109) - fVar151 * fVar151;
      auVar143._0_4_ = auVar50._0_4_ * auVar50._0_4_;
      auVar143._4_4_ = auVar50._4_4_ * auVar50._4_4_;
      auVar143._8_4_ = auVar50._8_4_ * auVar50._8_4_;
      auVar143._12_4_ = auVar50._12_4_ * auVar50._12_4_;
      if (-1 < (char)bVar30) goto LAB_140b071e2;
LAB_140b07307:
      auVar226 = insertps(auVar226,uVar17,0x30);
      auVar326._0_4_ = fVar49 - auVar143._0_4_;
      auVar326._4_4_ = fVar106 - auVar143._4_4_;
      auVar326._8_4_ = fVar107 - auVar143._8_4_;
      auVar326._12_4_ = fVar109 - auVar143._12_4_;
      if ((char)bVar30 < '\0') goto LAB_140b07318;
LAB_140b071eb:
      auVar261._4_4_ = -(uint)(0.0 < auVar326._4_4_);
      auVar261._0_4_ = -(uint)(0.0 < auVar326._0_4_);
      auVar261._8_4_ = -(uint)(0.0 < auVar326._8_4_);
      auVar261._12_4_ = -(uint)(0.0 < auVar326._12_4_);
      auVar144 = sqrtps(auVar143,auVar326);
    }
    else {
      auVar385 = insertps(auVar385,uVar332,0x20);
      auVar50 = insertps(auVar50,auVar114,0x30);
      auVar93 = insertps(auVar93,auVar51,0x20);
      fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - fVar49) - fVar110 * fVar110;
      fVar106 = (_UNK_15076b1f4 - fVar106) - fVar147 * fVar147;
      fVar107 = (_UNK_15076b1f8 - fVar107) - fVar148 * fVar148;
      fVar109 = (_UNK_15076b1fc - fVar109) - fVar151 * fVar151;
      auVar143._0_4_ = auVar50._0_4_ * auVar50._0_4_;
      auVar143._4_4_ = auVar50._4_4_ * auVar50._4_4_;
      auVar143._8_4_ = auVar50._8_4_ * auVar50._8_4_;
      auVar143._12_4_ = auVar50._12_4_ * auVar50._12_4_;
      if ((char)bVar30 < '\0') goto LAB_140b07307;
LAB_140b071e2:
      auVar326._0_4_ = fVar49 - auVar143._0_4_;
      auVar326._4_4_ = fVar106 - auVar143._4_4_;
      auVar326._8_4_ = fVar107 - auVar143._8_4_;
      auVar326._12_4_ = fVar109 - auVar143._12_4_;
      if (-1 < (char)bVar30) goto LAB_140b071eb;
LAB_140b07318:
      auVar385 = insertps(auVar385,uVar39,0x30);
      auVar261._4_4_ = -(uint)(0.0 < auVar326._4_4_);
      auVar261._0_4_ = -(uint)(0.0 < auVar326._0_4_);
      auVar261._8_4_ = -(uint)(0.0 < auVar326._8_4_);
      auVar261._12_4_ = -(uint)(0.0 < auVar326._12_4_);
      auVar144 = sqrtps(auVar143,auVar326);
    }
    if ((char)bVar30 < '\0') {
      auVar93 = insertps(auVar93,auVar114,0x30);
    }
    goto LAB_140b074a9;
  case 2:
    auVar317._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar317._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar196._0_8_ = lVar26 + local_288 + lVar263;
    auVar196._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar51 = pmovsxdq(auVar50,auVar51);
    auVar168 = blendvps(ZEXT816(0),auVar196,auVar51);
    auVar142._4_4_ = uVar17;
    auVar142._0_4_ = uVar17;
    auVar142._8_4_ = uVar332;
    auVar142._12_4_ = uVar332;
    auVar50 = blendvps(ZEXT816(0),auVar317,auVar142);
    lVar26 = param_4 + auVar168._0_8_;
    auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar51);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar142);
    auVar115 = blendvps(auVar385,___xmm_00000000000000040000000000000004,auVar51);
    lVar27 = param_4 + auVar168._8_8_;
    lVar36 = param_4 + auVar50._0_8_;
    auVar51 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar142);
    lVar29 = param_4 + auVar50._8_8_;
    auVar228._0_4_ =
         (float)(int)((uint)*(ushort *)(param_4 + auVar168._0_8_) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar228._4_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar168._8_8_) + _UNK_151c6b8e4);
    auVar228._8_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar50._0_8_) + _UNK_151c6b8e8);
    auVar228._12_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar50._8_8_) + _UNK_151c6b8ec);
    auVar226 = divps(auVar228,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar381._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar114._0_8_ + lVar26) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar381._4_4_ = (float)(int)((uint)*(ushort *)(auVar114._8_8_ + lVar27) + _UNK_151c6b8e4);
    auVar381._8_4_ = (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar36) + _UNK_151c6b8e8);
    auVar381._12_4_ = (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar29) + _UNK_151c6b8ec);
    auVar385 = divps(auVar381,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar97._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar26) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar97._4_4_ = (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar27) + _UNK_151c6b8e4);
    auVar97._8_4_ = (float)(int)((uint)*(ushort *)(auVar51._0_8_ + lVar36) + _UNK_151c6b8e8);
    auVar97._12_4_ = (float)(int)((uint)*(ushort *)(auVar51._8_8_ + lVar29) + _UNK_151c6b8ec);
    auVar93 = divps(auVar97,___xmm_46fffe0046fffe0046fffe0046fffe00);
    break;
  case 3:
    auVar50 = blendvps((undefined1  [16])0x0,auVar130,auVar51);
    uVar22 = extractps(auVar50,0);
    lVar4 = param_4 + (int)uVar22;
    uVar32 = extractps(auVar50,1);
    lVar5 = param_4 + (int)uVar32;
    uVar33 = extractps(auVar50,2);
    lVar6 = param_4 + (int)uVar33;
    uVar21 = extractps(auVar50,3);
    auVar50 = insertps(ZEXT416(*(uint *)(param_4 + (int)uVar22)),
                       *(undefined4 *)(param_4 + (int)uVar32),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar33),0x20);
    lVar7 = param_4 + (int)uVar21;
    auVar50 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar21),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar115 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar339 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_0000000c0000000c0000000c0000000c,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar266 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps((undefined1  [16])0x0,___xmm_00000010000000100000001000000010,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar114 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_00000014000000140000001400000014,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar376 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar197._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar197._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar98._0_8_ = lVar26 + local_288 + lVar263;
    auVar98._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar51 = pmovsxdq(auVar98,auVar51);
    auVar51 = blendvps((undefined1  [16])0x0,auVar98,auVar51);
    auVar99._4_4_ = uVar17;
    auVar99._0_4_ = uVar17;
    auVar99._8_4_ = uVar332;
    auVar99._12_4_ = uVar332;
    auVar168 = blendvps(ZEXT816(0),auVar197,auVar99);
    uVar39 = *(uint *)(param_4 + auVar51._0_8_);
    uVar45 = *(uint *)(param_4 + auVar51._8_8_);
    uVar43 = *(uint *)(param_4 + auVar168._0_8_);
    uVar44 = *(uint *)(param_4 + auVar168._8_8_);
    auVar229._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar229._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar229._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar229._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar51 = divps(auVar229,___xmm_447fc000447fc000447fc000447fc000);
    local_2c8 = auVar50._0_4_;
    fStack_2c4 = auVar50._4_4_;
    fStack_2c0 = auVar50._8_4_;
    fStack_2bc = auVar50._12_4_;
    auVar226._0_4_ = auVar51._0_4_ * auVar266._0_4_ + local_2c8;
    auVar226._4_4_ = auVar51._4_4_ * auVar266._4_4_ + fStack_2c4;
    auVar226._8_4_ = auVar51._8_4_ * auVar266._8_4_ + fStack_2c0;
    auVar226._12_4_ = auVar51._12_4_ * auVar266._12_4_ + fStack_2bc;
    auVar382._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar382._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar382._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar382._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar51 = divps(auVar382,___xmm_447fc000447fc000447fc000447fc000);
    auVar100._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar100._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar100._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar100._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar50 = divps(auVar100,___xmm_43ff800043ff800043ff800043ff8000);
    auVar385._0_4_ = auVar51._0_4_ * auVar114._0_4_ + auVar115._0_4_;
    auVar385._4_4_ = auVar51._4_4_ * auVar114._4_4_ + auVar115._4_4_;
    auVar385._8_4_ = auVar51._8_4_ * auVar114._8_4_ + auVar115._8_4_;
    auVar385._12_4_ = auVar51._12_4_ * auVar114._12_4_ + auVar115._12_4_;
    auVar93._0_4_ = auVar50._0_4_ * auVar376._0_4_ + auVar339._0_4_;
    auVar93._4_4_ = auVar50._4_4_ * auVar376._4_4_ + auVar339._4_4_;
    auVar93._8_4_ = auVar50._8_4_ * auVar376._8_4_ + auVar339._8_4_;
    auVar93._12_4_ = auVar50._12_4_ * auVar376._12_4_ + auVar339._12_4_;
    auVar198._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar226._0_4_ * auVar226._0_4_) -
         auVar385._0_4_ * auVar385._0_4_) - auVar93._0_4_ * auVar93._0_4_;
    auVar198._4_4_ =
         ((_UNK_15076b1f4 - auVar226._4_4_ * auVar226._4_4_) - auVar385._4_4_ * auVar385._4_4_) -
         auVar93._4_4_ * auVar93._4_4_;
    auVar198._8_4_ =
         ((_UNK_15076b1f8 - auVar226._8_4_ * auVar226._8_4_) - auVar385._8_4_ * auVar385._8_4_) -
         auVar93._8_4_ * auVar93._8_4_;
    auVar198._12_4_ =
         ((_UNK_15076b1fc - auVar226._12_4_ * auVar226._12_4_) - auVar385._12_4_ * auVar385._12_4_)
         - auVar93._12_4_ * auVar93._12_4_;
    auVar144._4_4_ = -(uint)(0.0 < auVar198._4_4_);
    auVar144._0_4_ = -(uint)(0.0 < auVar198._0_4_);
    auVar144._8_4_ = -(uint)(0.0 < auVar198._8_4_);
    auVar144._12_4_ = -(uint)(0.0 < auVar198._12_4_);
    auVar261 = sqrtps(auVar266,auVar198);
    goto LAB_140b074a9;
  case 4:
    auVar316._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar316._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar195._0_8_ = lVar26 + local_288 + lVar263;
    auVar195._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar94,auVar51);
    auVar50 = blendvps((undefined1  [16])0x0,auVar195,auVar50);
    auVar95._4_4_ = uVar17;
    auVar95._0_4_ = uVar17;
    auVar95._8_4_ = uVar332;
    auVar95._12_4_ = uVar332;
    auVar51 = blendvps((undefined1  [16])0x0,auVar316,auVar95);
    uVar39 = *(uint *)(param_4 + auVar50._0_8_);
    uVar45 = *(uint *)(param_4 + auVar50._8_8_);
    uVar43 = *(uint *)(param_4 + auVar51._0_8_);
    uVar44 = *(uint *)(param_4 + auVar51._8_8_);
    auVar227._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar227._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar227._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar227._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar226 = divps(auVar227,___xmm_447fc000447fc000447fc000447fc000);
    auVar380._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar380._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar380._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar380._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar385 = divps(auVar380,___xmm_447fc000447fc000447fc000447fc000);
    auVar96._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar96._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar96._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar96._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar93 = divps(auVar96,___xmm_43ff800043ff800043ff800043ff8000);
    break;
  case 5:
    auVar319._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar319._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar201._0_8_ = lVar26 + local_288 + lVar263;
    auVar201._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar94,auVar51);
    auVar50 = blendvps((undefined1  [16])0x0,auVar201,auVar50);
    auVar101._4_4_ = uVar17;
    auVar101._0_4_ = uVar17;
    auVar101._8_4_ = uVar332;
    auVar101._12_4_ = uVar332;
    auVar51 = blendvps((undefined1  [16])0x0,auVar319,auVar101);
    uVar39 = *(uint *)(param_4 + auVar50._0_8_);
    uVar45 = *(uint *)(param_4 + auVar50._8_8_);
    auVar202._4_4_ = uVar45;
    auVar202._0_4_ = uVar39;
    uVar43 = *(uint *)(param_4 + auVar51._0_8_);
    uVar44 = *(uint *)(param_4 + auVar51._8_8_);
    auVar202._12_4_ = uVar44;
    auVar202._8_4_ = uVar43;
    auVar230._0_4_ = uVar39 >> 0x15;
    auVar230._4_4_ = uVar45 >> 0x15;
    auVar230._8_4_ = uVar43 >> 0x15;
    auVar230._12_4_ = uVar44 >> 0x15;
    auVar383._0_4_ = uVar39 >> 10;
    auVar383._4_4_ = uVar45 >> 10;
    auVar383._8_4_ = uVar43 >> 10;
    auVar383._12_4_ = uVar44 >> 10;
    auVar102._0_4_ = uVar39 >> 5;
    auVar102._4_4_ = uVar45 >> 5;
    auVar102._8_4_ = uVar43 >> 5;
    auVar102._12_4_ = uVar44 >> 5;
    auVar50 = auVar230 & ___xmm_00000380000003800000038000000380;
    auVar231._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar231._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar231._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar231._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar226 = auVar231 |
               auVar230 & ___xmm_00000400000004000000040000000400 |
               auVar102 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar327._0_4_ = uVar39 << 6;
    auVar327._4_4_ = uVar45 << 6;
    auVar327._8_4_ = uVar43 << 6;
    auVar327._12_4_ = uVar44 << 6;
    auVar50 = auVar383 & ___xmm_00000380000003800000038000000380;
    auVar384._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar384._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar384._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar384._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar50 = ___xmm_000001c0000001c0000001c0000001c0 & auVar202;
    auVar320._0_4_ = uVar39 << 0x11;
    auVar320._4_4_ = uVar45 << 0x11;
    auVar320._8_4_ = uVar43 << 0x11;
    auVar320._12_4_ = uVar44 << 0x11;
    auVar103._0_4_ = auVar50._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
    auVar103._4_4_ = auVar50._4_4_ + _UNK_151c6b824;
    auVar103._8_4_ = auVar50._8_4_ + _UNK_151c6b828;
    auVar103._12_4_ = auVar50._12_4_ + _UNK_151c6b82c;
    auVar385 = auVar384 |
               ___xmm_00000400000004000000040000000400 & auVar383 |
               auVar327 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar93 = auVar103 | auVar202 & ___xmm_00000200000002000000020000000200 |
              auVar320 & ___xmm_007e0000007e0000007e0000007e0000;
  }
  auVar260._0_4_ =
       ((___xmm_3f8000003f8000003f8000003f800000 - auVar226._0_4_ * auVar226._0_4_) -
       auVar385._0_4_ * auVar385._0_4_) - auVar93._0_4_ * auVar93._0_4_;
  auVar260._4_4_ =
       ((_UNK_15076b1f4 - auVar226._4_4_ * auVar226._4_4_) - auVar385._4_4_ * auVar385._4_4_) -
       auVar93._4_4_ * auVar93._4_4_;
  auVar260._8_4_ =
       ((_UNK_15076b1f8 - auVar226._8_4_ * auVar226._8_4_) - auVar385._8_4_ * auVar385._8_4_) -
       auVar93._8_4_ * auVar93._8_4_;
  auVar260._12_4_ =
       ((_UNK_15076b1fc - auVar226._12_4_ * auVar226._12_4_) - auVar385._12_4_ * auVar385._12_4_) -
       auVar93._12_4_ * auVar93._12_4_;
  auVar144._4_4_ = -(uint)(0.0 < auVar260._4_4_);
  auVar144._0_4_ = -(uint)(0.0 < auVar260._0_4_);
  auVar144._8_4_ = -(uint)(0.0 < auVar260._8_4_);
  auVar144._12_4_ = -(uint)(0.0 < auVar260._12_4_);
  auVar261 = sqrtps(auVar260,auVar260);
LAB_140b074a9:
  auVar259._0_4_ = auVar261._0_4_ & auVar144._0_4_;
  auVar259._4_4_ = auVar261._4_4_ & auVar144._4_4_;
  auVar259._8_4_ = auVar261._8_4_ & auVar144._8_4_;
  auVar259._12_4_ = auVar261._12_4_ & auVar144._12_4_;
LAB_140b074ac:
  fVar265 = auVar53._0_4_;
  fVar280 = auVar53._4_4_;
  fVar282 = auVar53._8_4_;
  fVar284 = auVar53._12_4_;
  auVar386._0_4_ = auVar385._0_4_ * fVar265;
  auVar386._4_4_ = auVar385._4_4_ * fVar280;
  auVar386._8_4_ = auVar385._8_4_ * fVar282;
  auVar386._12_4_ = auVar385._12_4_ * fVar284;
  fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - fVar265) *
           (float)(int)(-(uint)(unaff_XMM13._0_4_ * auVar259._0_4_ +
                                unaff_XMM12._0_4_ * auVar385._0_4_ +
                                unaff_XMM10._0_4_ * auVar93._0_4_ +
                                unaff_XMM9._0_4_ * auVar226._0_4_ < 0.0) |
                       ___xmm_00000001000000010000000100000001);
  fVar106 = (_UNK_15076b1f4 - fVar280) *
            (float)(int)(-(uint)(unaff_XMM13._4_4_ * auVar259._4_4_ +
                                 unaff_XMM12._4_4_ * auVar385._4_4_ +
                                 unaff_XMM10._4_4_ * auVar93._4_4_ +
                                 unaff_XMM9._4_4_ * auVar226._4_4_ < 0.0) | _UNK_150631da4);
  fVar107 = (_UNK_15076b1f8 - fVar282) *
            (float)(int)(-(uint)(unaff_XMM13._8_4_ * auVar259._8_4_ +
                                 unaff_XMM12._8_4_ * auVar385._8_4_ +
                                 unaff_XMM10._8_4_ * auVar93._8_4_ +
                                 unaff_XMM9._8_4_ * auVar226._8_4_ < 0.0) | _UNK_150631da8);
  fVar109 = (_UNK_15076b1fc - fVar284) *
            (float)(int)(-(uint)(unaff_XMM13._12_4_ * auVar259._12_4_ +
                                 unaff_XMM12._12_4_ * auVar385._12_4_ +
                                 unaff_XMM10._12_4_ * auVar93._12_4_ +
                                 unaff_XMM9._12_4_ * auVar226._12_4_ < 0.0) | _UNK_150631dac);
  fVar264 = unaff_XMM9._0_4_ * fVar49 + auVar226._0_4_ * fVar265;
  fVar279 = unaff_XMM9._4_4_ * fVar106 + auVar226._4_4_ * fVar280;
  fVar281 = unaff_XMM9._8_4_ * fVar107 + auVar226._8_4_ * fVar282;
  fVar283 = unaff_XMM9._12_4_ * fVar109 + auVar226._12_4_ * fVar284;
  fVar110 = unaff_XMM12._0_4_ * fVar49 + auVar386._0_4_;
  fVar147 = unaff_XMM12._4_4_ * fVar106 + auVar386._4_4_;
  fVar148 = unaff_XMM12._8_4_ * fVar107 + auVar386._8_4_;
  fVar151 = unaff_XMM12._12_4_ * fVar109 + auVar386._12_4_;
  fVar153 = unaff_XMM10._0_4_ * fVar49 + auVar93._0_4_ * fVar265;
  fVar204 = unaff_XMM10._4_4_ * fVar106 + auVar93._4_4_ * fVar280;
  fVar205 = unaff_XMM10._8_4_ * fVar107 + auVar93._8_4_ * fVar282;
  fVar206 = unaff_XMM10._12_4_ * fVar109 + auVar93._12_4_ * fVar284;
  fVar265 = fVar49 * unaff_XMM13._0_4_ + auVar259._0_4_ * fVar265;
  fVar280 = fVar106 * unaff_XMM13._4_4_ + auVar259._4_4_ * fVar280;
  fVar282 = fVar107 * unaff_XMM13._8_4_ + auVar259._8_4_ * fVar282;
  fVar284 = fVar109 * unaff_XMM13._12_4_ + auVar259._12_4_ * fVar284;
  auVar328._0_4_ = fVar265 * fVar265 + fVar110 * fVar110 + fVar153 * fVar153 + fVar264 * fVar264;
  auVar328._4_4_ = fVar280 * fVar280 + fVar147 * fVar147 + fVar204 * fVar204 + fVar279 * fVar279;
  auVar328._8_4_ = fVar282 * fVar282 + fVar148 * fVar148 + fVar205 * fVar205 + fVar281 * fVar281;
  auVar328._12_4_ = fVar284 * fVar284 + fVar151 * fVar151 + fVar206 * fVar206 + fVar283 * fVar283;
  uVar39 = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar328._0_4_);
  uVar45 = -(uint)(_UNK_1506895d4 <= auVar328._4_4_);
  uVar43 = -(uint)(_UNK_1506895d8 <= auVar328._8_4_);
  uVar44 = -(uint)(_UNK_1506895dc <= auVar328._12_4_);
  auVar50 = rsqrtps(auVar386,auVar328);
  fVar49 = auVar50._0_4_;
  fVar106 = auVar50._4_4_;
  fVar107 = auVar50._8_4_;
  fVar109 = auVar50._12_4_;
  fVar49 = (___xmm_3f0000003f0000003f0000003f000000 -
           fVar49 * fVar49 * auVar328._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) * fVar49 +
           fVar49;
  fVar106 = (_UNK_150689624 - fVar106 * fVar106 * auVar328._4_4_ * _UNK_150689624) * fVar106 +
            fVar106;
  fVar107 = (_UNK_150689628 - fVar107 * fVar107 * auVar328._8_4_ * _UNK_150689628) * fVar107 +
            fVar107;
  fVar109 = (_UNK_15068962c - fVar109 * fVar109 * auVar328._12_4_ * _UNK_15068962c) * fVar109 +
            fVar109;
  fVar49 = (___xmm_3f0000003f0000003f0000003f000000 -
           fVar49 * fVar49 * auVar328._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) * fVar49 +
           fVar49;
  fVar106 = (_UNK_150689624 - fVar106 * fVar106 * auVar328._4_4_ * _UNK_150689624) * fVar106 +
            fVar106;
  fVar107 = (_UNK_150689628 - fVar107 * fVar107 * auVar328._8_4_ * _UNK_150689628) * fVar107 +
            fVar107;
  fVar109 = (_UNK_15068962c - fVar109 * fVar109 * auVar328._12_4_ * _UNK_15068962c) * fVar109 +
            fVar109;
  auVar347._0_4_ = (uint)(fVar265 * fVar49) & uVar39;
  auVar347._4_4_ = (uint)(fVar280 * fVar106) & uVar45;
  auVar347._8_4_ = (uint)(fVar282 * fVar107) & uVar43;
  auVar347._12_4_ = (uint)(fVar284 * fVar109) & uVar44;
  auVar232._0_4_ =
       -(uint)(auVar328._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77) &
       (uint)___xmm_3f8000003f8000003f8000003f800000;
  auVar232._4_4_ = -(uint)(auVar328._4_4_ < _UNK_1506895d4) & (uint)_UNK_15076b1f4;
  auVar232._8_4_ = -(uint)(auVar328._8_4_ < _UNK_1506895d8) & (uint)_UNK_15076b1f8;
  auVar232._12_4_ = -(uint)(auVar328._12_4_ < _UNK_1506895dc) & (uint)_UNK_15076b1fc;
  auVar104._0_8_ = CONCAT44((uint)(fVar106 * fVar279) & uVar45,(uint)(fVar49 * fVar264) & uVar39);
  auVar104._8_4_ = (uint)(fVar107 * fVar281) & uVar43;
  auVar104._12_4_ = (uint)(fVar109 * fVar283) & uVar44;
  bVar42 = (bVar30 & 1) != 0;
  auVar329 = unaff_XMM9;
  if (bVar42) {
    auVar329._8_4_ = auVar104._8_4_;
    auVar329._0_8_ = auVar104._0_8_;
    auVar329._12_4_ = auVar104._12_4_;
  }
  auVar145._0_8_ = CONCAT44((uint)(fVar147 * fVar106) & uVar45,(uint)(fVar110 * fVar49) & uVar39);
  auVar145._8_4_ = (uint)(fVar148 * fVar107) & uVar43;
  auVar145._12_4_ = (uint)(fVar151 * fVar109) & uVar44;
  auVar203._0_8_ = CONCAT44((uint)(fVar204 * fVar106) & uVar45,(uint)(fVar153 * fVar49) & uVar39);
  auVar203._8_4_ = (uint)(fVar205 * fVar107) & uVar43;
  auVar203._12_4_ = (uint)(fVar206 * fVar109) & uVar44;
  auVar347 = auVar347 | auVar232;
  auVar50 = unaff_XMM13;
  auVar262 = unaff_XMM12;
  auVar321 = unaff_XMM10;
  if (bVar42) {
    auVar262._8_4_ = auVar145._8_4_;
    auVar262._0_8_ = auVar145._0_8_;
    auVar262._12_4_ = auVar145._12_4_;
    auVar321._8_4_ = auVar203._8_4_;
    auVar321._0_8_ = auVar203._0_8_;
    auVar321._12_4_ = auVar203._12_4_;
    auVar50 = auVar347;
  }
  auVar51 = blendps(unaff_XMM9,auVar329,1);
  if ((bVar30 & 2) == 0) {
    auVar392 = blendps(unaff_XMM12,auVar262,1);
    auVar367 = blendps(unaff_XMM10,auVar321,1);
    auVar266 = blendps(unaff_XMM13,auVar50,1);
    auVar51 = blendps(auVar51,auVar51,2);
    auVar50 = auVar266;
    auVar168 = auVar367;
    auVar53 = auVar392;
    if ((bVar30 & 4) != 0) goto LAB_140b0765f;
LAB_140b0772a:
    auVar393 = blendps(auVar53,auVar392,2);
    auVar368 = blendps(auVar168,auVar367,2);
    auVar266 = blendps(auVar266,auVar50,2);
    auVar50 = blendps(auVar51,auVar51,4);
    auVar51 = auVar266;
    auVar168 = auVar368;
    auVar53 = auVar393;
    if (-1 < (char)bVar30) goto LAB_140b076a7;
LAB_140b07773:
    auVar53 = blendps(auVar53,auVar393,4);
    if (-1 < (char)bVar30) goto LAB_140b07780;
LAB_140b076b8:
    auVar168 = blendps(auVar168,auVar368,4);
    if (-1 < (char)bVar30) goto LAB_140b076c5;
LAB_140b07791:
    auVar51 = blendps(auVar266,auVar51,4);
  }
  else {
    auVar330._8_4_ = auVar104._8_4_;
    auVar330._0_8_ = auVar104._0_8_;
    auVar330._12_4_ = auVar104._12_4_;
    auVar53 = blendps(unaff_XMM12,auVar262,1);
    auVar392._8_4_ = auVar145._8_4_;
    auVar392._0_8_ = auVar145._0_8_;
    auVar392._12_4_ = auVar145._12_4_;
    auVar168 = blendps(unaff_XMM10,auVar321,1);
    auVar367._8_4_ = auVar203._8_4_;
    auVar367._0_8_ = auVar203._0_8_;
    auVar367._12_4_ = auVar203._12_4_;
    auVar266 = blendps(unaff_XMM13,auVar50,1);
    auVar51 = blendps(auVar51,auVar330,2);
    auVar50 = auVar347;
    if ((bVar30 & 4) == 0) goto LAB_140b0772a;
LAB_140b0765f:
    auVar331._8_4_ = auVar104._8_4_;
    auVar331._0_8_ = auVar104._0_8_;
    auVar331._12_4_ = auVar104._12_4_;
    auVar53 = blendps(auVar53,auVar392,2);
    auVar393._8_4_ = auVar145._8_4_;
    auVar393._0_8_ = auVar145._0_8_;
    auVar393._12_4_ = auVar145._12_4_;
    auVar168 = blendps(auVar168,auVar367,2);
    auVar368._8_4_ = auVar203._8_4_;
    auVar368._0_8_ = auVar203._0_8_;
    auVar368._12_4_ = auVar203._12_4_;
    auVar266 = blendps(auVar266,auVar50,2);
    auVar50 = blendps(auVar51,auVar331,4);
    auVar51 = auVar347;
    if ((char)bVar30 < '\0') goto LAB_140b07773;
LAB_140b076a7:
    auVar104 = auVar50;
    auVar53 = blendps(auVar53,auVar393,4);
    auVar50 = auVar104;
    if ((char)bVar30 < '\0') goto LAB_140b076b8;
LAB_140b07780:
    auVar145 = auVar53;
    auVar168 = blendps(auVar168,auVar368,4);
    auVar53 = auVar145;
    if ((char)bVar30 < '\0') goto LAB_140b07791;
LAB_140b076c5:
    auVar51 = blendps(auVar266,auVar51,4);
    auVar203 = auVar168;
  }
  if (-1 < (char)bVar30) {
    auVar347 = auVar51;
  }
  unaff_XMM9 = blendps(auVar50,auVar104,8);
  unaff_XMM12 = blendps(auVar53,auVar145,8);
  unaff_XMM10 = blendps(auVar168,auVar203,8);
  unaff_XMM13 = blendps(auVar51,auVar347,8);
LAB_140b077ba:
  auVar105._0_8_ = unaff_XMM10._0_8_;
  auVar105._8_4_ = unaff_XMM10._4_4_;
  auVar105._12_4_ = unaff_XMM13._4_4_;
  auVar146._0_8_ = unaff_XMM9._0_8_;
  auVar146._8_4_ = unaff_XMM9._4_4_;
  auVar146._12_4_ = unaff_XMM12._4_4_;
  local_168[0] = CONCAT44(unaff_XMM12._0_4_,unaff_XMM9._0_4_);
  local_168[1] = CONCAT44(unaff_XMM13._0_4_,unaff_XMM10._0_4_);
  local_168[2] = auVar146._8_8_;
  local_168[3] = auVar105._8_8_;
  local_148 = unaff_XMM9._8_4_;
  uStack_144 = unaff_XMM12._8_4_;
  uStack_140 = unaff_XMM10._8_4_;
  uStack_13c = unaff_XMM13._8_4_;
  local_138 = unaff_XMM9._12_4_;
  uStack_134 = unaff_XMM12._12_4_;
  uStack_130 = unaff_XMM10._12_4_;
  uStack_12c = unaff_XMM13._12_4_;
  uVar39 = movmskps(uVar25,auVar413);
  uVar20 = (ulonglong)uVar39;
  do {
    if (uVar20 == 0) {
      uVar39 = 0x40;
    }
    else {
      uVar39 = 0;
      for (uVar28 = uVar20; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
        uVar39 = uVar39 + 1;
      }
    }
    bVar30 = (byte)uVar39 & 0x3f;
    local_178 = CONCAT44(uVar349,uVar348);
    uStack_170 = CONCAT44(uVar14,uVar12);
    uVar22 = *(undefined8 *)((longlong)local_168 + (ulonglong)(uVar39 << 4) + 8);
    uVar21 = *(undefined8 *)((longlong)local_168 + (ulonglong)(uVar39 << 4));
    lVar26 = (longlong)*(int *)((longlong)&local_178 + (ulonglong)(uVar39 & 3) * 4) * 0x60;
    pdVar3 = (double *)(param_1 + lVar26);
    *pdVar3 = (double)(float)uVar21;
    pdVar3[1] = (double)(float)((ulonglong)uVar21 >> 0x20);
    pdVar3 = (double *)(param_1 + 0x10 + lVar26);
    *pdVar3 = (double)(float)uVar22;
    pdVar3[1] = (double)(float)((ulonglong)uVar22 >> 0x20);
    uVar20 = uVar20 & (-2L << bVar30 | 0xfffffffffffffffeU >> 0x40 - bVar30);
  } while (uVar20 != 0);
  return;
}

// GetConstantKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_sse4 @ 140b078e0

/* WARNING: Removing unreachable block (ram,0x000140b0838e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined4 uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined8 uVar34;
  uint uVar35;
  longlong lVar36;
  bool bVar37;
  longlong lVar38;
  undefined1 auVar39 [16];
  int iVar68;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  longlong lVar67;
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
  longlong lVar69;
  undefined4 uVar82;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  longlong lVar83;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
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
  ulonglong uVar99;
  float fVar111;
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
  int iVar112;
  longlong lVar113;
  int iVar129;
  undefined1 auVar114 [16];
  int iVar128;
  int iVar131;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  longlong lVar130;
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
  longlong lVar132;
  undefined1 auVar133 [16];
  float fVar147;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  longlong lVar146;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 unaff_XMM6 [16];
  float fVar154;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  longlong lVar155;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  longlong lVar173;
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
  undefined1 unaff_XMM8 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  longlong lVar184;
  undefined1 unaff_XMM9 [16];
  longlong lVar190;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar191 [16];
  float fVar202;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined4 uVar213;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined4 uVar214;
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 local_278 [8];
  undefined8 uStack_270;
  longlong local_258;
  longlong lStack_250;
  int local_228;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  iVar22 = *(int *)(&DAT_151c6be40 + (longlong)(int)param_8 * 4) *
           *(int *)(&DAT_151c6be20 + (longlong)(int)param_8 * 4);
  uVar24 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar24 = param_9;
  }
  if ((int)(uVar24 & 0xfffffffc) < 1) {
    uVar30 = 0;
  }
  else {
    uVar19 = -(uint)(param_8 == 3);
    uVar30 = 0;
    auVar42._8_4_ = 0xffffffff;
    auVar42._0_8_ = 0xffffffffffffffff;
    auVar42._12_4_ = 0xffffffff;
    uVar35 = 0;
    do {
      piVar1 = (int *)(param_2 + (ulonglong)uVar35);
      iVar21 = *piVar1;
      iVar10 = piVar1[2];
      puVar3 = (undefined8 *)(param_2 + 0x10 + (ulonglong)uVar35);
      uVar14 = *puVar3;
      iVar11 = *(int *)(puVar3 + 1);
      iVar68 = *(int *)((longlong)puVar3 + 0xc) << 4;
      lVar27 = (longlong)(*(int *)((longlong)puVar3 + 4) << 4);
      iVar112 = *(int *)(param_3 + 4 + (longlong)(piVar1[1] << 4));
      iVar128 = *(int *)(param_3 + 4 + (longlong)(piVar1[3] * 0x10));
      iVar129 = *(int *)(param_3 + 4 + lVar27);
      iVar131 = *(int *)(param_3 + 4 + (longlong)iVar68);
      auVar115._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar112);
      auVar115._4_4_ = -(uint)(_UNK_150631da4 < iVar128);
      auVar115._8_4_ = -(uint)(_UNK_150631da8 < iVar129);
      auVar115._12_4_ = -(uint)(_UNK_150631dac < iVar131);
      uVar20 = movmskps(iVar68,auVar115);
      if ((uVar20 ^ 0xf) == 0) {
        auVar157 = auVar42;
        if (0.0 < param_6) goto LAB_140b07c16;
LAB_140b07c81:
        auVar93 = ZEXT816(0);
        unaff_XMM11 = blendvps(unaff_XMM11,auVar93,auVar157);
        auVar148 = blendvps(_local_208,auVar93,auVar157);
LAB_140b07c9f:
        unaff_XMM15 = blendvps(unaff_XMM15,auVar93,auVar157);
      }
      else {
        auVar157._0_4_ = unaff_XMM11._0_4_ & auVar115._0_4_;
        auVar157._4_4_ = unaff_XMM11._4_4_ & auVar115._4_4_;
        auVar157._8_4_ = unaff_XMM11._8_4_ & auVar115._8_4_;
        auVar157._12_4_ = unaff_XMM11._12_4_ & auVar115._12_4_;
        auVar148._0_4_ = local_208._0_4_ & auVar115._0_4_;
        auVar148._4_4_ = local_208._4_4_ & auVar115._4_4_;
        auVar148._8_4_ = local_208._8_4_ & auVar115._8_4_;
        auVar148._12_4_ = local_208._12_4_ & auVar115._12_4_;
        auVar203._0_4_ = unaff_XMM15._0_4_ & auVar115._0_4_;
        auVar203._4_4_ = unaff_XMM15._4_4_ & auVar115._4_4_;
        auVar203._8_4_ = unaff_XMM15._8_4_ & auVar115._8_4_;
        auVar203._12_4_ = unaff_XMM15._12_4_ & auVar115._12_4_;
        unaff_XMM11 = auVar157;
        unaff_XMM15 = auVar203;
        if ((char)(uVar20 ^ 0xf) != '\x0f') {
          auVar215._0_4_ = -(uint)(iVar112 < ___xmm_00000002000000020000000200000002);
          auVar215._4_4_ = -(uint)(iVar128 < _UNK_15066df64);
          auVar215._8_4_ = -(uint)(iVar129 < _UNK_15066df68);
          auVar215._12_4_ = -(uint)(iVar131 < _UNK_15066df6c);
          auVar157 = auVar215 ^ auVar42;
          _local_208 = auVar148;
          if (param_6 <= 0.0) goto LAB_140b07c81;
LAB_140b07c16:
          auVar141._0_4_ = iVar112 + auVar42._0_4_;
          auVar141._4_4_ = iVar128 + auVar42._4_4_;
          auVar141._8_4_ = iVar129 + auVar42._8_4_;
          auVar141._12_4_ = iVar131 + auVar42._12_4_;
          if (__real_3f800000 <= param_6) {
            unaff_XMM11 = blendvps(unaff_XMM11,auVar141,auVar157);
            auVar148 = blendvps(_local_208,auVar141,auVar157);
            auVar93 = ZEXT816(0);
          }
          else {
            auVar134._0_4_ = (float)auVar141._0_4_ * param_6;
            auVar134._4_4_ = (float)auVar141._4_4_ * param_6;
            auVar134._8_4_ = (float)auVar141._8_4_ * param_6;
            auVar134._12_4_ = (float)auVar141._12_4_ * param_6;
            auVar148 = roundps(unaff_XMM6,auVar134,9);
            iVar112 = (int)auVar148._0_4_;
            iVar128 = (int)auVar148._4_4_;
            iVar129 = (int)auVar148._8_4_;
            iVar131 = (int)auVar148._12_4_;
            auVar222._0_4_ =
                 (uint)(auVar141._0_4_ < iVar112) * auVar141._0_4_ |
                 (uint)(auVar141._0_4_ >= iVar112) * iVar112;
            auVar222._4_4_ =
                 (uint)(auVar141._4_4_ < iVar128) * auVar141._4_4_ |
                 (uint)(auVar141._4_4_ >= iVar128) * iVar128;
            auVar222._8_4_ =
                 (uint)(auVar141._8_4_ < iVar129) * auVar141._8_4_ |
                 (uint)(auVar141._8_4_ >= iVar129) * iVar129;
            auVar222._12_4_ =
                 (uint)(auVar141._12_4_ < iVar131) * auVar141._12_4_ |
                 (uint)(auVar141._12_4_ >= iVar131) * iVar131;
            unaff_XMM11 = blendvps(unaff_XMM11,auVar222,auVar157);
            auVar93 = ZEXT816(0);
            if (param_7 != '\x01') {
              auVar93._4_4_ = auVar134._4_4_ - auVar148._4_4_;
              auVar93._0_4_ = auVar134._0_4_ - auVar148._0_4_;
              auVar93._8_4_ = auVar134._8_4_ - auVar148._8_4_;
              auVar93._12_4_ = auVar134._12_4_ - auVar148._12_4_;
            }
            iVar112 = unaff_XMM11._0_4_ - auVar42._0_4_;
            iVar128 = unaff_XMM11._4_4_ - auVar42._4_4_;
            iVar129 = unaff_XMM11._8_4_ - auVar42._8_4_;
            iVar131 = unaff_XMM11._12_4_ - auVar42._12_4_;
            auVar135._0_4_ =
                 (uint)(auVar141._0_4_ < iVar112) * auVar141._0_4_ |
                 (uint)(auVar141._0_4_ >= iVar112) * iVar112;
            auVar135._4_4_ =
                 (uint)(auVar141._4_4_ < iVar128) * auVar141._4_4_ |
                 (uint)(auVar141._4_4_ >= iVar128) * iVar128;
            auVar135._8_4_ =
                 (uint)(auVar141._8_4_ < iVar129) * auVar141._8_4_ |
                 (uint)(auVar141._8_4_ >= iVar129) * iVar129;
            auVar135._12_4_ =
                 (uint)(auVar141._12_4_ < iVar131) * auVar141._12_4_ |
                 (uint)(auVar141._12_4_ >= iVar131) * iVar131;
            auVar148 = blendvps(_local_208,auVar135,auVar157);
          }
          goto LAB_140b07c9f;
        }
      }
      iVar112 = *(int *)(param_3 + (piVar1[1] << 4));
      lVar32 = (longlong)iVar112;
      iVar128 = *(int *)(param_3 + piVar1[3] * 0x10);
      lVar33 = (longlong)iVar128;
      iVar129 = *(int *)(param_3 + lVar27);
      lVar27 = (longlong)iVar129;
      iVar131 = *(int *)(param_3 + iVar68);
      lVar36 = (longlong)iVar131;
      auVar100._4_4_ = iVar128;
      auVar100._0_4_ = iVar112;
      auVar100._12_4_ = iVar131;
      auVar100._8_4_ = iVar129;
      auVar40._4_4_ = iVar131;
      auVar40._0_4_ = iVar129;
      auVar40._8_8_ = 0;
      unaff_XMM9 = pmovsxdq(unaff_XMM9,auVar40);
      auVar157 = pmovsxdq(unaff_XMM7,auVar100);
      auVar72._0_8_ = CONCAT44(auVar115._4_4_ & uVar19,auVar115._0_4_ & uVar19);
      auVar72._8_4_ = auVar115._8_4_ & uVar19;
      auVar72._12_4_ = auVar115._12_4_ & uVar19;
      auVar133 = ZEXT816(0);
      auVar41._8_4_ = auVar72._8_4_;
      auVar41._0_8_ = auVar72._0_8_;
      auVar41._12_4_ = auVar72._12_4_;
      auVar115 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar41);
      auVar42 = pmovsxdq(auVar41,auVar115);
      auVar116._8_8_ = auVar115._8_8_;
      auVar116._0_8_ = auVar116._8_8_;
      auVar73 = pmovsxdq(auVar72,auVar116);
      auVar12._4_4_ = iVar22;
      auVar12._0_4_ = iVar22;
      auVar12._8_4_ = iVar22;
      auVar12._12_4_ = iVar22;
      auVar115 = pmulld(unaff_XMM11,auVar12);
      unaff_XMM12 = pmovsxdq(unaff_XMM12,auVar115);
      auVar117._8_4_ = auVar115._8_4_;
      auVar117._12_4_ = auVar115._12_4_;
      auVar117._0_8_ = auVar115._8_8_;
      auVar115 = pmovsxdq(unaff_XMM15,auVar117);
      lVar155 = auVar157._0_8_;
      lVar173 = auVar157._8_8_;
      lVar184 = unaff_XMM9._0_8_;
      lVar190 = unaff_XMM9._8_8_;
      lVar113 = unaff_XMM12._0_8_;
      lVar130 = unaff_XMM12._8_8_;
      lVar132 = auVar115._0_8_;
      lVar146 = auVar115._8_8_;
      lVar69 = auVar73._0_8_;
      lVar83 = auVar73._8_8_;
      lVar38 = auVar42._0_8_;
      lVar67 = auVar42._8_8_;
      if (param_8 < 2) {
        lVar132 = lVar69 + lVar184 + lVar132;
        lVar146 = lVar83 + lVar190 + lVar146;
        auVar117._0_8_ = lVar38 + lVar155 + lVar113;
        auVar117._8_8_ = lVar67 + lVar173 + lVar130;
        auVar115 = insertps(ZEXT416(*(uint *)(param_4 + auVar117._0_8_)),
                            *(undefined4 *)(param_4 + auVar117._8_8_),0x10);
        auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + lVar132),0x20);
        auVar191 = insertps(auVar115,*(undefined4 *)(param_4 + lVar146),0x30);
        auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 4 + auVar117._0_8_)),
                            *(undefined4 *)(param_4 + 4 + auVar117._8_8_),0x10);
        auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar132),0x20);
        unaff_XMM6 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar146),0x30);
        auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 8 + auVar117._0_8_)),
                            *(undefined4 *)(param_4 + 8 + auVar117._8_8_),0x10);
        auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 8 + lVar132),0x20);
        auVar133 = insertps(auVar115,*(undefined4 *)(param_4 + 8 + lVar146),0x30);
      }
      else if (param_8 == 2) {
        lVar132 = lVar69 + lVar184 + lVar132;
        lVar146 = lVar83 + lVar190 + lVar146;
        lVar113 = lVar38 + lVar155 + lVar113;
        lVar130 = lVar67 + lVar173 + lVar130;
        auVar118._2_2_ = *(undefined2 *)(param_4 + lVar130);
        auVar118._0_2_ = *(undefined2 *)(param_4 + lVar113);
        auVar118._4_2_ = *(undefined2 *)(param_4 + lVar132);
        auVar118._6_2_ = *(undefined2 *)(param_4 + lVar146);
        auVar118._8_8_ = 0;
        auVar137._2_2_ = *(undefined2 *)(param_4 + 2 + lVar130);
        auVar137._0_2_ = *(undefined2 *)(param_4 + 2 + lVar113);
        auVar137._4_2_ = *(undefined2 *)(param_4 + 2 + lVar132);
        auVar137._6_2_ = *(undefined2 *)(param_4 + 2 + lVar146);
        auVar137._8_8_ = 0;
        auVar204._2_2_ = *(undefined2 *)(param_4 + 4 + lVar130);
        auVar204._0_2_ = *(undefined2 *)(param_4 + 4 + lVar113);
        auVar204._4_2_ = *(undefined2 *)(param_4 + 4 + lVar132);
        auVar204._6_2_ = *(undefined2 *)(param_4 + 4 + lVar146);
        auVar204._8_8_ = 0;
        auVar115 = pmovzxwd(auVar118,auVar118);
        unaff_XMM12._4_4_ = _UNK_151c6b8e4;
        unaff_XMM12._0_4_ = ___xmm_ffff8001ffff8001ffff8001ffff8001;
        unaff_XMM12._8_4_ = _UNK_151c6b8e8;
        unaff_XMM12._12_4_ = _UNK_151c6b8ec;
        auVar119._0_4_ = auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar119._4_4_ = auVar115._4_4_ + _UNK_151c6b8e4;
        auVar119._8_4_ = auVar115._8_4_ + _UNK_151c6b8e8;
        auVar119._12_4_ = auVar115._12_4_ + _UNK_151c6b8ec;
        auVar194._0_4_ = (float)auVar119._0_4_;
        auVar194._4_4_ = (float)auVar119._4_4_;
        auVar194._8_4_ = (float)auVar119._8_4_;
        auVar194._12_4_ = (float)auVar119._12_4_;
        auVar203 = divps(auVar194,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar115 = pmovzxwd(auVar119,auVar137);
        auVar120._0_4_ = auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar120._4_4_ = auVar115._4_4_ + _UNK_151c6b8e4;
        auVar120._8_4_ = auVar115._8_4_ + _UNK_151c6b8e8;
        auVar120._12_4_ = auVar115._12_4_ + _UNK_151c6b8ec;
        auVar150._0_4_ = (float)auVar120._0_4_;
        auVar150._4_4_ = (float)auVar120._4_4_;
        auVar150._8_4_ = (float)auVar120._8_4_;
        auVar150._12_4_ = (float)auVar120._12_4_;
        auVar157 = divps(auVar150,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar115 = pmovzxwd(auVar120,auVar204);
        auVar138._0_4_ = (float)(auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar138._4_4_ = (float)(auVar115._4_4_ + _UNK_151c6b8e4);
        auVar138._8_4_ = (float)(auVar115._8_4_ + _UNK_151c6b8e8);
        auVar138._12_4_ = (float)(auVar115._12_4_ + _UNK_151c6b8ec);
        auVar115 = divps(auVar138,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar117._4_4_ = (int)_UNK_151c6be64;
        auVar117._0_4_ = (int)___xmm_43000000430000004300000043000000;
        auVar117._8_4_ = (int)_UNK_151c6be68;
        auVar117._12_4_ = (int)_UNK_151c6be6c;
        auVar191._0_4_ = auVar203._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar191._4_4_ = auVar203._4_4_ * _UNK_151c6be64;
        auVar191._8_4_ = auVar203._8_4_ * _UNK_151c6be68;
        auVar191._12_4_ = auVar203._12_4_ * _UNK_151c6be6c;
        unaff_XMM6._0_4_ = auVar157._0_4_ * ___xmm_43000000430000004300000043000000;
        unaff_XMM6._4_4_ = auVar157._4_4_ * _UNK_151c6be64;
        unaff_XMM6._8_4_ = auVar157._8_4_ * _UNK_151c6be68;
        unaff_XMM6._12_4_ = auVar157._12_4_ * _UNK_151c6be6c;
        auVar133._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar133._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
        auVar133._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
        auVar133._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
      }
      else {
        unaff_XMM6 = ZEXT816(0);
        auVar191 = ZEXT816(0);
        if (param_8 == 3) {
          uVar20 = *(uint *)(param_4 + lVar38 + lVar155 + lVar113);
          uVar4 = *(uint *)(param_4 + lVar67 + lVar173 + lVar130);
          uVar5 = *(uint *)(param_4 + lVar69 + lVar184 + lVar132);
          uVar6 = *(uint *)(param_4 + lVar83 + lVar190 + lVar146);
          auVar115 = insertps(ZEXT416(*(uint *)(param_4 + lVar32)),*(undefined4 *)(param_4 + lVar33)
                              ,0x10);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + lVar27),0x20);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + lVar36),0x30);
          auVar157 = insertps(ZEXT416(*(uint *)(param_4 + 0xc + lVar32)),
                              *(undefined4 *)(param_4 + 0xc + lVar33),0x10);
          auVar157 = insertps(auVar157,*(undefined4 *)(param_4 + 0xc + lVar27),0x20);
          auVar203 = insertps(auVar157,*(undefined4 *)(param_4 + 0xc + lVar36),0x30);
          auVar215 = insertps(ZEXT416(*(uint *)(param_4 + 0x10 + lVar32)),
                              *(undefined4 *)(param_4 + 0x10 + lVar33),0x10);
          auVar193._0_4_ =
               (float)(int)((uVar20 & ___xmm_000003ff000003ff000003ff000003ff) +
                           ___xmm_fffffe01fffffe01fffffe01fffffe01);
          auVar193._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
          auVar193._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
          auVar193._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
          auVar157 = divps(auVar193,___xmm_43ff800043ff800043ff800043ff8000);
          auVar215 = insertps(auVar215,*(undefined4 *)(param_4 + 0x10 + lVar27),0x20);
          auVar191._0_4_ = auVar157._0_4_ * auVar203._0_4_ + auVar115._0_4_;
          auVar191._4_4_ = auVar157._4_4_ * auVar203._4_4_ + auVar115._4_4_;
          auVar191._8_4_ = auVar157._8_4_ * auVar203._8_4_ + auVar115._8_4_;
          auVar191._12_4_ = auVar157._12_4_ * auVar203._12_4_ + auVar115._12_4_;
          auVar215 = insertps(auVar215,*(undefined4 *)(param_4 + 0x10 + lVar36),0x30);
          auVar149._0_4_ =
               (float)(int)((uVar20 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                           ___xmm_fffffc01fffffc01fffffc01fffffc01);
          auVar149._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
          auVar149._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
          auVar149._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
          auVar157 = divps(auVar149,___xmm_447fc000447fc000447fc000447fc000);
          auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar32)),
                              *(undefined4 *)(param_4 + 4 + lVar33),0x10);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar27),0x20);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar36),0x30);
          auVar203 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar32)),
                              *(undefined4 *)(param_4 + 8 + lVar33),0x10);
          auVar203 = insertps(auVar203,*(undefined4 *)(param_4 + 8 + lVar27),0x20);
          unaff_XMM6._0_4_ = auVar157._0_4_ * auVar215._0_4_ + auVar115._0_4_;
          unaff_XMM6._4_4_ = auVar157._4_4_ * auVar215._4_4_ + auVar115._4_4_;
          unaff_XMM6._8_4_ = auVar157._8_4_ * auVar215._8_4_ + auVar115._8_4_;
          unaff_XMM6._12_4_ = auVar157._12_4_ * auVar215._12_4_ + auVar115._12_4_;
          auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 0x14 + lVar32)),
                              *(undefined4 *)(param_4 + 0x14 + lVar33),0x10);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 0x14 + lVar27),0x20);
          unaff_XMM12 = insertps(auVar115,*(undefined4 *)(param_4 + 0x14 + lVar36),0x30);
          auVar117._0_4_ = (uVar20 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01;
          auVar117._4_4_ = (uVar4 >> 0x15) + _UNK_151c6b864;
          auVar117._8_4_ = (uVar5 >> 0x15) + _UNK_151c6b868;
          auVar117._12_4_ = (uVar6 >> 0x15) + _UNK_151c6b86c;
          auVar136._0_4_ = (float)auVar117._0_4_;
          auVar136._4_4_ = (float)auVar117._4_4_;
          auVar136._8_4_ = (float)auVar117._8_4_;
          auVar136._12_4_ = (float)auVar117._12_4_;
          auVar115 = divps(auVar136,___xmm_447fc000447fc000447fc000447fc000);
          auVar157 = insertps(auVar203,*(undefined4 *)(param_4 + 8 + lVar36),0x30);
          auVar133._0_4_ = auVar115._0_4_ * unaff_XMM12._0_4_ + auVar157._0_4_;
          auVar133._4_4_ = auVar115._4_4_ * unaff_XMM12._4_4_ + auVar157._4_4_;
          auVar133._8_4_ = auVar115._8_4_ * unaff_XMM12._8_4_ + auVar157._8_4_;
          auVar133._12_4_ = auVar115._12_4_ * unaff_XMM12._12_4_ + auVar157._12_4_;
        }
      }
      auVar228._0_4_ = -(uint)(unaff_XMM11._0_4_ == auVar148._0_4_);
      auVar228._4_4_ = -(uint)(unaff_XMM11._4_4_ == auVar148._4_4_);
      auVar228._8_4_ = -(uint)(unaff_XMM11._8_4_ == auVar148._8_4_);
      auVar228._12_4_ = -(uint)(unaff_XMM11._12_4_ == auVar148._12_4_);
      uVar20 = movmskps(iVar129,auVar228);
      if ((uVar20 ^ 0xf) == 0) {
        auVar42._8_4_ = 0xffffffff;
        auVar42._0_8_ = 0xffffffffffffffff;
        auVar42._12_4_ = 0xffffffff;
        uVar15 = 0;
      }
      else {
        bVar26 = (char)((char)(uVar20 ^ 0xf) << 4) >> 4;
        if (param_8 < 7) {
          auVar157 = auVar228 ^ ___xmm_ffffffffffffffffffffffffffffffff;
          auVar13._4_4_ = iVar22;
          auVar13._0_4_ = iVar22;
          auVar13._8_4_ = iVar22;
          auVar13._12_4_ = iVar22;
          auVar203 = pmulld(auVar148,auVar13);
          auVar115 = pmovsxdq(auVar117,auVar203);
          auVar216._8_4_ = auVar203._8_4_;
          auVar216._12_4_ = auVar203._12_4_;
          auVar216._0_8_ = auVar203._8_8_;
          auVar203 = pmovsxdq(auVar216,auVar216);
          lVar27 = auVar115._0_8_;
          lVar32 = auVar115._8_8_;
          lVar33 = auVar203._0_8_;
          lVar36 = auVar203._8_8_;
          uVar213 = auVar157._8_4_;
          uVar214 = auVar157._12_4_;
          switch(param_8) {
          case 0:
          case 1:
            auVar217._0_8_ = lVar33 + lVar184 + lVar69;
            auVar217._8_8_ = lVar36 + lVar190 + lVar83;
            auVar121._0_8_ = lVar27 + lVar155 + lVar38;
            auVar121._8_8_ = lVar32 + lVar173 + lVar67;
            auVar42 = pmovsxdq(auVar73,auVar157);
            auVar203 = blendvps((undefined1  [16])0x0,auVar121,auVar42);
            auVar85._4_4_ = uVar213;
            auVar85._0_4_ = uVar213;
            auVar85._8_4_ = uVar214;
            auVar85._12_4_ = uVar214;
            auVar157 = blendvps(ZEXT816(0),auVar217,auVar85);
            lVar27 = param_4 + auVar203._0_8_;
            lVar32 = param_4 + auVar203._8_8_;
            lVar33 = param_4 + auVar157._0_8_;
            lVar36 = param_4 + auVar157._8_8_;
            auVar141 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar42);
            auVar215 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar85);
            auVar93 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar42
                              );
            auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,
                                auVar85);
            if ((bVar26 & 1) != 0) {
              unaff_XMM14 = pblendw(unaff_XMM14,ZEXT416(*(uint *)(param_4 + auVar203._0_8_)),3);
              _local_278 = pblendw(_local_278,ZEXT416(*(uint *)(auVar141._0_8_ + lVar27)),3);
              unaff_XMM8 = pblendw(unaff_XMM8,ZEXT416(*(uint *)(auVar93._0_8_ + lVar27)),3);
            }
            auVar42._8_4_ = 0xffffffff;
            auVar42._0_8_ = 0xffffffffffffffff;
            auVar42._12_4_ = 0xffffffff;
            if ((bVar26 & 2) != 0) {
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(param_4 + auVar203._8_8_),0x10);
              _local_278 = insertps(_local_278,*(undefined4 *)(auVar141._8_8_ + lVar32),0x10);
              unaff_XMM8 = insertps(unaff_XMM8,*(undefined4 *)(auVar93._8_8_ + lVar32),0x10);
            }
            if ((bVar26 & 4) != 0) {
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(param_4 + auVar157._0_8_),0x20);
              _local_278 = insertps(_local_278,*(undefined4 *)(auVar215._0_8_ + lVar33),0x20);
              unaff_XMM8 = insertps(unaff_XMM8,*(undefined4 *)(auVar115._0_8_ + lVar33),0x20);
            }
            if ((char)bVar26 < '\0') {
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(param_4 + auVar157._8_8_),0x30);
              _local_278 = insertps(_local_278,*(undefined4 *)(auVar215._8_8_ + lVar36),0x30);
            }
            uVar15 = 0;
            if ((char)bVar26 < '\0') {
              uVar15 = 0;
              unaff_XMM8 = insertps(unaff_XMM8,*(undefined4 *)(auVar115._8_8_ + lVar36),0x30);
            }
            break;
          case 2:
            auVar218._0_8_ = lVar33 + lVar184 + lVar69;
            auVar218._8_8_ = lVar36 + lVar190 + lVar83;
            auVar122._0_8_ = lVar27 + lVar155 + lVar38;
            auVar122._8_8_ = lVar32 + lVar173 + lVar67;
            auVar42 = pmovsxdq(auVar73,auVar157);
            auVar157 = blendvps(ZEXT816(0),auVar122,auVar42);
            auVar86._4_4_ = uVar213;
            auVar86._0_4_ = uVar213;
            auVar86._8_4_ = uVar214;
            auVar86._12_4_ = uVar214;
            auVar203 = blendvps(ZEXT816(0),auVar218,auVar86);
            lVar27 = param_4 + auVar157._0_8_;
            lVar32 = param_4 + auVar157._8_8_;
            lVar33 = param_4 + auVar203._0_8_;
            lVar36 = param_4 + auVar203._8_8_;
            auVar215 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,
                                auVar42);
            auVar93 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,auVar86
                              );
            auVar141 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar42);
            auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar86);
            auVar43._0_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar157._0_8_) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar43._4_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar157._8_8_) + _UNK_151c6b8e4);
            auVar43._8_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar203._0_8_) + _UNK_151c6b8e8);
            auVar43._12_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar203._8_8_) + _UNK_151c6b8ec);
            auVar42 = divps(auVar43,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar44._0_8_ =
                 CONCAT44(auVar42._4_4_ * _UNK_151c6be64,
                          auVar42._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar44._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
            auVar44._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
            bVar37 = (bVar26 & 1) != 0;
            auVar123 = unaff_XMM14;
            if (bVar37) {
              auVar123._8_4_ = auVar44._8_4_;
              auVar123._0_8_ = auVar44._0_8_;
              auVar123._12_4_ = auVar44._12_4_;
            }
            auVar74._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar215._0_8_ + lVar27) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar74._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar215._8_8_ + lVar32) + _UNK_151c6b8e4);
            auVar74._8_4_ = (float)(int)((uint)*(ushort *)(auVar93._0_8_ + lVar33) + _UNK_151c6b8e8)
            ;
            auVar74._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar93._8_8_ + lVar36) + _UNK_151c6b8ec);
            auVar42 = divps(auVar74,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar87._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar141._0_8_ + lVar27) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar87._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar141._8_8_ + lVar32) + _UNK_151c6b8e4);
            auVar87._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar33) + _UNK_151c6b8e8);
            auVar87._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar36) + _UNK_151c6b8ec);
            auVar115 = divps(auVar87,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar75._0_8_ =
                 CONCAT44(auVar42._4_4_ * _UNK_151c6be64,
                          auVar42._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar75._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
            auVar75._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
            auVar88._0_8_ =
                 CONCAT44(auVar115._4_4_ * _UNK_151c6be64,
                          auVar115._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar88._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
            auVar88._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
            auVar42._8_4_ = 0xffffffff;
            auVar42._0_8_ = 0xffffffffffffffff;
            auVar42._12_4_ = 0xffffffff;
            auVar158 = unaff_XMM8;
            auVar219 = _local_278;
            if (bVar37) {
              auVar219._8_4_ = auVar75._8_4_;
              auVar219._0_8_ = auVar75._0_8_;
              auVar219._12_4_ = auVar75._12_4_;
              auVar158._8_4_ = auVar88._8_4_;
              auVar158._0_8_ = auVar88._0_8_;
              auVar158._12_4_ = auVar88._12_4_;
            }
            auVar115 = blendps(unaff_XMM14,auVar123,1);
            bVar37 = (bVar26 & 2) == 0;
            auVar205 = auVar115;
            if (!bVar37) {
              auVar205._8_4_ = auVar44._8_4_;
              auVar205._0_8_ = auVar44._0_8_;
              auVar205._12_4_ = auVar44._12_4_;
            }
            auVar157 = blendps(_local_278,auVar219,1);
            uVar15 = 0;
            if (bVar37) {
              auVar175 = blendps(unaff_XMM8,auVar158,1);
              auVar115 = blendps(auVar115,auVar205,2);
              auVar124 = auVar157;
              auVar203 = auVar175;
              if ((bVar26 & 4) != 0) goto LAB_140b08679;
LAB_140b086ee:
              auVar185 = blendps(auVar157,auVar124,2);
              auVar174 = blendps(auVar203,auVar175,2);
              auVar115 = blendps(auVar115,auVar115,4);
              auVar157 = auVar174;
              _local_278 = auVar185;
              if (-1 < (char)bVar26) goto LAB_140b0871c;
LAB_140b086ab:
              unaff_XMM9 = blendps(_local_278,auVar185,4);
              if (-1 < (char)bVar26) goto LAB_140b086be;
LAB_140b08733:
              auVar157 = blendps(auVar157,auVar174,4);
            }
            else {
              auVar124._8_4_ = auVar75._8_4_;
              auVar124._0_8_ = auVar75._0_8_;
              auVar124._12_4_ = auVar75._12_4_;
              auVar203 = blendps(unaff_XMM8,auVar158,1);
              auVar175._8_4_ = auVar88._8_4_;
              auVar175._0_8_ = auVar88._0_8_;
              auVar175._12_4_ = auVar88._12_4_;
              auVar115 = blendps(auVar115,auVar205,2);
              if ((bVar26 & 4) == 0) goto LAB_140b086ee;
LAB_140b08679:
              auVar206._8_4_ = auVar44._8_4_;
              auVar206._0_8_ = auVar44._0_8_;
              auVar206._12_4_ = auVar44._12_4_;
              _local_278 = blendps(auVar157,auVar124,2);
              auVar185._8_4_ = auVar75._8_4_;
              auVar185._0_8_ = auVar75._0_8_;
              auVar185._12_4_ = auVar75._12_4_;
              auVar157 = blendps(auVar203,auVar175,2);
              auVar174._8_4_ = auVar88._8_4_;
              auVar174._0_8_ = auVar88._0_8_;
              auVar174._12_4_ = auVar88._12_4_;
              auVar115 = blendps(auVar115,auVar206,4);
              if ((char)bVar26 < '\0') goto LAB_140b086ab;
LAB_140b0871c:
              auVar44 = auVar115;
              unaff_XMM9 = blendps(_local_278,auVar185,4);
              auVar115 = auVar44;
              if ((char)bVar26 < '\0') goto LAB_140b08733;
LAB_140b086be:
              auVar157 = blendps(auVar157,auVar174,4);
              auVar75 = unaff_XMM9;
            }
            if (-1 < (char)bVar26) {
              auVar88 = auVar157;
            }
            unaff_XMM14 = blendps(auVar115,auVar44,8);
            _local_278 = blendps(unaff_XMM9,auVar75,8);
            unaff_XMM8 = blendps(auVar157,auVar88,8);
            break;
          case 3:
            auVar100 = ~auVar228 & auVar100;
            lVar113 = param_4 + auVar100._0_4_;
            lVar130 = param_4 + auVar100._4_4_;
            auVar220._0_8_ = lVar33 + lVar184 + lVar69;
            auVar220._8_8_ = lVar36 + lVar190 + lVar83;
            auVar125._0_8_ = lVar27 + lVar155 + lVar38;
            auVar125._8_8_ = lVar32 + lVar173 + lVar67;
            auVar42 = pmovsxdq(auVar42,auVar157);
            auVar42 = blendvps((undefined1  [16])0x0,auVar125,auVar42);
            auVar45._4_4_ = uVar213;
            auVar45._0_4_ = uVar213;
            auVar45._8_4_ = uVar214;
            auVar45._12_4_ = uVar214;
            auVar115 = blendvps((undefined1  [16])0x0,auVar220,auVar45);
            lVar27 = param_4 + auVar100._8_4_;
            uVar20 = *(uint *)(param_4 + auVar42._0_8_);
            uVar4 = *(uint *)(param_4 + auVar42._8_8_);
            uVar5 = *(uint *)(param_4 + auVar115._0_8_);
            uVar6 = *(uint *)(param_4 + auVar115._8_8_);
            auVar42 = insertps(ZEXT416(*(uint *)(param_4 + auVar100._0_4_)),
                               *(undefined4 *)(param_4 + auVar100._4_4_),0x10);
            auVar42 = insertps(auVar42,*(undefined4 *)(param_4 + auVar100._8_4_),0x20);
            auVar115 = insertps(auVar42,*(undefined4 *)(param_4 + auVar100._12_4_),0x30);
            auVar42 = ~auVar228 & ___xmm_0000000c0000000c0000000c0000000c;
            auVar157 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            lVar32 = param_4 + auVar100._12_4_;
            auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar46._0_4_ =
                 (float)(int)((uVar20 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar46._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar46._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar46._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar42 = divps(auVar46,___xmm_43ff800043ff800043ff800043ff8000);
            auVar47._0_8_ =
                 CONCAT44(auVar42._4_4_ * auVar157._4_4_ + auVar115._4_4_,
                          auVar42._0_4_ * auVar157._0_4_ + auVar115._0_4_);
            auVar47._8_4_ = auVar42._8_4_ * auVar157._8_4_ + auVar115._8_4_;
            auVar47._12_4_ = auVar42._12_4_ * auVar157._12_4_ + auVar115._12_4_;
            bVar37 = (bVar26 & 1) != 0;
            auVar89 = unaff_XMM14;
            if (bVar37) {
              auVar89._8_4_ = auVar47._8_4_;
              auVar89._0_8_ = auVar47._0_8_;
              auVar89._12_4_ = auVar47._12_4_;
            }
            auVar42 = ~auVar228 & ___xmm_00000004000000040000000400000004;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            auVar203 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar42 = ~auVar228 & ___xmm_00000008000000080000000800000008;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            auVar215 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar42 = ~auVar228 & ___xmm_00000010000000100000001000000010;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            auVar157 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar115 = ~auVar228 & ___xmm_00000014000000140000001400000014;
            auVar42 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                               *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
            auVar42 = insertps(auVar42,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar27),0x20);
            auVar115 = insertps(auVar42,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar32),0x30);
            auVar76._0_4_ =
                 (float)(int)((uVar20 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar76._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar76._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar76._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar42 = divps(auVar76,___xmm_447fc000447fc000447fc000447fc000);
            auVar77._0_8_ =
                 CONCAT44(auVar42._4_4_ * auVar157._4_4_ + auVar203._4_4_,
                          auVar42._0_4_ * auVar157._0_4_ + auVar203._0_4_);
            auVar77._8_4_ = auVar42._8_4_ * auVar157._8_4_ + auVar203._8_4_;
            auVar77._12_4_ = auVar42._12_4_ * auVar157._12_4_ + auVar203._12_4_;
            auVar159._0_4_ =
                 (float)(int)((uVar20 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar159._4_4_ = (float)(int)((uVar4 >> 0x15) + _UNK_151c6b864);
            auVar159._8_4_ = (float)(int)((uVar5 >> 0x15) + _UNK_151c6b868);
            auVar159._12_4_ = (float)(int)((uVar6 >> 0x15) + _UNK_151c6b86c);
            auVar42 = divps(auVar159,___xmm_447fc000447fc000447fc000447fc000);
            auVar160._0_8_ =
                 CONCAT44(auVar42._4_4_ * auVar115._4_4_ + auVar215._4_4_,
                          auVar42._0_4_ * auVar115._0_4_ + auVar215._0_4_);
            auVar160._8_4_ = auVar42._8_4_ * auVar115._8_4_ + auVar215._8_4_;
            auVar160._12_4_ = auVar42._12_4_ * auVar115._12_4_ + auVar215._12_4_;
            auVar42._8_4_ = 0xffffffff;
            auVar42._0_8_ = 0xffffffffffffffff;
            auVar42._12_4_ = 0xffffffff;
            auVar126 = unaff_XMM8;
            auVar221 = _local_278;
            if (bVar37) {
              auVar221._8_4_ = auVar77._8_4_;
              auVar221._0_8_ = auVar77._0_8_;
              auVar221._12_4_ = auVar77._12_4_;
              auVar126._8_4_ = auVar160._8_4_;
              auVar126._0_8_ = auVar160._0_8_;
              auVar126._12_4_ = auVar160._12_4_;
            }
            auVar115 = blendps(unaff_XMM14,auVar89,1);
            bVar37 = (bVar26 & 2) == 0;
            auVar207 = auVar115;
            if (!bVar37) {
              auVar207._8_4_ = auVar47._8_4_;
              auVar207._0_8_ = auVar47._0_8_;
              auVar207._12_4_ = auVar47._12_4_;
            }
            auVar157 = blendps(_local_278,auVar221,1);
            uVar15 = 0;
            if (bVar37) {
              auVar177 = blendps(unaff_XMM8,auVar126,1);
              auVar115 = blendps(auVar115,auVar207,2);
              auVar90 = auVar157;
              auVar203 = auVar177;
              if ((bVar26 & 4) != 0) goto LAB_140b08a82;
LAB_140b08af7:
              auVar186 = blendps(auVar157,auVar90,2);
              auVar176 = blendps(auVar203,auVar177,2);
              auVar115 = blendps(auVar115,auVar115,4);
              auVar157 = auVar176;
              _local_278 = auVar186;
              if (-1 < (char)bVar26) goto LAB_140b08b25;
LAB_140b08ab4:
              unaff_XMM9 = blendps(_local_278,auVar186,4);
              if (-1 < (char)bVar26) goto LAB_140b08ac7;
LAB_140b08b3c:
              auVar157 = blendps(auVar157,auVar176,4);
            }
            else {
              auVar90._8_4_ = auVar77._8_4_;
              auVar90._0_8_ = auVar77._0_8_;
              auVar90._12_4_ = auVar77._12_4_;
              auVar203 = blendps(unaff_XMM8,auVar126,1);
              auVar177._8_4_ = auVar160._8_4_;
              auVar177._0_8_ = auVar160._0_8_;
              auVar177._12_4_ = auVar160._12_4_;
              auVar115 = blendps(auVar115,auVar207,2);
              if ((bVar26 & 4) == 0) goto LAB_140b08af7;
LAB_140b08a82:
              auVar208._8_4_ = auVar47._8_4_;
              auVar208._0_8_ = auVar47._0_8_;
              auVar208._12_4_ = auVar47._12_4_;
              _local_278 = blendps(auVar157,auVar90,2);
              auVar186._8_4_ = auVar77._8_4_;
              auVar186._0_8_ = auVar77._0_8_;
              auVar186._12_4_ = auVar77._12_4_;
              auVar157 = blendps(auVar203,auVar177,2);
              auVar176._8_4_ = auVar160._8_4_;
              auVar176._0_8_ = auVar160._0_8_;
              auVar176._12_4_ = auVar160._12_4_;
              auVar115 = blendps(auVar115,auVar208,4);
              if ((char)bVar26 < '\0') goto LAB_140b08ab4;
LAB_140b08b25:
              auVar47 = auVar115;
              unaff_XMM9 = blendps(_local_278,auVar186,4);
              auVar115 = auVar47;
              if ((char)bVar26 < '\0') goto LAB_140b08b3c;
LAB_140b08ac7:
              auVar157 = blendps(auVar157,auVar176,4);
              auVar77 = unaff_XMM9;
            }
            if (-1 < (char)bVar26) {
              auVar160 = auVar157;
            }
            unaff_XMM14 = blendps(auVar115,auVar47,8);
            _local_278 = blendps(unaff_XMM9,auVar77,8);
            unaff_XMM8 = blendps(auVar157,auVar160,8);
            break;
          default:
            goto switchD_140b0810e_caseD_4;
          }
        }
        else {
switchD_140b0810e_caseD_4:
          bVar37 = (bVar26 & 1) != 0;
          if (bVar37) {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,3);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,3);
          }
          auVar42._8_4_ = 0xffffffff;
          auVar42._0_8_ = 0xffffffffffffffff;
          auVar42._12_4_ = 0xffffffff;
          uVar15 = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          if (bVar37) {
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,3);
          }
          if ((bVar26 & 2) != 0) {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,0xc);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,0xc);
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,0xc);
          }
          if ((bVar26 & 4) != 0) {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,0x30);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,0x30);
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,0x30);
          }
          if ((char)bVar26 < '\0') {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,0xc0);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,0xc0);
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,0xc0);
          }
        }
        fVar111 = unaff_XMM15._0_4_;
        fVar147 = unaff_XMM15._4_4_;
        fVar154 = unaff_XMM15._8_4_;
        fVar202 = unaff_XMM15._12_4_;
        auVar48._0_8_ =
             CONCAT44((unaff_XMM14._4_4_ - auVar191._4_4_) * fVar147 + auVar191._4_4_,
                      (unaff_XMM14._0_4_ - auVar191._0_4_) * fVar111 + auVar191._0_4_);
        auVar48._8_4_ = (unaff_XMM14._8_4_ - auVar191._8_4_) * fVar154 + auVar191._8_4_;
        auVar48._12_4_ = (unaff_XMM14._12_4_ - auVar191._12_4_) * fVar202 + auVar191._12_4_;
        bVar37 = (bVar26 & 1) == 0;
        auVar127 = auVar191;
        if (!bVar37) {
          auVar127._8_4_ = auVar48._8_4_;
          auVar127._0_8_ = auVar48._0_8_;
          auVar127._12_4_ = auVar48._12_4_;
        }
        auVar73._0_8_ =
             CONCAT44(((float)local_278._4_4_ - unaff_XMM6._4_4_) * fVar147 + unaff_XMM6._4_4_,
                      ((float)local_278._0_4_ - unaff_XMM6._0_4_) * fVar111 + unaff_XMM6._0_4_);
        auVar73._8_4_ = ((float)uStack_270 - unaff_XMM6._8_4_) * fVar154 + unaff_XMM6._8_4_;
        auVar73._12_4_ = (uStack_270._4_4_ - unaff_XMM6._12_4_) * fVar202 + unaff_XMM6._12_4_;
        auVar91._0_8_ =
             CONCAT44((unaff_XMM8._4_4_ - auVar133._4_4_) * fVar147 + auVar133._4_4_,
                      (unaff_XMM8._0_4_ - auVar133._0_4_) * fVar111 + auVar133._0_4_);
        auVar91._8_4_ = (unaff_XMM8._8_4_ - auVar133._8_4_) * fVar154 + auVar133._8_4_;
        auVar91._12_4_ = (unaff_XMM8._12_4_ - auVar133._12_4_) * fVar202 + auVar133._12_4_;
        if (bVar37) {
          auVar115 = blendps(auVar191,auVar127,1);
          auVar161 = auVar133;
          unaff_XMM12 = unaff_XMM6;
          if ((bVar26 & 2) != 0) goto LAB_140b08c85;
LAB_140b08bd2:
          auVar151 = blendps(unaff_XMM6,unaff_XMM12,1);
          auVar203 = blendps(auVar133,auVar161,1);
          auVar115 = blendps(auVar115,auVar115,2);
          auVar157 = auVar151;
          auVar163 = auVar203;
          if ((bVar26 & 4) != 0) goto LAB_140b08c09;
LAB_140b08cc0:
          auVar152 = blendps(auVar157,auVar151,2);
          auVar203 = blendps(auVar203,auVar163,2);
          auVar115 = blendps(auVar115,auVar115,4);
          auVar157 = auVar152;
          auVar162 = auVar203;
          if (-1 < (char)bVar26) goto LAB_140b08cf1;
LAB_140b08c3e:
          auVar157 = blendps(auVar157,auVar152,4);
          if (-1 < (char)bVar26) goto LAB_140b08c53;
LAB_140b08d0a:
          auVar203 = blendps(auVar203,auVar162,4);
        }
        else {
          unaff_XMM12._8_4_ = auVar73._8_4_;
          unaff_XMM12._0_8_ = auVar73._0_8_;
          unaff_XMM12._12_4_ = auVar73._12_4_;
          auVar161._8_4_ = auVar91._8_4_;
          auVar161._0_8_ = auVar91._0_8_;
          auVar161._12_4_ = auVar91._12_4_;
          auVar115 = blendps(auVar191,auVar127,1);
          if ((bVar26 & 2) == 0) goto LAB_140b08bd2;
LAB_140b08c85:
          auVar210._8_4_ = auVar48._8_4_;
          auVar210._0_8_ = auVar48._0_8_;
          auVar210._12_4_ = auVar48._12_4_;
          auVar157 = blendps(unaff_XMM6,unaff_XMM12,1);
          auVar151._8_4_ = auVar73._8_4_;
          auVar151._0_8_ = auVar73._0_8_;
          auVar151._12_4_ = auVar73._12_4_;
          auVar203 = blendps(auVar133,auVar161,1);
          auVar163._8_4_ = auVar91._8_4_;
          auVar163._0_8_ = auVar91._0_8_;
          auVar163._12_4_ = auVar91._12_4_;
          auVar115 = blendps(auVar115,auVar210,2);
          if ((bVar26 & 4) == 0) goto LAB_140b08cc0;
LAB_140b08c09:
          auVar209._8_4_ = auVar48._8_4_;
          auVar209._0_8_ = auVar48._0_8_;
          auVar209._12_4_ = auVar48._12_4_;
          auVar157 = blendps(auVar157,auVar151,2);
          auVar152._8_4_ = auVar73._8_4_;
          auVar152._0_8_ = auVar73._0_8_;
          auVar152._12_4_ = auVar73._12_4_;
          auVar203 = blendps(auVar203,auVar163,2);
          auVar162._8_4_ = auVar91._8_4_;
          auVar162._0_8_ = auVar91._0_8_;
          auVar162._12_4_ = auVar91._12_4_;
          auVar115 = blendps(auVar115,auVar209,4);
          if ((char)bVar26 < '\0') goto LAB_140b08c3e;
LAB_140b08cf1:
          auVar48 = auVar115;
          auVar157 = blendps(auVar157,auVar152,4);
          auVar115 = auVar48;
          if ((char)bVar26 < '\0') goto LAB_140b08d0a;
LAB_140b08c53:
          auVar203 = blendps(auVar203,auVar162,4);
          auVar73 = auVar157;
        }
        if (-1 < (char)bVar26) {
          auVar91 = auVar203;
        }
        auVar191 = blendps(auVar115,auVar48,8);
        unaff_XMM6 = blendps(auVar157,auVar73,8);
        auVar133 = blendps(auVar203,auVar91,8);
      }
      fVar147 = auVar133._12_4_;
      auVar8._4_8_ = auVar73._8_8_;
      auVar8._0_4_ = auVar133._4_4_;
      auVar70._0_8_ = auVar8._0_8_ << 0x20;
      auVar70._8_4_ = auVar133._8_4_;
      auVar70._12_4_ = fVar147;
      auVar9._4_8_ = auVar70._8_8_;
      auVar9._0_4_ = (int)uVar15;
      auVar71._0_8_ = auVar9._0_8_ << 0x20;
      auVar71._8_4_ = fVar147;
      fVar111 = (float)((ulonglong)uVar15 >> 0x20);
      auVar71._12_4_ = fVar111;
      auVar84._0_8_ = auVar191._0_8_;
      fVar202 = auVar191._12_4_;
      auVar84._8_4_ = auVar191._4_4_;
      auVar84._12_4_ = unaff_XMM6._4_4_;
      auVar114._0_8_ = CONCAT44(unaff_XMM6._8_4_,auVar191._8_4_);
      auVar114._8_4_ = fVar202;
      fVar154 = unaff_XMM6._12_4_;
      auVar114._12_4_ = fVar154;
      auVar156._4_4_ = unaff_XMM6._0_4_;
      auVar156._0_4_ = auVar191._0_4_;
      auVar156._8_4_ = auVar191._4_4_;
      auVar156._12_4_ = unaff_XMM6._4_4_;
      unaff_XMM7 = insertps(auVar156,auVar133,0x28);
      local_128 = unaff_XMM7;
      local_118 = auVar84._8_8_;
      uStack_110 = (ulonglong)auVar133._4_4_;
      auVar39._8_4_ = fVar202;
      auVar39._0_8_ = auVar114._0_8_;
      auVar39._12_4_ = fVar154;
      local_108 = insertps(auVar39,auVar133,0xa8);
      local_f8 = auVar114._8_8_;
      uStack_f0 = auVar71._8_8_;
      auVar115 = insertps(auVar191,unaff_XMM6,0x1c);
      auVar115 = insertps(auVar115,auVar133,0x20);
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)iVar21 * 0x60);
      *pdVar2 = (double)auVar115._0_4_;
      pdVar2[1] = (double)auVar115._4_4_;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)iVar21 * 0x60);
      *pdVar2 = (double)auVar115._8_4_;
      pdVar2[1] = (double)auVar115._12_4_;
      auVar115 = insertps(unaff_XMM6,auVar191,0x4c);
      auVar115 = insertps(auVar115,auVar133,0x60);
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)auVar115._0_4_;
      pdVar2[1] = (double)auVar115._4_4_;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)auVar115._8_4_;
      pdVar2[1] = (double)auVar115._12_4_;
      local_228 = (int)uVar14;
      auVar192._8_8_ = uVar15;
      auVar192._0_8_ = auVar191._8_8_;
      auVar115 = insertps(auVar192,unaff_XMM6,0x94);
      auVar115 = blendps(auVar115,auVar133,4);
      unaff_XMM10._8_8_ = auVar115._8_8_;
      unaff_XMM10._0_8_ = unaff_XMM10._8_8_;
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar115._0_4_;
      pdVar2[1] = (double)auVar115._4_4_;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar115._8_4_;
      pdVar2[1] = (double)auVar115._12_4_;
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)iVar11 * 0x60);
      *pdVar2 = (double)fVar202;
      pdVar2[1] = (double)fVar154;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)iVar11 * 0x60);
      *pdVar2 = (double)fVar147;
      pdVar2[1] = (double)fVar111;
      uVar35 = uVar35 + 0x20;
      uVar30 = uVar30 + 4;
      _local_208 = auVar148;
    } while ((int)uVar30 < (int)(uVar24 & 0xfffffffc));
  }
  if ((int)param_9 <= (int)uVar30) {
    return;
  }
  auVar153._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar30) < (int)param_9);
  auVar153._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar30) < (int)param_9);
  auVar153._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar30) < (int)param_9);
  auVar153._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar30) < (int)param_9);
  auVar49._0_4_ = uVar30 << 3;
  auVar49._4_4_ = uVar30 << 3;
  auVar49._8_4_ = uVar30 << 3;
  auVar49._12_4_ = uVar30 << 3;
  auVar49 = auVar49 & auVar153;
  auVar157 = ___xmm_00000018000000100000000800000000 & auVar153;
  lVar27 = auVar49._4_4_ + param_2;
  lVar33 = auVar49._8_4_ + param_2;
  lVar32 = auVar49._12_4_ + param_2;
  uVar213 = *(undefined4 *)(param_2 + auVar49._0_4_);
  uVar214 = *(undefined4 *)((ulonglong)auVar157._4_4_ + lVar27);
  uVar7 = *(undefined4 *)((ulonglong)auVar157._8_4_ + lVar33);
  auVar42 = ___xmm_0000001c000000140000000c00000004 & auVar153;
  auVar50._0_4_ = *(int *)((ulonglong)auVar42._0_4_ + param_2 + auVar49._0_4_) << 4;
  auVar50._4_4_ = *(int *)((ulonglong)auVar42._4_4_ + lVar27) << 4;
  auVar50._8_4_ = *(int *)((ulonglong)auVar42._8_4_ + lVar33) << 4;
  auVar50._12_4_ = *(int *)((ulonglong)auVar42._12_4_ + lVar32) << 4;
  auVar50 = auVar50 & auVar153;
  lVar27 = param_3 + auVar50._0_4_;
  uVar31 = *(undefined4 *)(param_3 + auVar50._8_4_);
  uVar23 = *(undefined4 *)(param_3 + auVar50._12_4_);
  auVar187._4_4_ = *(undefined4 *)(param_3 + auVar50._4_4_);
  auVar187._0_4_ = *(undefined4 *)(param_3 + auVar50._0_4_);
  auVar187._12_4_ = uVar23;
  auVar187._8_4_ = uVar31;
  auVar115 = ___xmm_00000004000000040000000400000004 & auVar153;
  uVar25 = (ulonglong)auVar115._4_4_;
  iVar112 = *(int *)((ulonglong)auVar115._0_4_ + lVar27);
  iVar128 = *(int *)(uVar25 + param_3 + auVar50._4_4_);
  auVar140._4_4_ = iVar128;
  auVar140._0_4_ = iVar112;
  iVar129 = *(int *)((ulonglong)auVar115._8_4_ + param_3 + auVar50._8_4_);
  iVar131 = *(int *)((ulonglong)auVar115._12_4_ + param_3 + auVar50._12_4_);
  auVar140._12_4_ = iVar131;
  auVar140._8_4_ = iVar129;
  auVar148 = (undefined1  [16])0x0;
  auVar164._4_4_ = uVar23;
  auVar164._0_4_ = uVar31;
  auVar164._8_8_ = 0;
  auVar92._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar112);
  auVar92._4_4_ = -(uint)(_UNK_150631da4 < iVar128);
  auVar92._8_4_ = -(uint)(_UNK_150631da8 < iVar129);
  auVar92._12_4_ = -(uint)(_UNK_150631dac < iVar131);
  iVar21 = movmskps(uVar31,~auVar92 & auVar153);
  auVar42 = ZEXT816(0);
  if ((iVar21 == 0) ||
     (uVar31 = movmskps((int)lVar27,auVar153), auVar42 = ~auVar92 & auVar153,
     (char)uVar31 != (char)iVar21)) {
    uVar24 = auVar42._0_4_ ^ 0xffffffff;
    uVar99 = auVar42._0_8_ ^ 0xffffffffffffffff;
    uVar30 = auVar42._8_4_ ^ 0xffffffff;
    uVar19 = auVar42._12_4_ ^ 0xffffffff;
    auVar178 = ZEXT816(0);
    auVar42 = ZEXT816(0);
    if (0.0 < param_6) {
      auVar139._0_4_ = iVar112 + -1;
      auVar139._4_4_ = iVar128 + -1;
      auVar139._8_4_ = iVar129 + -1;
      auVar139._12_4_ = iVar131 + -1;
      uVar35 = (uint)(uVar99 >> 0x20);
      if (__real_3f800000 <= param_6) {
        auVar53._0_4_ = uVar24 & auVar153._0_4_;
        auVar53._4_4_ = uVar35 & auVar153._4_4_;
        auVar53._8_4_ = uVar30 & auVar153._8_4_;
        auVar53._12_4_ = uVar19 & auVar153._12_4_;
        auVar148 = blendvps((undefined1  [16])0x0,auVar139,auVar53);
        auVar42 = auVar148;
      }
      else {
        auVar211._4_4_ = param_6;
        auVar211._0_4_ = param_6;
        auVar211._8_4_ = param_6;
        auVar211._12_4_ = param_6;
        auVar195._0_4_ = (float)auVar139._0_4_ * param_6;
        auVar195._4_4_ = (float)auVar139._4_4_ * param_6;
        auVar195._8_4_ = (float)auVar139._8_4_ * param_6;
        auVar195._12_4_ = (float)auVar139._12_4_ * param_6;
        auVar52._0_4_ = uVar24 & auVar153._0_4_;
        auVar52._4_4_ = uVar35 & auVar153._4_4_;
        auVar52._8_4_ = uVar30 & auVar153._8_4_;
        auVar52._12_4_ = uVar19 & auVar153._12_4_;
        auVar42 = roundps(auVar211,auVar195,9);
        iVar112 = (int)auVar42._0_4_;
        iVar128 = (int)auVar42._4_4_;
        iVar129 = (int)auVar42._8_4_;
        iVar131 = (int)auVar42._12_4_;
        auVar179._0_4_ =
             (uint)(auVar139._0_4_ < iVar112) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar112) * iVar112;
        auVar179._4_4_ =
             (uint)(auVar139._4_4_ < iVar128) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar128) * iVar128;
        auVar179._8_4_ =
             (uint)(auVar139._8_4_ < iVar129) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar129) * iVar129;
        auVar179._12_4_ =
             (uint)(auVar139._12_4_ < iVar131) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar131) * iVar131;
        auVar148 = blendvps((undefined1  [16])0x0,auVar179,auVar52);
        auVar178 = ZEXT816(0);
        if (param_7 != '\x01') {
          auVar178._4_4_ = auVar195._4_4_ - auVar42._4_4_;
          auVar178._0_4_ = auVar195._0_4_ - auVar42._0_4_;
          auVar178._8_4_ = auVar195._8_4_ - auVar42._8_4_;
          auVar178._12_4_ = auVar195._12_4_ - auVar42._12_4_;
        }
        unaff_XMM10._8_4_ = 0xffffffff;
        unaff_XMM10._0_8_ = 0xffffffffffffffff;
        unaff_XMM10._12_4_ = 0xffffffff;
        iVar112 = auVar148._0_4_ + 1;
        iVar128 = auVar148._4_4_ + 1;
        iVar129 = auVar148._8_4_ + 1;
        iVar131 = auVar148._12_4_ + 1;
        auVar212._0_4_ =
             (uint)(auVar139._0_4_ < iVar112) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar112) * iVar112;
        auVar212._4_4_ =
             (uint)(auVar139._4_4_ < iVar128) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar128) * iVar128;
        auVar212._8_4_ =
             (uint)(auVar139._8_4_ < iVar129) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar129) * iVar129;
        auVar212._12_4_ =
             (uint)(auVar139._12_4_ < iVar131) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar131) * iVar131;
        auVar42 = blendvps(ZEXT816(0),auVar212,auVar52);
      }
    }
    auVar51._8_4_ = uVar30;
    auVar51._0_8_ = uVar99;
    auVar51._12_4_ = uVar19;
    auVar140 = blendvps((undefined1  [16])0x0,auVar178,auVar51);
    _local_208 = auVar140;
  }
  else {
    auVar51 = ZEXT816(0);
    auVar42 = ZEXT816(0);
    _local_208 = auVar51;
  }
  uVar31 = *(undefined4 *)((ulonglong)auVar157._12_4_ + lVar32);
  auVar157 = pmovsxdq(auVar51,auVar164);
  iVar112 = -(uint)(param_8 == 3);
  auVar54._4_4_ = iVar112;
  auVar54._0_4_ = iVar112;
  auVar54._8_4_ = iVar112;
  auVar54._12_4_ = iVar112;
  auVar203 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar92 & auVar54);
  auVar222 = pmovsxdq(unaff_XMM12,auVar187);
  auVar165 = (undefined1  [16])0x0;
  auVar141 = pmovsxdq(auVar140,auVar203);
  auVar101._8_8_ = auVar203._8_8_;
  auVar101._0_8_ = auVar101._8_8_;
  auVar203 = pmovsxdq(auVar92 & auVar54,auVar101);
  auVar229._4_4_ = iVar22;
  auVar229._0_4_ = iVar22;
  auVar229._8_4_ = iVar22;
  auVar229._12_4_ = iVar22;
  auVar93 = pmulld(auVar148,auVar229);
  auVar215 = pmovsxdq(auVar203,auVar93);
  auVar94._8_4_ = auVar93._8_4_;
  auVar94._12_4_ = auVar93._12_4_;
  auVar94._0_8_ = auVar93._8_8_;
  auVar196 = pmovsxdq(unaff_XMM10,auVar94);
  lVar69 = auVar222._0_8_;
  lVar83 = auVar222._8_8_;
  lVar38 = auVar196._0_8_;
  lVar67 = auVar196._8_8_;
  lVar27 = auVar215._0_8_;
  lVar32 = auVar215._8_8_;
  lVar33 = auVar141._0_8_;
  lVar36 = auVar141._8_8_;
  local_278 = auVar203._0_8_;
  uStack_270 = auVar203._8_8_;
  local_258 = auVar157._0_8_;
  lStack_250 = auVar157._8_8_;
  if (param_8 < 2) {
    auVar167._0_8_ = (longlong)local_278 + local_258 + lVar38;
    auVar167._8_8_ = uStack_270 + lStack_250 + lVar67;
    auVar105._0_8_ = lVar33 + lVar69 + lVar27;
    auVar105._8_8_ = lVar36 + lVar83 + lVar32;
    auVar94 = pmovsxdq(auVar94,auVar153);
    auVar157 = blendvps(ZEXT816(0),auVar105,auVar94);
    auVar106._4_4_ = auVar153._8_4_;
    auVar106._0_4_ = auVar153._8_4_;
    auVar106._8_4_ = auVar153._12_4_;
    auVar106._12_4_ = auVar153._12_4_;
    auVar203 = blendvps(ZEXT816(0),auVar167,auVar106);
    lVar27 = param_4 + auVar157._0_8_;
    lVar32 = param_4 + auVar157._8_8_;
    lVar38 = param_4 + auVar203._0_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar94);
    auVar215 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar106);
    uVar25 = param_4 + auVar203._8_8_;
    auVar93 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar94);
    auVar196 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar106);
    uVar24 = movmskps(iVar112,auVar153);
    auVar182 = ZEXT416(*(uint *)(param_4 + auVar157._0_8_));
    if ((uVar24 & 2) == 0) {
      auVar102 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar27));
      auVar165 = ZEXT416(*(uint *)(auVar93._0_8_ + lVar27));
    }
    else {
      auVar182 = insertps(auVar182,*(undefined4 *)(param_4 + auVar157._8_8_),0x10);
      auVar102 = insertps(ZEXT416(*(uint *)(auVar115._0_8_ + lVar27)),
                          *(undefined4 *)(auVar115._8_8_ + lVar32),0x10);
      auVar165 = insertps(ZEXT416(*(uint *)(auVar93._0_8_ + lVar27)),
                          *(undefined4 *)(auVar93._8_8_ + lVar32),0x10);
    }
    if ((uVar24 & 4) != 0) {
      auVar182 = insertps(auVar182,*(undefined4 *)(param_4 + auVar203._0_8_),0x20);
      auVar102 = insertps(auVar102,*(undefined4 *)(auVar215._0_8_ + lVar38),0x20);
      auVar165 = insertps(auVar165,*(undefined4 *)(auVar196._0_8_ + lVar38),0x20);
    }
    if ((char)((char)uVar24 << 4) >> 4 < '\0') {
      auVar182 = insertps(auVar182,*(undefined4 *)(param_4 + auVar203._8_8_),0x30);
      auVar102 = insertps(auVar102,*(undefined4 *)(auVar215._8_8_ + uVar25),0x30);
      auVar165 = insertps(auVar165,*(undefined4 *)(auVar196._8_8_ + uVar25),0x30);
    }
  }
  else if (param_8 == 2) {
    auVar107._0_8_ = lVar33 + lVar69 + lVar27;
    auVar107._8_8_ = lVar36 + lVar83 + lVar32;
    auVar115 = pmovsxdq(auVar94,auVar153);
    auVar203 = blendvps(ZEXT816(0),auVar107,auVar115);
    auVar168._0_8_ = (longlong)local_278 + local_258 + lVar38;
    auVar168._8_8_ = uStack_270 + lStack_250 + lVar67;
    auVar108._4_4_ = auVar153._8_4_;
    auVar108._0_4_ = auVar153._8_4_;
    auVar108._8_4_ = auVar153._12_4_;
    auVar108._12_4_ = auVar153._12_4_;
    auVar215 = blendvps((undefined1  [16])0x0,auVar168,auVar108);
    lVar27 = param_4 + auVar203._0_8_;
    lVar32 = param_4 + auVar203._8_8_;
    lVar38 = param_4 + auVar215._0_8_;
    uVar25 = auVar215._8_8_;
    auVar157 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar115);
    auVar93 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar108);
    auVar169._2_2_ = *(undefined2 *)(auVar157._8_8_ + lVar32);
    auVar169._0_2_ = *(undefined2 *)(auVar157._0_8_ + lVar27);
    auVar169._4_2_ = *(undefined2 *)(auVar93._0_8_ + lVar38);
    auVar169._6_2_ = *(undefined2 *)(auVar93._8_8_ + param_4 + uVar25);
    auVar169._8_8_ = 0;
    auVar157 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar115);
    auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar108);
    auVar56._2_2_ = *(undefined2 *)(auVar157._8_8_ + lVar32);
    auVar56._0_2_ = *(undefined2 *)(auVar157._0_8_ + lVar27);
    auVar56._4_2_ = *(undefined2 *)(auVar115._0_8_ + lVar38);
    auVar56._6_2_ = *(undefined2 *)(auVar115._8_8_ + param_4 + uVar25);
    auVar56._8_8_ = 0;
    auVar115 = pmovzxwd(auVar115,auVar169);
    auVar109._0_4_ = (float)(auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar109._4_4_ = (float)(auVar115._4_4_ + _UNK_151c6b8e4);
    auVar109._8_4_ = (float)(auVar115._8_4_ + _UNK_151c6b8e8);
    auVar109._12_4_ = (float)(auVar115._12_4_ + _UNK_151c6b8ec);
    auVar157 = divps(auVar109,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar115 = pmovzxwd(auVar56,auVar56);
    auVar170._0_4_ = (float)(auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar170._4_4_ = (float)(auVar115._4_4_ + _UNK_151c6b8e4);
    auVar170._8_4_ = (float)(auVar115._8_4_ + _UNK_151c6b8e8);
    auVar170._12_4_ = (float)(auVar115._12_4_ + _UNK_151c6b8ec);
    auVar115 = divps(auVar170,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar102._0_4_ = auVar157._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar102._4_4_ = auVar157._4_4_ * _UNK_151c6be64;
    auVar102._8_4_ = auVar157._8_4_ * _UNK_151c6be68;
    auVar102._12_4_ = auVar157._12_4_ * _UNK_151c6be6c;
    auVar197._2_2_ = *(undefined2 *)(param_4 + auVar203._8_8_);
    auVar197._0_2_ = *(undefined2 *)(param_4 + auVar203._0_8_);
    auVar197._4_2_ = *(undefined2 *)(param_4 + auVar215._0_8_);
    auVar165._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar165._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
    auVar165._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
    auVar165._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
    auVar197._6_2_ = *(undefined2 *)(param_4 + uVar25);
    auVar197._8_8_ = 0;
    auVar115 = pmovzxwd(auVar197,auVar197);
    auVar196._0_4_ = auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
    auVar196._4_4_ = auVar115._4_4_ + _UNK_151c6b8e4;
    auVar196._8_4_ = auVar115._8_4_ + _UNK_151c6b8e8;
    auVar196._12_4_ = auVar115._12_4_ + _UNK_151c6b8ec;
    auVar181._0_4_ = (float)auVar196._0_4_;
    auVar181._4_4_ = (float)auVar196._4_4_;
    auVar181._8_4_ = (float)auVar196._8_4_;
    auVar181._12_4_ = (float)auVar196._12_4_;
    auVar115 = divps(auVar181,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar182._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar182._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
    auVar182._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
    auVar182._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
    auVar94 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  }
  else {
    auVar102 = (undefined1  [16])0x0;
    auVar182 = ZEXT816(0);
    if (param_8 == 3) {
      auVar157 = auVar153 & auVar187;
      lVar113 = param_4 + auVar157._0_4_;
      lVar130 = param_4 + auVar157._4_4_;
      lVar132 = param_4 + auVar157._8_4_;
      lVar146 = param_4 + auVar157._12_4_;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)(uVar25 + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar93 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar115 = ___xmm_00000008000000080000000800000008 & auVar153;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar94 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar115 = ___xmm_00000010000000100000001000000010 & auVar153;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar115 = ___xmm_00000014000000140000001400000014 & auVar153;
      auVar141 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
      auVar141 = insertps(auVar141,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar141 = insertps(auVar141,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar223._0_8_ = (longlong)local_278 + local_258 + lVar38;
      auVar223._8_8_ = uStack_270 + lStack_250 + lVar67;
      auVar103._0_8_ = lVar33 + lVar69 + lVar27;
      auVar103._8_8_ = lVar36 + lVar83 + lVar32;
      auVar115 = pmovsxdq(auVar215,auVar153);
      auVar215 = blendvps((undefined1  [16])0x0,auVar103,auVar115);
      auVar55._4_4_ = auVar153._8_4_;
      auVar55._0_4_ = auVar153._8_4_;
      auVar55._8_4_ = auVar153._12_4_;
      auVar55._12_4_ = auVar153._12_4_;
      auVar115 = blendvps((undefined1  [16])0x0,auVar223,auVar55);
      uVar24 = *(uint *)(param_4 + auVar215._0_8_);
      uVar30 = *(uint *)(param_4 + auVar215._8_8_);
      uVar19 = *(uint *)(param_4 + auVar115._0_8_);
      uVar35 = *(uint *)(param_4 + auVar115._8_8_);
      auVar104._0_4_ =
           (float)(int)((uVar24 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar104._4_4_ = (float)(int)((uVar30 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar104._8_4_ = (float)(int)((uVar19 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar104._12_4_ = (float)(int)((uVar35 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar115 = divps(auVar104,___xmm_447fc000447fc000447fc000447fc000);
      auVar102._0_4_ = auVar115._0_4_ * auVar203._0_4_ + auVar93._0_4_;
      auVar102._4_4_ = auVar115._4_4_ * auVar203._4_4_ + auVar93._4_4_;
      auVar102._8_4_ = auVar115._8_4_ * auVar203._8_4_ + auVar93._8_4_;
      auVar102._12_4_ = auVar115._12_4_ * auVar203._12_4_ + auVar93._12_4_;
      auVar166._0_4_ = (float)(int)((uVar24 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar166._4_4_ = (float)(int)((uVar30 >> 0x15) + _UNK_151c6b864);
      auVar166._8_4_ = (float)(int)((uVar19 >> 0x15) + _UNK_151c6b868);
      auVar166._12_4_ = (float)(int)((uVar35 >> 0x15) + _UNK_151c6b86c);
      auVar115 = divps(auVar166,___xmm_447fc000447fc000447fc000447fc000);
      auVar203 = insertps(ZEXT416(*(uint *)(param_4 + auVar157._0_4_)),
                          *(undefined4 *)(param_4 + auVar157._4_4_),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)(param_4 + auVar157._8_4_),0x20);
      auVar196 = insertps(auVar203,*(undefined4 *)(param_4 + auVar157._12_4_),0x30);
      auVar157 = ___xmm_0000000c0000000c0000000c0000000c & auVar153;
      uVar25 = (ulonglong)auVar157._8_4_;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar157._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar157._4_4_ + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)(uVar25 + lVar132),0x20);
      auVar157 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar157._12_4_ + lVar146),0x30);
      auVar165._0_4_ = auVar115._0_4_ * auVar141._0_4_ + auVar94._0_4_;
      auVar165._4_4_ = auVar115._4_4_ * auVar141._4_4_ + auVar94._4_4_;
      auVar165._8_4_ = auVar115._8_4_ * auVar141._8_4_ + auVar94._8_4_;
      auVar165._12_4_ = auVar115._12_4_ * auVar141._12_4_ + auVar94._12_4_;
      auVar180._0_4_ =
           (float)(int)((uVar24 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar180._4_4_ = (float)(int)((uVar30 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar180._8_4_ = (float)(int)((uVar19 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar180._12_4_ = (float)(int)((uVar35 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar115 = divps(auVar180,___xmm_43ff800043ff800043ff800043ff8000);
      auVar182._0_4_ = auVar115._0_4_ * auVar157._0_4_ + auVar196._0_4_;
      auVar182._4_4_ = auVar115._4_4_ * auVar157._4_4_ + auVar196._4_4_;
      auVar182._8_4_ = auVar115._8_4_ * auVar157._8_4_ + auVar196._8_4_;
      auVar182._12_4_ = auVar115._12_4_ * auVar157._12_4_ + auVar196._12_4_;
    }
  }
  auVar78._0_4_ = -(uint)(auVar148._0_4_ == auVar42._0_4_);
  auVar78._4_4_ = -(uint)(auVar148._4_4_ == auVar42._4_4_);
  auVar78._8_4_ = -(uint)(auVar148._8_4_ == auVar42._8_4_);
  auVar78._12_4_ = -(uint)(auVar148._12_4_ == auVar42._12_4_);
  auVar115 = ~auVar78 & auVar153;
  iVar22 = movmskps((int)uVar25,auVar115);
  if (iVar22 == 0) {
    uVar23 = 0;
    goto LAB_140b09dc8;
  }
  bVar26 = (char)((char)iVar22 << 4) >> 4;
  uVar23 = CONCAT31((int3)((uint)iVar22 >> 8),bVar26);
  auVar157 = pmulld(auVar229,auVar42);
  auVar42 = pmovsxdq(auVar196,auVar157);
  auVar57._0_8_ = auVar157._8_8_;
  auVar57._8_4_ = auVar157._8_4_;
  auVar57._12_4_ = auVar157._12_4_;
  auVar157 = pmovsxdq(auVar157,auVar57);
  uVar82 = auVar115._8_4_;
  auVar79._12_4_ = auVar115._12_4_;
  lVar27 = auVar42._0_8_;
  lVar32 = auVar42._8_8_;
  lVar38 = auVar157._0_8_;
  lVar67 = auVar157._8_8_;
  if (param_8 < 2) {
    auVar231._0_8_ = lVar38 + local_258 + (longlong)local_278;
    auVar231._8_8_ = lVar67 + lStack_250 + uStack_270;
    auVar199._0_8_ = lVar27 + lVar69 + lVar33;
    auVar199._8_8_ = lVar32 + lVar83 + lVar36;
    auVar42 = pmovsxdq(auVar94,auVar115);
    auVar148 = blendvps(ZEXT816(0),auVar199,auVar42);
    auVar79._4_4_ = uVar82;
    auVar79._0_4_ = uVar82;
    auVar79._8_4_ = auVar79._12_4_;
    auVar115 = blendvps(ZEXT816(0),auVar231,auVar79);
    lVar27 = param_4 + auVar148._0_8_;
    lVar32 = param_4 + auVar148._8_8_;
    lVar33 = param_4 + auVar115._0_8_;
    auVar215 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar42);
    auVar157 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar79);
    lVar36 = param_4 + auVar115._8_8_;
    auVar203 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar42);
    auVar42 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar79);
    auVar58 = ZEXT416(*(uint *)(param_4 + auVar148._0_8_));
    if ((bVar26 & 2) == 0) {
      auVar95 = ZEXT416(*(uint *)(auVar215._0_8_ + lVar27));
      auVar225 = ZEXT416(*(uint *)(auVar203._0_8_ + lVar27));
    }
    else {
      auVar58 = insertps(auVar58,*(undefined4 *)(param_4 + auVar148._8_8_),0x10);
      auVar95 = insertps(ZEXT416(*(uint *)(auVar215._0_8_ + lVar27)),
                         *(undefined4 *)(auVar215._8_8_ + lVar32),0x10);
      auVar225 = insertps(ZEXT416(*(uint *)(auVar203._0_8_ + lVar27)),
                          *(undefined4 *)(auVar203._8_8_ + lVar32),0x10);
    }
    if ((bVar26 & 4) != 0) {
      auVar58 = insertps(auVar58,*(undefined4 *)(param_4 + auVar115._0_8_),0x20);
      auVar95 = insertps(auVar95,*(undefined4 *)(auVar157._0_8_ + lVar33),0x20);
      auVar225 = insertps(auVar225,*(undefined4 *)(auVar42._0_8_ + lVar33),0x20);
    }
    if ((char)bVar26 < '\0') {
      auVar58 = insertps(auVar58,*(undefined4 *)(param_4 + auVar115._8_8_),0x30);
      auVar95 = insertps(auVar95,*(undefined4 *)(auVar157._8_8_ + lVar36),0x30);
      auVar225 = insertps(auVar225,*(undefined4 *)(auVar42._8_8_ + lVar36),0x30);
    }
  }
  else if (param_8 == 2) {
    auVar200._0_8_ = lVar27 + lVar69 + lVar33;
    auVar200._8_8_ = lVar32 + lVar83 + lVar36;
    auVar42 = pmovsxdq(auVar94,auVar115);
    auVar157 = blendvps((undefined1  [16])0x0,auVar200,auVar42);
    auVar232._0_8_ = lVar38 + local_258 + (longlong)local_278;
    auVar232._8_8_ = lVar67 + lStack_250 + uStack_270;
    auVar80._4_4_ = uVar82;
    auVar80._0_4_ = uVar82;
    auVar80._8_4_ = auVar79._12_4_;
    auVar80._12_4_ = auVar79._12_4_;
    auVar148 = blendvps(ZEXT816(0),auVar232,auVar80);
    lVar27 = param_4 + auVar157._0_8_;
    lVar32 = param_4 + auVar157._8_8_;
    lVar33 = param_4 + auVar148._0_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar42);
    auVar203 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar80);
    auVar142._2_2_ = *(undefined2 *)(auVar115._8_8_ + lVar32);
    auVar142._0_2_ = *(undefined2 *)(auVar115._0_8_ + lVar27);
    auVar142._4_2_ = *(undefined2 *)(auVar203._0_8_ + lVar33);
    lVar36 = param_4 + auVar148._8_8_;
    auVar142._6_2_ = *(undefined2 *)(auVar203._8_8_ + lVar36);
    auVar142._8_8_ = 0;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar42);
    auVar42 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar80);
    auVar61._2_2_ = *(undefined2 *)(auVar115._8_8_ + lVar32);
    auVar61._0_2_ = *(undefined2 *)(auVar115._0_8_ + lVar27);
    auVar61._4_2_ = *(undefined2 *)(auVar42._0_8_ + lVar33);
    auVar61._6_2_ = *(undefined2 *)(auVar42._8_8_ + lVar36);
    auVar61._8_8_ = 0;
    auVar42 = pmovzxwd(auVar80,auVar142);
    auVar97._0_4_ = (float)(auVar42._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar97._4_4_ = (float)(auVar42._4_4_ + _UNK_151c6b8e4);
    auVar97._8_4_ = (float)(auVar42._8_4_ + _UNK_151c6b8e8);
    auVar97._12_4_ = (float)(auVar42._12_4_ + _UNK_151c6b8ec);
    auVar115 = divps(auVar97,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar42 = pmovzxwd(auVar61,auVar61);
    auVar226._0_4_ = (float)(auVar42._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar226._4_4_ = (float)(auVar42._4_4_ + _UNK_151c6b8e4);
    auVar226._8_4_ = (float)(auVar42._8_4_ + _UNK_151c6b8e8);
    auVar226._12_4_ = (float)(auVar42._12_4_ + _UNK_151c6b8ec);
    auVar42 = divps(auVar226,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar95._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar95._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
    auVar95._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
    auVar95._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
    auVar62._2_2_ = *(undefined2 *)(param_4 + auVar157._8_8_);
    auVar62._0_2_ = *(undefined2 *)(param_4 + auVar157._0_8_);
    auVar62._4_2_ = *(undefined2 *)(param_4 + auVar148._0_8_);
    auVar225._0_4_ = auVar42._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar225._4_4_ = auVar42._4_4_ * _UNK_151c6be64;
    auVar225._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
    auVar225._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
    auVar62._6_2_ = *(undefined2 *)(param_4 + auVar148._8_8_);
    auVar62._8_8_ = 0;
    auVar42 = pmovzxwd(auVar62,auVar62);
    auVar63._0_4_ = (float)(auVar42._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar63._4_4_ = (float)(auVar42._4_4_ + _UNK_151c6b8e4);
    auVar63._8_4_ = (float)(auVar42._8_4_ + _UNK_151c6b8e8);
    auVar63._12_4_ = (float)(auVar42._12_4_ + _UNK_151c6b8ec);
    auVar42 = divps(auVar63,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar58._0_4_ = auVar42._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar58._4_4_ = auVar42._4_4_ * _UNK_151c6be64;
    auVar58._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
    auVar58._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
  }
  else {
    auVar225 = ZEXT816(0);
    auVar95 = (undefined1  [16])0x0;
    auVar58 = (undefined1  [16])0x0;
    if (param_8 == 3) {
      auVar42 = blendvps((undefined1  [16])0x0,auVar187,auVar115);
      uVar14 = extractps(auVar42,0);
      lVar113 = param_4 + (int)uVar14;
      uVar15 = extractps(auVar42,1);
      lVar130 = param_4 + (int)uVar15;
      uVar16 = extractps(auVar42,2);
      lVar132 = param_4 + (int)uVar16;
      uVar17 = extractps(auVar42,3);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar115);
      lVar146 = param_4 + (int)uVar17;
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar157 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar115);
      auVar93 = insertps(auVar157,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar157 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000010000000100000001000000010,auVar115);
      auVar157 = insertps(auVar157,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar148 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000014000000140000001400000014,auVar115);
      auVar215 = insertps(auVar148,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar203 = insertps(auVar42,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      auVar230._0_8_ = lVar38 + local_258 + (longlong)local_278;
      auVar230._8_8_ = lVar67 + lStack_250 + uStack_270;
      auVar198._0_8_ = lVar27 + lVar69 + lVar33;
      auVar198._8_8_ = lVar32 + lVar83 + lVar36;
      auVar42 = pmovsxdq(auVar115,auVar115);
      auVar42 = blendvps(ZEXT816(0),auVar198,auVar42);
      auVar59._4_4_ = uVar82;
      auVar59._0_4_ = uVar82;
      auVar59._8_4_ = auVar79._12_4_;
      auVar59._12_4_ = auVar79._12_4_;
      auVar148 = blendvps(ZEXT816(0),auVar230,auVar59);
      uVar24 = *(uint *)(param_4 + auVar42._0_8_);
      uVar30 = *(uint *)(param_4 + auVar42._8_8_);
      uVar19 = *(uint *)(param_4 + auVar148._0_8_);
      uVar35 = *(uint *)(param_4 + auVar148._8_8_);
      auVar96._0_4_ =
           (float)(int)((uVar24 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar96._4_4_ = (float)(int)((uVar30 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar96._8_4_ = (float)(int)((uVar19 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar96._12_4_ = (float)(int)((uVar35 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar42 = divps(auVar96,___xmm_447fc000447fc000447fc000447fc000);
      auVar95._0_4_ = auVar42._0_4_ * auVar215._0_4_ + auVar93._0_4_;
      auVar95._4_4_ = auVar42._4_4_ * auVar215._4_4_ + auVar93._4_4_;
      auVar95._8_4_ = auVar42._8_4_ * auVar215._8_4_ + auVar93._8_4_;
      auVar95._12_4_ = auVar42._12_4_ * auVar215._12_4_ + auVar93._12_4_;
      auVar224._0_4_ = (float)(int)((uVar24 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar224._4_4_ = (float)(int)((uVar30 >> 0x15) + _UNK_151c6b864);
      auVar224._8_4_ = (float)(int)((uVar19 >> 0x15) + _UNK_151c6b868);
      auVar224._12_4_ = (float)(int)((uVar35 >> 0x15) + _UNK_151c6b86c);
      auVar215 = divps(auVar224,___xmm_447fc000447fc000447fc000447fc000);
      auVar42 = insertps(ZEXT416(*(uint *)(param_4 + (int)uVar14)),
                         *(undefined4 *)(param_4 + (int)uVar15),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_4 + (int)uVar16),0x20);
      auVar115 = blendvps((undefined1  [16])0x0,___xmm_0000000c0000000c0000000c0000000c,auVar115);
      auVar148 = insertps(auVar42,*(undefined4 *)(param_4 + (int)uVar17),0x30);
      uVar14 = extractps(auVar115,0);
      uVar17 = extractps(auVar115,1);
      uVar16 = extractps(auVar115,2);
      uVar15 = extractps(auVar115,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar14 + lVar113)),
                         *(undefined4 *)((int)uVar17 + lVar130),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)((int)uVar16 + lVar132),0x20);
      auVar115 = insertps(auVar42,*(undefined4 *)((int)uVar15 + lVar146),0x30);
      auVar225._0_4_ = auVar215._0_4_ * auVar203._0_4_ + auVar157._0_4_;
      auVar225._4_4_ = auVar215._4_4_ * auVar203._4_4_ + auVar157._4_4_;
      auVar225._8_4_ = auVar215._8_4_ * auVar203._8_4_ + auVar157._8_4_;
      auVar225._12_4_ = auVar215._12_4_ * auVar203._12_4_ + auVar157._12_4_;
      auVar60._0_4_ =
           (float)(int)((uVar24 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar60._4_4_ = (float)(int)((uVar30 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar60._8_4_ = (float)(int)((uVar19 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar60._12_4_ = (float)(int)((uVar35 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar42 = divps(auVar60,___xmm_43ff800043ff800043ff800043ff8000);
      auVar58._0_4_ = auVar42._0_4_ * auVar115._0_4_ + auVar148._0_4_;
      auVar58._4_4_ = auVar42._4_4_ * auVar115._4_4_ + auVar148._4_4_;
      auVar58._8_4_ = auVar42._8_4_ * auVar115._8_4_ + auVar148._8_4_;
      auVar58._12_4_ = auVar42._12_4_ * auVar115._12_4_ + auVar148._12_4_;
    }
  }
  auVar64._0_8_ =
       CONCAT44((auVar58._4_4_ - auVar182._4_4_) * (float)local_208._4_4_ + auVar182._4_4_,
                (auVar58._0_4_ - auVar182._0_4_) * (float)local_208._0_4_ + auVar182._0_4_);
  auVar64._8_4_ = (auVar58._8_4_ - auVar182._8_4_) * fStack_200 + auVar182._8_4_;
  auVar64._12_4_ = (auVar58._12_4_ - auVar182._12_4_) * fStack_1fc + auVar182._12_4_;
  bVar37 = (bVar26 & 1) == 0;
  auVar143 = auVar182;
  if (!bVar37) {
    auVar143._8_4_ = auVar64._8_4_;
    auVar143._0_8_ = auVar64._0_8_;
    auVar143._12_4_ = auVar64._12_4_;
  }
  auVar98._0_8_ =
       CONCAT44((auVar95._4_4_ - auVar102._4_4_) * (float)local_208._4_4_ + auVar102._4_4_,
                (auVar95._0_4_ - auVar102._0_4_) * (float)local_208._0_4_ + auVar102._0_4_);
  auVar98._8_4_ = (auVar95._8_4_ - auVar102._8_4_) * fStack_200 + auVar102._8_4_;
  auVar98._12_4_ = (auVar95._12_4_ - auVar102._12_4_) * fStack_1fc + auVar102._12_4_;
  auVar227._0_8_ =
       CONCAT44((auVar225._4_4_ - auVar165._4_4_) * (float)local_208._4_4_ + auVar165._4_4_,
                (auVar225._0_4_ - auVar165._0_4_) * (float)local_208._0_4_ + auVar165._0_4_);
  auVar227._8_4_ = (auVar225._8_4_ - auVar165._8_4_) * fStack_200 + auVar165._8_4_;
  auVar227._12_4_ = (auVar225._12_4_ - auVar165._12_4_) * fStack_1fc + auVar165._12_4_;
  if (bVar37) {
    auVar42 = blendps(auVar182,auVar143,1);
    auVar81 = auVar165;
    auVar201 = auVar102;
    if ((bVar26 & 2) != 0) goto LAB_140b09d48;
LAB_140b09cce:
    auVar157 = blendps(auVar102,auVar201,1);
    auVar172 = blendps(auVar165,auVar81,1);
    auVar42 = blendps(auVar42,auVar42,2);
    auVar144 = auVar157;
    auVar115 = auVar172;
    if ((bVar26 & 4) != 0) goto LAB_140b09cf9;
LAB_140b09d78:
    auVar157 = blendps(auVar157,auVar144,2);
    auVar171 = blendps(auVar115,auVar172,2);
    auVar42 = blendps(auVar42,auVar42,4);
    auVar145 = auVar157;
    auVar115 = auVar171;
    if (-1 < (char)bVar26) goto LAB_140b09d9c;
LAB_140b09d22:
    auVar157 = blendps(auVar157,auVar145,4);
    if (-1 < (char)bVar26) goto LAB_140b09d2a;
LAB_140b09da8:
    auVar115 = blendps(auVar115,auVar171,4);
  }
  else {
    auVar201._8_4_ = auVar98._8_4_;
    auVar201._0_8_ = auVar98._0_8_;
    auVar201._12_4_ = auVar98._12_4_;
    auVar81._8_4_ = auVar227._8_4_;
    auVar81._0_8_ = auVar227._0_8_;
    auVar81._12_4_ = auVar227._12_4_;
    auVar42 = blendps(auVar182,auVar143,1);
    if ((bVar26 & 2) == 0) goto LAB_140b09cce;
LAB_140b09d48:
    auVar189._8_4_ = auVar64._8_4_;
    auVar189._0_8_ = auVar64._0_8_;
    auVar189._12_4_ = auVar64._12_4_;
    auVar157 = blendps(auVar102,auVar201,1);
    auVar144._8_4_ = auVar98._8_4_;
    auVar144._0_8_ = auVar98._0_8_;
    auVar144._12_4_ = auVar98._12_4_;
    auVar115 = blendps(auVar165,auVar81,1);
    auVar172._8_4_ = auVar227._8_4_;
    auVar172._0_8_ = auVar227._0_8_;
    auVar172._12_4_ = auVar227._12_4_;
    auVar42 = blendps(auVar42,auVar189,2);
    if ((bVar26 & 4) == 0) goto LAB_140b09d78;
LAB_140b09cf9:
    auVar188._8_4_ = auVar64._8_4_;
    auVar188._0_8_ = auVar64._0_8_;
    auVar188._12_4_ = auVar64._12_4_;
    auVar157 = blendps(auVar157,auVar144,2);
    auVar145._8_4_ = auVar98._8_4_;
    auVar145._0_8_ = auVar98._0_8_;
    auVar145._12_4_ = auVar98._12_4_;
    auVar115 = blendps(auVar115,auVar172,2);
    auVar171._8_4_ = auVar227._8_4_;
    auVar171._0_8_ = auVar227._0_8_;
    auVar171._12_4_ = auVar227._12_4_;
    auVar42 = blendps(auVar42,auVar188,4);
    if ((char)bVar26 < '\0') goto LAB_140b09d22;
LAB_140b09d9c:
    auVar64 = auVar42;
    auVar157 = blendps(auVar157,auVar145,4);
    auVar42 = auVar64;
    if ((char)bVar26 < '\0') goto LAB_140b09da8;
LAB_140b09d2a:
    auVar115 = blendps(auVar115,auVar171,4);
    auVar98 = auVar157;
  }
  if (-1 < (char)bVar26) {
    auVar227 = auVar115;
  }
  auVar182 = blendps(auVar42,auVar64,8);
  auVar102 = blendps(auVar157,auVar98,8);
  auVar165 = blendps(auVar115,auVar227,8);
LAB_140b09dc8:
  auVar65._0_8_ = auVar182._0_8_;
  auVar65._8_4_ = auVar182._4_4_;
  auVar65._12_4_ = auVar102._4_4_;
  auVar183._0_8_ = CONCAT44(auVar102._8_4_,auVar182._8_4_);
  auVar183._8_4_ = auVar182._12_4_;
  auVar183._12_4_ = auVar102._12_4_;
  auVar110._4_4_ = auVar102._0_4_;
  auVar110._0_4_ = auVar182._0_4_;
  auVar110._8_4_ = auVar182._4_4_;
  auVar110._12_4_ = auVar102._4_4_;
  local_168 = insertps(auVar110,auVar165,0x28);
  local_158._8_4_ = auVar165._4_4_;
  local_158._0_8_ = auVar65._8_8_;
  local_158._12_4_ = 0;
  auVar66._8_4_ = auVar182._12_4_;
  auVar66._0_8_ = auVar183._0_8_;
  auVar66._12_4_ = auVar102._12_4_;
  local_148 = insertps(auVar66,auVar165,0xa8);
  local_138._8_4_ = auVar165._12_4_;
  local_138._0_8_ = auVar183._8_8_;
  local_138._12_4_ = 0;
  uVar24 = movmskps(uVar23,auVar153);
  uVar25 = (ulonglong)uVar24;
  do {
    if (uVar25 == 0) {
      uVar24 = 0x40;
    }
    else {
      uVar24 = 0;
      for (uVar99 = uVar25; (uVar99 & 1) == 0; uVar99 = uVar99 >> 1 | 0x8000000000000000) {
        uVar24 = uVar24 + 1;
      }
    }
    bVar26 = (byte)uVar24 & 0x3f;
    local_178 = CONCAT44(uVar214,uVar213);
    uStack_170 = CONCAT44(uVar31,uVar7);
    uVar14 = *(undefined8 *)(local_168 + (ulonglong)(uVar24 << 4) + 8);
    uVar15 = *(undefined8 *)(local_168 + (uVar24 << 4));
    lVar27 = (longlong)*(int *)((longlong)&local_178 + (ulonglong)(uVar24 & 3) * 4) * 0x60;
    pdVar2 = (double *)(param_1 + 0x20 + lVar27);
    *pdVar2 = (double)(float)uVar15;
    pdVar2[1] = (double)(float)((ulonglong)uVar15 >> 0x20);
    pdVar2 = (double *)(param_1 + 0x30 + lVar27);
    *pdVar2 = (double)(float)uVar14;
    pdVar2[1] = (double)(float)((ulonglong)uVar14 >> 0x20);
    uVar25 = uVar25 & (-2L << bVar26 | 0xfffffffffffffffeU >> 0x40 - bVar26);
  } while (uVar25 != 0);
  return;
}

// GetConstantKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CunfCunfCunTCuniCuni_sse4 @ 140b09f00

/* WARNING: Removing unreachable block (ram,0x000140b0a9ad) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CunfCunfCunTCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
               undefined8 param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  ulonglong uVar24;
  byte bVar25;
  longlong lVar26;
  undefined8 uVar27;
  uint uVar28;
  int iVar29;
  undefined4 uVar30;
  longlong lVar31;
  undefined8 uVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  bool bVar36;
  longlong lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  longlong lVar66;
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
  longlong lVar67;
  undefined4 uVar79;
  undefined1 auVar68 [16];
  longlong lVar80;
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
  longlong lVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  longlong lVar97;
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
  int iVar98;
  longlong lVar99;
  int iVar128;
  undefined1 auVar101 [16];
  int iVar127;
  int iVar130;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  longlong lVar129;
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
  ulonglong uVar100;
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
  undefined1 auVar131 [16];
  longlong lVar132;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  longlong lVar145;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 unaff_XMM6 [16];
  float fVar152;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined4 uVar171;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined4 uVar172;
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
  undefined1 auVar173 [16];
  float fVar183;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  longlong lVar184;
  undefined1 unaff_XMM9 [16];
  longlong lVar194;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  float fVar228;
  undefined1 unaff_XMM15 [16];
  float fVar229;
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  longlong local_268;
  longlong lStack_260;
  undefined1 local_248 [16];
  int local_228;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  iVar19 = *(int *)(&DAT_151c6be40 + (longlong)(int)param_9 * 4) *
           *(int *)(&DAT_151c6be20 + (longlong)(int)param_9 * 4);
  uVar23 = param_10 + 3;
  if (-1 < (int)param_10) {
    uVar23 = param_10;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar28 = 0;
  }
  else {
    uVar20 = -(uint)(param_9 == 3);
    uVar28 = 0;
    unaff_XMM12._8_4_ = 0xffffffff;
    unaff_XMM12._0_8_ = 0xffffffffffffffff;
    unaff_XMM12._12_4_ = 0xffffffff;
    uVar34 = 0;
    do {
      piVar1 = (int *)(param_2 + (ulonglong)uVar34);
      iVar8 = *piVar1;
      iVar9 = piVar1[2];
      puVar3 = (undefined8 *)(param_2 + 0x10 + (ulonglong)uVar34);
      uVar13 = *puVar3;
      iVar10 = *(int *)(puVar3 + 1);
      auVar103._4_4_ = piVar1[3];
      auVar103._0_4_ = piVar1[1];
      auVar103._8_4_ = *(undefined4 *)((longlong)puVar3 + 4);
      auVar103._12_4_ = *(undefined4 *)((longlong)puVar3 + 0xc);
      auVar39._4_4_ = param_4 << 2;
      auVar39._0_4_ = param_4 << 2;
      auVar39._8_4_ = param_4 << 2;
      auVar39._12_4_ = param_4 << 2;
      auVar39 = pmulld(auVar103,auVar39);
      iVar29 = auVar39._12_4_;
      iVar98 = *(int *)(param_3 + 4 + (longlong)auVar39._0_4_);
      iVar127 = *(int *)(param_3 + 4 + (longlong)auVar39._4_4_);
      auVar83._4_4_ = iVar127;
      auVar83._0_4_ = iVar98;
      iVar128 = *(int *)(param_3 + 4 + (longlong)auVar39._8_4_);
      iVar130 = *(int *)(param_3 + 4 + (longlong)iVar29);
      auVar83._12_4_ = iVar130;
      auVar83._8_4_ = iVar128;
      auVar105._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar98);
      auVar105._4_4_ = -(uint)(_UNK_150631da4 < iVar127);
      auVar105._8_4_ = -(uint)(_UNK_150631da8 < iVar128);
      auVar105._12_4_ = -(uint)(_UNK_150631dac < iVar130);
      uVar21 = movmskps(iVar29,auVar105);
      if ((uVar21 ^ 0xf) == 0) {
        auVar103 = unaff_XMM12;
        if (0.0 < param_7) goto LAB_140b0a275;
LAB_140b0a2e1:
        auVar212 = ZEXT816(0);
        auVar154 = blendvps(local_248,auVar212,auVar103);
        auVar146 = blendvps(_local_208,auVar212,auVar103);
LAB_140b0a2fd:
        unaff_XMM15 = blendvps(unaff_XMM15,auVar212,auVar103);
      }
      else {
        auVar154._0_4_ = local_248._0_4_ & auVar105._0_4_;
        auVar154._4_4_ = local_248._4_4_ & auVar105._4_4_;
        auVar154._8_4_ = local_248._8_4_ & auVar105._8_4_;
        auVar154._12_4_ = local_248._12_4_ & auVar105._12_4_;
        auVar146._0_4_ = local_208._0_4_ & auVar105._0_4_;
        auVar146._4_4_ = local_208._4_4_ & auVar105._4_4_;
        auVar146._8_4_ = local_208._8_4_ & auVar105._8_4_;
        auVar146._12_4_ = local_208._12_4_ & auVar105._12_4_;
        auVar207._0_4_ = unaff_XMM15._0_4_ & auVar105._0_4_;
        auVar207._4_4_ = unaff_XMM15._4_4_ & auVar105._4_4_;
        auVar207._8_4_ = unaff_XMM15._8_4_ & auVar105._8_4_;
        auVar207._12_4_ = unaff_XMM15._12_4_ & auVar105._12_4_;
        unaff_XMM15 = auVar207;
        if ((char)(uVar21 ^ 0xf) != '\x0f') {
          auVar195._0_4_ = -(uint)(iVar98 < ___xmm_00000002000000020000000200000002);
          auVar195._4_4_ = -(uint)(iVar127 < _UNK_15066df64);
          auVar195._8_4_ = -(uint)(iVar128 < _UNK_15066df68);
          auVar195._12_4_ = -(uint)(iVar130 < _UNK_15066df6c);
          auVar103 = auVar195 ^ unaff_XMM12;
          _local_208 = auVar146;
          local_248 = auVar154;
          if (param_7 <= 0.0) goto LAB_140b0a2e1;
LAB_140b0a275:
          auVar83._0_4_ = iVar98 + unaff_XMM12._0_4_;
          auVar83._4_4_ = iVar127 + unaff_XMM12._4_4_;
          auVar83._8_4_ = iVar128 + unaff_XMM12._8_4_;
          auVar83._12_4_ = iVar130 + unaff_XMM12._12_4_;
          if (__real_3f800000 <= param_7) {
            auVar154 = blendvps(local_248,auVar83,auVar103);
            auVar146 = blendvps(_local_208,auVar83,auVar103);
            auVar212 = ZEXT816(0);
          }
          else {
            auVar134._0_4_ = (float)auVar83._0_4_ * param_7;
            auVar134._4_4_ = (float)auVar83._4_4_ * param_7;
            auVar134._8_4_ = (float)auVar83._8_4_ * param_7;
            auVar134._12_4_ = (float)auVar83._12_4_ * param_7;
            auVar146 = roundps(unaff_XMM6,auVar134,9);
            iVar98 = (int)auVar146._0_4_;
            iVar127 = (int)auVar146._4_4_;
            iVar128 = (int)auVar146._8_4_;
            iVar130 = (int)auVar146._12_4_;
            auVar102._0_4_ =
                 (uint)(auVar83._0_4_ < iVar98) * auVar83._0_4_ |
                 (uint)(auVar83._0_4_ >= iVar98) * iVar98;
            auVar102._4_4_ =
                 (uint)(auVar83._4_4_ < iVar127) * auVar83._4_4_ |
                 (uint)(auVar83._4_4_ >= iVar127) * iVar127;
            auVar102._8_4_ =
                 (uint)(auVar83._8_4_ < iVar128) * auVar83._8_4_ |
                 (uint)(auVar83._8_4_ >= iVar128) * iVar128;
            auVar102._12_4_ =
                 (uint)(auVar83._12_4_ < iVar130) * auVar83._12_4_ |
                 (uint)(auVar83._12_4_ >= iVar130) * iVar130;
            auVar154 = blendvps(local_248,auVar102,auVar103);
            auVar212 = ZEXT816(0);
            if (param_8 != '\x01') {
              auVar212._4_4_ = auVar134._4_4_ - auVar146._4_4_;
              auVar212._0_4_ = auVar134._0_4_ - auVar146._0_4_;
              auVar212._8_4_ = auVar134._8_4_ - auVar146._8_4_;
              auVar212._12_4_ = auVar134._12_4_ - auVar146._12_4_;
            }
            iVar98 = auVar154._0_4_ - unaff_XMM12._0_4_;
            iVar127 = auVar154._4_4_ - unaff_XMM12._4_4_;
            iVar128 = auVar154._8_4_ - unaff_XMM12._8_4_;
            iVar130 = auVar154._12_4_ - unaff_XMM12._12_4_;
            auVar135._0_4_ =
                 (uint)(auVar83._0_4_ < iVar98) * auVar83._0_4_ |
                 (uint)(auVar83._0_4_ >= iVar98) * iVar98;
            auVar135._4_4_ =
                 (uint)(auVar83._4_4_ < iVar127) * auVar83._4_4_ |
                 (uint)(auVar83._4_4_ >= iVar127) * iVar127;
            auVar135._8_4_ =
                 (uint)(auVar83._8_4_ < iVar128) * auVar83._8_4_ |
                 (uint)(auVar83._8_4_ >= iVar128) * iVar128;
            auVar135._12_4_ =
                 (uint)(auVar83._12_4_ < iVar130) * auVar83._12_4_ |
                 (uint)(auVar83._12_4_ >= iVar130) * iVar130;
            auVar146 = blendvps(_local_208,auVar135,auVar103);
          }
          goto LAB_140b0a2fd;
        }
      }
      iVar98 = *(int *)(param_3 + auVar39._0_4_);
      lVar31 = (longlong)iVar98;
      iVar127 = *(int *)(param_3 + auVar39._4_4_);
      lVar33 = (longlong)iVar127;
      iVar128 = *(int *)(param_3 + auVar39._8_4_);
      lVar26 = (longlong)iVar128;
      iVar130 = *(int *)(param_3 + iVar29);
      lVar35 = (longlong)iVar130;
      auVar131._4_4_ = iVar127;
      auVar131._0_4_ = iVar98;
      auVar131._12_4_ = iVar130;
      auVar131._8_4_ = iVar128;
      auVar40._4_4_ = iVar130;
      auVar40._0_4_ = iVar128;
      auVar40._8_8_ = 0;
      auVar83 = pmovsxdq(auVar83,auVar40);
      unaff_XMM9 = pmovsxdq(unaff_XMM9,auVar131);
      auVar68._0_8_ = CONCAT44(auVar105._4_4_ & uVar20,auVar105._0_4_ & uVar20);
      auVar68._8_4_ = auVar105._8_4_ & uVar20;
      auVar68._12_4_ = auVar105._12_4_ & uVar20;
      auVar133 = ZEXT816(0);
      auVar41._8_4_ = auVar68._8_4_;
      auVar41._0_8_ = auVar68._0_8_;
      auVar41._12_4_ = auVar68._12_4_;
      auVar103 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar41);
      auVar39 = pmovsxdq(auVar41,auVar103);
      auVar104._8_8_ = auVar103._8_8_;
      auVar104._0_8_ = auVar104._8_8_;
      auVar103 = pmovsxdq(auVar68,auVar104);
      auVar11._4_4_ = iVar19;
      auVar11._0_4_ = iVar19;
      auVar11._8_4_ = iVar19;
      auVar11._12_4_ = iVar19;
      auVar105 = pmulld(auVar154,auVar11);
      auVar207 = pmovsxdq(unaff_XMM12,auVar105);
      auVar106._8_4_ = auVar105._8_4_;
      auVar106._12_4_ = auVar105._12_4_;
      auVar106._0_8_ = auVar105._8_8_;
      auVar105 = pmovsxdq(unaff_XMM10,auVar106);
      lVar184 = unaff_XMM9._0_8_;
      lVar194 = unaff_XMM9._8_8_;
      lVar81 = auVar83._0_8_;
      lVar97 = auVar83._8_8_;
      lVar99 = auVar207._0_8_;
      lVar129 = auVar207._8_8_;
      lVar132 = auVar105._0_8_;
      lVar145 = auVar105._8_8_;
      lVar67 = auVar103._0_8_;
      lVar80 = auVar103._8_8_;
      lVar37 = auVar39._0_8_;
      lVar66 = auVar39._8_8_;
      if (param_9 < 2) {
        lVar132 = lVar67 + lVar81 + lVar132;
        lVar145 = lVar80 + lVar97 + lVar145;
        auVar106._0_8_ = lVar37 + lVar184 + lVar99;
        auVar106._8_8_ = lVar66 + lVar194 + lVar129;
        auVar105 = insertps(ZEXT416(*(uint *)(param_5 + auVar106._0_8_)),
                            *(undefined4 *)(param_5 + auVar106._8_8_),0x10);
        auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + lVar132),0x20);
        auVar173 = insertps(auVar105,*(undefined4 *)(param_5 + lVar145),0x30);
        auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 4 + auVar106._0_8_)),
                            *(undefined4 *)(param_5 + 4 + auVar106._8_8_),0x10);
        auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar132),0x20);
        unaff_XMM6 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar145),0x30);
        auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 8 + auVar106._0_8_)),
                            *(undefined4 *)(param_5 + 8 + auVar106._8_8_),0x10);
        auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 8 + lVar132),0x20);
        auVar133 = insertps(auVar105,*(undefined4 *)(param_5 + 8 + lVar145),0x30);
      }
      else if (param_9 == 2) {
        lVar132 = lVar67 + lVar81 + lVar132;
        lVar145 = lVar80 + lVar97 + lVar145;
        lVar99 = lVar37 + lVar184 + lVar99;
        lVar129 = lVar66 + lVar194 + lVar129;
        auVar107._2_2_ = *(undefined2 *)(param_5 + lVar129);
        auVar107._0_2_ = *(undefined2 *)(param_5 + lVar99);
        auVar107._4_2_ = *(undefined2 *)(param_5 + lVar132);
        auVar107._6_2_ = *(undefined2 *)(param_5 + lVar145);
        auVar107._8_8_ = 0;
        auVar137._2_2_ = *(undefined2 *)(param_5 + 2 + lVar129);
        auVar137._0_2_ = *(undefined2 *)(param_5 + 2 + lVar99);
        auVar137._4_2_ = *(undefined2 *)(param_5 + 2 + lVar132);
        auVar137._6_2_ = *(undefined2 *)(param_5 + 2 + lVar145);
        auVar137._8_8_ = 0;
        auVar155._2_2_ = *(undefined2 *)(param_5 + 4 + lVar129);
        auVar155._0_2_ = *(undefined2 *)(param_5 + 4 + lVar99);
        auVar155._4_2_ = *(undefined2 *)(param_5 + 4 + lVar132);
        auVar155._6_2_ = *(undefined2 *)(param_5 + 4 + lVar145);
        auVar155._8_8_ = 0;
        auVar105 = pmovzxwd(auVar107,auVar107);
        auVar108._0_4_ = auVar105._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar108._4_4_ = auVar105._4_4_ + _UNK_151c6b8e4;
        auVar108._8_4_ = auVar105._8_4_ + _UNK_151c6b8e8;
        auVar108._12_4_ = auVar105._12_4_ + _UNK_151c6b8ec;
        auVar176._0_4_ = (float)auVar108._0_4_;
        auVar176._4_4_ = (float)auVar108._4_4_;
        auVar176._8_4_ = (float)auVar108._8_4_;
        auVar176._12_4_ = (float)auVar108._12_4_;
        auVar207 = divps(auVar176,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar105 = pmovzxwd(auVar108,auVar137);
        auVar109._0_4_ = auVar105._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar109._4_4_ = auVar105._4_4_ + _UNK_151c6b8e4;
        auVar109._8_4_ = auVar105._8_4_ + _UNK_151c6b8e8;
        auVar109._12_4_ = auVar105._12_4_ + _UNK_151c6b8ec;
        auVar148._0_4_ = (float)auVar109._0_4_;
        auVar148._4_4_ = (float)auVar109._4_4_;
        auVar148._8_4_ = (float)auVar109._8_4_;
        auVar148._12_4_ = (float)auVar109._12_4_;
        auVar83 = divps(auVar148,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar105 = pmovzxwd(auVar109,auVar155);
        auVar138._0_4_ = (float)(auVar105._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar138._4_4_ = (float)(auVar105._4_4_ + _UNK_151c6b8e4);
        auVar138._8_4_ = (float)(auVar105._8_4_ + _UNK_151c6b8e8);
        auVar138._12_4_ = (float)(auVar105._12_4_ + _UNK_151c6b8ec);
        auVar105 = divps(auVar138,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar106._4_4_ = (int)_UNK_151c6be64;
        auVar106._0_4_ = (int)___xmm_43000000430000004300000043000000;
        auVar106._8_4_ = (int)_UNK_151c6be68;
        auVar106._12_4_ = (int)_UNK_151c6be6c;
        auVar173._0_4_ = auVar207._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar173._4_4_ = auVar207._4_4_ * _UNK_151c6be64;
        auVar173._8_4_ = auVar207._8_4_ * _UNK_151c6be68;
        auVar173._12_4_ = auVar207._12_4_ * _UNK_151c6be6c;
        unaff_XMM6._0_4_ = auVar83._0_4_ * ___xmm_43000000430000004300000043000000;
        unaff_XMM6._4_4_ = auVar83._4_4_ * _UNK_151c6be64;
        unaff_XMM6._8_4_ = auVar83._8_4_ * _UNK_151c6be68;
        unaff_XMM6._12_4_ = auVar83._12_4_ * _UNK_151c6be6c;
        auVar133._0_4_ = auVar105._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar133._4_4_ = auVar105._4_4_ * _UNK_151c6be64;
        auVar133._8_4_ = auVar105._8_4_ * _UNK_151c6be68;
        auVar133._12_4_ = auVar105._12_4_ * _UNK_151c6be6c;
      }
      else {
        unaff_XMM6 = ZEXT816(0);
        auVar173 = ZEXT816(0);
        if (param_9 == 3) {
          uVar21 = *(uint *)(param_5 + lVar37 + lVar184 + lVar99);
          uVar4 = *(uint *)(param_5 + lVar66 + lVar194 + lVar129);
          uVar5 = *(uint *)(param_5 + lVar67 + lVar81 + lVar132);
          uVar6 = *(uint *)(param_5 + lVar80 + lVar97 + lVar145);
          auVar105 = insertps(ZEXT416(*(uint *)(param_5 + lVar31)),*(undefined4 *)(param_5 + lVar33)
                              ,0x10);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + lVar26),0x20);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + lVar35),0x30);
          auVar83 = insertps(ZEXT416(*(uint *)(param_5 + 0xc + lVar31)),
                             *(undefined4 *)(param_5 + 0xc + lVar33),0x10);
          auVar83 = insertps(auVar83,*(undefined4 *)(param_5 + 0xc + lVar26),0x20);
          auVar83 = insertps(auVar83,*(undefined4 *)(param_5 + 0xc + lVar35),0x30);
          auVar195 = insertps(ZEXT416(*(uint *)(param_5 + 0x10 + lVar31)),
                              *(undefined4 *)(param_5 + 0x10 + lVar33),0x10);
          auVar175._0_4_ =
               (float)(int)((uVar21 & ___xmm_000003ff000003ff000003ff000003ff) +
                           ___xmm_fffffe01fffffe01fffffe01fffffe01);
          auVar175._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
          auVar175._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
          auVar175._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
          auVar207 = divps(auVar175,___xmm_43ff800043ff800043ff800043ff8000);
          auVar195 = insertps(auVar195,*(undefined4 *)(param_5 + 0x10 + lVar26),0x20);
          auVar173._0_4_ = auVar207._0_4_ * auVar83._0_4_ + auVar105._0_4_;
          auVar173._4_4_ = auVar207._4_4_ * auVar83._4_4_ + auVar105._4_4_;
          auVar173._8_4_ = auVar207._8_4_ * auVar83._8_4_ + auVar105._8_4_;
          auVar173._12_4_ = auVar207._12_4_ * auVar83._12_4_ + auVar105._12_4_;
          auVar195 = insertps(auVar195,*(undefined4 *)(param_5 + 0x10 + lVar35),0x30);
          auVar147._0_4_ =
               (float)(int)((uVar21 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                           ___xmm_fffffc01fffffc01fffffc01fffffc01);
          auVar147._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
          auVar147._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
          auVar147._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
          auVar83 = divps(auVar147,___xmm_447fc000447fc000447fc000447fc000);
          auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar31)),
                              *(undefined4 *)(param_5 + 4 + lVar33),0x10);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar26),0x20);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar35),0x30);
          auVar207 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar31)),
                              *(undefined4 *)(param_5 + 8 + lVar33),0x10);
          auVar207 = insertps(auVar207,*(undefined4 *)(param_5 + 8 + lVar26),0x20);
          unaff_XMM6._0_4_ = auVar83._0_4_ * auVar195._0_4_ + auVar105._0_4_;
          unaff_XMM6._4_4_ = auVar83._4_4_ * auVar195._4_4_ + auVar105._4_4_;
          unaff_XMM6._8_4_ = auVar83._8_4_ * auVar195._8_4_ + auVar105._8_4_;
          unaff_XMM6._12_4_ = auVar83._12_4_ * auVar195._12_4_ + auVar105._12_4_;
          auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 0x14 + lVar31)),
                              *(undefined4 *)(param_5 + 0x14 + lVar33),0x10);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 0x14 + lVar26),0x20);
          auVar195 = insertps(auVar105,*(undefined4 *)(param_5 + 0x14 + lVar35),0x30);
          auVar106._0_4_ = (uVar21 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01;
          auVar106._4_4_ = (uVar4 >> 0x15) + _UNK_151c6b864;
          auVar106._8_4_ = (uVar5 >> 0x15) + _UNK_151c6b868;
          auVar106._12_4_ = (uVar6 >> 0x15) + _UNK_151c6b86c;
          auVar136._0_4_ = (float)auVar106._0_4_;
          auVar136._4_4_ = (float)auVar106._4_4_;
          auVar136._8_4_ = (float)auVar106._8_4_;
          auVar136._12_4_ = (float)auVar106._12_4_;
          auVar105 = divps(auVar136,___xmm_447fc000447fc000447fc000447fc000);
          auVar83 = insertps(auVar207,*(undefined4 *)(param_5 + 8 + lVar35),0x30);
          auVar133._0_4_ = auVar105._0_4_ * auVar195._0_4_ + auVar83._0_4_;
          auVar133._4_4_ = auVar105._4_4_ * auVar195._4_4_ + auVar83._4_4_;
          auVar133._8_4_ = auVar105._8_4_ * auVar195._8_4_ + auVar83._8_4_;
          auVar133._12_4_ = auVar105._12_4_ * auVar195._12_4_ + auVar83._12_4_;
        }
      }
      unaff_XMM10._0_4_ = -(uint)(auVar154._0_4_ == auVar146._0_4_);
      unaff_XMM10._4_4_ = -(uint)(auVar154._4_4_ == auVar146._4_4_);
      unaff_XMM10._8_4_ = -(uint)(auVar154._8_4_ == auVar146._8_4_);
      unaff_XMM10._12_4_ = -(uint)(auVar154._12_4_ == auVar146._12_4_);
      uVar21 = movmskps(iVar128,unaff_XMM10);
      if ((uVar21 ^ 0xf) == 0) {
        unaff_XMM12._8_4_ = 0xffffffff;
        unaff_XMM12._0_8_ = 0xffffffffffffffff;
        unaff_XMM12._12_4_ = 0xffffffff;
      }
      else {
        bVar25 = (char)((char)(uVar21 ^ 0xf) << 4) >> 4;
        if (param_9 < 7) {
          auVar83 = unaff_XMM10 ^ ___xmm_ffffffffffffffffffffffffffffffff;
          auVar12._4_4_ = iVar19;
          auVar12._0_4_ = iVar19;
          auVar12._8_4_ = iVar19;
          auVar12._12_4_ = iVar19;
          auVar207 = pmulld(auVar146,auVar12);
          auVar105 = pmovsxdq(auVar106,auVar207);
          auVar208._8_4_ = auVar207._8_4_;
          auVar208._12_4_ = auVar207._12_4_;
          auVar208._0_8_ = auVar207._8_8_;
          auVar207 = pmovsxdq(auVar208,auVar208);
          lVar26 = auVar105._0_8_;
          lVar31 = auVar105._8_8_;
          lVar33 = auVar207._0_8_;
          lVar35 = auVar207._8_8_;
          uVar171 = auVar83._8_4_;
          uVar172 = auVar83._12_4_;
          switch(param_9) {
          case 0:
          case 1:
            auVar209._0_8_ = lVar33 + lVar81 + lVar67;
            auVar209._8_8_ = lVar35 + lVar97 + lVar80;
            auVar110._0_8_ = lVar26 + lVar184 + lVar37;
            auVar110._8_8_ = lVar31 + lVar194 + lVar66;
            auVar39 = pmovsxdq(auVar103,auVar83);
            auVar83 = blendvps((undefined1  [16])0x0,auVar110,auVar39);
            auVar84._4_4_ = uVar171;
            auVar84._0_4_ = uVar171;
            auVar84._8_4_ = uVar172;
            auVar84._12_4_ = uVar172;
            auVar103 = blendvps(ZEXT816(0),auVar209,auVar84);
            lVar26 = param_5 + auVar83._0_8_;
            lVar31 = param_5 + auVar83._8_8_;
            lVar33 = param_5 + auVar103._0_8_;
            lVar35 = param_5 + auVar103._8_8_;
            auVar195 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar39);
            auVar207 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar84);
            auVar105 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,
                                auVar39);
            auVar39 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar84
                              );
            if ((bVar25 & 1) != 0) {
              unaff_XMM11 = pblendw(unaff_XMM11,ZEXT416(*(uint *)(param_5 + auVar83._0_8_)),3);
              unaff_XMM13 = pblendw(unaff_XMM13,ZEXT416(*(uint *)(auVar195._0_8_ + lVar26)),3);
              unaff_XMM14 = pblendw(unaff_XMM14,ZEXT416(*(uint *)(auVar105._0_8_ + lVar26)),3);
            }
            unaff_XMM12._8_4_ = 0xffffffff;
            unaff_XMM12._0_8_ = 0xffffffffffffffff;
            unaff_XMM12._12_4_ = 0xffffffff;
            if ((bVar25 & 2) != 0) {
              unaff_XMM11 = insertps(unaff_XMM11,*(undefined4 *)(param_5 + auVar83._8_8_),0x10);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar195._8_8_ + lVar31),0x10);
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar105._8_8_ + lVar31),0x10);
            }
            if ((bVar25 & 4) != 0) {
              unaff_XMM11 = insertps(unaff_XMM11,*(undefined4 *)(param_5 + auVar103._0_8_),0x20);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar207._0_8_ + lVar33),0x20);
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar39._0_8_ + lVar33),0x20);
            }
            if ((char)bVar25 < '\0') {
              unaff_XMM11 = insertps(unaff_XMM11,*(undefined4 *)(param_5 + auVar103._8_8_),0x30);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar207._8_8_ + lVar35),0x30);
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar39._8_8_ + lVar35),0x30);
            }
            break;
          case 2:
            auVar210._0_8_ = lVar33 + lVar81 + lVar67;
            auVar210._8_8_ = lVar35 + lVar97 + lVar80;
            auVar111._0_8_ = lVar26 + lVar184 + lVar37;
            auVar111._8_8_ = lVar31 + lVar194 + lVar66;
            auVar39 = pmovsxdq(auVar103,auVar83);
            auVar83 = blendvps(ZEXT816(0),auVar111,auVar39);
            auVar85._4_4_ = uVar171;
            auVar85._0_4_ = uVar171;
            auVar85._8_4_ = uVar172;
            auVar85._12_4_ = uVar172;
            auVar105 = blendvps(ZEXT816(0),auVar210,auVar85);
            lVar26 = param_5 + auVar83._0_8_;
            lVar31 = param_5 + auVar83._8_8_;
            lVar33 = param_5 + auVar105._0_8_;
            lVar35 = param_5 + auVar105._8_8_;
            auVar207 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,
                                auVar39);
            auVar195 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,
                                auVar85);
            auVar212 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar39);
            auVar103 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar85);
            auVar42._0_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar83._0_8_) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar42._4_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar83._8_8_) + _UNK_151c6b8e4);
            auVar42._8_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar105._0_8_) + _UNK_151c6b8e8);
            auVar42._12_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar105._8_8_) + _UNK_151c6b8ec);
            auVar39 = divps(auVar42,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar43._0_8_ =
                 CONCAT44(auVar39._4_4_ * _UNK_151c6be64,
                          auVar39._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar43._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
            auVar43._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
            bVar36 = (bVar25 & 1) != 0;
            auVar112 = unaff_XMM11;
            if (bVar36) {
              auVar112._8_4_ = auVar43._8_4_;
              auVar112._0_8_ = auVar43._0_8_;
              auVar112._12_4_ = auVar43._12_4_;
            }
            auVar69._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar207._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar69._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar207._8_8_ + lVar31) + _UNK_151c6b8e4);
            auVar69._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar195._0_8_ + lVar33) + _UNK_151c6b8e8);
            auVar69._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar195._8_8_ + lVar35) + _UNK_151c6b8ec);
            auVar39 = divps(auVar69,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar86._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar212._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar86._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar212._8_8_ + lVar31) + _UNK_151c6b8e4);
            auVar86._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar103._0_8_ + lVar33) + _UNK_151c6b8e8);
            auVar86._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar103._8_8_ + lVar35) + _UNK_151c6b8ec);
            auVar103 = divps(auVar86,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar70._0_8_ =
                 CONCAT44(auVar39._4_4_ * _UNK_151c6be64,
                          auVar39._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar70._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
            auVar70._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
            auVar87._0_8_ =
                 CONCAT44(auVar103._4_4_ * _UNK_151c6be64,
                          auVar103._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar87._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
            auVar87._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
            unaff_XMM12._8_4_ = 0xffffffff;
            unaff_XMM12._0_8_ = 0xffffffffffffffff;
            unaff_XMM12._12_4_ = 0xffffffff;
            auVar156 = unaff_XMM14;
            auVar196 = unaff_XMM13;
            if (bVar36) {
              auVar196._8_4_ = auVar70._8_4_;
              auVar196._0_8_ = auVar70._0_8_;
              auVar196._12_4_ = auVar70._12_4_;
              auVar156._8_4_ = auVar87._8_4_;
              auVar156._0_8_ = auVar87._0_8_;
              auVar156._12_4_ = auVar87._12_4_;
            }
            auVar39 = blendps(unaff_XMM11,auVar112,1);
            bVar36 = (bVar25 & 2) == 0;
            auVar185 = auVar39;
            if (!bVar36) {
              auVar185._8_4_ = auVar43._8_4_;
              auVar185._0_8_ = auVar43._0_8_;
              auVar185._12_4_ = auVar43._12_4_;
            }
            auVar103 = blendps(unaff_XMM13,auVar196,1);
            if (bVar36) {
              auVar217 = blendps(unaff_XMM14,auVar156,1);
              auVar39 = blendps(auVar39,auVar185,2);
              auVar113 = auVar103;
              auVar105 = auVar217;
              if ((bVar25 & 4) != 0) goto LAB_140b0ac5a;
LAB_140b0acc0:
              auVar214 = blendps(auVar103,auVar113,2);
              auVar216 = blendps(auVar105,auVar217,2);
              auVar39 = blendps(auVar39,auVar39,4);
              auVar103 = auVar214;
              auVar105 = auVar216;
              if (-1 < (char)bVar25) goto LAB_140b0ace9;
LAB_140b0ac87:
              auVar103 = blendps(auVar103,auVar214,4);
              if (-1 < (char)bVar25) goto LAB_140b0ac90;
LAB_140b0acf6:
              auVar105 = blendps(auVar105,auVar216,4);
            }
            else {
              auVar113._8_4_ = auVar70._8_4_;
              auVar113._0_8_ = auVar70._0_8_;
              auVar113._12_4_ = auVar70._12_4_;
              auVar105 = blendps(unaff_XMM14,auVar156,1);
              auVar217._8_4_ = auVar87._8_4_;
              auVar217._0_8_ = auVar87._0_8_;
              auVar217._12_4_ = auVar87._12_4_;
              auVar39 = blendps(auVar39,auVar185,2);
              if ((bVar25 & 4) == 0) goto LAB_140b0acc0;
LAB_140b0ac5a:
              auVar186._8_4_ = auVar43._8_4_;
              auVar186._0_8_ = auVar43._0_8_;
              auVar186._12_4_ = auVar43._12_4_;
              auVar103 = blendps(auVar103,auVar113,2);
              auVar214._8_4_ = auVar70._8_4_;
              auVar214._0_8_ = auVar70._0_8_;
              auVar214._12_4_ = auVar70._12_4_;
              auVar105 = blendps(auVar105,auVar217,2);
              auVar216._8_4_ = auVar87._8_4_;
              auVar216._0_8_ = auVar87._0_8_;
              auVar216._12_4_ = auVar87._12_4_;
              auVar39 = blendps(auVar39,auVar186,4);
              if ((char)bVar25 < '\0') goto LAB_140b0ac87;
LAB_140b0ace9:
              auVar43 = auVar39;
              auVar103 = blendps(auVar103,auVar214,4);
              auVar39 = auVar43;
              if ((char)bVar25 < '\0') goto LAB_140b0acf6;
LAB_140b0ac90:
              auVar105 = blendps(auVar105,auVar216,4);
              auVar70 = auVar103;
            }
            if (-1 < (char)bVar25) {
              auVar87 = auVar105;
            }
            unaff_XMM11 = blendps(auVar39,auVar43,8);
            unaff_XMM13 = blendps(auVar103,auVar70,8);
            unaff_XMM14 = blendps(auVar105,auVar87,8);
            break;
          case 3:
            auVar131 = ~unaff_XMM10 & auVar131;
            lVar99 = param_5 + auVar131._0_4_;
            lVar129 = param_5 + auVar131._4_4_;
            auVar211._0_8_ = lVar33 + lVar81 + lVar67;
            auVar211._8_8_ = lVar35 + lVar97 + lVar80;
            auVar114._0_8_ = lVar26 + lVar184 + lVar37;
            auVar114._8_8_ = lVar31 + lVar194 + lVar66;
            auVar39 = pmovsxdq(auVar39,auVar83);
            auVar39 = blendvps((undefined1  [16])0x0,auVar114,auVar39);
            auVar44._4_4_ = uVar171;
            auVar44._0_4_ = uVar171;
            auVar44._8_4_ = uVar172;
            auVar44._12_4_ = uVar172;
            auVar103 = blendvps((undefined1  [16])0x0,auVar211,auVar44);
            lVar26 = param_5 + auVar131._8_4_;
            uVar21 = *(uint *)(param_5 + auVar39._0_8_);
            uVar4 = *(uint *)(param_5 + auVar39._8_8_);
            uVar5 = *(uint *)(param_5 + auVar103._0_8_);
            uVar6 = *(uint *)(param_5 + auVar103._8_8_);
            auVar39 = insertps(ZEXT416(*(uint *)(param_5 + auVar131._0_4_)),
                               *(undefined4 *)(param_5 + auVar131._4_4_),0x10);
            auVar39 = insertps(auVar39,*(undefined4 *)(param_5 + auVar131._8_4_),0x20);
            auVar103 = insertps(auVar39,*(undefined4 *)(param_5 + auVar131._12_4_),0x30);
            auVar39 = ~unaff_XMM10 & ___xmm_0000000c0000000c0000000c0000000c;
            auVar105 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            lVar31 = param_5 + auVar131._12_4_;
            auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar45._0_4_ =
                 (float)(int)((uVar21 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar45._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar45._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar45._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar39 = divps(auVar45,___xmm_43ff800043ff800043ff800043ff8000);
            auVar46._0_8_ =
                 CONCAT44(auVar39._4_4_ * auVar105._4_4_ + auVar103._4_4_,
                          auVar39._0_4_ * auVar105._0_4_ + auVar103._0_4_);
            auVar46._8_4_ = auVar39._8_4_ * auVar105._8_4_ + auVar103._8_4_;
            auVar46._12_4_ = auVar39._12_4_ * auVar105._12_4_ + auVar103._12_4_;
            bVar36 = (bVar25 & 1) != 0;
            auVar88 = unaff_XMM11;
            if (bVar36) {
              auVar88._8_4_ = auVar46._8_4_;
              auVar88._0_8_ = auVar46._0_8_;
              auVar88._12_4_ = auVar46._12_4_;
            }
            auVar39 = ~unaff_XMM10 & ___xmm_00000004000000040000000400000004;
            auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            auVar207 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar39 = ~unaff_XMM10 & ___xmm_00000008000000080000000800000008;
            auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            auVar83 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar39 = ~unaff_XMM10 & ___xmm_00000010000000100000001000000010;
            auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar105 = ~unaff_XMM10 & ___xmm_00000014000000140000001400000014;
            auVar39 = insertps(ZEXT416(*(uint *)((ulonglong)auVar105._0_4_ + lVar99)),
                               *(undefined4 *)((ulonglong)auVar105._4_4_ + lVar129),0x10);
            auVar39 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar105._8_4_ + lVar26),0x20);
            auVar105 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar105._12_4_ + lVar31),0x30);
            auVar71._0_4_ =
                 (float)(int)((uVar21 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar71._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar71._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar71._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar39 = divps(auVar71,___xmm_447fc000447fc000447fc000447fc000);
            auVar72._0_8_ =
                 CONCAT44(auVar39._4_4_ * auVar103._4_4_ + auVar207._4_4_,
                          auVar39._0_4_ * auVar103._0_4_ + auVar207._0_4_);
            auVar72._8_4_ = auVar39._8_4_ * auVar103._8_4_ + auVar207._8_4_;
            auVar72._12_4_ = auVar39._12_4_ * auVar103._12_4_ + auVar207._12_4_;
            auVar187._0_4_ =
                 (float)(int)((uVar21 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar187._4_4_ = (float)(int)((uVar4 >> 0x15) + _UNK_151c6b864);
            auVar187._8_4_ = (float)(int)((uVar5 >> 0x15) + _UNK_151c6b868);
            auVar187._12_4_ = (float)(int)((uVar6 >> 0x15) + _UNK_151c6b86c);
            auVar39 = divps(auVar187,___xmm_447fc000447fc000447fc000447fc000);
            auVar188._0_8_ =
                 CONCAT44(auVar39._4_4_ * auVar105._4_4_ + auVar83._4_4_,
                          auVar39._0_4_ * auVar105._0_4_ + auVar83._0_4_);
            auVar188._8_4_ = auVar39._8_4_ * auVar105._8_4_ + auVar83._8_4_;
            auVar188._12_4_ = auVar39._12_4_ * auVar105._12_4_ + auVar83._12_4_;
            unaff_XMM12._8_4_ = 0xffffffff;
            unaff_XMM12._0_8_ = 0xffffffffffffffff;
            unaff_XMM12._12_4_ = 0xffffffff;
            auVar115 = unaff_XMM14;
            auVar197 = unaff_XMM13;
            if (bVar36) {
              auVar197._8_4_ = auVar72._8_4_;
              auVar197._0_8_ = auVar72._0_8_;
              auVar197._12_4_ = auVar72._12_4_;
              auVar115._8_4_ = auVar188._8_4_;
              auVar115._0_8_ = auVar188._0_8_;
              auVar115._12_4_ = auVar188._12_4_;
            }
            auVar39 = blendps(unaff_XMM11,auVar88,1);
            bVar36 = (bVar25 & 2) == 0;
            auVar157 = auVar39;
            if (!bVar36) {
              auVar157._8_4_ = auVar46._8_4_;
              auVar157._0_8_ = auVar46._0_8_;
              auVar157._12_4_ = auVar46._12_4_;
            }
            auVar103 = blendps(unaff_XMM13,auVar197,1);
            if (bVar36) {
              auVar219 = blendps(unaff_XMM14,auVar115,1);
              auVar39 = blendps(auVar39,auVar157,2);
              auVar89 = auVar103;
              auVar105 = auVar219;
              if ((bVar25 & 4) != 0) goto LAB_140b0b03b;
LAB_140b0b0a2:
              auVar215 = blendps(auVar103,auVar89,2);
              auVar218 = blendps(auVar105,auVar219,2);
              auVar39 = blendps(auVar39,auVar39,4);
              auVar103 = auVar215;
              auVar105 = auVar218;
              if (-1 < (char)bVar25) goto LAB_140b0b0cb;
LAB_140b0b068:
              auVar103 = blendps(auVar103,auVar215,4);
              if (-1 < (char)bVar25) goto LAB_140b0b071;
LAB_140b0b0d8:
              auVar105 = blendps(auVar105,auVar218,4);
            }
            else {
              auVar89._8_4_ = auVar72._8_4_;
              auVar89._0_8_ = auVar72._0_8_;
              auVar89._12_4_ = auVar72._12_4_;
              auVar105 = blendps(unaff_XMM14,auVar115,1);
              auVar219._8_4_ = auVar188._8_4_;
              auVar219._0_8_ = auVar188._0_8_;
              auVar219._12_4_ = auVar188._12_4_;
              auVar39 = blendps(auVar39,auVar157,2);
              if ((bVar25 & 4) == 0) goto LAB_140b0b0a2;
LAB_140b0b03b:
              auVar158._8_4_ = auVar46._8_4_;
              auVar158._0_8_ = auVar46._0_8_;
              auVar158._12_4_ = auVar46._12_4_;
              auVar103 = blendps(auVar103,auVar89,2);
              auVar215._8_4_ = auVar72._8_4_;
              auVar215._0_8_ = auVar72._0_8_;
              auVar215._12_4_ = auVar72._12_4_;
              auVar105 = blendps(auVar105,auVar219,2);
              auVar218._8_4_ = auVar188._8_4_;
              auVar218._0_8_ = auVar188._0_8_;
              auVar218._12_4_ = auVar188._12_4_;
              auVar39 = blendps(auVar39,auVar158,4);
              if ((char)bVar25 < '\0') goto LAB_140b0b068;
LAB_140b0b0cb:
              auVar46 = auVar39;
              auVar103 = blendps(auVar103,auVar215,4);
              auVar39 = auVar46;
              if ((char)bVar25 < '\0') goto LAB_140b0b0d8;
LAB_140b0b071:
              auVar105 = blendps(auVar105,auVar218,4);
              auVar72 = auVar103;
            }
            if (-1 < (char)bVar25) {
              auVar188 = auVar105;
            }
            unaff_XMM11 = blendps(auVar39,auVar46,8);
            unaff_XMM13 = blendps(auVar103,auVar72,8);
            unaff_XMM14 = blendps(auVar105,auVar188,8);
            break;
          default:
            goto switchD_140b0a74a_caseD_4;
          }
        }
        else {
switchD_140b0a74a_caseD_4:
          bVar36 = (bVar25 & 1) != 0;
          if (bVar36) {
            unaff_XMM11 = blendps(unaff_XMM11,ZEXT816(0),1);
            unaff_XMM13 = blendps(unaff_XMM13,ZEXT816(0),1);
          }
          unaff_XMM12._8_4_ = 0xffffffff;
          unaff_XMM12._0_8_ = 0xffffffffffffffff;
          unaff_XMM12._12_4_ = 0xffffffff;
          auVar39 = ZEXT816(0);
          if (bVar36) {
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,1);
          }
          if ((bVar25 & 2) != 0) {
            unaff_XMM11 = blendps(unaff_XMM11,auVar39,2);
            unaff_XMM13 = blendps(unaff_XMM13,auVar39,2);
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,2);
          }
          if ((bVar25 & 4) != 0) {
            unaff_XMM11 = blendps(unaff_XMM11,auVar39,4);
            unaff_XMM13 = blendps(unaff_XMM13,auVar39,4);
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,4);
          }
          if ((char)bVar25 < '\0') {
            unaff_XMM11 = blendps(unaff_XMM11,auVar39,8);
            unaff_XMM13 = blendps(unaff_XMM13,auVar39,8);
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,8);
          }
        }
        fVar152 = unaff_XMM15._0_4_;
        fVar183 = unaff_XMM15._4_4_;
        fVar228 = unaff_XMM15._8_4_;
        fVar229 = unaff_XMM15._12_4_;
        auVar47._0_8_ =
             CONCAT44((unaff_XMM11._4_4_ - auVar173._4_4_) * fVar183 + auVar173._4_4_,
                      (unaff_XMM11._0_4_ - auVar173._0_4_) * fVar152 + auVar173._0_4_);
        auVar47._8_4_ = (unaff_XMM11._8_4_ - auVar173._8_4_) * fVar228 + auVar173._8_4_;
        auVar47._12_4_ = (unaff_XMM11._12_4_ - auVar173._12_4_) * fVar229 + auVar173._12_4_;
        bVar36 = (bVar25 & 1) == 0;
        auVar116 = auVar173;
        if (!bVar36) {
          auVar116._8_4_ = auVar47._8_4_;
          auVar116._0_8_ = auVar47._0_8_;
          auVar116._12_4_ = auVar47._12_4_;
        }
        auVar73._0_8_ =
             CONCAT44((unaff_XMM13._4_4_ - unaff_XMM6._4_4_) * fVar183 + unaff_XMM6._4_4_,
                      (unaff_XMM13._0_4_ - unaff_XMM6._0_4_) * fVar152 + unaff_XMM6._0_4_);
        auVar73._8_4_ = (unaff_XMM13._8_4_ - unaff_XMM6._8_4_) * fVar228 + unaff_XMM6._8_4_;
        auVar73._12_4_ = (unaff_XMM13._12_4_ - unaff_XMM6._12_4_) * fVar229 + unaff_XMM6._12_4_;
        auVar90._0_8_ =
             CONCAT44((unaff_XMM14._4_4_ - auVar133._4_4_) * fVar183 + auVar133._4_4_,
                      (unaff_XMM14._0_4_ - auVar133._0_4_) * fVar152 + auVar133._0_4_);
        auVar90._8_4_ = (unaff_XMM14._8_4_ - auVar133._8_4_) * fVar228 + auVar133._8_4_;
        auVar90._12_4_ = (unaff_XMM14._12_4_ - auVar133._12_4_) * fVar229 + auVar133._12_4_;
        if (bVar36) {
          auVar39 = blendps(auVar173,auVar116,1);
          auVar159 = auVar133;
          unaff_XMM10 = unaff_XMM6;
          if ((bVar25 & 2) != 0) goto LAB_140b0b205;
LAB_140b0b162:
          auVar149 = blendps(unaff_XMM6,unaff_XMM10,1);
          auVar105 = blendps(auVar133,auVar159,1);
          unaff_XMM9 = blendps(auVar39,auVar39,2);
          auVar103 = auVar149;
          auVar161 = auVar105;
          if ((bVar25 & 4) != 0) goto LAB_140b0b199;
LAB_140b0b240:
          auVar150 = blendps(auVar103,auVar149,2);
          auVar105 = blendps(auVar105,auVar161,2);
          auVar39 = blendps(unaff_XMM9,unaff_XMM9,4);
          auVar103 = auVar150;
          auVar160 = auVar105;
          if (-1 < (char)bVar25) goto LAB_140b0b271;
LAB_140b0b1ce:
          auVar103 = blendps(auVar103,auVar150,4);
          if (-1 < (char)bVar25) goto LAB_140b0b1da;
LAB_140b0b281:
          auVar105 = blendps(auVar105,auVar160,4);
        }
        else {
          unaff_XMM10._8_4_ = (int)auVar73._8_4_;
          unaff_XMM10._0_8_ = auVar73._0_8_;
          unaff_XMM10._12_4_ = (int)auVar73._12_4_;
          auVar159._8_4_ = auVar90._8_4_;
          auVar159._0_8_ = auVar90._0_8_;
          auVar159._12_4_ = auVar90._12_4_;
          auVar39 = blendps(auVar173,auVar116,1);
          if ((bVar25 & 2) == 0) goto LAB_140b0b162;
LAB_140b0b205:
          auVar190._8_4_ = auVar47._8_4_;
          auVar190._0_8_ = auVar47._0_8_;
          auVar190._12_4_ = auVar47._12_4_;
          auVar103 = blendps(unaff_XMM6,unaff_XMM10,1);
          auVar149._8_4_ = auVar73._8_4_;
          auVar149._0_8_ = auVar73._0_8_;
          auVar149._12_4_ = auVar73._12_4_;
          auVar105 = blendps(auVar133,auVar159,1);
          auVar161._8_4_ = auVar90._8_4_;
          auVar161._0_8_ = auVar90._0_8_;
          auVar161._12_4_ = auVar90._12_4_;
          unaff_XMM9 = blendps(auVar39,auVar190,2);
          if ((bVar25 & 4) == 0) goto LAB_140b0b240;
LAB_140b0b199:
          auVar189._8_4_ = auVar47._8_4_;
          auVar189._0_8_ = auVar47._0_8_;
          auVar189._12_4_ = auVar47._12_4_;
          auVar103 = blendps(auVar103,auVar149,2);
          auVar150._8_4_ = auVar73._8_4_;
          auVar150._0_8_ = auVar73._0_8_;
          auVar150._12_4_ = auVar73._12_4_;
          auVar105 = blendps(auVar105,auVar161,2);
          auVar160._8_4_ = auVar90._8_4_;
          auVar160._0_8_ = auVar90._0_8_;
          auVar160._12_4_ = auVar90._12_4_;
          auVar39 = blendps(unaff_XMM9,auVar189,4);
          unaff_XMM9 = auVar189;
          if ((char)bVar25 < '\0') goto LAB_140b0b1ce;
LAB_140b0b271:
          auVar47 = auVar39;
          auVar103 = blendps(auVar103,auVar150,4);
          auVar39 = auVar47;
          if ((char)bVar25 < '\0') goto LAB_140b0b281;
LAB_140b0b1da:
          auVar105 = blendps(auVar105,auVar160,4);
          auVar73 = auVar103;
        }
        if (-1 < (char)bVar25) {
          auVar90 = auVar105;
        }
        auVar173 = blendps(auVar39,auVar47,8);
        unaff_XMM6 = blendps(auVar103,auVar73,8);
        auVar133 = blendps(auVar105,auVar90,8);
      }
      auVar82._0_8_ = auVar173._0_8_;
      fVar183 = auVar173._12_4_;
      auVar82._8_4_ = auVar173._4_4_;
      auVar82._12_4_ = unaff_XMM6._4_4_;
      auVar101._0_8_ = CONCAT44(unaff_XMM6._8_4_,auVar173._8_4_);
      auVar101._8_4_ = fVar183;
      fVar152 = unaff_XMM6._12_4_;
      auVar101._12_4_ = fVar152;
      auVar153._4_4_ = unaff_XMM6._0_4_;
      auVar153._0_4_ = auVar173._0_4_;
      auVar153._8_4_ = auVar173._4_4_;
      auVar153._12_4_ = unaff_XMM6._4_4_;
      local_128 = insertps(auVar153,auVar133,0x28);
      local_118 = auVar82._8_8_;
      uStack_110 = (ulonglong)auVar133._4_4_;
      auVar38._8_4_ = fVar183;
      auVar38._0_8_ = auVar101._0_8_;
      auVar38._12_4_ = fVar152;
      local_108 = insertps(auVar38,auVar133,0xa8);
      local_f8._8_4_ = auVar133._12_4_;
      local_f8._0_8_ = auVar101._8_8_;
      local_f8._12_4_ = 0;
      auVar39 = insertps(auVar173,unaff_XMM6,0x1c);
      auVar39 = insertps(auVar39,auVar133,0x20);
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)iVar8 * 0x60);
      *pdVar2 = (double)auVar39._0_4_;
      pdVar2[1] = (double)auVar39._4_4_;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)iVar8 * 0x60);
      *pdVar2 = (double)auVar39._8_4_;
      pdVar2[1] = (double)auVar39._12_4_;
      auVar39 = insertps(unaff_XMM6,auVar173,0x4c);
      auVar39 = insertps(auVar39,auVar133,0x60);
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)iVar9 * 0x60);
      *pdVar2 = (double)auVar39._0_4_;
      pdVar2[1] = (double)auVar39._4_4_;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)iVar9 * 0x60);
      *pdVar2 = (double)auVar39._8_4_;
      pdVar2[1] = (double)auVar39._12_4_;
      local_228 = (int)uVar13;
      auVar174._8_8_ = 0;
      auVar174._0_8_ = auVar173._8_8_;
      auVar39 = insertps(auVar174,unaff_XMM6,0x94);
      auVar39 = blendps(auVar39,auVar133,4);
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar39._0_4_;
      pdVar2[1] = (double)auVar39._4_4_;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar39._8_4_;
      pdVar2[1] = (double)auVar39._12_4_;
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)fVar183;
      pdVar2[1] = (double)fVar152;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)auVar133._12_4_;
      pdVar2[1] = 0.0;
      uVar34 = uVar34 + 0x20;
      uVar28 = uVar28 + 4;
      local_248 = auVar154;
      _local_208 = auVar146;
    } while ((int)uVar28 < (int)(uVar23 & 0xfffffffc));
  }
  if ((int)param_10 <= (int)uVar28) {
    return;
  }
  auVar151._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar28) < (int)param_10);
  auVar151._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar28) < (int)param_10);
  auVar151._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar28) < (int)param_10);
  auVar151._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar28) < (int)param_10);
  auVar48._0_4_ = uVar28 << 3;
  auVar48._4_4_ = uVar28 << 3;
  auVar48._8_4_ = uVar28 << 3;
  auVar48._12_4_ = uVar28 << 3;
  auVar48 = auVar48 & auVar151;
  auVar105 = ___xmm_00000018000000100000000800000000 & auVar151;
  lVar33 = auVar48._4_4_ + param_2;
  lVar26 = auVar48._8_4_ + param_2;
  lVar31 = auVar48._12_4_ + param_2;
  uVar171 = *(undefined4 *)(param_2 + auVar48._0_4_);
  uVar172 = *(undefined4 *)((ulonglong)auVar105._4_4_ + lVar33);
  uVar7 = *(undefined4 *)((ulonglong)auVar105._8_4_ + lVar26);
  auVar39 = ___xmm_0000001c000000140000000c00000004 & auVar151;
  auVar49._4_4_ = *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar33);
  auVar49._0_4_ = *(undefined4 *)((ulonglong)auVar39._0_4_ + param_2 + auVar48._0_4_);
  auVar49._12_4_ = *(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31);
  auVar49._8_4_ = *(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26);
  auVar74._0_4_ = param_4 << 2;
  auVar74._4_4_ = param_4 << 2;
  auVar74._8_4_ = param_4 << 2;
  auVar74._12_4_ = param_4 << 2;
  auVar39 = pmulld(auVar74,auVar49);
  auVar39 = auVar39 & auVar151;
  lVar26 = param_3 + auVar39._0_4_;
  uVar30 = *(undefined4 *)(param_3 + auVar39._8_4_);
  uVar22 = *(undefined4 *)(param_3 + auVar39._12_4_);
  auVar191._4_4_ = *(undefined4 *)(param_3 + auVar39._4_4_);
  auVar191._0_4_ = *(undefined4 *)(param_3 + auVar39._0_4_);
  auVar191._12_4_ = uVar22;
  auVar191._8_4_ = uVar30;
  auVar103 = ___xmm_00000004000000040000000400000004 & auVar151;
  uVar24 = (ulonglong)auVar103._4_4_;
  iVar98 = *(int *)((ulonglong)auVar103._0_4_ + lVar26);
  iVar127 = *(int *)(uVar24 + param_3 + auVar39._4_4_);
  auVar140._4_4_ = iVar127;
  auVar140._0_4_ = iVar98;
  iVar128 = *(int *)((ulonglong)auVar103._8_4_ + param_3 + auVar39._8_4_);
  iVar130 = *(int *)((ulonglong)auVar103._12_4_ + param_3 + auVar39._12_4_);
  auVar140._12_4_ = iVar130;
  auVar140._8_4_ = iVar128;
  auVar83 = (undefined1  [16])0x0;
  auVar162._4_4_ = uVar22;
  auVar162._0_4_ = uVar30;
  auVar162._8_8_ = 0;
  auVar91._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar98);
  auVar91._4_4_ = -(uint)(_UNK_150631da4 < iVar127);
  auVar91._8_4_ = -(uint)(_UNK_150631da8 < iVar128);
  auVar91._12_4_ = -(uint)(_UNK_150631dac < iVar130);
  iVar29 = movmskps(uVar30,~auVar91 & auVar151);
  auVar39 = ZEXT816(0);
  if ((iVar29 == 0) ||
     (uVar30 = movmskps((int)lVar26,auVar151), auVar39 = ~auVar91 & auVar151,
     (char)uVar30 != (char)iVar29)) {
    uVar23 = auVar39._0_4_ ^ 0xffffffff;
    uVar100 = auVar39._0_8_ ^ 0xffffffffffffffff;
    uVar28 = auVar39._8_4_ ^ 0xffffffff;
    uVar20 = auVar39._12_4_ ^ 0xffffffff;
    auVar177 = ZEXT816(0);
    auVar39 = ZEXT816(0);
    if (0.0 < param_7) {
      auVar139._0_4_ = iVar98 + -1;
      auVar139._4_4_ = iVar127 + -1;
      auVar139._8_4_ = iVar128 + -1;
      auVar139._12_4_ = iVar130 + -1;
      uVar34 = (uint)(uVar100 >> 0x20);
      if (__real_3f800000 <= param_7) {
        auVar52._0_4_ = uVar23 & auVar151._0_4_;
        auVar52._4_4_ = uVar34 & auVar151._4_4_;
        auVar52._8_4_ = uVar28 & auVar151._8_4_;
        auVar52._12_4_ = uVar20 & auVar151._12_4_;
        auVar83 = blendvps((undefined1  [16])0x0,auVar139,auVar52);
        auVar39 = auVar83;
      }
      else {
        auVar205._4_4_ = param_7;
        auVar205._0_4_ = param_7;
        auVar205._8_4_ = param_7;
        auVar205._12_4_ = param_7;
        auVar198._0_4_ = (float)auVar139._0_4_ * param_7;
        auVar198._4_4_ = (float)auVar139._4_4_ * param_7;
        auVar198._8_4_ = (float)auVar139._8_4_ * param_7;
        auVar198._12_4_ = (float)auVar139._12_4_ * param_7;
        auVar51._0_4_ = uVar23 & auVar151._0_4_;
        auVar51._4_4_ = uVar34 & auVar151._4_4_;
        auVar51._8_4_ = uVar28 & auVar151._8_4_;
        auVar51._12_4_ = uVar20 & auVar151._12_4_;
        auVar39 = roundps(auVar205,auVar198,9);
        iVar98 = (int)auVar39._0_4_;
        iVar127 = (int)auVar39._4_4_;
        iVar128 = (int)auVar39._8_4_;
        iVar130 = (int)auVar39._12_4_;
        auVar178._0_4_ =
             (uint)(auVar139._0_4_ < iVar98) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar98) * iVar98;
        auVar178._4_4_ =
             (uint)(auVar139._4_4_ < iVar127) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar127) * iVar127;
        auVar178._8_4_ =
             (uint)(auVar139._8_4_ < iVar128) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar128) * iVar128;
        auVar178._12_4_ =
             (uint)(auVar139._12_4_ < iVar130) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar130) * iVar130;
        auVar83 = blendvps((undefined1  [16])0x0,auVar178,auVar51);
        auVar177 = ZEXT816(0);
        if (param_8 != '\x01') {
          auVar177._4_4_ = auVar198._4_4_ - auVar39._4_4_;
          auVar177._0_4_ = auVar198._0_4_ - auVar39._0_4_;
          auVar177._8_4_ = auVar198._8_4_ - auVar39._8_4_;
          auVar177._12_4_ = auVar198._12_4_ - auVar39._12_4_;
        }
        unaff_XMM10._8_4_ = 0xffffffff;
        unaff_XMM10._0_8_ = 0xffffffffffffffff;
        unaff_XMM10._12_4_ = 0xffffffff;
        iVar98 = auVar83._0_4_ + 1;
        iVar127 = auVar83._4_4_ + 1;
        iVar128 = auVar83._8_4_ + 1;
        iVar130 = auVar83._12_4_ + 1;
        auVar206._0_4_ =
             (uint)(auVar139._0_4_ < iVar98) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar98) * iVar98;
        auVar206._4_4_ =
             (uint)(auVar139._4_4_ < iVar127) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar127) * iVar127;
        auVar206._8_4_ =
             (uint)(auVar139._8_4_ < iVar128) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar128) * iVar128;
        auVar206._12_4_ =
             (uint)(auVar139._12_4_ < iVar130) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar130) * iVar130;
        auVar39 = blendvps(ZEXT816(0),auVar206,auVar51);
      }
    }
    auVar50._8_4_ = uVar28;
    auVar50._0_8_ = uVar100;
    auVar50._12_4_ = uVar20;
    auVar140 = blendvps((undefined1  [16])0x0,auVar177,auVar50);
    _local_208 = auVar140;
  }
  else {
    auVar50 = ZEXT816(0);
    auVar39 = ZEXT816(0);
    _local_208 = auVar50;
  }
  uVar30 = *(undefined4 *)((ulonglong)auVar105._12_4_ + lVar31);
  auVar105 = pmovsxdq(auVar50,auVar162);
  iVar98 = -(uint)(param_9 == 3);
  auVar53._4_4_ = iVar98;
  auVar53._0_4_ = iVar98;
  auVar53._8_4_ = iVar98;
  auVar53._12_4_ = iVar98;
  auVar146 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar91 & auVar53);
  auVar212 = pmovsxdq(unaff_XMM12,auVar191);
  auVar163 = (undefined1  [16])0x0;
  auVar195 = pmovsxdq(auVar140,auVar146);
  auVar117._8_8_ = auVar146._8_8_;
  auVar117._0_8_ = auVar117._8_8_;
  auVar146 = pmovsxdq(auVar91 & auVar53,auVar117);
  auVar224._4_4_ = iVar19;
  auVar224._0_4_ = iVar19;
  auVar224._8_4_ = iVar19;
  auVar224._12_4_ = iVar19;
  auVar207 = pmulld(auVar83,auVar224);
  auVar154 = pmovsxdq(auVar146,auVar207);
  auVar92._8_4_ = auVar207._8_4_;
  auVar92._12_4_ = auVar207._12_4_;
  auVar92._0_8_ = auVar207._8_8_;
  auVar199 = pmovsxdq(unaff_XMM10,auVar92);
  lVar67 = auVar212._0_8_;
  lVar80 = auVar212._8_8_;
  lVar37 = auVar199._0_8_;
  lVar66 = auVar199._8_8_;
  lVar26 = auVar154._0_8_;
  lVar31 = auVar154._8_8_;
  lVar33 = auVar195._0_8_;
  lVar35 = auVar195._8_8_;
  local_248._0_8_ = auVar146._0_8_;
  local_248._8_8_ = auVar146._8_8_;
  local_268 = auVar105._0_8_;
  lStack_260 = auVar105._8_8_;
  if (param_9 < 2) {
    auVar165._0_8_ = local_248._0_8_ + local_268 + lVar37;
    auVar165._8_8_ = local_248._8_8_ + lStack_260 + lVar66;
    auVar121._0_8_ = lVar33 + lVar67 + lVar26;
    auVar121._8_8_ = lVar35 + lVar80 + lVar31;
    auVar92 = pmovsxdq(auVar92,auVar151);
    auVar105 = blendvps(ZEXT816(0),auVar121,auVar92);
    auVar122._4_4_ = auVar151._8_4_;
    auVar122._0_4_ = auVar151._8_4_;
    auVar122._8_4_ = auVar151._12_4_;
    auVar122._12_4_ = auVar151._12_4_;
    auVar146 = blendvps(ZEXT816(0),auVar165,auVar122);
    lVar26 = param_5 + auVar105._0_8_;
    lVar31 = param_5 + auVar105._8_8_;
    lVar37 = param_5 + auVar146._0_8_;
    auVar103 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar92);
    auVar154 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar122);
    uVar24 = param_5 + auVar146._8_8_;
    auVar207 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar92);
    auVar199 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar122);
    uVar23 = movmskps(iVar29,auVar151);
    auVar181 = ZEXT416(*(uint *)(param_5 + auVar105._0_8_));
    if ((uVar23 & 2) == 0) {
      auVar118 = ZEXT416(*(uint *)(auVar103._0_8_ + lVar26));
      auVar163 = ZEXT416(*(uint *)(auVar207._0_8_ + lVar26));
    }
    else {
      auVar181 = insertps(auVar181,*(undefined4 *)(param_5 + auVar105._8_8_),0x10);
      auVar118 = insertps(ZEXT416(*(uint *)(auVar103._0_8_ + lVar26)),
                          *(undefined4 *)(auVar103._8_8_ + lVar31),0x10);
      auVar163 = insertps(ZEXT416(*(uint *)(auVar207._0_8_ + lVar26)),
                          *(undefined4 *)(auVar207._8_8_ + lVar31),0x10);
    }
    if ((uVar23 & 4) != 0) {
      auVar181 = insertps(auVar181,*(undefined4 *)(param_5 + auVar146._0_8_),0x20);
      auVar118 = insertps(auVar118,*(undefined4 *)(auVar154._0_8_ + lVar37),0x20);
      auVar163 = insertps(auVar163,*(undefined4 *)(auVar199._0_8_ + lVar37),0x20);
    }
    if ((char)((char)uVar23 << 4) >> 4 < '\0') {
      auVar181 = insertps(auVar181,*(undefined4 *)(param_5 + auVar146._8_8_),0x30);
      auVar118 = insertps(auVar118,*(undefined4 *)(auVar154._8_8_ + uVar24),0x30);
      auVar163 = insertps(auVar163,*(undefined4 *)(auVar199._8_8_ + uVar24),0x30);
    }
  }
  else if (param_9 == 2) {
    auVar123._0_8_ = lVar33 + lVar67 + lVar26;
    auVar123._8_8_ = lVar35 + lVar80 + lVar31;
    auVar103 = pmovsxdq(auVar92,auVar151);
    auVar146 = blendvps(ZEXT816(0),auVar123,auVar103);
    auVar166._0_8_ = local_248._0_8_ + local_268 + lVar37;
    auVar166._8_8_ = local_248._8_8_ + lStack_260 + lVar66;
    auVar124._4_4_ = auVar151._8_4_;
    auVar124._0_4_ = auVar151._8_4_;
    auVar124._8_4_ = auVar151._12_4_;
    auVar124._12_4_ = auVar151._12_4_;
    auVar154 = blendvps((undefined1  [16])0x0,auVar166,auVar124);
    lVar26 = param_5 + auVar146._0_8_;
    lVar31 = param_5 + auVar146._8_8_;
    lVar37 = param_5 + auVar154._0_8_;
    uVar24 = auVar154._8_8_;
    auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar103);
    auVar207 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar124);
    auVar167._2_2_ = *(undefined2 *)(auVar105._8_8_ + lVar31);
    auVar167._0_2_ = *(undefined2 *)(auVar105._0_8_ + lVar26);
    auVar167._4_2_ = *(undefined2 *)(auVar207._0_8_ + lVar37);
    auVar167._6_2_ = *(undefined2 *)(auVar207._8_8_ + param_5 + uVar24);
    auVar167._8_8_ = 0;
    auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar103);
    auVar103 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar124);
    auVar55._2_2_ = *(undefined2 *)(auVar105._8_8_ + lVar31);
    auVar55._0_2_ = *(undefined2 *)(auVar105._0_8_ + lVar26);
    auVar55._4_2_ = *(undefined2 *)(auVar103._0_8_ + lVar37);
    auVar55._6_2_ = *(undefined2 *)(auVar103._8_8_ + param_5 + uVar24);
    auVar55._8_8_ = 0;
    auVar103 = pmovzxwd(auVar103,auVar167);
    auVar125._0_4_ = (float)(auVar103._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar125._4_4_ = (float)(auVar103._4_4_ + _UNK_151c6b8e4);
    auVar125._8_4_ = (float)(auVar103._8_4_ + _UNK_151c6b8e8);
    auVar125._12_4_ = (float)(auVar103._12_4_ + _UNK_151c6b8ec);
    auVar105 = divps(auVar125,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar103 = pmovzxwd(auVar55,auVar55);
    auVar168._0_4_ = (float)(auVar103._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar168._4_4_ = (float)(auVar103._4_4_ + _UNK_151c6b8e4);
    auVar168._8_4_ = (float)(auVar103._8_4_ + _UNK_151c6b8e8);
    auVar168._12_4_ = (float)(auVar103._12_4_ + _UNK_151c6b8ec);
    auVar103 = divps(auVar168,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar118._0_4_ = auVar105._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar118._4_4_ = auVar105._4_4_ * _UNK_151c6be64;
    auVar118._8_4_ = auVar105._8_4_ * _UNK_151c6be68;
    auVar118._12_4_ = auVar105._12_4_ * _UNK_151c6be6c;
    auVar200._2_2_ = *(undefined2 *)(param_5 + auVar146._8_8_);
    auVar200._0_2_ = *(undefined2 *)(param_5 + auVar146._0_8_);
    auVar200._4_2_ = *(undefined2 *)(param_5 + auVar154._0_8_);
    auVar163._0_4_ = auVar103._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar163._4_4_ = auVar103._4_4_ * _UNK_151c6be64;
    auVar163._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
    auVar163._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
    auVar200._6_2_ = *(undefined2 *)(param_5 + uVar24);
    auVar200._8_8_ = 0;
    auVar103 = pmovzxwd(auVar200,auVar200);
    auVar199._0_4_ = auVar103._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
    auVar199._4_4_ = auVar103._4_4_ + _UNK_151c6b8e4;
    auVar199._8_4_ = auVar103._8_4_ + _UNK_151c6b8e8;
    auVar199._12_4_ = auVar103._12_4_ + _UNK_151c6b8ec;
    auVar180._0_4_ = (float)auVar199._0_4_;
    auVar180._4_4_ = (float)auVar199._4_4_;
    auVar180._8_4_ = (float)auVar199._8_4_;
    auVar180._12_4_ = (float)auVar199._12_4_;
    auVar103 = divps(auVar180,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar181._0_4_ = auVar103._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar181._4_4_ = auVar103._4_4_ * _UNK_151c6be64;
    auVar181._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
    auVar181._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
    auVar92 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  }
  else {
    auVar118 = (undefined1  [16])0x0;
    auVar181 = ZEXT816(0);
    if (param_9 == 3) {
      auVar105 = auVar151 & auVar191;
      lVar81 = param_5 + auVar105._0_4_;
      lVar97 = param_5 + auVar105._4_4_;
      lVar99 = param_5 + auVar105._8_4_;
      lVar129 = param_5 + auVar105._12_4_;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)(uVar24 + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar207 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar103 = ___xmm_00000008000000080000000800000008 & auVar151;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)((ulonglong)auVar103._4_4_ + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar92 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar103 = ___xmm_00000010000000100000001000000010 & auVar151;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)((ulonglong)auVar103._4_4_ + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar103 = ___xmm_00000014000000140000001400000014 & auVar151;
      auVar195 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)((ulonglong)auVar103._4_4_ + lVar97),0x10);
      auVar195 = insertps(auVar195,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar195 = insertps(auVar195,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar213._0_8_ = local_248._0_8_ + local_268 + lVar37;
      auVar213._8_8_ = local_248._8_8_ + lStack_260 + lVar66;
      auVar119._0_8_ = lVar33 + lVar67 + lVar26;
      auVar119._8_8_ = lVar35 + lVar80 + lVar31;
      auVar103 = pmovsxdq(auVar154,auVar151);
      auVar154 = blendvps((undefined1  [16])0x0,auVar119,auVar103);
      auVar54._4_4_ = auVar151._8_4_;
      auVar54._0_4_ = auVar151._8_4_;
      auVar54._8_4_ = auVar151._12_4_;
      auVar54._12_4_ = auVar151._12_4_;
      auVar103 = blendvps((undefined1  [16])0x0,auVar213,auVar54);
      uVar23 = *(uint *)(param_5 + auVar154._0_8_);
      uVar28 = *(uint *)(param_5 + auVar154._8_8_);
      uVar20 = *(uint *)(param_5 + auVar103._0_8_);
      uVar34 = *(uint *)(param_5 + auVar103._8_8_);
      auVar120._0_4_ =
           (float)(int)((uVar23 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar120._4_4_ = (float)(int)((uVar28 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar120._8_4_ = (float)(int)((uVar20 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar120._12_4_ = (float)(int)((uVar34 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar103 = divps(auVar120,___xmm_447fc000447fc000447fc000447fc000);
      auVar118._0_4_ = auVar103._0_4_ * auVar146._0_4_ + auVar207._0_4_;
      auVar118._4_4_ = auVar103._4_4_ * auVar146._4_4_ + auVar207._4_4_;
      auVar118._8_4_ = auVar103._8_4_ * auVar146._8_4_ + auVar207._8_4_;
      auVar118._12_4_ = auVar103._12_4_ * auVar146._12_4_ + auVar207._12_4_;
      auVar164._0_4_ = (float)(int)((uVar23 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar164._4_4_ = (float)(int)((uVar28 >> 0x15) + _UNK_151c6b864);
      auVar164._8_4_ = (float)(int)((uVar20 >> 0x15) + _UNK_151c6b868);
      auVar164._12_4_ = (float)(int)((uVar34 >> 0x15) + _UNK_151c6b86c);
      auVar103 = divps(auVar164,___xmm_447fc000447fc000447fc000447fc000);
      auVar146 = insertps(ZEXT416(*(uint *)(param_5 + auVar105._0_4_)),
                          *(undefined4 *)(param_5 + auVar105._4_4_),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)(param_5 + auVar105._8_4_),0x20);
      auVar199 = insertps(auVar146,*(undefined4 *)(param_5 + auVar105._12_4_),0x30);
      auVar105 = ___xmm_0000000c0000000c0000000c0000000c & auVar151;
      uVar24 = (ulonglong)auVar105._4_4_;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar105._0_4_ + lVar81)),
                          *(undefined4 *)(uVar24 + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar105._8_4_ + lVar99),0x20);
      auVar105 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar105._12_4_ + lVar129),0x30);
      auVar163._0_4_ = auVar103._0_4_ * auVar195._0_4_ + auVar92._0_4_;
      auVar163._4_4_ = auVar103._4_4_ * auVar195._4_4_ + auVar92._4_4_;
      auVar163._8_4_ = auVar103._8_4_ * auVar195._8_4_ + auVar92._8_4_;
      auVar163._12_4_ = auVar103._12_4_ * auVar195._12_4_ + auVar92._12_4_;
      auVar179._0_4_ =
           (float)(int)((uVar23 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar179._4_4_ = (float)(int)((uVar28 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar179._8_4_ = (float)(int)((uVar20 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar179._12_4_ = (float)(int)((uVar34 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar103 = divps(auVar179,___xmm_43ff800043ff800043ff800043ff8000);
      auVar181._0_4_ = auVar103._0_4_ * auVar105._0_4_ + auVar199._0_4_;
      auVar181._4_4_ = auVar103._4_4_ * auVar105._4_4_ + auVar199._4_4_;
      auVar181._8_4_ = auVar103._8_4_ * auVar105._8_4_ + auVar199._8_4_;
      auVar181._12_4_ = auVar103._12_4_ * auVar105._12_4_ + auVar199._12_4_;
    }
  }
  auVar75._0_4_ = -(uint)(auVar83._0_4_ == auVar39._0_4_);
  auVar75._4_4_ = -(uint)(auVar83._4_4_ == auVar39._4_4_);
  auVar75._8_4_ = -(uint)(auVar83._8_4_ == auVar39._8_4_);
  auVar75._12_4_ = -(uint)(auVar83._12_4_ == auVar39._12_4_);
  auVar103 = ~auVar75 & auVar151;
  iVar19 = movmskps((int)uVar24,auVar103);
  if (iVar19 == 0) {
    uVar22 = 0;
    goto LAB_140b0c3c3;
  }
  bVar25 = (char)((char)iVar19 << 4) >> 4;
  uVar22 = CONCAT31((int3)((uint)iVar19 >> 8),bVar25);
  auVar105 = pmulld(auVar224,auVar39);
  auVar39 = pmovsxdq(auVar199,auVar105);
  auVar56._0_8_ = auVar105._8_8_;
  auVar56._8_4_ = auVar105._8_4_;
  auVar56._12_4_ = auVar105._12_4_;
  auVar105 = pmovsxdq(auVar105,auVar56);
  uVar79 = auVar103._8_4_;
  auVar76._12_4_ = auVar103._12_4_;
  lVar26 = auVar39._0_8_;
  lVar31 = auVar39._8_8_;
  lVar37 = auVar105._0_8_;
  lVar66 = auVar105._8_8_;
  if (param_9 < 2) {
    auVar226._0_8_ = lVar37 + local_268 + local_248._0_8_;
    auVar226._8_8_ = lVar66 + lStack_260 + local_248._8_8_;
    auVar202._0_8_ = lVar26 + lVar67 + lVar33;
    auVar202._8_8_ = lVar31 + lVar80 + lVar35;
    auVar39 = pmovsxdq(auVar92,auVar103);
    auVar83 = blendvps(ZEXT816(0),auVar202,auVar39);
    auVar76._4_4_ = uVar79;
    auVar76._0_4_ = uVar79;
    auVar76._8_4_ = auVar76._12_4_;
    auVar103 = blendvps(ZEXT816(0),auVar226,auVar76);
    lVar26 = param_5 + auVar83._0_8_;
    lVar31 = param_5 + auVar83._8_8_;
    lVar33 = param_5 + auVar103._0_8_;
    auVar154 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar39);
    auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar76);
    lVar35 = param_5 + auVar103._8_8_;
    auVar146 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar39);
    auVar39 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar76);
    auVar57 = ZEXT416(*(uint *)(param_5 + auVar83._0_8_));
    if ((bVar25 & 2) == 0) {
      auVar93 = ZEXT416(*(uint *)(auVar154._0_8_ + lVar26));
      auVar221 = ZEXT416(*(uint *)(auVar146._0_8_ + lVar26));
    }
    else {
      auVar57 = insertps(auVar57,*(undefined4 *)(param_5 + auVar83._8_8_),0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(auVar154._0_8_ + lVar26)),
                         *(undefined4 *)(auVar154._8_8_ + lVar31),0x10);
      auVar221 = insertps(ZEXT416(*(uint *)(auVar146._0_8_ + lVar26)),
                          *(undefined4 *)(auVar146._8_8_ + lVar31),0x10);
    }
    if ((bVar25 & 4) != 0) {
      auVar57 = insertps(auVar57,*(undefined4 *)(param_5 + auVar103._0_8_),0x20);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar105._0_8_ + lVar33),0x20);
      auVar221 = insertps(auVar221,*(undefined4 *)(auVar39._0_8_ + lVar33),0x20);
    }
    if ((char)bVar25 < '\0') {
      auVar57 = insertps(auVar57,*(undefined4 *)(param_5 + auVar103._8_8_),0x30);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar105._8_8_ + lVar35),0x30);
      auVar221 = insertps(auVar221,*(undefined4 *)(auVar39._8_8_ + lVar35),0x30);
    }
  }
  else if (param_9 == 2) {
    auVar203._0_8_ = lVar26 + lVar67 + lVar33;
    auVar203._8_8_ = lVar31 + lVar80 + lVar35;
    auVar39 = pmovsxdq(auVar92,auVar103);
    auVar105 = blendvps((undefined1  [16])0x0,auVar203,auVar39);
    auVar227._0_8_ = lVar37 + local_268 + local_248._0_8_;
    auVar227._8_8_ = lVar66 + lStack_260 + local_248._8_8_;
    auVar77._4_4_ = uVar79;
    auVar77._0_4_ = uVar79;
    auVar77._8_4_ = auVar76._12_4_;
    auVar77._12_4_ = auVar76._12_4_;
    auVar83 = blendvps(ZEXT816(0),auVar227,auVar77);
    lVar26 = param_5 + auVar105._0_8_;
    lVar31 = param_5 + auVar105._8_8_;
    lVar33 = param_5 + auVar83._0_8_;
    auVar103 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar39);
    auVar146 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar77);
    auVar141._2_2_ = *(undefined2 *)(auVar103._8_8_ + lVar31);
    auVar141._0_2_ = *(undefined2 *)(auVar103._0_8_ + lVar26);
    auVar141._4_2_ = *(undefined2 *)(auVar146._0_8_ + lVar33);
    lVar35 = param_5 + auVar83._8_8_;
    auVar141._6_2_ = *(undefined2 *)(auVar146._8_8_ + lVar35);
    auVar141._8_8_ = 0;
    auVar103 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar39);
    auVar39 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar77);
    auVar60._2_2_ = *(undefined2 *)(auVar103._8_8_ + lVar31);
    auVar60._0_2_ = *(undefined2 *)(auVar103._0_8_ + lVar26);
    auVar60._4_2_ = *(undefined2 *)(auVar39._0_8_ + lVar33);
    auVar60._6_2_ = *(undefined2 *)(auVar39._8_8_ + lVar35);
    auVar60._8_8_ = 0;
    auVar39 = pmovzxwd(auVar77,auVar141);
    auVar95._0_4_ = (float)(auVar39._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar95._4_4_ = (float)(auVar39._4_4_ + _UNK_151c6b8e4);
    auVar95._8_4_ = (float)(auVar39._8_4_ + _UNK_151c6b8e8);
    auVar95._12_4_ = (float)(auVar39._12_4_ + _UNK_151c6b8ec);
    auVar103 = divps(auVar95,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar39 = pmovzxwd(auVar60,auVar60);
    auVar222._0_4_ = (float)(auVar39._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar222._4_4_ = (float)(auVar39._4_4_ + _UNK_151c6b8e4);
    auVar222._8_4_ = (float)(auVar39._8_4_ + _UNK_151c6b8e8);
    auVar222._12_4_ = (float)(auVar39._12_4_ + _UNK_151c6b8ec);
    auVar39 = divps(auVar222,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar93._0_4_ = auVar103._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar93._4_4_ = auVar103._4_4_ * _UNK_151c6be64;
    auVar93._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
    auVar93._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
    auVar61._2_2_ = *(undefined2 *)(param_5 + auVar105._8_8_);
    auVar61._0_2_ = *(undefined2 *)(param_5 + auVar105._0_8_);
    auVar61._4_2_ = *(undefined2 *)(param_5 + auVar83._0_8_);
    auVar221._0_4_ = auVar39._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar221._4_4_ = auVar39._4_4_ * _UNK_151c6be64;
    auVar221._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
    auVar221._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
    auVar61._6_2_ = *(undefined2 *)(param_5 + auVar83._8_8_);
    auVar61._8_8_ = 0;
    auVar39 = pmovzxwd(auVar61,auVar61);
    auVar62._0_4_ = (float)(auVar39._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar62._4_4_ = (float)(auVar39._4_4_ + _UNK_151c6b8e4);
    auVar62._8_4_ = (float)(auVar39._8_4_ + _UNK_151c6b8e8);
    auVar62._12_4_ = (float)(auVar39._12_4_ + _UNK_151c6b8ec);
    auVar39 = divps(auVar62,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar57._0_4_ = auVar39._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar57._4_4_ = auVar39._4_4_ * _UNK_151c6be64;
    auVar57._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
    auVar57._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
  }
  else {
    auVar221 = ZEXT816(0);
    auVar93 = (undefined1  [16])0x0;
    auVar57 = (undefined1  [16])0x0;
    if (param_9 == 3) {
      auVar39 = blendvps((undefined1  [16])0x0,auVar191,auVar103);
      uVar13 = extractps(auVar39,0);
      lVar81 = param_5 + (int)uVar13;
      uVar14 = extractps(auVar39,1);
      lVar97 = param_5 + (int)uVar14;
      uVar15 = extractps(auVar39,2);
      lVar99 = param_5 + (int)uVar15;
      uVar16 = extractps(auVar39,3);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar103);
      lVar129 = param_5 + (int)uVar16;
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar105 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar103);
      auVar207 = insertps(auVar105,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar105 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000010000000100000001000000010,auVar103);
      auVar105 = insertps(auVar105,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar83 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000014000000140000001400000014,auVar103);
      auVar154 = insertps(auVar83,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar39 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar146 = insertps(auVar39,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      auVar225._0_8_ = lVar37 + local_268 + local_248._0_8_;
      auVar225._8_8_ = lVar66 + lStack_260 + local_248._8_8_;
      auVar201._0_8_ = lVar26 + lVar67 + lVar33;
      auVar201._8_8_ = lVar31 + lVar80 + lVar35;
      auVar39 = pmovsxdq(auVar103,auVar103);
      auVar39 = blendvps(ZEXT816(0),auVar201,auVar39);
      auVar58._4_4_ = uVar79;
      auVar58._0_4_ = uVar79;
      auVar58._8_4_ = auVar76._12_4_;
      auVar58._12_4_ = auVar76._12_4_;
      auVar83 = blendvps(ZEXT816(0),auVar225,auVar58);
      uVar23 = *(uint *)(param_5 + auVar39._0_8_);
      uVar28 = *(uint *)(param_5 + auVar39._8_8_);
      uVar20 = *(uint *)(param_5 + auVar83._0_8_);
      uVar34 = *(uint *)(param_5 + auVar83._8_8_);
      auVar94._0_4_ =
           (float)(int)((uVar23 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar94._4_4_ = (float)(int)((uVar28 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar94._8_4_ = (float)(int)((uVar20 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar94._12_4_ = (float)(int)((uVar34 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar39 = divps(auVar94,___xmm_447fc000447fc000447fc000447fc000);
      auVar93._0_4_ = auVar39._0_4_ * auVar154._0_4_ + auVar207._0_4_;
      auVar93._4_4_ = auVar39._4_4_ * auVar154._4_4_ + auVar207._4_4_;
      auVar93._8_4_ = auVar39._8_4_ * auVar154._8_4_ + auVar207._8_4_;
      auVar93._12_4_ = auVar39._12_4_ * auVar154._12_4_ + auVar207._12_4_;
      auVar220._0_4_ = (float)(int)((uVar23 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar220._4_4_ = (float)(int)((uVar28 >> 0x15) + _UNK_151c6b864);
      auVar220._8_4_ = (float)(int)((uVar20 >> 0x15) + _UNK_151c6b868);
      auVar220._12_4_ = (float)(int)((uVar34 >> 0x15) + _UNK_151c6b86c);
      auVar154 = divps(auVar220,___xmm_447fc000447fc000447fc000447fc000);
      auVar39 = insertps(ZEXT416(*(uint *)(param_5 + (int)uVar13)),
                         *(undefined4 *)(param_5 + (int)uVar14),0x10);
      auVar39 = insertps(auVar39,*(undefined4 *)(param_5 + (int)uVar15),0x20);
      auVar103 = blendvps(ZEXT816(0),___xmm_0000000c0000000c0000000c0000000c,auVar103);
      auVar83 = insertps(auVar39,*(undefined4 *)(param_5 + (int)uVar16),0x30);
      uVar13 = extractps(auVar103,0);
      uVar14 = extractps(auVar103,1);
      uVar16 = extractps(auVar103,2);
      uVar15 = extractps(auVar103,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar13 + lVar81)),
                         *(undefined4 *)((int)uVar14 + lVar97),0x10);
      auVar39 = insertps(auVar39,*(undefined4 *)((int)uVar16 + lVar99),0x20);
      auVar103 = insertps(auVar39,*(undefined4 *)((int)uVar15 + lVar129),0x30);
      auVar221._0_4_ = auVar154._0_4_ * auVar146._0_4_ + auVar105._0_4_;
      auVar221._4_4_ = auVar154._4_4_ * auVar146._4_4_ + auVar105._4_4_;
      auVar221._8_4_ = auVar154._8_4_ * auVar146._8_4_ + auVar105._8_4_;
      auVar221._12_4_ = auVar154._12_4_ * auVar146._12_4_ + auVar105._12_4_;
      auVar59._0_4_ =
           (float)(int)((uVar23 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar59._4_4_ = (float)(int)((uVar28 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar59._8_4_ = (float)(int)((uVar20 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar59._12_4_ = (float)(int)((uVar34 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar39 = divps(auVar59,___xmm_43ff800043ff800043ff800043ff8000);
      auVar57._0_4_ = auVar39._0_4_ * auVar103._0_4_ + auVar83._0_4_;
      auVar57._4_4_ = auVar39._4_4_ * auVar103._4_4_ + auVar83._4_4_;
      auVar57._8_4_ = auVar39._8_4_ * auVar103._8_4_ + auVar83._8_4_;
      auVar57._12_4_ = auVar39._12_4_ * auVar103._12_4_ + auVar83._12_4_;
    }
  }
  auVar63._0_8_ =
       CONCAT44((auVar57._4_4_ - auVar181._4_4_) * (float)local_208._4_4_ + auVar181._4_4_,
                (auVar57._0_4_ - auVar181._0_4_) * (float)local_208._0_4_ + auVar181._0_4_);
  auVar63._8_4_ = (auVar57._8_4_ - auVar181._8_4_) * fStack_200 + auVar181._8_4_;
  auVar63._12_4_ = (auVar57._12_4_ - auVar181._12_4_) * fStack_1fc + auVar181._12_4_;
  bVar36 = (bVar25 & 1) == 0;
  auVar142 = auVar181;
  if (!bVar36) {
    auVar142._8_4_ = auVar63._8_4_;
    auVar142._0_8_ = auVar63._0_8_;
    auVar142._12_4_ = auVar63._12_4_;
  }
  auVar96._0_8_ =
       CONCAT44((auVar93._4_4_ - auVar118._4_4_) * (float)local_208._4_4_ + auVar118._4_4_,
                (auVar93._0_4_ - auVar118._0_4_) * (float)local_208._0_4_ + auVar118._0_4_);
  auVar96._8_4_ = (auVar93._8_4_ - auVar118._8_4_) * fStack_200 + auVar118._8_4_;
  auVar96._12_4_ = (auVar93._12_4_ - auVar118._12_4_) * fStack_1fc + auVar118._12_4_;
  auVar223._0_8_ =
       CONCAT44((auVar221._4_4_ - auVar163._4_4_) * (float)local_208._4_4_ + auVar163._4_4_,
                (auVar221._0_4_ - auVar163._0_4_) * (float)local_208._0_4_ + auVar163._0_4_);
  auVar223._8_4_ = (auVar221._8_4_ - auVar163._8_4_) * fStack_200 + auVar163._8_4_;
  auVar223._12_4_ = (auVar221._12_4_ - auVar163._12_4_) * fStack_1fc + auVar163._12_4_;
  if (bVar36) {
    auVar39 = blendps(auVar181,auVar142,1);
    auVar78 = auVar163;
    auVar204 = auVar118;
    if ((bVar25 & 2) != 0) goto LAB_140b0c343;
LAB_140b0c2c9:
    auVar105 = blendps(auVar118,auVar204,1);
    auVar170 = blendps(auVar163,auVar78,1);
    auVar39 = blendps(auVar39,auVar39,2);
    auVar143 = auVar105;
    auVar103 = auVar170;
    if ((bVar25 & 4) != 0) goto LAB_140b0c2f4;
LAB_140b0c373:
    auVar105 = blendps(auVar105,auVar143,2);
    auVar169 = blendps(auVar103,auVar170,2);
    auVar39 = blendps(auVar39,auVar39,4);
    auVar144 = auVar105;
    auVar103 = auVar169;
    if (-1 < (char)bVar25) goto LAB_140b0c397;
LAB_140b0c31d:
    auVar105 = blendps(auVar105,auVar144,4);
    if (-1 < (char)bVar25) goto LAB_140b0c325;
LAB_140b0c3a3:
    auVar103 = blendps(auVar103,auVar169,4);
  }
  else {
    auVar204._8_4_ = auVar96._8_4_;
    auVar204._0_8_ = auVar96._0_8_;
    auVar204._12_4_ = auVar96._12_4_;
    auVar78._8_4_ = auVar223._8_4_;
    auVar78._0_8_ = auVar223._0_8_;
    auVar78._12_4_ = auVar223._12_4_;
    auVar39 = blendps(auVar181,auVar142,1);
    if ((bVar25 & 2) == 0) goto LAB_140b0c2c9;
LAB_140b0c343:
    auVar193._8_4_ = auVar63._8_4_;
    auVar193._0_8_ = auVar63._0_8_;
    auVar193._12_4_ = auVar63._12_4_;
    auVar105 = blendps(auVar118,auVar204,1);
    auVar143._8_4_ = auVar96._8_4_;
    auVar143._0_8_ = auVar96._0_8_;
    auVar143._12_4_ = auVar96._12_4_;
    auVar103 = blendps(auVar163,auVar78,1);
    auVar170._8_4_ = auVar223._8_4_;
    auVar170._0_8_ = auVar223._0_8_;
    auVar170._12_4_ = auVar223._12_4_;
    auVar39 = blendps(auVar39,auVar193,2);
    if ((bVar25 & 4) == 0) goto LAB_140b0c373;
LAB_140b0c2f4:
    auVar192._8_4_ = auVar63._8_4_;
    auVar192._0_8_ = auVar63._0_8_;
    auVar192._12_4_ = auVar63._12_4_;
    auVar105 = blendps(auVar105,auVar143,2);
    auVar144._8_4_ = auVar96._8_4_;
    auVar144._0_8_ = auVar96._0_8_;
    auVar144._12_4_ = auVar96._12_4_;
    auVar103 = blendps(auVar103,auVar170,2);
    auVar169._8_4_ = auVar223._8_4_;
    auVar169._0_8_ = auVar223._0_8_;
    auVar169._12_4_ = auVar223._12_4_;
    auVar39 = blendps(auVar39,auVar192,4);
    if ((char)bVar25 < '\0') goto LAB_140b0c31d;
LAB_140b0c397:
    auVar63 = auVar39;
    auVar105 = blendps(auVar105,auVar144,4);
    auVar39 = auVar63;
    if ((char)bVar25 < '\0') goto LAB_140b0c3a3;
LAB_140b0c325:
    auVar103 = blendps(auVar103,auVar169,4);
    auVar96 = auVar105;
  }
  if (-1 < (char)bVar25) {
    auVar223 = auVar103;
  }
  auVar181 = blendps(auVar39,auVar63,8);
  auVar118 = blendps(auVar105,auVar96,8);
  auVar163 = blendps(auVar103,auVar223,8);
LAB_140b0c3c3:
  auVar64._0_8_ = auVar181._0_8_;
  auVar64._8_4_ = auVar181._4_4_;
  auVar64._12_4_ = auVar118._4_4_;
  auVar182._0_8_ = CONCAT44(auVar118._8_4_,auVar181._8_4_);
  auVar182._8_4_ = auVar181._12_4_;
  auVar182._12_4_ = auVar118._12_4_;
  auVar126._4_4_ = auVar118._0_4_;
  auVar126._0_4_ = auVar181._0_4_;
  auVar126._8_4_ = auVar181._4_4_;
  auVar126._12_4_ = auVar118._4_4_;
  local_168 = insertps(auVar126,auVar163,0x28);
  local_158._8_4_ = auVar163._4_4_;
  local_158._0_8_ = auVar64._8_8_;
  local_158._12_4_ = 0;
  auVar65._8_4_ = auVar181._12_4_;
  auVar65._0_8_ = auVar182._0_8_;
  auVar65._12_4_ = auVar118._12_4_;
  local_148 = insertps(auVar65,auVar163,0xa8);
  local_138._8_4_ = auVar163._12_4_;
  local_138._0_8_ = auVar182._8_8_;
  local_138._12_4_ = 0;
  uVar23 = movmskps(uVar22,auVar151);
  uVar24 = (ulonglong)uVar23;
  do {
    if (uVar24 == 0) {
      uVar23 = 0x40;
    }
    else {
      uVar23 = 0;
      for (uVar100 = uVar24; (uVar100 & 1) == 0; uVar100 = uVar100 >> 1 | 0x8000000000000000) {
        uVar23 = uVar23 + 1;
      }
    }
    bVar25 = (byte)uVar23 & 0x3f;
    local_178 = CONCAT44(uVar172,uVar171);
    uStack_170 = CONCAT44(uVar30,uVar7);
    uVar13 = *(undefined8 *)(local_168 + (ulonglong)(uVar23 << 4) + 8);
    uVar14 = *(undefined8 *)(local_168 + (uVar23 << 4));
    lVar26 = (longlong)*(int *)((longlong)&local_178 + (ulonglong)(uVar23 & 3) * 4) * 0x60;
    pdVar2 = (double *)(param_1 + 0x40 + lVar26);
    *pdVar2 = (double)(float)uVar14;
    pdVar2[1] = (double)(float)((ulonglong)uVar14 >> 0x20);
    pdVar2 = (double *)(param_1 + 0x50 + lVar26);
    *pdVar2 = (double)(float)uVar13;
    pdVar2[1] = (double)(float)((ulonglong)uVar13 >> 0x20);
    uVar24 = uVar24 & (-2L << bVar25 | 0xfffffffffffffffeU >> 0x40 - bVar25);
  } while (uVar24 != 0);
  return;
}

// GetConstantKeyLerpPoseRotations_sse4 @ 140b0c4f0

/* WARNING: Removing unreachable block (ram,0x000140b0ca65) */
/* WARNING: Removing unreachable block (ram,0x000140b1008a) */
/* WARNING: Removing unreachable block (ram,0x000140b0e5a1) */
/* WARNING: Removing unreachable block (ram,0x000140b0f3d7) */
/* WARNING: Removing unreachable block (ram,0x000140b0ed5b) */
/* WARNING: Removing unreachable block (ram,0x000140b0d954) */
/* WARNING: Removing unreachable block (ram,0x000140b0e907) */
/* WARNING: Removing unreachable block (ram,0x000140b0d204) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseRotations_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  byte bVar30;
  uint unaff_EDI;
  uint uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  longlong lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  bool bVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  float fVar49;
  float fVar106;
  float fVar107;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  longlong lVar108;
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
  float fVar109;
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
  float fVar110;
  longlong lVar111;
  float fVar148;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  longlong lVar150;
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
  float fVar147;
  float fVar151;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  int iVar149;
  int iVar152;
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
  float fVar153;
  float fVar204;
  float fVar205;
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
  float fVar206;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
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
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  uint uVar207;
  uint uVar233;
  undefined1 in_XMM3 [16];
  int iVar234;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  longlong lVar263;
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  float fVar264;
  float fVar265;
  float fVar279;
  float fVar281;
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  float fVar280;
  float fVar282;
  float fVar283;
  float fVar284;
  undefined1 auVar278 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined4 uVar332;
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined4 uVar348;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar333 [16];
  undefined4 uVar349;
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  longlong local_2d8;
  longlong lStack_2d0;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [16];
  undefined1 local_298 [16];
  longlong local_288;
  longlong lStack_280;
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  longlong lStack_250;
  int local_228;
  int local_1f8;
  int local_1d8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168 [4];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  
  lVar26 = (longlong)(int)param_8;
  iVar23 = *(int *)(&DAT_151c6be00 + lVar26 * 4) * *(int *)(&DAT_151c6bde0 + lVar26 * 4);
  uVar39 = 0;
  uVar17 = 0x18;
  if (lVar26 != 3) {
    uVar17 = 0;
  }
  uVar45 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar45 = param_9;
  }
  if (0 < (int)(uVar45 & 0xfffffffc)) {
    auVar51._4_4_ = uVar17;
    auVar51._0_4_ = uVar17;
    auVar51._8_4_ = uVar17;
    auVar51._12_4_ = uVar17;
    auVar50._4_4_ = uVar17;
    auVar50._0_4_ = uVar17;
    auVar50._8_8_ = 0;
    auVar50 = pmovzxdq(auVar50,auVar50);
    auVar51 = pmovzxdq(auVar50,auVar51);
    uVar20 = 0;
    uVar43 = ___xmm_00000001000000010000000100000001;
    uVar44 = _UNK_150631da4;
    uVar46 = _UNK_150631da8;
    uVar47 = _UNK_150631dac;
    do {
      puVar1 = (undefined8 *)(param_2 + (uVar20 & 0xffffffff));
      iVar24 = *(int *)(puVar1 + 1);
      puVar2 = (undefined8 *)(param_2 + 0x10 + (uVar20 & 0xffffffff));
      uVar22 = *puVar2;
      iVar19 = *(int *)(puVar2 + 1);
      uVar48 = *(int *)((longlong)puVar1 + 4) << 4;
      lVar26 = (longlong)(*(int *)((longlong)puVar1 + 0xc) * 0x10);
      lVar27 = (longlong)(*(int *)((longlong)puVar2 + 4) << 4);
      uVar207 = *(uint *)(param_3 + 8 + lVar27);
      uVar28 = (ulonglong)uVar207;
      lVar36 = (longlong)(*(int *)((longlong)puVar2 + 0xc) << 4);
      uVar348 = *(undefined4 *)(param_3 + 8 + lVar36);
      unaff_XMM10._4_4_ = *(undefined4 *)(param_3 + 8 + lVar26);
      unaff_XMM10._0_4_ = *(undefined4 *)(param_3 + 8 + (longlong)(int)uVar48);
      unaff_XMM10._12_4_ = uVar348;
      unaff_XMM10._8_4_ = uVar207;
      uVar233 = *(uint *)(param_3 + 0xc + (longlong)(int)uVar48);
      uVar9 = *(uint *)(param_3 + 0xc + lVar26);
      uVar10 = *(uint *)(param_3 + 0xc + lVar27);
      uVar11 = *(uint *)(param_3 + 0xc + lVar36);
      auVar168._0_4_ = -(uint)(uVar233 == uVar43);
      auVar168._4_4_ = -(uint)(uVar9 == uVar44);
      auVar168._8_4_ = -(uint)(uVar10 == uVar46);
      auVar168._12_4_ = -(uint)(uVar11 == uVar47);
      uVar31 = movmskps(unaff_EDI,auVar168);
      if (uVar31 != 0) {
        bVar30 = (char)((char)uVar31 << 4) >> 4;
        auVar53 = auVar168 & unaff_XMM10;
        lVar36 = param_4 + auVar53._0_4_;
        lVar29 = param_4 + auVar53._4_4_;
        lVar26 = param_4 + auVar53._8_4_;
        lVar27 = param_4 + auVar53._12_4_;
        auVar266 = ZEXT416(*(uint *)(param_4 + auVar53._0_4_));
        bVar42 = (bVar30 & 1) != 0;
        if (bVar42) {
          unaff_XMM12 = blendps(unaff_XMM12,auVar266,1);
        }
        auVar114 = auVar168 & ___xmm_00000004000000040000000400000004;
        auVar115 = ZEXT416(*(uint *)((ulonglong)auVar114._0_4_ + lVar36));
        if (bVar42) {
          in_XMM3 = blendps(in_XMM3,auVar115,1);
        }
        auVar408 = ZEXT416(*(uint *)(param_4 + auVar53._4_4_));
        auVar266 = insertps(auVar266,auVar408,0x10);
        uVar43 = *(uint *)(param_4 + auVar53._8_4_);
        auVar266 = insertps(auVar266,ZEXT416(uVar43),0x20);
        uVar44 = *(uint *)(param_4 + auVar53._12_4_);
        auVar53 = insertps(auVar266,ZEXT416(uVar44),0x30);
        auVar267 = ZEXT416(*(uint *)((ulonglong)auVar114._4_4_ + lVar29));
        auVar266 = insertps(auVar115,auVar267,0x10);
        auVar115 = ZEXT416(*(uint *)((ulonglong)auVar114._8_4_ + lVar26));
        auVar266 = insertps(auVar266,auVar115,0x20);
        uVar46 = *(uint *)((ulonglong)auVar114._12_4_ + lVar27);
        auVar333 = insertps(auVar266,ZEXT416(uVar46),0x30);
        auVar266 = auVar168 & ___xmm_00000008000000080000000800000008;
        uVar48 = auVar266._4_4_;
        uVar47 = *(uint *)((ulonglong)auVar266._0_4_ + lVar36);
        auVar217 = ZEXT416(*(uint *)((ulonglong)uVar48 + lVar29));
        auVar114 = insertps(ZEXT416(uVar47),auVar217,0x10);
        auVar339._0_4_ = auVar53._0_4_ * auVar53._0_4_;
        auVar339._4_4_ = auVar53._4_4_ * auVar53._4_4_;
        auVar339._8_4_ = auVar53._8_4_ * auVar53._8_4_;
        auVar339._12_4_ = auVar53._12_4_ * auVar53._12_4_;
        auVar376 = ZEXT416(*(uint *)((ulonglong)auVar266._8_4_ + lVar26));
        auVar53 = insertps(auVar114,auVar376,0x20);
        unaff_XMM8 = ZEXT416(*(uint *)((ulonglong)auVar266._12_4_ + lVar27));
        auVar53 = insertps(auVar53,unaff_XMM8,0x30);
        auVar114._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar339._0_4_) -
             auVar333._0_4_ * auVar333._0_4_) - auVar53._0_4_ * auVar53._0_4_;
        auVar114._4_4_ =
             ((_UNK_15076b1f4 - auVar339._4_4_) - auVar333._4_4_ * auVar333._4_4_) -
             auVar53._4_4_ * auVar53._4_4_;
        auVar114._8_4_ =
             ((_UNK_15076b1f8 - auVar339._8_4_) - auVar333._8_4_ * auVar333._8_4_) -
             auVar53._8_4_ * auVar53._8_4_;
        auVar114._12_4_ =
             ((_UNK_15076b1fc - auVar339._12_4_) - auVar333._12_4_ * auVar333._12_4_) -
             auVar53._12_4_ * auVar53._12_4_;
        auVar266 = sqrtps(auVar339,auVar114);
        auVar53._0_8_ =
             CONCAT44(auVar266._4_4_ & -(uint)(0.0 < auVar114._4_4_),
                      auVar266._0_4_ & -(uint)(0.0 < auVar114._0_4_));
        auVar53._8_4_ = auVar266._8_4_ & -(uint)(0.0 < auVar114._8_4_);
        auVar53._12_4_ = auVar266._12_4_ & -(uint)(0.0 < auVar114._12_4_);
        auVar266 = unaff_XMM14;
        if (bVar42) {
          unaff_XMM7 = blendps(unaff_XMM7,ZEXT416(uVar47),1);
          auVar266._8_4_ = auVar53._8_4_;
          auVar266._0_8_ = auVar53._0_8_;
          auVar266._12_4_ = auVar53._12_4_;
        }
        bVar42 = (bVar30 & 2) == 0;
        if (!bVar42) {
          unaff_XMM12 = insertps(unaff_XMM12,auVar408,0x10);
          in_XMM3 = insertps(in_XMM3,auVar267,0x10);
          unaff_XMM7 = insertps(unaff_XMM7,auVar217,0x10);
        }
        auVar266 = blendps(unaff_XMM14,auVar266,1);
        if (bVar42) {
          auVar333 = auVar266;
          if ((bVar30 & 4) != 0) goto LAB_140b0cb2f;
LAB_140b0cabe:
          unaff_XMM6 = blendps(auVar266,auVar333,2);
          auVar266 = unaff_XMM6;
          if (-1 < (char)bVar30) goto LAB_140b0cb5f;
LAB_140b0cae5:
          unaff_XMM12 = insertps(unaff_XMM12,uVar44,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b0caf7;
LAB_140b0cb68:
          if (-1 < (char)bVar30) goto LAB_140b0cb6a;
LAB_140b0cb04:
          unaff_XMM7 = insertps(unaff_XMM7,unaff_XMM8,0x30);
          auVar266 = blendps(auVar266,unaff_XMM6,4);
        }
        else {
          auVar333._8_4_ = auVar53._8_4_;
          auVar333._0_8_ = auVar53._0_8_;
          auVar333._12_4_ = auVar53._12_4_;
          if ((bVar30 & 4) == 0) goto LAB_140b0cabe;
LAB_140b0cb2f:
          unaff_XMM12 = insertps(unaff_XMM12,uVar43,0x20);
          in_XMM3 = insertps(in_XMM3,auVar115,0x20);
          unaff_XMM7 = insertps(unaff_XMM7,auVar376,0x20);
          auVar266 = blendps(auVar266,auVar333,2);
          unaff_XMM6._8_4_ = (float)auVar53._8_4_;
          unaff_XMM6._0_8_ = auVar53._0_8_;
          unaff_XMM6._12_4_ = (float)auVar53._12_4_;
          if ((char)bVar30 < '\0') goto LAB_140b0cae5;
LAB_140b0cb5f:
          if (-1 < (char)bVar30) goto LAB_140b0cb68;
LAB_140b0caf7:
          in_XMM3 = insertps(in_XMM3,uVar46,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b0cb04;
LAB_140b0cb6a:
          auVar266 = blendps(auVar266,unaff_XMM6,4);
        }
        if (-1 < (char)bVar30) {
          auVar53 = auVar266;
        }
        unaff_XMM14 = blendps(auVar266,auVar53,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
      }
      unaff_EDI = 0;
      if ((uVar31 ^ 0xf) == 0) goto LAB_140b0c67a;
      bVar30 = (char)((char)(uVar31 ^ 0xf) << 4) >> 4;
      unaff_EDI = CONCAT31((int3)(uVar31 >> 8),bVar30);
      auVar115._0_4_ = -(uint)((int)uVar233 < ___xmm_00000002000000020000000200000002);
      auVar115._4_4_ = -(uint)((int)uVar9 < _UNK_15066df64);
      auVar115._8_4_ = -(uint)((int)uVar10 < _UNK_15066df68);
      auVar115._12_4_ = -(uint)((int)uVar11 < _UNK_15066df6c);
      auVar115 = auVar115 ^ auVar168;
      iVar18 = movmskps(uVar48,auVar115);
      if (iVar18 == 0) {
        auVar115 = ZEXT816(0);
LAB_140b0cbf3:
        auVar217._8_4_ = 0xffffffff;
        auVar217._0_8_ = 0xffffffffffffffff;
        auVar217._12_4_ = 0xffffffff;
        auVar115 = auVar115 ^ auVar217;
        if (param_6 <= 0.0) {
          auVar267 = (undefined1  [16])0x0;
          auVar376 = blendvps(local_298,(undefined1  [16])0x0,~auVar168 & auVar115);
          unaff_XMM9 = blendvps(unaff_XMM9,(undefined1  [16])0x0,~auVar168 & auVar115);
          local_298 = auVar376;
        }
        else {
          auVar237._0_4_ = uVar233 - 1;
          auVar237._4_4_ = uVar9 - 1;
          auVar237._8_4_ = uVar10 - 1;
          auVar237._12_4_ = uVar11 - 1;
          if (__real_3f800000 <= param_6) {
            auVar376 = blendvps(local_298,auVar237,~auVar168 & auVar115);
            unaff_XMM9 = blendvps(unaff_XMM9,auVar237,~auVar168 & auVar115);
            auVar267 = (undefined1  [16])0x0;
            local_298 = auVar376;
          }
          else {
            unaff_XMM6._0_4_ = (float)auVar237._0_4_ * param_6;
            unaff_XMM6._4_4_ = (float)auVar237._4_4_ * param_6;
            unaff_XMM6._8_4_ = (float)auVar237._8_4_ * param_6;
            unaff_XMM6._12_4_ = (float)auVar237._12_4_ * param_6;
            auVar53 = roundps(unaff_XMM8,unaff_XMM6,9);
            iVar18 = (int)auVar53._0_4_;
            iVar149 = (int)auVar53._4_4_;
            iVar152 = (int)auVar53._8_4_;
            iVar234 = (int)auVar53._12_4_;
            auVar208._0_4_ =
                 (uint)(auVar237._0_4_ < iVar18) * auVar237._0_4_ |
                 (uint)(auVar237._0_4_ >= iVar18) * iVar18;
            auVar208._4_4_ =
                 (uint)(auVar237._4_4_ < iVar149) * auVar237._4_4_ |
                 (uint)(auVar237._4_4_ >= iVar149) * iVar149;
            auVar208._8_4_ =
                 (uint)(auVar237._8_4_ < iVar152) * auVar237._8_4_ |
                 (uint)(auVar237._8_4_ >= iVar152) * iVar152;
            auVar208._12_4_ =
                 (uint)(auVar237._12_4_ < iVar234) * auVar237._12_4_ |
                 (uint)(auVar237._12_4_ >= iVar234) * iVar234;
            local_298 = blendvps(local_298,auVar208,~auVar168 & auVar115);
            auVar267 = ZEXT816(0);
            if (param_7 != '\x01') {
              unaff_XMM6._0_8_ =
                   CONCAT44(unaff_XMM6._4_4_ - auVar53._4_4_,unaff_XMM6._0_4_ - auVar53._0_4_);
              unaff_XMM6._8_4_ = unaff_XMM6._8_4_ - auVar53._8_4_;
              unaff_XMM6._12_4_ = unaff_XMM6._12_4_ - auVar53._12_4_;
              auVar267._8_4_ = unaff_XMM6._8_4_;
              auVar267._0_8_ = unaff_XMM6._0_8_;
              auVar267._12_4_ = unaff_XMM6._12_4_;
            }
            iVar18 = local_298._0_4_ + 1;
            iVar149 = local_298._4_4_ + 1;
            iVar152 = local_298._8_4_ + 1;
            iVar234 = local_298._12_4_ + 1;
            auVar376._0_4_ =
                 (uint)(auVar237._0_4_ < iVar18) * auVar237._0_4_ |
                 (uint)(auVar237._0_4_ >= iVar18) * iVar18;
            auVar376._4_4_ =
                 (uint)(auVar237._4_4_ < iVar149) * auVar237._4_4_ |
                 (uint)(auVar237._4_4_ >= iVar149) * iVar149;
            auVar376._8_4_ =
                 (uint)(auVar237._8_4_ < iVar152) * auVar237._8_4_ |
                 (uint)(auVar237._8_4_ >= iVar152) * iVar152;
            auVar376._12_4_ =
                 (uint)(auVar237._12_4_ < iVar234) * auVar237._12_4_ |
                 (uint)(auVar237._12_4_ >= iVar234) * iVar234;
            unaff_XMM9 = blendvps(unaff_XMM9,auVar376,~auVar168 & auVar115);
          }
        }
        unaff_XMM11 = blendvps(unaff_XMM11,auVar267,auVar115);
      }
      else {
        auVar376._0_8_ =
             CONCAT44(~auVar115._4_4_ & unaff_XMM9._4_4_,~auVar115._0_4_ & unaff_XMM9._0_4_);
        auVar376._8_4_ = ~auVar115._8_4_ & unaff_XMM9._8_4_;
        auVar376._12_4_ = ~auVar115._12_4_ & unaff_XMM9._12_4_;
        auVar408._0_4_ = -(uint)((int)uVar43 < (int)uVar233);
        auVar408._4_4_ = -(uint)((int)uVar44 < (int)uVar9);
        auVar408._8_4_ = -(uint)((int)uVar46 < (int)uVar10);
        auVar408._12_4_ = -(uint)((int)uVar47 < (int)uVar11);
        unaff_XMM11 = unaff_XMM11 & auVar408;
        local_298._4_4_ = ~auVar115._4_4_ & local_298._4_4_;
        local_298._0_4_ = ~auVar115._0_4_ & local_298._0_4_;
        local_298._8_4_ = ~auVar115._8_4_ & local_298._8_4_;
        local_298._12_4_ = ~auVar115._12_4_ & local_298._12_4_;
        unaff_XMM9._8_4_ = auVar376._8_4_;
        unaff_XMM9._0_8_ = auVar376._0_8_;
        unaff_XMM9._12_4_ = auVar376._12_4_;
        if ((bVar30 & 0xf) != (byte)iVar18) goto LAB_140b0cbf3;
      }
      auVar54._4_4_ = uVar348;
      auVar54._0_4_ = uVar207;
      auVar54._8_8_ = 0;
      auVar53 = pmovsxdq(auVar376,auVar54);
      unaff_XMM6 = pmovsxdq(unaff_XMM6,unaff_XMM10);
      auVar55._8_4_ = 0xffffffff;
      auVar55._0_8_ = 0xffffffffffffffff;
      auVar55._12_4_ = 0xffffffff;
      unaff_XMM8 = auVar168 ^ auVar55;
      lVar29 = auVar53._8_8_;
      local_268 = auVar51._0_8_;
      lStack_260 = auVar51._8_8_;
      local_258 = auVar50._0_8_;
      lStack_250 = auVar50._8_8_;
      lVar36 = auVar53._0_8_;
      lVar26 = unaff_XMM6._0_8_;
      lVar27 = unaff_XMM6._8_8_;
      if (5 < param_8) {
        auVar64 = (undefined1  [16])0x0;
        if ((bVar30 & 1) != 0) {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,1);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,1);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,1);
          unaff_XMM14 = blendps(unaff_XMM14,ZEXT416((uint)__real_3f800000),1);
        }
        if ((bVar30 & 2) != 0) {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,2);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,2);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,2);
          unaff_XMM14 = insertps(unaff_XMM14,ZEXT416((uint)__real_3f800000),0x10);
        }
        if ((bVar30 & 4) != 0) {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,4);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,4);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,4);
          unaff_XMM14 = insertps(unaff_XMM14,ZEXT416((uint)__real_3f800000),0x20);
        }
        if ((char)bVar30 < '\0') {
          unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,8);
          in_XMM3 = blendps(in_XMM3,(undefined1  [16])0x0,8);
          unaff_XMM7 = blendps(unaff_XMM7,(undefined1  [16])0x0,8);
          auVar64 = ZEXT416((uint)__real_3f800000);
          unaff_XMM14 = insertps(unaff_XMM14,auVar64,0x30);
        }
        goto LAB_140b0e090;
      }
      auVar15._4_4_ = iVar23;
      auVar15._0_4_ = iVar23;
      auVar15._8_4_ = iVar23;
      auVar15._12_4_ = iVar23;
      auVar53 = pmulld(local_298,auVar15);
      auVar266 = pmovsxdq(auVar55,auVar53);
      auVar116._8_4_ = auVar53._8_4_;
      auVar116._12_4_ = auVar53._12_4_;
      auVar116._0_8_ = auVar53._8_8_;
      auVar114 = pmovsxdq(auVar116,auVar116);
      lVar111 = auVar114._0_8_;
      lVar150 = auVar114._8_8_;
      lVar263 = auVar266._0_8_;
      lVar108 = auVar266._8_8_;
      uVar348 = unaff_XMM8._8_4_;
      uVar349 = unaff_XMM8._12_4_;
      auVar269 = unaff_XMM14;
      auVar53 = unaff_XMM7;
      switch(param_8) {
      case 0:
        auVar209._0_8_ = lVar36 + local_258 + lVar111;
        auVar209._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar154._0_8_ = lVar26 + local_268 + lVar263;
        auVar154._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar114,unaff_XMM8);
        auVar53 = blendvps((undefined1  [16])0x0,auVar154,auVar168);
        auVar64._4_4_ = uVar348;
        auVar64._0_4_ = uVar348;
        auVar64._8_4_ = (float)uVar349;
        auVar64._12_4_ = (float)uVar349;
        auVar266 = blendvps((undefined1  [16])0x0,auVar209,auVar64);
        lVar150 = param_4 + auVar53._0_8_;
        lVar263 = param_4 + auVar53._8_8_;
        uVar28 = auVar266._8_8_;
        lVar108 = param_4 + auVar266._0_8_;
        lVar111 = param_4 + uVar28;
        auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar168);
        auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar64);
        auVar333 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar168);
        auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar64);
        auVar114 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar168);
        auVar168 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,auVar64);
        if ((bVar30 & 1) == 0) {
          if ((bVar30 & 2) != 0) goto LAB_140b0ceb2;
LAB_140b0dd20:
          if ((bVar30 & 4) != 0) goto LAB_140b0cf04;
LAB_140b0dd79:
          auVar53 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + uVar28),0x30);
        }
        else {
          unaff_XMM12 = blendps(unaff_XMM12,ZEXT416(*(uint *)(param_4 + auVar53._0_8_)),1);
          in_XMM3 = pblendw(in_XMM3,ZEXT416(*(uint *)(auVar376._0_8_ + lVar150)),3);
          unaff_XMM7 = blendps(unaff_XMM7,ZEXT416(*(uint *)(auVar333._0_8_ + lVar150)),1);
          auVar64 = ZEXT416(*(uint *)(auVar114._0_8_ + lVar150));
          unaff_XMM14 = pblendw(unaff_XMM14,auVar64,3);
          if ((bVar30 & 2) == 0) goto LAB_140b0dd20;
LAB_140b0ceb2:
          unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + auVar53._8_8_),0x10);
          in_XMM3 = insertps(in_XMM3,*(undefined4 *)(auVar376._8_8_ + lVar263),0x10);
          unaff_XMM7 = insertps(unaff_XMM7,*(undefined4 *)(auVar333._8_8_ + lVar263),0x10);
          unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar114._8_8_ + lVar263),0x10);
          if ((bVar30 & 4) == 0) goto LAB_140b0dd79;
LAB_140b0cf04:
          unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + auVar266._0_8_),0x20);
          in_XMM3 = insertps(in_XMM3,*(undefined4 *)(auVar115._0_8_ + lVar108),0x20);
          auVar53 = insertps(unaff_XMM12,*(undefined4 *)(param_4 + uVar28),0x30);
          unaff_XMM7 = insertps(unaff_XMM7,*(undefined4 *)(auVar339._0_8_ + lVar108),0x20);
          unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar168._0_8_ + lVar108),0x20);
        }
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
        if ((char)bVar30 < '\0') {
          in_XMM3 = insertps(in_XMM3,*(undefined4 *)(auVar115._8_8_ + lVar111),0x30);
          unaff_XMM7 = insertps(unaff_XMM7,*(undefined4 *)(auVar339._8_8_ + lVar111),0x30);
          unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar168._8_8_ + lVar111),0x30);
          unaff_XMM12 = auVar53;
        }
        break;
      case 1:
        auVar213._0_8_ = lVar36 + local_258 + lVar111;
        auVar213._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar162._0_8_ = lVar26 + local_268 + lVar263;
        auVar162._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar114,unaff_XMM8);
        auVar53 = blendvps((undefined1  [16])0x0,auVar162,auVar168);
        auVar163._4_4_ = uVar348;
        auVar163._0_4_ = uVar348;
        auVar163._8_4_ = uVar349;
        auVar163._12_4_ = uVar349;
        auVar114 = blendvps((undefined1  [16])0x0,auVar213,auVar163);
        lVar111 = param_4 + auVar53._0_8_;
        uVar28 = param_4 + auVar53._8_8_;
        lVar263 = param_4 + auVar114._0_8_;
        lVar108 = param_4 + auVar114._8_8_;
        auVar115 = ZEXT416(*(uint *)(param_4 + auVar53._0_8_));
        auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar168);
        auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar163);
        auVar168 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar168);
        auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar163);
        bVar42 = (bVar30 & 1) != 0;
        if (bVar42) {
          unaff_XMM12 = blendps(unaff_XMM12,auVar115,1);
        }
        auVar333 = ZEXT416(*(uint *)(auVar376._0_8_ + lVar111));
        local_2e8 = in_XMM3;
        if (bVar42) {
          local_2e8 = blendps(in_XMM3,auVar333,1);
        }
        auVar217 = ZEXT416(*(uint *)(param_4 + auVar53._8_8_));
        auVar53 = insertps(auVar115,auVar217,0x10);
        auVar408 = ZEXT416(*(uint *)(param_4 + auVar114._0_8_));
        auVar53 = insertps(auVar53,auVar408,0x20);
        uVar43 = *(uint *)(param_4 + auVar114._8_8_);
        auVar115 = insertps(auVar53,ZEXT416(uVar43),0x30);
        auVar53 = ZEXT416(*(uint *)(auVar376._8_8_ + uVar28));
        auVar114 = insertps(auVar333,auVar53,0x10);
        auVar333 = ZEXT416(*(uint *)(auVar266._0_8_ + lVar263));
        auVar114 = insertps(auVar114,auVar333,0x20);
        uVar44 = *(uint *)(auVar266._8_8_ + lVar108);
        auVar266 = insertps(auVar114,ZEXT416(uVar44),0x30);
        uVar46 = *(uint *)(auVar168._0_8_ + lVar111);
        auVar376 = ZEXT416(*(uint *)(auVar168._8_8_ + uVar28));
        auVar168 = insertps(ZEXT416(uVar46),auVar376,0x10);
        auVar114 = ZEXT416(*(uint *)(auVar339._0_8_ + lVar263));
        auVar168 = insertps(auVar168,auVar114,0x20);
        uVar47 = *(uint *)(auVar339._8_8_ + lVar108);
        auVar168 = insertps(auVar168,ZEXT416(uVar47),0x30);
        auVar361._0_4_ = auVar115._0_4_ * auVar115._0_4_;
        auVar361._4_4_ = auVar115._4_4_ * auVar115._4_4_;
        auVar361._8_4_ = auVar115._8_4_ * auVar115._8_4_;
        auVar361._12_4_ = auVar115._12_4_ * auVar115._12_4_;
        auVar350._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar361._0_4_) -
             auVar266._0_4_ * auVar266._0_4_) - auVar168._0_4_ * auVar168._0_4_;
        auVar350._4_4_ =
             ((_UNK_15076b1f4 - auVar361._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
             auVar168._4_4_ * auVar168._4_4_;
        auVar350._8_4_ =
             ((_UNK_15076b1f8 - auVar361._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
             auVar168._8_4_ * auVar168._8_4_;
        auVar350._12_4_ =
             ((_UNK_15076b1fc - auVar361._12_4_) - auVar266._12_4_ * auVar266._12_4_) -
             auVar168._12_4_ * auVar168._12_4_;
        auVar168 = sqrtps(auVar361,auVar350);
        auVar357._0_8_ =
             CONCAT44(auVar168._4_4_ & -(uint)(0.0 < auVar350._4_4_),
                      auVar168._0_4_ & -(uint)(0.0 < auVar350._0_4_));
        auVar357._8_4_ = auVar168._8_4_ & -(uint)(0.0 < auVar350._8_4_);
        auVar357._12_4_ = auVar168._12_4_ & -(uint)(0.0 < auVar350._12_4_);
        auVar120 = unaff_XMM14;
        if (bVar42) {
          unaff_XMM7 = blendps(unaff_XMM7,ZEXT416(uVar46),1);
          auVar120._8_4_ = auVar357._8_4_;
          auVar120._0_8_ = auVar357._0_8_;
          auVar120._12_4_ = auVar357._12_4_;
        }
        if ((bVar30 & 2) == 0) {
          auVar412 = blendps(unaff_XMM14,auVar120,1);
          auVar168 = auVar412;
          in_XMM3 = local_2e8;
          if ((bVar30 & 4) != 0) goto LAB_140b0f626;
LAB_140b0f62f:
          auVar64 = blendps(auVar168,auVar412,2);
          auVar168 = auVar64;
          if (-1 < (char)bVar30) goto LAB_140b0f661;
LAB_140b0f6d1:
          unaff_XMM12 = insertps(unaff_XMM12,uVar43,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b0f6df;
LAB_140b0f663:
          if (-1 < (char)bVar30) goto LAB_140b0f669;
LAB_140b0f6f0:
          unaff_XMM7 = insertps(unaff_XMM7,uVar47,0x30);
          auVar53 = blendps(auVar168,auVar64,4);
        }
        else {
          unaff_XMM12 = insertps(unaff_XMM12,auVar217,0x10);
          local_2e8 = insertps(local_2e8,auVar53,0x10);
          unaff_XMM7 = insertps(unaff_XMM7,auVar376,0x10);
          auVar168 = blendps(unaff_XMM14,auVar120,1);
          auVar412._8_4_ = auVar357._8_4_;
          auVar412._0_8_ = auVar357._0_8_;
          auVar412._12_4_ = auVar357._12_4_;
          in_XMM3 = local_2e8;
          if ((bVar30 & 4) == 0) goto LAB_140b0f62f;
LAB_140b0f626:
          unaff_XMM12 = insertps(unaff_XMM12,auVar408,0x20);
          in_XMM3 = insertps(local_2e8,auVar333,0x20);
          unaff_XMM7 = insertps(unaff_XMM7,auVar114,0x20);
          auVar168 = blendps(auVar168,auVar412,2);
          auVar64._8_4_ = (float)auVar357._8_4_;
          auVar64._0_8_ = auVar357._0_8_;
          auVar64._12_4_ = (float)auVar357._12_4_;
          if ((char)bVar30 < '\0') goto LAB_140b0f6d1;
LAB_140b0f661:
          if (-1 < (char)bVar30) goto LAB_140b0f663;
LAB_140b0f6df:
          in_XMM3 = insertps(in_XMM3,uVar44,0x30);
          if ((char)bVar30 < '\0') goto LAB_140b0f6f0;
LAB_140b0f669:
          auVar53 = blendps(auVar168,auVar64,4);
        }
        if (-1 < (char)bVar30) {
          auVar357 = auVar53;
        }
        goto LAB_140b0d608;
      case 2:
        auVar211._0_8_ = lVar36 + local_258 + lVar111;
        auVar211._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar157._0_8_ = lVar26 + local_268 + lVar263;
        auVar157._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar114,unaff_XMM8);
        auVar114 = blendvps((undefined1  [16])0x0,auVar157,auVar168);
        auVar158._4_4_ = uVar348;
        auVar158._0_4_ = uVar348;
        auVar158._8_4_ = uVar349;
        auVar158._12_4_ = uVar349;
        auVar339 = blendvps((undefined1  [16])0x0,auVar211,auVar158);
        lVar263 = param_4 + auVar114._0_8_;
        lVar108 = param_4 + auVar114._8_8_;
        lVar111 = param_4 + auVar339._0_8_;
        lVar150 = param_4 + auVar339._8_8_;
        auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar168);
        auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,auVar158);
        auVar333 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar168);
        auVar266 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar158);
        auVar58._0_4_ =
             (float)(int)((uint)*(ushort *)(param_4 + auVar114._0_8_) +
                         ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar58._4_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar114._8_8_) + _UNK_151c6b8e4);
        auVar58._8_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar339._0_8_) + _UNK_151c6b8e8);
        auVar58._12_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar339._8_8_) + _UNK_151c6b8ec);
        auVar64 = divps(auVar58,___xmm_46fffe0046fffe0046fffe0046fffe00);
        bVar42 = (bVar30 & 1) != 0;
        auVar168 = unaff_XMM12;
        if (bVar42) {
          auVar168 = auVar64;
        }
        uVar8 = *(ushort *)(auVar333._0_8_ + lVar263);
        uVar28 = (ulonglong)uVar8;
        auVar118._0_4_ =
             (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar263) +
                         ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar118._4_4_ = (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar108) + _UNK_151c6b8e4);
        auVar118._8_4_ = (float)(int)((uint)*(ushort *)(auVar376._0_8_ + lVar111) + _UNK_151c6b8e8);
        auVar118._12_4_ = (float)(int)((uint)*(ushort *)(auVar376._8_8_ + lVar150) + _UNK_151c6b8ec)
        ;
        auVar123 = divps(auVar118,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar159._0_4_ = (float)(int)((uint)uVar8 + ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar159._4_4_ = (float)(int)((uint)*(ushort *)(auVar333._8_8_ + lVar108) + _UNK_151c6b8e4);
        auVar159._8_4_ = (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar111) + _UNK_151c6b8e8);
        auVar159._12_4_ = (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar150) + _UNK_151c6b8ec)
        ;
        auVar266 = divps(auVar159,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar268._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar64._0_4_ * auVar64._0_4_) -
             auVar123._0_4_ * auVar123._0_4_) - auVar266._0_4_ * auVar266._0_4_;
        auVar268._4_4_ =
             ((_UNK_15076b1f4 - auVar64._4_4_ * auVar64._4_4_) - auVar123._4_4_ * auVar123._4_4_) -
             auVar266._4_4_ * auVar266._4_4_;
        auVar268._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar123._8_4_ * auVar123._8_4_) -
             auVar266._8_4_ * auVar266._8_4_;
        auVar268._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar123._12_4_ * auVar123._12_4_
             ) - auVar266._12_4_ * auVar266._12_4_;
        auVar114 = sqrtps(auVar376,auVar268);
        auVar357._0_8_ =
             CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar268._4_4_),
                      auVar114._0_4_ & -(uint)(0.0 < auVar268._0_4_));
        auVar357._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar268._8_4_);
        auVar357._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar268._12_4_);
        auVar115 = in_XMM3;
        if (bVar42) {
          auVar269._8_4_ = auVar357._8_4_;
          auVar269._0_8_ = auVar357._0_8_;
          auVar269._12_4_ = auVar357._12_4_;
          auVar53 = auVar266;
          auVar115 = auVar123;
        }
        auVar168 = blendps(unaff_XMM12,auVar168,1);
        bVar42 = (bVar30 & 2) == 0;
        auVar114 = auVar168;
        if (!bVar42) {
          auVar114 = auVar64;
        }
        auVar115 = blendps(in_XMM3,auVar115,1);
        goto joined_r0x000140b0dfc9;
      case 3:
        auVar114 = ~auVar168 & unaff_XMM10;
        lVar4 = param_4 + auVar114._0_4_;
        lVar5 = param_4 + auVar114._4_4_;
        uVar28 = param_4 + auVar114._8_4_;
        auVar270._0_8_ = lVar36 + local_258 + lVar111;
        auVar270._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar212._0_8_ = lVar26 + local_268 + lVar263;
        auVar212._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar53 = pmovsxdq(auVar266,unaff_XMM8);
        auVar376 = blendvps((undefined1  [16])0x0,auVar212,auVar53);
        auVar59._4_4_ = uVar348;
        auVar59._0_4_ = uVar348;
        auVar59._8_4_ = uVar349;
        auVar59._12_4_ = uVar349;
        auVar115 = blendvps(ZEXT816(0),auVar270,auVar59);
        auVar53 = insertps(ZEXT416(*(uint *)(param_4 + auVar114._0_4_)),
                           *(undefined4 *)(param_4 + auVar114._4_4_),0x10);
        auVar53 = insertps(auVar53,*(undefined4 *)(param_4 + auVar114._8_4_),0x20);
        auVar266 = insertps(auVar53,*(undefined4 *)(param_4 + auVar114._12_4_),0x30);
        auVar53 = ~auVar168 & ___xmm_0000000c0000000c0000000c0000000c;
        auVar339 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar5),0x10);
        auVar339 = insertps(auVar339,*(undefined4 *)(auVar53._8_4_ + uVar28),0x20);
        lVar263 = param_4 + auVar114._12_4_;
        auVar114 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar263),0x30);
        uVar43 = *(uint *)(param_4 + auVar376._0_8_);
        uVar44 = *(uint *)(param_4 + auVar376._8_8_);
        uVar46 = *(uint *)(param_4 + auVar115._0_8_);
        uVar47 = *(uint *)(param_4 + auVar115._8_8_);
        auVar60._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
        auVar60._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
        auVar60._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
        auVar60._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
        auVar53 = divps(auVar60,___xmm_447fc000447fc000447fc000447fc000);
        fVar49 = auVar53._0_4_ * auVar114._0_4_ + auVar266._0_4_;
        fVar106 = auVar53._4_4_ * auVar114._4_4_ + auVar266._4_4_;
        auVar64._0_8_ = CONCAT44(fVar106,fVar49);
        auVar64._8_4_ = auVar53._8_4_ * auVar114._8_4_ + auVar266._8_4_;
        auVar64._12_4_ = auVar53._12_4_ * auVar114._12_4_ + auVar266._12_4_;
        auVar287._0_4_ =
             (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                         ___xmm_fffffe01fffffe01fffffe01fffffe01);
        auVar287._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
        auVar287._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
        auVar287._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
        auVar53 = divps(auVar287,___xmm_43ff800043ff800043ff800043ff8000);
        bVar42 = (bVar30 & 1) != 0;
        auVar358 = unaff_XMM12;
        if (bVar42) {
          auVar358._8_4_ = auVar64._8_4_;
          auVar358._0_8_ = auVar64._0_8_;
          auVar358._12_4_ = auVar64._12_4_;
        }
        auVar266 = ~auVar168 & ___xmm_00000004000000040000000400000004;
        auVar114 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar114 = insertps(auVar114,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar115 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        auVar266 = ~auVar168 & ___xmm_00000008000000080000000800000008;
        auVar114 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar114 = insertps(auVar114,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        auVar266 = ~auVar168 & ___xmm_00000010000000100000001000000010;
        auVar339 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar339 = insertps(auVar339,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar339 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        auVar266 = ~auVar168 & ___xmm_00000014000000140000001400000014;
        auVar168 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                            *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
        auVar168 = insertps(auVar168,*(undefined4 *)(auVar266._8_4_ + uVar28),0x20);
        auVar168 = insertps(auVar168,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar263),0x30);
        fVar107 = auVar168._0_4_ * auVar53._0_4_ + auVar114._0_4_;
        fVar109 = auVar168._4_4_ * auVar53._4_4_ + auVar114._4_4_;
        auVar119._0_8_ = CONCAT44(fVar109,fVar107);
        auVar119._8_4_ = auVar168._8_4_ * auVar53._8_4_ + auVar114._8_4_;
        auVar119._12_4_ = auVar168._12_4_ * auVar53._12_4_ + auVar114._12_4_;
        auVar369._0_4_ =
             (uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
             ___xmm_fffffc01fffffc01fffffc01fffffc01;
        auVar369._4_4_ = (uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864;
        auVar369._8_4_ = (uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868;
        auVar369._12_4_ = (uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c;
        auVar160._0_4_ = (float)auVar369._0_4_;
        auVar160._4_4_ = (float)auVar369._4_4_;
        auVar160._8_4_ = (float)auVar369._8_4_;
        auVar160._12_4_ = (float)auVar369._12_4_;
        auVar168 = divps(auVar160,___xmm_447fc000447fc000447fc000447fc000);
        fVar110 = auVar168._0_4_ * auVar339._0_4_ + auVar115._0_4_;
        fVar147 = auVar168._4_4_ * auVar339._4_4_ + auVar115._4_4_;
        auVar161._0_8_ = CONCAT44(fVar147,fVar110);
        auVar161._8_4_ = auVar168._8_4_ * auVar339._8_4_ + auVar115._8_4_;
        auVar161._12_4_ = auVar168._12_4_ * auVar339._12_4_ + auVar115._12_4_;
        auVar271._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - fVar49 * fVar49) - fVar110 * fVar110) -
             fVar107 * fVar107;
        auVar271._4_4_ =
             ((_UNK_15076b1f4 - fVar106 * fVar106) - fVar147 * fVar147) - fVar109 * fVar109;
        auVar271._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar161._8_4_ * auVar161._8_4_) -
             auVar119._8_4_ * auVar119._8_4_;
        auVar271._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar161._12_4_ * auVar161._12_4_
             ) - auVar119._12_4_ * auVar119._12_4_;
        auVar168 = sqrtps(auVar369,auVar271);
        auVar370._0_8_ =
             CONCAT44(auVar168._4_4_ & -(uint)(0.0 < auVar271._4_4_),
                      auVar168._0_4_ & -(uint)(0.0 < auVar271._0_4_));
        auVar370._8_4_ = auVar168._8_4_ & -(uint)(0.0 < auVar271._8_4_);
        auVar370._12_4_ = auVar168._12_4_ & -(uint)(0.0 < auVar271._12_4_);
        auVar272 = unaff_XMM14;
        auVar288 = in_XMM3;
        auVar394 = unaff_XMM7;
        if (bVar42) {
          auVar288._8_4_ = auVar161._8_4_;
          auVar288._0_8_ = auVar161._0_8_;
          auVar288._12_4_ = auVar161._12_4_;
          auVar394._8_4_ = auVar119._8_4_;
          auVar394._0_8_ = auVar119._0_8_;
          auVar394._12_4_ = auVar119._12_4_;
          auVar272._8_4_ = auVar370._8_4_;
          auVar272._0_8_ = auVar370._0_8_;
          auVar272._12_4_ = auVar370._12_4_;
        }
        auVar168 = blendps(unaff_XMM12,auVar358,1);
        if ((bVar30 & 2) == 0) {
          auVar266 = blendps(in_XMM3,auVar288,1);
          auVar114 = blendps(unaff_XMM7,auVar394,1);
          auVar409 = blendps(unaff_XMM14,auVar272,1);
          auVar289 = auVar266;
          auVar359 = auVar114;
          auVar387 = auVar168;
          auVar53 = auVar409;
        }
        else {
          auVar387._8_4_ = auVar64._8_4_;
          auVar387._0_8_ = auVar64._0_8_;
          auVar387._12_4_ = auVar64._12_4_;
          auVar266 = blendps(in_XMM3,auVar288,1);
          auVar289._8_4_ = auVar161._8_4_;
          auVar289._0_8_ = auVar161._0_8_;
          auVar289._12_4_ = auVar161._12_4_;
          auVar114 = blendps(unaff_XMM7,auVar394,1);
          auVar359._8_4_ = auVar119._8_4_;
          auVar359._0_8_ = auVar119._0_8_;
          auVar359._12_4_ = auVar119._12_4_;
          auVar53 = blendps(unaff_XMM14,auVar272,1);
          auVar409._8_4_ = auVar370._8_4_;
          auVar409._0_8_ = auVar370._0_8_;
          auVar409._12_4_ = auVar370._12_4_;
        }
        auVar168 = blendps(auVar168,auVar387,2);
        if ((bVar30 & 4) == 0) {
          auVar266 = blendps(auVar266,auVar289,2);
          auVar114 = blendps(auVar114,auVar359,2);
          auVar410 = blendps(auVar53,auVar409,2);
          auVar168 = blendps(auVar168,auVar168,4);
          auVar290 = auVar266;
          auVar360 = auVar114;
          auVar53 = auVar410;
          if (-1 < (char)bVar30) goto LAB_140b0d9e3;
LAB_140b0da5b:
          auVar266 = blendps(auVar266,auVar290,4);
          if (-1 < (char)bVar30) goto LAB_140b0da63;
LAB_140b0d9ef:
          auVar114 = blendps(auVar114,auVar360,4);
          if (-1 < (char)bVar30) goto LAB_140b0da01;
LAB_140b0da78:
          auVar53 = blendps(auVar53,auVar410,4);
        }
        else {
          auVar388._8_4_ = auVar64._8_4_;
          auVar388._0_8_ = auVar64._0_8_;
          auVar388._12_4_ = auVar64._12_4_;
          auVar266 = blendps(auVar266,auVar289,2);
          auVar290._8_4_ = auVar161._8_4_;
          auVar290._0_8_ = auVar161._0_8_;
          auVar290._12_4_ = auVar161._12_4_;
          auVar114 = blendps(auVar114,auVar359,2);
          auVar360._8_4_ = auVar119._8_4_;
          auVar360._0_8_ = auVar119._0_8_;
          auVar360._12_4_ = auVar119._12_4_;
          auVar53 = blendps(auVar53,auVar409,2);
          auVar410._8_4_ = auVar370._8_4_;
          auVar410._0_8_ = auVar370._0_8_;
          auVar410._12_4_ = auVar370._12_4_;
          auVar168 = blendps(auVar168,auVar388,4);
          if ((char)bVar30 < '\0') goto LAB_140b0da5b;
LAB_140b0d9e3:
          auVar64 = auVar168;
          auVar266 = blendps(auVar266,auVar290,4);
          auVar168 = auVar64;
          if ((char)bVar30 < '\0') goto LAB_140b0d9ef;
LAB_140b0da63:
          auVar161 = auVar266;
          auVar114 = blendps(auVar114,auVar360,4);
          auVar266 = auVar161;
          if ((char)bVar30 < '\0') goto LAB_140b0da78;
LAB_140b0da01:
          auVar53 = blendps(auVar53,auVar410,4);
          auVar119 = auVar114;
        }
        if (-1 < (char)bVar30) {
          auVar370 = auVar53;
        }
        unaff_XMM12 = blendps(auVar168,auVar64,8);
        in_XMM3 = blendps(auVar266,auVar161,8);
        unaff_XMM7 = blendps(auVar114,auVar119,8);
        unaff_XMM14 = blendps(auVar53,auVar370,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
        break;
      case 4:
        auVar210._0_8_ = lVar36 + local_258 + lVar111;
        auVar210._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar155._0_8_ = lVar26 + local_268 + lVar263;
        auVar155._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar266,unaff_XMM8);
        auVar168 = blendvps((undefined1  [16])0x0,auVar155,auVar168);
        auVar56._4_4_ = uVar348;
        auVar56._0_4_ = uVar348;
        auVar56._8_4_ = uVar349;
        auVar56._12_4_ = uVar349;
        auVar53 = blendvps(ZEXT816(0),auVar210,auVar56);
        uVar43 = *(uint *)(param_4 + auVar168._0_8_);
        uVar44 = *(uint *)(param_4 + auVar168._8_8_);
        uVar46 = *(uint *)(param_4 + auVar53._0_8_);
        uVar47 = *(uint *)(param_4 + auVar53._8_8_);
        auVar57._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
        auVar57._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
        auVar57._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
        auVar57._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
        auVar64 = divps(auVar57,___xmm_447fc000447fc000447fc000447fc000);
        auVar117._0_4_ =
             (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                         ___xmm_fffffe01fffffe01fffffe01fffffe01);
        auVar117._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
        auVar117._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
        auVar117._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
        auVar168 = divps(auVar117,___xmm_43ff800043ff800043ff800043ff8000);
        bVar42 = (bVar30 & 1) == 0;
        auVar53 = unaff_XMM12;
        if (!bVar42) {
          auVar53 = auVar64;
        }
        auVar156._0_4_ =
             (float)(int)((uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                         ___xmm_fffffc01fffffc01fffffc01fffffc01);
        auVar156._4_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
        auVar156._8_4_ = (float)(int)((uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
        auVar156._12_4_ = (float)(int)((uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
        auVar266 = divps(auVar156,___xmm_447fc000447fc000447fc000447fc000);
        auVar285._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar64._0_4_ * auVar64._0_4_) -
             auVar266._0_4_ * auVar266._0_4_) - auVar168._0_4_ * auVar168._0_4_;
        auVar285._4_4_ =
             ((_UNK_15076b1f4 - auVar64._4_4_ * auVar64._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
             auVar168._4_4_ * auVar168._4_4_;
        auVar285._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
             auVar168._8_4_ * auVar168._8_4_;
        auVar285._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar266._12_4_ * auVar266._12_4_
             ) - auVar168._12_4_ * auVar168._12_4_;
        auVar114 = sqrtps(unaff_XMM10,auVar285);
        auVar356._0_8_ =
             CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar285._4_4_),
                      auVar114._0_4_ & -(uint)(0.0 < auVar285._0_4_));
        auVar356._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar285._8_4_);
        auVar356._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar285._12_4_);
        if (bVar42) {
          auVar115 = blendps(unaff_XMM12,auVar53,1);
          auVar286 = unaff_XMM14;
          auVar53 = unaff_XMM7;
          auVar114 = in_XMM3;
          if ((bVar30 & 2) != 0) goto LAB_140b0d1c4;
LAB_140b0d0cd:
          auVar333 = blendps(in_XMM3,auVar114,1);
          auVar408 = blendps(unaff_XMM7,auVar53,1);
          auVar406 = blendps(unaff_XMM14,auVar286,1);
          auVar53 = auVar333;
          auVar114 = auVar408;
          auVar339 = auVar115;
          auVar376 = auVar406;
        }
        else {
          auVar286._8_4_ = auVar356._8_4_;
          auVar286._0_8_ = auVar356._0_8_;
          auVar286._12_4_ = auVar356._12_4_;
          auVar115 = blendps(unaff_XMM12,auVar53,1);
          auVar53 = auVar168;
          auVar114 = auVar266;
          if ((bVar30 & 2) == 0) goto LAB_140b0d0cd;
LAB_140b0d1c4:
          auVar333 = blendps(in_XMM3,auVar114,1);
          auVar408 = blendps(unaff_XMM7,auVar53,1);
          auVar376 = blendps(unaff_XMM14,auVar286,1);
          auVar406._8_4_ = auVar356._8_4_;
          auVar406._0_8_ = auVar356._0_8_;
          auVar406._12_4_ = auVar356._12_4_;
          auVar53 = auVar266;
          auVar114 = auVar168;
          auVar339 = auVar64;
        }
        auVar115 = blendps(auVar115,auVar339,2);
        if ((bVar30 & 4) == 0) {
          auVar333 = blendps(auVar333,auVar53,2);
          auVar408 = blendps(auVar408,auVar114,2);
          auVar407 = blendps(auVar376,auVar406,2);
          auVar53 = blendps(auVar115,auVar115,4);
          auVar114 = auVar333;
          auVar115 = auVar408;
          auVar339 = auVar407;
          if (-1 < (char)bVar30) goto LAB_140b0d177;
LAB_140b0d25e:
          auVar114 = blendps(auVar333,auVar114,4);
          if (-1 < (char)bVar30) goto LAB_140b0d26a;
LAB_140b0d187:
          auVar115 = blendps(auVar408,auVar115,4);
          if (-1 < (char)bVar30) goto LAB_140b0d194;
LAB_140b0d27a:
          auVar339 = blendps(auVar339,auVar407,4);
        }
        else {
          auVar333 = blendps(auVar333,auVar53,2);
          auVar408 = blendps(auVar408,auVar114,2);
          auVar339 = blendps(auVar376,auVar406,2);
          auVar407._8_4_ = auVar356._8_4_;
          auVar407._0_8_ = auVar356._0_8_;
          auVar407._12_4_ = auVar356._12_4_;
          auVar53 = blendps(auVar115,auVar64,4);
          auVar114 = auVar266;
          auVar115 = auVar168;
          if ((char)bVar30 < '\0') goto LAB_140b0d25e;
LAB_140b0d177:
          auVar64 = auVar53;
          auVar114 = blendps(auVar333,auVar114,4);
          auVar53 = auVar64;
          if ((char)bVar30 < '\0') goto LAB_140b0d187;
LAB_140b0d26a:
          auVar266 = auVar114;
          auVar115 = blendps(auVar408,auVar115,4);
          auVar114 = auVar266;
          if ((char)bVar30 < '\0') goto LAB_140b0d27a;
LAB_140b0d194:
          auVar339 = blendps(auVar339,auVar407,4);
          auVar168 = auVar115;
        }
        if (-1 < (char)bVar30) {
          auVar356 = auVar339;
        }
        unaff_XMM12 = blendps(auVar53,auVar64,8);
        in_XMM3 = blendps(auVar114,auVar266,8);
        unaff_XMM7 = blendps(auVar115,auVar168,8);
        unaff_XMM14 = blendps(auVar339,auVar356,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
        break;
      case 5:
        auVar214._0_8_ = lVar36 + local_258 + lVar111;
        auVar214._8_8_ = lVar29 + lStack_250 + lVar150;
        auVar164._0_8_ = lVar26 + local_268 + lVar263;
        auVar164._8_8_ = lVar27 + lStack_260 + lVar108;
        auVar168 = pmovsxdq(auVar266,unaff_XMM8);
        auVar168 = blendvps((undefined1  [16])0x0,auVar164,auVar168);
        auVar61._4_4_ = uVar348;
        auVar61._0_4_ = uVar348;
        auVar61._8_4_ = uVar349;
        auVar61._12_4_ = uVar349;
        auVar266 = blendvps(ZEXT816(0),auVar214,auVar61);
        uVar43 = *(uint *)(param_4 + auVar168._0_8_);
        uVar44 = *(uint *)(param_4 + auVar168._8_8_);
        auVar362._4_4_ = uVar44;
        auVar362._0_4_ = uVar43;
        uVar46 = *(uint *)(param_4 + auVar266._0_8_);
        uVar47 = *(uint *)(param_4 + auVar266._8_8_);
        auVar362._12_4_ = uVar47;
        auVar362._8_4_ = uVar46;
        auVar62._0_4_ = uVar43 >> 0x15;
        auVar62._4_4_ = uVar44 >> 0x15;
        auVar62._8_4_ = uVar46 >> 0x15;
        auVar62._12_4_ = uVar47 >> 0x15;
        auVar121._0_4_ = uVar43 >> 5;
        auVar121._4_4_ = uVar44 >> 5;
        auVar121._8_4_ = uVar46 >> 5;
        auVar121._12_4_ = uVar47 >> 5;
        auVar168 = auVar62 & ___xmm_00000380000003800000038000000380;
        auVar63._0_4_ = auVar168._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
        auVar63._4_4_ = auVar168._4_4_ + _UNK_151c6b7b4;
        auVar63._8_4_ = auVar168._8_4_ + _UNK_151c6b7b8;
        auVar63._12_4_ = auVar168._12_4_ + _UNK_151c6b7bc;
        auVar64 = auVar63 | auVar62 & ___xmm_00000400000004000000040000000400 |
                            auVar121 & ___xmm_007f0000007f0000007f0000007f0000;
        bVar42 = (bVar30 & 1) == 0;
        auVar168 = unaff_XMM12;
        if (!bVar42) {
          auVar168 = auVar64;
        }
        auVar122._0_4_ = uVar43 >> 10;
        auVar122._4_4_ = uVar44 >> 10;
        auVar122._8_4_ = uVar46 >> 10;
        auVar122._12_4_ = uVar47 >> 10;
        auVar165._0_4_ = uVar43 << 6;
        auVar165._4_4_ = uVar44 << 6;
        auVar165._8_4_ = uVar46 << 6;
        auVar165._12_4_ = uVar47 << 6;
        auVar266 = auVar122 & ___xmm_00000380000003800000038000000380;
        auVar123._0_4_ = auVar266._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
        auVar123._4_4_ = auVar266._4_4_ + _UNK_151c6b7b4;
        auVar123._8_4_ = auVar266._8_4_ + _UNK_151c6b7b8;
        auVar123._12_4_ = auVar266._12_4_ + _UNK_151c6b7bc;
        auVar123 = auVar123 |
                   auVar122 & ___xmm_00000400000004000000040000000400 |
                   auVar165 & ___xmm_007f0000007f0000007f0000007f0000;
        auVar266 = auVar362 & ___xmm_000001c0000001c0000001c0000001c0;
        auVar215._0_4_ = uVar43 << 0x11;
        auVar215._4_4_ = uVar44 << 0x11;
        auVar215._8_4_ = uVar46 << 0x11;
        auVar215._12_4_ = uVar47 << 0x11;
        auVar166._0_4_ = auVar266._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
        auVar166._4_4_ = auVar266._4_4_ + _UNK_151c6b824;
        auVar166._8_4_ = auVar266._8_4_ + _UNK_151c6b828;
        auVar166._12_4_ = auVar266._12_4_ + _UNK_151c6b82c;
        auVar266 = auVar166 | auVar362 & ___xmm_00000200000002000000020000000200 |
                   auVar215 & ___xmm_007e0000007e0000007e0000007e0000;
        auVar273._0_4_ =
             ((___xmm_3f8000003f8000003f8000003f800000 - auVar64._0_4_ * auVar64._0_4_) -
             auVar123._0_4_ * auVar123._0_4_) - auVar266._0_4_ * auVar266._0_4_;
        auVar273._4_4_ =
             ((_UNK_15076b1f4 - auVar64._4_4_ * auVar64._4_4_) - auVar123._4_4_ * auVar123._4_4_) -
             auVar266._4_4_ * auVar266._4_4_;
        auVar273._8_4_ =
             ((_UNK_15076b1f8 - auVar64._8_4_ * auVar64._8_4_) - auVar123._8_4_ * auVar123._8_4_) -
             auVar266._8_4_ * auVar266._8_4_;
        auVar273._12_4_ =
             ((_UNK_15076b1fc - auVar64._12_4_ * auVar64._12_4_) - auVar123._12_4_ * auVar123._12_4_
             ) - auVar266._12_4_ * auVar266._12_4_;
        auVar114 = sqrtps(auVar362 & ___xmm_00000200000002000000020000000200,auVar273);
        auVar357._0_8_ =
             CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar273._4_4_),
                      auVar114._0_4_ & -(uint)(0.0 < auVar273._0_4_));
        auVar357._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar273._8_4_);
        auVar357._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar273._12_4_);
        if (bVar42) {
          auVar168 = blendps(unaff_XMM12,auVar168,1);
          auVar114 = in_XMM3;
        }
        else {
          auVar269._8_4_ = auVar357._8_4_;
          auVar269._0_8_ = auVar357._0_8_;
          auVar269._12_4_ = auVar357._12_4_;
          auVar168 = blendps(unaff_XMM12,auVar168,1);
          auVar114 = auVar123;
          auVar53 = auVar266;
        }
        bVar42 = (bVar30 & 2) == 0;
        if (bVar42) {
          auVar115 = blendps(in_XMM3,auVar114,1);
          auVar114 = auVar168;
        }
        else {
          auVar115 = blendps(in_XMM3,auVar114,1);
          auVar114 = auVar64;
        }
joined_r0x000140b0dfc9:
        auVar339 = auVar115;
        if (!bVar42) {
          auVar339 = auVar123;
        }
        auVar376 = blendps(unaff_XMM7,auVar53,1);
        auVar53 = auVar376;
        if (!bVar42) {
          auVar53 = auVar266;
        }
        auVar408 = blendps(unaff_XMM14,auVar269,1);
        auVar333 = auVar408;
        if (!bVar42) {
          auVar333 = auVar357;
        }
        auVar168 = blendps(auVar168,auVar114,2);
        if ((bVar30 & 4) == 0) {
          auVar339 = blendps(auVar115,auVar339,2);
          auVar376 = blendps(auVar376,auVar53,2);
          auVar333 = blendps(auVar408,auVar333,2);
          auVar168 = blendps(auVar168,auVar168,4);
          auVar53 = auVar333;
          auVar114 = auVar339;
          auVar115 = auVar376;
          if (-1 < (char)bVar30) goto LAB_140b0d54e;
LAB_140b0d5c5:
          auVar114 = blendps(auVar339,auVar114,4);
          if (-1 < (char)bVar30) goto LAB_140b0d5cd;
LAB_140b0d55a:
          auVar115 = blendps(auVar376,auVar115,4);
          if (-1 < (char)bVar30) goto LAB_140b0d56c;
LAB_140b0d5e2:
          auVar53 = blendps(auVar333,auVar53,4);
        }
        else {
          auVar339 = blendps(auVar115,auVar339,2);
          auVar376 = blendps(auVar376,auVar53,2);
          auVar333 = blendps(auVar408,auVar333,2);
          auVar168 = blendps(auVar168,auVar64,4);
          auVar53 = auVar357;
          auVar114 = auVar123;
          auVar115 = auVar266;
          if ((char)bVar30 < '\0') goto LAB_140b0d5c5;
LAB_140b0d54e:
          auVar64 = auVar168;
          auVar114 = blendps(auVar339,auVar114,4);
          auVar168 = auVar64;
          if ((char)bVar30 < '\0') goto LAB_140b0d55a;
LAB_140b0d5cd:
          auVar123 = auVar114;
          auVar115 = blendps(auVar376,auVar115,4);
          auVar114 = auVar123;
          if ((char)bVar30 < '\0') goto LAB_140b0d5e2;
LAB_140b0d56c:
          auVar53 = blendps(auVar333,auVar53,4);
          auVar266 = auVar115;
        }
        if (-1 < (char)bVar30) {
          auVar357 = auVar53;
        }
        unaff_XMM12 = blendps(auVar168,auVar64,8);
        in_XMM3 = blendps(auVar114,auVar123,8);
        unaff_XMM7 = blendps(auVar115,auVar266,8);
LAB_140b0d608:
        unaff_XMM14 = blendps(auVar53,auVar357,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
      }
LAB_140b0e090:
      auVar167._0_4_ = -(uint)(local_298._0_4_ == unaff_XMM9._0_4_);
      auVar167._4_4_ = -(uint)(local_298._4_4_ == unaff_XMM9._4_4_);
      auVar167._8_4_ = -(uint)(local_298._8_4_ == unaff_XMM9._8_4_);
      auVar167._12_4_ = -(uint)(local_298._12_4_ == unaff_XMM9._12_4_);
      auVar168 = ~auVar167 & unaff_XMM8;
      iVar18 = movmskps((int)uVar28,auVar168);
      if (iVar18 != 0) {
        bVar30 = (char)((char)iVar18 << 4) >> 4;
        unaff_EDI = (uint)bVar30;
        if (param_8 < 6) {
          auVar16._4_4_ = iVar23;
          auVar16._0_4_ = iVar23;
          auVar16._8_4_ = iVar23;
          auVar16._12_4_ = iVar23;
          auVar266 = pmulld(unaff_XMM9,auVar16);
          auVar53 = pmovsxdq(auVar64,auVar266);
          auVar124._8_4_ = auVar266._8_4_;
          auVar124._12_4_ = auVar266._12_4_;
          auVar124._0_8_ = auVar266._8_8_;
          auVar266 = pmovsxdq(auVar124,auVar124);
          lVar111 = auVar266._0_8_;
          lVar150 = auVar266._8_8_;
          lVar263 = auVar53._0_8_;
          lVar108 = auVar53._8_8_;
          uVar348 = auVar168._8_4_;
          auVar169._12_4_ = auVar168._12_4_;
          switch(param_8) {
          case 0:
            auVar274._0_8_ = lVar36 + local_258 + lVar111;
            auVar274._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar291._0_8_ = lVar26 + local_268 + lVar263;
            auVar291._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar266,auVar168);
            auVar53 = blendvps(ZEXT816(0),auVar291,auVar168);
            auVar169._4_4_ = uVar348;
            auVar169._0_4_ = uVar348;
            auVar169._8_4_ = auVar169._12_4_;
            auVar266 = blendvps(ZEXT816(0),auVar274,auVar169);
            lVar29 = param_4 + auVar53._0_8_;
            lVar26 = param_4 + auVar53._8_8_;
            lVar27 = param_4 + auVar266._0_8_;
            lVar263 = auVar266._8_8_;
            lVar36 = param_4 + lVar263;
            auVar333 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar168);
            auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar169);
            auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,
                                auVar168);
            auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar169);
            auVar339 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar168);
            auVar168 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,
                                auVar169);
            if ((bVar30 & 1) != 0) {
              local_328 = pblendw(local_328,ZEXT416(*(uint *)(param_4 + auVar53._0_8_)),3);
              unaff_XMM13 = blendps(unaff_XMM13,ZEXT416(*(uint *)(auVar333._0_8_ + lVar29)),1);
              local_308 = pblendw(local_308,ZEXT416(*(uint *)(auVar376._0_8_ + lVar29)),3);
              local_2b8 = pblendw(local_2b8,ZEXT416(*(uint *)(auVar339._0_8_ + lVar29)),3);
            }
            if ((bVar30 & 2) != 0) {
              local_328 = insertps(local_328,*(undefined4 *)(param_4 + auVar53._8_8_),0x10);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar333._8_8_ + lVar26),0x10);
              local_308 = insertps(local_308,*(undefined4 *)(auVar376._8_8_ + lVar26),0x10);
              local_2b8 = insertps(local_2b8,*(undefined4 *)(auVar339._8_8_ + lVar26),0x10);
            }
            if ((bVar30 & 4) == 0) {
              auVar266 = insertps(local_328,*(undefined4 *)(param_4 + lVar263),0x30);
              auVar53 = local_328;
            }
            else {
              auVar53 = insertps(local_328,*(undefined4 *)(param_4 + auVar266._0_8_),0x20);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar115._0_8_ + lVar27),0x20);
              auVar266 = insertps(auVar53,*(undefined4 *)(param_4 + lVar263),0x30);
              local_308 = insertps(local_308,*(undefined4 *)(auVar114._0_8_ + lVar27),0x20);
              local_2b8 = insertps(local_2b8,*(undefined4 *)(auVar168._0_8_ + lVar27),0x20);
            }
            local_328 = auVar266;
            if (-1 < (char)bVar30) {
              local_328 = auVar53;
            }
            if ((char)bVar30 < '\0') {
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar115._8_8_ + lVar36),0x30);
              local_308 = insertps(local_308,*(undefined4 *)(auVar114._8_8_ + lVar36),0x30);
              local_2b8 = insertps(local_2b8,*(undefined4 *)(auVar168._8_8_ + lVar36),0x30);
            }
            break;
          case 1:
            auVar304._0_8_ = lVar36 + local_258 + lVar111;
            auVar304._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar244._0_8_ = lVar26 + local_268 + lVar263;
            auVar244._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar266,auVar168);
            auVar53 = blendvps(ZEXT816(0),auVar244,auVar168);
            auVar173._4_4_ = uVar348;
            auVar173._0_4_ = uVar348;
            auVar173._8_4_ = auVar169._12_4_;
            auVar173._12_4_ = auVar169._12_4_;
            auVar266 = blendvps(ZEXT816(0),auVar304,auVar173);
            lVar29 = param_4 + auVar53._0_8_;
            lVar26 = param_4 + auVar53._8_8_;
            lVar27 = param_4 + auVar266._0_8_;
            lVar36 = param_4 + auVar266._8_8_;
            auVar114 = ZEXT416(*(uint *)(param_4 + auVar53._0_8_));
            auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar168);
            auVar339 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar173);
            auVar168 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar168);
            auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar173);
            bVar42 = (bVar30 & 1) != 0;
            if (bVar42) {
              local_328 = pblendw(local_328,auVar114,3);
            }
            auVar333 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar29));
            local_2f8 = unaff_XMM13;
            if (bVar42) {
              local_2f8 = blendps(unaff_XMM13,auVar333,1);
            }
            auVar408 = ZEXT416(*(uint *)(param_4 + auVar53._8_8_));
            auVar53 = insertps(auVar114,auVar408,0x10);
            auVar114 = ZEXT416(*(uint *)(param_4 + auVar266._0_8_));
            auVar53 = insertps(auVar53,auVar114,0x20);
            uVar44 = *(uint *)(param_4 + auVar266._8_8_);
            auVar266 = insertps(auVar53,ZEXT416(uVar44),0x30);
            auVar217 = ZEXT416(*(uint *)(auVar115._8_8_ + lVar26));
            auVar53 = insertps(auVar333,auVar217,0x10);
            auVar333 = ZEXT416(*(uint *)(auVar339._0_8_ + lVar27));
            auVar53 = insertps(auVar53,auVar333,0x20);
            uVar46 = *(uint *)(auVar339._8_8_ + lVar36);
            auVar267 = insertps(auVar53,ZEXT416(uVar46),0x30);
            uVar43 = *(uint *)(auVar168._0_8_ + lVar29);
            auVar339 = ZEXT416(*(uint *)(auVar168._8_8_ + lVar26));
            auVar168 = insertps(ZEXT416(uVar43),auVar339,0x10);
            auVar115 = ZEXT416(*(uint *)(auVar376._0_8_ + lVar27));
            auVar53 = insertps(auVar168,auVar115,0x20);
            auVar168 = ZEXT416(*(uint *)(auVar376._8_8_ + lVar36));
            auVar53 = insertps(auVar53,auVar168,0x30);
            auVar245._0_4_ = auVar266._0_4_ * auVar266._0_4_;
            auVar245._4_4_ = auVar266._4_4_ * auVar266._4_4_;
            auVar245._8_4_ = auVar266._8_4_ * auVar266._8_4_;
            auVar245._12_4_ = auVar266._12_4_ * auVar266._12_4_;
            auVar411._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar245._0_4_) -
                 auVar267._0_4_ * auVar267._0_4_) - auVar53._0_4_ * auVar53._0_4_;
            auVar411._4_4_ =
                 ((_UNK_15076b1f4 - auVar245._4_4_) - auVar267._4_4_ * auVar267._4_4_) -
                 auVar53._4_4_ * auVar53._4_4_;
            auVar411._8_4_ =
                 ((_UNK_15076b1f8 - auVar245._8_4_) - auVar267._8_4_ * auVar267._8_4_) -
                 auVar53._8_4_ * auVar53._8_4_;
            auVar411._12_4_ =
                 ((_UNK_15076b1fc - auVar245._12_4_) - auVar267._12_4_ * auVar267._12_4_) -
                 auVar53._12_4_ * auVar53._12_4_;
            auVar53 = sqrtps(auVar245,auVar411);
            auVar246._0_8_ =
                 CONCAT44(auVar53._4_4_ & -(uint)(0.0 < auVar411._4_4_),
                          auVar53._0_4_ & -(uint)(0.0 < auVar411._0_4_));
            auVar246._8_4_ = auVar53._8_4_ & -(uint)(0.0 < auVar411._8_4_);
            auVar246._12_4_ = auVar53._12_4_ & -(uint)(0.0 < auVar411._12_4_);
            auVar389 = local_2b8;
            if (bVar42) {
              local_308 = blendps(local_308,ZEXT416(uVar43),1);
              auVar389._8_4_ = auVar246._8_4_;
              auVar389._0_8_ = auVar246._0_8_;
              auVar389._12_4_ = auVar246._12_4_;
            }
            bVar42 = (bVar30 & 2) == 0;
            unaff_XMM13 = local_2f8;
            uVar43 = ___xmm_00000001000000010000000100000001;
            if (!bVar42) {
              local_328 = insertps(local_328,auVar408,0x10);
              uVar43 = 0;
              unaff_XMM13 = insertps(local_2f8,auVar217,0x10);
              local_308 = insertps(local_308,auVar339,0x10);
            }
            auVar53 = blendps(local_2b8,auVar389,1);
            if (bVar42) {
              auVar353 = auVar53;
              if ((bVar30 & 4) != 0) goto LAB_140b0f7f4;
LAB_140b0f78e:
              auVar309 = blendps(auVar53,auVar353,2);
              auVar53 = auVar309;
              if (-1 < (char)bVar30) goto LAB_140b0f827;
LAB_140b0f7be:
              local_328 = insertps(local_328,uVar44,0x30);
              if ((char)bVar30 < '\0') goto LAB_140b0f7c9;
LAB_140b0f829:
              if (-1 < (char)bVar30) goto LAB_140b0f82b;
LAB_140b0f7d4:
              local_308 = insertps(local_308,auVar168,0x30);
              auVar168 = blendps(auVar53,auVar309,4);
            }
            else {
              auVar353._8_4_ = auVar246._8_4_;
              auVar353._0_8_ = auVar246._0_8_;
              auVar353._12_4_ = auVar246._12_4_;
              if ((bVar30 & 4) == 0) goto LAB_140b0f78e;
LAB_140b0f7f4:
              local_328 = insertps(local_328,auVar114,0x20);
              unaff_XMM13 = insertps(unaff_XMM13,auVar333,0x20);
              local_308 = insertps(local_308,auVar115,0x20);
              auVar53 = blendps(auVar53,auVar353,2);
              auVar309._8_4_ = auVar246._8_4_;
              auVar309._0_8_ = auVar246._0_8_;
              auVar309._12_4_ = auVar246._12_4_;
              if ((char)bVar30 < '\0') goto LAB_140b0f7be;
LAB_140b0f827:
              if (-1 < (char)bVar30) goto LAB_140b0f829;
LAB_140b0f7c9:
              unaff_XMM13 = insertps(unaff_XMM13,uVar46,0x30);
              if ((char)bVar30 < '\0') goto LAB_140b0f7d4;
LAB_140b0f82b:
              auVar168 = blendps(auVar53,auVar309,4);
            }
            if (-1 < (char)bVar30) {
              auVar246 = auVar168;
            }
            local_2b8 = blendps(auVar168,auVar246,8);
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 2:
            auVar275._0_8_ = lVar36 + local_258 + lVar111;
            auVar275._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar296._0_8_ = lVar26 + local_268 + lVar263;
            auVar296._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar266,auVar168);
            auVar53 = blendvps(ZEXT816(0),auVar296,auVar168);
            auVar170._4_4_ = uVar348;
            auVar170._0_4_ = uVar348;
            auVar170._8_4_ = auVar169._12_4_;
            auVar170._12_4_ = auVar169._12_4_;
            auVar114 = blendvps(ZEXT816(0),auVar275,auVar170);
            lVar26 = param_4 + auVar53._0_8_;
            lVar27 = param_4 + auVar53._8_8_;
            lVar36 = param_4 + auVar114._0_8_;
            auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar168);
            auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar170);
            auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar168);
            auVar266 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar170);
            lVar29 = param_4 + auVar114._8_8_;
            auVar67._0_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar53._0_8_) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar67._4_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar53._8_8_) + _UNK_151c6b8e4);
            auVar67._8_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar114._0_8_) + _UNK_151c6b8e8);
            auVar67._12_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar114._8_8_) + _UNK_151c6b8ec);
            auVar168 = divps(auVar67,___xmm_46fffe0046fffe0046fffe0046fffe00);
            bVar42 = (bVar30 & 1) != 0;
            auVar53 = local_328;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar396._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar396._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar27) + _UNK_151c6b8e4);
            auVar396._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar339._0_8_ + lVar36) + _UNK_151c6b8e8);
            auVar396._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar339._8_8_ + lVar29) + _UNK_151c6b8ec);
            auVar115 = divps(auVar396,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar171._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar376._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar171._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar376._8_8_ + lVar27) + _UNK_151c6b8e4);
            auVar171._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar36) + _UNK_151c6b8e8);
            auVar171._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar29) + _UNK_151c6b8ec);
            auVar339 = divps(auVar171,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar239._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar168._0_4_ * auVar168._0_4_) -
                 auVar115._0_4_ * auVar115._0_4_) - auVar339._0_4_ * auVar339._0_4_;
            auVar239._4_4_ =
                 ((_UNK_15076b1f4 - auVar168._4_4_ * auVar168._4_4_) -
                 auVar115._4_4_ * auVar115._4_4_) - auVar339._4_4_ * auVar339._4_4_;
            auVar239._8_4_ =
                 ((_UNK_15076b1f8 - auVar168._8_4_ * auVar168._8_4_) -
                 auVar115._8_4_ * auVar115._8_4_) - auVar339._8_4_ * auVar339._8_4_;
            auVar239._12_4_ =
                 ((_UNK_15076b1fc - auVar168._12_4_ * auVar168._12_4_) -
                 auVar115._12_4_ * auVar115._12_4_) - auVar339._12_4_ * auVar339._12_4_;
            auVar266 = sqrtps(auVar239,auVar239);
            auVar372._0_8_ =
                 CONCAT44(auVar266._4_4_ & -(uint)(0.0 < auVar239._4_4_),
                          auVar266._0_4_ & -(uint)(0.0 < auVar239._0_4_));
            auVar372._8_4_ = auVar266._8_4_ & -(uint)(0.0 < auVar239._8_4_);
            auVar372._12_4_ = auVar266._12_4_ & -(uint)(0.0 < auVar239._12_4_);
            auVar297 = local_2b8;
            auVar266 = local_308;
            auVar114 = unaff_XMM13;
            if (bVar42) {
              auVar297._8_4_ = auVar372._8_4_;
              auVar297._0_8_ = auVar372._0_8_;
              auVar297._12_4_ = auVar372._12_4_;
              auVar266 = auVar339;
              auVar114 = auVar115;
            }
            auVar376 = blendps(local_328,auVar53,1);
            bVar42 = (bVar30 & 2) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(unaff_XMM13,auVar114,1);
            auVar114 = auVar333;
            if (bVar42) {
              auVar114 = auVar115;
            }
            auVar408 = blendps(local_308,auVar266,1);
            auVar266 = auVar408;
            if (bVar42) {
              auVar266 = auVar339;
            }
            auVar217 = blendps(local_2b8,auVar297,1);
            auVar298 = auVar217;
            if (bVar42) {
              auVar298._8_4_ = auVar372._8_4_;
              auVar298._0_8_ = auVar372._0_8_;
              auVar298._12_4_ = auVar372._12_4_;
            }
            auVar376 = blendps(auVar376,auVar53,2);
            bVar42 = (bVar30 & 4) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(auVar333,auVar114,2);
            auVar114 = auVar333;
            if (bVar42) {
              auVar114 = auVar115;
            }
            auVar408 = blendps(auVar408,auVar266,2);
            auVar266 = auVar408;
            if (bVar42) {
              auVar266 = auVar339;
            }
            auVar217 = blendps(auVar217,auVar298,2);
            auVar299 = auVar217;
            if (bVar42) {
              auVar299._8_4_ = auVar372._8_4_;
              auVar299._0_8_ = auVar372._0_8_;
              auVar299._12_4_ = auVar372._12_4_;
            }
            auVar53 = blendps(auVar376,auVar53,4);
            if ((char)bVar30 < '\0') {
              auVar376 = blendps(auVar333,auVar114,4);
              auVar114 = blendps(auVar408,auVar266,4);
              auVar266 = blendps(auVar217,auVar299,4);
            }
            else {
              auVar376 = blendps(auVar333,auVar114,4);
              auVar339 = blendps(auVar408,auVar266,4);
              auVar372 = blendps(auVar217,auVar299,4);
              auVar168 = auVar53;
              auVar266 = auVar372;
              auVar114 = auVar339;
              auVar115 = auVar376;
            }
            local_328 = blendps(auVar53,auVar168,8);
            unaff_XMM13 = blendps(auVar376,auVar115,8);
            local_308 = blendps(auVar114,auVar339,8);
            local_2b8 = blendps(auVar266,auVar372,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 3:
            auVar114 = unaff_XMM10 & auVar168;
            lVar4 = param_4 + auVar114._0_4_;
            lVar5 = param_4 + auVar114._4_4_;
            lVar6 = param_4 + auVar114._8_4_;
            lVar7 = param_4 + auVar114._12_4_;
            auVar266 = insertps(ZEXT416(*(uint *)(param_4 + auVar114._0_4_)),
                                *(undefined4 *)(param_4 + auVar114._4_4_),0x10);
            auVar266 = insertps(auVar266,*(undefined4 *)(param_4 + auVar114._8_4_),0x20);
            auVar114 = insertps(auVar266,*(undefined4 *)(param_4 + auVar114._12_4_),0x30);
            auVar266 = auVar168 & ___xmm_0000000c0000000c0000000c0000000c;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar240._0_8_ = lVar36 + local_258 + lVar111;
            auVar240._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar276._0_8_ = lVar26 + local_268 + lVar263;
            auVar276._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar53 = pmovsxdq(auVar53,auVar168);
            auVar53 = blendvps((undefined1  [16])0x0,auVar276,auVar53);
            auVar68._4_4_ = uVar348;
            auVar68._0_4_ = uVar348;
            auVar68._8_4_ = auVar169._12_4_;
            auVar68._12_4_ = auVar169._12_4_;
            auVar266 = blendvps((undefined1  [16])0x0,auVar240,auVar68);
            uVar43 = *(uint *)(param_4 + auVar53._0_8_);
            uVar44 = *(uint *)(param_4 + auVar53._8_8_);
            uVar46 = *(uint *)(param_4 + auVar266._0_8_);
            uVar47 = *(uint *)(param_4 + auVar266._8_8_);
            auVar69._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01)
            ;
            auVar69._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
            auVar69._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
            auVar69._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
            auVar53 = divps(auVar69,___xmm_447fc000447fc000447fc000447fc000);
            fVar49 = auVar53._0_4_ * auVar115._0_4_ + auVar114._0_4_;
            fVar106 = auVar53._4_4_ * auVar115._4_4_ + auVar114._4_4_;
            auVar70._0_8_ = CONCAT44(fVar106,fVar49);
            auVar70._8_4_ = auVar53._8_4_ * auVar115._8_4_ + auVar114._8_4_;
            auVar70._12_4_ = auVar53._12_4_ * auVar115._12_4_ + auVar114._12_4_;
            auVar300._0_4_ =
                 (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar300._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar300._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar300._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar53 = divps(auVar300,___xmm_43ff800043ff800043ff800043ff8000);
            bVar42 = (bVar30 & 1) != 0;
            auVar241 = local_328;
            if (bVar42) {
              auVar241._8_4_ = auVar70._8_4_;
              auVar241._0_8_ = auVar70._0_8_;
              auVar241._12_4_ = auVar70._12_4_;
            }
            auVar266 = auVar168 & ___xmm_00000004000000040000000400000004;
            auVar114 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar266 = auVar168 & ___xmm_00000008000000080000000800000008;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar266 = auVar168 & ___xmm_00000010000000100000001000000010;
            auVar339 = insertps(ZEXT416(*(uint *)((ulonglong)auVar266._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar266._4_4_ + lVar5),0x10);
            auVar339 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar266._8_4_ + lVar6),0x20);
            auVar339 = insertps(auVar339,*(undefined4 *)((ulonglong)auVar266._12_4_ + lVar7),0x30);
            auVar168 = auVar168 & ___xmm_00000014000000140000001400000014;
            auVar266 = insertps(ZEXT416(*(uint *)((ulonglong)auVar168._0_4_ + lVar4)),
                                *(undefined4 *)((ulonglong)auVar168._4_4_ + lVar5),0x10);
            auVar266 = insertps(auVar266,*(undefined4 *)((ulonglong)auVar168._8_4_ + lVar6),0x20);
            auVar168 = insertps(auVar266,*(undefined4 *)((ulonglong)auVar168._12_4_ + lVar7),0x30);
            fVar107 = auVar168._0_4_ * auVar53._0_4_ + auVar115._0_4_;
            fVar109 = auVar168._4_4_ * auVar53._4_4_ + auVar115._4_4_;
            auVar364._0_8_ = CONCAT44(fVar109,fVar107);
            auVar364._8_4_ = auVar168._8_4_ * auVar53._8_4_ + auVar115._8_4_;
            auVar364._12_4_ = auVar168._12_4_ * auVar53._12_4_ + auVar115._12_4_;
            auVar172._0_4_ =
                 (float)(int)((uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar172._4_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar172._8_4_ = (float)(int)((uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar172._12_4_ = (float)(int)((uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar168 = divps(auVar172,___xmm_447fc000447fc000447fc000447fc000);
            fVar110 = auVar168._0_4_ * auVar339._0_4_ + auVar114._0_4_;
            fVar147 = auVar168._4_4_ * auVar339._4_4_ + auVar114._4_4_;
            auVar397._0_8_ = CONCAT44(fVar147,fVar110);
            auVar397._8_4_ = auVar168._8_4_ * auVar339._8_4_ + auVar114._8_4_;
            auVar397._12_4_ = auVar168._12_4_ * auVar339._12_4_ + auVar114._12_4_;
            auVar277._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - fVar49 * fVar49) - fVar110 * fVar110) -
                 fVar107 * fVar107;
            auVar277._4_4_ =
                 ((_UNK_15076b1f4 - fVar106 * fVar106) - fVar147 * fVar147) - fVar109 * fVar109;
            auVar277._8_4_ =
                 ((_UNK_15076b1f8 - auVar70._8_4_ * auVar70._8_4_) - auVar397._8_4_ * auVar397._8_4_
                 ) - auVar364._8_4_ * auVar364._8_4_;
            auVar277._12_4_ =
                 ((_UNK_15076b1fc - auVar70._12_4_ * auVar70._12_4_) -
                 auVar397._12_4_ * auVar397._12_4_) - auVar364._12_4_ * auVar364._12_4_;
            auVar168 = sqrtps(auVar277,auVar277);
            auVar373._0_8_ =
                 CONCAT44(auVar168._4_4_ & -(uint)(0.0 < auVar277._4_4_),
                          auVar168._0_4_ & -(uint)(0.0 < auVar277._0_4_));
            auVar373._8_4_ = auVar168._8_4_ & -(uint)(0.0 < auVar277._8_4_);
            auVar373._12_4_ = auVar168._12_4_ & -(uint)(0.0 < auVar277._12_4_);
            auVar301 = local_2b8;
            auVar334 = local_308;
            auVar363 = unaff_XMM13;
            if (bVar42) {
              auVar363._8_4_ = auVar397._8_4_;
              auVar363._0_8_ = auVar397._0_8_;
              auVar363._12_4_ = auVar397._12_4_;
              auVar334._8_4_ = auVar364._8_4_;
              auVar334._0_8_ = auVar364._0_8_;
              auVar334._12_4_ = auVar364._12_4_;
              auVar301._8_4_ = auVar373._8_4_;
              auVar301._0_8_ = auVar373._0_8_;
              auVar301._12_4_ = auVar373._12_4_;
            }
            auVar168 = blendps(local_328,auVar241,1);
            bVar42 = (bVar30 & 2) != 0;
            auVar351 = auVar168;
            if (bVar42) {
              auVar351._8_4_ = auVar70._8_4_;
              auVar351._0_8_ = auVar70._0_8_;
              auVar351._12_4_ = auVar70._12_4_;
            }
            auVar53 = blendps(unaff_XMM13,auVar363,1);
            auVar242 = auVar53;
            if (bVar42) {
              auVar242._8_4_ = auVar397._8_4_;
              auVar242._0_8_ = auVar397._0_8_;
              auVar242._12_4_ = auVar397._12_4_;
            }
            auVar266 = blendps(local_308,auVar334,1);
            auVar335 = auVar266;
            if (bVar42) {
              auVar335._8_4_ = auVar364._8_4_;
              auVar335._0_8_ = auVar364._0_8_;
              auVar335._12_4_ = auVar364._12_4_;
            }
            auVar114 = blendps(local_2b8,auVar301,1);
            auVar302 = auVar114;
            if (bVar42) {
              auVar302._8_4_ = auVar373._8_4_;
              auVar302._0_8_ = auVar373._0_8_;
              auVar302._12_4_ = auVar373._12_4_;
            }
            auVar168 = blendps(auVar168,auVar351,2);
            bVar42 = (bVar30 & 4) != 0;
            auVar352 = auVar168;
            if (bVar42) {
              auVar352._8_4_ = auVar70._8_4_;
              auVar352._0_8_ = auVar70._0_8_;
              auVar352._12_4_ = auVar70._12_4_;
            }
            auVar53 = blendps(auVar53,auVar242,2);
            auVar243 = auVar53;
            if (bVar42) {
              auVar243._8_4_ = auVar397._8_4_;
              auVar243._0_8_ = auVar397._0_8_;
              auVar243._12_4_ = auVar397._12_4_;
            }
            auVar266 = blendps(auVar266,auVar335,2);
            auVar336 = auVar266;
            if (bVar42) {
              auVar336._8_4_ = auVar364._8_4_;
              auVar336._0_8_ = auVar364._0_8_;
              auVar336._12_4_ = auVar364._12_4_;
            }
            auVar114 = blendps(auVar114,auVar302,2);
            auVar303 = auVar114;
            if (bVar42) {
              auVar303._8_4_ = auVar373._8_4_;
              auVar303._0_8_ = auVar373._0_8_;
              auVar303._12_4_ = auVar373._12_4_;
            }
            auVar168 = blendps(auVar168,auVar352,4);
            if ((char)bVar30 < '\0') {
              auVar115 = blendps(auVar53,auVar243,4);
              auVar266 = blendps(auVar266,auVar336,4);
              auVar53 = blendps(auVar114,auVar303,4);
            }
            else {
              auVar397 = blendps(auVar53,auVar243,4);
              auVar364 = blendps(auVar266,auVar336,4);
              auVar373 = blendps(auVar114,auVar303,4);
              auVar70 = auVar168;
              auVar53 = auVar373;
              auVar266 = auVar364;
              auVar115 = auVar397;
            }
            local_328 = blendps(auVar168,auVar70,8);
            unaff_XMM13 = blendps(auVar115,auVar397,8);
            local_308 = blendps(auVar266,auVar364,8);
            local_2b8 = blendps(auVar53,auVar373,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 4:
            auVar216._0_8_ = lVar36 + local_258 + lVar111;
            auVar216._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar292._0_8_ = lVar26 + local_268 + lVar263;
            auVar292._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar53,auVar168);
            auVar168 = blendvps((undefined1  [16])0x0,auVar292,auVar168);
            auVar65._4_4_ = uVar348;
            auVar65._0_4_ = uVar348;
            auVar65._8_4_ = auVar169._12_4_;
            auVar65._12_4_ = auVar169._12_4_;
            auVar53 = blendvps(ZEXT816(0),auVar216,auVar65);
            uVar43 = *(uint *)(param_4 + auVar168._0_8_);
            uVar44 = *(uint *)(param_4 + auVar168._8_8_);
            uVar46 = *(uint *)(param_4 + auVar53._0_8_);
            uVar47 = *(uint *)(param_4 + auVar53._8_8_);
            auVar66._0_4_ = (float)(int)((uVar43 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01)
            ;
            auVar66._4_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b864);
            auVar66._8_4_ = (float)(int)((uVar46 >> 0x15) + _UNK_151c6b868);
            auVar66._12_4_ = (float)(int)((uVar47 >> 0x15) + _UNK_151c6b86c);
            auVar168 = divps(auVar66,___xmm_447fc000447fc000447fc000447fc000);
            auVar125._0_4_ =
                 (float)(int)((uVar43 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar125._4_4_ = (float)(int)((uVar44 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar125._8_4_ = (float)(int)((uVar46 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar125._12_4_ = (float)(int)((uVar47 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar266 = divps(auVar125,___xmm_43ff800043ff800043ff800043ff8000);
            bVar42 = (bVar30 & 1) != 0;
            auVar53 = local_328;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar395._0_4_ =
                 (float)(int)((uVar43 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar395._4_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar395._8_4_ = (float)(int)((uVar46 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar395._12_4_ = (float)(int)((uVar47 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar339 = divps(auVar395,___xmm_447fc000447fc000447fc000447fc000);
            auVar238._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar168._0_4_ * auVar168._0_4_) -
                 auVar339._0_4_ * auVar339._0_4_) - auVar266._0_4_ * auVar266._0_4_;
            auVar238._4_4_ =
                 ((_UNK_15076b1f4 - auVar168._4_4_ * auVar168._4_4_) -
                 auVar339._4_4_ * auVar339._4_4_) - auVar266._4_4_ * auVar266._4_4_;
            auVar238._8_4_ =
                 ((_UNK_15076b1f8 - auVar168._8_4_ * auVar168._8_4_) -
                 auVar339._8_4_ * auVar339._8_4_) - auVar266._8_4_ * auVar266._8_4_;
            auVar238._12_4_ =
                 ((_UNK_15076b1fc - auVar168._12_4_ * auVar168._12_4_) -
                 auVar339._12_4_ * auVar339._12_4_) - auVar266._12_4_ * auVar266._12_4_;
            auVar114 = sqrtps(auVar238,auVar238);
            auVar371._0_8_ =
                 CONCAT44(auVar114._4_4_ & -(uint)(0.0 < auVar238._4_4_),
                          auVar114._0_4_ & -(uint)(0.0 < auVar238._0_4_));
            auVar371._8_4_ = auVar114._8_4_ & -(uint)(0.0 < auVar238._8_4_);
            auVar371._12_4_ = auVar114._12_4_ & -(uint)(0.0 < auVar238._12_4_);
            auVar293 = local_2b8;
            auVar114 = local_308;
            auVar115 = unaff_XMM13;
            if (bVar42) {
              auVar293._8_4_ = auVar371._8_4_;
              auVar293._0_8_ = auVar371._0_8_;
              auVar293._12_4_ = auVar371._12_4_;
              auVar114 = auVar266;
              auVar115 = auVar339;
            }
            auVar376 = blendps(local_328,auVar53,1);
            bVar42 = (bVar30 & 2) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(unaff_XMM13,auVar115,1);
            auVar115 = auVar333;
            if (bVar42) {
              auVar115 = auVar339;
            }
            auVar408 = blendps(local_308,auVar114,1);
            auVar114 = auVar408;
            if (bVar42) {
              auVar114 = auVar266;
            }
            auVar217 = blendps(local_2b8,auVar293,1);
            auVar294 = auVar217;
            if (bVar42) {
              auVar294._8_4_ = auVar371._8_4_;
              auVar294._0_8_ = auVar371._0_8_;
              auVar294._12_4_ = auVar371._12_4_;
            }
            auVar376 = blendps(auVar376,auVar53,2);
            bVar42 = (bVar30 & 4) != 0;
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar168;
            }
            auVar333 = blendps(auVar333,auVar115,2);
            auVar115 = auVar333;
            if (bVar42) {
              auVar115 = auVar339;
            }
            auVar408 = blendps(auVar408,auVar114,2);
            auVar114 = auVar408;
            if (bVar42) {
              auVar114 = auVar266;
            }
            auVar217 = blendps(auVar217,auVar294,2);
            auVar295 = auVar217;
            if (bVar42) {
              auVar295._8_4_ = auVar371._8_4_;
              auVar295._0_8_ = auVar371._0_8_;
              auVar295._12_4_ = auVar371._12_4_;
            }
            auVar53 = blendps(auVar376,auVar53,4);
            if ((char)bVar30 < '\0') {
              auVar376 = blendps(auVar333,auVar115,4);
              auVar115 = blendps(auVar408,auVar114,4);
              auVar114 = blendps(auVar217,auVar295,4);
            }
            else {
              auVar376 = blendps(auVar333,auVar115,4);
              auVar266 = blendps(auVar408,auVar114,4);
              auVar371 = blendps(auVar217,auVar295,4);
              auVar168 = auVar53;
              auVar114 = auVar371;
              auVar115 = auVar266;
              auVar339 = auVar376;
            }
            local_328 = blendps(auVar53,auVar168,8);
            unaff_XMM13 = blendps(auVar376,auVar339,8);
            local_308 = blendps(auVar115,auVar266,8);
            local_2b8 = blendps(auVar114,auVar371,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
            break;
          case 5:
            auVar218._0_8_ = lVar36 + local_258 + lVar111;
            auVar218._8_8_ = lVar29 + lStack_250 + lVar150;
            auVar305._0_8_ = lVar26 + local_268 + lVar263;
            auVar305._8_8_ = lVar27 + lStack_260 + lVar108;
            auVar168 = pmovsxdq(auVar53,auVar168);
            auVar168 = blendvps((undefined1  [16])0x0,auVar305,auVar168);
            auVar71._4_4_ = uVar348;
            auVar71._0_4_ = uVar348;
            auVar71._8_4_ = auVar169._12_4_;
            auVar71._12_4_ = auVar169._12_4_;
            auVar53 = blendvps(ZEXT816(0),auVar218,auVar71);
            uVar43 = *(uint *)(param_4 + auVar168._0_8_);
            uVar44 = *(uint *)(param_4 + auVar168._8_8_);
            auVar247._4_4_ = uVar44;
            auVar247._0_4_ = uVar43;
            uVar46 = *(uint *)(param_4 + auVar53._0_8_);
            uVar47 = *(uint *)(param_4 + auVar53._8_8_);
            auVar247._12_4_ = uVar47;
            auVar247._8_4_ = uVar46;
            auVar72._0_4_ = uVar43 >> 0x15;
            auVar72._4_4_ = uVar44 >> 0x15;
            auVar72._8_4_ = uVar46 >> 0x15;
            auVar72._12_4_ = uVar47 >> 0x15;
            auVar126._0_4_ = uVar43 >> 5;
            auVar126._4_4_ = uVar44 >> 5;
            auVar126._8_4_ = uVar46 >> 5;
            auVar126._12_4_ = uVar47 >> 5;
            auVar168 = auVar72 & ___xmm_00000380000003800000038000000380;
            auVar73._0_4_ = auVar168._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
            auVar73._4_4_ = auVar168._4_4_ + _UNK_151c6b7b4;
            auVar73._8_4_ = auVar168._8_4_ + _UNK_151c6b7b8;
            auVar73._12_4_ = auVar168._12_4_ + _UNK_151c6b7bc;
            auVar73 = auVar73 | auVar72 & ___xmm_00000400000004000000040000000400 |
                                auVar126 & ___xmm_007f0000007f0000007f0000007f0000;
            bVar42 = (bVar30 & 1) != 0;
            auVar168 = local_328;
            if (bVar42) {
              auVar168 = auVar73;
            }
            auVar127._0_4_ = uVar43 >> 10;
            auVar127._4_4_ = uVar44 >> 10;
            auVar127._8_4_ = uVar46 >> 10;
            auVar127._12_4_ = uVar47 >> 10;
            auVar174._0_4_ = uVar43 << 6;
            auVar174._4_4_ = uVar44 << 6;
            auVar174._8_4_ = uVar46 << 6;
            auVar174._12_4_ = uVar47 << 6;
            auVar53 = auVar127 & ___xmm_00000380000003800000038000000380;
            auVar128._0_4_ = auVar53._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
            auVar128._4_4_ = auVar53._4_4_ + _UNK_151c6b7b4;
            auVar128._8_4_ = auVar53._8_4_ + _UNK_151c6b7b8;
            auVar128._12_4_ = auVar53._12_4_ + _UNK_151c6b7bc;
            auVar128 = auVar128 |
                       auVar127 & ___xmm_00000400000004000000040000000400 |
                       auVar174 & ___xmm_007f0000007f0000007f0000007f0000;
            auVar53 = auVar247 & ___xmm_000001c0000001c0000001c0000001c0;
            auVar219._0_4_ = uVar43 << 0x11;
            auVar219._4_4_ = uVar44 << 0x11;
            auVar219._8_4_ = uVar46 << 0x11;
            auVar219._12_4_ = uVar47 << 0x11;
            auVar175._0_4_ = auVar53._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
            auVar175._4_4_ = auVar53._4_4_ + _UNK_151c6b824;
            auVar175._8_4_ = auVar53._8_4_ + _UNK_151c6b828;
            auVar175._12_4_ = auVar53._12_4_ + _UNK_151c6b82c;
            auVar114 = auVar175 | auVar247 & ___xmm_00000200000002000000020000000200 |
                       auVar219 & ___xmm_007e0000007e0000007e0000007e0000;
            auVar248._0_4_ =
                 ((___xmm_3f8000003f8000003f8000003f800000 - auVar73._0_4_ * auVar73._0_4_) -
                 auVar128._0_4_ * auVar128._0_4_) - auVar114._0_4_ * auVar114._0_4_;
            auVar248._4_4_ =
                 ((_UNK_15076b1f4 - auVar73._4_4_ * auVar73._4_4_) - auVar128._4_4_ * auVar128._4_4_
                 ) - auVar114._4_4_ * auVar114._4_4_;
            auVar248._8_4_ =
                 ((_UNK_15076b1f8 - auVar73._8_4_ * auVar73._8_4_) - auVar128._8_4_ * auVar128._8_4_
                 ) - auVar114._8_4_ * auVar114._8_4_;
            auVar248._12_4_ =
                 ((_UNK_15076b1fc - auVar73._12_4_ * auVar73._12_4_) -
                 auVar128._12_4_ * auVar128._12_4_) - auVar114._12_4_ * auVar114._12_4_;
            auVar53 = sqrtps(auVar248,auVar248);
            auVar374._0_8_ =
                 CONCAT44(auVar53._4_4_ & -(uint)(0.0 < auVar248._4_4_),
                          auVar53._0_4_ & -(uint)(0.0 < auVar248._0_4_));
            auVar374._8_4_ = auVar53._8_4_ & -(uint)(0.0 < auVar248._8_4_);
            auVar374._12_4_ = auVar53._12_4_ & -(uint)(0.0 < auVar248._12_4_);
            auVar306 = local_2b8;
            auVar53 = local_308;
            auVar266 = unaff_XMM13;
            if (bVar42) {
              auVar306._8_4_ = auVar374._8_4_;
              auVar306._0_8_ = auVar374._0_8_;
              auVar306._12_4_ = auVar374._12_4_;
              auVar53 = auVar114;
              auVar266 = auVar128;
            }
            auVar115 = pblendw(local_328,auVar168,3);
            bVar42 = (bVar30 & 2) != 0;
            auVar168 = auVar115;
            if (bVar42) {
              auVar168 = auVar73;
            }
            auVar339 = blendps(unaff_XMM13,auVar266,1);
            auVar266 = auVar339;
            if (bVar42) {
              auVar266 = auVar128;
            }
            auVar376 = blendps(local_308,auVar53,1);
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar114;
            }
            auVar333 = blendps(local_2b8,auVar306,1);
            auVar307 = auVar333;
            if (bVar42) {
              auVar307._8_4_ = auVar374._8_4_;
              auVar307._0_8_ = auVar374._0_8_;
              auVar307._12_4_ = auVar374._12_4_;
            }
            auVar115 = pblendw(auVar115,auVar168,0xc);
            bVar42 = (bVar30 & 4) != 0;
            auVar168 = auVar115;
            if (bVar42) {
              auVar168 = auVar73;
            }
            auVar339 = blendps(auVar339,auVar266,2);
            auVar266 = auVar339;
            if (bVar42) {
              auVar266 = auVar128;
            }
            auVar376 = blendps(auVar376,auVar53,2);
            auVar53 = auVar376;
            if (bVar42) {
              auVar53 = auVar114;
            }
            auVar333 = blendps(auVar333,auVar307,2);
            auVar308 = auVar333;
            if (bVar42) {
              auVar308._8_4_ = auVar374._8_4_;
              auVar308._0_8_ = auVar374._0_8_;
              auVar308._12_4_ = auVar374._12_4_;
            }
            auVar168 = pblendw(auVar115,auVar168,0x30);
            if ((char)bVar30 < '\0') {
              auVar115 = blendps(auVar339,auVar266,4);
              auVar266 = blendps(auVar376,auVar53,4);
              auVar53 = blendps(auVar333,auVar308,4);
            }
            else {
              auVar128 = blendps(auVar339,auVar266,4);
              auVar114 = blendps(auVar376,auVar53,4);
              auVar374 = blendps(auVar333,auVar308,4);
              auVar73 = auVar168;
              auVar53 = auVar374;
              auVar266 = auVar114;
              auVar115 = auVar128;
            }
            local_328 = pblendw(auVar168,auVar73,0xc0);
            unaff_XMM13 = blendps(auVar115,auVar128,8);
            local_308 = blendps(auVar266,auVar114,8);
            local_2b8 = blendps(auVar53,auVar374,8);
            uVar43 = ___xmm_00000001000000010000000100000001;
            uVar44 = _UNK_150631da4;
            uVar46 = _UNK_150631da8;
            uVar47 = _UNK_150631dac;
          }
        }
        else {
          auVar168 = ZEXT816(0);
          if ((bVar30 & 1) != 0) {
            local_328 = blendps(local_328,auVar168,1);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,1);
            local_308 = blendps(local_308,auVar168,1);
            local_2b8 = blendps(local_2b8,ZEXT416((uint)__real_3f800000),1);
          }
          if ((bVar30 & 2) != 0) {
            local_328 = blendps(local_328,auVar168,2);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,2);
            local_308 = blendps(local_308,auVar168,2);
            local_2b8 = insertps(local_2b8,ZEXT416((uint)__real_3f800000),0x10);
          }
          if ((bVar30 & 4) != 0) {
            local_328 = blendps(local_328,auVar168,4);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,4);
            local_308 = blendps(local_308,auVar168,4);
            local_2b8 = insertps(local_2b8,ZEXT416((uint)__real_3f800000),0x20);
          }
          if ((char)bVar30 < '\0') {
            local_328 = blendps(local_328,auVar168,8);
            unaff_XMM13 = blendps(unaff_XMM13,auVar168,8);
            local_308 = blendps(local_308,auVar168,8);
            local_2b8 = insertps(local_2b8,ZEXT416((uint)__real_3f800000),0x30);
          }
        }
        fVar265 = unaff_XMM11._0_4_;
        fVar280 = unaff_XMM11._4_4_;
        fVar282 = unaff_XMM11._8_4_;
        fVar284 = unaff_XMM11._12_4_;
        fVar264 = (___xmm_3f8000003f8000003f8000003f800000 - fVar265) *
                  (float)(int)(-(uint)(unaff_XMM14._0_4_ * local_2b8._0_4_ +
                                       in_XMM3._0_4_ * unaff_XMM13._0_4_ +
                                       unaff_XMM7._0_4_ * local_308._0_4_ +
                                       unaff_XMM12._0_4_ * local_328._0_4_ < 0.0) | uVar43);
        fVar279 = (_UNK_15076b1f4 - fVar280) *
                  (float)(int)(-(uint)(unaff_XMM14._4_4_ * local_2b8._4_4_ +
                                       in_XMM3._4_4_ * unaff_XMM13._4_4_ +
                                       unaff_XMM7._4_4_ * local_308._4_4_ +
                                       unaff_XMM12._4_4_ * local_328._4_4_ < 0.0) | uVar44);
        fVar281 = (_UNK_15076b1f8 - fVar282) *
                  (float)(int)(-(uint)(unaff_XMM14._8_4_ * local_2b8._8_4_ +
                                       in_XMM3._8_4_ * unaff_XMM13._8_4_ +
                                       unaff_XMM7._8_4_ * local_308._8_4_ +
                                       unaff_XMM12._8_4_ * local_328._8_4_ < 0.0) | uVar46);
        fVar283 = (_UNK_15076b1fc - fVar284) *
                  (float)(int)(-(uint)(unaff_XMM14._12_4_ * local_2b8._12_4_ +
                                       in_XMM3._12_4_ * unaff_XMM13._12_4_ +
                                       unaff_XMM7._12_4_ * local_308._12_4_ +
                                       unaff_XMM12._12_4_ * local_328._12_4_ < 0.0) | uVar47);
        fVar49 = unaff_XMM12._0_4_ * fVar264 + fVar265 * local_328._0_4_;
        fVar106 = unaff_XMM12._4_4_ * fVar279 + fVar280 * local_328._4_4_;
        fVar107 = unaff_XMM12._8_4_ * fVar281 + fVar282 * local_328._8_4_;
        fVar109 = unaff_XMM12._12_4_ * fVar283 + fVar284 * local_328._12_4_;
        fVar110 = in_XMM3._0_4_ * fVar264 + fVar265 * unaff_XMM13._0_4_;
        fVar147 = in_XMM3._4_4_ * fVar279 + fVar280 * unaff_XMM13._4_4_;
        fVar148 = in_XMM3._8_4_ * fVar281 + fVar282 * unaff_XMM13._8_4_;
        fVar151 = in_XMM3._12_4_ * fVar283 + fVar284 * unaff_XMM13._12_4_;
        fVar153 = unaff_XMM7._0_4_ * fVar264 + fVar265 * local_308._0_4_;
        fVar204 = unaff_XMM7._4_4_ * fVar279 + fVar280 * local_308._4_4_;
        fVar205 = unaff_XMM7._8_4_ * fVar281 + fVar282 * local_308._8_4_;
        fVar206 = unaff_XMM7._12_4_ * fVar283 + fVar284 * local_308._12_4_;
        fVar265 = fVar264 * unaff_XMM14._0_4_ + fVar265 * local_2b8._0_4_;
        fVar280 = fVar279 * unaff_XMM14._4_4_ + fVar280 * local_2b8._4_4_;
        fVar282 = fVar281 * unaff_XMM14._8_4_ + fVar282 * local_2b8._8_4_;
        fVar284 = fVar283 * unaff_XMM14._12_4_ + fVar284 * local_2b8._12_4_;
        auVar249._0_4_ = fVar110 * fVar110;
        auVar249._4_4_ = fVar147 * fVar147;
        auVar249._8_4_ = fVar148 * fVar148;
        auVar249._12_4_ = fVar151 * fVar151;
        auVar310._0_4_ = fVar265 * fVar265 + auVar249._0_4_ + fVar153 * fVar153 + fVar49 * fVar49;
        auVar310._4_4_ = fVar280 * fVar280 + auVar249._4_4_ + fVar204 * fVar204 + fVar106 * fVar106;
        auVar310._8_4_ = fVar282 * fVar282 + auVar249._8_4_ + fVar205 * fVar205 + fVar107 * fVar107;
        auVar310._12_4_ =
             fVar284 * fVar284 + auVar249._12_4_ + fVar206 * fVar206 + fVar109 * fVar109;
        auVar168 = rsqrtps(auVar249,auVar310);
        fVar264 = auVar168._0_4_;
        fVar279 = auVar168._4_4_;
        fVar281 = auVar168._8_4_;
        fVar283 = auVar168._12_4_;
        fVar264 = (___xmm_3f0000003f0000003f0000003f000000 -
                  fVar264 * fVar264 * auVar310._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) *
                  fVar264 + fVar264;
        fVar279 = (_UNK_150689624 - fVar279 * fVar279 * auVar310._4_4_ * _UNK_150689624) * fVar279 +
                  fVar279;
        fVar281 = (_UNK_150689628 - fVar281 * fVar281 * auVar310._8_4_ * _UNK_150689628) * fVar281 +
                  fVar281;
        fVar283 = (_UNK_15068962c - fVar283 * fVar283 * auVar310._12_4_ * _UNK_15068962c) * fVar283
                  + fVar283;
        uVar43 = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar310._0_4_);
        uVar44 = -(uint)(_UNK_1506895d4 <= auVar310._4_4_);
        uVar46 = -(uint)(_UNK_1506895d8 <= auVar310._8_4_);
        uVar47 = -(uint)(_UNK_1506895dc <= auVar310._12_4_);
        fVar264 = (___xmm_3f0000003f0000003f0000003f000000 -
                  fVar264 * fVar264 * auVar310._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) *
                  fVar264 + fVar264;
        fVar279 = (_UNK_150689624 - fVar279 * fVar279 * auVar310._4_4_ * _UNK_150689624) * fVar279 +
                  fVar279;
        fVar281 = (_UNK_150689628 - fVar281 * fVar281 * auVar310._8_4_ * _UNK_150689628) * fVar281 +
                  fVar281;
        fVar283 = (_UNK_15068962c - fVar283 * fVar283 * auVar310._12_4_ * _UNK_15068962c) * fVar283
                  + fVar283;
        auVar74._0_8_ =
             CONCAT44((uint)(fVar106 * fVar279) & uVar44,(uint)(fVar49 * fVar264) & uVar43);
        auVar74._8_4_ = (uint)(fVar107 * fVar281) & uVar46;
        auVar74._12_4_ = (uint)(fVar109 * fVar283) & uVar47;
        bVar42 = (bVar30 & 1) != 0;
        auVar337 = unaff_XMM12;
        if (bVar42) {
          auVar337._8_4_ = auVar74._8_4_;
          auVar337._0_8_ = auVar74._0_8_;
          auVar337._12_4_ = auVar74._12_4_;
        }
        auVar129._0_8_ =
             CONCAT44((uint)(fVar147 * fVar279) & uVar44,(uint)(fVar110 * fVar264) & uVar43);
        auVar129._8_4_ = (uint)(fVar148 * fVar281) & uVar46;
        auVar129._12_4_ = (uint)(fVar151 * fVar283) & uVar47;
        auVar176._0_8_ =
             CONCAT44((uint)(fVar204 * fVar279) & uVar44,(uint)(fVar153 * fVar264) & uVar43);
        auVar176._8_4_ = (uint)(fVar205 * fVar281) & uVar46;
        auVar176._12_4_ = (uint)(fVar206 * fVar283) & uVar47;
        auVar278._0_4_ = (uint)(fVar265 * fVar264) & uVar43;
        auVar278._4_4_ = (uint)(fVar280 * fVar279) & uVar44;
        auVar278._8_4_ = (uint)(fVar282 * fVar281) & uVar46;
        auVar278._12_4_ = (uint)(fVar284 * fVar283) & uVar47;
        auVar250._0_4_ =
             -(uint)(auVar310._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77) &
             (uint)___xmm_3f8000003f8000003f8000003f800000;
        auVar250._4_4_ = -(uint)(auVar310._4_4_ < _UNK_1506895d4) & (uint)_UNK_15076b1f4;
        auVar250._8_4_ = -(uint)(auVar310._8_4_ < _UNK_1506895d8) & (uint)_UNK_15076b1f8;
        auVar250._12_4_ = -(uint)(auVar310._12_4_ < _UNK_1506895dc) & (uint)_UNK_15076b1fc;
        auVar250 = auVar250 | auVar278;
        auVar168 = unaff_XMM14;
        auVar311 = in_XMM3;
        unaff_XMM10 = unaff_XMM7;
        if (bVar42) {
          auVar311._8_4_ = auVar129._8_4_;
          auVar311._0_8_ = auVar129._0_8_;
          auVar311._12_4_ = auVar129._12_4_;
          unaff_XMM10._8_4_ = auVar176._8_4_;
          unaff_XMM10._0_8_ = auVar176._0_8_;
          unaff_XMM10._12_4_ = auVar176._12_4_;
          auVar168 = auVar250;
        }
        auVar53 = blendps(unaff_XMM12,auVar337,1);
        if ((bVar30 & 2) == 0) {
          auVar266 = blendps(in_XMM3,auVar311,1);
          auVar114 = blendps(unaff_XMM7,unaff_XMM10,1);
          auVar115 = blendps(unaff_XMM14,auVar168,1);
          auVar53 = blendps(auVar53,auVar53,2);
          auVar168 = auVar115;
          auVar312 = auVar266;
          auVar338 = auVar114;
          if ((bVar30 & 4) != 0) goto LAB_140b0fa3e;
LAB_140b0fb26:
          auVar266 = blendps(auVar266,auVar312,2);
          auVar114 = blendps(auVar114,auVar338,2);
          auVar115 = blendps(auVar115,auVar168,2);
          auVar168 = blendps(auVar53,auVar53,4);
          auVar53 = auVar115;
          unaff_XMM6 = auVar266;
          unaff_XMM8 = auVar114;
          if (-1 < (char)bVar30) goto LAB_140b0fa86;
LAB_140b0fb6c:
          auVar266 = blendps(auVar266,unaff_XMM6,4);
          if (-1 < (char)bVar30) goto LAB_140b0fb81;
LAB_140b0fa9f:
          auVar114 = blendps(auVar114,unaff_XMM8,4);
          if (-1 < (char)bVar30) goto LAB_140b0faac;
LAB_140b0fb91:
          auVar53 = blendps(auVar115,auVar53,4);
        }
        else {
          auVar354._8_4_ = auVar74._8_4_;
          auVar354._0_8_ = auVar74._0_8_;
          auVar354._12_4_ = auVar74._12_4_;
          auVar266 = blendps(in_XMM3,auVar311,1);
          auVar312._8_4_ = auVar129._8_4_;
          auVar312._0_8_ = auVar129._0_8_;
          auVar312._12_4_ = auVar129._12_4_;
          auVar114 = blendps(unaff_XMM7,unaff_XMM10,1);
          auVar338._8_4_ = auVar176._8_4_;
          auVar338._0_8_ = auVar176._0_8_;
          auVar338._12_4_ = auVar176._12_4_;
          auVar115 = blendps(unaff_XMM14,auVar168,1);
          auVar53 = blendps(auVar53,auVar354,2);
          auVar168 = auVar250;
          if ((bVar30 & 4) == 0) goto LAB_140b0fb26;
LAB_140b0fa3e:
          auVar355._8_4_ = auVar74._8_4_;
          auVar355._0_8_ = auVar74._0_8_;
          auVar355._12_4_ = auVar74._12_4_;
          auVar266 = blendps(auVar266,auVar312,2);
          unaff_XMM6._8_4_ = (float)auVar129._8_4_;
          unaff_XMM6._0_8_ = auVar129._0_8_;
          unaff_XMM6._12_4_ = (float)auVar129._12_4_;
          auVar114 = blendps(auVar114,auVar338,2);
          unaff_XMM8._8_4_ = auVar176._8_4_;
          unaff_XMM8._0_8_ = auVar176._0_8_;
          unaff_XMM8._12_4_ = auVar176._12_4_;
          auVar115 = blendps(auVar115,auVar168,2);
          auVar168 = blendps(auVar53,auVar355,4);
          auVar53 = auVar250;
          if ((char)bVar30 < '\0') goto LAB_140b0fb6c;
LAB_140b0fa86:
          auVar74 = auVar168;
          auVar266 = blendps(auVar266,unaff_XMM6,4);
          auVar168 = auVar74;
          if ((char)bVar30 < '\0') goto LAB_140b0fa9f;
LAB_140b0fb81:
          auVar129 = auVar266;
          auVar114 = blendps(auVar114,unaff_XMM8,4);
          auVar266 = auVar129;
          if ((char)bVar30 < '\0') goto LAB_140b0fb91;
LAB_140b0faac:
          auVar53 = blendps(auVar115,auVar53,4);
          auVar176 = auVar114;
        }
        if (-1 < (char)bVar30) {
          auVar250 = auVar53;
        }
        unaff_XMM12 = blendps(auVar168,auVar74,8);
        in_XMM3 = blendps(auVar266,auVar129,8);
        unaff_XMM7 = blendps(auVar114,auVar176,8);
        unaff_XMM14 = blendps(auVar53,auVar250,8);
        uVar43 = ___xmm_00000001000000010000000100000001;
        uVar44 = _UNK_150631da4;
        uVar46 = _UNK_150631da8;
        uVar47 = _UNK_150631dac;
      }
LAB_140b0c67a:
      auVar112._0_8_ = unaff_XMM7._0_8_;
      fStack_f0 = unaff_XMM7._12_4_;
      auVar112._8_4_ = unaff_XMM7._4_4_;
      auVar112._12_4_ = unaff_XMM14._4_4_;
      auVar235._0_8_ = unaff_XMM12._0_8_;
      auVar235._8_4_ = unaff_XMM12._4_4_;
      auVar235._12_4_ = in_XMM3._4_4_;
      auVar236._0_4_ = unaff_XMM12._0_4_;
      auVar236._4_4_ = in_XMM3._0_4_;
      auVar52._0_8_ = CONCAT44(in_XMM3._8_4_,unaff_XMM12._8_4_);
      auVar52._8_4_ = unaff_XMM12._12_4_;
      auVar52._12_4_ = in_XMM3._12_4_;
      local_128 = CONCAT44(in_XMM3._0_4_,auVar236._0_4_);
      uStack_120 = CONCAT44(unaff_XMM14._0_4_,unaff_XMM7._0_4_);
      local_118 = auVar235._8_8_;
      uStack_110 = auVar112._8_8_;
      local_108 = auVar52._0_8_;
      uStack_100 = unaff_XMM7._8_4_;
      uStack_fc = unaff_XMM14._8_4_;
      local_f8 = auVar52._8_8_;
      fStack_ec = unaff_XMM14._12_4_;
      local_1f8 = (int)*puVar1;
      auVar236._8_8_ = auVar112._0_8_;
      auVar168 = insertps(auVar236,unaff_XMM14,0x30);
      pdVar3 = (double *)(param_1 + (longlong)local_1f8 * 0x60);
      *pdVar3 = (double)auVar168._0_4_;
      pdVar3[1] = (double)auVar168._4_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)local_1f8 * 0x60);
      *pdVar3 = (double)auVar168._8_4_;
      pdVar3[1] = (double)auVar168._12_4_;
      auVar168 = insertps(in_XMM3,unaff_XMM12,0x4c);
      auVar113._0_8_ = auVar168._0_8_;
      auVar113._8_4_ = unaff_XMM7._4_4_;
      auVar113._12_4_ = fStack_f0;
      auVar168 = insertps(auVar113,unaff_XMM14,0x70);
      pdVar3 = (double *)(param_1 + (longlong)iVar24 * 0x60);
      *pdVar3 = (double)auVar168._0_4_;
      pdVar3[1] = (double)auVar168._4_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)iVar24 * 0x60);
      *pdVar3 = (double)auVar168._8_4_;
      pdVar3[1] = (double)auVar168._12_4_;
      local_228 = (int)uVar22;
      auVar168 = blendps(auVar52,unaff_XMM7,0xc);
      auVar168 = insertps(auVar168,unaff_XMM14,0xb0);
      pdVar3 = (double *)(param_1 + (longlong)local_228 * 0x60);
      *pdVar3 = (double)auVar168._0_4_;
      pdVar3[1] = (double)auVar168._4_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)local_228 * 0x60);
      *pdVar3 = (double)auVar168._8_4_;
      pdVar3[1] = (double)auVar168._12_4_;
      pdVar3 = (double *)(param_1 + (longlong)iVar19 * 0x60);
      *pdVar3 = (double)unaff_XMM12._12_4_;
      pdVar3[1] = (double)in_XMM3._12_4_;
      pdVar3 = (double *)(param_1 + 0x10 + (longlong)iVar19 * 0x60);
      *pdVar3 = (double)fStack_f0;
      pdVar3[1] = (double)unaff_XMM14._12_4_;
      uVar20 = uVar20 + 0x20;
      uVar39 = uVar39 + 4;
    } while ((int)uVar39 < (int)(uVar45 & 0xfffffffc));
  }
  if ((int)param_9 <= (int)uVar39) {
    return;
  }
  auVar50 = ZEXT416(param_9);
  auVar413._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar39) < (int)param_9);
  auVar413._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar39) < (int)param_9);
  auVar413._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar39) < (int)param_9);
  auVar413._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar39) < (int)param_9);
  auVar75._0_4_ = uVar39 << 3;
  auVar75._4_4_ = uVar39 << 3;
  auVar75._8_4_ = uVar39 << 3;
  auVar75._12_4_ = uVar39 << 3;
  auVar75 = auVar75 & auVar413;
  auVar168 = ___xmm_00000018000000100000000800000000 & auVar413;
  lVar26 = auVar75._4_4_ + param_2;
  lVar27 = auVar75._8_4_ + param_2;
  uVar348 = *(undefined4 *)(param_2 + auVar75._0_4_);
  uVar349 = *(undefined4 *)((ulonglong)auVar168._4_4_ + lVar26);
  uVar12 = *(undefined4 *)((ulonglong)auVar168._8_4_ + lVar27);
  auVar51 = ___xmm_0000001c000000140000000c00000004 & auVar413;
  lVar36 = auVar75._12_4_ + param_2;
  auVar76._0_4_ = *(int *)((ulonglong)auVar51._0_4_ + param_2 + auVar75._0_4_) << 4;
  auVar76._4_4_ = *(int *)((ulonglong)auVar51._4_4_ + lVar26) << 4;
  auVar76._8_4_ = *(int *)((ulonglong)auVar51._8_4_ + lVar27) << 4;
  auVar76._12_4_ = *(int *)((ulonglong)auVar51._12_4_ + lVar36) << 4;
  auVar76 = auVar76 & auVar413;
  auVar51 = ___xmm_00000008000000080000000800000008 & auVar413;
  lVar26 = auVar76._0_4_ + param_3;
  lVar27 = auVar76._4_4_ + param_3;
  uVar20 = auVar76._8_4_ + param_3;
  uVar332 = *(undefined4 *)(auVar51._8_4_ + uVar20);
  param_3 = auVar76._12_4_ + param_3;
  uVar13 = *(undefined4 *)((ulonglong)auVar51._12_4_ + param_3);
  uVar22 = CONCAT44(*(undefined4 *)((ulonglong)auVar51._4_4_ + lVar27),
                    *(undefined4 *)((ulonglong)auVar51._0_4_ + lVar26));
  auVar130._12_4_ = uVar13;
  auVar130._8_4_ = uVar332;
  auVar130._0_8_ = uVar22;
  auVar51 = ___xmm_0000000c0000000c0000000c0000000c & auVar413;
  uVar39 = *(uint *)((ulonglong)auVar51._0_4_ + lVar26);
  uVar45 = *(uint *)((ulonglong)auVar51._4_4_ + lVar27);
  auVar251._4_4_ = uVar45;
  auVar251._0_4_ = uVar39;
  uVar43 = *(uint *)(auVar51._8_4_ + uVar20);
  uVar44 = *(uint *)((ulonglong)auVar51._12_4_ + param_3);
  auVar251._12_4_ = uVar44;
  auVar251._8_4_ = uVar43;
  auVar375._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 == uVar39);
  auVar375._4_4_ = -(uint)(_UNK_150631da4 == uVar45);
  auVar375._8_4_ = -(uint)(_UNK_150631da8 == uVar43);
  auVar375._12_4_ = -(uint)(_UNK_150631dac == uVar44);
  auVar51 = auVar375 & auVar413;
  iVar24 = movmskps((int)lVar27,auVar51);
  uVar46 = 0;
  if (iVar24 != 0) {
    bVar30 = (char)((char)iVar24 << 4) >> 4;
    uVar46 = CONCAT31((int3)((uint)iVar24 >> 8),bVar30);
    auVar50 = blendvps((undefined1  [16])0x0,auVar130,auVar51);
    uVar21 = extractps(auVar50,0);
    lVar26 = param_4 + (int)uVar21;
    uVar47 = *(uint *)(param_4 + (int)uVar21);
    uVar21 = extractps(auVar50,1);
    lVar27 = param_4 + (int)uVar21;
    auVar115 = insertps(ZEXT416(uVar47),*(undefined4 *)(param_4 + (int)uVar21),0x10);
    uVar21 = extractps(auVar50,2);
    lVar29 = param_4 + (int)uVar21;
    auVar408 = ZEXT416(*(uint *)(param_4 + (int)uVar21));
    uVar21 = extractps(auVar50,3);
    auVar114 = insertps(auVar115,auVar408,0x20);
    auVar53 = ZEXT416(*(uint *)(param_4 + (int)uVar21));
    auVar50 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar51);
    uVar32 = extractps(auVar50,0);
    uVar207 = *(uint *)((int)uVar32 + lVar26);
    uVar32 = extractps(auVar50,1);
    auVar339 = insertps(ZEXT416(uVar207),*(undefined4 *)((int)uVar32 + lVar27),0x10);
    uVar32 = extractps(auVar50,2);
    auVar333 = ZEXT416(*(uint *)((int)uVar32 + lVar29));
    uVar32 = extractps(auVar50,3);
    lVar263 = param_4 + (int)uVar21;
    auVar266 = ZEXT416(*(uint *)((int)uVar32 + lVar263));
    auVar50 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar51);
    uVar21 = extractps(auVar50,0);
    uVar233 = *(uint *)((int)uVar21 + lVar26);
    uVar21 = extractps(auVar50,1);
    auVar376 = insertps(ZEXT416(uVar233),*(undefined4 *)((int)uVar21 + lVar27),0x10);
    uVar21 = extractps(auVar50,2);
    auVar217 = ZEXT416(*(uint *)((int)uVar21 + lVar29));
    uVar21 = extractps(auVar50,3);
    auVar51 = ZEXT416(*(uint *)((int)uVar21 + lVar263));
    uVar20 = (ulonglong)uVar46 & 0xff;
    unaff_XMM10 = ZEXT416(uVar233);
    unaff_XMM12 = ZEXT416(uVar207);
    unaff_XMM9 = ZEXT416(uVar47);
    if ((bVar30 & 2) != 0) {
      unaff_XMM10 = auVar376;
      unaff_XMM12 = auVar339;
      unaff_XMM9 = auVar115;
    }
    auVar50 = insertps(auVar114,auVar53,0x30);
    auVar114 = insertps(auVar339,auVar333,0x20);
    bVar42 = (bVar30 & 4) != 0;
    if (bVar42) {
      unaff_XMM9 = insertps(unaff_XMM9,auVar408,0x20);
    }
    auVar114 = insertps(auVar114,auVar266,0x30);
    auVar115 = insertps(auVar376,auVar217,0x20);
    unaff_XMM6._0_4_ = auVar50._0_4_ * auVar50._0_4_;
    unaff_XMM6._4_4_ = auVar50._4_4_ * auVar50._4_4_;
    unaff_XMM6._8_4_ = auVar50._8_4_ * auVar50._8_4_;
    unaff_XMM6._12_4_ = auVar50._12_4_ * auVar50._12_4_;
    if (bVar42) {
      unaff_XMM12 = insertps(unaff_XMM12,auVar333,0x20);
    }
    auVar50 = insertps(auVar115,auVar51,0x30);
    if (bVar42) {
      unaff_XMM10 = insertps(unaff_XMM10,auVar217,0x20);
    }
    fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - unaff_XMM6._0_4_) -
             auVar114._0_4_ * auVar114._0_4_;
    fVar106 = (_UNK_15076b1f4 - unaff_XMM6._4_4_) - auVar114._4_4_ * auVar114._4_4_;
    fVar107 = (_UNK_15076b1f8 - unaff_XMM6._8_4_) - auVar114._8_4_ * auVar114._8_4_;
    fVar109 = (_UNK_15076b1fc - unaff_XMM6._12_4_) - auVar114._12_4_ * auVar114._12_4_;
    fVar110 = auVar50._0_4_ * auVar50._0_4_;
    fVar147 = auVar50._4_4_ * auVar50._4_4_;
    fVar148 = auVar50._8_4_ * auVar50._8_4_;
    fVar151 = auVar50._12_4_ * auVar50._12_4_;
    if ((char)bVar30 < '\0') {
      unaff_XMM9 = insertps(unaff_XMM9,auVar53,0x30);
      auVar323._0_4_ = fVar49 - fVar110;
      auVar323._4_4_ = fVar106 - fVar147;
      auVar323._8_4_ = fVar107 - fVar148;
      auVar323._12_4_ = fVar109 - fVar151;
      unaff_XMM12 = insertps(unaff_XMM12,auVar266,0x30);
      auVar50 = sqrtps(auVar53,auVar323);
      unaff_XMM10 = insertps(unaff_XMM10,auVar51,0x30);
    }
    else {
      auVar322._0_4_ = fVar49 - fVar110;
      auVar322._4_4_ = fVar106 - fVar147;
      auVar322._8_4_ = fVar107 - fVar148;
      auVar322._12_4_ = fVar109 - fVar151;
      auVar50 = sqrtps(auVar53,auVar322);
    }
    unaff_XMM13._0_4_ = -(uint)(0.0 < fVar49 - fVar110) & auVar50._0_4_;
    unaff_XMM13._4_4_ = -(uint)(0.0 < fVar106 - fVar147) & auVar50._4_4_;
    unaff_XMM13._8_4_ = -(uint)(0.0 < fVar107 - fVar148) & auVar50._8_4_;
    unaff_XMM13._12_4_ = -(uint)(0.0 < fVar109 - fVar151) & auVar50._12_4_;
  }
  uVar14 = *(undefined4 *)((ulonglong)auVar168._12_4_ + lVar36);
  auVar51 = ~auVar375 & auVar413;
  iVar24 = movmskps(uVar46,auVar51);
  uVar25 = 0;
  if (iVar24 == 0) goto LAB_140b1288a;
  auVar340._4_4_ = uVar13;
  auVar340._0_4_ = uVar332;
  auVar340._8_8_ = 0;
  bVar30 = (char)((char)iVar24 << 4) >> 4;
  auVar77._0_4_ = -(uint)((int)___xmm_00000001000000010000000100000001 < (int)uVar39);
  auVar77._4_4_ = -(uint)((int)_UNK_150631da4 < (int)uVar45);
  auVar77._8_4_ = -(uint)((int)_UNK_150631da8 < (int)uVar43);
  auVar77._12_4_ = -(uint)((int)_UNK_150631dac < (int)uVar44);
  auVar78 = ~auVar77 & auVar51;
  iVar19 = movmskps((int)uVar20,auVar78);
  uVar46 = auVar51._8_4_;
  uVar47 = auVar51._12_4_;
  auVar168 = ZEXT816(0);
  if ((iVar19 == 0) || (auVar168 = auVar78, (bVar30 & 0xf) != (byte)iVar19)) {
    local_318 = (undefined1  [16])0x0;
    uVar207 = auVar168._0_4_ ^ 0xffffffff;
    auVar78._0_8_ = auVar168._0_8_ ^ 0xffffffffffffffff;
    auVar78._8_4_ = auVar168._8_4_ ^ 0xffffffff;
    auVar78._12_4_ = auVar168._12_4_ ^ 0xffffffff;
    unaff_XMM6 = ZEXT416((uint)param_6);
    auVar168 = ZEXT816(0);
    auVar50 = ZEXT816(0);
    uVar233 = (uint)(auVar78._0_8_ >> 0x20);
    if (0.0 < param_6) {
      auVar251._0_4_ = uVar39 - 1;
      auVar251._4_4_ = uVar45 - 1;
      auVar251._8_4_ = uVar43 - 1;
      auVar251._12_4_ = uVar44 - 1;
      if (__real_3f800000 <= param_6) {
        auVar80._0_4_ = auVar51._0_4_ & uVar207;
        auVar80._4_4_ = auVar51._4_4_ & uVar233;
        auVar80._8_4_ = uVar46 & auVar78._8_4_;
        auVar80._12_4_ = uVar47 & auVar78._12_4_;
        auVar168 = blendvps(auVar168,auVar251,auVar80);
        local_318 = auVar168;
      }
      else {
        auVar313._0_4_ = (float)auVar251._0_4_ * param_6;
        auVar313._4_4_ = (float)auVar251._4_4_ * param_6;
        auVar313._8_4_ = (float)auVar251._8_4_ * param_6;
        auVar313._12_4_ = (float)auVar251._12_4_ * param_6;
        auVar79._0_4_ = auVar51._0_4_ & uVar207;
        auVar79._4_4_ = auVar51._4_4_ & uVar233;
        auVar79._8_4_ = uVar46 & auVar78._8_4_;
        auVar79._12_4_ = uVar47 & auVar78._12_4_;
        auVar53 = roundps(auVar168,auVar313,9);
        iVar19 = (int)auVar53._0_4_;
        iVar18 = (int)auVar53._4_4_;
        iVar149 = (int)auVar53._8_4_;
        iVar152 = (int)auVar53._12_4_;
        auVar131._0_4_ =
             (uint)(auVar251._0_4_ < iVar19) * auVar251._0_4_ |
             (uint)(auVar251._0_4_ >= iVar19) * iVar19;
        auVar131._4_4_ =
             (uint)(auVar251._4_4_ < iVar18) * auVar251._4_4_ |
             (uint)(auVar251._4_4_ >= iVar18) * iVar18;
        auVar131._8_4_ =
             (uint)(auVar251._8_4_ < iVar149) * auVar251._8_4_ |
             (uint)(auVar251._8_4_ >= iVar149) * iVar149;
        auVar131._12_4_ =
             (uint)(auVar251._12_4_ < iVar152) * auVar251._12_4_ |
             (uint)(auVar251._12_4_ >= iVar152) * iVar152;
        auVar168 = blendvps(ZEXT816(0),auVar131,auVar79);
        auVar177 = auVar50;
        if (param_7 != '\x01') {
          auVar177._4_4_ = auVar313._4_4_ - auVar53._4_4_;
          auVar177._0_4_ = auVar313._0_4_ - auVar53._0_4_;
          auVar177._8_4_ = auVar313._8_4_ - auVar53._8_4_;
          auVar177._12_4_ = auVar313._12_4_ - auVar53._12_4_;
        }
        iVar19 = auVar168._0_4_ + 1;
        iVar18 = auVar168._4_4_ + 1;
        iVar149 = auVar168._8_4_ + 1;
        iVar152 = auVar168._12_4_ + 1;
        unaff_XMM6._0_4_ =
             (float)((uint)(auVar251._0_4_ < iVar19) * auVar251._0_4_ |
                    (uint)(auVar251._0_4_ >= iVar19) * iVar19);
        unaff_XMM6._4_4_ =
             (float)((uint)(auVar251._4_4_ < iVar18) * auVar251._4_4_ |
                    (uint)(auVar251._4_4_ >= iVar18) * iVar18);
        unaff_XMM6._8_4_ =
             (float)((uint)(auVar251._8_4_ < iVar149) * auVar251._8_4_ |
                    (uint)(auVar251._8_4_ >= iVar149) * iVar149);
        unaff_XMM6._12_4_ =
             (float)((uint)(auVar251._12_4_ < iVar152) * auVar251._12_4_ |
                    (uint)(auVar251._12_4_ >= iVar152) * iVar152);
        local_318 = blendvps(auVar50,unaff_XMM6,auVar79);
        auVar50 = auVar177;
      }
    }
    auVar81._8_4_ = auVar78._8_4_;
    auVar81._0_8_ = auVar78._0_8_;
    auVar81._12_4_ = auVar78._12_4_;
    auVar53 = blendvps(ZEXT816(0),auVar50,auVar81);
  }
  else {
    auVar53 = ZEXT816(0);
    local_318 = ZEXT816(0);
    auVar168 = ZEXT816(0);
  }
  auVar115 = pmovsxdq(unaff_XMM6,auVar340);
  auVar114 = pmovsxdq(auVar50,uVar22);
  auVar132._4_4_ = uVar17;
  auVar132._0_4_ = uVar17;
  auVar132._8_4_ = uVar17;
  auVar132._12_4_ = uVar17;
  auVar82._4_4_ = uVar17;
  auVar82._0_4_ = uVar17;
  auVar82._8_8_ = 0;
  auVar50 = pmovzxdq(auVar82,auVar82);
  auVar266 = pmovzxdq(auVar50,auVar132);
  auVar133._4_4_ = iVar23;
  auVar133._0_4_ = iVar23;
  auVar133._8_4_ = iVar23;
  auVar133._12_4_ = iVar23;
  local_288 = auVar266._0_8_;
  lStack_280 = auVar266._8_8_;
  local_2d8 = auVar50._0_8_;
  lStack_2d0 = auVar50._8_8_;
  lVar26 = auVar114._0_8_;
  lVar27 = auVar114._8_8_;
  lVar36 = auVar115._0_8_;
  lVar29 = auVar115._8_8_;
  if (5 < param_8) {
    if ((bVar30 & 1) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,1);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,1);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,1);
      unaff_XMM13 = blendps(unaff_XMM13,ZEXT416((uint)__real_3f800000),1);
    }
    if ((bVar30 & 2) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,2);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,2);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,2);
      unaff_XMM13 = insertps(unaff_XMM13,ZEXT416((uint)__real_3f800000),0x10);
    }
    if ((bVar30 & 4) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,4);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,4);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,4);
      unaff_XMM13 = insertps(unaff_XMM13,ZEXT416((uint)__real_3f800000),0x20);
    }
    if ((char)bVar30 < '\0') {
      unaff_XMM9 = blendps(unaff_XMM9,(undefined1  [16])0x0,8);
      unaff_XMM12 = blendps(unaff_XMM12,(undefined1  [16])0x0,8);
      unaff_XMM10 = blendps(unaff_XMM10,(undefined1  [16])0x0,8);
      unaff_XMM13 = insertps(unaff_XMM13,ZEXT416((uint)__real_3f800000),0x30);
    }
    goto LAB_140b11754;
  }
  auVar50 = pmulld(auVar168,auVar133);
  auVar266 = pmovsxdq(auVar78,auVar50);
  auVar83._8_4_ = auVar50._8_4_;
  auVar83._12_4_ = auVar50._12_4_;
  auVar83._0_8_ = auVar50._8_8_;
  auVar50 = pmovsxdq(auVar251,auVar83);
  lVar111 = auVar50._0_8_;
  lVar150 = auVar50._8_8_;
  lVar263 = auVar266._0_8_;
  lVar108 = auVar266._8_8_;
  switch(param_8) {
  case 0:
    auVar178._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar178._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar134._0_8_ = lVar26 + local_288 + lVar263;
    auVar134._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar266 = pmovsxdq(auVar266,auVar51);
    auVar114 = blendvps((undefined1  [16])0x0,auVar134,auVar266);
    auVar252._4_4_ = uVar46;
    auVar252._0_4_ = uVar46;
    auVar252._8_4_ = uVar47;
    auVar252._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar178,auVar252);
    lVar263 = param_4 + auVar114._0_8_;
    lVar108 = param_4 + auVar114._8_8_;
    lVar111 = param_4 + auVar50._0_8_;
    auVar333 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar266);
    auVar408 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar252);
    lVar150 = param_4 + auVar50._8_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar266);
    auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar252);
    auVar266 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar266);
    auVar339 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,auVar252);
    if ((bVar30 & 1) != 0) {
      unaff_XMM9 = blendps(unaff_XMM9,ZEXT416(*(uint *)(param_4 + auVar114._0_8_)),1);
      unaff_XMM12 = blendps(unaff_XMM12,ZEXT416(*(uint *)(auVar333._0_8_ + lVar263)),1);
      unaff_XMM10 = blendps(unaff_XMM10,ZEXT416(*(uint *)(auVar115._0_8_ + lVar263)),1);
      unaff_XMM13 = blendps(unaff_XMM13,ZEXT416(*(uint *)(auVar266._0_8_ + lVar263)),1);
    }
    if ((bVar30 & 2) != 0) {
      unaff_XMM9 = insertps(unaff_XMM9,*(undefined4 *)(param_4 + auVar114._8_8_),0x10);
      unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(auVar333._8_8_ + lVar108),0x10);
      unaff_XMM10 = insertps(unaff_XMM10,*(undefined4 *)(auVar115._8_8_ + lVar108),0x10);
      unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar266._8_8_ + lVar108),0x10);
    }
    if ((bVar30 & 4) != 0) {
      unaff_XMM9 = insertps(unaff_XMM9,*(undefined4 *)(param_4 + auVar50._0_8_),0x20);
      unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(auVar408._0_8_ + lVar111),0x20);
      unaff_XMM10 = insertps(unaff_XMM10,*(undefined4 *)(auVar376._0_8_ + lVar111),0x20);
      unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar339._0_8_ + lVar111),0x20);
    }
    if ((char)bVar30 < '\0') {
      unaff_XMM9 = insertps(unaff_XMM9,*(undefined4 *)(param_4 + auVar50._8_8_),0x30);
      unaff_XMM12 = insertps(unaff_XMM12,*(undefined4 *)(auVar408._8_8_ + lVar150),0x30);
      unaff_XMM10 = insertps(unaff_XMM10,*(undefined4 *)(auVar376._8_8_ + lVar150),0x30);
      unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar339._8_8_ + lVar150),0x30);
    }
    break;
  case 1:
    auVar138._0_8_ = lVar26 + local_288 + lVar263;
    auVar138._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar114 = pmovsxdq(auVar266,auVar51);
    auVar266 = blendvps((undefined1  [16])0x0,auVar138,auVar114);
    auVar188._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar188._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar256._4_4_ = uVar46;
    auVar256._0_4_ = uVar46;
    auVar256._8_4_ = uVar47;
    auVar256._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar188,auVar256);
    lVar263 = param_4 + auVar266._0_8_;
    lVar108 = param_4 + auVar266._8_8_;
    lVar111 = param_4 + auVar50._0_8_;
    lVar150 = param_4 + auVar50._8_8_;
    uVar39 = *(uint *)(param_4 + auVar266._0_8_);
    uVar45 = *(uint *)(param_4 + auVar266._8_8_);
    auVar266 = insertps(ZEXT416(uVar39),ZEXT416(uVar45),0x10);
    uVar43 = *(uint *)(param_4 + auVar50._0_8_);
    auVar266 = insertps(auVar266,ZEXT416(uVar43),0x20);
    uVar44 = *(uint *)(param_4 + auVar50._8_8_);
    auVar50 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar114);
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar256);
    auVar333 = insertps(auVar266,ZEXT416(uVar44),0x30);
    uVar46 = *(uint *)(auVar50._0_8_ + lVar263);
    auVar266 = ZEXT416(*(uint *)(auVar50._8_8_ + lVar108));
    auVar50 = insertps(ZEXT416(uVar46),auVar266,0x10);
    uVar47 = *(uint *)(auVar115._0_8_ + lVar111);
    auVar50 = insertps(auVar50,ZEXT416(uVar47),0x20);
    uVar207 = *(uint *)(auVar115._8_8_ + lVar150);
    auVar376 = insertps(auVar50,ZEXT416(uVar207),0x30);
    auVar50 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar114);
    auVar114 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar256);
    uVar233 = *(uint *)(auVar50._0_8_ + lVar263);
    auVar339 = ZEXT416(*(uint *)(auVar50._8_8_ + lVar108));
    auVar50 = insertps(ZEXT416(uVar233),auVar339,0x10);
    auVar115 = ZEXT416(*(uint *)(auVar114._0_8_ + lVar111));
    auVar50 = insertps(auVar50,auVar115,0x20);
    auVar114 = ZEXT416(*(uint *)(auVar114._8_8_ + lVar150));
    auVar50 = insertps(auVar50,auVar114,0x30);
    auVar225._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar333._0_4_ * auVar333._0_4_) -
         auVar376._0_4_ * auVar376._0_4_) - auVar50._0_4_ * auVar50._0_4_;
    auVar225._4_4_ =
         ((_UNK_15076b1f4 - auVar333._4_4_ * auVar333._4_4_) - auVar376._4_4_ * auVar376._4_4_) -
         auVar50._4_4_ * auVar50._4_4_;
    auVar225._8_4_ =
         ((_UNK_15076b1f8 - auVar333._8_4_ * auVar333._8_4_) - auVar376._8_4_ * auVar376._8_4_) -
         auVar50._8_4_ * auVar50._8_4_;
    auVar225._12_4_ =
         ((_UNK_15076b1fc - auVar333._12_4_ * auVar333._12_4_) - auVar376._12_4_ * auVar376._12_4_)
         - auVar50._12_4_ * auVar50._12_4_;
    if ((bVar30 & 1) == 0) {
      auVar50 = sqrtps(auVar225,auVar225);
      auVar86._0_4_ = -(uint)(0.0 < auVar225._0_4_) & auVar50._0_4_;
      auVar86._4_4_ = -(uint)(0.0 < auVar225._4_4_) & auVar50._4_4_;
      auVar86._8_4_ = -(uint)(0.0 < auVar225._8_4_) & auVar50._8_4_;
      auVar86._12_4_ = -(uint)(0.0 < auVar225._12_4_) & auVar50._12_4_;
      auVar50 = unaff_XMM13;
      if ((bVar30 & 2) != 0) goto LAB_140b113f3;
LAB_140b111ce:
      auVar50 = blendps(unaff_XMM13,auVar50,1);
      auVar266 = auVar50;
      if ((bVar30 & 4) != 0) goto LAB_140b11443;
LAB_140b11215:
      auVar50 = blendps(auVar266,auVar50,2);
      auVar266 = auVar50;
      if (-1 < (char)bVar30) goto LAB_140b11478;
LAB_140b11249:
      unaff_XMM9 = insertps(unaff_XMM9,uVar44,0x30);
      if ((char)bVar30 < '\0') goto LAB_140b1125b;
LAB_140b1147e:
      if (-1 < (char)bVar30) goto LAB_140b11484;
LAB_140b1126a:
      unaff_XMM10 = insertps(unaff_XMM10,auVar114,0x30);
      auVar333 = blendps(auVar266,auVar50,4);
    }
    else {
      unaff_XMM9 = blendps(unaff_XMM9,ZEXT416(uVar39),1);
      auVar50 = sqrtps(auVar225,auVar225);
      unaff_XMM12 = blendps(unaff_XMM12,ZEXT416(uVar46),1);
      auVar86._0_4_ = -(uint)(0.0 < auVar225._0_4_) & auVar50._0_4_;
      auVar86._4_4_ = -(uint)(0.0 < auVar225._4_4_) & auVar50._4_4_;
      auVar86._8_4_ = -(uint)(0.0 < auVar225._8_4_) & auVar50._8_4_;
      auVar86._12_4_ = -(uint)(0.0 < auVar225._12_4_) & auVar50._12_4_;
      unaff_XMM10 = blendps(unaff_XMM10,ZEXT416(uVar233),1);
      auVar50 = auVar86;
      if ((bVar30 & 2) == 0) goto LAB_140b111ce;
LAB_140b113f3:
      unaff_XMM9 = insertps(unaff_XMM9,uVar45,0x10);
      unaff_XMM12 = insertps(unaff_XMM12,auVar266,0x10);
      unaff_XMM10 = insertps(unaff_XMM10,auVar339,0x10);
      auVar266 = blendps(unaff_XMM13,auVar50,1);
      auVar50 = auVar86;
      if ((bVar30 & 4) == 0) goto LAB_140b11215;
LAB_140b11443:
      unaff_XMM9 = insertps(unaff_XMM9,uVar43,0x20);
      unaff_XMM12 = insertps(unaff_XMM12,uVar47,0x20);
      unaff_XMM10 = insertps(unaff_XMM10,auVar115,0x20);
      auVar266 = blendps(auVar266,auVar50,2);
      auVar50 = auVar86;
      if ((char)bVar30 < '\0') goto LAB_140b11249;
LAB_140b11478:
      if (-1 < (char)bVar30) goto LAB_140b1147e;
LAB_140b1125b:
      unaff_XMM12 = insertps(unaff_XMM12,uVar207,0x30);
      if ((char)bVar30 < '\0') goto LAB_140b1126a;
LAB_140b11484:
      auVar333 = blendps(auVar266,auVar50,4);
    }
    if (-1 < (char)bVar30) {
      auVar86 = auVar333;
    }
    goto LAB_140b11497;
  case 2:
    auVar182._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar182._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar136._0_8_ = lVar26 + local_288 + lVar263;
    auVar136._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar50,auVar51);
    auVar339 = blendvps(ZEXT816(0),auVar136,auVar50);
    auVar221._4_4_ = uVar46;
    auVar221._0_4_ = uVar46;
    auVar221._8_4_ = uVar47;
    auVar221._12_4_ = uVar47;
    auVar115 = blendvps((undefined1  [16])0x0,auVar182,auVar221);
    lVar263 = param_4 + auVar339._0_8_;
    lVar108 = param_4 + auVar339._8_8_;
    auVar376 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar50);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar221);
    auVar333 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar50);
    lVar111 = param_4 + auVar115._0_8_;
    auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar221);
    lVar150 = param_4 + auVar115._8_8_;
    auVar222._0_4_ =
         (float)(int)((uint)*(ushort *)(param_4 + auVar339._0_8_) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar222._4_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar339._8_8_) + _UNK_151c6b8e4);
    auVar222._8_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar115._0_8_) + _UNK_151c6b8e8);
    auVar222._12_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar115._8_8_) + _UNK_151c6b8ec);
    auVar50 = divps(auVar222,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar254._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar376._0_8_ + lVar263) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar254._4_4_ = (float)(int)((uint)*(ushort *)(auVar376._8_8_ + lVar108) + _UNK_151c6b8e4);
    auVar254._8_4_ = (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar111) + _UNK_151c6b8e8);
    auVar254._12_4_ = (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar150) + _UNK_151c6b8ec);
    auVar266 = divps(auVar254,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar342._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar333._0_8_ + lVar263) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar342._4_4_ = (float)(int)((uint)*(ushort *)(auVar333._8_8_ + lVar108) + _UNK_151c6b8e4);
    auVar342._8_4_ = (float)(int)((uint)*(ushort *)(auVar114._0_8_ + lVar111) + _UNK_151c6b8e8);
    auVar342._12_4_ = (float)(int)((uint)*(ushort *)(auVar114._8_8_ + lVar150) + _UNK_151c6b8ec);
    auVar114 = divps(auVar342,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar183._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar50._0_4_ * auVar50._0_4_) -
         auVar266._0_4_ * auVar266._0_4_) - auVar114._0_4_ * auVar114._0_4_;
    auVar183._4_4_ =
         ((_UNK_15076b1f4 - auVar50._4_4_ * auVar50._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
         auVar114._4_4_ * auVar114._4_4_;
    auVar183._8_4_ =
         ((_UNK_15076b1f8 - auVar50._8_4_ * auVar50._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
         auVar114._8_4_ * auVar114._8_4_;
    auVar183._12_4_ =
         ((_UNK_15076b1fc - auVar50._12_4_ * auVar50._12_4_) - auVar266._12_4_ * auVar266._12_4_) -
         auVar114._12_4_ * auVar114._12_4_;
    auVar339 = sqrtps(auVar183,auVar183);
    bVar42 = (bVar30 & 1) == 0;
    auVar115 = unaff_XMM9;
    if (!bVar42) {
      auVar115 = auVar50;
    }
    auVar86._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar183._4_4_) & auVar339._4_4_,
                  -(uint)(0.0 < auVar183._0_4_) & auVar339._0_4_);
    auVar86._8_4_ = -(uint)(0.0 < auVar183._8_4_) & auVar339._8_4_;
    auVar86._12_4_ = -(uint)(0.0 < auVar183._12_4_) & auVar339._12_4_;
    if (bVar42) {
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar184 = unaff_XMM13;
      auVar115 = unaff_XMM12;
      auVar339 = unaff_XMM10;
      if ((bVar30 & 2) != 0) goto LAB_140b1094c;
LAB_140b10847:
      auVar115 = blendps(unaff_XMM12,auVar115,1);
      auVar339 = blendps(unaff_XMM10,auVar339,1);
      auVar400 = blendps(unaff_XMM13,auVar184,1);
      auVar376 = blendps(auVar376,auVar376,2);
      auVar333 = auVar339;
      auVar408 = auVar115;
      auVar217 = auVar400;
      if ((bVar30 & 4) != 0) goto LAB_140b1099b;
LAB_140b10894:
      auVar408 = blendps(auVar408,auVar115,2);
      auVar339 = blendps(auVar333,auVar339,2);
      auVar401 = blendps(auVar217,auVar400,2);
      auVar115 = blendps(auVar376,auVar376,4);
      auVar333 = auVar339;
      auVar267 = auVar408;
      auVar217 = auVar401;
      if (-1 < (char)bVar30) goto LAB_140b109e5;
LAB_140b108dc:
      auVar376 = blendps(auVar267,auVar408,4);
      if (-1 < (char)bVar30) goto LAB_140b108ef;
LAB_140b109fc:
      auVar339 = blendps(auVar333,auVar339,4);
      if (-1 < (char)bVar30) goto LAB_140b10a12;
LAB_140b10909:
      auVar333 = blendps(auVar217,auVar401,4);
    }
    else {
      auVar184._8_4_ = auVar86._8_4_;
      auVar184._0_8_ = auVar86._0_8_;
      auVar184._12_4_ = auVar86._12_4_;
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 2) == 0) goto LAB_140b10847;
LAB_140b1094c:
      auVar408 = blendps(unaff_XMM12,auVar115,1);
      auVar333 = blendps(unaff_XMM10,auVar339,1);
      auVar217 = blendps(unaff_XMM13,auVar184,1);
      auVar400._8_4_ = auVar86._8_4_;
      auVar400._0_8_ = auVar86._0_8_;
      auVar400._12_4_ = auVar86._12_4_;
      auVar376 = blendps(auVar376,auVar50,2);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 4) == 0) goto LAB_140b10894;
LAB_140b1099b:
      auVar267 = blendps(auVar408,auVar115,2);
      auVar333 = blendps(auVar333,auVar339,2);
      auVar217 = blendps(auVar217,auVar400,2);
      auVar401._8_4_ = auVar86._8_4_;
      auVar401._0_8_ = auVar86._0_8_;
      auVar401._12_4_ = auVar86._12_4_;
      auVar115 = blendps(auVar376,auVar50,4);
      auVar408 = auVar266;
      auVar339 = auVar114;
      if ((char)bVar30 < '\0') goto LAB_140b108dc;
LAB_140b109e5:
      auVar50 = auVar115;
      auVar376 = blendps(auVar267,auVar408,4);
      auVar115 = auVar50;
      if ((char)bVar30 < '\0') goto LAB_140b109fc;
LAB_140b108ef:
      auVar266 = auVar376;
      auVar339 = blendps(auVar333,auVar339,4);
      auVar376 = auVar266;
      if ((char)bVar30 < '\0') goto LAB_140b10909;
LAB_140b10a12:
      auVar333 = blendps(auVar217,auVar401,4);
      auVar114 = auVar339;
    }
    if (-1 < (char)bVar30) {
      auVar86 = auVar333;
    }
    unaff_XMM9 = blendps(auVar115,auVar50,8);
    unaff_XMM12 = blendps(auVar376,auVar266,8);
    unaff_XMM10 = blendps(auVar339,auVar114,8);
LAB_140b11497:
    unaff_XMM13 = blendps(auVar333,auVar86,8);
    break;
  case 3:
    auVar266 = blendvps((undefined1  [16])0x0,auVar130,auVar51);
    auVar339 = blendvps((undefined1  [16])0x0,___xmm_00000004000000040000000400000004,auVar51);
    auVar333 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar51);
    auVar267 = blendvps(ZEXT816(0),___xmm_0000000c0000000c0000000c0000000c,auVar51);
    auVar217 = blendvps((undefined1  [16])0x0,___xmm_00000010000000100000001000000010,auVar51);
    auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000014000000140000001400000014,auVar51);
    auVar137._0_8_ = lVar26 + local_288 + lVar263;
    auVar137._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar51,auVar51);
    auVar408 = blendvps(ZEXT816(0),auVar137,auVar50);
    auVar185._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar185._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar87._4_4_ = uVar46;
    auVar87._0_4_ = uVar46;
    auVar87._8_4_ = uVar47;
    auVar87._12_4_ = uVar47;
    auVar114 = blendvps((undefined1  [16])0x0,auVar185,auVar87);
    uVar22 = extractps(auVar266,0);
    lVar263 = param_4 + (int)uVar22;
    uVar21 = extractps(auVar266,1);
    lVar108 = param_4 + (int)uVar21;
    uVar33 = extractps(auVar266,2);
    lVar111 = param_4 + (int)uVar33;
    uVar32 = extractps(auVar266,3);
    auVar50 = insertps(ZEXT416(*(uint *)(param_4 + (int)uVar22)),
                       *(undefined4 *)(param_4 + (int)uVar21),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar33),0x20);
    auVar266 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar32),0x30);
    lVar150 = param_4 + (int)uVar32;
    uVar22 = extractps(auVar339,0);
    uVar21 = extractps(auVar339,1);
    uVar33 = extractps(auVar339,2);
    uVar32 = extractps(auVar339,3);
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar263)),
                       *(undefined4 *)((int)uVar21 + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar33 + lVar111),0x20);
    auVar376 = insertps(auVar50,*(undefined4 *)((int)uVar32 + lVar150),0x30);
    uVar22 = extractps(auVar333,0);
    uVar21 = extractps(auVar333,1);
    uVar33 = extractps(auVar333,2);
    uVar40 = extractps(auVar333,3);
    auVar333 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar263)),
                        *(undefined4 *)((int)uVar21 + lVar108),0x10);
    uVar22 = extractps(auVar267,0);
    uVar21 = extractps(auVar267,1);
    uVar34 = extractps(auVar267,2);
    uVar32 = extractps(auVar267,3);
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar263)),
                       *(undefined4 *)((int)uVar21 + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar34 + lVar111),0x20);
    auVar339 = insertps(auVar50,*(undefined4 *)((int)uVar32 + lVar150),0x30);
    uVar34 = extractps(auVar217,0);
    uVar38 = extractps(auVar217,1);
    uVar37 = extractps(auVar217,2);
    uVar41 = extractps(auVar217,3);
    uVar35 = extractps(auVar115,0);
    uVar22 = extractps(auVar115,1);
    uVar21 = extractps(auVar115,2);
    uVar39 = *(uint *)(param_4 + auVar408._0_8_);
    uVar45 = *(uint *)(param_4 + auVar408._8_8_);
    uVar43 = *(uint *)(param_4 + auVar114._0_8_);
    uVar44 = *(uint *)(param_4 + auVar114._8_8_);
    uVar32 = extractps(auVar115,3);
    auVar88._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar88._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar88._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar88._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar50 = divps(auVar88,___xmm_447fc000447fc000447fc000447fc000);
    auVar114 = insertps(auVar333,*(undefined4 *)((int)uVar33 + lVar111),0x20);
    auVar114 = insertps(auVar114,*(undefined4 *)((int)uVar40 + lVar150),0x30);
    fVar49 = auVar50._0_4_ * auVar339._0_4_ + auVar266._0_4_;
    fVar106 = auVar50._4_4_ * auVar339._4_4_ + auVar266._4_4_;
    auVar89._0_8_ = CONCAT44(fVar106,fVar49);
    auVar89._8_4_ = auVar50._8_4_ * auVar339._8_4_ + auVar266._8_4_;
    auVar89._12_4_ = auVar50._12_4_ * auVar339._12_4_ + auVar266._12_4_;
    auVar223._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar223._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar223._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar223._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar266 = divps(auVar223,___xmm_447fc000447fc000447fc000447fc000);
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar34 + lVar263)),
                       *(undefined4 *)((int)uVar38 + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar37 + lVar111),0x20);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar41 + lVar150),0x30);
    local_2b8._0_4_ = (undefined4)uVar22;
    local_1d8 = (int)uVar21;
    fVar107 = auVar266._0_4_ * auVar50._0_4_ + auVar376._0_4_;
    fVar109 = auVar266._4_4_ * auVar50._4_4_ + auVar376._4_4_;
    auVar224._0_8_ = CONCAT44(fVar109,fVar107);
    auVar224._8_4_ = auVar266._8_4_ * auVar50._8_4_ + auVar376._8_4_;
    auVar224._12_4_ = auVar266._12_4_ * auVar50._12_4_ + auVar376._12_4_;
    auVar50 = insertps(ZEXT416(*(uint *)((int)uVar35 + lVar263)),
                       *(undefined4 *)((int)local_2b8._0_4_ + lVar108),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)(local_1d8 + lVar111),0x20);
    auVar50 = insertps(auVar50,*(undefined4 *)((int)uVar32 + lVar150),0x30);
    auVar343._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar343._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar343._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar343._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar266 = divps(auVar343,___xmm_43ff800043ff800043ff800043ff8000);
    fVar110 = auVar266._0_4_ * auVar50._0_4_ + auVar114._0_4_;
    fVar147 = auVar266._4_4_ * auVar50._4_4_ + auVar114._4_4_;
    auVar344._0_8_ = CONCAT44(fVar147,fVar110);
    auVar344._8_4_ = auVar266._8_4_ * auVar50._8_4_ + auVar114._8_4_;
    auVar344._12_4_ = auVar266._12_4_ * auVar50._12_4_ + auVar114._12_4_;
    auVar186._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - fVar49 * fVar49) - fVar107 * fVar107) -
         fVar110 * fVar110;
    auVar186._4_4_ = ((_UNK_15076b1f4 - fVar106 * fVar106) - fVar109 * fVar109) - fVar147 * fVar147;
    auVar186._8_4_ =
         ((_UNK_15076b1f8 - auVar89._8_4_ * auVar89._8_4_) - auVar224._8_4_ * auVar224._8_4_) -
         auVar344._8_4_ * auVar344._8_4_;
    auVar186._12_4_ =
         ((_UNK_15076b1fc - auVar89._12_4_ * auVar89._12_4_) - auVar224._12_4_ * auVar224._12_4_) -
         auVar344._12_4_ * auVar344._12_4_;
    auVar50 = sqrtps(auVar186,auVar186);
    bVar42 = (bVar30 & 1) != 0;
    auVar377 = unaff_XMM9;
    if (bVar42) {
      auVar377._8_4_ = auVar89._8_4_;
      auVar377._0_8_ = auVar89._0_8_;
      auVar377._12_4_ = auVar89._12_4_;
    }
    auVar255._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar186._4_4_) & auVar50._4_4_,
                  -(uint)(0.0 < auVar186._0_4_) & auVar50._0_4_);
    auVar255._8_4_ = -(uint)(0.0 < auVar186._8_4_) & auVar50._8_4_;
    auVar255._12_4_ = -(uint)(0.0 < auVar186._12_4_) & auVar50._12_4_;
    auVar187 = unaff_XMM13;
    auVar314 = unaff_XMM12;
    auVar324 = unaff_XMM10;
    if (bVar42) {
      auVar314._8_4_ = auVar224._8_4_;
      auVar314._0_8_ = auVar224._0_8_;
      auVar314._12_4_ = auVar224._12_4_;
      auVar324._8_4_ = auVar344._8_4_;
      auVar324._0_8_ = auVar344._0_8_;
      auVar324._12_4_ = auVar344._12_4_;
      auVar187._8_4_ = auVar255._8_4_;
      auVar187._0_8_ = auVar255._0_8_;
      auVar187._12_4_ = auVar255._12_4_;
    }
    auVar50 = blendps(unaff_XMM9,auVar377,1);
    if ((bVar30 & 2) == 0) {
      auVar390 = blendps(unaff_XMM12,auVar314,1);
      auVar365 = blendps(unaff_XMM10,auVar324,1);
      auVar402 = blendps(unaff_XMM13,auVar187,1);
      auVar50 = blendps(auVar50,auVar50,2);
      auVar266 = auVar365;
      auVar114 = auVar390;
      auVar115 = auVar402;
      if ((bVar30 & 4) != 0) goto LAB_140b10e2e;
LAB_140b10f10:
      auVar391 = blendps(auVar114,auVar390,2);
      auVar366 = blendps(auVar266,auVar365,2);
      auVar403 = blendps(auVar115,auVar402,2);
      auVar50 = blendps(auVar50,auVar50,4);
      auVar266 = auVar366;
      auVar114 = auVar391;
      auVar115 = auVar403;
      if (-1 < (char)bVar30) goto LAB_140b10e78;
LAB_140b10f58:
      auVar114 = blendps(auVar114,auVar391,4);
      if (-1 < (char)bVar30) goto LAB_140b10f6b;
LAB_140b10e8f:
      auVar266 = blendps(auVar266,auVar366,4);
      if (-1 < (char)bVar30) goto LAB_140b10ea5;
LAB_140b10f85:
      auVar115 = blendps(auVar115,auVar403,4);
    }
    else {
      auVar378._8_4_ = auVar89._8_4_;
      auVar378._0_8_ = auVar89._0_8_;
      auVar378._12_4_ = auVar89._12_4_;
      auVar114 = blendps(unaff_XMM12,auVar314,1);
      auVar390._8_4_ = auVar224._8_4_;
      auVar390._0_8_ = auVar224._0_8_;
      auVar390._12_4_ = auVar224._12_4_;
      auVar266 = blendps(unaff_XMM10,auVar324,1);
      auVar365._8_4_ = auVar344._8_4_;
      auVar365._0_8_ = auVar344._0_8_;
      auVar365._12_4_ = auVar344._12_4_;
      auVar115 = blendps(unaff_XMM13,auVar187,1);
      auVar402._8_4_ = auVar255._8_4_;
      auVar402._0_8_ = auVar255._0_8_;
      auVar402._12_4_ = auVar255._12_4_;
      auVar50 = blendps(auVar50,auVar378,2);
      if ((bVar30 & 4) == 0) goto LAB_140b10f10;
LAB_140b10e2e:
      auVar379._8_4_ = auVar89._8_4_;
      auVar379._0_8_ = auVar89._0_8_;
      auVar379._12_4_ = auVar89._12_4_;
      auVar114 = blendps(auVar114,auVar390,2);
      auVar391._8_4_ = auVar224._8_4_;
      auVar391._0_8_ = auVar224._0_8_;
      auVar391._12_4_ = auVar224._12_4_;
      auVar266 = blendps(auVar266,auVar365,2);
      auVar366._8_4_ = auVar344._8_4_;
      auVar366._0_8_ = auVar344._0_8_;
      auVar366._12_4_ = auVar344._12_4_;
      auVar115 = blendps(auVar115,auVar402,2);
      auVar403._8_4_ = auVar255._8_4_;
      auVar403._0_8_ = auVar255._0_8_;
      auVar403._12_4_ = auVar255._12_4_;
      auVar50 = blendps(auVar50,auVar379,4);
      if ((char)bVar30 < '\0') goto LAB_140b10f58;
LAB_140b10e78:
      auVar89 = auVar50;
      auVar114 = blendps(auVar114,auVar391,4);
      auVar50 = auVar89;
      if ((char)bVar30 < '\0') goto LAB_140b10e8f;
LAB_140b10f6b:
      auVar224 = auVar114;
      auVar266 = blendps(auVar266,auVar366,4);
      auVar114 = auVar224;
      if ((char)bVar30 < '\0') goto LAB_140b10f85;
LAB_140b10ea5:
      auVar115 = blendps(auVar115,auVar403,4);
      auVar344 = auVar266;
    }
    if (-1 < (char)bVar30) {
      auVar255 = auVar115;
    }
    unaff_XMM9 = blendps(auVar50,auVar89,8);
    unaff_XMM12 = blendps(auVar114,auVar224,8);
    unaff_XMM10 = blendps(auVar266,auVar344,8);
    unaff_XMM13 = blendps(auVar115,auVar255,8);
    break;
  case 4:
    auVar179._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar179._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar135._0_8_ = lVar26 + local_288 + lVar263;
    auVar135._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar83,auVar51);
    auVar266 = blendvps((undefined1  [16])0x0,auVar135,auVar50);
    auVar84._4_4_ = uVar46;
    auVar84._0_4_ = uVar46;
    auVar84._8_4_ = uVar47;
    auVar84._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar179,auVar84);
    uVar39 = *(uint *)(param_4 + auVar266._0_8_);
    uVar45 = *(uint *)(param_4 + auVar266._8_8_);
    uVar43 = *(uint *)(param_4 + auVar50._0_8_);
    uVar44 = *(uint *)(param_4 + auVar50._8_8_);
    auVar85._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar85._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar85._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar85._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar50 = divps(auVar85,___xmm_447fc000447fc000447fc000447fc000);
    auVar341._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar341._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar341._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar341._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar253._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar253._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar253._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar253._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar114 = divps(auVar253,___xmm_43ff800043ff800043ff800043ff8000);
    auVar266 = divps(auVar341,___xmm_447fc000447fc000447fc000447fc000);
    auVar180._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar50._0_4_ * auVar50._0_4_) -
         auVar266._0_4_ * auVar266._0_4_) - auVar114._0_4_ * auVar114._0_4_;
    auVar180._4_4_ =
         ((_UNK_15076b1f4 - auVar50._4_4_ * auVar50._4_4_) - auVar266._4_4_ * auVar266._4_4_) -
         auVar114._4_4_ * auVar114._4_4_;
    auVar180._8_4_ =
         ((_UNK_15076b1f8 - auVar50._8_4_ * auVar50._8_4_) - auVar266._8_4_ * auVar266._8_4_) -
         auVar114._8_4_ * auVar114._8_4_;
    auVar180._12_4_ =
         ((_UNK_15076b1fc - auVar50._12_4_ * auVar50._12_4_) - auVar266._12_4_ * auVar266._12_4_) -
         auVar114._12_4_ * auVar114._12_4_;
    auVar339 = sqrtps(auVar180,auVar180);
    bVar42 = (bVar30 & 1) == 0;
    auVar115 = unaff_XMM9;
    if (!bVar42) {
      auVar115 = auVar50;
    }
    auVar220._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar180._4_4_) & auVar339._4_4_,
                  -(uint)(0.0 < auVar180._0_4_) & auVar339._0_4_);
    auVar220._8_4_ = -(uint)(0.0 < auVar180._8_4_) & auVar339._8_4_;
    auVar220._12_4_ = -(uint)(0.0 < auVar180._12_4_) & auVar339._12_4_;
    if (bVar42) {
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar181 = unaff_XMM13;
      auVar115 = unaff_XMM12;
      auVar339 = unaff_XMM10;
      if ((bVar30 & 2) != 0) goto LAB_140b10577;
LAB_140b10470:
      auVar115 = blendps(unaff_XMM12,auVar115,1);
      auVar339 = blendps(unaff_XMM10,auVar339,1);
      auVar398 = blendps(unaff_XMM13,auVar181,1);
      auVar376 = blendps(auVar376,auVar376,2);
      auVar333 = auVar339;
      auVar408 = auVar115;
      auVar217 = auVar398;
      if ((bVar30 & 4) != 0) goto LAB_140b105c5;
LAB_140b104be:
      auVar408 = blendps(auVar408,auVar115,2);
      auVar339 = blendps(auVar333,auVar339,2);
      auVar399 = blendps(auVar217,auVar398,2);
      auVar115 = blendps(auVar376,auVar376,4);
      auVar333 = auVar339;
      auVar267 = auVar408;
      auVar217 = auVar399;
      if (-1 < (char)bVar30) goto LAB_140b1060e;
LAB_140b10507:
      auVar376 = blendps(auVar267,auVar408,4);
      if (-1 < (char)bVar30) goto LAB_140b1051a;
LAB_140b10625:
      auVar333 = blendps(auVar333,auVar339,4);
      if (-1 < (char)bVar30) goto LAB_140b1063b;
LAB_140b10534:
      auVar339 = blendps(auVar217,auVar399,4);
    }
    else {
      auVar181._8_4_ = auVar220._8_4_;
      auVar181._0_8_ = auVar220._0_8_;
      auVar181._12_4_ = auVar220._12_4_;
      auVar376 = blendps(unaff_XMM9,auVar115,1);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 2) == 0) goto LAB_140b10470;
LAB_140b10577:
      auVar408 = blendps(unaff_XMM12,auVar115,1);
      auVar333 = blendps(unaff_XMM10,auVar339,1);
      auVar217 = blendps(unaff_XMM13,auVar181,1);
      auVar398._8_4_ = auVar220._8_4_;
      auVar398._0_8_ = auVar220._0_8_;
      auVar398._12_4_ = auVar220._12_4_;
      auVar376 = blendps(auVar376,auVar50,2);
      auVar115 = auVar266;
      auVar339 = auVar114;
      if ((bVar30 & 4) == 0) goto LAB_140b104be;
LAB_140b105c5:
      auVar267 = blendps(auVar408,auVar115,2);
      auVar333 = blendps(auVar333,auVar339,2);
      auVar217 = blendps(auVar217,auVar398,2);
      auVar399._8_4_ = auVar220._8_4_;
      auVar399._0_8_ = auVar220._0_8_;
      auVar399._12_4_ = auVar220._12_4_;
      auVar115 = blendps(auVar376,auVar50,4);
      auVar408 = auVar266;
      auVar339 = auVar114;
      if ((char)bVar30 < '\0') goto LAB_140b10507;
LAB_140b1060e:
      auVar50 = auVar115;
      auVar376 = blendps(auVar267,auVar408,4);
      auVar115 = auVar50;
      if ((char)bVar30 < '\0') goto LAB_140b10625;
LAB_140b1051a:
      auVar266 = auVar376;
      auVar333 = blendps(auVar333,auVar339,4);
      auVar376 = auVar266;
      if ((char)bVar30 < '\0') goto LAB_140b10534;
LAB_140b1063b:
      auVar339 = blendps(auVar217,auVar399,4);
      auVar114 = auVar333;
    }
    if (-1 < (char)bVar30) {
      auVar220 = auVar339;
    }
    unaff_XMM9 = blendps(auVar115,auVar50,8);
    unaff_XMM12 = blendps(auVar376,auVar266,8);
    unaff_XMM10 = blendps(auVar333,auVar114,8);
    goto LAB_140b11744;
  case 5:
    auVar189._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar189._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar139._0_8_ = lVar26 + local_288 + lVar263;
    auVar139._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar83,auVar51);
    auVar266 = blendvps((undefined1  [16])0x0,auVar139,auVar50);
    auVar90._4_4_ = uVar46;
    auVar90._0_4_ = uVar46;
    auVar90._8_4_ = uVar47;
    auVar90._12_4_ = uVar47;
    auVar50 = blendvps(ZEXT816(0),auVar189,auVar90);
    uVar39 = *(uint *)(param_4 + auVar266._0_8_);
    uVar45 = *(uint *)(param_4 + auVar266._8_8_);
    auVar190._4_4_ = uVar45;
    auVar190._0_4_ = uVar39;
    uVar43 = *(uint *)(param_4 + auVar50._0_8_);
    uVar44 = *(uint *)(param_4 + auVar50._8_8_);
    auVar190._12_4_ = uVar44;
    auVar190._8_4_ = uVar43;
    auVar91._0_4_ = uVar39 >> 0x15;
    auVar91._4_4_ = uVar45 >> 0x15;
    auVar91._8_4_ = uVar43 >> 0x15;
    auVar91._12_4_ = uVar44 >> 0x15;
    auVar257._0_4_ = uVar39 >> 10;
    auVar257._4_4_ = uVar45 >> 10;
    auVar257._8_4_ = uVar43 >> 10;
    auVar257._12_4_ = uVar44 >> 10;
    auVar140._0_4_ = uVar39 >> 5;
    auVar140._4_4_ = uVar45 >> 5;
    auVar140._8_4_ = uVar43 >> 5;
    auVar140._12_4_ = uVar44 >> 5;
    auVar50 = auVar91 & ___xmm_00000380000003800000038000000380;
    auVar92._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar92._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar92._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar92._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar92 = auVar92 | auVar91 & ___xmm_00000400000004000000040000000400 |
                        auVar140 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar345._0_4_ = uVar39 << 6;
    auVar345._4_4_ = uVar45 << 6;
    auVar345._8_4_ = uVar43 << 6;
    auVar345._12_4_ = uVar44 << 6;
    auVar50 = auVar257 & ___xmm_00000380000003800000038000000380;
    auVar258._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar258._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar258._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar258._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar50 = ___xmm_000001c0000001c0000001c0000001c0 & auVar190;
    auVar141._0_4_ = uVar39 << 0x11;
    auVar141._4_4_ = uVar45 << 0x11;
    auVar141._8_4_ = uVar43 << 0x11;
    auVar141._12_4_ = uVar44 << 0x11;
    auVar258 = auVar258 |
               ___xmm_00000400000004000000040000000400 & auVar257 |
               auVar345 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar346._0_4_ = auVar50._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
    auVar346._4_4_ = auVar50._4_4_ + _UNK_151c6b824;
    auVar346._8_4_ = auVar50._8_4_ + _UNK_151c6b828;
    auVar346._12_4_ = auVar50._12_4_ + _UNK_151c6b82c;
    auVar50 = auVar346 | auVar190 & ___xmm_00000200000002000000020000000200 |
              auVar141 & ___xmm_007e0000007e0000007e0000007e0000;
    auVar191._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar92._0_4_ * auVar92._0_4_) -
         auVar258._0_4_ * auVar258._0_4_) - auVar50._0_4_ * auVar50._0_4_;
    auVar191._4_4_ =
         ((_UNK_15076b1f4 - auVar92._4_4_ * auVar92._4_4_) - auVar258._4_4_ * auVar258._4_4_) -
         auVar50._4_4_ * auVar50._4_4_;
    auVar191._8_4_ =
         ((_UNK_15076b1f8 - auVar92._8_4_ * auVar92._8_4_) - auVar258._8_4_ * auVar258._8_4_) -
         auVar50._8_4_ * auVar50._8_4_;
    auVar191._12_4_ =
         ((_UNK_15076b1fc - auVar92._12_4_ * auVar92._12_4_) - auVar258._12_4_ * auVar258._12_4_) -
         auVar50._12_4_ * auVar50._12_4_;
    auVar114 = sqrtps(auVar191,auVar191);
    bVar42 = (bVar30 & 1) == 0;
    auVar266 = unaff_XMM9;
    if (!bVar42) {
      auVar266 = auVar92;
    }
    auVar220._0_8_ =
         CONCAT44(-(uint)(0.0 < auVar191._4_4_) & auVar114._4_4_,
                  -(uint)(0.0 < auVar191._0_4_) & auVar114._0_4_);
    auVar220._8_4_ = -(uint)(0.0 < auVar191._8_4_) & auVar114._8_4_;
    auVar220._12_4_ = -(uint)(0.0 < auVar191._12_4_) & auVar114._12_4_;
    if (bVar42) {
      auVar115 = blendps(unaff_XMM9,auVar266,1);
      auVar192 = unaff_XMM13;
      auVar266 = unaff_XMM12;
      auVar114 = unaff_XMM10;
      if ((bVar30 & 2) != 0) goto LAB_140b1195c;
LAB_140b11658:
      auVar266 = blendps(unaff_XMM12,auVar266,1);
      auVar114 = blendps(unaff_XMM10,auVar114,1);
      auVar404 = blendps(unaff_XMM13,auVar192,1);
      auVar115 = blendps(auVar115,auVar115,2);
      auVar339 = auVar114;
      auVar376 = auVar266;
      auVar333 = auVar404;
      if ((bVar30 & 4) != 0) goto LAB_140b119ab;
LAB_140b116a5:
      auVar376 = blendps(auVar376,auVar266,2);
      auVar114 = blendps(auVar339,auVar114,2);
      auVar405 = blendps(auVar333,auVar404,2);
      auVar266 = blendps(auVar115,auVar115,4);
      auVar339 = auVar114;
      auVar408 = auVar376;
      auVar333 = auVar405;
      if (-1 < (char)bVar30) goto LAB_140b119f5;
LAB_140b116ed:
      auVar115 = blendps(auVar408,auVar376,4);
      if (-1 < (char)bVar30) goto LAB_140b11700;
LAB_140b11a0c:
      auVar114 = blendps(auVar339,auVar114,4);
      if (-1 < (char)bVar30) goto LAB_140b11a22;
LAB_140b1171a:
      auVar339 = blendps(auVar333,auVar405,4);
    }
    else {
      auVar192._8_4_ = auVar220._8_4_;
      auVar192._0_8_ = auVar220._0_8_;
      auVar192._12_4_ = auVar220._12_4_;
      auVar115 = blendps(unaff_XMM9,auVar266,1);
      auVar266 = auVar258;
      auVar114 = auVar50;
      if ((bVar30 & 2) == 0) goto LAB_140b11658;
LAB_140b1195c:
      auVar376 = blendps(unaff_XMM12,auVar266,1);
      auVar339 = blendps(unaff_XMM10,auVar114,1);
      auVar333 = blendps(unaff_XMM13,auVar192,1);
      auVar404._8_4_ = auVar220._8_4_;
      auVar404._0_8_ = auVar220._0_8_;
      auVar404._12_4_ = auVar220._12_4_;
      auVar115 = blendps(auVar115,auVar92,2);
      auVar266 = auVar258;
      auVar114 = auVar50;
      if ((bVar30 & 4) == 0) goto LAB_140b116a5;
LAB_140b119ab:
      auVar408 = blendps(auVar376,auVar266,2);
      auVar339 = blendps(auVar339,auVar114,2);
      auVar333 = blendps(auVar333,auVar404,2);
      auVar405._8_4_ = auVar220._8_4_;
      auVar405._0_8_ = auVar220._0_8_;
      auVar405._12_4_ = auVar220._12_4_;
      auVar266 = blendps(auVar115,auVar92,4);
      auVar376 = auVar258;
      auVar114 = auVar50;
      if ((char)bVar30 < '\0') goto LAB_140b116ed;
LAB_140b119f5:
      auVar92 = auVar266;
      auVar115 = blendps(auVar408,auVar376,4);
      auVar266 = auVar92;
      if ((char)bVar30 < '\0') goto LAB_140b11a0c;
LAB_140b11700:
      auVar258 = auVar115;
      auVar114 = blendps(auVar339,auVar114,4);
      auVar115 = auVar258;
      if ((char)bVar30 < '\0') goto LAB_140b1171a;
LAB_140b11a22:
      auVar339 = blendps(auVar333,auVar405,4);
      auVar50 = auVar114;
    }
    if (-1 < (char)bVar30) {
      auVar220 = auVar339;
    }
    unaff_XMM9 = blendps(auVar266,auVar92,8);
    unaff_XMM12 = blendps(auVar115,auVar258,8);
    unaff_XMM10 = blendps(auVar114,auVar50,8);
LAB_140b11744:
    unaff_XMM13 = blendps(auVar339,auVar220,8);
  }
LAB_140b11754:
  auVar325._0_4_ = -(uint)(auVar168._0_4_ == local_318._0_4_);
  auVar325._4_4_ = -(uint)(auVar168._4_4_ == local_318._4_4_);
  auVar325._8_4_ = -(uint)(auVar168._8_4_ == local_318._8_4_);
  auVar325._12_4_ = -(uint)(auVar168._12_4_ == local_318._12_4_);
  auVar51 = ~auVar325 & auVar51;
  iVar23 = movmskps(CONCAT31((int3)((uint)iVar24 >> 8),bVar30),auVar51);
  uVar25 = 0;
  if (iVar23 == 0) goto LAB_140b1288a;
  bVar30 = (char)((char)iVar23 << 4) >> 4;
  uVar25 = CONCAT31((int3)((uint)iVar23 >> 8),bVar30);
  auVar259._4_4_ = (uint)_UNK_15076b1f4;
  auVar259._0_4_ = (uint)___xmm_3f8000003f8000003f8000003f800000;
  auVar259._8_4_ = (uint)_UNK_15076b1f8;
  auVar259._12_4_ = (uint)_UNK_15076b1fc;
  auVar93 = (undefined1  [16])0x0;
  auVar385 = ZEXT816(0);
  auVar226 = (undefined1  [16])0x0;
  if (5 < param_8) goto LAB_140b1257c;
  auVar50 = pmulld(auVar133,local_318);
  auVar168 = pmovsxdq(local_318,auVar50);
  auVar94._8_4_ = auVar50._8_4_;
  auVar94._12_4_ = auVar50._12_4_;
  auVar94._0_8_ = auVar50._8_8_;
  auVar50 = pmovsxdq((undefined1  [16])0x0,auVar94);
  lVar111 = auVar50._0_8_;
  lVar150 = auVar50._8_8_;
  lVar263 = auVar168._0_8_;
  lVar108 = auVar168._8_8_;
  uVar17 = auVar51._8_4_;
  uVar332 = auVar51._12_4_;
  switch(param_8) {
  case 0:
    auVar315._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar315._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar193._0_8_ = lVar26 + local_288 + lVar263;
    auVar193._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar168,auVar51);
    auVar51 = blendvps((undefined1  [16])0x0,auVar193,auVar50);
    auVar194._4_4_ = uVar17;
    auVar194._0_4_ = uVar17;
    auVar194._8_4_ = uVar332;
    auVar194._12_4_ = uVar332;
    auVar168 = blendvps(ZEXT816(0),auVar315,auVar194);
    lVar26 = param_4 + auVar51._0_8_;
    lVar27 = param_4 + auVar51._8_8_;
    lVar36 = param_4 + auVar168._0_8_;
    lVar29 = param_4 + auVar168._8_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar50);
    auVar339 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar194);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar50);
    auVar376 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar194);
    auVar114 = blendvps(ZEXT816(0),___xmm_000000000000000c000000000000000c,auVar50);
    auVar50 = blendvps((undefined1  [16])0x0,___xmm_000000000000000c000000000000000c,auVar194);
    auVar226 = ZEXT416(*(uint *)(param_4 + auVar51._0_8_));
    if ((bVar30 & 2) == 0) {
      auVar385 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar26));
      auVar93 = ZEXT416(*(uint *)(auVar266._0_8_ + lVar26));
      auVar259 = ZEXT416(*(uint *)(auVar114._0_8_ + lVar26));
    }
    else {
      auVar226 = insertps(auVar226,*(undefined4 *)(param_4 + auVar51._8_8_),0x10);
      auVar385 = insertps(ZEXT416(*(uint *)(auVar115._0_8_ + lVar26)),
                          *(undefined4 *)(auVar115._8_8_ + lVar27),0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(auVar266._0_8_ + lVar26)),
                         *(undefined4 *)(auVar266._8_8_ + lVar27),0x10);
      auVar259 = insertps(ZEXT416(*(uint *)(auVar114._0_8_ + lVar26)),
                          *(undefined4 *)(auVar114._8_8_ + lVar27),0x10);
    }
    if ((bVar30 & 4) != 0) {
      auVar226 = insertps(auVar226,*(undefined4 *)(param_4 + auVar168._0_8_),0x20);
      auVar385 = insertps(auVar385,*(undefined4 *)(auVar339._0_8_ + lVar36),0x20);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar376._0_8_ + lVar36),0x20);
      auVar259 = insertps(auVar259,*(undefined4 *)(auVar50._0_8_ + lVar36),0x20);
    }
    if ((char)bVar30 < '\0') {
      auVar226 = insertps(auVar226,*(undefined4 *)(param_4 + auVar168._8_8_),0x30);
      auVar385 = insertps(auVar385,*(undefined4 *)(auVar339._8_8_ + lVar29),0x30);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar376._8_8_ + lVar29),0x30);
      auVar259 = insertps(auVar259,*(undefined4 *)(auVar50._8_8_ + lVar29),0x30);
    }
    goto LAB_140b1257c;
  case 1:
    auVar318._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar318._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar199._0_8_ = lVar26 + local_288 + lVar263;
    auVar199._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar168,auVar51);
    auVar51 = blendvps((undefined1  [16])0x0,auVar199,auVar50);
    auVar200._4_4_ = uVar17;
    auVar200._0_4_ = uVar17;
    auVar200._8_4_ = uVar332;
    auVar200._12_4_ = uVar332;
    auVar266 = blendvps(auVar385,auVar318,auVar200);
    lVar26 = param_4 + auVar51._0_8_;
    uVar39 = *(uint *)(param_4 + auVar51._0_8_);
    auVar168 = insertps(ZEXT416(uVar39),*(undefined4 *)(param_4 + auVar51._8_8_),0x10);
    lVar27 = param_4 + auVar51._8_8_;
    lVar36 = param_4 + auVar266._0_8_;
    uVar45 = *(uint *)(param_4 + auVar266._0_8_);
    auVar51 = insertps(auVar168,ZEXT416(uVar45),0x20);
    lVar29 = param_4 + auVar266._8_8_;
    uVar17 = *(undefined4 *)(param_4 + auVar266._8_8_);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar50);
    auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar200);
    uVar43 = *(uint *)(auVar266._0_8_ + lVar26);
    auVar266 = insertps(ZEXT416(uVar43),*(undefined4 *)(auVar266._8_8_ + lVar27),0x10);
    uVar332 = *(undefined4 *)(auVar114._0_8_ + lVar36);
    auVar50 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar50);
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar200);
    uVar44 = *(uint *)(auVar50._0_8_ + lVar26);
    auVar50 = insertps(ZEXT416(uVar44),*(undefined4 *)(auVar50._8_8_ + lVar27),0x10);
    auVar93 = ZEXT416(uVar44);
    auVar226 = ZEXT416(uVar39);
    auVar385 = ZEXT416(uVar43);
    if ((bVar30 & 2) != 0) {
      auVar93 = auVar50;
      auVar226 = auVar168;
      auVar385 = auVar266;
    }
    auVar168 = insertps(auVar51,uVar17,0x30);
    auVar266 = insertps(auVar266,uVar332,0x20);
    uVar39 = *(uint *)(auVar114._8_8_ + lVar29);
    auVar51 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar36));
    bVar42 = (bVar30 & 4) == 0;
    if (!bVar42) {
      auVar226 = insertps(auVar226,uVar45,0x20);
    }
    auVar266 = insertps(auVar266,ZEXT416(uVar39),0x30);
    auVar50 = insertps(auVar50,auVar51,0x20);
    auVar114 = ZEXT416(*(uint *)(auVar115._8_8_ + lVar29));
    fVar49 = auVar168._0_4_ * auVar168._0_4_;
    fVar106 = auVar168._4_4_ * auVar168._4_4_;
    fVar107 = auVar168._8_4_ * auVar168._8_4_;
    fVar109 = auVar168._12_4_ * auVar168._12_4_;
    fVar110 = auVar266._0_4_;
    fVar147 = auVar266._4_4_;
    fVar148 = auVar266._8_4_;
    fVar151 = auVar266._12_4_;
    if (bVar42) {
      auVar50 = insertps(auVar50,auVar114,0x30);
      fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - fVar49) - fVar110 * fVar110;
      fVar106 = (_UNK_15076b1f4 - fVar106) - fVar147 * fVar147;
      fVar107 = (_UNK_15076b1f8 - fVar107) - fVar148 * fVar148;
      fVar109 = (_UNK_15076b1fc - fVar109) - fVar151 * fVar151;
      auVar143._0_4_ = auVar50._0_4_ * auVar50._0_4_;
      auVar143._4_4_ = auVar50._4_4_ * auVar50._4_4_;
      auVar143._8_4_ = auVar50._8_4_ * auVar50._8_4_;
      auVar143._12_4_ = auVar50._12_4_ * auVar50._12_4_;
      if (-1 < (char)bVar30) goto LAB_140b122b2;
LAB_140b123d7:
      auVar226 = insertps(auVar226,uVar17,0x30);
      auVar326._0_4_ = fVar49 - auVar143._0_4_;
      auVar326._4_4_ = fVar106 - auVar143._4_4_;
      auVar326._8_4_ = fVar107 - auVar143._8_4_;
      auVar326._12_4_ = fVar109 - auVar143._12_4_;
      if ((char)bVar30 < '\0') goto LAB_140b123e8;
LAB_140b122bb:
      auVar261._4_4_ = -(uint)(0.0 < auVar326._4_4_);
      auVar261._0_4_ = -(uint)(0.0 < auVar326._0_4_);
      auVar261._8_4_ = -(uint)(0.0 < auVar326._8_4_);
      auVar261._12_4_ = -(uint)(0.0 < auVar326._12_4_);
      auVar144 = sqrtps(auVar143,auVar326);
    }
    else {
      auVar385 = insertps(auVar385,uVar332,0x20);
      auVar50 = insertps(auVar50,auVar114,0x30);
      auVar93 = insertps(auVar93,auVar51,0x20);
      fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - fVar49) - fVar110 * fVar110;
      fVar106 = (_UNK_15076b1f4 - fVar106) - fVar147 * fVar147;
      fVar107 = (_UNK_15076b1f8 - fVar107) - fVar148 * fVar148;
      fVar109 = (_UNK_15076b1fc - fVar109) - fVar151 * fVar151;
      auVar143._0_4_ = auVar50._0_4_ * auVar50._0_4_;
      auVar143._4_4_ = auVar50._4_4_ * auVar50._4_4_;
      auVar143._8_4_ = auVar50._8_4_ * auVar50._8_4_;
      auVar143._12_4_ = auVar50._12_4_ * auVar50._12_4_;
      if ((char)bVar30 < '\0') goto LAB_140b123d7;
LAB_140b122b2:
      auVar326._0_4_ = fVar49 - auVar143._0_4_;
      auVar326._4_4_ = fVar106 - auVar143._4_4_;
      auVar326._8_4_ = fVar107 - auVar143._8_4_;
      auVar326._12_4_ = fVar109 - auVar143._12_4_;
      if (-1 < (char)bVar30) goto LAB_140b122bb;
LAB_140b123e8:
      auVar385 = insertps(auVar385,uVar39,0x30);
      auVar261._4_4_ = -(uint)(0.0 < auVar326._4_4_);
      auVar261._0_4_ = -(uint)(0.0 < auVar326._0_4_);
      auVar261._8_4_ = -(uint)(0.0 < auVar326._8_4_);
      auVar261._12_4_ = -(uint)(0.0 < auVar326._12_4_);
      auVar144 = sqrtps(auVar143,auVar326);
    }
    if ((char)bVar30 < '\0') {
      auVar93 = insertps(auVar93,auVar114,0x30);
    }
    goto LAB_140b12579;
  case 2:
    auVar317._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar317._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar196._0_8_ = lVar26 + local_288 + lVar263;
    auVar196._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar51 = pmovsxdq(auVar50,auVar51);
    auVar168 = blendvps(ZEXT816(0),auVar196,auVar51);
    auVar142._4_4_ = uVar17;
    auVar142._0_4_ = uVar17;
    auVar142._8_4_ = uVar332;
    auVar142._12_4_ = uVar332;
    auVar50 = blendvps(ZEXT816(0),auVar317,auVar142);
    lVar26 = param_4 + auVar168._0_8_;
    auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar51);
    auVar266 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar142);
    auVar115 = blendvps(auVar385,___xmm_00000000000000040000000000000004,auVar51);
    lVar27 = param_4 + auVar168._8_8_;
    lVar36 = param_4 + auVar50._0_8_;
    auVar51 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar142);
    lVar29 = param_4 + auVar50._8_8_;
    auVar228._0_4_ =
         (float)(int)((uint)*(ushort *)(param_4 + auVar168._0_8_) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar228._4_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar168._8_8_) + _UNK_151c6b8e4);
    auVar228._8_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar50._0_8_) + _UNK_151c6b8e8);
    auVar228._12_4_ = (float)(int)((uint)*(ushort *)(param_4 + auVar50._8_8_) + _UNK_151c6b8ec);
    auVar226 = divps(auVar228,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar381._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar114._0_8_ + lVar26) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar381._4_4_ = (float)(int)((uint)*(ushort *)(auVar114._8_8_ + lVar27) + _UNK_151c6b8e4);
    auVar381._8_4_ = (float)(int)((uint)*(ushort *)(auVar266._0_8_ + lVar36) + _UNK_151c6b8e8);
    auVar381._12_4_ = (float)(int)((uint)*(ushort *)(auVar266._8_8_ + lVar29) + _UNK_151c6b8ec);
    auVar385 = divps(auVar381,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar97._0_4_ =
         (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar26) +
                     ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar97._4_4_ = (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar27) + _UNK_151c6b8e4);
    auVar97._8_4_ = (float)(int)((uint)*(ushort *)(auVar51._0_8_ + lVar36) + _UNK_151c6b8e8);
    auVar97._12_4_ = (float)(int)((uint)*(ushort *)(auVar51._8_8_ + lVar29) + _UNK_151c6b8ec);
    auVar93 = divps(auVar97,___xmm_46fffe0046fffe0046fffe0046fffe00);
    break;
  case 3:
    auVar50 = blendvps((undefined1  [16])0x0,auVar130,auVar51);
    uVar22 = extractps(auVar50,0);
    lVar4 = param_4 + (int)uVar22;
    uVar32 = extractps(auVar50,1);
    lVar5 = param_4 + (int)uVar32;
    uVar33 = extractps(auVar50,2);
    lVar6 = param_4 + (int)uVar33;
    uVar21 = extractps(auVar50,3);
    auVar50 = insertps(ZEXT416(*(uint *)(param_4 + (int)uVar22)),
                       *(undefined4 *)(param_4 + (int)uVar32),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar33),0x20);
    lVar7 = param_4 + (int)uVar21;
    auVar50 = insertps(auVar50,*(undefined4 *)(param_4 + (int)uVar21),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar115 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar339 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_0000000c0000000c0000000c0000000c,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar266 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps((undefined1  [16])0x0,___xmm_00000010000000100000001000000010,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar114 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar168 = blendvps(ZEXT816(0),___xmm_00000014000000140000001400000014,auVar51);
    uVar22 = extractps(auVar168,0);
    uVar33 = extractps(auVar168,1);
    uVar32 = extractps(auVar168,2);
    uVar21 = extractps(auVar168,3);
    auVar168 = insertps(ZEXT416(*(uint *)((int)uVar22 + lVar4)),*(undefined4 *)((int)uVar33 + lVar5)
                        ,0x10);
    auVar168 = insertps(auVar168,*(undefined4 *)((int)uVar32 + lVar6),0x20);
    auVar376 = insertps(auVar168,*(undefined4 *)((int)uVar21 + lVar7),0x30);
    auVar197._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar197._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar98._0_8_ = lVar26 + local_288 + lVar263;
    auVar98._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar51 = pmovsxdq(auVar98,auVar51);
    auVar51 = blendvps((undefined1  [16])0x0,auVar98,auVar51);
    auVar99._4_4_ = uVar17;
    auVar99._0_4_ = uVar17;
    auVar99._8_4_ = uVar332;
    auVar99._12_4_ = uVar332;
    auVar168 = blendvps(ZEXT816(0),auVar197,auVar99);
    uVar39 = *(uint *)(param_4 + auVar51._0_8_);
    uVar45 = *(uint *)(param_4 + auVar51._8_8_);
    uVar43 = *(uint *)(param_4 + auVar168._0_8_);
    uVar44 = *(uint *)(param_4 + auVar168._8_8_);
    auVar229._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar229._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar229._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar229._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar51 = divps(auVar229,___xmm_447fc000447fc000447fc000447fc000);
    local_2c8 = auVar50._0_4_;
    fStack_2c4 = auVar50._4_4_;
    fStack_2c0 = auVar50._8_4_;
    fStack_2bc = auVar50._12_4_;
    auVar226._0_4_ = auVar51._0_4_ * auVar266._0_4_ + local_2c8;
    auVar226._4_4_ = auVar51._4_4_ * auVar266._4_4_ + fStack_2c4;
    auVar226._8_4_ = auVar51._8_4_ * auVar266._8_4_ + fStack_2c0;
    auVar226._12_4_ = auVar51._12_4_ * auVar266._12_4_ + fStack_2bc;
    auVar382._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar382._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar382._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar382._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar51 = divps(auVar382,___xmm_447fc000447fc000447fc000447fc000);
    auVar100._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar100._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar100._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar100._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar50 = divps(auVar100,___xmm_43ff800043ff800043ff800043ff8000);
    auVar385._0_4_ = auVar51._0_4_ * auVar114._0_4_ + auVar115._0_4_;
    auVar385._4_4_ = auVar51._4_4_ * auVar114._4_4_ + auVar115._4_4_;
    auVar385._8_4_ = auVar51._8_4_ * auVar114._8_4_ + auVar115._8_4_;
    auVar385._12_4_ = auVar51._12_4_ * auVar114._12_4_ + auVar115._12_4_;
    auVar93._0_4_ = auVar50._0_4_ * auVar376._0_4_ + auVar339._0_4_;
    auVar93._4_4_ = auVar50._4_4_ * auVar376._4_4_ + auVar339._4_4_;
    auVar93._8_4_ = auVar50._8_4_ * auVar376._8_4_ + auVar339._8_4_;
    auVar93._12_4_ = auVar50._12_4_ * auVar376._12_4_ + auVar339._12_4_;
    auVar198._0_4_ =
         ((___xmm_3f8000003f8000003f8000003f800000 - auVar226._0_4_ * auVar226._0_4_) -
         auVar385._0_4_ * auVar385._0_4_) - auVar93._0_4_ * auVar93._0_4_;
    auVar198._4_4_ =
         ((_UNK_15076b1f4 - auVar226._4_4_ * auVar226._4_4_) - auVar385._4_4_ * auVar385._4_4_) -
         auVar93._4_4_ * auVar93._4_4_;
    auVar198._8_4_ =
         ((_UNK_15076b1f8 - auVar226._8_4_ * auVar226._8_4_) - auVar385._8_4_ * auVar385._8_4_) -
         auVar93._8_4_ * auVar93._8_4_;
    auVar198._12_4_ =
         ((_UNK_15076b1fc - auVar226._12_4_ * auVar226._12_4_) - auVar385._12_4_ * auVar385._12_4_)
         - auVar93._12_4_ * auVar93._12_4_;
    auVar144._4_4_ = -(uint)(0.0 < auVar198._4_4_);
    auVar144._0_4_ = -(uint)(0.0 < auVar198._0_4_);
    auVar144._8_4_ = -(uint)(0.0 < auVar198._8_4_);
    auVar144._12_4_ = -(uint)(0.0 < auVar198._12_4_);
    auVar261 = sqrtps(auVar266,auVar198);
    goto LAB_140b12579;
  case 4:
    auVar316._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar316._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar195._0_8_ = lVar26 + local_288 + lVar263;
    auVar195._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar94,auVar51);
    auVar50 = blendvps((undefined1  [16])0x0,auVar195,auVar50);
    auVar95._4_4_ = uVar17;
    auVar95._0_4_ = uVar17;
    auVar95._8_4_ = uVar332;
    auVar95._12_4_ = uVar332;
    auVar51 = blendvps((undefined1  [16])0x0,auVar316,auVar95);
    uVar39 = *(uint *)(param_4 + auVar50._0_8_);
    uVar45 = *(uint *)(param_4 + auVar50._8_8_);
    uVar43 = *(uint *)(param_4 + auVar51._0_8_);
    uVar44 = *(uint *)(param_4 + auVar51._8_8_);
    auVar227._0_4_ = (float)(int)((uVar39 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar227._4_4_ = (float)(int)((uVar45 >> 0x15) + _UNK_151c6b864);
    auVar227._8_4_ = (float)(int)((uVar43 >> 0x15) + _UNK_151c6b868);
    auVar227._12_4_ = (float)(int)((uVar44 >> 0x15) + _UNK_151c6b86c);
    auVar226 = divps(auVar227,___xmm_447fc000447fc000447fc000447fc000);
    auVar380._0_4_ =
         (float)(int)((uVar39 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                     ___xmm_fffffc01fffffc01fffffc01fffffc01);
    auVar380._4_4_ = (float)(int)((uVar45 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
    auVar380._8_4_ = (float)(int)((uVar43 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
    auVar380._12_4_ = (float)(int)((uVar44 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
    auVar385 = divps(auVar380,___xmm_447fc000447fc000447fc000447fc000);
    auVar96._0_4_ =
         (float)(int)((uVar39 & ___xmm_000003ff000003ff000003ff000003ff) +
                     ___xmm_fffffe01fffffe01fffffe01fffffe01);
    auVar96._4_4_ = (float)(int)((uVar45 & _UNK_151c6bc64) + _UNK_151c6b8b4);
    auVar96._8_4_ = (float)(int)((uVar43 & _UNK_151c6bc68) + _UNK_151c6b8b8);
    auVar96._12_4_ = (float)(int)((uVar44 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
    auVar93 = divps(auVar96,___xmm_43ff800043ff800043ff800043ff8000);
    break;
  case 5:
    auVar319._0_8_ = lVar36 + local_2d8 + lVar111;
    auVar319._8_8_ = lVar29 + lStack_2d0 + lVar150;
    auVar201._0_8_ = lVar26 + local_288 + lVar263;
    auVar201._8_8_ = lVar27 + lStack_280 + lVar108;
    auVar50 = pmovsxdq(auVar94,auVar51);
    auVar50 = blendvps((undefined1  [16])0x0,auVar201,auVar50);
    auVar101._4_4_ = uVar17;
    auVar101._0_4_ = uVar17;
    auVar101._8_4_ = uVar332;
    auVar101._12_4_ = uVar332;
    auVar51 = blendvps((undefined1  [16])0x0,auVar319,auVar101);
    uVar39 = *(uint *)(param_4 + auVar50._0_8_);
    uVar45 = *(uint *)(param_4 + auVar50._8_8_);
    auVar202._4_4_ = uVar45;
    auVar202._0_4_ = uVar39;
    uVar43 = *(uint *)(param_4 + auVar51._0_8_);
    uVar44 = *(uint *)(param_4 + auVar51._8_8_);
    auVar202._12_4_ = uVar44;
    auVar202._8_4_ = uVar43;
    auVar230._0_4_ = uVar39 >> 0x15;
    auVar230._4_4_ = uVar45 >> 0x15;
    auVar230._8_4_ = uVar43 >> 0x15;
    auVar230._12_4_ = uVar44 >> 0x15;
    auVar383._0_4_ = uVar39 >> 10;
    auVar383._4_4_ = uVar45 >> 10;
    auVar383._8_4_ = uVar43 >> 10;
    auVar383._12_4_ = uVar44 >> 10;
    auVar102._0_4_ = uVar39 >> 5;
    auVar102._4_4_ = uVar45 >> 5;
    auVar102._8_4_ = uVar43 >> 5;
    auVar102._12_4_ = uVar44 >> 5;
    auVar50 = auVar230 & ___xmm_00000380000003800000038000000380;
    auVar231._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar231._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar231._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar231._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar226 = auVar231 |
               auVar230 & ___xmm_00000400000004000000040000000400 |
               auVar102 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar327._0_4_ = uVar39 << 6;
    auVar327._4_4_ = uVar45 << 6;
    auVar327._8_4_ = uVar43 << 6;
    auVar327._12_4_ = uVar44 << 6;
    auVar50 = auVar383 & ___xmm_00000380000003800000038000000380;
    auVar384._0_4_ = auVar50._0_4_ + ___xmm_00003d8000003d8000003d8000003d80;
    auVar384._4_4_ = auVar50._4_4_ + _UNK_151c6b7b4;
    auVar384._8_4_ = auVar50._8_4_ + _UNK_151c6b7b8;
    auVar384._12_4_ = auVar50._12_4_ + _UNK_151c6b7bc;
    auVar50 = ___xmm_000001c0000001c0000001c0000001c0 & auVar202;
    auVar320._0_4_ = uVar39 << 0x11;
    auVar320._4_4_ = uVar45 << 0x11;
    auVar320._8_4_ = uVar43 << 0x11;
    auVar320._12_4_ = uVar44 << 0x11;
    auVar103._0_4_ = auVar50._0_4_ + ___xmm_00001ec000001ec000001ec000001ec0;
    auVar103._4_4_ = auVar50._4_4_ + _UNK_151c6b824;
    auVar103._8_4_ = auVar50._8_4_ + _UNK_151c6b828;
    auVar103._12_4_ = auVar50._12_4_ + _UNK_151c6b82c;
    auVar385 = auVar384 |
               ___xmm_00000400000004000000040000000400 & auVar383 |
               auVar327 & ___xmm_007f0000007f0000007f0000007f0000;
    auVar93 = auVar103 | auVar202 & ___xmm_00000200000002000000020000000200 |
              auVar320 & ___xmm_007e0000007e0000007e0000007e0000;
  }
  auVar260._0_4_ =
       ((___xmm_3f8000003f8000003f8000003f800000 - auVar226._0_4_ * auVar226._0_4_) -
       auVar385._0_4_ * auVar385._0_4_) - auVar93._0_4_ * auVar93._0_4_;
  auVar260._4_4_ =
       ((_UNK_15076b1f4 - auVar226._4_4_ * auVar226._4_4_) - auVar385._4_4_ * auVar385._4_4_) -
       auVar93._4_4_ * auVar93._4_4_;
  auVar260._8_4_ =
       ((_UNK_15076b1f8 - auVar226._8_4_ * auVar226._8_4_) - auVar385._8_4_ * auVar385._8_4_) -
       auVar93._8_4_ * auVar93._8_4_;
  auVar260._12_4_ =
       ((_UNK_15076b1fc - auVar226._12_4_ * auVar226._12_4_) - auVar385._12_4_ * auVar385._12_4_) -
       auVar93._12_4_ * auVar93._12_4_;
  auVar144._4_4_ = -(uint)(0.0 < auVar260._4_4_);
  auVar144._0_4_ = -(uint)(0.0 < auVar260._0_4_);
  auVar144._8_4_ = -(uint)(0.0 < auVar260._8_4_);
  auVar144._12_4_ = -(uint)(0.0 < auVar260._12_4_);
  auVar261 = sqrtps(auVar260,auVar260);
LAB_140b12579:
  auVar259._0_4_ = auVar261._0_4_ & auVar144._0_4_;
  auVar259._4_4_ = auVar261._4_4_ & auVar144._4_4_;
  auVar259._8_4_ = auVar261._8_4_ & auVar144._8_4_;
  auVar259._12_4_ = auVar261._12_4_ & auVar144._12_4_;
LAB_140b1257c:
  fVar265 = auVar53._0_4_;
  fVar280 = auVar53._4_4_;
  fVar282 = auVar53._8_4_;
  fVar284 = auVar53._12_4_;
  auVar386._0_4_ = auVar385._0_4_ * fVar265;
  auVar386._4_4_ = auVar385._4_4_ * fVar280;
  auVar386._8_4_ = auVar385._8_4_ * fVar282;
  auVar386._12_4_ = auVar385._12_4_ * fVar284;
  fVar49 = (___xmm_3f8000003f8000003f8000003f800000 - fVar265) *
           (float)(int)(-(uint)(unaff_XMM13._0_4_ * auVar259._0_4_ +
                                unaff_XMM12._0_4_ * auVar385._0_4_ +
                                unaff_XMM10._0_4_ * auVar93._0_4_ +
                                unaff_XMM9._0_4_ * auVar226._0_4_ < 0.0) |
                       ___xmm_00000001000000010000000100000001);
  fVar106 = (_UNK_15076b1f4 - fVar280) *
            (float)(int)(-(uint)(unaff_XMM13._4_4_ * auVar259._4_4_ +
                                 unaff_XMM12._4_4_ * auVar385._4_4_ +
                                 unaff_XMM10._4_4_ * auVar93._4_4_ +
                                 unaff_XMM9._4_4_ * auVar226._4_4_ < 0.0) | _UNK_150631da4);
  fVar107 = (_UNK_15076b1f8 - fVar282) *
            (float)(int)(-(uint)(unaff_XMM13._8_4_ * auVar259._8_4_ +
                                 unaff_XMM12._8_4_ * auVar385._8_4_ +
                                 unaff_XMM10._8_4_ * auVar93._8_4_ +
                                 unaff_XMM9._8_4_ * auVar226._8_4_ < 0.0) | _UNK_150631da8);
  fVar109 = (_UNK_15076b1fc - fVar284) *
            (float)(int)(-(uint)(unaff_XMM13._12_4_ * auVar259._12_4_ +
                                 unaff_XMM12._12_4_ * auVar385._12_4_ +
                                 unaff_XMM10._12_4_ * auVar93._12_4_ +
                                 unaff_XMM9._12_4_ * auVar226._12_4_ < 0.0) | _UNK_150631dac);
  fVar264 = unaff_XMM9._0_4_ * fVar49 + auVar226._0_4_ * fVar265;
  fVar279 = unaff_XMM9._4_4_ * fVar106 + auVar226._4_4_ * fVar280;
  fVar281 = unaff_XMM9._8_4_ * fVar107 + auVar226._8_4_ * fVar282;
  fVar283 = unaff_XMM9._12_4_ * fVar109 + auVar226._12_4_ * fVar284;
  fVar110 = unaff_XMM12._0_4_ * fVar49 + auVar386._0_4_;
  fVar147 = unaff_XMM12._4_4_ * fVar106 + auVar386._4_4_;
  fVar148 = unaff_XMM12._8_4_ * fVar107 + auVar386._8_4_;
  fVar151 = unaff_XMM12._12_4_ * fVar109 + auVar386._12_4_;
  fVar153 = unaff_XMM10._0_4_ * fVar49 + auVar93._0_4_ * fVar265;
  fVar204 = unaff_XMM10._4_4_ * fVar106 + auVar93._4_4_ * fVar280;
  fVar205 = unaff_XMM10._8_4_ * fVar107 + auVar93._8_4_ * fVar282;
  fVar206 = unaff_XMM10._12_4_ * fVar109 + auVar93._12_4_ * fVar284;
  fVar265 = fVar49 * unaff_XMM13._0_4_ + auVar259._0_4_ * fVar265;
  fVar280 = fVar106 * unaff_XMM13._4_4_ + auVar259._4_4_ * fVar280;
  fVar282 = fVar107 * unaff_XMM13._8_4_ + auVar259._8_4_ * fVar282;
  fVar284 = fVar109 * unaff_XMM13._12_4_ + auVar259._12_4_ * fVar284;
  auVar328._0_4_ = fVar265 * fVar265 + fVar110 * fVar110 + fVar153 * fVar153 + fVar264 * fVar264;
  auVar328._4_4_ = fVar280 * fVar280 + fVar147 * fVar147 + fVar204 * fVar204 + fVar279 * fVar279;
  auVar328._8_4_ = fVar282 * fVar282 + fVar148 * fVar148 + fVar205 * fVar205 + fVar281 * fVar281;
  auVar328._12_4_ = fVar284 * fVar284 + fVar151 * fVar151 + fVar206 * fVar206 + fVar283 * fVar283;
  uVar39 = -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar328._0_4_);
  uVar45 = -(uint)(_UNK_1506895d4 <= auVar328._4_4_);
  uVar43 = -(uint)(_UNK_1506895d8 <= auVar328._8_4_);
  uVar44 = -(uint)(_UNK_1506895dc <= auVar328._12_4_);
  auVar50 = rsqrtps(auVar386,auVar328);
  fVar49 = auVar50._0_4_;
  fVar106 = auVar50._4_4_;
  fVar107 = auVar50._8_4_;
  fVar109 = auVar50._12_4_;
  fVar49 = (___xmm_3f0000003f0000003f0000003f000000 -
           fVar49 * fVar49 * auVar328._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) * fVar49 +
           fVar49;
  fVar106 = (_UNK_150689624 - fVar106 * fVar106 * auVar328._4_4_ * _UNK_150689624) * fVar106 +
            fVar106;
  fVar107 = (_UNK_150689628 - fVar107 * fVar107 * auVar328._8_4_ * _UNK_150689628) * fVar107 +
            fVar107;
  fVar109 = (_UNK_15068962c - fVar109 * fVar109 * auVar328._12_4_ * _UNK_15068962c) * fVar109 +
            fVar109;
  fVar49 = (___xmm_3f0000003f0000003f0000003f000000 -
           fVar49 * fVar49 * auVar328._0_4_ * ___xmm_3f0000003f0000003f0000003f000000) * fVar49 +
           fVar49;
  fVar106 = (_UNK_150689624 - fVar106 * fVar106 * auVar328._4_4_ * _UNK_150689624) * fVar106 +
            fVar106;
  fVar107 = (_UNK_150689628 - fVar107 * fVar107 * auVar328._8_4_ * _UNK_150689628) * fVar107 +
            fVar107;
  fVar109 = (_UNK_15068962c - fVar109 * fVar109 * auVar328._12_4_ * _UNK_15068962c) * fVar109 +
            fVar109;
  auVar347._0_4_ = (uint)(fVar265 * fVar49) & uVar39;
  auVar347._4_4_ = (uint)(fVar280 * fVar106) & uVar45;
  auVar347._8_4_ = (uint)(fVar282 * fVar107) & uVar43;
  auVar347._12_4_ = (uint)(fVar284 * fVar109) & uVar44;
  auVar232._0_4_ =
       -(uint)(auVar328._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77) &
       (uint)___xmm_3f8000003f8000003f8000003f800000;
  auVar232._4_4_ = -(uint)(auVar328._4_4_ < _UNK_1506895d4) & (uint)_UNK_15076b1f4;
  auVar232._8_4_ = -(uint)(auVar328._8_4_ < _UNK_1506895d8) & (uint)_UNK_15076b1f8;
  auVar232._12_4_ = -(uint)(auVar328._12_4_ < _UNK_1506895dc) & (uint)_UNK_15076b1fc;
  auVar104._0_8_ = CONCAT44((uint)(fVar106 * fVar279) & uVar45,(uint)(fVar49 * fVar264) & uVar39);
  auVar104._8_4_ = (uint)(fVar107 * fVar281) & uVar43;
  auVar104._12_4_ = (uint)(fVar109 * fVar283) & uVar44;
  bVar42 = (bVar30 & 1) != 0;
  auVar329 = unaff_XMM9;
  if (bVar42) {
    auVar329._8_4_ = auVar104._8_4_;
    auVar329._0_8_ = auVar104._0_8_;
    auVar329._12_4_ = auVar104._12_4_;
  }
  auVar145._0_8_ = CONCAT44((uint)(fVar147 * fVar106) & uVar45,(uint)(fVar110 * fVar49) & uVar39);
  auVar145._8_4_ = (uint)(fVar148 * fVar107) & uVar43;
  auVar145._12_4_ = (uint)(fVar151 * fVar109) & uVar44;
  auVar203._0_8_ = CONCAT44((uint)(fVar204 * fVar106) & uVar45,(uint)(fVar153 * fVar49) & uVar39);
  auVar203._8_4_ = (uint)(fVar205 * fVar107) & uVar43;
  auVar203._12_4_ = (uint)(fVar206 * fVar109) & uVar44;
  auVar347 = auVar347 | auVar232;
  auVar50 = unaff_XMM13;
  auVar262 = unaff_XMM12;
  auVar321 = unaff_XMM10;
  if (bVar42) {
    auVar262._8_4_ = auVar145._8_4_;
    auVar262._0_8_ = auVar145._0_8_;
    auVar262._12_4_ = auVar145._12_4_;
    auVar321._8_4_ = auVar203._8_4_;
    auVar321._0_8_ = auVar203._0_8_;
    auVar321._12_4_ = auVar203._12_4_;
    auVar50 = auVar347;
  }
  auVar51 = blendps(unaff_XMM9,auVar329,1);
  if ((bVar30 & 2) == 0) {
    auVar392 = blendps(unaff_XMM12,auVar262,1);
    auVar367 = blendps(unaff_XMM10,auVar321,1);
    auVar266 = blendps(unaff_XMM13,auVar50,1);
    auVar51 = blendps(auVar51,auVar51,2);
    auVar50 = auVar266;
    auVar168 = auVar367;
    auVar53 = auVar392;
    if ((bVar30 & 4) != 0) goto LAB_140b1272f;
LAB_140b127fa:
    auVar393 = blendps(auVar53,auVar392,2);
    auVar368 = blendps(auVar168,auVar367,2);
    auVar266 = blendps(auVar266,auVar50,2);
    auVar50 = blendps(auVar51,auVar51,4);
    auVar51 = auVar266;
    auVar168 = auVar368;
    auVar53 = auVar393;
    if (-1 < (char)bVar30) goto LAB_140b12777;
LAB_140b12843:
    auVar53 = blendps(auVar53,auVar393,4);
    if (-1 < (char)bVar30) goto LAB_140b12850;
LAB_140b12788:
    auVar168 = blendps(auVar168,auVar368,4);
    if (-1 < (char)bVar30) goto LAB_140b12795;
LAB_140b12861:
    auVar51 = blendps(auVar266,auVar51,4);
  }
  else {
    auVar330._8_4_ = auVar104._8_4_;
    auVar330._0_8_ = auVar104._0_8_;
    auVar330._12_4_ = auVar104._12_4_;
    auVar53 = blendps(unaff_XMM12,auVar262,1);
    auVar392._8_4_ = auVar145._8_4_;
    auVar392._0_8_ = auVar145._0_8_;
    auVar392._12_4_ = auVar145._12_4_;
    auVar168 = blendps(unaff_XMM10,auVar321,1);
    auVar367._8_4_ = auVar203._8_4_;
    auVar367._0_8_ = auVar203._0_8_;
    auVar367._12_4_ = auVar203._12_4_;
    auVar266 = blendps(unaff_XMM13,auVar50,1);
    auVar51 = blendps(auVar51,auVar330,2);
    auVar50 = auVar347;
    if ((bVar30 & 4) == 0) goto LAB_140b127fa;
LAB_140b1272f:
    auVar331._8_4_ = auVar104._8_4_;
    auVar331._0_8_ = auVar104._0_8_;
    auVar331._12_4_ = auVar104._12_4_;
    auVar53 = blendps(auVar53,auVar392,2);
    auVar393._8_4_ = auVar145._8_4_;
    auVar393._0_8_ = auVar145._0_8_;
    auVar393._12_4_ = auVar145._12_4_;
    auVar168 = blendps(auVar168,auVar367,2);
    auVar368._8_4_ = auVar203._8_4_;
    auVar368._0_8_ = auVar203._0_8_;
    auVar368._12_4_ = auVar203._12_4_;
    auVar266 = blendps(auVar266,auVar50,2);
    auVar50 = blendps(auVar51,auVar331,4);
    auVar51 = auVar347;
    if ((char)bVar30 < '\0') goto LAB_140b12843;
LAB_140b12777:
    auVar104 = auVar50;
    auVar53 = blendps(auVar53,auVar393,4);
    auVar50 = auVar104;
    if ((char)bVar30 < '\0') goto LAB_140b12788;
LAB_140b12850:
    auVar145 = auVar53;
    auVar168 = blendps(auVar168,auVar368,4);
    auVar53 = auVar145;
    if ((char)bVar30 < '\0') goto LAB_140b12861;
LAB_140b12795:
    auVar51 = blendps(auVar266,auVar51,4);
    auVar203 = auVar168;
  }
  if (-1 < (char)bVar30) {
    auVar347 = auVar51;
  }
  unaff_XMM9 = blendps(auVar50,auVar104,8);
  unaff_XMM12 = blendps(auVar53,auVar145,8);
  unaff_XMM10 = blendps(auVar168,auVar203,8);
  unaff_XMM13 = blendps(auVar51,auVar347,8);
LAB_140b1288a:
  auVar105._0_8_ = unaff_XMM10._0_8_;
  auVar105._8_4_ = unaff_XMM10._4_4_;
  auVar105._12_4_ = unaff_XMM13._4_4_;
  auVar146._0_8_ = unaff_XMM9._0_8_;
  auVar146._8_4_ = unaff_XMM9._4_4_;
  auVar146._12_4_ = unaff_XMM12._4_4_;
  local_168[0] = CONCAT44(unaff_XMM12._0_4_,unaff_XMM9._0_4_);
  local_168[1] = CONCAT44(unaff_XMM13._0_4_,unaff_XMM10._0_4_);
  local_168[2] = auVar146._8_8_;
  local_168[3] = auVar105._8_8_;
  local_148 = unaff_XMM9._8_4_;
  uStack_144 = unaff_XMM12._8_4_;
  uStack_140 = unaff_XMM10._8_4_;
  uStack_13c = unaff_XMM13._8_4_;
  local_138 = unaff_XMM9._12_4_;
  uStack_134 = unaff_XMM12._12_4_;
  uStack_130 = unaff_XMM10._12_4_;
  uStack_12c = unaff_XMM13._12_4_;
  uVar39 = movmskps(uVar25,auVar413);
  uVar20 = (ulonglong)uVar39;
  do {
    if (uVar20 == 0) {
      uVar39 = 0x40;
    }
    else {
      uVar39 = 0;
      for (uVar28 = uVar20; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
        uVar39 = uVar39 + 1;
      }
    }
    bVar30 = (byte)uVar39 & 0x3f;
    local_178 = CONCAT44(uVar349,uVar348);
    uStack_170 = CONCAT44(uVar14,uVar12);
    uVar22 = *(undefined8 *)((longlong)local_168 + (ulonglong)(uVar39 << 4) + 8);
    uVar21 = *(undefined8 *)((longlong)local_168 + (ulonglong)(uVar39 << 4));
    lVar26 = (longlong)*(int *)((longlong)&local_178 + (ulonglong)(uVar39 & 3) * 4) * 0x60;
    pdVar3 = (double *)(param_1 + lVar26);
    *pdVar3 = (double)(float)uVar21;
    pdVar3[1] = (double)(float)((ulonglong)uVar21 >> 0x20);
    pdVar3 = (double *)(param_1 + 0x10 + lVar26);
    *pdVar3 = (double)(float)uVar22;
    pdVar3[1] = (double)(float)((ulonglong)uVar22 >> 0x20);
    uVar20 = uVar20 & (-2L << bVar30 | 0xfffffffffffffffeU >> 0x40 - bVar30);
  } while (uVar20 != 0);
  return;
}

// GetConstantKeyLerpPoseTranslations_sse4 @ 140b129b0

/* WARNING: Removing unreachable block (ram,0x000140b1345e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseTranslations_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined4 uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined8 uVar34;
  uint uVar35;
  longlong lVar36;
  bool bVar37;
  longlong lVar38;
  undefined1 auVar39 [16];
  int iVar68;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  longlong lVar67;
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
  longlong lVar69;
  undefined4 uVar82;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  longlong lVar83;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
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
  ulonglong uVar99;
  float fVar111;
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
  int iVar112;
  longlong lVar113;
  int iVar129;
  undefined1 auVar114 [16];
  int iVar128;
  int iVar131;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  longlong lVar130;
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
  longlong lVar132;
  undefined1 auVar133 [16];
  float fVar147;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  longlong lVar146;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 unaff_XMM6 [16];
  float fVar154;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  longlong lVar155;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  longlong lVar173;
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
  undefined1 unaff_XMM8 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  longlong lVar184;
  undefined1 unaff_XMM9 [16];
  longlong lVar190;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar191 [16];
  float fVar202;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined4 uVar213;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined4 uVar214;
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 local_278 [8];
  undefined8 uStack_270;
  longlong local_258;
  longlong lStack_250;
  int local_228;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  iVar22 = *(int *)(&DAT_151c6be40 + (longlong)(int)param_8 * 4) *
           *(int *)(&DAT_151c6be20 + (longlong)(int)param_8 * 4);
  uVar24 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar24 = param_9;
  }
  if ((int)(uVar24 & 0xfffffffc) < 1) {
    uVar30 = 0;
  }
  else {
    uVar19 = -(uint)(param_8 == 3);
    uVar30 = 0;
    auVar42._8_4_ = 0xffffffff;
    auVar42._0_8_ = 0xffffffffffffffff;
    auVar42._12_4_ = 0xffffffff;
    uVar35 = 0;
    do {
      piVar1 = (int *)(param_2 + (ulonglong)uVar35);
      iVar21 = *piVar1;
      iVar10 = piVar1[2];
      puVar3 = (undefined8 *)(param_2 + 0x10 + (ulonglong)uVar35);
      uVar14 = *puVar3;
      iVar11 = *(int *)(puVar3 + 1);
      iVar68 = *(int *)((longlong)puVar3 + 0xc) << 4;
      lVar27 = (longlong)(*(int *)((longlong)puVar3 + 4) << 4);
      iVar112 = *(int *)(param_3 + 4 + (longlong)(piVar1[1] << 4));
      iVar128 = *(int *)(param_3 + 4 + (longlong)(piVar1[3] * 0x10));
      iVar129 = *(int *)(param_3 + 4 + lVar27);
      iVar131 = *(int *)(param_3 + 4 + (longlong)iVar68);
      auVar115._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar112);
      auVar115._4_4_ = -(uint)(_UNK_150631da4 < iVar128);
      auVar115._8_4_ = -(uint)(_UNK_150631da8 < iVar129);
      auVar115._12_4_ = -(uint)(_UNK_150631dac < iVar131);
      uVar20 = movmskps(iVar68,auVar115);
      if ((uVar20 ^ 0xf) == 0) {
        auVar157 = auVar42;
        if (0.0 < param_6) goto LAB_140b12ce6;
LAB_140b12d51:
        auVar93 = ZEXT816(0);
        unaff_XMM11 = blendvps(unaff_XMM11,auVar93,auVar157);
        auVar148 = blendvps(_local_208,auVar93,auVar157);
LAB_140b12d6f:
        unaff_XMM15 = blendvps(unaff_XMM15,auVar93,auVar157);
      }
      else {
        auVar157._0_4_ = unaff_XMM11._0_4_ & auVar115._0_4_;
        auVar157._4_4_ = unaff_XMM11._4_4_ & auVar115._4_4_;
        auVar157._8_4_ = unaff_XMM11._8_4_ & auVar115._8_4_;
        auVar157._12_4_ = unaff_XMM11._12_4_ & auVar115._12_4_;
        auVar148._0_4_ = local_208._0_4_ & auVar115._0_4_;
        auVar148._4_4_ = local_208._4_4_ & auVar115._4_4_;
        auVar148._8_4_ = local_208._8_4_ & auVar115._8_4_;
        auVar148._12_4_ = local_208._12_4_ & auVar115._12_4_;
        auVar203._0_4_ = unaff_XMM15._0_4_ & auVar115._0_4_;
        auVar203._4_4_ = unaff_XMM15._4_4_ & auVar115._4_4_;
        auVar203._8_4_ = unaff_XMM15._8_4_ & auVar115._8_4_;
        auVar203._12_4_ = unaff_XMM15._12_4_ & auVar115._12_4_;
        unaff_XMM11 = auVar157;
        unaff_XMM15 = auVar203;
        if ((char)(uVar20 ^ 0xf) != '\x0f') {
          auVar215._0_4_ = -(uint)(iVar112 < ___xmm_00000002000000020000000200000002);
          auVar215._4_4_ = -(uint)(iVar128 < _UNK_15066df64);
          auVar215._8_4_ = -(uint)(iVar129 < _UNK_15066df68);
          auVar215._12_4_ = -(uint)(iVar131 < _UNK_15066df6c);
          auVar157 = auVar215 ^ auVar42;
          _local_208 = auVar148;
          if (param_6 <= 0.0) goto LAB_140b12d51;
LAB_140b12ce6:
          auVar141._0_4_ = iVar112 + auVar42._0_4_;
          auVar141._4_4_ = iVar128 + auVar42._4_4_;
          auVar141._8_4_ = iVar129 + auVar42._8_4_;
          auVar141._12_4_ = iVar131 + auVar42._12_4_;
          if (__real_3f800000 <= param_6) {
            unaff_XMM11 = blendvps(unaff_XMM11,auVar141,auVar157);
            auVar148 = blendvps(_local_208,auVar141,auVar157);
            auVar93 = ZEXT816(0);
          }
          else {
            auVar134._0_4_ = (float)auVar141._0_4_ * param_6;
            auVar134._4_4_ = (float)auVar141._4_4_ * param_6;
            auVar134._8_4_ = (float)auVar141._8_4_ * param_6;
            auVar134._12_4_ = (float)auVar141._12_4_ * param_6;
            auVar148 = roundps(unaff_XMM6,auVar134,9);
            iVar112 = (int)auVar148._0_4_;
            iVar128 = (int)auVar148._4_4_;
            iVar129 = (int)auVar148._8_4_;
            iVar131 = (int)auVar148._12_4_;
            auVar222._0_4_ =
                 (uint)(auVar141._0_4_ < iVar112) * auVar141._0_4_ |
                 (uint)(auVar141._0_4_ >= iVar112) * iVar112;
            auVar222._4_4_ =
                 (uint)(auVar141._4_4_ < iVar128) * auVar141._4_4_ |
                 (uint)(auVar141._4_4_ >= iVar128) * iVar128;
            auVar222._8_4_ =
                 (uint)(auVar141._8_4_ < iVar129) * auVar141._8_4_ |
                 (uint)(auVar141._8_4_ >= iVar129) * iVar129;
            auVar222._12_4_ =
                 (uint)(auVar141._12_4_ < iVar131) * auVar141._12_4_ |
                 (uint)(auVar141._12_4_ >= iVar131) * iVar131;
            unaff_XMM11 = blendvps(unaff_XMM11,auVar222,auVar157);
            auVar93 = ZEXT816(0);
            if (param_7 != '\x01') {
              auVar93._4_4_ = auVar134._4_4_ - auVar148._4_4_;
              auVar93._0_4_ = auVar134._0_4_ - auVar148._0_4_;
              auVar93._8_4_ = auVar134._8_4_ - auVar148._8_4_;
              auVar93._12_4_ = auVar134._12_4_ - auVar148._12_4_;
            }
            iVar112 = unaff_XMM11._0_4_ - auVar42._0_4_;
            iVar128 = unaff_XMM11._4_4_ - auVar42._4_4_;
            iVar129 = unaff_XMM11._8_4_ - auVar42._8_4_;
            iVar131 = unaff_XMM11._12_4_ - auVar42._12_4_;
            auVar135._0_4_ =
                 (uint)(auVar141._0_4_ < iVar112) * auVar141._0_4_ |
                 (uint)(auVar141._0_4_ >= iVar112) * iVar112;
            auVar135._4_4_ =
                 (uint)(auVar141._4_4_ < iVar128) * auVar141._4_4_ |
                 (uint)(auVar141._4_4_ >= iVar128) * iVar128;
            auVar135._8_4_ =
                 (uint)(auVar141._8_4_ < iVar129) * auVar141._8_4_ |
                 (uint)(auVar141._8_4_ >= iVar129) * iVar129;
            auVar135._12_4_ =
                 (uint)(auVar141._12_4_ < iVar131) * auVar141._12_4_ |
                 (uint)(auVar141._12_4_ >= iVar131) * iVar131;
            auVar148 = blendvps(_local_208,auVar135,auVar157);
          }
          goto LAB_140b12d6f;
        }
      }
      iVar112 = *(int *)(param_3 + (piVar1[1] << 4));
      lVar32 = (longlong)iVar112;
      iVar128 = *(int *)(param_3 + piVar1[3] * 0x10);
      lVar33 = (longlong)iVar128;
      iVar129 = *(int *)(param_3 + lVar27);
      lVar27 = (longlong)iVar129;
      iVar131 = *(int *)(param_3 + iVar68);
      lVar36 = (longlong)iVar131;
      auVar100._4_4_ = iVar128;
      auVar100._0_4_ = iVar112;
      auVar100._12_4_ = iVar131;
      auVar100._8_4_ = iVar129;
      auVar40._4_4_ = iVar131;
      auVar40._0_4_ = iVar129;
      auVar40._8_8_ = 0;
      unaff_XMM9 = pmovsxdq(unaff_XMM9,auVar40);
      auVar157 = pmovsxdq(unaff_XMM7,auVar100);
      auVar72._0_8_ = CONCAT44(auVar115._4_4_ & uVar19,auVar115._0_4_ & uVar19);
      auVar72._8_4_ = auVar115._8_4_ & uVar19;
      auVar72._12_4_ = auVar115._12_4_ & uVar19;
      auVar133 = ZEXT816(0);
      auVar41._8_4_ = auVar72._8_4_;
      auVar41._0_8_ = auVar72._0_8_;
      auVar41._12_4_ = auVar72._12_4_;
      auVar115 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar41);
      auVar42 = pmovsxdq(auVar41,auVar115);
      auVar116._8_8_ = auVar115._8_8_;
      auVar116._0_8_ = auVar116._8_8_;
      auVar73 = pmovsxdq(auVar72,auVar116);
      auVar12._4_4_ = iVar22;
      auVar12._0_4_ = iVar22;
      auVar12._8_4_ = iVar22;
      auVar12._12_4_ = iVar22;
      auVar115 = pmulld(unaff_XMM11,auVar12);
      unaff_XMM12 = pmovsxdq(unaff_XMM12,auVar115);
      auVar117._8_4_ = auVar115._8_4_;
      auVar117._12_4_ = auVar115._12_4_;
      auVar117._0_8_ = auVar115._8_8_;
      auVar115 = pmovsxdq(unaff_XMM15,auVar117);
      lVar155 = auVar157._0_8_;
      lVar173 = auVar157._8_8_;
      lVar184 = unaff_XMM9._0_8_;
      lVar190 = unaff_XMM9._8_8_;
      lVar113 = unaff_XMM12._0_8_;
      lVar130 = unaff_XMM12._8_8_;
      lVar132 = auVar115._0_8_;
      lVar146 = auVar115._8_8_;
      lVar69 = auVar73._0_8_;
      lVar83 = auVar73._8_8_;
      lVar38 = auVar42._0_8_;
      lVar67 = auVar42._8_8_;
      if (param_8 < 2) {
        lVar132 = lVar69 + lVar184 + lVar132;
        lVar146 = lVar83 + lVar190 + lVar146;
        auVar117._0_8_ = lVar38 + lVar155 + lVar113;
        auVar117._8_8_ = lVar67 + lVar173 + lVar130;
        auVar115 = insertps(ZEXT416(*(uint *)(param_4 + auVar117._0_8_)),
                            *(undefined4 *)(param_4 + auVar117._8_8_),0x10);
        auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + lVar132),0x20);
        auVar191 = insertps(auVar115,*(undefined4 *)(param_4 + lVar146),0x30);
        auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 4 + auVar117._0_8_)),
                            *(undefined4 *)(param_4 + 4 + auVar117._8_8_),0x10);
        auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar132),0x20);
        unaff_XMM6 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar146),0x30);
        auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 8 + auVar117._0_8_)),
                            *(undefined4 *)(param_4 + 8 + auVar117._8_8_),0x10);
        auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 8 + lVar132),0x20);
        auVar133 = insertps(auVar115,*(undefined4 *)(param_4 + 8 + lVar146),0x30);
      }
      else if (param_8 == 2) {
        lVar132 = lVar69 + lVar184 + lVar132;
        lVar146 = lVar83 + lVar190 + lVar146;
        lVar113 = lVar38 + lVar155 + lVar113;
        lVar130 = lVar67 + lVar173 + lVar130;
        auVar118._2_2_ = *(undefined2 *)(param_4 + lVar130);
        auVar118._0_2_ = *(undefined2 *)(param_4 + lVar113);
        auVar118._4_2_ = *(undefined2 *)(param_4 + lVar132);
        auVar118._6_2_ = *(undefined2 *)(param_4 + lVar146);
        auVar118._8_8_ = 0;
        auVar137._2_2_ = *(undefined2 *)(param_4 + 2 + lVar130);
        auVar137._0_2_ = *(undefined2 *)(param_4 + 2 + lVar113);
        auVar137._4_2_ = *(undefined2 *)(param_4 + 2 + lVar132);
        auVar137._6_2_ = *(undefined2 *)(param_4 + 2 + lVar146);
        auVar137._8_8_ = 0;
        auVar204._2_2_ = *(undefined2 *)(param_4 + 4 + lVar130);
        auVar204._0_2_ = *(undefined2 *)(param_4 + 4 + lVar113);
        auVar204._4_2_ = *(undefined2 *)(param_4 + 4 + lVar132);
        auVar204._6_2_ = *(undefined2 *)(param_4 + 4 + lVar146);
        auVar204._8_8_ = 0;
        auVar115 = pmovzxwd(auVar118,auVar118);
        unaff_XMM12._4_4_ = _UNK_151c6b8e4;
        unaff_XMM12._0_4_ = ___xmm_ffff8001ffff8001ffff8001ffff8001;
        unaff_XMM12._8_4_ = _UNK_151c6b8e8;
        unaff_XMM12._12_4_ = _UNK_151c6b8ec;
        auVar119._0_4_ = auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar119._4_4_ = auVar115._4_4_ + _UNK_151c6b8e4;
        auVar119._8_4_ = auVar115._8_4_ + _UNK_151c6b8e8;
        auVar119._12_4_ = auVar115._12_4_ + _UNK_151c6b8ec;
        auVar194._0_4_ = (float)auVar119._0_4_;
        auVar194._4_4_ = (float)auVar119._4_4_;
        auVar194._8_4_ = (float)auVar119._8_4_;
        auVar194._12_4_ = (float)auVar119._12_4_;
        auVar203 = divps(auVar194,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar115 = pmovzxwd(auVar119,auVar137);
        auVar120._0_4_ = auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar120._4_4_ = auVar115._4_4_ + _UNK_151c6b8e4;
        auVar120._8_4_ = auVar115._8_4_ + _UNK_151c6b8e8;
        auVar120._12_4_ = auVar115._12_4_ + _UNK_151c6b8ec;
        auVar150._0_4_ = (float)auVar120._0_4_;
        auVar150._4_4_ = (float)auVar120._4_4_;
        auVar150._8_4_ = (float)auVar120._8_4_;
        auVar150._12_4_ = (float)auVar120._12_4_;
        auVar157 = divps(auVar150,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar115 = pmovzxwd(auVar120,auVar204);
        auVar138._0_4_ = (float)(auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar138._4_4_ = (float)(auVar115._4_4_ + _UNK_151c6b8e4);
        auVar138._8_4_ = (float)(auVar115._8_4_ + _UNK_151c6b8e8);
        auVar138._12_4_ = (float)(auVar115._12_4_ + _UNK_151c6b8ec);
        auVar115 = divps(auVar138,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar117._4_4_ = (int)_UNK_151c6be64;
        auVar117._0_4_ = (int)___xmm_43000000430000004300000043000000;
        auVar117._8_4_ = (int)_UNK_151c6be68;
        auVar117._12_4_ = (int)_UNK_151c6be6c;
        auVar191._0_4_ = auVar203._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar191._4_4_ = auVar203._4_4_ * _UNK_151c6be64;
        auVar191._8_4_ = auVar203._8_4_ * _UNK_151c6be68;
        auVar191._12_4_ = auVar203._12_4_ * _UNK_151c6be6c;
        unaff_XMM6._0_4_ = auVar157._0_4_ * ___xmm_43000000430000004300000043000000;
        unaff_XMM6._4_4_ = auVar157._4_4_ * _UNK_151c6be64;
        unaff_XMM6._8_4_ = auVar157._8_4_ * _UNK_151c6be68;
        unaff_XMM6._12_4_ = auVar157._12_4_ * _UNK_151c6be6c;
        auVar133._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar133._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
        auVar133._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
        auVar133._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
      }
      else {
        unaff_XMM6 = ZEXT816(0);
        auVar191 = ZEXT816(0);
        if (param_8 == 3) {
          uVar20 = *(uint *)(param_4 + lVar38 + lVar155 + lVar113);
          uVar4 = *(uint *)(param_4 + lVar67 + lVar173 + lVar130);
          uVar5 = *(uint *)(param_4 + lVar69 + lVar184 + lVar132);
          uVar6 = *(uint *)(param_4 + lVar83 + lVar190 + lVar146);
          auVar115 = insertps(ZEXT416(*(uint *)(param_4 + lVar32)),*(undefined4 *)(param_4 + lVar33)
                              ,0x10);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + lVar27),0x20);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + lVar36),0x30);
          auVar157 = insertps(ZEXT416(*(uint *)(param_4 + 0xc + lVar32)),
                              *(undefined4 *)(param_4 + 0xc + lVar33),0x10);
          auVar157 = insertps(auVar157,*(undefined4 *)(param_4 + 0xc + lVar27),0x20);
          auVar203 = insertps(auVar157,*(undefined4 *)(param_4 + 0xc + lVar36),0x30);
          auVar215 = insertps(ZEXT416(*(uint *)(param_4 + 0x10 + lVar32)),
                              *(undefined4 *)(param_4 + 0x10 + lVar33),0x10);
          auVar193._0_4_ =
               (float)(int)((uVar20 & ___xmm_000003ff000003ff000003ff000003ff) +
                           ___xmm_fffffe01fffffe01fffffe01fffffe01);
          auVar193._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
          auVar193._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
          auVar193._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
          auVar157 = divps(auVar193,___xmm_43ff800043ff800043ff800043ff8000);
          auVar215 = insertps(auVar215,*(undefined4 *)(param_4 + 0x10 + lVar27),0x20);
          auVar191._0_4_ = auVar157._0_4_ * auVar203._0_4_ + auVar115._0_4_;
          auVar191._4_4_ = auVar157._4_4_ * auVar203._4_4_ + auVar115._4_4_;
          auVar191._8_4_ = auVar157._8_4_ * auVar203._8_4_ + auVar115._8_4_;
          auVar191._12_4_ = auVar157._12_4_ * auVar203._12_4_ + auVar115._12_4_;
          auVar215 = insertps(auVar215,*(undefined4 *)(param_4 + 0x10 + lVar36),0x30);
          auVar149._0_4_ =
               (float)(int)((uVar20 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                           ___xmm_fffffc01fffffc01fffffc01fffffc01);
          auVar149._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
          auVar149._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
          auVar149._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
          auVar157 = divps(auVar149,___xmm_447fc000447fc000447fc000447fc000);
          auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar32)),
                              *(undefined4 *)(param_4 + 4 + lVar33),0x10);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar27),0x20);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 4 + lVar36),0x30);
          auVar203 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar32)),
                              *(undefined4 *)(param_4 + 8 + lVar33),0x10);
          auVar203 = insertps(auVar203,*(undefined4 *)(param_4 + 8 + lVar27),0x20);
          unaff_XMM6._0_4_ = auVar157._0_4_ * auVar215._0_4_ + auVar115._0_4_;
          unaff_XMM6._4_4_ = auVar157._4_4_ * auVar215._4_4_ + auVar115._4_4_;
          unaff_XMM6._8_4_ = auVar157._8_4_ * auVar215._8_4_ + auVar115._8_4_;
          unaff_XMM6._12_4_ = auVar157._12_4_ * auVar215._12_4_ + auVar115._12_4_;
          auVar115 = insertps(ZEXT416(*(uint *)(param_4 + 0x14 + lVar32)),
                              *(undefined4 *)(param_4 + 0x14 + lVar33),0x10);
          auVar115 = insertps(auVar115,*(undefined4 *)(param_4 + 0x14 + lVar27),0x20);
          unaff_XMM12 = insertps(auVar115,*(undefined4 *)(param_4 + 0x14 + lVar36),0x30);
          auVar117._0_4_ = (uVar20 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01;
          auVar117._4_4_ = (uVar4 >> 0x15) + _UNK_151c6b864;
          auVar117._8_4_ = (uVar5 >> 0x15) + _UNK_151c6b868;
          auVar117._12_4_ = (uVar6 >> 0x15) + _UNK_151c6b86c;
          auVar136._0_4_ = (float)auVar117._0_4_;
          auVar136._4_4_ = (float)auVar117._4_4_;
          auVar136._8_4_ = (float)auVar117._8_4_;
          auVar136._12_4_ = (float)auVar117._12_4_;
          auVar115 = divps(auVar136,___xmm_447fc000447fc000447fc000447fc000);
          auVar157 = insertps(auVar203,*(undefined4 *)(param_4 + 8 + lVar36),0x30);
          auVar133._0_4_ = auVar115._0_4_ * unaff_XMM12._0_4_ + auVar157._0_4_;
          auVar133._4_4_ = auVar115._4_4_ * unaff_XMM12._4_4_ + auVar157._4_4_;
          auVar133._8_4_ = auVar115._8_4_ * unaff_XMM12._8_4_ + auVar157._8_4_;
          auVar133._12_4_ = auVar115._12_4_ * unaff_XMM12._12_4_ + auVar157._12_4_;
        }
      }
      auVar228._0_4_ = -(uint)(unaff_XMM11._0_4_ == auVar148._0_4_);
      auVar228._4_4_ = -(uint)(unaff_XMM11._4_4_ == auVar148._4_4_);
      auVar228._8_4_ = -(uint)(unaff_XMM11._8_4_ == auVar148._8_4_);
      auVar228._12_4_ = -(uint)(unaff_XMM11._12_4_ == auVar148._12_4_);
      uVar20 = movmskps(iVar129,auVar228);
      if ((uVar20 ^ 0xf) == 0) {
        auVar42._8_4_ = 0xffffffff;
        auVar42._0_8_ = 0xffffffffffffffff;
        auVar42._12_4_ = 0xffffffff;
        uVar15 = 0;
      }
      else {
        bVar26 = (char)((char)(uVar20 ^ 0xf) << 4) >> 4;
        if (param_8 < 7) {
          auVar157 = auVar228 ^ ___xmm_ffffffffffffffffffffffffffffffff;
          auVar13._4_4_ = iVar22;
          auVar13._0_4_ = iVar22;
          auVar13._8_4_ = iVar22;
          auVar13._12_4_ = iVar22;
          auVar203 = pmulld(auVar148,auVar13);
          auVar115 = pmovsxdq(auVar117,auVar203);
          auVar216._8_4_ = auVar203._8_4_;
          auVar216._12_4_ = auVar203._12_4_;
          auVar216._0_8_ = auVar203._8_8_;
          auVar203 = pmovsxdq(auVar216,auVar216);
          lVar27 = auVar115._0_8_;
          lVar32 = auVar115._8_8_;
          lVar33 = auVar203._0_8_;
          lVar36 = auVar203._8_8_;
          uVar213 = auVar157._8_4_;
          uVar214 = auVar157._12_4_;
          switch(param_8) {
          case 0:
          case 1:
            auVar217._0_8_ = lVar33 + lVar184 + lVar69;
            auVar217._8_8_ = lVar36 + lVar190 + lVar83;
            auVar121._0_8_ = lVar27 + lVar155 + lVar38;
            auVar121._8_8_ = lVar32 + lVar173 + lVar67;
            auVar42 = pmovsxdq(auVar73,auVar157);
            auVar203 = blendvps((undefined1  [16])0x0,auVar121,auVar42);
            auVar85._4_4_ = uVar213;
            auVar85._0_4_ = uVar213;
            auVar85._8_4_ = uVar214;
            auVar85._12_4_ = uVar214;
            auVar157 = blendvps(ZEXT816(0),auVar217,auVar85);
            lVar27 = param_4 + auVar203._0_8_;
            lVar32 = param_4 + auVar203._8_8_;
            lVar33 = param_4 + auVar157._0_8_;
            lVar36 = param_4 + auVar157._8_8_;
            auVar141 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar42);
            auVar215 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar85);
            auVar93 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar42
                              );
            auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,
                                auVar85);
            if ((bVar26 & 1) != 0) {
              unaff_XMM14 = pblendw(unaff_XMM14,ZEXT416(*(uint *)(param_4 + auVar203._0_8_)),3);
              _local_278 = pblendw(_local_278,ZEXT416(*(uint *)(auVar141._0_8_ + lVar27)),3);
              unaff_XMM8 = pblendw(unaff_XMM8,ZEXT416(*(uint *)(auVar93._0_8_ + lVar27)),3);
            }
            auVar42._8_4_ = 0xffffffff;
            auVar42._0_8_ = 0xffffffffffffffff;
            auVar42._12_4_ = 0xffffffff;
            if ((bVar26 & 2) != 0) {
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(param_4 + auVar203._8_8_),0x10);
              _local_278 = insertps(_local_278,*(undefined4 *)(auVar141._8_8_ + lVar32),0x10);
              unaff_XMM8 = insertps(unaff_XMM8,*(undefined4 *)(auVar93._8_8_ + lVar32),0x10);
            }
            if ((bVar26 & 4) != 0) {
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(param_4 + auVar157._0_8_),0x20);
              _local_278 = insertps(_local_278,*(undefined4 *)(auVar215._0_8_ + lVar33),0x20);
              unaff_XMM8 = insertps(unaff_XMM8,*(undefined4 *)(auVar115._0_8_ + lVar33),0x20);
            }
            if ((char)bVar26 < '\0') {
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(param_4 + auVar157._8_8_),0x30);
              _local_278 = insertps(_local_278,*(undefined4 *)(auVar215._8_8_ + lVar36),0x30);
            }
            uVar15 = 0;
            if ((char)bVar26 < '\0') {
              uVar15 = 0;
              unaff_XMM8 = insertps(unaff_XMM8,*(undefined4 *)(auVar115._8_8_ + lVar36),0x30);
            }
            break;
          case 2:
            auVar218._0_8_ = lVar33 + lVar184 + lVar69;
            auVar218._8_8_ = lVar36 + lVar190 + lVar83;
            auVar122._0_8_ = lVar27 + lVar155 + lVar38;
            auVar122._8_8_ = lVar32 + lVar173 + lVar67;
            auVar42 = pmovsxdq(auVar73,auVar157);
            auVar157 = blendvps(ZEXT816(0),auVar122,auVar42);
            auVar86._4_4_ = uVar213;
            auVar86._0_4_ = uVar213;
            auVar86._8_4_ = uVar214;
            auVar86._12_4_ = uVar214;
            auVar203 = blendvps(ZEXT816(0),auVar218,auVar86);
            lVar27 = param_4 + auVar157._0_8_;
            lVar32 = param_4 + auVar157._8_8_;
            lVar33 = param_4 + auVar203._0_8_;
            lVar36 = param_4 + auVar203._8_8_;
            auVar215 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,
                                auVar42);
            auVar93 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,auVar86
                              );
            auVar141 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar42);
            auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar86);
            auVar43._0_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar157._0_8_) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar43._4_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar157._8_8_) + _UNK_151c6b8e4);
            auVar43._8_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar203._0_8_) + _UNK_151c6b8e8);
            auVar43._12_4_ =
                 (float)(int)((uint)*(ushort *)(param_4 + auVar203._8_8_) + _UNK_151c6b8ec);
            auVar42 = divps(auVar43,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar44._0_8_ =
                 CONCAT44(auVar42._4_4_ * _UNK_151c6be64,
                          auVar42._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar44._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
            auVar44._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
            bVar37 = (bVar26 & 1) != 0;
            auVar123 = unaff_XMM14;
            if (bVar37) {
              auVar123._8_4_ = auVar44._8_4_;
              auVar123._0_8_ = auVar44._0_8_;
              auVar123._12_4_ = auVar44._12_4_;
            }
            auVar74._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar215._0_8_ + lVar27) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar74._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar215._8_8_ + lVar32) + _UNK_151c6b8e4);
            auVar74._8_4_ = (float)(int)((uint)*(ushort *)(auVar93._0_8_ + lVar33) + _UNK_151c6b8e8)
            ;
            auVar74._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar93._8_8_ + lVar36) + _UNK_151c6b8ec);
            auVar42 = divps(auVar74,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar87._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar141._0_8_ + lVar27) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar87._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar141._8_8_ + lVar32) + _UNK_151c6b8e4);
            auVar87._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._0_8_ + lVar33) + _UNK_151c6b8e8);
            auVar87._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar115._8_8_ + lVar36) + _UNK_151c6b8ec);
            auVar115 = divps(auVar87,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar75._0_8_ =
                 CONCAT44(auVar42._4_4_ * _UNK_151c6be64,
                          auVar42._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar75._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
            auVar75._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
            auVar88._0_8_ =
                 CONCAT44(auVar115._4_4_ * _UNK_151c6be64,
                          auVar115._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar88._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
            auVar88._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
            auVar42._8_4_ = 0xffffffff;
            auVar42._0_8_ = 0xffffffffffffffff;
            auVar42._12_4_ = 0xffffffff;
            auVar158 = unaff_XMM8;
            auVar219 = _local_278;
            if (bVar37) {
              auVar219._8_4_ = auVar75._8_4_;
              auVar219._0_8_ = auVar75._0_8_;
              auVar219._12_4_ = auVar75._12_4_;
              auVar158._8_4_ = auVar88._8_4_;
              auVar158._0_8_ = auVar88._0_8_;
              auVar158._12_4_ = auVar88._12_4_;
            }
            auVar115 = blendps(unaff_XMM14,auVar123,1);
            bVar37 = (bVar26 & 2) == 0;
            auVar205 = auVar115;
            if (!bVar37) {
              auVar205._8_4_ = auVar44._8_4_;
              auVar205._0_8_ = auVar44._0_8_;
              auVar205._12_4_ = auVar44._12_4_;
            }
            auVar157 = blendps(_local_278,auVar219,1);
            uVar15 = 0;
            if (bVar37) {
              auVar175 = blendps(unaff_XMM8,auVar158,1);
              auVar115 = blendps(auVar115,auVar205,2);
              auVar124 = auVar157;
              auVar203 = auVar175;
              if ((bVar26 & 4) != 0) goto LAB_140b13749;
LAB_140b137be:
              auVar185 = blendps(auVar157,auVar124,2);
              auVar174 = blendps(auVar203,auVar175,2);
              auVar115 = blendps(auVar115,auVar115,4);
              auVar157 = auVar174;
              _local_278 = auVar185;
              if (-1 < (char)bVar26) goto LAB_140b137ec;
LAB_140b1377b:
              unaff_XMM9 = blendps(_local_278,auVar185,4);
              if (-1 < (char)bVar26) goto LAB_140b1378e;
LAB_140b13803:
              auVar157 = blendps(auVar157,auVar174,4);
            }
            else {
              auVar124._8_4_ = auVar75._8_4_;
              auVar124._0_8_ = auVar75._0_8_;
              auVar124._12_4_ = auVar75._12_4_;
              auVar203 = blendps(unaff_XMM8,auVar158,1);
              auVar175._8_4_ = auVar88._8_4_;
              auVar175._0_8_ = auVar88._0_8_;
              auVar175._12_4_ = auVar88._12_4_;
              auVar115 = blendps(auVar115,auVar205,2);
              if ((bVar26 & 4) == 0) goto LAB_140b137be;
LAB_140b13749:
              auVar206._8_4_ = auVar44._8_4_;
              auVar206._0_8_ = auVar44._0_8_;
              auVar206._12_4_ = auVar44._12_4_;
              _local_278 = blendps(auVar157,auVar124,2);
              auVar185._8_4_ = auVar75._8_4_;
              auVar185._0_8_ = auVar75._0_8_;
              auVar185._12_4_ = auVar75._12_4_;
              auVar157 = blendps(auVar203,auVar175,2);
              auVar174._8_4_ = auVar88._8_4_;
              auVar174._0_8_ = auVar88._0_8_;
              auVar174._12_4_ = auVar88._12_4_;
              auVar115 = blendps(auVar115,auVar206,4);
              if ((char)bVar26 < '\0') goto LAB_140b1377b;
LAB_140b137ec:
              auVar44 = auVar115;
              unaff_XMM9 = blendps(_local_278,auVar185,4);
              auVar115 = auVar44;
              if ((char)bVar26 < '\0') goto LAB_140b13803;
LAB_140b1378e:
              auVar157 = blendps(auVar157,auVar174,4);
              auVar75 = unaff_XMM9;
            }
            if (-1 < (char)bVar26) {
              auVar88 = auVar157;
            }
            unaff_XMM14 = blendps(auVar115,auVar44,8);
            _local_278 = blendps(unaff_XMM9,auVar75,8);
            unaff_XMM8 = blendps(auVar157,auVar88,8);
            break;
          case 3:
            auVar100 = ~auVar228 & auVar100;
            lVar113 = param_4 + auVar100._0_4_;
            lVar130 = param_4 + auVar100._4_4_;
            auVar220._0_8_ = lVar33 + lVar184 + lVar69;
            auVar220._8_8_ = lVar36 + lVar190 + lVar83;
            auVar125._0_8_ = lVar27 + lVar155 + lVar38;
            auVar125._8_8_ = lVar32 + lVar173 + lVar67;
            auVar42 = pmovsxdq(auVar42,auVar157);
            auVar42 = blendvps((undefined1  [16])0x0,auVar125,auVar42);
            auVar45._4_4_ = uVar213;
            auVar45._0_4_ = uVar213;
            auVar45._8_4_ = uVar214;
            auVar45._12_4_ = uVar214;
            auVar115 = blendvps((undefined1  [16])0x0,auVar220,auVar45);
            lVar27 = param_4 + auVar100._8_4_;
            uVar20 = *(uint *)(param_4 + auVar42._0_8_);
            uVar4 = *(uint *)(param_4 + auVar42._8_8_);
            uVar5 = *(uint *)(param_4 + auVar115._0_8_);
            uVar6 = *(uint *)(param_4 + auVar115._8_8_);
            auVar42 = insertps(ZEXT416(*(uint *)(param_4 + auVar100._0_4_)),
                               *(undefined4 *)(param_4 + auVar100._4_4_),0x10);
            auVar42 = insertps(auVar42,*(undefined4 *)(param_4 + auVar100._8_4_),0x20);
            auVar115 = insertps(auVar42,*(undefined4 *)(param_4 + auVar100._12_4_),0x30);
            auVar42 = ~auVar228 & ___xmm_0000000c0000000c0000000c0000000c;
            auVar157 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            lVar32 = param_4 + auVar100._12_4_;
            auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar46._0_4_ =
                 (float)(int)((uVar20 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar46._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar46._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar46._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar42 = divps(auVar46,___xmm_43ff800043ff800043ff800043ff8000);
            auVar47._0_8_ =
                 CONCAT44(auVar42._4_4_ * auVar157._4_4_ + auVar115._4_4_,
                          auVar42._0_4_ * auVar157._0_4_ + auVar115._0_4_);
            auVar47._8_4_ = auVar42._8_4_ * auVar157._8_4_ + auVar115._8_4_;
            auVar47._12_4_ = auVar42._12_4_ * auVar157._12_4_ + auVar115._12_4_;
            bVar37 = (bVar26 & 1) != 0;
            auVar89 = unaff_XMM14;
            if (bVar37) {
              auVar89._8_4_ = auVar47._8_4_;
              auVar89._0_8_ = auVar47._0_8_;
              auVar89._12_4_ = auVar47._12_4_;
            }
            auVar42 = ~auVar228 & ___xmm_00000004000000040000000400000004;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            auVar203 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar42 = ~auVar228 & ___xmm_00000008000000080000000800000008;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            auVar215 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar42 = ~auVar228 & ___xmm_00000010000000100000001000000010;
            auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + lVar113)),
                                *(undefined4 *)((ulonglong)auVar42._4_4_ + lVar130),0x10);
            auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._8_4_ + lVar27),0x20);
            auVar157 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar42._12_4_ + lVar32),0x30);
            auVar115 = ~auVar228 & ___xmm_00000014000000140000001400000014;
            auVar42 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                               *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
            auVar42 = insertps(auVar42,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar27),0x20);
            auVar115 = insertps(auVar42,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar32),0x30);
            auVar76._0_4_ =
                 (float)(int)((uVar20 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar76._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar76._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar76._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar42 = divps(auVar76,___xmm_447fc000447fc000447fc000447fc000);
            auVar77._0_8_ =
                 CONCAT44(auVar42._4_4_ * auVar157._4_4_ + auVar203._4_4_,
                          auVar42._0_4_ * auVar157._0_4_ + auVar203._0_4_);
            auVar77._8_4_ = auVar42._8_4_ * auVar157._8_4_ + auVar203._8_4_;
            auVar77._12_4_ = auVar42._12_4_ * auVar157._12_4_ + auVar203._12_4_;
            auVar159._0_4_ =
                 (float)(int)((uVar20 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar159._4_4_ = (float)(int)((uVar4 >> 0x15) + _UNK_151c6b864);
            auVar159._8_4_ = (float)(int)((uVar5 >> 0x15) + _UNK_151c6b868);
            auVar159._12_4_ = (float)(int)((uVar6 >> 0x15) + _UNK_151c6b86c);
            auVar42 = divps(auVar159,___xmm_447fc000447fc000447fc000447fc000);
            auVar160._0_8_ =
                 CONCAT44(auVar42._4_4_ * auVar115._4_4_ + auVar215._4_4_,
                          auVar42._0_4_ * auVar115._0_4_ + auVar215._0_4_);
            auVar160._8_4_ = auVar42._8_4_ * auVar115._8_4_ + auVar215._8_4_;
            auVar160._12_4_ = auVar42._12_4_ * auVar115._12_4_ + auVar215._12_4_;
            auVar42._8_4_ = 0xffffffff;
            auVar42._0_8_ = 0xffffffffffffffff;
            auVar42._12_4_ = 0xffffffff;
            auVar126 = unaff_XMM8;
            auVar221 = _local_278;
            if (bVar37) {
              auVar221._8_4_ = auVar77._8_4_;
              auVar221._0_8_ = auVar77._0_8_;
              auVar221._12_4_ = auVar77._12_4_;
              auVar126._8_4_ = auVar160._8_4_;
              auVar126._0_8_ = auVar160._0_8_;
              auVar126._12_4_ = auVar160._12_4_;
            }
            auVar115 = blendps(unaff_XMM14,auVar89,1);
            bVar37 = (bVar26 & 2) == 0;
            auVar207 = auVar115;
            if (!bVar37) {
              auVar207._8_4_ = auVar47._8_4_;
              auVar207._0_8_ = auVar47._0_8_;
              auVar207._12_4_ = auVar47._12_4_;
            }
            auVar157 = blendps(_local_278,auVar221,1);
            uVar15 = 0;
            if (bVar37) {
              auVar177 = blendps(unaff_XMM8,auVar126,1);
              auVar115 = blendps(auVar115,auVar207,2);
              auVar90 = auVar157;
              auVar203 = auVar177;
              if ((bVar26 & 4) != 0) goto LAB_140b13b52;
LAB_140b13bc7:
              auVar186 = blendps(auVar157,auVar90,2);
              auVar176 = blendps(auVar203,auVar177,2);
              auVar115 = blendps(auVar115,auVar115,4);
              auVar157 = auVar176;
              _local_278 = auVar186;
              if (-1 < (char)bVar26) goto LAB_140b13bf5;
LAB_140b13b84:
              unaff_XMM9 = blendps(_local_278,auVar186,4);
              if (-1 < (char)bVar26) goto LAB_140b13b97;
LAB_140b13c0c:
              auVar157 = blendps(auVar157,auVar176,4);
            }
            else {
              auVar90._8_4_ = auVar77._8_4_;
              auVar90._0_8_ = auVar77._0_8_;
              auVar90._12_4_ = auVar77._12_4_;
              auVar203 = blendps(unaff_XMM8,auVar126,1);
              auVar177._8_4_ = auVar160._8_4_;
              auVar177._0_8_ = auVar160._0_8_;
              auVar177._12_4_ = auVar160._12_4_;
              auVar115 = blendps(auVar115,auVar207,2);
              if ((bVar26 & 4) == 0) goto LAB_140b13bc7;
LAB_140b13b52:
              auVar208._8_4_ = auVar47._8_4_;
              auVar208._0_8_ = auVar47._0_8_;
              auVar208._12_4_ = auVar47._12_4_;
              _local_278 = blendps(auVar157,auVar90,2);
              auVar186._8_4_ = auVar77._8_4_;
              auVar186._0_8_ = auVar77._0_8_;
              auVar186._12_4_ = auVar77._12_4_;
              auVar157 = blendps(auVar203,auVar177,2);
              auVar176._8_4_ = auVar160._8_4_;
              auVar176._0_8_ = auVar160._0_8_;
              auVar176._12_4_ = auVar160._12_4_;
              auVar115 = blendps(auVar115,auVar208,4);
              if ((char)bVar26 < '\0') goto LAB_140b13b84;
LAB_140b13bf5:
              auVar47 = auVar115;
              unaff_XMM9 = blendps(_local_278,auVar186,4);
              auVar115 = auVar47;
              if ((char)bVar26 < '\0') goto LAB_140b13c0c;
LAB_140b13b97:
              auVar157 = blendps(auVar157,auVar176,4);
              auVar77 = unaff_XMM9;
            }
            if (-1 < (char)bVar26) {
              auVar160 = auVar157;
            }
            unaff_XMM14 = blendps(auVar115,auVar47,8);
            _local_278 = blendps(unaff_XMM9,auVar77,8);
            unaff_XMM8 = blendps(auVar157,auVar160,8);
            break;
          default:
            goto switchD_140b131de_caseD_4;
          }
        }
        else {
switchD_140b131de_caseD_4:
          bVar37 = (bVar26 & 1) != 0;
          if (bVar37) {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,3);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,3);
          }
          auVar42._8_4_ = 0xffffffff;
          auVar42._0_8_ = 0xffffffffffffffff;
          auVar42._12_4_ = 0xffffffff;
          uVar15 = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          if (bVar37) {
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,3);
          }
          if ((bVar26 & 2) != 0) {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,0xc);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,0xc);
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,0xc);
          }
          if ((bVar26 & 4) != 0) {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,0x30);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,0x30);
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,0x30);
          }
          if ((char)bVar26 < '\0') {
            unaff_XMM14 = pblendw(unaff_XMM14,(undefined1  [16])0x0,0xc0);
            _local_278 = pblendw(_local_278,(undefined1  [16])0x0,0xc0);
            unaff_XMM8 = pblendw(unaff_XMM8,(undefined1  [16])0x0,0xc0);
          }
        }
        fVar111 = unaff_XMM15._0_4_;
        fVar147 = unaff_XMM15._4_4_;
        fVar154 = unaff_XMM15._8_4_;
        fVar202 = unaff_XMM15._12_4_;
        auVar48._0_8_ =
             CONCAT44((unaff_XMM14._4_4_ - auVar191._4_4_) * fVar147 + auVar191._4_4_,
                      (unaff_XMM14._0_4_ - auVar191._0_4_) * fVar111 + auVar191._0_4_);
        auVar48._8_4_ = (unaff_XMM14._8_4_ - auVar191._8_4_) * fVar154 + auVar191._8_4_;
        auVar48._12_4_ = (unaff_XMM14._12_4_ - auVar191._12_4_) * fVar202 + auVar191._12_4_;
        bVar37 = (bVar26 & 1) == 0;
        auVar127 = auVar191;
        if (!bVar37) {
          auVar127._8_4_ = auVar48._8_4_;
          auVar127._0_8_ = auVar48._0_8_;
          auVar127._12_4_ = auVar48._12_4_;
        }
        auVar73._0_8_ =
             CONCAT44(((float)local_278._4_4_ - unaff_XMM6._4_4_) * fVar147 + unaff_XMM6._4_4_,
                      ((float)local_278._0_4_ - unaff_XMM6._0_4_) * fVar111 + unaff_XMM6._0_4_);
        auVar73._8_4_ = ((float)uStack_270 - unaff_XMM6._8_4_) * fVar154 + unaff_XMM6._8_4_;
        auVar73._12_4_ = (uStack_270._4_4_ - unaff_XMM6._12_4_) * fVar202 + unaff_XMM6._12_4_;
        auVar91._0_8_ =
             CONCAT44((unaff_XMM8._4_4_ - auVar133._4_4_) * fVar147 + auVar133._4_4_,
                      (unaff_XMM8._0_4_ - auVar133._0_4_) * fVar111 + auVar133._0_4_);
        auVar91._8_4_ = (unaff_XMM8._8_4_ - auVar133._8_4_) * fVar154 + auVar133._8_4_;
        auVar91._12_4_ = (unaff_XMM8._12_4_ - auVar133._12_4_) * fVar202 + auVar133._12_4_;
        if (bVar37) {
          auVar115 = blendps(auVar191,auVar127,1);
          auVar161 = auVar133;
          unaff_XMM12 = unaff_XMM6;
          if ((bVar26 & 2) != 0) goto LAB_140b13d55;
LAB_140b13ca2:
          auVar151 = blendps(unaff_XMM6,unaff_XMM12,1);
          auVar203 = blendps(auVar133,auVar161,1);
          auVar115 = blendps(auVar115,auVar115,2);
          auVar157 = auVar151;
          auVar163 = auVar203;
          if ((bVar26 & 4) != 0) goto LAB_140b13cd9;
LAB_140b13d90:
          auVar152 = blendps(auVar157,auVar151,2);
          auVar203 = blendps(auVar203,auVar163,2);
          auVar115 = blendps(auVar115,auVar115,4);
          auVar157 = auVar152;
          auVar162 = auVar203;
          if (-1 < (char)bVar26) goto LAB_140b13dc1;
LAB_140b13d0e:
          auVar157 = blendps(auVar157,auVar152,4);
          if (-1 < (char)bVar26) goto LAB_140b13d23;
LAB_140b13dda:
          auVar203 = blendps(auVar203,auVar162,4);
        }
        else {
          unaff_XMM12._8_4_ = auVar73._8_4_;
          unaff_XMM12._0_8_ = auVar73._0_8_;
          unaff_XMM12._12_4_ = auVar73._12_4_;
          auVar161._8_4_ = auVar91._8_4_;
          auVar161._0_8_ = auVar91._0_8_;
          auVar161._12_4_ = auVar91._12_4_;
          auVar115 = blendps(auVar191,auVar127,1);
          if ((bVar26 & 2) == 0) goto LAB_140b13ca2;
LAB_140b13d55:
          auVar210._8_4_ = auVar48._8_4_;
          auVar210._0_8_ = auVar48._0_8_;
          auVar210._12_4_ = auVar48._12_4_;
          auVar157 = blendps(unaff_XMM6,unaff_XMM12,1);
          auVar151._8_4_ = auVar73._8_4_;
          auVar151._0_8_ = auVar73._0_8_;
          auVar151._12_4_ = auVar73._12_4_;
          auVar203 = blendps(auVar133,auVar161,1);
          auVar163._8_4_ = auVar91._8_4_;
          auVar163._0_8_ = auVar91._0_8_;
          auVar163._12_4_ = auVar91._12_4_;
          auVar115 = blendps(auVar115,auVar210,2);
          if ((bVar26 & 4) == 0) goto LAB_140b13d90;
LAB_140b13cd9:
          auVar209._8_4_ = auVar48._8_4_;
          auVar209._0_8_ = auVar48._0_8_;
          auVar209._12_4_ = auVar48._12_4_;
          auVar157 = blendps(auVar157,auVar151,2);
          auVar152._8_4_ = auVar73._8_4_;
          auVar152._0_8_ = auVar73._0_8_;
          auVar152._12_4_ = auVar73._12_4_;
          auVar203 = blendps(auVar203,auVar163,2);
          auVar162._8_4_ = auVar91._8_4_;
          auVar162._0_8_ = auVar91._0_8_;
          auVar162._12_4_ = auVar91._12_4_;
          auVar115 = blendps(auVar115,auVar209,4);
          if ((char)bVar26 < '\0') goto LAB_140b13d0e;
LAB_140b13dc1:
          auVar48 = auVar115;
          auVar157 = blendps(auVar157,auVar152,4);
          auVar115 = auVar48;
          if ((char)bVar26 < '\0') goto LAB_140b13dda;
LAB_140b13d23:
          auVar203 = blendps(auVar203,auVar162,4);
          auVar73 = auVar157;
        }
        if (-1 < (char)bVar26) {
          auVar91 = auVar203;
        }
        auVar191 = blendps(auVar115,auVar48,8);
        unaff_XMM6 = blendps(auVar157,auVar73,8);
        auVar133 = blendps(auVar203,auVar91,8);
      }
      fVar147 = auVar133._12_4_;
      auVar8._4_8_ = auVar73._8_8_;
      auVar8._0_4_ = auVar133._4_4_;
      auVar70._0_8_ = auVar8._0_8_ << 0x20;
      auVar70._8_4_ = auVar133._8_4_;
      auVar70._12_4_ = fVar147;
      auVar9._4_8_ = auVar70._8_8_;
      auVar9._0_4_ = (int)uVar15;
      auVar71._0_8_ = auVar9._0_8_ << 0x20;
      auVar71._8_4_ = fVar147;
      fVar111 = (float)((ulonglong)uVar15 >> 0x20);
      auVar71._12_4_ = fVar111;
      auVar84._0_8_ = auVar191._0_8_;
      fVar202 = auVar191._12_4_;
      auVar84._8_4_ = auVar191._4_4_;
      auVar84._12_4_ = unaff_XMM6._4_4_;
      auVar114._0_8_ = CONCAT44(unaff_XMM6._8_4_,auVar191._8_4_);
      auVar114._8_4_ = fVar202;
      fVar154 = unaff_XMM6._12_4_;
      auVar114._12_4_ = fVar154;
      auVar156._4_4_ = unaff_XMM6._0_4_;
      auVar156._0_4_ = auVar191._0_4_;
      auVar156._8_4_ = auVar191._4_4_;
      auVar156._12_4_ = unaff_XMM6._4_4_;
      unaff_XMM7 = insertps(auVar156,auVar133,0x28);
      local_128 = unaff_XMM7;
      local_118 = auVar84._8_8_;
      uStack_110 = (ulonglong)auVar133._4_4_;
      auVar39._8_4_ = fVar202;
      auVar39._0_8_ = auVar114._0_8_;
      auVar39._12_4_ = fVar154;
      local_108 = insertps(auVar39,auVar133,0xa8);
      local_f8 = auVar114._8_8_;
      uStack_f0 = auVar71._8_8_;
      auVar115 = insertps(auVar191,unaff_XMM6,0x1c);
      auVar115 = insertps(auVar115,auVar133,0x20);
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)iVar21 * 0x60);
      *pdVar2 = (double)auVar115._0_4_;
      pdVar2[1] = (double)auVar115._4_4_;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)iVar21 * 0x60);
      *pdVar2 = (double)auVar115._8_4_;
      pdVar2[1] = (double)auVar115._12_4_;
      auVar115 = insertps(unaff_XMM6,auVar191,0x4c);
      auVar115 = insertps(auVar115,auVar133,0x60);
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)auVar115._0_4_;
      pdVar2[1] = (double)auVar115._4_4_;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)auVar115._8_4_;
      pdVar2[1] = (double)auVar115._12_4_;
      local_228 = (int)uVar14;
      auVar192._8_8_ = uVar15;
      auVar192._0_8_ = auVar191._8_8_;
      auVar115 = insertps(auVar192,unaff_XMM6,0x94);
      auVar115 = blendps(auVar115,auVar133,4);
      unaff_XMM10._8_8_ = auVar115._8_8_;
      unaff_XMM10._0_8_ = unaff_XMM10._8_8_;
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar115._0_4_;
      pdVar2[1] = (double)auVar115._4_4_;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar115._8_4_;
      pdVar2[1] = (double)auVar115._12_4_;
      pdVar2 = (double *)(param_1 + 0x20 + (longlong)iVar11 * 0x60);
      *pdVar2 = (double)fVar202;
      pdVar2[1] = (double)fVar154;
      pdVar2 = (double *)(param_1 + 0x30 + (longlong)iVar11 * 0x60);
      *pdVar2 = (double)fVar147;
      pdVar2[1] = (double)fVar111;
      uVar35 = uVar35 + 0x20;
      uVar30 = uVar30 + 4;
      _local_208 = auVar148;
    } while ((int)uVar30 < (int)(uVar24 & 0xfffffffc));
  }
  if ((int)param_9 <= (int)uVar30) {
    return;
  }
  auVar153._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar30) < (int)param_9);
  auVar153._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar30) < (int)param_9);
  auVar153._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar30) < (int)param_9);
  auVar153._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar30) < (int)param_9);
  auVar49._0_4_ = uVar30 << 3;
  auVar49._4_4_ = uVar30 << 3;
  auVar49._8_4_ = uVar30 << 3;
  auVar49._12_4_ = uVar30 << 3;
  auVar49 = auVar49 & auVar153;
  auVar157 = ___xmm_00000018000000100000000800000000 & auVar153;
  lVar27 = auVar49._4_4_ + param_2;
  lVar33 = auVar49._8_4_ + param_2;
  lVar32 = auVar49._12_4_ + param_2;
  uVar213 = *(undefined4 *)(param_2 + auVar49._0_4_);
  uVar214 = *(undefined4 *)((ulonglong)auVar157._4_4_ + lVar27);
  uVar7 = *(undefined4 *)((ulonglong)auVar157._8_4_ + lVar33);
  auVar42 = ___xmm_0000001c000000140000000c00000004 & auVar153;
  auVar50._0_4_ = *(int *)((ulonglong)auVar42._0_4_ + param_2 + auVar49._0_4_) << 4;
  auVar50._4_4_ = *(int *)((ulonglong)auVar42._4_4_ + lVar27) << 4;
  auVar50._8_4_ = *(int *)((ulonglong)auVar42._8_4_ + lVar33) << 4;
  auVar50._12_4_ = *(int *)((ulonglong)auVar42._12_4_ + lVar32) << 4;
  auVar50 = auVar50 & auVar153;
  lVar27 = param_3 + auVar50._0_4_;
  uVar31 = *(undefined4 *)(param_3 + auVar50._8_4_);
  uVar23 = *(undefined4 *)(param_3 + auVar50._12_4_);
  auVar187._4_4_ = *(undefined4 *)(param_3 + auVar50._4_4_);
  auVar187._0_4_ = *(undefined4 *)(param_3 + auVar50._0_4_);
  auVar187._12_4_ = uVar23;
  auVar187._8_4_ = uVar31;
  auVar115 = ___xmm_00000004000000040000000400000004 & auVar153;
  uVar25 = (ulonglong)auVar115._4_4_;
  iVar112 = *(int *)((ulonglong)auVar115._0_4_ + lVar27);
  iVar128 = *(int *)(uVar25 + param_3 + auVar50._4_4_);
  auVar140._4_4_ = iVar128;
  auVar140._0_4_ = iVar112;
  iVar129 = *(int *)((ulonglong)auVar115._8_4_ + param_3 + auVar50._8_4_);
  iVar131 = *(int *)((ulonglong)auVar115._12_4_ + param_3 + auVar50._12_4_);
  auVar140._12_4_ = iVar131;
  auVar140._8_4_ = iVar129;
  auVar148 = (undefined1  [16])0x0;
  auVar164._4_4_ = uVar23;
  auVar164._0_4_ = uVar31;
  auVar164._8_8_ = 0;
  auVar92._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar112);
  auVar92._4_4_ = -(uint)(_UNK_150631da4 < iVar128);
  auVar92._8_4_ = -(uint)(_UNK_150631da8 < iVar129);
  auVar92._12_4_ = -(uint)(_UNK_150631dac < iVar131);
  iVar21 = movmskps(uVar31,~auVar92 & auVar153);
  auVar42 = ZEXT816(0);
  if ((iVar21 == 0) ||
     (uVar31 = movmskps((int)lVar27,auVar153), auVar42 = ~auVar92 & auVar153,
     (char)uVar31 != (char)iVar21)) {
    uVar24 = auVar42._0_4_ ^ 0xffffffff;
    uVar99 = auVar42._0_8_ ^ 0xffffffffffffffff;
    uVar30 = auVar42._8_4_ ^ 0xffffffff;
    uVar19 = auVar42._12_4_ ^ 0xffffffff;
    auVar178 = ZEXT816(0);
    auVar42 = ZEXT816(0);
    if (0.0 < param_6) {
      auVar139._0_4_ = iVar112 + -1;
      auVar139._4_4_ = iVar128 + -1;
      auVar139._8_4_ = iVar129 + -1;
      auVar139._12_4_ = iVar131 + -1;
      uVar35 = (uint)(uVar99 >> 0x20);
      if (__real_3f800000 <= param_6) {
        auVar53._0_4_ = uVar24 & auVar153._0_4_;
        auVar53._4_4_ = uVar35 & auVar153._4_4_;
        auVar53._8_4_ = uVar30 & auVar153._8_4_;
        auVar53._12_4_ = uVar19 & auVar153._12_4_;
        auVar148 = blendvps((undefined1  [16])0x0,auVar139,auVar53);
        auVar42 = auVar148;
      }
      else {
        auVar211._4_4_ = param_6;
        auVar211._0_4_ = param_6;
        auVar211._8_4_ = param_6;
        auVar211._12_4_ = param_6;
        auVar195._0_4_ = (float)auVar139._0_4_ * param_6;
        auVar195._4_4_ = (float)auVar139._4_4_ * param_6;
        auVar195._8_4_ = (float)auVar139._8_4_ * param_6;
        auVar195._12_4_ = (float)auVar139._12_4_ * param_6;
        auVar52._0_4_ = uVar24 & auVar153._0_4_;
        auVar52._4_4_ = uVar35 & auVar153._4_4_;
        auVar52._8_4_ = uVar30 & auVar153._8_4_;
        auVar52._12_4_ = uVar19 & auVar153._12_4_;
        auVar42 = roundps(auVar211,auVar195,9);
        iVar112 = (int)auVar42._0_4_;
        iVar128 = (int)auVar42._4_4_;
        iVar129 = (int)auVar42._8_4_;
        iVar131 = (int)auVar42._12_4_;
        auVar179._0_4_ =
             (uint)(auVar139._0_4_ < iVar112) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar112) * iVar112;
        auVar179._4_4_ =
             (uint)(auVar139._4_4_ < iVar128) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar128) * iVar128;
        auVar179._8_4_ =
             (uint)(auVar139._8_4_ < iVar129) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar129) * iVar129;
        auVar179._12_4_ =
             (uint)(auVar139._12_4_ < iVar131) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar131) * iVar131;
        auVar148 = blendvps((undefined1  [16])0x0,auVar179,auVar52);
        auVar178 = ZEXT816(0);
        if (param_7 != '\x01') {
          auVar178._4_4_ = auVar195._4_4_ - auVar42._4_4_;
          auVar178._0_4_ = auVar195._0_4_ - auVar42._0_4_;
          auVar178._8_4_ = auVar195._8_4_ - auVar42._8_4_;
          auVar178._12_4_ = auVar195._12_4_ - auVar42._12_4_;
        }
        unaff_XMM10._8_4_ = 0xffffffff;
        unaff_XMM10._0_8_ = 0xffffffffffffffff;
        unaff_XMM10._12_4_ = 0xffffffff;
        iVar112 = auVar148._0_4_ + 1;
        iVar128 = auVar148._4_4_ + 1;
        iVar129 = auVar148._8_4_ + 1;
        iVar131 = auVar148._12_4_ + 1;
        auVar212._0_4_ =
             (uint)(auVar139._0_4_ < iVar112) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar112) * iVar112;
        auVar212._4_4_ =
             (uint)(auVar139._4_4_ < iVar128) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar128) * iVar128;
        auVar212._8_4_ =
             (uint)(auVar139._8_4_ < iVar129) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar129) * iVar129;
        auVar212._12_4_ =
             (uint)(auVar139._12_4_ < iVar131) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar131) * iVar131;
        auVar42 = blendvps(ZEXT816(0),auVar212,auVar52);
      }
    }
    auVar51._8_4_ = uVar30;
    auVar51._0_8_ = uVar99;
    auVar51._12_4_ = uVar19;
    auVar140 = blendvps((undefined1  [16])0x0,auVar178,auVar51);
    _local_208 = auVar140;
  }
  else {
    auVar51 = ZEXT816(0);
    auVar42 = ZEXT816(0);
    _local_208 = auVar51;
  }
  uVar31 = *(undefined4 *)((ulonglong)auVar157._12_4_ + lVar32);
  auVar157 = pmovsxdq(auVar51,auVar164);
  iVar112 = -(uint)(param_8 == 3);
  auVar54._4_4_ = iVar112;
  auVar54._0_4_ = iVar112;
  auVar54._8_4_ = iVar112;
  auVar54._12_4_ = iVar112;
  auVar203 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar92 & auVar54);
  auVar222 = pmovsxdq(unaff_XMM12,auVar187);
  auVar165 = (undefined1  [16])0x0;
  auVar141 = pmovsxdq(auVar140,auVar203);
  auVar101._8_8_ = auVar203._8_8_;
  auVar101._0_8_ = auVar101._8_8_;
  auVar203 = pmovsxdq(auVar92 & auVar54,auVar101);
  auVar229._4_4_ = iVar22;
  auVar229._0_4_ = iVar22;
  auVar229._8_4_ = iVar22;
  auVar229._12_4_ = iVar22;
  auVar93 = pmulld(auVar148,auVar229);
  auVar215 = pmovsxdq(auVar203,auVar93);
  auVar94._8_4_ = auVar93._8_4_;
  auVar94._12_4_ = auVar93._12_4_;
  auVar94._0_8_ = auVar93._8_8_;
  auVar196 = pmovsxdq(unaff_XMM10,auVar94);
  lVar69 = auVar222._0_8_;
  lVar83 = auVar222._8_8_;
  lVar38 = auVar196._0_8_;
  lVar67 = auVar196._8_8_;
  lVar27 = auVar215._0_8_;
  lVar32 = auVar215._8_8_;
  lVar33 = auVar141._0_8_;
  lVar36 = auVar141._8_8_;
  local_278 = auVar203._0_8_;
  uStack_270 = auVar203._8_8_;
  local_258 = auVar157._0_8_;
  lStack_250 = auVar157._8_8_;
  if (param_8 < 2) {
    auVar167._0_8_ = (longlong)local_278 + local_258 + lVar38;
    auVar167._8_8_ = uStack_270 + lStack_250 + lVar67;
    auVar105._0_8_ = lVar33 + lVar69 + lVar27;
    auVar105._8_8_ = lVar36 + lVar83 + lVar32;
    auVar94 = pmovsxdq(auVar94,auVar153);
    auVar157 = blendvps(ZEXT816(0),auVar105,auVar94);
    auVar106._4_4_ = auVar153._8_4_;
    auVar106._0_4_ = auVar153._8_4_;
    auVar106._8_4_ = auVar153._12_4_;
    auVar106._12_4_ = auVar153._12_4_;
    auVar203 = blendvps(ZEXT816(0),auVar167,auVar106);
    lVar27 = param_4 + auVar157._0_8_;
    lVar32 = param_4 + auVar157._8_8_;
    lVar38 = param_4 + auVar203._0_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar94);
    auVar215 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar106);
    uVar25 = param_4 + auVar203._8_8_;
    auVar93 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar94);
    auVar196 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar106);
    uVar24 = movmskps(iVar112,auVar153);
    auVar182 = ZEXT416(*(uint *)(param_4 + auVar157._0_8_));
    if ((uVar24 & 2) == 0) {
      auVar102 = ZEXT416(*(uint *)(auVar115._0_8_ + lVar27));
      auVar165 = ZEXT416(*(uint *)(auVar93._0_8_ + lVar27));
    }
    else {
      auVar182 = insertps(auVar182,*(undefined4 *)(param_4 + auVar157._8_8_),0x10);
      auVar102 = insertps(ZEXT416(*(uint *)(auVar115._0_8_ + lVar27)),
                          *(undefined4 *)(auVar115._8_8_ + lVar32),0x10);
      auVar165 = insertps(ZEXT416(*(uint *)(auVar93._0_8_ + lVar27)),
                          *(undefined4 *)(auVar93._8_8_ + lVar32),0x10);
    }
    if ((uVar24 & 4) != 0) {
      auVar182 = insertps(auVar182,*(undefined4 *)(param_4 + auVar203._0_8_),0x20);
      auVar102 = insertps(auVar102,*(undefined4 *)(auVar215._0_8_ + lVar38),0x20);
      auVar165 = insertps(auVar165,*(undefined4 *)(auVar196._0_8_ + lVar38),0x20);
    }
    if ((char)((char)uVar24 << 4) >> 4 < '\0') {
      auVar182 = insertps(auVar182,*(undefined4 *)(param_4 + auVar203._8_8_),0x30);
      auVar102 = insertps(auVar102,*(undefined4 *)(auVar215._8_8_ + uVar25),0x30);
      auVar165 = insertps(auVar165,*(undefined4 *)(auVar196._8_8_ + uVar25),0x30);
    }
  }
  else if (param_8 == 2) {
    auVar107._0_8_ = lVar33 + lVar69 + lVar27;
    auVar107._8_8_ = lVar36 + lVar83 + lVar32;
    auVar115 = pmovsxdq(auVar94,auVar153);
    auVar203 = blendvps(ZEXT816(0),auVar107,auVar115);
    auVar168._0_8_ = (longlong)local_278 + local_258 + lVar38;
    auVar168._8_8_ = uStack_270 + lStack_250 + lVar67;
    auVar108._4_4_ = auVar153._8_4_;
    auVar108._0_4_ = auVar153._8_4_;
    auVar108._8_4_ = auVar153._12_4_;
    auVar108._12_4_ = auVar153._12_4_;
    auVar215 = blendvps((undefined1  [16])0x0,auVar168,auVar108);
    lVar27 = param_4 + auVar203._0_8_;
    lVar32 = param_4 + auVar203._8_8_;
    lVar38 = param_4 + auVar215._0_8_;
    uVar25 = auVar215._8_8_;
    auVar157 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar115);
    auVar93 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar108);
    auVar169._2_2_ = *(undefined2 *)(auVar157._8_8_ + lVar32);
    auVar169._0_2_ = *(undefined2 *)(auVar157._0_8_ + lVar27);
    auVar169._4_2_ = *(undefined2 *)(auVar93._0_8_ + lVar38);
    auVar169._6_2_ = *(undefined2 *)(auVar93._8_8_ + param_4 + uVar25);
    auVar169._8_8_ = 0;
    auVar157 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar115);
    auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar108);
    auVar56._2_2_ = *(undefined2 *)(auVar157._8_8_ + lVar32);
    auVar56._0_2_ = *(undefined2 *)(auVar157._0_8_ + lVar27);
    auVar56._4_2_ = *(undefined2 *)(auVar115._0_8_ + lVar38);
    auVar56._6_2_ = *(undefined2 *)(auVar115._8_8_ + param_4 + uVar25);
    auVar56._8_8_ = 0;
    auVar115 = pmovzxwd(auVar115,auVar169);
    auVar109._0_4_ = (float)(auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar109._4_4_ = (float)(auVar115._4_4_ + _UNK_151c6b8e4);
    auVar109._8_4_ = (float)(auVar115._8_4_ + _UNK_151c6b8e8);
    auVar109._12_4_ = (float)(auVar115._12_4_ + _UNK_151c6b8ec);
    auVar157 = divps(auVar109,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar115 = pmovzxwd(auVar56,auVar56);
    auVar170._0_4_ = (float)(auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar170._4_4_ = (float)(auVar115._4_4_ + _UNK_151c6b8e4);
    auVar170._8_4_ = (float)(auVar115._8_4_ + _UNK_151c6b8e8);
    auVar170._12_4_ = (float)(auVar115._12_4_ + _UNK_151c6b8ec);
    auVar115 = divps(auVar170,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar102._0_4_ = auVar157._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar102._4_4_ = auVar157._4_4_ * _UNK_151c6be64;
    auVar102._8_4_ = auVar157._8_4_ * _UNK_151c6be68;
    auVar102._12_4_ = auVar157._12_4_ * _UNK_151c6be6c;
    auVar197._2_2_ = *(undefined2 *)(param_4 + auVar203._8_8_);
    auVar197._0_2_ = *(undefined2 *)(param_4 + auVar203._0_8_);
    auVar197._4_2_ = *(undefined2 *)(param_4 + auVar215._0_8_);
    auVar165._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar165._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
    auVar165._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
    auVar165._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
    auVar197._6_2_ = *(undefined2 *)(param_4 + uVar25);
    auVar197._8_8_ = 0;
    auVar115 = pmovzxwd(auVar197,auVar197);
    auVar196._0_4_ = auVar115._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
    auVar196._4_4_ = auVar115._4_4_ + _UNK_151c6b8e4;
    auVar196._8_4_ = auVar115._8_4_ + _UNK_151c6b8e8;
    auVar196._12_4_ = auVar115._12_4_ + _UNK_151c6b8ec;
    auVar181._0_4_ = (float)auVar196._0_4_;
    auVar181._4_4_ = (float)auVar196._4_4_;
    auVar181._8_4_ = (float)auVar196._8_4_;
    auVar181._12_4_ = (float)auVar196._12_4_;
    auVar115 = divps(auVar181,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar182._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar182._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
    auVar182._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
    auVar182._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
    auVar94 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  }
  else {
    auVar102 = (undefined1  [16])0x0;
    auVar182 = ZEXT816(0);
    if (param_8 == 3) {
      auVar157 = auVar153 & auVar187;
      lVar113 = param_4 + auVar157._0_4_;
      lVar130 = param_4 + auVar157._4_4_;
      lVar132 = param_4 + auVar157._8_4_;
      lVar146 = param_4 + auVar157._12_4_;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)(uVar25 + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar93 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar115 = ___xmm_00000008000000080000000800000008 & auVar153;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar94 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar115 = ___xmm_00000010000000100000001000000010 & auVar153;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar203 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar115 = ___xmm_00000014000000140000001400000014 & auVar153;
      auVar141 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar130),0x10);
      auVar141 = insertps(auVar141,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar132),0x20);
      auVar141 = insertps(auVar141,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar146),0x30);
      auVar223._0_8_ = (longlong)local_278 + local_258 + lVar38;
      auVar223._8_8_ = uStack_270 + lStack_250 + lVar67;
      auVar103._0_8_ = lVar33 + lVar69 + lVar27;
      auVar103._8_8_ = lVar36 + lVar83 + lVar32;
      auVar115 = pmovsxdq(auVar215,auVar153);
      auVar215 = blendvps((undefined1  [16])0x0,auVar103,auVar115);
      auVar55._4_4_ = auVar153._8_4_;
      auVar55._0_4_ = auVar153._8_4_;
      auVar55._8_4_ = auVar153._12_4_;
      auVar55._12_4_ = auVar153._12_4_;
      auVar115 = blendvps((undefined1  [16])0x0,auVar223,auVar55);
      uVar24 = *(uint *)(param_4 + auVar215._0_8_);
      uVar30 = *(uint *)(param_4 + auVar215._8_8_);
      uVar19 = *(uint *)(param_4 + auVar115._0_8_);
      uVar35 = *(uint *)(param_4 + auVar115._8_8_);
      auVar104._0_4_ =
           (float)(int)((uVar24 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar104._4_4_ = (float)(int)((uVar30 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar104._8_4_ = (float)(int)((uVar19 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar104._12_4_ = (float)(int)((uVar35 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar115 = divps(auVar104,___xmm_447fc000447fc000447fc000447fc000);
      auVar102._0_4_ = auVar115._0_4_ * auVar203._0_4_ + auVar93._0_4_;
      auVar102._4_4_ = auVar115._4_4_ * auVar203._4_4_ + auVar93._4_4_;
      auVar102._8_4_ = auVar115._8_4_ * auVar203._8_4_ + auVar93._8_4_;
      auVar102._12_4_ = auVar115._12_4_ * auVar203._12_4_ + auVar93._12_4_;
      auVar166._0_4_ = (float)(int)((uVar24 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar166._4_4_ = (float)(int)((uVar30 >> 0x15) + _UNK_151c6b864);
      auVar166._8_4_ = (float)(int)((uVar19 >> 0x15) + _UNK_151c6b868);
      auVar166._12_4_ = (float)(int)((uVar35 >> 0x15) + _UNK_151c6b86c);
      auVar115 = divps(auVar166,___xmm_447fc000447fc000447fc000447fc000);
      auVar203 = insertps(ZEXT416(*(uint *)(param_4 + auVar157._0_4_)),
                          *(undefined4 *)(param_4 + auVar157._4_4_),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)(param_4 + auVar157._8_4_),0x20);
      auVar196 = insertps(auVar203,*(undefined4 *)(param_4 + auVar157._12_4_),0x30);
      auVar157 = ___xmm_0000000c0000000c0000000c0000000c & auVar153;
      uVar25 = (ulonglong)auVar157._8_4_;
      auVar203 = insertps(ZEXT416(*(uint *)((ulonglong)auVar157._0_4_ + lVar113)),
                          *(undefined4 *)((ulonglong)auVar157._4_4_ + lVar130),0x10);
      auVar203 = insertps(auVar203,*(undefined4 *)(uVar25 + lVar132),0x20);
      auVar157 = insertps(auVar203,*(undefined4 *)((ulonglong)auVar157._12_4_ + lVar146),0x30);
      auVar165._0_4_ = auVar115._0_4_ * auVar141._0_4_ + auVar94._0_4_;
      auVar165._4_4_ = auVar115._4_4_ * auVar141._4_4_ + auVar94._4_4_;
      auVar165._8_4_ = auVar115._8_4_ * auVar141._8_4_ + auVar94._8_4_;
      auVar165._12_4_ = auVar115._12_4_ * auVar141._12_4_ + auVar94._12_4_;
      auVar180._0_4_ =
           (float)(int)((uVar24 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar180._4_4_ = (float)(int)((uVar30 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar180._8_4_ = (float)(int)((uVar19 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar180._12_4_ = (float)(int)((uVar35 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar115 = divps(auVar180,___xmm_43ff800043ff800043ff800043ff8000);
      auVar182._0_4_ = auVar115._0_4_ * auVar157._0_4_ + auVar196._0_4_;
      auVar182._4_4_ = auVar115._4_4_ * auVar157._4_4_ + auVar196._4_4_;
      auVar182._8_4_ = auVar115._8_4_ * auVar157._8_4_ + auVar196._8_4_;
      auVar182._12_4_ = auVar115._12_4_ * auVar157._12_4_ + auVar196._12_4_;
    }
  }
  auVar78._0_4_ = -(uint)(auVar148._0_4_ == auVar42._0_4_);
  auVar78._4_4_ = -(uint)(auVar148._4_4_ == auVar42._4_4_);
  auVar78._8_4_ = -(uint)(auVar148._8_4_ == auVar42._8_4_);
  auVar78._12_4_ = -(uint)(auVar148._12_4_ == auVar42._12_4_);
  auVar115 = ~auVar78 & auVar153;
  iVar22 = movmskps((int)uVar25,auVar115);
  if (iVar22 == 0) {
    uVar23 = 0;
    goto LAB_140b14e98;
  }
  bVar26 = (char)((char)iVar22 << 4) >> 4;
  uVar23 = CONCAT31((int3)((uint)iVar22 >> 8),bVar26);
  auVar157 = pmulld(auVar229,auVar42);
  auVar42 = pmovsxdq(auVar196,auVar157);
  auVar57._0_8_ = auVar157._8_8_;
  auVar57._8_4_ = auVar157._8_4_;
  auVar57._12_4_ = auVar157._12_4_;
  auVar157 = pmovsxdq(auVar157,auVar57);
  uVar82 = auVar115._8_4_;
  auVar79._12_4_ = auVar115._12_4_;
  lVar27 = auVar42._0_8_;
  lVar32 = auVar42._8_8_;
  lVar38 = auVar157._0_8_;
  lVar67 = auVar157._8_8_;
  if (param_8 < 2) {
    auVar231._0_8_ = lVar38 + local_258 + (longlong)local_278;
    auVar231._8_8_ = lVar67 + lStack_250 + uStack_270;
    auVar199._0_8_ = lVar27 + lVar69 + lVar33;
    auVar199._8_8_ = lVar32 + lVar83 + lVar36;
    auVar42 = pmovsxdq(auVar94,auVar115);
    auVar148 = blendvps(ZEXT816(0),auVar199,auVar42);
    auVar79._4_4_ = uVar82;
    auVar79._0_4_ = uVar82;
    auVar79._8_4_ = auVar79._12_4_;
    auVar115 = blendvps(ZEXT816(0),auVar231,auVar79);
    lVar27 = param_4 + auVar148._0_8_;
    lVar32 = param_4 + auVar148._8_8_;
    lVar33 = param_4 + auVar115._0_8_;
    auVar215 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar42);
    auVar157 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar79);
    lVar36 = param_4 + auVar115._8_8_;
    auVar203 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar42);
    auVar42 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar79);
    auVar58 = ZEXT416(*(uint *)(param_4 + auVar148._0_8_));
    if ((bVar26 & 2) == 0) {
      auVar95 = ZEXT416(*(uint *)(auVar215._0_8_ + lVar27));
      auVar225 = ZEXT416(*(uint *)(auVar203._0_8_ + lVar27));
    }
    else {
      auVar58 = insertps(auVar58,*(undefined4 *)(param_4 + auVar148._8_8_),0x10);
      auVar95 = insertps(ZEXT416(*(uint *)(auVar215._0_8_ + lVar27)),
                         *(undefined4 *)(auVar215._8_8_ + lVar32),0x10);
      auVar225 = insertps(ZEXT416(*(uint *)(auVar203._0_8_ + lVar27)),
                          *(undefined4 *)(auVar203._8_8_ + lVar32),0x10);
    }
    if ((bVar26 & 4) != 0) {
      auVar58 = insertps(auVar58,*(undefined4 *)(param_4 + auVar115._0_8_),0x20);
      auVar95 = insertps(auVar95,*(undefined4 *)(auVar157._0_8_ + lVar33),0x20);
      auVar225 = insertps(auVar225,*(undefined4 *)(auVar42._0_8_ + lVar33),0x20);
    }
    if ((char)bVar26 < '\0') {
      auVar58 = insertps(auVar58,*(undefined4 *)(param_4 + auVar115._8_8_),0x30);
      auVar95 = insertps(auVar95,*(undefined4 *)(auVar157._8_8_ + lVar36),0x30);
      auVar225 = insertps(auVar225,*(undefined4 *)(auVar42._8_8_ + lVar36),0x30);
    }
  }
  else if (param_8 == 2) {
    auVar200._0_8_ = lVar27 + lVar69 + lVar33;
    auVar200._8_8_ = lVar32 + lVar83 + lVar36;
    auVar42 = pmovsxdq(auVar94,auVar115);
    auVar157 = blendvps((undefined1  [16])0x0,auVar200,auVar42);
    auVar232._0_8_ = lVar38 + local_258 + (longlong)local_278;
    auVar232._8_8_ = lVar67 + lStack_250 + uStack_270;
    auVar80._4_4_ = uVar82;
    auVar80._0_4_ = uVar82;
    auVar80._8_4_ = auVar79._12_4_;
    auVar80._12_4_ = auVar79._12_4_;
    auVar148 = blendvps(ZEXT816(0),auVar232,auVar80);
    lVar27 = param_4 + auVar157._0_8_;
    lVar32 = param_4 + auVar157._8_8_;
    lVar33 = param_4 + auVar148._0_8_;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar42);
    auVar203 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar80);
    auVar142._2_2_ = *(undefined2 *)(auVar115._8_8_ + lVar32);
    auVar142._0_2_ = *(undefined2 *)(auVar115._0_8_ + lVar27);
    auVar142._4_2_ = *(undefined2 *)(auVar203._0_8_ + lVar33);
    lVar36 = param_4 + auVar148._8_8_;
    auVar142._6_2_ = *(undefined2 *)(auVar203._8_8_ + lVar36);
    auVar142._8_8_ = 0;
    auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar42);
    auVar42 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar80);
    auVar61._2_2_ = *(undefined2 *)(auVar115._8_8_ + lVar32);
    auVar61._0_2_ = *(undefined2 *)(auVar115._0_8_ + lVar27);
    auVar61._4_2_ = *(undefined2 *)(auVar42._0_8_ + lVar33);
    auVar61._6_2_ = *(undefined2 *)(auVar42._8_8_ + lVar36);
    auVar61._8_8_ = 0;
    auVar42 = pmovzxwd(auVar80,auVar142);
    auVar97._0_4_ = (float)(auVar42._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar97._4_4_ = (float)(auVar42._4_4_ + _UNK_151c6b8e4);
    auVar97._8_4_ = (float)(auVar42._8_4_ + _UNK_151c6b8e8);
    auVar97._12_4_ = (float)(auVar42._12_4_ + _UNK_151c6b8ec);
    auVar115 = divps(auVar97,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar42 = pmovzxwd(auVar61,auVar61);
    auVar226._0_4_ = (float)(auVar42._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar226._4_4_ = (float)(auVar42._4_4_ + _UNK_151c6b8e4);
    auVar226._8_4_ = (float)(auVar42._8_4_ + _UNK_151c6b8e8);
    auVar226._12_4_ = (float)(auVar42._12_4_ + _UNK_151c6b8ec);
    auVar42 = divps(auVar226,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar95._0_4_ = auVar115._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar95._4_4_ = auVar115._4_4_ * _UNK_151c6be64;
    auVar95._8_4_ = auVar115._8_4_ * _UNK_151c6be68;
    auVar95._12_4_ = auVar115._12_4_ * _UNK_151c6be6c;
    auVar62._2_2_ = *(undefined2 *)(param_4 + auVar157._8_8_);
    auVar62._0_2_ = *(undefined2 *)(param_4 + auVar157._0_8_);
    auVar62._4_2_ = *(undefined2 *)(param_4 + auVar148._0_8_);
    auVar225._0_4_ = auVar42._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar225._4_4_ = auVar42._4_4_ * _UNK_151c6be64;
    auVar225._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
    auVar225._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
    auVar62._6_2_ = *(undefined2 *)(param_4 + auVar148._8_8_);
    auVar62._8_8_ = 0;
    auVar42 = pmovzxwd(auVar62,auVar62);
    auVar63._0_4_ = (float)(auVar42._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar63._4_4_ = (float)(auVar42._4_4_ + _UNK_151c6b8e4);
    auVar63._8_4_ = (float)(auVar42._8_4_ + _UNK_151c6b8e8);
    auVar63._12_4_ = (float)(auVar42._12_4_ + _UNK_151c6b8ec);
    auVar42 = divps(auVar63,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar58._0_4_ = auVar42._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar58._4_4_ = auVar42._4_4_ * _UNK_151c6be64;
    auVar58._8_4_ = auVar42._8_4_ * _UNK_151c6be68;
    auVar58._12_4_ = auVar42._12_4_ * _UNK_151c6be6c;
  }
  else {
    auVar225 = ZEXT816(0);
    auVar95 = (undefined1  [16])0x0;
    auVar58 = (undefined1  [16])0x0;
    if (param_8 == 3) {
      auVar42 = blendvps((undefined1  [16])0x0,auVar187,auVar115);
      uVar14 = extractps(auVar42,0);
      lVar113 = param_4 + (int)uVar14;
      uVar15 = extractps(auVar42,1);
      lVar130 = param_4 + (int)uVar15;
      uVar16 = extractps(auVar42,2);
      lVar132 = param_4 + (int)uVar16;
      uVar17 = extractps(auVar42,3);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar115);
      lVar146 = param_4 + (int)uVar17;
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar157 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar115);
      auVar93 = insertps(auVar157,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar157 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000010000000100000001000000010,auVar115);
      auVar157 = insertps(auVar157,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar148 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar42 = blendvps(ZEXT816(0),___xmm_00000014000000140000001400000014,auVar115);
      auVar215 = insertps(auVar148,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      uVar18 = extractps(auVar42,0);
      uVar28 = extractps(auVar42,1);
      uVar29 = extractps(auVar42,2);
      uVar34 = extractps(auVar42,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar18 + lVar113)),
                         *(undefined4 *)((int)uVar28 + lVar130),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)((int)uVar29 + lVar132),0x20);
      auVar203 = insertps(auVar42,*(undefined4 *)((int)uVar34 + lVar146),0x30);
      auVar230._0_8_ = lVar38 + local_258 + (longlong)local_278;
      auVar230._8_8_ = lVar67 + lStack_250 + uStack_270;
      auVar198._0_8_ = lVar27 + lVar69 + lVar33;
      auVar198._8_8_ = lVar32 + lVar83 + lVar36;
      auVar42 = pmovsxdq(auVar115,auVar115);
      auVar42 = blendvps(ZEXT816(0),auVar198,auVar42);
      auVar59._4_4_ = uVar82;
      auVar59._0_4_ = uVar82;
      auVar59._8_4_ = auVar79._12_4_;
      auVar59._12_4_ = auVar79._12_4_;
      auVar148 = blendvps(ZEXT816(0),auVar230,auVar59);
      uVar24 = *(uint *)(param_4 + auVar42._0_8_);
      uVar30 = *(uint *)(param_4 + auVar42._8_8_);
      uVar19 = *(uint *)(param_4 + auVar148._0_8_);
      uVar35 = *(uint *)(param_4 + auVar148._8_8_);
      auVar96._0_4_ =
           (float)(int)((uVar24 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar96._4_4_ = (float)(int)((uVar30 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar96._8_4_ = (float)(int)((uVar19 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar96._12_4_ = (float)(int)((uVar35 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar42 = divps(auVar96,___xmm_447fc000447fc000447fc000447fc000);
      auVar95._0_4_ = auVar42._0_4_ * auVar215._0_4_ + auVar93._0_4_;
      auVar95._4_4_ = auVar42._4_4_ * auVar215._4_4_ + auVar93._4_4_;
      auVar95._8_4_ = auVar42._8_4_ * auVar215._8_4_ + auVar93._8_4_;
      auVar95._12_4_ = auVar42._12_4_ * auVar215._12_4_ + auVar93._12_4_;
      auVar224._0_4_ = (float)(int)((uVar24 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar224._4_4_ = (float)(int)((uVar30 >> 0x15) + _UNK_151c6b864);
      auVar224._8_4_ = (float)(int)((uVar19 >> 0x15) + _UNK_151c6b868);
      auVar224._12_4_ = (float)(int)((uVar35 >> 0x15) + _UNK_151c6b86c);
      auVar215 = divps(auVar224,___xmm_447fc000447fc000447fc000447fc000);
      auVar42 = insertps(ZEXT416(*(uint *)(param_4 + (int)uVar14)),
                         *(undefined4 *)(param_4 + (int)uVar15),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_4 + (int)uVar16),0x20);
      auVar115 = blendvps((undefined1  [16])0x0,___xmm_0000000c0000000c0000000c0000000c,auVar115);
      auVar148 = insertps(auVar42,*(undefined4 *)(param_4 + (int)uVar17),0x30);
      uVar14 = extractps(auVar115,0);
      uVar17 = extractps(auVar115,1);
      uVar16 = extractps(auVar115,2);
      uVar15 = extractps(auVar115,3);
      auVar42 = insertps(ZEXT416(*(uint *)((int)uVar14 + lVar113)),
                         *(undefined4 *)((int)uVar17 + lVar130),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)((int)uVar16 + lVar132),0x20);
      auVar115 = insertps(auVar42,*(undefined4 *)((int)uVar15 + lVar146),0x30);
      auVar225._0_4_ = auVar215._0_4_ * auVar203._0_4_ + auVar157._0_4_;
      auVar225._4_4_ = auVar215._4_4_ * auVar203._4_4_ + auVar157._4_4_;
      auVar225._8_4_ = auVar215._8_4_ * auVar203._8_4_ + auVar157._8_4_;
      auVar225._12_4_ = auVar215._12_4_ * auVar203._12_4_ + auVar157._12_4_;
      auVar60._0_4_ =
           (float)(int)((uVar24 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar60._4_4_ = (float)(int)((uVar30 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar60._8_4_ = (float)(int)((uVar19 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar60._12_4_ = (float)(int)((uVar35 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar42 = divps(auVar60,___xmm_43ff800043ff800043ff800043ff8000);
      auVar58._0_4_ = auVar42._0_4_ * auVar115._0_4_ + auVar148._0_4_;
      auVar58._4_4_ = auVar42._4_4_ * auVar115._4_4_ + auVar148._4_4_;
      auVar58._8_4_ = auVar42._8_4_ * auVar115._8_4_ + auVar148._8_4_;
      auVar58._12_4_ = auVar42._12_4_ * auVar115._12_4_ + auVar148._12_4_;
    }
  }
  auVar64._0_8_ =
       CONCAT44((auVar58._4_4_ - auVar182._4_4_) * (float)local_208._4_4_ + auVar182._4_4_,
                (auVar58._0_4_ - auVar182._0_4_) * (float)local_208._0_4_ + auVar182._0_4_);
  auVar64._8_4_ = (auVar58._8_4_ - auVar182._8_4_) * fStack_200 + auVar182._8_4_;
  auVar64._12_4_ = (auVar58._12_4_ - auVar182._12_4_) * fStack_1fc + auVar182._12_4_;
  bVar37 = (bVar26 & 1) == 0;
  auVar143 = auVar182;
  if (!bVar37) {
    auVar143._8_4_ = auVar64._8_4_;
    auVar143._0_8_ = auVar64._0_8_;
    auVar143._12_4_ = auVar64._12_4_;
  }
  auVar98._0_8_ =
       CONCAT44((auVar95._4_4_ - auVar102._4_4_) * (float)local_208._4_4_ + auVar102._4_4_,
                (auVar95._0_4_ - auVar102._0_4_) * (float)local_208._0_4_ + auVar102._0_4_);
  auVar98._8_4_ = (auVar95._8_4_ - auVar102._8_4_) * fStack_200 + auVar102._8_4_;
  auVar98._12_4_ = (auVar95._12_4_ - auVar102._12_4_) * fStack_1fc + auVar102._12_4_;
  auVar227._0_8_ =
       CONCAT44((auVar225._4_4_ - auVar165._4_4_) * (float)local_208._4_4_ + auVar165._4_4_,
                (auVar225._0_4_ - auVar165._0_4_) * (float)local_208._0_4_ + auVar165._0_4_);
  auVar227._8_4_ = (auVar225._8_4_ - auVar165._8_4_) * fStack_200 + auVar165._8_4_;
  auVar227._12_4_ = (auVar225._12_4_ - auVar165._12_4_) * fStack_1fc + auVar165._12_4_;
  if (bVar37) {
    auVar42 = blendps(auVar182,auVar143,1);
    auVar81 = auVar165;
    auVar201 = auVar102;
    if ((bVar26 & 2) != 0) goto LAB_140b14e18;
LAB_140b14d9e:
    auVar157 = blendps(auVar102,auVar201,1);
    auVar172 = blendps(auVar165,auVar81,1);
    auVar42 = blendps(auVar42,auVar42,2);
    auVar144 = auVar157;
    auVar115 = auVar172;
    if ((bVar26 & 4) != 0) goto LAB_140b14dc9;
LAB_140b14e48:
    auVar157 = blendps(auVar157,auVar144,2);
    auVar171 = blendps(auVar115,auVar172,2);
    auVar42 = blendps(auVar42,auVar42,4);
    auVar145 = auVar157;
    auVar115 = auVar171;
    if (-1 < (char)bVar26) goto LAB_140b14e6c;
LAB_140b14df2:
    auVar157 = blendps(auVar157,auVar145,4);
    if (-1 < (char)bVar26) goto LAB_140b14dfa;
LAB_140b14e78:
    auVar115 = blendps(auVar115,auVar171,4);
  }
  else {
    auVar201._8_4_ = auVar98._8_4_;
    auVar201._0_8_ = auVar98._0_8_;
    auVar201._12_4_ = auVar98._12_4_;
    auVar81._8_4_ = auVar227._8_4_;
    auVar81._0_8_ = auVar227._0_8_;
    auVar81._12_4_ = auVar227._12_4_;
    auVar42 = blendps(auVar182,auVar143,1);
    if ((bVar26 & 2) == 0) goto LAB_140b14d9e;
LAB_140b14e18:
    auVar189._8_4_ = auVar64._8_4_;
    auVar189._0_8_ = auVar64._0_8_;
    auVar189._12_4_ = auVar64._12_4_;
    auVar157 = blendps(auVar102,auVar201,1);
    auVar144._8_4_ = auVar98._8_4_;
    auVar144._0_8_ = auVar98._0_8_;
    auVar144._12_4_ = auVar98._12_4_;
    auVar115 = blendps(auVar165,auVar81,1);
    auVar172._8_4_ = auVar227._8_4_;
    auVar172._0_8_ = auVar227._0_8_;
    auVar172._12_4_ = auVar227._12_4_;
    auVar42 = blendps(auVar42,auVar189,2);
    if ((bVar26 & 4) == 0) goto LAB_140b14e48;
LAB_140b14dc9:
    auVar188._8_4_ = auVar64._8_4_;
    auVar188._0_8_ = auVar64._0_8_;
    auVar188._12_4_ = auVar64._12_4_;
    auVar157 = blendps(auVar157,auVar144,2);
    auVar145._8_4_ = auVar98._8_4_;
    auVar145._0_8_ = auVar98._0_8_;
    auVar145._12_4_ = auVar98._12_4_;
    auVar115 = blendps(auVar115,auVar172,2);
    auVar171._8_4_ = auVar227._8_4_;
    auVar171._0_8_ = auVar227._0_8_;
    auVar171._12_4_ = auVar227._12_4_;
    auVar42 = blendps(auVar42,auVar188,4);
    if ((char)bVar26 < '\0') goto LAB_140b14df2;
LAB_140b14e6c:
    auVar64 = auVar42;
    auVar157 = blendps(auVar157,auVar145,4);
    auVar42 = auVar64;
    if ((char)bVar26 < '\0') goto LAB_140b14e78;
LAB_140b14dfa:
    auVar115 = blendps(auVar115,auVar171,4);
    auVar98 = auVar157;
  }
  if (-1 < (char)bVar26) {
    auVar227 = auVar115;
  }
  auVar182 = blendps(auVar42,auVar64,8);
  auVar102 = blendps(auVar157,auVar98,8);
  auVar165 = blendps(auVar115,auVar227,8);
LAB_140b14e98:
  auVar65._0_8_ = auVar182._0_8_;
  auVar65._8_4_ = auVar182._4_4_;
  auVar65._12_4_ = auVar102._4_4_;
  auVar183._0_8_ = CONCAT44(auVar102._8_4_,auVar182._8_4_);
  auVar183._8_4_ = auVar182._12_4_;
  auVar183._12_4_ = auVar102._12_4_;
  auVar110._4_4_ = auVar102._0_4_;
  auVar110._0_4_ = auVar182._0_4_;
  auVar110._8_4_ = auVar182._4_4_;
  auVar110._12_4_ = auVar102._4_4_;
  local_168 = insertps(auVar110,auVar165,0x28);
  local_158._8_4_ = auVar165._4_4_;
  local_158._0_8_ = auVar65._8_8_;
  local_158._12_4_ = 0;
  auVar66._8_4_ = auVar182._12_4_;
  auVar66._0_8_ = auVar183._0_8_;
  auVar66._12_4_ = auVar102._12_4_;
  local_148 = insertps(auVar66,auVar165,0xa8);
  local_138._8_4_ = auVar165._12_4_;
  local_138._0_8_ = auVar183._8_8_;
  local_138._12_4_ = 0;
  uVar24 = movmskps(uVar23,auVar153);
  uVar25 = (ulonglong)uVar24;
  do {
    if (uVar25 == 0) {
      uVar24 = 0x40;
    }
    else {
      uVar24 = 0;
      for (uVar99 = uVar25; (uVar99 & 1) == 0; uVar99 = uVar99 >> 1 | 0x8000000000000000) {
        uVar24 = uVar24 + 1;
      }
    }
    bVar26 = (byte)uVar24 & 0x3f;
    local_178 = CONCAT44(uVar214,uVar213);
    uStack_170 = CONCAT44(uVar31,uVar7);
    uVar14 = *(undefined8 *)(local_168 + (ulonglong)(uVar24 << 4) + 8);
    uVar15 = *(undefined8 *)(local_168 + (uVar24 << 4));
    lVar27 = (longlong)*(int *)((longlong)&local_178 + (ulonglong)(uVar24 & 3) * 4) * 0x60;
    pdVar2 = (double *)(param_1 + 0x20 + lVar27);
    *pdVar2 = (double)(float)uVar15;
    pdVar2[1] = (double)(float)((ulonglong)uVar15 >> 0x20);
    pdVar2 = (double *)(param_1 + 0x30 + lVar27);
    *pdVar2 = (double)(float)uVar14;
    pdVar2[1] = (double)(float)((ulonglong)uVar14 >> 0x20);
    uVar25 = uVar25 & (-2L << bVar26 | 0xfffffffffffffffeU >> 0x40 - bVar26);
  } while (uVar25 != 0);
  return;
}

// GetConstantKeyLerpPoseScales_sse4 @ 140b14fd0

/* WARNING: Removing unreachable block (ram,0x000140b15a7d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseScales_sse4
               (longlong param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
               undefined8 param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  ulonglong uVar24;
  byte bVar25;
  longlong lVar26;
  undefined8 uVar27;
  uint uVar28;
  int iVar29;
  undefined4 uVar30;
  longlong lVar31;
  undefined8 uVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  bool bVar36;
  longlong lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  longlong lVar66;
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
  longlong lVar67;
  undefined4 uVar79;
  undefined1 auVar68 [16];
  longlong lVar80;
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
  longlong lVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  longlong lVar97;
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
  int iVar98;
  longlong lVar99;
  int iVar128;
  undefined1 auVar101 [16];
  int iVar127;
  int iVar130;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  longlong lVar129;
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
  ulonglong uVar100;
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
  undefined1 auVar131 [16];
  longlong lVar132;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  longlong lVar145;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 unaff_XMM6 [16];
  float fVar152;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined4 uVar171;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined4 uVar172;
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
  undefined1 auVar173 [16];
  float fVar183;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  longlong lVar184;
  undefined1 unaff_XMM9 [16];
  longlong lVar194;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  float fVar228;
  undefined1 unaff_XMM15 [16];
  float fVar229;
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  longlong local_268;
  longlong lStack_260;
  undefined1 local_248 [16];
  int local_228;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  iVar19 = *(int *)(&DAT_151c6be40 + (longlong)(int)param_9 * 4) *
           *(int *)(&DAT_151c6be20 + (longlong)(int)param_9 * 4);
  uVar23 = param_10 + 3;
  if (-1 < (int)param_10) {
    uVar23 = param_10;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar28 = 0;
  }
  else {
    uVar20 = -(uint)(param_9 == 3);
    uVar28 = 0;
    unaff_XMM12._8_4_ = 0xffffffff;
    unaff_XMM12._0_8_ = 0xffffffffffffffff;
    unaff_XMM12._12_4_ = 0xffffffff;
    uVar34 = 0;
    do {
      piVar1 = (int *)(param_2 + (ulonglong)uVar34);
      iVar8 = *piVar1;
      iVar9 = piVar1[2];
      puVar3 = (undefined8 *)(param_2 + 0x10 + (ulonglong)uVar34);
      uVar13 = *puVar3;
      iVar10 = *(int *)(puVar3 + 1);
      auVar103._4_4_ = piVar1[3];
      auVar103._0_4_ = piVar1[1];
      auVar103._8_4_ = *(undefined4 *)((longlong)puVar3 + 4);
      auVar103._12_4_ = *(undefined4 *)((longlong)puVar3 + 0xc);
      auVar39._4_4_ = param_4 << 2;
      auVar39._0_4_ = param_4 << 2;
      auVar39._8_4_ = param_4 << 2;
      auVar39._12_4_ = param_4 << 2;
      auVar39 = pmulld(auVar103,auVar39);
      iVar29 = auVar39._12_4_;
      iVar98 = *(int *)(param_3 + 4 + (longlong)auVar39._0_4_);
      iVar127 = *(int *)(param_3 + 4 + (longlong)auVar39._4_4_);
      auVar83._4_4_ = iVar127;
      auVar83._0_4_ = iVar98;
      iVar128 = *(int *)(param_3 + 4 + (longlong)auVar39._8_4_);
      iVar130 = *(int *)(param_3 + 4 + (longlong)iVar29);
      auVar83._12_4_ = iVar130;
      auVar83._8_4_ = iVar128;
      auVar105._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar98);
      auVar105._4_4_ = -(uint)(_UNK_150631da4 < iVar127);
      auVar105._8_4_ = -(uint)(_UNK_150631da8 < iVar128);
      auVar105._12_4_ = -(uint)(_UNK_150631dac < iVar130);
      uVar21 = movmskps(iVar29,auVar105);
      if ((uVar21 ^ 0xf) == 0) {
        auVar103 = unaff_XMM12;
        if (0.0 < param_7) goto LAB_140b15345;
LAB_140b153b1:
        auVar212 = ZEXT816(0);
        auVar154 = blendvps(local_248,auVar212,auVar103);
        auVar146 = blendvps(_local_208,auVar212,auVar103);
LAB_140b153cd:
        unaff_XMM15 = blendvps(unaff_XMM15,auVar212,auVar103);
      }
      else {
        auVar154._0_4_ = local_248._0_4_ & auVar105._0_4_;
        auVar154._4_4_ = local_248._4_4_ & auVar105._4_4_;
        auVar154._8_4_ = local_248._8_4_ & auVar105._8_4_;
        auVar154._12_4_ = local_248._12_4_ & auVar105._12_4_;
        auVar146._0_4_ = local_208._0_4_ & auVar105._0_4_;
        auVar146._4_4_ = local_208._4_4_ & auVar105._4_4_;
        auVar146._8_4_ = local_208._8_4_ & auVar105._8_4_;
        auVar146._12_4_ = local_208._12_4_ & auVar105._12_4_;
        auVar207._0_4_ = unaff_XMM15._0_4_ & auVar105._0_4_;
        auVar207._4_4_ = unaff_XMM15._4_4_ & auVar105._4_4_;
        auVar207._8_4_ = unaff_XMM15._8_4_ & auVar105._8_4_;
        auVar207._12_4_ = unaff_XMM15._12_4_ & auVar105._12_4_;
        unaff_XMM15 = auVar207;
        if ((char)(uVar21 ^ 0xf) != '\x0f') {
          auVar195._0_4_ = -(uint)(iVar98 < ___xmm_00000002000000020000000200000002);
          auVar195._4_4_ = -(uint)(iVar127 < _UNK_15066df64);
          auVar195._8_4_ = -(uint)(iVar128 < _UNK_15066df68);
          auVar195._12_4_ = -(uint)(iVar130 < _UNK_15066df6c);
          auVar103 = auVar195 ^ unaff_XMM12;
          _local_208 = auVar146;
          local_248 = auVar154;
          if (param_7 <= 0.0) goto LAB_140b153b1;
LAB_140b15345:
          auVar83._0_4_ = iVar98 + unaff_XMM12._0_4_;
          auVar83._4_4_ = iVar127 + unaff_XMM12._4_4_;
          auVar83._8_4_ = iVar128 + unaff_XMM12._8_4_;
          auVar83._12_4_ = iVar130 + unaff_XMM12._12_4_;
          if (__real_3f800000 <= param_7) {
            auVar154 = blendvps(local_248,auVar83,auVar103);
            auVar146 = blendvps(_local_208,auVar83,auVar103);
            auVar212 = ZEXT816(0);
          }
          else {
            auVar134._0_4_ = (float)auVar83._0_4_ * param_7;
            auVar134._4_4_ = (float)auVar83._4_4_ * param_7;
            auVar134._8_4_ = (float)auVar83._8_4_ * param_7;
            auVar134._12_4_ = (float)auVar83._12_4_ * param_7;
            auVar146 = roundps(unaff_XMM6,auVar134,9);
            iVar98 = (int)auVar146._0_4_;
            iVar127 = (int)auVar146._4_4_;
            iVar128 = (int)auVar146._8_4_;
            iVar130 = (int)auVar146._12_4_;
            auVar102._0_4_ =
                 (uint)(auVar83._0_4_ < iVar98) * auVar83._0_4_ |
                 (uint)(auVar83._0_4_ >= iVar98) * iVar98;
            auVar102._4_4_ =
                 (uint)(auVar83._4_4_ < iVar127) * auVar83._4_4_ |
                 (uint)(auVar83._4_4_ >= iVar127) * iVar127;
            auVar102._8_4_ =
                 (uint)(auVar83._8_4_ < iVar128) * auVar83._8_4_ |
                 (uint)(auVar83._8_4_ >= iVar128) * iVar128;
            auVar102._12_4_ =
                 (uint)(auVar83._12_4_ < iVar130) * auVar83._12_4_ |
                 (uint)(auVar83._12_4_ >= iVar130) * iVar130;
            auVar154 = blendvps(local_248,auVar102,auVar103);
            auVar212 = ZEXT816(0);
            if (param_8 != '\x01') {
              auVar212._4_4_ = auVar134._4_4_ - auVar146._4_4_;
              auVar212._0_4_ = auVar134._0_4_ - auVar146._0_4_;
              auVar212._8_4_ = auVar134._8_4_ - auVar146._8_4_;
              auVar212._12_4_ = auVar134._12_4_ - auVar146._12_4_;
            }
            iVar98 = auVar154._0_4_ - unaff_XMM12._0_4_;
            iVar127 = auVar154._4_4_ - unaff_XMM12._4_4_;
            iVar128 = auVar154._8_4_ - unaff_XMM12._8_4_;
            iVar130 = auVar154._12_4_ - unaff_XMM12._12_4_;
            auVar135._0_4_ =
                 (uint)(auVar83._0_4_ < iVar98) * auVar83._0_4_ |
                 (uint)(auVar83._0_4_ >= iVar98) * iVar98;
            auVar135._4_4_ =
                 (uint)(auVar83._4_4_ < iVar127) * auVar83._4_4_ |
                 (uint)(auVar83._4_4_ >= iVar127) * iVar127;
            auVar135._8_4_ =
                 (uint)(auVar83._8_4_ < iVar128) * auVar83._8_4_ |
                 (uint)(auVar83._8_4_ >= iVar128) * iVar128;
            auVar135._12_4_ =
                 (uint)(auVar83._12_4_ < iVar130) * auVar83._12_4_ |
                 (uint)(auVar83._12_4_ >= iVar130) * iVar130;
            auVar146 = blendvps(_local_208,auVar135,auVar103);
          }
          goto LAB_140b153cd;
        }
      }
      iVar98 = *(int *)(param_3 + auVar39._0_4_);
      lVar31 = (longlong)iVar98;
      iVar127 = *(int *)(param_3 + auVar39._4_4_);
      lVar33 = (longlong)iVar127;
      iVar128 = *(int *)(param_3 + auVar39._8_4_);
      lVar26 = (longlong)iVar128;
      iVar130 = *(int *)(param_3 + iVar29);
      lVar35 = (longlong)iVar130;
      auVar131._4_4_ = iVar127;
      auVar131._0_4_ = iVar98;
      auVar131._12_4_ = iVar130;
      auVar131._8_4_ = iVar128;
      auVar40._4_4_ = iVar130;
      auVar40._0_4_ = iVar128;
      auVar40._8_8_ = 0;
      auVar83 = pmovsxdq(auVar83,auVar40);
      unaff_XMM9 = pmovsxdq(unaff_XMM9,auVar131);
      auVar68._0_8_ = CONCAT44(auVar105._4_4_ & uVar20,auVar105._0_4_ & uVar20);
      auVar68._8_4_ = auVar105._8_4_ & uVar20;
      auVar68._12_4_ = auVar105._12_4_ & uVar20;
      auVar133 = ZEXT816(0);
      auVar41._8_4_ = auVar68._8_4_;
      auVar41._0_8_ = auVar68._0_8_;
      auVar41._12_4_ = auVar68._12_4_;
      auVar103 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar41);
      auVar39 = pmovsxdq(auVar41,auVar103);
      auVar104._8_8_ = auVar103._8_8_;
      auVar104._0_8_ = auVar104._8_8_;
      auVar103 = pmovsxdq(auVar68,auVar104);
      auVar11._4_4_ = iVar19;
      auVar11._0_4_ = iVar19;
      auVar11._8_4_ = iVar19;
      auVar11._12_4_ = iVar19;
      auVar105 = pmulld(auVar154,auVar11);
      auVar207 = pmovsxdq(unaff_XMM12,auVar105);
      auVar106._8_4_ = auVar105._8_4_;
      auVar106._12_4_ = auVar105._12_4_;
      auVar106._0_8_ = auVar105._8_8_;
      auVar105 = pmovsxdq(unaff_XMM10,auVar106);
      lVar184 = unaff_XMM9._0_8_;
      lVar194 = unaff_XMM9._8_8_;
      lVar81 = auVar83._0_8_;
      lVar97 = auVar83._8_8_;
      lVar99 = auVar207._0_8_;
      lVar129 = auVar207._8_8_;
      lVar132 = auVar105._0_8_;
      lVar145 = auVar105._8_8_;
      lVar67 = auVar103._0_8_;
      lVar80 = auVar103._8_8_;
      lVar37 = auVar39._0_8_;
      lVar66 = auVar39._8_8_;
      if (param_9 < 2) {
        lVar132 = lVar67 + lVar81 + lVar132;
        lVar145 = lVar80 + lVar97 + lVar145;
        auVar106._0_8_ = lVar37 + lVar184 + lVar99;
        auVar106._8_8_ = lVar66 + lVar194 + lVar129;
        auVar105 = insertps(ZEXT416(*(uint *)(param_5 + auVar106._0_8_)),
                            *(undefined4 *)(param_5 + auVar106._8_8_),0x10);
        auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + lVar132),0x20);
        auVar173 = insertps(auVar105,*(undefined4 *)(param_5 + lVar145),0x30);
        auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 4 + auVar106._0_8_)),
                            *(undefined4 *)(param_5 + 4 + auVar106._8_8_),0x10);
        auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar132),0x20);
        unaff_XMM6 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar145),0x30);
        auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 8 + auVar106._0_8_)),
                            *(undefined4 *)(param_5 + 8 + auVar106._8_8_),0x10);
        auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 8 + lVar132),0x20);
        auVar133 = insertps(auVar105,*(undefined4 *)(param_5 + 8 + lVar145),0x30);
      }
      else if (param_9 == 2) {
        lVar132 = lVar67 + lVar81 + lVar132;
        lVar145 = lVar80 + lVar97 + lVar145;
        lVar99 = lVar37 + lVar184 + lVar99;
        lVar129 = lVar66 + lVar194 + lVar129;
        auVar107._2_2_ = *(undefined2 *)(param_5 + lVar129);
        auVar107._0_2_ = *(undefined2 *)(param_5 + lVar99);
        auVar107._4_2_ = *(undefined2 *)(param_5 + lVar132);
        auVar107._6_2_ = *(undefined2 *)(param_5 + lVar145);
        auVar107._8_8_ = 0;
        auVar137._2_2_ = *(undefined2 *)(param_5 + 2 + lVar129);
        auVar137._0_2_ = *(undefined2 *)(param_5 + 2 + lVar99);
        auVar137._4_2_ = *(undefined2 *)(param_5 + 2 + lVar132);
        auVar137._6_2_ = *(undefined2 *)(param_5 + 2 + lVar145);
        auVar137._8_8_ = 0;
        auVar155._2_2_ = *(undefined2 *)(param_5 + 4 + lVar129);
        auVar155._0_2_ = *(undefined2 *)(param_5 + 4 + lVar99);
        auVar155._4_2_ = *(undefined2 *)(param_5 + 4 + lVar132);
        auVar155._6_2_ = *(undefined2 *)(param_5 + 4 + lVar145);
        auVar155._8_8_ = 0;
        auVar105 = pmovzxwd(auVar107,auVar107);
        auVar108._0_4_ = auVar105._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar108._4_4_ = auVar105._4_4_ + _UNK_151c6b8e4;
        auVar108._8_4_ = auVar105._8_4_ + _UNK_151c6b8e8;
        auVar108._12_4_ = auVar105._12_4_ + _UNK_151c6b8ec;
        auVar176._0_4_ = (float)auVar108._0_4_;
        auVar176._4_4_ = (float)auVar108._4_4_;
        auVar176._8_4_ = (float)auVar108._8_4_;
        auVar176._12_4_ = (float)auVar108._12_4_;
        auVar207 = divps(auVar176,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar105 = pmovzxwd(auVar108,auVar137);
        auVar109._0_4_ = auVar105._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
        auVar109._4_4_ = auVar105._4_4_ + _UNK_151c6b8e4;
        auVar109._8_4_ = auVar105._8_4_ + _UNK_151c6b8e8;
        auVar109._12_4_ = auVar105._12_4_ + _UNK_151c6b8ec;
        auVar148._0_4_ = (float)auVar109._0_4_;
        auVar148._4_4_ = (float)auVar109._4_4_;
        auVar148._8_4_ = (float)auVar109._8_4_;
        auVar148._12_4_ = (float)auVar109._12_4_;
        auVar83 = divps(auVar148,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar105 = pmovzxwd(auVar109,auVar155);
        auVar138._0_4_ = (float)(auVar105._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
        auVar138._4_4_ = (float)(auVar105._4_4_ + _UNK_151c6b8e4);
        auVar138._8_4_ = (float)(auVar105._8_4_ + _UNK_151c6b8e8);
        auVar138._12_4_ = (float)(auVar105._12_4_ + _UNK_151c6b8ec);
        auVar105 = divps(auVar138,___xmm_46fffe0046fffe0046fffe0046fffe00);
        auVar106._4_4_ = (int)_UNK_151c6be64;
        auVar106._0_4_ = (int)___xmm_43000000430000004300000043000000;
        auVar106._8_4_ = (int)_UNK_151c6be68;
        auVar106._12_4_ = (int)_UNK_151c6be6c;
        auVar173._0_4_ = auVar207._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar173._4_4_ = auVar207._4_4_ * _UNK_151c6be64;
        auVar173._8_4_ = auVar207._8_4_ * _UNK_151c6be68;
        auVar173._12_4_ = auVar207._12_4_ * _UNK_151c6be6c;
        unaff_XMM6._0_4_ = auVar83._0_4_ * ___xmm_43000000430000004300000043000000;
        unaff_XMM6._4_4_ = auVar83._4_4_ * _UNK_151c6be64;
        unaff_XMM6._8_4_ = auVar83._8_4_ * _UNK_151c6be68;
        unaff_XMM6._12_4_ = auVar83._12_4_ * _UNK_151c6be6c;
        auVar133._0_4_ = auVar105._0_4_ * ___xmm_43000000430000004300000043000000;
        auVar133._4_4_ = auVar105._4_4_ * _UNK_151c6be64;
        auVar133._8_4_ = auVar105._8_4_ * _UNK_151c6be68;
        auVar133._12_4_ = auVar105._12_4_ * _UNK_151c6be6c;
      }
      else {
        unaff_XMM6 = ZEXT816(0);
        auVar173 = ZEXT816(0);
        if (param_9 == 3) {
          uVar21 = *(uint *)(param_5 + lVar37 + lVar184 + lVar99);
          uVar4 = *(uint *)(param_5 + lVar66 + lVar194 + lVar129);
          uVar5 = *(uint *)(param_5 + lVar67 + lVar81 + lVar132);
          uVar6 = *(uint *)(param_5 + lVar80 + lVar97 + lVar145);
          auVar105 = insertps(ZEXT416(*(uint *)(param_5 + lVar31)),*(undefined4 *)(param_5 + lVar33)
                              ,0x10);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + lVar26),0x20);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + lVar35),0x30);
          auVar83 = insertps(ZEXT416(*(uint *)(param_5 + 0xc + lVar31)),
                             *(undefined4 *)(param_5 + 0xc + lVar33),0x10);
          auVar83 = insertps(auVar83,*(undefined4 *)(param_5 + 0xc + lVar26),0x20);
          auVar83 = insertps(auVar83,*(undefined4 *)(param_5 + 0xc + lVar35),0x30);
          auVar195 = insertps(ZEXT416(*(uint *)(param_5 + 0x10 + lVar31)),
                              *(undefined4 *)(param_5 + 0x10 + lVar33),0x10);
          auVar175._0_4_ =
               (float)(int)((uVar21 & ___xmm_000003ff000003ff000003ff000003ff) +
                           ___xmm_fffffe01fffffe01fffffe01fffffe01);
          auVar175._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
          auVar175._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
          auVar175._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
          auVar207 = divps(auVar175,___xmm_43ff800043ff800043ff800043ff8000);
          auVar195 = insertps(auVar195,*(undefined4 *)(param_5 + 0x10 + lVar26),0x20);
          auVar173._0_4_ = auVar207._0_4_ * auVar83._0_4_ + auVar105._0_4_;
          auVar173._4_4_ = auVar207._4_4_ * auVar83._4_4_ + auVar105._4_4_;
          auVar173._8_4_ = auVar207._8_4_ * auVar83._8_4_ + auVar105._8_4_;
          auVar173._12_4_ = auVar207._12_4_ * auVar83._12_4_ + auVar105._12_4_;
          auVar195 = insertps(auVar195,*(undefined4 *)(param_5 + 0x10 + lVar35),0x30);
          auVar147._0_4_ =
               (float)(int)((uVar21 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                           ___xmm_fffffc01fffffc01fffffc01fffffc01);
          auVar147._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
          auVar147._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
          auVar147._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
          auVar83 = divps(auVar147,___xmm_447fc000447fc000447fc000447fc000);
          auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar31)),
                              *(undefined4 *)(param_5 + 4 + lVar33),0x10);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar26),0x20);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 4 + lVar35),0x30);
          auVar207 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar31)),
                              *(undefined4 *)(param_5 + 8 + lVar33),0x10);
          auVar207 = insertps(auVar207,*(undefined4 *)(param_5 + 8 + lVar26),0x20);
          unaff_XMM6._0_4_ = auVar83._0_4_ * auVar195._0_4_ + auVar105._0_4_;
          unaff_XMM6._4_4_ = auVar83._4_4_ * auVar195._4_4_ + auVar105._4_4_;
          unaff_XMM6._8_4_ = auVar83._8_4_ * auVar195._8_4_ + auVar105._8_4_;
          unaff_XMM6._12_4_ = auVar83._12_4_ * auVar195._12_4_ + auVar105._12_4_;
          auVar105 = insertps(ZEXT416(*(uint *)(param_5 + 0x14 + lVar31)),
                              *(undefined4 *)(param_5 + 0x14 + lVar33),0x10);
          auVar105 = insertps(auVar105,*(undefined4 *)(param_5 + 0x14 + lVar26),0x20);
          auVar195 = insertps(auVar105,*(undefined4 *)(param_5 + 0x14 + lVar35),0x30);
          auVar106._0_4_ = (uVar21 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01;
          auVar106._4_4_ = (uVar4 >> 0x15) + _UNK_151c6b864;
          auVar106._8_4_ = (uVar5 >> 0x15) + _UNK_151c6b868;
          auVar106._12_4_ = (uVar6 >> 0x15) + _UNK_151c6b86c;
          auVar136._0_4_ = (float)auVar106._0_4_;
          auVar136._4_4_ = (float)auVar106._4_4_;
          auVar136._8_4_ = (float)auVar106._8_4_;
          auVar136._12_4_ = (float)auVar106._12_4_;
          auVar105 = divps(auVar136,___xmm_447fc000447fc000447fc000447fc000);
          auVar83 = insertps(auVar207,*(undefined4 *)(param_5 + 8 + lVar35),0x30);
          auVar133._0_4_ = auVar105._0_4_ * auVar195._0_4_ + auVar83._0_4_;
          auVar133._4_4_ = auVar105._4_4_ * auVar195._4_4_ + auVar83._4_4_;
          auVar133._8_4_ = auVar105._8_4_ * auVar195._8_4_ + auVar83._8_4_;
          auVar133._12_4_ = auVar105._12_4_ * auVar195._12_4_ + auVar83._12_4_;
        }
      }
      unaff_XMM10._0_4_ = -(uint)(auVar154._0_4_ == auVar146._0_4_);
      unaff_XMM10._4_4_ = -(uint)(auVar154._4_4_ == auVar146._4_4_);
      unaff_XMM10._8_4_ = -(uint)(auVar154._8_4_ == auVar146._8_4_);
      unaff_XMM10._12_4_ = -(uint)(auVar154._12_4_ == auVar146._12_4_);
      uVar21 = movmskps(iVar128,unaff_XMM10);
      if ((uVar21 ^ 0xf) == 0) {
        unaff_XMM12._8_4_ = 0xffffffff;
        unaff_XMM12._0_8_ = 0xffffffffffffffff;
        unaff_XMM12._12_4_ = 0xffffffff;
      }
      else {
        bVar25 = (char)((char)(uVar21 ^ 0xf) << 4) >> 4;
        if (param_9 < 7) {
          auVar83 = unaff_XMM10 ^ ___xmm_ffffffffffffffffffffffffffffffff;
          auVar12._4_4_ = iVar19;
          auVar12._0_4_ = iVar19;
          auVar12._8_4_ = iVar19;
          auVar12._12_4_ = iVar19;
          auVar207 = pmulld(auVar146,auVar12);
          auVar105 = pmovsxdq(auVar106,auVar207);
          auVar208._8_4_ = auVar207._8_4_;
          auVar208._12_4_ = auVar207._12_4_;
          auVar208._0_8_ = auVar207._8_8_;
          auVar207 = pmovsxdq(auVar208,auVar208);
          lVar26 = auVar105._0_8_;
          lVar31 = auVar105._8_8_;
          lVar33 = auVar207._0_8_;
          lVar35 = auVar207._8_8_;
          uVar171 = auVar83._8_4_;
          uVar172 = auVar83._12_4_;
          switch(param_9) {
          case 0:
          case 1:
            auVar209._0_8_ = lVar33 + lVar81 + lVar67;
            auVar209._8_8_ = lVar35 + lVar97 + lVar80;
            auVar110._0_8_ = lVar26 + lVar184 + lVar37;
            auVar110._8_8_ = lVar31 + lVar194 + lVar66;
            auVar39 = pmovsxdq(auVar103,auVar83);
            auVar83 = blendvps((undefined1  [16])0x0,auVar110,auVar39);
            auVar84._4_4_ = uVar171;
            auVar84._0_4_ = uVar171;
            auVar84._8_4_ = uVar172;
            auVar84._12_4_ = uVar172;
            auVar103 = blendvps(ZEXT816(0),auVar209,auVar84);
            lVar26 = param_5 + auVar83._0_8_;
            lVar31 = param_5 + auVar83._8_8_;
            lVar33 = param_5 + auVar103._0_8_;
            lVar35 = param_5 + auVar103._8_8_;
            auVar195 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar39);
            auVar207 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar84);
            auVar105 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,
                                auVar39);
            auVar39 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar84
                              );
            if ((bVar25 & 1) != 0) {
              unaff_XMM11 = pblendw(unaff_XMM11,ZEXT416(*(uint *)(param_5 + auVar83._0_8_)),3);
              unaff_XMM13 = pblendw(unaff_XMM13,ZEXT416(*(uint *)(auVar195._0_8_ + lVar26)),3);
              unaff_XMM14 = pblendw(unaff_XMM14,ZEXT416(*(uint *)(auVar105._0_8_ + lVar26)),3);
            }
            unaff_XMM12._8_4_ = 0xffffffff;
            unaff_XMM12._0_8_ = 0xffffffffffffffff;
            unaff_XMM12._12_4_ = 0xffffffff;
            if ((bVar25 & 2) != 0) {
              unaff_XMM11 = insertps(unaff_XMM11,*(undefined4 *)(param_5 + auVar83._8_8_),0x10);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar195._8_8_ + lVar31),0x10);
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar105._8_8_ + lVar31),0x10);
            }
            if ((bVar25 & 4) != 0) {
              unaff_XMM11 = insertps(unaff_XMM11,*(undefined4 *)(param_5 + auVar103._0_8_),0x20);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar207._0_8_ + lVar33),0x20);
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar39._0_8_ + lVar33),0x20);
            }
            if ((char)bVar25 < '\0') {
              unaff_XMM11 = insertps(unaff_XMM11,*(undefined4 *)(param_5 + auVar103._8_8_),0x30);
              unaff_XMM13 = insertps(unaff_XMM13,*(undefined4 *)(auVar207._8_8_ + lVar35),0x30);
              unaff_XMM14 = insertps(unaff_XMM14,*(undefined4 *)(auVar39._8_8_ + lVar35),0x30);
            }
            break;
          case 2:
            auVar210._0_8_ = lVar33 + lVar81 + lVar67;
            auVar210._8_8_ = lVar35 + lVar97 + lVar80;
            auVar111._0_8_ = lVar26 + lVar184 + lVar37;
            auVar111._8_8_ = lVar31 + lVar194 + lVar66;
            auVar39 = pmovsxdq(auVar103,auVar83);
            auVar83 = blendvps(ZEXT816(0),auVar111,auVar39);
            auVar85._4_4_ = uVar171;
            auVar85._0_4_ = uVar171;
            auVar85._8_4_ = uVar172;
            auVar85._12_4_ = uVar172;
            auVar105 = blendvps(ZEXT816(0),auVar210,auVar85);
            lVar26 = param_5 + auVar83._0_8_;
            lVar31 = param_5 + auVar83._8_8_;
            lVar33 = param_5 + auVar105._0_8_;
            lVar35 = param_5 + auVar105._8_8_;
            auVar207 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,
                                auVar39);
            auVar195 = blendvps((undefined1  [16])0x0,___xmm_00000000000000020000000000000002,
                                auVar85);
            auVar212 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar39);
            auVar103 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,
                                auVar85);
            auVar42._0_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar83._0_8_) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar42._4_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar83._8_8_) + _UNK_151c6b8e4);
            auVar42._8_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar105._0_8_) + _UNK_151c6b8e8);
            auVar42._12_4_ =
                 (float)(int)((uint)*(ushort *)(param_5 + auVar105._8_8_) + _UNK_151c6b8ec);
            auVar39 = divps(auVar42,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar43._0_8_ =
                 CONCAT44(auVar39._4_4_ * _UNK_151c6be64,
                          auVar39._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar43._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
            auVar43._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
            bVar36 = (bVar25 & 1) != 0;
            auVar112 = unaff_XMM11;
            if (bVar36) {
              auVar112._8_4_ = auVar43._8_4_;
              auVar112._0_8_ = auVar43._0_8_;
              auVar112._12_4_ = auVar43._12_4_;
            }
            auVar69._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar207._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar69._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar207._8_8_ + lVar31) + _UNK_151c6b8e4);
            auVar69._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar195._0_8_ + lVar33) + _UNK_151c6b8e8);
            auVar69._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar195._8_8_ + lVar35) + _UNK_151c6b8ec);
            auVar39 = divps(auVar69,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar86._0_4_ =
                 (float)(int)((uint)*(ushort *)(auVar212._0_8_ + lVar26) +
                             ___xmm_ffff8001ffff8001ffff8001ffff8001);
            auVar86._4_4_ =
                 (float)(int)((uint)*(ushort *)(auVar212._8_8_ + lVar31) + _UNK_151c6b8e4);
            auVar86._8_4_ =
                 (float)(int)((uint)*(ushort *)(auVar103._0_8_ + lVar33) + _UNK_151c6b8e8);
            auVar86._12_4_ =
                 (float)(int)((uint)*(ushort *)(auVar103._8_8_ + lVar35) + _UNK_151c6b8ec);
            auVar103 = divps(auVar86,___xmm_46fffe0046fffe0046fffe0046fffe00);
            auVar70._0_8_ =
                 CONCAT44(auVar39._4_4_ * _UNK_151c6be64,
                          auVar39._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar70._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
            auVar70._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
            auVar87._0_8_ =
                 CONCAT44(auVar103._4_4_ * _UNK_151c6be64,
                          auVar103._0_4_ * ___xmm_43000000430000004300000043000000);
            auVar87._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
            auVar87._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
            unaff_XMM12._8_4_ = 0xffffffff;
            unaff_XMM12._0_8_ = 0xffffffffffffffff;
            unaff_XMM12._12_4_ = 0xffffffff;
            auVar156 = unaff_XMM14;
            auVar196 = unaff_XMM13;
            if (bVar36) {
              auVar196._8_4_ = auVar70._8_4_;
              auVar196._0_8_ = auVar70._0_8_;
              auVar196._12_4_ = auVar70._12_4_;
              auVar156._8_4_ = auVar87._8_4_;
              auVar156._0_8_ = auVar87._0_8_;
              auVar156._12_4_ = auVar87._12_4_;
            }
            auVar39 = blendps(unaff_XMM11,auVar112,1);
            bVar36 = (bVar25 & 2) == 0;
            auVar185 = auVar39;
            if (!bVar36) {
              auVar185._8_4_ = auVar43._8_4_;
              auVar185._0_8_ = auVar43._0_8_;
              auVar185._12_4_ = auVar43._12_4_;
            }
            auVar103 = blendps(unaff_XMM13,auVar196,1);
            if (bVar36) {
              auVar217 = blendps(unaff_XMM14,auVar156,1);
              auVar39 = blendps(auVar39,auVar185,2);
              auVar113 = auVar103;
              auVar105 = auVar217;
              if ((bVar25 & 4) != 0) goto LAB_140b15d2a;
LAB_140b15d90:
              auVar214 = blendps(auVar103,auVar113,2);
              auVar216 = blendps(auVar105,auVar217,2);
              auVar39 = blendps(auVar39,auVar39,4);
              auVar103 = auVar214;
              auVar105 = auVar216;
              if (-1 < (char)bVar25) goto LAB_140b15db9;
LAB_140b15d57:
              auVar103 = blendps(auVar103,auVar214,4);
              if (-1 < (char)bVar25) goto LAB_140b15d60;
LAB_140b15dc6:
              auVar105 = blendps(auVar105,auVar216,4);
            }
            else {
              auVar113._8_4_ = auVar70._8_4_;
              auVar113._0_8_ = auVar70._0_8_;
              auVar113._12_4_ = auVar70._12_4_;
              auVar105 = blendps(unaff_XMM14,auVar156,1);
              auVar217._8_4_ = auVar87._8_4_;
              auVar217._0_8_ = auVar87._0_8_;
              auVar217._12_4_ = auVar87._12_4_;
              auVar39 = blendps(auVar39,auVar185,2);
              if ((bVar25 & 4) == 0) goto LAB_140b15d90;
LAB_140b15d2a:
              auVar186._8_4_ = auVar43._8_4_;
              auVar186._0_8_ = auVar43._0_8_;
              auVar186._12_4_ = auVar43._12_4_;
              auVar103 = blendps(auVar103,auVar113,2);
              auVar214._8_4_ = auVar70._8_4_;
              auVar214._0_8_ = auVar70._0_8_;
              auVar214._12_4_ = auVar70._12_4_;
              auVar105 = blendps(auVar105,auVar217,2);
              auVar216._8_4_ = auVar87._8_4_;
              auVar216._0_8_ = auVar87._0_8_;
              auVar216._12_4_ = auVar87._12_4_;
              auVar39 = blendps(auVar39,auVar186,4);
              if ((char)bVar25 < '\0') goto LAB_140b15d57;
LAB_140b15db9:
              auVar43 = auVar39;
              auVar103 = blendps(auVar103,auVar214,4);
              auVar39 = auVar43;
              if ((char)bVar25 < '\0') goto LAB_140b15dc6;
LAB_140b15d60:
              auVar105 = blendps(auVar105,auVar216,4);
              auVar70 = auVar103;
            }
            if (-1 < (char)bVar25) {
              auVar87 = auVar105;
            }
            unaff_XMM11 = blendps(auVar39,auVar43,8);
            unaff_XMM13 = blendps(auVar103,auVar70,8);
            unaff_XMM14 = blendps(auVar105,auVar87,8);
            break;
          case 3:
            auVar131 = ~unaff_XMM10 & auVar131;
            lVar99 = param_5 + auVar131._0_4_;
            lVar129 = param_5 + auVar131._4_4_;
            auVar211._0_8_ = lVar33 + lVar81 + lVar67;
            auVar211._8_8_ = lVar35 + lVar97 + lVar80;
            auVar114._0_8_ = lVar26 + lVar184 + lVar37;
            auVar114._8_8_ = lVar31 + lVar194 + lVar66;
            auVar39 = pmovsxdq(auVar39,auVar83);
            auVar39 = blendvps((undefined1  [16])0x0,auVar114,auVar39);
            auVar44._4_4_ = uVar171;
            auVar44._0_4_ = uVar171;
            auVar44._8_4_ = uVar172;
            auVar44._12_4_ = uVar172;
            auVar103 = blendvps((undefined1  [16])0x0,auVar211,auVar44);
            lVar26 = param_5 + auVar131._8_4_;
            uVar21 = *(uint *)(param_5 + auVar39._0_8_);
            uVar4 = *(uint *)(param_5 + auVar39._8_8_);
            uVar5 = *(uint *)(param_5 + auVar103._0_8_);
            uVar6 = *(uint *)(param_5 + auVar103._8_8_);
            auVar39 = insertps(ZEXT416(*(uint *)(param_5 + auVar131._0_4_)),
                               *(undefined4 *)(param_5 + auVar131._4_4_),0x10);
            auVar39 = insertps(auVar39,*(undefined4 *)(param_5 + auVar131._8_4_),0x20);
            auVar103 = insertps(auVar39,*(undefined4 *)(param_5 + auVar131._12_4_),0x30);
            auVar39 = ~unaff_XMM10 & ___xmm_0000000c0000000c0000000c0000000c;
            auVar105 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            lVar31 = param_5 + auVar131._12_4_;
            auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar45._0_4_ =
                 (float)(int)((uVar21 & ___xmm_000003ff000003ff000003ff000003ff) +
                             ___xmm_fffffe01fffffe01fffffe01fffffe01);
            auVar45._4_4_ = (float)(int)((uVar4 & _UNK_151c6bc64) + _UNK_151c6b8b4);
            auVar45._8_4_ = (float)(int)((uVar5 & _UNK_151c6bc68) + _UNK_151c6b8b8);
            auVar45._12_4_ = (float)(int)((uVar6 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
            auVar39 = divps(auVar45,___xmm_43ff800043ff800043ff800043ff8000);
            auVar46._0_8_ =
                 CONCAT44(auVar39._4_4_ * auVar105._4_4_ + auVar103._4_4_,
                          auVar39._0_4_ * auVar105._0_4_ + auVar103._0_4_);
            auVar46._8_4_ = auVar39._8_4_ * auVar105._8_4_ + auVar103._8_4_;
            auVar46._12_4_ = auVar39._12_4_ * auVar105._12_4_ + auVar103._12_4_;
            bVar36 = (bVar25 & 1) != 0;
            auVar88 = unaff_XMM11;
            if (bVar36) {
              auVar88._8_4_ = auVar46._8_4_;
              auVar88._0_8_ = auVar46._0_8_;
              auVar88._12_4_ = auVar46._12_4_;
            }
            auVar39 = ~unaff_XMM10 & ___xmm_00000004000000040000000400000004;
            auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            auVar207 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar39 = ~unaff_XMM10 & ___xmm_00000008000000080000000800000008;
            auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            auVar83 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar39 = ~unaff_XMM10 & ___xmm_00000010000000100000001000000010;
            auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar39._0_4_ + lVar99)),
                                *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar129),0x10);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26),0x20);
            auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31),0x30);
            auVar105 = ~unaff_XMM10 & ___xmm_00000014000000140000001400000014;
            auVar39 = insertps(ZEXT416(*(uint *)((ulonglong)auVar105._0_4_ + lVar99)),
                               *(undefined4 *)((ulonglong)auVar105._4_4_ + lVar129),0x10);
            auVar39 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar105._8_4_ + lVar26),0x20);
            auVar105 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar105._12_4_ + lVar31),0x30);
            auVar71._0_4_ =
                 (float)(int)((uVar21 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                             ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar71._4_4_ = (float)(int)((uVar4 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
            auVar71._8_4_ = (float)(int)((uVar5 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
            auVar71._12_4_ = (float)(int)((uVar6 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
            auVar39 = divps(auVar71,___xmm_447fc000447fc000447fc000447fc000);
            auVar72._0_8_ =
                 CONCAT44(auVar39._4_4_ * auVar103._4_4_ + auVar207._4_4_,
                          auVar39._0_4_ * auVar103._0_4_ + auVar207._0_4_);
            auVar72._8_4_ = auVar39._8_4_ * auVar103._8_4_ + auVar207._8_4_;
            auVar72._12_4_ = auVar39._12_4_ * auVar103._12_4_ + auVar207._12_4_;
            auVar187._0_4_ =
                 (float)(int)((uVar21 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
            auVar187._4_4_ = (float)(int)((uVar4 >> 0x15) + _UNK_151c6b864);
            auVar187._8_4_ = (float)(int)((uVar5 >> 0x15) + _UNK_151c6b868);
            auVar187._12_4_ = (float)(int)((uVar6 >> 0x15) + _UNK_151c6b86c);
            auVar39 = divps(auVar187,___xmm_447fc000447fc000447fc000447fc000);
            auVar188._0_8_ =
                 CONCAT44(auVar39._4_4_ * auVar105._4_4_ + auVar83._4_4_,
                          auVar39._0_4_ * auVar105._0_4_ + auVar83._0_4_);
            auVar188._8_4_ = auVar39._8_4_ * auVar105._8_4_ + auVar83._8_4_;
            auVar188._12_4_ = auVar39._12_4_ * auVar105._12_4_ + auVar83._12_4_;
            unaff_XMM12._8_4_ = 0xffffffff;
            unaff_XMM12._0_8_ = 0xffffffffffffffff;
            unaff_XMM12._12_4_ = 0xffffffff;
            auVar115 = unaff_XMM14;
            auVar197 = unaff_XMM13;
            if (bVar36) {
              auVar197._8_4_ = auVar72._8_4_;
              auVar197._0_8_ = auVar72._0_8_;
              auVar197._12_4_ = auVar72._12_4_;
              auVar115._8_4_ = auVar188._8_4_;
              auVar115._0_8_ = auVar188._0_8_;
              auVar115._12_4_ = auVar188._12_4_;
            }
            auVar39 = blendps(unaff_XMM11,auVar88,1);
            bVar36 = (bVar25 & 2) == 0;
            auVar157 = auVar39;
            if (!bVar36) {
              auVar157._8_4_ = auVar46._8_4_;
              auVar157._0_8_ = auVar46._0_8_;
              auVar157._12_4_ = auVar46._12_4_;
            }
            auVar103 = blendps(unaff_XMM13,auVar197,1);
            if (bVar36) {
              auVar219 = blendps(unaff_XMM14,auVar115,1);
              auVar39 = blendps(auVar39,auVar157,2);
              auVar89 = auVar103;
              auVar105 = auVar219;
              if ((bVar25 & 4) != 0) goto LAB_140b1610b;
LAB_140b16172:
              auVar215 = blendps(auVar103,auVar89,2);
              auVar218 = blendps(auVar105,auVar219,2);
              auVar39 = blendps(auVar39,auVar39,4);
              auVar103 = auVar215;
              auVar105 = auVar218;
              if (-1 < (char)bVar25) goto LAB_140b1619b;
LAB_140b16138:
              auVar103 = blendps(auVar103,auVar215,4);
              if (-1 < (char)bVar25) goto LAB_140b16141;
LAB_140b161a8:
              auVar105 = blendps(auVar105,auVar218,4);
            }
            else {
              auVar89._8_4_ = auVar72._8_4_;
              auVar89._0_8_ = auVar72._0_8_;
              auVar89._12_4_ = auVar72._12_4_;
              auVar105 = blendps(unaff_XMM14,auVar115,1);
              auVar219._8_4_ = auVar188._8_4_;
              auVar219._0_8_ = auVar188._0_8_;
              auVar219._12_4_ = auVar188._12_4_;
              auVar39 = blendps(auVar39,auVar157,2);
              if ((bVar25 & 4) == 0) goto LAB_140b16172;
LAB_140b1610b:
              auVar158._8_4_ = auVar46._8_4_;
              auVar158._0_8_ = auVar46._0_8_;
              auVar158._12_4_ = auVar46._12_4_;
              auVar103 = blendps(auVar103,auVar89,2);
              auVar215._8_4_ = auVar72._8_4_;
              auVar215._0_8_ = auVar72._0_8_;
              auVar215._12_4_ = auVar72._12_4_;
              auVar105 = blendps(auVar105,auVar219,2);
              auVar218._8_4_ = auVar188._8_4_;
              auVar218._0_8_ = auVar188._0_8_;
              auVar218._12_4_ = auVar188._12_4_;
              auVar39 = blendps(auVar39,auVar158,4);
              if ((char)bVar25 < '\0') goto LAB_140b16138;
LAB_140b1619b:
              auVar46 = auVar39;
              auVar103 = blendps(auVar103,auVar215,4);
              auVar39 = auVar46;
              if ((char)bVar25 < '\0') goto LAB_140b161a8;
LAB_140b16141:
              auVar105 = blendps(auVar105,auVar218,4);
              auVar72 = auVar103;
            }
            if (-1 < (char)bVar25) {
              auVar188 = auVar105;
            }
            unaff_XMM11 = blendps(auVar39,auVar46,8);
            unaff_XMM13 = blendps(auVar103,auVar72,8);
            unaff_XMM14 = blendps(auVar105,auVar188,8);
            break;
          default:
            goto switchD_140b1581a_caseD_4;
          }
        }
        else {
switchD_140b1581a_caseD_4:
          bVar36 = (bVar25 & 1) != 0;
          if (bVar36) {
            unaff_XMM11 = blendps(unaff_XMM11,ZEXT816(0),1);
            unaff_XMM13 = blendps(unaff_XMM13,ZEXT816(0),1);
          }
          unaff_XMM12._8_4_ = 0xffffffff;
          unaff_XMM12._0_8_ = 0xffffffffffffffff;
          unaff_XMM12._12_4_ = 0xffffffff;
          auVar39 = ZEXT816(0);
          if (bVar36) {
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,1);
          }
          if ((bVar25 & 2) != 0) {
            unaff_XMM11 = blendps(unaff_XMM11,auVar39,2);
            unaff_XMM13 = blendps(unaff_XMM13,auVar39,2);
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,2);
          }
          if ((bVar25 & 4) != 0) {
            unaff_XMM11 = blendps(unaff_XMM11,auVar39,4);
            unaff_XMM13 = blendps(unaff_XMM13,auVar39,4);
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,4);
          }
          if ((char)bVar25 < '\0') {
            unaff_XMM11 = blendps(unaff_XMM11,auVar39,8);
            unaff_XMM13 = blendps(unaff_XMM13,auVar39,8);
            unaff_XMM14 = blendps(unaff_XMM14,auVar39,8);
          }
        }
        fVar152 = unaff_XMM15._0_4_;
        fVar183 = unaff_XMM15._4_4_;
        fVar228 = unaff_XMM15._8_4_;
        fVar229 = unaff_XMM15._12_4_;
        auVar47._0_8_ =
             CONCAT44((unaff_XMM11._4_4_ - auVar173._4_4_) * fVar183 + auVar173._4_4_,
                      (unaff_XMM11._0_4_ - auVar173._0_4_) * fVar152 + auVar173._0_4_);
        auVar47._8_4_ = (unaff_XMM11._8_4_ - auVar173._8_4_) * fVar228 + auVar173._8_4_;
        auVar47._12_4_ = (unaff_XMM11._12_4_ - auVar173._12_4_) * fVar229 + auVar173._12_4_;
        bVar36 = (bVar25 & 1) == 0;
        auVar116 = auVar173;
        if (!bVar36) {
          auVar116._8_4_ = auVar47._8_4_;
          auVar116._0_8_ = auVar47._0_8_;
          auVar116._12_4_ = auVar47._12_4_;
        }
        auVar73._0_8_ =
             CONCAT44((unaff_XMM13._4_4_ - unaff_XMM6._4_4_) * fVar183 + unaff_XMM6._4_4_,
                      (unaff_XMM13._0_4_ - unaff_XMM6._0_4_) * fVar152 + unaff_XMM6._0_4_);
        auVar73._8_4_ = (unaff_XMM13._8_4_ - unaff_XMM6._8_4_) * fVar228 + unaff_XMM6._8_4_;
        auVar73._12_4_ = (unaff_XMM13._12_4_ - unaff_XMM6._12_4_) * fVar229 + unaff_XMM6._12_4_;
        auVar90._0_8_ =
             CONCAT44((unaff_XMM14._4_4_ - auVar133._4_4_) * fVar183 + auVar133._4_4_,
                      (unaff_XMM14._0_4_ - auVar133._0_4_) * fVar152 + auVar133._0_4_);
        auVar90._8_4_ = (unaff_XMM14._8_4_ - auVar133._8_4_) * fVar228 + auVar133._8_4_;
        auVar90._12_4_ = (unaff_XMM14._12_4_ - auVar133._12_4_) * fVar229 + auVar133._12_4_;
        if (bVar36) {
          auVar39 = blendps(auVar173,auVar116,1);
          auVar159 = auVar133;
          unaff_XMM10 = unaff_XMM6;
          if ((bVar25 & 2) != 0) goto LAB_140b162d5;
LAB_140b16232:
          auVar149 = blendps(unaff_XMM6,unaff_XMM10,1);
          auVar105 = blendps(auVar133,auVar159,1);
          unaff_XMM9 = blendps(auVar39,auVar39,2);
          auVar103 = auVar149;
          auVar161 = auVar105;
          if ((bVar25 & 4) != 0) goto LAB_140b16269;
LAB_140b16310:
          auVar150 = blendps(auVar103,auVar149,2);
          auVar105 = blendps(auVar105,auVar161,2);
          auVar39 = blendps(unaff_XMM9,unaff_XMM9,4);
          auVar103 = auVar150;
          auVar160 = auVar105;
          if (-1 < (char)bVar25) goto LAB_140b16341;
LAB_140b1629e:
          auVar103 = blendps(auVar103,auVar150,4);
          if (-1 < (char)bVar25) goto LAB_140b162aa;
LAB_140b16351:
          auVar105 = blendps(auVar105,auVar160,4);
        }
        else {
          unaff_XMM10._8_4_ = (int)auVar73._8_4_;
          unaff_XMM10._0_8_ = auVar73._0_8_;
          unaff_XMM10._12_4_ = (int)auVar73._12_4_;
          auVar159._8_4_ = auVar90._8_4_;
          auVar159._0_8_ = auVar90._0_8_;
          auVar159._12_4_ = auVar90._12_4_;
          auVar39 = blendps(auVar173,auVar116,1);
          if ((bVar25 & 2) == 0) goto LAB_140b16232;
LAB_140b162d5:
          auVar190._8_4_ = auVar47._8_4_;
          auVar190._0_8_ = auVar47._0_8_;
          auVar190._12_4_ = auVar47._12_4_;
          auVar103 = blendps(unaff_XMM6,unaff_XMM10,1);
          auVar149._8_4_ = auVar73._8_4_;
          auVar149._0_8_ = auVar73._0_8_;
          auVar149._12_4_ = auVar73._12_4_;
          auVar105 = blendps(auVar133,auVar159,1);
          auVar161._8_4_ = auVar90._8_4_;
          auVar161._0_8_ = auVar90._0_8_;
          auVar161._12_4_ = auVar90._12_4_;
          unaff_XMM9 = blendps(auVar39,auVar190,2);
          if ((bVar25 & 4) == 0) goto LAB_140b16310;
LAB_140b16269:
          auVar189._8_4_ = auVar47._8_4_;
          auVar189._0_8_ = auVar47._0_8_;
          auVar189._12_4_ = auVar47._12_4_;
          auVar103 = blendps(auVar103,auVar149,2);
          auVar150._8_4_ = auVar73._8_4_;
          auVar150._0_8_ = auVar73._0_8_;
          auVar150._12_4_ = auVar73._12_4_;
          auVar105 = blendps(auVar105,auVar161,2);
          auVar160._8_4_ = auVar90._8_4_;
          auVar160._0_8_ = auVar90._0_8_;
          auVar160._12_4_ = auVar90._12_4_;
          auVar39 = blendps(unaff_XMM9,auVar189,4);
          unaff_XMM9 = auVar189;
          if ((char)bVar25 < '\0') goto LAB_140b1629e;
LAB_140b16341:
          auVar47 = auVar39;
          auVar103 = blendps(auVar103,auVar150,4);
          auVar39 = auVar47;
          if ((char)bVar25 < '\0') goto LAB_140b16351;
LAB_140b162aa:
          auVar105 = blendps(auVar105,auVar160,4);
          auVar73 = auVar103;
        }
        if (-1 < (char)bVar25) {
          auVar90 = auVar105;
        }
        auVar173 = blendps(auVar39,auVar47,8);
        unaff_XMM6 = blendps(auVar103,auVar73,8);
        auVar133 = blendps(auVar105,auVar90,8);
      }
      auVar82._0_8_ = auVar173._0_8_;
      fVar183 = auVar173._12_4_;
      auVar82._8_4_ = auVar173._4_4_;
      auVar82._12_4_ = unaff_XMM6._4_4_;
      auVar101._0_8_ = CONCAT44(unaff_XMM6._8_4_,auVar173._8_4_);
      auVar101._8_4_ = fVar183;
      fVar152 = unaff_XMM6._12_4_;
      auVar101._12_4_ = fVar152;
      auVar153._4_4_ = unaff_XMM6._0_4_;
      auVar153._0_4_ = auVar173._0_4_;
      auVar153._8_4_ = auVar173._4_4_;
      auVar153._12_4_ = unaff_XMM6._4_4_;
      local_128 = insertps(auVar153,auVar133,0x28);
      local_118 = auVar82._8_8_;
      uStack_110 = (ulonglong)auVar133._4_4_;
      auVar38._8_4_ = fVar183;
      auVar38._0_8_ = auVar101._0_8_;
      auVar38._12_4_ = fVar152;
      local_108 = insertps(auVar38,auVar133,0xa8);
      local_f8._8_4_ = auVar133._12_4_;
      local_f8._0_8_ = auVar101._8_8_;
      local_f8._12_4_ = 0;
      auVar39 = insertps(auVar173,unaff_XMM6,0x1c);
      auVar39 = insertps(auVar39,auVar133,0x20);
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)iVar8 * 0x60);
      *pdVar2 = (double)auVar39._0_4_;
      pdVar2[1] = (double)auVar39._4_4_;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)iVar8 * 0x60);
      *pdVar2 = (double)auVar39._8_4_;
      pdVar2[1] = (double)auVar39._12_4_;
      auVar39 = insertps(unaff_XMM6,auVar173,0x4c);
      auVar39 = insertps(auVar39,auVar133,0x60);
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)iVar9 * 0x60);
      *pdVar2 = (double)auVar39._0_4_;
      pdVar2[1] = (double)auVar39._4_4_;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)iVar9 * 0x60);
      *pdVar2 = (double)auVar39._8_4_;
      pdVar2[1] = (double)auVar39._12_4_;
      local_228 = (int)uVar13;
      auVar174._8_8_ = 0;
      auVar174._0_8_ = auVar173._8_8_;
      auVar39 = insertps(auVar174,unaff_XMM6,0x94);
      auVar39 = blendps(auVar39,auVar133,4);
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar39._0_4_;
      pdVar2[1] = (double)auVar39._4_4_;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)local_228 * 0x60);
      *pdVar2 = (double)auVar39._8_4_;
      pdVar2[1] = (double)auVar39._12_4_;
      pdVar2 = (double *)(param_1 + 0x40 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)fVar183;
      pdVar2[1] = (double)fVar152;
      pdVar2 = (double *)(param_1 + 0x50 + (longlong)iVar10 * 0x60);
      *pdVar2 = (double)auVar133._12_4_;
      pdVar2[1] = 0.0;
      uVar34 = uVar34 + 0x20;
      uVar28 = uVar28 + 4;
      local_248 = auVar154;
      _local_208 = auVar146;
    } while ((int)uVar28 < (int)(uVar23 & 0xfffffffc));
  }
  if ((int)param_10 <= (int)uVar28) {
    return;
  }
  auVar151._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar28) < (int)param_10);
  auVar151._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar28) < (int)param_10);
  auVar151._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar28) < (int)param_10);
  auVar151._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar28) < (int)param_10);
  auVar48._0_4_ = uVar28 << 3;
  auVar48._4_4_ = uVar28 << 3;
  auVar48._8_4_ = uVar28 << 3;
  auVar48._12_4_ = uVar28 << 3;
  auVar48 = auVar48 & auVar151;
  auVar105 = ___xmm_00000018000000100000000800000000 & auVar151;
  lVar33 = auVar48._4_4_ + param_2;
  lVar26 = auVar48._8_4_ + param_2;
  lVar31 = auVar48._12_4_ + param_2;
  uVar171 = *(undefined4 *)(param_2 + auVar48._0_4_);
  uVar172 = *(undefined4 *)((ulonglong)auVar105._4_4_ + lVar33);
  uVar7 = *(undefined4 *)((ulonglong)auVar105._8_4_ + lVar26);
  auVar39 = ___xmm_0000001c000000140000000c00000004 & auVar151;
  auVar49._4_4_ = *(undefined4 *)((ulonglong)auVar39._4_4_ + lVar33);
  auVar49._0_4_ = *(undefined4 *)((ulonglong)auVar39._0_4_ + param_2 + auVar48._0_4_);
  auVar49._12_4_ = *(undefined4 *)((ulonglong)auVar39._12_4_ + lVar31);
  auVar49._8_4_ = *(undefined4 *)((ulonglong)auVar39._8_4_ + lVar26);
  auVar74._0_4_ = param_4 << 2;
  auVar74._4_4_ = param_4 << 2;
  auVar74._8_4_ = param_4 << 2;
  auVar74._12_4_ = param_4 << 2;
  auVar39 = pmulld(auVar74,auVar49);
  auVar39 = auVar39 & auVar151;
  lVar26 = param_3 + auVar39._0_4_;
  uVar30 = *(undefined4 *)(param_3 + auVar39._8_4_);
  uVar22 = *(undefined4 *)(param_3 + auVar39._12_4_);
  auVar191._4_4_ = *(undefined4 *)(param_3 + auVar39._4_4_);
  auVar191._0_4_ = *(undefined4 *)(param_3 + auVar39._0_4_);
  auVar191._12_4_ = uVar22;
  auVar191._8_4_ = uVar30;
  auVar103 = ___xmm_00000004000000040000000400000004 & auVar151;
  uVar24 = (ulonglong)auVar103._4_4_;
  iVar98 = *(int *)((ulonglong)auVar103._0_4_ + lVar26);
  iVar127 = *(int *)(uVar24 + param_3 + auVar39._4_4_);
  auVar140._4_4_ = iVar127;
  auVar140._0_4_ = iVar98;
  iVar128 = *(int *)((ulonglong)auVar103._8_4_ + param_3 + auVar39._8_4_);
  iVar130 = *(int *)((ulonglong)auVar103._12_4_ + param_3 + auVar39._12_4_);
  auVar140._12_4_ = iVar130;
  auVar140._8_4_ = iVar128;
  auVar83 = (undefined1  [16])0x0;
  auVar162._4_4_ = uVar22;
  auVar162._0_4_ = uVar30;
  auVar162._8_8_ = 0;
  auVar91._0_4_ = -(uint)(___xmm_00000001000000010000000100000001 < iVar98);
  auVar91._4_4_ = -(uint)(_UNK_150631da4 < iVar127);
  auVar91._8_4_ = -(uint)(_UNK_150631da8 < iVar128);
  auVar91._12_4_ = -(uint)(_UNK_150631dac < iVar130);
  iVar29 = movmskps(uVar30,~auVar91 & auVar151);
  auVar39 = ZEXT816(0);
  if ((iVar29 == 0) ||
     (uVar30 = movmskps((int)lVar26,auVar151), auVar39 = ~auVar91 & auVar151,
     (char)uVar30 != (char)iVar29)) {
    uVar23 = auVar39._0_4_ ^ 0xffffffff;
    uVar100 = auVar39._0_8_ ^ 0xffffffffffffffff;
    uVar28 = auVar39._8_4_ ^ 0xffffffff;
    uVar20 = auVar39._12_4_ ^ 0xffffffff;
    auVar177 = ZEXT816(0);
    auVar39 = ZEXT816(0);
    if (0.0 < param_7) {
      auVar139._0_4_ = iVar98 + -1;
      auVar139._4_4_ = iVar127 + -1;
      auVar139._8_4_ = iVar128 + -1;
      auVar139._12_4_ = iVar130 + -1;
      uVar34 = (uint)(uVar100 >> 0x20);
      if (__real_3f800000 <= param_7) {
        auVar52._0_4_ = uVar23 & auVar151._0_4_;
        auVar52._4_4_ = uVar34 & auVar151._4_4_;
        auVar52._8_4_ = uVar28 & auVar151._8_4_;
        auVar52._12_4_ = uVar20 & auVar151._12_4_;
        auVar83 = blendvps((undefined1  [16])0x0,auVar139,auVar52);
        auVar39 = auVar83;
      }
      else {
        auVar205._4_4_ = param_7;
        auVar205._0_4_ = param_7;
        auVar205._8_4_ = param_7;
        auVar205._12_4_ = param_7;
        auVar198._0_4_ = (float)auVar139._0_4_ * param_7;
        auVar198._4_4_ = (float)auVar139._4_4_ * param_7;
        auVar198._8_4_ = (float)auVar139._8_4_ * param_7;
        auVar198._12_4_ = (float)auVar139._12_4_ * param_7;
        auVar51._0_4_ = uVar23 & auVar151._0_4_;
        auVar51._4_4_ = uVar34 & auVar151._4_4_;
        auVar51._8_4_ = uVar28 & auVar151._8_4_;
        auVar51._12_4_ = uVar20 & auVar151._12_4_;
        auVar39 = roundps(auVar205,auVar198,9);
        iVar98 = (int)auVar39._0_4_;
        iVar127 = (int)auVar39._4_4_;
        iVar128 = (int)auVar39._8_4_;
        iVar130 = (int)auVar39._12_4_;
        auVar178._0_4_ =
             (uint)(auVar139._0_4_ < iVar98) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar98) * iVar98;
        auVar178._4_4_ =
             (uint)(auVar139._4_4_ < iVar127) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar127) * iVar127;
        auVar178._8_4_ =
             (uint)(auVar139._8_4_ < iVar128) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar128) * iVar128;
        auVar178._12_4_ =
             (uint)(auVar139._12_4_ < iVar130) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar130) * iVar130;
        auVar83 = blendvps((undefined1  [16])0x0,auVar178,auVar51);
        auVar177 = ZEXT816(0);
        if (param_8 != '\x01') {
          auVar177._4_4_ = auVar198._4_4_ - auVar39._4_4_;
          auVar177._0_4_ = auVar198._0_4_ - auVar39._0_4_;
          auVar177._8_4_ = auVar198._8_4_ - auVar39._8_4_;
          auVar177._12_4_ = auVar198._12_4_ - auVar39._12_4_;
        }
        unaff_XMM10._8_4_ = 0xffffffff;
        unaff_XMM10._0_8_ = 0xffffffffffffffff;
        unaff_XMM10._12_4_ = 0xffffffff;
        iVar98 = auVar83._0_4_ + 1;
        iVar127 = auVar83._4_4_ + 1;
        iVar128 = auVar83._8_4_ + 1;
        iVar130 = auVar83._12_4_ + 1;
        auVar206._0_4_ =
             (uint)(auVar139._0_4_ < iVar98) * auVar139._0_4_ |
             (uint)(auVar139._0_4_ >= iVar98) * iVar98;
        auVar206._4_4_ =
             (uint)(auVar139._4_4_ < iVar127) * auVar139._4_4_ |
             (uint)(auVar139._4_4_ >= iVar127) * iVar127;
        auVar206._8_4_ =
             (uint)(auVar139._8_4_ < iVar128) * auVar139._8_4_ |
             (uint)(auVar139._8_4_ >= iVar128) * iVar128;
        auVar206._12_4_ =
             (uint)(auVar139._12_4_ < iVar130) * auVar139._12_4_ |
             (uint)(auVar139._12_4_ >= iVar130) * iVar130;
        auVar39 = blendvps(ZEXT816(0),auVar206,auVar51);
      }
    }
    auVar50._8_4_ = uVar28;
    auVar50._0_8_ = uVar100;
    auVar50._12_4_ = uVar20;
    auVar140 = blendvps((undefined1  [16])0x0,auVar177,auVar50);
    _local_208 = auVar140;
  }
  else {
    auVar50 = ZEXT816(0);
    auVar39 = ZEXT816(0);
    _local_208 = auVar50;
  }
  uVar30 = *(undefined4 *)((ulonglong)auVar105._12_4_ + lVar31);
  auVar105 = pmovsxdq(auVar50,auVar162);
  iVar98 = -(uint)(param_9 == 3);
  auVar53._4_4_ = iVar98;
  auVar53._0_4_ = iVar98;
  auVar53._8_4_ = iVar98;
  auVar53._12_4_ = iVar98;
  auVar146 = blendvps(ZEXT816(0),___xmm_00000018000000180000001800000018,auVar91 & auVar53);
  auVar212 = pmovsxdq(unaff_XMM12,auVar191);
  auVar163 = (undefined1  [16])0x0;
  auVar195 = pmovsxdq(auVar140,auVar146);
  auVar117._8_8_ = auVar146._8_8_;
  auVar117._0_8_ = auVar117._8_8_;
  auVar146 = pmovsxdq(auVar91 & auVar53,auVar117);
  auVar224._4_4_ = iVar19;
  auVar224._0_4_ = iVar19;
  auVar224._8_4_ = iVar19;
  auVar224._12_4_ = iVar19;
  auVar207 = pmulld(auVar83,auVar224);
  auVar154 = pmovsxdq(auVar146,auVar207);
  auVar92._8_4_ = auVar207._8_4_;
  auVar92._12_4_ = auVar207._12_4_;
  auVar92._0_8_ = auVar207._8_8_;
  auVar199 = pmovsxdq(unaff_XMM10,auVar92);
  lVar67 = auVar212._0_8_;
  lVar80 = auVar212._8_8_;
  lVar37 = auVar199._0_8_;
  lVar66 = auVar199._8_8_;
  lVar26 = auVar154._0_8_;
  lVar31 = auVar154._8_8_;
  lVar33 = auVar195._0_8_;
  lVar35 = auVar195._8_8_;
  local_248._0_8_ = auVar146._0_8_;
  local_248._8_8_ = auVar146._8_8_;
  local_268 = auVar105._0_8_;
  lStack_260 = auVar105._8_8_;
  if (param_9 < 2) {
    auVar165._0_8_ = local_248._0_8_ + local_268 + lVar37;
    auVar165._8_8_ = local_248._8_8_ + lStack_260 + lVar66;
    auVar121._0_8_ = lVar33 + lVar67 + lVar26;
    auVar121._8_8_ = lVar35 + lVar80 + lVar31;
    auVar92 = pmovsxdq(auVar92,auVar151);
    auVar105 = blendvps(ZEXT816(0),auVar121,auVar92);
    auVar122._4_4_ = auVar151._8_4_;
    auVar122._0_4_ = auVar151._8_4_;
    auVar122._8_4_ = auVar151._12_4_;
    auVar122._12_4_ = auVar151._12_4_;
    auVar146 = blendvps(ZEXT816(0),auVar165,auVar122);
    lVar26 = param_5 + auVar105._0_8_;
    lVar31 = param_5 + auVar105._8_8_;
    lVar37 = param_5 + auVar146._0_8_;
    auVar103 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar92);
    auVar154 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar122);
    uVar24 = param_5 + auVar146._8_8_;
    auVar207 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar92);
    auVar199 = blendvps((undefined1  [16])0x0,___xmm_00000000000000080000000000000008,auVar122);
    uVar23 = movmskps(iVar29,auVar151);
    auVar181 = ZEXT416(*(uint *)(param_5 + auVar105._0_8_));
    if ((uVar23 & 2) == 0) {
      auVar118 = ZEXT416(*(uint *)(auVar103._0_8_ + lVar26));
      auVar163 = ZEXT416(*(uint *)(auVar207._0_8_ + lVar26));
    }
    else {
      auVar181 = insertps(auVar181,*(undefined4 *)(param_5 + auVar105._8_8_),0x10);
      auVar118 = insertps(ZEXT416(*(uint *)(auVar103._0_8_ + lVar26)),
                          *(undefined4 *)(auVar103._8_8_ + lVar31),0x10);
      auVar163 = insertps(ZEXT416(*(uint *)(auVar207._0_8_ + lVar26)),
                          *(undefined4 *)(auVar207._8_8_ + lVar31),0x10);
    }
    if ((uVar23 & 4) != 0) {
      auVar181 = insertps(auVar181,*(undefined4 *)(param_5 + auVar146._0_8_),0x20);
      auVar118 = insertps(auVar118,*(undefined4 *)(auVar154._0_8_ + lVar37),0x20);
      auVar163 = insertps(auVar163,*(undefined4 *)(auVar199._0_8_ + lVar37),0x20);
    }
    if ((char)((char)uVar23 << 4) >> 4 < '\0') {
      auVar181 = insertps(auVar181,*(undefined4 *)(param_5 + auVar146._8_8_),0x30);
      auVar118 = insertps(auVar118,*(undefined4 *)(auVar154._8_8_ + uVar24),0x30);
      auVar163 = insertps(auVar163,*(undefined4 *)(auVar199._8_8_ + uVar24),0x30);
    }
  }
  else if (param_9 == 2) {
    auVar123._0_8_ = lVar33 + lVar67 + lVar26;
    auVar123._8_8_ = lVar35 + lVar80 + lVar31;
    auVar103 = pmovsxdq(auVar92,auVar151);
    auVar146 = blendvps(ZEXT816(0),auVar123,auVar103);
    auVar166._0_8_ = local_248._0_8_ + local_268 + lVar37;
    auVar166._8_8_ = local_248._8_8_ + lStack_260 + lVar66;
    auVar124._4_4_ = auVar151._8_4_;
    auVar124._0_4_ = auVar151._8_4_;
    auVar124._8_4_ = auVar151._12_4_;
    auVar124._12_4_ = auVar151._12_4_;
    auVar154 = blendvps((undefined1  [16])0x0,auVar166,auVar124);
    lVar26 = param_5 + auVar146._0_8_;
    lVar31 = param_5 + auVar146._8_8_;
    lVar37 = param_5 + auVar154._0_8_;
    uVar24 = auVar154._8_8_;
    auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar103);
    auVar207 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar124);
    auVar167._2_2_ = *(undefined2 *)(auVar105._8_8_ + lVar31);
    auVar167._0_2_ = *(undefined2 *)(auVar105._0_8_ + lVar26);
    auVar167._4_2_ = *(undefined2 *)(auVar207._0_8_ + lVar37);
    auVar167._6_2_ = *(undefined2 *)(auVar207._8_8_ + param_5 + uVar24);
    auVar167._8_8_ = 0;
    auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar103);
    auVar103 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar124);
    auVar55._2_2_ = *(undefined2 *)(auVar105._8_8_ + lVar31);
    auVar55._0_2_ = *(undefined2 *)(auVar105._0_8_ + lVar26);
    auVar55._4_2_ = *(undefined2 *)(auVar103._0_8_ + lVar37);
    auVar55._6_2_ = *(undefined2 *)(auVar103._8_8_ + param_5 + uVar24);
    auVar55._8_8_ = 0;
    auVar103 = pmovzxwd(auVar103,auVar167);
    auVar125._0_4_ = (float)(auVar103._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar125._4_4_ = (float)(auVar103._4_4_ + _UNK_151c6b8e4);
    auVar125._8_4_ = (float)(auVar103._8_4_ + _UNK_151c6b8e8);
    auVar125._12_4_ = (float)(auVar103._12_4_ + _UNK_151c6b8ec);
    auVar105 = divps(auVar125,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar103 = pmovzxwd(auVar55,auVar55);
    auVar168._0_4_ = (float)(auVar103._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar168._4_4_ = (float)(auVar103._4_4_ + _UNK_151c6b8e4);
    auVar168._8_4_ = (float)(auVar103._8_4_ + _UNK_151c6b8e8);
    auVar168._12_4_ = (float)(auVar103._12_4_ + _UNK_151c6b8ec);
    auVar103 = divps(auVar168,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar118._0_4_ = auVar105._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar118._4_4_ = auVar105._4_4_ * _UNK_151c6be64;
    auVar118._8_4_ = auVar105._8_4_ * _UNK_151c6be68;
    auVar118._12_4_ = auVar105._12_4_ * _UNK_151c6be6c;
    auVar200._2_2_ = *(undefined2 *)(param_5 + auVar146._8_8_);
    auVar200._0_2_ = *(undefined2 *)(param_5 + auVar146._0_8_);
    auVar200._4_2_ = *(undefined2 *)(param_5 + auVar154._0_8_);
    auVar163._0_4_ = auVar103._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar163._4_4_ = auVar103._4_4_ * _UNK_151c6be64;
    auVar163._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
    auVar163._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
    auVar200._6_2_ = *(undefined2 *)(param_5 + uVar24);
    auVar200._8_8_ = 0;
    auVar103 = pmovzxwd(auVar200,auVar200);
    auVar199._0_4_ = auVar103._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001;
    auVar199._4_4_ = auVar103._4_4_ + _UNK_151c6b8e4;
    auVar199._8_4_ = auVar103._8_4_ + _UNK_151c6b8e8;
    auVar199._12_4_ = auVar103._12_4_ + _UNK_151c6b8ec;
    auVar180._0_4_ = (float)auVar199._0_4_;
    auVar180._4_4_ = (float)auVar199._4_4_;
    auVar180._8_4_ = (float)auVar199._8_4_;
    auVar180._12_4_ = (float)auVar199._12_4_;
    auVar103 = divps(auVar180,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar181._0_4_ = auVar103._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar181._4_4_ = auVar103._4_4_ * _UNK_151c6be64;
    auVar181._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
    auVar181._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
    auVar92 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  }
  else {
    auVar118 = (undefined1  [16])0x0;
    auVar181 = ZEXT816(0);
    if (param_9 == 3) {
      auVar105 = auVar151 & auVar191;
      lVar81 = param_5 + auVar105._0_4_;
      lVar97 = param_5 + auVar105._4_4_;
      lVar99 = param_5 + auVar105._8_4_;
      lVar129 = param_5 + auVar105._12_4_;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)(uVar24 + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar207 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar103 = ___xmm_00000008000000080000000800000008 & auVar151;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)((ulonglong)auVar103._4_4_ + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar92 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar103 = ___xmm_00000010000000100000001000000010 & auVar151;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)((ulonglong)auVar103._4_4_ + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar103 = ___xmm_00000014000000140000001400000014 & auVar151;
      auVar195 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + lVar81)),
                          *(undefined4 *)((ulonglong)auVar103._4_4_ + lVar97),0x10);
      auVar195 = insertps(auVar195,*(undefined4 *)((ulonglong)auVar103._8_4_ + lVar99),0x20);
      auVar195 = insertps(auVar195,*(undefined4 *)((ulonglong)auVar103._12_4_ + lVar129),0x30);
      auVar213._0_8_ = local_248._0_8_ + local_268 + lVar37;
      auVar213._8_8_ = local_248._8_8_ + lStack_260 + lVar66;
      auVar119._0_8_ = lVar33 + lVar67 + lVar26;
      auVar119._8_8_ = lVar35 + lVar80 + lVar31;
      auVar103 = pmovsxdq(auVar154,auVar151);
      auVar154 = blendvps((undefined1  [16])0x0,auVar119,auVar103);
      auVar54._4_4_ = auVar151._8_4_;
      auVar54._0_4_ = auVar151._8_4_;
      auVar54._8_4_ = auVar151._12_4_;
      auVar54._12_4_ = auVar151._12_4_;
      auVar103 = blendvps((undefined1  [16])0x0,auVar213,auVar54);
      uVar23 = *(uint *)(param_5 + auVar154._0_8_);
      uVar28 = *(uint *)(param_5 + auVar154._8_8_);
      uVar20 = *(uint *)(param_5 + auVar103._0_8_);
      uVar34 = *(uint *)(param_5 + auVar103._8_8_);
      auVar120._0_4_ =
           (float)(int)((uVar23 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar120._4_4_ = (float)(int)((uVar28 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar120._8_4_ = (float)(int)((uVar20 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar120._12_4_ = (float)(int)((uVar34 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar103 = divps(auVar120,___xmm_447fc000447fc000447fc000447fc000);
      auVar118._0_4_ = auVar103._0_4_ * auVar146._0_4_ + auVar207._0_4_;
      auVar118._4_4_ = auVar103._4_4_ * auVar146._4_4_ + auVar207._4_4_;
      auVar118._8_4_ = auVar103._8_4_ * auVar146._8_4_ + auVar207._8_4_;
      auVar118._12_4_ = auVar103._12_4_ * auVar146._12_4_ + auVar207._12_4_;
      auVar164._0_4_ = (float)(int)((uVar23 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar164._4_4_ = (float)(int)((uVar28 >> 0x15) + _UNK_151c6b864);
      auVar164._8_4_ = (float)(int)((uVar20 >> 0x15) + _UNK_151c6b868);
      auVar164._12_4_ = (float)(int)((uVar34 >> 0x15) + _UNK_151c6b86c);
      auVar103 = divps(auVar164,___xmm_447fc000447fc000447fc000447fc000);
      auVar146 = insertps(ZEXT416(*(uint *)(param_5 + auVar105._0_4_)),
                          *(undefined4 *)(param_5 + auVar105._4_4_),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)(param_5 + auVar105._8_4_),0x20);
      auVar199 = insertps(auVar146,*(undefined4 *)(param_5 + auVar105._12_4_),0x30);
      auVar105 = ___xmm_0000000c0000000c0000000c0000000c & auVar151;
      uVar24 = (ulonglong)auVar105._4_4_;
      auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar105._0_4_ + lVar81)),
                          *(undefined4 *)(uVar24 + lVar97),0x10);
      auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar105._8_4_ + lVar99),0x20);
      auVar105 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar105._12_4_ + lVar129),0x30);
      auVar163._0_4_ = auVar103._0_4_ * auVar195._0_4_ + auVar92._0_4_;
      auVar163._4_4_ = auVar103._4_4_ * auVar195._4_4_ + auVar92._4_4_;
      auVar163._8_4_ = auVar103._8_4_ * auVar195._8_4_ + auVar92._8_4_;
      auVar163._12_4_ = auVar103._12_4_ * auVar195._12_4_ + auVar92._12_4_;
      auVar179._0_4_ =
           (float)(int)((uVar23 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar179._4_4_ = (float)(int)((uVar28 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar179._8_4_ = (float)(int)((uVar20 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar179._12_4_ = (float)(int)((uVar34 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar103 = divps(auVar179,___xmm_43ff800043ff800043ff800043ff8000);
      auVar181._0_4_ = auVar103._0_4_ * auVar105._0_4_ + auVar199._0_4_;
      auVar181._4_4_ = auVar103._4_4_ * auVar105._4_4_ + auVar199._4_4_;
      auVar181._8_4_ = auVar103._8_4_ * auVar105._8_4_ + auVar199._8_4_;
      auVar181._12_4_ = auVar103._12_4_ * auVar105._12_4_ + auVar199._12_4_;
    }
  }
  auVar75._0_4_ = -(uint)(auVar83._0_4_ == auVar39._0_4_);
  auVar75._4_4_ = -(uint)(auVar83._4_4_ == auVar39._4_4_);
  auVar75._8_4_ = -(uint)(auVar83._8_4_ == auVar39._8_4_);
  auVar75._12_4_ = -(uint)(auVar83._12_4_ == auVar39._12_4_);
  auVar103 = ~auVar75 & auVar151;
  iVar19 = movmskps((int)uVar24,auVar103);
  if (iVar19 == 0) {
    uVar22 = 0;
    goto LAB_140b17493;
  }
  bVar25 = (char)((char)iVar19 << 4) >> 4;
  uVar22 = CONCAT31((int3)((uint)iVar19 >> 8),bVar25);
  auVar105 = pmulld(auVar224,auVar39);
  auVar39 = pmovsxdq(auVar199,auVar105);
  auVar56._0_8_ = auVar105._8_8_;
  auVar56._8_4_ = auVar105._8_4_;
  auVar56._12_4_ = auVar105._12_4_;
  auVar105 = pmovsxdq(auVar105,auVar56);
  uVar79 = auVar103._8_4_;
  auVar76._12_4_ = auVar103._12_4_;
  lVar26 = auVar39._0_8_;
  lVar31 = auVar39._8_8_;
  lVar37 = auVar105._0_8_;
  lVar66 = auVar105._8_8_;
  if (param_9 < 2) {
    auVar226._0_8_ = lVar37 + local_268 + local_248._0_8_;
    auVar226._8_8_ = lVar66 + lStack_260 + local_248._8_8_;
    auVar202._0_8_ = lVar26 + lVar67 + lVar33;
    auVar202._8_8_ = lVar31 + lVar80 + lVar35;
    auVar39 = pmovsxdq(auVar92,auVar103);
    auVar83 = blendvps(ZEXT816(0),auVar202,auVar39);
    auVar76._4_4_ = uVar79;
    auVar76._0_4_ = uVar79;
    auVar76._8_4_ = auVar76._12_4_;
    auVar103 = blendvps(ZEXT816(0),auVar226,auVar76);
    lVar26 = param_5 + auVar83._0_8_;
    lVar31 = param_5 + auVar83._8_8_;
    lVar33 = param_5 + auVar103._0_8_;
    auVar154 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar39);
    auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar76);
    lVar35 = param_5 + auVar103._8_8_;
    auVar146 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar39);
    auVar39 = blendvps(ZEXT816(0),___xmm_00000000000000080000000000000008,auVar76);
    auVar57 = ZEXT416(*(uint *)(param_5 + auVar83._0_8_));
    if ((bVar25 & 2) == 0) {
      auVar93 = ZEXT416(*(uint *)(auVar154._0_8_ + lVar26));
      auVar221 = ZEXT416(*(uint *)(auVar146._0_8_ + lVar26));
    }
    else {
      auVar57 = insertps(auVar57,*(undefined4 *)(param_5 + auVar83._8_8_),0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(auVar154._0_8_ + lVar26)),
                         *(undefined4 *)(auVar154._8_8_ + lVar31),0x10);
      auVar221 = insertps(ZEXT416(*(uint *)(auVar146._0_8_ + lVar26)),
                          *(undefined4 *)(auVar146._8_8_ + lVar31),0x10);
    }
    if ((bVar25 & 4) != 0) {
      auVar57 = insertps(auVar57,*(undefined4 *)(param_5 + auVar103._0_8_),0x20);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar105._0_8_ + lVar33),0x20);
      auVar221 = insertps(auVar221,*(undefined4 *)(auVar39._0_8_ + lVar33),0x20);
    }
    if ((char)bVar25 < '\0') {
      auVar57 = insertps(auVar57,*(undefined4 *)(param_5 + auVar103._8_8_),0x30);
      auVar93 = insertps(auVar93,*(undefined4 *)(auVar105._8_8_ + lVar35),0x30);
      auVar221 = insertps(auVar221,*(undefined4 *)(auVar39._8_8_ + lVar35),0x30);
    }
  }
  else if (param_9 == 2) {
    auVar203._0_8_ = lVar26 + lVar67 + lVar33;
    auVar203._8_8_ = lVar31 + lVar80 + lVar35;
    auVar39 = pmovsxdq(auVar92,auVar103);
    auVar105 = blendvps((undefined1  [16])0x0,auVar203,auVar39);
    auVar227._0_8_ = lVar37 + local_268 + local_248._0_8_;
    auVar227._8_8_ = lVar66 + lStack_260 + local_248._8_8_;
    auVar77._4_4_ = uVar79;
    auVar77._0_4_ = uVar79;
    auVar77._8_4_ = auVar76._12_4_;
    auVar77._12_4_ = auVar76._12_4_;
    auVar83 = blendvps(ZEXT816(0),auVar227,auVar77);
    lVar26 = param_5 + auVar105._0_8_;
    lVar31 = param_5 + auVar105._8_8_;
    lVar33 = param_5 + auVar83._0_8_;
    auVar103 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar39);
    auVar146 = blendvps(ZEXT816(0),___xmm_00000000000000020000000000000002,auVar77);
    auVar141._2_2_ = *(undefined2 *)(auVar103._8_8_ + lVar31);
    auVar141._0_2_ = *(undefined2 *)(auVar103._0_8_ + lVar26);
    auVar141._4_2_ = *(undefined2 *)(auVar146._0_8_ + lVar33);
    lVar35 = param_5 + auVar83._8_8_;
    auVar141._6_2_ = *(undefined2 *)(auVar146._8_8_ + lVar35);
    auVar141._8_8_ = 0;
    auVar103 = blendvps(ZEXT816(0),___xmm_00000000000000040000000000000004,auVar39);
    auVar39 = blendvps((undefined1  [16])0x0,___xmm_00000000000000040000000000000004,auVar77);
    auVar60._2_2_ = *(undefined2 *)(auVar103._8_8_ + lVar31);
    auVar60._0_2_ = *(undefined2 *)(auVar103._0_8_ + lVar26);
    auVar60._4_2_ = *(undefined2 *)(auVar39._0_8_ + lVar33);
    auVar60._6_2_ = *(undefined2 *)(auVar39._8_8_ + lVar35);
    auVar60._8_8_ = 0;
    auVar39 = pmovzxwd(auVar77,auVar141);
    auVar95._0_4_ = (float)(auVar39._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar95._4_4_ = (float)(auVar39._4_4_ + _UNK_151c6b8e4);
    auVar95._8_4_ = (float)(auVar39._8_4_ + _UNK_151c6b8e8);
    auVar95._12_4_ = (float)(auVar39._12_4_ + _UNK_151c6b8ec);
    auVar103 = divps(auVar95,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar39 = pmovzxwd(auVar60,auVar60);
    auVar222._0_4_ = (float)(auVar39._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar222._4_4_ = (float)(auVar39._4_4_ + _UNK_151c6b8e4);
    auVar222._8_4_ = (float)(auVar39._8_4_ + _UNK_151c6b8e8);
    auVar222._12_4_ = (float)(auVar39._12_4_ + _UNK_151c6b8ec);
    auVar39 = divps(auVar222,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar93._0_4_ = auVar103._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar93._4_4_ = auVar103._4_4_ * _UNK_151c6be64;
    auVar93._8_4_ = auVar103._8_4_ * _UNK_151c6be68;
    auVar93._12_4_ = auVar103._12_4_ * _UNK_151c6be6c;
    auVar61._2_2_ = *(undefined2 *)(param_5 + auVar105._8_8_);
    auVar61._0_2_ = *(undefined2 *)(param_5 + auVar105._0_8_);
    auVar61._4_2_ = *(undefined2 *)(param_5 + auVar83._0_8_);
    auVar221._0_4_ = auVar39._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar221._4_4_ = auVar39._4_4_ * _UNK_151c6be64;
    auVar221._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
    auVar221._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
    auVar61._6_2_ = *(undefined2 *)(param_5 + auVar83._8_8_);
    auVar61._8_8_ = 0;
    auVar39 = pmovzxwd(auVar61,auVar61);
    auVar62._0_4_ = (float)(auVar39._0_4_ + ___xmm_ffff8001ffff8001ffff8001ffff8001);
    auVar62._4_4_ = (float)(auVar39._4_4_ + _UNK_151c6b8e4);
    auVar62._8_4_ = (float)(auVar39._8_4_ + _UNK_151c6b8e8);
    auVar62._12_4_ = (float)(auVar39._12_4_ + _UNK_151c6b8ec);
    auVar39 = divps(auVar62,___xmm_46fffe0046fffe0046fffe0046fffe00);
    auVar57._0_4_ = auVar39._0_4_ * ___xmm_43000000430000004300000043000000;
    auVar57._4_4_ = auVar39._4_4_ * _UNK_151c6be64;
    auVar57._8_4_ = auVar39._8_4_ * _UNK_151c6be68;
    auVar57._12_4_ = auVar39._12_4_ * _UNK_151c6be6c;
  }
  else {
    auVar221 = ZEXT816(0);
    auVar93 = (undefined1  [16])0x0;
    auVar57 = (undefined1  [16])0x0;
    if (param_9 == 3) {
      auVar39 = blendvps((undefined1  [16])0x0,auVar191,auVar103);
      uVar13 = extractps(auVar39,0);
      lVar81 = param_5 + (int)uVar13;
      uVar14 = extractps(auVar39,1);
      lVar97 = param_5 + (int)uVar14;
      uVar15 = extractps(auVar39,2);
      lVar99 = param_5 + (int)uVar15;
      uVar16 = extractps(auVar39,3);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000004000000040000000400000004,auVar103);
      lVar129 = param_5 + (int)uVar16;
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar105 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000008000000080000000800000008,auVar103);
      auVar207 = insertps(auVar105,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar105 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000010000000100000001000000010,auVar103);
      auVar105 = insertps(auVar105,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar83 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar39 = blendvps(ZEXT816(0),___xmm_00000014000000140000001400000014,auVar103);
      auVar154 = insertps(auVar83,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      uVar17 = extractps(auVar39,0);
      uVar18 = extractps(auVar39,1);
      uVar27 = extractps(auVar39,2);
      uVar32 = extractps(auVar39,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar17 + lVar81)),
                         *(undefined4 *)((int)uVar18 + lVar97),0x10);
      auVar39 = insertps(auVar39,*(undefined4 *)((int)uVar27 + lVar99),0x20);
      auVar146 = insertps(auVar39,*(undefined4 *)((int)uVar32 + lVar129),0x30);
      auVar225._0_8_ = lVar37 + local_268 + local_248._0_8_;
      auVar225._8_8_ = lVar66 + lStack_260 + local_248._8_8_;
      auVar201._0_8_ = lVar26 + lVar67 + lVar33;
      auVar201._8_8_ = lVar31 + lVar80 + lVar35;
      auVar39 = pmovsxdq(auVar103,auVar103);
      auVar39 = blendvps(ZEXT816(0),auVar201,auVar39);
      auVar58._4_4_ = uVar79;
      auVar58._0_4_ = uVar79;
      auVar58._8_4_ = auVar76._12_4_;
      auVar58._12_4_ = auVar76._12_4_;
      auVar83 = blendvps(ZEXT816(0),auVar225,auVar58);
      uVar23 = *(uint *)(param_5 + auVar39._0_8_);
      uVar28 = *(uint *)(param_5 + auVar39._8_8_);
      uVar20 = *(uint *)(param_5 + auVar83._0_8_);
      uVar34 = *(uint *)(param_5 + auVar83._8_8_);
      auVar94._0_4_ =
           (float)(int)((uVar23 >> 10 & ___xmm_000007ff000007ff000007ff000007ff) +
                       ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar94._4_4_ = (float)(int)((uVar28 >> 10 & _UNK_151c6b8a4) + _UNK_151c6b864);
      auVar94._8_4_ = (float)(int)((uVar20 >> 10 & _UNK_151c6b8a8) + _UNK_151c6b868);
      auVar94._12_4_ = (float)(int)((uVar34 >> 10 & _UNK_151c6b8ac) + _UNK_151c6b86c);
      auVar39 = divps(auVar94,___xmm_447fc000447fc000447fc000447fc000);
      auVar93._0_4_ = auVar39._0_4_ * auVar154._0_4_ + auVar207._0_4_;
      auVar93._4_4_ = auVar39._4_4_ * auVar154._4_4_ + auVar207._4_4_;
      auVar93._8_4_ = auVar39._8_4_ * auVar154._8_4_ + auVar207._8_4_;
      auVar93._12_4_ = auVar39._12_4_ * auVar154._12_4_ + auVar207._12_4_;
      auVar220._0_4_ = (float)(int)((uVar23 >> 0x15) + ___xmm_fffffc01fffffc01fffffc01fffffc01);
      auVar220._4_4_ = (float)(int)((uVar28 >> 0x15) + _UNK_151c6b864);
      auVar220._8_4_ = (float)(int)((uVar20 >> 0x15) + _UNK_151c6b868);
      auVar220._12_4_ = (float)(int)((uVar34 >> 0x15) + _UNK_151c6b86c);
      auVar154 = divps(auVar220,___xmm_447fc000447fc000447fc000447fc000);
      auVar39 = insertps(ZEXT416(*(uint *)(param_5 + (int)uVar13)),
                         *(undefined4 *)(param_5 + (int)uVar14),0x10);
      auVar39 = insertps(auVar39,*(undefined4 *)(param_5 + (int)uVar15),0x20);
      auVar103 = blendvps(ZEXT816(0),___xmm_0000000c0000000c0000000c0000000c,auVar103);
      auVar83 = insertps(auVar39,*(undefined4 *)(param_5 + (int)uVar16),0x30);
      uVar13 = extractps(auVar103,0);
      uVar14 = extractps(auVar103,1);
      uVar16 = extractps(auVar103,2);
      uVar15 = extractps(auVar103,3);
      auVar39 = insertps(ZEXT416(*(uint *)((int)uVar13 + lVar81)),
                         *(undefined4 *)((int)uVar14 + lVar97),0x10);
      auVar39 = insertps(auVar39,*(undefined4 *)((int)uVar16 + lVar99),0x20);
      auVar103 = insertps(auVar39,*(undefined4 *)((int)uVar15 + lVar129),0x30);
      auVar221._0_4_ = auVar154._0_4_ * auVar146._0_4_ + auVar105._0_4_;
      auVar221._4_4_ = auVar154._4_4_ * auVar146._4_4_ + auVar105._4_4_;
      auVar221._8_4_ = auVar154._8_4_ * auVar146._8_4_ + auVar105._8_4_;
      auVar221._12_4_ = auVar154._12_4_ * auVar146._12_4_ + auVar105._12_4_;
      auVar59._0_4_ =
           (float)(int)((uVar23 & ___xmm_000003ff000003ff000003ff000003ff) +
                       ___xmm_fffffe01fffffe01fffffe01fffffe01);
      auVar59._4_4_ = (float)(int)((uVar28 & _UNK_151c6bc64) + _UNK_151c6b8b4);
      auVar59._8_4_ = (float)(int)((uVar20 & _UNK_151c6bc68) + _UNK_151c6b8b8);
      auVar59._12_4_ = (float)(int)((uVar34 & _UNK_151c6bc6c) + _UNK_151c6b8bc);
      auVar39 = divps(auVar59,___xmm_43ff800043ff800043ff800043ff8000);
      auVar57._0_4_ = auVar39._0_4_ * auVar103._0_4_ + auVar83._0_4_;
      auVar57._4_4_ = auVar39._4_4_ * auVar103._4_4_ + auVar83._4_4_;
      auVar57._8_4_ = auVar39._8_4_ * auVar103._8_4_ + auVar83._8_4_;
      auVar57._12_4_ = auVar39._12_4_ * auVar103._12_4_ + auVar83._12_4_;
    }
  }
  auVar63._0_8_ =
       CONCAT44((auVar57._4_4_ - auVar181._4_4_) * (float)local_208._4_4_ + auVar181._4_4_,
                (auVar57._0_4_ - auVar181._0_4_) * (float)local_208._0_4_ + auVar181._0_4_);
  auVar63._8_4_ = (auVar57._8_4_ - auVar181._8_4_) * fStack_200 + auVar181._8_4_;
  auVar63._12_4_ = (auVar57._12_4_ - auVar181._12_4_) * fStack_1fc + auVar181._12_4_;
  bVar36 = (bVar25 & 1) == 0;
  auVar142 = auVar181;
  if (!bVar36) {
    auVar142._8_4_ = auVar63._8_4_;
    auVar142._0_8_ = auVar63._0_8_;
    auVar142._12_4_ = auVar63._12_4_;
  }
  auVar96._0_8_ =
       CONCAT44((auVar93._4_4_ - auVar118._4_4_) * (float)local_208._4_4_ + auVar118._4_4_,
                (auVar93._0_4_ - auVar118._0_4_) * (float)local_208._0_4_ + auVar118._0_4_);
  auVar96._8_4_ = (auVar93._8_4_ - auVar118._8_4_) * fStack_200 + auVar118._8_4_;
  auVar96._12_4_ = (auVar93._12_4_ - auVar118._12_4_) * fStack_1fc + auVar118._12_4_;
  auVar223._0_8_ =
       CONCAT44((auVar221._4_4_ - auVar163._4_4_) * (float)local_208._4_4_ + auVar163._4_4_,
                (auVar221._0_4_ - auVar163._0_4_) * (float)local_208._0_4_ + auVar163._0_4_);
  auVar223._8_4_ = (auVar221._8_4_ - auVar163._8_4_) * fStack_200 + auVar163._8_4_;
  auVar223._12_4_ = (auVar221._12_4_ - auVar163._12_4_) * fStack_1fc + auVar163._12_4_;
  if (bVar36) {
    auVar39 = blendps(auVar181,auVar142,1);
    auVar78 = auVar163;
    auVar204 = auVar118;
    if ((bVar25 & 2) != 0) goto LAB_140b17413;
LAB_140b17399:
    auVar105 = blendps(auVar118,auVar204,1);
    auVar170 = blendps(auVar163,auVar78,1);
    auVar39 = blendps(auVar39,auVar39,2);
    auVar143 = auVar105;
    auVar103 = auVar170;
    if ((bVar25 & 4) != 0) goto LAB_140b173c4;
LAB_140b17443:
    auVar105 = blendps(auVar105,auVar143,2);
    auVar169 = blendps(auVar103,auVar170,2);
    auVar39 = blendps(auVar39,auVar39,4);
    auVar144 = auVar105;
    auVar103 = auVar169;
    if (-1 < (char)bVar25) goto LAB_140b17467;
LAB_140b173ed:
    auVar105 = blendps(auVar105,auVar144,4);
    if (-1 < (char)bVar25) goto LAB_140b173f5;
LAB_140b17473:
    auVar103 = blendps(auVar103,auVar169,4);
  }
  else {
    auVar204._8_4_ = auVar96._8_4_;
    auVar204._0_8_ = auVar96._0_8_;
    auVar204._12_4_ = auVar96._12_4_;
    auVar78._8_4_ = auVar223._8_4_;
    auVar78._0_8_ = auVar223._0_8_;
    auVar78._12_4_ = auVar223._12_4_;
    auVar39 = blendps(auVar181,auVar142,1);
    if ((bVar25 & 2) == 0) goto LAB_140b17399;
LAB_140b17413:
    auVar193._8_4_ = auVar63._8_4_;
    auVar193._0_8_ = auVar63._0_8_;
    auVar193._12_4_ = auVar63._12_4_;
    auVar105 = blendps(auVar118,auVar204,1);
    auVar143._8_4_ = auVar96._8_4_;
    auVar143._0_8_ = auVar96._0_8_;
    auVar143._12_4_ = auVar96._12_4_;
    auVar103 = blendps(auVar163,auVar78,1);
    auVar170._8_4_ = auVar223._8_4_;
    auVar170._0_8_ = auVar223._0_8_;
    auVar170._12_4_ = auVar223._12_4_;
    auVar39 = blendps(auVar39,auVar193,2);
    if ((bVar25 & 4) == 0) goto LAB_140b17443;
LAB_140b173c4:
    auVar192._8_4_ = auVar63._8_4_;
    auVar192._0_8_ = auVar63._0_8_;
    auVar192._12_4_ = auVar63._12_4_;
    auVar105 = blendps(auVar105,auVar143,2);
    auVar144._8_4_ = auVar96._8_4_;
    auVar144._0_8_ = auVar96._0_8_;
    auVar144._12_4_ = auVar96._12_4_;
    auVar103 = blendps(auVar103,auVar170,2);
    auVar169._8_4_ = auVar223._8_4_;
    auVar169._0_8_ = auVar223._0_8_;
    auVar169._12_4_ = auVar223._12_4_;
    auVar39 = blendps(auVar39,auVar192,4);
    if ((char)bVar25 < '\0') goto LAB_140b173ed;
LAB_140b17467:
    auVar63 = auVar39;
    auVar105 = blendps(auVar105,auVar144,4);
    auVar39 = auVar63;
    if ((char)bVar25 < '\0') goto LAB_140b17473;
LAB_140b173f5:
    auVar103 = blendps(auVar103,auVar169,4);
    auVar96 = auVar105;
  }
  if (-1 < (char)bVar25) {
    auVar223 = auVar103;
  }
  auVar181 = blendps(auVar39,auVar63,8);
  auVar118 = blendps(auVar105,auVar96,8);
  auVar163 = blendps(auVar103,auVar223,8);
LAB_140b17493:
  auVar64._0_8_ = auVar181._0_8_;
  auVar64._8_4_ = auVar181._4_4_;
  auVar64._12_4_ = auVar118._4_4_;
  auVar182._0_8_ = CONCAT44(auVar118._8_4_,auVar181._8_4_);
  auVar182._8_4_ = auVar181._12_4_;
  auVar182._12_4_ = auVar118._12_4_;
  auVar126._4_4_ = auVar118._0_4_;
  auVar126._0_4_ = auVar181._0_4_;
  auVar126._8_4_ = auVar181._4_4_;
  auVar126._12_4_ = auVar118._4_4_;
  local_168 = insertps(auVar126,auVar163,0x28);
  local_158._8_4_ = auVar163._4_4_;
  local_158._0_8_ = auVar64._8_8_;
  local_158._12_4_ = 0;
  auVar65._8_4_ = auVar181._12_4_;
  auVar65._0_8_ = auVar182._0_8_;
  auVar65._12_4_ = auVar118._12_4_;
  local_148 = insertps(auVar65,auVar163,0xa8);
  local_138._8_4_ = auVar163._12_4_;
  local_138._0_8_ = auVar182._8_8_;
  local_138._12_4_ = 0;
  uVar23 = movmskps(uVar22,auVar151);
  uVar24 = (ulonglong)uVar23;
  do {
    if (uVar24 == 0) {
      uVar23 = 0x40;
    }
    else {
      uVar23 = 0;
      for (uVar100 = uVar24; (uVar100 & 1) == 0; uVar100 = uVar100 >> 1 | 0x8000000000000000) {
        uVar23 = uVar23 + 1;
      }
    }
    bVar25 = (byte)uVar23 & 0x3f;
    local_178 = CONCAT44(uVar172,uVar171);
    uStack_170 = CONCAT44(uVar30,uVar7);
    uVar13 = *(undefined8 *)(local_168 + (ulonglong)(uVar23 << 4) + 8);
    uVar14 = *(undefined8 *)(local_168 + (uVar23 << 4));
    lVar26 = (longlong)*(int *)((longlong)&local_178 + (ulonglong)(uVar23 & 3) * 4) * 0x60;
    pdVar2 = (double *)(param_1 + 0x40 + lVar26);
    *pdVar2 = (double)(float)uVar14;
    pdVar2[1] = (double)(float)((ulonglong)uVar14 >> 0x20);
    pdVar2 = (double *)(param_1 + 0x50 + lVar26);
    *pdVar2 = (double)(float)uVar13;
    pdVar2[1] = (double)(float)((ulonglong)uVar13 >> 0x20);
    uVar24 = uVar24 & (-2L << bVar25 | 0xfffffffffffffffeU >> 0x40 - bVar25);
  } while (uVar24 != 0);
  return;
}

