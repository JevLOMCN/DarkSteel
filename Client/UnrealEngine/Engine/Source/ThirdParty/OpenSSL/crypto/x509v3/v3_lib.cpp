// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 23

// FUN_14f734570 @ 14f734570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734570(void)

{
  OBJ_bsearch_();
  return;
}

// X509V3_EXT_add @ 14f7345a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_add(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7345ac;
  if (DAT_1553e2f38 == 0) {
    DAT_1553e2f38 = OPENSSL_sk_new(&LAB_14f734c70);
    if (DAT_1553e2f38 == 0) {
      uVar2 = 0x1d;
      goto LAB_14f7345de;
    }
  }
  iVar1 = OPENSSL_sk_push(DAT_1553e2f38,param_1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = 0x21;
LAB_14f7345de:
  ERR_put_error(0x22,0x68,0x41,"crypto\\x509v3\\v3_lib.c",uVar2,uVar3);
  return 0;
}

// X509V3_EXT_add_alias @ 14f734630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_add_alias(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f734640;
  puVar4 = (undefined8 *)X509V3_EXT_get_nid(param_2);
  if (puVar4 == (undefined8 *)0x0) {
    ERR_put_error(0x22,0x6a,0x66,"crypto\\x509v3\\v3_lib.c",0x5c,uVar6);
    return 0;
  }
  puVar5 = (undefined8 *)CRYPTO_malloc(0x68,"crypto\\x509v3\\v3_lib.c");
  if (puVar5 == (undefined8 *)0x0) {
    ERR_put_error(0x22,0x6a,0x41,"crypto\\x509v3\\v3_lib.c",0x60,uVar6);
    return 0;
  }
  uVar6 = puVar4[1];
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  uVar6 = puVar4[3];
  puVar5[2] = puVar4[2];
  puVar5[3] = uVar6;
  uVar6 = puVar4[5];
  puVar5[4] = puVar4[4];
  puVar5[5] = uVar6;
  uVar6 = puVar4[7];
  puVar5[6] = puVar4[6];
  puVar5[7] = uVar6;
  uVar6 = puVar4[9];
  puVar5[8] = puVar4[8];
  puVar5[9] = uVar6;
  uVar1 = *(undefined4 *)((longlong)puVar4 + 0x54);
  uVar2 = *(undefined4 *)(puVar4 + 0xb);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0x5c);
  *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(puVar4 + 10);
  *(undefined4 *)((longlong)puVar5 + 0x54) = uVar1;
  *(undefined4 *)(puVar5 + 0xb) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x5c) = uVar3;
  puVar5[0xc] = puVar4[0xc];
  *(uint *)((longlong)puVar5 + 4) = *(uint *)((longlong)puVar5 + 4) | 1;
  *(undefined4 *)puVar5 = param_1;
  uVar6 = X509V3_EXT_add(puVar5);
  return uVar6;
}

// X509V3_EXT_add_list @ 14f734720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_add_list(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f73472c;
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == -1) {
      return 1;
    }
    if ((DAT_1553e2f38 == 0) && (DAT_1553e2f38 = OPENSSL_sk_new(&LAB_14f734c70), DAT_1553e2f38 == 0)
       ) break;
    iVar1 = OPENSSL_sk_push(DAT_1553e2f38,param_1);
    if (iVar1 == 0) {
      uVar2 = 0x21;
      goto LAB_14f734799;
    }
    param_1 = param_1 + 0x1a;
    iVar1 = *param_1;
  }
  uVar2 = 0x1d;
LAB_14f734799:
  ERR_put_error(0x22,0x68,0x41,"crypto\\x509v3\\v3_lib.c",uVar2,uVar3);
  return 0;
}

// X509V3_EXT_cleanup @ 14f7347c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509V3_EXT_cleanup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  OPENSSL_sk_pop_free(DAT_1553e2f38,FUN_14f734cb0,param_3,param_4,0x14f7347ca);
  DAT_1553e2f38 = 0;
  return;
}

// X509V3_EXT_d2i @ 14f734800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_d2i(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  uVar3 = X509_EXTENSION_get_object();
  iVar1 = OBJ_obj2nid(uVar3);
  if (iVar1 != 0) {
    lVar4 = X509V3_EXT_get_nid(iVar1);
    if (lVar4 != 0) {
      uVar3 = X509_EXTENSION_get_data(param_1);
      local_res10[0] = ASN1_STRING_get0_data(uVar3);
      uVar2 = ASN1_STRING_length(uVar3);
      if (*(code **)(lVar4 + 8) != (code *)0x0) {
        uVar3 = (**(code **)(lVar4 + 8))();
        uVar3 = ASN1_item_d2i(0,local_res10,uVar2,uVar3);
        return uVar3;
      }
      uVar3 = (**(code **)(lVar4 + 0x20))(0,local_res10,uVar2);
      return uVar3;
    }
  }
  return 0;
}

// X509V3_EXT_get @ 14f7348b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_get(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = X509_EXTENSION_get_object();
  iVar1 = OBJ_obj2nid(uVar2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = X509V3_EXT_get_nid(iVar1);
  return uVar2;
}

