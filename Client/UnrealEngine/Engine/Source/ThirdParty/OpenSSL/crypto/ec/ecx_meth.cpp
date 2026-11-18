// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 29

// FUN_14f74cc00 @ 14f74cc00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74cc00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar7;
  longlong lVar6;
  ulonglong uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar8 = 0x14f74cc10;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    ERR_put_error(0x10,0x10c,0x74,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar7,0x83),0x14f74cc10);
    return 0;
  }
  iVar1 = **(int **)(param_2 + 0x10);
  if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
    cVar4 = ' ';
  }
  else {
    cVar4 = (iVar1 != 0x40b) + '8';
  }
  lVar2 = CRYPTO_memdup(*(longlong *)(param_2 + 0x28),cVar4,"crypto\\ec\\ecx_meth.c",0x87);
  if (lVar2 == 0) {
    uVar3 = CONCAT44(uVar7,0x89);
  }
  else {
    iVar1 = **(int **)(param_2 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = (iVar1 != 0x40b) + 0x38;
    }
    uVar3 = OBJ_nid2obj();
    uVar8 = (ulonglong)uVar5;
    lVar6 = lVar2;
    iVar1 = X509_PUBKEY_set0_param(param_1,uVar3,0xffffffff,0,lVar2,uVar8);
    uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(lVar2,"crypto\\ec\\ecx_meth.c",0x8f);
    uVar3 = CONCAT44(uVar7,0x90);
  }
  ERR_put_error(0x10,0x10c,0x41,"crypto\\ec\\ecx_meth.c",uVar3,uVar8);
  return 0;
}

// FUN_14f74cd60 @ 14f74cd60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74cd60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f74cd6c;
  iVar1 = X509_PUBKEY_get0_param(0,&local_res20,local_res18,&local_18,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_14f74de20(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,local_res18[0],0);
  return;
}

// FUN_14f74cdd0 @ 14f74cdd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f74cdd0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (iVar1 != 0x40b) + '8';
    }
    iVar1 = CRYPTO_memcmp(*(longlong *)(param_1 + 0x28),*(longlong *)(param_2 + 0x28),cVar2);
    return (ulonglong)(iVar1 == 0);
  }
  return 0xfffffffe;
}

// FUN_14f74ce50 @ 14f74ce50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f74ce50(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f74ce5c;
  uVar2 = PKCS8_pkey_get0(0,&local_res20,local_res18,&local_18,param_2);
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = d2i_ASN1_OCTET_STRING(0,&local_res20,local_res18[0]);
  if (lVar3 == 0) {
    local_res20 = 0;
    local_res18[0] = 0;
  }
  else {
    local_res20 = ASN1_STRING_get0_data(lVar3);
    local_res18[0] = ASN1_STRING_length(lVar3);
  }
  uVar1 = FUN_14f74de20(param_1,**(undefined4 **)(param_1 + 0x10),local_18,local_res20,
                        CONCAT44(uVar4,local_res18[0]),1);
  ASN1_STRING_clear_free(lVar3);
  return (ulonglong)uVar1;
}

// FUN_14f74cf10 @ 14f74cf10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74cf10(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  int local_28 [2];
  longlong local_20;
  undefined4 local_18;
  undefined8 uStack_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_10 = 0x14f74cf20;
  local_res10 = 0;
  if ((*(longlong *)(param_2 + 0x28) != 0) &&
     (local_20 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x40), local_20 != 0)) {
    iVar1 = **(int **)(param_2 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      local_28[0] = 0x20;
    }
    else {
      local_28[0] = (iVar1 != 0x40b) + 0x38;
    }
    local_18 = 0;
    iVar1 = i2d_ASN1_OCTET_STRING(local_28,&local_res10);
    if (iVar1 < 0) {
      uVar3 = CONCAT44(uVar4,0xd8);
    }
    else {
      uVar3 = OBJ_nid2obj(**(undefined4 **)(param_2 + 0x10));
      uVar4 = 0;
      iVar2 = PKCS8_pkey_set0(param_1,uVar3,0,0xffffffff,0,local_res10,iVar1);
      if (iVar2 != 0) {
        return 1;
      }
      CRYPTO_clear_free(local_res10,(longlong)iVar1,"crypto\\ec\\ecx_meth.c",0xde);
      uVar3 = CONCAT44(uVar4,0xdf);
    }
    ERR_put_error(0x10,0x10b,0x41,"crypto\\ec\\ecx_meth.c",uVar3);
    return 0;
  }
  ERR_put_error(0x10,0x10b,0x7b,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar4,0xce));
  return 0;
}

