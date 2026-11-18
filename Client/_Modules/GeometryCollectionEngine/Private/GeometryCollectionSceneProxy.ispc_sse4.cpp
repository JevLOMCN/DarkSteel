// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// SetDynamicData_RenderThread___un_3C_s_5B_unFVector3f_5D__3E_CunuCunuun_3C_CunS_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E__sse4 @ 140a95db0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetDynamicData_RenderThread___un_3C_s_5B_unFVector3f_5D__3E_CunuCunuun_3C_CunS_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E__sse4
               (longlong param_1,uint param_2,undefined8 param_3,longlong param_4,longlong param_5,
               longlong param_6)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  longlong lVar44;
  undefined4 *puVar45;
  uint uVar46;
  ulonglong uVar47;
  uint uVar48;
  ushort *puVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  bool bVar52;
  undefined4 uVar53;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 in_XMM0 [16];
  undefined4 uVar57;
  undefined1 auVar54 [16];
  float fVar58;
  float fVar61;
  undefined1 in_XMM1 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar62;
  float fVar64;
  float fVar65;
  undefined1 in_XMM2 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  
  uVar48 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar48 = param_2;
  }
  uVar50 = 0;
  if ((int)(uVar48 & 0xfffffffc) < 1) {
    uVar47 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    do {
      auVar68 = *(undefined1 (*) [16])(param_6 + uVar50 * 0xc);
      fVar4 = auVar68._12_4_;
      auVar69 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar50 * 0xc);
      fVar3 = auVar69._0_4_;
      fVar5 = auVar69._12_4_;
      auVar59 = *(undefined1 (*) [16])(param_6 + 0x20 + uVar50 * 0xc);
      fVar6 = auVar59._12_4_;
      fVar70 = auVar69._8_4_;
      fVar58 = auVar68._0_4_;
      fVar61 = auVar68._4_4_;
      fVar71 = auVar59._0_4_;
      fVar62 = auVar59._4_4_;
      fVar64 = auVar59._8_4_;
      auVar68 = insertps(auVar69,auVar68,0x8c);
      fVar65 = auVar68._0_4_;
      fVar66 = auVar68._4_4_;
      unaff_XMM6 = pmovzxwd(auVar59,*(undefined8 *)(param_4 + uVar50 * 2));
      uVar47 = 0xf;
      do {
        uVar46 = 0;
        for (uVar51 = uVar47; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
          uVar46 = uVar46 + 1;
        }
        local_c8 = unaff_XMM6;
        iVar1 = *(int *)(local_c8 + (ulonglong)(uVar46 & 3) * 4);
        auVar68._0_4_ = -(uint)(iVar1 == unaff_XMM6._0_4_);
        auVar68._4_4_ = -(uint)(iVar1 == unaff_XMM6._4_4_);
        auVar68._8_4_ = -(uint)(iVar1 == unaff_XMM6._8_4_);
        auVar68._12_4_ = -(uint)(iVar1 == unaff_XMM6._12_4_);
        uVar46 = movmskps(uVar46 & 3,auVar68);
        uVar51 = (ulonglong)(uint)(iVar1 << 6);
        fVar82 = *(float *)(param_5 + uVar51);
        fVar83 = *(float *)(param_5 + 0x10 + uVar51);
        fVar84 = *(float *)(param_5 + 0x20 + uVar51);
        fVar86 = *(float *)(param_5 + 0x30 + uVar51);
        unaff_XMM7._0_4_ = fVar86 + fVar84 * fVar65 + fVar83 * fVar61 + fVar82 * fVar58;
        unaff_XMM7._4_4_ = fVar86 + fVar84 * fVar66 + fVar83 * fVar3 + fVar82 * fVar4;
        unaff_XMM7._8_4_ = fVar86 + fVar84 * fVar71 + fVar83 * fVar5 + fVar82 * fVar70;
        unaff_XMM7._12_4_ = fVar86 + fVar84 * fVar6 + fVar83 * fVar64 + fVar82 * fVar62;
        bVar52 = (uVar46 & 1) != 0;
        fVar82 = in_XMM0._0_4_;
        fVar83 = in_XMM0._4_4_;
        fVar84 = in_XMM0._8_4_;
        fVar86 = in_XMM0._12_4_;
        if (bVar52) {
          fVar82 = unaff_XMM7._0_4_;
          fVar83 = unaff_XMM7._4_4_;
          fVar84 = unaff_XMM7._8_4_;
          fVar86 = unaff_XMM7._12_4_;
        }
        fVar81 = *(float *)(param_5 + 4 + uVar51);
        fVar87 = *(float *)(param_5 + 8 + uVar51);
        fVar75 = *(float *)(param_5 + 0x14 + uVar51);
        fVar88 = *(float *)(param_5 + 0x18 + uVar51);
        fVar77 = *(float *)(param_5 + 0x24 + uVar51);
        fVar89 = *(float *)(param_5 + 0x28 + uVar51);
        fVar79 = *(float *)(param_5 + 0x34 + uVar51);
        auVar69._0_4_ = fVar79 + fVar77 * fVar65 + fVar75 * fVar61 + fVar81 * fVar58;
        auVar69._4_4_ = fVar79 + fVar77 * fVar66 + fVar75 * fVar3 + fVar81 * fVar4;
        auVar69._8_4_ = fVar79 + fVar77 * fVar71 + fVar75 * fVar5 + fVar81 * fVar70;
        auVar69._12_4_ = fVar79 + fVar77 * fVar6 + fVar75 * fVar64 + fVar81 * fVar62;
        fVar81 = *(float *)(param_5 + 0x38 + uVar51);
        fVar75 = fVar81 + fVar89 * fVar65 + fVar88 * fVar61 + fVar87 * fVar58;
        fVar77 = fVar81 + fVar89 * fVar66 + fVar88 * fVar3 + fVar87 * fVar4;
        fVar79 = fVar81 + fVar89 * fVar71 + fVar88 * fVar5 + fVar87 * fVar70;
        fVar81 = fVar81 + fVar89 * fVar6 + fVar88 * fVar64 + fVar87 * fVar62;
        cVar2 = (char)((char)uVar46 << 4) >> 4;
        if (bVar52) {
          auVar59._4_4_ = fVar83;
          auVar59._0_4_ = fVar82;
          auVar59._8_4_ = fVar84;
          auVar59._12_4_ = fVar86;
          auVar68 = blendps(in_XMM0,auVar59,1);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = fVar75;
          fVar83 = fVar77;
          fVar84 = fVar79;
          fVar86 = fVar81;
          fVar87 = auVar69._0_4_;
          fVar88 = auVar69._4_4_;
          fVar89 = auVar69._8_4_;
          fVar76 = auVar69._12_4_;
          if ((uVar46 & 2) != 0) goto LAB_140a960cc;
LAB_140a96025:
          auVar36._4_4_ = fVar88;
          auVar36._0_4_ = fVar87;
          auVar36._8_4_ = fVar89;
          auVar36._12_4_ = fVar76;
          auVar59 = blendps(in_XMM1,auVar36,1);
          auVar14._4_4_ = fVar83;
          auVar14._0_4_ = fVar82;
          auVar14._8_4_ = fVar84;
          auVar14._12_4_ = fVar86;
          auVar63 = blendps(in_XMM2,auVar14,1);
          auVar26._4_4_ = uVar55;
          auVar26._0_4_ = uVar53;
          auVar26._8_4_ = uVar56;
          auVar26._12_4_ = uVar57;
          auVar68 = blendps(auVar68,auVar26,2);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = auVar59._0_4_;
          fVar83 = auVar59._4_4_;
          fVar84 = auVar59._8_4_;
          fVar86 = auVar59._12_4_;
          fVar87 = auVar63._0_4_;
          fVar88 = auVar63._4_4_;
          fVar89 = auVar63._8_4_;
          fVar76 = auVar63._12_4_;
          if ((uVar46 & 4) == 0) goto LAB_140a9605b;
LAB_140a9610e:
          auVar13._4_4_ = fVar83;
          auVar13._0_4_ = fVar82;
          auVar13._8_4_ = fVar84;
          auVar13._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar13,2);
          auVar24._4_4_ = fVar88;
          auVar24._0_4_ = fVar87;
          auVar24._8_4_ = fVar89;
          auVar24._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar24,2);
          auVar34._4_4_ = unaff_XMM7._4_4_;
          auVar34._0_4_ = unaff_XMM7._0_4_;
          auVar34._8_4_ = unaff_XMM7._8_4_;
          auVar34._12_4_ = unaff_XMM7._12_4_;
          auVar68 = blendps(auVar68,auVar34,4);
          fVar82 = auVar69._0_4_;
          fVar83 = auVar69._4_4_;
          fVar84 = auVar69._8_4_;
          fVar86 = auVar69._12_4_;
          fVar87 = fVar75;
          fVar88 = fVar77;
          fVar89 = fVar79;
          fVar76 = fVar81;
          if (-1 < cVar2) goto LAB_140a9614c;
LAB_140a9608d:
          auVar10._4_4_ = fVar83;
          auVar10._0_4_ = fVar82;
          auVar10._8_4_ = fVar84;
          auVar10._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar10,4);
          if (cVar2 < '\0') goto LAB_140a9609a;
