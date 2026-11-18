// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 12

// OCSP_REQ_CTX_add1_header @ 14f71a640

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_REQ_CTX_add1_header(undefined4 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = BIO_puts(*(undefined8 *)(param_1 + 8)), 0 < iVar1)) {
    if (param_3 != 0) {
      iVar1 = BIO_write(*(undefined8 *)(param_1 + 8),": ",2);
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = BIO_puts(*(undefined8 *)(param_1 + 8),param_3);
      if (iVar1 < 1) {
        return 0;
      }
    }
    iVar1 = BIO_write(*(undefined8 *)(param_1 + 8),&s___,2);
    if (iVar1 == 2) {
      *param_1 = 0x1009;
      return 1;
    }
  }
  return 0;
}

// OCSP_REQ_CTX_free @ 14f71a6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQ_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    BIO_free(*(undefined8 *)(param_1 + 0x20));
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\ocsp\\ocsp_ht.c",0x5b);
    CRYPTO_free(param_1,"crypto\\ocsp\\ocsp_ht.c",0x5c);
  }
  return;
}

// OCSP_REQ_CTX_http @ 14f71a750

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_REQ_CTX_http(undefined4 *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = "/";
  if (param_3 != (char *)0x0) {
    pcVar2 = param_3;
  }
  iVar1 = BIO_printf(*(undefined8 *)(param_1 + 8),"%s %s HTTP/1.0\r\n",param_2,pcVar2);
  if (iVar1 < 1) {
    return 0;
  }
  *param_1 = 0x1009;
  return 1;
}

// OCSP_REQ_CTX_i2d @ 14f71a7b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_REQ_CTX_i2d(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = ASN1_item_i2d(param_3,0,param_2);
  iVar2 = BIO_printf(*(undefined8 *)(param_1 + 8),
                     "Content-Type: application/ocsp-request\r\nContent-Length: %d\r\n\r\n",uVar1);
  if (0 < iVar2) {
    iVar2 = ASN1_item_i2d_bio(param_2,*(undefined8 *)(param_1 + 8),param_3);
    if (0 < iVar2) {
      *param_1 = 0x1005;
      return 1;
    }
  }
  return 0;
}

// OCSP_REQ_CTX_nbio @ 14f71a840

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OCSP_REQ_CTX_nbio(uint *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *local_res8;
  
  pbVar6 = local_res8;
LAB_14f71a860:
  local_res8 = pbVar6;
  if ((*param_1 & 0x1000) == 0) {
    iVar3 = BIO_read(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 2),param_1[4]);
    if (iVar3 < 1) {
      iVar3 = BIO_test_flags(*(undefined8 *)(param_1 + 6),8);
      return -(uint)(iVar3 != 0);
    }
    iVar4 = BIO_write(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 2),iVar3);
    if (iVar4 != iVar3) {
      return 0;
    }
  }
  uVar9 = *param_1;
  pbVar6 = local_res8;
  if ((int)uVar9 < 0x1006) {
    if (uVar9 == 0x1005) {
LAB_14f71aaf5:
      uVar9 = BIO_ctrl(*(undefined8 *)(param_1 + 8),3,0);
      param_1[10] = uVar9;
      *param_1 = 0x1006;
      goto LAB_14f71ab11;
    }
    if ((int)uVar9 < 1) {
      return 0;
    }
    if ((int)uVar9 < 3) goto LAB_14f71a8e0;
    if (uVar9 == 3) goto LAB_14f71a990;
    if (uVar9 != 4) {
      return 0;
    }
    goto LAB_14f71aa4b;
  }
  if (uVar9 == 0x1006) {
LAB_14f71ab11:
    iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 8),3);
    iVar3 = BIO_write(*(undefined8 *)(param_1 + 6),local_res8 + (iVar3 - param_1[10]));
    if (0 < iVar3) {
      puVar1 = param_1 + 10;
      *puVar1 = *puVar1 - iVar3;
      if (*puVar1 == 0) {
        *param_1 = 0x1007;
        BIO_ctrl(*(undefined8 *)(param_1 + 8),1);
        goto LAB_14f71ab63;
      }
      goto LAB_14f71a860;
    }
  }
  else {
    if (uVar9 != 0x1007) {
      if (uVar9 == 0x1008) {
        return 1;
      }
      if (uVar9 != 0x1009) {
        return 0;
      }
      iVar3 = BIO_write(*(undefined8 *)(param_1 + 8),&s___,2);
      if (iVar3 == 2) {
        *param_1 = 0x1005;
        goto LAB_14f71aaf5;
      }
      goto LAB_14f71aa98;
    }
LAB_14f71ab63:
    iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 6),0xb);
    if (0 < iVar3) {
      *param_1 = 1;
      goto LAB_14f71a860;
    }
  }
  iVar3 = BIO_test_flags(*(undefined8 *)(param_1 + 6),8);
  if (iVar3 != 0) {
    return -1;
  }