// FUN_14f74d140 @ 14f74d140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74d140(longlong param_1)

{
  int iVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      cVar2 = ' ';
    }
    else {
      cVar2 = (iVar1 != 0x40b) + '8';
    }
    CRYPTO_secure_clear_free
              (*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),cVar2,"crypto\\ec\\ecx_meth.c",
               0x102);
  }
  CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"crypto\\ec\\ecx_meth.c",0x103);
  return;
}

// FUN_14f74d1e0 @ 14f74d1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74d1e0(void)

{
  FUN_14f74e100();
  return;
}

// FUN_14f74d210 @ 14f74d210

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74d210(void)

{
  FUN_14f74e100();
  return;
}

// FUN_14f74d240 @ 14f74d240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f74d240(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f74d259;
  if (param_2 != 9) {
    if (param_2 != 10) {
      return -2;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar1 = **(int **)(param_1 + 0x10);
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        cVar3 = ' ';
      }
      else {
        cVar3 = (iVar1 != 0x40b) + '8';
      }
      lVar2 = CRYPTO_memdup(*(longlong *)(param_1 + 0x28),cVar3,"crypto\\ec\\ecx_meth.c",0x149);
      *param_4 = lVar2;
      if (lVar2 != 0) {
        iVar1 = **(int **)(param_1 + 0x10);
        if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
          return (iVar1 != 0x40b) + 0x38;
        }
        return 0x20;
      }
    }
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_4 != (longlong *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar4) {
      _Dst = (void *)CRYPTO_zalloc(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_4,(longlong)param_3);
        EVP_PKEY_assign(param_1,iVar1,_Dst);
        return 1;
      }
      uVar6 = 0x48;
      uVar5 = 0x41;
      goto LAB_14f74d3a2;
    }
  }
  uVar6 = 0x41;
  uVar5 = 0x66;
LAB_14f74d3a2:
  ERR_put_error(0x10,0x10a,uVar5,"crypto\\ec\\ecx_meth.c",uVar6,uVar7);
  return 0;
}

// FUN_14f74d400 @ 14f74d400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74d400(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14f74de20(param_1,**(undefined4 **)(param_1 + 0x10),0,param_2,param_3,1,0x14f74d40a);
  return;
}

// FUN_14f74d440 @ 14f74d440

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_14f74d440(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0x14f74d45b;
  iVar1 = **(int **)(param_1 + 0x10);
  if (param_2 != (void *)0x0) {
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = (iVar1 != 0x40b) + 0x38;
    }
    if (param_3 == iVar2) {
      _Dst = (void *)CRYPTO_zalloc(0x48,"crypto\\ec\\ecx_meth.c");
      if (_Dst == (void *)0x0) {
        ERR_put_error(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x48,uVar3);
        return 0;
      }
      memcpy(_Dst,param_2,(longlong)param_3);
      EVP_PKEY_assign(param_1,iVar1,_Dst);
      return 1;
    }
  }
  ERR_put_error(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",0x41,0x14f74d45b);
  return 0;
}

// FUN_14f74d560 @ 14f74d560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f74d560(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t _Size;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) != 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar3 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,*(void **)(lVar2 + 0x40),_Size);
      return 1;
    }
  }
  return 0;
}

