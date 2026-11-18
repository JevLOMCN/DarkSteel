// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FillComponentSpaceTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunS_3E_un_3C_CunT_3E_CuniCuniCuni_avx2 @ 140a995e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FillComponentSpaceTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunS_3E_un_3C_CunT_3E_CuniCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               int param_6,uint param_7,undefined1 (*param_8) [32])

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
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
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar36 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 in_ZMM0 [64];
  double dVar37;
  undefined1 auVar39 [16];
  double dVar62;
  ulonglong uVar63;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulonglong uVar38;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  ulonglong uVar64;
  undefined1 auVar46 [32];
  ulonglong uVar66;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar43 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar65 [16];
  undefined1 auVar54 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  double dVar80;
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  ulonglong uVar96;
  undefined1 auVar95 [64];
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
  undefined1 auVar108 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar125 [32];
  undefined1 auVar127 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined8 uVar135;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  double dVar196;
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  double dVar209;
  undefined1 auVar208 [32];
  undefined8 uVar210;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [32];
  undefined1 auVar215 [32];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [8];
  double adStack_358 [3];
  undefined1 local_340 [16];
  double local_330;
  undefined8 local_328;
  undefined1 local_320 [16];
  double local_310;
  undefined8 local_308;
  double dStack_300;
  undefined8 uStack_2f8;
  double dStack_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [16];
  double local_2d0;
  undefined8 uStack_2c8;
  double local_2c0;
  undefined8 uStack_2b8;
  longlong local_2a8;
  double local_2a0;
  ulonglong local_298;
  ulonglong local_290;
  undefined1 local_280 [16];
  double adStack_270 [2];
  undefined1 local_260 [16];
  double local_250 [2];
  undefined1 local_240 [16];
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined8 local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [32];
  longlong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_130 [16];
  undefined1 local_120 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar55 [32];
  undefined1 auVar61 [32];
  undefined1 auVar73 [32];
  undefined1 auVar77 [32];
  undefined1 auVar91 [32];
  undefined1 auVar94 [32];
  undefined1 auVar109 [32];
  undefined1 auVar113 [32];
  undefined1 auVar124 [32];
  undefined1 auVar126 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar155 [32];
  undefined1 auVar168 [32];
  undefined1 auVar175 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar205 [32];
  
  local_2a8 = param_3;
  local_1a0 = *param_8;
  auVar143 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  auVar143 = auVar143 & ~local_1a0;
  if ((((((((SUB321(auVar143 >> 0x1f,0) & 1) == 0 && (SUB321(auVar143 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar143 >> 0x5f,0) & 1) == 0) && SUB321(auVar143 >> 0x7f,0) == '\0') &&
        (SUB321(auVar143 >> 0x9f,0) & 1) == 0) && SUB321(auVar143 >> 0xbf,0) == '\0') &&
      (SUB321(auVar143 >> 0xdf,0) & 1) == 0) && -1 < auVar143[0x1f]) {
    if (1 < (int)param_7) {
      uVar10 = CONCAT44(0,param_7);
      uVar38 = 1;
      auVar15 = ZEXT816(0) << 0x20;
      local_180._0_8_ = uVar10;
      do {
        uVar1 = *(ushort *)(param_3 + uVar38 * 2);
        lVar7 = (ulonglong)uVar1 * 0x60;
        lVar12 = (longlong)*(int *)(param_4 + (int)((uint)uVar1 * param_5 + param_6)) * 0x60;
        auVar192._16_8_ = *(double *)(param_1 + lVar12);
        local_2d0 = *(double *)(param_1 + 8 + lVar12);
        uStack_2c8 = 0;
        local_2c0 = *(double *)(param_1 + 0x10 + lVar12);
        uStack_2b8 = 0;
        dVar80 = *(double *)(param_1 + 0x18 + lVar12);
        local_370._8_8_ = 0;
        local_370._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar12);
        local_380._8_8_ = 0;
        local_380._0_8_ = *(ulonglong *)(param_1 + 0x28 + lVar12);
        local_390._8_8_ = 0;
        local_390._0_8_ = *(ulonglong *)(param_1 + 0x30 + lVar12);
        local_2e0._0_8_ = *(double *)(param_1 + 0x40 + lVar12);
        local_2e0._8_8_ = 0;
        auVar102._8_8_ = 0;
        auVar102._0_8_ = *(ulonglong *)(param_1 + 0x48 + lVar12);
        dVar81 = *(double *)(param_1 + 0x50 + lVar12);
        auVar84._8_8_ = 0;
        auVar84._0_8_ = dVar81;
        uVar63 = *(ulonglong *)(param_1 + 0x58 + lVar12);
        auVar187._8_8_ = 0;
        auVar187._0_8_ = uVar63;
        uVar64 = *(ulonglong *)(param_2 + lVar7);
        auVar213._8_8_ = 0;
        auVar213._0_8_ = uVar64;
        auVar103._8_8_ = 0;
        auVar103._0_8_ = *(ulonglong *)(param_2 + 8 + lVar7);
        uVar66 = *(ulonglong *)(param_2 + 0x10 + lVar7);
        auVar173._8_8_ = 0;
        auVar173._0_8_ = uVar66;
        auVar143 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 0x40 + lVar7),ZEXT1632(auVar15),1);
        auVar35 = vcmppd_avx(*(undefined1 (*) [32])(param_1 + 0x40 + lVar12),ZEXT1632(auVar15),1);
        auVar205._16_8_ = *(double *)(param_2 + 0x18 + lVar7);
        auVar207._8_8_ = 0;
        auVar207._0_8_ = auVar205._16_8_;
        auVar143 = vpackssdw_avx2(auVar143 | auVar35,ZEXT1632(auVar15));
        local_200 = *(ulonglong *)(param_2 + 0x20 + lVar7);
        auVar65._8_8_ = 0;
        auVar65._0_8_ = local_200;
        local_1f8 = *(ulonglong *)(param_2 + 0x28 + lVar7);
        auVar199._8_8_ = 0;
        auVar199._0_8_ = local_1f8;
        local_1f0 = *(ulonglong *)(param_2 + 0x30 + lVar7);
        auVar138._8_8_ = 0;
        auVar138._0_8_ = local_1f0;
        dVar196 = *(double *)(param_2 + 0x40 + lVar7);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = dVar196;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar7);
        dVar209 = *(double *)(param_2 + 0x50 + lVar7);
        auVar161._8_8_ = 0;
        auVar161._0_8_ = dVar209;
        uVar96 = *(ulonglong *)(param_2 + 0x58 + lVar7);
        local_280._8_8_ = 0;
        local_280._0_8_ = uVar96;
        if ((((((((SUB321(auVar143 >> 0x1f,0) & 1) == 0 && (SUB321(auVar143 >> 0x3f,0) & 1) == 0) &&
                (SUB321(auVar143 >> 0x5f,0) & 1) == 0) && SUB321(auVar143 >> 0x7f,0) == '\0') &&
              (SUB321(auVar143 >> 0x9f,0) & 1) == 0) && SUB321(auVar143 >> 0xbf,0) == '\0') &&
            (SUB321(auVar143 >> 0xdf,0) & 1) == 0) && -1 < auVar143[0x1f]) {
          local_1a0._0_16_ = auVar102;
          auVar45 = vunpcklpd_avx(auVar173,auVar207);
          local_160 = ZEXT1632(auVar45);
          auVar173 = vunpcklpd_avx(auVar207,auVar173);
          local_1e0 = ZEXT1632(auVar173);
          auVar207 = vunpcklpd_avx(auVar213,auVar103);
          auVar213 = vunpcklpd_avx(auVar103,auVar213);
          auVar165._8_8_ = dVar80;
          auVar165._0_8_ = dVar80;
          auVar107._8_8_ = auVar192._16_8_;
          auVar107._0_8_ = auVar192._16_8_;
          auVar65 = vunpcklpd_avx(auVar65,auVar199);
          auVar103 = vmovhpd_avx(auVar138,*(undefined8 *)(param_2 + lVar7 + 0x38));
          auVar138 = vunpcklpd_avx(auVar84,auVar187);
          auVar187 = vunpcklpd_avx(local_2e0,auVar102);
          auVar59._0_8_ = auVar187._0_8_ * auVar65._0_8_;
          auVar59._8_8_ = auVar187._8_8_ * auVar65._8_8_;
          auVar59._16_8_ = auVar138._0_8_ * auVar103._0_8_;
          auVar59._24_8_ = auVar138._8_8_ * auVar103._8_8_;
          auVar72._8_8_ = local_2d0;
          auVar72._0_8_ = local_2d0;
          auVar87._8_8_ = local_2c0;
          auVar87._0_8_ = local_2c0;
          auVar143._16_16_ = auVar165;
          auVar143._0_16_ = auVar72;
          auVar193._16_16_ = auVar87;
          auVar193._0_16_ = auVar107;
          auVar143 = vunpcklpd_avx(auVar193,auVar143);
          auVar115._16_16_ = auVar107;
          auVar115._0_16_ = auVar72;
          auVar194._16_16_ = auVar165;
          auVar194._0_16_ = auVar87;
          auVar35 = vunpcklpd_avx(auVar115,auVar194);
          auVar61 = vpermpd_avx2(auVar59,0xc9);
          dVar81 = auVar143._0_8_ * auVar61._0_8_ - auVar35._0_8_ * auVar59._0_8_;
          auVar205._16_8_ = auVar143._8_8_ * auVar61._8_8_ - auVar35._8_8_ * auVar59._8_8_;
          dVar196 = auVar143._16_8_ * auVar61._16_8_ - auVar35._16_8_ * auVar59._16_8_;
          dVar209 = auVar143._24_8_ * auVar61._24_8_ - auVar35._24_8_ * auVar59._24_8_;
          auVar195._0_8_ = dVar81 + dVar81;
          auVar195._8_8_ = auVar205._16_8_ + auVar205._16_8_;
          auVar195._16_8_ = dVar196 + dVar196;
          auVar195._24_8_ = dVar209 + dVar209;
          auVar205 = vpermpd_avx2(auVar195,0xc9);
          auVar61 = vpermpd_avx2(auVar195,0xd2);
          auVar60._0_8_ = auVar143._0_8_ * auVar61._0_8_ - auVar205._0_8_ * auVar35._0_8_;
          auVar60._8_8_ = auVar143._8_8_ * auVar61._8_8_ - auVar205._8_8_ * auVar35._8_8_;
          auVar60._16_8_ = auVar143._16_8_ * auVar61._16_8_ - auVar205._16_8_ * auVar35._16_8_;
          auVar60._24_8_ = auVar143._24_8_ * auVar61._24_8_ - auVar205._24_8_ * auVar35._24_8_;
          auVar24._0_8_ =
               local_2c0 * auVar213._0_8_ *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
               local_2d0 * auVar45._0_8_ *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
               dVar80 * auVar207._0_8_ +
               auVar192._16_8_ * auVar173._0_8_ *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
          auVar24._8_8_ =
               local_2c0 * auVar213._8_8_ * _UNK_150b54428 +
               local_2d0 * auVar45._8_8_ * _UNK_150b54408 +
               dVar80 * auVar207._8_8_ + auVar192._16_8_ * auVar173._8_8_ * _UNK_150b543e8;
          auVar35._16_8_ =
               local_2c0 * auVar173._0_8_ * _UNK_150b54430 +
               local_2d0 * auVar207._0_8_ * _UNK_150b54410 +
               dVar80 * auVar45._0_8_ + auVar192._16_8_ * auVar213._0_8_ * _UNK_150b543f0;
          auVar35._0_16_ = auVar24;
          auVar35._24_8_ =
               local_2c0 * auVar173._8_8_ * _UNK_150b54438 +
               local_2d0 * auVar207._8_8_ * _UNK_150b54418 +
               dVar80 * auVar45._8_8_ + auVar192._16_8_ * auVar213._8_8_ * _UNK_150b543f8;
          auVar143 = vpermpd_avx2(auVar60,0xc9);
          auVar84 = vshufpd_avx(auVar24,auVar24,1);
          auVar173 = vunpcklpd_avx(local_370,local_380);
          auVar65 = auVar35._16_16_;
          auVar102 = vmovhpd_avx(local_390,*(undefined8 *)(param_1 + lVar12 + 0x38));
          auVar103 = vshufpd_avx(auVar65,auVar65,1);
          auVar45._0_8_ = auVar173._0_8_ + auVar205._0_8_ * dVar80 + auVar59._0_8_ + auVar143._0_8_;
          auVar45._8_8_ = auVar173._8_8_ + auVar205._8_8_ * dVar80 + auVar59._8_8_ + auVar143._8_8_;
          auVar61._16_8_ =
               auVar102._0_8_ + auVar205._16_8_ * dVar80 + auVar59._16_8_ + auVar143._16_8_;
          auVar61._0_16_ = auVar45;
          auVar61._24_8_ =
               auVar102._8_8_ + auVar205._24_8_ * dVar80 + auVar59._24_8_ + auVar143._24_8_;
          auVar102 = vshufpd_avx(auVar45,auVar45,1);
          uVar135 = auVar102._0_8_;
          auVar102 = vunpcklpd_avx(auVar161,local_280);
          auVar36 = vunpcklpd_avx(auVar15,auVar36);
          auVar15 = vshufpd_avx(auVar61._16_16_,auVar61._16_16_,1);
          uVar210 = auVar15._0_8_;
          auVar186._0_8_ = auVar187._0_8_ * auVar36._0_8_;
          auVar186._8_8_ = auVar187._8_8_ * auVar36._8_8_;
          auVar15 = vshufpd_avx(auVar186,auVar186,1);
          local_380._0_8_ = auVar15._0_8_;
          auVar200._0_8_ = auVar138._0_8_ * auVar102._0_8_;
          auVar200._8_8_ = auVar138._8_8_ * auVar102._8_8_;
          auVar15 = vshufpd_avx(auVar200,auVar200,1);
          local_370._0_8_ = auVar15._0_8_;
          dVar80 = auVar45._0_8_;
          dVar81 = auVar61._16_8_;
          auVar205._16_8_ = auVar186._0_8_;
          auVar192._16_8_ = auVar200._0_8_;
        }
        else {
          local_1e0._0_16_ = auVar187;
          auVar188._8_8_ = uVar64;
          auVar188._0_8_ = uVar64;
          auVar191._16_8_ = uVar64;
          auVar191._0_16_ = auVar188;
          auVar191._24_8_ = uVar64;
          auVar103 = vunpcklpd_avx(auVar188,auVar103);
          auVar178._8_8_ = uVar66;
          auVar178._0_8_ = uVar66;
          auVar178._16_8_ = uVar66;
          auVar178._24_8_ = uVar66;
          auVar143 = vblendpd_avx(ZEXT1632(auVar103),auVar178,4);
          auVar208._8_8_ = auVar205._16_8_;
          auVar208._0_8_ = auVar205._16_8_;
          auVar208._16_8_ = auVar205._16_8_;
          auVar208._24_8_ = auVar205._16_8_;
          auVar35 = vblendpd_avx(auVar143,auVar208,8);
          auVar215._0_8_ = auVar35._0_8_ + auVar35._0_8_;
          auVar215._8_8_ = auVar35._8_8_ + auVar35._8_8_;
          auVar215._16_8_ = auVar35._16_8_ + auVar35._16_8_;
          auVar215._24_8_ = auVar35._24_8_ + auVar35._24_8_;
          auVar179._0_8_ = auVar143._0_8_ * auVar215._0_8_;
          auVar179._8_8_ = auVar143._8_8_ * auVar215._8_8_;
          auVar179._16_8_ = auVar143._16_8_ * auVar215._16_8_;
          auVar179._24_8_ = auVar143._24_8_ * auVar215._24_8_;
          auVar143 = vpermpd_avx2(auVar179,0xc1);
          auVar35 = vpermpd_avx2(auVar179,0xda);
          auVar54._0_8_ = auVar35._0_8_ + auVar143._0_8_;
          auVar54._8_8_ = auVar35._8_8_ + auVar143._8_8_;
          auVar54._16_8_ = auVar35._16_8_ + auVar143._16_8_;
          auVar54._24_8_ = auVar35._24_8_ + auVar143._24_8_;
          auVar143 = vblendpd_avx(ZEXT1632(auVar103),auVar191,0xc);
          auVar35 = vpermpd_avx2(auVar215,0x29);
          auVar111._0_8_ = auVar35._0_8_ * auVar143._0_8_;
          auVar111._8_8_ = auVar35._8_8_ * auVar143._8_8_;
          auVar111._16_8_ = auVar35._16_8_ * auVar143._16_8_;
          auVar111._24_8_ = auVar35._24_8_ * auVar143._24_8_;
          auVar143 = vpermpd_avx2(auVar215,0x12);
          auVar180._0_8_ = auVar205._16_8_ * auVar143._0_8_;
          auVar180._8_8_ = auVar205._16_8_ * auVar143._8_8_;
          auVar180._16_8_ = auVar205._16_8_ * auVar143._16_8_;
          auVar180._24_8_ = auVar205._16_8_ * auVar143._24_8_;
          auVar143 = vsubpd_avx(auVar111,auVar180);
          auVar15 = vunpcklpd_avx(auVar15,auVar36);
          auVar181._16_8_ = dVar209;
          auVar181._0_16_ = auVar15;
          auVar181._24_8_ = 0;
          auVar103 = vunpcklpd_avx(auVar36,auVar161);
          auVar112._8_8_ = __real_3ff0000000000000;
          auVar112._0_8_ = __real_3ff0000000000000;
          auVar112._16_8_ = __real_3ff0000000000000;
          auVar112._24_8_ = __real_3ff0000000000000;
          auVar35 = vsubpd_avx(auVar112,auVar54);
          auVar44._0_8_ = auVar15._0_8_ * auVar35._0_8_;
          auVar44._8_8_ = auVar15._8_8_ * auVar35._8_8_;
          auVar55._16_8_ = dVar209 * auVar35._16_8_;
          auVar55._0_16_ = auVar44;
          auVar55._24_8_ = auVar35._24_8_ * 0.0;
          auVar149._0_8_ = (auVar180._0_8_ + auVar111._0_8_) * auVar15._0_8_;
          auVar149._8_8_ = (auVar180._8_8_ + auVar111._8_8_) * auVar15._8_8_;
          auVar155._16_8_ = (auVar180._16_8_ + auVar111._16_8_) * dVar209;
          auVar155._0_16_ = auVar149;
          auVar155._24_8_ = (auVar180._24_8_ + auVar111._24_8_) * 0.0;
          local_260 = vunpcklpd_avx(auVar44,auVar149);
          auVar121._0_8_ = auVar143._0_8_ * auVar103._0_8_;
          auVar121._8_8_ = auVar143._8_8_ * auVar103._8_8_;
          auVar129._16_8_ = auVar143._16_8_ * dVar196;
          auVar129._0_16_ = auVar121;
          auVar129._24_8_ = auVar143._24_8_ * 0.0;
          local_250[0] = (double)vmovlpd_avx(auVar129._16_16_);
          local_250[1] = 0.0;
          local_240 = vblendpd_avx(auVar44,auVar121,1);
          local_230 = vmovhpd_avx(auVar149);
          local_220 = vblendpd_avx(auVar121,auVar155._16_16_,1);
          local_228 = 0;
          local_210 = vmovlpd_avx(auVar55._16_16_);
          local_208 = 0;
          auVar27._8_8_ = auVar192._16_8_;
          auVar27._0_8_ = auVar192._16_8_;
          auVar32._16_8_ = auVar192._16_8_;
          auVar32._0_16_ = auVar27;
          auVar32._24_8_ = auVar192._16_8_;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = local_2d0;
          auVar15 = vunpcklpd_avx(auVar27,auVar9);
          auVar130._8_8_ = local_2c0;
          auVar130._0_8_ = local_2c0;
          auVar130._16_8_ = local_2c0;
          auVar130._24_8_ = local_2c0;
          auVar143 = vblendpd_avx(ZEXT1632(auVar15),auVar130,4);
          auVar142._8_8_ = dVar80;
          auVar142._0_8_ = dVar80;
          auVar142._16_8_ = dVar80;
          auVar142._24_8_ = dVar80;
          auVar35 = vblendpd_avx(auVar143,auVar142,8);
          auVar156._0_8_ = auVar35._0_8_ + auVar35._0_8_;
          auVar156._8_8_ = auVar35._8_8_ + auVar35._8_8_;
          auVar156._16_8_ = auVar35._16_8_ + auVar35._16_8_;
          auVar156._24_8_ = auVar35._24_8_ + auVar35._24_8_;
          auVar131._0_8_ = auVar143._0_8_ * auVar156._0_8_;
          auVar131._8_8_ = auVar143._8_8_ * auVar156._8_8_;
          auVar131._16_8_ = auVar143._16_8_ * auVar156._16_8_;
          auVar131._24_8_ = auVar143._24_8_ * auVar156._24_8_;
          auVar143 = vpermpd_avx2(auVar131,0xc1);
          auVar35 = vpermpd_avx2(auVar131,0xda);
          auVar132._0_8_ = auVar143._0_8_ + auVar35._0_8_;
          auVar132._8_8_ = auVar143._8_8_ + auVar35._8_8_;
          auVar132._16_8_ = auVar143._16_8_ + auVar35._16_8_;
          auVar132._24_8_ = auVar143._24_8_ + auVar35._24_8_;
          auVar35 = vsubpd_avx(auVar112,auVar132);
          auVar143 = vblendpd_avx(ZEXT1632(auVar15),auVar32,0xc);
          auVar192 = vpermpd_avx2(auVar156,0x29);
          auVar33._0_8_ = auVar143._0_8_ * auVar192._0_8_;
          auVar33._8_8_ = auVar143._8_8_ * auVar192._8_8_;
          auVar33._16_8_ = auVar143._16_8_ * auVar192._16_8_;
          auVar33._24_8_ = auVar143._24_8_ * auVar192._24_8_;
          auVar143 = vpermpd_avx2(auVar156,0x12);
          auVar56._0_8_ = dVar80 * auVar143._0_8_;
          auVar56._8_8_ = dVar80 * auVar143._8_8_;
          auVar56._16_8_ = dVar80 * auVar143._16_8_;
          auVar56._24_8_ = dVar80 * auVar143._24_8_;
          auVar143 = vsubpd_avx(auVar33,auVar56);
          auVar15 = vunpcklpd_avx(local_2e0,auVar102);
          auVar57._16_8_ = dVar81;
          auVar57._0_16_ = auVar15;
          auVar57._24_8_ = 0;
          auVar102 = vunpcklpd_avx(auVar102,auVar84);
          auVar71._0_8_ = auVar143._0_8_ * auVar102._0_8_;
          auVar71._8_8_ = auVar143._8_8_ * auVar102._8_8_;
          auVar77._16_8_ = auVar143._16_8_ * (double)local_2e0._0_8_;
          auVar77._0_16_ = auVar71;
          auVar77._24_8_ = auVar143._24_8_ * 0.0;
          auVar34._8_8_ = uVar96;
          auVar34._0_8_ = uVar96;
          auVar34._16_8_ = uVar96;
          auVar34._24_8_ = uVar96;
          auVar143 = vblendpd_avx(auVar181,auVar34,8);
          auVar85._0_8_ = auVar35._0_8_ * auVar15._0_8_;
          auVar85._8_8_ = auVar35._8_8_ * auVar15._8_8_;
          auVar94._16_8_ = auVar35._16_8_ * dVar81;
          auVar94._0_16_ = auVar85;
          auVar94._24_8_ = auVar35._24_8_ * 0.0;
          auVar104._0_8_ = (auVar33._0_8_ + auVar56._0_8_) * auVar15._0_8_;
          auVar104._8_8_ = (auVar33._8_8_ + auVar56._8_8_) * auVar15._8_8_;
          auVar113._16_8_ = (auVar33._16_8_ + auVar56._16_8_) * dVar81;
          auVar113._0_16_ = auVar104;
          auVar113._24_8_ = (auVar33._24_8_ + auVar56._24_8_) * 0.0;
          auVar133._8_8_ = uVar63;
          auVar133._0_8_ = uVar63;
          auVar133._16_8_ = uVar63;
          auVar133._24_8_ = uVar63;
          auVar35 = vblendpd_avx(auVar57,auVar133,8);
          auVar189._0_8_ = auVar35._0_8_ * auVar143._0_8_;
          auVar189._8_8_ = auVar35._8_8_ * auVar143._8_8_;
          auVar192._16_8_ = auVar35._16_8_ * auVar143._16_8_;
          auVar192._0_16_ = auVar189;
          auVar192._24_8_ = auVar35._24_8_ * auVar143._24_8_;
          auVar15 = CONCAT88(auVar104._0_8_,auVar104._0_8_);
          auVar143 = vblendpd_avx(ZEXT1632(auVar113._16_16_),auVar77,2);
          auVar143 = vblendpd_avx(auVar143,auVar94,4);
          auVar35 = vblendpd_avx(ZEXT1632(auVar85),ZEXT1632(auVar15),2);
          auVar35 = vblendpd_avx(auVar35,auVar77,4);
          auVar78._16_16_ = auVar104;
          auVar78._0_16_ = auVar71;
          auVar61 = vshufpd_avx(auVar78,ZEXT1632(auVar85),0xe);
          auVar102 = vunpcklpd_avx(local_370,local_380);
          auVar15 = vmovhpd_avx(local_390,__real_3ff0000000000000);
          local_1e8 = 0x3ff0000000000000;
          lVar12 = 0x18;
          do {
            dVar80 = *(double *)(local_280 + lVar12 + 8);
            dVar81 = *(double *)(local_280 + lVar12 + 0x18);
            auVar205._16_8_ = *(double *)(local_280 + lVar12 + 0x10);
            dVar196 = *(double *)(local_260 + lVar12);
            *(double *)(local_380 + lVar12 + 8) =
                 auVar102._0_8_ * dVar196 +
                 auVar61._0_8_ * auVar205._16_8_ + auVar35._0_8_ * dVar80 + auVar143._0_8_ * dVar81;
            *(double *)(local_370 + lVar12) =
                 auVar102._8_8_ * dVar196 +
                 auVar61._8_8_ * auVar205._16_8_ + auVar35._8_8_ * dVar80 + auVar143._8_8_ * dVar81;
            *(double *)(local_370 + lVar12 + 8) =
                 auVar15._0_8_ * dVar196 +
                 auVar61._16_8_ * auVar205._16_8_ +
                 auVar35._16_8_ * dVar80 + auVar143._16_8_ * dVar81;
            *(double *)(local_360 + lVar12) =
                 auVar15._8_8_ * dVar196 +
                 auVar61._24_8_ * auVar205._16_8_ +
                 auVar35._24_8_ * dVar80 + auVar143._24_8_ * dVar81;
            lVar12 = lVar12 + 0x20;
          } while (lVar12 != 0x98);
          dVar81 = adStack_358[1] * adStack_358[1] +
                   (double)local_360 * (double)local_360 + adStack_358[0] * adStack_358[0];
          dVar80 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= dVar81 + __real_be45798ee2308c3a) {
            dVar80 = __real_3ff0000000000000 / SQRT(dVar81);
          }
          auVar205._16_8_ =
               local_330 * local_330 +
               (double)local_340._0_8_ * (double)local_340._0_8_ +
               (double)local_340._8_8_ * (double)local_340._8_8_;
          dVar81 = __real_3ff0000000000000;
          if (__real_0000000000000000 <= auVar205._16_8_ + __real_be45798ee2308c3a) {
            dVar81 = __real_3ff0000000000000 / SQRT(auVar205._16_8_);
          }
          auVar15 = vshufpd_avx(auVar189,auVar189,1);
          auVar102 = vshufpd_avx(auVar192._16_16_,auVar192._16_16_,1);
          dVar196 = local_310 * local_310 +
                    (double)local_320._0_8_ * (double)local_320._0_8_ +
                    (double)local_320._8_8_ * (double)local_320._8_8_;
          auVar205._16_8_ = __real_3ff0000000000000;
          if (__real_0000000000000000 <= dVar196 + __real_be45798ee2308c3a) {
            auVar205._16_8_ = __real_3ff0000000000000 / SQRT(dVar196);
          }
          auVar86._8_8_ = 0;
          auVar86._0_8_ = dVar80 * (double)local_360;
          auVar105._8_8_ = 0;
          auVar105._0_8_ = dVar80 * adStack_358[0];
          auVar84 = vunpcklpd_avx(auVar86,auVar105);
          auVar106._8_8_ = 0;
          auVar106._0_8_ = dVar81 * (double)local_340._0_8_;
          auVar122._8_8_ = 0;
          auVar122._0_8_ = dVar81 * (double)local_340._8_8_;
          auVar103 = vunpcklpd_avx(auVar106,auVar122);
          auVar123._8_8_ = 0;
          auVar123._0_8_ = auVar205._16_8_ * (double)local_320._0_8_;
          auVar139._8_8_ = 0;
          auVar139._0_8_ = auVar205._16_8_ * (double)local_320._8_8_;
          auVar138 = vunpcklpd_avx(auVar123,auVar139);
          auVar35 = ZEXT1632(ZEXT816(0));
          auVar143 = vcmppd_avx(auVar35,auVar192,2);
          auVar143 = vblendvps_avx(auVar35,
                                   ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                   ,auVar143);
          auVar157._0_8_ =
               (double)CONCAT44(auVar143._4_4_ & __real_8000000000000000._4_4_ ^
                                __real_bff0000000000000._4_4_,
                                auVar143._0_4_ & (uint)__real_8000000000000000 ^
                                (uint)__real_bff0000000000000);
          auVar157._8_4_ =
               auVar143._8_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
          auVar157._12_4_ =
               auVar143._12_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
          auVar157._16_4_ =
               auVar143._16_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
          auVar157._20_4_ =
               auVar143._20_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
          auVar157._24_4_ =
               auVar143._24_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
          auVar157._28_4_ =
               auVar143._28_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
          local_360 = (undefined1  [8])(auVar84._0_8_ * auVar157._0_8_);
          adStack_358[0] = auVar84._8_8_ * auVar157._0_8_;
          auVar79._16_8_ = dVar80 * adStack_358[1] * auVar157._0_8_;
          auVar79._0_16_ = _local_360;
          auVar79._24_8_ = auVar157._0_8_ * 0.0;
          adStack_358[1] = (double)vmovlpd_avx(auVar79._16_16_);
          auVar143 = vpermpd_avx2(auVar157,0x55);
          local_340._0_8_ = auVar143._0_8_ * auVar103._0_8_;
          local_340._8_8_ = auVar143._8_8_ * auVar103._8_8_;
          auVar58._16_8_ = auVar143._16_8_ * dVar81 * local_330;
          auVar58._0_16_ = local_340;
          auVar58._24_8_ = auVar143._24_8_ * 0.0;
          local_330 = (double)vmovlpd_avx(auVar58._16_16_);
          auVar143 = vpermpd_avx2(auVar157,0xaa);
          local_320._0_8_ = auVar143._0_8_ * auVar138._0_8_;
          local_320._8_8_ = auVar143._8_8_ * auVar138._8_8_;
          auVar114._16_8_ = auVar143._16_8_ * auVar205._16_8_ * local_310;
          auVar114._0_16_ = local_320;
          auVar114._24_8_ = auVar143._24_8_ * 0.0;
          local_310 = (double)vmovlpd_avx(auVar114._16_16_);
          auVar158._8_8_ = __real_0010000000000000;
          auVar158._0_8_ = __real_0010000000000000;
          auVar158._16_8_ = __real_0010000000000000;
          auVar158._24_8_ = __real_0010000000000000;
          auVar143 = vblendpd_avx(auVar79,auVar158,8);
          auVar134._0_8_ = __real_7fffffffffffffff & auVar143._0_8_;
          auVar134._8_8_ = __real_7fffffffffffffff & auVar143._8_8_;
          auVar134._16_8_ = __real_7fffffffffffffff & auVar143._16_8_;
          auVar134._24_8_ = __real_7fffffffffffffff & auVar143._24_8_;
          auVar170._8_8_ = __real_3f1a36e2eb1c432d;
          auVar170._0_8_ = __real_3f1a36e2eb1c432d;
          auVar170._16_8_ = __real_3f1a36e2eb1c432d;
          auVar170._24_8_ = __real_3f1a36e2eb1c432d;
          auVar143 = vcmppd_avx(auVar134,auVar170,6);
          auVar143 = vpackssdw_avx2(auVar143,auVar35);
          _local_280 = auVar192;
          if ((((((((SUB321(auVar143 >> 0x1f,0) & 1) == 0 && (SUB321(auVar143 >> 0x3f,0) & 1) == 0)
                  && (SUB321(auVar143 >> 0x5f,0) & 1) == 0) && SUB321(auVar143 >> 0x7f,0) == '\0')
                && (SUB321(auVar143 >> 0x9f,0) & 1) == 0) && SUB321(auVar143 >> 0xbf,0) == '\0') &&
              (SUB321(auVar143 >> 0xdf,0) & 1) == 0) && -1 < auVar143[0x1f]) {
            auVar70 = SUB6416(ZEXT864(0),0) << 0x40;
            auVar21 = ZEXT816(0) << 0x40;
            auVar43 = ZEXT816(0) << 0x40;
            auVar174._8_8_ = 0;
            auVar174._0_8_ = __real_3ff0000000000000;
          }
          else {
            auVar143 = vblendpd_avx(auVar58,auVar158,8);
            auVar182._0_8_ = auVar143._0_8_ & __real_7fffffffffffffff;
            auVar182._8_8_ = auVar143._8_8_ & __real_7fffffffffffffff;
            auVar182._16_8_ = auVar143._16_8_ & __real_7fffffffffffffff;
            auVar182._24_8_ = auVar143._24_8_ & __real_7fffffffffffffff;
            auVar143 = vcmppd_avx(auVar182,auVar170,6);
            auVar143 = vpackssdw_avx2(auVar143,auVar35);
            auVar174._8_8_ = 0;
            auVar174._0_8_ = __real_3ff0000000000000;
            if ((((((((SUB321(auVar143 >> 0x1f,0) & 1) != 0 || (SUB321(auVar143 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar143 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar143 >> 0x7f,0) != '\0') || (SUB321(auVar143 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar143 >> 0xbf,0) != '\0') || (SUB321(auVar143 >> 0xdf,0) & 1) != 0) ||
                auVar143[0x1f] < '\0') {
              auVar143 = vblendpd_avx(auVar114,auVar158,8);
              auVar159._0_8_ = __real_7fffffffffffffff & auVar143._0_8_;
              auVar159._8_8_ = __real_7fffffffffffffff & auVar143._8_8_;
              auVar159._16_8_ = __real_7fffffffffffffff & auVar143._16_8_;
              auVar159._24_8_ = __real_7fffffffffffffff & auVar143._24_8_;
              auVar143 = vcmppd_avx(auVar159,auVar170,6);
              auVar143 = vpackssdw_avx2(auVar143,ZEXT1632(ZEXT816(0)));
              if ((((((((SUB321(auVar143 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar143 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar143 >> 0x5f,0) & 1) != 0) || SUB321(auVar143 >> 0x7f,0) != '\0')
                    || (SUB321(auVar143 >> 0x9f,0) & 1) != 0) || SUB321(auVar143 >> 0xbf,0) != '\0')
                  || (SUB321(auVar143 >> 0xdf,0) & 1) != 0) || auVar143[0x1f] < '\0') {
                auVar84 = vshufpd_avx(local_340,local_340,1);
                dVar80 = auVar114._16_8_ + auVar84._0_8_ + (double)local_360;
                if (dVar80 <= __real_0000000000000000) {
                  bVar5 = (double)local_360 < auVar84._0_8_;
                  uVar10 = (ulonglong)bVar5;
                  if (*(double *)(local_360 + ((uint)bVar5 * 0x20 + (uint)bVar5 * 8)) <
                      auVar114._16_8_) {
                    uVar10 = 2;
                  }
                  iVar2 = *(int *)(&DAT_151c6af4c + uVar10 * 4);
                  lVar12 = (longlong)iVar2;
                  iVar6 = (int)uVar10;
                  iVar3 = *(int *)(&DAT_151c6af4c + lVar12 * 4);
                  dVar80 = __real_3ff0000000000000 /
                           SQRT(__real_3ff0000000000000 +
                                ((*(double *)(local_360 + (uint)(iVar6 * 0x28)) -
                                 *(double *)(local_360 + lVar12 * 0x28)) -
                                *(double *)(local_360 + (longlong)iVar3 * 0x28)));
                  *(double *)((longlong)&local_2a0 + (ulonglong)(uint)(iVar6 * 8)) =
                       (__real_3ff0000000000000 / dVar80) * __real_3fe0000000000000;
                  dVar80 = dVar80 * __real_3fe0000000000000;
                  (&local_2a0)[lVar12] =
                       (*(double *)(local_360 + (longlong)(iVar2 + iVar6 * 4) * 8) +
                       *(double *)(local_360 + (longlong)(iVar6 + iVar2 * 4) * 8)) * dVar80;
                  (&local_2a0)[iVar3] =
                       dVar80 * (*(double *)(local_360 + (longlong)(iVar3 + iVar6 * 4) * 8) +
                                *(double *)(local_360 + (longlong)(iVar6 + iVar3 * 4) * 8));
                  auVar174._8_8_ = 0;
                  auVar174._0_8_ =
                       dVar80 * (*(double *)(local_360 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                                *(double *)(local_360 + (longlong)(iVar2 + iVar3 * 4) * 8));
                  auVar70._8_8_ = 0;
                  auVar70._0_8_ = local_2a0;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = local_298;
                  auVar43._8_8_ = 0;
                  auVar43._0_8_ = local_290;
                  uVar10 = local_180._0_8_;
                }
                else {
                  auVar84 = vshufpd_avx(_local_360,_local_360,1);
                  auVar103 = vshufpd_avx(local_320,local_320,1);
                  dVar81 = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + dVar80);
                  dVar80 = __real_3fe0000000000000 * dVar81;
                  auVar70._8_8_ = 0;
                  auVar70._0_8_ = dVar80 * (auVar58._16_8_ - auVar103._0_8_);
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = dVar80 * ((double)local_320._0_8_ - auVar79._16_8_);
                  auVar43._8_8_ = 0;
                  auVar43._0_8_ = dVar80 * (auVar84._0_8_ - (double)local_340._0_8_);
                  auVar174._8_8_ = 0;
                  auVar174._0_8_ = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar81);
                }
                goto LAB_140a9a340;
              }
            }
            auVar70 = SUB6416(ZEXT864(0),0) << 0x40;
            auVar21 = ZEXT816(0) << 0x40;
            auVar43 = ZEXT816(0) << 0x40;
          }
LAB_140a9a340:
          auVar84 = vunpcklpd_avx(auVar43,auVar174);
          auVar103 = vunpcklpd_avx(auVar70,auVar21);
          dVar81 = auVar103._0_8_;
          auVar205._16_8_ = auVar103._8_8_;
          dVar196 = auVar84._0_8_;
          auVar22._0_8_ = dVar196 * dVar196 + dVar81 * dVar81;
          dVar209 = auVar84._8_8_;
          auVar22._8_8_ = dVar209 * dVar209 + auVar205._16_8_ * auVar205._16_8_;
          auVar84 = vshufpd_avx(auVar22,auVar22,1);
          dVar80 = auVar22._0_8_ + auVar84._0_8_;
          auVar147._8_8_ = 0;
          auVar147._0_8_ = __real_3e45798ee2308c3a;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = dVar80;
          auVar84 = vcmpsd_avx(auVar147,auVar23,6);
          uVar63 = ~auVar84._0_8_ & __real_ffffffffffffffff;
          dVar80 = __real_3ff0000000000000 / SQRT(dVar80);
          auVar24._0_8_ = (double)((ulonglong)(dVar81 * dVar80) & uVar63);
          auVar24._8_8_ = (double)((ulonglong)(auVar205._16_8_ * dVar80) & uVar63);
          auVar31._16_8_ = (ulonglong)(dVar196 * dVar80) & uVar63;
          auVar31._0_16_ = auVar24;
          auVar31._24_8_ = (ulonglong)(dVar209 * dVar80) & uVar63;
          auVar53._0_8_ =
               ~uVar63 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar53._8_8_ = ~uVar63 & _UNK_150b54548;
          auVar53._16_8_ = ~uVar63 & _UNK_150b54550;
          auVar53._24_8_ = ~uVar63 & _UNK_150b54558;
          auVar65 = auVar31._16_16_ | auVar53._16_16_;
          auVar84 = vshufps_avx(auVar24,auVar24,0x4e);
          auVar103 = vshufps_avx(auVar65,auVar65,0x4e);
          local_370._0_8_ = auVar102._0_8_;
          uVar210 = 0;
          local_380._0_8_ = auVar15._0_8_;
          dVar80 = dStack_300;
          uVar135 = uStack_2f8;
          dVar81 = dStack_2f0;
          auVar205._16_8_ = (double)local_280._0_8_;
        }
        auVar148._8_8_ = 0;
        auVar148._0_8_ = __real_3e45798ee2308c3a;
        auVar15 = vunpcklpd_avx(auVar24,auVar84);
        auVar102 = vunpcklpd_avx(auVar65,auVar103);
        puVar11 = (ulonglong *)(lVar7 + param_1);
        dVar209 = auVar15._0_8_;
        dVar4 = auVar15._8_8_;
        dVar37 = auVar102._0_8_;
        auVar25._0_8_ = dVar37 * dVar37 + dVar209 * dVar209;
        dVar62 = auVar102._8_8_;
        auVar25._8_8_ = dVar62 * dVar62 + dVar4 * dVar4;
        auVar15 = vshufpd_avx(auVar25,auVar25,1);
        dVar196 = auVar25._0_8_ + auVar15._0_8_;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar196;
        auVar15 = vcmpsd_avx(auVar148,auVar26,6);
        uVar63 = ~auVar15._0_8_ & __real_ffffffffffffffff;
        dVar196 = __real_3ff0000000000000 / SQRT(dVar196);
        uVar64 = ~uVar63 & _UNK_150b54548;
        uVar66 = ~uVar63 & _UNK_150b54550;
        uVar96 = ~uVar63 & _UNK_150b54558;
        *puVar11 = (ulonglong)(dVar209 * dVar196) & uVar63 |
                   ~uVar63 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000
        ;
        puVar11[1] = (ulonglong)(dVar4 * dVar196) & uVar63 | uVar64;
        puVar11[2] = (ulonglong)(dVar37 * dVar196) & uVar63 | uVar66;
        puVar11[3] = (ulonglong)(dVar62 * dVar196) & uVar63 | uVar96;
        uVar63 = (ulonglong)((uint)uVar1 * 0x60);
        *(double *)(param_1 + 0x20 + uVar63) = dVar80;
        *(undefined8 *)(param_1 + 0x28 + uVar63) = uVar135;
        *(double *)(param_1 + 0x30 + uVar63) = dVar81;
        *(undefined8 *)(param_1 + 0x38 + uVar63) = uVar210;
        *(double *)(param_1 + 0x40 + uVar63) = auVar205._16_8_;
        *(undefined8 *)(param_1 + 0x48 + uVar63) = local_380._0_8_;
        *(double *)(param_1 + 0x50 + uVar63) = auVar192._16_8_;
        *(undefined8 *)(param_1 + 0x58 + uVar63) = local_370._0_8_;
        uVar38 = uVar38 + 1;
        auVar15 = ZEXT816(0);
      } while (uVar38 != uVar10);
    }
  }
  else if (1 < (int)param_7) {
    uVar10 = 1;
    auVar95 = ZEXT1664((undefined1  [16])0x0);
    auVar143 = vpcmpgtd_avx2(auVar95._0_32_,local_1a0);
    auVar15 = vpackssdw_avx(auVar143._0_16_,auVar143._16_16_);
    local_160._0_16_ = auVar15;
    local_1a8 = param_4;
    do {
      uVar1 = *(ushort *)(param_3 + uVar10 * 2);
      lVar7 = (ulonglong)uVar1 * 0x60;
      lVar12 = (longlong)*(int *)(param_4 + (int)((uint)uVar1 * param_5 + param_6)) * 0x60;
      auVar192._16_8_ = *(double *)(param_1 + lVar12);
      local_2d0 = *(double *)(param_1 + 8 + lVar12);
      uStack_2c8 = 0;
      local_2c0 = *(double *)(param_1 + 0x10 + lVar12);
      uStack_2b8 = 0;
      dVar80 = *(double *)(param_1 + 0x18 + lVar12);
      local_370._8_8_ = 0;
      local_370._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar12);
      local_380._8_8_ = 0;
      local_380._0_8_ = *(ulonglong *)(param_1 + 0x28 + lVar12);
      local_390._8_8_ = 0;
      local_390._0_8_ = *(ulonglong *)(param_1 + 0x30 + lVar12);
      local_2e0._0_8_ = *(double *)(param_1 + 0x40 + lVar12);
      local_2e0._8_8_ = 0;
      local_130._8_8_ = 0;
      local_130._0_8_ = *(ulonglong *)(param_1 + 0x48 + lVar12);
      dVar81 = *(double *)(param_1 + 0x50 + lVar12);
      auVar136._8_8_ = 0;
      auVar136._0_8_ = dVar81;
      uVar38 = *(ulonglong *)(param_1 + 0x58 + lVar12);
      auVar206._8_8_ = 0;
      auVar206._0_8_ = uVar38;
      uVar63 = *(ulonglong *)(param_2 + lVar7);
      auVar163._8_8_ = 0;
      auVar163._0_8_ = uVar63;
      auVar211._8_8_ = 0;
      auVar211._0_8_ = *(ulonglong *)(param_2 + 8 + lVar7);
      auVar35 = auVar95._0_32_;
      auVar143 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 0x40 + lVar7),auVar35,1);
      auVar143 = vpackssdw_avx2(auVar143,auVar35);
      auVar15 = vpackssdw_avx(auVar143._0_16_,auVar143._16_16_);
      auVar143 = vcmppd_avx(*(undefined1 (*) [32])(param_1 + 0x40 + lVar12),auVar35,1);
      auVar143 = vpackssdw_avx2(auVar143,auVar35);
      auVar102 = vpackssdw_avx(auVar143._0_16_,auVar143._16_16_);
      uVar64 = *(ulonglong *)(param_2 + 0x10 + lVar7);
      auVar145._8_8_ = 0;
      auVar145._0_8_ = uVar64;
      auVar15 = vpor_avx(auVar15,auVar102);
      auVar205._16_8_ = *(double *)(param_2 + 0x18 + lVar7);
      auVar197._8_8_ = 0;
      auVar197._0_8_ = auVar205._16_8_;
      auVar15 = vpshufd_avx(auVar15,0xd8);
      auVar15 = vpand_avx(auVar15,local_160._0_16_);
      auVar15 = vpsllw_avx(auVar15,0xf);
      local_200 = *(ulonglong *)(param_2 + 0x20 + lVar7);
      auVar82._8_8_ = 0;
      auVar82._0_8_ = local_200;
      local_1f8 = *(ulonglong *)(param_2 + 0x28 + lVar7);
      auVar99._8_8_ = 0;
      auVar99._0_8_ = local_1f8;
      local_1f0 = *(ulonglong *)(param_2 + 0x30 + lVar7);
      auVar40._8_8_ = 0;
      auVar40._0_8_ = local_1f0;
      dVar196 = *(double *)(param_2 + 0x40 + lVar7);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar196;
      auVar171._8_8_ = 0;
      auVar171._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar7);
      dVar209 = *(double *)(param_2 + 0x50 + lVar7);
      auVar67._8_8_ = 0;
      auVar67._0_8_ = dVar209;
      uVar66 = *(ulonglong *)(param_2 + 0x58 + lVar7);
      local_280._8_8_ = 0;
      local_280._0_8_ = uVar66;
      if ((((((((SUB161(auVar15 >> 0xf,0) & 1) == 0 && (SUB161(auVar15 >> 0x1f,0) & 1) == 0) &&
              (SUB161(auVar15 >> 0x2f,0) & 1) == 0) && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar15 >> 0x4f,0) & 1) == 0) && (SUB161(auVar15 >> 0x5f,0) & 1) == 0) &&
          (SUB161(auVar15 >> 0x6f,0) & 1) == 0) && -1 < auVar15[0xf]) {
        auVar102 = vunpcklpd_avx(auVar145,auVar197);
        local_120 = ZEXT1632(auVar102);
        auVar84 = vunpcklpd_avx(auVar197,auVar145);
        local_180 = ZEXT1632(auVar84);
        auVar103 = vunpcklpd_avx(auVar163,auVar211);
        auVar138 = vunpcklpd_avx(auVar211,auVar163);
        local_1e0 = ZEXT1632(auVar138);
        auVar183._8_8_ = dVar80;
        auVar183._0_8_ = dVar80;
        auVar162._8_8_ = auVar192._16_8_;
        auVar162._0_8_ = auVar192._16_8_;
        auVar36 = vunpcklpd_avx(auVar82,auVar99);
        auVar15 = vmovhpd_avx(auVar40,*(undefined8 *)(param_2 + lVar7 + 0x38));
        auVar161 = vunpcklpd_avx(auVar136,auVar206);
        auVar173 = vunpcklpd_avx(local_2e0,local_130);
        auVar46._0_8_ = auVar173._0_8_ * auVar36._0_8_;
        auVar46._8_8_ = auVar173._8_8_ * auVar36._8_8_;
        auVar46._16_8_ = auVar161._0_8_ * auVar15._0_8_;
        auVar46._24_8_ = auVar161._8_8_ * auVar15._8_8_;
        auVar97._8_8_ = local_2d0;
        auVar97._0_8_ = local_2d0;
        auVar116._8_8_ = local_2c0;
        auVar116._0_8_ = local_2c0;
        auVar140._16_16_ = auVar183;
        auVar140._0_16_ = auVar97;
        auVar201._16_16_ = auVar116;
        auVar201._0_16_ = auVar162;
        auVar143 = vunpcklpd_avx(auVar201,auVar140);
        auVar166._16_16_ = auVar162;
        auVar166._0_16_ = auVar97;
        auVar202._16_16_ = auVar183;
        auVar202._0_16_ = auVar116;
        auVar35 = vunpcklpd_avx(auVar166,auVar202);
        auVar61 = vpermpd_avx2(auVar46,0xc9);
        dVar81 = auVar143._0_8_ * auVar61._0_8_ - auVar35._0_8_ * auVar46._0_8_;
        auVar205._16_8_ = auVar143._8_8_ * auVar61._8_8_ - auVar35._8_8_ * auVar46._8_8_;
        dVar196 = auVar143._16_8_ * auVar61._16_8_ - auVar35._16_8_ * auVar46._16_8_;
        dVar209 = auVar143._24_8_ * auVar61._24_8_ - auVar35._24_8_ * auVar46._24_8_;
        auVar203._0_8_ = dVar81 + dVar81;
        auVar203._8_8_ = auVar205._16_8_ + auVar205._16_8_;
        auVar203._16_8_ = dVar196 + dVar196;
        auVar203._24_8_ = dVar209 + dVar209;
        auVar205 = vpermpd_avx2(auVar203,0xc9);
        auVar61 = vpermpd_avx2(auVar203,0xd2);
        auVar167._0_8_ = auVar143._0_8_ * auVar61._0_8_ - auVar35._0_8_ * auVar205._0_8_;
        auVar167._8_8_ = auVar143._8_8_ * auVar61._8_8_ - auVar35._8_8_ * auVar205._8_8_;
        auVar167._16_8_ = auVar143._16_8_ * auVar61._16_8_ - auVar35._16_8_ * auVar205._16_8_;
        auVar167._24_8_ = auVar143._24_8_ * auVar61._24_8_ - auVar35._24_8_ * auVar205._24_8_;
        auVar39._0_8_ =
             local_2c0 * auVar138._0_8_ *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
             local_2d0 * auVar102._0_8_ *
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
             dVar80 * auVar103._0_8_ +
             auVar192._16_8_ * auVar84._0_8_ *
             ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        auVar39._8_8_ =
             local_2c0 * auVar138._8_8_ * _UNK_150b54428 +
             local_2d0 * auVar102._8_8_ * _UNK_150b54408 +
             dVar80 * auVar103._8_8_ + auVar192._16_8_ * auVar84._8_8_ * _UNK_150b543e8;
        auVar47._16_8_ =
             local_2c0 * auVar84._0_8_ * _UNK_150b54430 +
             local_2d0 * auVar103._0_8_ * _UNK_150b54410 +
             dVar80 * auVar102._0_8_ + auVar192._16_8_ * auVar138._0_8_ * _UNK_150b543f0;
        auVar47._0_16_ = auVar39;
        auVar47._24_8_ =
             local_2c0 * auVar84._8_8_ * _UNK_150b54438 +
             local_2d0 * auVar103._8_8_ * _UNK_150b54418 +
             dVar80 * auVar102._8_8_ + auVar192._16_8_ * auVar138._8_8_ * _UNK_150b543f8;
        auVar143 = vpermpd_avx2(auVar167,0xc9);
        auVar102 = vshufpd_avx(auVar39,auVar39,1);
        auVar103 = vunpcklpd_avx(local_370,local_380);
        auVar36 = auVar47._16_16_;
        auVar15 = vmovhpd_avx(local_390,*(undefined8 *)(param_1 + lVar12 + 0x38));
        auVar84 = vshufpd_avx(auVar36,auVar36,1);
        auVar117._0_8_ = auVar103._0_8_ + auVar205._0_8_ * dVar80 + auVar46._0_8_ + auVar143._0_8_;
        auVar117._8_8_ = auVar103._8_8_ + auVar205._8_8_ * dVar80 + auVar46._8_8_ + auVar143._8_8_;
        auVar124._16_8_ =
             auVar15._0_8_ + auVar205._16_8_ * dVar80 + auVar46._16_8_ + auVar143._16_8_;
        auVar124._0_16_ = auVar117;
        auVar124._24_8_ =
             auVar15._8_8_ + auVar205._24_8_ * dVar80 + auVar46._24_8_ + auVar143._24_8_;
        auVar15 = vshufpd_avx(auVar117,auVar117,1);
        local_390._0_8_ = auVar15._0_8_;
        auVar103 = vunpcklpd_avx(auVar67,local_280);
        auVar138 = vunpcklpd_avx(auVar16,auVar171);
        auVar15 = vshufpd_avx(auVar124._16_16_,auVar124._16_16_,1);
        uVar135 = auVar15._0_8_;
        auVar144._0_8_ = auVar173._0_8_ * auVar138._0_8_;
        auVar144._8_8_ = auVar173._8_8_ * auVar138._8_8_;
        auVar15 = vshufpd_avx(auVar144,auVar144,1);
        local_380._0_8_ = auVar15._0_8_;
        auVar98._0_8_ = auVar161._0_8_ * auVar103._0_8_;
        auVar98._8_8_ = auVar161._8_8_ * auVar103._8_8_;
        auVar15 = vshufpd_avx(auVar98,auVar98,1);
        local_2e0._0_8_ = auVar15._0_8_;
        auVar192._16_8_ = auVar124._16_8_;
        dVar80 = auVar117._0_8_;
        dVar81 = auVar144._0_8_;
        auVar205._16_8_ = auVar98._0_8_;
      }
      else {
        auVar164._8_8_ = uVar63;
        auVar164._0_8_ = uVar63;
        auVar168._16_8_ = uVar63;
        auVar168._0_16_ = auVar164;
        auVar168._24_8_ = uVar63;
        local_1e0._0_16_ = auVar206;
        auVar15 = vunpcklpd_avx(auVar164,auVar211);
        auVar150._8_8_ = uVar64;
        auVar150._0_8_ = uVar64;
        auVar150._16_8_ = uVar64;
        auVar150._24_8_ = uVar64;
        auVar143 = vblendpd_avx(ZEXT1632(auVar15),auVar150,4);
        auVar204._8_8_ = auVar205._16_8_;
        auVar204._0_8_ = auVar205._16_8_;
        auVar204._16_8_ = auVar205._16_8_;
        auVar204._24_8_ = auVar205._16_8_;
        auVar35 = vblendpd_avx(auVar143,auVar204,8);
        auVar214._0_8_ = auVar35._0_8_ + auVar35._0_8_;
        auVar214._8_8_ = auVar35._8_8_ + auVar35._8_8_;
        auVar214._16_8_ = auVar35._16_8_ + auVar35._16_8_;
        auVar214._24_8_ = auVar35._24_8_ + auVar35._24_8_;
        auVar151._0_8_ = auVar214._0_8_ * auVar143._0_8_;
        auVar151._8_8_ = auVar214._8_8_ * auVar143._8_8_;
        auVar151._16_8_ = auVar214._16_8_ * auVar143._16_8_;
        auVar151._24_8_ = auVar214._24_8_ * auVar143._24_8_;
        auVar143 = vpermpd_avx2(auVar151,0xc1);
        auVar35 = vpermpd_avx2(auVar151,0xda);
        auVar125._0_8_ = auVar143._0_8_ + auVar35._0_8_;
        auVar125._8_8_ = auVar143._8_8_ + auVar35._8_8_;
        auVar125._16_8_ = auVar143._16_8_ + auVar35._16_8_;
        auVar125._24_8_ = auVar143._24_8_ + auVar35._24_8_;
        auVar143 = vblendpd_avx(ZEXT1632(auVar15),auVar168,0xc);
        auVar35 = vpermpd_avx2(auVar214,0x29);
        auVar152._0_8_ = auVar35._0_8_ * auVar143._0_8_;
        auVar152._8_8_ = auVar35._8_8_ * auVar143._8_8_;
        auVar152._16_8_ = auVar35._16_8_ * auVar143._16_8_;
        auVar152._24_8_ = auVar35._24_8_ * auVar143._24_8_;
        auVar143 = vpermpd_avx2(auVar214,0x12);
        auVar169._0_8_ = auVar205._16_8_ * auVar143._0_8_;
        auVar169._8_8_ = auVar205._16_8_ * auVar143._8_8_;
        auVar169._16_8_ = auVar205._16_8_ * auVar143._16_8_;
        auVar169._24_8_ = auVar205._16_8_ * auVar143._24_8_;
        auVar143 = vsubpd_avx(auVar152,auVar169);
        auVar15 = vunpcklpd_avx(auVar16,auVar171);
        auVar153._16_8_ = dVar209;
        auVar153._0_16_ = auVar15;
        auVar153._24_8_ = 0;
        auVar102 = vunpcklpd_avx(auVar171,auVar67);
        auVar28._8_8_ = __real_3ff0000000000000;
        auVar28._0_8_ = __real_3ff0000000000000;
        auVar28._16_8_ = __real_3ff0000000000000;
        auVar28._24_8_ = __real_3ff0000000000000;
        auVar35 = vsubpd_avx(auVar28,auVar125);
        auVar118._0_8_ = auVar35._0_8_ * auVar15._0_8_;
        auVar118._8_8_ = auVar35._8_8_ * auVar15._8_8_;
        auVar126._16_8_ = auVar35._16_8_ * dVar209;
        auVar126._0_16_ = auVar118;
        auVar126._24_8_ = auVar35._24_8_ * 0.0;
        auVar172._0_8_ = (auVar169._0_8_ + auVar152._0_8_) * auVar15._0_8_;
        auVar172._8_8_ = (auVar169._8_8_ + auVar152._8_8_) * auVar15._8_8_;
        auVar175._16_8_ = (auVar169._16_8_ + auVar152._16_8_) * dVar209;
        auVar175._0_16_ = auVar172;
        auVar175._24_8_ = (auVar169._24_8_ + auVar152._24_8_) * 0.0;
        local_260 = vunpcklpd_avx(auVar118,auVar172);
        auVar68._0_8_ = auVar143._0_8_ * auVar102._0_8_;
        auVar68._8_8_ = auVar143._8_8_ * auVar102._8_8_;
        auVar73._16_8_ = auVar143._16_8_ * dVar196;
        auVar73._0_16_ = auVar68;
        auVar73._24_8_ = auVar143._24_8_ * 0.0;
        local_250[0] = (double)vmovlpd_avx(auVar73._16_16_);
        local_250[1] = 0.0;
        local_240 = vblendpd_avx(auVar118,auVar68,1);
        local_230 = vmovhpd_avx(auVar172);
        local_220 = vblendpd_avx(auVar68,auVar175._16_16_,1);
        local_228 = 0;
        local_210 = vmovlpd_avx(auVar126._16_16_);
        local_208 = 0;
        auVar41._8_8_ = auVar192._16_8_;
        auVar41._0_8_ = auVar192._16_8_;
        auVar48._16_8_ = auVar192._16_8_;
        auVar48._0_16_ = auVar41;
        auVar48._24_8_ = auVar192._16_8_;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_2d0;
        auVar15 = vunpcklpd_avx(auVar41,auVar8);
        auVar88._8_8_ = local_2c0;
        auVar88._0_8_ = local_2c0;
        auVar88._16_8_ = local_2c0;
        auVar88._24_8_ = local_2c0;
        auVar143 = vblendpd_avx(ZEXT1632(auVar15),auVar88,4);
        auVar108._8_8_ = dVar80;
        auVar108._0_8_ = dVar80;
        auVar108._16_8_ = dVar80;
        auVar108._24_8_ = dVar80;
        auVar35 = vblendpd_avx(auVar143,auVar108,8);
        auVar127._0_8_ = auVar35._0_8_ + auVar35._0_8_;
        auVar127._8_8_ = auVar35._8_8_ + auVar35._8_8_;
        auVar127._16_8_ = auVar35._16_8_ + auVar35._16_8_;
        auVar127._24_8_ = auVar35._24_8_ + auVar35._24_8_;
        auVar89._0_8_ = auVar143._0_8_ * auVar127._0_8_;
        auVar89._8_8_ = auVar143._8_8_ * auVar127._8_8_;
        auVar89._16_8_ = auVar143._16_8_ * auVar127._16_8_;
        auVar89._24_8_ = auVar143._24_8_ * auVar127._24_8_;
        auVar143 = vpermpd_avx2(auVar89,0xc1);
        auVar35 = vpermpd_avx2(auVar89,0xda);
        auVar90._0_8_ = auVar143._0_8_ + auVar35._0_8_;
        auVar90._8_8_ = auVar143._8_8_ + auVar35._8_8_;
        auVar90._16_8_ = auVar143._16_8_ + auVar35._16_8_;
        auVar90._24_8_ = auVar143._24_8_ + auVar35._24_8_;
        auVar35 = vsubpd_avx(auVar28,auVar90);
        auVar143 = vblendpd_avx(ZEXT1632(auVar15),auVar48,0xc);
        auVar192 = vpermpd_avx2(auVar127,0x29);
        auVar49._0_8_ = auVar143._0_8_ * auVar192._0_8_;
        auVar49._8_8_ = auVar143._8_8_ * auVar192._8_8_;
        auVar49._16_8_ = auVar143._16_8_ * auVar192._16_8_;
        auVar49._24_8_ = auVar143._24_8_ * auVar192._24_8_;
        auVar143 = vpermpd_avx2(auVar127,0x12);
        auVar74._0_8_ = dVar80 * auVar143._0_8_;
        auVar74._8_8_ = dVar80 * auVar143._8_8_;
        auVar74._16_8_ = dVar80 * auVar143._16_8_;
        auVar74._24_8_ = dVar80 * auVar143._24_8_;
        auVar143 = vsubpd_avx(auVar49,auVar74);
        auVar15 = vunpcklpd_avx(local_2e0,local_130);
        auVar75._16_8_ = dVar81;
        auVar75._0_16_ = auVar15;
        auVar75._24_8_ = 0;
        auVar102 = vunpcklpd_avx(local_130,auVar136);
        auVar100._0_8_ = auVar143._0_8_ * auVar102._0_8_;
        auVar100._8_8_ = auVar143._8_8_ * auVar102._8_8_;
        auVar109._16_8_ = auVar143._16_8_ * (double)local_2e0._0_8_;
        auVar109._0_16_ = auVar100;
        auVar109._24_8_ = auVar143._24_8_ * 0.0;
        auVar50._8_8_ = uVar66;
        auVar50._0_8_ = uVar66;
        auVar50._16_8_ = uVar66;
        auVar50._24_8_ = uVar66;
        auVar143 = vblendpd_avx(auVar153,auVar50,8);
        auVar119._0_8_ = auVar35._0_8_ * auVar15._0_8_;
        auVar119._8_8_ = auVar35._8_8_ * auVar15._8_8_;
        auVar128._16_8_ = auVar35._16_8_ * dVar81;
        auVar128._0_16_ = auVar119;
        auVar128._24_8_ = auVar35._24_8_ * 0.0;
        auVar83._0_8_ = (auVar49._0_8_ + auVar74._0_8_) * auVar15._0_8_;
        auVar83._8_8_ = (auVar49._8_8_ + auVar74._8_8_) * auVar15._8_8_;
        auVar91._16_8_ = (auVar49._16_8_ + auVar74._16_8_) * dVar81;
        auVar91._0_16_ = auVar83;
        auVar91._24_8_ = (auVar49._24_8_ + auVar74._24_8_) * 0.0;
        auVar29._8_8_ = uVar38;
        auVar29._0_8_ = uVar38;
        auVar29._16_8_ = uVar38;
        auVar29._24_8_ = uVar38;
        auVar35 = vblendpd_avx(auVar75,auVar29,8);
        auVar198._0_8_ = auVar35._0_8_ * auVar143._0_8_;
        auVar198._8_8_ = auVar35._8_8_ * auVar143._8_8_;
        auVar205._16_8_ = auVar35._16_8_ * auVar143._16_8_;
        auVar205._0_16_ = auVar198;
        auVar205._24_8_ = auVar35._24_8_ * auVar143._24_8_;
        auVar15 = CONCAT88(auVar83._0_8_,auVar83._0_8_);
        auVar143 = vblendpd_avx(ZEXT1632(auVar91._16_16_),auVar109,2);
        auVar143 = vblendpd_avx(auVar143,auVar128,4);
        auVar35 = vblendpd_avx(ZEXT1632(auVar119),ZEXT1632(auVar15),2);
        auVar35 = vblendpd_avx(auVar35,auVar109,4);
        auVar92._16_16_ = auVar83;
        auVar92._0_16_ = auVar100;
        auVar61 = vshufpd_avx(auVar92,ZEXT1632(auVar119),0xe);
        auVar102 = vunpcklpd_avx(local_370,local_380);
        auVar15 = vmovhpd_avx(local_390,__real_3ff0000000000000);
        local_1e8 = 0x3ff0000000000000;
        lVar12 = 0x18;
        do {
          auVar192._16_8_ = *(double *)(local_280 + lVar12 + 8);
          dVar80 = *(double *)(local_280 + lVar12 + 0x18);
          dVar81 = *(double *)(local_280 + lVar12 + 0x10);
          dVar196 = *(double *)(local_260 + lVar12);
          *(double *)(local_380 + lVar12 + 8) =
               auVar102._0_8_ * dVar196 +
               auVar61._0_8_ * dVar81 + auVar35._0_8_ * auVar192._16_8_ + auVar143._0_8_ * dVar80;
          *(double *)(local_370 + lVar12) =
               auVar102._8_8_ * dVar196 +
               auVar61._8_8_ * dVar81 + auVar35._8_8_ * auVar192._16_8_ + auVar143._8_8_ * dVar80;
          *(double *)(local_370 + lVar12 + 8) =
               auVar15._0_8_ * dVar196 +
               auVar61._16_8_ * dVar81 + auVar35._16_8_ * auVar192._16_8_ + auVar143._16_8_ * dVar80
          ;
          *(double *)(local_360 + lVar12) =
               auVar15._8_8_ * dVar196 +
               auVar61._24_8_ * dVar81 + auVar35._24_8_ * auVar192._16_8_ + auVar143._24_8_ * dVar80
          ;
          lVar12 = lVar12 + 0x20;
        } while (lVar12 != 0x98);
        dVar80 = adStack_358[1] * adStack_358[1] +
                 (double)local_360 * (double)local_360 + adStack_358[0] * adStack_358[0];
        auVar192._16_8_ = __real_3ff0000000000000;
        if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar80) {
          auVar192._16_8_ = __real_3ff0000000000000 / SQRT(dVar80);
        }
        dVar81 = local_330 * local_330 +
                 (double)local_340._0_8_ * (double)local_340._0_8_ +
                 (double)local_340._8_8_ * (double)local_340._8_8_;
        dVar80 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= __real_be45798ee2308c3a + dVar81) {
          dVar80 = __real_3ff0000000000000 / SQRT(dVar81);
        }
        _local_280 = auVar205;
        auVar15 = vshufpd_avx(auVar198,auVar198,1);
        local_2e0 = vshufpd_avx(auVar205._16_16_,auVar205._16_16_,1);
        dVar196 = local_310 * local_310 +
                  (double)local_320._0_8_ * (double)local_320._0_8_ +
                  (double)local_320._8_8_ * (double)local_320._8_8_;
        dVar81 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar196 + __real_be45798ee2308c3a) {
          dVar81 = __real_3ff0000000000000 / SQRT(dVar196);
        }
        auVar146._8_8_ = 0;
        auVar146._0_8_ = auVar192._16_8_ * (double)local_360;
        auVar160._8_8_ = 0;
        auVar160._0_8_ = auVar192._16_8_ * adStack_358[0];
        auVar102 = vunpcklpd_avx(auVar146,auVar160);
        auVar143 = vpcmpeqd_avx2(ZEXT832(0) << 0x40,local_1a0);
        auVar35 = vpcmpeqd_avx2(ZEXT1632(local_2e0),ZEXT1632(local_2e0));
        auVar138 = SUB3216(auVar143 ^ auVar35,0);
        auVar36 = SUB3216(auVar143 ^ auVar35,0x10);
        auVar101._8_8_ = 0;
        auVar101._0_8_ = dVar80 * (double)local_340._0_8_;
        auVar120._8_8_ = 0;
        auVar120._0_8_ = dVar80 * (double)local_340._8_8_;
        auVar84 = vunpcklpd_avx(auVar101,auVar120);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = dVar81 * (double)local_320._0_8_;
        auVar137._8_8_ = 0;
        auVar137._0_8_ = dVar81 * (double)local_320._8_8_;
        auVar103 = vunpcklpd_avx(auVar17,auVar137);
        auVar143 = vcmppd_avx(ZEXT832(0) << 0x40,auVar205,2);
        auVar61 = ZEXT832(0) << 0x40;
        auVar143 = vblendvps_avx(auVar61,auVar35,auVar143);
        auVar176._0_8_ =
             (double)CONCAT44(auVar143._4_4_ & __real_8000000000000000._4_4_ ^
                              __real_bff0000000000000._4_4_,
                              auVar143._0_4_ & (uint)__real_8000000000000000 ^
                              (uint)__real_bff0000000000000);
        auVar176._8_4_ =
             auVar143._8_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
        auVar176._12_4_ =
             auVar143._12_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
        auVar176._16_4_ =
             auVar143._16_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
        auVar176._20_4_ =
             auVar143._20_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
        auVar176._24_4_ =
             auVar143._24_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
        auVar176._28_4_ =
             auVar143._28_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
        local_360 = (undefined1  [8])(auVar102._0_8_ * auVar176._0_8_);
        adStack_358[0] = auVar102._8_8_ * auVar176._0_8_;
        auVar76._16_8_ = auVar192._16_8_ * adStack_358[1] * auVar176._0_8_;
        auVar76._0_16_ = _local_360;
        auVar76._24_8_ = auVar176._0_8_ * 0.0;
        adStack_358[1] = (double)vmovlpd_avx(auVar76._16_16_);
        auVar143 = vpermpd_avx2(auVar176,0x55);
        local_340._0_8_ = auVar143._0_8_ * auVar84._0_8_;
        local_340._8_8_ = auVar143._8_8_ * auVar84._8_8_;
        auVar51._16_8_ = auVar143._16_8_ * dVar80 * local_330;
        auVar51._0_16_ = local_340;
        auVar51._24_8_ = auVar143._24_8_ * 0.0;
        local_330 = (double)vmovlpd_avx(auVar51._16_16_);
        auVar143 = vpermpd_avx2(auVar176,0xaa);
        local_320._0_8_ = auVar143._0_8_ * auVar103._0_8_;
        local_320._8_8_ = auVar143._8_8_ * auVar103._8_8_;
        auVar141._16_8_ = auVar143._16_8_ * dVar81 * local_310;
        auVar141._0_16_ = local_320;
        auVar141._24_8_ = auVar143._24_8_ * 0.0;
        auVar177._8_8_ = __real_0010000000000000;
        auVar177._0_8_ = __real_0010000000000000;
        auVar177._16_8_ = __real_0010000000000000;
        auVar177._24_8_ = __real_0010000000000000;
        auVar143 = vblendpd_avx(auVar76,auVar177,8);
        auVar110._0_8_ = __real_7fffffffffffffff & auVar143._0_8_;
        auVar110._8_8_ = __real_7fffffffffffffff & auVar143._8_8_;
        auVar110._16_8_ = __real_7fffffffffffffff & auVar143._16_8_;
        auVar110._24_8_ = __real_7fffffffffffffff & auVar143._24_8_;
        auVar190._8_8_ = __real_3f1a36e2eb1c432d;
        auVar190._0_8_ = __real_3f1a36e2eb1c432d;
        auVar190._16_8_ = __real_3f1a36e2eb1c432d;
        auVar190._24_8_ = __real_3f1a36e2eb1c432d;
        auVar143 = vcmppd_avx(auVar110,auVar190,6);
        auVar143 = vpackssdw_avx2(auVar143,auVar61);
        auVar102 = vpackssdw_avx(auVar143._0_16_,auVar143._16_16_);
        auVar84 = vpackssdw_avx(auVar138,auVar36);
        auVar102 = vpshufd_avx(auVar102,0xd8);
        auVar102 = vpand_avx(auVar84,auVar102);
        local_310 = (double)vmovlpd_avx(auVar141._16_16_);
        auVar102 = vpsllw_avx(auVar102,0xf);
        if ((((((((SUB161(auVar102 >> 0xf,0) & 1) == 0 && (SUB161(auVar102 >> 0x1f,0) & 1) == 0) &&
                (SUB161(auVar102 >> 0x2f,0) & 1) == 0) && (SUB161(auVar102 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar102 >> 0x4f,0) & 1) == 0) && (SUB161(auVar102 >> 0x5f,0) & 1) == 0) &&
            (SUB161(auVar102 >> 0x6f,0) & 1) == 0) && -1 < auVar102[0xf]) {
LAB_140a9a0e2:
          auVar212._8_8_ = 0;
          auVar212._0_8_ = __real_3ff0000000000000;
          auVar42 = ZEXT816(0) << 0x40;
          auVar18 = ZEXT816(0) << 0x40;
          auVar69 = SUB6416(ZEXT864(0),0) << 0x40;
        }
        else {
          auVar102 = vpackssdw_avx(auVar138,auVar36);
          auVar143 = vblendpd_avx(auVar51,auVar177,8);
          auVar93._0_8_ = __real_7fffffffffffffff & auVar143._0_8_;
          auVar93._8_8_ = __real_7fffffffffffffff & auVar143._8_8_;
          auVar93._16_8_ = __real_7fffffffffffffff & auVar143._16_8_;
          auVar93._24_8_ = __real_7fffffffffffffff & auVar143._24_8_;
          auVar143 = vcmppd_avx(auVar93,auVar190,6);
          auVar143 = vpackssdw_avx2(auVar143,auVar61);
          auVar84 = vpackssdw_avx(auVar143._0_16_,auVar143._16_16_);
          auVar84 = vpshufd_avx(auVar84,0xd8);
          auVar102 = vpand_avx(auVar102,auVar84);
          auVar102 = vpsllw_avx(auVar102,0xf);
          if ((((((((SUB161(auVar102 >> 0xf,0) & 1) == 0 && (SUB161(auVar102 >> 0x1f,0) & 1) == 0)
                  && (SUB161(auVar102 >> 0x2f,0) & 1) == 0) && (SUB161(auVar102 >> 0x3f,0) & 1) == 0
                 ) && (SUB161(auVar102 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar102 >> 0x5f,0) & 1) == 0) && (SUB161(auVar102 >> 0x6f,0) & 1) == 0) &&
              -1 < auVar102[0xf]) goto LAB_140a9a0e2;
          auVar102 = vpackssdw_avx(auVar138,auVar36);
          auVar143 = vblendpd_avx(auVar141,auVar177,8);
          auVar154._0_8_ = __real_7fffffffffffffff & auVar143._0_8_;
          auVar154._8_8_ = __real_7fffffffffffffff & auVar143._8_8_;
          auVar154._16_8_ = __real_7fffffffffffffff & auVar143._16_8_;
          auVar154._24_8_ = __real_7fffffffffffffff & auVar143._24_8_;
          auVar143 = vcmppd_avx(auVar154,auVar190,6);
          auVar143 = vpackssdw_avx2(auVar143,auVar61);
          auVar84 = vpackssdw_avx(auVar143._0_16_,auVar143._16_16_);
          auVar84 = vpshufd_avx(auVar84,0xd8);
          auVar102 = vpand_avx(auVar84,auVar102);
          auVar102 = vpsllw_avx(auVar102,0xf);
          auVar212._8_8_ = 0;
          auVar212._0_8_ = __real_3ff0000000000000;
          if ((((((((SUB161(auVar102 >> 0xf,0) & 1) == 0 && (SUB161(auVar102 >> 0x1f,0) & 1) == 0)
                  && (SUB161(auVar102 >> 0x2f,0) & 1) == 0) && (SUB161(auVar102 >> 0x3f,0) & 1) == 0
                 ) && (SUB161(auVar102 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar102 >> 0x5f,0) & 1) == 0) && (SUB161(auVar102 >> 0x6f,0) & 1) == 0) &&
              -1 < auVar102[0xf]) {
            auVar69 = ZEXT816(0) << 0x40;
            auVar18 = ZEXT816(0) << 0x40;
            auVar42 = ZEXT816(0) << 0x40;
          }
          else {
            auVar102 = vshufpd_avx(local_340,local_340,1);
            auVar192._16_8_ = auVar141._16_8_ + auVar102._0_8_ + (double)local_360;
            if (auVar192._16_8_ <= __real_0000000000000000) {
              bVar5 = (double)local_360 < auVar102._0_8_;
              uVar38 = (ulonglong)bVar5;
              if (*(double *)(local_360 + ((uint)bVar5 * 0x20 + (uint)bVar5 * 8)) < auVar141._16_8_)
              {
                uVar38 = 2;
              }
              iVar2 = *(int *)(&DAT_151c6af4c + uVar38 * 4);
              lVar12 = (longlong)iVar2;
              iVar6 = (int)uVar38;
              iVar3 = *(int *)(&DAT_151c6af4c + lVar12 * 4);
              auVar192._16_8_ =
                   __real_3ff0000000000000 /
                   SQRT(__real_3ff0000000000000 +
                        ((*(double *)(local_360 + (uint)(iVar6 * 0x28)) -
                         *(double *)(local_360 + lVar12 * 0x28)) -
                        *(double *)(local_360 + (longlong)iVar3 * 0x28)));
              *(double *)((longlong)&local_2a0 + (ulonglong)(uint)(iVar6 * 8)) =
                   (__real_3ff0000000000000 / auVar192._16_8_) * __real_3fe0000000000000;
              auVar192._16_8_ = auVar192._16_8_ * __real_3fe0000000000000;
              (&local_2a0)[lVar12] =
                   (*(double *)(local_360 + (longlong)(iVar2 + iVar6 * 4) * 8) +
                   *(double *)(local_360 + (longlong)(iVar6 + iVar2 * 4) * 8)) * auVar192._16_8_;
              (&local_2a0)[iVar3] =
                   auVar192._16_8_ *
                   (*(double *)(local_360 + (longlong)(iVar3 + iVar6 * 4) * 8) +
                   *(double *)(local_360 + (longlong)(iVar6 + iVar3 * 4) * 8));
              auVar212._8_8_ = 0;
              auVar212._0_8_ =
                   auVar192._16_8_ *
                   (*(double *)(local_360 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                   *(double *)(local_360 + (longlong)(iVar2 + iVar3 * 4) * 8));
              auVar69._8_8_ = 0;
              auVar69._0_8_ = local_2a0;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = local_298;
              auVar42._8_8_ = 0;
              auVar42._0_8_ = local_290;
              param_4 = local_1a8;
            }
            else {
              auVar102 = vshufpd_avx(_local_360,_local_360,1);
              auVar84 = vshufpd_avx(local_320,local_320,1);
              dVar80 = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + auVar192._16_8_);
              auVar192._16_8_ = __real_3fe0000000000000 * dVar80;
              auVar69._8_8_ = 0;
              auVar69._0_8_ = auVar192._16_8_ * (auVar51._16_8_ - auVar84._0_8_);
              auVar18._8_8_ = 0;
              auVar18._0_8_ = auVar192._16_8_ * ((double)local_320._0_8_ - auVar76._16_8_);
              auVar42._8_8_ = 0;
              auVar42._0_8_ = auVar192._16_8_ * (auVar102._0_8_ - (double)local_340._0_8_);
              auVar212._8_8_ = 0;
              auVar212._0_8_ = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar80);
            }
          }
        }
        auVar185._8_8_ = 0;
        auVar185._0_8_ = __real_3e45798ee2308c3a;
        auVar102 = vunpcklpd_avx(auVar42,auVar212);
        auVar84 = vunpcklpd_avx(auVar69,auVar18);
        dVar80 = auVar84._0_8_;
        dVar81 = auVar84._8_8_;
        dVar196 = auVar102._0_8_;
        auVar19._0_8_ = dVar196 * dVar196 + dVar80 * dVar80;
        dVar209 = auVar102._8_8_;
        auVar19._8_8_ = dVar209 * dVar209 + dVar81 * dVar81;
        auVar102 = vshufpd_avx(auVar19,auVar19,1);
        auVar192._16_8_ = auVar19._0_8_ + auVar102._0_8_;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = auVar192._16_8_;
        auVar102 = vcmpsd_avx(auVar185,auVar20,6);
        uVar38 = ~auVar102._0_8_ & __real_ffffffffffffffff;
        auVar192._16_8_ = __real_3ff0000000000000 / SQRT(auVar192._16_8_);
        auVar39._0_8_ = (double)((ulonglong)(dVar80 * auVar192._16_8_) & uVar38);
        auVar39._8_8_ = (double)((ulonglong)(dVar81 * auVar192._16_8_) & uVar38);
        auVar52._16_8_ = (ulonglong)(dVar196 * auVar192._16_8_) & uVar38;
        auVar52._0_16_ = auVar39;
        auVar52._24_8_ = (ulonglong)(dVar209 * auVar192._16_8_) & uVar38;
        auVar30._0_8_ =
             ~uVar38 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar30._8_8_ = ~uVar38 & _UNK_150b54548;
        auVar30._16_8_ = ~uVar38 & _UNK_150b54550;
        auVar30._24_8_ = ~uVar38 & _UNK_150b54558;
        auVar36 = auVar52._16_16_ | auVar30._16_16_;
        auVar102 = vshufps_avx(auVar39,auVar39,0x4e);
        auVar84 = vshufps_avx(auVar36,auVar36,0x4e);
        local_390._0_8_ = uStack_2f8;
        local_380._0_8_ = auVar15._0_8_;
        uVar135 = 0;
        auVar192._16_8_ = dStack_2f0;
        dVar80 = dStack_300;
        dVar81 = (double)local_280._0_8_;
      }
      auVar184._8_8_ = 0;
      auVar184._0_8_ = __real_3e45798ee2308c3a;
      auVar15 = vunpcklpd_avx(auVar39,auVar102);
      auVar102 = vunpcklpd_avx(auVar36,auVar84);
      puVar11 = (ulonglong *)(lVar7 + param_1);
      dVar209 = auVar15._0_8_;
      dVar4 = auVar15._8_8_;
      dVar37 = auVar102._0_8_;
      auVar13._0_8_ = dVar37 * dVar37 + dVar209 * dVar209;
      dVar62 = auVar102._8_8_;
      auVar13._8_8_ = dVar62 * dVar62 + dVar4 * dVar4;
      auVar15 = vshufpd_avx(auVar13,auVar13,1);
      dVar196 = auVar13._0_8_ + auVar15._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar196;
      auVar15 = vcmpsd_avx(auVar184,auVar14,6);
      uVar38 = ~auVar15._0_8_ & __real_ffffffffffffffff;
      dVar196 = __real_3ff0000000000000 / SQRT(dVar196);
      uVar63 = ~uVar38 & _UNK_150b54548;
      uVar64 = ~uVar38 & _UNK_150b54550;
      uVar66 = ~uVar38 & _UNK_150b54558;
      *puVar11 = (ulonglong)(dVar209 * dVar196) & uVar38 |
                 ~uVar38 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      puVar11[1] = (ulonglong)(dVar4 * dVar196) & uVar38 | uVar63;
      puVar11[2] = (ulonglong)(dVar37 * dVar196) & uVar38 | uVar64;
      puVar11[3] = (ulonglong)(dVar62 * dVar196) & uVar38 | uVar66;
      uVar38 = (ulonglong)((uint)uVar1 * 0x60);
      *(double *)(param_1 + 0x20 + uVar38) = dVar80;
      *(undefined8 *)(param_1 + 0x28 + uVar38) = local_390._0_8_;
      *(double *)(param_1 + 0x30 + uVar38) = auVar192._16_8_;
      *(undefined8 *)(param_1 + 0x38 + uVar38) = uVar135;
      *(double *)(param_1 + 0x40 + uVar38) = dVar81;
      *(undefined8 *)(param_1 + 0x48 + uVar38) = local_380._0_8_;
      *(double *)(param_1 + 0x50 + uVar38) = auVar205._16_8_;
      *(undefined8 *)(param_1 + 0x58 + uVar38) = local_2e0._0_8_;
      uVar10 = uVar10 + 1;
      auVar95 = ZEXT864(0) << 0x40;
    } while (uVar10 != param_7);
  }
  return;
}