LAB_14f71aa98:
  *param_1 = 0x1000;
  return 0;
LAB_14f71a8e0:
  do {
    while( true ) {
      iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 8),3);
      pbVar6 = local_res8;
      if ((iVar3 < 1) || (pvVar5 = memchr(local_res8,10,(longlong)iVar3), pvVar5 == (void *)0x0)) {
        if ((int)param_1[4] <= iVar3) goto LAB_14f71aa98;
        goto LAB_14f71a860;
      }
      uVar9 = BIO_gets(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 2));
      if ((int)uVar9 < 1) {
        iVar3 = BIO_test_flags(*(undefined8 *)(param_1 + 8),8);
        if (iVar3 != 0) goto LAB_14f71a860;
        goto LAB_14f71aa98;
      }
      if (uVar9 == param_1[4]) goto LAB_14f71aa98;
      if (*param_1 != 1) break;
      iVar3 = FUN_14f71b040();
      if (iVar3 == 0) goto LAB_14f71aa98;
      *param_1 = 2;
    }
    bVar2 = **(byte **)(param_1 + 2);
    local_res8 = *(byte **)(param_1 + 2);
    while( true ) {
      if (bVar2 == 0) goto LAB_14f71a98a;
      if ((bVar2 != 0xd) && (bVar2 != 10)) break;
      local_res8 = local_res8 + 1;
      bVar2 = *local_res8;
    }
  } while (*local_res8 != 0);
LAB_14f71a98a:
  *param_1 = 3;