LAB_140a9615c:
          auVar23._4_4_ = fVar88;
          auVar23._0_4_ = fVar87;
          auVar23._8_4_ = fVar89;
          auVar23._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar23,4);
          auVar69 = auVar59;
        }
        else {
          auVar63._4_4_ = fVar83;
          auVar63._0_4_ = fVar82;
          auVar63._8_4_ = fVar84;
          auVar63._12_4_ = fVar86;
          auVar68 = blendps(in_XMM0,auVar63,1);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = in_XMM2._0_4_;
          fVar83 = in_XMM2._4_4_;
          fVar84 = in_XMM2._8_4_;
          fVar86 = in_XMM2._12_4_;
          fVar87 = in_XMM1._0_4_;
          fVar88 = in_XMM1._4_4_;
          fVar89 = in_XMM1._8_4_;
          fVar76 = in_XMM1._12_4_;
          if ((uVar46 & 2) == 0) goto LAB_140a96025;
LAB_140a960cc:
          auVar41._4_4_ = fVar88;
          auVar41._0_4_ = fVar87;
          auVar41._8_4_ = fVar89;
          auVar41._12_4_ = fVar76;
          auVar59 = blendps(in_XMM1,auVar41,1);
          auVar25._4_4_ = fVar83;
          auVar25._0_4_ = fVar82;
          auVar25._8_4_ = fVar84;
          auVar25._12_4_ = fVar86;
          auVar63 = blendps(in_XMM2,auVar25,1);
          auVar35._4_4_ = unaff_XMM7._4_4_;
          auVar35._0_4_ = unaff_XMM7._0_4_;
          auVar35._8_4_ = unaff_XMM7._8_4_;
          auVar35._12_4_ = unaff_XMM7._12_4_;
          auVar68 = blendps(auVar68,auVar35,2);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = auVar69._0_4_;
          fVar83 = auVar69._4_4_;
          fVar84 = auVar69._8_4_;
          fVar86 = auVar69._12_4_;
          fVar87 = fVar75;
          fVar88 = fVar77;
          fVar89 = fVar79;
          fVar76 = fVar81;
          if ((uVar46 & 4) != 0) goto LAB_140a9610e;
LAB_140a9605b:
          auVar9._4_4_ = fVar83;
          auVar9._0_4_ = fVar82;
          auVar9._8_4_ = fVar84;
          auVar9._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar9,2);
          auVar15._4_4_ = fVar88;
          auVar15._0_4_ = fVar87;
          auVar15._8_4_ = fVar89;
          auVar15._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar15,2);
          auVar27._4_4_ = uVar55;
          auVar27._0_4_ = uVar53;
          auVar27._8_4_ = uVar56;
          auVar27._12_4_ = uVar57;
          auVar68 = blendps(auVar68,auVar27,4);
          fVar82 = auVar59._0_4_;
          fVar83 = auVar59._4_4_;
          fVar84 = auVar59._8_4_;
          fVar86 = auVar59._12_4_;
          fVar87 = auVar63._0_4_;
          fVar88 = auVar63._4_4_;
          fVar89 = auVar63._8_4_;
          fVar76 = auVar63._12_4_;
          if (cVar2 < '\0') goto LAB_140a9608d;
LAB_140a9614c:
          auVar12._4_4_ = fVar83;
          auVar12._0_4_ = fVar82;
          auVar12._8_4_ = fVar84;
          auVar12._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar12,4);
          unaff_XMM7 = auVar68;
          if (-1 < cVar2) goto LAB_140a9615c;
