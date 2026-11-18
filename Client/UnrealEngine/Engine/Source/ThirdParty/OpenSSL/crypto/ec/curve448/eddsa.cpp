// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 13

// ED448_public_from_private @ 14f79ac90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ED448_public_from_private(void)

{
  int iVar1;
  
  iVar1 = c448_ed448_derive_public_key();
  return iVar1 == -1;
}

// ED448_sign @ 14f79acc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ED448_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  iVar1 = c448_ed448_sign(param_1,param_5,param_4,param_2,param_3,0,param_6,param_7,0x14f79acca);
  return iVar1 == -1;
}

// ED448_verify @ 14f79ad20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ED448_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = c448_ed448_verify(param_3,param_4,param_1,param_2,0,param_5,param_6);
  return iVar1 == -1;
}

// ED448ph_sign @ 14f79ad80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ED448ph_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = c448_ed448_sign(param_1,param_4,param_3,param_2,0x40,1,param_5,param_6,0x14f79ad8a);
  return iVar1 == -1;
}

// ED448ph_verify @ 14f79ade0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ED448ph_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined1 param_5)

{
  int iVar1;
  
  iVar1 = c448_ed448_verify(param_2,param_3,param_1,0x40,1,param_4,param_5);
  return iVar1 == -1;
}

// c448_ed448_convert_private_key_to_x448 @ 14f79ae30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void c448_ed448_convert_private_key_to_x448(undefined8 param_1,undefined8 param_2)

{
  FUN_14f79b7b0(param_1,0x38,param_2,0x39);
  return;
}

// c448_ed448_derive_public_key @ 14f79ae60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 c448_ed448_derive_public_key(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [64];
  undefined1 local_158 [256];
  byte local_58 [55];
  byte local_21;
  undefined1 local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x14f79ae75;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 != 0) {
    uVar3 = EVP_shake256();
    iVar1 = EVP_DigestInit_ex(lVar2,uVar3,0);
    if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar2,param_2,0x39), iVar1 != 0)) &&
       (iVar1 = EVP_DigestFinalXOF(lVar2,local_58,0x39), iVar1 != 0)) {
      EVP_MD_CTX_free(lVar2);
      local_58[0] = local_58[0] & 0xfc;
      local_21 = local_21 | 0x80;
      local_20 = 0;
      curve448_scalar_decode_long(local_198,local_58,0x39);
      uVar4 = 1;
      do {
        curve448_scalar_halve(local_198,local_198);
        uVar4 = uVar4 * 2;
      } while (uVar4 < 4);
      curve448_precomputed_scalarmul(local_158,curve448_precomputed_base,local_198);
      curve448_point_mul_by_ratio_and_encode_like_eddsa(param_1,local_158);
      curve448_scalar_destroy(local_198);
      curve448_point_destroy(local_158);
      OPENSSL_cleanse(local_58,0x39);
      return 0xffffffff;
    }
    EVP_MD_CTX_free(lVar2);
  }
  return 0;
}