LAB_14f71a990:
  iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 8),3);
  pbVar6 = local_res8;
  if (1 < iVar3) {
    pbVar6 = local_res8 + 1;
    if (*local_res8 != 0x30) goto LAB_14f71aa98;
    bVar2 = *pbVar6;
    if ((char)bVar2 < '\0') {
      if (iVar3 < 6) goto LAB_14f71a860;
      uVar9 = bVar2 & 0x7f;
      if (((bVar2 & 0x7f) == 0) || (4 < uVar9)) goto LAB_14f71aa98;
      local_res8 = local_res8 + 2;
      param_1[10] = 0;
      if ((bVar2 & 0x7f) != 0) {
        uVar7 = 0;
        uVar8 = (ulonglong)uVar9;
        do {
          param_1[10] = uVar7 << 8;
          bVar2 = *local_res8;
          local_res8 = local_res8 + 1;
          uVar7 = uVar7 << 8 | (uint)bVar2;
          param_1[10] = uVar7;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (param_1[0xb] < param_1[10]) goto LAB_14f71aa98;
      uVar9 = param_1[10] + 2 + uVar9;
    }
    else {
      uVar9 = bVar2 + 2;
      local_res8 = pbVar6;
    }
    param_1[10] = uVar9;
    *param_1 = 4;
LAB_14f71aa4b:
    iVar3 = BIO_ctrl(*(undefined8 *)(param_1 + 8),3);
    pbVar6 = local_res8;
    if ((int)param_1[10] <= iVar3) {
      *param_1 = 0x1008;
      return 1;
    }
  }
  goto LAB_14f71a860;
}

// OCSP_REQ_CTX_nbio_d2i @ 14f71abe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OCSP_REQ_CTX_nbio_d2i(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res20 [8];
  
  uVar2 = OCSP_REQ_CTX_nbio();
  if ((int)uVar2 == 1) {
    uVar1 = BIO_ctrl(*(undefined8 *)(param_1 + 8),3,0,local_res20);
    lVar3 = ASN1_item_d2i(0,local_res20,uVar1,param_3);
    *param_2 = lVar3;
    if (lVar3 == 0) {
      *param_1 = 0x1000;
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// OCSP_REQ_CTX_new @ 14f71ac70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OCSP_REQ_CTX_new(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x30,"crypto\\ocsp\\ocsp_ht.c",0x42);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    puVar1[0xb] = 0x19000;
    uVar2 = BIO_s_mem();
    uVar2 = BIO_new(uVar2);
    *(undefined8 *)(puVar1 + 8) = uVar2;
    *(undefined8 *)(puVar1 + 6) = param_1;
    if (param_2 < 1) {
      puVar1[4] = 0x1000;
    }
    else {
      puVar1[4] = param_2;
    }
    lVar3 = CRYPTO_malloc((longlong)(int)puVar1[4],"crypto\\ocsp\\ocsp_ht.c",0x4e);
    *(longlong *)(puVar1 + 2) = lVar3;
    if ((lVar3 != 0) && (*(longlong *)(puVar1 + 8) != 0)) {
      return puVar1;
    }
    BIO_free(*(undefined8 *)(puVar1 + 8));
    CRYPTO_free(*(undefined8 *)(puVar1 + 2),"crypto\\ocsp\\ocsp_ht.c",0x5b);
    CRYPTO_free(puVar1,"crypto\\ocsp\\ocsp_ht.c",0x5c);
  }
  return (undefined4 *)0x0;
}

// OCSP_REQ_CTX_set1_req @ 14f71ad70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_REQ_CTX_set1_req(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = OCSP_REQUEST_it();
  OCSP_REQ_CTX_i2d(param_1,uVar1,param_2);
  return;
}

// OCSP_sendreq_bio @ 14f71adb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OCSP_sendreq_bio(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res20 [8];
  
  puVar4 = (undefined4 *)OCSP_sendreq_new();
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  while( true ) {
    uVar5 = OCSP_RESPONSE_it();
    iVar1 = OCSP_REQ_CTX_nbio(puVar4);
    if (iVar1 == 1) break;
    lVar6 = 0;
    if ((iVar1 != -1) || (iVar2 = BIO_test_flags(param_1,8), lVar6 = 0, iVar2 == 0))
    goto LAB_14f71ae6c;
  }
  uVar3 = BIO_ctrl(*(undefined8 *)(puVar4 + 8),3,0,local_res20);
  lVar6 = ASN1_item_d2i(0,local_res20,uVar3,uVar5);
  if (lVar6 == 0) {
    *puVar4 = 0x1000;
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
LAB_14f71ae6c:
  BIO_free(*(undefined8 *)(puVar4 + 8));
  CRYPTO_free(*(undefined8 *)(puVar4 + 2),"crypto\\ocsp\\ocsp_ht.c",0x5b);
  CRYPTO_free(puVar4,"crypto\\ocsp\\ocsp_ht.c",0x5c);
  lVar7 = 0;
  if (iVar1 != 0) {
    lVar7 = lVar6;
  }
  return lVar7;
}

// OCSP_sendreq_nbio @ 14f71aed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OCSP_sendreq_nbio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = OCSP_RESPONSE_it();
  OCSP_REQ_CTX_nbio_d2i(param_2,param_1,uVar1);
  return;
}