LAB_140a9609a:
          auVar16._4_4_ = fVar88;
          auVar16._0_4_ = fVar87;
          auVar16._8_4_ = fVar89;
          auVar16._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar16,4);
        }
        if (-1 < cVar2) {
          fVar75 = auVar63._0_4_;
          fVar77 = auVar63._4_4_;
          fVar79 = auVar63._8_4_;
          fVar81 = auVar63._12_4_;
        }
        in_XMM0 = blendps(auVar68,unaff_XMM7,8);
        in_XMM1 = blendps(auVar59,auVar69,8);
        auVar7._4_4_ = fVar77;
        auVar7._0_4_ = fVar75;
        auVar7._8_4_ = fVar79;
        auVar7._12_4_ = fVar81;
        in_XMM2 = blendps(auVar63,auVar7,8);
        uVar47 = uVar47 & ~(ulonglong)uVar46;
      } while (uVar47 != 0);
      auVar68 = insertps(in_XMM0,in_XMM1,0x30);
      auVar67._0_8_ = in_XMM1._4_8_;
      auVar67._8_4_ = in_XMM2._0_4_;
      auVar67._12_4_ = in_XMM2._4_4_;
      auVar68 = insertps(auVar68,in_XMM2,0x20);
      puVar45 = (undefined4 *)(param_1 + uVar50 * 0xc);
      *puVar45 = auVar68._0_4_;
      puVar45[1] = auVar68._12_4_;
      puVar45[2] = auVar68._8_4_;
      puVar45[3] = auVar68._4_4_;
      auVar68 = blendps(auVar67,in_XMM0,4);
      puVar45 = (undefined4 *)(param_1 + 0x10 + uVar50 * 0xc);
      *puVar45 = auVar68._0_4_;
      puVar45[1] = auVar68._12_4_;
      puVar45[2] = auVar68._8_4_;
      puVar45[3] = auVar68._4_4_;
      puVar45 = (undefined4 *)(param_1 + 0x20 + uVar50 * 0xc);
      *puVar45 = in_XMM2._8_4_;
      puVar45[1] = in_XMM0._12_4_;
      puVar45[2] = in_XMM1._12_4_;
      puVar45[3] = in_XMM2._12_4_;
      uVar50 = uVar50 + 4;
    } while ((int)uVar50 < (int)(uVar48 & 0xfffffffc));
    uVar47 = uVar50 & 0xffffffff;
    if ((int)param_2 <= (int)uVar50) {
      return;
    }
  }
  uVar46 = (uint)uVar50;
  auVar54._0_4_ =
       -(uint)((int)(uVar46 | (uint)__xmm_00000003000000020000000100000000) < (int)param_2);
  auVar54._4_4_ =
       -(uint)((int)(uVar46 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_2);
  auVar54._8_4_ = -(uint)((int)(uVar46 | _UNK_150631e08) < (int)param_2);
  auVar54._12_4_ = -(uint)((int)(uVar46 | _UNK_150631e0c) < (int)param_2);
  lVar44 = uVar47 * 0xc;
  auVar68 = *(undefined1 (*) [16])(param_6 + lVar44);
  fVar4 = auVar68._12_4_;
  auVar69 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar44);
  fVar3 = auVar69._0_4_;
  fVar5 = auVar69._12_4_;
  auVar59 = *(undefined1 (*) [16])(param_6 + 0x20 + lVar44);
  fVar6 = auVar59._12_4_;
  fVar65 = auVar69._8_4_;
  fVar58 = auVar68._0_4_;
  fVar61 = auVar68._4_4_;
  fVar66 = auVar59._0_4_;
  fVar70 = auVar59._4_4_;
  fVar71 = auVar59._8_4_;
  auVar72._0_8_ = auVar69._8_8_;
  auVar72._8_4_ = fVar70;
  auVar72._12_4_ = fVar71;
  auVar68 = insertps(auVar69,auVar68,0x8c);
  uVar48 = movmskps((int)param_6,auVar54);
  if ((~(byte)uVar48 & 9) == 0) {
    unaff_XMM6._8_8_ = 0;
    unaff_XMM6._0_8_ = *(ulonglong *)(param_4 + (int)(uVar46 * 2));
  }
  else {
    puVar49 = (ushort *)(param_4 + (int)(uVar46 * 2));
    if ((uVar48 & 1) != 0) {
      unaff_XMM6 = ZEXT216(*puVar49);
    }
    if ((uVar48 & 2) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM6._8_8_;
      unaff_XMM7._0_8_ = unaff_XMM6._0_8_ & 0xffffffff0000ffff | (ulonglong)puVar49[1] << 0x10;
      unaff_XMM6 = pblendw(unaff_XMM6,unaff_XMM7,0xf3);
    }
    if ((uVar48 & 4) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM6._8_8_;
      unaff_XMM7._0_8_ = unaff_XMM6._0_8_ & 0xffff0000ffffffff | (ulonglong)puVar49[2] << 0x20;
      unaff_XMM6 = pblendw(unaff_XMM6,unaff_XMM7,0xf7);
    }
    if ((uVar48 & 8) != 0) {
      unaff_XMM6._0_8_ = unaff_XMM6._0_8_ & 0xffffffffffff | (ulonglong)puVar49[3] << 0x30;
    }
  }
  puVar45 = (undefined4 *)(param_1 + lVar44);
  fVar62 = auVar68._0_4_;
  fVar64 = auVar68._4_4_;
  local_d8 = pmovzxwd(unaff_XMM7,unaff_XMM6);
  uVar50 = (ulonglong)(uVar48 & 0xff);
  do {
    if (uVar50 == 0) {
      uVar48 = 0;
    }
    else {
      uVar48 = 0;
      for (uVar47 = uVar50; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x8000000000000000) {
        uVar48 = uVar48 + 1;
      }
    }
    iVar1 = *(int *)(local_d8 + (ulonglong)(uVar48 & 3) * 4);
    auVar73._0_4_ = -(uint)(iVar1 == local_d8._0_4_);
    auVar73._4_4_ = -(uint)(iVar1 == local_d8._4_4_);
    auVar73._8_4_ = -(uint)(iVar1 == local_d8._8_4_);
    auVar73._12_4_ = -(uint)(iVar1 == local_d8._12_4_);
    uVar48 = movmskps(uVar48 & 3,auVar73 & auVar54);
    uVar47 = (ulonglong)(uint)(iVar1 << 6);
    fVar82 = *(float *)(param_5 + uVar47);
    fVar83 = *(float *)(param_5 + 0x10 + uVar47);
    fVar84 = *(float *)(param_5 + 0x20 + uVar47);
    fVar86 = *(float *)(param_5 + 0x30 + uVar47);
    auVar74._0_4_ = fVar86 + fVar84 * fVar62 + fVar83 * fVar61 + fVar82 * fVar58;
    auVar74._4_4_ = fVar86 + fVar84 * fVar64 + fVar83 * fVar3 + fVar82 * fVar4;
    auVar74._8_4_ = fVar86 + fVar84 * fVar66 + fVar83 * fVar5 + fVar82 * fVar65;
    auVar74._12_4_ = fVar86 + fVar84 * fVar6 + fVar83 * fVar71 + fVar82 * fVar70;
    bVar52 = (uVar48 & 1) != 0;
    fVar82 = unaff_XMM6._0_4_;
    fVar83 = unaff_XMM6._4_4_;
    fVar84 = unaff_XMM6._8_4_;
    fVar86 = unaff_XMM6._12_4_;
    if (bVar52) {
      fVar82 = auVar74._0_4_;
      fVar83 = auVar74._4_4_;
      fVar84 = auVar74._8_4_;
      fVar86 = auVar74._12_4_;
    }
    fVar81 = *(float *)(param_5 + 4 + uVar47);
    fVar87 = *(float *)(param_5 + 8 + uVar47);
    fVar75 = *(float *)(param_5 + 0x14 + uVar47);
    fVar88 = *(float *)(param_5 + 0x18 + uVar47);
    fVar77 = *(float *)(param_5 + 0x24 + uVar47);
    fVar89 = *(float *)(param_5 + 0x28 + uVar47);
    fVar79 = *(float *)(param_5 + 0x34 + uVar47);
    fVar76 = fVar79 + fVar77 * fVar62 + fVar75 * fVar61 + fVar81 * fVar58;
    fVar78 = fVar79 + fVar77 * fVar64 + fVar75 * fVar3 + fVar81 * fVar4;
    fVar80 = fVar79 + fVar77 * fVar66 + fVar75 * fVar5 + fVar81 * fVar65;
    fVar75 = fVar79 + fVar77 * fVar6 + fVar75 * fVar71 + fVar81 * fVar70;
    fVar81 = *(float *)(param_5 + 0x38 + uVar47);
    fVar77 = fVar81 + fVar89 * fVar62 + fVar88 * fVar61 + fVar87 * fVar58;
    fVar79 = fVar81 + fVar89 * fVar64 + fVar88 * fVar3 + fVar87 * fVar4;
    fVar85 = fVar81 + fVar89 * fVar66 + fVar88 * fVar5 + fVar87 * fVar65;
    fVar81 = fVar81 + fVar89 * fVar6 + fVar88 * fVar71 + fVar87 * fVar70;
    cVar2 = (char)((char)uVar48 << 4) >> 4;
    if (bVar52) {
      auVar22._4_4_ = fVar83;
      auVar22._0_4_ = fVar82;
      auVar22._8_4_ = fVar84;
      auVar22._12_4_ = fVar86;
      auVar68 = blendps(unaff_XMM6,auVar22,1);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = fVar77;
      fVar83 = fVar79;
      fVar84 = fVar85;
      fVar86 = fVar81;
      fVar87 = fVar76;
      fVar88 = fVar78;
      fVar89 = fVar80;
      fVar90 = fVar75;
      if ((uVar48 & 2) != 0) goto LAB_140a9646d;
LAB_140a963c3:
      auVar42._4_4_ = fVar88;
      auVar42._0_4_ = fVar87;
      auVar42._8_4_ = fVar89;
      auVar42._12_4_ = fVar90;
      auVar69 = blendps(auVar59,auVar42,1);
      auVar28._4_4_ = fVar83;
      auVar28._0_4_ = fVar82;
      auVar28._8_4_ = fVar84;
      auVar28._12_4_ = fVar86;
      auVar59 = blendps(auVar72,auVar28,1);
      auVar37._4_4_ = uVar55;
      auVar37._0_4_ = uVar53;
      auVar37._8_4_ = uVar56;
      auVar37._12_4_ = uVar57;
      auVar68 = blendps(auVar68,auVar37,2);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = auVar69._0_4_;
      fVar83 = auVar69._4_4_;
      fVar84 = auVar69._8_4_;
      fVar86 = auVar69._12_4_;
      fVar87 = auVar59._0_4_;
      fVar88 = auVar59._4_4_;
      fVar89 = auVar59._8_4_;
      fVar90 = auVar59._12_4_;
      if ((uVar48 & 4) == 0) goto LAB_140a963fa;
LAB_140a964b0:
      auVar21._4_4_ = fVar83;
      auVar21._0_4_ = fVar82;
      auVar21._8_4_ = fVar84;
      auVar21._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar21,2);
      auVar32._4_4_ = fVar88;
      auVar32._0_4_ = fVar87;
      auVar32._8_4_ = fVar89;
      auVar32._12_4_ = fVar90;
      auVar59 = blendps(auVar59,auVar32,2);
      auVar39._4_4_ = auVar74._4_4_;
      auVar39._0_4_ = auVar74._0_4_;
      auVar39._8_4_ = auVar74._8_4_;
      auVar39._12_4_ = auVar74._12_4_;
      auVar68 = blendps(auVar68,auVar39,4);
      fVar82 = fVar76;
      fVar83 = fVar78;
      fVar84 = fVar80;
      fVar86 = fVar75;
      fVar87 = fVar77;
      fVar88 = fVar79;
      fVar89 = fVar85;
      fVar90 = fVar81;
      if (-1 < cVar2) goto LAB_140a964ee;
LAB_140a9642c:
      auVar19._4_4_ = fVar83;
      auVar19._0_4_ = fVar82;
      auVar19._8_4_ = fVar84;
      auVar19._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar19,4);
      if (cVar2 < '\0') goto LAB_140a96439;