// FUN_14f74d650 @ 14f74d650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f74d650(longlong param_1,void *param_2,ulonglong *param_3)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  size_t _Size;
  
  _Src = *(void **)(param_1 + 0x28);
  if (param_2 == (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
      *param_3 = (ulonglong)(iVar1 != 0x40b) + 0x38;
      return 1;
    }
    *param_3 = 0x20;
    return 1;
  }
  if (_Src != (void *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = (ulonglong)(iVar1 != 0x40b) + 0x38;
    }
    if (uVar2 <= *param_3) {
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        _Size = 0x20;
      }
      else {
        _Size = (ulonglong)(iVar1 != 0x40b) + 0x38;
      }
      *param_3 = _Size;
      memcpy(param_2,_Src,_Size);
      return 1;
    }
  }
  return 0;
}

// FUN_14f74d760 @ 14f74d760

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte FUN_14f74d760(undefined8 param_1)

{
  int iVar1;
  undefined8 in_stack_00000030;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18 [2];
  undefined8 local_10;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_10 = 0x14f74d76c;
  X509_ALGOR_get0(&local_10,local_18,0);
  iVar1 = OBJ_obj2nid(local_10);
  if ((iVar1 - 0x43fU < 2) && (local_18[0] == -1)) {
    iVar1 = EVP_DigestVerifyInit(param_1,0,0,0,in_stack_00000030);
    return -(iVar1 != 0) & 2;
  }
  ERR_put_error(0x10,0x10e,0x66,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar2,0x205));
  return 0;
}

// FUN_14f74d800 @ 14f74d800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74d800(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = OBJ_nid2obj(0x43f);
  X509_ALGOR_set0(in_R9,uVar1,0xffffffff,0);
  if (in_stack_00000028 != 0) {
    uVar1 = OBJ_nid2obj(0x43f);
    X509_ALGOR_set0(in_stack_00000028,uVar1,0xffffffff,0);
  }
  return 3;
}

// FUN_14f74d870 @ 14f74d870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74d870(undefined8 param_1)

{
  X509_SIG_INFO_set(param_1,0,0x43f,0x80,2);
  return 1;
}

// FUN_14f74d8b0 @ 14f74d8b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74d8b0(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  longlong in_stack_00000028;
  
  uVar1 = OBJ_nid2obj(0x440);
  X509_ALGOR_set0(in_R9,uVar1,0xffffffff,0);
  if (in_stack_00000028 != 0) {
    uVar1 = OBJ_nid2obj(0x440);
    X509_ALGOR_set0(in_stack_00000028,uVar1,0xffffffff,0);
  }
  return 3;
}

// FUN_14f74d920 @ 14f74d920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74d920(undefined8 param_1)

{
  X509_SIG_INFO_set(param_1,0,0x440,0xe0,2);
  return 1;
}

// FUN_14f74d960 @ 14f74d960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f74d960(undefined8 *param_1,undefined8 param_2)

{
  FUN_14f74de20(param_2,*(undefined4 *)*param_1,0,0,0,2,0x14f74d96a);
  return;
}

// FUN_14f74d9a0 @ 14f74d9a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74d9a0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x299;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29f;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 != 0) && (iVar2 = X25519(param_2), iVar2 == 0)) {
          return 0;
        }
        *param_3 = 0x20;
        return 1;
      }
      uVar4 = 0x2a3;
      uVar3 = 0x85;
    }
  }
  ERR_put_error(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x14f74d9ac);
  return 0;
}

// FUN_14f74da60 @ 14f74da60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74da60(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x299;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      uVar4 = 0x29f;
      uVar3 = 0x7b;
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0) {
        if ((param_2 != 0) && (iVar2 = X448(param_2), iVar2 == 0)) {
          return 0;
        }
        *param_3 = 0x38;
        return 1;
      }
      uVar4 = 0x2a3;
      uVar3 = 0x85;
    }
  }
  ERR_put_error(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4,0x14f74da6c);
  return 0;
}

// FUN_14f74db40 @ 14f74db40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f74db40(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar4 = 0x14f74db55;
  lVar2 = EVP_MD_CTX_pkey_ctx();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      ERR_put_error(0x10,0x114,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x2ed));
    }
    else {
      iVar1 = ED25519_sign(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),uVar4);
      if (iVar1 != 0) goto LAB_14f74dbcb;
    }
    return 0;
  }
LAB_14f74dbcb:
  *param_3 = 0x40;
  return 1;
}

