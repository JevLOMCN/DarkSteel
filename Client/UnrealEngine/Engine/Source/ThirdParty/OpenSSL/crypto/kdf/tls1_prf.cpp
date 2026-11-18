// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// FUN_14f75be60 @ 14f75be60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75be60(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f75be6c;
  lVar1 = CRYPTO_zalloc(0x420,"crypto\\kdf\\tls1_prf.c",0x28);
  if (lVar1 == 0) {
    ERR_put_error(0x34,0x6e,0x41,"crypto\\kdf\\tls1_prf.c",0x29,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}

// FUN_14f75bed0 @ 14f75bed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f75bed0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),
                    "crypto\\kdf\\tls1_prf.c",0x34);
  OPENSSL_cleanse(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x418));
  CRYPTO_free(lVar1,"crypto\\kdf\\tls1_prf.c",0x36);
  return;
}

// FUN_14f75bf30 @ 14f75bf30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75bf30(longlong param_1,int param_2,int param_3,void *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t _Size;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 == 0x1000) {
    *puVar1 = param_4;
  }
  else {
    if (param_2 == 0x1001) {
      if (-1 < param_3) {
        if (puVar1[1] != 0) {
          CRYPTO_clear_free(puVar1[1],puVar1[2],"crypto\\kdf\\tls1_prf.c",0x45);
        }
        OPENSSL_cleanse(puVar1 + 3,puVar1[0x83]);
        puVar1[0x83] = 0;
        lVar2 = CRYPTO_memdup(param_4,_Size,"crypto\\kdf\\tls1_prf.c",0x48);
        puVar1[1] = lVar2;
        if (lVar2 != 0) {
          puVar1[2] = _Size;
          return 1;
        }
      }
      return 0;
    }
    if (param_2 != 0x1002) {
      return 0xfffffffe;
    }
    if ((param_3 != 0) && (param_4 != (void *)0x0)) {
      if (param_3 < 0) {
        return 0;
      }
      if (0x400 - *(int *)(puVar1 + 0x83) < param_3) {
        return 0;
      }
      memcpy((void *)((longlong)puVar1 + puVar1[0x83] + 0x18),param_4,_Size);
      puVar1[0x83] = puVar1[0x83] + _Size;
    }
  }
  return 1;
}

// FUN_14f75c060 @ 14f75c060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75c060(longlong param_1,char *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f75c075;
  if (param_3 == 0) {
    ERR_put_error(0x34,100,0x66,"crypto\\kdf\\tls1_prf.c",0x61,0x14f75c075);
    return 0;
  }
  if (((*param_2 == s_md) && (param_2[1] == DAT_1534b5c49)) && (param_2[2] == DAT_1534b5c4a)) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    lVar3 = EVP_get_digestbyname(param_3);
    if (lVar3 == 0) {
      ERR_put_error(0x34,100,100,"crypto\\kdf\\tls1_prf.c",0x69,uVar6);
      return 0;
    }
    *plVar1 = lVar3;
    return 1;
  }
  lVar5 = 0;
  lVar3 = lVar5;
  do {
    lVar4 = lVar3 + 1;
    if (param_2[lVar3] != "secret"[lVar3]) {
      iVar2 = strcmp(param_2,"hexsecret");
      lVar3 = lVar5;
      if (iVar2 == 0) {
        uVar6 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1001,param_3);
        return uVar6;
      }
      do {
        lVar4 = lVar3 + 1;
        if (param_2[lVar3] != (&s_seed)[lVar3]) {
          do {
            lVar3 = lVar5 + 1;
            if (param_2[lVar5] != "hexseed"[lVar5]) {
              ERR_put_error(0x34,100,0x67,"crypto\\kdf\\tls1_prf.c",0x78);
              return 0xfffffffe;
            }
            lVar5 = lVar3;
          } while (lVar3 != 8);
          uVar6 = EVP_PKEY_CTX_hex2ctrl(param_1,0x1002,param_3);
          return uVar6;
        }
        lVar3 = lVar4;
      } while (lVar4 != 5);
      uVar6 = EVP_PKEY_CTX_str2ctrl(param_1,0x1002,param_3);
      return uVar6;
    }
    lVar3 = lVar4;
  } while (lVar4 != 7);
  uVar6 = EVP_PKEY_CTX_str2ctrl(param_1,0x1001);
  return uVar6;
}

// FUN_14f75c230 @ 14f75c230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f75c230(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    ERR_put_error(0x34,0x65,0x69,"crypto\\kdf\\tls1_prf.c",0x81);
    return 0;
  }
  if (plVar1[1] == 0) {
    ERR_put_error(0x34,0x65,0x6b,"crypto\\kdf\\tls1_prf.c",0x85);
    return 0;
  }
  if (plVar1[0x83] == 0) {
    ERR_put_error(0x34,0x65,0x6a,"crypto\\kdf\\tls1_prf.c",0x89);
    return 0;
  }
  uVar2 = FUN_14f75c590(*plVar1,plVar1[1],plVar1[2],plVar1 + 3,plVar1[0x83],param_2,*param_3);
  return uVar2;
}