// X509V3_EXT_get_nid @ 14f7348f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_EXT_get_nid(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *local_res10 [3];
  int local_78 [28];
  undefined8 uStack_8;
  
  uStack_8 = 0x14f7348fa;
  local_res10[0] = local_78;
  if (-1 < param_1) {
    local_78[0] = param_1;
    puVar2 = (undefined8 *)OBJ_bsearch_(local_res10,&PTR_v3_nscert_154df9590,0x2f,8,&LAB_14f734c90);
    if (puVar2 != (undefined8 *)0x0) {
      return *puVar2;
    }
    if (DAT_1553e2f38 != 0) {
      uVar1 = OPENSSL_sk_find(DAT_1553e2f38,local_78);
      uVar3 = OPENSSL_sk_value(DAT_1553e2f38,uVar1);
      return uVar3;
    }
  }
  return 0;
}

// X509V3_add1_i2d @ 14f734990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
X509V3_add1_i2d(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4,
               uint param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f7349b2;
  uVar4 = param_5 & 0xf;
  iVar1 = -1;
  if ((uVar4 == 1) || (iVar1 = X509v3_get_ext_by_NID(*param_1,param_2,0xffffffff), iVar1 < 0)) {
    if ((uVar4 - 3 & 0xfffffffd) == 0) {
      uVar5 = 0x66;
      goto LAB_14f734ae0;
    }
  }
  else {
    if (uVar4 == 4) {
      return 1;
    }
    if (uVar4 == 0) {
      uVar5 = 0x91;
LAB_14f734ae0:
      if ((param_5 & 0x10) != 0) {
        return 0;
      }
      uVar6 = 0x12f;
      goto LAB_14f734aee;
    }
    if (uVar4 == 5) {
      lVar2 = OPENSSL_sk_delete(*param_1,iVar1);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      X509_EXTENSION_free(lVar2);
      return 1;
    }
  }
  lVar2 = X509V3_EXT_i2d(param_2 & 0xffffffff,param_4,param_3);
  if (lVar2 != 0) {
    if (-1 < iVar1) {
      uVar7 = OPENSSL_sk_value(*param_1,iVar1);
      X509_EXTENSION_free(uVar7);
      lVar2 = OPENSSL_sk_set(*param_1,iVar1,lVar2);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      return 1;
    }
    lVar3 = *param_1;
    if (((lVar3 != 0) || (lVar3 = OPENSSL_sk_new_null(), lVar3 != 0)) &&
       (iVar1 = OPENSSL_sk_push(lVar3,lVar2), iVar1 != 0)) {
      *param_1 = lVar3;
      return 1;
    }
    if (lVar3 != *param_1) {
      OPENSSL_sk_free(lVar3);
    }
    X509_EXTENSION_free(lVar2);
    return 0xffffffff;
  }
  uVar6 = 0x10f;
  uVar5 = 0x90;
LAB_14f734aee:
  ERR_put_error(0x22,0x8c,uVar5,"crypto\\x509v3\\v3_lib.c",uVar6,uVar7);
  return 0;
}

// X509V3_get_d2i @ 14f734b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509V3_get_d2i(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar6 = 0;
  if (param_1 == 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    if (param_4 != (int *)0x0) {
      uVar1 = *param_4 + 1;
    }
    uVar7 = uVar6;
    if (-1 < (int)uVar1) {
      uVar7 = (ulonglong)uVar1;
    }
    iVar2 = OPENSSL_sk_num();
    if ((int)uVar7 < iVar2) {
      do {
        uVar4 = OPENSSL_sk_value(param_1,uVar7);
        uVar5 = X509_EXTENSION_get_object(uVar4);
        iVar2 = OBJ_obj2nid(uVar5);
        if (iVar2 == param_2) {
          if (param_4 != (int *)0x0) {
            *param_4 = (int)uVar7;
            uVar6 = uVar4;
            break;
          }
          bVar8 = uVar6 != 0;
          uVar6 = uVar4;
          if (bVar8) {
            if (param_3 == (undefined4 *)0x0) {
              return 0;
            }
            *param_3 = 0xfffffffe;
            return 0;
          }
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
        iVar2 = OPENSSL_sk_num(param_1);
      } while ((int)uVar1 < iVar2);
      if (uVar6 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          uVar3 = X509_EXTENSION_get_critical(uVar6);
          *param_3 = uVar3;
        }
        uVar5 = X509V3_EXT_d2i(uVar6);
        return uVar5;
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
  }
  return 0;
}

// FUN_14f734cb0 @ 14f734cb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734cb0(longlong param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    CRYPTO_free(param_1,"crypto\\x509v3\\v3_lib.c",0x72);
    return;
  }
  return;
}

// FUN_14f734cf0 @ 14f734cf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734cf0(void)

{
  OPENSSL_sk_find();
  return;
}

// FUN_14f734d10 @ 14f734d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734d10(void)

{
  OPENSSL_sk_new();
  return;
}

// FUN_14f734d30 @ 14f734d30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734d30(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f734d50 @ 14f734d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734d50(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f734d70 @ 14f734d70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734d70(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f734d90 @ 14f734d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734d90(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f734db0 @ 14f734db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734db0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f734dd0 @ 14f734dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734dd0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f734df0 @ 14f734df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734df0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f734e10 @ 14f734e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734e10(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f734e30 @ 14f734e30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734e30(void)

{
  OPENSSL_sk_set();
  return;
}

// FUN_14f734e50 @ 14f734e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f734e50(void)

{
  OPENSSL_sk_value();
  return;
}

