// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// FUN_14f717910 @ 14f717910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14f717910(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = DSA_new();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    DSA_free(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}

// DSA_SIG_free @ 14f717990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_SIG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_clear_free(*param_1);
    BN_clear_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\dsa\\dsa_asn1.c",0x26);
  }
  return;
}

// DSA_SIG_get0 @ 14f7179e0

void DSA_SIG_get0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}

// DSA_SIG_new @ 14f717a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSA_SIG_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f717a1c;
  lVar1 = CRYPTO_zalloc(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (lVar1 == 0) {
    ERR_put_error(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c,uVar2);
  }
  return lVar1;
}

// DSA_SIG_set0 @ 14f717a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DSA_SIG_set0(longlong *param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    BN_clear_free(*param_1);
    BN_clear_free(param_1[1]);
    *param_1 = param_2;
    param_1[1] = param_3;
    return 1;
  }
  return 0;
}

// DSA_sign @ 14f717ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
DSA_sign(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
        undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)DSA_do_sign(param_2,param_3,param_6);
  if (puVar2 == (undefined8 *)0x0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = ASN1_item_i2d(puVar2,&local_res20,&DAT_1534b4e00);
  *param_5 = uVar1;
  BN_clear_free(*puVar2);
  BN_clear_free(puVar2[1]);
  CRYPTO_free(puVar2,"crypto\\dsa\\dsa_asn1.c",0x26);
  return 1;
}

// DSA_verify @ 14f717b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
DSA_verify(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
          undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *local_res20;
  void *local_28;
  void *local_20;
  
  local_28 = (void *)0x0;
  iVar2 = -1;
  local_20 = param_4;
  local_res20 = (undefined8 *)CRYPTO_zalloc(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (local_res20 == (undefined8 *)0x0) {
    ERR_put_error(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c);
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = ASN1_item_d2i(&local_res20,&local_20,param_5,&DAT_1534b4e00);
    uVar4 = 0xffffffff;
    if (lVar5 != 0) {
      iVar2 = ASN1_item_i2d(local_res20,&local_28,&DAT_1534b4e00);
      uVar4 = 0xffffffff;
      if ((iVar2 == param_5) && (iVar3 = memcmp(param_4,local_28,(longlong)iVar2), iVar3 == 0)) {
        uVar4 = DSA_do_verify(param_2,param_3,local_res20,param_6);
      }
    }
    CRYPTO_clear_free(local_28,(longlong)iVar2,"crypto\\dsa\\dsa_asn1.c",0x98);
    puVar1 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      BN_clear_free(*local_res20);
      BN_clear_free(puVar1[1]);
      CRYPTO_free(puVar1,"crypto\\dsa\\dsa_asn1.c",0x26);
    }
  }
  return uVar4;
}

// DSAparams_dup @ 14f717ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSAparams_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_1534b4fd0,param_1);
  return;
}

// d2i_DSAPrivateKey @ 14f717d20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSAPrivateKey(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_DSAPublicKey @ 14f717d50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSAPublicKey(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_DSA_SIG @ 14f717d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSA_SIG(void)

{
  ASN1_item_d2i();
  return;
}

// d2i_DSAparams @ 14f717db0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSAparams(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_DSAPrivateKey @ 14f717de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSAPrivateKey(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4f40);
  return;
}

// i2d_DSAPublicKey @ 14f717e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSAPublicKey(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b50b0);
  return;
}

// i2d_DSA_SIG @ 14f717e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSA_SIG(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4e00);
  return;
}

// i2d_DSAparams @ 14f717e70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DSAparams(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_1534b4fd0);
  return;
}

