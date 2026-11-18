// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// EVP_PKCS82PKEY @ 14f71a260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong EVP_PKCS82PKEY(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f71a26c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  iVar2 = PKCS8_pkey_get0(local_78,0,0,0);
  if (iVar2 != 0) {
    lVar4 = EVP_PKEY_new();
    if (lVar4 == 0) {
      local_88 = CONCAT44(local_88._4_4_,0x1f);
      ERR_put_error(6,0x6f,0x41,"crypto\\evp\\evp_pkey.c");
    }
    else {
      uVar3 = OBJ_obj2nid(local_78[0]);
      iVar2 = EVP_PKEY_set_type(lVar4,uVar3);
      if (iVar2 == 0) {
        local_88 = CONCAT44(local_88._4_4_,0x24);
        ERR_put_error(6,0x6f,0x76,"crypto\\evp\\evp_pkey.c");
        i2t_ASN1_OBJECT(local_68,0x50,local_78[0]);
        ERR_add_error_data(2,"TYPE=",local_68);
      }
      else {
        pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x40);
        if (pcVar1 == (code *)0x0) {
          local_88 = CONCAT44(local_88._4_4_,0x30);
          uVar5 = 0x90;
        }
        else {
          iVar2 = (*pcVar1)(lVar4,param_1);
          if (iVar2 != 0) {
            return lVar4;
          }
          local_88 = CONCAT44(local_88._4_4_,0x2c);
          uVar5 = 0x91;
        }
        ERR_put_error(6,0x6f,uVar5,"crypto\\evp\\evp_pkey.c");
      }
      EVP_PKEY_free(lVar4);
    }
  }
  return 0;
}

// EVP_PKEY2PKCS8 @ 14f71a3d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EVP_PKEY2PKCS8(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f71a3e0;
  lVar3 = PKCS8_PRIV_KEY_INFO_new();
  if (lVar3 == 0) {
    ERR_put_error(6,0x71,0x41,"crypto\\evp\\evp_pkey.c",0x41,uVar6);
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar5 = 0x50;
    uVar4 = 0x76;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x48);
    if (pcVar1 == (code *)0x0) {
      uVar5 = 0x4c;
      uVar4 = 0x90;
    }
    else {
      iVar2 = (*pcVar1)(lVar3,param_1);
      if (iVar2 != 0) {
        return lVar3;
      }
      uVar5 = 0x48;
      uVar4 = 0x92;
    }
  }
  ERR_put_error(6,0x71,uVar4,"crypto\\evp\\evp_pkey.c",uVar5,uVar6);
  PKCS8_PRIV_KEY_INFO_free(lVar3);
  return 0;
}

// EVP_PKEY_add1_attr @ 14f71a4b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_add1_attr(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr(param_1 + 0x38);
  return lVar1 != 0;
}

// EVP_PKEY_add1_attr_by_NID @ 14f71a4e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_add1_attr_by_NID(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x38);
  return lVar1 != 0;
}

// EVP_PKEY_add1_attr_by_OBJ @ 14f71a520

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_add1_attr_by_OBJ(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_OBJ(param_1 + 0x38);
  return lVar1 != 0;
}

// EVP_PKEY_add1_attr_by_txt @ 14f71a560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool EVP_PKEY_add1_attr_by_txt(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_txt(param_1 + 0x38);
  return lVar1 != 0;
}

// EVP_PKEY_delete_attr @ 14f71a5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_delete_attr(longlong param_1)

{
  X509at_delete_attr(*(undefined8 *)(param_1 + 0x38));
  return;
}

// EVP_PKEY_get_attr @ 14f71a5c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_get_attr(longlong param_1)

{
  X509at_get_attr(*(undefined8 *)(param_1 + 0x38));
  return;
}

// EVP_PKEY_get_attr_by_NID @ 14f71a5e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_get_attr_by_NID(longlong param_1)

{
  X509at_get_attr_by_NID(*(undefined8 *)(param_1 + 0x38));
  return;
}

// EVP_PKEY_get_attr_by_OBJ @ 14f71a600

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_get_attr_by_OBJ(longlong param_1)

{
  X509at_get_attr_by_OBJ(*(undefined8 *)(param_1 + 0x38));
  return;
}

// EVP_PKEY_get_attr_count @ 14f71a620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_PKEY_get_attr_count(longlong param_1)

{
  X509at_get_attr_count(*(undefined8 *)(param_1 + 0x38));
  return;
}