// FUN_14f74dbf0 @ 14f74dbf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f74dbf0(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar4 = 0x14f74dc05;
  lVar2 = EVP_MD_CTX_pkey_ctx();
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28);
  if (param_2 != 0) {
    if (*param_3 < 0x72) {
      ERR_put_error(0x10,0x115,100,"crypto\\ec\\ecx_meth.c",CONCAT44(uVar3,0x302));
    }
    else {
      iVar1 = ED448_sign(param_2,param_4,param_5,lVar2,*(undefined8 *)(lVar2 + 0x40),0,0,uVar4);
      if (iVar1 != 0) goto LAB_14f74dc87;
    }
    return 0;
  }
LAB_14f74dc87:
  *param_3 = 0x72;
  return 1;
}

// FUN_14f74dcb0 @ 14f74dcb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f74dcb0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = EVP_MD_CTX_pkey_ctx();
  if (param_3 != 0x40) {
    return 0;
  }
  uVar2 = ED25519_verify(param_4,param_5,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28)
                        );
  return uVar2;
}

// FUN_14f74dd20 @ 14f74dd20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f74dd20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = EVP_MD_CTX_pkey_ctx();
  if (param_3 != 0x72) {
    return 0;
  }
  uVar2 = ED448_verify(param_4,param_5,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28),0
                       ,0);
  return uVar2;
}

// FUN_14f74dda0 @ 14f74dda0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f74dda0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f74ddac;
  if (param_2 == 1) {
    if (param_4 != 0) {
      lVar1 = EVP_md_null();
      if (param_4 != lVar1) {
        ERR_put_error(0x10,0x10f,0x8a,"crypto\\ec\\ecx_meth.c",0x32c,uVar2);
        return 0;
      }
    }
  }
  else if (param_2 != 7) {
    return 0xfffffffe;
  }
  return 1;
}

// FUN_14f74de20 @ 14f74de20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f74de20(undefined8 param_1,int param_2,longlong param_3,void *param_4,int param_5,int param_6)

{
  void *_Dst;
  byte *_Dst_00;
  size_t sVar1;
  size_t _Size;
  int iVar2;
  undefined4 uVar3;
  int local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x14f74de3f;
  iVar2 = 0x20;
  _Size = 0x20;
  if (param_6 != 2) {
    if ((param_3 != 0) && (X509_ALGOR_get0(0,local_28,0,param_3), local_28[0] != -1)) {
      uVar3 = 0x3b;
      goto LAB_14f74de88;
    }
    if (param_4 != (void *)0x0) {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        iVar2 = (param_2 != 0x40b) + 0x38;
      }
      if (param_5 == iVar2) goto LAB_14f74dedf;
    }
    uVar3 = 0x41;
LAB_14f74de88:
    ERR_put_error(0x10,0x10a,0x66,"crypto\\ec\\ecx_meth.c",uVar3);
    return 0;
  }
