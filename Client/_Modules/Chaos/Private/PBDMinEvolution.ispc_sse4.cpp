// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// MinEvolutionIntegrate___undREFs_5B_unFPBDRigidArrays_5D_REFs_5B_unFSimulationSpace_5D_REFs_5B_unFSimulationSpaceSettings_5D_REFs_5B__c_unFVector_5D_CundCund_sse4 @ 1409d75e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MinEvolutionIntegrate___undREFs_5B_unFPBDRigidArrays_5D_REFs_5B_unFSimulationSpace_5D_REFs_5B_unFSimulationSpaceSettings_5D_REFs_5B__c_unFVector_5D_CundCund_sse4
               (double param_1,uint *param_2,double *param_3,double *param_4,double *param_5,
               double param_6,double param_7,undefined1 (*param_8) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined4 in_ECX;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar41;
  double dVar42;
  double dVar43;
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
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar56;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar65;
  double dVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar67;
  double dVar68;
  double dVar80;
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
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  double dVar88;
  double dVar91;
  double dVar92;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar99;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar102;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar103;
  double dVar105;
  undefined1 auVar104 [16];
  double dVar106;
  double dVar111;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dStack_320;
  double local_2f8;
  double local_2e8;
  double local_2d8;
  double local_2b8;
  double local_288;
  double local_278;
  double local_258;
  double local_248;
  double local_228;
  double local_218;
  double local_208;
  double local_1e8;
  
  iVar17 = movmskps(in_ECX,*param_8);
  dVar57 = 0.0;
  if (iVar17 == 0xf) {
    local_218 = 0.0;
    dVar102 = 0.0;
    local_248 = 0.0;
    local_258 = 0.0;
    local_1e8 = 0.0;
    local_288 = 0.0;
    local_228 = 0.0;
    local_278 = 0.0;
    local_2b8 = 0.0;
    dVar95 = 0.0;
    local_208 = 0.0;
    if (0.0 < *param_4) {
      dVar87 = *param_3;
      dVar102 = (double)(__xmm_80000000000000008000000000000000 ^ (ulonglong)dVar87);
      dVar21 = (double)(_UNK_15066df78 ^ (ulonglong)param_3[1]);
      dVar58 = param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
      dVar65 = param_3[3] * _UNK_15076b868;
      dVar93 = dVar87 * param_3[0x14] + param_3[0x12] * dVar58;
      dVar57 = param_3[0x13] * dVar102 - dVar21 * param_3[0x12];
      dVar95 = param_3[0x14] * dVar21 - dVar58 * param_3[0x13];
      dVar93 = dVar93 + dVar93;
      dVar57 = dVar57 + dVar57;
      dVar95 = dVar95 + dVar95;
      dVar41 = param_3[0x16] * dVar102 - dVar21 * param_3[0x15];
      dVar91 = param_3[0x17] * dVar21 - dVar58 * param_3[0x16];
      dVar41 = dVar41 + dVar41;
      dVar91 = dVar91 + dVar91;
      local_208 = dVar57 * dVar65 + param_3[0x14] + (dVar93 * dVar102 - dVar21 * dVar95);
      local_2b8 = (dVar57 * dVar21 - dVar58 * dVar93) + dVar95 * dVar65 + param_3[0x12];
      dVar95 = (dVar95 * dVar58 - dVar102 * dVar57) + dVar93 * dVar65 + param_3[0x13];
      dVar57 = dVar87 * param_3[0x17] + param_3[0x15] * dVar58;
      dVar57 = dVar57 + dVar57;
      local_278 = dVar41 * dVar65 + param_3[0x17] + (dVar57 * dVar102 - dVar21 * dVar91);
      local_288 = (dVar41 * dVar21 - dVar58 * dVar57) + dVar91 * dVar65 + param_3[0x15];
      local_228 = (dVar91 * dVar58 - dVar102 * dVar41) + dVar57 * dVar65 + param_3[0x16];
      dVar57 = dVar87 * param_3[0xe] + param_3[0xc] * dVar58;
      dVar93 = param_3[0xd] * dVar102 - dVar21 * param_3[0xc];
      dVar99 = param_3[0xe] * dVar21 - dVar58 * param_3[0xd];
      dVar57 = dVar57 + dVar57;
      dVar93 = dVar93 + dVar93;
      dVar99 = dVar99 + dVar99;
      dVar91 = dVar87 * param_3[0x11] + param_3[0xf] * dVar58;
      dVar87 = param_3[0x10] * dVar102 - dVar21 * param_3[0xf];
      dVar41 = param_3[0x11] * dVar21 - dVar58 * param_3[0x10];
      dVar87 = dVar87 + dVar87;
      dVar41 = dVar41 + dVar41;
      dVar91 = dVar91 + dVar91;
      local_1e8 = dVar93 * dVar65 + param_3[0xe] + (dVar57 * dVar102 - dVar21 * dVar99);
      local_258 = (dVar93 * dVar21 - dVar58 * dVar57) + dVar99 * dVar65 + param_3[0xc];
      dVar57 = (dVar99 * dVar58 - dVar102 * dVar93) + dVar57 * dVar65 + param_3[0xd];
      local_248 = dVar87 * dVar65 + param_3[0x11] + (dVar91 * dVar102 - dVar21 * dVar41);
      local_218 = (dVar87 * dVar21 - dVar91 * dVar58) + dVar41 * dVar65 + param_3[0xf];
      dVar102 = (dVar41 * dVar58 - dVar102 * dVar87) + dVar91 * dVar65 + param_3[0x10];
    }
    uVar7 = *param_2;
    if (0 < (int)uVar7) {
      lVar8 = *(longlong *)(param_2 + 2);
      lVar9 = *(longlong *)(param_2 + 0x24);
      dVar87 = __real_3fe0000000000000 * param_1;
      lVar20 = 0;
      lVar18 = 0;
      lVar19 = 0;
      do {
        if ((*(char *)(lVar9 + lVar19) == '\0') && (*(char *)(lVar8 + lVar19) == '\x04')) {
          lVar10 = *(longlong *)(param_2 + 0xe);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xc) + lVar18);
          uVar15 = puVar1[1];
          uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0xc) + 0x10 + lVar18);
          puVar2 = (undefined8 *)(lVar10 + lVar18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar15;
          *(undefined8 *)(lVar10 + 0x10 + lVar18) = uVar6;
          lVar10 = *(longlong *)(param_2 + 0x12);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar18);
          uVar15 = puVar1[1];
          uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar18);
          puVar2 = (undefined8 *)(lVar10 + lVar18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar15;
          *(undefined8 *)(lVar10 + 0x10 + lVar18) = uVar6;
          lVar10 = *(longlong *)(param_2 + 8);
          dVar21 = *(double *)(lVar10 + 0x10 + lVar20);
          lVar11 = *(longlong *)(param_2 + 0x16);
          dVar41 = *(double *)(lVar11 + 8 + lVar20);
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1c) + lVar18);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x20) + lVar18);
          pdVar5 = (double *)(*(longlong *)(param_2 + 0x18) + lVar19 * 8);
          local_2d8 = *pdVar5;
          local_2e8 = (*(double *)(*(longlong *)(param_2 + 0x20) + 0x10 + lVar18) +
                      *(double *)(*(longlong *)(param_2 + 0x1c) + 0x10 + lVar18) * param_1) *
                      local_2d8;
          local_2d8 = (*pdVar4 + *pdVar3 * param_1) * local_2d8;
          local_2f8 = (pdVar4[1] + pdVar3[1] * param_1) * *pdVar5;
          if (*(char *)(*(longlong *)(param_2 + 0x26) + lVar19) != '\0') {
            local_2d8 = local_2d8 + *param_5 * param_1;
            local_2f8 = local_2f8 + param_5[1] * param_1;
            local_2e8 = local_2e8 + param_5[2] * param_1;
          }
          lVar12 = *(longlong *)(param_2 + 0x14);
          dVar91 = *(double *)(lVar10 + lVar20);
          dVar58 = *(double *)(lVar10 + 8 + lVar20);
          dVar65 = *(double *)(lVar12 + 0x10 + lVar18);
          pdVar3 = (double *)(lVar10 + 8 + lVar20);
          dVar99 = *pdVar3;
          dVar47 = pdVar3[1];
          pdVar3 = (double *)(lVar12 + 8 + lVar18);
          dVar67 = dVar65 * dVar99 - *pdVar3 * dVar21;
          dVar80 = *(double *)(lVar12 + lVar18) * dVar47 - pdVar3[1] * dVar91;
          dVar81 = *(double *)(lVar12 + 8 + lVar18) * dVar91 - *(double *)(lVar12 + lVar18) * dVar58
          ;
          dVar67 = dVar67 + dVar67;
          dVar80 = dVar80 + dVar80;
          dVar81 = dVar81 + dVar81;
          dVar93 = *(double *)(lVar10 + 0x18 + lVar20);
          pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar18);
          dVar44 = *pdVar3 + (dVar81 * ((double *)(lVar10 + lVar20))[1] - dVar80 * dVar47) +
                             dVar93 * dVar67 + *(double *)(lVar12 + lVar18);
          dVar56 = pdVar3[1] +
                   (dVar21 * dVar67 - dVar81 * dVar91) +
                   dVar93 * dVar80 + ((double *)(lVar12 + lVar18))[1];
          dVar45 = *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar18) +
                   dVar93 * dVar81 + dVar65 +
                   (dVar80 * *(double *)(lVar10 + lVar20) - dVar67 * dVar99);
          pdVar3 = (double *)(lVar11 + 0x10 + lVar20);
          dVar47 = *pdVar3;
          dVar67 = pdVar3[1];
          dVar80 = *(double *)(lVar11 + lVar20);
          dVar81 = ((double *)(lVar11 + lVar20))[1];
          dVar65 = *(double *)(lVar11 + 0x18 + lVar20);
          dVar99 = *(double *)(lVar11 + 0x10 + lVar20);
          dVar106 = dVar21 * dVar41 * ___xmm_3ff0000000000000bff0000000000000 +
                    dVar47 * dVar58 +
                    dVar91 * dVar65 * ___xmm_bff00000000000003ff0000000000000 + dVar93 * dVar80;
          dVar111 = dVar21 * *(double *)(lVar11 + lVar20) * _UNK_15076b868 +
                    dVar67 * dVar58 + dVar91 * dVar99 * _UNK_15076c6f8 + dVar93 * dVar81;
          dVar103 = dVar21 * dVar65 * ___xmm_bff00000000000003ff0000000000000 +
                    ((dVar41 * dVar91 * ___xmm_bff00000000000003ff0000000000000 + dVar93 * dVar47) -
                    dVar58 * dVar80);
          dVar105 = dVar21 * dVar99 * _UNK_15076c6f8 +
                    ((*(double *)(lVar11 + lVar20) * dVar91 * _UNK_15076c6f8 + dVar93 * dVar67) -
                    dVar58 * dVar81);
          lVar10 = *(longlong *)(param_2 + 0x1a);
          dVar41 = dVar111 + dVar111;
          dVar91 = dVar103 + dVar103;
          dVar21 = dVar106 * (dVar106 + dVar106);
          dVar65 = dVar106 * dVar41;
          dVar93 = (dVar106 + dVar106) * dVar105;
          dVar68 = dVar105 * dVar91 + dVar65;
          dVar88 = dVar93 + dVar111 * dVar91;
          dVar92 = dVar41 * dVar105 + dVar91 * dVar106;
          dVar93 = dVar111 * dVar91 - dVar93;
          dVar99 = dVar91 * dVar106 - dVar41 * dVar105;
          dVar58 = dVar65 - dVar105 * dVar91;
          dVar65 = dVar65 - dVar105 * (dVar105 + dVar105);
          dVar46 = __real_3ff0000000000000 - (dVar41 * dVar111 + dVar21);
          auVar82._0_8_ =
               ___xmm_3ff00000000000003ff0000000000000 - (dVar91 * dVar103 + dVar41 * dVar111);
          auVar82._8_8_ = _UNK_150689688 - (dVar91 * dVar103 + dVar21);
          pdVar3 = (double *)(lVar10 + lVar20 * 4);
          dVar47 = *pdVar3;
          dVar67 = pdVar3[1];
          dVar21 = *(double *)(lVar10 + 0x10 + lVar20 * 4);
          pdVar3 = (double *)(lVar10 + 0x20 + lVar20 * 4);
          dVar80 = *pdVar3;
          dVar81 = pdVar3[1];
          dVar41 = *(double *)(lVar10 + 0x30 + lVar20 * 4);
          pdVar3 = (double *)(lVar10 + 0x40 + lVar20 * 4);
          dVar23 = *pdVar3;
          dVar43 = pdVar3[1];
          dVar22 = dVar23 * dVar92 + dVar58 * dVar80 + auVar82._0_8_ * dVar47;
          dVar42 = dVar43 * dVar92 + dVar58 * dVar81 + auVar82._0_8_ * dVar67;
          dVar91 = *(double *)(lVar10 + 0x50 + lVar20 * 4);
          dVar94 = dVar92 * dVar91 + dVar41 * dVar58 + dVar21 * auVar82._0_8_;
          dVar59 = dVar93 * dVar23 + auVar82._8_8_ * dVar80 + dVar68 * dVar47;
          dVar66 = dVar93 * dVar43 + auVar82._8_8_ * dVar81 + dVar68 * dVar67;
          dVar112 = dVar91 * dVar93 + dVar41 * auVar82._8_8_ + dVar21 * dVar68;
          dVar47 = dVar46 * dVar23 + dVar88 * dVar80 + dVar47 * dVar99;
          dVar67 = dVar46 * dVar43 + dVar88 * dVar81 + dVar67 * dVar99;
          dVar80 = dVar91 * dVar46 + dVar41 * dVar88 + dVar21 * dVar99;
          auVar97._8_4_ = SUB84(dVar65,0);
          auVar97._0_8_ = dVar58;
          auVar97._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
          auVar97 = blendpd(auVar82,auVar97,1);
          dVar91 = auVar97._0_8_;
          dVar58 = auVar97._8_8_;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1e) + lVar18);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x22) + lVar18);
          dVar41 = *pdVar4 + *pdVar3 * param_1;
          dVar65 = pdVar4[1] + pdVar3[1] * param_1;
          dVar21 = *(double *)(*(longlong *)(param_2 + 0x22) + 0x10 + lVar18) +
                   *(double *)(*(longlong *)(param_2 + 0x1e) + 0x10 + lVar18) * param_1;
          dVar91 = dVar21 * (dVar80 * dVar92 + dVar91 * dVar67 + dVar47 * auVar82._0_8_) +
                   (dVar112 * dVar92 + dVar91 * dVar66 + dVar59 * auVar82._0_8_) * dVar65 +
                   dVar41 * (dVar94 * dVar92 + dVar91 * dVar42 + dVar22 * auVar82._0_8_);
          dVar58 = dVar21 * (dVar80 * dVar93 + dVar58 * dVar67 + dVar47 * dVar68) +
                   (dVar112 * dVar93 + dVar58 * dVar66 + dVar59 * dVar68) * dVar65 +
                   dVar41 * (dVar94 * dVar93 + dVar58 * dVar42 + dVar22 * dVar68);
          dVar41 = dVar21 * (dVar80 * dVar46 + dVar67 * dVar88 + dVar99 * dVar47) +
                   dVar65 * (dVar112 * dVar46 + dVar66 * dVar88 + dVar99 * dVar59) +
                   (dVar94 * dVar46 + dVar42 * dVar88 + dVar99 * dVar22) * dVar41;
          dVar21 = *param_4;
          lVar10 = *(longlong *)(param_2 + 0xc);
          if (dVar21 <= __real_0000000000000000) {
            dVar65 = *(double *)(lVar10 + lVar18);
            dVar99 = *(double *)(lVar10 + 8 + lVar18);
            dVar93 = *(double *)(lVar10 + 0x10 + lVar18);
            dVar21 = 0.0;
            dVar80 = 0.0;
            dVar23 = 0.0;
            dVar81 = 0.0;
            dVar67 = 0.0;
            dVar47 = 0.0;
          }
          else {
            dVar47 = param_4[1];
            dVar23 = param_4[2] + param_4[2];
            dVar65 = *(double *)(lVar10 + lVar18);
            dVar93 = *(double *)(lVar10 + 0x10 + lVar18);
            pdVar3 = (double *)(lVar10 + 8 + lVar18);
            dVar67 = param_4[3];
            dVar81 = local_288 * dVar56 - local_228 * dVar44;
            dVar43 = local_228 * dVar45 - local_278 * dVar56;
            dVar22 = local_278 * dVar44 - local_288 * dVar45;
            dVar80 = param_4[4];
            dVar99 = *(double *)(lVar10 + 8 + lVar18);
            local_2d8 = local_2d8 -
                        (param_4[8] * local_2b8 + dVar47 * local_258 +
                         dVar23 * (dVar93 * local_228 - *pdVar3 * local_278) +
                         (dVar81 * local_228 - dVar22 * local_278) * dVar67 +
                        (dVar45 * dVar102 - local_248 * dVar56) * dVar80) * dVar21 * param_1;
            local_2f8 = local_2f8 -
                        (param_4[9] * dVar95 + dVar47 * dVar57 +
                         dVar23 * (dVar65 * local_278 - pdVar3[1] * local_288) +
                         (dVar43 * local_278 - local_288 * dVar81) * dVar67 +
                        (local_248 * dVar44 - local_218 * dVar45) * dVar80) * dVar21 * param_1;
            dVar81 = param_4[5];
            local_2e8 = local_2e8 -
                        ((dVar56 * local_218 - dVar102 * dVar44) * dVar80 +
                        (local_288 * dVar99 - local_228 * dVar65) * dVar23 +
                        dVar47 * local_1e8 + param_4[10] * local_208 +
                        (dVar22 * local_288 - dVar43 * local_228) * dVar67) * dVar21 * param_1;
            dVar91 = dVar91 - dVar81 * local_218 * dVar21 * param_1;
            dVar58 = dVar58 - dVar81 * dVar102 * dVar21 * param_1;
            dVar41 = dVar41 - dVar81 * local_248 * dVar21 * param_1;
            dVar47 = param_4[6] *
                     (double)((ulonglong)dVar21 ^ __xmm_80000000000000008000000000000000);
            dVar81 = dVar47 * local_2b8;
            dVar67 = dVar47 * dVar95;
            dVar47 = dVar47 * local_208;
            dVar23 = (double)((ulonglong)dVar21 ^ __xmm_80000000000000008000000000000000) *
                     param_4[7];
            dVar21 = dVar23 * local_288;
            dVar80 = dVar23 * local_228;
            dVar23 = dVar23 * local_278;
          }
          dVar22 = *(double *)(*(longlong *)(param_2 + 0x28) + lVar19 * 8) * param_1;
          dVar43 = __real_3ff0000000000000;
          if (dVar22 <= __real_3ff0000000000000) {
            dVar43 = dVar22;
          }
          dVar42 = *(double *)(*(longlong *)(param_2 + 0x2a) + lVar19 * 8) * param_1;
          dVar22 = __real_3ff0000000000000;
          if (dVar42 <= __real_3ff0000000000000) {
            dVar22 = dVar42;
          }
          dVar81 = dVar43 * (dVar81 - (dVar65 + local_2d8)) + dVar65 + local_2d8;
          dVar67 = dVar43 * (dVar67 - (dVar99 + local_2f8)) + dVar99 + local_2f8;
          dVar65 = (dVar47 - (dVar93 + local_2e8)) * dVar43 + dVar93 + local_2e8;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x10) + lVar18);
          dVar91 = *pdVar3 + dVar91;
          dVar58 = pdVar3[1] + dVar58;
          dVar41 = dVar41 + *(double *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar18);
          dVar41 = (dVar23 - dVar41) * dVar22 + dVar41;
          dVar91 = dVar22 * (dVar21 - dVar91) + dVar91;
          dVar58 = dVar22 * (dVar80 - dVar58) + dVar58;
          dVar21 = (dVar111 * dVar41 * ___xmm_3ff0000000000000bff0000000000000 +
                   dVar103 * dVar58 +
                   dVar105 * dVar91 * ___xmm_bff00000000000003ff0000000000000 + dVar106 * 0.0) *
                   dVar87 + dVar106;
          dVar93 = (dVar106 * dVar41 * _UNK_15076b868 +
                   dVar105 * dVar58 + dVar103 * dVar91 * _UNK_15076c6f8 + dVar111 * 0.0) * dVar87 +
                   dVar111;
          dVar99 = (dVar105 * dVar41 * ___xmm_bff00000000000003ff0000000000000 +
                   ((dVar91 * dVar111 * ___xmm_bff00000000000003ff0000000000000 + dVar103 * 0.0) -
                   dVar58 * dVar106)) * dVar87 + dVar103;
          dVar105 = (dVar103 * dVar41 * _UNK_15076c6f8 +
                    ((dVar91 * dVar106 * _UNK_15076c6f8 + dVar105 * 0.0) - dVar58 * dVar111)) *
                    dVar87 + dVar105;
          dVar47 = dVar21 * dVar21 + dVar99 * dVar99;
          dVar80 = dVar93 * dVar93 + dVar105 * dVar105;
          auVar104._0_8_ = dVar80 + dVar47;
          auVar104._8_8_ = dVar47 + dVar80;
          auVar108._0_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <= auVar104._0_8_);
          auVar108._8_4_ = -(uint)(_UNK_150aa88b8 <= auVar104._8_8_);
          auVar108._4_4_ = auVar108._0_4_;
          auVar108._12_4_ = auVar108._8_4_;
          auVar82 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar108);
          auVar97 = sqrtpd(auVar108,auVar104);
          auVar61._8_8_ = _UNK_150689688;
          auVar61._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
          auVar97 = divpd(auVar61,auVar97);
          dVar22 = (double)((ulonglong)(auVar97._0_8_ * dVar21) & auVar82._0_8_);
          dVar42 = (double)((ulonglong)(auVar97._8_8_ * dVar93) & auVar82._8_8_);
          auVar113._0_8_ = (double)((ulonglong)(dVar99 * auVar97._0_8_) & auVar82._0_8_);
          dVar47 = (double)((ulonglong)(dVar105 * auVar97._8_8_) & auVar82._8_8_);
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + lVar20);
          dVar21 = *pdVar3;
          dVar93 = pdVar3[1];
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + 0x10 + lVar20);
          dVar99 = *pdVar3 * ___xmm_3ff0000000000000bff0000000000000;
          dVar80 = pdVar3[1] * _UNK_15076b868;
          auVar114._8_4_ = SUB84(dVar47,0);
          auVar114._0_8_ = dVar47;
          auVar114._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          auVar109._8_4_ = SUB84(dVar42,0);
          auVar109._12_4_ = (undefined4)((ulonglong)dVar42 >> 0x20);
          auVar101._8_4_ = SUB84(dVar22,0);
          auVar101._0_8_ = dVar22;
          auVar101._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          auVar109._0_8_ = dVar42;
          auVar113._8_4_ = SUB84(auVar113._0_8_,0);
          auVar113._12_4_ = (int)((ulonglong)auVar113._0_8_ >> 0x20);
          dVar23 = dVar80 * auVar113._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                   dVar21 * dVar42 +
                   (dVar99 * dVar47 - dVar22 * dVar93 * ___xmm_bff00000000000003ff0000000000000);
          dVar43 = dVar99 * auVar113._8_8_ * _UNK_15076c6f8 +
                   dVar93 * auVar109._8_8_ +
                   (dVar80 * auVar114._8_8_ - auVar101._8_8_ * dVar21 * _UNK_15076c6f8);
          dVar47 = (dVar99 * dVar42 +
                   (dVar80 * dVar22 * ___xmm_bff00000000000003ff0000000000000 - dVar47 * dVar21)) -
                   dVar93 * auVar113._0_8_ * ___xmm_3ff0000000000000bff0000000000000;
          dVar80 = (dVar80 * auVar109._8_8_ +
                   (dVar99 * auVar101._8_8_ * _UNK_15076c6f8 - auVar114._8_8_ * dVar93)) -
                   dVar21 * auVar113._8_8_ * _UNK_15076b868;
          lVar10 = *(longlong *)(param_2 + 0x14);
          dVar21 = *(double *)(lVar10 + 0x10 + lVar18);
          dVar93 = *(double *)(lVar10 + lVar18);
          dVar99 = ((double *)(lVar10 + lVar18))[1];
          pdVar3 = (double *)(lVar10 + 8 + lVar18);
          dVar42 = *pdVar3 * dVar47 - dVar80 * dVar93;
          dVar46 = pdVar3[1] * dVar80 - dVar23 * dVar99;
          dVar22 = *(double *)(lVar10 + lVar18) * dVar23 - dVar21 * dVar47;
          dVar22 = dVar22 + dVar22;
          dVar42 = dVar42 + dVar42;
          dVar46 = dVar46 + dVar46;
          lVar10 = *(longlong *)(param_2 + 6);
          *(double *)(lVar10 + lVar18) =
               (dVar44 + param_1 * dVar81) -
               ((dVar42 * dVar80 - dVar23 * dVar22) + dVar46 * dVar43 + dVar93);
          ((double *)(lVar10 + lVar18))[1] =
               (dVar56 + param_1 * dVar67) -
               ((dVar46 * dVar23 - dVar47 * dVar42) + dVar22 * dVar43 + dVar99);
          *(double *)(lVar10 + 0x10 + lVar18) =
               (dVar45 + param_1 * dVar65) -
               (dVar43 * dVar42 + dVar21 + (dVar22 * dVar47 - dVar80 * dVar46));
          lVar11 = *(longlong *)(param_2 + 10);
          *(double *)(lVar11 + lVar20) = dVar47;
          ((double *)(lVar11 + lVar20))[1] = dVar80;
          pdVar3 = (double *)(lVar11 + 0x10 + lVar20);
          *pdVar3 = dVar23;
          pdVar3[1] = dVar43;
          lVar12 = *(longlong *)(param_2 + 0xc);
          pdVar3 = (double *)(lVar12 + lVar18);
          *pdVar3 = dVar81;
          pdVar3[1] = dVar67;
          *(double *)(lVar12 + 0x10 + lVar18) = dVar65;
          lVar12 = *(longlong *)(param_2 + 0x10);
          pdVar3 = (double *)(lVar12 + lVar18);
          *pdVar3 = dVar91;
          pdVar3[1] = dVar58;
          *(double *)(lVar12 + 0x10 + lVar18) = dVar41;
          lVar12 = *(longlong *)(param_2 + 0x20);
          puVar1 = (undefined8 *)(lVar12 + lVar18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar18) = 0;
          lVar12 = *(longlong *)(param_2 + 0x22);
          puVar1 = (undefined8 *)(lVar12 + lVar18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar18) = 0;
          if (*(char *)(*(longlong *)(param_2 + 0x2c) + lVar19) != '\0') {
            lVar12 = *(longlong *)(param_2 + 0x2e);
            dVar21 = *(double *)(lVar12 + 0x10 + lVar18 * 2);
            pdVar3 = (double *)(lVar12 + lVar18 * 2);
            dVar47 = *pdVar3;
            dVar67 = pdVar3[1];
            pdVar3 = (double *)(lVar12 + 8 + lVar18 * 2);
            pdVar4 = (double *)(lVar12 + 0x18 + lVar18 * 2);
            dVar80 = *pdVar4;
            dVar81 = pdVar4[1];
            dVar41 = *(double *)(lVar11 + 0x10 + lVar20);
            dVar91 = *(double *)(lVar11 + 0x18 + lVar20);
            dVar23 = *(double *)(lVar11 + lVar20);
            dVar43 = ((double *)(lVar11 + lVar20))[1];
            pdVar4 = (double *)(lVar11 + 8 + lVar20);
            dVar22 = *pdVar4;
            dVar42 = pdVar4[1];
            dVar44 = *(double *)(lVar11 + 0x10 + lVar20);
            dVar58 = *(double *)(lVar11 + lVar20);
            dVar88 = *(double *)(lVar12 + lVar18 * 2) * dVar44 -
                     *(double *)(lVar12 + 0x10 + lVar18 * 2) * dVar58;
            dVar99 = *pdVar3 * dVar23 - dVar22 * dVar47;
            dVar59 = pdVar3[1] * dVar43 - dVar42 * dVar67;
            dVar88 = dVar88 + dVar88;
            dVar99 = dVar99 + dVar99;
            dVar59 = dVar59 + dVar59;
            dVar92 = dVar99 * dVar43 - dVar88 * dVar42;
            pdVar3 = (double *)(lVar12 + 0x20 + lVar18 * 2);
            dVar56 = *(double *)(lVar12 + 0x18 + lVar18 * 2) * dVar44 -
                     *(double *)(lVar12 + 0x28 + lVar18 * 2) * dVar58;
            dVar68 = *pdVar3 * dVar23 - dVar22 * dVar80;
            dVar105 = pdVar3[1] * dVar43 - dVar42 * dVar81;
            dVar56 = dVar56 + dVar56;
            dVar68 = dVar68 + dVar68;
            dVar105 = dVar105 + dVar105;
            dVar66 = dVar68 * dVar43 - dVar56 * dVar42;
            dVar65 = *(double *)(lVar12 + 0x28 + lVar18 * 2);
            dVar45 = *(double *)(lVar10 + lVar18);
            dVar46 = ((double *)(lVar10 + lVar18))[1];
            auVar110._0_8_ = dVar92 + dVar91 * dVar59 + dVar47 + dVar45;
            auVar110._8_8_ = (dVar59 * dVar41 - dVar58 * dVar99) + dVar91 * dVar88 + dVar67 + dVar46
            ;
            auVar52._0_8_ = dVar66 + dVar91 * dVar105 + dVar80 + dVar45;
            auVar52._8_8_ = (dVar105 * dVar41 - dVar58 * dVar68) + dVar91 * dVar56 + dVar81 + dVar46
            ;
            auVar33._8_8_ = auVar110._8_8_;
            auVar33._0_8_ = auVar110._0_8_;
            auVar97 = minpd(auVar33,auVar52);
            auVar108 = maxpd(auVar110,auVar52);
            dVar93 = *(double *)(lVar10 + 0x10 + lVar18);
            auVar63._0_8_ = dVar91 * dVar99 + dVar21 + (dVar88 * dVar23 - dVar59 * dVar22) + dVar93;
            auVar63._8_8_ = dVar91 * dVar59 + 0.0 + dVar92 + 0.0;
            auVar75._0_8_ = dVar91 * dVar68 + dVar65 + (dVar56 * dVar23 - dVar105 * dVar22) + dVar93
            ;
            auVar75._8_8_ = dVar91 * dVar105 + 0.0 + dVar66 + 0.0;
            auVar34._8_8_ = auVar63._8_8_;
            auVar34._0_8_ = auVar63._0_8_;
            auVar82 = minpd(auVar34,auVar75);
            auVar61 = maxpd(auVar63,auVar75);
            dVar103 = dVar80 - dVar47;
            dVar106 = dVar81 - dVar67;
            dVar66 = dVar65 - dVar21;
            dVar92 = dVar21 + dVar66;
            dVar99 = dVar65 - dVar66;
            dVar88 = dVar47 + dVar103 * __real_3ff0000000000000;
            dVar94 = dVar67 + dVar106 * 0.0;
            dVar21 = dVar21 + dVar66 * __real_0000000000000000;
            dVar68 = dVar94 * dVar23 - dVar22 * dVar88;
            dVar105 = dVar21 * dVar43 - dVar42 * dVar94;
            dVar56 = dVar88 * dVar44 - dVar21 * dVar58;
            dVar56 = dVar56 + dVar56;
            dVar68 = dVar68 + dVar68;
            dVar105 = dVar105 + dVar105;
            dVar59 = dVar68 * dVar43 - dVar56 * dVar42;
            auVar35._0_8_ = dVar59 + dVar91 * dVar105 + dVar88 + dVar45;
            auVar35._8_8_ = (dVar105 * dVar41 - dVar58 * dVar68) + dVar91 * dVar56 + dVar94 + dVar46
            ;
            auVar97 = minpd(auVar97,auVar35);
            auVar108 = maxpd(auVar108,auVar35);
            auVar53._0_8_ = dVar91 * dVar68 + dVar21 + (dVar56 * dVar23 - dVar105 * dVar22) + dVar93
            ;
            auVar53._8_8_ = dVar91 * dVar105 + 0.0 + dVar59 + 0.0;
            auVar82 = minpd(auVar82,auVar53);
            auVar113 = maxpd(auVar61,auVar53);
            dVar56 = dVar80 - dVar103 * __real_3ff0000000000000;
            dVar59 = dVar81 - dVar106 * 0.0;
            dVar65 = dVar65 - dVar66 * __real_0000000000000000;
            dVar66 = dVar59 * dVar23 - dVar22 * dVar56;
            dVar68 = dVar65 * dVar43 - dVar42 * dVar59;
            dVar105 = dVar56 * dVar44 - dVar65 * dVar58;
            dVar105 = dVar105 + dVar105;
            dVar66 = dVar66 + dVar66;
            dVar68 = dVar68 + dVar68;
            dVar88 = dVar66 * dVar43 - dVar105 * dVar42;
            auVar76._0_8_ = dVar88 + dVar91 * dVar68 + dVar56 + dVar45;
            auVar76._8_8_ = (dVar68 * dVar41 - dVar58 * dVar66) + dVar91 * dVar105 + dVar59 + dVar46
            ;
            auVar97 = minpd(auVar97,auVar76);
            auVar61 = maxpd(auVar108,auVar76);
            auVar36._0_8_ = dVar91 * dVar66 + dVar65 + (dVar105 * dVar23 - dVar68 * dVar22) + dVar93
            ;
            auVar36._8_8_ = dVar91 * dVar68 + 0.0 + dVar88 + 0.0;
            auVar82 = minpd(auVar82,auVar36);
            auVar108 = maxpd(auVar113,auVar36);
            dVar56 = dVar47 + dVar103 * 0.0;
            dVar59 = dVar67 + __real_3ff0000000000000 * dVar106;
            dVar66 = dVar59 * dVar23 - dVar22 * dVar56;
            dVar68 = dVar21 * dVar43 - dVar42 * dVar59;
            dVar105 = dVar56 * dVar44 - dVar21 * dVar58;
            dVar105 = dVar105 + dVar105;
            dVar66 = dVar66 + dVar66;
            dVar68 = dVar68 + dVar68;
            dVar88 = dVar66 * dVar43 - dVar105 * dVar42;
            auVar77._0_8_ = dVar88 + dVar91 * dVar68 + dVar56 + dVar45;
            auVar77._8_8_ = (dVar68 * dVar41 - dVar58 * dVar66) + dVar91 * dVar105 + dVar59 + dVar46
            ;
            auVar97 = minpd(auVar97,auVar77);
            auVar61 = maxpd(auVar61,auVar77);
            auVar37._0_8_ = dVar91 * dVar66 + dVar21 + (dVar105 * dVar23 - dVar68 * dVar22) + dVar93
            ;
            auVar37._8_8_ = dVar91 * dVar68 + 0.0 + dVar88 + 0.0;
            auVar82 = minpd(auVar82,auVar37);
            auVar108 = maxpd(auVar108,auVar37);
            dVar21 = dVar80 - dVar103 * 0.0;
            dVar56 = dVar81 - __real_3ff0000000000000 * dVar106;
            dVar59 = dVar56 * dVar23 - dVar22 * dVar21;
            dVar66 = dVar65 * dVar43 - dVar42 * dVar56;
            dVar68 = dVar21 * dVar44 - dVar65 * dVar58;
            dVar68 = dVar68 + dVar68;
            dVar59 = dVar59 + dVar59;
            dVar66 = dVar66 + dVar66;
            dVar105 = dVar59 * dVar43 - dVar68 * dVar42;
            auVar78._0_8_ = dVar105 + dVar91 * dVar66 + dVar21 + dVar45;
            auVar78._8_8_ = (dVar66 * dVar41 - dVar58 * dVar59) + dVar91 * dVar68 + dVar56 + dVar46;
            auVar97 = minpd(auVar97,auVar78);
            auVar61 = maxpd(auVar61,auVar78);
            auVar38._0_8_ = dVar91 * dVar59 + dVar65 + (dVar68 * dVar23 - dVar66 * dVar22) + dVar93;
            auVar38._8_8_ = dVar91 * dVar66 + 0.0 + dVar105 + 0.0;
            auVar82 = minpd(auVar82,auVar38);
            auVar108 = maxpd(auVar108,auVar38);
            dVar47 = dVar47 + dVar103 * 0.0;
            dVar67 = dVar67 + dVar106 * 0.0;
            dVar56 = dVar47 * dVar44 - dVar92 * dVar58;
            dVar21 = dVar67 * dVar23 - dVar22 * dVar47;
            dVar65 = dVar92 * dVar43 - dVar42 * dVar67;
            dVar56 = dVar56 + dVar56;
            dVar21 = dVar21 + dVar21;
            dVar65 = dVar65 + dVar65;
            dVar59 = dVar21 * dVar43 - dVar56 * dVar42;
            auVar54._0_8_ = dVar59 + dVar91 * dVar65 + dVar47 + dVar45;
            auVar54._8_8_ = (dVar65 * dVar41 - dVar58 * dVar21) + dVar91 * dVar56 + dVar67 + dVar46;
            auVar97 = minpd(auVar97,auVar54);
            auVar61 = maxpd(auVar61,auVar54);
            auVar85._0_8_ = dVar91 * dVar21 + dVar92 + (dVar56 * dVar23 - dVar65 * dVar22) + dVar93;
            auVar85._8_8_ = dVar91 * dVar65 + 0.0 + dVar59 + 0.0;
            auVar82 = minpd(auVar82,auVar85);
            auVar108 = maxpd(auVar108,auVar85);
            dVar80 = dVar80 - dVar103 * 0.0;
            dVar81 = dVar81 - dVar106 * 0.0;
            dVar21 = dVar80 * dVar44 - dVar99 * dVar58;
            dVar47 = dVar81 * dVar23 - dVar22 * dVar80;
            dVar67 = dVar99 * dVar43 - dVar42 * dVar81;
            dVar21 = dVar21 + dVar21;
            dVar47 = dVar47 + dVar47;
            dVar67 = dVar67 + dVar67;
            dVar65 = dVar47 * dVar43 - dVar21 * dVar42;
            auVar55._0_8_ = dVar65 + dVar91 * dVar67 + dVar80 + dVar45;
            auVar55._8_8_ = (dVar67 * dVar41 - dVar58 * dVar47) + dVar91 * dVar21 + dVar81 + dVar46;
            auVar113 = minpd(auVar97,auVar55);
            auVar109 = maxpd(auVar61,auVar55);
            auVar39._0_8_ = dVar91 * dVar47 + dVar99 + (dVar21 * dVar23 - dVar67 * dVar22) + dVar93;
            auVar39._8_8_ = dVar91 * dVar67 + 0.0 + dVar65 + 0.0;
            auVar104 = minpd(auVar82,auVar39);
            auVar114 = maxpd(auVar108,auVar39);
            dVar21 = (auVar114._0_8_ - auVar104._0_8_) * param_6;
            dVar41 = (auVar109._0_8_ - auVar113._0_8_) * param_6;
            dVar91 = (auVar109._8_8_ - auVar113._8_8_) * param_6;
            auVar40._0_8_ = *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar18) - dVar93;
            auVar40._8_8_ = 0;
            pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar18);
            auVar64._0_8_ = *pdVar3 - dVar45;
            auVar64._8_8_ = pdVar3[1] - dVar46;
            auVar79._8_8_ = auVar64._8_8_;
            auVar79._0_8_ = auVar64._0_8_;
            auVar97 = ZEXT816(0);
            auVar61 = minpd(auVar79,auVar97);
            auVar86._8_8_ = 0;
            auVar86._0_8_ = auVar40._0_8_;
            auVar108 = minpd(auVar86,auVar97);
            auVar82 = maxpd(auVar64,auVar97);
            auVar97 = maxpd(auVar40,auVar97);
            lVar10 = *(longlong *)(param_2 + 0x30);
            pdVar3 = (double *)(lVar10 + lVar18 * 2);
            *pdVar3 = (auVar61._0_8_ + (auVar113._0_8_ - dVar41)) - param_7;
            pdVar3[1] = (auVar61._8_8_ + (auVar113._8_8_ - dVar91)) - param_7;
            pdVar3 = (double *)(lVar10 + 0x10 + lVar18 * 2);
            *pdVar3 = (auVar108._0_8_ + (auVar104._0_8_ - dVar21)) - param_7;
            pdVar3[1] = auVar82._0_8_ + dVar41 + auVar109._0_8_ + param_7;
            pdVar3 = (double *)(lVar10 + 0x20 + lVar18 * 2);
            *pdVar3 = auVar82._8_8_ + dVar91 + auVar109._8_8_ + param_7;
            pdVar3[1] = auVar97._0_8_ + dVar21 + auVar114._0_8_ + param_7;
          }
        }
        lVar19 = lVar19 + 1;
        lVar18 = lVar18 + 0x18;
        lVar20 = lVar20 + 0x20;
      } while ((ulonglong)uVar7 * 0x18 != lVar18);
    }
  }
  else {
    local_218 = 0.0;
    dVar102 = 0.0;
    local_248 = 0.0;
    local_258 = 0.0;
    local_1e8 = 0.0;
    local_288 = 0.0;
    local_228 = 0.0;
    local_278 = 0.0;
    local_2b8 = 0.0;
    dVar95 = 0.0;
    local_208 = 0.0;
    if (0.0 < *param_4) {
      dVar102 = *param_3;
      dVar21 = (double)(__xmm_80000000000000008000000000000000 ^ (ulonglong)dVar102);
      dVar41 = (double)(_UNK_15066df78 ^ (ulonglong)param_3[1]);
      dVar58 = param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
      dVar65 = param_3[3] * _UNK_15076b868;
      dVar93 = dVar102 * param_3[0x14] + param_3[0x12] * dVar58;
      dVar57 = param_3[0x13] * dVar21 - dVar41 * param_3[0x12];
      dVar95 = param_3[0x14] * dVar41 - dVar58 * param_3[0x13];
      dVar93 = dVar93 + dVar93;
      dVar57 = dVar57 + dVar57;
      dVar95 = dVar95 + dVar95;
      dVar87 = param_3[0x16] * dVar21 - dVar41 * param_3[0x15];
      dVar91 = param_3[0x17] * dVar41 - dVar58 * param_3[0x16];
      dVar87 = dVar87 + dVar87;
      dVar91 = dVar91 + dVar91;
      local_208 = dVar57 * dVar65 + param_3[0x14] + (dVar93 * dVar21 - dVar41 * dVar95);
      local_2b8 = (dVar57 * dVar41 - dVar58 * dVar93) + dVar95 * dVar65 + param_3[0x12];
      dVar95 = (dVar95 * dVar58 - dVar21 * dVar57) + dVar93 * dVar65 + param_3[0x13];
      dVar57 = dVar102 * param_3[0x17] + param_3[0x15] * dVar58;
      dVar57 = dVar57 + dVar57;
      auVar14._8_4_ = SUB84(dVar65,0);
      auVar14._0_8_ = dVar65;
      auVar14._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
      local_278 = dVar87 * dVar65 + param_3[0x17] + (dVar57 * dVar21 - dVar41 * dVar91);
      local_288 = (dVar87 * dVar41 - dVar58 * dVar57) + dVar91 * dVar65 + param_3[0x15];
      local_228 = (dVar91 * dVar58 - dVar21 * dVar87) + dVar57 * dVar65 + param_3[0x16];
      dVar57 = dVar102 * param_3[0xe] + param_3[0xc] * dVar58;
      dVar93 = param_3[0xd] * dVar21 - dVar41 * param_3[0xc];
      dVar99 = param_3[0xe] * dVar41 - dVar58 * param_3[0xd];
      dVar57 = dVar57 + dVar57;
      dVar93 = dVar93 + dVar93;
      dVar99 = dVar99 + dVar99;
      dVar91 = dVar102 * param_3[0x11] + param_3[0xf] * dVar58;
      dVar102 = param_3[0x10] * dVar21 - dVar41 * param_3[0xf];
      dVar87 = param_3[0x11] * dVar41 - dVar58 * param_3[0x10];
      dVar102 = dVar102 + dVar102;
      dVar87 = dVar87 + dVar87;
      dVar91 = dVar91 + dVar91;
      dStack_320 = auVar14._8_8_;
      local_1e8 = dVar93 * dVar65 + param_3[0xe] + (dVar57 * dVar21 - dVar41 * dVar99);
      local_258 = (dVar93 * dVar41 - dVar58 * dVar57) + dVar99 * dVar65 + param_3[0xc];
      dVar57 = (dVar99 * dVar58 - dVar21 * dVar93) + dVar57 * dVar65 + param_3[0xd];
      local_248 = dVar102 * dVar65 + param_3[0x11] + (dVar91 * dVar21 - dVar41 * dVar87);
      local_218 = (dVar102 * dVar41 - dVar91 * dVar58) + dVar87 * dVar65 + param_3[0xf];
      dVar102 = (dVar87 * dVar58 - dVar21 * dVar102) + dVar91 * dStack_320 + param_3[0x10];
    }
    uVar7 = *param_2;
    if (0 < (int)uVar7) {
      lVar8 = *(longlong *)(param_2 + 2);
      lVar9 = *(longlong *)(param_2 + 0x24);
      dVar87 = __real_3fe0000000000000 * param_1;
      lVar20 = 0;
      lVar18 = 0;
      lVar19 = 0;
      do {
        if ((*(char *)(lVar9 + lVar19) == '\0') && (*(char *)(lVar8 + lVar19) == '\x04')) {
          lVar10 = *(longlong *)(param_2 + 0xe);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xc) + lVar18);
          uVar15 = puVar1[1];
          uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0xc) + 0x10 + lVar18);
          puVar2 = (undefined8 *)(lVar10 + lVar18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar15;
          *(undefined8 *)(lVar10 + 0x10 + lVar18) = uVar6;
          lVar10 = *(longlong *)(param_2 + 0x12);
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar18);
          uVar15 = puVar1[1];
          uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar18);
          puVar2 = (undefined8 *)(lVar10 + lVar18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar15;
          *(undefined8 *)(lVar10 + 0x10 + lVar18) = uVar6;
          lVar10 = *(longlong *)(param_2 + 8);
          dVar21 = *(double *)(lVar10 + 0x10 + lVar20);
          lVar11 = *(longlong *)(param_2 + 0x16);
          dVar41 = *(double *)(lVar11 + 8 + lVar20);
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1c) + lVar18);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x20) + lVar18);
          pdVar5 = (double *)(*(longlong *)(param_2 + 0x18) + lVar19 * 8);
          local_2d8 = *pdVar5;
          local_2e8 = (*(double *)(*(longlong *)(param_2 + 0x20) + 0x10 + lVar18) +
                      *(double *)(*(longlong *)(param_2 + 0x1c) + 0x10 + lVar18) * param_1) *
                      local_2d8;
          local_2d8 = (*pdVar4 + *pdVar3 * param_1) * local_2d8;
          local_2f8 = (pdVar4[1] + pdVar3[1] * param_1) * *pdVar5;
          if (*(char *)(*(longlong *)(param_2 + 0x26) + lVar19) != '\0') {
            local_2d8 = local_2d8 + *param_5 * param_1;
            local_2f8 = local_2f8 + param_5[1] * param_1;
            local_2e8 = local_2e8 + param_5[2] * param_1;
          }
          lVar12 = *(longlong *)(param_2 + 0x14);
          dVar91 = *(double *)(lVar10 + lVar20);
          dVar58 = *(double *)(lVar10 + 8 + lVar20);
          dVar65 = *(double *)(lVar12 + 0x10 + lVar18);
          pdVar3 = (double *)(lVar10 + 8 + lVar20);
          dVar99 = *pdVar3;
          dVar47 = pdVar3[1];
          pdVar3 = (double *)(lVar12 + 8 + lVar18);
          dVar67 = dVar65 * dVar99 - *pdVar3 * dVar21;
          dVar80 = *(double *)(lVar12 + lVar18) * dVar47 - pdVar3[1] * dVar91;
          dVar81 = *(double *)(lVar12 + 8 + lVar18) * dVar91 - *(double *)(lVar12 + lVar18) * dVar58
          ;
          dVar67 = dVar67 + dVar67;
          dVar80 = dVar80 + dVar80;
          dVar81 = dVar81 + dVar81;
          dVar93 = *(double *)(lVar10 + 0x18 + lVar20);
          pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar18);
          dVar44 = *pdVar3 + (dVar81 * ((double *)(lVar10 + lVar20))[1] - dVar80 * dVar47) +
                             dVar93 * dVar67 + *(double *)(lVar12 + lVar18);
          dVar56 = pdVar3[1] +
                   (dVar21 * dVar67 - dVar81 * dVar91) +
                   dVar93 * dVar80 + ((double *)(lVar12 + lVar18))[1];
          dVar45 = *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar18) +
                   dVar93 * dVar81 + dVar65 +
                   (dVar80 * *(double *)(lVar10 + lVar20) - dVar67 * dVar99);
          pdVar3 = (double *)(lVar11 + 0x10 + lVar20);
          dVar47 = *pdVar3;
          dVar67 = pdVar3[1];
          dVar80 = *(double *)(lVar11 + lVar20);
          dVar81 = ((double *)(lVar11 + lVar20))[1];
          dVar65 = *(double *)(lVar11 + 0x18 + lVar20);
          dVar99 = *(double *)(lVar11 + 0x10 + lVar20);
          dVar106 = dVar21 * dVar41 * ___xmm_3ff0000000000000bff0000000000000 +
                    dVar47 * dVar58 +
                    dVar91 * dVar65 * ___xmm_bff00000000000003ff0000000000000 + dVar93 * dVar80;
          dVar111 = dVar21 * *(double *)(lVar11 + lVar20) * _UNK_15076b868 +
                    dVar67 * dVar58 + dVar91 * dVar99 * _UNK_15076c6f8 + dVar93 * dVar81;
          dVar103 = dVar21 * dVar65 * ___xmm_bff00000000000003ff0000000000000 +
                    ((dVar41 * dVar91 * ___xmm_bff00000000000003ff0000000000000 + dVar93 * dVar47) -
                    dVar58 * dVar80);
          dVar105 = dVar21 * dVar99 * _UNK_15076c6f8 +
                    ((*(double *)(lVar11 + lVar20) * dVar91 * _UNK_15076c6f8 + dVar93 * dVar67) -
                    dVar58 * dVar81);
          lVar10 = *(longlong *)(param_2 + 0x1a);
          dVar41 = dVar111 + dVar111;
          dVar91 = dVar103 + dVar103;
          dVar21 = dVar106 * (dVar106 + dVar106);
          dVar65 = dVar106 * dVar41;
          dVar93 = (dVar106 + dVar106) * dVar105;
          dVar68 = dVar105 * dVar91 + dVar65;
          dVar88 = dVar93 + dVar111 * dVar91;
          dVar92 = dVar41 * dVar105 + dVar91 * dVar106;
          dVar93 = dVar111 * dVar91 - dVar93;
          dVar99 = dVar91 * dVar106 - dVar41 * dVar105;
          dVar58 = dVar65 - dVar105 * dVar91;
          dVar65 = dVar65 - dVar105 * (dVar105 + dVar105);
          dVar46 = __real_3ff0000000000000 - (dVar41 * dVar111 + dVar21);
          auVar96._0_8_ =
               ___xmm_3ff00000000000003ff0000000000000 - (dVar91 * dVar103 + dVar41 * dVar111);
          auVar96._8_8_ = _UNK_150689688 - (dVar91 * dVar103 + dVar21);
          pdVar3 = (double *)(lVar10 + lVar20 * 4);
          dVar47 = *pdVar3;
          dVar67 = pdVar3[1];
          dVar21 = *(double *)(lVar10 + 0x10 + lVar20 * 4);
          pdVar3 = (double *)(lVar10 + 0x20 + lVar20 * 4);
          dVar80 = *pdVar3;
          dVar81 = pdVar3[1];
          dVar41 = *(double *)(lVar10 + 0x30 + lVar20 * 4);
          pdVar3 = (double *)(lVar10 + 0x40 + lVar20 * 4);
          dVar23 = *pdVar3;
          dVar43 = pdVar3[1];
          dVar22 = dVar23 * dVar92 + dVar58 * dVar80 + auVar96._0_8_ * dVar47;
          dVar42 = dVar43 * dVar92 + dVar58 * dVar81 + auVar96._0_8_ * dVar67;
          dVar91 = *(double *)(lVar10 + 0x50 + lVar20 * 4);
          dVar94 = dVar92 * dVar91 + dVar41 * dVar58 + dVar21 * auVar96._0_8_;
          dVar59 = dVar93 * dVar23 + auVar96._8_8_ * dVar80 + dVar68 * dVar47;
          dVar66 = dVar93 * dVar43 + auVar96._8_8_ * dVar81 + dVar68 * dVar67;
          dVar112 = dVar91 * dVar93 + dVar41 * auVar96._8_8_ + dVar21 * dVar68;
          dVar47 = dVar46 * dVar23 + dVar88 * dVar80 + dVar47 * dVar99;
          dVar67 = dVar46 * dVar43 + dVar88 * dVar81 + dVar67 * dVar99;
          dVar80 = dVar91 * dVar46 + dVar41 * dVar88 + dVar21 * dVar99;
          auVar13._8_4_ = SUB84(dVar65,0);
          auVar13._0_8_ = dVar58;
          auVar13._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
          auVar97 = blendpd(auVar96,auVar13,1);
          dVar91 = auVar97._0_8_;
          dVar58 = auVar97._8_8_;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x1e) + lVar18);
          pdVar4 = (double *)(*(longlong *)(param_2 + 0x22) + lVar18);
          dVar41 = *pdVar4 + *pdVar3 * param_1;
          dVar65 = pdVar4[1] + pdVar3[1] * param_1;
          dVar21 = *(double *)(*(longlong *)(param_2 + 0x22) + 0x10 + lVar18) +
                   *(double *)(*(longlong *)(param_2 + 0x1e) + 0x10 + lVar18) * param_1;
          dVar91 = dVar21 * (dVar80 * dVar92 + dVar91 * dVar67 + dVar47 * auVar96._0_8_) +
                   (dVar112 * dVar92 + dVar91 * dVar66 + dVar59 * auVar96._0_8_) * dVar65 +
                   dVar41 * (dVar94 * dVar92 + dVar91 * dVar42 + dVar22 * auVar96._0_8_);
          dVar58 = dVar21 * (dVar80 * dVar93 + dVar58 * dVar67 + dVar47 * dVar68) +
                   (dVar112 * dVar93 + dVar58 * dVar66 + dVar59 * dVar68) * dVar65 +
                   dVar41 * (dVar94 * dVar93 + dVar58 * dVar42 + dVar22 * dVar68);
          dVar41 = dVar21 * (dVar80 * dVar46 + dVar67 * dVar88 + dVar99 * dVar47) +
                   dVar65 * (dVar112 * dVar46 + dVar66 * dVar88 + dVar99 * dVar59) +
                   (dVar94 * dVar46 + dVar42 * dVar88 + dVar99 * dVar22) * dVar41;
          dVar21 = *param_4;
          lVar10 = *(longlong *)(param_2 + 0xc);
          if (dVar21 <= __real_0000000000000000) {
            dVar65 = *(double *)(lVar10 + lVar18);
            dVar99 = *(double *)(lVar10 + 8 + lVar18);
            dVar93 = *(double *)(lVar10 + 0x10 + lVar18);
            dVar21 = 0.0;
            dVar80 = 0.0;
            dVar23 = 0.0;
            dVar81 = 0.0;
            dVar67 = 0.0;
            dVar47 = 0.0;
          }
          else {
            dVar47 = param_4[1];
            dVar23 = param_4[2] + param_4[2];
            dVar65 = *(double *)(lVar10 + lVar18);
            dVar93 = *(double *)(lVar10 + 0x10 + lVar18);
            pdVar3 = (double *)(lVar10 + 8 + lVar18);
            dVar67 = param_4[3];
            dVar81 = local_288 * dVar56 - local_228 * dVar44;
            dVar43 = local_228 * dVar45 - local_278 * dVar56;
            dVar22 = local_278 * dVar44 - local_288 * dVar45;
            dVar80 = param_4[4];
            dVar99 = *(double *)(lVar10 + 8 + lVar18);
            local_2d8 = local_2d8 -
                        (param_4[8] * local_2b8 + dVar47 * local_258 +
                         dVar23 * (dVar93 * local_228 - *pdVar3 * local_278) +
                         (dVar81 * local_228 - dVar22 * local_278) * dVar67 +
                        (dVar45 * dVar102 - local_248 * dVar56) * dVar80) * dVar21 * param_1;
            local_2f8 = local_2f8 -
                        (param_4[9] * dVar95 + dVar47 * dVar57 +
                         dVar23 * (dVar65 * local_278 - pdVar3[1] * local_288) +
                         (dVar43 * local_278 - local_288 * dVar81) * dVar67 +
                        (local_248 * dVar44 - local_218 * dVar45) * dVar80) * dVar21 * param_1;
            dVar81 = param_4[5];
            local_2e8 = local_2e8 -
                        ((dVar56 * local_218 - dVar102 * dVar44) * dVar80 +
                        (local_288 * dVar99 - local_228 * dVar65) * dVar23 +
                        dVar47 * local_1e8 + param_4[10] * local_208 +
                        (dVar22 * local_288 - dVar43 * local_228) * dVar67) * dVar21 * param_1;
            dVar91 = dVar91 - dVar81 * local_218 * dVar21 * param_1;
            dVar58 = dVar58 - dVar81 * dVar102 * dVar21 * param_1;
            dVar41 = dVar41 - dVar81 * local_248 * dVar21 * param_1;
            dVar47 = param_4[6] *
                     (double)((ulonglong)dVar21 ^ __xmm_80000000000000008000000000000000);
            dVar81 = dVar47 * local_2b8;
            dVar67 = dVar47 * dVar95;
            dVar47 = dVar47 * local_208;
            dVar23 = (double)((ulonglong)dVar21 ^ __xmm_80000000000000008000000000000000) *
                     param_4[7];
            dVar21 = dVar23 * local_288;
            dVar80 = dVar23 * local_228;
            dVar23 = dVar23 * local_278;
          }
          dVar22 = *(double *)(*(longlong *)(param_2 + 0x28) + lVar19 * 8) * param_1;
          dVar43 = __real_3ff0000000000000;
          if (dVar22 <= __real_3ff0000000000000) {
            dVar43 = dVar22;
          }
          dVar42 = *(double *)(*(longlong *)(param_2 + 0x2a) + lVar19 * 8) * param_1;
          dVar22 = __real_3ff0000000000000;
          if (dVar42 <= __real_3ff0000000000000) {
            dVar22 = dVar42;
          }
          dVar81 = dVar43 * (dVar81 - (dVar65 + local_2d8)) + dVar65 + local_2d8;
          dVar67 = dVar43 * (dVar67 - (dVar99 + local_2f8)) + dVar99 + local_2f8;
          dVar65 = (dVar47 - (dVar93 + local_2e8)) * dVar43 + dVar93 + local_2e8;
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x10) + lVar18);
          dVar91 = *pdVar3 + dVar91;
          dVar58 = pdVar3[1] + dVar58;
          dVar41 = dVar41 + *(double *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar18);
          dVar41 = (dVar23 - dVar41) * dVar22 + dVar41;
          dVar91 = dVar22 * (dVar21 - dVar91) + dVar91;
          dVar58 = dVar22 * (dVar80 - dVar58) + dVar58;
          dVar21 = (dVar111 * dVar41 * ___xmm_3ff0000000000000bff0000000000000 +
                   dVar103 * dVar58 +
                   dVar105 * dVar91 * ___xmm_bff00000000000003ff0000000000000 + dVar106 * 0.0) *
                   dVar87 + dVar106;
          dVar93 = (dVar106 * dVar41 * _UNK_15076b868 +
                   dVar105 * dVar58 + dVar103 * dVar91 * _UNK_15076c6f8 + dVar111 * 0.0) * dVar87 +
                   dVar111;
          dVar99 = (dVar105 * dVar41 * ___xmm_bff00000000000003ff0000000000000 +
                   ((dVar91 * dVar111 * ___xmm_bff00000000000003ff0000000000000 + dVar103 * 0.0) -
                   dVar58 * dVar106)) * dVar87 + dVar103;
          dVar105 = (dVar103 * dVar41 * _UNK_15076c6f8 +
                    ((dVar91 * dVar106 * _UNK_15076c6f8 + dVar105 * 0.0) - dVar58 * dVar111)) *
                    dVar87 + dVar105;
          dVar47 = dVar21 * dVar21 + dVar99 * dVar99;
          dVar80 = dVar93 * dVar93 + dVar105 * dVar105;
          auVar89._0_8_ = dVar80 + dVar47;
          auVar89._8_8_ = dVar47 + dVar80;
          auVar24._0_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <= auVar89._0_8_);
          auVar24._8_4_ = -(uint)(_UNK_150aa88b8 <= auVar89._8_8_);
          auVar24._4_4_ = auVar24._0_4_;
          auVar24._12_4_ = auVar24._8_4_;
          auVar82 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar24);
          auVar97 = sqrtpd(auVar24,auVar89);
          auVar16._8_8_ = _UNK_150689688;
          auVar16._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
          auVar97 = divpd(auVar16,auVar97);
          dVar22 = (double)((ulonglong)(auVar97._0_8_ * dVar21) & auVar82._0_8_);
          dVar42 = (double)((ulonglong)(auVar97._8_8_ * dVar93) & auVar82._8_8_);
          auVar69._0_8_ = (double)((ulonglong)(dVar99 * auVar97._0_8_) & auVar82._0_8_);
          dVar47 = (double)((ulonglong)(dVar105 * auVar97._8_8_) & auVar82._8_8_);
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + lVar20);
          dVar21 = *pdVar3;
          dVar93 = pdVar3[1];
          pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + 0x10 + lVar20);
          dVar99 = *pdVar3 * ___xmm_3ff0000000000000bff0000000000000;
          dVar80 = pdVar3[1] * _UNK_15076b868;
          auVar98._8_4_ = SUB84(dVar47,0);
          auVar98._0_8_ = dVar47;
          auVar98._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          auVar90._8_4_ = SUB84(dVar42,0);
          auVar90._12_4_ = (undefined4)((ulonglong)dVar42 >> 0x20);
          auVar100._8_4_ = SUB84(dVar22,0);
          auVar100._0_8_ = dVar22;
          auVar100._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          auVar90._0_8_ = dVar42;
          auVar69._8_4_ = SUB84(auVar69._0_8_,0);
          auVar69._12_4_ = (int)((ulonglong)auVar69._0_8_ >> 0x20);
          dVar23 = dVar80 * auVar69._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                   dVar21 * dVar42 +
                   (dVar99 * dVar47 - dVar22 * dVar93 * ___xmm_bff00000000000003ff0000000000000);
          dVar43 = dVar99 * auVar69._8_8_ * _UNK_15076c6f8 +
                   dVar93 * auVar90._8_8_ +
                   (dVar80 * auVar98._8_8_ - auVar100._8_8_ * dVar21 * _UNK_15076c6f8);
          dVar47 = (dVar99 * dVar42 +
                   (dVar80 * dVar22 * ___xmm_bff00000000000003ff0000000000000 - dVar47 * dVar21)) -
                   dVar93 * auVar69._0_8_ * ___xmm_3ff0000000000000bff0000000000000;
          dVar80 = (dVar80 * auVar90._8_8_ +
                   (dVar99 * auVar100._8_8_ * _UNK_15076c6f8 - auVar98._8_8_ * dVar93)) -
                   dVar21 * auVar69._8_8_ * _UNK_15076b868;
          lVar10 = *(longlong *)(param_2 + 0x14);
          dVar21 = *(double *)(lVar10 + 0x10 + lVar18);
          dVar93 = *(double *)(lVar10 + lVar18);
          dVar99 = ((double *)(lVar10 + lVar18))[1];
          pdVar3 = (double *)(lVar10 + 8 + lVar18);
          dVar42 = *pdVar3 * dVar47 - dVar80 * dVar93;
          dVar46 = pdVar3[1] * dVar80 - dVar23 * dVar99;
          dVar22 = *(double *)(lVar10 + lVar18) * dVar23 - dVar21 * dVar47;
          dVar22 = dVar22 + dVar22;
          dVar42 = dVar42 + dVar42;
          dVar46 = dVar46 + dVar46;
          lVar10 = *(longlong *)(param_2 + 6);
          *(double *)(lVar10 + lVar18) =
               (dVar44 + param_1 * dVar81) -
               ((dVar42 * dVar80 - dVar23 * dVar22) + dVar46 * dVar43 + dVar93);
          ((double *)(lVar10 + lVar18))[1] =
               (dVar56 + param_1 * dVar67) -
               ((dVar46 * dVar23 - dVar47 * dVar42) + dVar22 * dVar43 + dVar99);
          *(double *)(lVar10 + 0x10 + lVar18) =
               (dVar45 + param_1 * dVar65) -
               (dVar43 * dVar42 + dVar21 + (dVar22 * dVar47 - dVar80 * dVar46));
          lVar11 = *(longlong *)(param_2 + 10);
          *(double *)(lVar11 + lVar20) = dVar47;
          ((double *)(lVar11 + lVar20))[1] = dVar80;
          pdVar3 = (double *)(lVar11 + 0x10 + lVar20);
          *pdVar3 = dVar23;
          pdVar3[1] = dVar43;
          lVar12 = *(longlong *)(param_2 + 0xc);
          pdVar3 = (double *)(lVar12 + lVar18);
          *pdVar3 = dVar81;
          pdVar3[1] = dVar67;
          *(double *)(lVar12 + 0x10 + lVar18) = dVar65;
          lVar12 = *(longlong *)(param_2 + 0x10);
          pdVar3 = (double *)(lVar12 + lVar18);
          *pdVar3 = dVar91;
          pdVar3[1] = dVar58;
          *(double *)(lVar12 + 0x10 + lVar18) = dVar41;
          lVar12 = *(longlong *)(param_2 + 0x20);
          puVar1 = (undefined8 *)(lVar12 + lVar18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar18) = 0;
          lVar12 = *(longlong *)(param_2 + 0x22);
          puVar1 = (undefined8 *)(lVar12 + lVar18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar12 + 0x10 + lVar18) = 0;
          if (*(char *)(*(longlong *)(param_2 + 0x2c) + lVar19) != '\0') {
            lVar12 = *(longlong *)(param_2 + 0x2e);
            dVar21 = *(double *)(lVar12 + 0x10 + lVar18 * 2);
            pdVar3 = (double *)(lVar12 + lVar18 * 2);
            dVar47 = *pdVar3;
            dVar67 = pdVar3[1];
            pdVar3 = (double *)(lVar12 + 8 + lVar18 * 2);
            pdVar4 = (double *)(lVar12 + 0x18 + lVar18 * 2);
            dVar80 = *pdVar4;
            dVar81 = pdVar4[1];
            dVar41 = *(double *)(lVar11 + 0x10 + lVar20);
            dVar91 = *(double *)(lVar11 + 0x18 + lVar20);
            dVar23 = *(double *)(lVar11 + lVar20);
            dVar43 = ((double *)(lVar11 + lVar20))[1];
            pdVar4 = (double *)(lVar11 + 8 + lVar20);
            dVar22 = *pdVar4;
            dVar42 = pdVar4[1];
            dVar44 = *(double *)(lVar11 + 0x10 + lVar20);
            dVar58 = *(double *)(lVar11 + lVar20);
            dVar88 = *(double *)(lVar12 + lVar18 * 2) * dVar44 -
                     *(double *)(lVar12 + 0x10 + lVar18 * 2) * dVar58;
            dVar99 = *pdVar3 * dVar23 - dVar22 * dVar47;
            dVar59 = pdVar3[1] * dVar43 - dVar42 * dVar67;
            dVar88 = dVar88 + dVar88;
            dVar99 = dVar99 + dVar99;
            dVar59 = dVar59 + dVar59;
            dVar92 = dVar99 * dVar43 - dVar88 * dVar42;
            pdVar3 = (double *)(lVar12 + 0x20 + lVar18 * 2);
            dVar56 = *(double *)(lVar12 + 0x18 + lVar18 * 2) * dVar44 -
                     *(double *)(lVar12 + 0x28 + lVar18 * 2) * dVar58;
            dVar68 = *pdVar3 * dVar23 - dVar22 * dVar80;
            dVar105 = pdVar3[1] * dVar43 - dVar42 * dVar81;
            dVar56 = dVar56 + dVar56;
            dVar68 = dVar68 + dVar68;
            dVar105 = dVar105 + dVar105;
            dVar66 = dVar68 * dVar43 - dVar56 * dVar42;
            dVar65 = *(double *)(lVar12 + 0x28 + lVar18 * 2);
            dVar45 = *(double *)(lVar10 + lVar18);
            dVar46 = ((double *)(lVar10 + lVar18))[1];
            auVar107._0_8_ = dVar92 + dVar91 * dVar59 + dVar47 + dVar45;
            auVar107._8_8_ = (dVar59 * dVar41 - dVar58 * dVar99) + dVar91 * dVar88 + dVar67 + dVar46
            ;
            auVar48._0_8_ = dVar66 + dVar91 * dVar105 + dVar80 + dVar45;
            auVar48._8_8_ = (dVar105 * dVar41 - dVar58 * dVar68) + dVar91 * dVar56 + dVar81 + dVar46
            ;
            auVar25._8_8_ = auVar107._8_8_;
            auVar25._0_8_ = auVar107._0_8_;
            auVar97 = minpd(auVar25,auVar48);
            auVar108 = maxpd(auVar107,auVar48);
            dVar93 = *(double *)(lVar10 + 0x10 + lVar18);
            auVar60._0_8_ = dVar91 * dVar99 + dVar21 + (dVar88 * dVar23 - dVar59 * dVar22) + dVar93;
            auVar60._8_8_ = dVar91 * dVar59 + 0.0 + dVar92 + 0.0;
            auVar70._0_8_ = dVar91 * dVar68 + dVar65 + (dVar56 * dVar23 - dVar105 * dVar22) + dVar93
            ;
            auVar70._8_8_ = dVar91 * dVar105 + 0.0 + dVar66 + 0.0;
            auVar26._8_8_ = auVar60._8_8_;
            auVar26._0_8_ = auVar60._0_8_;
            auVar82 = minpd(auVar26,auVar70);
            auVar61 = maxpd(auVar60,auVar70);
            dVar103 = dVar80 - dVar47;
            dVar106 = dVar81 - dVar67;
            dVar66 = dVar65 - dVar21;
            dVar92 = dVar21 + dVar66;
            dVar99 = dVar65 - dVar66;
            dVar88 = dVar47 + dVar103 * __real_3ff0000000000000;
            dVar94 = dVar67 + dVar106 * 0.0;
            dVar21 = dVar21 + dVar66 * __real_0000000000000000;
            dVar68 = dVar94 * dVar23 - dVar22 * dVar88;
            dVar105 = dVar21 * dVar43 - dVar42 * dVar94;
            dVar56 = dVar88 * dVar44 - dVar21 * dVar58;
            dVar56 = dVar56 + dVar56;
            dVar68 = dVar68 + dVar68;
            dVar105 = dVar105 + dVar105;
            dVar59 = dVar68 * dVar43 - dVar56 * dVar42;
            auVar27._0_8_ = dVar59 + dVar91 * dVar105 + dVar88 + dVar45;
            auVar27._8_8_ = (dVar105 * dVar41 - dVar58 * dVar68) + dVar91 * dVar56 + dVar94 + dVar46
            ;
            auVar97 = minpd(auVar97,auVar27);
            auVar108 = maxpd(auVar108,auVar27);
            auVar49._0_8_ = dVar91 * dVar68 + dVar21 + (dVar56 * dVar23 - dVar105 * dVar22) + dVar93
            ;
            auVar49._8_8_ = dVar91 * dVar105 + 0.0 + dVar59 + 0.0;
            auVar82 = minpd(auVar82,auVar49);
            auVar113 = maxpd(auVar61,auVar49);
            dVar56 = dVar80 - dVar103 * __real_3ff0000000000000;
            dVar59 = dVar81 - dVar106 * 0.0;
            dVar65 = dVar65 - dVar66 * __real_0000000000000000;
            dVar66 = dVar59 * dVar23 - dVar22 * dVar56;
            dVar68 = dVar65 * dVar43 - dVar42 * dVar59;
            dVar105 = dVar56 * dVar44 - dVar65 * dVar58;
            dVar105 = dVar105 + dVar105;
            dVar66 = dVar66 + dVar66;
            dVar68 = dVar68 + dVar68;
            dVar88 = dVar66 * dVar43 - dVar105 * dVar42;
            auVar71._0_8_ = dVar88 + dVar91 * dVar68 + dVar56 + dVar45;
            auVar71._8_8_ = (dVar68 * dVar41 - dVar58 * dVar66) + dVar91 * dVar105 + dVar59 + dVar46
            ;
            auVar97 = minpd(auVar97,auVar71);
            auVar61 = maxpd(auVar108,auVar71);
            auVar28._0_8_ = dVar91 * dVar66 + dVar65 + (dVar105 * dVar23 - dVar68 * dVar22) + dVar93
            ;
            auVar28._8_8_ = dVar91 * dVar68 + 0.0 + dVar88 + 0.0;
            auVar82 = minpd(auVar82,auVar28);
            auVar108 = maxpd(auVar113,auVar28);
            dVar56 = dVar47 + dVar103 * 0.0;
            dVar59 = dVar67 + __real_3ff0000000000000 * dVar106;
            dVar66 = dVar59 * dVar23 - dVar22 * dVar56;
            dVar68 = dVar21 * dVar43 - dVar42 * dVar59;
            dVar105 = dVar56 * dVar44 - dVar21 * dVar58;
            dVar105 = dVar105 + dVar105;
            dVar66 = dVar66 + dVar66;
            dVar68 = dVar68 + dVar68;
            dVar88 = dVar66 * dVar43 - dVar105 * dVar42;
            auVar72._0_8_ = dVar88 + dVar91 * dVar68 + dVar56 + dVar45;
            auVar72._8_8_ = (dVar68 * dVar41 - dVar58 * dVar66) + dVar91 * dVar105 + dVar59 + dVar46
            ;
            auVar97 = minpd(auVar97,auVar72);
            auVar61 = maxpd(auVar61,auVar72);
            auVar29._0_8_ = dVar91 * dVar66 + dVar21 + (dVar105 * dVar23 - dVar68 * dVar22) + dVar93
            ;
            auVar29._8_8_ = dVar91 * dVar68 + 0.0 + dVar88 + 0.0;
            auVar82 = minpd(auVar82,auVar29);
            auVar108 = maxpd(auVar108,auVar29);
            dVar21 = dVar80 - dVar103 * 0.0;
            dVar56 = dVar81 - __real_3ff0000000000000 * dVar106;
            dVar59 = dVar56 * dVar23 - dVar22 * dVar21;
            dVar66 = dVar65 * dVar43 - dVar42 * dVar56;
            dVar68 = dVar21 * dVar44 - dVar65 * dVar58;
            dVar68 = dVar68 + dVar68;
            dVar59 = dVar59 + dVar59;
            dVar66 = dVar66 + dVar66;
            dVar105 = dVar59 * dVar43 - dVar68 * dVar42;
            auVar73._0_8_ = dVar105 + dVar91 * dVar66 + dVar21 + dVar45;
            auVar73._8_8_ = (dVar66 * dVar41 - dVar58 * dVar59) + dVar91 * dVar68 + dVar56 + dVar46;
            auVar97 = minpd(auVar97,auVar73);
            auVar61 = maxpd(auVar61,auVar73);
            auVar30._0_8_ = dVar91 * dVar59 + dVar65 + (dVar68 * dVar23 - dVar66 * dVar22) + dVar93;
            auVar30._8_8_ = dVar91 * dVar66 + 0.0 + dVar105 + 0.0;
            auVar82 = minpd(auVar82,auVar30);
            auVar108 = maxpd(auVar108,auVar30);
            dVar47 = dVar47 + dVar103 * 0.0;
            dVar67 = dVar67 + dVar106 * 0.0;
            dVar56 = dVar47 * dVar44 - dVar92 * dVar58;
            dVar21 = dVar67 * dVar23 - dVar22 * dVar47;
            dVar65 = dVar92 * dVar43 - dVar42 * dVar67;
            dVar56 = dVar56 + dVar56;
            dVar21 = dVar21 + dVar21;
            dVar65 = dVar65 + dVar65;
            dVar59 = dVar21 * dVar43 - dVar56 * dVar42;
            auVar50._0_8_ = dVar59 + dVar91 * dVar65 + dVar47 + dVar45;
            auVar50._8_8_ = (dVar65 * dVar41 - dVar58 * dVar21) + dVar91 * dVar56 + dVar67 + dVar46;
            auVar97 = minpd(auVar97,auVar50);
            auVar61 = maxpd(auVar61,auVar50);
            auVar83._0_8_ = dVar91 * dVar21 + dVar92 + (dVar56 * dVar23 - dVar65 * dVar22) + dVar93;
            auVar83._8_8_ = dVar91 * dVar65 + 0.0 + dVar59 + 0.0;
            auVar82 = minpd(auVar82,auVar83);
            auVar108 = maxpd(auVar108,auVar83);
            dVar80 = dVar80 - dVar103 * 0.0;
            dVar81 = dVar81 - dVar106 * 0.0;
            dVar21 = dVar80 * dVar44 - dVar99 * dVar58;
            dVar47 = dVar81 * dVar23 - dVar22 * dVar80;
            dVar67 = dVar99 * dVar43 - dVar42 * dVar81;
            dVar21 = dVar21 + dVar21;
            dVar47 = dVar47 + dVar47;
            dVar67 = dVar67 + dVar67;
            dVar65 = dVar47 * dVar43 - dVar21 * dVar42;
            auVar51._0_8_ = dVar65 + dVar91 * dVar67 + dVar80 + dVar45;
            auVar51._8_8_ = (dVar67 * dVar41 - dVar58 * dVar47) + dVar91 * dVar21 + dVar81 + dVar46;
            auVar113 = minpd(auVar97,auVar51);
            auVar109 = maxpd(auVar61,auVar51);
            auVar31._0_8_ = dVar91 * dVar47 + dVar99 + (dVar21 * dVar23 - dVar67 * dVar22) + dVar93;
            auVar31._8_8_ = dVar91 * dVar67 + 0.0 + dVar65 + 0.0;
            auVar104 = minpd(auVar82,auVar31);
            auVar114 = maxpd(auVar108,auVar31);
            dVar21 = (auVar114._0_8_ - auVar104._0_8_) * param_6;
            dVar41 = (auVar109._0_8_ - auVar113._0_8_) * param_6;
            dVar91 = (auVar109._8_8_ - auVar113._8_8_) * param_6;
            auVar32._0_8_ = *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar18) - dVar93;
            auVar32._8_8_ = 0;
            pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar18);
            auVar62._0_8_ = *pdVar3 - dVar45;
            auVar62._8_8_ = pdVar3[1] - dVar46;
            auVar74._8_8_ = auVar62._8_8_;
            auVar74._0_8_ = auVar62._0_8_;
            auVar97 = ZEXT816(0);
            auVar61 = minpd(auVar74,auVar97);
            auVar84._8_8_ = 0;
            auVar84._0_8_ = auVar32._0_8_;
            auVar108 = minpd(auVar84,auVar97);
            auVar82 = maxpd(auVar62,auVar97);
            auVar97 = maxpd(auVar32,auVar97);
            lVar10 = *(longlong *)(param_2 + 0x30);
            pdVar3 = (double *)(lVar10 + lVar18 * 2);
            *pdVar3 = (auVar61._0_8_ + (auVar113._0_8_ - dVar41)) - param_7;
            pdVar3[1] = (auVar61._8_8_ + (auVar113._8_8_ - dVar91)) - param_7;
            pdVar3 = (double *)(lVar10 + 0x10 + lVar18 * 2);
            *pdVar3 = (auVar108._0_8_ + (auVar104._0_8_ - dVar21)) - param_7;
            pdVar3[1] = auVar82._0_8_ + dVar41 + auVar109._0_8_ + param_7;
            pdVar3 = (double *)(lVar10 + 0x20 + lVar18 * 2);
            *pdVar3 = auVar82._8_8_ + dVar91 + auVar109._8_8_ + param_7;
            pdVar3[1] = auVar97._0_8_ + dVar21 + auVar114._0_8_ + param_7;
          }
        }
        lVar19 = lVar19 + 1;
        lVar18 = lVar18 + 0x18;
        lVar20 = lVar20 + 0x20;
      } while ((ulonglong)uVar7 * 0x18 != lVar18);
    }
  }
  return;
}

