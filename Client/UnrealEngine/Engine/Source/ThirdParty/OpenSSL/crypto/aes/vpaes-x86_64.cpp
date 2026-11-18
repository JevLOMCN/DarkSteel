// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 19

// _vpaes_encrypt_core @ 140df2a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _vpaes_encrypt_core(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 unaff_XMM15 [16];
  
  uVar4 = 0x10;
  pauVar2 = (undefined1 (*) [16])(ulonglong)*(uint *)param_2[0xf];
  auVar5 = ~unaff_XMM9 & in_XMM0;
  auVar6._0_4_ = auVar5._0_4_ >> 4;
  auVar6._4_4_ = auVar5._4_4_ >> 4;
  auVar6._8_4_ = auVar5._8_4_ >> 4;
  auVar6._12_4_ = auVar5._12_4_ >> 4;
  auVar7 = pshufb(_L_k_ipt,in_XMM0 & unaff_XMM9);
  auVar5 = pshufb(_DAT_140df3600,auVar6);
  pauVar3 = param_2 + 1;
  auVar5 = auVar5 ^ auVar7 ^ *param_2;
  pauVar1 = pauVar3;
  while( true ) {
    auVar6 = ~unaff_XMM9 & auVar5;
    auVar7._0_4_ = auVar6._0_4_ >> 4;
    auVar7._4_4_ = auVar6._4_4_ >> 4;
    auVar7._8_4_ = auVar6._8_4_ >> 4;
    auVar7._12_4_ = auVar6._12_4_ >> 4;
    auVar9 = pshufb(unaff_XMM11,auVar5 & unaff_XMM9);
    auVar5 = auVar5 & unaff_XMM9 ^ auVar7;
    auVar6 = pshufb(unaff_XMM10,auVar7);
    auVar8 = pshufb(unaff_XMM10,auVar5);
    auVar6 = pshufb(unaff_XMM10,auVar6 ^ auVar9);
    auVar6 = auVar6 ^ auVar5;
    auVar5 = pshufb(unaff_XMM10,auVar8 ^ auVar9);
    auVar5 = auVar5 ^ auVar7;
    if (pauVar1 == (undefined1 (*) [16])0x0) break;
    auVar8 = pshufb(unaff_XMM13,auVar6);
    auVar7 = pshufb(unaff_XMM12,auVar5);
    auVar7 = auVar7 ^ auVar8 ^ *pauVar3;
    auVar8 = pshufb(unaff_XMM15,auVar6);
    auVar5 = pshufb(unaff_XMM14,auVar5);
    auVar6 = pshufb(auVar7,*(undefined1 (*) [16])(&L_k_mc_forward + uVar4));
    pauVar3 = pauVar3 + 1;
    auVar6 = auVar6 ^ auVar5 ^ auVar8;
    auVar7 = pshufb(auVar7,*(undefined1 (*) [16])(&L_k_mc_backward + uVar4));
    auVar5 = pshufb(auVar6,*(undefined1 (*) [16])(&L_k_mc_forward + uVar4));
    uVar4 = uVar4 + 0x10 & 0x30;
    pauVar2 = (undefined1 (*) [16])(pauVar2[-1] + 0xf);
    auVar5 = auVar5 ^ auVar7 ^ auVar6;
    pauVar1 = pauVar2;
  }
  auVar6 = pshufb(_L_k_sbo,auVar6);
  auVar5 = pshufb(_DAT_140df3660,auVar5);
  auVar5 = pshufb(auVar5 ^ auVar6 ^ *pauVar3,*(undefined1 (*) [16])(&L_k_sr + uVar4));
  return auVar5._0_8_;
}