LAB_14f74dedf:
  _Dst = (void *)CRYPTO_zalloc(0x48,"crypto\\ec\\ecx_meth.c");
  if (_Dst == (void *)0x0) {
    ERR_put_error(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x48);
    return 0;
  }
  if (param_6 == 0) {
    memcpy(_Dst,param_4,(longlong)param_5);
  }
  else {
    sVar1 = _Size;
    if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
      sVar1 = (ulonglong)(param_2 != 0x40b) + 0x38;
    }
    _Dst_00 = (byte *)CRYPTO_secure_malloc(sVar1,"crypto\\ec\\ecx_meth.c",0x50);
    *(byte **)((longlong)_Dst + 0x40) = _Dst_00;
    if (_Dst_00 == (byte *)0x0) {
      ERR_put_error(0x10,0x10a,0x41,"crypto\\ec\\ecx_meth.c",0x52);
LAB_14f74e001:
      CRYPTO_free(_Dst,"crypto\\ec\\ecx_meth.c",0x79);
      return 0;
    }
    if (param_6 == 2) {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        _Size = (size_t)((param_2 != 0x40b) + 0x38);
      }
      iVar2 = RAND_priv_bytes(_Dst_00,_Size);
      if (iVar2 < 1) {
        CRYPTO_secure_free(_Dst_00,"crypto\\ec\\ecx_meth.c",0x57);
        *(undefined8 *)((longlong)_Dst + 0x40) = 0;
        goto LAB_14f74e001;
      }
      if (param_2 == 0x40a) {
        *_Dst_00 = *_Dst_00 & 0xf8;
        _Dst_00[0x1f] = _Dst_00[0x1f] & 0x3f;
        _Dst_00[0x1f] = _Dst_00[0x1f] | 0x40;
      }
      else if (param_2 == 0x40b) {
        *_Dst_00 = *_Dst_00 & 0xfc;
        _Dst_00[0x37] = _Dst_00[0x37] | 0x80;
      }
    }
    else {
      if ((param_2 != 0x40a) && (param_2 != 0x43f)) {
        _Size = (ulonglong)(param_2 != 0x40b) + 0x38;
      }
      memcpy(_Dst_00,param_4,_Size);
    }
    if (param_2 == 0x40a) {
      X25519_public_from_private(_Dst,_Dst_00);
    }
    else if (param_2 == 0x40b) {
      X448_public_from_private(_Dst,_Dst_00);
    }
    else if (param_2 == 0x43f) {
      ED25519_public_from_private(_Dst,_Dst_00);
    }
    else if (param_2 == 0x440) {
      ED448_public_from_private(_Dst,_Dst_00);
    }
  }
  EVP_PKEY_assign(param_1,param_2,_Dst);
  return 1;
}

// FUN_14f74e100 @ 14f74e100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f74e100(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f74e11e;
  lVar1 = *(longlong *)(param_2 + 0x28);
  uVar3 = OBJ_nid2ln(**(undefined4 **)(param_2 + 0x10));
  cVar4 = ' ';
  if (param_5 == 1) {
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x40) == 0)) {
      iVar2 = BIO_printf(param_1,"%*s<INVALID PRIVATE KEY>\n",param_3,"");
      return 0 < iVar2;
    }
    iVar2 = BIO_printf(param_1,"%*s%s Private-Key:\n",param_3,"",uVar3,uVar6);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = BIO_printf(param_1,"%*spriv:\n",param_3,"",uVar3,uVar6);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = **(int **)(param_2 + 0x10);
    cVar5 = cVar4;
    if ((iVar2 != 0x40a) && (iVar2 != 0x43f)) {
      cVar5 = (iVar2 != 0x40b) + '8';
    }
    iVar2 = ASN1_buf_print(param_1,*(undefined8 *)(lVar1 + 0x40),cVar5,param_3 + 4);
    if (iVar2 == 0) {
      return false;
    }
  }
  else {
    if (lVar1 == 0) {
      iVar2 = BIO_printf(param_1,"%*s<INVALID PUBLIC KEY>\n",param_3,"");
      return 0 < iVar2;
    }
    iVar2 = BIO_printf(param_1,"%*s%s Public-Key:\n",param_3,"",uVar3,uVar6);
    if (iVar2 < 1) {
      return false;
    }
  }
  iVar2 = BIO_printf(param_1,"%*spub:\n",param_3,"",uVar3,uVar6);
  if (iVar2 < 1) {
    return false;
  }
  iVar2 = **(int **)(param_2 + 0x10);
  if ((iVar2 != 0x40a) && (iVar2 != 0x43f)) {
    cVar4 = (iVar2 != 0x40b) + '8';
  }
  iVar2 = ASN1_buf_print(param_1,lVar1,cVar4,param_3 + 4);
  return iVar2 != 0;
}

// FUN_14f74e2c0 @ 14f74e2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14f74e2c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar4 = 0x299;
    uVar3 = 0x8c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 == 0)) {
      uVar4 = 0x29f;
      uVar3 = 0x7b;
    }
    else {
      if (lVar2 != 0) {
        *param_4 = lVar1;
        *param_5 = lVar2;
        return 1;
      }
      uVar4 = 0x2a3;
      uVar3 = 0x85;
    }
  }
  ERR_put_error(0x10,0x116,uVar3,"crypto\\ec\\ecx_meth.c",uVar4);
  return 0;
}

