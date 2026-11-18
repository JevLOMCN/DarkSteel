// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// FUN_14f781130 @ 14f781130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f781130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_put_error(0x22,0x67,0x41,"crypto\\x509v3\\v3_extku.c",0x52);
    OPENSSL_sk_free(0);
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_3,iVar5);
      lVar4 = puVar3[2];
      if (lVar4 == 0) {
        lVar4 = puVar3[1];
      }
      lVar4 = OBJ_txt2obj(lVar4,0);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
      if (lVar4 == 0) {
        OPENSSL_sk_pop_free(lVar2,ASN1_OBJECT_free);
        ERR_put_error(0x22,0x67,0x6e,"crypto\\x509v3\\v3_extku.c",CONCAT44(uVar6,0x60));
        ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        return 0;
      }
      OPENSSL_sk_push(lVar2,lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return lVar2;
}

// FUN_14f781280 @ 14f781280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f781280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f781290;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar3 = 0;
  local_78[0] = param_3;
  iVar1 = OPENSSL_sk_num(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_2,iVar3);
      i2t_ASN1_OBJECT(local_68,0x50,uVar2);
      X509V3_add_value(0,local_68,local_78);
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(param_2);
    } while (iVar3 < iVar1);
  }
  return local_78[0];
}

// EXTENDED_KEY_USAGE_free @ 14f781340

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EXTENDED_KEY_USAGE_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_1534da538);
  return;
}

// EXTENDED_KEY_USAGE_new @ 14f781370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EXTENDED_KEY_USAGE_new(void)

{
  ASN1_item_new(&DAT_1534da538);
  return;
}

// d2i_EXTENDED_KEY_USAGE @ 14f7813a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_EXTENDED_KEY_USAGE(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_EXTENDED_KEY_USAGE @ 14f7813d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_EXTENDED_KEY_USAGE(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534da538);
  return;
}

// FUN_14f781400 @ 14f781400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781400(void)

{
  OPENSSL_sk_free();
  return;
}

// FUN_14f781420 @ 14f781420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781420(void)

{
  OPENSSL_sk_new_reserve();
  return;
}

// FUN_14f781440 @ 14f781440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781440(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f781460 @ 14f781460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781460(void)

{
  OPENSSL_sk_pop_free();
  return;
}

// FUN_14f781480 @ 14f781480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f781480(void)

{
  OPENSSL_sk_push();
  return;
}

// FUN_14f7814a0 @ 14f7814a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7814a0(void)

{
  OPENSSL_sk_value();
  return;
}

// FUN_14f7814c0 @ 14f7814c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7814c0(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f7814e0 @ 14f7814e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7814e0(void)

{
  OPENSSL_sk_value();
  return;
}

