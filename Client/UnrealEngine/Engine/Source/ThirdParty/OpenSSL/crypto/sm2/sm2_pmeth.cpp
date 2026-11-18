// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// FUN_14f758f20 @ 14f758f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f758f20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f758f2c;
  lVar1 = CRYPTO_zalloc(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (lVar1 == 0) {
    ERR_put_error(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar2);
    return 0;
  }
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}

// FUN_14f758f90 @ 14f758f90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f758f90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    EC_GROUP_free(*puVar1);
    CRYPTO_free(puVar1[2],"crypto\\sm2\\sm2_pmeth.c",0x33);
    CRYPTO_free(puVar1,"crypto\\sm2\\sm2_pmeth.c",0x34);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

// FUN_14f759000 @ 14f759000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759000(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x14f759015;
  plVar2 = (longlong *)CRYPTO_zalloc(0x28,"crypto\\sm2\\sm2_pmeth.c",0x24);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x35,0x6f,0x41,"crypto\\sm2\\sm2_pmeth.c",0x25,uVar4);
    return 0;
  }
  *(longlong **)(param_1 + 0x28) = plVar2;
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 != 0) {
    lVar3 = EC_GROUP_dup();
    *plVar2 = lVar3;
    if (lVar3 == 0) goto LAB_14f7590ca;
  }
  if (plVar1[2] != 0) {
    _Dst = (void *)CRYPTO_malloc(plVar1[3],"crypto\\sm2\\sm2_pmeth.c",0x49);
    plVar2[2] = (longlong)_Dst;
    if (_Dst == (void *)0x0) {
      ERR_put_error(0x35,0x73,0x41,"crypto\\sm2\\sm2_pmeth.c",0x4b,uVar4);
LAB_14f7590ca:
      FUN_14f758f90(param_1);
      return 0;
    }
    memcpy(_Dst,(void *)plVar1[2],plVar1[3]);
  }
  plVar2[3] = plVar1[3];
  *(int *)(plVar2 + 4) = (int)plVar1[4];
  plVar2[1] = plVar1[1];
  return 1;
}

// FUN_14f759130 @ 14f759130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f759130(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x14f75914a;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar1 = ECDSA_size(uVar3);
  if (iVar1 < 1) {
LAB_14f759196:
    uVar3 = 0;
  }
  else {
    uVar2 = (ulonglong)iVar1;
    if (param_2 != 0) {
      if (*param_3 < uVar2) {
        ERR_put_error(0x35,0x70,0x6b,"crypto\\sm2\\sm2_pmeth.c",CONCAT44(uVar4,0x6a));
        goto LAB_14f759196;
      }
      uVar3 = sm2_sign(param_4,param_5,param_2,local_res8,uVar3,uVar5);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      uVar2 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar2;
    uVar3 = 1;
  }
  return uVar3;
}

// FUN_14f7591e0 @ 14f7591e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7591e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  sm2_verify(param_4,param_5,param_2,param_3);
  return;
}

// FUN_14f759220 @ 14f759220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f759220(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    lVar3 = EVP_sm3();
  }
  if (param_2 == 0) {
    iVar2 = sm2_ciphertext_size(uVar1,lVar3,param_5,param_3);
    uVar5 = 1;
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    uVar4 = (ulonglong)uVar5;
  }
  else {
    uVar4 = sm2_encrypt(uVar1,lVar3,param_4,param_5,param_2,param_3);
  }
  return uVar4;
}

// FUN_14f7592c0 @ 14f7592c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7592c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  if (lVar3 == 0) {
    lVar3 = EVP_sm3();
  }
  if (param_2 == 0) {
    iVar2 = sm2_plaintext_size(param_4,param_5,param_3);
    uVar5 = 1;
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    uVar4 = (ulonglong)uVar5;
  }
  else {
    uVar4 = sm2_decrypt(uVar1,lVar3,param_4,param_5,param_2,param_3);
  }
  return uVar4;
}