// c448_ed448_sign @ 14f79afd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
c448_ed448_sign(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined1 local_300 [56];
  undefined1 local_2c8 [56];
  undefined1 local_290 [56];
  undefined1 local_258 [64];
  undefined1 local_218 [256];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  byte local_d8 [55];
  byte local_a1;
  undefined1 local_a0;
  undefined1 local_9f [71];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_318 = param_7;
  local_310 = param_3;
  local_308 = param_1;
  lVar4 = EVP_MD_CTX_new();
  uVar7 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (lVar4 != 0) {
    lVar5 = EVP_MD_CTX_new();
    uVar8 = 0;
    if (lVar5 != 0) {
      uVar6 = EVP_shake256();
      iVar3 = EVP_DigestInit_ex(lVar5,uVar6,0);
      uVar8 = uVar7;
      if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(lVar5,param_2,0x39), iVar3 == 0)) ||
         (iVar3 = EVP_DigestFinalXOF(lVar5,local_d8,0x72), iVar3 == 0)) {
        EVP_MD_CTX_free(lVar5);
      }
      else {
        EVP_MD_CTX_free(lVar5);
        local_d8[0] = local_d8[0] & 0xfc;
        local_a1 = local_a1 | 0x80;
        local_a0 = 0;
        curve448_scalar_decode_long(local_258,local_d8,0x39);
        local_328 = param_8;
        iVar3 = FUN_14f79b6b0(lVar4,param_6,0,param_7);
        if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(lVar4,local_9f,0x39), iVar3 == 0)) ||
           (iVar3 = EVP_DigestUpdate(lVar4,param_4,param_5), iVar3 == 0)) {
          OPENSSL_cleanse(local_d8,0x72);
        }
        else {
          OPENSSL_cleanse(local_d8,0x72);
          iVar3 = EVP_DigestFinalXOF(lVar4,local_d8,0x72);
          if (iVar3 != 0) {
            curve448_scalar_decode_long(local_290,local_d8,0x72);
            OPENSSL_cleanse(local_d8,0x72);
            curve448_scalar_halve(local_2c8,local_290);
            uVar1 = 2;
            do {
              curve448_scalar_halve(local_2c8,local_2c8);
              uVar1 = uVar1 * 2;
            } while (uVar1 < 4);
            curve448_precomputed_scalarmul(local_218,curve448_precomputed_base,local_2c8);
            curve448_point_mul_by_ratio_and_encode_like_eddsa(&local_118,local_218);
            curve448_point_destroy(local_218);
            curve448_scalar_destroy(local_2c8);
            local_328 = param_8;
            iVar3 = FUN_14f79b6b0(lVar4,param_6,0,local_318);
            if (((iVar3 != 0) && (iVar3 = EVP_DigestUpdate(lVar4,&local_118,0x39), iVar3 != 0)) &&
               ((iVar3 = EVP_DigestUpdate(lVar4,local_310,0x39), iVar3 != 0 &&
                ((iVar3 = EVP_DigestUpdate(lVar4,param_4,param_5), iVar3 != 0 &&
                 (iVar3 = EVP_DigestFinalXOF(lVar4,local_d8,0x72), iVar3 != 0)))))) {
              curve448_scalar_decode_long(local_300,local_d8,0x72);
              OPENSSL_cleanse(local_d8,0x72);
              curve448_scalar_mul(local_300,local_300,local_258);
              curve448_scalar_add(local_300,local_300,local_290);
              puVar2 = local_308;
              OPENSSL_cleanse(local_308,0x72);
              *puVar2 = local_118;
              puVar2[1] = uStack_110;
              puVar2[2] = local_108;
              puVar2[3] = uStack_100;
              *(undefined4 *)(puVar2 + 4) = (undefined4)local_f8;
              *(undefined4 *)((longlong)puVar2 + 0x24) = local_f8._4_4_;
              *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_f0;
              *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_f0._4_4_;
              puVar2[6] = local_e8;
              *(undefined1 *)(puVar2 + 7) = local_e0;
              curve448_scalar_encode((longlong)puVar2 + 0x39,local_300);
              curve448_scalar_destroy(local_258);
              curve448_scalar_destroy(local_290);
              curve448_scalar_destroy(local_300);
              uVar8 = 0xffffffff;
            }
          }
        }
      }
    }
    EVP_MD_CTX_free(lVar4);
    return uVar8;
  }
  return 0;
}

// c448_ed448_sign_prehash @ 14f79b3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void c448_ed448_sign_prehash(void)

{
  c448_ed448_sign();
  return;
}

