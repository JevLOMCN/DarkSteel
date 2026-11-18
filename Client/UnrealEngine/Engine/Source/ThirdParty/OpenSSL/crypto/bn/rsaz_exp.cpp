// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// RSAZ_1024_mod_exp_avx2 @ 14f7858b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RSAZ_1024_mod_exp_avx2
               (ulonglong *param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_1728 [32];
  undefined8 local_1708;
  ulonglong *local_16f8;
  ulonglong local_16f0;
  undefined1 *local_16e8;
  ulonglong local_16d8 [16];
  undefined1 local_1658 [64];
  undefined1 local_1618 [320];
  undefined1 auStack_14d8 [320];
  undefined1 auStack_1398 [320];
  undefined1 auStack_1258 [4608];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f7858c7;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1728;
  lVar11 = -(ulonglong)((int)&stack0x00000090 - 0x16e8U & 0x3f);
  puVar5 = local_1618 + lVar11;
  lVar6 = 0x140;
  puVar1 = auStack_1258 + lVar11;
  if (((uint)puVar5 & 0xfff) + 0x140 < 0x1000) {
    puVar10 = auStack_14d8 + lVar11;
    lVar6 = 0x280;
    puVar8 = puVar5;
  }
  else {
    puVar8 = auStack_1398 + lVar11;
    puVar10 = puVar5;
  }
  puVar5 = puVar5 + lVar6;
  local_16f8 = param_1;
  local_16f0 = param_4;
  local_16e8 = puVar1;
  rsaz_1024_norm2red_avx2(puVar8,param_4);
  rsaz_1024_norm2red_avx2(puVar5,param_2);
  rsaz_1024_norm2red_avx2(puVar1,param_5);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar1,puVar1,puVar1,puVar8);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar1,puVar1,&DAT_1534dbec0,puVar8);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar1,&DAT_1534dbd80,puVar8);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar5,puVar5,puVar1,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0);
  rsaz_1024_scatter5_avx2(puVar1,puVar5,1);
  local_1708._0_4_ = 1;
  rsaz_1024_sqr_avx2(puVar10,puVar5,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,2);
  local_1708._0_4_ = 1;
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,4);
  local_1708._0_4_ = 1;
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,8);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  lVar11 = 0x10;
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x10);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x11);
  rsaz_1024_gather5_avx2(puVar10,puVar1,2);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,3);
  local_1708._0_4_ = 1;
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,6);
  local_1708._0_4_ = 1;
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0xc);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x18);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x19);
  rsaz_1024_gather5_avx2(puVar10,puVar1,4);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,5);
  local_1708._0_4_ = 1;
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,10);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x14);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x15);
  rsaz_1024_gather5_avx2(puVar10,puVar1,6);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,7);
  local_1708._0_4_ = 1;
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0xe);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x1c);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x1d);
  rsaz_1024_gather5_avx2(puVar10,puVar1,8);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,9);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x12);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x13);
  rsaz_1024_gather5_avx2(puVar10,puVar1,10);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0xb);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x16);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x17);
  rsaz_1024_gather5_avx2(puVar10,puVar1,0xc);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0xd);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x1a);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x1b);
  rsaz_1024_gather5_avx2(puVar10,puVar1,0xe);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0xf);
  local_1708 = CONCAT44(local_1708._4_4_,1);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x1e);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  rsaz_1024_scatter5_avx2(puVar1,puVar10,0x1f);
  rsaz_1024_gather5_avx2(puVar10,puVar1,param_3[0x7f] >> 3);
  puVar1 = local_16e8;
  uVar7 = 0x3f6;
  do {
    local_1708 = CONCAT44(local_1708._4_4_,5);
    rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
    bVar4 = (byte)uVar7 & 7;
    uVar3 = uVar7;
    if ((int)uVar7 < 0) {
      uVar3 = uVar7 + 7;
      bVar4 = bVar4 - 8;
    }
    uVar7 = uVar7 - 5;
    rsaz_1024_gather5_avx2
              (puVar5,puVar1,
               (int)(uint)CONCAT11(param_3[((int)uVar3 >> 3) + 1],param_3[(int)uVar3 >> 3]) >>
               (bVar4 & 0x1f) & 0x1f);
    local_1708 = param_6;
    rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  } while (uVar7 < 0x80000000);
  local_1708 = CONCAT44(local_1708._4_4_,4);
  rsaz_1024_sqr_avx2(puVar10,puVar10,puVar8,param_6);
  rsaz_1024_gather5_avx2(puVar5,puVar1,*param_3 & 0xf);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,puVar5,puVar8);
  local_1708 = param_6;
  rsaz_1024_mul_avx2(puVar10,puVar10,&DAT_1534dbd80,puVar8);
  puVar2 = local_16f8;
  rsaz_1024_red2norm_avx2(local_16f8,puVar10);
  lVar6 = bn_sub_words(local_16d8,puVar2,local_16f0,0x10);
  local_16f0 = -lVar6;
  local_16f8 = (ulonglong *)~local_16f0;
  puVar9 = puVar2;
  do {
    *puVar9 = *(ulonglong *)
               ((longlong)local_16d8 + (-8 - (longlong)puVar2) + (longlong)(puVar9 + 1)) &
              (ulonglong)local_16f8 | local_16f0 & *puVar9;
    lVar11 = lVar11 + -1;
    puVar9 = puVar9 + 1;
  } while (lVar11 != 0);
  OPENSSL_cleanse(local_1658,0x1600);
  OPENSSL_cleanse(local_16d8,0x80);
  return;
}

