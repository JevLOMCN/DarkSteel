// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 20

// FUN_14f6b1230 @ 14f6b1230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b1230(int param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 == 3) {
    EVP_PKEY_free(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  if (param_1 == 5) {
    lVar1 = *param_2;
    EVP_PKEY_free(*(undefined8 *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x10) = 0;
    ERR_set_mark();
    iVar2 = FUN_14f6b1d00(lVar1 + 0x10,lVar1);
    if (iVar2 == -1) {
      return 0;
    }
    ERR_pop_to_mark();
  }
  return 1;
}

// X509_PUBKEY_free @ 14f6b12c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_PUBKEY_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_153489ea0);
  return;
}

// X509_PUBKEY_get @ 14f6b12f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_PUBKEY_get(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b12fc;
  lVar2 = X509_PUBKEY_get0();
  if ((lVar2 != 0) && (iVar1 = EVP_PKEY_up_ref(lVar2), iVar1 == 0)) {
    ERR_put_error(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar3);
    return 0;
  }
  return lVar2;
}

// X509_PUBKEY_get0 @ 14f6b1350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_PUBKEY_get0(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      return *(longlong *)(param_1 + 0x10);
    }
    FUN_14f6b1d00(local_res8,param_1);
    if (local_res8[0] != 0) {
      ERR_put_error(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa2);
      EVP_PKEY_free(local_res8[0]);
    }
  }
  return 0;
}

// X509_PUBKEY_get0_param @ 14f6b13d0

undefined8
X509_PUBKEY_get0_param
          (undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)*param_5;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_5[1] + 8);
    *param_3 = *(undefined4 *)param_5[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *param_5;
  }
  return 1;
}

// X509_PUBKEY_new @ 14f6b1430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_PUBKEY_new(void)

{
  ASN1_item_new(&DAT_153489ea0);
  return;
}

// X509_PUBKEY_set @ 14f6b1460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_PUBKEY_set(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6b1470;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = ASN1_item_new(&DAT_153489ea0);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      uVar5 = 0x52;
      uVar4 = 0x6f;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)(param_2 + 0x10) + 0x28);
      if (pcVar1 == (code *)0x0) {
        uVar5 = 0x4e;
        uVar4 = 0x7c;
      }
      else {
        iVar2 = (*pcVar1)(lVar3,param_2);
        if (iVar2 != 0) {
          ASN1_item_free(*param_1,&DAT_153489ea0);
          *param_1 = lVar3;
          *(longlong *)(lVar3 + 0x10) = param_2;
          EVP_PKEY_up_ref(param_2);
          return 1;
        }
        uVar5 = 0x4a;
        uVar4 = 0x7e;
      }
    }
    ERR_put_error(0xb,0x78,uVar4,"crypto\\x509\\x_pubkey.c",uVar5,uVar6);
  }
  ASN1_item_free(lVar3,&DAT_153489ea0);
  return 0;
}

// X509_PUBKEY_set0_param @ 14f6b1570

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_PUBKEY_set0_param(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong in_stack_00000028;
  undefined4 in_stack_00000030;
  
  uVar1 = X509_ALGOR_set0(*param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (in_stack_00000028 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1[1] + 8),"crypto\\x509\\x_pubkey.c",0x15c);
    *(longlong *)(param_1[1] + 8) = in_stack_00000028;
    *(undefined4 *)param_1[1] = in_stack_00000030;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) & 0xfffffff0;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 8;
  }
  return 1;
}

// X509_get0_pubkey_bitstr @ 14f6b1600

undefined8 X509_get0_pubkey_bitstr(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8);
}

// d2i_DSA_PUBKEY @ 14f6b1620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_DSA_PUBKEY(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x14f6b1633;
  local_res10 = *param_2;
  lVar2 = ASN1_item_d2i(0,&local_res10,param_3,&DAT_153489ea0);
  if (lVar2 != 0) {
    lVar3 = X509_PUBKEY_get0(lVar2);
    if ((lVar3 != 0) && (iVar1 = EVP_PKEY_up_ref(lVar3), iVar1 == 0)) {
      ERR_put_error(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar4);
      lVar3 = 0;
    }
    ASN1_item_free(lVar2,&DAT_153489ea0);
    uVar4 = local_res10;
    if (lVar3 != 0) {
      lVar2 = EVP_PKEY_get1_DSA(lVar3);
      EVP_PKEY_free(lVar3);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        *param_2 = uVar4;
        if (param_1 != (longlong *)0x0) {
          DSA_free(*param_1);
          *param_1 = lVar2;
        }
      }
      return lVar2;
    }
  }
  return 0;
}

// d2i_EC_PUBKEY @ 14f6b1720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_EC_PUBKEY(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x14f6b1733;
  local_res10 = *param_2;
  lVar2 = ASN1_item_d2i(0,&local_res10,param_3,&DAT_153489ea0);
  if (lVar2 != 0) {
    lVar3 = X509_PUBKEY_get0(lVar2);
    if ((lVar3 != 0) && (iVar1 = EVP_PKEY_up_ref(lVar3), iVar1 == 0)) {
      ERR_put_error(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar4);
      lVar3 = 0;
    }
    ASN1_item_free(lVar2,&DAT_153489ea0);
    uVar4 = local_res10;
    if (lVar3 != 0) {
      lVar2 = EVP_PKEY_get1_EC_KEY(lVar3);
      EVP_PKEY_free(lVar3);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        *param_2 = uVar4;
        if (param_1 != (longlong *)0x0) {
          EC_KEY_free(*param_1);
          *param_1 = lVar2;
        }
      }
      return lVar2;
    }
  }
  return 0;
}

