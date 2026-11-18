// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 9

// OPENSSL_asc2uni @ 14f7cacf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OPENSSL_asc2uni(longlong param_1,ulonglong param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f7cad10;
  uVar2 = param_2 & 0xffffffff;
  if ((int)param_2 == -1) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
  }
  iVar1 = (int)uVar2 * 2;
  lVar3 = CRYPTO_malloc((longlong)(iVar1 + 2),"crypto\\pkcs12\\p12_utl.c",0x19);
  if (lVar3 == 0) {
    ERR_put_error(0x23,0x79,0x41,"crypto\\pkcs12\\p12_utl.c",0x1a,uVar7);
    lVar3 = 0;
  }
  else {
    if (0 < iVar1) {
      lVar6 = 0;
      uVar2 = (ulonglong)((iVar1 - 1U >> 1) + 1);
      puVar5 = (undefined1 *)(lVar3 + 1);
      do {
        puVar5[-1] = 0;
        lVar4 = lVar6 >> 1;
        lVar6 = lVar6 + 2;
        *puVar5 = *(undefined1 *)(lVar4 + param_1);
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 2;
      } while (uVar2 != 0);
    }
    *(undefined1 *)(iVar1 + lVar3) = 0;
    *(undefined1 *)((iVar1 + 1) + lVar3) = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar1 + 2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar3;
    }
  }
  return lVar3;
}

// OPENSSL_uni2asc @ 14f7cae00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OPENSSL_uni2asc(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f7cae10;
  if ((param_2 & 1) != 0) {
    return 0;
  }
  iVar2 = (int)param_2 / 2;
  if ((param_2 == 0) || (*(char *)((int)(param_2 - 1) + param_1) != '\0')) {
    iVar2 = iVar2 + 1;
  }
  lVar3 = CRYPTO_malloc((longlong)iVar2,"crypto\\pkcs12\\p12_utl.c",0x37);
  if (lVar3 == 0) {
    ERR_put_error(0x23,0x7c,0x41,"crypto\\pkcs12\\p12_utl.c",0x38,uVar7);
    return 0;
  }
  if (0 < (int)param_2) {
    puVar5 = (undefined1 *)(param_1 + 1);
    uVar6 = (ulonglong)((param_2 - 1 >> 1) + 1);
    lVar4 = 0;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 2;
      *(undefined1 *)((lVar4 >> 1) + lVar3) = uVar1;
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + 2;
    } while (uVar6 != 0);
  }
  *(undefined1 *)((iVar2 + -1) + lVar3) = 0;
  return lVar3;
}

// OPENSSL_uni2utf8 @ 14f7caef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OPENSSL_uni2utf8(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 & 1) != 0) {
    return 0;
  }
  iVar6 = 0;
  iVar4 = 0;
  iVar5 = 0;
  if (0 < (int)param_2) {
    do {
      iVar1 = FUN_14f7cb220(0,iVar5 + param_1,param_2 - iVar5);
      if (iVar1 < 0) {
        lVar2 = OPENSSL_uni2asc(param_1,param_2);
        return lVar2;
      }
      iVar3 = 2;
      if (iVar1 == 4) {
        iVar3 = 4;
      }
      iVar4 = iVar4 + iVar1;
      iVar5 = iVar5 + iVar3;
    } while (iVar5 < (int)param_2);
  }
  if (((param_2 == 0) || (*(char *)((int)(param_2 - 2) + param_1) != '\0')) ||
     (*(char *)((int)(param_2 - 1) + param_1) != '\0')) {
    iVar4 = iVar4 + 1;
  }
  lVar2 = CRYPTO_malloc((longlong)iVar4,"crypto\\pkcs12\\p12_utl.c",0xca);
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x7f,0x41,"crypto\\pkcs12\\p12_utl.c",0xcb);
    lVar2 = 0;
  }
  else {
    iVar4 = 0;
    if (0 < (int)param_2) {
      do {
        iVar1 = FUN_14f7cb220(iVar6 + lVar2,iVar4 + param_1,param_2 - iVar4);
        iVar5 = 2;
        if (iVar1 == 4) {
          iVar5 = 4;
        }
        iVar6 = iVar6 + iVar1;
        iVar4 = iVar4 + iVar5;
      } while (iVar4 < (int)param_2);
    }
    if (((param_2 == 0) || (*(char *)((int)(param_2 - 2) + param_1) != '\0')) ||
       (*(char *)((int)(param_2 - 1) + param_1) != '\0')) {
      *(undefined1 *)(iVar6 + lVar2) = 0;
    }
  }
  return lVar2;
}

