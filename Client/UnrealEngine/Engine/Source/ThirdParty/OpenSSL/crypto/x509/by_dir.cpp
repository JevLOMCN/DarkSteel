// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// FUN_14f6cb040 @ 14f6cb040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f6cb040(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6cb04c;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (param_2 != 2) {
    return 0;
  }
  if (param_4 == 3) {
    uVar3 = X509_get_default_cert_dir_env();
    lVar4 = ossl_safe_getenv(uVar3);
    if (lVar4 == 0) {
      lVar4 = X509_get_default_cert_dir();
    }
    uVar2 = FUN_14f6cb6f0(uVar1,lVar4,1);
    if (uVar2 == 0) {
      ERR_put_error(0xb,0x66,0x67,"crypto\\x509\\by_dir.c",0x54,uVar6);
    }
    return (ulonglong)uVar2;
  }
  uVar5 = FUN_14f6cb6f0(uVar1,param_3,param_4);
  return uVar5;
}

// FUN_14f6cb0e0 @ 14f6cb0e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6cb0e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14f6cb0f0;
  plVar1 = (longlong *)CRYPTO_malloc(0x18,"crypto\\x509\\by_dir.c",0x5f);
  if (plVar1 == (longlong *)0x0) {
    ERR_put_error(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",0x62,uVar4);
    return 0;
  }
  lVar2 = BUF_MEM_new();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x67;
  }
  else {
    plVar1[1] = 0;
    lVar2 = CRYPTO_THREAD_lock_new();
    plVar1[2] = lVar2;
    if (lVar2 != 0) {
      *(longlong **)(param_1 + 0x10) = plVar1;
      return 1;
    }
    BUF_MEM_free(*plVar1);
    uVar3 = 0x6e;
  }
  ERR_put_error(0xb,0x99,0x41,"crypto\\x509\\by_dir.c",uVar3,uVar4);
  CRYPTO_free(plVar1,"crypto\\x509\\by_dir.c",0x75);
  return 0;
}

// FUN_14f6cb1e0 @ 14f6cb1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cb1e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  OPENSSL_sk_pop_free(puVar1[1],FUN_14f6cb940);
  BUF_MEM_free(*puVar1);
  CRYPTO_THREAD_lock_free(puVar1[2]);
  CRYPTO_free(puVar1,"crypto\\x509\\by_dir.c",0x96);
  return;
}