// c448_ed448_verify @ 14f79b410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
c448_ed448_verify(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,byte param_7)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  undefined1 local_338 [56];
  undefined1 local_300 [56];
  undefined1 local_2c8 [256];
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_368;
  iVar5 = 0x38;
  lVar4 = 0x38;
  do {
    bVar1 = (&DAT_1534e6110)[lVar4];
    bVar2 = *(byte *)(param_1 + lVar4 + 0x39);
    if (bVar2 >= bVar1 && bVar2 != bVar1) goto LAB_14f79b494;
    if (bVar2 < bVar1) break;
    iVar5 = iVar5 + -1;
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  if (iVar5 < 0) {
LAB_14f79b494:
    uVar3 = 0;
  }
  else {
    uVar3 = curve448_point_decode_like_eddsa_and_mul_by_ratio(local_2c8,param_2);
    if (((int)uVar3 == -1) &&
       (uVar3 = curve448_point_decode_like_eddsa_and_mul_by_ratio(local_1c8,param_1),
       (int)uVar3 == -1)) {
      lVar4 = EVP_MD_CTX_new();
      if (lVar4 != 0) {
        local_348 = (ulonglong)param_7;
        iVar5 = FUN_14f79b6b0(lVar4,param_5,0,param_6);
        if ((((iVar5 != 0) && (iVar5 = EVP_DigestUpdate(lVar4,param_1,0x39), iVar5 != 0)) &&
            (iVar5 = EVP_DigestUpdate(lVar4,param_2,0x39), iVar5 != 0)) &&
           ((iVar5 = EVP_DigestUpdate(lVar4,param_3,param_4), iVar5 != 0 &&
            (iVar5 = EVP_DigestFinalXOF(lVar4,local_c8,0x72), iVar5 != 0)))) {
          EVP_MD_CTX_free(lVar4);
          curve448_scalar_decode_long(local_338,local_c8,0x72);
          OPENSSL_cleanse(local_c8,0x72);
          curve448_scalar_sub(local_338,&curve448_scalar_zero,local_338);
          curve448_scalar_decode_long(local_300,param_1 + 0x39,0x39);
          curve448_base_double_scalarmul_non_secret(local_2c8,local_300,local_2c8,local_338);
          uVar3 = curve448_point_eq(local_2c8,local_1c8);
          return uVar3;
        }
      }
      EVP_MD_CTX_free(lVar4);
      uVar3 = 0;
    }
  }
  return uVar3;
}

// c448_ed448_verify_prehash @ 14f79b640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void c448_ed448_verify_prehash(void)

{
  c448_ed448_verify();
  return;
}

// FUN_14f79b6b0 @ 14f79b6b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14f79b6b0(undefined8 param_1,char param_2,char param_3,undefined8 param_4,ulonglong param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  char local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_18 = DAT_1534e61d8;
  local_20 = _s_SigEd448;
  if (param_5 < 0x100) {
    local_27 = (undefined1)param_5;
    local_28 = ((param_2 != '\0') + '\x01') - (param_3 == '\0');
    uVar3 = EVP_shake256();
    iVar2 = EVP_DigestInit_ex(param_1,uVar3);
    if (iVar2 != 0) {
      lVar4 = -1;
      do {
        lVar1 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (*(char *)((longlong)&local_20 + lVar1) != '\0');
      iVar2 = EVP_DigestUpdate(param_1,&local_20);
      if (((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(param_1,&local_28,2), iVar2 != 0)) &&
         (iVar2 = EVP_DigestUpdate(param_1,param_4,param_5), iVar2 != 0)) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// FUN_14f79b7b0 @ 14f79b7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f79b7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 != 0) {
    uVar3 = EVP_shake256();
    iVar1 = EVP_DigestInit_ex(lVar2,uVar3,0);
    if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar2,param_3,param_4), iVar1 != 0)) &&
       (iVar1 = EVP_DigestFinalXOF(lVar2,param_1,param_2), iVar1 != 0)) {
      EVP_MD_CTX_free(lVar2);
      return 0xffffffff;
    }
    EVP_MD_CTX_free(lVar2);
  }
  return 0;
}

