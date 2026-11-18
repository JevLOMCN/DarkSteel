// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// FUN_14f75c7f0 @ 14f75c7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75c7f0(longlong param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)((longlong)_Dst + 0x20),*(undefined8 *)((longlong)_Dst + 0x28),
                    "crypto\\kdf\\hkdf.c",0xb6);
  CRYPTO_clear_free(*(undefined8 *)((longlong)_Dst + 0x10),*(undefined8 *)((longlong)_Dst + 0x18),
                    "crypto\\kdf\\hkdf.c",0xb7);
  OPENSSL_cleanse((longlong)_Dst + 0x30);
  memset(_Dst,0,0x438);
  return 1;
}

// FUN_14f75c870 @ 14f75c870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f75c870(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  lVar4 = *(longlong *)(piVar1 + 2);
  if (lVar4 == 0) {
    ERR_put_error(0x34,0x66,0x69,"crypto\\kdf\\hkdf.c",0xc4);
    return false;
  }
  lVar2 = *(longlong *)(piVar1 + 8);
  if (lVar2 != 0) {
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      lVar4 = FUN_14f75cf40(lVar4,*(undefined8 *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),lVar2,
                            *(undefined8 *)(piVar1 + 10),piVar1 + 0xc,
                            *(undefined8 *)(piVar1 + 0x10c),param_2,*param_3,0x14f75c880);
    }
    else if (iVar3 == 1) {
      if (param_2 == 0) {
        iVar3 = EVP_MD_size();
        *param_3 = (longlong)iVar3;
        return true;
      }
      lVar4 = FUN_14f75d200(lVar4,*(undefined8 *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),lVar2,
                            *(undefined8 *)(piVar1 + 10),param_2,param_3);
    }
    else {
      if (iVar3 != 2) {
        return false;
      }
      lVar4 = FUN_14f75d010(lVar4,lVar2,*(undefined8 *)(piVar1 + 10),piVar1 + 0xc,
                            *(undefined8 *)(piVar1 + 0x10c),param_2,*param_3);
    }
    return lVar4 != 0;
  }
  ERR_put_error(0x34,0x66,0x68,"crypto\\kdf\\hkdf.c",200);
  return false;
}

// FUN_14f75c9e0 @ 14f75c9e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75c9e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75c9ec;
  lVar1 = CRYPTO_zalloc(0x438,"crypto\\kdf\\hkdf.c",0x33);
  if (lVar1 == 0) {
    ERR_put_error(0x34,0x6c,0x41,"crypto\\kdf\\hkdf.c",0x34,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}

// FUN_14f75ca50 @ 14f75ca50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75ca50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                    "crypto\\kdf\\hkdf.c",0x40);
  CRYPTO_clear_free(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                    "crypto\\kdf\\hkdf.c",0x41);
  OPENSSL_cleanse(lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x430));
  CRYPTO_free(lVar1,"crypto\\kdf\\hkdf.c",0x43);
  return;
}

// FUN_14f75cad0 @ 14f75cad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75cad0(longlong param_1,int param_2,int param_3,void *param_4)

{
  int *piVar1;
  longlong lVar2;
  size_t _Size;
  
  piVar1 = *(int **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1003) {
    if (param_4 == (void *)0x0) {
      return 0;
    }
    *(void **)(piVar1 + 2) = param_4;
  }
  else if (param_2 == 0x1004) {
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (*(longlong *)(piVar1 + 4) != 0) {
        CRYPTO_clear_free(*(longlong *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),
                          "crypto\\kdf\\hkdf.c",0x5e);
      }
      lVar2 = CRYPTO_memdup(param_4,_Size,"crypto\\kdf\\hkdf.c",0x60);
      *(longlong *)(piVar1 + 4) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      *(size_t *)(piVar1 + 6) = _Size;
      return 1;
    }
  }
  else {
    if (param_2 == 0x1005) {
      if (-1 < param_3) {
        if (*(longlong *)(piVar1 + 8) != 0) {
          CRYPTO_clear_free(*(longlong *)(piVar1 + 8),*(undefined8 *)(piVar1 + 10),
                            "crypto\\kdf\\hkdf.c",0x6c);
        }
        lVar2 = CRYPTO_memdup(param_4,_Size,"crypto\\kdf\\hkdf.c",0x6e);
        *(longlong *)(piVar1 + 8) = lVar2;
        if (lVar2 != 0) {
          *(size_t *)(piVar1 + 10) = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 == 0x1006) {
      if ((param_3 != 0) && (param_4 != (void *)0x0)) {
        if (param_3 < 0) {
          return 0;
        }
        if (0x400 - piVar1[0x10c] < param_3) {
          return 0;
        }
        memcpy((void *)((longlong)piVar1 + *(longlong *)(piVar1 + 0x10c) + 0x30),param_4,_Size);
        *(size_t *)(piVar1 + 0x10c) = *(longlong *)(piVar1 + 0x10c) + _Size;
      }
    }
    else {
      if (param_2 != 0x1007) {
        return 0xfffffffe;
      }
      *piVar1 = param_3;
    }
  }
  return 1;
}

// FUN_14f75cc60 @ 14f75cc60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75cc60(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = 0;
  lVar6 = lVar5;
  while (lVar7 = lVar6 + 1, param_2[lVar6] == (&s_mode)[lVar6]) {
    lVar6 = lVar7;
    if (lVar7 == 5) {
      iVar1 = strcmp(param_3,"EXTRACT_AND_EXPAND");
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = strcmp(param_3,"EXTRACT_ONLY");
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          iVar1 = strcmp(param_3,"EXPAND_ONLY");
          if (iVar1 != 0) {
            return 0;
          }
          uVar2 = 2;
        }
      }
      uVar3 = EVP_PKEY_CTX_ctrl(param_1,0xffffffff,0x400,0x1007,uVar2,0);
      return uVar3;
    }
  }
  lVar6 = lVar5;
  if (((*param_2 == s_md) && (param_2[1] == DAT_1534b5c49)) && (param_2[2] == DAT_1534b5c4a)) {
    uVar3 = EVP_PKEY_CTX_md(param_1,0x400,0x1003,param_3);
    return uVar3;
  }
  do {
    lVar4 = lVar6 + 1;
    lVar7 = lVar5;
    if (param_2[lVar6] != (&s_salt)[lVar6]) {
      do {
        lVar4 = lVar7 + 1;
        lVar6 = lVar5;
        if (param_2[lVar7] != "hexsalt"[lVar7]) {
          do {
            lVar4 = lVar6 + 1;
            lVar7 = lVar5;
            if (param_2[lVar6] != (&s_key)[lVar6]) {
              do {
                lVar4 = lVar7 + 1;
                lVar6 = lVar5;
                if (param_2[lVar7] != (&s_hexkey)[lVar7]) {
                  do {
                    lVar7 = lVar6 + 1;
                    if (param_2[lVar6] != (&s_info)[lVar6]) {
                      do {
                        lVar6 = lVar5 + 1;
                        if (param_2[lVar5] != "hexinfo"[lVar5]) {
                          ERR_put_error(0x34,0x67,0x67,"crypto\\kdf\\hkdf.c",0xae,0x14f75cc75);
                          return 0xfffffffe;
                        }
                        lVar5 = lVar6;
                      } while (lVar6 != 8);
                      uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1006,param_3);
                      return uVar3;
                    }
                    lVar6 = lVar7;
                  } while (lVar7 != 5);
                  uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1006,param_3);
                  return uVar3;
                }
                lVar7 = lVar4;
              } while (lVar4 != 7);
              uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1005,param_3);
              return uVar3;
            }
            lVar6 = lVar4;
          } while (lVar4 != 4);
          uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1005,param_3);
          return uVar3;
        }
        lVar7 = lVar4;
      } while (lVar4 != 8);
      uVar3 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1004,param_3);
      return uVar3;
    }
    lVar6 = lVar4;
  } while (lVar4 != 5);
  uVar3 = EVP_PKEY_CTX_str2ctrl(param_1,0x1004,param_3);
  return uVar3;
}

