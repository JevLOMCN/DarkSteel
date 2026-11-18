// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 18

// EVP_PKEY_asn1_add0 @ 14f6e82b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_asn1_add0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_128 [70];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6e82bc;
  memset(local_128,0,0x118);
  if (*(longlong *)(param_1 + 4) == 0) {
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
LAB_14f6e8364:
      uVar3 = 0x9b;
      uVar2 = 7;
      goto LAB_14f6e8372;
    }
  }
  else if ((*(byte *)(param_1 + 2) & 1) != 0) goto LAB_14f6e8364;
  if ((DAT_1553e2b20 == 0) && (DAT_1553e2b20 = OPENSSL_sk_new(&LAB_14f6e8bc0), DAT_1553e2b20 == 0))
  {
    return 0;
  }
  local_128[0] = *param_1;
  iVar1 = OPENSSL_sk_find(DAT_1553e2b20,local_128);
  if (iVar1 < 0) {
    iVar1 = OPENSSL_sk_push(DAT_1553e2b20,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    OPENSSL_sk_sort(DAT_1553e2b20);
    return 1;
  }
  uVar3 = 0xa8;
  uVar2 = 0xb3;
LAB_14f6e8372:
  ERR_put_error(6,0xbc,uVar2,"crypto\\asn1\\ameth_lib.c",uVar3);
  return 0;
}

// EVP_PKEY_asn1_add_alias @ 14f6e83a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_PKEY_asn1_add_alias(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)CRYPTO_zalloc(0x118,"crypto\\asn1\\ameth_lib.c");
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_2;
    puVar2[2] = 3;
    puVar2[1] = param_1;
    iVar1 = EVP_PKEY_asn1_add0(puVar2);
    if (iVar1 != 0) {
      return 1;
    }
    EVP_PKEY_asn1_free(puVar2);
  }
  return 0;
}

// EVP_PKEY_asn1_find @ 14f6e8540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY_asn1_find(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *local_res8;
  undefined4 local_128 [70];
  undefined8 uStack_10;
  
  uStack_10 = 0x14f6e8550;
  do {
    local_res8 = local_128;
    local_128[0] = param_2;
    if ((DAT_1553e2b20 == 0) || (iVar1 = OPENSSL_sk_find(DAT_1553e2b20,local_128), iVar1 < 0)) {
      plVar3 = (longlong *)
               OBJ_bsearch_(&local_res8,&PTR_rsa_asn1_meths_154df8c40,0x14,8,&LAB_14f6e8be0);
      if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
        lVar2 = 0;
LAB_14f6e85f0:
        if (param_1 != (longlong *)0x0) {
          lVar4 = ENGINE_get_pkey_asn1_meth_engine(param_2);
          if (lVar4 == 0) {
            *param_1 = 0;
          }
          else {
            *param_1 = lVar4;
            lVar2 = ENGINE_get_pkey_asn1_meth(lVar4,param_2);
          }
        }
        return lVar2;
      }
    }
    else {
      lVar2 = OPENSSL_sk_value(DAT_1553e2b20,iVar1);
    }
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 8) & 1) == 0)) goto LAB_14f6e85f0;
    param_2 = *(undefined4 *)(lVar2 + 4);
  } while( true );
}

// EVP_PKEY_asn1_find_str @ 14f6e8650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined *
EVP_PKEY_asn1_find_str(undefined8 *param_1,char *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined8 local_res8;
  undefined *puVar6;
  
  puVar10 = (undefined *)0x0;
  if (param_3 == 0xffffffff) {
    cVar1 = *param_2;
    puVar4 = puVar10;
    pcVar3 = param_2;
    param_3 = 0;
    while ((cVar1 != '\0' && (param_3 = (uint)puVar4, param_3 < 0x80000000))) {
      pcVar3 = pcVar3 + 1;
      param_3 = param_3 + 1;
      cVar1 = *pcVar3;
      puVar4 = (undefined *)(ulonglong)param_3;
    }
    param_3 = param_3 & 0x7fffffff;
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined *)ENGINE_pkey_asn1_find_str(&local_res8,param_2,param_3,param_4,0x14f6e8661)
    ;
    if (puVar4 != (undefined *)0x0) {
      iVar2 = ENGINE_init(local_res8);
      if (iVar2 == 0) {
        puVar4 = puVar10;
      }
      ENGINE_free(local_res8);
      *param_1 = local_res8;
      return puVar4;
    }
    *param_1 = 0;
  }
  iVar2 = 0x14;
  if (DAT_1553e2b20 != 0) {
    iVar2 = OPENSSL_sk_num();
    iVar2 = iVar2 + 0x14;
  }
  if (0 < iVar2) {
    lVar8 = (longlong)iVar2;
    do {
      iVar7 = iVar2 + -1;
      lVar8 = lVar8 + -1;
      puVar4 = puVar10;
      if (-1 < lVar8) {
        if (iVar7 < 0x14) {
          puVar4 = (&PTR_rsa_asn1_meths_154df8c40)[lVar8];
        }
        else {
          puVar4 = (undefined *)OPENSSL_sk_value(DAT_1553e2b20,iVar2 + -0x15);
        }
      }
      if ((puVar4[8] & 1) == 0) {
        pcVar3 = *(char **)(puVar4 + 0x10);
        cVar1 = *pcVar3;
        pcVar9 = pcVar3;
        puVar6 = puVar10;
        uVar5 = 0;
        while ((cVar1 != '\0' && (uVar5 = (uint)puVar6, uVar5 < 0x80000000))) {
          pcVar9 = pcVar9 + 1;
          uVar5 = uVar5 + 1;
          cVar1 = *pcVar9;
          puVar6 = (undefined *)(ulonglong)uVar5;
        }
        if (((uVar5 & 0x7fffffff) == param_3) &&
           (iVar2 = _strnicmp(pcVar3,param_2,(longlong)(int)param_3), iVar2 == 0)) {
          return puVar4;
        }
      }
      iVar2 = iVar7;
    } while (0 < iVar7);
  }
  return (undefined *)0x0;
}

