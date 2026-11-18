// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// BN_bntest_rand @ 14f755340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_bntest_rand(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_14f7556c0(1,param_1,param_2,param_3,param_4);
  return;
}

// BN_generate_dsa_nonce @ 14f755370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
BN_generate_dsa_nonce
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  uint local_228 [2];
  undefined8 local_220;
  undefined1 local_218 [224];
  undefined1 local_138 [64];
  undefined1 local_f8 [64];
  undefined1 local_b8 [96];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f755387;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_220 = param_6;
  iVar2 = BN_num_bits(param_2);
  uVar6 = 0;
  uVar5 = ((int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3) + 8;
  lVar3 = CRYPTO_malloc(uVar5,"crypto\\bn\\bn_rand.c",0xdf);
  uVar7 = 0;
  if (lVar3 != 0) {
    iVar2 = BN_bn2binpad(param_3,local_b8,0x60);
    uVar7 = uVar6;
    if (iVar2 < 0) {
      local_238 = CONCAT44(local_238._4_4_,0xea);
      ERR_put_error(3,0x8c,0x75,"crypto\\bn\\bn_rand.c");
    }
    else {
      local_228[0] = 0;
      if (uVar5 != 0) {
        do {
          iVar2 = RAND_priv_bytes(local_138,0x40);
          if (iVar2 != 1) goto LAB_14f75554a;
          SHA512_Init(local_218);
          SHA512_Update(local_218,local_228,4);
          SHA512_Update(local_218,local_b8,0x60);
          SHA512_Update(local_218,param_4,param_5);
          SHA512_Update(local_218,local_138,0x40);
          SHA512_Final(local_f8,local_218);
          uVar1 = uVar5 - local_228[0];
          if (0x40 < uVar5 - local_228[0]) {
            uVar1 = 0x40;
          }
          memcpy((void *)((ulonglong)local_228[0] + lVar3),local_f8,(ulonglong)uVar1);
          local_228[0] = local_228[0] + uVar1;
          param_6 = local_220;
        } while (local_228[0] < uVar5);
      }
      lVar4 = BN_bin2bn(lVar3,uVar5,param_1);
      if (lVar4 != 0) {
        local_238 = param_6;
        iVar2 = BN_div(0,param_1,param_1,param_2);
        uVar7 = 0;
        if (iVar2 == 1) {
          uVar7 = 1;
        }
      }
    }
  }
LAB_14f75554a:
  CRYPTO_free(lVar3,"crypto\\bn\\bn_rand.c",0x106);
  OPENSSL_cleanse(local_b8,0x60);
  return uVar7;
}

// BN_priv_rand @ 14f7555a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_priv_rand(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_14f7556c0(2,param_1,param_2,param_3,param_4);
  return;
}

// BN_priv_rand_range @ 14f7555d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_priv_rand_range(undefined8 param_1,undefined8 param_2)

{
  FUN_14f755910(2,param_1,param_2);
  return;
}

// BN_pseudo_rand @ 14f755600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_pseudo_rand(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_14f7556c0(0,param_1,param_2,param_3,param_4);
  return;
}

// BN_pseudo_rand_range @ 14f755630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_pseudo_rand_range(undefined8 param_1,undefined8 param_2)

{
  FUN_14f755910(0,param_1,param_2);
  return;
}

// BN_rand @ 14f755660

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_rand(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_14f7556c0(0,param_1,param_2,param_3,param_4);
  return;
}

// BN_rand_range @ 14f755690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_rand_range(undefined8 param_1,undefined8 param_2)

{
  FUN_14f755910(0,param_1,param_2);
  return;
}