// FUN_14f75cf40 @ 14f75cf40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f75cf40(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 *local_88;
  undefined4 local_78 [4];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f75cf4e;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = local_78;
  local_90 = local_68;
  local_98 = in_stack_00000028;
  lVar1 = HMAC(param_1);
  uVar2 = 0;
  if (lVar1 != 0) {
    local_88 = (undefined4 *)in_stack_00000048;
    local_90 = (undefined1 *)in_stack_00000040;
    local_98 = in_stack_00000038;
    uVar2 = FUN_14f75d010(param_1,local_68,local_78[0],in_stack_00000030);
    OPENSSL_cleanse(local_68,0x40);
  }
  return uVar2;
}

// FUN_14f75d010 @ 14f75d010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f75d010(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                      undefined8 param_5,longlong param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [8];
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  longlong lVar9;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar9 = 0;
  lVar8 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_4;
  iVar1 = EVP_MD_size();
  uVar7 = (ulonglong)iVar1;
  uVar6 = param_7 / uVar7 + 1;
  if (param_7 % uVar7 == 0) {
    uVar6 = param_7 / uVar7;
  }
  if ((uVar6 < 0x100) && (param_6 != 0)) {
    local_a8 = uVar6;
    lVar2 = HMAC_CTX_new();
    lVar3 = 0;
    if (lVar2 != 0) {
      local_d8 = 0;
      iVar1 = HMAC_Init_ex(lVar2,local_b8,local_c0 & 0xffffffff,param_1);
      lVar3 = lVar9;
      if ((iVar1 != 0) && (uVar5 = 1, lVar4 = lVar9, lVar3 = param_6, uVar6 != 0)) {
        do {
          local_c8[0] = (undefined1)uVar5;
          if (1 < (uint)uVar5) {
            local_d8 = 0;
            iVar1 = HMAC_Init_ex(lVar2,0,0,0);
            lVar3 = lVar9;
            if ((iVar1 == 0) || (iVar1 = HMAC_Update(lVar2,local_98,uVar7), iVar1 == 0)) break;
          }
          iVar1 = HMAC_Update(lVar2,local_b0,param_5);
          lVar3 = lVar8;
          if ((iVar1 == 0) ||
             ((iVar1 = HMAC_Update(lVar2,local_c8,1), iVar1 == 0 ||
              (iVar1 = HMAC_Final(lVar2,local_98,0), iVar1 == 0)))) break;
          _Size = param_7 - lVar4;
          if (uVar7 + lVar4 <= param_7) {
            _Size = uVar7;
          }
          memcpy((void *)(param_6 + lVar4),local_98,_Size);
          uVar5 = (ulonglong)((uint)uVar5 + 1);
          lVar4 = lVar4 + _Size;
          lVar3 = param_6;
          if (local_a8 < uVar5) break;
        } while( true );
      }
      OPENSSL_cleanse(local_98,0x40);
      HMAC_CTX_free(lVar2);
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}

// FUN_14f75d200 @ 14f75d200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75d200(void)

{
  longlong lVar1;
  undefined8 in_stack_00000030;
  ulonglong *in_stack_00000038;
  undefined4 local_18;
  
  lVar1 = HMAC();
  if (lVar1 == 0) {
    return 0;
  }
  *in_stack_00000038 = (ulonglong)local_18;
  return in_stack_00000030;
}