// OPENSSL_utf82uni @ 14f7cb060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * OPENSSL_utf82uni(longlong param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint local_res10 [2];
  undefined8 uVar11;
  
  uVar11 = 0x14f7cb07c;
  iVar8 = 0;
  local_res10[0] = 0;
  uVar10 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (*(char *)(param_1 + uVar10) != '\0');
  }
  iVar7 = 0;
  iVar4 = 0;
  iVar9 = (int)uVar10;
  if (0 < iVar9) {
    do {
      iVar1 = UTF8_getc(iVar4 + param_1,iVar9 - iVar4,local_res10);
      if (iVar1 < 0) {
        puVar2 = (undefined2 *)OPENSSL_asc2uni(param_1,uVar10 & 0xffffffff,param_3,param_4);
        return puVar2;
      }
      if (0x10ffff < local_res10[0]) goto LAB_14f7cb13b;
      iVar3 = 2;
      if (0xffff < local_res10[0]) {
        iVar3 = 4;
      }
      iVar4 = iVar4 + iVar1;
      iVar7 = iVar7 + iVar3;
    } while (iVar4 < iVar9);
  }
  puVar2 = (undefined2 *)CRYPTO_malloc((longlong)(iVar7 + 2),"crypto\\pkcs12\\p12_utl.c",0x75);
  if (puVar2 == (undefined2 *)0x0) {
    ERR_put_error(0x23,0x81,0x41,"crypto\\pkcs12\\p12_utl.c",0x76,uVar11);
LAB_14f7cb13b:
    puVar2 = (undefined2 *)0x0;
  }
  else {
    puVar6 = puVar2;
    if (0 < iVar9) {
      do {
        iVar4 = UTF8_getc(iVar8 + param_1,iVar9 - iVar8,local_res10);
        if (local_res10[0] < 0x10000) {
          *(char *)puVar6 = (char)(local_res10[0] >> 8);
          puVar5 = (undefined1 *)((longlong)puVar6 + 1);
          *puVar5 = (undefined1)local_res10[0];
        }
        else {
          local_res10[0] = local_res10[0] - 0x10000;
          iVar1 = (local_res10[0] >> 10) + 0xd800;
          iVar3 = (local_res10[0] & 0x3ff) + 0xdc00;
          *(char *)puVar6 = (char)((uint)iVar1 >> 8);
          *(char *)((longlong)puVar6 + 1) = (char)iVar1;
          *(char *)(puVar6 + 1) = (char)((uint)iVar3 >> 8);
          puVar5 = (undefined1 *)((longlong)puVar6 + 3);
          *puVar5 = (char)iVar3;
        }
        iVar8 = iVar8 + iVar4;
        puVar6 = (undefined2 *)(puVar5 + 1);
      } while (iVar8 < iVar9);
    }
    *puVar6 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar7 + 2;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar2;
    }
  }
  return puVar2;
}

// FUN_14f7cb220 @ 14f7cb220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7cb220(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 2) {
    return 0xffffffff;
  }
  uVar2 = (uint)CONCAT11(*param_2,param_2[1]);
  if (uVar2 - 0xd800 < 0x800) {
    if (param_3 < 4) {
      return 0xffffffff;
    }
    if (0x3ff < CONCAT11(param_2[2],param_2[3]) - 0xdc00) {
      return 0xffffffff;
    }
    uVar2 = ((uVar2 - 0xd800) * 0x400 | CONCAT11(param_2[2],param_2[3]) - 0xdc00) + 0x10000;
  }
  if (4 < param_3) {
    param_3 = 4;
  }
  uVar1 = UTF8_putc(param_1,param_3,uVar2);
  return uVar1;
}

// d2i_PKCS12_bio @ 14f7cb2d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS12_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS12_it();
  ASN1_item_d2i_bio(uVar1,param_1,param_2);
  return;
}

// d2i_PKCS12_fp @ 14f7cb310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_PKCS12_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS12_it();
  ASN1_item_d2i_fp(uVar1,param_1,param_2);
  return;
}

// i2d_PKCS12_bio @ 14f7cb350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS12_bio(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS12_it();
  ASN1_item_i2d_bio(uVar1,param_1,param_2);
  return;
}

// i2d_PKCS12_fp @ 14f7cb390

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_PKCS12_fp(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = PKCS12_it();
  ASN1_item_i2d_fp(uVar1,param_1,param_2);
  return;
}

