// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 19

// X509_CERT_AUX_free @ 14f71b4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CERT_AUX_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534b64b0);
  return;
}

// X509_CERT_AUX_new @ 14f71b530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CERT_AUX_new(void)

{
  ASN1_item_new(&DAT_1534b64b0);
  return;
}

// X509_add1_reject_object @ 14f71b560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_add1_reject_object(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = OBJ_dup(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar2 = ASN1_item_new(&DAT_1534b64b0);
      *(longlong *)(param_1 + 0x138) = lVar2;
      if (lVar2 == 0) goto LAB_14f71b5e4;
    }
    lVar2 = *(longlong *)(param_1 + 0x138);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) == 0) {
        lVar3 = OPENSSL_sk_new_null();
        *(longlong *)(lVar2 + 8) = lVar3;
        if (lVar3 == 0) goto LAB_14f71b5e4;
      }
      uVar4 = OPENSSL_sk_push(*(undefined8 *)(lVar2 + 8),lVar1);
      return uVar4;
    }
  }
LAB_14f71b5e4:
  ASN1_OBJECT_free(lVar1);
  return 0;
}

// X509_add1_trust_object @ 14f71b600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_add1_trust_object(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  if ((param_2 != 0) && (lVar3 = OBJ_dup(param_2), lVar3 == 0)) {
    return 0;
  }
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar4 = ASN1_item_new(&DAT_1534b64b0);
      *(longlong *)(param_1 + 0x138) = lVar4;
      if (lVar4 == 0) goto LAB_14f71b697;
    }
    plVar1 = *(longlong **)(param_1 + 0x138);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 == 0) {
        lVar4 = OPENSSL_sk_new_null();
        *plVar1 = lVar4;
        if (lVar4 == 0) goto LAB_14f71b697;
      }
      if (lVar3 == 0) {
        return 1;
      }
      iVar2 = OPENSSL_sk_push(*plVar1,lVar3);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
LAB_14f71b697:
  ASN1_OBJECT_free(lVar3);
  return 0;
}

// X509_alias_get0 @ 14f71b6c0

undefined8 X509_alias_get0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x138) != 0) &&
     (puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x138) + 0x10), puVar1 != (undefined4 *)0x0)
     ) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10) + 8);
  }
  return 0;
}

// X509_alias_set1 @ 14f71b700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_alias_set1(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10) != 0)) {
      ASN1_UTF8STRING_free();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x10) = 0;
    }
    return 1;
  }
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar1 = ASN1_item_new(&DAT_1534b64b0);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x10) == 0) {
        lVar2 = ASN1_UTF8STRING_new();
        *(longlong *)(lVar1 + 0x10) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = ASN1_STRING_set(*(undefined8 *)(lVar1 + 0x10),param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}

// X509_get0_reject_objects @ 14f71b7f0

undefined8 X509_get0_reject_objects(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8);
  }
  return 0;
}

// X509_get0_trust_objects @ 14f71b810

undefined8 X509_get0_trust_objects(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    return **(undefined8 **)(param_1 + 0x138);
  }
  return 0;
}

// X509_keyid_get0 @ 14f71b830

undefined8 X509_keyid_get0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x138) != 0) &&
     (puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x138) + 0x18), puVar1 != (undefined4 *)0x0)
     ) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
    }
    return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18) + 8);
  }
  return 0;
}

// X509_keyid_set1 @ 14f71b870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_keyid_set1(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x18) != 0)) {
      ASN1_OCTET_STRING_free();
      *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 0;
    }
    return 1;
  }
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar1 = ASN1_item_new(&DAT_1534b64b0);
      *(longlong *)(param_1 + 0x138) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x138);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x18) == 0) {
        lVar2 = ASN1_OCTET_STRING_new();
        *(longlong *)(lVar1 + 0x18) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = ASN1_STRING_set(*(undefined8 *)(lVar1 + 0x18),param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}

// X509_reject_clear @ 14f71b960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_reject_clear(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8),ASN1_OBJECT_free);
    *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8) = 0;
  }
  return;
}

// X509_trust_clear @ 14f71b9b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_trust_clear(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    OPENSSL_sk_pop_free(**(undefined8 **)(param_1 + 0x138),ASN1_OBJECT_free);
    **(undefined8 **)(param_1 + 0x138) = 0;
  }
  return;
}

// X509_trusted @ 14f71ba00

bool X509_trusted(longlong param_1)

{
  return *(longlong *)(param_1 + 0x138) != 0;
}

// FUN_14f71ba20 @ 14f71ba20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f71ba20(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x138) == 0) {
    lVar1 = ASN1_item_new(&DAT_1534b64b0);
    *(longlong *)(param_1 + 0x138) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x138);
}

// d2i_X509_CERT_AUX @ 14f71ba80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_CERT_AUX(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_X509_CERT_AUX @ 14f71bab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_CERT_AUX(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b64b0);
  return;
}

// FUN_14f71bae0 @ 14f71bae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71bae0(void)

{
  OPENSSL_sk_new_null();
  return;
}

// FUN_14f71bb00 @ 14f71bb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71bb00(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f71bb20 @ 14f71bb20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f71bb20(void)

{
  OPENSSL_sk_push();
  return;
}