LAB_140a964ff:
      fVar76 = auVar69._0_4_;
      fVar78 = auVar69._4_4_;
      fVar80 = auVar69._8_4_;
      fVar75 = auVar69._12_4_;
      auVar31._4_4_ = fVar88;
      auVar31._0_4_ = fVar87;
      auVar31._8_4_ = fVar89;
      auVar31._12_4_ = fVar90;
      auVar63 = blendps(auVar59,auVar31,4);
    }
    else {
      auVar17._4_4_ = fVar83;
      auVar17._0_4_ = fVar82;
      auVar17._8_4_ = fVar84;
      auVar17._12_4_ = fVar86;
      auVar68 = blendps(unaff_XMM6,auVar17,1);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = auVar72._0_4_;
      fVar83 = auVar72._4_4_;
      fVar84 = auVar72._8_4_;
      fVar86 = auVar72._12_4_;
      fVar87 = auVar59._0_4_;
      fVar88 = auVar59._4_4_;
      fVar89 = auVar59._8_4_;
      fVar90 = auVar59._12_4_;
      if ((uVar48 & 2) == 0) goto LAB_140a963c3;
LAB_140a9646d:
      auVar43._4_4_ = fVar88;
      auVar43._0_4_ = fVar87;
      auVar43._8_4_ = fVar89;
      auVar43._12_4_ = fVar90;
      auVar69 = blendps(auVar59,auVar43,1);
      auVar33._4_4_ = fVar83;
      auVar33._0_4_ = fVar82;
      auVar33._8_4_ = fVar84;
      auVar33._12_4_ = fVar86;
      auVar59 = blendps(auVar72,auVar33,1);
      auVar40._4_4_ = auVar74._4_4_;
      auVar40._0_4_ = auVar74._0_4_;
      auVar40._8_4_ = auVar74._8_4_;
      auVar40._12_4_ = auVar74._12_4_;
      auVar68 = blendps(auVar68,auVar40,2);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = fVar76;
      fVar83 = fVar78;
      fVar84 = fVar80;
      fVar86 = fVar75;
      fVar87 = fVar77;
      fVar88 = fVar79;
      fVar89 = fVar85;
      fVar90 = fVar81;
      if ((uVar48 & 4) != 0) goto LAB_140a964b0;
LAB_140a963fa:
      auVar18._4_4_ = fVar83;
      auVar18._0_4_ = fVar82;
      auVar18._8_4_ = fVar84;
      auVar18._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar18,2);
      auVar29._4_4_ = fVar88;
      auVar29._0_4_ = fVar87;
      auVar29._8_4_ = fVar89;
      auVar29._12_4_ = fVar90;
      auVar59 = blendps(auVar59,auVar29,2);
      auVar38._4_4_ = uVar55;
      auVar38._0_4_ = uVar53;
      auVar38._8_4_ = uVar56;
      auVar38._12_4_ = uVar57;
      auVar68 = blendps(auVar68,auVar38,4);
      fVar82 = auVar69._0_4_;
      fVar83 = auVar69._4_4_;
      fVar84 = auVar69._8_4_;
      fVar86 = auVar69._12_4_;
      fVar87 = auVar59._0_4_;
      fVar88 = auVar59._4_4_;
      fVar89 = auVar59._8_4_;
      fVar90 = auVar59._12_4_;
      if (cVar2 < '\0') goto LAB_140a9642c;
LAB_140a964ee:
      auVar20._4_4_ = fVar83;
      auVar20._0_4_ = fVar82;
      auVar20._8_4_ = fVar84;
      auVar20._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar20,4);
      auVar74 = auVar68;
      if (-1 < cVar2) goto LAB_140a964ff;
LAB_140a96439:
      auVar30._4_4_ = fVar88;
      auVar30._0_4_ = fVar87;
      auVar30._8_4_ = fVar89;
      auVar30._12_4_ = fVar90;
      auVar63 = blendps(auVar59,auVar30,4);
    }
    if (-1 < cVar2) {
      fVar77 = auVar63._0_4_;
      fVar79 = auVar63._4_4_;
      fVar85 = auVar63._8_4_;
      fVar81 = auVar63._12_4_;
    }
    unaff_XMM6 = blendps(auVar68,auVar74,8);
    auVar8._4_4_ = fVar78;
    auVar8._0_4_ = fVar76;
    auVar8._8_4_ = fVar80;
    auVar8._12_4_ = fVar75;
    auVar59 = blendps(auVar69,auVar8,8);
    auVar11._4_4_ = fVar79;
    auVar11._0_4_ = fVar77;
    auVar11._8_4_ = fVar85;
    auVar11._12_4_ = fVar81;
    auVar72 = blendps(auVar63,auVar11,8);
    uVar50 = uVar50 & ~(ulonglong)uVar48;
    if (uVar50 == 0) {
      auVar68 = insertps(unaff_XMM6,auVar59,0x30);
      auVar60._0_8_ = auVar59._4_8_;
      auVar60._8_4_ = auVar72._0_4_;
      auVar60._12_4_ = auVar72._4_4_;
      auVar68 = insertps(auVar68,auVar72,0x20);
      *puVar45 = auVar68._0_4_;
      puVar45[1] = auVar68._12_4_;
      puVar45[2] = auVar68._8_4_;
      puVar45[3] = auVar68._4_4_;
      auVar68 = blendps(auVar60,unaff_XMM6,4);
      puVar45[4] = auVar68._0_4_;
      puVar45[5] = auVar68._12_4_;
      puVar45[6] = auVar68._8_4_;
      puVar45[7] = auVar68._4_4_;
      puVar45[8] = auVar72._8_4_;
      puVar45[9] = unaff_XMM6._12_4_;
      puVar45[10] = auVar59._12_4_;
      puVar45[0xb] = auVar72._12_4_;
      return;
    }
  } while( true );
}