// FillComponentSpaceTransforms_avx2 @ 140a9aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FillComponentSpaceTransforms_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               int param_6,uint param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  ulonglong uVar27;
  undefined1 auVar30 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar41 [16];
  undefined1 auVar33 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  double dVar48;
  double dVar54;
  ulonglong uVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  ulonglong uVar56;
  ulonglong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [16];
  double dVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [32];
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  double dVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [32];
  double dVar117;
  undefined8 uVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [32];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [8];
  double adStack_2d8 [3];
  undefined1 local_2c0 [16];
  double local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [16];
  double local_290;
  undefined8 local_288;
  double dStack_280;
  undefined8 uStack_278;
  double dStack_270;
  undefined8 local_268;
  longlong local_258;
  double local_250;
  undefined8 uStack_248;
  double local_240;
  undefined8 uStack_238;
  double local_230;
  undefined8 uStack_228;
  double local_220;
  ulonglong local_218;
  ulonglong local_210;
  undefined1 local_200 [16];
  double adStack_1f0 [2];
  undefined1 local_1e0 [16];
  double local_1d0 [2];
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  undefined8 local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined1 local_160 [32];
  undefined1 local_130 [16];
  undefined1 local_120 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar34 [32];
  undefined1 auVar40 [32];
  undefined1 auVar45 [32];
  undefined1 auVar53 [32];
  undefined1 auVar65 [32];
  undefined1 auVar71 [32];
  undefined1 auVar85 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  
  if (1 < (int)param_7) {
    uVar12 = 1;
    local_258 = param_3;
    do {
      auVar28 = ZEXT816(0);
      uVar1 = *(ushort *)(param_3 + uVar12 * 2);
      lVar8 = (ulonglong)uVar1 * 0x60;
      lVar14 = (longlong)*(int *)(param_4 + (int)((uint)uVar1 * param_5 + param_6)) * 0x60;
      auVar108._16_8_ = *(double *)(param_1 + lVar14);
      local_250 = *(double *)(param_1 + 8 + lVar14);
      uStack_248 = 0;
      local_240 = *(double *)(param_1 + 0x10 + lVar14);
      uStack_238 = 0;
      dVar91 = *(double *)(param_1 + 0x18 + lVar14);
      local_300._8_8_ = 0;
      local_300._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar14);
      local_310._8_8_ = 0;
      local_310._0_8_ = *(ulonglong *)(param_1 + 0x28 + lVar14);
      local_2f0._8_8_ = 0;
      local_2f0._0_8_ = *(ulonglong *)(param_1 + 0x30 + lVar14);
      local_230 = *(double *)(param_1 + 0x40 + lVar14);
      uStack_228 = 0;
      local_130._8_8_ = 0;
      local_130._0_8_ = *(ulonglong *)(param_1 + 0x48 + lVar14);
      dVar94 = *(double *)(param_1 + 0x50 + lVar14);
      auVar49._8_8_ = 0;
      auVar49._0_8_ = dVar94;
      uVar27 = *(ulonglong *)(param_1 + 0x58 + lVar14);
      auVar104._8_8_ = 0;
      auVar104._0_8_ = uVar27;
      uVar55 = *(ulonglong *)(param_2 + lVar8);
      auVar119._8_8_ = 0;
      auVar119._0_8_ = uVar55;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = *(ulonglong *)(param_2 + 8 + lVar8);
      uVar56 = *(ulonglong *)(param_2 + 0x10 + lVar8);
      auVar95._8_8_ = 0;
      auVar95._0_8_ = uVar56;
      auVar80 = vcmppd_avx(*(undefined1 (*) [32])(param_2 + 0x40 + lVar8),ZEXT1632(auVar28),1);
      auVar26 = vcmppd_avx(*(undefined1 (*) [32])(param_1 + 0x40 + lVar14),ZEXT1632(auVar28),1);
      dVar102 = *(double *)(param_2 + 0x18 + lVar8);
      auVar115._8_8_ = 0;
      auVar115._0_8_ = dVar102;
      auVar80 = vpackssdw_avx2(auVar80 | auVar26,ZEXT1632(auVar28));
      local_180 = *(ulonglong *)(param_2 + 0x20 + lVar8);
      auVar41._8_8_ = 0;
      auVar41._0_8_ = local_180;
      local_178 = *(ulonglong *)(param_2 + 0x28 + lVar8);
      auVar112._8_8_ = 0;
      auVar112._0_8_ = local_178;
      local_170 = *(ulonglong *)(param_2 + 0x30 + lVar8);
      auVar77._8_8_ = 0;
      auVar77._0_8_ = local_170;
      dVar114 = *(double *)(param_2 + 0x40 + lVar8);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar114;
      auVar83._8_8_ = 0;
      auVar83._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar8);
      dVar117 = *(double *)(param_2 + 0x50 + lVar8);
      auVar90._8_8_ = 0;
      auVar90._0_8_ = dVar117;
      uVar57 = *(ulonglong *)(param_2 + 0x58 + lVar8);
      local_200._8_8_ = 0;
      local_200._0_8_ = uVar57;
      if ((((((((SUB321(auVar80 >> 0x1f,0) & 1) == 0 && (SUB321(auVar80 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar80 >> 0x5f,0) & 1) == 0) && SUB321(auVar80 >> 0x7f,0) == '\0') &&
            (SUB321(auVar80 >> 0x9f,0) & 1) == 0) && SUB321(auVar80 >> 0xbf,0) == '\0') &&
          (SUB321(auVar80 >> 0xdf,0) & 1) == 0) && -1 < auVar80[0x1f]) {
        auVar31 = vunpcklpd_avx(auVar95,auVar115);
        local_120 = ZEXT1632(auVar31);
        auVar95 = vunpcklpd_avx(auVar115,auVar95);
        local_160 = ZEXT1632(auVar95);
        auVar115 = vunpcklpd_avx(auVar119,auVar58);
        auVar119 = vunpcklpd_avx(auVar58,auVar119);
        auVar92._8_8_ = dVar91;
        auVar92._0_8_ = dVar91;
        auVar62._8_8_ = auVar108._16_8_;
        auVar62._0_8_ = auVar108._16_8_;
        auVar41 = vunpcklpd_avx(auVar41,auVar112);
        auVar58 = vmovhpd_avx(auVar77,*(undefined8 *)(param_2 + lVar8 + 0x38));
        auVar104 = vunpcklpd_avx(auVar49,auVar104);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_230;
        auVar112 = vunpcklpd_avx(auVar11,local_130);
        auVar38._0_8_ = auVar112._0_8_ * auVar41._0_8_;
        auVar38._8_8_ = auVar112._8_8_ * auVar41._8_8_;
        auVar38._16_8_ = auVar104._0_8_ * auVar58._0_8_;
        auVar38._24_8_ = auVar104._8_8_ * auVar58._8_8_;
        auVar44._8_8_ = local_250;
        auVar44._0_8_ = local_250;
        auVar52._8_8_ = local_240;
        auVar52._0_8_ = local_240;
        auVar80._16_16_ = auVar92;
        auVar80._0_16_ = auVar44;
        auVar109._16_16_ = auVar52;
        auVar109._0_16_ = auVar62;
        auVar80 = vunpcklpd_avx(auVar109,auVar80);
        auVar67._16_16_ = auVar62;
        auVar67._0_16_ = auVar44;
        auVar110._16_16_ = auVar92;
        auVar110._0_16_ = auVar52;
        auVar26 = vunpcklpd_avx(auVar67,auVar110);
        auVar67 = vpermpd_avx2(auVar38,0xc9);
        dVar94 = auVar80._0_8_ * auVar67._0_8_ - auVar26._0_8_ * auVar38._0_8_;
        dVar102 = auVar80._8_8_ * auVar67._8_8_ - auVar26._8_8_ * auVar38._8_8_;
        dVar114 = auVar80._16_8_ * auVar67._16_8_ - auVar26._16_8_ * auVar38._16_8_;
        dVar117 = auVar80._24_8_ * auVar67._24_8_ - auVar26._24_8_ * auVar38._24_8_;
        auVar111._0_8_ = dVar94 + dVar94;
        auVar111._8_8_ = dVar102 + dVar102;
        auVar111._16_8_ = dVar114 + dVar114;
        auVar111._24_8_ = dVar117 + dVar117;
        auVar67 = vpermpd_avx2(auVar111,0xc9);
        auVar40 = vpermpd_avx2(auVar111,0xd2);
        auVar39._0_8_ = auVar80._0_8_ * auVar40._0_8_ - auVar67._0_8_ * auVar26._0_8_;
        auVar39._8_8_ = auVar80._8_8_ * auVar40._8_8_ - auVar67._8_8_ * auVar26._8_8_;
        auVar39._16_8_ = auVar80._16_8_ * auVar40._16_8_ - auVar67._16_8_ * auVar26._16_8_;
        auVar39._24_8_ = auVar80._24_8_ * auVar40._24_8_ - auVar67._24_8_ * auVar26._24_8_;
        auVar18._0_8_ =
             local_240 * auVar119._0_8_ *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
             local_250 * auVar31._0_8_ *
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
             dVar91 * auVar115._0_8_ +
             auVar108._16_8_ * auVar95._0_8_ *
             ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        auVar18._8_8_ =
             local_240 * auVar119._8_8_ * _UNK_150b54428 +
             local_250 * auVar31._8_8_ * _UNK_150b54408 +
             dVar91 * auVar115._8_8_ + auVar108._16_8_ * auVar95._8_8_ * _UNK_150b543e8;
        auVar26._16_8_ =
             local_240 * auVar95._0_8_ * _UNK_150b54430 +
             local_250 * auVar115._0_8_ * _UNK_150b54410 +
             dVar91 * auVar31._0_8_ + auVar108._16_8_ * auVar119._0_8_ * _UNK_150b543f0;
        auVar26._0_16_ = auVar18;
        auVar26._24_8_ =
             local_240 * auVar95._8_8_ * _UNK_150b54438 +
             local_250 * auVar115._8_8_ * _UNK_150b54418 +
             dVar91 * auVar31._8_8_ + auVar108._16_8_ * auVar119._8_8_ * _UNK_150b543f8;
        auVar80 = vpermpd_avx2(auVar39,0xc9);
        auVar58 = vshufpd_avx(auVar18,auVar18,1);
        auVar95 = vunpcklpd_avx(local_300,local_310);
        auVar41 = auVar26._16_16_;
        auVar49 = vmovhpd_avx(local_2f0,*(undefined8 *)(param_1 + lVar14 + 0x38));
        auVar77 = vshufpd_avx(auVar41,auVar41,1);
        auVar31._0_8_ = auVar95._0_8_ + auVar67._0_8_ * dVar91 + auVar38._0_8_ + auVar80._0_8_;
        auVar31._8_8_ = auVar95._8_8_ + auVar67._8_8_ * dVar91 + auVar38._8_8_ + auVar80._8_8_;
        auVar40._16_8_ = auVar49._0_8_ + auVar67._16_8_ * dVar91 + auVar38._16_8_ + auVar80._16_8_;
        auVar40._0_16_ = auVar31;
        auVar40._24_8_ = auVar49._8_8_ + auVar67._24_8_ * dVar91 + auVar38._24_8_ + auVar80._24_8_;
        auVar49 = vshufpd_avx(auVar31,auVar31,1);
        uVar4 = auVar49._0_8_;
        auVar49 = vunpcklpd_avx(auVar90,local_200);
        auVar83 = vunpcklpd_avx(auVar28,auVar83);
        auVar28 = vshufpd_avx(auVar40._16_16_,auVar40._16_16_,1);
        uVar118 = auVar28._0_8_;
        auVar103._0_8_ = auVar112._0_8_ * auVar83._0_8_;
        auVar103._8_8_ = auVar112._8_8_ * auVar83._8_8_;
        auVar28 = vshufpd_avx(auVar103,auVar103,1);
        local_310._0_8_ = auVar28._0_8_;
        auVar113._0_8_ = auVar104._0_8_ * auVar49._0_8_;
        auVar113._8_8_ = auVar104._8_8_ * auVar49._8_8_;
        auVar28 = vshufpd_avx(auVar113,auVar113,1);
        local_300._0_8_ = auVar28._0_8_;
        dVar91 = auVar31._0_8_;
        dVar94 = auVar40._16_8_;
        dVar102 = auVar103._0_8_;
        auVar108._16_8_ = auVar113._0_8_;
      }
      else {
        local_160._0_16_ = auVar104;
        auVar105._8_8_ = uVar55;
        auVar105._0_8_ = uVar55;
        auVar107._16_8_ = uVar55;
        auVar107._0_16_ = auVar105;
        auVar107._24_8_ = uVar55;
        auVar58 = vunpcklpd_avx(auVar105,auVar58);
        auVar97._8_8_ = uVar56;
        auVar97._0_8_ = uVar56;
        auVar97._16_8_ = uVar56;
        auVar97._24_8_ = uVar56;
        auVar80 = vblendpd_avx(ZEXT1632(auVar58),auVar97,4);
        auVar116._8_8_ = dVar102;
        auVar116._0_8_ = dVar102;
        auVar116._16_8_ = dVar102;
        auVar116._24_8_ = dVar102;
        auVar26 = vblendpd_avx(auVar80,auVar116,8);
        auVar120._0_8_ = auVar26._0_8_ + auVar26._0_8_;
        auVar120._8_8_ = auVar26._8_8_ + auVar26._8_8_;
        auVar120._16_8_ = auVar26._16_8_ + auVar26._16_8_;
        auVar120._24_8_ = auVar26._24_8_ + auVar26._24_8_;
        auVar98._0_8_ = auVar80._0_8_ * auVar120._0_8_;
        auVar98._8_8_ = auVar80._8_8_ * auVar120._8_8_;
        auVar98._16_8_ = auVar80._16_8_ * auVar120._16_8_;
        auVar98._24_8_ = auVar80._24_8_ * auVar120._24_8_;
        auVar80 = vpermpd_avx2(auVar98,0xc1);
        auVar26 = vpermpd_avx2(auVar98,0xda);
        auVar33._0_8_ = auVar26._0_8_ + auVar80._0_8_;
        auVar33._8_8_ = auVar26._8_8_ + auVar80._8_8_;
        auVar33._16_8_ = auVar26._16_8_ + auVar80._16_8_;
        auVar33._24_8_ = auVar26._24_8_ + auVar80._24_8_;
        auVar80 = vblendpd_avx(ZEXT1632(auVar58),auVar107,0xc);
        auVar26 = vpermpd_avx2(auVar120,0x29);
        auVar63._0_8_ = auVar26._0_8_ * auVar80._0_8_;
        auVar63._8_8_ = auVar26._8_8_ * auVar80._8_8_;
        auVar63._16_8_ = auVar26._16_8_ * auVar80._16_8_;
        auVar63._24_8_ = auVar26._24_8_ * auVar80._24_8_;
        auVar80 = vpermpd_avx2(auVar120,0x12);
        auVar99._0_8_ = dVar102 * auVar80._0_8_;
        auVar99._8_8_ = dVar102 * auVar80._8_8_;
        auVar99._16_8_ = dVar102 * auVar80._16_8_;
        auVar99._24_8_ = dVar102 * auVar80._24_8_;
        auVar80 = vsubpd_avx(auVar63,auVar99);
        auVar28 = vunpcklpd_avx(auVar28,auVar83);
        auVar100._16_8_ = dVar117;
        auVar100._0_16_ = auVar28;
        auVar100._24_8_ = 0;
        auVar58 = vunpcklpd_avx(auVar83,auVar90);
        auVar64._8_8_ = __real_3ff0000000000000;
        auVar64._0_8_ = __real_3ff0000000000000;
        auVar64._16_8_ = __real_3ff0000000000000;
        auVar64._24_8_ = __real_3ff0000000000000;
        auVar26 = vsubpd_avx(auVar64,auVar33);
        auVar30._0_8_ = auVar28._0_8_ * auVar26._0_8_;
        auVar30._8_8_ = auVar28._8_8_ * auVar26._8_8_;
        auVar34._16_8_ = dVar117 * auVar26._16_8_;
        auVar34._0_16_ = auVar30;
        auVar34._24_8_ = auVar26._24_8_ * 0.0;
        auVar84._0_8_ = (auVar99._0_8_ + auVar63._0_8_) * auVar28._0_8_;
        auVar84._8_8_ = (auVar99._8_8_ + auVar63._8_8_) * auVar28._8_8_;
        auVar85._16_8_ = (auVar99._16_8_ + auVar63._16_8_) * dVar117;
        auVar85._0_16_ = auVar84;
        auVar85._24_8_ = (auVar99._24_8_ + auVar63._24_8_) * 0.0;
        local_1e0 = vunpcklpd_avx(auVar30,auVar84);
        auVar68._0_8_ = auVar80._0_8_ * auVar58._0_8_;
        auVar68._8_8_ = auVar80._8_8_ * auVar58._8_8_;
        auVar71._16_8_ = auVar80._16_8_ * dVar114;
        auVar71._0_16_ = auVar68;
        auVar71._24_8_ = auVar80._24_8_ * 0.0;
        local_1d0[0] = (double)vmovlpd_avx(auVar71._16_16_);
        local_1d0[1] = 0.0;
        local_1c0 = vblendpd_avx(auVar30,auVar68,1);
        local_1b0 = vmovhpd_avx(auVar84);
        local_1a0 = vblendpd_avx(auVar68,auVar85._16_16_,1);
        local_1a8 = 0;
        local_190 = vmovlpd_avx(auVar34._16_16_);
        local_188 = 0;
        auVar21._8_8_ = auVar108._16_8_;
        auVar21._0_8_ = auVar108._16_8_;
        auVar23._16_8_ = auVar108._16_8_;
        auVar23._0_16_ = auVar21;
        auVar23._24_8_ = auVar108._16_8_;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = local_250;
        auVar28 = vunpcklpd_avx(auVar21,auVar9);
        auVar72._8_8_ = local_240;
        auVar72._0_8_ = local_240;
        auVar72._16_8_ = local_240;
        auVar72._24_8_ = local_240;
        auVar80 = vblendpd_avx(ZEXT1632(auVar28),auVar72,4);
        auVar79._8_8_ = dVar91;
        auVar79._0_8_ = dVar91;
        auVar79._16_8_ = dVar91;
        auVar79._24_8_ = dVar91;
        auVar26 = vblendpd_avx(auVar80,auVar79,8);
        auVar86._0_8_ = auVar26._0_8_ + auVar26._0_8_;
        auVar86._8_8_ = auVar26._8_8_ + auVar26._8_8_;
        auVar86._16_8_ = auVar26._16_8_ + auVar26._16_8_;
        auVar86._24_8_ = auVar26._24_8_ + auVar26._24_8_;
        auVar73._0_8_ = auVar80._0_8_ * auVar86._0_8_;
        auVar73._8_8_ = auVar80._8_8_ * auVar86._8_8_;
        auVar73._16_8_ = auVar80._16_8_ * auVar86._16_8_;
        auVar73._24_8_ = auVar80._24_8_ * auVar86._24_8_;
        auVar80 = vpermpd_avx2(auVar73,0xc1);
        auVar26 = vpermpd_avx2(auVar73,0xda);
        auVar74._0_8_ = auVar80._0_8_ + auVar26._0_8_;
        auVar74._8_8_ = auVar80._8_8_ + auVar26._8_8_;
        auVar74._16_8_ = auVar80._16_8_ + auVar26._16_8_;
        auVar74._24_8_ = auVar80._24_8_ + auVar26._24_8_;
        auVar26 = vsubpd_avx(auVar64,auVar74);
        auVar80 = vblendpd_avx(ZEXT1632(auVar28),auVar23,0xc);
        auVar108 = vpermpd_avx2(auVar86,0x29);
        auVar24._0_8_ = auVar80._0_8_ * auVar108._0_8_;
        auVar24._8_8_ = auVar80._8_8_ * auVar108._8_8_;
        auVar24._16_8_ = auVar80._16_8_ * auVar108._16_8_;
        auVar24._24_8_ = auVar80._24_8_ * auVar108._24_8_;
        auVar80 = vpermpd_avx2(auVar86,0x12);
        auVar35._0_8_ = dVar91 * auVar80._0_8_;
        auVar35._8_8_ = dVar91 * auVar80._8_8_;
        auVar35._16_8_ = dVar91 * auVar80._16_8_;
        auVar35._24_8_ = dVar91 * auVar80._24_8_;
        auVar80 = vsubpd_avx(auVar24,auVar35);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_230;
        auVar28 = vunpcklpd_avx(auVar10,local_130);
        auVar36._16_8_ = dVar94;
        auVar36._0_16_ = auVar28;
        auVar36._24_8_ = 0;
        auVar49 = vunpcklpd_avx(local_130,auVar49);
        auVar43._0_8_ = auVar80._0_8_ * auVar49._0_8_;
        auVar43._8_8_ = auVar80._8_8_ * auVar49._8_8_;
        auVar45._16_8_ = auVar80._16_8_ * local_230;
        auVar45._0_16_ = auVar43;
        auVar45._24_8_ = auVar80._24_8_ * 0.0;
        auVar25._8_8_ = uVar57;
        auVar25._0_8_ = uVar57;
        auVar25._16_8_ = uVar57;
        auVar25._24_8_ = uVar57;
        auVar80 = vblendpd_avx(auVar100,auVar25,8);
        auVar50._0_8_ = auVar26._0_8_ * auVar28._0_8_;
        auVar50._8_8_ = auVar26._8_8_ * auVar28._8_8_;
        auVar53._16_8_ = auVar26._16_8_ * dVar94;
        auVar53._0_16_ = auVar50;
        auVar53._24_8_ = auVar26._24_8_ * 0.0;
        auVar59._0_8_ = (auVar24._0_8_ + auVar35._0_8_) * auVar28._0_8_;
        auVar59._8_8_ = (auVar24._8_8_ + auVar35._8_8_) * auVar28._8_8_;
        auVar65._16_8_ = (auVar24._16_8_ + auVar35._16_8_) * dVar94;
        auVar65._0_16_ = auVar59;
        auVar65._24_8_ = (auVar24._24_8_ + auVar35._24_8_) * 0.0;
        auVar75._8_8_ = uVar27;
        auVar75._0_8_ = uVar27;
        auVar75._16_8_ = uVar27;
        auVar75._24_8_ = uVar27;
        auVar26 = vblendpd_avx(auVar36,auVar75,8);
        auVar106._0_8_ = auVar26._0_8_ * auVar80._0_8_;
        auVar106._8_8_ = auVar26._8_8_ * auVar80._8_8_;
        auVar108._16_8_ = auVar26._16_8_ * auVar80._16_8_;
        auVar108._0_16_ = auVar106;
        auVar108._24_8_ = auVar26._24_8_ * auVar80._24_8_;
        auVar28 = CONCAT88(auVar59._0_8_,auVar59._0_8_);
        auVar80 = vblendpd_avx(ZEXT1632(auVar65._16_16_),auVar45,2);
        auVar80 = vblendpd_avx(auVar80,auVar53,4);
        auVar26 = vblendpd_avx(ZEXT1632(auVar50),ZEXT1632(auVar28),2);
        auVar26 = vblendpd_avx(auVar26,auVar45,4);
        auVar46._16_16_ = auVar59;
        auVar46._0_16_ = auVar43;
        auVar67 = vshufpd_avx(auVar46,ZEXT1632(auVar50),0xe);
        auVar49 = vunpcklpd_avx(local_300,local_310);
        auVar28 = vmovhpd_avx(local_2f0,__real_3ff0000000000000);
        local_168 = 0x3ff0000000000000;
        lVar14 = 0x18;
        do {
          dVar91 = *(double *)(local_200 + lVar14 + 8);
          dVar94 = *(double *)(local_200 + lVar14 + 0x18);
          dVar102 = *(double *)(local_200 + lVar14 + 0x10);
          dVar114 = *(double *)(local_1e0 + lVar14);
          *(double *)(local_300 + lVar14 + 8) =
               auVar49._0_8_ * dVar114 +
               auVar67._0_8_ * dVar102 + auVar26._0_8_ * dVar91 + auVar80._0_8_ * dVar94;
          *(double *)(local_2f0 + lVar14) =
               auVar49._8_8_ * dVar114 +
               auVar67._8_8_ * dVar102 + auVar26._8_8_ * dVar91 + auVar80._8_8_ * dVar94;
          *(double *)(local_2f0 + lVar14 + 8) =
               auVar28._0_8_ * dVar114 +
               auVar67._16_8_ * dVar102 + auVar26._16_8_ * dVar91 + auVar80._16_8_ * dVar94;
          *(double *)(local_2e0 + lVar14) =
               auVar28._8_8_ * dVar114 +
               auVar67._24_8_ * dVar102 + auVar26._24_8_ * dVar91 + auVar80._24_8_ * dVar94;
          lVar14 = lVar14 + 0x20;
        } while (lVar14 != 0x98);
        dVar94 = adStack_2d8[1] * adStack_2d8[1] +
                 (double)local_2e0 * (double)local_2e0 + adStack_2d8[0] * adStack_2d8[0];
        dVar91 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar94 + __real_be45798ee2308c3a) {
          dVar91 = __real_3ff0000000000000 / SQRT(dVar94);
        }
        dVar102 = local_2b0 * local_2b0 +
                  (double)local_2c0._0_8_ * (double)local_2c0._0_8_ +
                  (double)local_2c0._8_8_ * (double)local_2c0._8_8_;
        dVar94 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar102 + __real_be45798ee2308c3a) {
          dVar94 = __real_3ff0000000000000 / SQRT(dVar102);
        }
        auVar28 = vshufpd_avx(auVar106,auVar106,1);
        auVar49 = vshufpd_avx(auVar108._16_16_,auVar108._16_16_,1);
        dVar114 = local_290 * local_290 +
                  (double)local_2a0._0_8_ * (double)local_2a0._0_8_ +
                  (double)local_2a0._8_8_ * (double)local_2a0._8_8_;
        dVar102 = __real_3ff0000000000000;
        if (__real_0000000000000000 <= dVar114 + __real_be45798ee2308c3a) {
          dVar102 = __real_3ff0000000000000 / SQRT(dVar114);
        }
        auVar51._8_8_ = 0;
        auVar51._0_8_ = dVar91 * (double)local_2e0;
        auVar60._8_8_ = 0;
        auVar60._0_8_ = dVar91 * adStack_2d8[0];
        auVar58 = vunpcklpd_avx(auVar51,auVar60);
        auVar61._8_8_ = 0;
        auVar61._0_8_ = dVar94 * (double)local_2c0._0_8_;
        auVar69._8_8_ = 0;
        auVar69._0_8_ = dVar94 * (double)local_2c0._8_8_;
        auVar77 = vunpcklpd_avx(auVar61,auVar69);
        auVar70._8_8_ = 0;
        auVar70._0_8_ = dVar102 * (double)local_2a0._0_8_;
        auVar78._8_8_ = 0;
        auVar78._0_8_ = dVar102 * (double)local_2a0._8_8_;
        auVar83 = vunpcklpd_avx(auVar70,auVar78);
        auVar26 = ZEXT1632(ZEXT816(0));
        auVar80 = vcmppd_avx(auVar26,auVar108,2);
        auVar80 = vblendvps_avx(auVar26,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar80);
        auVar87._0_8_ =
             (double)CONCAT44(auVar80._4_4_ & __real_8000000000000000._4_4_ ^
                              __real_bff0000000000000._4_4_,
                              auVar80._0_4_ & (uint)__real_8000000000000000 ^
                              (uint)__real_bff0000000000000);
        auVar87._8_4_ =
             auVar80._8_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
        auVar87._12_4_ =
             auVar80._12_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
        auVar87._16_4_ =
             auVar80._16_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
        auVar87._20_4_ =
             auVar80._20_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
        auVar87._24_4_ =
             auVar80._24_4_ & (uint)__real_8000000000000000 ^ (uint)__real_bff0000000000000;
        auVar87._28_4_ =
             auVar80._28_4_ & __real_8000000000000000._4_4_ ^ __real_bff0000000000000._4_4_;
        local_2e0 = (undefined1  [8])(auVar58._0_8_ * auVar87._0_8_);
        adStack_2d8[0] = auVar58._8_8_ * auVar87._0_8_;
        auVar47._16_8_ = dVar91 * adStack_2d8[1] * auVar87._0_8_;
        auVar47._0_16_ = _local_2e0;
        auVar47._24_8_ = auVar87._0_8_ * 0.0;
        adStack_2d8[1] = (double)vmovlpd_avx(auVar47._16_16_);
        auVar80 = vpermpd_avx2(auVar87,0x55);
        local_2c0._0_8_ = auVar80._0_8_ * auVar77._0_8_;
        local_2c0._8_8_ = auVar80._8_8_ * auVar77._8_8_;
        auVar37._16_8_ = auVar80._16_8_ * dVar94 * local_2b0;
        auVar37._0_16_ = local_2c0;
        auVar37._24_8_ = auVar80._24_8_ * 0.0;
        local_2b0 = (double)vmovlpd_avx(auVar37._16_16_);
        auVar80 = vpermpd_avx2(auVar87,0xaa);
        local_2a0._0_8_ = auVar80._0_8_ * auVar83._0_8_;
        local_2a0._8_8_ = auVar80._8_8_ * auVar83._8_8_;
        auVar66._16_8_ = auVar80._16_8_ * dVar102 * local_290;
        auVar66._0_16_ = local_2a0;
        auVar66._24_8_ = auVar80._24_8_ * 0.0;
        local_290 = (double)vmovlpd_avx(auVar66._16_16_);
        auVar88._8_8_ = __real_0010000000000000;
        auVar88._0_8_ = __real_0010000000000000;
        auVar88._16_8_ = __real_0010000000000000;
        auVar88._24_8_ = __real_0010000000000000;
        auVar80 = vblendpd_avx(auVar47,auVar88,8);
        auVar76._0_8_ = __real_7fffffffffffffff & auVar80._0_8_;
        auVar76._8_8_ = __real_7fffffffffffffff & auVar80._8_8_;
        auVar76._16_8_ = __real_7fffffffffffffff & auVar80._16_8_;
        auVar76._24_8_ = __real_7fffffffffffffff & auVar80._24_8_;
        auVar93._8_8_ = __real_3f1a36e2eb1c432d;
        auVar93._0_8_ = __real_3f1a36e2eb1c432d;
        auVar93._16_8_ = __real_3f1a36e2eb1c432d;
        auVar93._24_8_ = __real_3f1a36e2eb1c432d;
        auVar80 = vcmppd_avx(auVar76,auVar93,6);
        auVar80 = vpackssdw_avx2(auVar80,auVar26);
        _local_200 = auVar108;
        if ((((((((SUB321(auVar80 >> 0x1f,0) & 1) == 0 && (SUB321(auVar80 >> 0x3f,0) & 1) == 0) &&
                (SUB321(auVar80 >> 0x5f,0) & 1) == 0) && SUB321(auVar80 >> 0x7f,0) == '\0') &&
              (SUB321(auVar80 >> 0x9f,0) & 1) == 0) && SUB321(auVar80 >> 0xbf,0) == '\0') &&
            (SUB321(auVar80 >> 0xdf,0) & 1) == 0) && -1 < auVar80[0x1f]) {
          auVar42 = SUB6416(ZEXT864(0),0) << 0x40;
          auVar15 = ZEXT816(0) << 0x40;
          auVar29 = ZEXT816(0) << 0x40;
          auVar96._8_8_ = 0;
          auVar96._0_8_ = __real_3ff0000000000000;
        }
        else {
          auVar80 = vblendpd_avx(auVar37,auVar88,8);
          auVar101._0_8_ = auVar80._0_8_ & __real_7fffffffffffffff;
          auVar101._8_8_ = auVar80._8_8_ & __real_7fffffffffffffff;
          auVar101._16_8_ = auVar80._16_8_ & __real_7fffffffffffffff;
          auVar101._24_8_ = auVar80._24_8_ & __real_7fffffffffffffff;
          auVar80 = vcmppd_avx(auVar101,auVar93,6);
          auVar80 = vpackssdw_avx2(auVar80,auVar26);
          auVar96._8_8_ = 0;
          auVar96._0_8_ = __real_3ff0000000000000;
          if ((((((((SUB321(auVar80 >> 0x1f,0) & 1) != 0 || (SUB321(auVar80 >> 0x3f,0) & 1) != 0) ||
                  (SUB321(auVar80 >> 0x5f,0) & 1) != 0) || SUB321(auVar80 >> 0x7f,0) != '\0') ||
                (SUB321(auVar80 >> 0x9f,0) & 1) != 0) || SUB321(auVar80 >> 0xbf,0) != '\0') ||
              (SUB321(auVar80 >> 0xdf,0) & 1) != 0) || auVar80[0x1f] < '\0') {
            auVar80 = vblendpd_avx(auVar66,auVar88,8);
            auVar89._0_8_ = __real_7fffffffffffffff & auVar80._0_8_;
            auVar89._8_8_ = __real_7fffffffffffffff & auVar80._8_8_;
            auVar89._16_8_ = __real_7fffffffffffffff & auVar80._16_8_;
            auVar89._24_8_ = __real_7fffffffffffffff & auVar80._24_8_;
            auVar80 = vcmppd_avx(auVar89,auVar93,6);
            auVar80 = vpackssdw_avx2(auVar80,ZEXT1632(ZEXT816(0)));
            if ((((((((SUB321(auVar80 >> 0x1f,0) & 1) != 0 || (SUB321(auVar80 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar80 >> 0x5f,0) & 1) != 0) || SUB321(auVar80 >> 0x7f,0) != '\0')
                  || (SUB321(auVar80 >> 0x9f,0) & 1) != 0) || SUB321(auVar80 >> 0xbf,0) != '\0') ||
                (SUB321(auVar80 >> 0xdf,0) & 1) != 0) || auVar80[0x1f] < '\0') {
              auVar58 = vshufpd_avx(local_2c0,local_2c0,1);
              dVar91 = auVar66._16_8_ + auVar58._0_8_ + (double)local_2e0;
              if (dVar91 <= __real_0000000000000000) {
                bVar6 = (double)local_2e0 < auVar58._0_8_;
                uVar27 = (ulonglong)bVar6;
                if (*(double *)(local_2e0 + ((uint)bVar6 * 0x20 + (uint)bVar6 * 8)) < auVar66._16_8_
                   ) {
                  uVar27 = 2;
                }
                iVar2 = *(int *)(&DAT_151c6af4c + uVar27 * 4);
                lVar14 = (longlong)iVar2;
                iVar7 = (int)uVar27;
                iVar3 = *(int *)(&DAT_151c6af4c + lVar14 * 4);
                dVar91 = __real_3ff0000000000000 /
                         SQRT(__real_3ff0000000000000 +
                              ((*(double *)(local_2e0 + (uint)(iVar7 * 0x28)) -
                               *(double *)(local_2e0 + lVar14 * 0x28)) -
                              *(double *)(local_2e0 + (longlong)iVar3 * 0x28)));
                *(double *)((longlong)&local_220 + (ulonglong)(uint)(iVar7 * 8)) =
                     (__real_3ff0000000000000 / dVar91) * __real_3fe0000000000000;
                dVar91 = dVar91 * __real_3fe0000000000000;
                (&local_220)[lVar14] =
                     (*(double *)(local_2e0 + (longlong)(iVar2 + iVar7 * 4) * 8) +
                     *(double *)(local_2e0 + (longlong)(iVar7 + iVar2 * 4) * 8)) * dVar91;
                (&local_220)[iVar3] =
                     dVar91 * (*(double *)(local_2e0 + (longlong)(iVar3 + iVar7 * 4) * 8) +
                              *(double *)(local_2e0 + (longlong)(iVar7 + iVar3 * 4) * 8));
                auVar96._8_8_ = 0;
                auVar96._0_8_ =
                     dVar91 * (*(double *)(local_2e0 + (longlong)(iVar3 + iVar2 * 4) * 8) -
                              *(double *)(local_2e0 + (longlong)(iVar2 + iVar3 * 4) * 8));
                auVar42._8_8_ = 0;
                auVar42._0_8_ = local_220;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = local_218;
                auVar29._8_8_ = 0;
                auVar29._0_8_ = local_210;
                param_3 = local_258;
              }
              else {
                auVar58 = vshufpd_avx(_local_2e0,_local_2e0,1);
                auVar77 = vshufpd_avx(local_2a0,local_2a0,1);
                dVar94 = __real_3ff0000000000000 / SQRT(__real_3ff0000000000000 + dVar91);
                dVar91 = __real_3fe0000000000000 * dVar94;
                auVar42._8_8_ = 0;
                auVar42._0_8_ = dVar91 * (auVar37._16_8_ - auVar77._0_8_);
                auVar15._8_8_ = 0;
                auVar15._0_8_ = dVar91 * ((double)local_2a0._0_8_ - auVar47._16_8_);
                auVar29._8_8_ = 0;
                auVar29._0_8_ = dVar91 * (auVar58._0_8_ - (double)local_2c0._0_8_);
                auVar96._8_8_ = 0;
                auVar96._0_8_ = __real_3fe0000000000000 * (__real_3ff0000000000000 / dVar94);
              }
              goto LAB_140a9af90;
            }
          }
          auVar42 = SUB6416(ZEXT864(0),0) << 0x40;
          auVar15 = ZEXT816(0) << 0x40;
          auVar29 = ZEXT816(0) << 0x40;
        }
LAB_140a9af90:
        auVar58 = vunpcklpd_avx(auVar29,auVar96);
        auVar77 = vunpcklpd_avx(auVar42,auVar15);
        dVar94 = auVar77._0_8_;
        dVar102 = auVar77._8_8_;
        dVar114 = auVar58._0_8_;
        auVar16._0_8_ = dVar114 * dVar114 + dVar94 * dVar94;
        dVar117 = auVar58._8_8_;
        auVar16._8_8_ = dVar117 * dVar117 + dVar102 * dVar102;
        auVar58 = vshufpd_avx(auVar16,auVar16,1);
        dVar91 = auVar16._0_8_ + auVar58._0_8_;
        auVar81._8_8_ = 0;
        auVar81._0_8_ = __real_3e45798ee2308c3a;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = dVar91;
        auVar58 = vcmpsd_avx(auVar81,auVar17,6);
        uVar27 = ~auVar58._0_8_ & __real_ffffffffffffffff;
        dVar91 = __real_3ff0000000000000 / SQRT(dVar91);
        auVar18._0_8_ = (double)((ulonglong)(dVar94 * dVar91) & uVar27);
        auVar18._8_8_ = (double)((ulonglong)(dVar102 * dVar91) & uVar27);
        auVar22._16_8_ = (ulonglong)(dVar114 * dVar91) & uVar27;
        auVar22._0_16_ = auVar18;
        auVar22._24_8_ = (ulonglong)(dVar117 * dVar91) & uVar27;
        auVar32._0_8_ =
             ~uVar27 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar32._8_8_ = ~uVar27 & _UNK_150b54548;
        auVar32._16_8_ = ~uVar27 & _UNK_150b54550;
        auVar32._24_8_ = ~uVar27 & _UNK_150b54558;
        auVar41 = auVar22._16_16_ | auVar32._16_16_;
        auVar58 = vshufps_avx(auVar18,auVar18,0x4e);
        auVar77 = vshufps_avx(auVar41,auVar41,0x4e);
        local_300._0_8_ = auVar49._0_8_;
        uVar118 = 0;
        local_310._0_8_ = auVar28._0_8_;
        dVar91 = dStack_280;
        uVar4 = uStack_278;
        dVar94 = dStack_270;
        dVar102 = (double)local_200._0_8_;
      }
      auVar82._8_8_ = 0;
      auVar82._0_8_ = __real_3e45798ee2308c3a;
      auVar28 = vunpcklpd_avx(auVar18,auVar58);
      auVar49 = vunpcklpd_avx(auVar41,auVar77);
      puVar13 = (ulonglong *)(lVar8 + param_1);
      dVar117 = auVar28._0_8_;
      dVar5 = auVar28._8_8_;
      dVar48 = auVar49._0_8_;
      auVar19._0_8_ = dVar48 * dVar48 + dVar117 * dVar117;
      dVar54 = auVar49._8_8_;
      auVar19._8_8_ = dVar54 * dVar54 + dVar5 * dVar5;
      auVar28 = vshufpd_avx(auVar19,auVar19,1);
      dVar114 = auVar19._0_8_ + auVar28._0_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = dVar114;
      auVar28 = vcmpsd_avx(auVar82,auVar20,6);
      uVar27 = ~auVar28._0_8_ & __real_ffffffffffffffff;
      dVar114 = __real_3ff0000000000000 / SQRT(dVar114);
      uVar55 = ~uVar27 & _UNK_150b54548;
      uVar56 = ~uVar27 & _UNK_150b54550;
      uVar57 = ~uVar27 & _UNK_150b54558;
      *puVar13 = (ulonglong)(dVar117 * dVar114) & uVar27 |
                 ~uVar27 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      puVar13[1] = (ulonglong)(dVar5 * dVar114) & uVar27 | uVar55;
      puVar13[2] = (ulonglong)(dVar48 * dVar114) & uVar27 | uVar56;
      puVar13[3] = (ulonglong)(dVar54 * dVar114) & uVar27 | uVar57;
      uVar27 = (ulonglong)((uint)uVar1 * 0x60);
      *(double *)(param_1 + 0x20 + uVar27) = dVar91;
      *(undefined8 *)(param_1 + 0x28 + uVar27) = uVar4;
      *(double *)(param_1 + 0x30 + uVar27) = dVar94;
      *(undefined8 *)(param_1 + 0x38 + uVar27) = uVar118;
      *(double *)(param_1 + 0x40 + uVar27) = dVar102;
      *(undefined8 *)(param_1 + 0x48 + uVar27) = local_310._0_8_;
      *(double *)(param_1 + 0x50 + uVar27) = auVar108._16_8_;
      *(undefined8 *)(param_1 + 0x58 + uVar27) = local_300._0_8_;
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_7);
  }
  return;
}