// SizeofFTransform_sse4 @ 1409daef0

undefined8 SizeofFTransform_sse4(void)

{
  return 0x60;
}

// SizeofFAABB_sse4 @ 1409daf00

undefined8 SizeofFAABB_sse4(void)

{
  return 0x30;
}

// SizeofFPBDRigidArrays_sse4 @ 1409daf10

undefined8 SizeofFPBDRigidArrays_sse4(void)

{
  return 200;
}

// SizeofFSimulationSpace_sse4 @ 1409daf20

undefined8 SizeofFSimulationSpace_sse4(void)

{
  return 0xc0;
}

// SizeofFSimulationSpaceSettings_sse4 @ 1409daf30

undefined8 SizeofFSimulationSpaceSettings_sse4(void)

{
  return 0x58;
}

// ValueOfEObjectStateTypeDynamic_sse4 @ 1409daf40

undefined8 ValueOfEObjectStateTypeDynamic_sse4(void)

{
  return 4;
}

// MinEvolutionIntegrate_sse4 @ 1409daf50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MinEvolutionIntegrate_sse4
               (double param_1,uint *param_2,double *param_3,double *param_4,double *param_5,
               double param_6,double param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar30;
  double dVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auVar66 [16];
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar78;
  double dVar79;
  double dVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar81;
  double dVar82;
  double dVar84;
  undefined1 auVar83 [16];
  double local_348;
  double local_2f8;
  double local_2e8;
  double local_2a8;
  double local_298;
  double local_268;
  double local_258;
  double local_238;
  double local_228;
  double local_218;
  double local_208;
  double local_1f8;
  
  local_228 = 0.0;
  dVar78 = 0.0;
  local_258 = 0.0;
  local_268 = 0.0;
  dVar54 = 0.0;
  local_208 = 0.0;
  local_218 = 0.0;
  local_238 = 0.0;
  local_298 = 0.0;
  local_2a8 = 0.0;
  dVar72 = 0.0;
  local_1f8 = 0.0;
  if (0.0 < *param_4) {
    dVar20 = *param_3;
    dVar19 = (double)(__xmm_80000000000000008000000000000000 ^ (ulonglong)dVar20);
    dVar30 = (double)(_UNK_15066df78 ^ (ulonglong)param_3[1]);
    dVar37 = param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
    dVar42 = param_3[3] * _UNK_15076b868;
    dVar54 = dVar20 * param_3[0x14] + param_3[0x12] * dVar37;
    dVar72 = param_3[0x13] * dVar19 - dVar30 * param_3[0x12];
    dVar78 = param_3[0x14] * dVar30 - dVar37 * param_3[0x13];
    dVar54 = dVar54 + dVar54;
    dVar72 = dVar72 + dVar72;
    dVar78 = dVar78 + dVar78;
    dVar81 = param_3[0x16] * dVar19 - dVar30 * param_3[0x15];
    dVar84 = param_3[0x17] * dVar30 - dVar37 * param_3[0x16];
    dVar81 = dVar81 + dVar81;
    dVar84 = dVar84 + dVar84;
    local_1f8 = dVar72 * dVar42 + param_3[0x14] + (dVar54 * dVar19 - dVar30 * dVar78);
    local_2a8 = (dVar72 * dVar30 - dVar37 * dVar54) + dVar78 * dVar42 + param_3[0x12];
    dVar72 = (dVar78 * dVar37 - dVar19 * dVar72) + dVar54 * dVar42 + param_3[0x13];
    dVar54 = dVar20 * param_3[0x17] + param_3[0x15] * dVar37;
    dVar54 = dVar54 + dVar54;
    local_298 = dVar81 * dVar42 + param_3[0x17] + (dVar54 * dVar19 - dVar30 * dVar84);
    local_218 = (dVar81 * dVar30 - dVar37 * dVar54) + dVar84 * dVar42 + param_3[0x15];
    local_238 = (dVar84 * dVar37 - dVar19 * dVar81) + dVar54 * dVar42 + param_3[0x16];
    dVar62 = dVar20 * param_3[0xe] + param_3[0xc] * dVar37;
    dVar54 = param_3[0xd] * dVar19 - dVar30 * param_3[0xc];
    dVar78 = param_3[0xe] * dVar30 - dVar37 * param_3[0xd];
    dVar62 = dVar62 + dVar62;
    dVar54 = dVar54 + dVar54;
    dVar78 = dVar78 + dVar78;
    dVar84 = dVar20 * param_3[0x11] + param_3[0xf] * dVar37;
    dVar20 = param_3[0x10] * dVar19 - dVar30 * param_3[0xf];
    dVar81 = param_3[0x11] * dVar30 - dVar37 * param_3[0x10];
    dVar20 = dVar20 + dVar20;
    dVar81 = dVar81 + dVar81;
    dVar84 = dVar84 + dVar84;
    local_208 = dVar54 * dVar42 + param_3[0xe] + (dVar62 * dVar19 - dVar30 * dVar78);
    local_268 = (dVar54 * dVar30 - dVar37 * dVar62) + dVar78 * dVar42 + param_3[0xc];
    dVar54 = (dVar78 * dVar37 - dVar19 * dVar54) + dVar62 * dVar42 + param_3[0xd];
    local_258 = dVar20 * dVar42 + param_3[0x11] + (dVar84 * dVar19 - dVar30 * dVar81);
    local_228 = (dVar20 * dVar30 - dVar84 * dVar37) + dVar81 * dVar42 + param_3[0xf];
    dVar78 = (dVar81 * dVar37 - dVar19 * dVar20) + dVar84 * dVar42 + param_3[0x10];
  }
  uVar7 = *param_2;
  if (0 < (int)uVar7) {
    lVar8 = *(longlong *)(param_2 + 2);
    lVar9 = *(longlong *)(param_2 + 0x24);
    dVar20 = __real_3fe0000000000000 * param_1;
    lVar18 = 0;
    lVar16 = 0;
    lVar17 = 0;
    do {
      if ((*(char *)(lVar9 + lVar17) == '\0') && (*(char *)(lVar8 + lVar17) == '\x04')) {
        lVar10 = *(longlong *)(param_2 + 0xe);
        puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xc) + lVar16);
        uVar15 = puVar1[1];
        uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0xc) + 0x10 + lVar16);
        puVar2 = (undefined8 *)(lVar10 + lVar16);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        *(undefined8 *)(lVar10 + 0x10 + lVar16) = uVar6;
        lVar10 = *(longlong *)(param_2 + 0x12);
        puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar16);
        uVar15 = puVar1[1];
        uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar16);
        puVar2 = (undefined8 *)(lVar10 + lVar16);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        *(undefined8 *)(lVar10 + 0x10 + lVar16) = uVar6;
        lVar10 = *(longlong *)(param_2 + 8);
        dVar81 = *(double *)(lVar10 + 0x10 + lVar18);
        lVar11 = *(longlong *)(param_2 + 0x16);
        dVar19 = *(double *)(lVar11 + 8 + lVar18);
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x1c) + lVar16);
        pdVar4 = (double *)(*(longlong *)(param_2 + 0x20) + lVar16);
        pdVar5 = (double *)(*(longlong *)(param_2 + 0x18) + lVar17 * 8);
        local_348 = *pdVar5;
        local_2e8 = (*(double *)(*(longlong *)(param_2 + 0x20) + 0x10 + lVar16) +
                    *(double *)(*(longlong *)(param_2 + 0x1c) + 0x10 + lVar16) * param_1) *
                    local_348;
        local_348 = (*pdVar4 + *pdVar3 * param_1) * local_348;
        local_2f8 = (pdVar4[1] + pdVar3[1] * param_1) * *pdVar5;
        if (*(char *)(*(longlong *)(param_2 + 0x26) + lVar17) != '\0') {
          local_348 = local_348 + *param_5 * param_1;
          local_2f8 = local_2f8 + param_5[1] * param_1;
          local_2e8 = local_2e8 + param_5[2] * param_1;
        }
        lVar12 = *(longlong *)(param_2 + 0x14);
        dVar30 = *(double *)(lVar10 + lVar18);
        dVar84 = *(double *)(lVar10 + 8 + lVar18);
        dVar37 = *(double *)(lVar12 + 0x10 + lVar16);
        pdVar3 = (double *)(lVar10 + 8 + lVar18);
        dVar62 = *pdVar3;
        dVar68 = pdVar3[1];
        pdVar3 = (double *)(lVar12 + 8 + lVar16);
        dVar48 = dVar37 * dVar62 - *pdVar3 * dVar81;
        dVar53 = *(double *)(lVar12 + lVar16) * dVar68 - pdVar3[1] * dVar30;
        dVar55 = *(double *)(lVar12 + 8 + lVar16) * dVar30 - *(double *)(lVar12 + lVar16) * dVar84;
        dVar48 = dVar48 + dVar48;
        dVar53 = dVar53 + dVar53;
        dVar55 = dVar55 + dVar55;
        dVar42 = *(double *)(lVar10 + 0x18 + lVar18);
        pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar16);
        dVar43 = *pdVar3 + (dVar55 * ((double *)(lVar10 + lVar18))[1] - dVar53 * dVar68) +
                           dVar42 * dVar48 + *(double *)(lVar12 + lVar16);
        dVar46 = pdVar3[1] +
                 (dVar81 * dVar48 - dVar55 * dVar30) +
                 dVar42 * dVar53 + ((double *)(lVar12 + lVar16))[1];
        dVar44 = *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar16) +
                 dVar42 * dVar55 + dVar37 +
                 (dVar53 * *(double *)(lVar10 + lVar18) - dVar48 * dVar62);
        pdVar3 = (double *)(lVar11 + 0x10 + lVar18);
        dVar68 = *pdVar3;
        dVar48 = pdVar3[1];
        dVar53 = *(double *)(lVar11 + lVar18);
        dVar55 = ((double *)(lVar11 + lVar18))[1];
        dVar37 = *(double *)(lVar11 + 0x18 + lVar18);
        dVar62 = *(double *)(lVar11 + 0x10 + lVar18);
        dVar73 = dVar81 * dVar19 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar68 * dVar84 +
                 dVar30 * dVar37 * ___xmm_bff00000000000003ff0000000000000 + dVar42 * dVar53;
        dVar79 = dVar81 * *(double *)(lVar11 + lVar18) * _UNK_15076b868 +
                 dVar48 * dVar84 + dVar30 * dVar62 * _UNK_15076c6f8 + dVar42 * dVar55;
        dVar70 = dVar81 * dVar37 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar19 * dVar30 * ___xmm_bff00000000000003ff0000000000000 + dVar42 * dVar68) -
                 dVar84 * dVar53);
        dVar71 = dVar81 * dVar62 * _UNK_15076c6f8 +
                 ((*(double *)(lVar11 + lVar18) * dVar30 * _UNK_15076c6f8 + dVar42 * dVar48) -
                 dVar84 * dVar55);
        lVar10 = *(longlong *)(param_2 + 0x1a);
        dVar19 = dVar79 + dVar79;
        dVar30 = dVar70 + dVar70;
        dVar81 = dVar73 * (dVar73 + dVar73);
        dVar37 = dVar73 * dVar19;
        dVar21 = (dVar73 + dVar73) * dVar71;
        dVar38 = dVar71 * dVar30 + dVar37;
        dVar74 = dVar21 + dVar79 * dVar30;
        dVar80 = dVar19 * dVar71 + dVar30 * dVar73;
        dVar21 = dVar79 * dVar30 - dVar21;
        dVar67 = dVar30 * dVar73 - dVar19 * dVar71;
        dVar84 = dVar37 - dVar71 * dVar30;
        dVar37 = dVar37 - dVar71 * (dVar71 + dVar71);
        dVar32 = __real_3ff0000000000000 - (dVar19 * dVar79 + dVar81);
        auVar56._0_8_ =
             ___xmm_3ff00000000000003ff0000000000000 - (dVar30 * dVar70 + dVar19 * dVar79);
        auVar56._8_8_ = _UNK_150689688 - (dVar30 * dVar70 + dVar81);
        pdVar3 = (double *)(lVar10 + lVar18 * 4);
        dVar42 = *pdVar3;
        dVar62 = pdVar3[1];
        dVar81 = *(double *)(lVar10 + 0x10 + lVar18 * 4);
        pdVar3 = (double *)(lVar10 + 0x20 + lVar18 * 4);
        dVar68 = *pdVar3;
        dVar48 = pdVar3[1];
        dVar19 = *(double *)(lVar10 + 0x30 + lVar18 * 4);
        pdVar3 = (double *)(lVar10 + 0x40 + lVar18 * 4);
        dVar53 = *pdVar3;
        dVar55 = pdVar3[1];
        dVar22 = dVar53 * dVar80 + dVar84 * dVar68 + auVar56._0_8_ * dVar42;
        dVar31 = dVar55 * dVar80 + dVar84 * dVar48 + auVar56._0_8_ * dVar62;
        dVar30 = *(double *)(lVar10 + 0x50 + lVar18 * 4);
        dVar63 = dVar80 * dVar30 + dVar19 * dVar84 + dVar81 * auVar56._0_8_;
        dVar45 = dVar21 * dVar53 + auVar56._8_8_ * dVar68 + dVar38 * dVar42;
        dVar47 = dVar21 * dVar55 + auVar56._8_8_ * dVar48 + dVar38 * dVar62;
        dVar82 = dVar30 * dVar21 + dVar19 * auVar56._8_8_ + dVar81 * dVar38;
        dVar42 = dVar32 * dVar53 + dVar74 * dVar68 + dVar42 * dVar67;
        dVar62 = dVar32 * dVar55 + dVar74 * dVar48 + dVar62 * dVar67;
        dVar68 = dVar30 * dVar32 + dVar19 * dVar74 + dVar81 * dVar67;
        auVar66._8_4_ = SUB84(dVar37,0);
        auVar66._0_8_ = dVar84;
        auVar66._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        auVar66 = blendpd(auVar56,auVar66,1);
        dVar30 = auVar66._0_8_;
        dVar84 = auVar66._8_8_;
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x1e) + lVar16);
        pdVar4 = (double *)(*(longlong *)(param_2 + 0x22) + lVar16);
        dVar19 = *pdVar4 + *pdVar3 * param_1;
        dVar37 = pdVar4[1] + pdVar3[1] * param_1;
        dVar81 = *(double *)(*(longlong *)(param_2 + 0x22) + 0x10 + lVar16) +
                 *(double *)(*(longlong *)(param_2 + 0x1e) + 0x10 + lVar16) * param_1;
        dVar30 = dVar81 * (dVar68 * dVar80 + dVar30 * dVar62 + dVar42 * auVar56._0_8_) +
                 (dVar82 * dVar80 + dVar30 * dVar47 + dVar45 * auVar56._0_8_) * dVar37 +
                 dVar19 * (dVar63 * dVar80 + dVar30 * dVar31 + dVar22 * auVar56._0_8_);
        dVar84 = dVar81 * (dVar68 * dVar21 + dVar84 * dVar62 + dVar42 * dVar38) +
                 (dVar82 * dVar21 + dVar84 * dVar47 + dVar45 * dVar38) * dVar37 +
                 dVar19 * (dVar63 * dVar21 + dVar84 * dVar31 + dVar22 * dVar38);
        dVar19 = dVar81 * (dVar68 * dVar32 + dVar62 * dVar74 + dVar67 * dVar42) +
                 dVar37 * (dVar82 * dVar32 + dVar47 * dVar74 + dVar67 * dVar45) +
                 (dVar63 * dVar32 + dVar31 * dVar74 + dVar67 * dVar22) * dVar19;
        dVar81 = *param_4;
        lVar10 = *(longlong *)(param_2 + 0xc);
        if (dVar81 <= __real_0000000000000000) {
          dVar37 = *(double *)(lVar10 + lVar16);
          dVar62 = *(double *)(lVar10 + 8 + lVar16);
          dVar42 = *(double *)(lVar10 + 0x10 + lVar16);
          dVar81 = 0.0;
          dVar53 = 0.0;
          dVar21 = 0.0;
          dVar55 = 0.0;
          dVar48 = 0.0;
          dVar68 = 0.0;
        }
        else {
          dVar68 = param_4[1];
          dVar21 = param_4[2] + param_4[2];
          dVar37 = *(double *)(lVar10 + lVar16);
          dVar42 = *(double *)(lVar10 + 0x10 + lVar16);
          pdVar3 = (double *)(lVar10 + 8 + lVar16);
          dVar48 = param_4[3];
          dVar55 = local_218 * dVar46 - local_238 * dVar43;
          dVar22 = local_238 * dVar44 - local_298 * dVar46;
          dVar31 = local_298 * dVar43 - local_218 * dVar44;
          dVar53 = param_4[4];
          dVar62 = *(double *)(lVar10 + 8 + lVar16);
          local_348 = local_348 -
                      (param_4[8] * local_2a8 + dVar68 * local_268 +
                       dVar21 * (dVar42 * local_238 - *pdVar3 * local_298) +
                       (dVar55 * local_238 - dVar31 * local_298) * dVar48 +
                      (dVar44 * dVar78 - local_258 * dVar46) * dVar53) * dVar81 * param_1;
          local_2f8 = local_2f8 -
                      (param_4[9] * dVar72 + dVar68 * dVar54 +
                       dVar21 * (dVar37 * local_298 - pdVar3[1] * local_218) +
                       (dVar22 * local_298 - local_218 * dVar55) * dVar48 +
                      (local_258 * dVar43 - local_228 * dVar44) * dVar53) * dVar81 * param_1;
          dVar55 = param_4[5];
          local_2e8 = local_2e8 -
                      ((dVar46 * local_228 - dVar78 * dVar43) * dVar53 +
                      (local_218 * dVar62 - local_238 * dVar37) * dVar21 +
                      dVar68 * local_208 + param_4[10] * local_1f8 +
                      (dVar31 * local_218 - dVar22 * local_238) * dVar48) * dVar81 * param_1;
          dVar30 = dVar30 - dVar55 * local_228 * dVar81 * param_1;
          dVar84 = dVar84 - dVar55 * dVar78 * dVar81 * param_1;
          dVar19 = dVar19 - dVar55 * local_258 * dVar81 * param_1;
          dVar68 = param_4[6] * (double)((ulonglong)dVar81 ^ __xmm_80000000000000008000000000000000)
          ;
          dVar55 = dVar68 * local_2a8;
          dVar48 = dVar68 * dVar72;
          dVar68 = dVar68 * local_1f8;
          dVar21 = (double)((ulonglong)dVar81 ^ __xmm_80000000000000008000000000000000) * param_4[7]
          ;
          dVar81 = dVar21 * local_218;
          dVar53 = dVar21 * local_238;
          dVar21 = dVar21 * local_298;
        }
        dVar31 = *(double *)(*(longlong *)(param_2 + 0x28) + lVar17 * 8) * param_1;
        dVar22 = __real_3ff0000000000000;
        if (dVar31 <= __real_3ff0000000000000) {
          dVar22 = dVar31;
        }
        dVar32 = *(double *)(*(longlong *)(param_2 + 0x2a) + lVar17 * 8) * param_1;
        dVar31 = __real_3ff0000000000000;
        if (dVar32 <= __real_3ff0000000000000) {
          dVar31 = dVar32;
        }
        dVar55 = dVar22 * (dVar55 - (dVar37 + local_348)) + dVar37 + local_348;
        dVar48 = dVar22 * (dVar48 - (dVar62 + local_2f8)) + dVar62 + local_2f8;
        dVar37 = (dVar68 - (dVar42 + local_2e8)) * dVar22 + dVar42 + local_2e8;
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x10) + lVar16);
        dVar30 = *pdVar3 + dVar30;
        dVar84 = pdVar3[1] + dVar84;
        dVar19 = dVar19 + *(double *)(*(longlong *)(param_2 + 0x10) + 0x10 + lVar16);
        dVar19 = (dVar21 - dVar19) * dVar31 + dVar19;
        dVar30 = dVar31 * (dVar81 - dVar30) + dVar30;
        dVar84 = dVar31 * (dVar53 - dVar84) + dVar84;
        dVar81 = (dVar79 * dVar19 * ___xmm_3ff0000000000000bff0000000000000 +
                 dVar70 * dVar84 +
                 dVar71 * dVar30 * ___xmm_bff00000000000003ff0000000000000 + dVar73 * 0.0) * dVar20
                 + dVar73;
        dVar42 = (dVar73 * dVar19 * _UNK_15076b868 +
                 dVar71 * dVar84 + dVar70 * dVar30 * _UNK_15076c6f8 + dVar79 * 0.0) * dVar20 +
                 dVar79;
        dVar62 = (dVar71 * dVar19 * ___xmm_bff00000000000003ff0000000000000 +
                 ((dVar30 * dVar79 * ___xmm_bff00000000000003ff0000000000000 + dVar70 * 0.0) -
                 dVar84 * dVar73)) * dVar20 + dVar70;
        dVar71 = (dVar70 * dVar19 * _UNK_15076c6f8 +
                 ((dVar30 * dVar73 * _UNK_15076c6f8 + dVar71 * 0.0) - dVar84 * dVar79)) * dVar20 +
                 dVar71;
        dVar68 = dVar81 * dVar81 + dVar62 * dVar62;
        dVar53 = dVar42 * dVar42 + dVar71 * dVar71;
        auVar83._0_8_ = dVar53 + dVar68;
        auVar83._8_8_ = dVar68 + dVar53;
        auVar76._0_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <= auVar83._0_8_);
        auVar76._8_4_ = -(uint)(_UNK_150aa88b8 <= auVar83._8_8_);
        auVar76._4_4_ = auVar76._0_4_;
        auVar76._12_4_ = auVar76._8_4_;
        auVar56 = blendvps(ZEXT816(0),___xmm_ffffffffffffffffffffffffffffffff,auVar76);
        auVar66 = sqrtpd(auVar76,auVar83);
        auVar40._8_8_ = _UNK_150689688;
        auVar40._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
        auVar66 = divpd(auVar40,auVar66);
        dVar31 = (double)((ulonglong)(auVar66._0_8_ * dVar81) & auVar56._0_8_);
        dVar32 = (double)((ulonglong)(auVar66._8_8_ * dVar42) & auVar56._8_8_);
        auVar77._0_8_ = (double)((ulonglong)(dVar62 * auVar66._0_8_) & auVar56._0_8_);
        dVar68 = (double)((ulonglong)(dVar71 * auVar66._8_8_) & auVar56._8_8_);
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + lVar18);
        dVar81 = *pdVar3;
        dVar42 = pdVar3[1];
        pdVar3 = (double *)(*(longlong *)(param_2 + 0x16) + 0x10 + lVar18);
        dVar62 = *pdVar3 * ___xmm_3ff0000000000000bff0000000000000;
        dVar53 = pdVar3[1] * _UNK_15076b868;
        auVar60._8_4_ = SUB84(dVar68,0);
        auVar60._0_8_ = dVar68;
        auVar60._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
        auVar58._8_4_ = SUB84(dVar32,0);
        auVar58._12_4_ = (undefined4)((ulonglong)dVar32 >> 0x20);
        auVar69._8_4_ = SUB84(dVar31,0);
        auVar69._0_8_ = dVar31;
        auVar69._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        auVar58._0_8_ = dVar32;
        auVar77._8_4_ = SUB84(auVar77._0_8_,0);
        auVar77._12_4_ = (int)((ulonglong)auVar77._0_8_ >> 0x20);
        dVar21 = dVar53 * auVar77._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                 dVar81 * dVar32 +
                 (dVar62 * dVar68 - dVar31 * dVar42 * ___xmm_bff00000000000003ff0000000000000);
        dVar22 = dVar62 * auVar77._8_8_ * _UNK_15076c6f8 +
                 dVar42 * auVar58._8_8_ +
                 (dVar53 * auVar60._8_8_ - auVar69._8_8_ * dVar81 * _UNK_15076c6f8);
        dVar68 = (dVar62 * dVar32 +
                 (dVar53 * dVar31 * ___xmm_bff00000000000003ff0000000000000 - dVar68 * dVar81)) -
                 dVar42 * auVar77._0_8_ * ___xmm_3ff0000000000000bff0000000000000;
        dVar53 = (dVar53 * auVar58._8_8_ +
                 (dVar62 * auVar69._8_8_ * _UNK_15076c6f8 - auVar60._8_8_ * dVar42)) -
                 dVar81 * auVar77._8_8_ * _UNK_15076b868;
        lVar10 = *(longlong *)(param_2 + 0x14);
        dVar81 = *(double *)(lVar10 + 0x10 + lVar16);
        dVar42 = *(double *)(lVar10 + lVar16);
        dVar62 = ((double *)(lVar10 + lVar16))[1];
        pdVar3 = (double *)(lVar10 + 8 + lVar16);
        dVar32 = *pdVar3 * dVar68 - dVar53 * dVar42;
        dVar38 = pdVar3[1] * dVar53 - dVar21 * dVar62;
        dVar31 = *(double *)(lVar10 + lVar16) * dVar21 - dVar81 * dVar68;
        dVar31 = dVar31 + dVar31;
        dVar32 = dVar32 + dVar32;
        dVar38 = dVar38 + dVar38;
        lVar10 = *(longlong *)(param_2 + 6);
        *(double *)(lVar10 + lVar16) =
             (dVar43 + param_1 * dVar55) -
             ((dVar32 * dVar53 - dVar21 * dVar31) + dVar38 * dVar22 + dVar42);
        ((double *)(lVar10 + lVar16))[1] =
             (dVar46 + param_1 * dVar48) -
             ((dVar38 * dVar21 - dVar68 * dVar32) + dVar31 * dVar22 + dVar62);
        *(double *)(lVar10 + 0x10 + lVar16) =
             (dVar44 + param_1 * dVar37) -
             (dVar22 * dVar32 + dVar81 + (dVar31 * dVar68 - dVar53 * dVar38));
        lVar11 = *(longlong *)(param_2 + 10);
        *(double *)(lVar11 + lVar18) = dVar68;
        ((double *)(lVar11 + lVar18))[1] = dVar53;
        pdVar3 = (double *)(lVar11 + 0x10 + lVar18);
        *pdVar3 = dVar21;
        pdVar3[1] = dVar22;
        lVar12 = *(longlong *)(param_2 + 0xc);
        pdVar3 = (double *)(lVar12 + lVar16);
        *pdVar3 = dVar55;
        pdVar3[1] = dVar48;
        *(double *)(lVar12 + 0x10 + lVar16) = dVar37;
        lVar12 = *(longlong *)(param_2 + 0x10);
        pdVar3 = (double *)(lVar12 + lVar16);
        *pdVar3 = dVar30;
        pdVar3[1] = dVar84;
        *(double *)(lVar12 + 0x10 + lVar16) = dVar19;
        lVar12 = *(longlong *)(param_2 + 0x20);
        puVar1 = (undefined8 *)(lVar12 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar12 + 0x10 + lVar16) = 0;
        lVar12 = *(longlong *)(param_2 + 0x22);
        puVar1 = (undefined8 *)(lVar12 + lVar16);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar12 + 0x10 + lVar16) = 0;
        if (*(char *)(*(longlong *)(param_2 + 0x2c) + lVar17) != '\0') {
          lVar12 = *(longlong *)(param_2 + 0x2e);
          dVar81 = *(double *)(lVar12 + 0x10 + lVar16 * 2);
          pdVar3 = (double *)(lVar12 + lVar16 * 2);
          dVar48 = *pdVar3;
          dVar53 = pdVar3[1];
          pdVar3 = (double *)(lVar12 + 8 + lVar16 * 2);
          pdVar4 = (double *)(lVar12 + 0x18 + lVar16 * 2);
          dVar55 = *pdVar4;
          dVar21 = pdVar4[1];
          dVar19 = *(double *)(lVar11 + 0x10 + lVar18);
          dVar30 = *(double *)(lVar11 + 0x18 + lVar18);
          dVar22 = *(double *)(lVar11 + lVar18);
          dVar31 = ((double *)(lVar11 + lVar18))[1];
          pdVar4 = (double *)(lVar11 + 8 + lVar18);
          dVar32 = *pdVar4;
          dVar38 = pdVar4[1];
          dVar43 = *(double *)(lVar11 + 0x10 + lVar18);
          dVar84 = *(double *)(lVar11 + lVar18);
          dVar67 = *(double *)(lVar12 + lVar16 * 2) * dVar43 -
                   *(double *)(lVar12 + 0x10 + lVar16 * 2) * dVar84;
          dVar62 = *pdVar3 * dVar22 - dVar32 * dVar48;
          dVar46 = pdVar3[1] * dVar31 - dVar38 * dVar53;
          dVar67 = dVar67 + dVar67;
          dVar62 = dVar62 + dVar62;
          dVar46 = dVar46 + dVar46;
          dVar70 = dVar62 * dVar31 - dVar67 * dVar38;
          pdVar3 = (double *)(lVar12 + 0x20 + lVar16 * 2);
          dVar68 = *(double *)(lVar12 + 0x18 + lVar16 * 2) * dVar43 -
                   *(double *)(lVar12 + 0x28 + lVar16 * 2) * dVar84;
          dVar71 = *pdVar3 * dVar22 - dVar32 * dVar55;
          dVar63 = pdVar3[1] * dVar31 - dVar38 * dVar21;
          dVar68 = dVar68 + dVar68;
          dVar71 = dVar71 + dVar71;
          dVar63 = dVar63 + dVar63;
          dVar47 = dVar71 * dVar31 - dVar68 * dVar38;
          dVar37 = *(double *)(lVar12 + 0x28 + lVar16 * 2);
          dVar44 = *(double *)(lVar10 + lVar16);
          dVar45 = ((double *)(lVar10 + lVar16))[1];
          auVar75._0_8_ = dVar70 + dVar30 * dVar46 + dVar48 + dVar44;
          auVar75._8_8_ = (dVar46 * dVar19 - dVar84 * dVar62) + dVar30 * dVar67 + dVar53 + dVar45;
          auVar33._0_8_ = dVar47 + dVar30 * dVar63 + dVar55 + dVar44;
          auVar33._8_8_ = (dVar63 * dVar19 - dVar84 * dVar71) + dVar30 * dVar68 + dVar21 + dVar45;
          auVar23._8_8_ = auVar75._8_8_;
          auVar23._0_8_ = auVar75._0_8_;
          auVar66 = minpd(auVar23,auVar33);
          auVar76 = maxpd(auVar75,auVar33);
          dVar42 = *(double *)(lVar10 + 0x10 + lVar16);
          auVar39._0_8_ = dVar30 * dVar62 + dVar81 + (dVar67 * dVar22 - dVar46 * dVar32) + dVar42;
          auVar39._8_8_ = dVar30 * dVar46 + 0.0 + dVar70 + 0.0;
          dVar62 = dVar30 * dVar71 + dVar37 + (dVar68 * dVar22 - dVar63 * dVar32) + dVar42;
          dVar68 = dVar30 * dVar63 + 0.0 + dVar47 + 0.0;
          uVar64 = SUB84(dVar68,0);
          uVar65 = (undefined4)((ulonglong)dVar68 >> 0x20);
          auVar24._8_8_ = auVar39._8_8_;
          auVar24._0_8_ = auVar39._0_8_;
          auVar13._8_4_ = uVar64;
          auVar13._0_8_ = dVar62;
          auVar13._12_4_ = uVar65;
          auVar56 = minpd(auVar24,auVar13);
          auVar14._8_4_ = uVar64;
          auVar14._0_8_ = dVar62;
          auVar14._12_4_ = uVar65;
          auVar40 = maxpd(auVar39,auVar14);
          dVar74 = dVar55 - dVar48;
          dVar79 = dVar21 - dVar53;
          dVar46 = dVar37 - dVar81;
          dVar70 = dVar81 + dVar46;
          dVar71 = dVar37 - dVar46;
          dVar67 = dVar48 + dVar74 * __real_3ff0000000000000;
          dVar73 = dVar53 + dVar79 * 0.0;
          dVar81 = dVar81 + dVar46 * __real_0000000000000000;
          dVar47 = dVar73 * dVar22 - dVar32 * dVar67;
          dVar63 = dVar81 * dVar31 - dVar38 * dVar73;
          dVar62 = dVar67 * dVar43 - dVar81 * dVar84;
          dVar62 = dVar62 + dVar62;
          dVar47 = dVar47 + dVar47;
          dVar63 = dVar63 + dVar63;
          dVar68 = dVar47 * dVar31 - dVar62 * dVar38;
          auVar25._0_8_ = dVar68 + dVar30 * dVar63 + dVar67 + dVar44;
          auVar25._8_8_ = (dVar63 * dVar19 - dVar84 * dVar47) + dVar30 * dVar62 + dVar73 + dVar45;
          auVar66 = minpd(auVar66,auVar25);
          auVar77 = maxpd(auVar76,auVar25);
          auVar34._0_8_ = dVar30 * dVar47 + dVar81 + (dVar62 * dVar22 - dVar63 * dVar32) + dVar42;
          auVar34._8_8_ = dVar30 * dVar63 + 0.0 + dVar68 + 0.0;
          auVar76 = minpd(auVar56,auVar34);
          auVar83 = maxpd(auVar40,auVar34);
          dVar62 = dVar55 - dVar74 * __real_3ff0000000000000;
          dVar68 = dVar21 - dVar79 * 0.0;
          dVar37 = dVar37 - dVar46 * __real_0000000000000000;
          dVar46 = dVar68 * dVar22 - dVar32 * dVar62;
          dVar47 = dVar37 * dVar31 - dVar38 * dVar68;
          dVar63 = dVar62 * dVar43 - dVar37 * dVar84;
          dVar63 = dVar63 + dVar63;
          dVar46 = dVar46 + dVar46;
          dVar47 = dVar47 + dVar47;
          dVar67 = dVar46 * dVar31 - dVar63 * dVar38;
          auVar49._0_8_ = dVar67 + dVar30 * dVar47 + dVar62 + dVar44;
          auVar49._8_8_ = (dVar47 * dVar19 - dVar84 * dVar46) + dVar30 * dVar63 + dVar68 + dVar45;
          auVar66 = minpd(auVar66,auVar49);
          auVar56 = maxpd(auVar77,auVar49);
          auVar26._0_8_ = dVar30 * dVar46 + dVar37 + (dVar63 * dVar22 - dVar47 * dVar32) + dVar42;
          auVar26._8_8_ = dVar30 * dVar47 + 0.0 + dVar67 + 0.0;
          auVar40 = minpd(auVar76,auVar26);
          auVar77 = maxpd(auVar83,auVar26);
          dVar62 = dVar48 + dVar74 * 0.0;
          dVar68 = dVar53 + __real_3ff0000000000000 * dVar79;
          dVar46 = dVar68 * dVar22 - dVar32 * dVar62;
          dVar47 = dVar81 * dVar31 - dVar38 * dVar68;
          dVar63 = dVar62 * dVar43 - dVar81 * dVar84;
          dVar63 = dVar63 + dVar63;
          dVar46 = dVar46 + dVar46;
          dVar47 = dVar47 + dVar47;
          dVar67 = dVar46 * dVar31 - dVar63 * dVar38;
          auVar50._0_8_ = dVar67 + dVar30 * dVar47 + dVar62 + dVar44;
          auVar50._8_8_ = (dVar47 * dVar19 - dVar84 * dVar46) + dVar30 * dVar63 + dVar68 + dVar45;
          auVar66 = minpd(auVar66,auVar50);
          auVar76 = maxpd(auVar56,auVar50);
          auVar27._0_8_ = dVar30 * dVar46 + dVar81 + (dVar63 * dVar22 - dVar47 * dVar32) + dVar42;
          auVar27._8_8_ = dVar30 * dVar47 + 0.0 + dVar67 + 0.0;
          auVar56 = minpd(auVar40,auVar27);
          auVar77 = maxpd(auVar77,auVar27);
          dVar81 = dVar55 - dVar74 * 0.0;
          dVar62 = dVar21 - __real_3ff0000000000000 * dVar79;
          dVar68 = dVar62 * dVar22 - dVar32 * dVar81;
          dVar46 = dVar37 * dVar31 - dVar38 * dVar62;
          dVar47 = dVar81 * dVar43 - dVar37 * dVar84;
          dVar47 = dVar47 + dVar47;
          dVar68 = dVar68 + dVar68;
          dVar46 = dVar46 + dVar46;
          dVar63 = dVar68 * dVar31 - dVar47 * dVar38;
          auVar51._0_8_ = dVar63 + dVar30 * dVar46 + dVar81 + dVar44;
          auVar51._8_8_ = (dVar46 * dVar19 - dVar84 * dVar68) + dVar30 * dVar47 + dVar62 + dVar45;
          auVar40 = minpd(auVar66,auVar51);
          auVar76 = maxpd(auVar76,auVar51);
          auVar28._0_8_ = dVar30 * dVar68 + dVar37 + (dVar47 * dVar22 - dVar46 * dVar32) + dVar42;
          auVar28._8_8_ = dVar30 * dVar46 + 0.0 + dVar63 + 0.0;
          auVar56 = minpd(auVar56,auVar28);
          auVar66 = maxpd(auVar77,auVar28);
          dVar48 = dVar48 + dVar74 * 0.0;
          dVar53 = dVar53 + dVar79 * 0.0;
          dVar62 = dVar48 * dVar43 - dVar70 * dVar84;
          dVar81 = dVar53 * dVar22 - dVar32 * dVar48;
          dVar37 = dVar70 * dVar31 - dVar38 * dVar53;
          dVar62 = dVar62 + dVar62;
          dVar81 = dVar81 + dVar81;
          dVar37 = dVar37 + dVar37;
          dVar68 = dVar81 * dVar31 - dVar62 * dVar38;
          auVar35._0_8_ = dVar68 + dVar30 * dVar37 + dVar48 + dVar44;
          auVar35._8_8_ = (dVar37 * dVar19 - dVar84 * dVar81) + dVar30 * dVar62 + dVar53 + dVar45;
          auVar40 = minpd(auVar40,auVar35);
          auVar76 = maxpd(auVar76,auVar35);
          auVar57._0_8_ = dVar30 * dVar81 + dVar70 + (dVar62 * dVar22 - dVar37 * dVar32) + dVar42;
          auVar57._8_8_ = dVar30 * dVar37 + 0.0 + dVar68 + 0.0;
          auVar56 = minpd(auVar56,auVar57);
          auVar66 = maxpd(auVar66,auVar57);
          dVar55 = dVar55 - dVar74 * 0.0;
          dVar21 = dVar21 - dVar79 * 0.0;
          dVar81 = dVar55 * dVar43 - dVar71 * dVar84;
          dVar62 = dVar21 * dVar22 - dVar32 * dVar55;
          dVar68 = dVar71 * dVar31 - dVar38 * dVar21;
          dVar81 = dVar81 + dVar81;
          dVar62 = dVar62 + dVar62;
          dVar68 = dVar68 + dVar68;
          dVar37 = dVar62 * dVar31 - dVar81 * dVar38;
          auVar36._0_8_ = dVar37 + dVar30 * dVar68 + dVar55 + dVar44;
          auVar36._8_8_ = (dVar68 * dVar19 - dVar84 * dVar62) + dVar30 * dVar81 + dVar21 + dVar45;
          auVar40 = minpd(auVar40,auVar36);
          auVar58 = maxpd(auVar76,auVar36);
          auVar61._0_8_ = dVar30 * dVar62 + dVar71 + (dVar81 * dVar22 - dVar68 * dVar32) + dVar42;
          auVar61._8_8_ = dVar30 * dVar68 + 0.0 + dVar37 + 0.0;
          auVar77 = minpd(auVar56,auVar61);
          auVar66 = maxpd(auVar66,auVar61);
          dVar81 = (auVar66._0_8_ - auVar77._0_8_) * param_6;
          dVar19 = (auVar58._0_8_ - auVar40._0_8_) * param_6;
          dVar30 = (auVar58._8_8_ - auVar40._8_8_) * param_6;
          auVar29._0_8_ = *(double *)(*(longlong *)(param_2 + 4) + 0x10 + lVar16) - dVar42;
          auVar29._8_8_ = 0;
          pdVar3 = (double *)(*(longlong *)(param_2 + 4) + lVar16);
          auVar41._0_8_ = *pdVar3 - dVar44;
          auVar41._8_8_ = pdVar3[1] - dVar45;
          auVar52._8_8_ = auVar41._8_8_;
          auVar52._0_8_ = auVar41._0_8_;
          auVar56 = ZEXT816(0);
          auVar83 = minpd(auVar52,auVar56);
          auVar59._8_8_ = 0;
          auVar59._0_8_ = auVar29._0_8_;
          auVar60 = minpd(auVar59,auVar56);
          auVar76 = maxpd(auVar41,auVar56);
          auVar56 = maxpd(auVar29,auVar56);
          lVar10 = *(longlong *)(param_2 + 0x30);
          pdVar3 = (double *)(lVar10 + lVar16 * 2);
          *pdVar3 = (auVar83._0_8_ + (auVar40._0_8_ - dVar19)) - param_7;
          pdVar3[1] = (auVar83._8_8_ + (auVar40._8_8_ - dVar30)) - param_7;
          pdVar3 = (double *)(lVar10 + 0x10 + lVar16 * 2);
          *pdVar3 = (auVar60._0_8_ + (auVar77._0_8_ - dVar81)) - param_7;
          pdVar3[1] = auVar76._0_8_ + dVar19 + auVar58._0_8_ + param_7;
          pdVar3 = (double *)(lVar10 + 0x20 + lVar16 * 2);
          *pdVar3 = auVar76._8_8_ + dVar30 + auVar58._8_8_ + param_7;
          pdVar3[1] = auVar56._0_8_ + dVar81 + auVar66._0_8_ + param_7;
        }
      }
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x18;
      lVar18 = lVar18 + 0x20;
    } while ((ulonglong)uVar7 * 0x18 != lVar16);
  }
  return;
}