// SetDynamicData_RenderThread_sse4 @ 140a965f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetDynamicData_RenderThread_sse4
               (longlong param_1,uint param_2,undefined8 param_3,longlong param_4,longlong param_5,
               longlong param_6)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  longlong lVar44;
  undefined4 *puVar45;
  uint uVar46;
  ulonglong uVar47;
  uint uVar48;
  ushort *puVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  bool bVar52;
  undefined4 uVar53;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 in_XMM0 [16];
  undefined4 uVar57;
  undefined1 auVar54 [16];
  float fVar58;
  float fVar61;
  undefined1 in_XMM1 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar62;
  float fVar64;
  float fVar65;
  undefined1 in_XMM2 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar70;
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  
  uVar48 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar48 = param_2;
  }
  uVar50 = 0;
  if ((int)(uVar48 & 0xfffffffc) < 1) {
    uVar47 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    do {
      auVar68 = *(undefined1 (*) [16])(param_6 + uVar50 * 0xc);
      fVar4 = auVar68._12_4_;
      auVar69 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar50 * 0xc);
      fVar3 = auVar69._0_4_;
      fVar5 = auVar69._12_4_;
      auVar59 = *(undefined1 (*) [16])(param_6 + 0x20 + uVar50 * 0xc);
      fVar6 = auVar59._12_4_;
      fVar70 = auVar69._8_4_;
      fVar58 = auVar68._0_4_;
      fVar61 = auVar68._4_4_;
      fVar71 = auVar59._0_4_;
      fVar62 = auVar59._4_4_;
      fVar64 = auVar59._8_4_;
      auVar68 = insertps(auVar69,auVar68,0x8c);
      fVar65 = auVar68._0_4_;
      fVar66 = auVar68._4_4_;
      unaff_XMM6 = pmovzxwd(auVar59,*(undefined8 *)(param_4 + uVar50 * 2));
      uVar47 = 0xf;
      do {
        uVar46 = 0;
        for (uVar51 = uVar47; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
          uVar46 = uVar46 + 1;
        }
        local_c8 = unaff_XMM6;
        iVar1 = *(int *)(local_c8 + (ulonglong)(uVar46 & 3) * 4);
        auVar68._0_4_ = -(uint)(iVar1 == unaff_XMM6._0_4_);
        auVar68._4_4_ = -(uint)(iVar1 == unaff_XMM6._4_4_);
        auVar68._8_4_ = -(uint)(iVar1 == unaff_XMM6._8_4_);
        auVar68._12_4_ = -(uint)(iVar1 == unaff_XMM6._12_4_);
        uVar46 = movmskps(uVar46 & 3,auVar68);
        uVar51 = (ulonglong)(uint)(iVar1 << 6);
        fVar82 = *(float *)(param_5 + uVar51);
        fVar83 = *(float *)(param_5 + 0x10 + uVar51);
        fVar84 = *(float *)(param_5 + 0x20 + uVar51);
        fVar86 = *(float *)(param_5 + 0x30 + uVar51);
        unaff_XMM7._0_4_ = fVar86 + fVar84 * fVar65 + fVar83 * fVar61 + fVar82 * fVar58;
        unaff_XMM7._4_4_ = fVar86 + fVar84 * fVar66 + fVar83 * fVar3 + fVar82 * fVar4;
        unaff_XMM7._8_4_ = fVar86 + fVar84 * fVar71 + fVar83 * fVar5 + fVar82 * fVar70;
        unaff_XMM7._12_4_ = fVar86 + fVar84 * fVar6 + fVar83 * fVar64 + fVar82 * fVar62;
        bVar52 = (uVar46 & 1) != 0;
        fVar82 = in_XMM0._0_4_;
        fVar83 = in_XMM0._4_4_;
        fVar84 = in_XMM0._8_4_;
        fVar86 = in_XMM0._12_4_;
        if (bVar52) {
          fVar82 = unaff_XMM7._0_4_;
          fVar83 = unaff_XMM7._4_4_;
          fVar84 = unaff_XMM7._8_4_;
          fVar86 = unaff_XMM7._12_4_;
        }
        fVar81 = *(float *)(param_5 + 4 + uVar51);
        fVar87 = *(float *)(param_5 + 8 + uVar51);
        fVar75 = *(float *)(param_5 + 0x14 + uVar51);
        fVar88 = *(float *)(param_5 + 0x18 + uVar51);
        fVar77 = *(float *)(param_5 + 0x24 + uVar51);
        fVar89 = *(float *)(param_5 + 0x28 + uVar51);
        fVar79 = *(float *)(param_5 + 0x34 + uVar51);
        auVar69._0_4_ = fVar79 + fVar77 * fVar65 + fVar75 * fVar61 + fVar81 * fVar58;
        auVar69._4_4_ = fVar79 + fVar77 * fVar66 + fVar75 * fVar3 + fVar81 * fVar4;
        auVar69._8_4_ = fVar79 + fVar77 * fVar71 + fVar75 * fVar5 + fVar81 * fVar70;
        auVar69._12_4_ = fVar79 + fVar77 * fVar6 + fVar75 * fVar64 + fVar81 * fVar62;
        fVar81 = *(float *)(param_5 + 0x38 + uVar51);
        fVar75 = fVar81 + fVar89 * fVar65 + fVar88 * fVar61 + fVar87 * fVar58;
        fVar77 = fVar81 + fVar89 * fVar66 + fVar88 * fVar3 + fVar87 * fVar4;
        fVar79 = fVar81 + fVar89 * fVar71 + fVar88 * fVar5 + fVar87 * fVar70;
        fVar81 = fVar81 + fVar89 * fVar6 + fVar88 * fVar64 + fVar87 * fVar62;
        cVar2 = (char)((char)uVar46 << 4) >> 4;
        if (bVar52) {
          auVar59._4_4_ = fVar83;
          auVar59._0_4_ = fVar82;
          auVar59._8_4_ = fVar84;
          auVar59._12_4_ = fVar86;
          auVar68 = blendps(in_XMM0,auVar59,1);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = fVar75;
          fVar83 = fVar77;
          fVar84 = fVar79;
          fVar86 = fVar81;
          fVar87 = auVar69._0_4_;
          fVar88 = auVar69._4_4_;
          fVar89 = auVar69._8_4_;
          fVar76 = auVar69._12_4_;
          if ((uVar46 & 2) != 0) goto LAB_140a9690c;
LAB_140a96865:
          auVar36._4_4_ = fVar88;
          auVar36._0_4_ = fVar87;
          auVar36._8_4_ = fVar89;
          auVar36._12_4_ = fVar76;
          auVar59 = blendps(in_XMM1,auVar36,1);
          auVar14._4_4_ = fVar83;
          auVar14._0_4_ = fVar82;
          auVar14._8_4_ = fVar84;
          auVar14._12_4_ = fVar86;
          auVar63 = blendps(in_XMM2,auVar14,1);
          auVar26._4_4_ = uVar55;
          auVar26._0_4_ = uVar53;
          auVar26._8_4_ = uVar56;
          auVar26._12_4_ = uVar57;
          auVar68 = blendps(auVar68,auVar26,2);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = auVar59._0_4_;
          fVar83 = auVar59._4_4_;
          fVar84 = auVar59._8_4_;
          fVar86 = auVar59._12_4_;
          fVar87 = auVar63._0_4_;
          fVar88 = auVar63._4_4_;
          fVar89 = auVar63._8_4_;
          fVar76 = auVar63._12_4_;
          if ((uVar46 & 4) == 0) goto LAB_140a9689b;
LAB_140a9694e:
          auVar13._4_4_ = fVar83;
          auVar13._0_4_ = fVar82;
          auVar13._8_4_ = fVar84;
          auVar13._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar13,2);
          auVar24._4_4_ = fVar88;
          auVar24._0_4_ = fVar87;
          auVar24._8_4_ = fVar89;
          auVar24._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar24,2);
          auVar34._4_4_ = unaff_XMM7._4_4_;
          auVar34._0_4_ = unaff_XMM7._0_4_;
          auVar34._8_4_ = unaff_XMM7._8_4_;
          auVar34._12_4_ = unaff_XMM7._12_4_;
          auVar68 = blendps(auVar68,auVar34,4);
          fVar82 = auVar69._0_4_;
          fVar83 = auVar69._4_4_;
          fVar84 = auVar69._8_4_;
          fVar86 = auVar69._12_4_;
          fVar87 = fVar75;
          fVar88 = fVar77;
          fVar89 = fVar79;
          fVar76 = fVar81;
          if (-1 < cVar2) goto LAB_140a9698c;
LAB_140a968cd:
          auVar10._4_4_ = fVar83;
          auVar10._0_4_ = fVar82;
          auVar10._8_4_ = fVar84;
          auVar10._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar10,4);
          if (cVar2 < '\0') goto LAB_140a968da;