// d2i_PUBKEY @ 14f6b1820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_PUBKEY(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x14f6b1836;
  local_res10 = *param_2;
  lVar2 = ASN1_item_d2i(0,&local_res10,param_3,&DAT_153489ea0);
  if (lVar2 != 0) {
    lVar3 = X509_PUBKEY_get0(lVar2);
    if ((lVar3 != 0) && (iVar1 = EVP_PKEY_up_ref(lVar3), iVar1 == 0)) {
      ERR_put_error(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar4);
      lVar3 = 0;
    }
    ASN1_item_free(lVar2,&DAT_153489ea0);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      *param_2 = local_res10;
      if (param_1 != (longlong *)0x0) {
        EVP_PKEY_free(*param_1);
        *param_1 = lVar3;
      }
    }
    return lVar3;
  }
  return 0;
}

// d2i_RSA_PUBKEY @ 14f6b1910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_RSA_PUBKEY(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x14f6b1923;
  local_res10 = *param_2;
  lVar2 = ASN1_item_d2i(0,&local_res10,param_3,&DAT_153489ea0);
  if (lVar2 != 0) {
    lVar3 = X509_PUBKEY_get0(lVar2);
    if ((lVar3 != 0) && (iVar1 = EVP_PKEY_up_ref(lVar3), iVar1 == 0)) {
      ERR_put_error(0xb,0xa1,0x44,"crypto\\x509\\x_pubkey.c",0xae,uVar4);
      lVar3 = 0;
    }
    ASN1_item_free(lVar2,&DAT_153489ea0);
    uVar4 = local_res10;
    if (lVar3 != 0) {
      lVar2 = EVP_PKEY_get1_RSA(lVar3);
      EVP_PKEY_free(lVar3);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        *param_2 = uVar4;
        if (param_1 != (longlong *)0x0) {
          RSA_free(*param_1);
          *param_1 = lVar2;
        }
      }
      return lVar2;
    }
  }
  return 0;
}

// d2i_X509_PUBKEY @ 14f6b1a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509_PUBKEY(void)

{
  ASN1_item_d2i();
  return;
}

// i2d_DSA_PUBKEY @ 14f6b1a40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 i2d_DSA_PUBKEY(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b1a50;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = EVP_PKEY_new();
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xa1,0x41,"crypto\\x509\\x_pubkey.c",0x124,uVar3);
    return 0xffffffff;
  }
  EVP_PKEY_set1_DSA(lVar2,param_1);
  uVar1 = i2d_PUBKEY(lVar2,param_2);
  EVP_PKEY_free(lVar2);
  return uVar1;
}

// i2d_EC_PUBKEY @ 14f6b1af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 i2d_EC_PUBKEY(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b1b00;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = EVP_PKEY_new();
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xb5,0x41,"crypto\\x509\\x_pubkey.c",0x14b,uVar3);
    return 0xffffffff;
  }
  EVP_PKEY_set1_EC_KEY(lVar2,param_1);
  uVar1 = i2d_PUBKEY(lVar2,param_2);
  EVP_PKEY_free(lVar2);
  return uVar1;
}

// i2d_PUBKEY @ 14f6b1ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 i2d_PUBKEY(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = X509_PUBKEY_set(local_res8,param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = ASN1_item_i2d(local_res8[0],param_2,&DAT_153489ea0);
  ASN1_item_free(local_res8[0],&DAT_153489ea0);
  return uVar2;
}

// i2d_RSA_PUBKEY @ 14f6b1c20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 i2d_RSA_PUBKEY(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f6b1c30;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = EVP_PKEY_new();
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xa5,0x41,"crypto\\x509\\x_pubkey.c",0xfc,uVar3);
    return 0xffffffff;
  }
  EVP_PKEY_set1_RSA(lVar2,param_1);
  uVar1 = i2d_PUBKEY(lVar2,param_2);
  EVP_PKEY_free(lVar2);
  return uVar1;
}

// i2d_X509_PUBKEY @ 14f6b1cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_153489ea0);
  return;
}

// FUN_14f6b1d00 @ 14f6b1d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6b1d00(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6b1d15;
  lVar4 = EVP_PKEY_new();
  if (lVar4 == 0) {
    ERR_put_error(0xb,0x94,0x41,"crypto\\x509\\x_pubkey.c",0x6d,uVar6);
    return 0xffffffff;
  }
  uVar2 = OBJ_obj2nid(*(undefined8 *)*param_2);
  iVar3 = EVP_PKEY_set_type(lVar4,uVar2);
  if (iVar3 == 0) {
    uVar5 = 0x72;
    uVar2 = 0x6f;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x20);
    if (pcVar1 == (code *)0x0) {
      uVar5 = 0x81;
      uVar2 = 0x7c;
    }
    else {
      iVar3 = (*pcVar1)(lVar4,param_2);
      if (iVar3 != 0) {
        *param_1 = lVar4;
        return 1;
      }
      uVar5 = 0x7d;
      uVar2 = 0x7d;
    }
  }
  ERR_put_error(0xb,0x94,uVar2,"crypto\\x509\\x_pubkey.c",uVar5,uVar6);
  EVP_PKEY_free(lVar4);
  return 0;
}