// _vpaes_decrypt_core @ 140df2ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _vpaes_decrypt_core(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  
  puVar3 = (undefined *)(ulonglong)*(uint *)param_2[0xf];
  auVar6 = ~unaff_XMM9 & in_XMM0;
  auVar5._0_4_ = auVar6._0_4_ >> 4;
  auVar5._4_4_ = auVar6._4_4_ >> 4;
  auVar5._8_4_ = auVar6._8_4_ >> 4;
  auVar5._12_4_ = auVar6._12_4_ >> 4;
  auVar6 = pshufb(_L_k_dipt,in_XMM0 & unaff_XMM9);
  auVar5 = pshufb(_DAT_140df3820,auVar5);
  uVar4 = ((longlong)puVar3 << 4 ^ 0x30U) & 0x30;
  auVar5 = auVar5 ^ auVar6 ^ *param_2;
  auVar6 = _DAT_140df36a0;
  puVar2 = &L_k_dsbd + uVar4;
  while( true ) {
    param_2 = param_2 + 1;
    auVar7 = ~unaff_XMM9 & auVar5;
    auVar9._0_4_ = auVar7._0_4_ >> 4;
    auVar9._4_4_ = auVar7._4_4_ >> 4;
    auVar9._8_4_ = auVar7._8_4_ >> 4;
    auVar9._12_4_ = auVar7._12_4_ >> 4;
    auVar7 = pshufb(unaff_XMM11,auVar5 & unaff_XMM9);
    auVar5 = auVar5 & unaff_XMM9 ^ auVar9;
    auVar8 = pshufb(unaff_XMM10,auVar9);
    auVar11 = pshufb(unaff_XMM10,auVar5);
    auVar8 = pshufb(unaff_XMM10,auVar8 ^ auVar7);
    auVar8 = auVar8 ^ auVar5;
    auVar5 = pshufb(unaff_XMM10,auVar11 ^ auVar7);
    auVar5 = auVar5 ^ auVar9;
    if (puVar2 == (undefined *)0x0) break;
    auVar9 = pshufb(_L_k_dsb9,auVar8);
    auVar7 = pshufb(_DAT_140df3840,auVar5);
    auVar11 = pshufb(_L_k_dsbd,auVar8);
    auVar7 = pshufb(*param_2 ^ auVar9 ^ auVar7,auVar6);
    auVar9 = pshufb(_DAT_140df3860,auVar5);
    auVar10 = pshufb(_L_k_dsbb,auVar8);
    auVar7 = pshufb(auVar7 ^ auVar11 ^ auVar9,auVar6);
    auVar9 = pshufb(_DAT_140df3880,auVar5);
    auVar8 = pshufb(_L_k_dsbe,auVar8);
    auVar7 = pshufb(auVar7 ^ auVar10 ^ auVar9,auVar6);
    auVar5 = pshufb(_DAT_140df38a0,auVar5);
    auVar1._16_16_ = auVar6;
    auVar1._0_16_ = auVar6;
    auVar6 = auVar1._12_16_;
    auVar5 = auVar7 ^ auVar8 ^ auVar5;
    puVar3 = puVar3 + -1;
    puVar2 = puVar3;
  }
  auVar7 = pshufb(_L_k_dsbo,auVar8);
  auVar6 = pshufb(_DAT_140df38c0,auVar5);
  auVar6 = pshufb(auVar6 ^ auVar7 ^ *param_2,*(undefined1 (*) [16])(&L_k_sr + uVar4));
  return auVar6._0_8_;
}

// _vpaes_schedule_core @ 140df2d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _vpaes_schedule_core(longlong param_1,undefined1 (*param_2) [16],ulonglong param_3)