// RSAZ_512_mod_exp @ 14f7860a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void RSAZ_512_mod_exp(ulonglong *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                     undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined1 auStack_598 [32];
  undefined1 *local_578;
  uint local_570;
  ulonglong local_568;
  ulonglong local_560;
  ulonglong local_558 [8];
  undefined1 local_518 [24];
  undefined1 auStack_500 [1024];
  undefined1 auStack_100 [64];
  longlong lStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f7860b7;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_598;
  lStack_c0 = -*param_4;
  uStack_b8 = ~param_4[1];
  uStack_b0 = ~param_4[2];
  uStack_a8 = ~param_4[3];
  uStack_a0 = ~param_4[4];
  uStack_98 = ~param_4[5];
  uStack_90 = ~param_4[6];
  uStack_88 = ~param_4[7];
  local_568 = param_3;
  rsaz_512_scatter4(auStack_500,&lStack_c0,0);
  local_578 = (undefined1 *)param_5;
  rsaz_512_mul(auStack_100,param_2,param_6,param_4);
  rsaz_512_scatter4(auStack_500,auStack_100,1);
  local_578 = (undefined1 *)CONCAT44(local_578._4_4_,1);
  rsaz_512_sqr(&lStack_c0,auStack_100,param_4,param_5);
  rsaz_512_scatter4(auStack_500,&lStack_c0,2);
  iVar5 = 3;
  do {
    local_578 = auStack_500;
    local_570 = iVar5;
    rsaz_512_mul_scatter4(&lStack_c0,auStack_100,param_4,param_5);
    uVar2 = local_568;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  bVar1 = *(byte *)(local_568 + 0x3f);
  rsaz_512_gather4(&lStack_c0,auStack_500,bVar1 >> 4);
  local_578 = (undefined1 *)CONCAT44(local_578._4_4_,4);
  rsaz_512_sqr(&lStack_c0,&lStack_c0,param_4,param_5);
  local_570 = bVar1 & 0xf;
  local_578 = (undefined1 *)param_5;
  rsaz_512_mul_gather4(&lStack_c0,&lStack_c0,auStack_500,param_4);
  lVar4 = 0x3e;
  do {
    bVar1 = *(byte *)(lVar4 + uVar2);
    local_578 = (undefined1 *)CONCAT44(local_578._4_4_,4);
    rsaz_512_sqr(&lStack_c0,&lStack_c0,param_4,param_5);
    local_570 = (uint)(bVar1 >> 4);
    local_578 = (undefined1 *)param_5;
    rsaz_512_mul_gather4(&lStack_c0,&lStack_c0,auStack_500,param_4);
    local_578 = (undefined1 *)CONCAT44(local_578._4_4_,4);
    rsaz_512_sqr(&lStack_c0,&lStack_c0,param_4,param_5);
    local_570 = bVar1 & 0xf;
    local_578 = (undefined1 *)param_5;
    rsaz_512_mul_gather4(&lStack_c0,&lStack_c0,auStack_500,param_4);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  rsaz_512_mul_by_one(param_1,&lStack_c0,param_4,param_5);
  lVar3 = 8;
  lVar4 = bn_sub_words(local_558,param_1,param_4,8);
  local_568 = -lVar4;
  puVar6 = param_1;
  do {
    local_560 = ~local_568;
    *puVar6 = *(ulonglong *)
               ((longlong)local_558 + (-8 - (longlong)param_1) + (longlong)(puVar6 + 1)) &
              ~local_568 | local_568 & *puVar6;
    lVar3 = lVar3 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar3 != 0);
  OPENSSL_cleanse(local_518,0x4c0);
  OPENSSL_cleanse(local_558,0x40);
  return;
}

// FUN_14f786390 @ 14f786390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f786390(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  lVar1 = bn_sub_words(param_4,param_1,param_3,param_5 & 0xffffffff);
  uVar3 = param_2 - lVar1;
  if (param_5 != 0) {
    puVar2 = param_1;
    do {
      *puVar2 = *(ulonglong *)((param_4 - (longlong)param_1) + -8 + (longlong)(puVar2 + 1)) & ~uVar3
                | uVar3 & *puVar2;
      param_5 = param_5 - 1;
      puVar2 = puVar2 + 1;
    } while (param_5 != 0);
  }
  return uVar3;
}

// FUN_14f786430 @ 14f786430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f786430(longlong param_1,ulonglong param_2,longlong param_3,ulonglong *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  
  if (param_5 != 0) {
    puVar2 = param_4;
    do {
      puVar1 = puVar2 + 1;
      *(ulonglong *)((param_1 - (longlong)param_4) + -8 + (longlong)puVar1) =
           ~param_2 & *puVar2 |
           *(ulonglong *)((param_3 - (longlong)param_4) + -8 + (longlong)puVar1) & param_2;
      param_5 = param_5 + -1;
      puVar2 = puVar1;
    } while (param_5 != 0);
  }
  return;
}

// FUN_14f7864a0 @ 14f7864a0

ulonglong FUN_14f7864a0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  return ~param_1 & param_3 | param_1 & param_2;
}

// FUN_14f7864d0 @ 14f7864d0

undefined8 FUN_14f7864d0(undefined8 param_1)

{
  return param_1;
}