// FUN_14f6cb240 @ 14f6cb240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f6cb240(longlong param_1,int param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  char *local_238;
  uint local_230;
  undefined4 local_228;
  longlong local_220;
  int local_218;
  undefined4 local_210 [2];
  char *local_208;
  longlong local_200;
  undefined4 *local_1f8;
  int local_1f0 [2];
  undefined1 *local_1e8;
  undefined1 local_1d8 [24];
  longlong local_1c0;
  longlong local_190;
  undefined1 local_88 [48];
  ulonglong local_58;
  ulonglong uVar6;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_268;
  iVar4 = 0;
  lVar14 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_200 = param_1;
  local_1f8 = param_4;
  local_1f0[0] = param_2;
  if (param_2 == 1) {
    local_208 = "";
    local_190 = param_3;
LAB_14f6cb300:
    local_1e8 = local_1d8;
    lVar14 = BUF_MEM_new();
    if (lVar14 != 0) {
      lVar13 = *(longlong *)(param_1 + 0x10);
      local_220 = lVar13;
      uVar15 = X509_NAME_hash(param_3);
      local_218 = 0;
      local_228 = uVar15;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar13 + 8));
      iVar16 = iVar4;
      if (0 < iVar2) {
        do {
          puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(lVar13 + 8),iVar4);
          pcVar11 = (char *)*puVar5;
          uVar12 = 0;
          cVar1 = *pcVar11;
          uVar8 = 0;
          uVar3 = uVar12;
          uVar6 = uVar8;
          while ((cVar1 != '\0' && (uVar3 = (uint)uVar6, uVar3 < 0x80000000))) {
            pcVar11 = pcVar11 + 1;
            uVar3 = uVar3 + 1;
            cVar1 = *pcVar11;
            uVar6 = (ulonglong)uVar3;
          }
          lVar7 = BUF_MEM_grow(lVar14,(longlong)(int)((uVar3 & 0x7fffffff) + 0x11));
          if (lVar7 == 0) {
            local_248 = 0x103;
            uVar15 = 0x41;
            goto LAB_14f6cb646;
          }
          if ((param_2 == 2) && (puVar5[2] != 0)) {
            local_210[0] = uVar15;
            CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar13 + 0x10));
            iVar4 = OPENSSL_sk_find(puVar5[2],local_210);
            if (iVar4 < 0) {
              CRYPTO_THREAD_unlock(*(undefined8 *)(local_220 + 0x10));
              pcVar11 = local_208;
            }
            else {
              uVar8 = OPENSSL_sk_value(puVar5[2],iVar4);
              uVar12 = *(uint *)(uVar8 + 4);
              CRYPTO_THREAD_unlock(*(undefined8 *)(local_220 + 0x10));
              pcVar11 = local_208;
            }
          }
          else {
            uVar8 = 0;
            pcVar11 = local_208;
          }
          while( true ) {
            local_248 = 0x2f;
            local_240 = uVar15;
            local_238 = pcVar11;
            local_230 = uVar12;
            BIO_snprintf(*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10),"%s%c%08lx.%s%d"
                         ,*puVar5);
            iVar4 = _stat64i32(*(undefined8 *)(lVar14 + 8),local_88);
            if (iVar4 < 0) break;
            if (param_2 == 1) {
              iVar4 = X509_load_cert_file(param_1,*(undefined8 *)(lVar14 + 8),
                                          *(undefined4 *)(puVar5 + 1));
LAB_14f6cb481:
              if (iVar4 == 0) break;
            }
            else if (param_2 == 2) {
              iVar4 = X509_load_crl_file(param_1,*(undefined8 *)(lVar14 + 8),
                                         *(undefined4 *)(puVar5 + 1));
              goto LAB_14f6cb481;
            }
            uVar12 = uVar12 + 1;
          }
          X509_STORE_lock(*(undefined8 *)(param_1 + 0x18));
          uVar15 = OPENSSL_sk_find(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_1f0);
          puVar9 = (undefined4 *)
                   OPENSSL_sk_value(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),uVar15);
          X509_STORE_unlock(*(undefined8 *)(param_1 + 0x18));
          iVar16 = 0;
          lVar13 = local_220;
          if ((param_2 == 2) && (0 < (int)uVar12)) {
            CRYPTO_THREAD_write_lock(*(undefined8 *)(local_220 + 0x10));
            if (uVar8 == 0) {
              local_210[0] = local_228;
              uVar15 = OPENSSL_sk_find(puVar5[2],local_210);
              uVar8 = OPENSSL_sk_value(puVar5[2],uVar15);
              if (uVar8 == 0) {
                puVar10 = (undefined4 *)CRYPTO_malloc(8,"crypto\\x509\\by_dir.c",0x161);
                if (puVar10 == (undefined4 *)0x0) {
                  CRYPTO_THREAD_unlock(*(undefined8 *)(local_220 + 0x10));
                  uVar15 = 0x41;
                  local_248 = 0x164;
                }
                else {
                  *puVar10 = local_228;
                  puVar10[1] = uVar12;
                  iVar4 = OPENSSL_sk_push(puVar5[2],puVar10);
                  if (iVar4 != 0) {
                    OPENSSL_sk_sort(puVar5[2]);
                    param_1 = local_200;
                    lVar13 = local_220;
                    CRYPTO_THREAD_unlock(*(undefined8 *)(local_220 + 0x10));
                    goto LAB_14f6cb58e;
                  }
                  CRYPTO_THREAD_unlock(*(undefined8 *)(local_220 + 0x10));
                  CRYPTO_free(puVar10,"crypto\\x509\\by_dir.c",0x16c);
                  uVar15 = 0x41;
                  local_248 = 0x16d;
                }
                goto LAB_14f6cb646;
              }
            }
            lVar13 = local_220;
            if (*(int *)(uVar8 + 4) < (int)uVar12) {
              *(uint *)(uVar8 + 4) = uVar12;
            }
            CRYPTO_THREAD_unlock(*(undefined8 *)(local_220 + 0x10));
          }
LAB_14f6cb58e:
          if (puVar9 != (undefined4 *)0x0) {
            iVar16 = 1;
            *local_1f8 = *puVar9;
            *(undefined8 *)(local_1f8 + 2) = *(undefined8 *)(puVar9 + 2);
            ERR_clear_error();
            break;
          }
          iVar4 = local_218 + 1;
          local_218 = iVar4;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar13 + 8));
          uVar15 = local_228;
        } while (iVar4 < iVar2);
      }
      goto LAB_14f6cb65a;
    }
    local_248 = 0xf4;
    uVar15 = 7;
  }
  else {
    if (param_2 == 2) {
      local_208 = "r";
      local_1c0 = param_3;
      goto LAB_14f6cb300;
    }
    local_248 = 0xef;
    uVar15 = 0x70;
  }
LAB_14f6cb646:
  ERR_put_error(0xb,0x67,uVar15,"crypto\\x509\\by_dir.c");
  iVar16 = 0;
