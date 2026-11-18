// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FillComponentSpaceTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunS_3E_un_3C_CunT_3E_CuniCuniCuni_avx @ 140a9bb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FillComponentSpaceTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunS_3E_un_3C_CunT_3E_CuniCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               int param_6,uint param_7,undefined1 (*param_8) [32])

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong uVar24;
  ulonglong *puVar25;
  longlong lVar26;
  double dVar27;
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
  undefined1 auVar41 [32];
  undefined1 auVar50 [16];
  undefined1 auVar42 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar51 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
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
  undefined1 auVar64 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 in_ZMM1 [64];
  ulonglong uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  ulonglong uVar96;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  ulonglong uVar97;
  ulonglong uVar98;
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined8 uVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [32];
  undefined1 auVar110 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  ulonglong uVar130;
  undefined1 auVar127 [32];
  undefined1 auVar129 [32];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar185 [64];
  double dVar186;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  double dVar199;
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar194 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [32];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar212 [32];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  double dVar218;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  double dVar224;
  double dVar225;
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  double dVar231;
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar236 [32];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  double local_2f0 [2];
  undefined1 local_2e0 [8];
  double adStack_2d8 [3];
  undefined1 local_2c0 [16];
  double local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [16];
  double local_290;
  undefined8 local_288;
  double dStack_280;
  undefined8 local_278;
  double dStack_270;
  undefined8 local_268;
  double local_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double local_230;
  undefined8 uStack_228;
  double local_220;
  undefined8 uStack_218;
  longlong local_208;
  double local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [16];
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198 [2];
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_120 [32];
  undefined1 local_100 [16];
  undefined1 auVar43 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar65 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar88 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar111 [32];
  undefined1 auVar123 [32];
  undefined1 auVar126 [32];
  undefined1 auVar128 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar184 [32];
  undefined1 auVar193 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar205 [32];
  undefined1 auVar208 [32];
  undefined1 auVar211 [32];
  undefined1 auVar223 [32];
  undefined1 auVar235 [32];
  
  local_208 = param_3;
  local_120 = *param_8;
  auVar54 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar38 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_8 + 0x10),auVar54);
  auVar54 = vpcmpgtd_avx(local_120._0_16_,auVar54);
  auVar54 = vpor_avx(auVar54,auVar38);
  if ((((SUB161(auVar54 >> 0x1f,0) & 1) == 0 && (SUB161(auVar54 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar54 >> 0x5f,0) & 1) == 0) && -1 < auVar54[0xf]) {
    if (1 < (int)param_7) {
      uVar24 = CONCAT44(0,param_7);
      uVar73 = 1;
      local_120._0_8_ = uVar24;
      do {
        uVar3 = *(ushort *)(param_3 + uVar73 * 2);
        lVar9 = (ulonglong)uVar3 * 0x60;
        lVar26 = (longlong)*(int *)(param_4 + (int)((uint)uVar3 * param_5 + param_6)) * 0x60;
        dVar27 = *(double *)(param_1 + lVar26);
        auVar51._8_8_ = 0;
        auVar51._0_8_ = dVar27;
        local_230 = *(double *)(param_1 + 8 + lVar26);
        uStack_228 = 0;
        dVar224 = *(double *)(param_1 + 0x10 + lVar26);
        auVar50._8_8_ = 0;
        auVar50._0_8_ = dVar224;
        dVar231 = *(double *)(param_1 + 0x18 + lVar26);
        local_260 = *(double *)(param_1 + 0x20 + lVar26);
        dStack_258 = 0.0;
        local_300._8_8_ = 0;
        local_300._0_8_ = *(ulonglong *)(param_1 + 0x28 + lVar26);
        local_310._8_8_ = 0;
        local_310._0_8_ = *(ulonglong *)(param_1 + 0x30 + lVar26);
        local_320._0_8_ = *(double *)(param_1 + 0x40 + lVar26);
        local_320._8_8_ = 0;
        local_220 = *(double *)(param_1 + 0x48 + lVar26);
        uStack_218 = 0;
        auVar217._0_8_ = *(double *)(param_1 + 0x50 + lVar26);
        auVar174._8_8_ = 0;
        auVar174._0_8_ = auVar217._0_8_;
        local_1e0._8_8_ = 0;
        local_1e0._0_8_ = *(ulonglong *)(param_1 + 0x58 + lVar26);
        dVar1 = *(double *)(param_2 + lVar9);
        auVar216._8_8_ = 0;
        auVar216._0_8_ = dVar1;
        auVar46._16_16_ = *(undefined1 (*) [16])(param_2 + 0x50 + lVar9);
        auVar46._0_16_ = *(undefined1 (*) [16])(param_2 + 0x40 + lVar9);
        auVar64._16_16_ = *(undefined1 (*) [16])(param_1 + 0x50 + lVar26);
        auVar64._0_16_ = *(undefined1 (*) [16])(param_1 + 0x40 + lVar26);
        auVar46 = vcmppd_avx(auVar46,ZEXT1632(ZEXT816(0)),1);
        auVar64 = vcmppd_avx(auVar64,ZEXT1632(ZEXT816(0)),1);
        auVar54 = vpor_avx(auVar46._16_16_,auVar64._16_16_);
        auVar230._8_8_ = 0;
        auVar230._0_8_ = *(ulonglong *)(param_2 + 8 + lVar9);
        dVar218 = *(double *)(param_2 + 0x10 + lVar9);
        auVar57._8_8_ = 0;
        auVar57._0_8_ = dVar218;
        auVar54 = vpackssdw_avx(auVar46._0_16_ | auVar64._0_16_,auVar54);
        dVar225 = *(double *)(param_2 + 0x18 + lVar9);
        auVar220._8_8_ = 0;
        auVar220._0_8_ = dVar225;
        local_148 = *(ulonglong *)(param_2 + 0x20 + lVar9);
        auVar105._8_8_ = 0;
        auVar105._0_8_ = local_148;
        local_140 = *(ulonglong *)(param_2 + 0x28 + lVar9);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = local_140;
        local_1c0._0_8_ = *(ulonglong *)(param_2 + 0x30 + lVar9);
        local_1c0._8_8_ = 0;
        dVar186 = *(double *)(param_2 + 0x40 + lVar9);
        auVar210._8_8_ = 0;
        auVar210._0_8_ = dVar186;
        auVar135._8_8_ = 0;
        auVar135._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar9);
        dVar2 = *(double *)(param_2 + 0x50 + lVar9);
        auVar82._8_8_ = 0;
        auVar82._0_8_ = dVar2;
        uVar96 = *(ulonglong *)(param_2 + 0x58 + lVar9);
        if ((((SUB161(auVar54 >> 0x1f,0) & 1) == 0 && (SUB161(auVar54 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar54 >> 0x5f,0) & 1) == 0) && -1 < auVar54[0xf]) {
          auVar50 = vunpcklpd_avx(auVar57,auVar220);
          auVar51 = vunpcklpd_avx(auVar220,auVar57);
          auVar54 = vmovlhps_avx(auVar216,auVar230);
          auVar57 = vmovlhps_avx(auVar230,auVar216);
          auVar150._8_8_ = dVar231;
          auVar150._0_8_ = dVar231;
          auVar192._8_8_ = dVar27;
          auVar192._0_8_ = dVar27;
          auVar203._8_8_ = local_230;
          auVar203._0_8_ = local_230;
          auVar61._8_8_ = dVar224;
          auVar61._0_8_ = dVar224;
          auVar160._0_8_ =
               local_230 * auVar50._0_8_ *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
               auVar54._0_8_ * dVar231 +
               dVar27 * auVar51._0_8_ *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
               auVar57._0_8_ * dVar224 *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
          auVar160._8_8_ =
               local_230 * auVar50._8_8_ * _UNK_150b54408 +
               auVar54._8_8_ * dVar231 + dVar27 * auVar51._8_8_ * _UNK_150b543e8 +
               auVar57._8_8_ * dVar224 * _UNK_150b54428;
          auVar168._16_8_ =
               local_230 * auVar54._0_8_ * _UNK_150b54410 +
               auVar50._0_8_ * dVar231 + dVar27 * auVar57._0_8_ * _UNK_150b543f0 +
               auVar51._0_8_ * dVar224 * _UNK_150b54430;
          auVar168._0_16_ = auVar160;
          auVar168._24_8_ =
               local_230 * auVar54._8_8_ * _UNK_150b54418 +
               auVar50._8_8_ * dVar231 + dVar27 * auVar57._8_8_ * _UNK_150b543f8 +
               auVar51._8_8_ * dVar224 * _UNK_150b54438;
          auVar38 = vunpcklpd_avx(auVar105,auVar38);
          auVar54 = vmovhps_avx(local_1c0,*(undefined8 *)(param_2 + lVar9 + 0x38));
          auVar105 = vunpcklpd_avx(auVar174,local_1e0._0_16_);
          auVar23._8_8_ = 0;
          auVar23._0_8_ = local_220;
          auVar50 = vunpcklpd_avx(local_320,auVar23);
          auVar39._0_8_ = auVar50._0_8_ * auVar38._0_8_;
          auVar39._8_8_ = auVar50._8_8_ * auVar38._8_8_;
          auVar48._16_8_ = auVar105._0_8_ * auVar54._0_8_;
          auVar48._0_16_ = auVar39;
          auVar48._24_8_ = auVar105._8_8_ * auVar54._8_8_;
          auVar182._16_16_ = auVar39;
          auVar182._0_16_ = auVar39;
          auVar46 = vperm2f128_avx(auVar48,auVar48,0x11);
          auVar46 = vshufpd_avx(auVar182,auVar46,9);
          auVar54 = vunpcklpd_avx(auVar61,auVar150);
          auVar38 = vunpcklpd_avx(auVar192,auVar203);
          auVar57 = vunpcklpd_avx(auVar203,auVar61);
          auVar183._0_8_ = auVar38._0_8_ * auVar46._0_8_;
          auVar183._8_8_ = auVar38._8_8_ * auVar46._8_8_;
          auVar183._16_8_ = auVar54._0_8_ * auVar46._16_8_;
          auVar183._24_8_ = auVar54._8_8_ * auVar46._24_8_;
          auVar174 = vunpcklpd_avx(auVar192,auVar150);
          auVar197._0_8_ = auVar57._0_8_ * auVar39._0_8_;
          auVar197._8_8_ = auVar57._8_8_ * auVar39._8_8_;
          auVar197._16_8_ = auVar174._0_8_ * auVar48._16_8_;
          auVar197._24_8_ = auVar174._8_8_ * auVar48._24_8_;
          auVar46 = vsubpd_avx(auVar183,auVar197);
          auVar176._0_8_ = auVar46._0_8_ + auVar46._0_8_;
          auVar176._8_8_ = auVar46._8_8_ + auVar46._8_8_;
          auVar184._16_8_ = auVar46._16_8_ + auVar46._16_8_;
          auVar184._0_16_ = auVar176;
          auVar184._24_8_ = auVar46._24_8_ + auVar46._24_8_;
          auVar198._16_16_ = auVar176;
          auVar198._0_16_ = auVar176;
          auVar46 = vperm2f128_avx(auVar184,auVar184,0x11);
          auVar46 = vshufpd_avx(auVar198,auVar46,9);
          auVar64 = vperm2f128_avx(auVar184,auVar184,1);
          auVar64 = vshufpd_avx(auVar64,auVar184,0xc);
          auVar157._0_8_ = auVar38._0_8_ * auVar64._0_8_;
          auVar157._8_8_ = auVar38._8_8_ * auVar64._8_8_;
          auVar157._16_8_ = auVar54._0_8_ * auVar64._16_8_;
          auVar157._24_8_ = auVar54._8_8_ * auVar64._24_8_;
          auVar72._0_8_ = auVar46._0_8_ * auVar57._0_8_;
          auVar72._8_8_ = auVar46._8_8_ * auVar57._8_8_;
          auVar72._16_8_ = auVar46._16_8_ * auVar174._0_8_;
          auVar72._24_8_ = auVar46._24_8_ * auVar174._8_8_;
          auVar64 = vsubpd_avx(auVar157,auVar72);
          auVar158._16_16_ = auVar64._0_16_;
          auVar158._0_16_ = auVar64._0_16_;
          auVar64 = vperm2f128_avx(auVar64,auVar64,0x11);
          auVar64 = vshufpd_avx(auVar158,auVar64,9);
          auVar38 = vshufpd_avx(auVar160,auVar160,1);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = local_260;
          auVar174 = vunpcklpd_avx(auVar17,local_300);
          auVar51 = auVar168._16_16_;
          auVar54 = vmovhps_avx(local_310,*(undefined8 *)(param_1 + lVar26 + 0x38));
          auVar57 = vshufpd_avx(auVar51,auVar51,1);
          auVar40._0_8_ = auVar174._0_8_ + auVar39._0_8_ + auVar46._0_8_ * dVar231 + auVar64._0_8_;
          auVar40._8_8_ = auVar174._8_8_ + auVar39._8_8_ + auVar46._8_8_ * dVar231 + auVar64._8_8_;
          auVar49._16_8_ =
               auVar54._0_8_ + auVar48._16_8_ + auVar46._16_8_ * dVar231 + auVar64._16_8_;
          auVar49._0_16_ = auVar40;
          auVar49._24_8_ =
               auVar54._8_8_ + auVar48._24_8_ + auVar46._24_8_ * dVar231 + auVar64._24_8_;
          auVar54 = vshufpd_avx(auVar40,auVar40,1);
          local_300._0_8_ = auVar54._0_8_;
          auVar54._8_8_ = 0;
          auVar54._0_8_ = uVar96;
          auVar82 = vunpcklpd_avx(auVar82,auVar54);
          auVar135 = vunpcklpd_avx(auVar210,auVar135);
          auVar54 = vshufpd_avx(auVar49._16_16_,auVar49._16_16_,1);
          local_310._0_8_ = auVar54._0_8_;
          auVar151._0_8_ = auVar50._0_8_ * auVar135._0_8_;
          auVar151._8_8_ = auVar50._8_8_ * auVar135._8_8_;
          auVar54 = vshufpd_avx(auVar151,auVar151,1);
          local_320._0_8_ = auVar54._0_8_;
          auVar217._0_8_ = auVar105._0_8_ * auVar82._0_8_;
          auVar217._8_8_ = auVar105._8_8_ * auVar82._8_8_;
          auVar54 = vshufpd_avx(auVar217,auVar217,1);
          uVar99 = auVar54._0_8_;
          dVar27 = auVar40._0_8_;
          dVar224 = auVar49._16_8_;
          local_260 = auVar151._0_8_;
        }
        else {
          auVar54 = vmovlhps_avx(auVar216,auVar230);
          auVar221._8_8_ = dVar225;
          auVar221._0_8_ = dVar225;
          auVar38 = vunpcklpd_avx(auVar57,auVar221);
          auVar173._0_8_ = auVar54._0_8_;
          auVar58._0_8_ = auVar173._0_8_ + auVar173._0_8_;
          dVar199 = auVar54._8_8_;
          auVar58._8_8_ = dVar199 + dVar199;
          auVar65._16_8_ = auVar38._0_8_ + auVar38._0_8_;
          auVar65._0_16_ = auVar58;
          auVar65._24_8_ = auVar38._8_8_ + auVar38._8_8_;
          auVar234._0_8_ = auVar173._0_8_ * auVar58._0_8_;
          auVar234._8_8_ = dVar199 * auVar58._8_8_;
          auVar235._16_8_ = dVar218 * auVar65._16_8_;
          auVar235._0_16_ = auVar234;
          auVar235._24_8_ = auVar65._24_8_ * 0.0;
          auVar54 = vshufpd_avx(auVar234,auVar234,1);
          auVar46 = vperm2f128_avx(auVar235,auVar235,1);
          auVar46 = vshufpd_avx(auVar46,auVar46,4);
          auVar207._0_8_ = auVar54._0_8_ + auVar46._0_8_;
          auVar207._8_8_ = auVar54._8_8_ + auVar46._8_8_;
          auVar207._16_8_ = auVar234._0_8_ + auVar46._16_8_;
          auVar207._24_8_ = auVar234._8_8_ + auVar46._24_8_;
          auVar64 = vperm2f128_avx(auVar65,auVar65,1);
          auVar46 = vshufpd_avx(auVar65,auVar64,1);
          auVar236._0_8_ = auVar173._0_8_ * auVar46._0_8_;
          auVar236._8_8_ = dVar199 * auVar46._8_8_;
          auVar236._16_8_ = dVar1 * auVar46._16_8_;
          auVar236._24_8_ = dVar1 * auVar46._24_8_;
          auVar66._16_16_ = auVar58;
          auVar66._0_16_ = auVar58;
          auVar46 = vshufpd_avx(auVar64,auVar66,4);
          auVar67._0_8_ = dVar225 * auVar46._0_8_;
          auVar67._8_8_ = dVar225 * auVar46._8_8_;
          auVar67._16_8_ = dVar225 * auVar46._16_8_;
          auVar67._24_8_ = dVar225 * auVar46._24_8_;
          auVar156._8_8_ = __real_3ff0000000000000;
          auVar156._0_8_ = __real_3ff0000000000000;
          auVar156._16_8_ = __real_3ff0000000000000;
          auVar156._24_8_ = __real_3ff0000000000000;
          auVar46 = vsubpd_avx(auVar156,auVar207);
          auVar54 = vunpcklpd_avx(auVar210,auVar135);
          dVar225 = auVar54._0_8_;
          auVar202._0_8_ = auVar46._0_8_ * dVar225;
          auVar173._0_8_ = auVar54._8_8_;
          auVar202._8_8_ = auVar46._8_8_ * auVar173._0_8_;
          auVar208._16_8_ = auVar46._16_8_ * dVar2;
          auVar208._0_16_ = auVar202;
          auVar208._24_8_ = auVar46._24_8_ * 0.0;
          auVar222._0_8_ = (auVar236._0_8_ + auVar67._0_8_) * dVar225;
          auVar222._8_8_ = (auVar236._8_8_ + auVar67._8_8_) * auVar173._0_8_;
          auVar223._16_8_ = (auVar236._16_8_ + auVar67._16_8_) * dVar2;
          auVar223._0_16_ = auVar222;
          auVar223._24_8_ = (auVar236._24_8_ + auVar67._24_8_) * 0.0;
          auVar46 = vsubpd_avx(auVar236,auVar67);
          auVar54 = vunpcklpd_avx(auVar135,auVar82);
          auVar59._0_8_ = auVar46._0_8_ * auVar54._0_8_;
          auVar59._8_8_ = auVar46._8_8_ * auVar54._8_8_;
          auVar68._16_8_ = auVar46._16_8_ * dVar186;
          auVar68._0_16_ = auVar59;
          auVar68._24_8_ = auVar46._24_8_ * 0.0;
          local_1a8 = vunpcklpd_avx(auVar202,auVar222);
          local_198[0] = (double)vmovlps_avx(auVar68._16_16_);
          local_198[1] = 0.0;
          local_188 = vblendpd_avx(auVar202,auVar59,1);
          local_178 = vmovhpd_avx(auVar222);
          local_168 = vblendpd_avx(auVar59,auVar223._16_16_,1);
          local_170 = 0;
          local_158 = vmovlps_avx(auVar208._16_16_);
          local_150 = 0;
          local_138 = local_1c0._0_8_;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = local_230;
          auVar54 = vunpcklpd_avx(auVar51,auVar20);
          auVar106._8_8_ = dVar231;
          auVar106._0_8_ = dVar231;
          auVar38 = vunpcklpd_avx(auVar50,auVar106);
          dVar1 = auVar54._0_8_;
          auVar121._0_8_ = dVar1 + dVar1;
          dVar218 = auVar54._8_8_;
          auVar121._8_8_ = dVar218 + dVar218;
          auVar126._16_8_ = auVar38._0_8_ + auVar38._0_8_;
          auVar126._0_16_ = auVar121;
          auVar126._24_8_ = auVar38._8_8_ + auVar38._8_8_;
          auVar60._0_8_ = dVar1 * auVar121._0_8_;
          auVar60._8_8_ = dVar218 * auVar121._8_8_;
          auVar69._16_8_ = dVar224 * auVar126._16_8_;
          auVar69._0_16_ = auVar60;
          auVar69._24_8_ = auVar126._24_8_ * 0.0;
          auVar54 = vshufpd_avx(auVar60,auVar60,1);
          auVar46 = vperm2f128_avx(auVar69,auVar69,1);
          auVar46 = vshufpd_avx(auVar46,auVar46,4);
          auVar70._0_8_ = auVar54._0_8_ + auVar46._0_8_;
          auVar70._8_8_ = auVar54._8_8_ + auVar46._8_8_;
          auVar70._16_8_ = auVar60._0_8_ + auVar46._16_8_;
          auVar70._24_8_ = auVar60._8_8_ + auVar46._24_8_;
          auVar64 = vsubpd_avx(auVar156,auVar70);
          auVar48 = vperm2f128_avx(auVar126,auVar126,1);
          auVar46 = vshufpd_avx(auVar126,auVar48,1);
          auVar47._0_8_ = dVar1 * auVar46._0_8_;
          auVar47._8_8_ = dVar218 * auVar46._8_8_;
          auVar47._16_8_ = dVar27 * auVar46._16_8_;
          auVar47._24_8_ = dVar27 * auVar46._24_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = local_220;
          auVar54 = vunpcklpd_avx(local_320,auVar22);
          auVar127._16_16_ = auVar121;
          auVar127._0_16_ = auVar121;
          auVar46 = vshufpd_avx(auVar48,auVar127,4);
          dVar27 = auVar54._0_8_;
          auVar161._0_8_ = auVar64._0_8_ * dVar27;
          dVar224 = auVar54._8_8_;
          auVar161._8_8_ = auVar64._8_8_ * dVar224;
          auVar166._16_8_ = auVar64._16_8_ * auVar217._0_8_;
          auVar166._0_16_ = auVar161;
          auVar166._24_8_ = auVar64._24_8_ * 0.0;
          auVar71._0_8_ = dVar231 * auVar46._0_8_;
          auVar71._8_8_ = dVar231 * auVar46._8_8_;
          auVar71._16_8_ = dVar231 * auVar46._16_8_;
          auVar71._24_8_ = dVar231 * auVar46._24_8_;
          auVar122._0_8_ = (auVar47._0_8_ + auVar71._0_8_) * dVar27;
          auVar122._8_8_ = (auVar47._8_8_ + auVar71._8_8_) * dVar224;
          auVar128._16_8_ = (auVar47._16_8_ + auVar71._16_8_) * auVar217._0_8_;
          auVar128._0_16_ = auVar122;
          auVar128._24_8_ = (auVar47._24_8_ + auVar71._24_8_) * 0.0;
          auVar46 = vsubpd_avx(auVar47,auVar71);
          auVar54 = vunpcklpd_avx(auVar22,auVar174);
          auVar136._0_8_ = auVar46._0_8_ * auVar54._0_8_;
          auVar136._8_8_ = auVar46._8_8_ * auVar54._8_8_;
          auVar141._16_8_ = auVar46._16_8_ * (double)local_320._0_8_;
          auVar141._0_16_ = auVar136;
          auVar141._24_8_ = auVar46._24_8_ * 0.0;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar96;
          auVar54 = vunpcklpd_avx(auVar82,auVar12);
          auVar38 = vunpcklpd_avx(auVar174,local_1e0._0_16_);
          dVar27 = dVar27 * dVar225;
          dVar224 = dVar224 * auVar173._0_8_;
          dVar231 = auVar38._0_8_ * auVar54._0_8_;
          dStack_248 = auVar38._8_8_ * auVar54._8_8_;
          auVar217._0_8_ = auVar217._0_8_ * dVar2;
          auVar54 = CONCAT88(auVar122._0_8_,auVar122._0_8_);
          auVar46 = vblendpd_avx(ZEXT1632(auVar128._16_16_),auVar141,2);
          auVar46 = vblendpd_avx(auVar46,auVar166,4);
          auVar64 = vblendpd_avx(ZEXT1632(auVar161),ZEXT1632(auVar54),2);
          auVar64 = vblendpd_avx(auVar64,auVar141,4);
          auVar92._16_16_ = auVar122;
          auVar92._0_16_ = auVar136;
          auVar48 = vshufpd_avx(auVar92,ZEXT1632(auVar161),0xe);
          auVar54 = vmovhps_avx(local_310,__real_3ff0000000000000);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_260;
          auVar38 = vunpcklpd_avx(auVar15,local_300);
          local_130 = 0x3ff0000000000000;
          lVar26 = 0x18;
          do {
            dVar1 = *(double *)(local_1c0 + lVar26);
            dVar218 = *(double *)((longlong)&dStack_1b0 + lVar26);
            dVar225 = *(double *)(local_1c0 + lVar26 + 8);
            dVar186 = *(double *)(local_1a8 + lVar26);
            *(double *)(local_300 + lVar26 + 8) =
                 auVar64._0_8_ * dVar1 + auVar46._0_8_ * dVar218 + auVar48._0_8_ * dVar225 +
                 auVar38._0_8_ * dVar186;
            *(double *)((longlong)local_2f0 + lVar26) =
                 auVar64._8_8_ * dVar1 + auVar46._8_8_ * dVar218 + auVar48._8_8_ * dVar225 +
                 auVar38._8_8_ * dVar186;
            *(double *)((longlong)local_2f0 + lVar26 + 8) =
                 auVar64._16_8_ * dVar1 + auVar46._16_8_ * dVar218 + auVar48._16_8_ * dVar225 +
                 auVar54._0_8_ * dVar186;
            *(double *)(local_2e0 + lVar26) =
                 auVar64._24_8_ * dVar1 + auVar46._24_8_ * dVar218 + auVar48._24_8_ * dVar225 +
                 auVar54._8_8_ * dVar186;
            lVar26 = lVar26 + 0x20;
          } while (lVar26 != 0x98);
          dVar1 = (double)local_2e0 * (double)local_2e0 + adStack_2d8[0] * adStack_2d8[0] +
                  adStack_2d8[1] * adStack_2d8[1];
          dVar218 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar1) {
            dVar218 = __real_3ff0000000000000 / SQRT(dVar1);
          }
          dVar1 = (double)local_2c0._0_8_ * (double)local_2c0._0_8_ +
                  (double)local_2c0._8_8_ * (double)local_2c0._8_8_ + local_2b0 * local_2b0;
          dVar225 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar1) {
            dVar225 = __real_3ff0000000000000 / SQRT(dVar1);
          }
          local_260 = dVar27;
          dStack_258 = dVar224;
          dStack_250 = dVar231;
          auVar16._8_8_ = dVar224;
          auVar16._0_8_ = dVar27;
          auVar54 = vpermilpd_avx(auVar16,1);
          auVar18._8_8_ = dVar224;
          auVar18._0_8_ = dVar27;
          auVar18._16_8_ = dVar231;
          auVar18._24_8_ = dStack_248;
          local_1e0._0_16_ = vshufpd_avx(auVar18._16_16_,auVar18._16_16_,1);
          dVar27 = local_290 * local_290 +
                   (double)local_2a0._8_8_ * (double)local_2a0._8_8_ +
                   (double)local_2a0._0_8_ * (double)local_2a0._0_8_;
          dVar224 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar27) {
            dVar224 = __real_3ff0000000000000 / SQRT(dVar27);
          }
          auVar83._8_8_ = 0;
          auVar83._0_8_ = dVar218 * (double)local_2e0;
          auVar148._8_8_ = 0;
          auVar148._0_8_ = dVar218 * adStack_2d8[0];
          auVar82 = vunpcklpd_avx(auVar83,auVar148);
          auVar149._8_8_ = 0;
          auVar149._0_8_ = dVar225 * (double)local_2c0._0_8_;
          auVar162._8_8_ = 0;
          auVar162._0_8_ = dVar225 * (double)local_2c0._8_8_;
          auVar105 = vunpcklpd_avx(auVar149,auVar162);
          auVar163._8_8_ = 0;
          auVar163._0_8_ = (double)local_2a0._0_8_ * dVar224;
          auVar175._8_8_ = 0;
          auVar175._0_8_ = (double)local_2a0._8_8_ * dVar224;
          auVar135 = vunpcklpd_avx(auVar163,auVar175);
          auVar50 = ZEXT816(0);
          auVar46 = vcmppd_avx(ZEXT1632(auVar50),auVar18,2);
          auVar38 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
          auVar57 = vpshufd_avx(auVar38,0x50);
          auVar38 = vpshufd_avx(auVar38,0xfa);
          auVar142._16_16_ = auVar38;
          auVar142._0_16_ = auVar57;
          auVar46 = vcmpps_avx(ZEXT1632(auVar50),ZEXT1632(auVar50),0xf);
          auVar46 = vblendvps_avx(ZEXT1632(auVar50),auVar46,auVar142);
          auVar191._0_4_ =
               auVar46._0_4_ &
               ___ymm_0000000000000000800000000000000080000000000000008000000000000000 ^
               ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
          auVar191._4_4_ = auVar46._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
          auVar191._8_4_ = auVar46._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
          auVar191._12_4_ = auVar46._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
          auVar196._16_4_ = auVar46._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
          auVar196._0_16_ = auVar191;
          auVar196._20_4_ = auVar46._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
          auVar196._24_4_ = auVar46._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
          auVar196._28_4_ = auVar46._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
          auVar38 = vshufps_avx(auVar191,auVar191,0x44);
          local_2e0 = (undefined1  [8])(auVar82._0_8_ * auVar38._0_8_);
          adStack_2d8[0] = auVar82._8_8_ * auVar38._8_8_;
          auVar143._16_8_ = dVar218 * adStack_2d8[1] * auVar38._0_8_;
          auVar143._0_16_ = _local_2e0;
          auVar143._24_8_ = auVar38._8_8_ * 0.0;
          adStack_2d8[1] = (double)vmovlps_avx(auVar143._16_16_);
          auVar38 = vshufps_avx(auVar191,auVar191,0xee);
          local_2c0._0_8_ = auVar38._0_8_ * auVar105._0_8_;
          local_2c0._8_8_ = auVar38._8_8_ * auVar105._8_8_;
          auVar129._16_8_ = auVar38._0_8_ * dVar225 * local_2b0;
          auVar129._0_16_ = local_2c0;
          auVar129._24_8_ = auVar38._8_8_ * 0.0;
          local_2b0 = (double)vmovlpd_avx(auVar129._16_16_);
          auVar46 = vperm2f128_avx(auVar196,auVar196,0x11);
          local_2a0._0_8_ = auVar46._0_8_ * auVar135._0_8_;
          local_2a0._8_8_ = auVar46._0_8_ * auVar135._8_8_;
          auVar167._16_8_ = auVar46._16_8_ * dVar224 * local_290;
          auVar167._0_16_ = local_2a0;
          auVar167._24_8_ = auVar46._16_8_ * 0.0;
          auVar115._8_8_ = __real_0010000000000000;
          auVar115._0_8_ = __real_0010000000000000;
          auVar115._16_8_ = __real_0010000000000000;
          auVar115._24_8_ = __real_0010000000000000;
          auVar46 = vblendpd_avx(auVar143,auVar115,8);
          auVar93._0_8_ = __real_7fffffffffffffff & auVar46._0_8_;
          auVar93._8_8_ = __real_7fffffffffffffff & auVar46._8_8_;
          auVar93._16_8_ = __real_7fffffffffffffff & auVar46._16_8_;
          auVar93._24_8_ = __real_7fffffffffffffff & auVar46._24_8_;
          auVar212._8_8_ = __real_3f1a36e2eb1c432d;
          auVar212._0_8_ = __real_3f1a36e2eb1c432d;
          auVar212._16_8_ = __real_3f1a36e2eb1c432d;
          auVar212._24_8_ = __real_3f1a36e2eb1c432d;
          auVar46 = vcmppd_avx(auVar93,auVar212,6);
          auVar38 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
          local_290 = (double)vmovlpd_avx(auVar167._16_16_);
          if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
            auVar134 = SUB6416(ZEXT864(0),0) << 0x40;
            auVar35 = ZEXT816(0) << 0x40;
            auVar120 = ZEXT816(0) << 0x40;
            auVar104._8_8_ = 0;
            auVar104._0_8_ = __real_3ff0000000000000;
          }
          else {
            auVar46 = vblendpd_avx(auVar129,auVar115,8);
            auVar94._0_8_ = __real_7fffffffffffffff & auVar46._0_8_;
            auVar94._8_8_ = __real_7fffffffffffffff & auVar46._8_8_;
            auVar94._16_8_ = __real_7fffffffffffffff & auVar46._16_8_;
            auVar94._24_8_ = __real_7fffffffffffffff & auVar46._24_8_;
            auVar46 = vcmppd_avx(auVar94,auVar212,6);
            auVar38 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
            if ((((SUB161(auVar38 >> 0x1f,0) & 1) != 0 || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || auVar38[0xf] < '\0') {
              auVar46 = vblendpd_avx(auVar167,auVar115,8);
              auVar95._0_8_ = __real_7fffffffffffffff & auVar46._0_8_;
              auVar95._8_8_ = __real_7fffffffffffffff & auVar46._8_8_;
              auVar95._16_8_ = __real_7fffffffffffffff & auVar46._16_8_;
              auVar95._24_8_ = __real_7fffffffffffffff & auVar46._24_8_;
              auVar46 = vcmppd_avx(auVar95,auVar212,6);
              auVar38 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
              if ((((SUB161(auVar38 >> 0x1f,0) & 1) != 0 || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || auVar38[0xf] < '\0') {
                auVar38 = vshufpd_avx(local_2c0,local_2c0,1);
                dVar27 = auVar167._16_8_ + auVar38._0_8_ + (double)local_2e0;
                if (dVar27 <= __real_0000000000000000) {
                  bVar7 = (double)local_2e0 < auVar38._0_8_;
                  uVar24 = (ulonglong)bVar7;
                  if (*(double *)(local_2e0 + ((uint)bVar7 * 0x20 + (uint)bVar7 * 8)) <
                      auVar167._16_8_) {
                    uVar24 = 2;
                  }
                  iVar4 = *(int *)(&DAT_151c6afa0 + uVar24 * 4);
                  lVar26 = (longlong)iVar4;
                  iVar8 = (int)uVar24;
                  iVar5 = *(int *)(&DAT_151c6afa0 + lVar26 * 4);
                  dVar224 = __real_3ff0000000000000 /
                            SQRT(((*(double *)(local_2e0 + (uint)(iVar8 * 0x28)) -
                                  *(double *)(local_2e0 + lVar26 * 0x28)) -
                                 *(double *)(local_2e0 + (longlong)iVar5 * 0x28)) +
                                 __real_3ff0000000000000);
                  dVar27 = dVar224 * __real_3fe0000000000000;
                  *(double *)((longlong)&local_200 + (ulonglong)(uint)(iVar8 * 8)) =
                       (__real_3ff0000000000000 / dVar224) * __real_3fe0000000000000;
                  (&local_200)[lVar26] =
                       (*(double *)(local_2e0 + (longlong)(iVar4 + iVar8 * 4) * 8) +
                       *(double *)(local_2e0 + (longlong)(iVar8 + iVar4 * 4) * 8)) * dVar27;
                  (&local_200)[iVar5] =
                       dVar27 * (*(double *)(local_2e0 + (longlong)(iVar5 + iVar8 * 4) * 8) +
                                *(double *)(local_2e0 + (longlong)(iVar8 + iVar5 * 4) * 8));
                  auVar104._8_8_ = 0;
                  auVar104._0_8_ =
                       dVar27 * (*(double *)(local_2e0 + (longlong)(iVar5 + iVar4 * 4) * 8) -
                                *(double *)(local_2e0 + (longlong)(iVar4 + iVar5 * 4) * 8));
                  auVar134._8_8_ = 0;
                  auVar134._0_8_ = local_200;
                  auVar35._8_8_ = 0;
                  auVar35._0_8_ = local_1f8;
                  auVar120._8_8_ = 0;
                  auVar120._0_8_ = local_1f0;
                  uVar24 = local_120._0_8_;
                }
                else {
                  auVar38 = vshufpd_avx(_local_2e0,_local_2e0,1);
                  auVar57 = vshufpd_avx(local_2a0,local_2a0,1);
                  dVar224 = __real_3ff0000000000000 / SQRT(dVar27 + __real_3ff0000000000000);
                  dVar27 = dVar224 * __real_3fe0000000000000;
                  auVar134._8_8_ = 0;
                  auVar134._0_8_ = dVar27 * (auVar129._16_8_ - auVar57._0_8_);
                  auVar35._8_8_ = 0;
                  auVar35._0_8_ = dVar27 * ((double)local_2a0._0_8_ - auVar143._16_8_);
                  auVar120._8_8_ = 0;
                  auVar120._0_8_ = dVar27 * (auVar38._0_8_ - (double)local_2c0._0_8_);
                  auVar104._8_8_ = 0;
                  auVar104._0_8_ = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar224);
                }
                goto LAB_140a9c958;
              }
            }
            auVar134 = SUB6416(ZEXT864(0),0) << 0x40;
            auVar35 = ZEXT816(0) << 0x40;
            auVar120 = ZEXT816(0) << 0x40;
            auVar104._8_8_ = 0;
            auVar104._0_8_ = __real_3ff0000000000000;
          }
LAB_140a9c958:
          auVar228._8_8_ = 0;
          auVar228._0_8_ = __real_3e45798ee2308c3a;
          auVar38 = vunpcklpd_avx(auVar120,auVar104);
          auVar57 = vunpcklpd_avx(auVar134,auVar35);
          dVar224 = auVar38._0_8_;
          dVar1 = auVar38._8_8_;
          dVar231 = auVar57._0_8_;
          dVar218 = auVar57._8_8_;
          auVar36._0_8_ = dVar231 * dVar231 + dVar224 * dVar224;
          auVar36._8_8_ = dVar218 * dVar218 + dVar1 * dVar1;
          auVar38 = vshufpd_avx(auVar36,auVar36,1);
          dVar27 = auVar36._0_8_ + auVar38._0_8_;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = dVar27;
          auVar38 = vcmpsd_avx(auVar228,auVar37,6);
          uVar96 = ~auVar38._0_8_ & __real_ffffffffffffffff;
          dVar27 = __real_3ff0000000000000 / SQRT(dVar27);
          auVar160._0_8_ = (double)((ulonglong)(dVar231 * dVar27) & uVar96);
          auVar160._8_8_ = (double)((ulonglong)(dVar218 * dVar27) & uVar96);
          auVar165._16_8_ = (ulonglong)(dVar224 * dVar27) & uVar96;
          auVar165._0_16_ = auVar160;
          auVar165._24_8_ = (ulonglong)(dVar1 * dVar27) & uVar96;
          auVar45._0_8_ =
               ~uVar96 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar45._8_8_ = ~uVar96 & _UNK_150b54548;
          auVar45._16_8_ = ~uVar96 & _UNK_150b54550;
          auVar45._24_8_ = ~uVar96 & _UNK_150b54558;
          auVar51 = auVar165._16_16_ | auVar45._16_16_;
          auVar38 = vshufps_avx(auVar160,auVar160,0x4e);
          auVar57 = vshufps_avx(auVar51,auVar51,0x4e);
          local_300._0_8_ = local_278;
          local_320._0_8_ = auVar54._0_8_;
          local_310._0_8_ = 0;
          dVar27 = dStack_280;
          dVar224 = dStack_270;
          uVar99 = local_1e0._0_8_;
        }
        auVar229._8_8_ = 0;
        auVar229._0_8_ = __real_3e45798ee2308c3a;
        auVar54 = vunpcklpd_avx(auVar160,auVar38);
        auVar38 = vunpcklpd_avx(auVar51,auVar57);
        puVar25 = (ulonglong *)(lVar9 + param_1);
        dVar1 = auVar38._0_8_;
        dVar225 = auVar38._8_8_;
        dVar218 = auVar54._0_8_;
        dVar186 = auVar54._8_8_;
        auVar80._0_8_ = dVar218 * dVar218 + dVar1 * dVar1;
        auVar80._8_8_ = dVar186 * dVar186 + dVar225 * dVar225;
        auVar54 = vshufpd_avx(auVar80,auVar80,1);
        dVar231 = auVar80._0_8_ + auVar54._0_8_;
        auVar81._8_8_ = 0;
        auVar81._0_8_ = dVar231;
        auVar54 = vcmpsd_avx(auVar229,auVar81,6);
        uVar96 = ~auVar54._0_8_ & __real_ffffffffffffffff;
        dVar231 = __real_3ff0000000000000 / SQRT(dVar231);
        uVar97 = ~uVar96 & _UNK_150b54548;
        uVar98 = ~uVar96 & _UNK_150b54550;
        uVar130 = ~uVar96 & _UNK_150b54558;
        *puVar25 = (ulonglong)(dVar218 * dVar231) & uVar96 |
                   ~uVar96 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000
        ;
        puVar25[1] = (ulonglong)(dVar186 * dVar231) & uVar96 | uVar97;
        puVar25[2] = (ulonglong)(dVar1 * dVar231) & uVar96 | uVar98;
        puVar25[3] = (ulonglong)(dVar225 * dVar231) & uVar96 | uVar130;
        uVar96 = (ulonglong)((uint)uVar3 * 0x60);
        *(double *)(param_1 + 0x20 + uVar96) = dVar27;
        *(undefined8 *)(param_1 + 0x28 + uVar96) = local_300._0_8_;
        *(double *)(param_1 + 0x30 + uVar96) = dVar224;
        *(undefined8 *)(param_1 + 0x38 + uVar96) = local_310._0_8_;
        *(double *)(param_1 + 0x40 + uVar96) = local_260;
        *(undefined8 *)(param_1 + 0x48 + uVar96) = local_320._0_8_;
        *(double *)(param_1 + 0x50 + uVar96) = auVar217._0_8_;
        *(undefined8 *)(param_1 + 0x58 + uVar96) = uVar99;
        uVar73 = uVar73 + 1;
      } while (uVar73 != uVar24);
    }
  }
  else if (1 < (int)param_7) {
    uVar24 = 1;
    local_100 = local_120._16_16_;
    local_1c0 = vpackssdw_avx(local_120._0_16_,local_120._16_16_);
    auVar185 = ZEXT1664((undefined1  [16])0x0);
    local_128 = param_4;
    do {
      uVar3 = *(ushort *)(param_3 + uVar24 * 2);
      lVar9 = (ulonglong)uVar3 * 0x60;
      lVar26 = (longlong)*(int *)(param_4 + (int)((uint)uVar3 * param_5 + param_6)) * 0x60;
      dVar27 = *(double *)(param_1 + lVar26);
      auVar226._8_8_ = 0;
      auVar226._0_8_ = dVar27;
      local_220 = *(double *)(param_1 + 8 + lVar26);
      uStack_218 = 0;
      dVar224 = *(double *)(param_1 + 0x10 + lVar26);
      auVar76._8_8_ = 0;
      auVar76._0_8_ = dVar224;
      dVar231 = *(double *)(param_1 + 0x18 + lVar26);
      local_260 = *(double *)(param_1 + 0x20 + lVar26);
      dStack_258 = 0.0;
      local_300._8_8_ = 0;
      local_300._0_8_ = *(ulonglong *)(param_1 + 0x28 + lVar26);
      local_310._8_8_ = 0;
      local_310._0_8_ = *(ulonglong *)(param_1 + 0x30 + lVar26);
      auVar217._0_8_ = *(double *)(param_1 + 0x40 + lVar26);
      auVar200._8_8_ = 0;
      auVar200._0_8_ = auVar217._0_8_;
      local_1e0._8_8_ = 0;
      local_1e0._0_8_ = *(ulonglong *)(param_1 + 0x48 + lVar26);
      dVar1 = *(double *)(param_1 + 0x50 + lVar26);
      auVar53._8_8_ = 0;
      auVar53._0_8_ = dVar1;
      local_320._8_8_ = 0;
      local_320._0_8_ = *(ulonglong *)(param_1 + 0x58 + lVar26);
      dVar218 = *(double *)(param_2 + lVar9);
      auVar232._8_8_ = 0;
      auVar232._0_8_ = dVar218;
      auVar131._8_8_ = 0;
      auVar131._0_8_ = *(ulonglong *)(param_2 + 8 + lVar9);
      auVar42._16_16_ = *(undefined1 (*) [16])(param_2 + 0x50 + lVar9);
      auVar42._0_16_ = *(undefined1 (*) [16])(param_2 + 0x40 + lVar9);
      auVar152._16_16_ = *(undefined1 (*) [16])(param_1 + 0x50 + lVar26);
      auVar152._0_16_ = *(undefined1 (*) [16])(param_1 + 0x40 + lVar26);
      auVar46 = vcmppd_avx(auVar42,ZEXT1632(ZEXT816(0)),1);
      auVar54 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
      auVar46 = vcmppd_avx(auVar152,ZEXT1632(ZEXT816(0)),1);
      auVar38 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
      dVar225 = *(double *)(param_2 + 0x10 + lVar9);
      auVar187._8_8_ = 0;
      auVar187._0_8_ = dVar225;
      auVar54 = vpackssdw_avx(auVar54,auVar185._0_16_);
      auVar38 = vpackssdw_avx(auVar38,auVar185._0_16_);
      auVar54 = vpor_avx(auVar54,auVar38);
      dVar186 = *(double *)(param_2 + 0x18 + lVar9);
      auVar169._8_8_ = 0;
      auVar169._0_8_ = dVar186;
      auVar54 = vpand_avx(auVar54,local_1c0);
      local_148 = *(ulonglong *)(param_2 + 0x20 + lVar9);
      auVar145._8_8_ = 0;
      auVar145._0_8_ = local_148;
      local_230 = *(double *)(param_2 + 0x28 + lVar9);
      uStack_228 = 0;
      local_138 = *(ulonglong *)(param_2 + 0x30 + lVar9);
      auVar159._8_8_ = 0;
      auVar159._0_8_ = local_138;
      dVar2 = *(double *)(param_2 + 0x40 + lVar9);
      auVar219._8_8_ = 0;
      auVar219._0_8_ = dVar2;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar9);
      auVar173._0_8_ = *(double *)(param_2 + 0x50 + lVar9);
      auVar215._8_8_ = 0;
      auVar215._0_8_ = auVar173._0_8_;
      uVar73 = *(ulonglong *)(param_2 + 0x58 + lVar9);
      if ((((((((SUB161(auVar54 >> 0xf,0) & 1) == 0 && (SUB161(auVar54 >> 0x1f,0) & 1) == 0) &&
              (SUB161(auVar54 >> 0x2f,0) & 1) == 0) && (SUB161(auVar54 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar54 >> 0x4f,0) & 1) == 0) && (SUB161(auVar54 >> 0x5f,0) & 1) == 0) &&
          (SUB161(auVar54 >> 0x6f,0) & 1) == 0) && -1 < auVar54[0xf]) {
        auVar57 = vunpcklpd_avx(auVar187,auVar169);
        auVar82 = vunpcklpd_avx(auVar169,auVar187);
        auVar54 = vmovlhps_avx(auVar232,auVar131);
        auVar38 = vmovlhps_avx(auVar131,auVar232);
        auVar119._8_8_ = dVar231;
        auVar119._0_8_ = dVar231;
        auVar227._8_8_ = dVar27;
        auVar227._0_8_ = dVar27;
        auVar103._8_8_ = local_220;
        auVar103._0_8_ = local_220;
        auVar79._8_8_ = dVar224;
        auVar79._0_8_ = dVar224;
        auVar75._0_8_ =
             auVar57._0_8_ * local_220 *
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
             auVar54._0_8_ * dVar231 +
             dVar27 * auVar82._0_8_ *
             ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
             auVar38._0_8_ * dVar224 *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
        auVar75._8_8_ =
             auVar57._8_8_ * local_220 * _UNK_150b54408 +
             auVar54._8_8_ * dVar231 + dVar27 * auVar82._8_8_ * _UNK_150b543e8 +
             auVar38._8_8_ * dVar224 * _UNK_150b54428;
        auVar91._16_8_ =
             auVar54._0_8_ * local_220 * _UNK_150b54410 +
             auVar57._0_8_ * dVar231 + dVar27 * auVar38._0_8_ * _UNK_150b543f0 +
             auVar82._0_8_ * dVar224 * _UNK_150b54430;
        auVar91._0_16_ = auVar75;
        auVar91._24_8_ =
             auVar54._8_8_ * local_220 * _UNK_150b54418 +
             auVar57._8_8_ * dVar231 + dVar27 * auVar38._8_8_ * _UNK_150b543f8 +
             auVar82._8_8_ * dVar224 * _UNK_150b54438;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_230;
        auVar38 = vunpcklpd_avx(auVar145,auVar19);
        auVar54 = vmovhps_avx(auVar159,*(undefined8 *)(param_2 + lVar9 + 0x38));
        auVar57 = vunpcklpd_avx(auVar53,local_320);
        auVar82 = vunpcklpd_avx(auVar200,local_1e0._0_16_);
        auVar55._0_8_ = auVar38._0_8_ * auVar82._0_8_;
        auVar55._8_8_ = auVar38._8_8_ * auVar82._8_8_;
        auVar62._16_8_ = auVar54._0_8_ * auVar57._0_8_;
        auVar62._0_16_ = auVar55;
        auVar62._24_8_ = auVar54._8_8_ * auVar57._8_8_;
        auVar179._16_16_ = auVar55;
        auVar179._0_16_ = auVar55;
        auVar46 = vperm2f128_avx(auVar62,auVar62,0x11);
        auVar46 = vshufpd_avx(auVar179,auVar46,9);
        auVar54 = vunpcklpd_avx(auVar79,auVar119);
        auVar38 = vunpcklpd_avx(auVar227,auVar103);
        auVar105 = vunpcklpd_avx(auVar103,auVar79);
        auVar139._0_8_ = auVar38._0_8_ * auVar46._0_8_;
        auVar139._8_8_ = auVar38._8_8_ * auVar46._8_8_;
        auVar139._16_8_ = auVar54._0_8_ * auVar46._16_8_;
        auVar139._24_8_ = auVar54._8_8_ * auVar46._24_8_;
        auVar135 = vunpcklpd_avx(auVar227,auVar119);
        auVar180._0_8_ = auVar105._0_8_ * auVar55._0_8_;
        auVar180._8_8_ = auVar105._8_8_ * auVar55._8_8_;
        auVar180._16_8_ = auVar135._0_8_ * auVar62._16_8_;
        auVar180._24_8_ = auVar135._8_8_ * auVar62._24_8_;
        auVar46 = vsubpd_avx(auVar139,auVar180);
        auVar133._0_8_ = auVar46._0_8_ + auVar46._0_8_;
        auVar133._8_8_ = auVar46._8_8_ + auVar46._8_8_;
        auVar140._16_8_ = auVar46._16_8_ + auVar46._16_8_;
        auVar140._0_16_ = auVar133;
        auVar140._24_8_ = auVar46._24_8_ + auVar46._24_8_;
        auVar181._16_16_ = auVar133;
        auVar181._0_16_ = auVar133;
        auVar46 = vperm2f128_avx(auVar140,auVar140,0x11);
        auVar46 = vshufpd_avx(auVar181,auVar46,9);
        auVar64 = vperm2f128_avx(auVar140,auVar140,1);
        auVar64 = vshufpd_avx(auVar64,auVar140,0xc);
        auVar124._0_8_ = auVar38._0_8_ * auVar64._0_8_;
        auVar124._8_8_ = auVar38._8_8_ * auVar64._8_8_;
        auVar124._16_8_ = auVar54._0_8_ * auVar64._16_8_;
        auVar124._24_8_ = auVar54._8_8_ * auVar64._24_8_;
        auVar114._0_8_ = auVar46._0_8_ * auVar105._0_8_;
        auVar114._8_8_ = auVar46._8_8_ * auVar105._8_8_;
        auVar114._16_8_ = auVar46._16_8_ * auVar135._0_8_;
        auVar114._24_8_ = auVar46._24_8_ * auVar135._8_8_;
        auVar64 = vsubpd_avx(auVar124,auVar114);
        auVar125._16_16_ = auVar64._0_16_;
        auVar125._0_16_ = auVar64._0_16_;
        auVar64 = vperm2f128_avx(auVar64,auVar64,0x11);
        auVar64 = vshufpd_avx(auVar125,auVar64,9);
        local_320 = vshufpd_avx(auVar75,auVar75,1);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = local_260;
        auVar105 = vunpcklpd_avx(auVar14,local_300);
        auVar50 = auVar91._16_16_;
        auVar54 = vmovhps_avx(local_310,*(undefined8 *)(param_1 + lVar26 + 0x38));
        auVar38 = vshufpd_avx(auVar50,auVar50,1);
        auVar56._0_8_ = auVar105._0_8_ + auVar55._0_8_ + auVar46._0_8_ * dVar231 + auVar64._0_8_;
        auVar56._8_8_ = auVar105._8_8_ + auVar55._8_8_ + auVar46._8_8_ * dVar231 + auVar64._8_8_;
        auVar63._16_8_ = auVar54._0_8_ + auVar62._16_8_ + auVar46._16_8_ * dVar231 + auVar64._16_8_;
        auVar63._0_16_ = auVar56;
        auVar63._24_8_ = auVar54._8_8_ + auVar62._24_8_ + auVar46._24_8_ * dVar231 + auVar64._24_8_;
        auVar54 = vshufpd_avx(auVar56,auVar56,1);
        local_260 = auVar54._0_8_;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar73;
        auVar105 = vunpcklpd_avx(auVar215,auVar11);
        auVar135 = vunpcklpd_avx(auVar219,auVar32);
        auVar54 = vshufpd_avx(auVar63._16_16_,auVar63._16_16_,1);
        uVar99 = auVar54._0_8_;
        auVar233._0_8_ = auVar82._0_8_ * auVar135._0_8_;
        auVar233._8_8_ = auVar82._8_8_ * auVar135._8_8_;
        auVar54 = vshufpd_avx(auVar233,auVar233,1);
        local_300._0_8_ = auVar54._0_8_;
        auVar173._0_8_ = auVar105._0_8_ * auVar57._0_8_;
        auVar173._8_8_ = auVar105._8_8_ * auVar57._8_8_;
        auVar54 = vshufpd_avx(auVar173,auVar173,1);
        local_310._0_8_ = auVar54._0_8_;
        dVar27 = auVar56._0_8_;
        dVar224 = auVar63._16_8_;
        dVar231 = auVar233._0_8_;
      }
      else {
        auVar54 = vmovlhps_avx(auVar232,auVar131);
        auVar170._8_8_ = dVar186;
        auVar170._0_8_ = dVar186;
        auVar38 = vunpcklpd_avx(auVar187,auVar170);
        dVar199 = auVar54._0_8_;
        auVar188._0_8_ = dVar199 + dVar199;
        dVar6 = auVar54._8_8_;
        auVar188._8_8_ = dVar6 + dVar6;
        auVar193._16_8_ = auVar38._0_8_ + auVar38._0_8_;
        auVar193._0_16_ = auVar188;
        auVar193._24_8_ = auVar38._8_8_ + auVar38._8_8_;
        auVar209._0_8_ = dVar199 * auVar188._0_8_;
        auVar209._8_8_ = dVar6 * auVar188._8_8_;
        auVar211._16_8_ = dVar225 * auVar193._16_8_;
        auVar211._0_16_ = auVar209;
        auVar211._24_8_ = auVar193._24_8_ * 0.0;
        auVar54 = vshufpd_avx(auVar209,auVar209,1);
        auVar46 = vperm2f128_avx(auVar211,auVar211,1);
        auVar46 = vshufpd_avx(auVar46,auVar46,4);
        auVar107._0_8_ = auVar46._0_8_ + auVar54._0_8_;
        auVar107._8_8_ = auVar46._8_8_ + auVar54._8_8_;
        auVar107._16_8_ = auVar46._16_8_ + auVar209._0_8_;
        auVar107._24_8_ = auVar46._24_8_ + auVar209._8_8_;
        auVar64 = vperm2f128_avx(auVar193,auVar193,1);
        auVar46 = vshufpd_avx(auVar193,auVar64,1);
        auVar137._0_8_ = auVar46._0_8_ * dVar199;
        auVar137._8_8_ = auVar46._8_8_ * dVar6;
        auVar137._16_8_ = auVar46._16_8_ * dVar218;
        auVar137._24_8_ = auVar46._24_8_ * dVar218;
        auVar194._16_16_ = auVar188;
        auVar194._0_16_ = auVar188;
        auVar46 = vshufpd_avx(auVar64,auVar194,4);
        auVar177._0_8_ = dVar186 * auVar46._0_8_;
        auVar177._8_8_ = dVar186 * auVar46._8_8_;
        auVar177._16_8_ = dVar186 * auVar46._16_8_;
        auVar177._24_8_ = dVar186 * auVar46._24_8_;
        auVar204._8_8_ = __real_3ff0000000000000;
        auVar204._0_8_ = __real_3ff0000000000000;
        auVar204._16_8_ = __real_3ff0000000000000;
        auVar204._24_8_ = __real_3ff0000000000000;
        auVar46 = vsubpd_avx(auVar204,auVar107);
        auVar54 = vunpcklpd_avx(auVar219,auVar32);
        dVar186 = auVar54._0_8_;
        auVar100._0_8_ = dVar186 * auVar46._0_8_;
        dVar199 = auVar54._8_8_;
        auVar100._8_8_ = dVar199 * auVar46._8_8_;
        auVar108._16_8_ = auVar173._0_8_ * auVar46._16_8_;
        auVar108._0_16_ = auVar100;
        auVar108._24_8_ = auVar46._24_8_ * 0.0;
        auVar189._0_8_ = (auVar177._0_8_ + auVar137._0_8_) * dVar186;
        auVar189._8_8_ = (auVar177._8_8_ + auVar137._8_8_) * dVar199;
        auVar195._16_8_ = (auVar177._16_8_ + auVar137._16_8_) * auVar173._0_8_;
        auVar195._0_16_ = auVar189;
        auVar195._24_8_ = (auVar177._24_8_ + auVar137._24_8_) * 0.0;
        auVar46 = vsubpd_avx(auVar137,auVar177);
        auVar54 = vunpcklpd_avx(auVar32,auVar215);
        auVar33._0_8_ = auVar46._0_8_ * auVar54._0_8_;
        auVar33._8_8_ = auVar46._8_8_ * auVar54._8_8_;
        auVar43._16_8_ = auVar46._16_8_ * dVar2;
        auVar43._0_16_ = auVar33;
        auVar43._24_8_ = auVar46._24_8_ * 0.0;
        local_1a8 = vunpcklpd_avx(auVar100,auVar189);
        local_198[0] = (double)vmovlps_avx(auVar43._16_16_);
        local_198[1] = 0.0;
        local_188 = vblendpd_avx(auVar100,auVar33,1);
        local_178 = vmovhpd_avx(auVar189);
        local_168 = vblendpd_avx(auVar33,auVar195._16_16_,1);
        local_170 = 0;
        local_158 = vmovlps_avx(auVar108._16_16_);
        local_150 = 0;
        local_140 = (ulonglong)local_230;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = local_220;
        auVar54 = vunpcklpd_avx(auVar226,auVar21);
        auVar116._8_8_ = dVar231;
        auVar116._0_8_ = dVar231;
        auVar38 = vunpcklpd_avx(auVar76,auVar116);
        dVar218 = auVar54._0_8_;
        auVar77._0_8_ = dVar218 + dVar218;
        dVar225 = auVar54._8_8_;
        auVar77._8_8_ = dVar225 + dVar225;
        auVar85._16_8_ = auVar38._0_8_ + auVar38._0_8_;
        auVar85._0_16_ = auVar77;
        auVar85._24_8_ = auVar38._8_8_ + auVar38._8_8_;
        auVar101._0_8_ = dVar218 * auVar77._0_8_;
        auVar101._8_8_ = dVar225 * auVar77._8_8_;
        auVar109._16_8_ = dVar224 * auVar85._16_8_;
        auVar109._0_16_ = auVar101;
        auVar109._24_8_ = auVar85._24_8_ * 0.0;
        auVar54 = vshufpd_avx(auVar101,auVar101,1);
        auVar46 = vperm2f128_avx(auVar109,auVar109,1);
        auVar46 = vshufpd_avx(auVar46,auVar46,4);
        auVar110._0_8_ = auVar54._0_8_ + auVar46._0_8_;
        auVar110._8_8_ = auVar54._8_8_ + auVar46._8_8_;
        auVar110._16_8_ = auVar101._0_8_ + auVar46._16_8_;
        auVar110._24_8_ = auVar101._8_8_ + auVar46._24_8_;
        auVar138._8_8_ = __real_3ff0000000000000;
        auVar138._0_8_ = __real_3ff0000000000000;
        auVar138._16_8_ = __real_3ff0000000000000;
        auVar138._24_8_ = __real_3ff0000000000000;
        auVar64 = vsubpd_avx(auVar138,auVar110);
        auVar48 = vperm2f128_avx(auVar85,auVar85,1);
        auVar46 = vshufpd_avx(auVar85,auVar48,1);
        auVar44._0_8_ = dVar218 * auVar46._0_8_;
        auVar44._8_8_ = dVar225 * auVar46._8_8_;
        auVar44._16_8_ = dVar27 * auVar46._16_8_;
        auVar44._24_8_ = dVar27 * auVar46._24_8_;
        auVar54 = vunpcklpd_avx(auVar200,local_1e0._0_16_);
        auVar86._16_16_ = auVar77;
        auVar86._0_16_ = auVar77;
        auVar46 = vshufpd_avx(auVar48,auVar86,4);
        dVar27 = auVar54._0_8_;
        auVar102._0_8_ = auVar64._0_8_ * dVar27;
        dVar224 = auVar54._8_8_;
        auVar102._8_8_ = auVar64._8_8_ * dVar224;
        auVar111._16_8_ = auVar64._16_8_ * dVar1;
        auVar111._0_16_ = auVar102;
        auVar111._24_8_ = auVar64._24_8_ * 0.0;
        auVar87._0_8_ = dVar231 * auVar46._0_8_;
        auVar87._8_8_ = dVar231 * auVar46._8_8_;
        auVar87._16_8_ = dVar231 * auVar46._16_8_;
        auVar87._24_8_ = dVar231 * auVar46._24_8_;
        auVar117._0_8_ = (auVar44._0_8_ + auVar87._0_8_) * dVar27;
        auVar117._8_8_ = (auVar44._8_8_ + auVar87._8_8_) * dVar224;
        auVar123._16_8_ = (auVar44._16_8_ + auVar87._16_8_) * dVar1;
        auVar123._0_16_ = auVar117;
        auVar123._24_8_ = (auVar44._24_8_ + auVar87._24_8_) * 0.0;
        auVar46 = vsubpd_avx(auVar44,auVar87);
        auVar54 = vunpcklpd_avx(local_1e0._0_16_,auVar53);
        auVar78._0_8_ = auVar46._0_8_ * auVar54._0_8_;
        auVar78._8_8_ = auVar46._8_8_ * auVar54._8_8_;
        auVar88._16_8_ = auVar46._16_8_ * auVar217._0_8_;
        auVar88._0_16_ = auVar78;
        auVar88._24_8_ = auVar46._24_8_ * 0.0;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar73;
        auVar54 = vunpcklpd_avx(auVar215,auVar10);
        auVar38 = vunpcklpd_avx(auVar53,local_320);
        auVar132._0_8_ = dVar27 * dVar186;
        auVar132._8_8_ = dVar224 * dVar199;
        local_1e0._16_8_ = auVar38._0_8_ * auVar54._0_8_;
        local_1e0._0_16_ = auVar132;
        local_1e0._24_8_ = auVar38._8_8_ * auVar54._8_8_;
        auVar173._0_8_ = auVar173._0_8_ * dVar1;
        auVar54 = CONCAT88(auVar117._0_8_,auVar117._0_8_);
        auVar46 = vblendpd_avx(ZEXT1632(auVar123._16_16_),auVar88,2);
        auVar46 = vblendpd_avx(auVar46,auVar111,4);
        auVar64 = vblendpd_avx(ZEXT1632(auVar102),ZEXT1632(auVar54),2);
        auVar64 = vblendpd_avx(auVar64,auVar88,4);
        auVar89._16_16_ = auVar117;
        auVar89._0_16_ = auVar78;
        auVar48 = vshufpd_avx(auVar89,ZEXT1632(auVar102),0xe);
        auVar54 = vmovhps_avx(local_310,__real_3ff0000000000000);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = local_260;
        auVar38 = vunpcklpd_avx(auVar13,local_300);
        local_130 = 0x3ff0000000000000;
        lVar26 = 0x18;
        do {
          dVar27 = *(double *)(local_1c0 + lVar26);
          dVar224 = *(double *)((longlong)&dStack_1b0 + lVar26);
          dVar231 = *(double *)(local_1c0 + lVar26 + 8);
          auVar217._0_8_ = *(double *)(local_1a8 + lVar26);
          *(double *)(local_300 + lVar26 + 8) =
               auVar64._0_8_ * dVar27 + auVar46._0_8_ * dVar224 + auVar48._0_8_ * dVar231 +
               auVar38._0_8_ * auVar217._0_8_;
          *(double *)((longlong)local_2f0 + lVar26) =
               auVar64._8_8_ * dVar27 + auVar46._8_8_ * dVar224 + auVar48._8_8_ * dVar231 +
               auVar38._8_8_ * auVar217._0_8_;
          *(double *)((longlong)local_2f0 + lVar26 + 8) =
               auVar64._16_8_ * dVar27 + auVar46._16_8_ * dVar224 + auVar48._16_8_ * dVar231 +
               auVar54._0_8_ * auVar217._0_8_;
          *(double *)(local_2e0 + lVar26) =
               auVar64._24_8_ * dVar27 + auVar46._24_8_ * dVar224 + auVar48._24_8_ * dVar231 +
               auVar54._8_8_ * auVar217._0_8_;
          lVar26 = lVar26 + 0x20;
        } while (lVar26 != 0x98);
        dVar27 = (double)local_2e0 * (double)local_2e0 + adStack_2d8[0] * adStack_2d8[0] +
                 adStack_2d8[1] * adStack_2d8[1];
        dVar224 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar27 + __real_be45798ee2308c3a) {
          dVar224 = __real_3ff0000000000000 / SQRT(dVar27);
        }
        dVar27 = (double)local_2c0._0_8_ * (double)local_2c0._0_8_ +
                 (double)local_2c0._8_8_ * (double)local_2c0._8_8_ + local_2b0 * local_2b0;
        dVar231 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar27 + __real_be45798ee2308c3a) {
          dVar231 = __real_3ff0000000000000 / SQRT(dVar27);
        }
        auVar54 = vshufpd_avx(auVar132,auVar132,1);
        auVar57 = vshufpd_avx(local_1e0._16_16_,local_1e0._16_16_,1);
        dVar27 = local_290 * local_290 +
                 (double)local_2a0._8_8_ * (double)local_2a0._8_8_ +
                 (double)local_2a0._0_8_ * (double)local_2a0._0_8_;
        auVar217._0_8_ = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar27 + __real_be45798ee2308c3a) {
          auVar217._0_8_ = __real_3ff0000000000000 / SQRT(dVar27);
        }
        auVar38 = vpcmpeqd_avx(ZEXT816(0),local_100);
        auVar82 = vpcmpeqd_avx(ZEXT816(0),local_120._0_16_);
        auVar38 = vpackssdw_avx(auVar82,auVar38);
        auVar118._8_8_ = 0;
        auVar118._0_8_ = dVar224 * (double)local_2e0;
        auVar146._8_8_ = 0;
        auVar146._0_8_ = dVar224 * adStack_2d8[0];
        auVar135 = vunpcklpd_avx(auVar118,auVar146);
        auVar147._8_8_ = 0;
        auVar147._0_8_ = dVar231 * (double)local_2c0._0_8_;
        auVar171._8_8_ = 0;
        auVar171._0_8_ = dVar231 * (double)local_2c0._8_8_;
        auVar50 = vunpcklpd_avx(auVar147,auVar171);
        auVar172._8_8_ = 0;
        auVar172._0_8_ = auVar217._0_8_ * (double)local_2a0._0_8_;
        auVar190._8_8_ = 0;
        auVar190._0_8_ = auVar217._0_8_ * (double)local_2a0._8_8_;
        auVar174 = vunpcklpd_avx(auVar172,auVar190);
        auVar51 = ZEXT816(0);
        auVar46 = vcmppd_avx(ZEXT1632(auVar51),local_1e0,2);
        auVar82 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
        auVar105 = vpshufd_avx(auVar82,0x50);
        auVar82 = vpshufd_avx(auVar82,0xfa);
        auVar112._16_16_ = auVar82;
        auVar112._0_16_ = auVar105;
        auVar46 = vcmpps_avx(ZEXT1632(auVar51),ZEXT1632(auVar51),0xf);
        auVar46 = vblendvps_avx(ZEXT1632(auVar51),auVar46,auVar112);
        auVar105 = ZEXT416(0) << 0x40;
        auVar201._0_4_ =
             auVar46._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000
             ^ ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
        auVar201._4_4_ = auVar46._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
        auVar201._8_4_ = auVar46._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
        auVar201._12_4_ = auVar46._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
        auVar205._16_4_ = auVar46._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
        auVar205._0_16_ = auVar201;
        auVar205._20_4_ = auVar46._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
        auVar205._24_4_ = auVar46._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
        auVar205._28_4_ = auVar46._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
        auVar82 = vshufps_avx(auVar201,auVar201,0x44);
        local_2e0 = (undefined1  [8])(auVar135._0_8_ * auVar82._0_8_);
        adStack_2d8[0] = auVar135._8_8_ * auVar82._8_8_;
        auVar113._16_8_ = dVar224 * adStack_2d8[1] * auVar82._0_8_;
        auVar113._0_16_ = _local_2e0;
        auVar113._24_8_ = auVar82._8_8_ * 0.0;
        adStack_2d8[1] = (double)vmovlpd_avx(auVar113._16_16_);
        auVar82 = vshufps_avx(auVar201,auVar201,0xee);
        local_2c0._0_8_ = auVar82._0_8_ * auVar50._0_8_;
        local_2c0._8_8_ = auVar82._8_8_ * auVar50._8_8_;
        auVar90._16_8_ = auVar82._0_8_ * dVar231 * local_2b0;
        auVar90._0_16_ = local_2c0;
        auVar90._24_8_ = auVar82._8_8_ * 0.0;
        local_2b0 = (double)vmovlpd_avx(auVar90._16_16_);
        auVar46 = vperm2f128_avx(auVar205,auVar205,0x11);
        local_2a0._0_8_ = auVar46._0_8_ * auVar174._0_8_;
        local_2a0._8_8_ = auVar46._0_8_ * auVar174._8_8_;
        auVar178._16_8_ = auVar46._16_8_ * auVar217._0_8_ * local_290;
        auVar178._0_16_ = local_2a0;
        auVar178._24_8_ = auVar46._16_8_ * 0.0;
        auVar164._8_8_ = __real_0010000000000000;
        auVar164._0_8_ = __real_0010000000000000;
        auVar164._16_8_ = __real_0010000000000000;
        auVar164._24_8_ = __real_0010000000000000;
        auVar46 = vblendpd_avx(auVar113,auVar164,8);
        auVar153._0_8_ = __real_7fffffffffffffff & auVar46._0_8_;
        auVar153._8_8_ = __real_7fffffffffffffff & auVar46._8_8_;
        auVar153._16_8_ = __real_7fffffffffffffff & auVar46._16_8_;
        auVar153._24_8_ = __real_7fffffffffffffff & auVar46._24_8_;
        auVar206._8_8_ = __real_3f1a36e2eb1c432d;
        auVar206._0_8_ = __real_3f1a36e2eb1c432d;
        auVar206._16_8_ = __real_3f1a36e2eb1c432d;
        auVar206._24_8_ = __real_3f1a36e2eb1c432d;
        auVar46 = vcmppd_avx(auVar153,auVar206,6);
        auVar82 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
        local_290 = (double)vmovlpd_avx(auVar178._16_16_);
        auVar82 = vpackssdw_avx(auVar82,auVar105);
        auVar82 = vpandn_avx(auVar38,auVar82);
        if ((((((((((((((((SUB161(auVar82 >> 7,0) & 1) == 0 && (SUB161(auVar82 >> 0xf,0) & 1) == 0)
                        && (SUB161(auVar82 >> 0x17,0) & 1) == 0) &&
                       (SUB161(auVar82 >> 0x1f,0) & 1) == 0) && (SUB161(auVar82 >> 0x27,0) & 1) == 0
                      ) && (SUB161(auVar82 >> 0x2f,0) & 1) == 0) &&
                    (SUB161(auVar82 >> 0x37,0) & 1) == 0) && (SUB161(auVar82 >> 0x3f,0) & 1) == 0)
                  && (SUB161(auVar82 >> 0x47,0) & 1) == 0) && (SUB161(auVar82 >> 0x4f,0) & 1) == 0)
                && (SUB161(auVar82 >> 0x57,0) & 1) == 0) && (SUB161(auVar82 >> 0x5f,0) & 1) == 0) &&
              (SUB161(auVar82 >> 0x67,0) & 1) == 0) && (SUB161(auVar82 >> 0x6f,0) & 1) == 0) &&
            (SUB161(auVar82 >> 0x77,0) & 1) == 0) && -1 < auVar82[0xf]) {
          auVar34 = ZEXT816(0) << 0x20;
          auVar52 = SUB6416(ZEXT864(0),0) << 0x40;
          auVar74 = ZEXT816(0) << 0x40;
          auVar144._8_8_ = 0;
          auVar144._0_8_ = __real_3ff0000000000000;
        }
        else {
          auVar46 = vblendpd_avx(auVar90,auVar164,8);
          auVar154._0_8_ = __real_7fffffffffffffff & auVar46._0_8_;
          auVar154._8_8_ = __real_7fffffffffffffff & auVar46._8_8_;
          auVar154._16_8_ = __real_7fffffffffffffff & auVar46._16_8_;
          auVar154._24_8_ = __real_7fffffffffffffff & auVar46._24_8_;
          auVar46 = vcmppd_avx(auVar154,auVar206,6);
          auVar82 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
          auVar82 = vpackssdw_avx(auVar82,auVar105);
          auVar82 = vpandn_avx(auVar38,auVar82);
          if ((((((((((((((((SUB161(auVar82 >> 7,0) & 1) != 0 || (SUB161(auVar82 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar82 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar82 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar82 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar82 >> 0x2f,0) & 1) != 0) || (SUB161(auVar82 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar82 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar82 >> 0x47,0) & 1) != 0) || (SUB161(auVar82 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar82 >> 0x57,0) & 1) != 0) || (SUB161(auVar82 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar82 >> 0x67,0) & 1) != 0) || (SUB161(auVar82 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar82 >> 0x77,0) & 1) != 0) || auVar82[0xf] < '\0') {
            auVar46 = vblendpd_avx(auVar178,auVar164,8);
            auVar155._0_8_ = __real_7fffffffffffffff & auVar46._0_8_;
            auVar155._8_8_ = __real_7fffffffffffffff & auVar46._8_8_;
            auVar155._16_8_ = __real_7fffffffffffffff & auVar46._16_8_;
            auVar155._24_8_ = __real_7fffffffffffffff & auVar46._24_8_;
            auVar46 = vcmppd_avx(auVar155,auVar206,6);
            auVar82 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
            auVar82 = vpackssdw_avx(auVar82,auVar105);
            auVar38 = vpandn_avx(auVar38,auVar82);
            if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar38 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') {
              auVar38 = vshufpd_avx(local_2c0,local_2c0,1);
              dVar27 = auVar178._16_8_ + auVar38._0_8_ + (double)local_2e0;
              if (dVar27 <= __real_0000000000000000) {
                bVar7 = (double)local_2e0 < auVar38._0_8_;
                uVar73 = (ulonglong)bVar7;
                if (*(double *)(local_2e0 + ((uint)bVar7 * 0x20 + (uint)bVar7 * 8)) <
                    auVar178._16_8_) {
                  uVar73 = 2;
                }
                iVar4 = *(int *)(&DAT_151c6afa0 + uVar73 * 4);
                lVar26 = (longlong)iVar4;
                iVar8 = (int)uVar73;
                iVar5 = *(int *)(&DAT_151c6afa0 + lVar26 * 4);
                dVar224 = __real_3ff0000000000000 /
                          SQRT(((*(double *)(local_2e0 + (uint)(iVar8 * 0x28)) -
                                *(double *)(local_2e0 + lVar26 * 0x28)) -
                               *(double *)(local_2e0 + (longlong)iVar5 * 0x28)) +
                               __real_3ff0000000000000);
                dVar27 = dVar224 * __real_3fe0000000000000;
                *(double *)((longlong)&local_200 + (ulonglong)(uint)(iVar8 * 8)) =
                     (__real_3ff0000000000000 / dVar224) * __real_3fe0000000000000;
                (&local_200)[lVar26] =
                     (*(double *)(local_2e0 + (longlong)(iVar4 + iVar8 * 4) * 8) +
                     *(double *)(local_2e0 + (longlong)(iVar8 + iVar4 * 4) * 8)) * dVar27;
                (&local_200)[iVar5] =
                     dVar27 * (*(double *)(local_2e0 + (longlong)(iVar5 + iVar8 * 4) * 8) +
                              *(double *)(local_2e0 + (longlong)(iVar8 + iVar5 * 4) * 8));
                auVar144._8_8_ = 0;
                auVar144._0_8_ =
                     dVar27 * (*(double *)(local_2e0 + (longlong)(iVar5 + iVar4 * 4) * 8) -
                              *(double *)(local_2e0 + (longlong)(iVar4 + iVar5 * 4) * 8));
                auVar34._8_8_ = 0;
                auVar34._0_8_ = local_200;
                auVar52._8_8_ = 0;
                auVar52._0_8_ = local_1f8;
                auVar74._8_8_ = 0;
                auVar74._0_8_ = local_1f0;
                param_4 = local_128;
              }
              else {
                auVar38 = vshufpd_avx(_local_2e0,_local_2e0,1);
                auVar82 = vshufpd_avx(local_2a0,local_2a0,1);
                dVar224 = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + dVar27);
                dVar27 = dVar224 * __real_3fe0000000000000;
                auVar34._8_8_ = 0;
                auVar34._0_8_ = dVar27 * (auVar90._16_8_ - auVar82._0_8_);
                auVar52._8_8_ = 0;
                auVar52._0_8_ = dVar27 * ((double)local_2a0._0_8_ - auVar113._16_8_);
                auVar74._8_8_ = 0;
                auVar74._0_8_ = dVar27 * (auVar38._0_8_ - (double)local_2c0._0_8_);
                auVar144._8_8_ = 0;
                auVar144._0_8_ = (__real_3ff0000000000000 / dVar224) * __real_3fe0000000000000;
              }
              goto LAB_140a9bc58;
            }
          }
          auVar34._0_12_ = ZEXT812(0);
          auVar34._12_4_ = 0;
          auVar52 = SUB6416(ZEXT864(0),0) << 0x40;
          auVar74 = ZEXT816(0) << 0x40;
          auVar144._8_8_ = 0;
          auVar144._0_8_ = __real_3ff0000000000000;
        }
LAB_140a9bc58:
        auVar213._8_8_ = 0;
        auVar213._0_8_ = __real_3e45798ee2308c3a;
        auVar38 = vunpcklpd_avx(auVar74,auVar144);
        auVar82 = vunpcklpd_avx(auVar34,auVar52);
        dVar224 = auVar38._0_8_;
        auVar217._0_8_ = auVar38._8_8_;
        dVar231 = auVar82._0_8_;
        dVar1 = auVar82._8_8_;
        auVar28._0_8_ = dVar231 * dVar231 + dVar224 * dVar224;
        auVar28._8_8_ = dVar1 * dVar1 + auVar217._0_8_ * auVar217._0_8_;
        auVar38 = vshufpd_avx(auVar28,auVar28,1);
        dVar27 = auVar28._0_8_ + auVar38._0_8_;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = dVar27;
        auVar38 = vcmpsd_avx(auVar213,auVar29,6);
        uVar73 = ~auVar38._0_8_ & __real_ffffffffffffffff;
        dVar27 = __real_3ff0000000000000 / SQRT(dVar27);
        auVar75._0_8_ = (double)((ulonglong)(dVar231 * dVar27) & uVar73);
        auVar75._8_8_ = (double)((ulonglong)(dVar1 * dVar27) & uVar73);
        auVar84._16_8_ = (ulonglong)(dVar224 * dVar27) & uVar73;
        auVar84._0_16_ = auVar75;
        auVar84._24_8_ = (ulonglong)(auVar217._0_8_ * dVar27) & uVar73;
        auVar41._0_8_ =
             ~uVar73 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar41._8_8_ = ~uVar73 & _UNK_150b54548;
        auVar41._16_8_ = ~uVar73 & _UNK_150b54550;
        auVar41._24_8_ = ~uVar73 & _UNK_150b54558;
        auVar50 = auVar84._16_16_ | auVar41._16_16_;
        local_320 = vshufps_avx(auVar75,auVar75,0x4e);
        auVar38 = vshufps_avx(auVar50,auVar50,0x4e);
        local_260 = (double)local_278;
        local_300._0_8_ = auVar54._0_8_;
        local_310._0_8_ = auVar57._0_8_;
        uVar99 = 0;
        dVar27 = dStack_280;
        dVar224 = dStack_270;
        dVar231 = (double)local_1e0._0_8_;
      }
      auVar214._8_8_ = 0;
      auVar214._0_8_ = __real_3e45798ee2308c3a;
      auVar54 = vunpcklpd_avx(auVar75,local_320);
      auVar38 = vunpcklpd_avx(auVar50,auVar38);
      puVar25 = (ulonglong *)(lVar9 + param_1);
      dVar1 = auVar38._0_8_;
      dVar225 = auVar38._8_8_;
      dVar218 = auVar54._0_8_;
      dVar186 = auVar54._8_8_;
      auVar30._0_8_ = dVar218 * dVar218 + dVar1 * dVar1;
      auVar30._8_8_ = dVar186 * dVar186 + dVar225 * dVar225;
      auVar54 = vshufpd_avx(auVar30,auVar30,1);
      auVar217._0_8_ = auVar30._0_8_ + auVar54._0_8_;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = auVar217._0_8_;
      auVar54 = vcmpsd_avx(auVar214,auVar31,6);
      uVar73 = ~auVar54._0_8_ & __real_ffffffffffffffff;
      auVar217._0_8_ = __real_3ff0000000000000 / SQRT(auVar217._0_8_);
      uVar96 = ~uVar73 & _UNK_150b54548;
      uVar97 = ~uVar73 & _UNK_150b54550;
      uVar98 = ~uVar73 & _UNK_150b54558;
      *puVar25 = (ulonglong)(dVar218 * auVar217._0_8_) & uVar73 |
                 ~uVar73 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      puVar25[1] = (ulonglong)(dVar186 * auVar217._0_8_) & uVar73 | uVar96;
      puVar25[2] = (ulonglong)(dVar1 * auVar217._0_8_) & uVar73 | uVar97;
      puVar25[3] = (ulonglong)(dVar225 * auVar217._0_8_) & uVar73 | uVar98;
      uVar73 = (ulonglong)((uint)uVar3 * 0x60);
      *(double *)(param_1 + 0x20 + uVar73) = dVar27;
      *(double *)(param_1 + 0x28 + uVar73) = local_260;
      *(double *)(param_1 + 0x30 + uVar73) = dVar224;
      *(undefined8 *)(param_1 + 0x38 + uVar73) = uVar99;
      *(double *)(param_1 + 0x40 + uVar73) = dVar231;
      *(undefined8 *)(param_1 + 0x48 + uVar73) = local_300._0_8_;
      *(double *)(param_1 + 0x50 + uVar73) = auVar173._0_8_;
      *(undefined8 *)(param_1 + 0x58 + uVar73) = local_310._0_8_;
      uVar24 = uVar24 + 1;
      auVar185 = ZEXT1664(ZEXT816(0));
    } while (uVar24 != param_7);
  }
  return;
}

// FillComponentSpaceTransforms_avx @ 140a9d640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FillComponentSpaceTransforms_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               int param_6,uint param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong uVar22;
  ulonglong *puVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar36 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  ulonglong uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [16];
  ulonglong uVar74;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  ulonglong uVar75;
  ulonglong uVar76;
  undefined1 auVar71 [32];
  undefined1 auVar73 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [32];
  undefined1 auVar114 [16];
  undefined1 auVar115 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  double dVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar129 [32];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  double local_290 [2];
  undefined1 local_280 [8];
  double adStack_278 [3];
  undefined1 local_260 [16];
  double local_250;
  undefined8 local_248;
  undefined1 local_240 [16];
  double local_230;
  undefined8 local_228;
  double dStack_220;
  undefined8 local_218;
  double dStack_210;
  undefined8 local_208;
  longlong local_1e8;
  double local_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  ulonglong local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  undefined8 uStack_1a8;
  ulonglong local_1a0;
  undefined8 uStack_198;
  double local_190 [4];
  undefined1 local_170 [16];
  double local_160 [2];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar44 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar70 [32];
  undefined1 auVar72 [32];
  undefined1 auVar80 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar104 [32];
  undefined1 auVar107 [32];
  undefined1 auVar113 [32];
  undefined1 auVar122 [32];
  undefined1 auVar128 [32];
  
  if (1 < (int)param_7) {
    uVar22 = 1;
    local_1e8 = param_3;
    do {
      uVar5 = *(ushort *)(param_3 + uVar22 * 2);
      lVar12 = (ulonglong)uVar5 * 0x60;
      lVar24 = (longlong)*(int *)(param_4 + (int)((uint)uVar5 * param_5 + param_6)) * 0x60;
      dVar37 = *(double *)(param_1 + lVar24);
      auVar36._8_8_ = 0;
      auVar36._0_8_ = dVar37;
      local_1b0 = *(double *)(param_1 + 8 + lVar24);
      uStack_1a8 = 0;
      dVar62 = *(double *)(param_1 + 0x10 + lVar24);
      auVar91._8_8_ = 0;
      auVar91._0_8_ = dVar62;
      dVar118 = *(double *)(param_1 + 0x18 + lVar24);
      local_1e0 = *(double *)(param_1 + 0x20 + lVar24);
      dStack_1d8 = 0.0;
      local_2c0._8_8_ = 0;
      local_2c0._0_8_ = *(ulonglong *)(param_1 + 0x28 + lVar24);
      local_2d0._8_8_ = 0;
      local_2d0._0_8_ = *(ulonglong *)(param_1 + 0x30 + lVar24);
      local_2a0._0_8_ = *(double *)(param_1 + 0x40 + lVar24);
      local_2a0._8_8_ = 0;
      local_1a0 = *(ulonglong *)(param_1 + 0x48 + lVar24);
      uStack_198 = 0;
      auVar117._0_8_ = *(double *)(param_1 + 0x50 + lVar24);
      auVar99._8_8_ = 0;
      auVar99._0_8_ = auVar117._0_8_;
      local_2b0._8_8_ = 0;
      local_2b0._0_8_ = *(ulonglong *)(param_1 + 0x58 + lVar24);
      dVar123 = *(double *)(param_2 + lVar12);
      auVar116._8_8_ = 0;
      auVar116._0_8_ = dVar123;
      auVar32._16_16_ = *(undefined1 (*) [16])(param_2 + 0x50 + lVar12);
      auVar32._0_16_ = *(undefined1 (*) [16])(param_2 + 0x40 + lVar12);
      auVar43._16_16_ = *(undefined1 (*) [16])(param_1 + 0x50 + lVar24);
      auVar43._0_16_ = *(undefined1 (*) [16])(param_1 + 0x40 + lVar24);
      auVar32 = vcmppd_avx(auVar32,ZEXT1632(ZEXT816(0)),1);
      auVar43 = vcmppd_avx(auVar43,ZEXT1632(ZEXT816(0)),1);
      auVar56 = vpor_avx(auVar32._16_16_,auVar43._16_16_);
      auVar126._8_8_ = 0;
      auVar126._0_8_ = *(ulonglong *)(param_2 + 8 + lVar12);
      dVar1 = *(double *)(param_2 + 0x10 + lVar12);
      auVar38._8_8_ = 0;
      auVar38._0_8_ = dVar1;
      auVar56 = vpackssdw_avx(auVar32._0_16_ | auVar43._0_16_,auVar56);
      dVar2 = *(double *)(param_2 + 0x18 + lVar12);
      auVar119._8_8_ = 0;
      auVar119._0_8_ = dVar2;
      local_110 = *(ulonglong *)(param_2 + 0x20 + lVar12);
      auVar64._8_8_ = 0;
      auVar64._0_8_ = local_110;
      local_108 = *(ulonglong *)(param_2 + 0x28 + lVar12);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = local_108;
      local_1c0 = *(ulonglong *)(param_2 + 0x30 + lVar12);
      uStack_1b8 = 0;
      dVar3 = *(double *)(param_2 + 0x40 + lVar12);
      auVar114._8_8_ = 0;
      auVar114._0_8_ = dVar3;
      auVar78._8_8_ = 0;
      auVar78._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar12);
      dVar4 = *(double *)(param_2 + 0x50 + lVar12);
      auVar55._8_8_ = 0;
      auVar55._0_8_ = dVar4;
      uVar52 = *(ulonglong *)(param_2 + 0x58 + lVar12);
      if ((((SUB161(auVar56 >> 0x1f,0) & 1) == 0 && (SUB161(auVar56 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar56 >> 0x5f,0) & 1) == 0) && -1 < auVar56[0xf]) {
        auVar91 = vunpcklpd_avx(auVar38,auVar119);
        auVar36 = vunpcklpd_avx(auVar119,auVar38);
        auVar56 = vmovlhps_avx(auVar116,auVar126);
        auVar38 = vmovlhps_avx(auVar126,auVar116);
        auVar85._8_8_ = dVar118;
        auVar85._0_8_ = dVar118;
        auVar106._8_8_ = dVar37;
        auVar106._0_8_ = dVar37;
        auVar111._8_8_ = local_1b0;
        auVar111._0_8_ = local_1b0;
        auVar42._8_8_ = dVar62;
        auVar42._0_8_ = dVar62;
        auVar90._0_8_ =
             local_1b0 * auVar91._0_8_ *
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
             auVar56._0_8_ * dVar118 +
             dVar37 * auVar36._0_8_ *
             ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000 +
             auVar38._0_8_ * dVar62 *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
        auVar90._8_8_ =
             local_1b0 * auVar91._8_8_ * _UNK_150b54408 +
             auVar56._8_8_ * dVar118 + dVar37 * auVar36._8_8_ * _UNK_150b543e8 +
             auVar38._8_8_ * dVar62 * _UNK_150b54428;
        auVar98._16_8_ =
             local_1b0 * auVar56._0_8_ * _UNK_150b54410 +
             auVar91._0_8_ * dVar118 + dVar37 * auVar38._0_8_ * _UNK_150b543f0 +
             auVar36._0_8_ * dVar62 * _UNK_150b54430;
        auVar98._0_16_ = auVar90;
        auVar98._24_8_ =
             local_1b0 * auVar56._8_8_ * _UNK_150b54418 +
             auVar91._8_8_ * dVar118 + dVar37 * auVar38._8_8_ * _UNK_150b543f8 +
             auVar36._8_8_ * dVar62 * _UNK_150b54438;
        auVar28 = vunpcklpd_avx(auVar64,auVar28);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_1c0;
        auVar56 = vmovhps_avx(auVar18,*(undefined8 *)(param_2 + lVar12 + 0x38));
        auVar64 = vunpcklpd_avx(auVar99,local_2b0);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = local_1a0;
        auVar91 = vunpcklpd_avx(local_2a0,auVar21);
        auVar29._0_8_ = auVar91._0_8_ * auVar28._0_8_;
        auVar29._8_8_ = auVar91._8_8_ * auVar28._8_8_;
        auVar34._16_8_ = auVar64._0_8_ * auVar56._0_8_;
        auVar34._0_16_ = auVar29;
        auVar34._24_8_ = auVar64._8_8_ * auVar56._8_8_;
        auVar102._16_16_ = auVar29;
        auVar102._0_16_ = auVar29;
        auVar32 = vperm2f128_avx(auVar34,auVar34,0x11);
        auVar32 = vshufpd_avx(auVar102,auVar32,9);
        auVar56 = vunpcklpd_avx(auVar42,auVar85);
        auVar28 = vunpcklpd_avx(auVar106,auVar111);
        auVar38 = vunpcklpd_avx(auVar111,auVar42);
        auVar103._0_8_ = auVar28._0_8_ * auVar32._0_8_;
        auVar103._8_8_ = auVar28._8_8_ * auVar32._8_8_;
        auVar103._16_8_ = auVar56._0_8_ * auVar32._16_8_;
        auVar103._24_8_ = auVar56._8_8_ * auVar32._24_8_;
        auVar99 = vunpcklpd_avx(auVar106,auVar85);
        auVar108._0_8_ = auVar38._0_8_ * auVar29._0_8_;
        auVar108._8_8_ = auVar38._8_8_ * auVar29._8_8_;
        auVar108._16_8_ = auVar99._0_8_ * auVar34._16_8_;
        auVar108._24_8_ = auVar99._8_8_ * auVar34._24_8_;
        auVar32 = vsubpd_avx(auVar103,auVar108);
        auVar101._0_8_ = auVar32._0_8_ + auVar32._0_8_;
        auVar101._8_8_ = auVar32._8_8_ + auVar32._8_8_;
        auVar104._16_8_ = auVar32._16_8_ + auVar32._16_8_;
        auVar104._0_16_ = auVar101;
        auVar104._24_8_ = auVar32._24_8_ + auVar32._24_8_;
        auVar109._16_16_ = auVar101;
        auVar109._0_16_ = auVar101;
        auVar32 = vperm2f128_avx(auVar104,auVar104,0x11);
        auVar32 = vshufpd_avx(auVar109,auVar32,9);
        auVar43 = vperm2f128_avx(auVar104,auVar104,1);
        auVar43 = vshufpd_avx(auVar43,auVar104,0xc);
        auVar88._0_8_ = auVar28._0_8_ * auVar43._0_8_;
        auVar88._8_8_ = auVar28._8_8_ * auVar43._8_8_;
        auVar88._16_8_ = auVar56._0_8_ * auVar43._16_8_;
        auVar88._24_8_ = auVar56._8_8_ * auVar43._24_8_;
        auVar51._0_8_ = auVar32._0_8_ * auVar38._0_8_;
        auVar51._8_8_ = auVar32._8_8_ * auVar38._8_8_;
        auVar51._16_8_ = auVar32._16_8_ * auVar99._0_8_;
        auVar51._24_8_ = auVar32._24_8_ * auVar99._8_8_;
        auVar43 = vsubpd_avx(auVar88,auVar51);
        auVar89._16_16_ = auVar43._0_16_;
        auVar89._0_16_ = auVar43._0_16_;
        auVar43 = vperm2f128_avx(auVar43,auVar43,0x11);
        auVar43 = vshufpd_avx(auVar89,auVar43,9);
        auVar28 = vshufpd_avx(auVar90,auVar90,1);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = local_1e0;
        auVar99 = vunpcklpd_avx(auVar16,local_2c0);
        auVar36 = auVar98._16_16_;
        auVar56 = vmovhps_avx(local_2d0,*(undefined8 *)(param_1 + lVar24 + 0x38));
        auVar38 = vshufpd_avx(auVar36,auVar36,1);
        auVar30._0_8_ = auVar99._0_8_ + auVar29._0_8_ + auVar32._0_8_ * dVar118 + auVar43._0_8_;
        auVar30._8_8_ = auVar99._8_8_ + auVar29._8_8_ + auVar32._8_8_ * dVar118 + auVar43._8_8_;
        auVar35._16_8_ = auVar56._0_8_ + auVar34._16_8_ + auVar32._16_8_ * dVar118 + auVar43._16_8_;
        auVar35._0_16_ = auVar30;
        auVar35._24_8_ = auVar56._8_8_ + auVar34._24_8_ + auVar32._24_8_ * dVar118 + auVar43._24_8_;
        auVar56 = vshufpd_avx(auVar30,auVar30,1);
        local_2c0._0_8_ = auVar56._0_8_;
        auVar56._8_8_ = 0;
        auVar56._0_8_ = uVar52;
        auVar55 = vunpcklpd_avx(auVar55,auVar56);
        auVar78 = vunpcklpd_avx(auVar114,auVar78);
        auVar56 = vshufpd_avx(auVar35._16_16_,auVar35._16_16_,1);
        local_2d0._0_8_ = auVar56._0_8_;
        auVar86._0_8_ = auVar91._0_8_ * auVar78._0_8_;
        auVar86._8_8_ = auVar91._8_8_ * auVar78._8_8_;
        auVar56 = vshufpd_avx(auVar86,auVar86,1);
        local_2a0._0_8_ = auVar56._0_8_;
        auVar117._0_8_ = auVar64._0_8_ * auVar55._0_8_;
        auVar117._8_8_ = auVar64._8_8_ * auVar55._8_8_;
        auVar56 = vshufpd_avx(auVar117,auVar117,1);
        local_2b0._0_8_ = auVar56._0_8_;
        dVar37 = auVar30._0_8_;
        dVar62 = auVar35._16_8_;
        local_1e0 = auVar86._0_8_;
      }
      else {
        auVar56 = vmovlhps_avx(auVar116,auVar126);
        auVar120._8_8_ = dVar2;
        auVar120._0_8_ = dVar2;
        auVar28 = vunpcklpd_avx(auVar38,auVar120);
        dVar8 = auVar56._0_8_;
        auVar39._0_8_ = dVar8 + dVar8;
        dVar9 = auVar56._8_8_;
        auVar39._8_8_ = dVar9 + dVar9;
        auVar44._16_8_ = auVar28._0_8_ + auVar28._0_8_;
        auVar44._0_16_ = auVar39;
        auVar44._24_8_ = auVar28._8_8_ + auVar28._8_8_;
        auVar127._0_8_ = dVar8 * auVar39._0_8_;
        auVar127._8_8_ = dVar9 * auVar39._8_8_;
        auVar128._16_8_ = dVar1 * auVar44._16_8_;
        auVar128._0_16_ = auVar127;
        auVar128._24_8_ = auVar44._24_8_ * 0.0;
        auVar56 = vshufpd_avx(auVar127,auVar127,1);
        auVar32 = vperm2f128_avx(auVar128,auVar128,1);
        auVar32 = vshufpd_avx(auVar32,auVar32,4);
        auVar112._0_8_ = auVar56._0_8_ + auVar32._0_8_;
        auVar112._8_8_ = auVar56._8_8_ + auVar32._8_8_;
        auVar112._16_8_ = auVar127._0_8_ + auVar32._16_8_;
        auVar112._24_8_ = auVar127._8_8_ + auVar32._24_8_;
        auVar43 = vperm2f128_avx(auVar44,auVar44,1);
        auVar32 = vshufpd_avx(auVar44,auVar43,1);
        auVar129._0_8_ = dVar8 * auVar32._0_8_;
        auVar129._8_8_ = dVar9 * auVar32._8_8_;
        auVar129._16_8_ = dVar123 * auVar32._16_8_;
        auVar129._24_8_ = dVar123 * auVar32._24_8_;
        auVar45._16_16_ = auVar39;
        auVar45._0_16_ = auVar39;
        auVar32 = vshufpd_avx(auVar43,auVar45,4);
        auVar46._0_8_ = dVar2 * auVar32._0_8_;
        auVar46._8_8_ = dVar2 * auVar32._8_8_;
        auVar46._16_8_ = dVar2 * auVar32._16_8_;
        auVar46._24_8_ = dVar2 * auVar32._24_8_;
        auVar87._8_8_ = __real_3ff0000000000000;
        auVar87._0_8_ = __real_3ff0000000000000;
        auVar87._16_8_ = __real_3ff0000000000000;
        auVar87._24_8_ = __real_3ff0000000000000;
        auVar32 = vsubpd_avx(auVar87,auVar112);
        auVar56 = vunpcklpd_avx(auVar114,auVar78);
        dVar2 = auVar56._0_8_;
        auVar110._0_8_ = auVar32._0_8_ * dVar2;
        dVar8 = auVar56._8_8_;
        auVar110._8_8_ = auVar32._8_8_ * dVar8;
        auVar113._16_8_ = auVar32._16_8_ * dVar4;
        auVar113._0_16_ = auVar110;
        auVar113._24_8_ = auVar32._24_8_ * 0.0;
        auVar121._0_8_ = (auVar129._0_8_ + auVar46._0_8_) * dVar2;
        auVar121._8_8_ = (auVar129._8_8_ + auVar46._8_8_) * dVar8;
        auVar122._16_8_ = (auVar129._16_8_ + auVar46._16_8_) * dVar4;
        auVar122._0_16_ = auVar121;
        auVar122._24_8_ = (auVar129._24_8_ + auVar46._24_8_) * 0.0;
        auVar32 = vsubpd_avx(auVar129,auVar46);
        auVar56 = vunpcklpd_avx(auVar78,auVar55);
        auVar40._0_8_ = auVar32._0_8_ * auVar56._0_8_;
        auVar40._8_8_ = auVar32._8_8_ * auVar56._8_8_;
        auVar47._16_8_ = auVar32._16_8_ * dVar3;
        auVar47._0_16_ = auVar40;
        auVar47._24_8_ = auVar32._24_8_ * 0.0;
        local_170 = vunpcklpd_avx(auVar110,auVar121);
        local_160[0] = (double)vmovlps_avx(auVar47._16_16_);
        local_160[1] = 0.0;
        local_150 = vblendpd_avx(auVar110,auVar40,1);
        local_140 = vmovhpd_avx(auVar121);
        local_130 = vblendpd_avx(auVar40,auVar122._16_16_,1);
        local_138 = 0;
        local_120 = vmovlps_avx(auVar113._16_16_);
        local_118 = 0;
        local_100 = local_1c0;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_1b0;
        auVar56 = vunpcklpd_avx(auVar36,auVar19);
        auVar65._8_8_ = dVar118;
        auVar65._0_8_ = dVar118;
        auVar28 = vunpcklpd_avx(auVar91,auVar65);
        dVar123 = auVar56._0_8_;
        auVar68._0_8_ = dVar123 + dVar123;
        dVar1 = auVar56._8_8_;
        auVar68._8_8_ = dVar1 + dVar1;
        auVar70._16_8_ = auVar28._0_8_ + auVar28._0_8_;
        auVar70._0_16_ = auVar68;
        auVar70._24_8_ = auVar28._8_8_ + auVar28._8_8_;
        auVar41._0_8_ = dVar123 * auVar68._0_8_;
        auVar41._8_8_ = dVar1 * auVar68._8_8_;
        auVar48._16_8_ = dVar62 * auVar70._16_8_;
        auVar48._0_16_ = auVar41;
        auVar48._24_8_ = auVar70._24_8_ * 0.0;
        auVar56 = vshufpd_avx(auVar41,auVar41,1);
        auVar32 = vperm2f128_avx(auVar48,auVar48,1);
        auVar32 = vshufpd_avx(auVar32,auVar32,4);
        auVar49._0_8_ = auVar56._0_8_ + auVar32._0_8_;
        auVar49._8_8_ = auVar56._8_8_ + auVar32._8_8_;
        auVar49._16_8_ = auVar41._0_8_ + auVar32._16_8_;
        auVar49._24_8_ = auVar41._8_8_ + auVar32._24_8_;
        auVar43 = vsubpd_avx(auVar87,auVar49);
        auVar34 = vperm2f128_avx(auVar70,auVar70,1);
        auVar32 = vshufpd_avx(auVar70,auVar34,1);
        auVar33._0_8_ = dVar123 * auVar32._0_8_;
        auVar33._8_8_ = dVar1 * auVar32._8_8_;
        auVar33._16_8_ = dVar37 * auVar32._16_8_;
        auVar33._24_8_ = dVar37 * auVar32._24_8_;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = local_1a0;
        auVar56 = vunpcklpd_avx(local_2a0,auVar20);
        auVar71._16_16_ = auVar68;
        auVar71._0_16_ = auVar68;
        auVar32 = vshufpd_avx(auVar34,auVar71,4);
        dVar37 = auVar56._0_8_;
        auVar92._0_8_ = auVar43._0_8_ * dVar37;
        dStack_1d8 = auVar56._8_8_;
        auVar92._8_8_ = auVar43._8_8_ * dStack_1d8;
        auVar96._16_8_ = auVar43._16_8_ * auVar117._0_8_;
        auVar96._0_16_ = auVar92;
        auVar96._24_8_ = auVar43._24_8_ * 0.0;
        auVar50._0_8_ = dVar118 * auVar32._0_8_;
        auVar50._8_8_ = dVar118 * auVar32._8_8_;
        auVar50._16_8_ = dVar118 * auVar32._16_8_;
        auVar50._24_8_ = dVar118 * auVar32._24_8_;
        auVar69._0_8_ = (auVar33._0_8_ + auVar50._0_8_) * dVar37;
        auVar69._8_8_ = (auVar33._8_8_ + auVar50._8_8_) * dStack_1d8;
        auVar72._16_8_ = (auVar33._16_8_ + auVar50._16_8_) * auVar117._0_8_;
        auVar72._0_16_ = auVar69;
        auVar72._24_8_ = (auVar33._24_8_ + auVar50._24_8_) * 0.0;
        auVar32 = vsubpd_avx(auVar33,auVar50);
        auVar56 = vunpcklpd_avx(auVar20,auVar99);
        auVar79._0_8_ = auVar32._0_8_ * auVar56._0_8_;
        auVar79._8_8_ = auVar32._8_8_ * auVar56._8_8_;
        auVar80._16_8_ = auVar32._16_8_ * (double)local_2a0._0_8_;
        auVar80._0_16_ = auVar79;
        auVar80._24_8_ = auVar32._24_8_ * 0.0;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar52;
        auVar56 = vunpcklpd_avx(auVar55,auVar13);
        auVar28 = vunpcklpd_avx(auVar99,local_2b0);
        dVar37 = dVar37 * dVar2;
        dStack_1d8 = dStack_1d8 * dVar8;
        dStack_1d0 = auVar28._0_8_ * auVar56._0_8_;
        dStack_1c8 = auVar28._8_8_ * auVar56._8_8_;
        auVar117._0_8_ = auVar117._0_8_ * dVar4;
        auVar56 = CONCAT88(auVar69._0_8_,auVar69._0_8_);
        auVar32 = vblendpd_avx(ZEXT1632(auVar72._16_16_),auVar80,2);
        auVar32 = vblendpd_avx(auVar32,auVar96,4);
        auVar43 = vblendpd_avx(ZEXT1632(auVar92),ZEXT1632(auVar56),2);
        auVar43 = vblendpd_avx(auVar43,auVar80,4);
        auVar58._16_16_ = auVar69;
        auVar58._0_16_ = auVar79;
        auVar34 = vshufpd_avx(auVar58,ZEXT1632(auVar92),0xe);
        auVar56 = vmovhps_avx(local_2d0,__real_3ff0000000000000);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = local_1e0;
        auVar28 = vunpcklpd_avx(auVar14,local_2c0);
        local_f8 = 0x3ff0000000000000;
        lVar24 = 0x18;
        do {
          dVar62 = *(double *)((longlong)local_190 + lVar24 + 8);
          dVar118 = *(double *)((longlong)local_190 + lVar24 + 0x18);
          dVar123 = *(double *)((longlong)local_190 + lVar24 + 0x10);
          dVar1 = *(double *)(local_170 + lVar24);
          *(double *)(local_2a0 + lVar24 + 8) =
               auVar43._0_8_ * dVar62 + auVar32._0_8_ * dVar118 + auVar34._0_8_ * dVar123 +
               auVar28._0_8_ * dVar1;
          *(double *)((longlong)local_290 + lVar24) =
               auVar43._8_8_ * dVar62 + auVar32._8_8_ * dVar118 + auVar34._8_8_ * dVar123 +
               auVar28._8_8_ * dVar1;
          *(double *)((longlong)local_290 + lVar24 + 8) =
               auVar43._16_8_ * dVar62 + auVar32._16_8_ * dVar118 + auVar34._16_8_ * dVar123 +
               auVar56._0_8_ * dVar1;
          *(double *)(local_280 + lVar24) =
               auVar43._24_8_ * dVar62 + auVar32._24_8_ * dVar118 + auVar34._24_8_ * dVar123 +
               auVar56._8_8_ * dVar1;
          lVar24 = lVar24 + 0x20;
        } while (lVar24 != 0x98);
        dVar62 = (double)local_280 * (double)local_280 + adStack_278[0] * adStack_278[0] +
                 adStack_278[1] * adStack_278[1];
        dVar118 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar62) {
          dVar118 = __real_3ff0000000000000 / SQRT(dVar62);
        }
        dVar62 = (double)local_260._0_8_ * (double)local_260._0_8_ +
                 (double)local_260._8_8_ * (double)local_260._8_8_ + local_250 * local_250;
        dVar123 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar62) {
          dVar123 = __real_3ff0000000000000 / SQRT(dVar62);
        }
        local_1e0 = dVar37;
        auVar15._8_8_ = dStack_1d8;
        auVar15._0_8_ = dVar37;
        auVar55 = vpermilpd_avx(auVar15,1);
        auVar17._8_8_ = dStack_1d8;
        auVar17._0_8_ = dVar37;
        auVar17._16_8_ = dStack_1d0;
        auVar17._24_8_ = dStack_1c8;
        auVar56 = vshufpd_avx(auVar17._16_16_,auVar17._16_16_,1);
        dVar37 = local_230 * local_230 +
                 (double)local_240._8_8_ * (double)local_240._8_8_ +
                 (double)local_240._0_8_ * (double)local_240._0_8_;
        dVar62 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar37) {
          dVar62 = __real_3ff0000000000000 / SQRT(dVar37);
        }
        auVar57._8_8_ = 0;
        auVar57._0_8_ = dVar118 * (double)local_280;
        auVar83._8_8_ = 0;
        auVar83._0_8_ = dVar118 * adStack_278[0];
        auVar64 = vunpcklpd_avx(auVar57,auVar83);
        auVar84._8_8_ = 0;
        auVar84._0_8_ = dVar123 * (double)local_260._0_8_;
        auVar93._8_8_ = 0;
        auVar93._0_8_ = dVar123 * (double)local_260._8_8_;
        auVar78 = vunpcklpd_avx(auVar84,auVar93);
        auVar94._8_8_ = 0;
        auVar94._0_8_ = (double)local_240._0_8_ * dVar62;
        auVar100._8_8_ = 0;
        auVar100._0_8_ = (double)local_240._8_8_ * dVar62;
        auVar91 = vunpcklpd_avx(auVar94,auVar100);
        auVar99 = ZEXT816(0);
        auVar32 = vcmppd_avx(ZEXT1632(auVar99),auVar17,2);
        auVar28 = vpackssdw_avx(auVar32._0_16_,auVar32._16_16_);
        auVar38 = vpshufd_avx(auVar28,0x50);
        auVar28 = vpshufd_avx(auVar28,0xfa);
        auVar81._16_16_ = auVar28;
        auVar81._0_16_ = auVar38;
        auVar32 = vcmpps_avx(ZEXT1632(auVar99),ZEXT1632(auVar99),0xf);
        auVar32 = vblendvps_avx(ZEXT1632(auVar99),auVar32,auVar81);
        auVar105._0_4_ =
             auVar32._0_4_ & ___ymm_0000000000000000800000000000000080000000000000008000000000000000
             ^ ___ymm_0000000000000000bff0000000000000bff0000000000000bff0000000000000;
        auVar105._4_4_ = auVar32._4_4_ & _UNK_151c6af64 ^ _UNK_151c6af84;
        auVar105._8_4_ = auVar32._8_4_ & _UNK_151c6af68 ^ _UNK_151c6af88;
        auVar105._12_4_ = auVar32._12_4_ & _UNK_151c6af6c ^ _UNK_151c6af8c;
        auVar107._16_4_ = auVar32._16_4_ & _UNK_151c6af70 ^ _UNK_151c6af90;
        auVar107._0_16_ = auVar105;
        auVar107._20_4_ = auVar32._20_4_ & _UNK_151c6af74 ^ _UNK_151c6af94;
        auVar107._24_4_ = auVar32._24_4_ & _UNK_151c6af78 ^ _UNK_151c6af98;
        auVar107._28_4_ = auVar32._28_4_ & _UNK_151c6af7c ^ _UNK_151c6af9c;
        auVar28 = vshufps_avx(auVar105,auVar105,0x44);
        local_280 = (undefined1  [8])(auVar64._0_8_ * auVar28._0_8_);
        adStack_278[0] = auVar64._8_8_ * auVar28._8_8_;
        auVar82._16_8_ = dVar118 * adStack_278[1] * auVar28._0_8_;
        auVar82._0_16_ = _local_280;
        auVar82._24_8_ = auVar28._8_8_ * 0.0;
        adStack_278[1] = (double)vmovlps_avx(auVar82._16_16_);
        auVar28 = vshufps_avx(auVar105,auVar105,0xee);
        local_260._0_8_ = auVar28._0_8_ * auVar78._0_8_;
        local_260._8_8_ = auVar28._8_8_ * auVar78._8_8_;
        auVar73._16_8_ = auVar28._0_8_ * dVar123 * local_250;
        auVar73._0_16_ = local_260;
        auVar73._24_8_ = auVar28._8_8_ * 0.0;
        local_250 = (double)vmovlpd_avx(auVar73._16_16_);
        auVar32 = vperm2f128_avx(auVar107,auVar107,0x11);
        local_240._0_8_ = auVar32._0_8_ * auVar91._0_8_;
        local_240._8_8_ = auVar32._0_8_ * auVar91._8_8_;
        auVar97._16_8_ = auVar32._16_8_ * dVar62 * local_230;
        auVar97._0_16_ = local_240;
        auVar97._24_8_ = auVar32._16_8_ * 0.0;
        auVar66._8_8_ = __real_0010000000000000;
        auVar66._0_8_ = __real_0010000000000000;
        auVar66._16_8_ = __real_0010000000000000;
        auVar66._24_8_ = __real_0010000000000000;
        auVar32 = vblendpd_avx(auVar82,auVar66,8);
        auVar59._0_8_ = __real_7fffffffffffffff & auVar32._0_8_;
        auVar59._8_8_ = __real_7fffffffffffffff & auVar32._8_8_;
        auVar59._16_8_ = __real_7fffffffffffffff & auVar32._16_8_;
        auVar59._24_8_ = __real_7fffffffffffffff & auVar32._24_8_;
        auVar115._8_8_ = __real_3f1a36e2eb1c432d;
        auVar115._0_8_ = __real_3f1a36e2eb1c432d;
        auVar115._16_8_ = __real_3f1a36e2eb1c432d;
        auVar115._24_8_ = __real_3f1a36e2eb1c432d;
        auVar32 = vcmppd_avx(auVar59,auVar115,6);
        auVar28 = vpackssdw_avx(auVar32._0_16_,auVar32._16_16_);
        local_230 = (double)vmovlpd_avx(auVar97._16_16_);
        if ((((SUB161(auVar28 >> 0x1f,0) & 1) == 0 && (SUB161(auVar28 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar28 >> 0x5f,0) & 1) == 0) && -1 < auVar28[0xf]) {
          auVar77 = SUB6416(ZEXT864(0),0) << 0x40;
          auVar25 = ZEXT816(0) << 0x40;
          auVar67 = ZEXT816(0) << 0x40;
          auVar63._8_8_ = 0;
          auVar63._0_8_ = __real_3ff0000000000000;
        }
        else {
          auVar32 = vblendpd_avx(auVar73,auVar66,8);
          auVar60._0_8_ = __real_7fffffffffffffff & auVar32._0_8_;
          auVar60._8_8_ = __real_7fffffffffffffff & auVar32._8_8_;
          auVar60._16_8_ = __real_7fffffffffffffff & auVar32._16_8_;
          auVar60._24_8_ = __real_7fffffffffffffff & auVar32._24_8_;
          auVar32 = vcmppd_avx(auVar60,auVar115,6);
          auVar28 = vpackssdw_avx(auVar32._0_16_,auVar32._16_16_);
          if ((((SUB161(auVar28 >> 0x1f,0) & 1) != 0 || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || auVar28[0xf] < '\0') {
            auVar32 = vblendpd_avx(auVar97,auVar66,8);
            auVar61._0_8_ = __real_7fffffffffffffff & auVar32._0_8_;
            auVar61._8_8_ = __real_7fffffffffffffff & auVar32._8_8_;
            auVar61._16_8_ = __real_7fffffffffffffff & auVar32._16_8_;
            auVar61._24_8_ = __real_7fffffffffffffff & auVar32._24_8_;
            auVar32 = vcmppd_avx(auVar61,auVar115,6);
            auVar28 = vpackssdw_avx(auVar32._0_16_,auVar32._16_16_);
            if ((((SUB161(auVar28 >> 0x1f,0) & 1) != 0 || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || auVar28[0xf] < '\0') {
              auVar28 = vshufpd_avx(local_260,local_260,1);
              dVar37 = auVar97._16_8_ + auVar28._0_8_ + (double)local_280;
              if (dVar37 <= __real_0000000000000000) {
                bVar10 = (double)local_280 < auVar28._0_8_;
                uVar52 = (ulonglong)bVar10;
                if (*(double *)(local_280 + ((uint)bVar10 * 0x20 + (uint)bVar10 * 8)) <
                    auVar97._16_8_) {
                  uVar52 = 2;
                }
                iVar6 = *(int *)(&DAT_151c6afa0 + uVar52 * 4);
                lVar24 = (longlong)iVar6;
                iVar11 = (int)uVar52;
                iVar7 = *(int *)(&DAT_151c6afa0 + lVar24 * 4);
                dVar62 = __real_3ff0000000000000 /
                         SQRT(((*(double *)(local_280 + (uint)(iVar11 * 0x28)) -
                               *(double *)(local_280 + lVar24 * 0x28)) -
                              *(double *)(local_280 + (longlong)iVar7 * 0x28)) +
                              __real_3ff0000000000000);
                dVar37 = dVar62 * __real_3fe0000000000000;
                *(double *)((longlong)local_190 + (ulonglong)(uint)(iVar11 * 8)) =
                     (__real_3ff0000000000000 / dVar62) * __real_3fe0000000000000;
                local_190[lVar24] =
                     (*(double *)(local_280 + (longlong)(iVar6 + iVar11 * 4) * 8) +
                     *(double *)(local_280 + (longlong)(iVar11 + iVar6 * 4) * 8)) * dVar37;
                local_190[iVar7] =
                     dVar37 * (*(double *)(local_280 + (longlong)(iVar7 + iVar11 * 4) * 8) +
                              *(double *)(local_280 + (longlong)(iVar11 + iVar7 * 4) * 8));
                auVar63._8_8_ = 0;
                auVar63._0_8_ =
                     dVar37 * (*(double *)(local_280 + (longlong)(iVar7 + iVar6 * 4) * 8) -
                              *(double *)(local_280 + (longlong)(iVar6 + iVar7 * 4) * 8));
                auVar77._8_8_ = 0;
                auVar77._0_8_ = local_190[0];
                auVar25._8_8_ = 0;
                auVar25._0_8_ = local_190[1];
                auVar67._8_8_ = 0;
                auVar67._0_8_ = local_190[2];
                param_3 = local_1e8;
              }
              else {
                auVar28 = vshufpd_avx(_local_280,_local_280,1);
                auVar38 = vshufpd_avx(local_240,local_240,1);
                dVar62 = __real_3ff0000000000000 / SQRT(dVar37 + __real_3ff0000000000000);
                dVar37 = dVar62 * __real_3fe0000000000000;
                auVar77._8_8_ = 0;
                auVar77._0_8_ = dVar37 * (auVar73._16_8_ - auVar38._0_8_);
                auVar25._8_8_ = 0;
                auVar25._0_8_ = dVar37 * ((double)local_240._0_8_ - auVar82._16_8_);
                auVar67._8_8_ = 0;
                auVar67._0_8_ = dVar37 * (auVar28._0_8_ - (double)local_260._0_8_);
                auVar63._8_8_ = 0;
                auVar63._0_8_ = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar62);
              }
              goto LAB_140a9d708;
            }
          }
          auVar77 = SUB6416(ZEXT864(0),0) << 0x40;
          auVar25 = ZEXT816(0) << 0x40;
          auVar67 = ZEXT816(0) << 0x40;
          auVar63._8_8_ = 0;
          auVar63._0_8_ = __real_3ff0000000000000;
        }
LAB_140a9d708:
        auVar124._8_8_ = 0;
        auVar124._0_8_ = __real_3e45798ee2308c3a;
        auVar28 = vunpcklpd_avx(auVar67,auVar63);
        auVar38 = vunpcklpd_avx(auVar77,auVar25);
        dVar62 = auVar28._0_8_;
        dVar123 = auVar28._8_8_;
        dVar118 = auVar38._0_8_;
        dVar1 = auVar38._8_8_;
        auVar26._0_8_ = dVar118 * dVar118 + dVar62 * dVar62;
        auVar26._8_8_ = dVar1 * dVar1 + dVar123 * dVar123;
        auVar28 = vshufpd_avx(auVar26,auVar26,1);
        dVar37 = auVar26._0_8_ + auVar28._0_8_;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar37;
        auVar28 = vcmpsd_avx(auVar124,auVar27,6);
        uVar52 = ~auVar28._0_8_ & __real_ffffffffffffffff;
        dVar37 = __real_3ff0000000000000 / SQRT(dVar37);
        auVar90._0_8_ = (double)((ulonglong)(dVar118 * dVar37) & uVar52);
        auVar90._8_8_ = (double)((ulonglong)(dVar1 * dVar37) & uVar52);
        auVar95._16_8_ = (ulonglong)(dVar62 * dVar37) & uVar52;
        auVar95._0_16_ = auVar90;
        auVar95._24_8_ = (ulonglong)(dVar123 * dVar37) & uVar52;
        auVar31._0_8_ =
             ~uVar52 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar31._8_8_ = ~uVar52 & _UNK_150b54548;
        auVar31._16_8_ = ~uVar52 & _UNK_150b54550;
        auVar31._24_8_ = ~uVar52 & _UNK_150b54558;
        auVar36 = auVar95._16_16_ | auVar31._16_16_;
        auVar28 = vshufps_avx(auVar90,auVar90,0x4e);
        auVar38 = vshufps_avx(auVar36,auVar36,0x4e);
        local_2c0._0_8_ = local_218;
        local_2a0._0_8_ = auVar55._0_8_;
        local_2b0._0_8_ = auVar56._0_8_;
        local_2d0._0_8_ = 0;
        dVar37 = dStack_220;
        dVar62 = dStack_210;
      }
      auVar125._8_8_ = 0;
      auVar125._0_8_ = __real_3e45798ee2308c3a;
      auVar56 = vunpcklpd_avx(auVar90,auVar28);
      auVar28 = vunpcklpd_avx(auVar36,auVar38);
      puVar23 = (ulonglong *)(lVar12 + param_1);
      dVar123 = auVar28._0_8_;
      dVar2 = auVar28._8_8_;
      dVar1 = auVar56._0_8_;
      dVar3 = auVar56._8_8_;
      auVar53._0_8_ = dVar1 * dVar1 + dVar123 * dVar123;
      auVar53._8_8_ = dVar3 * dVar3 + dVar2 * dVar2;
      auVar56 = vshufpd_avx(auVar53,auVar53,1);
      dVar118 = auVar53._0_8_ + auVar56._0_8_;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = dVar118;
      auVar56 = vcmpsd_avx(auVar125,auVar54,6);
      uVar52 = ~auVar56._0_8_ & __real_ffffffffffffffff;
      dVar118 = __real_3ff0000000000000 / SQRT(dVar118);
      uVar74 = ~uVar52 & _UNK_150b54548;
      uVar75 = ~uVar52 & _UNK_150b54550;
      uVar76 = ~uVar52 & _UNK_150b54558;
      *puVar23 = (ulonglong)(dVar1 * dVar118) & uVar52 |
                 ~uVar52 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      puVar23[1] = (ulonglong)(dVar3 * dVar118) & uVar52 | uVar74;
      puVar23[2] = (ulonglong)(dVar123 * dVar118) & uVar52 | uVar75;
      puVar23[3] = (ulonglong)(dVar2 * dVar118) & uVar52 | uVar76;
      uVar52 = (ulonglong)((uint)uVar5 * 0x60);
      *(double *)(param_1 + 0x20 + uVar52) = dVar37;
      *(undefined8 *)(param_1 + 0x28 + uVar52) = local_2c0._0_8_;
      *(double *)(param_1 + 0x30 + uVar52) = dVar62;
      *(undefined8 *)(param_1 + 0x38 + uVar52) = local_2d0._0_8_;
      *(double *)(param_1 + 0x40 + uVar52) = local_1e0;
      *(undefined8 *)(param_1 + 0x48 + uVar52) = local_2a0._0_8_;
      *(double *)(param_1 + 0x50 + uVar52) = auVar117._0_8_;
      *(undefined8 *)(param_1 + 0x58 + uVar52) = local_2b0._0_8_;
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_7);
  }
  return;
}