LAB_140a9699c:
          auVar23._4_4_ = fVar88;
          auVar23._0_4_ = fVar87;
          auVar23._8_4_ = fVar89;
          auVar23._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar23,4);
          auVar69 = auVar59;
        }
        else {
          auVar63._4_4_ = fVar83;
          auVar63._0_4_ = fVar82;
          auVar63._8_4_ = fVar84;
          auVar63._12_4_ = fVar86;
          auVar68 = blendps(in_XMM0,auVar63,1);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = in_XMM2._0_4_;
          fVar83 = in_XMM2._4_4_;
          fVar84 = in_XMM2._8_4_;
          fVar86 = in_XMM2._12_4_;
          fVar87 = in_XMM1._0_4_;
          fVar88 = in_XMM1._4_4_;
          fVar89 = in_XMM1._8_4_;
          fVar76 = in_XMM1._12_4_;
          if ((uVar46 & 2) == 0) goto LAB_140a96865;
LAB_140a9690c:
          auVar41._4_4_ = fVar88;
          auVar41._0_4_ = fVar87;
          auVar41._8_4_ = fVar89;
          auVar41._12_4_ = fVar76;
          auVar59 = blendps(in_XMM1,auVar41,1);
          auVar25._4_4_ = fVar83;
          auVar25._0_4_ = fVar82;
          auVar25._8_4_ = fVar84;
          auVar25._12_4_ = fVar86;
          auVar63 = blendps(in_XMM2,auVar25,1);
          auVar35._4_4_ = unaff_XMM7._4_4_;
          auVar35._0_4_ = unaff_XMM7._0_4_;
          auVar35._8_4_ = unaff_XMM7._8_4_;
          auVar35._12_4_ = unaff_XMM7._12_4_;
          auVar68 = blendps(auVar68,auVar35,2);
          uVar53 = auVar68._0_4_;
          uVar55 = auVar68._4_4_;
          uVar56 = auVar68._8_4_;
          uVar57 = auVar68._12_4_;
          fVar82 = auVar69._0_4_;
          fVar83 = auVar69._4_4_;
          fVar84 = auVar69._8_4_;
          fVar86 = auVar69._12_4_;
          fVar87 = fVar75;
          fVar88 = fVar77;
          fVar89 = fVar79;
          fVar76 = fVar81;
          if ((uVar46 & 4) != 0) goto LAB_140a9694e;
LAB_140a9689b:
          auVar9._4_4_ = fVar83;
          auVar9._0_4_ = fVar82;
          auVar9._8_4_ = fVar84;
          auVar9._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar9,2);
          auVar15._4_4_ = fVar88;
          auVar15._0_4_ = fVar87;
          auVar15._8_4_ = fVar89;
          auVar15._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar15,2);
          auVar27._4_4_ = uVar55;
          auVar27._0_4_ = uVar53;
          auVar27._8_4_ = uVar56;
          auVar27._12_4_ = uVar57;
          auVar68 = blendps(auVar68,auVar27,4);
          fVar82 = auVar59._0_4_;
          fVar83 = auVar59._4_4_;
          fVar84 = auVar59._8_4_;
          fVar86 = auVar59._12_4_;
          fVar87 = auVar63._0_4_;
          fVar88 = auVar63._4_4_;
          fVar89 = auVar63._8_4_;
          fVar76 = auVar63._12_4_;
          if (cVar2 < '\0') goto LAB_140a968cd;
LAB_140a9698c:
          auVar12._4_4_ = fVar83;
          auVar12._0_4_ = fVar82;
          auVar12._8_4_ = fVar84;
          auVar12._12_4_ = fVar86;
          auVar59 = blendps(auVar59,auVar12,4);
          unaff_XMM7 = auVar68;
          if (-1 < cVar2) goto LAB_140a9699c;