{
  uint unaff_ESI;
  longlong lVar1;
  undefined1 (*unaff_RDI) [16];
  undefined *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar5 [16];
  undefined8 extraout_XMM0_Qb_04;
  
  L_SEH_end_vpaes_cbc_encrypt();
  auVar5 = *unaff_RDI;
  uVar3 = _vpaes_schedule_transform();
  puVar2 = &L_k_sr;
  if (param_1 == 0) {
    *(undefined8 *)*param_2 = uVar3;
    *(undefined8 *)(*param_2 + 8) = extraout_XMM0_Qb;
  }
  else {
    auVar5 = pshufb(auVar5,*(undefined1 (*) [16])(&L_k_sr + param_3));
    *param_2 = auVar5;
    param_3 = param_3 ^ 0x30;
  }
  if (unaff_ESI < 0xc1) {
    if (unaff_ESI == 0xc0) {
      _vpaes_schedule_transform(*(undefined8 *)(*unaff_RDI + 8));
      lVar1 = 4;
      while( true ) {
        _vpaes_schedule_round();
        _vpaes_schedule_mangle(extraout_XMM0_Qb_01);
        _vpaes_schedule_192_smear();
        _vpaes_schedule_mangle();
        auVar5._0_8_ = _vpaes_schedule_round();
        auVar5._8_8_ = extraout_XMM0_Qb_02;
        lVar1 = lVar1 + -1;
        if (lVar1 == 0) break;
        _vpaes_schedule_mangle();
        _vpaes_schedule_192_smear();
      }
    }
    else {
      lVar1 = 10;
      while( true ) {
        auVar5._0_8_ = _vpaes_schedule_round();
        auVar5._8_8_ = extraout_XMM0_Qb_00;
        lVar1 = lVar1 + -1;
        if (lVar1 == 0) break;
        _vpaes_schedule_mangle();
      }
    }
  }
  else {
    _vpaes_schedule_transform(*(undefined8 *)unaff_RDI[1]);
    lVar1 = 7;
    while( true ) {
      _vpaes_schedule_mangle();
      auVar5._0_8_ = _vpaes_schedule_round();
      auVar5._8_8_ = extraout_XMM0_Qb_03;
      lVar1 = lVar1 + -1;
      if (lVar1 == 0) break;
      _vpaes_schedule_mangle();
      _vpaes_schedule_low_round();
    }
  }
  uVar4 = auVar5._0_8_;
  if (param_1 == 0) {
    auVar5 = pshufb(auVar5,*(undefined1 (*) [16])(puVar2 + param_3));
    uVar4 = auVar5._0_8_;
    param_2 = param_2 + 2;
  }
  param_2 = param_2 + -1;
  uVar3 = _vpaes_schedule_transform(uVar4 ^ (ulonglong)L_k_s63);
  *(undefined8 *)*param_2 = uVar3;
  *(undefined8 *)(*param_2 + 8) = extraout_XMM0_Qb_04;
  return 0;
}

// _vpaes_schedule_192_smear @ 140df2ea0

ulonglong _vpaes_schedule_192_smear(void)

{
  ulonglong unaff_XMM6_Qa;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  
  return unaff_XMM6_Qa ^ CONCAT44((int)unaff_XMM6_Qa,(int)unaff_XMM6_Qa) ^
         CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
}

// _vpaes_schedule_round @ 140df2ec0