// FUN_14f7556c0 @ 14f7556c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f7556c0(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  byte local_res18 [16];
  
  lVar7 = 0;
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      BN_set_word(param_2,0);
      return 1;
    }
  }
  else if ((-1 < param_3) && ((param_3 != 1 || (param_4 < 1)))) {
    iVar1 = (int)(param_3 + 7 + (param_3 + 7 >> 0x1f & 7U)) >> 3;
    lVar5 = (longlong)iVar1;
    uVar6 = param_3 - 1U & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    pbVar3 = (byte *)CRYPTO_malloc(lVar5,"crypto\\bn\\bn_rand.c",0x27);
    if (pbVar3 == (byte *)0x0) {
      ERR_put_error(3,0x7f,0x41,"crypto\\bn\\bn_rand.c",0x29);
    }
    else {
      if (param_1 == 0) {
        iVar2 = RAND_bytes();
      }
      else {
        iVar2 = RAND_priv_bytes(pbVar3,iVar1);
      }
      if (0 < iVar2) {
        if ((param_1 == 1) && (lVar4 = lVar7, 0 < lVar5)) {
          do {
            iVar2 = RAND_bytes(local_res18,1);
            if (iVar2 < 1) goto LAB_14f75589b;
            if ((local_res18[0] < 0x80) || (lVar4 < 1)) {
              if (local_res18[0] < 0x2a) {
                pbVar3[lVar4] = 0;
              }
              else if (local_res18[0] < 0x54) {
                pbVar3[lVar4] = 0xff;
              }
            }
            else {
              pbVar3[lVar4] = pbVar3[lVar4 + -1];
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < lVar5);
        }
        if (-1 < param_4) {
          if (param_4 == 0) {
            *pbVar3 = *pbVar3 | (byte)(1 << (uVar6 & 0x1f));
          }
          else if (uVar6 == 0) {
            pbVar3[1] = pbVar3[1] | 0x80;
            *pbVar3 = 1;
          }
          else {
            *pbVar3 = *pbVar3 | '\x03' << ((char)uVar6 - 1U & 0x1f);
          }
        }
        *pbVar3 = *pbVar3 & ~(byte)(0xff << ((char)uVar6 + 1U & 0x1f));
        if (param_5 != 0) {
          pbVar3[iVar1 + -1] = pbVar3[iVar1 + -1] | 1;
        }
        lVar4 = BN_bin2bn(pbVar3,iVar1,param_2);
        lVar7 = 0;
        if (lVar4 != 0) {
          lVar7 = 1;
        }
      }
    }
LAB_14f75589b:
    CRYPTO_clear_free(pbVar3,lVar5,"crypto\\bn\\bn_rand.c",0x58);
    return lVar7;
  }
  ERR_put_error(3,0x7f,0x76,"crypto\\bn\\bn_rand.c",0x5d);
  return 0;
}

// FUN_14f755910 @ 14f755910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f755910(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f755923;
  iVar3 = 100;
  if ((*(int *)(param_3 + 0x10) != 0) || (iVar1 = BN_is_zero(param_3), iVar1 != 0)) {
    ERR_put_error(3,0x8a,0x73,"crypto\\bn\\bn_rand.c",0x77,uVar5);
    return 0;
  }
  iVar1 = BN_num_bits(param_3);
  if (iVar1 == 1) {
    BN_set_word(param_2,0);
  }
  else {
    iVar2 = BN_is_bit_set(param_3,iVar1 + -2);
    if ((iVar2 == 0) && (iVar2 = BN_is_bit_set(param_3,iVar1 + -3), iVar2 == 0)) {
      do {
        iVar2 = FUN_14f7556c0(param_1,param_2,iVar1 + 1,0xffffffff,0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = BN_cmp(param_2,param_3);
        if (-1 < iVar2) {
          iVar2 = BN_sub(param_2,param_2,param_3);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = BN_cmp(param_2,param_3);
          if ((-1 < iVar2) && (iVar2 = BN_sub(param_2,param_2,param_3), iVar2 == 0)) {
            return 0;
          }
        }
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          uVar4 = 0x99;
LAB_14f755a84:
          ERR_put_error(3,0x8a,0x71,"crypto\\bn\\bn_rand.c",uVar4);
          return 0;
        }
        iVar2 = BN_cmp(param_2,param_3);
      } while (-1 < iVar2);
    }
    else {
      do {
        iVar2 = FUN_14f7556c0(param_1,param_2,iVar1,0xffffffff,0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          uVar4 = 0xa6;
          goto LAB_14f755a84;
        }
        iVar2 = BN_cmp(param_2,param_3);
      } while (-1 < iVar2);
    }
  }
  return 1;
}