LAB_140a968da:
          auVar16._4_4_ = fVar88;
          auVar16._0_4_ = fVar87;
          auVar16._8_4_ = fVar89;
          auVar16._12_4_ = fVar76;
          auVar63 = blendps(auVar63,auVar16,4);
        }
        if (-1 < cVar2) {
          fVar75 = auVar63._0_4_;
          fVar77 = auVar63._4_4_;
          fVar79 = auVar63._8_4_;
          fVar81 = auVar63._12_4_;
        }
        in_XMM0 = blendps(auVar68,unaff_XMM7,8);
        in_XMM1 = blendps(auVar59,auVar69,8);
        auVar7._4_4_ = fVar77;
        auVar7._0_4_ = fVar75;
        auVar7._8_4_ = fVar79;
        auVar7._12_4_ = fVar81;
        in_XMM2 = blendps(auVar63,auVar7,8);
        uVar47 = uVar47 & ~(ulonglong)uVar46;
      } while (uVar47 != 0);
      auVar68 = insertps(in_XMM0,in_XMM1,0x30);
      auVar67._0_8_ = in_XMM1._4_8_;
      auVar67._8_4_ = in_XMM2._0_4_;
      auVar67._12_4_ = in_XMM2._4_4_;
      auVar68 = insertps(auVar68,in_XMM2,0x20);
      puVar45 = (undefined4 *)(param_1 + uVar50 * 0xc);
      *puVar45 = auVar68._0_4_;
      puVar45[1] = auVar68._12_4_;
      puVar45[2] = auVar68._8_4_;
      puVar45[3] = auVar68._4_4_;
      auVar68 = blendps(auVar67,in_XMM0,4);
      puVar45 = (undefined4 *)(param_1 + 0x10 + uVar50 * 0xc);
      *puVar45 = auVar68._0_4_;
      puVar45[1] = auVar68._12_4_;
      puVar45[2] = auVar68._8_4_;
      puVar45[3] = auVar68._4_4_;
      puVar45 = (undefined4 *)(param_1 + 0x20 + uVar50 * 0xc);
      *puVar45 = in_XMM2._8_4_;
      puVar45[1] = in_XMM0._12_4_;
      puVar45[2] = in_XMM1._12_4_;
      puVar45[3] = in_XMM2._12_4_;
      uVar50 = uVar50 + 4;
    } while ((int)uVar50 < (int)(uVar48 & 0xfffffffc));
    uVar47 = uVar50 & 0xffffffff;
    if ((int)param_2 <= (int)uVar50) {
      return;
    }
  }
  uVar46 = (uint)uVar50;
  auVar54._0_4_ =
       -(uint)((int)(uVar46 | (uint)__xmm_00000003000000020000000100000000) < (int)param_2);
  auVar54._4_4_ =
       -(uint)((int)(uVar46 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_2);
  auVar54._8_4_ = -(uint)((int)(uVar46 | _UNK_150631e08) < (int)param_2);
  auVar54._12_4_ = -(uint)((int)(uVar46 | _UNK_150631e0c) < (int)param_2);
  lVar44 = uVar47 * 0xc;
  auVar68 = *(undefined1 (*) [16])(param_6 + lVar44);
  fVar4 = auVar68._12_4_;
  auVar69 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar44);
  fVar3 = auVar69._0_4_;
  fVar5 = auVar69._12_4_;
  auVar59 = *(undefined1 (*) [16])(param_6 + 0x20 + lVar44);
  fVar6 = auVar59._12_4_;
  fVar65 = auVar69._8_4_;
  fVar58 = auVar68._0_4_;
  fVar61 = auVar68._4_4_;
  fVar66 = auVar59._0_4_;
  fVar70 = auVar59._4_4_;
  fVar71 = auVar59._8_4_;
  auVar72._0_8_ = auVar69._8_8_;
  auVar72._8_4_ = fVar70;
  auVar72._12_4_ = fVar71;
  auVar68 = insertps(auVar69,auVar68,0x8c);
  uVar48 = movmskps((int)param_6,auVar54);
  if ((~(byte)uVar48 & 9) == 0) {
    unaff_XMM6._8_8_ = 0;
    unaff_XMM6._0_8_ = *(ulonglong *)(param_4 + (int)(uVar46 * 2));
  }
  else {
    puVar49 = (ushort *)(param_4 + (int)(uVar46 * 2));
    if ((uVar48 & 1) != 0) {
      unaff_XMM6 = ZEXT216(*puVar49);
    }
    if ((uVar48 & 2) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM6._8_8_;
      unaff_XMM7._0_8_ = unaff_XMM6._0_8_ & 0xffffffff0000ffff | (ulonglong)puVar49[1] << 0x10;
      unaff_XMM6 = pblendw(unaff_XMM6,unaff_XMM7,0xf3);
    }
    if ((uVar48 & 4) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM6._8_8_;
      unaff_XMM7._0_8_ = unaff_XMM6._0_8_ & 0xffff0000ffffffff | (ulonglong)puVar49[2] << 0x20;
      unaff_XMM6 = pblendw(unaff_XMM6,unaff_XMM7,0xf7);
    }
    if ((uVar48 & 8) != 0) {
      unaff_XMM6._0_8_ = unaff_XMM6._0_8_ & 0xffffffffffff | (ulonglong)puVar49[3] << 0x30;
    }
  }
  puVar45 = (undefined4 *)(param_1 + lVar44);
  fVar62 = auVar68._0_4_;
  fVar64 = auVar68._4_4_;
  local_d8 = pmovzxwd(unaff_XMM7,unaff_XMM6);
  uVar50 = (ulonglong)(uVar48 & 0xff);
  do {
    if (uVar50 == 0) {
      uVar48 = 0;
    }
    else {
      uVar48 = 0;
      for (uVar47 = uVar50; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x8000000000000000) {
        uVar48 = uVar48 + 1;
      }
    }
    iVar1 = *(int *)(local_d8 + (ulonglong)(uVar48 & 3) * 4);
    auVar73._0_4_ = -(uint)(iVar1 == local_d8._0_4_);
    auVar73._4_4_ = -(uint)(iVar1 == local_d8._4_4_);
    auVar73._8_4_ = -(uint)(iVar1 == local_d8._8_4_);
    auVar73._12_4_ = -(uint)(iVar1 == local_d8._12_4_);
    uVar48 = movmskps(uVar48 & 3,auVar73 & auVar54);
    uVar47 = (ulonglong)(uint)(iVar1 << 6);
    fVar82 = *(float *)(param_5 + uVar47);
    fVar83 = *(float *)(param_5 + 0x10 + uVar47);
    fVar84 = *(float *)(param_5 + 0x20 + uVar47);
    fVar86 = *(float *)(param_5 + 0x30 + uVar47);
    auVar74._0_4_ = fVar86 + fVar84 * fVar62 + fVar83 * fVar61 + fVar82 * fVar58;
    auVar74._4_4_ = fVar86 + fVar84 * fVar64 + fVar83 * fVar3 + fVar82 * fVar4;
    auVar74._8_4_ = fVar86 + fVar84 * fVar66 + fVar83 * fVar5 + fVar82 * fVar65;
    auVar74._12_4_ = fVar86 + fVar84 * fVar6 + fVar83 * fVar71 + fVar82 * fVar70;
    bVar52 = (uVar48 & 1) != 0;
    fVar82 = unaff_XMM6._0_4_;
    fVar83 = unaff_XMM6._4_4_;
    fVar84 = unaff_XMM6._8_4_;
    fVar86 = unaff_XMM6._12_4_;
    if (bVar52) {
      fVar82 = auVar74._0_4_;
      fVar83 = auVar74._4_4_;
      fVar84 = auVar74._8_4_;
      fVar86 = auVar74._12_4_;
    }
    fVar81 = *(float *)(param_5 + 4 + uVar47);
    fVar87 = *(float *)(param_5 + 8 + uVar47);
    fVar75 = *(float *)(param_5 + 0x14 + uVar47);
    fVar88 = *(float *)(param_5 + 0x18 + uVar47);
    fVar77 = *(float *)(param_5 + 0x24 + uVar47);
    fVar89 = *(float *)(param_5 + 0x28 + uVar47);
    fVar79 = *(float *)(param_5 + 0x34 + uVar47);
    fVar76 = fVar79 + fVar77 * fVar62 + fVar75 * fVar61 + fVar81 * fVar58;
    fVar78 = fVar79 + fVar77 * fVar64 + fVar75 * fVar3 + fVar81 * fVar4;
    fVar80 = fVar79 + fVar77 * fVar66 + fVar75 * fVar5 + fVar81 * fVar65;
    fVar75 = fVar79 + fVar77 * fVar6 + fVar75 * fVar71 + fVar81 * fVar70;
    fVar81 = *(float *)(param_5 + 0x38 + uVar47);
    fVar77 = fVar81 + fVar89 * fVar62 + fVar88 * fVar61 + fVar87 * fVar58;
    fVar79 = fVar81 + fVar89 * fVar64 + fVar88 * fVar3 + fVar87 * fVar4;
    fVar85 = fVar81 + fVar89 * fVar66 + fVar88 * fVar5 + fVar87 * fVar65;
    fVar81 = fVar81 + fVar89 * fVar6 + fVar88 * fVar71 + fVar87 * fVar70;
    cVar2 = (char)((char)uVar48 << 4) >> 4;
    if (bVar52) {
      auVar22._4_4_ = fVar83;
      auVar22._0_4_ = fVar82;
      auVar22._8_4_ = fVar84;
      auVar22._12_4_ = fVar86;
      auVar68 = blendps(unaff_XMM6,auVar22,1);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = fVar77;
      fVar83 = fVar79;
      fVar84 = fVar85;
      fVar86 = fVar81;
      fVar87 = fVar76;
      fVar88 = fVar78;
      fVar89 = fVar80;
      fVar90 = fVar75;
      if ((uVar48 & 2) != 0) goto LAB_140a96cad;
LAB_140a96c03:
      auVar42._4_4_ = fVar88;
      auVar42._0_4_ = fVar87;
      auVar42._8_4_ = fVar89;
      auVar42._12_4_ = fVar90;
      auVar69 = blendps(auVar59,auVar42,1);
      auVar28._4_4_ = fVar83;
      auVar28._0_4_ = fVar82;
      auVar28._8_4_ = fVar84;
      auVar28._12_4_ = fVar86;
      auVar59 = blendps(auVar72,auVar28,1);
      auVar37._4_4_ = uVar55;
      auVar37._0_4_ = uVar53;
      auVar37._8_4_ = uVar56;
      auVar37._12_4_ = uVar57;
      auVar68 = blendps(auVar68,auVar37,2);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = auVar69._0_4_;
      fVar83 = auVar69._4_4_;
      fVar84 = auVar69._8_4_;
      fVar86 = auVar69._12_4_;
      fVar87 = auVar59._0_4_;
      fVar88 = auVar59._4_4_;
      fVar89 = auVar59._8_4_;
      fVar90 = auVar59._12_4_;
      if ((uVar48 & 4) == 0) goto LAB_140a96c3a;
LAB_140a96cf0:
      auVar21._4_4_ = fVar83;
      auVar21._0_4_ = fVar82;
      auVar21._8_4_ = fVar84;
      auVar21._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar21,2);
      auVar32._4_4_ = fVar88;
      auVar32._0_4_ = fVar87;
      auVar32._8_4_ = fVar89;
      auVar32._12_4_ = fVar90;
      auVar59 = blendps(auVar59,auVar32,2);
      auVar39._4_4_ = auVar74._4_4_;
      auVar39._0_4_ = auVar74._0_4_;
      auVar39._8_4_ = auVar74._8_4_;
      auVar39._12_4_ = auVar74._12_4_;
      auVar68 = blendps(auVar68,auVar39,4);
      fVar82 = fVar76;
      fVar83 = fVar78;
      fVar84 = fVar80;
      fVar86 = fVar75;
      fVar87 = fVar77;
      fVar88 = fVar79;
      fVar89 = fVar85;
      fVar90 = fVar81;
      if (-1 < cVar2) goto LAB_140a96d2e;
LAB_140a96c6c:
      auVar19._4_4_ = fVar83;
      auVar19._0_4_ = fVar82;
      auVar19._8_4_ = fVar84;
      auVar19._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar19,4);
      if (cVar2 < '\0') goto LAB_140a96c79;