/* WARNING: Removing unreachable block (ram,0x000140df2ef2) */
/* WARNING: Removing unreachable block (ram,0x000140df2ee5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong _vpaes_schedule_round(void)

{
  undefined1 auVar1 [32];
  undefined4 in_XMM0_Dd;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong unaff_XMM7_Qa;
  ulonglong uVar7;
  undefined1 unaff_XMM8 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 unaff_XMM13 [16];
  
  uVar7 = unaff_XMM7_Qa ^ unaff_XMM8[0xf];
  auVar2._4_4_ = in_XMM0_Dd;
  auVar2._0_4_ = in_XMM0_Dd;
  auVar2._8_4_ = in_XMM0_Dd;
  auVar2._12_4_ = in_XMM0_Dd;
  auVar1._16_16_ = auVar2;
  auVar1._0_16_ = auVar2;
  auVar2 = ~unaff_XMM9 & auVar1._1_16_;
  auVar3._0_4_ = auVar2._0_4_ >> 4;
  auVar3._4_4_ = auVar2._4_4_ >> 4;
  auVar3._8_4_ = auVar2._8_4_ >> 4;
  auVar3._12_4_ = auVar2._12_4_ >> 4;
  auVar2 = auVar1._1_16_ & unaff_XMM9;
  auVar4 = pshufb(unaff_XMM11,auVar2);
  auVar2 = auVar2 ^ auVar3;
  auVar5 = pshufb(unaff_XMM10,auVar3);
  auVar6 = pshufb(unaff_XMM10,auVar2);
  auVar5 = pshufb(unaff_XMM10,auVar5 ^ auVar4);
  auVar4 = pshufb(unaff_XMM10,auVar6 ^ auVar4);
  auVar5 = pshufb(unaff_XMM13,auVar5 ^ auVar2);
  auVar2 = pshufb(unaff_XMM12,auVar4 ^ auVar3);
  return auVar2._0_8_ ^ auVar5._0_8_ ^ uVar7 << 0x20 ^ uVar7 ^ (ulonglong)L_k_s63;
}

// _vpaes_schedule_low_round @ 140df2ee1

/* WARNING: Removing unreachable block (ram,0x000140df2ef2) */
/* WARNING: Removing unreachable block (ram,0x000140df2ee5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong _vpaes_schedule_low_round(void)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong unaff_XMM7_Qa;
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 unaff_XMM13 [16];
  
  auVar1 = ~unaff_XMM9 & in_XMM0;
  auVar2._0_4_ = auVar1._0_4_ >> 4;
  auVar2._4_4_ = auVar1._4_4_ >> 4;
  auVar2._8_4_ = auVar1._8_4_ >> 4;
  auVar2._12_4_ = auVar1._12_4_ >> 4;
  auVar3 = pshufb(unaff_XMM11,in_XMM0 & unaff_XMM9);
  auVar1 = in_XMM0 & unaff_XMM9 ^ auVar2;
  auVar4 = pshufb(unaff_XMM10,auVar2);
  auVar5 = pshufb(unaff_XMM10,auVar1);
  auVar4 = pshufb(unaff_XMM10,auVar4 ^ auVar3);
  auVar3 = pshufb(unaff_XMM10,auVar5 ^ auVar3);
  auVar4 = pshufb(unaff_XMM13,auVar4 ^ auVar1);
  auVar1 = pshufb(unaff_XMM12,auVar3 ^ auVar2);
  return auVar1._0_8_ ^ auVar4._0_8_ ^ unaff_XMM7_Qa << 0x20 ^ unaff_XMM7_Qa ^ (ulonglong)L_k_s63;
}

// _vpaes_schedule_transform @ 140df2f80

ulonglong _vpaes_schedule_transform(void)

{
  undefined1 (*in_R11) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 unaff_XMM9 [16];
  
  auVar1 = ~unaff_XMM9 & in_XMM0;
  auVar2._0_4_ = auVar1._0_4_ >> 4;
  auVar2._4_4_ = auVar1._4_4_ >> 4;
  auVar2._8_4_ = auVar1._8_4_ >> 4;
  auVar2._12_4_ = auVar1._12_4_ >> 4;
  auVar3 = pshufb(*in_R11,in_XMM0 & unaff_XMM9);
  auVar1 = pshufb(in_R11[1],auVar2);
  return auVar1._0_8_ ^ auVar3._0_8_;
}

// _vpaes_schedule_mangle @ 140df2fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _vpaes_schedule_mangle(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  longlong in_R10;
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 unaff_XMM9 [16];
  
  if (param_1 == 0) {
    pauVar1 = (undefined1 (*) [16])(param_2 + 0x10);
    auVar3 = pshufb(in_XMM0 ^ _L_k_s63,_L_k_mc_forward);
    auVar4 = pshufb(auVar3,_L_k_mc_forward);
    auVar5 = pshufb(auVar4,_L_k_mc_forward);
    auVar5 = auVar3 ^ auVar4 ^ auVar5;
  }
  else {
    auVar3 = ~unaff_XMM9 & in_XMM0;
    auVar5._0_4_ = auVar3._0_4_ >> 4;
    auVar5._4_4_ = auVar3._4_4_ >> 4;
    auVar5._8_4_ = auVar3._8_4_ >> 4;
    auVar5._12_4_ = auVar3._12_4_ >> 4;
    auVar6 = in_XMM0 & unaff_XMM9;
    auVar3 = pshufb(_L_k_dksd,auVar6);
    auVar4 = pshufb(_DAT_140df37a0,auVar5);
    auVar4 = pshufb(auVar4 ^ auVar3,_L_k_mc_forward);
    auVar3 = pshufb(_L_k_dksb,auVar6);
    auVar2 = pshufb(_DAT_140df37c0,auVar5);
    auVar4 = pshufb(auVar2 ^ auVar3 ^ auVar4,_L_k_mc_forward);
    auVar3 = pshufb(_L_k_dkse,auVar6);
    auVar2 = pshufb(_DAT_140df37e0,auVar5);
    auVar4 = pshufb(auVar2 ^ auVar3 ^ auVar4,_L_k_mc_forward);
    auVar3 = pshufb(_L_k_dks9,auVar6);
    auVar5 = pshufb(_DAT_140df3800,auVar5);
    auVar5 = auVar5 ^ auVar3 ^ auVar4;
    pauVar1 = (undefined1 (*) [16])(param_2 + -0x10);
  }
  auVar3 = pshufb(auVar5,*(undefined1 (*) [16])(param_3 + in_R10));
  *pauVar1 = auVar3;
  return;
}

// vpaes_set_encrypt_key @ 140df30b0

undefined8 vpaes_set_encrypt_key(undefined8 param_1,uint param_2,longlong param_3)

{
  *(uint *)(param_3 + 0xf0) = (param_2 >> 5) + 5;
  _vpaes_schedule_core(0,param_3,0x30);
  return 0;
}

// L$SEH_begin_vpaes_set_encrypt_key @ 140df30bd

undefined8 L_SEH_begin_vpaes_set_encrypt_key(undefined8 param_1,uint param_2,longlong param_3)

{
  *(uint *)(param_3 + 0xf0) = (param_2 >> 5) + 5;
  _vpaes_schedule_core(0,param_3,0x30);
  return 0;
}

// vpaes_set_decrypt_key @ 140df3190

undefined8 vpaes_set_decrypt_key(undefined8 param_1,uint param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (param_2 >> 5) + 5;
  *(int *)(param_3 + 0xf0) = iVar1;
  _vpaes_schedule_core
            (1,param_3 + 0x10 + (ulonglong)(uint)(iVar1 * 0x10),param_2 >> 1 & 0x20 ^ 0x20);
  return 0;
}

// L$SEH_begin_vpaes_set_decrypt_key @ 140df319d

undefined8 L_SEH_begin_vpaes_set_decrypt_key(undefined8 param_1,uint param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (param_2 >> 5) + 5;
  *(int *)(param_3 + 0xf0) = iVar1;
  _vpaes_schedule_core
            (1,param_3 + 0x10 + (ulonglong)(uint)(iVar1 * 0x10),param_2 >> 1 & 0x20 ^ 0x20);
  return 0;
}

// vpaes_encrypt @ 140df3280

void vpaes_encrypt(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qb;
  
  L_SEH_end_vpaes_cbc_encrypt(*param_1,param_3);
  uVar1 = _vpaes_encrypt_core();
  *param_2 = uVar1;
  param_2[1] = extraout_XMM0_Qb;
  return;
}

// L$SEH_begin_vpaes_encrypt @ 140df328d

void L_SEH_begin_vpaes_encrypt(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qb;
  
  L_SEH_end_vpaes_cbc_encrypt(*param_1,param_3);
  uVar1 = _vpaes_encrypt_core();
  *param_2 = uVar1;
  param_2[1] = extraout_XMM0_Qb;
  return;
}

// vpaes_decrypt @ 140df3350

void vpaes_decrypt(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qb;
  
  L_SEH_end_vpaes_cbc_encrypt(*param_1,param_3);
  uVar1 = _vpaes_decrypt_core();
  *param_2 = uVar1;
  param_2[1] = extraout_XMM0_Qb;
  return;
}

// L$SEH_begin_vpaes_decrypt @ 140df335d

void L_SEH_begin_vpaes_decrypt(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qb;
  
  L_SEH_end_vpaes_cbc_encrypt(*param_1,param_3);
  uVar1 = _vpaes_decrypt_core();
  *param_2 = uVar1;
  param_2[1] = extraout_XMM0_Qb;
  return;
}

// vpaes_cbc_encrypt @ 140df3420

void vpaes_cbc_encrypt(ulonglong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                      ulonglong *param_5,int param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong extraout_XMM0_Qb;
  ulonglong extraout_XMM0_Qb_00;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = param_3 - 0x10;
  if (0xf < param_3) {
    uVar4 = *param_5;
    uVar7 = param_5[1];
    param_2 = param_2 - (longlong)param_1;
    L_SEH_end_vpaes_cbc_encrypt(uVar2,param_4);
    uVar6 = uVar4;
    if (param_6 == 0) {
      do {
        uVar4 = *param_1;
        uVar8 = param_1[1];
        uVar5 = _vpaes_decrypt_core();
        puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
        *puVar1 = uVar5 ^ uVar6;
        puVar1[1] = extraout_XMM0_Qb_00 ^ uVar7;
        param_1 = param_1 + 2;
        bVar3 = 0xf < uVar2;
        uVar2 = uVar2 - 0x10;
        uVar6 = uVar4;
        uVar7 = uVar8;
      } while (bVar3);
    }
    else {
      do {
        uVar4 = _vpaes_encrypt_core(*param_1 ^ uVar4);
        puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
        *puVar1 = uVar4;
        puVar1[1] = extraout_XMM0_Qb;
        param_1 = param_1 + 2;
        bVar3 = 0xf < uVar2;
        uVar2 = uVar2 - 0x10;
        uVar8 = extraout_XMM0_Qb;
      } while (bVar3);
    }
    *param_5 = uVar4;
    param_5[1] = uVar8;
  }
  return;
}

// L$SEH_begin_vpaes_cbc_encrypt @ 140df342d

void L_SEH_begin_vpaes_cbc_encrypt
               (ulonglong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
               ulonglong *param_5,int param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong extraout_XMM0_Qb;
  ulonglong extraout_XMM0_Qb_00;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = param_3 - 0x10;
  if (0xf < param_3) {
    uVar4 = *param_5;
    uVar7 = param_5[1];
    param_2 = param_2 - (longlong)param_1;
    L_SEH_end_vpaes_cbc_encrypt(uVar2,param_4);
    uVar6 = uVar4;
    if (param_6 == 0) {
      do {
        uVar4 = *param_1;
        uVar8 = param_1[1];
        uVar5 = _vpaes_decrypt_core();
        puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
        *puVar1 = uVar5 ^ uVar6;
        puVar1[1] = extraout_XMM0_Qb_00 ^ uVar7;
        param_1 = param_1 + 2;
        bVar3 = 0xf < uVar2;
        uVar2 = uVar2 - 0x10;
        uVar6 = uVar4;
        uVar7 = uVar8;
      } while (bVar3);
    }
    else {
      do {
        uVar4 = _vpaes_encrypt_core(*param_1 ^ uVar4);
        puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
        *puVar1 = uVar4;
        puVar1[1] = extraout_XMM0_Qb;
        param_1 = param_1 + 2;
        bVar3 = 0xf < uVar2;
        uVar2 = uVar2 - 0x10;
        uVar8 = extraout_XMM0_Qb;
      } while (bVar3);
    }
    *param_5 = uVar4;
    param_5[1] = uVar8;
  }
  return;
}

// L$SEH_end_vpaes_cbc_encrypt @ 140df3560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_end_vpaes_cbc_encrypt(void)

{
  return;
}