// FUN_14f75c310 @ 14f75c310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_14f75c310(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,void *param_6,ulonglong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 local_b8;
  int local_b4;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f75c327;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  lVar2 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b4 = EVP_MD_size();
  lVar3 = lVar2;
  lVar4 = lVar2;
  if (0 < local_b4) {
    lVar2 = EVP_MD_CTX_new();
    lVar3 = EVP_MD_CTX_new();
    lVar4 = EVP_MD_CTX_new();
    if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
      EVP_MD_CTX_set_flags(lVar4,8);
      local_a8 = EVP_PKEY_new_raw_private_key(0x357,0,param_2,param_3);
      if (((((local_a8 != 0) &&
            (local_c8 = local_a8, iVar1 = EVP_DigestSignInit(lVar4,0,param_1,0), iVar1 != 0)) &&
           ((iVar1 = EVP_MD_CTX_copy_ex(lVar2,lVar4), iVar1 != 0 &&
            ((param_4 == 0 || (iVar1 = EVP_DigestUpdate(lVar2,param_4,param_5), iVar1 != 0)))))) &&
          (iVar1 = EVP_DigestSignFinal(lVar2,local_98,&local_b0), iVar1 != 0)) &&
         (iVar1 = EVP_MD_CTX_copy_ex(lVar2,lVar4), iVar1 != 0)) {
        while( true ) {
          iVar1 = EVP_DigestUpdate(lVar2,local_98,local_b0);
          if (((iVar1 == 0) ||
              ((uVar5 = (ulonglong)local_b4, uVar5 < param_7 &&
               (iVar1 = EVP_MD_CTX_copy_ex(lVar3,lVar2), iVar1 == 0)))) ||
             ((param_4 != 0 && (iVar1 = EVP_DigestUpdate(lVar2,param_4,param_5), iVar1 == 0))))
          goto LAB_14f75c527;
          if (param_7 <= uVar5) break;
          iVar1 = EVP_DigestSignFinal(lVar2,param_6,&local_a0);
          if (iVar1 == 0) goto LAB_14f75c527;
          param_6 = (void *)((longlong)param_6 + local_a0);
          param_7 = param_7 - local_a0;
          iVar1 = EVP_DigestSignFinal(lVar3,local_98,&local_b0);
          if ((iVar1 == 0) || (iVar1 = EVP_MD_CTX_copy_ex(lVar2,lVar4), iVar1 == 0))
          goto LAB_14f75c527;
        }
        iVar1 = EVP_DigestSignFinal(lVar2,local_98,&local_b0);
        if (iVar1 != 0) {
          memcpy(param_6,local_98,param_7);
          local_b8 = 1;
        }
      }
    }
  }
LAB_14f75c527:
  EVP_PKEY_free(local_a8);
  EVP_MD_CTX_free(lVar2);
  EVP_MD_CTX_free(lVar3);
  EVP_MD_CTX_free(lVar4);
  OPENSSL_cleanse(local_98,0x40);
  return local_b8;
}

// FUN_14f75c590 @ 14f75c590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f75c590(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                       undefined8 param_5,ulonglong *param_6,ulonglong param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  iVar3 = EVP_MD_type();
  if (iVar3 != 0x72) {
    iVar3 = FUN_14f75c310(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return (ulonglong)(iVar3 != 0);
  }
  lVar10 = (ulonglong)((uint)param_3 & 1) + (param_3 >> 1);
  uVar4 = EVP_md5();
  uVar6 = param_5;
  uVar5 = FUN_14f75c310(uVar4,param_2,lVar10,param_4,param_5,param_6,param_7);
  uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar5 != 0) {
    uVar5 = CRYPTO_malloc(param_7,"crypto\\kdf\\tls1_prf.c",0x104);
    if (uVar5 == 0) {
      ERR_put_error(0x34,0x6f,0x41,"crypto\\kdf\\tls1_prf.c",CONCAT44(uVar11,0x105));
    }
    else {
      uVar6 = EVP_sha1();
      iVar3 = FUN_14f75c310(uVar6,(param_3 >> 1) + param_2,lVar10,param_4,param_5,uVar5,param_7);
      if (iVar3 != 0) {
        uVar9 = 0;
        if (param_7 != 0) {
          if ((0x1f < param_7) &&
             (((ulonglong *)((param_7 - 1) + uVar5) < param_6 ||
              ((longlong)param_6 + (param_7 - 1) < uVar5)))) {
            puVar7 = param_6;
            do {
              uVar9 = uVar9 + 0x20;
              puVar1 = (ulonglong *)((uVar5 - (longlong)param_6) + (longlong)puVar7);
              uVar2 = puVar1[1];
              *puVar7 = *puVar1 ^ *puVar7;
              puVar7[1] = uVar2 ^ puVar7[1];
              puVar1 = (ulonglong *)((uVar5 - (longlong)param_6) + -0x10 + (longlong)(puVar7 + 4));
              uVar2 = puVar1[1];
              puVar7[2] = *puVar1 ^ puVar7[2];
              puVar7[3] = uVar2 ^ puVar7[3];
              puVar7 = puVar7 + 4;
            } while (uVar9 < (param_7 & 0xffffffffffffffe0));
          }
          if (uVar9 < param_7) {
            pbVar8 = (byte *)(uVar9 + (longlong)param_6);
            lVar10 = param_7 - uVar9;
            do {
              *pbVar8 = *pbVar8 ^ pbVar8[uVar5 - (longlong)param_6];
              pbVar8 = pbVar8 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        CRYPTO_clear_free(uVar5,param_7,"crypto\\kdf\\tls1_prf.c",0x10f);
        return 1;
      }
      CRYPTO_clear_free(uVar5,param_7,"crypto\\kdf\\tls1_prf.c",0x10a);
    }
    uVar5 = 0;
  }
  return uVar5;
}