// OCSP_sendreq_new @ 14f71af10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OCSP_sendreq_new(undefined8 param_1,char *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  puVar2 = (undefined4 *)OCSP_REQ_CTX_new(param_1,param_4);
  if (puVar2 != (undefined4 *)0x0) {
    pcVar4 = "/";
    if (param_2 != (char *)0x0) {
      pcVar4 = param_2;
    }
    iVar1 = BIO_printf(*(undefined8 *)(puVar2 + 8),"%s %s HTTP/1.0\r\n",&s_POST,pcVar4);
    if (0 < iVar1) {
      *puVar2 = 0x1009;
      if (param_3 == 0) {
        return puVar2;
      }
      uVar3 = OCSP_REQUEST_it();
      iVar1 = OCSP_REQ_CTX_i2d(puVar2,uVar3,param_3);
      if (iVar1 != 0) {
        return puVar2;
      }
    }
    BIO_free(*(undefined8 *)(puVar2 + 8));
    CRYPTO_free(*(undefined8 *)(puVar2 + 2),"crypto\\ocsp\\ocsp_ht.c",0x5b);
    CRYPTO_free(puVar2,"crypto\\ocsp\\ocsp_ht.c",0x5c);
  }
  return (undefined4 *)0x0;
}

// FUN_14f71b040 @ 14f71b040

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71b040(char *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_res8;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x14f71b04c;
  if (*param_1 == '\0') {
LAB_14f71b07a:
    cVar1 = *param_1;
    if (cVar1 != '\0') {
      do {
        iVar2 = ossl_ctype_check((int)cVar1,8);
        if (iVar2 == 0) {
          pcVar6 = param_1;
          if (*param_1 != '\0') goto LAB_14f71b0f0;
          uVar7 = 0xe0;
          goto LAB_14f71b089;
        }
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      uVar7 = 0xe0;
      goto LAB_14f71b089;
    }
  }
  else {
    do {
      iVar2 = ossl_ctype_check((int)*param_1,8);
      if (iVar2 != 0) goto LAB_14f71b07a;
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
  }
  uVar7 = 0xd7;
LAB_14f71b089:
  ERR_put_error(0x27,0x76,0x73,"crypto\\ocsp\\ocsp_ht.c",uVar7,uVar9);
  return 0;
  while (pcVar6 = pcVar6 + 1, *pcVar6 != '\0') {
LAB_14f71b0f0:
    iVar2 = ossl_ctype_check((int)*pcVar6,8);
    if (iVar2 != 0) break;
  }
  if (*pcVar6 == '\0') {
    ERR_put_error(0x27,0x76,0x73,"crypto\\ocsp\\ocsp_ht.c",0xe9);
    return 0;
  }
  *pcVar6 = '\0';
  pcVar6 = pcVar6 + 1;
  uVar3 = strtoul(param_1,&local_res8,10);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  if (*local_res8 != '\0') {
    return 0;
  }
  cVar1 = *pcVar6;
  while (cVar1 != '\0') {
    iVar2 = ossl_ctype_check((int)cVar1,8);
    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
    if (iVar2 == 0) {
      if (*pcVar6 != '\0') {
        uVar4 = 0;
        pcVar5 = pcVar6;
        goto LAB_14f71b1a8;
      }
      break;
    }
    pcVar5 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar5;
  }
  goto LAB_14f71b206;
  while( true ) {
    pcVar5 = pcVar5 + 1;
    uVar4 = uVar4 + 1;
    if (*pcVar5 == '\0') break;
LAB_14f71b1a8:
    if (0x7fffffff < uVar4) break;
  }
  local_res8 = pcVar6 + ((ulonglong)(uVar4 & 0x7fffffff) - 1);
  iVar2 = ossl_ctype_check((int)*local_res8,8);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  while (iVar2 != 0) {
    *local_res8 = '\0';
    local_res8 = local_res8 + -1;
    iVar2 = ossl_ctype_check((int)*local_res8,8);
    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  }
LAB_14f71b206:
  if (uVar3 == 200) {
    return 1;
  }
  ERR_put_error(0x27,0x76,0x72,"crypto\\ocsp\\ocsp_ht.c",CONCAT44(uVar8,0x104));
  if (*pcVar6 != '\0') {
    ERR_add_error_data(4,"Code=",param_1,",Reason=",pcVar6);
    return 0;
  }
  ERR_add_error_data(2,"Code=",param_1);
  return 0;
}