// EVP_PKEY_asn1_free @ 14f6e87c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_asn1_free(longlong param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) {
    CRYPTO_free(*(undefined8 *)(param_1 + 0x10),"crypto\\asn1\\ameth_lib.c",0x122);
    CRYPTO_free(*(undefined8 *)(param_1 + 0x18),"crypto\\asn1\\ameth_lib.c",0x123);
    CRYPTO_free(param_1,"crypto\\asn1\\ameth_lib.c",0x124);
  }
  return;
}

// EVP_PKEY_asn1_get0 @ 14f6e8830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * EVP_PKEY_asn1_get0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 0x14) {
    return (&PTR_rsa_asn1_meths_154df8c40)[param_1];
  }
  puVar1 = (undefined *)OPENSSL_sk_value(DAT_1553e2b20,param_1 + -0x14);
  return puVar1;
}

// EVP_PKEY_asn1_get0_info @ 14f6e8880

undefined8
EVP_PKEY_asn1_get0_info
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined4 *param_6)

{
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_6;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_6[1];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_6[2];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_6 + 6);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_6 + 4);
  }
  return 1;
}

// EVP_PKEY_asn1_get_count @ 14f6e88e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_PKEY_asn1_get_count(void)

{
  int iVar1;
  
  if (DAT_1553e2b20 != 0) {
    iVar1 = OPENSSL_sk_num();
    return iVar1 + 0x14;
  }
  return 0x14;
}

// EVP_PKEY_asn1_new @ 14f6e8920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * EVP_PKEY_asn1_new(undefined4 param_1,uint param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x118,"crypto\\asn1\\ameth_lib.c");
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_1;
  puVar1[2] = param_2 | 2;
  if (param_4 != 0) {
    lVar2 = CRYPTO_strdup(param_4,"crypto\\asn1\\ameth_lib.c",0xe6);
    *(longlong *)(puVar1 + 6) = lVar2;
    if (lVar2 == 0) goto LAB_14f6e89bc;
  }
  if (param_3 == 0) {
    return puVar1;
  }
  lVar2 = CRYPTO_strdup(param_3,"crypto\\asn1\\ameth_lib.c",0xec);
  *(longlong *)(puVar1 + 4) = lVar2;
  if (lVar2 != 0) {
    return puVar1;
  }
LAB_14f6e89bc:
  EVP_PKEY_asn1_free(puVar1);
  return (undefined4 *)0x0;
}

// EVP_PKEY_get0_asn1 @ 14f6e8b50

undefined8 EVP_PKEY_get0_asn1(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}

// FUN_14f6e8b60 @ 14f6e8b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e8b60(void)

{
  OBJ_bsearch_();
  return;
}

// FUN_14f6e8c00 @ 14f6e8c00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6e8c00(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *local_res10 [3];
  undefined4 local_128 [72];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6e8c0a;
  local_res10[0] = local_128;
  local_128[0] = param_1;
  if (DAT_1553e2b20 != 0) {
    iVar1 = OPENSSL_sk_find(DAT_1553e2b20,local_128);
    if (-1 < iVar1) {
      lVar2 = OPENSSL_sk_value(DAT_1553e2b20,iVar1);
      return lVar2;
    }
  }
  plVar3 = (longlong *)OBJ_bsearch_(local_res10,&PTR_rsa_asn1_meths_154df8c40,0x14,8,&LAB_14f6e8be0)
  ;
  if ((plVar3 == (longlong *)0x0) || (lVar2 = *plVar3, lVar2 == 0)) {
    lVar2 = 0;
  }
  return lVar2;
}

// FUN_14f6e8ca0 @ 14f6e8ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e8ca0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f6e8cc0 @ 14f6e8cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e8cc0(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f6e8ce0 @ 14f6e8ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e8ce0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f6e8d00 @ 14f6e8d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e8d00(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f6e8d20 @ 14f6e8d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e8d20(void)

{
  OPENSSL_sk_sort();
  return;
}

// FUN_14f6e8d40 @ 14f6e8d40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6e8d40(void)

{
  OPENSSL_sk_value();
  return;
}

