// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 20

// X509_EXTENSION_create_by_NID @ 14f709940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_EXTENSION_create_by_NID
                   (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f70995a;
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x6c,0x6d,"crypto\\x509\\x509_v3.c",0x91,uVar3);
    lVar2 = 0;
  }
  else {
    lVar2 = X509_EXTENSION_create_by_OBJ(param_1,lVar1,param_3,param_4);
    if (lVar2 == 0) {
      ASN1_OBJECT_free(lVar1);
    }
  }
  return lVar2;
}

// X509_EXTENSION_create_by_OBJ @ 14f7099e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
X509_EXTENSION_create_by_OBJ(longlong *param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f709a00;
  if (((param_1 == (longlong *)0x0) || (plVar3 = (longlong *)*param_1, plVar3 == (longlong *)0x0))
     && (plVar3 = (longlong *)X509_EXTENSION_new(), plVar3 == (longlong *)0x0)) {
    ERR_put_error(0xb,0x6d,0x41,"crypto\\x509\\x509_v3.c",0xa3,uVar5);
  }
  else {
    if (param_2 != 0) {
      ASN1_OBJECT_free(*plVar3);
      lVar4 = OBJ_dup(param_2);
      *plVar3 = lVar4;
      if (lVar4 != 0) {
        uVar1 = 0xffffffff;
        if (param_3 != 0) {
          uVar1 = 0xff;
        }
        *(undefined4 *)(plVar3 + 1) = uVar1;
        iVar2 = ASN1_OCTET_STRING_set(plVar3 + 2,*(undefined8 *)(param_4 + 2),*param_4);
        if (iVar2 != 0) {
          if (param_1 == (longlong *)0x0) {
            return plVar3;
          }
          if (*param_1 != 0) {
            return plVar3;
          }
          *param_1 = (longlong)plVar3;
          return plVar3;
        }
      }
    }
    if ((param_1 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
      X509_EXTENSION_free(plVar3);
    }
  }
  return (longlong *)0x0;
}

// X509_EXTENSION_get_critical @ 14f709ae0

bool X509_EXTENSION_get_critical(longlong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = 0 < *(int *)(param_1 + 8);
  }
  return bVar1;
}

// X509_EXTENSION_get_data @ 14f709b00

longlong X509_EXTENSION_get_data(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return param_1 + 0x10;
}

// X509_EXTENSION_get_object @ 14f709b20

undefined8 X509_EXTENSION_get_object(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}

// X509_EXTENSION_set_data @ 14f709b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_EXTENSION_set_data
               (longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = ASN1_OCTET_STRING_set
                    (param_1 + 0x10,*(undefined8 *)(param_2 + 2),*param_2,param_4,0x14f709b7a);
  return iVar1 != 0;
}

// X509_EXTENSION_set_object @ 14f709bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X509_EXTENSION_set_object(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    ASN1_OBJECT_free(*param_1);
    lVar1 = OBJ_dup(param_2);
    *param_1 = lVar1;
    return lVar1 != 0;
  }
  return false;
}

// X509v3_add_ext @ 14f709c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509v3_add_ext(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f709c2e;
  lVar4 = 0;
  if (param_1 == (longlong *)0x0) {
    uVar6 = 0x68;
    uVar5 = 0x43;
    lVar3 = lVar4;
  }
  else {
    lVar3 = *param_1;
    if ((lVar3 != 0) || (lVar3 = OPENSSL_sk_new_null(), lVar3 != 0)) {
      iVar1 = OPENSSL_sk_num(lVar3);
      iVar2 = iVar1;
      if ((param_3 <= iVar1) && (iVar2 = param_3, param_3 < 0)) {
        iVar2 = iVar1;
      }
      lVar4 = X509_EXTENSION_dup(param_2);
      if (lVar4 == 0) goto LAB_14f709c61;
      iVar2 = OPENSSL_sk_insert(lVar3,lVar4,iVar2);
      if (iVar2 != 0) {
        if (*param_1 != 0) {
          return lVar3;
        }
        *param_1 = lVar3;
        return lVar3;
      }
    }
    uVar6 = 0x80;
    uVar5 = 0x41;
  }
  ERR_put_error(0xb,0x68,uVar5,"crypto\\x509\\x509_v3.c",uVar6,uVar7);
LAB_14f709c61:
  X509_EXTENSION_free(lVar4);
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    OPENSSL_sk_free(lVar3);
  }
  return 0;
}

// X509v3_delete_ext @ 14f709d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_delete_ext(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_delete(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// X509v3_get_ext @ 14f709d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_get_ext(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((param_2 < iVar1) && (-1 < param_2)) {
      uVar2 = OPENSSL_sk_value(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// X509v3_get_ext_by_NID @ 14f709de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_get_ext_by_NID(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = X509v3_get_ext_by_OBJ(param_1,lVar1,param_3);
  return uVar2;
}

// X509v3_get_ext_by_OBJ @ 14f709e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509v3_get_ext_by_OBJ(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar4 = 0;
  if (-1 < param_3 + 1) {
    iVar4 = param_3 + 1;
  }
  iVar1 = OPENSSL_sk_num();
  while( true ) {
    if (iVar1 <= iVar4) {
      return -1;
    }
    puVar3 = (undefined8 *)OPENSSL_sk_value(param_1,iVar4);
    iVar2 = OBJ_cmp(*puVar3,param_2);
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

// X509v3_get_ext_by_critical @ 14f709ee0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509v3_get_ext_by_critical(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar3 = 0;
  if (-1 < param_3 + 1) {
    iVar3 = param_3 + 1;
  }
  iVar1 = OPENSSL_sk_num();
  do {
    if (iVar1 <= iVar3) {
      return -1;
    }
    lVar2 = OPENSSL_sk_value(param_1,iVar3);
    if (*(int *)(lVar2 + 8) < 1) {
LAB_14f709f49:
      if (param_2 == 0) {
        return iVar3;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar3;
      }
      if (*(int *)(lVar2 + 8) < 1) goto LAB_14f709f49;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

// X509v3_get_ext_count @ 14f709f80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509v3_get_ext_count(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_num();
  return uVar1;
}

// FUN_14f709fb0 @ 14f709fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f709fb0(void)

{
  OPENSSL_sk_delete();
  return;
}

// FUN_14f709fd0 @ 14f709fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f709fd0(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f709ff0 @ 14f709ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f709ff0(void)

{
  OPENSSL_sk_insert();
  return;
}

// FUN_14f70a010 @ 14f70a010

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a010(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f70a030 @ 14f70a030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a030(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f70a050 @ 14f70a050

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f70a050(void)

{
  OPENSSL_sk_value();
  return;
}