LAB_140a96d3f:
      fVar76 = auVar69._0_4_;
      fVar78 = auVar69._4_4_;
      fVar80 = auVar69._8_4_;
      fVar75 = auVar69._12_4_;
      auVar31._4_4_ = fVar88;
      auVar31._0_4_ = fVar87;
      auVar31._8_4_ = fVar89;
      auVar31._12_4_ = fVar90;
      auVar63 = blendps(auVar59,auVar31,4);
    }
    else {
      auVar17._4_4_ = fVar83;
      auVar17._0_4_ = fVar82;
      auVar17._8_4_ = fVar84;
      auVar17._12_4_ = fVar86;
      auVar68 = blendps(unaff_XMM6,auVar17,1);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = auVar72._0_4_;
      fVar83 = auVar72._4_4_;
      fVar84 = auVar72._8_4_;
      fVar86 = auVar72._12_4_;
      fVar87 = auVar59._0_4_;
      fVar88 = auVar59._4_4_;
      fVar89 = auVar59._8_4_;
      fVar90 = auVar59._12_4_;
      if ((uVar48 & 2) == 0) goto LAB_140a96c03;
LAB_140a96cad:
      auVar43._4_4_ = fVar88;
      auVar43._0_4_ = fVar87;
      auVar43._8_4_ = fVar89;
      auVar43._12_4_ = fVar90;
      auVar69 = blendps(auVar59,auVar43,1);
      auVar33._4_4_ = fVar83;
      auVar33._0_4_ = fVar82;
      auVar33._8_4_ = fVar84;
      auVar33._12_4_ = fVar86;
      auVar59 = blendps(auVar72,auVar33,1);
      auVar40._4_4_ = auVar74._4_4_;
      auVar40._0_4_ = auVar74._0_4_;
      auVar40._8_4_ = auVar74._8_4_;
      auVar40._12_4_ = auVar74._12_4_;
      auVar68 = blendps(auVar68,auVar40,2);
      uVar53 = auVar68._0_4_;
      uVar55 = auVar68._4_4_;
      uVar56 = auVar68._8_4_;
      uVar57 = auVar68._12_4_;
      fVar82 = fVar76;
      fVar83 = fVar78;
      fVar84 = fVar80;
      fVar86 = fVar75;
      fVar87 = fVar77;
      fVar88 = fVar79;
      fVar89 = fVar85;
      fVar90 = fVar81;
      if ((uVar48 & 4) != 0) goto LAB_140a96cf0;
LAB_140a96c3a:
      auVar18._4_4_ = fVar83;
      auVar18._0_4_ = fVar82;
      auVar18._8_4_ = fVar84;
      auVar18._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar18,2);
      auVar29._4_4_ = fVar88;
      auVar29._0_4_ = fVar87;
      auVar29._8_4_ = fVar89;
      auVar29._12_4_ = fVar90;
      auVar59 = blendps(auVar59,auVar29,2);
      auVar38._4_4_ = uVar55;
      auVar38._0_4_ = uVar53;
      auVar38._8_4_ = uVar56;
      auVar38._12_4_ = uVar57;
      auVar68 = blendps(auVar68,auVar38,4);
      fVar82 = auVar69._0_4_;
      fVar83 = auVar69._4_4_;
      fVar84 = auVar69._8_4_;
      fVar86 = auVar69._12_4_;
      fVar87 = auVar59._0_4_;
      fVar88 = auVar59._4_4_;
      fVar89 = auVar59._8_4_;
      fVar90 = auVar59._12_4_;
      if (cVar2 < '\0') goto LAB_140a96c6c;
LAB_140a96d2e:
      auVar20._4_4_ = fVar83;
      auVar20._0_4_ = fVar82;
      auVar20._8_4_ = fVar84;
      auVar20._12_4_ = fVar86;
      auVar69 = blendps(auVar69,auVar20,4);
      auVar74 = auVar68;
      if (-1 < cVar2) goto LAB_140a96d3f;
LAB_140a96c79:
      auVar30._4_4_ = fVar88;
      auVar30._0_4_ = fVar87;
      auVar30._8_4_ = fVar89;
      auVar30._12_4_ = fVar90;
      auVar63 = blendps(auVar59,auVar30,4);
    }
    if (-1 < cVar2) {
      fVar77 = auVar63._0_4_;
      fVar79 = auVar63._4_4_;
      fVar85 = auVar63._8_4_;
      fVar81 = auVar63._12_4_;
    }
    unaff_XMM6 = blendps(auVar68,auVar74,8);
    auVar8._4_4_ = fVar78;
    auVar8._0_4_ = fVar76;
    auVar8._8_4_ = fVar80;
    auVar8._12_4_ = fVar75;
    auVar59 = blendps(auVar69,auVar8,8);
    auVar11._4_4_ = fVar79;
    auVar11._0_4_ = fVar77;
    auVar11._8_4_ = fVar85;
    auVar11._12_4_ = fVar81;
    auVar72 = blendps(auVar63,auVar11,8);
    uVar50 = uVar50 & ~(ulonglong)uVar48;
    if (uVar50 == 0) {
      auVar68 = insertps(unaff_XMM6,auVar59,0x30);
      auVar60._0_8_ = auVar59._4_8_;
      auVar60._8_4_ = auVar72._0_4_;
      auVar60._12_4_ = auVar72._4_4_;
      auVar68 = insertps(auVar68,auVar72,0x20);
      *puVar45 = auVar68._0_4_;
      puVar45[1] = auVar68._12_4_;
      puVar45[2] = auVar68._8_4_;
      puVar45[3] = auVar68._4_4_;
      auVar68 = blendps(auVar60,unaff_XMM6,4);
      puVar45[4] = auVar68._0_4_;
      puVar45[5] = auVar68._12_4_;
      puVar45[6] = auVar68._8_4_;
      puVar45[7] = auVar68._4_4_;
      puVar45[8] = auVar72._8_4_;
      puVar45[9] = unaff_XMM6._12_4_;
      puVar45[10] = auVar59._12_4_;
      puVar45[0xb] = auVar72._12_4_;
      return;
    }
  } while( true );
}