LAB_14f6cb65a:
  BUF_MEM_free(lVar14);
  return iVar16;
}

// X509_LOOKUP_hash_dir @ 14f6cb6b0

undefined ** X509_LOOKUP_hash_dir(void)

{
  return &PTR_s_Load_certs_from_files_in_a_direc_154df86c0;
}

// FUN_14f6cb6f0 @ 14f6cb6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6cb6f0(longlong param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  size_t _MaxCount;
  char *_Str2;
  char *pcVar9;
  undefined4 uVar10;
  
  if ((param_2 == (char *)0x0) || (_Str2 = param_2, *param_2 == '\0')) {
    ERR_put_error(0xb,100,0x71,"crypto\\x509\\by_dir.c",0xa0,0x14f6cb700);
    return 0;
  }
  do {
    if ((*param_2 == ';') || (pcVar9 = _Str2, *param_2 == '\0')) {
      pcVar9 = param_2 + 1;
      _MaxCount = (longlong)param_2 - (longlong)_Str2;
      if (_MaxCount != 0) {
        iVar8 = 0;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
        if (0 < iVar2) {
          do {
            puVar4 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar8);
            _Str1 = (char *)*puVar4;
            cVar1 = *_Str1;
            pcVar7 = _Str1;
            for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar7;
            }
            if (((uVar3 & 0x7fffffff) == _MaxCount) &&
               (iVar2 = strncmp(_Str1,_Str2,_MaxCount), iVar2 == 0)) break;
            iVar8 = iVar8 + 1;
            iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
          } while (iVar8 < iVar2);
        }
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
        if (iVar2 <= iVar8) {
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar5 = OPENSSL_sk_new_null();
            *(longlong *)(param_1 + 8) = lVar5;
            if (lVar5 == 0) {
              uVar10 = 0xb9;
              goto LAB_14f6cb8ee;
            }
          }
          plVar6 = (longlong *)CRYPTO_malloc(0x18,"crypto\\x509\\by_dir.c",0xbd);
          if (plVar6 == (longlong *)0x0) {
            uVar10 = 0xbf;
LAB_14f6cb8ee:
            ERR_put_error(0xb,100,0x41,"crypto\\x509\\by_dir.c",uVar10);
            return 0;
          }
          *(undefined4 *)(plVar6 + 1) = param_3;
          lVar5 = OPENSSL_sk_new(&LAB_14f6cb9a0);
          plVar6[2] = lVar5;
          lVar5 = CRYPTO_strndup(_Str2,_MaxCount,"crypto\\x509\\by_dir.c",0xc4);
          *plVar6 = lVar5;
          if ((lVar5 == 0) || (plVar6[2] == 0)) {
            CRYPTO_free(lVar5,"crypto\\x509\\by_dir.c",0x8a);
            OPENSSL_sk_pop_free(plVar6[2],FUN_14f6cb9c0);
            CRYPTO_free(plVar6,"crypto\\x509\\by_dir.c",0x8c);
            return 0;
          }
          iVar2 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),plVar6);
          if (iVar2 == 0) {
            FUN_14f6cb940(plVar6);
            uVar10 = 0xcb;
            goto LAB_14f6cb8ee;
          }
        }
      }
    }
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    _Str2 = pcVar9;
    if (cVar1 == '\0') {
      return 1;
    }
  } while( true );
}

// FUN_14f6cb940 @ 14f6cb940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cb940(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"crypto\\x509\\by_dir.c",0x8a);
  OPENSSL_sk_pop_free(param_1[2],FUN_14f6cb9c0);
  CRYPTO_free(param_1,"crypto\\x509\\by_dir.c",0x8c);
  return;
}

// FUN_14f6cb9c0 @ 14f6cb9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cb9c0(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\x509\\by_dir.c",0x7b);
  return;
}

// FUN_14f6cb9f0 @ 14f6cb9f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cb9f0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f6cba10 @ 14f6cba10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cba10(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6cba30 @ 14f6cba30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cba30(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cba50 @ 14f6cba50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cba50(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6cba70 @ 14f6cba70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cba70(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6cba90 @ 14f6cba90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cba90(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6cbab0 @ 14f6cbab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cbab0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f6cbad0 @ 14f6cbad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cbad0(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f6cbaf0 @ 14f6cbaf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cbaf0(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6cbb10 @ 14f6cbb10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cbb10(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f6cbb30 @ 14f6cbb30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cbb30(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f6cbb50 @ 14f6cbb50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cbb50(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6cbb70 @ 14f6cbb70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6cbb70(void)

{
  OPENSSL_sk_value();
  return;
}