// FUN_14f759360 @ 14f759360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f759360(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  size_t _Size;
  undefined8 uVar3;
  
  uVar3 = 0x14f759375;
  plVar1 = *(longlong **)(param_1 + 0x28);
  _Size = (size_t)param_3;
  if (param_2 < 0x1003) {
    if (param_2 == 0x1002) {
      if (*plVar1 != 0) {
        EC_GROUP_set_asn1_flag(*plVar1,param_3);
        return 1;
      }
      ERR_put_error(0x35,0x6d,0x6d,"crypto\\sm2\\sm2_pmeth.c",0xb6,0x14f759375);
      return 0;
    }
    if (param_2 == 1) {
      plVar1[1] = (longlong)param_4;
      return 1;
    }
    if (param_2 != 7) {
      if (param_2 == 0xd) {
        *param_4 = plVar1[1];
        return 1;
      }
      if (param_2 != 0x1001) {
        return 0xfffffffe;
      }
      lVar2 = EC_GROUP_new_by_curve_name(param_3);
      if (lVar2 == 0) {
        ERR_put_error(0x35,0x6d,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xad,uVar3);
        return 0;
      }
      EC_GROUP_free(*plVar1);
      *plVar1 = lVar2;
    }
    return 1;
  }
  if (param_2 == 0x100b) {
    if (param_3 < 1) {
      CRYPTO_free(plVar1[2],"crypto\\sm2\\sm2_pmeth.c",0xd0);
      plVar1[2] = 0;
    }
    else {
      _Dst = (void *)CRYPTO_malloc(_Size,"crypto\\sm2\\sm2_pmeth.c",0xc6);
      if (_Dst == (void *)0x0) {
        ERR_put_error(0x35,0x6d,0x41,"crypto\\sm2\\sm2_pmeth.c",200);
        return 0;
      }
      memcpy(_Dst,param_4,_Size);
      CRYPTO_free(plVar1[2],"crypto\\sm2\\sm2_pmeth.c",0xcc);
      plVar1[2] = (longlong)_Dst;
    }
    plVar1[3] = _Size;
    *(undefined4 *)(plVar1 + 4) = 1;
    return 1;
  }
  if (param_2 == 0x100c) {
    memcpy(param_4,(void *)plVar1[2],plVar1[3]);
    return 1;
  }
  if (param_2 != 0x100d) {
    return 0xfffffffe;
  }
  *param_4 = plVar1[3];
  return 1;
}

// FUN_14f7595d0 @ 14f7595d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f7595d0(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14f7595e5;
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 != 0) {
    iVar1 = strcmp(param_2,"ec_param_enc");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = strcmp(param_3,"explicit");
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = strcmp(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      uVar2 = 1;
    }
    uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1002,uVar2,0);
    return uVar3;
  }
  iVar1 = EC_curve_nist2nid(param_3);
  if (((iVar1 == 0) && (iVar1 = OBJ_sn2nid(param_3), iVar1 == 0)) &&
     (iVar1 = OBJ_ln2nid(param_3), iVar1 == 0)) {
    ERR_put_error(0x35,0x6e,0x6c,"crypto\\sm2\\sm2_pmeth.c",0xf1,uVar3);
    return 0;
  }
  uVar3 = EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1001,iVar1,0);
  return uVar3;
}

// FUN_14f759730 @ 14f759730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f759730(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14f759748;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar4 = EVP_MD_CTX_md(param_2);
  iVar2 = EVP_MD_size(uVar4);
  if (*(int *)(lVar1 + 0x20) == 0) {
    local_78 = CONCAT44(local_78._4_4_,0x112);
    ERR_put_error(0x35,0x72,0x70,"crypto\\sm2\\sm2_pmeth.c");
  }
  else {
    if (iVar2 < 0) {
      local_78 = CONCAT44(local_78._4_4_,0x117);
      ERR_put_error(0x35,0x72,0x66,"crypto\\sm2\\sm2_pmeth.c");
      return 0;
    }
    local_78 = uVar5;
    iVar3 = sm2_compute_z_digest
                      (local_68,uVar4,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
    if (iVar3 != 0) {
      uVar5 = EVP_DigestUpdate(param_2,local_68,(longlong)iVar2);
      return uVar5;
    }
  }
  return 0;
}

